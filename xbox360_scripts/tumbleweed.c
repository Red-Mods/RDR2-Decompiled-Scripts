//Decompiled with MagicRDR v1.0
//Function Count : 287
//Statics Count : 976
//Natives Count : 455
//Parameters Count : 2

#region Local Var
	struct<917> Local_0 = { 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0 } ;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	int iLocal_948 = 0;
	bool bLocal_949 = false;
	int iLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	int iLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	bool bLocal_956 = false;
	int iLocal_957 = 0;
	int iLocal_958[3] = { 0, 0, 0 };
	int iLocal_962 = 0;
	int iLocal_963 = 0;
	int iLocal_964 = 0;
	int iLocal_965 = 0;
	int iLocal_966 = 0;
	bool bLocal_967 = false;
	int iLocal_968 = 0;
	bool bLocal_969 = false;
	int iLocal_970 = 0;
	bool bLocal_971 = false;
	int iLocal_972 = 0;
	bool bLocal_973 = false;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	
	iLocal_500 = 0;
	bLocal_501 = false;
	bLocal_819 = false;
	iLocal_820 = 0;
	iLocal_835 = 0;
	iLocal_836 = 0;
	iLocal_957 = 0;
	iLocal_962 = 0;
	iLocal_963 = 0;
	iLocal_964 = 0;
	iLocal_965 = 1;
	iLocal_966 = 0;
	bLocal_967 = false;
	iLocal_968 = 0;
	bLocal_969 = false;
	iLocal_970 = 0;
	bLocal_971 = false;
	iLocal_972 = 0;
	iLocal_503 = 0;
	Local_504 = { StackVal, ScriptParam_0 };
	SET_DUST_LEVEL(3);
	bLocal_815 = Function_286(&(Global_29008[Local_504]));
	if (Function_285(14, 0))
	{
		Function_283(&iLocal_811, "$/fragments/p_gen_footlocker03x", 0, 1);
	}
	if (Function_285(13, 0) && !Function_285(14, 0))
	{
		bLocal_815 = false;
	}
	if (bLocal_815 && Function_282(&Global_6501, ScriptParam_0))
	{
		if (Function_281(8))
		{
			bLocal_819 = true;
			Function_280(8);
		}
	}
	Function_279("Initializing Tumbleweed", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_506 = 1000;
		switch (iLocal_503)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_503 = 1;
				}
				bLocal_506 = false;
				break;
			
			case 0x00000001:
				if (Function_278())
				{
					iLocal_503 = 2;
				}
				bLocal_506 = false;
				break;
			
			case 0x00000002:
				if (Function_276())
				{
					Function_275(&(Global_29008[Local_504]), 32);
					iLocal_503 = 3;
				}
				bLocal_506 = false;
				break;
			
			case 0x00000003:
				bLocal_507 = LAUNCH_NEW_SCRIPT_WITH_ARGS("TumbleweedVol", &Local_504, 2, 0);
				Function_274(&Global_6501, &Global_7490, ScriptParam_0);
				iLocal_503 = 5;
				if (Function_273() && Function_271())
				{
					bLocal_508 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Tumbleweed/TumbleweedMP", 0);
				}
				bLocal_506 = false;
				break;
			
			case 0x00000005:
				if (Function_270(&Global_6501, &Global_7490, ScriptParam_0))
				{
					iLocal_503 = 4;
					bLocal_506 = false;
				}
				else
				{
					bLocal_506 = 100;
				}
				break;
			
			case 0x00000004:
				bVar0 = true;
				if (Function_285(14, 0))
				{
					if (!Function_266(&iLocal_811))
					{
						bVar0 = false;
					}
				}
				if (bVar0)
				{
					if (Function_265(&(Global_29008[Local_504]), 16) && Function_264(Global_29155[ScriptParam_010]))
					{
						iLocal_503 = 6;
					}
				}
				bLocal_506 = false;
				break;
			
			case 0x00000006:
				if (((bLocal_815 && Function_281(2)) && Function_285(2, 0)) || (!Global_3365 && Function_281(2)))
				{
					Function_257(0, &uLocal_509, Local_0.f_540);
					Function_256(0, &uLocal_509, Local_0);
					Function_257(1, &uLocal_509, Local_0.f_544);
					Function_256(1, &uLocal_509, Local_0);
					Function_257(2, &uLocal_509, Local_0.f_552);
					Function_256(2, &uLocal_509, Local_0);
					Function_257(3, &uLocal_509, Local_0.f_556);
					Function_256(3, &uLocal_509, Local_0);
					Function_257(4, &uLocal_509, Local_0.f_560);
					Function_256(4, &uLocal_509, Local_0);
					Function_257(5, &uLocal_509, Local_0.f_564);
					Function_256(5, &uLocal_509, Local_0);
					Function_257(6, &uLocal_509, Local_0.f_548);
					Function_256(6, &uLocal_509, Local_0);
					Function_257(7, &uLocal_509, Local_0.f_568);
					Function_256(7, &uLocal_509, Local_0);
					Function_257(8, &uLocal_509, Local_0.f_512);
					Function_256(8, &uLocal_509, Local_0);
					Function_257(9, &uLocal_509, Local_0.f_516);
					Function_256(9, &uLocal_509, Local_0);
					Function_257(10, &uLocal_509, Local_0.f_520);
					Function_256(10, &uLocal_509, Local_0);
					Function_257(11, &uLocal_509, Local_0.f_524);
					Function_256(11, &uLocal_509, Local_0);
					Function_257(13, &uLocal_509, Local_0.f_532);
					Function_256(13, &uLocal_509, Local_0);
					Function_257(12, &uLocal_509, Local_0.f_528);
					Function_256(12, &uLocal_509, Local_0);
					Function_257(14, &uLocal_509, Local_0.f_536);
					Function_256(14, &uLocal_509, Local_0);
					Function_253(&Global_6501, &Global_7490, &uLocal_509, Global_6289, ScriptParam_0);
				}
				else
				{
					if (!bLocal_815)
					{
					}
					if (!Function_281(2))
					{
					}
					if (!Function_285(2, 0))
					{
					}
					Function_251(Global_30658[0], &Global_6501, &Global_7490, 1);
					bLocal_815 = false;
					iLocal_816 = 1;
				}
				if (Function_265(&(Global_29008[ScriptParam_0]), 256) || !Function_281(2))
				{
					iLocal_816 = 1;
				}
				Function_275(&(Global_29008[Local_504]), 8);
				iLocal_503 = 7;
				bLocal_506 = false;
				break;
			
			case 0x00000007:
				iLocal_503 = 8;
				bLocal_506 = false;
				break;
			
			case 0x00000008:
				if (Function_273())
				{
					Function_249(StackVal, 0, 0.0f, 3, Local_0, 1);
				}
				else
				{
					Function_249(StackVal, 1, 0,5f, 3, Local_0, 1);
				}
				Function_248(64);
				Function_244(2, 4294967295, 4294967295, 0, 3);
				Function_275(&(Global_29008[Local_504]), 512);
				iLocal_503 = 9;
				bLocal_506 = false;
				break;
			
			case 0x00000009:
				Function_242(Local_0, ScriptParam_0);
				Function_275(&(Global_29008[Local_504]), 4);
				Function_241("Finished Initializing Tumbleweed", 5.0f);
				iLocal_503 = 10;
				bLocal_506 = false;
				if (Function_285(14, 0))
				{
					bLocal_810 = CREATE_PROP_IN_LAYOUT(Global_30616, Function_240(), "p_gen_footLocker03x", -4098,537f, 40,58661f, 2948,58f, 0.0f, 59.0f, 0.0f, 1);
					PLAY_SIMPLE_PROP_ANIMATION(bLocal_810, "p_gen_footLocker03x_open", 0, 0, 1f, 0);
				}
				if (Function_265(&(Global_29008[Local_504]), 2048))
				{
					bLocal_815 = false;
				}
				if (bLocal_815 && !Function_239(Global_30658[0]))
				{
					if (Function_285(2, 0) || !Global_3365)
					{
						if ((((!Global_3380 && !Global_3382) && !Global_3384) && !Function_273()) && !Function_271())
						{
							Function_228(&ScriptParam_0);
						}
						else
						{
							bLocal_815 = false;
						}
					}
					else
					{
						bLocal_815 = false;
					}
				}
				else
				{
					if ((Function_239(Global_30658[0]) && !Global_3380) && !Global_63096)
					{
						if (!Function_273())
						{
							Function_227();
							Function_226("AA_GhostTown", 0, -1.0f, 1, 0, 0);
						}
					}
					bLocal_815 = false;
				}
				Function_224(&(Global_29008[Local_504]));
				break;
			
			case 0x0000000A:
				Function_221();
				if (bLocal_815)
				{
					bLocal_815 = Function_42();
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_506);
	}
	if (Function_285(14, 0))
	{
		Function_38(&iLocal_811);
	}
	if (IS_OBJECT_VALID(bLocal_810))
	{
		DESTROY_OBJECT(bLocal_810);
	}
	if (Function_37(Global_30737) == 2)
	{
		Function_27(Global_30737);
	}
	if (bLocal_815)
	{
		Function_20();
	}
	if (bLocal_819)
	{
		Function_18(8);
	}
	Function_16();
	Function_8(&Global_6501, &Global_7490, ScriptParam_0, iLocal_816);
	Function_7();
	Function_6();
	SET_DUST_LEVEL(2);
	Function_2(ScriptParam_0);
	Function_248(64);
	Function_1(&(Global_29008[Local_504]), 32);
	Function_1(&(Global_29008[Local_504]), 64);
	Function_1(&(Global_29008[Local_504]), 8);
	Function_1(&(Global_29008[Local_504]), 512);
	Function_1(&(Global_29008[Local_504]), 4);
	if (IS_SCRIPT_VALID(bLocal_508))
	{
		TERMINATE_SCRIPT(bLocal_508);
	}
	if (IS_SCRIPT_VALID(bLocal_507))
	{
		TERMINATE_SCRIPT(bLocal_507);
	}
	Function_241("Unloaded Tumbleweed", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x728 / 1832
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2(int iParam0) //Position: 0x73F / 1855
{
	int iVar0;
	
	if (!Function_5(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_3(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_3(int iParam0) //Position: 0x775 / 1909
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x797 / 1943
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x7AD / 1965
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x7C3 / 1987
{
	Function_38(&Local_230 + 4);
	RELEASE_LAYOUT_REF(Local_230);
	return;
}

void Function_7() //Position: 0x7D5 / 2005
{
	Function_38(&Local_0 + 4);
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_8(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x7E7 / 2023
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (StackVal != 5 && Function_273())
	{
		return;
	}
	if (Function_265(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(Function_15(iParam2), 12));
		Function_1(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (!Function_14(uParam0[iVar02], 1))
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_14(uParam0[iVar02], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
				Function_13(uParam0[iVar02], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_14(uParam0[iVar02], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_13(uParam0[iVar02], 16);
		}
		iVar0++;
	}
	if (!Function_265(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar1 = true;
	if (!Function_281(2) || Function_265(&(Global_29008[iParam2]), 256))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_14(uParam0[iVar02], 2) && !Function_14(uParam0[iVar02], 4))
		{
			Function_9(uParam0, uParam1, iVar0, bParam3);
		}
		if (bVar1)
		{
			if (Function_14(uParam0[iVar02], 2) && !Function_14(uParam0[iVar02], 4))
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
			Function_275(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_9(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x9D2 / 2514
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_12(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_11(Global_29007), Function_10(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_14(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_14(uParam0[iParam22], 1) && !bParam3)
	{
		Function_12(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_11(Global_29007), Function_10(Global_29007), false, 0);
	}
}

int Function_10(int iParam0) //Position: 0xB21 / 2849
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

int Function_11(int iParam0) //Position: 0xB4C / 2892
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

void Function_12(var uParam0, int iParam1) //Position: 0xB80 / 2944
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0xB8F / 2959
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_14(var uParam0, int iParam1) //Position: 0xBA6 / 2982
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_15(int iParam0) //Position: 0xBC2 / 3010
{
	if (!Function_5(iParam0))
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

void Function_16() //Position: 0x1070 / 4208
{
	if (IS_OBJECTSET_VALID(bLocal_502))
	{
		Function_17(bLocal_502);
		DESTROY_OBJECTSET(bLocal_502);
	}
	return;
}

void Function_17(bool bParam0) //Position: 0x108B / 4235
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

void Function_18(bool bParam0) //Position: 0x10D0 / 4304
{
	if (Function_19(bParam0, 1) && !Function_19(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_19(bool bParam0, bool bParam1) //Position: 0x10FD / 4349
{
	return (bParam0 && bParam1) == 0;
}

void Function_20() //Position: 0x110A / 4362
{
	int iVar0;
	
	if (!iLocal_965)
	{
		iLocal_965 = 1;
		if (Function_37(Global_30737) == 2)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_FLEEING", true, false, 2, 0, true, false);
			}
		}
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		if (DECOR_CHECK_EXIST(Global_34573, "TUM_MB_Running"))
		{
			DECOR_REMOVE(Global_34573, "TUM_MB_Running");
		}
		if (DECOR_CHECK_EXIST(Global_34573, "TUM_squadsDead"))
		{
			DECOR_REMOVE(Global_34573, "TUM_squadsDead");
		}
		if (DECOR_CHECK_EXIST(Global_34573, "ReadyForMansionGuys"))
		{
			DECOR_REMOVE(Global_34573, "ReadyForMansionGuys");
		}
		if (Function_37(Global_30737) == 2)
		{
			Function_27(Global_30737);
		}
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_SMALL_TEXT();
		REMOVE_JOURNAL_ENTRY(bLocal_949, false);
		if (IS_OBJECTSET_VALID(bLocal_858))
		{
			Function_17(bLocal_858);
			DESTROY_OBJECTSET(bLocal_858);
		}
		if (IS_OBJECT_VALID(bLocal_852))
		{
			DESTROY_OBJECT(bLocal_852);
		}
		if (IS_OBJECT_VALID(bLocal_853))
		{
			DESTROY_OBJECT(bLocal_853);
		}
		if (IS_OBJECT_VALID(bLocal_854))
		{
			RELEASE_OBJECT_REF(bLocal_854);
			DESTROY_OBJECT(bLocal_854);
		}
		if (IS_OBJECTSET_VALID(bLocal_859))
		{
			Function_17(bLocal_859);
			DESTROY_OBJECTSET(bLocal_859);
		}
		if (IS_OBJECTSET_VALID(bLocal_860))
		{
			Function_17(bLocal_860);
			DESTROY_OBJECTSET(bLocal_860);
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (SQUAD_IS_VALID(uLocal_843[iVar0]))
			{
				SQUAD_GOALS_CLEAR(uLocal_843[iVar0]);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 14)
		{
			Function_25(&Global_6501, &Global_7490, iVar0, 0);
			iVar0++;
		}
		if (SQUAD_IS_VALID(uLocal_843[2]))
		{
			DESTROY_OBJECT(uLocal_843[2]);
		}
		if (SQUAD_IS_VALID(uLocal_843[1]))
		{
			DESTROY_OBJECT(uLocal_843[1]);
		}
		if (SQUAD_IS_VALID(uLocal_843[0]))
		{
			DESTROY_OBJECT(uLocal_843[0]);
		}
		if (DECOR_CHECK_EXIST(Global_34573, "TUM_FTE_Running"))
		{
			DECOR_REMOVE(Global_34573, "TUM_FTE_Running");
		}
		if (DECOR_CHECK_EXIST(Global_34573, "shakehands_noCam"))
		{
			DECOR_REMOVE(Global_34573, "shakehands_noCam");
		}
		if (IS_BLIP_VALID(Local_914[011].f_12))
		{
			REMOVE_BLIP(Local_914[011].f_12);
		}
		if (IS_BLIP_VALID(Local_914[111].f_12))
		{
			REMOVE_BLIP(Local_914[111].f_12);
		}
		if (IS_BLIP_VALID(Local_914[211].f_12))
		{
			REMOVE_BLIP(Local_914[211].f_12);
		}
		if (SQUAD_IS_VALID(Local_914[011].f_16))
		{
			Function_23(&Local_914[011] + 16, 0, 0);
		}
		if (SQUAD_IS_VALID(Local_914[111].f_16))
		{
			Function_23(&Local_914[111] + 16, 0, 0);
		}
		if (SQUAD_IS_VALID(Local_914[211].f_16))
		{
			Function_23(&Local_914[211] + 16, 0, 0);
		}
		if (IS_OBJECT_VALID(bLocal_849))
		{
			DESTROY_OBJECT(bLocal_849);
		}
		SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
		if (DECOR_CHECK_EXIST(Global_34573, "TUM_FTE_Running"))
		{
			DECOR_REMOVE(Global_34573, "TUM_FTE_Running");
		}
		if (DECOR_CHECK_EXIST(Global_34573, "TUM_SheriffFreed"))
		{
			DECOR_REMOVE(Global_34573, "TUM_SheriffFreed");
		}
		if (DECOR_CHECK_EXIST(Global_34573, "TUM_MBScript_Running"))
		{
			DECOR_REMOVE(Global_34573, "TUM_MBScript_Running");
		}
		if (DECOR_CHECK_EXIST(Global_34573, "TUM_SheriffTalking"))
		{
			DECOR_REMOVE(Global_34573, "TUM_SheriffTalking");
		}
		if (DECOR_CHECK_EXIST(Global_34573, "SheriffLeft"))
		{
			DECOR_REMOVE(Global_34573, "SheriffLeft");
		}
		if (DECOR_CHECK_EXIST(Global_34573, "SheriffDied"))
		{
			DECOR_REMOVE(Global_34573, "SheriffDied");
		}
		Function_38(&bLocal_868);
		Function_21(32768);
		if (IS_LAYOUTREF_VALID(bLocal_848))
		{
			RELEASE_LAYOUT_REF(bLocal_848);
		}
	}
	return;
}

void Function_21(int iParam0) //Position: 0x1573 / 5491
{
	Function_22(&Global_28842, iParam0);
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x1581 / 5505
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_23(var uParam0, bool bParam1, bool bParam2) //Position: 0x159C / 5532
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
				if (!Function_24(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_24(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1618 / 5656
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_25(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1632 / 5682
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_14(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_14(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_14(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_13(uParam0[iVar02], 8);
	}
	Function_13(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_26(StackVal);
	if (bParam3)
	{
		Function_9(uParam0, uParam1, iParam2, 0);
	}
}

int Function_26(bool bParam0) //Position: 0x16CC / 5836
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			DEREFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_27(int iParam0) //Position: 0x1766 / 5990
{
	var uVar0;
	
	if (!Function_35(iParam0))
	{
		Function_33();
		return;
	}
	uVar0 = Function_32(iParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_28("DEED_CANCEL", iParam0);
	}
	Global_13172[iParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_28(char* cParam0, bool bParam1) //Position: 0x17B9 / 6073
{
	struct<4> Var0;
	
	if (!Function_35(bParam1))
	{
		return;
	}
	switch (Function_32(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_29(Function_30(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_32(bParam1), Function_30(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_32(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_32(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_32(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_32(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_32(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_29(int iParam0) //Position: 0x18DD / 6365
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_30(bool bParam0) //Position: 0x1902 / 6402
{
	if (!Function_31(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_31(int iParam0) //Position: 0x1922 / 6434
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_32(bool bParam0) //Position: 0x1939 / 6457
{
	if (!Function_31(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_33() //Position: 0x1954 / 6484
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_30842[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_16474)
	{
		iVar0 = 0;
		while (StackVal <= iVar0)
		{
			strcpy(&cVar2, "Deed Count by Status:", 64);
			switch (iVar1)
			{
				case 0x00000000:
					stradd(&cVar2, "Pending,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "Active,", 64);
					break;
				
				case 0x00000001:
					stradd(&cVar2, "About to Start,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "Completed,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "Completed (Cheated),", 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			switch (iVar0)
			{
				case 0x00000001:
					stradd(&cVar2, "StoryMission,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "ProcMission,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "LocationMission,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "nMinigame,", 64);
					break;
				
				case 0x00000006:
					stradd(&cVar2, "Job,", 64);
					break;
				
				default:
					straddi(&cVar2, iVar0, 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			straddi(&cVar2, Global_16474[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_34(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
			strcpy(&cVar2, "Deed:", 64);
			straddi(&cVar2, iVar0, 64);
			stradd(&cVar2, "n Mission ", 64);
			straddi(&cVar2, iVar19, 64);
			stradd(&cVar2, "  Quad ", 64);
			straddi(&cVar2, iVar18, 64);
			stradd(&cVar2, "  Type ", 64);
			straddi(&cVar2, iVar20, 64);
			stradd(&cVar2, "n  Status ", 64);
			straddi(&cVar2, StackVal, 64);
		}
		iVar0++;
	}
	return;
}

void Function_34(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1B9B / 7067
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

bool Function_35(int iParam0) //Position: 0x1BC4 / 7108
{
	if (!Function_31(iParam0))
	{
		return 0;
	}
	if (!Function_36(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_36(int iParam0) //Position: 0x1BE8 / 7144
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_37(int iParam0) //Position: 0x1BFD / 7165
{
	if (!Function_35(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_38(int iParam0) //Position: 0x1C17 / 7191
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_39(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_39(var uParam0, int iParam1) //Position: 0x1C3D / 7229
{
	if (Function_41(uParam0[iParam13], 4))
	{
		if (Function_41(uParam0[iParam13], 1))
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
			Function_40(uParam0[iParam13], 1);
			Function_40(uParam0[iParam13], 2);
			Function_40(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_40(var uParam0, int iParam1) //Position: 0x1D6B / 7531
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_41(int iParam0, int iParam1) //Position: 0x1D85 / 7557
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_42() //Position: 0x1DA2 / 7586
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	var uVar8;
	
	if (!Function_220(&iLocal_855))
	{
		Function_20();
		return 0;
	}
	switch (iLocal_867)
	{
		case 0x00000000:
			if (Function_266(&bLocal_868))
			{
				iLocal_867 = 1;
			}
			break;
		
		case 0x00000001:
			Function_219(Local_0.f_740);
			vVar0 = { StackVal, StackVal, Function_219(Local_0.f_740) };
			Function_212(&bLocal_848, &uLocal_843, &bLocal_973, &bLocal_849, &iLocal_958, &bLocal_847);
			Function_209(&Local_914);
			Function_204(&bLocal_848, &bLocal_852, &bLocal_853, &bLocal_854, iLocal_948, &bLocal_859, &bLocal_860, &uLocal_850, &uLocal_851);
			Function_203(uLocal_861[0], 0);
			Function_203(uLocal_861[1], 0);
			Function_203(uLocal_861[2], 0);
			Function_203(uLocal_861[3], 0);
			DECOR_SET_BOOL(Global_34573, "shakehands_noCam", true);
			iLocal_867 = 2;
			break;
		
		case 0x00000002:
			if (Function_202(&bLocal_848, &bLocal_858))
			{
				bLocal_866 = CREATE_VOLUME_SET_IN_LAYOUT(bLocal_848, "vMansionGuysStayIn");
				ADD_TO_VOLUME_SET(bLocal_866, Local_0.f_116);
				ADD_TO_VOLUME_SET(bLocal_866, Local_0.f_144);
				bLocal_842 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TUM_FTE_Layout"), "TUM_FTE_Helper");
				iLocal_867 = 3;
			}
			break;
		
		case 0x00000003:
			Function_200("sc_challenge_aa_07", &iLocal_950);
			Function_198(&uLocal_843);
			if (!iLocal_963)
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_140))
				{
					if (SQUAD_GET_SIZE(bLocal_847) == 1)
					{
						Function_197();
						iLocal_963 = 1;
					}
				}
			}
			if (!iLocal_962)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(uLocal_843[0]) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_847) != 0)
				{
					DECOR_SET_BOOL(Global_34573, "SheriffReady", true);
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_196("TUM_ClearHouse", 0x40f00000, 1, 2, 0, 0, 0);
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(bLocal_949, 0);
					APPEND_JOURNAL_ENTRY_DETAIL(bLocal_949, "TUM_ClearHouse", 0, 0, false);
					APPEND_JOURNAL_ENTRY(bLocal_949, 0);
					if (!Function_195(uLocal_843[1], 1))
					{
						Function_194(uLocal_843[1], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					if (!Function_195(uLocal_843[2], 1))
					{
						Function_194(uLocal_843[2], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
					iLocal_962 = 1;
				}
			}
			Function_191(-3896,095f, 30,923f, 2936,247f, 0, 0);
			Function_191(-3968,798f, 28,355f, 2955,643f, 0, 0);
			Function_191(-3992,052f, 28,623f, 2959,601f, 0, 0);
			Function_191(-3964,968f, 27,743f, 2912,366f, 0, 0);
			Function_191(-3986,764f, 27,701f, 2913,683f, 0, 0);
			Function_190(&uLocal_843, &iLocal_958, &bLocal_847);
			Function_188(&uLocal_843, &bLocal_973, &iLocal_957, &bLocal_949);
			if (iLocal_957 && !Function_19(bLocal_973, 0x4000000))
			{
				Function_187(&bLocal_973, 0x4000000);
				Function_186(uLocal_843[0], Global_34573, 4);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(uLocal_843[0], 0);
				Function_185(uLocal_843[0]);
				SQUAD_GOALS_CLEAR(uLocal_843[0]);
				Function_184(uLocal_843[0], -1.0f);
			}
			if (DECOR_CHECK_EXIST(Global_34573, "ReadyForMansionGuys"))
			{
				if (Function_19(bLocal_973, 65536))
				{
					if (!iLocal_964)
					{
						if (IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_152))
						{
							if (IS_ACTOR_VALID(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TUM_FTE_Layout"), "TUM_FTE_Helper")))
							{
								if (IS_ACTOR_ALIVE(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TUM_FTE_Layout"), "TUM_FTE_Helper")))
								{
									Function_181();
									iLocal_964 = 1;
								}
							}
						}
					}
				}
				if (!iLocal_966)
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_160))
					{
						AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
						iLocal_966 = 1;
					}
				}
				if (!Function_19(bLocal_973, 16))
				{
					bVar3 = false;
					while (bVar3 < (SQUAD_GET_SIZE(uLocal_843[1]) - 1))
					{
						if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(uLocal_843[1], bVar3)))
						{
							if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(SQUAD_GET_ACTOR_BY_INDEX(uLocal_843[1], bVar3), 1.0f) || Function_179(Global_34573, uLocal_843[1], 1, 1, 1, 25.0f))
							{
								Function_186(uLocal_843[1], Global_34573, 4);
								Function_186(uLocal_843[1], bLocal_842, 4);
								Function_178(uLocal_843[1], Global_34573);
								Function_178(uLocal_843[1], bLocal_842);
								Function_187(&bLocal_973, 16);
							}
						}
						bVar3++;
					}
				}
				if (Function_179(Global_34573, uLocal_843[1], 1, 1, 1, 50.0f))
				{
					if (!iLocal_958[1])
					{
						Function_186(uLocal_843[1], Global_34573, 4);
						Function_194(uLocal_843[1], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						Function_177(uLocal_843[1], 0);
						iLocal_958[1] = 1;
					}
				}
				if (Function_179(Global_34573, uLocal_843[2], 1, 1, 1, 50.0f))
				{
					if (!iLocal_958[2])
					{
						Function_186(uLocal_843[2], Global_34573, 4);
						Function_194(uLocal_843[2], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						Function_177(uLocal_843[2], 0);
						iLocal_958[2] = 1;
					}
				}
				bVar4 = false;
				while (bVar4 < (SQUAD_GET_SIZE(uLocal_843[1]) - 1))
				{
					if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(uLocal_843[1], bVar4)))
					{
						if (IS_ACTOR_SHOOTING(SQUAD_GET_ACTOR_BY_INDEX(uLocal_843[1], bVar4)))
						{
							if (!iLocal_958[1])
							{
								Function_194(uLocal_843[1], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
								Function_177(uLocal_843[1], 0);
								iLocal_958[1] = 1;
							}
						}
					}
					bVar4++;
				}
			}
			if (Function_173(&uLocal_843, &uLocal_861, &bLocal_973, &bLocal_847, &bLocal_866) && !Function_19(bLocal_973, 0x2000000))
			{
				Function_186(uLocal_843[1], Global_34573, 4);
				Function_186(uLocal_843[1], bLocal_842, 4);
				Function_178(uLocal_843[1], Global_34573);
				Function_178(uLocal_843[1], bLocal_842);
				Function_187(&bLocal_973, 0x2000000);
			}
			if (Function_19(bLocal_973, 65536))
			{
				if (DECOR_CHECK_EXIST(Global_34573, "TUM_FTE_TriggerBlips"))
				{
					DECOR_REMOVE(Global_34573, "TUM_FTE_TriggerBlips");
					Function_187(&bLocal_973, 2097152);
				}
				if (Function_19(bLocal_973, 2097152))
				{
					Function_169(&Local_914, &bLocal_973, &iLocal_958, &bLocal_847);
				}
			}
			if (!UNK_0x4417C9F2("$/content/Frontier/Gaptooth_Ridge/Tumbleweed/ActionArea/Tumbleweed_FTE"))
			{
				Function_168(&bLocal_973, 65536);
			}
			if (Function_167(&uLocal_843, &bLocal_847))
			{
				if (DECOR_CHECK_EXIST(Global_34573, "PlayerReturn") && !Function_19(bLocal_973, 0x8000000))
				{
					if (DECOR_CHECK_EXIST(Global_34573, "SheriffNoTie"))
					{
						DECOR_REMOVE(Global_34573, "SheriffNoTie");
					}
					Function_165(Function_166(1, 1, 1, 0, 0), 1);
					Function_161(200, 1, 0);
					Function_148(50, 1, 0);
					SET_WEAPONENUM_LOCKED(9, 0);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 9, false, 1, 1);
					Function_146(9, 0, 1);
					TASK_CLEAR(Global_34573);
					if (HUD_IS_SHOWING_HELP_TEXT())
					{
						HUD_CLEAR_HELP();
						HUD_CLEAR_HELP_QUEUE();
					}
					Function_145(Global_30737, 0);
					if (Function_144(&iLocal_950))
					{
						bLocal_956 = Function_142(&iLocal_950);
					}
					if (Function_144(&iLocal_950))
					{
						if (Function_141(461) < 0.0f)
						{
							if (bLocal_956 > Function_141(461))
							{
								Function_140(461, bLocal_956, 0);
							}
						}
						else
						{
							Function_140(461, bLocal_956, 0);
						}
					}
					AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
					Function_109(Global_30737);
					Function_72(Global_30737, 1, 1, 0);
					if (Function_71(Global_30741) > 1)
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(13))
						{
							AWARD_ACHIEVEMENT(13);
						}
					}
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("TumbleweedJournalID"), 0);
					APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("TumbleweedJournalID"), 1);
					Function_187(&bLocal_973, 0x8000000);
					iLocal_867 = 4;
				}
			}
			if ((!Function_19(bLocal_973, 65536) || DECOR_CHECK_EXIST(Global_34573, "SheriffLeft")) || DECOR_CHECK_EXIST(Global_34573, "SheriffDied"))
			{
				if (Function_167(&uLocal_843, &bLocal_847))
				{
					if (!Function_144(&iLocal_953))
					{
						Function_70(&iLocal_953);
						if (DECOR_CHECK_EXIST(Global_34573, "SheriffNoTie"))
						{
							DECOR_REMOVE(Global_34573, "SheriffNoTie");
						}
						if (DECOR_CHECK_EXIST(Global_34573, "SheriffLeft"))
						{
							DECOR_REMOVE(Global_34573, "SheriffLeft");
						}
						if (DECOR_CHECK_EXIST(Global_34573, "SheriffDied"))
						{
							DECOR_REMOVE(Global_34573, "SheriffDied");
						}
						if (HUD_IS_SHOWING_HELP_TEXT())
						{
							HUD_CLEAR_HELP();
							HUD_CLEAR_HELP_QUEUE();
						}
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						bLocal_971 = true;
					}
				}
			}
			if (bLocal_971)
			{
				if (!bLocal_969)
				{
					if (Function_144(&iLocal_953))
					{
						if (Function_142(&iLocal_953) < 2.0f)
						{
							Function_67(1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1);
							UI_PUSH("CutsceneWithMessages");
							Function_63(bLocal_848, 0, 1, 0, 0);
							Function_61(&iLocal_953);
							bLocal_969 = true;
						}
					}
				}
			}
			if (bLocal_971)
			{
				if (!iLocal_970)
				{
					if (Function_144(&iLocal_953))
					{
						if (Function_142(&iLocal_953) < 3.0f)
						{
							PRINT_BIG("TUM_PrintBig", 1084227584, 0, 2, 0);
							SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 0.0f, -119,4231f, 0.0f, 0);
							iLocal_970 = 1;
						}
					}
				}
			}
			if (!iLocal_972)
			{
				if (Function_144(&iLocal_953))
				{
					if (Function_142(&iLocal_953) < 9.0f)
					{
						Function_219(Local_0.f_804);
						vVar5 = { StackVal, StackVal, Function_219(Local_0.f_804) };
						TELEPORT_ACTOR_WITH_HEADING(Global_34573, vVar5, -119,423f, 0, false, 0);
						iLocal_972 = 1;
					}
				}
			}
			if (bLocal_971)
			{
				if (!iLocal_968)
				{
					if (bLocal_969)
					{
						if (Function_144(&iLocal_953))
						{
							if (Function_142(&iLocal_953) < 11.0f)
							{
								Function_44(2, 1, 1, 1, 1, 1, 0, 1, 0, 1);
								UI_POP("CutsceneWithMessages");
								Function_165(Function_166(1, 1, 1, 0, 0), 1);
								Function_161(200, 1, 0);
								Function_148(50, 1, 0);
								Function_146(9, 0, 1);
								Function_145(Global_30737, 0);
								if (Function_144(&iLocal_950))
								{
									bLocal_956 = Function_142(&iLocal_950);
								}
								if (Function_144(&iLocal_950))
								{
									if (Function_141(461) < 0.0f)
									{
										if (bLocal_956 > Function_141(461))
										{
											Function_140(461, bLocal_956, 0);
										}
									}
									else
									{
										Function_140(461, bLocal_956, 0);
									}
								}
								AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
								Function_109(Global_30737);
								Function_72(Global_30737, 1, 1, 0);
								if (Function_71(Global_30741) > 1)
								{
									if (!HAS_ACHIEVEMENT_BEEN_PASSED(13))
									{
										AWARD_ACHIEVEMENT(13);
									}
								}
								CLEAR_JOURNAL_ENTRY_DETAIL_LIST(bLocal_949, 0);
								APPEND_JOURNAL_ENTRY(bLocal_949, 1);
								iLocal_867 = 4;
								iLocal_968 = 1;
							}
						}
					}
				}
			}
			if (Function_19(bLocal_973, 65536))
			{
				uVar8 = "";
				if ((!Function_19(bLocal_973, 0x40000000) && IS_ACTOR_MOUNTED(Global_34573)) && Function_43(&uVar8))
				{
					Function_187(&bLocal_973, 0x40000000);
					Function_226("TUM_HelperNoHorse_Help", 0, -1.0f, 1, 0, 0);
				}
			}
			break;
		
		case 0x00000004:
			Function_20();
			return 0;
			break;
	}
	return 1;
}

int Function_43(bool bParam0) //Position: 0x297B / 10619
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = FIND_NAMED_LAYOUT("TUM_FTE_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		return 0;
	}
	bVar1 = FIND_ACTOR_IN_LAYOUT(bVar0, "TUM_FTE_Helper");
	if (IS_ACTOR_VALID(bVar1))
	{
		if (IS_ACTOR_HOGTIED(bVar1))
		{
			return 0;
		}
		if (!IS_ACTOR_ALIVE(bVar1))
		{
			return 0;
		}
		*bParam0 = bVar1;
		return 1;
	}
	return 0;
}

void Function_44(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9) //Position: 0x29DF / 10719
{
	bool bVar0;
	
	bParam1 = bParam1;
	if (bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		bVar0 = Function_60();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bParam2)
			{
				TASK_CLEAR(bVar0);
			}
			if (!bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, false);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, true);
				}
			}
			if (Function_273())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar0) || IS_ACTOR_USING_LEDGE(bVar0)))
				{
					ACTOR_END_FORCE_HOLSTER(bVar0);
					if (iParam0 != 0 || (iParam0 != 2 && Global_76850))
					{
						ACTOR_DRAW_LAST_WEAPON(bVar0, 0);
					}
				}
			}
			else
			{
				ACTOR_END_FORCE_HOLSTER(bVar0);
			}
			SET_ACTOR_INVULNERABILITY(bVar0, false);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_47(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_46();
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_45(uParam9);
}

void Function_45(bool bParam0) //Position: 0x2ACF / 10959
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_63096 = 0;
	Global_63097 = 0;
	if (IS_VOLUME_VALID(Global_63117))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
	}
	return;
}

void Function_46() //Position: 0x2B74 / 11124
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_47(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x2B89 / 11145
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
	Function_59(iParam0, TO_FLOAT(bParam1), 1);
	Function_58(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_48(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_48(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2DA9 / 11689
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_57(390))), 32);
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
					bVar19 = (Function_141(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_141(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_55(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_52(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_50(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_49(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_240(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_49(int iParam0) //Position: 0x33D6 / 13270
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_50(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x33E7 / 13287
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_51("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_51("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_51("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_51(char* cParam0, char* cParam1) //Position: 0x34DC / 13532
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_52(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x34F5 / 13557
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_54(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_53(Function_54(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_53(int iParam0, int iParam1) //Position: 0x355A / 13658
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_54(int iParam0, bool bParam1) //Position: 0x356C / 13676
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_55(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x357E / 13694
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
	if (((Function_56(iParam0) != 19 || Function_56(iParam0) != 17) || Function_56(iParam0) != 10) || Function_56(iParam0) != 9)
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

int Function_56(int iParam0) //Position: 0x36AE / 13998
{
	return Global_35278[iParam020].f_48;
}

var Function_57(int iParam0) //Position: 0x36BD / 14013
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_58(int iParam0) //Position: 0x36FA / 14074
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

int Function_59(int iParam0, bool bParam1, bool bParam2) //Position: 0x3894 / 14484
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
		Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
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

var Function_60() //Position: 0x3AAE / 15022
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_61(int iParam0) //Position: 0x3AC3 / 15043
{
	Function_62(iParam0, 0.0f);
	return;
}

void Function_62(var uParam0, float fParam1) //Position: 0x3ACF / 15055
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_187(uParam0, 1);
	Function_168(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

var Function_63(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x3AF0 / 15088
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_240(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nTUM_Vista", 2, 1);
	}
	Function_64(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_64(int iParam0) //Position: 0x3B65 / 15205
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_66(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_65(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 10.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 1.0f, 1);
	return;
}

void Function_65(int iParam0) //Position: 0x3BA8 / 15272
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 54,2553f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4093,846f, 38,63215f, 2958,991f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,046475f, -1,482859f, 0,000139f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_66(bool bParam0) //Position: 0x3C16 / 15382
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 54,2553f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -4098,284f, 38,84961f, 2959,969f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,094726f, -1,477717f, 0,000139f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

void Function_67(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x3C84 / 15492
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	uParam1 = uParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(false);
	Function_46();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_60();
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_WEAPON_IN_HAND(bVar1) != 4294967295)
			{
				Global_76850 = 1;
			}
			else
			{
				Global_76850 = 0;
			}
			if (bParam3)
			{
				TASK_CLEAR(bVar1);
			}
			if (bParam11)
			{
				bVar2 = GET_ATTACHED_HOGTIE_VICTIM(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					FREE_FROM_HOGTIE(bVar2);
					HOGTIE_ACTOR(bVar2);
				}
			}
			if (Function_273())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar1) || IS_ACTOR_USING_LEDGE(bVar1)))
				{
					if (bParam0)
					{
						ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
					}
					if (bParam2)
					{
						SET_PLAYER_POSTURE(0, 0, 0);
						TASK_OVERRIDE_SET_POSTURE(bVar1, false);
					}
				}
			}
			else
			{
				if (bParam0)
				{
					ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
				}
				if (bParam2)
				{
					SET_PLAYER_POSTURE(0, 0, 0);
					TASK_OVERRIDE_SET_POSTURE(bVar1, false);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, true);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (bParam8)
		{
			if (IS_VOLUME_VALID(bParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(bParam7);
				DELETE_PROJECTILES_IN_VOLUME(bParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_69(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_240(), 2, Function_69(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_47(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (bParam10)
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_68()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_68()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, true);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(Global_34573));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_63096 = 1;
	Global_63116 = GET_THIS_SCRIPT_ID();
	Global_63117 = "";
	if (IS_VOLUME_VALID(bVar0))
	{
		DESTROY_VOLUME(bVar0);
	}
	if (Function_281(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_280(0x4000000);
	}
	if (Function_281(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_280(0x8000000);
	}
}

var Function_68() //Position: 0x3F2D / 16173
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 42);
		if (IS_OBJECT_VALID(bVar2))
		{
			while (IS_OBJECT_VALID(bVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(bVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(bVar2), "bino_camera"))
				{
					return bVar2;
				}
				bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return "";
}

vector3 Function_69(bool bParam0) //Position: 0x3FAC / 16300
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_70(int iParam0) //Position: 0x3FBD / 16317
{
	if (!Function_144(iParam0))
	{
		Function_62(iParam0, 0.0f);
	}
	return;
}

int Function_71(bool bParam0) //Position: 0x3FD2 / 16338
{
	if (!Function_31(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_72(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3FEC / 16364
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_35(bParam0))
	{
		Function_33();
		return;
	}
	iVar0 = Function_32(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_30(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_108(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_107(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_101();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_28("DEED_COMPLETE", bParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[bParam011].f_4 = 4;
		}
		else
		{
			Global_13172[bParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[bParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_98(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (iVar0)
				{
					case 0x00000001:
						iVar13 = 4;
						break;
					
					case 0x00000004:
						iVar13 = 3;
						break;
					
					case 0x00000006:
						iVar13 = 2;
						break;
					
					case 0x00000002:
						switch (Function_30(bParam0))
						{
							case 0x00000000:
								iVar13 = 1;
								break;
							
							default:
								iVar13 = 0;
								break;
						}
						break;
					
					case 0x00000003:
						iVar13 = 10;
						break;
					}
			}
			Function_75(1);
			Function_74(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_73(bParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_6269;
		Var14.f_20 = bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 44, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_3376 = 1;
}

void Function_73(int iParam0, int iParam1) //Position: 0x41FE / 16894
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_74(bool bParam0, int iParam1) //Position: 0x4238 / 16952
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_273())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_75(bool bParam0) //Position: 0x427A / 17018
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_91();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_76();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_168(&Global_63095, 1);
		Function_168(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_76() //Position: 0x42CB / 17099
{
	Function_89();
	Function_88();
	Function_88();
	Function_87();
	Function_87();
	Function_86();
	Function_86();
	Function_83();
	Function_83();
	if (!Function_273())
	{
		Function_81();
		Function_80();
		Function_79();
		Function_78();
	}
	Function_77();
	return;
}

void Function_77() //Position: 0x42FE / 17150
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

void Function_78() //Position: 0x4404 / 17412
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

void Function_79() //Position: 0x4437 / 17463
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = bVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_80() //Position: 0x45C5 / 17861
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = bVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_81() //Position: 0x4779 / 18297
{
	Function_82(&Global_28260, 1, 0);
	return;
}

void Function_82(int iParam0, bool bParam1, var uParam2) //Position: 0x4787 / 18311
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
	void fVar11;
	bool bVar12;
	void fVar13;
	
	bVar0 = Function_60();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || uParam2)
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
			fVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = fVar11;
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
		fVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (fVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, fVar13);
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

struct<8> Function_83() //Position: 0x4978 / 18808
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
				iVar2 = ((Function_85((50 + iVar4)) + Function_85((183 + iVar4))) + Function_85((90 + iVar4)));
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
	Function_84(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_84(int iParam0, bool bParam1, bool bParam2) //Position: 0x4A13 / 18963
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
		Function_59(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_58(iParam0);
	if (bParam2)
	{
		Function_48(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_85(bool bParam0) //Position: 0x4CAE / 19630
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_86() //Position: 0x4CEF / 19695
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
		iVar2 = ((Function_85((50 + iVar3) + 15) + Function_85((183 + iVar3) + 15)) + Function_85((90 + iVar3) + 15));
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
	Function_84(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_87() //Position: 0x4D78 / 19832
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
			iVar2 = ((Function_85((50 + iVar3) + 8) + Function_85((183 + iVar3) + 8)) + Function_85((90 + iVar3) + 8));
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
	Function_84(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_88() //Position: 0x4E0F / 19983
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
		iVar2 = ((Function_85((50 + iVar3)) + Function_85((183 + iVar3))) + Function_85((90 + iVar3)));
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
	Function_84(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_89() //Position: 0x4E8E / 20110
{
	Function_90(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_84(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_90(int iParam0, bool bParam1, int iParam2) //Position: 0x4EB4 / 20148
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
	Function_59(iParam0, bParam1, 1);
	Function_58(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_48(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_91() //Position: 0x50BE / 20670
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_93(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_93(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_92(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0,5f);
		FIND_GROUND_INTERSECTION(&vVar0, 100.0f, &Global_34165, &uVar3);
	}
	else
	{
		Global_34165 = { StackVal, StackVal, vVar0 };
	}
	Global_34165.f_156 = Global_34165.f_12;
	*(&Global_34165 + 144) = { StackVal, StackVal, Global_34165 };
	Global_34165.f_160 = Global_34165.f_16;
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_92(vector3 vParam0) //Position: 0x515F / 20831
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_93(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5177 / 20855
{
	int iVar0;
	
	iVar0 = Function_96(uParam2, uParam3);
	if (Function_95(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_187(&Global_63095, 1);
			Function_168(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_187(&Global_63095, 2);
			Function_168(&Global_63095, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				*uParam1 = 0;
			}
			else
			{
				*uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			*uParam0 = 89,88f;
			return -2158,348f, 19,944f, 2597,452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_187(&Global_63095, 2);
		Function_168(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_94();
	return StackVal, StackVal, Function_94();
}

vector3 Function_94() //Position: 0x525E / 21086
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_95(int iParam0) //Position: 0x5267 / 21095
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_96(bool bParam0, bool bParam1) //Position: 0x527D / 21117
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	bVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_97(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					bVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_97(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_95(bVar0) && !bParam1)
	{
		bVar0 = Function_96(bParam0, 1);
	}
	return bVar0;
}

float Function_97(vector3 vParam0, vector3 vParam3) //Position: 0x5344 / 21316
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_98(bool bParam0) //Position: 0x5361 / 21345
{
	int iVar0;
	int iVar1;
	
	if (!Function_31(bParam0))
	{
		return;
	}
	switch (Function_32(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_30(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_47(12, 1, 0, 0);
				Function_100(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_47(13, 1, 0, 0);
				Function_100(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_47(14, 1, 0, 0);
				Function_100(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_47(15, 1, 0, 0);
				Function_100(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_47(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_30(bParam0))
			{
				case 0x00000000:
					if (Function_71(bParam0) == 1)
					{
						iVar0 = Function_99(bParam0);
						if (Function_5(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_100(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_100(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_100(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_100(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_100(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_100(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_100(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_100(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_100(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_100(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_100(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_100(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_100(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_100(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_100(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_100(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_100(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_100(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_100(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_100(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_29155[iVar010];
							}
							else
							{
								iVar0 = Global_29155[iVar010];
								iVar0 = Global_29155[iVar010];
							}
							if (iVar0 == Global_30621[0])
							{
								Function_47(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_47(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_47(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_99(bParam0) == 0)
			{
				if (Function_71(bParam0) == 1)
				{
					Function_47(458, 1, 0, 0);
					iVar0 = Function_30(bParam0);
					if (Function_5(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_100(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_100(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_100(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_100(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_100(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_100(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_100(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_100(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_71(bParam0) == 1)
			{
				Function_47(400, 1, 0, 0);
			}
			switch (Function_30(bParam0))
			{
				case 0x00000001:
					Function_47(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_100(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_100(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_100(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_47(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_100(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_100(6, 9);
					}
					break;
				
				default:
					LOG_ERROR("Please insure this job case is taken care of and create a null case");
					break;
			}
			break;
	}
	return;
}

int Function_99(bool bParam0) //Position: 0x583D / 22589
{
	if (!Function_31(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

void Function_100(int iParam0, bool bParam1) //Position: 0x585C / 22620
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

void Function_101() //Position: 0x58C3 / 22723
{
	int iVar0;
	int iVar1;
	
	if (!Function_106(Global_6269))
	{
		return;
	}
	iVar0 = Function_85(24);
	iVar1 = Function_105(Global_6269);
	if (!Function_106(iVar0) && Function_104(iVar1) < 0)
	{
		Function_84(24, Global_6269, 0);
		Function_102(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_104(Function_105(iVar0)))
	{
		Function_84(24, Global_6269, 0);
		Function_102(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_102(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x5943 / 22851
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_35278[iParam020] + 16, bParam1, 32);
	if (bParam2)
	{
		uVar1 = Global_35278[iParam020].f_76;
		Function_103(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_103(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x5C95 / 23701
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, false, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

int Function_104(int iParam0) //Position: 0x5D18 / 23832
{
	if (!Function_35(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_105(int iParam0) //Position: 0x5D32 / 23858
{
	if (!Function_106(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_106(int iParam0) //Position: 0x5D4C / 23884
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_107(int iParam0) //Position: 0x5D62 / 23906
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_108(char* cParam0) //Position: 0x5D8C / 23948
{
	char* cVar0[24];
	
	strcpy(&cVar0, "Mission_", 24);
	switch (cParam0)
	{
		case 0x00000000:
		case 0x00000001:
			stradd(&cVar0, "Intro", 24);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000016:
			stradd(&cVar0, "Ranch", 24);
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x00000015:
		case 0x00000017:
			stradd(&cVar0, "Marshal", 24);
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
			stradd(&cVar0, "Merchant", 24);
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			stradd(&cVar0, "Grave", 24);
			break;
		
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
			stradd(&cVar0, "Outlaws", 24);
			break;
		
		case 0x00000018:
		case 0x00000019:
			stradd(&cVar0, "Fort", 24);
			break;
		
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x00000024:
			stradd(&cVar0, "MexArmy", 24);
			break;
		
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
			stradd(&cVar0, "Gun", 24);
			break;
		
		case 0x00000022:
		case 0x00000023:
		case 0x00000026:
		case 0x00000027:
			stradd(&cVar0, "MexGirl", 24);
			break;
		
		case 0x00000025:
		case 0x00000028:
		case 0x00000029:
			stradd(&cVar0, "Rebel", 24);
			break;
		
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			stradd(&cVar0, "Anthro", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002F:
		case 0x00000030:
			stradd(&cVar0, "FBI", 24);
			break;
		
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
			stradd(&cVar0, "Home", 24);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_109(bool bParam0) //Position: 0x5FE2 / 24546
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (Function_30(bParam0) == Global_30640[2])
	{
		if (Function_139(2) && !Function_138(2))
		{
			Function_131(2, 2, 0, 0, 1);
		}
	}
	if (Function_30(bParam0) == Global_30658[3])
	{
		if (Function_139(6) && !Function_138(6))
		{
			Function_131(6, 16, 0, 0, 1);
		}
	}
	if (!Function_139(10) || Function_138(10))
	{
		return;
	}
	bVar0 = MAKE_TIME_OF_DAY_EX((GET_DAY(false) - 1), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
	bVar1 = GET_TIME_OF_DAY();
	iVar2 = Function_71(Global_30734);
	if (Global_30734 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_71(Global_30736);
	if (Global_30736 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_71(Global_30738);
	if (Global_30738 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_71(Global_30737);
	if (Global_30737 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_71(Global_30739);
	if (Global_30739 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073611].f_36, bVar0, bVar1) && !Global_30736 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073411].f_36, bVar0, bVar1) && !Global_30734 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073811].f_36, bVar0, bVar1) && !Global_30738 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073711].f_36, bVar0, bVar1) && !Global_30737 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073911].f_36, bVar0, bVar1) && !Global_30739 != bParam0)
	{
		return;
	}
	Function_110(10, 0, 1);
	return;
}

void Function_110(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6189 / 24969
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_130(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_138(bParam0))
	{
		if (!Function_139(bParam0))
		{
			Function_114(bParam0, 1, 0, 0);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_27774[bParam013].f_48 != 4294967295 || (Global_27774[bParam013].f_48 != 0 && Global_27774[bParam013].f_28 < 0))
		{
			Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_27774[bParam013].f_48);
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, false, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_47(457, 1, 0, 0);
		Function_113(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_112(0, 0, 1, 1))
			{
				Function_75(1);
				Function_74(1, 0);
			}
			else
			{
				Function_111();
			}
		}
	}
	return;
}

void Function_111() //Position: 0x6327 / 25383
{
	return;
}

bool Function_112(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x632D / 25389
{
	iParam0 = iParam0;
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
	if (Global_3393 && iParam2)
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
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_113(bool bParam0, int iParam1) //Position: 0x63D1 / 25553
{
	if (!Function_130(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

void Function_114(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6426 / 25638
{
	struct<8> Var0;
	
	if (!Function_130(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_129(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_139(bParam0))
	{
		Function_47(456, 1, 0, 0);
		Function_113(bParam0, 2);
		if (bParam2)
		{
			if (!Function_112(0, 0, 1, 1))
			{
				Function_75(1);
				Function_74(1, 5);
			}
			else
			{
				Function_111();
			}
		}
		Function_123(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_122() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_122() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_121(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_120(Global_76846, 2))
		{
			Function_115(Global_34573, 2, 1, 0);
		}
	}
}

void Function_115(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x6570 / 25968
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_117(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_116(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_116(char* cParam0, int iParam1) //Position: 0x65DC / 26076
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

bool Function_117(bool bParam0, var uParam1, int iParam2) //Position: 0x6613 / 26131
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
		if (Function_119(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_118(uVar0))
		{
			case 0x00000002:
				if (!Function_120(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_118(char* cParam0) //Position: 0x668B / 26251
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

int Function_119(int iParam0) //Position: 0x672C / 26412
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_168(&iVar1, 2147483648);
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

bool Function_120(int iParam0, int iParam1) //Position: 0x6769 / 26473
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_121(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x677C / 26492
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

bool Function_122() //Position: 0x67C7 / 26567
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_123(bool bParam0) //Position: 0x67F4 / 26612
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 1))
	{
		Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 0);
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_127(bParam0, Function_128(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_127(bParam0, Function_128(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_126(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_125(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_124(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_124(int iParam0) //Position: 0x69A4 / 27044
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_130(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		iVar1 = iVar1;
		if ((StackVal && iVar0) == 0)
		{
			return iVar1 + 1;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2 + 1;
}

void Function_125(bool bParam0, bool bParam1) //Position: 0x69FB / 27131
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(bParam0);
	REMOVE_JOURNAL_ENTRY(bParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(bParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(bParam0);
	}
	return;
}

var Function_126(int iParam0) //Position: 0x6A20 / 27168
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_130(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) >= 0)
		{
			iVar2++;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2;
}

bool Function_127(bool bParam0, bool bParam1) //Position: 0x6A76 / 27254
{
	int iVar0;
	
	if (!Function_130(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_128(bool bParam0) //Position: 0x6AD5 / 27349
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_129(int iParam0) //Position: 0x6AE1 / 27361
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_130(int iParam0) //Position: 0x6AFD / 27389
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x6B13 / 27411
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_130(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_129(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_137(bParam0, 2))
	{
		Function_47(456, 1, 0, 0);
		Function_113(bParam0, 2);
		if (!bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_121(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_127(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_113(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_112(0, 0, 1, 1))
			{
				Function_75(1);
				Function_74(1, 0);
			}
			else
			{
				Function_111();
			}
		}
		Function_123(bParam0);
		if (StackVal && !Function_19(((((!Function_122() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_19((((Function_122() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_120(Global_76846, 2))
		{
			Function_115(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_133();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_132(3, bParam1);
				break;
			
			case 0x00000005:
				Function_132(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_132(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_132(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_132(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_132(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_100(2, 24);
				break;
			
			case 0x00000003:
				Function_100(2, 25);
				break;
			
			case 0x0000000F:
				Function_100(2, 26);
				break;
			
			case 0x0000000D:
				Function_100(2, 27);
				break;
			
			case 0x0000000E:
				Function_100(2, 28);
				break;
			}
	}
}

void Function_132(int iParam0, bool bParam1) //Position: 0x6DA2 / 28066
{
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	return;
	return;
}

void Function_133() //Position: 0x6E01 / 28161
{
	if (Function_130(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_136(Global_28180);
			Global_28180.f_8 = Function_134(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_136(Global_28180);
			Global_28180.f_8 = Function_134(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_134(int iParam0, int iParam1) //Position: 0x6E7C / 28284
{
	vector3 vVar0;
	struct<9> Var3;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	iVar18 = 1;
	iVar19 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_285(6, 0) || Function_285(12, 0))
					{
						bVar6 = StackVal;
					}
					strcpy(&cVar7, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -2177,057f, 16,426f, 2626,285f };
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_135(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_285(5, 0))
					{
						vVar0 = { -4120,147f, 18,356f, 3039,531f };
						vVar3 = { 500.0f, 500.0f, 500.0f };
						iVar16 = 0;
					}
					strcpy(&cVar7, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -4178,186f, 32,616f, 4582,207f };
					vVar3 = { 500.0f, 500.0f, 500.0f };
					strcpy(&cVar7, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_135(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_135(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_135(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_135(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_285(26, 0))
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_135(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_135(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_135(27) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_135(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_135(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_135(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_135(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_285(17, 0) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					strcpy(&cVar7, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_135(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_285(6, 0) && Function_135(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_135(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_285(9, 0) && Function_135(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_135(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_285(8, 0) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					strcpy(&cVar7, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_92(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_92(StackVal, StackVal, vVar3))
			{
				if (GET_OBJECT_TYPE(bVar6) == 9)
				{
					GET_VOLUME_SCALE(bVar6, &vVar3);
				}
				else
				{
					vVar3 = { 200.0f, 200.0f, 200.0f };
				}
			}
		}
	}
	if (!Function_92(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_135(int iParam0) //Position: 0x7A6D / 31341
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_136(int iParam0) //Position: 0x7A82 / 31362
{
	int iVar0;
	int iVar1;
	
	if (!Function_130(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) == 0)
		{
			return iVar0;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return 0;
}

bool Function_137(int iParam0, int iParam1) //Position: 0x7AD1 / 31441
{
	int iVar0;
	
	if (!Function_130(iParam0))
	{
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_138(int iParam0) //Position: 0x7AFE / 31486
{
	if (!Function_130(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_137(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_139(int iParam0) //Position: 0x7B4F / 31567
{
	if (!Function_130(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_137(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_140(int iParam0, bool bParam1, bool bParam2) //Position: 0x7BA1 / 31649
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > bParam1)
	{
		Function_59(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_58(iParam0);
	if (bParam2)
	{
		Function_48(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

float Function_141(int iParam0) //Position: 0x7E0D / 32269
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_142(int iParam0) //Position: 0x7E46 / 32326
{
	if (Function_144(iParam0))
	{
		if (Function_143(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_143(int iParam0) //Position: 0x7F0E / 32526
{
	return Function_19(*iParam0, 2);
}

bool Function_144(int iParam0) //Position: 0x7F1B / 32539
{
	return Function_19(*iParam0, 1);
}

void Function_145(int iParam0, int iParam1) //Position: 0x7F28 / 32552
{
	if (!Function_35(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

int Function_146(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7F43 / 32579
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_147(bParam0), Function_60()) == 0)
		{
			ADD_ITEM(Function_147(bParam0), Function_60(), bParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_147(bParam0), Function_60(), bParam2);
	return 1;
}

var Function_147(bool bParam0) //Position: 0x7F8E / 32654
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return bVar0;
}

void Function_148(int iParam0, bool bParam1, bool bParam2) //Position: 0x8082 / 32898
{
	int iVar0;
	bool bVar1;
	
	if (Function_160(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_85(3);
	Function_157();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_155(3, bVar1);
		if (!bParam2)
		{
			if (!Function_120(Global_76848, 4))
			{
				Function_115(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_47(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_141(3));
	iVar0 = Function_85(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_150(4, Function_154(Global_12976.f_156), 1);
				Function_149(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_150(4, Function_154(Global_12976.f_156), 1);
				Function_149(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_150(4, Function_154(Global_12976.f_156), 1);
				Function_149(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_150(4, Function_154(Global_12976.f_156), 1);
				Function_149(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_150(4, Function_154(Global_12976.f_156), 1);
				Function_149(Global_12976.f_152, Global_12976.f_156);
				if (Global_12976.f_152 != 6 || Global_12976.f_152 != 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000005:
			break;
	}
	return;
}

void Function_149(int iParam0, int iParam1) //Position: 0x8245 / 33349
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, true);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, true);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, true);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, false);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_150(int iParam0, char* cParam1, bool bParam2) //Position: 0x84A3 / 33955
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_102(iParam0, cParam1, 0, 1);
	iVar1 = Function_151();
	Global_49199[iVar1] = 0.0f;
	strcpy(&Global_49205[iVar120] + 16, cParam1, 32);
	strcpy(&Global_49205[iVar120] + 8, "QME=", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	if (bParam2)
	{
		Global_49205[iVar120].f_72 = 5;
	}
	else
	{
		Global_49205[iVar120].f_72 = 6;
	}
	return 1;
}

int Function_151() //Position: 0x8628 / 34344
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_48 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_152();
	return 0;
}

void Function_152() //Position: 0x86C7 / 34503
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_49199 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_49199[iVar0] = Global_49199[iVar1];
		Global_49205[iVar020] = { StackVal, Global_49205[iVar120] };
		*(&Global_49205[iVar020] + 8) = { StackVal, *(&Global_49205[iVar120] + 8) };
		*(&Global_49205[iVar020] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_49205[iVar120] + 16) };
		Global_49205[iVar020].f_48 = Global_49205[iVar120].f_48;
		Global_49205[iVar020].f_68 = Global_49205[iVar120].f_68;
		Global_49205[iVar020].f_72 = Global_49205[iVar120].f_72;
		Function_153(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_153(int iParam0) //Position: 0x8776 / 34678
{
	Global_49199[iParam0] = 0.0f;
	strcpy(&(Global_49205[iParam020]), "", 8);
	strcpy(&Global_49205[iParam020] + 8, "", 8);
	strcpy(&Global_49205[iParam020] + 16, "", 32);
	Global_49205[iParam020].f_48 = 4294967295;
	Global_49205[iParam020].f_52 = 4294967295;
	Global_49205[iParam020].f_68 = 4294967295;
	Global_49205[iParam020].f_72 = 4294967295;
	return;
}

var Function_154(int iParam0) //Position: 0x87D4 / 34772
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_ntr1";
			break;
		
		case 0x00000001:
			return "sr_ntr2";
			break;
		
		case 0x00000002:
			return "sr_ntr3";
			break;
		
		case 0x00000003:
			return "sr_ntr4";
			break;
		
		case 0x00000004:
			return "sr_ntr5";
			break;
		
		case 0x00000005:
			return "sr_ntr6";
			break;
	}
	return "sr_ntr1";
}

int Function_155(int iParam0, bool bParam1) //Position: 0x8863 / 34915
{
	bool bVar0;
	int iVar1;
	
	Function_47(iParam0, bParam1, 0, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_156(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_151();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_156(int iParam0, int iParam1) //Position: 0x8A00 / 35328
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_68 == iParam0)
		{
			if (iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_157() //Position: 0x8A41 / 35393
{
	Function_159(3, 0.0f);
	Function_158(3, 10000.0f);
	return;
}

int Function_158(int iParam0, int iParam1) //Position: 0x8A57 / 35415
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_159(int iParam0, int iParam1) //Position: 0x8A97 / 35479
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_160(int iParam0) //Position: 0x8AD7 / 35543
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_161(int iParam0, bool bParam1, bool bParam2) //Position: 0x8AE6 / 35558
{
	int iVar0;
	bool bVar1;
	
	if (Function_160(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_85(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_155(1, bVar1);
			if (!bParam2)
			{
				if (!Function_120(Global_76848, 1))
				{
					Function_115(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_164(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_120(Global_76848, 2))
				{
					Function_115(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_47(1, bVar1, 0, 0);
	}
	else
	{
		Function_163(1, (4294967295 * bVar1), 0);
	}
	if (Function_85(1) <= 4294962296)
	{
		Function_84(1, 4294962296, 0);
	}
	else if (Function_85(1) >= 5000)
	{
		Function_84(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_141(1));
	iVar0 = Function_85(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_150(2, Function_162(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_150(2, Function_162(Global_12976.f_152), 0);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_12976.f_152 = 2;
				Function_150(2, Function_162(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_150(2, Function_162(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_150(2, Function_162(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", Global_34573))
			{
				DELETE_ITEM("HONOR_ROSARY", Global_34573, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_12976.f_152 = 2;
				Function_150(2, Function_162(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_150(2, Function_162(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_150(2, Function_162(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_150(2, Function_162(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_150(2, Function_162(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_150(2, Function_162(Global_12976.f_152), 1);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000006:
			if (iVar0 < 4500)
			{
				Global_12976.f_152 = 5;
				Function_150(2, Function_162(Global_12976.f_152), 0);
			}
			break;
	}
	Function_149(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_162(int iParam0) //Position: 0x8DFB / 36347
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_hnr7";
			break;
		
		case 0x00000001:
			return "sr_hnr6";
			break;
		
		case 0x00000002:
			return "sr_hnr5";
			break;
		
		case 0x00000003:
			return "sr_hnr4";
			break;
		
		case 0x00000004:
			return "sr_hnr3";
			break;
		
		case 0x00000005:
			return "sr_hnr2";
			break;
		
		case 0x00000006:
			return "sr_hnr1";
			break;
	}
	return "sr_hnr4";
}

int Function_163(int iParam0, bool bParam1, int iParam2) //Position: 0x8E9E / 36510
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
	Function_58(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_48(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_164(int iParam0, bool bParam1) //Position: 0x9099 / 37017
{
	bool bVar0;
	int iVar1;
	
	Function_163(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_156(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_151();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_165(bool bParam0, bool bParam1) //Position: 0x9235 / 37429
{
	bool bVar0;
	
	bVar0 = Function_85(0);
	if ((Function_85(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_47(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_85(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_47(597, bParam0, 0, 0);
	}
	if ((Function_85(597) + Function_85(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

bool Function_166(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9300 / 37632
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			bVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			bVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (iParam1)
	{
		case 0x00000000:
			bVar0 = (bVar0 * 0,75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1,25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0,75f);
			break;
	}
	if (bParam2)
	{
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_85(5)) / 100.0f) * 0,5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_147(17), Global_34573))
		{
			bVar0 = (bVar0 * 1,2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1,1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

bool Function_167(var uParam0, bool bParam1) //Position: 0x9402 / 37890
{
	if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS((*uParam0)[0]) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS((*uParam0)[1]) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS((*uParam0)[2]) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(*bParam1) != 0)
	{
		DECOR_SET_BOOL(Global_34573, "TUM_squadsDead", true);
		if (!iLocal_820)
		{
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			iLocal_820 = 1;
		}
		return 1;
	}
	return 0;
}

void Function_168(int iParam0, bool bParam1) //Position: 0x946C / 37996
{
	*iParam0 = (*iParam0 - (*iParam0 && bParam1));
	return;
}

void Function_169(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x947F / 38015
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!uParam0[iVar111]->f_28)
		{
			if (IS_VOLUME_VALID(uParam0[iVar111]->f_20))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, uParam0[iVar111]->f_20))
				{
					if (uParam0[iVar111]->f_32)
					{
						uParam0[iVar111]->f_32 = 0;
					}
					bVar0 = true;
					if (!uParam0[iVar111]->f_36 && !(*uParam2)[iVar1])
					{
						uParam0[iVar111]->f_36 = 1;
						Function_194(uParam0[iVar111]->f_16, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						Function_177(uParam0[iVar111]->f_16, 0);
						Function_194(*uParam3, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						Function_177(*uParam3, 0);
						(*uParam2)[iVar1] = 1;
					}
				}
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(uParam0[iVar111]->f_16) == 0)
			{
				uParam0[iVar111]->f_28 = 1;
				uParam0[iVar111]->f_32 = 0;
				if (IS_BLIP_VALID(uParam0[iVar111]->f_12))
				{
					REMOVE_BLIP(uParam0[iVar111]->f_12);
				}
			}
		}
		iVar1++;
	}
	if (!Function_19(*iParam1, 1048576))
	{
		if (uParam0[011]->f_28 && !uParam0[111]->f_28)
		{
			if (!uParam0[111]->f_32)
			{
				uVar2 = "";
				Function_187(iParam1, 1048576);
			}
		}
	}
	if ((Function_19(*iParam1, 1048576) && !Function_122()) && !Function_19(*iParam1, 8388608))
	{
		uParam0[111]->f_32 = 1;
		uParam0[111]->f_40 = 1;
		Function_187(iParam1, 8388608);
	}
	if (bVar0)
	{
		Function_172(uParam0);
	}
	else
	{
		Function_170(uParam0, uParam2);
	}
}

void Function_170(var uParam0, int iParam1) //Position: 0x960A / 38410
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!uParam0[111]->f_40)
		{
			if (!iVar0 != 1 && !uParam0[iVar011]->f_28)
			{
				if (!IS_BLIP_VALID(uParam0[iVar011]->f_12))
				{
					uParam0[iVar011]->f_12 = ADD_BLIP_FOR_COORD(uParam0[iVar011], 322, 0, 2, 0);
					uParam0[iVar011]->f_32 = 1;
					uParam0[iVar011]->f_36 = 0;
					Function_171(uParam0[iVar011]->f_16);
					(*iParam1)[iVar0] = 0;
				}
			}
		}
		else if (!uParam0[iVar011]->f_28)
		{
			if (!IS_BLIP_VALID(uParam0[iVar011]->f_12))
			{
				uParam0[iVar011]->f_12 = ADD_BLIP_FOR_COORD(uParam0[iVar011], 322, 0, 2, 0);
				uParam0[iVar011]->f_32 = 1;
				uParam0[iVar011]->f_36 = 0;
				Function_171(uParam0[iVar011]->f_16);
				(*iParam1)[iVar0] = 0;
			}
		}
		iVar0++;
	}
	return;
}

void Function_171(bool bParam0) //Position: 0x96E2 / 38626
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
			}
		}
		bVar0++;
	}
	return;
}

void Function_172(int iParam0) //Position: 0x972F / 38703
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!iParam0[111]->f_40)
		{
			if (!iVar0 != 1)
			{
				if (IS_BLIP_VALID(iParam0[iVar011]->f_12))
				{
					REMOVE_BLIP(iParam0[iVar011]->f_12);
					iParam0[iVar011]->f_32 = 0;
				}
			}
		}
		else if (IS_BLIP_VALID(iParam0[iVar011]->f_12))
		{
			REMOVE_BLIP(iParam0[iVar011]->f_12);
			iParam0[iVar011]->f_32 = 0;
		}
		iVar0++;
	}
	return;
}

int Function_173(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4) //Position: 0x97A1 / 38817
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS((*uParam0)[0]) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(*uParam3) != 0)
	{
		if (!Function_19(*iParam2, 0x10000000))
		{
			Function_176((*uParam1)[0], 0);
			Function_176((*uParam1)[1], 0);
			Function_176((*uParam1)[2], 0);
			Function_176((*uParam1)[3], 0);
			SQUAD_GOALS_CLEAR((*uParam0)[1]);
			Function_185((*uParam0)[1]);
			Function_175((*uParam0)[1]);
			SQUAD_SET_FACTION((*uParam0)[1], 19);
			SQUAD_SET_FACTION((*uParam0)[2], 19);
			Function_174((*uParam0)[1], 1);
			Function_186((*uParam0)[1], Global_34573, 4);
			Function_178((*uParam0)[1], Global_34573);
			DECOR_SET_BOOL(Global_34573, "ReadyForMansionGuys", true);
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE((*uParam0)[1]) - 1))
			{
				if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX((*uParam0)[1], bVar0)))
				{
					MEMORY_REPORT_POSITION_AUTO(SQUAD_GET_ACTOR_BY_INDEX((*uParam0)[1], bVar0), Global_34573, true);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(SQUAD_GET_ACTOR_BY_INDEX((*uParam0)[1], bVar0), 0);
				}
				bVar0++;
			}
			bVar1 = false;
			while (bVar1 < (SQUAD_GET_SIZE((*uParam0)[2]) - 1))
			{
				if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX((*uParam0)[2], bVar1)))
				{
					MEMORY_REPORT_POSITION_AUTO(SQUAD_GET_ACTOR_BY_INDEX((*uParam0)[2], bVar1), Global_34573, true);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(SQUAD_GET_ACTOR_BY_INDEX((*uParam0)[2], bVar1), 0);
				}
				bVar1++;
			}
			SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME((*uParam0)[1], false, *uParam4, 4, 1);
			SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME((*uParam0)[1], 1, Local_0.f_68, 4, 1);
			Function_184((*uParam0)[1], -1.0f);
			SQUAD_GOALS_CLEAR((*uParam0)[2]);
			Function_185((*uParam0)[2]);
			Function_174((*uParam0)[2], 1);
			Function_186((*uParam0)[2], Global_34573, 4);
			Function_178((*uParam0)[2], Global_34573);
			Function_184((*uParam0)[2], -1.0f);
			Function_187(iParam2, 0x10000000);
			return 1;
		}
	}
	return 0;
}

void Function_174(bool bParam0, int iParam1) //Position: 0x9960 / 39264
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_175(bool bParam0) //Position: 0x99A1 / 39329
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = GET_OBJECT_FROM_SQUAD(bParam0);
	if (IS_OBJECT_VALID(bVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_176(bool bParam0, bool bParam1) //Position: 0x99E8 / 39400
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "lockMe"))
	{
		DECOR_REMOVE(bParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 0);
	}
	return;
}

void Function_177(bool bParam0, bool bParam1) //Position: 0x9A39 / 39481
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar1 = false;
		while (bVar1 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
			if (IS_ACTOR_VALID(bVar0))
			{
				HUD_SET_SHOOT_BLIP_ENABLED_FOR_ACTOR(bVar0, bParam1);
			}
			bVar1++;
		}
	}
	else
	{
		LOG_ERROR("HUD_SET_SHOOT_BLIP_ENABLED_FOR_SQUAD got invalid squad");
	}
	return;
}

void Function_178(bool bParam0, bool bParam1) //Position: 0x9AB6 / 39606
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_IDENTIFY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_179(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, float fParam5) //Position: 0x9B08 / 39688
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (Function_180(bParam0, bVar1, iParam2, iParam3, iParam4, fParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_180(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x9B68 / 39784
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (bParam0 == bParam1)
	{
		LOG_ERROR("IS_ACTOR_AGGROING_ACTOR got the same actor twice!");
		return 0;
	}
	if (bParam2)
	{
		if (GET_LAST_ATTACKER(bParam1) == bParam0)
		{
			CLEAR_LAST_HIT(bParam1);
			return 1;
		}
	}
	if (bParam3)
	{
		if (bParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam5))
			{
				if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
				{
					return 1;
				}
			}
		}
		if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
		{
			return 1;
		}
	}
	if (bParam4)
	{
		if (bParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam5))
			{
				if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
				{
					return 1;
				}
			}
		}
		if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_181() //Position: 0x9C55 / 40021
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Tumblew_CorralYellsPlayer", "Tumblew_CorralYellsPlayer", false, 3, 1, 0, 1);
		Function_182(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_182(int iParam0) //Position: 0x9CB0 / 40112
{
	Function_183(0, Global_34573, iParam0, 0);
	Function_183(1, bLocal_817, iParam0, 0);
	Function_183(2, bLocal_818, iParam0, 0);
	return;
}

void Function_183(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x9CD4 / 40148
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_19(uParam2, Function_128(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_184(bool bParam0, bool bParam1) //Position: 0x9CF9 / 40185
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = GET_OBJECT_FROM_SQUAD(bParam0);
	if (IS_OBJECT_VALID(bVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_185(bool bParam0) //Position: 0x9D42 / 40258
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_186(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9D74 / 40308
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_CONSIDER_AS(bVar1, bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_187(bool bParam0, bool bParam1) //Position: 0x9DB9 / 40377
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

void Function_188(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x9DC8 / 40392
{
	bool bVar0;
	
	if (!Function_19(*iParam1, 4))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE((*uParam0)[0]) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX((*uParam0)[0], bVar0)))
			{
				if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(SQUAD_GET_ACTOR_BY_INDEX((*uParam0)[0], bVar0), 1.0f) || Function_179(Global_34573, (*uParam0)[0], 1, 1, 1, 40.0f))
				{
					Function_186((*uParam0)[0], Global_34573, 4);
					Function_178((*uParam0)[0], Global_34573);
					SQUAD_SET_FACTION((*uParam0)[0], 19);
					*uParam2 = 1;
					Function_187(iParam1, 4);
					if (!Function_19(*iParam1, 512))
					{
						Function_196("TUM_Obj_KillTheCriminals", 0x40f00000, 1, 2, 0, 0, 0);
						Function_187(iParam1, 512);
					}
					APPEND_JOURNAL_ENTRY_DETAIL(*uParam3, "TUM_Obj_KillTheCriminals", 0, 0, false);
					APPEND_JOURNAL_ENTRY(*uParam3, 0);
					if (!Function_19(*iParam1, 0x20000000))
					{
						Function_187(iParam1, 0x20000000);
						if (!Function_37(Global_30737) != 2)
						{
							Function_189(Global_30737, 1);
							Global_3385 = 1;
							SET_PLAYER_ENDLESS_READYMODE(0, 1);
						}
					}
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
				}
			}
			bVar0++;
		}
	}
}

void Function_189(bool bParam0, int iParam1) //Position: 0x9F04 / 40708
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_35(bParam0))
	{
		Function_33();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_32(bParam0);
	if (StackVal != 2)
	{
		Function_28("DEED_START", bParam0);
	}
	Global_13172[bParam011].f_8 = StackVal + 1;
	Global_13172[bParam011].f_4 = 2;
	Global_6271 = bParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_75(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_30(bParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_108(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_107(Global_6269) };
		}
		bVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(bVar12, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar12);
		APPEND_JOURNAL_ENTRY(bVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_3376 = 1;
	return;
}

void Function_190(var uParam0, var uParam1, int iParam2) //Position: 0xA014 / 40980
{
	bool bVar0;
	
	if (Function_179(Global_34573, (*uParam0)[0], 1, 1, 1, 40.0f))
	{
		if (!(*uParam1)[0])
		{
			Function_186((*uParam0)[0], Global_34573, 4);
			Function_194((*uParam0)[0], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_177((*uParam0)[0], 0);
			Function_194(*iParam2, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			(*uParam1)[0] = 1;
		}
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE((*uParam0)[0]) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX((*uParam0)[0], bVar0)))
		{
			if (IS_ACTOR_SHOOTING(SQUAD_GET_ACTOR_BY_INDEX((*uParam0)[0], bVar0)))
			{
				if (!(*uParam1)[0])
				{
					Function_194((*uParam0)[0], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_177((*uParam0)[0], 0);
					(*uParam1)[0] = 1;
				}
			}
		}
		bVar0++;
	}
	return;
}

int Function_191(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0xA0F6 / 41206
{
	var uVar0[2];
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	Function_193(StackVal, StackVal, vParam0, &(uVar0[0]), &(uVar0[1]));
	iVar3 = 0;
	if (bParam3)
	{
		if (IS_GRINGO_VALID(uVar0[0]))
		{
			GRINGO_ENABLE_SPAWN(uVar0[0], 1);
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			GRINGO_ENABLE_SPAWN(uVar0[1], 1);
		}
	}
	else
	{
		if (IS_GRINGO_VALID(uVar0[0]))
		{
			bVar4 = GET_ACTOR_FROM_OBJECT(Function_192(uVar0[0], "UseCase1"));
			if (IS_ACTOR_VALID(bVar4) && !bVar4 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar4, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar4, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar4);
			}
			GRINGO_ENABLE_SPAWN(uVar0[0], 0);
			if (bParam4)
			{
				GRINGO_ALLOW_ACTIVATION(uVar0[0], false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			bVar5 = GET_ACTOR_FROM_OBJECT(Function_192(uVar0[1], "UseCase1"));
			if (IS_ACTOR_VALID(bVar5) && !bVar5 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar5, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar5, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar5);
			}
			GRINGO_ENABLE_SPAWN(uVar0[1], 0);
			if (bParam4)
			{
				GRINGO_ALLOW_ACTIVATION(uVar0[1], false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
	}
	return iVar3;
}

var Function_192(bool bParam0, bool bParam1) //Position: 0xA257 / 41559
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_193(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA264 / 41572
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
	*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
	*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
}

void Function_194(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0xA30E / 41742
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			bVar1 = GET_BLIP_ON_ACTOR(bVar2);
			if (IS_BLIP_VALID(bVar1))
			{
				if (GET_BLIP_ICON(bVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(bVar1, bParam1);
				}
				SET_BLIP_MIN_DISTANCE(bVar1, fParam3);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			else
			{
				bVar1 = ADD_BLIP_FOR_ACTOR(bVar2, bParam1, fParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			if (iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2, iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2);
			}
			if (GET_BLIP_ICON(bVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(bVar1, (GET_BLIP_IMPAIRMENT_MASK(bVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

bool Function_195(bool bParam0, bool bParam1) //Position: 0xA3F8 / 41976
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				if (!bParam1)
				{
					return 1;
				}
			}
			if (bParam1)
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_196(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xA44E / 42062
{
	int iVar0;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, &Global_3422[Global_626940] + 12, 0, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, iVar0, iParam5, iParam6);
	}
}

void Function_197() //Position: 0xA4A1 / 42145
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Tumblew_GBYellsPlayer", "Tumblew_GBYellsPlayer", false, 2, 1, 0, 1);
		Function_182(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_198(int iParam0) //Position: 0xA4F4 / 42228
{
	bool bVar0;
	vector3 vVar1;
	
	if (!DECOR_CHECK_EXIST(Global_34573, "TUM_squadsDead"))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "ReadyForMansionGuys"))
		{
			if (SQUAD_IS_VALID((*iParam0)[1]))
			{
				if (SQUAD_GET_SIZE((*iParam0)[1]) == 5)
				{
					bVar0 = false;
					while (bVar0 < 4)
					{
						if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[1], bVar0)))
						{
							if (IS_ACTOR_ALIVE(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[1], bVar0)))
							{
								Function_199(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[1], bVar0), &vVar1);
								if (Function_92(StackVal, StackVal, vVar1))
								{
									KILL_ACTOR(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[1], bVar0));
								}
								else if (!IS_ACTOR_IN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[1], bVar0), Local_0.f_160))
								{
									KILL_ACTOR(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[1], bVar0));
								}
								else if (IS_ACTOR_IN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[1], bVar0), Local_0.f_164))
								{
									TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[1], bVar0), &Local_0 + 864, 0, 0, 0);
								}
							}
						}
						bVar0++;
					}
				}
			}
		}
		if (DECOR_CHECK_EXIST(Global_34573, "ReadyForMansionGuys"))
		{
			if (SQUAD_IS_VALID((*iParam0)[2]))
			{
				if (SQUAD_GET_SIZE((*iParam0)[2]) == 2)
				{
					bVar0 = false;
					while (bVar0 < 1)
					{
						if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[2], bVar0)))
						{
							if (IS_ACTOR_ALIVE(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[2], bVar0)))
							{
								Function_199(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[2], bVar0), &vVar1);
								if (Function_92(StackVal, StackVal, vVar1))
								{
									KILL_ACTOR(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[2], bVar0));
								}
								else if (!IS_ACTOR_IN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[2], bVar0), Local_0.f_160))
								{
									KILL_ACTOR(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[2], bVar0));
								}
								else if (IS_ACTOR_IN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[2], bVar0), Local_0.f_164))
								{
									TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[2], bVar0), &Local_0 + 864, 0, 0, 0);
								}
							}
						}
						bVar0++;
					}
				}
			}
		}
		if (SQUAD_IS_VALID((*iParam0)[0]))
		{
			if (SQUAD_GET_SIZE((*iParam0)[0]) == 7)
			{
				bVar0 = false;
				while (bVar0 < 6)
				{
					if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[0], bVar0)))
					{
						if (IS_ACTOR_ALIVE(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[0], bVar0)))
						{
							if (!IS_ACTOR_IN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[0], bVar0), Local_0.f_44))
							{
								KILL_ACTOR(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[0], bVar0));
							}
						}
					}
					bVar0++;
				}
			}
		}
	}
	return;
}

void Function_199(bool bParam0, bool bParam1) //Position: 0xA73E / 42814
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_200(char* cParam0, int iParam1) //Position: 0xA74B / 42827
{
	var uVar0;
	int iVar1;
	
	uVar0 = NET_MAILBOX_GET_CHALLENGE_BY_ID(cParam0);
	iVar1 = Function_201(&uVar0);
	if (iVar1 >= 4294967295)
	{
		if (Global_84611[iVar1140].f_64 && Function_144(iParam1))
		{
			(*&Global_84611[iVar1140] + 144)[412] = Function_142(iParam1);
		}
	}
	return;
}

var Function_201(int iParam0) //Position: 0xA78A / 42890
{
	int iVar0;
	int iVar1;
	
	iVar0 = *iParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (Global_84611[iVar1140] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return 4294967295;
}

bool Function_202(var uParam0, int iParam1) //Position: 0xA7BC / 42940
{
	bool bVar0;
	
	*iParam1 = CREATE_OBJECTSET_IN_LAYOUT("mangyHorseSet", *uParam0, 15, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(*uParam0, Function_240(), 996, -4008.0f, 29,373f, 3053,609f, 0.0f, 0.0f, 0.0f);
	SET_ACTOR_STAY_WITHIN_VOLUME(bVar0, Local_0.f_60, 1, true);
	ADD_OBJECT_TO_OBJECTSET(bVar0, *iParam1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(*uParam0, Function_240(), 997, -3997,825f, 28,66385f, 3052.0f, 0.0f, 0.0f, 0.0f);
	SET_ACTOR_STAY_WITHIN_VOLUME(bVar0, Local_0.f_56, 1, true);
	ADD_OBJECT_TO_OBJECTSET(bVar0, *iParam1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(*uParam0, Function_240(), 998, -3999,753f, 28,89555f, 3050,366f, 0.0f, 0.0f, 0.0f);
	SET_ACTOR_STAY_WITHIN_VOLUME(bVar0, Local_0.f_56, 1, true);
	ADD_OBJECT_TO_OBJECTSET(bVar0, *iParam1);
	return 1;
}

void Function_203(bool bParam0, bool bParam1) //Position: 0xA87B / 43131
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "unlockMe"))
	{
		DECOR_REMOVE(bParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 1);
	}
	return;
}

void Function_204(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) //Position: 0xA8CF / 43215
{
	char* cVar0[16];
	char* cVar4[16];
	
	Function_208(StackVal, StackVal, StackVal, StackVal, StackVal, uParam0, uParam1, uParam2, uParam3, -3997,158f, 28,998f, 2937,158f, uParam4, *(&Local_0 + 280));
	*uParam5 = CREATE_OBJECTSET_IN_LAYOUT("TUM_AreaCorpses", *uParam0, 4294967295, 0);
	*uParam6 = CREATE_OBJECTSET_IN_LAYOUT("TUM_AreaChests", *uParam0, 4294967295, 0);
	Function_205(uParam0, Local_0.f_336, uParam6);
	*uParam7 = CREATE_GRINGO_IN_LAYOUT(*uParam0, Function_240(), "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", *(&Local_0 + 628), *(&Local_0 + 628 + 12));
	strcpy(&cVar0, "Ammo_", 16);
	straddi(&cVar0, 8, 16);
	DECOR_SET_INT(*uParam7, &cVar0, 30);
	*uParam8 = CREATE_GRINGO_IN_LAYOUT(*uParam0, Function_240(), "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", *(&Local_0 + 656), *(&Local_0 + 656 + 12));
	strcpy(&cVar4, "Ammo_", 16);
	straddi(&cVar4, 10, 16);
	DECOR_SET_INT(*uParam8, &cVar4, 30);
}

void Function_205(var uParam0, bool bParam1, int iParam2) //Position: 0xAA29 / 43561
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	struct<8> Var6;
	bool bVar14;
	
	if (!IS_LAYOUTREF_VALID(*uParam0))
	{
		return;
	}
	if (!IS_OBJECTSET_VALID(*iParam2))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(bParam1) - 1))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam1);
		Function_219(bVar1);
		vVar2 = { StackVal, StackVal, Function_219(bVar1) };
		bVar5 = GET_OBJECT_HEADING(bVar1);
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_206("amb_areaChest") };
	}
}

struct<32> Function_206(bool bParam0) //Position: 0xACE5 / 44261
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_207("0", &cVar8, ""), 4);
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

struct<32> Function_207(char* cParam0, char* cParam1, char* cParam2) //Position: 0xAD4F / 44367
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_208(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, bool bParam7, vector3 vParam8, var uParam11, var uParam12, var uParam13) //Position: 0xAD6E / 44398
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	
	fVar0 = 3.0f;
	fVar1 = 0,3f;
	fVar2 = 1,5f;
	fVar3 = ((fVar0 - fVar2) - fVar1);
	bVar4 = (fVar3 * 0,8f);
	*uParam3 = CREATE_CORPSE_IN_LAYOUT_RANDOM(*uParam0, Function_240(), bParam7, vParam4, 0.0f, 0.0f, 0.0f, "dead_ground_male");
	SET_SLEEP_TOLERANCE(GET_PHYSINST_FROM_OBJECT(*uParam3), 0.0f);
	if (STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(bParam7), "female"))
	{
		*uParam1 = CREATE_PROP_IN_LAYOUT(*uParam0, Function_240(), "p_gen_noose01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
		vVar5 = { 0,01f, 0,034f, 0,003f };
		vVar8 = { -1,221f, 63,601f, -14,377f };
	}
	else
	{
		*uParam1 = CREATE_PROP_IN_LAYOUT(*uParam0, Function_240(), "p_gen_noose02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
		vVar5 = { -0,008f, 0,036f, -0,008f };
		vVar8 = { -3,046f, 4,262f, 13,672f };
	}
	SET_OBJECT_COLLIDE_WITH_OBJECT(*uParam1, *uParam3, false);
	SET_OBJECT_COLLIDE_WITH_OBJECT(*uParam3, *uParam1, false);
	ATTACH_OBJECTS(*uParam1, *uParam3, "neck", vVar5, vVar8, 4294967295);
	REFERENCE_OBJECT(*uParam3);
	*uParam2 = CREATE_LEASH_OBJECT(*uParam3, Function_240(), 10.0f, 10, 1, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
	LEASH_ATTACH_TO_OBJECT_BONE(*uParam2, *uParam3, "neck", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1, 1);
	GET_LOCATOR_OFFSETS(GET_PHYSINST_FROM_OBJECT(*uParam1), "attachRope", &vVar11, &vVar14);
	UNK_0xF76F2BB3(&vVar11, &vVar8, 0, 0);
	UNK_0x65DAA654(&vVar14, &vVar8, 0, 0, 0, 0);
	vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar5, vVar11, StackVal) };
	LEASH_ATTACH_TO_OBJECT_BONE_VISUAL(*uParam2, *uParam3, "neck", vVar11, vVar14, 0, 1, 1);
	LEASH_ATTACH_TO_WORLD(*uParam2, vParam8, 0.0f, 0.0f, 0.0f, 1);
	LEASH_SET_LEASH_LENGTH(*uParam2, bVar4);
	LEASH_CONSTRAIN(*uParam2);
	LEASH_SET_CONSTRAINT_LENGTH(*uParam2, fVar3);
}

void Function_209(int iParam0) //Position: 0xAF80 / 44928
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("Tumbleweed_AALayout");
	*iParam0[111] = { -4092,311f, 37,258f, 2941,198f };
	iParam0[111]->f_16 = Function_210("TUM_House_Squad", bVar0);
	iParam0[111]->f_20 = Local_0.f_48;
	iParam0[111]->f_28 = 0;
	iParam0[111]->f_32 = 0;
	iParam0[111]->f_24 = 0;
	iParam0[111]->f_40 = 0;
	iParam0[211]->f_20 = Local_0.f_48;
	iParam0[211]->f_28 = 0;
	iParam0[211]->f_32 = 0;
	iParam0[211]->f_24 = 0;
	iParam0[211]->f_40 = 0;
	*iParam0[011] = { -3975,434f, 30,349f, 2946,225f };
	iParam0[011]->f_16 = Function_210("TUM_CenterTown_Squad", bVar0);
	iParam0[011]->f_20 = Local_0.f_44;
	iParam0[011]->f_28 = 0;
	iParam0[011]->f_32 = 1;
	iParam0[011]->f_24 = 0;
	return;
}

var Function_210(bool bParam0, bool bParam1) //Position: 0xB087 / 45191
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("FIND_NAMED_SQUAD_IN_LAYOUT: Invalid layoutref passed in.");
		return bVar0;
	}
	bVar2 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bVar2, 25);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar3) && !bVar1)
	{
		bVar4 = GET_OBJECT_NAME(bVar3);
		if (STRING_CONTAINS_STRING(bVar4, bParam0) || Function_211(bParam0, bVar4))
		{
			bVar1 = true;
			bVar0 = GET_SQUAD_FROM_OBJECT(bVar3);
		}
		else
		{
			bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
		}
	}
	DESTROY_ITERATOR(bVar2);
	return bVar0;
}

int Function_211(char* cParam0, bool bParam1) //Position: 0xB12F / 45359
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, cParam0, 64);
	strcpy(&cVar16, bParam1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

void Function_212(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5) //Position: 0xB15A / 45402
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char* cVar5[16];
	
	*uParam3 = *uParam3;
	(*uParam4)[0] = 0;
	(*uParam1)[0] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "TUM_CenterTown_Squad"));
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK((*uParam1)[0], 690856);
	(*uParam4)[1] = 0;
	(*uParam1)[1] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "TUM_House_Squad"));
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK((*uParam1)[1], 690856);
	(*uParam4)[2] = 0;
	(*uParam1)[2] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "TUM_Basement_Squad"));
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK((*uParam1)[2], 690856);
	*uParam5 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "TUM_AnimationSquad"));
	iVar0 = 0;
	while (iVar0 < 14)
	{
		bVar1 = Function_216(&Global_6501, &Global_7490, iVar0, 0, 0, 1);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_ACTOR_ENUM(bVar1) == 400)
			{
				bLocal_817 = bVar1;
			}
			if (GET_ACTOR_ENUM(bVar1) == 419)
			{
				bLocal_818 = bVar1;
			}
			if (iVar0 == 0)
			{
				SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, Local_0.f_84, 2, true);
				SET_ACTOR_VISION_FIELD_OF_VIEW(bVar1, 359.0f);
				SQUAD_JOIN(bVar1, *uParam5);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, true);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar1);
				MEMORY_CONSIDER_AS(SQUAD_GET_ACTOR_BY_INDEX(*uParam5, false), Global_34573, 4);
				MEMORY_IDENTIFY(SQUAD_GET_ACTOR_BY_INDEX(*uParam5, false), Global_34573);
				SQUAD_SET_FACTION(*uParam5, 19);
				AI_BEHAVIOR_SET_ALLOW(bVar1, 0, 0);
				GIVE_WEAPON_TO_ACTOR(bVar1, 41, false, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(bVar1, 41, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar1, 0);
				TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(*uParam5, false));
				TASK_SHOOT_ENEMIES_FROM_POSITION(SQUAD_GET_ACTOR_BY_INDEX(*uParam5, false), &Local_0 + 716, -103,846f, -1.0f);
			}
			if (iVar0 <= 1 && iVar0 >= 7)
			{
				SQUAD_JOIN(bVar1, (*uParam1)[0]);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, true);
				AI_BEHAVIOR_SET_ALLOW(bVar1, 0, 0);
				if (iVar0 == 1)
				{
					SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, Local_0.f_88, 2, true);
					SET_ACTOR_VISION_FIELD_OF_VIEW(bVar1, 359.0f);
				}
				else if (iVar0 == 6)
				{
					SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, Local_0.f_92, 2, true);
					SET_ACTOR_VISION_FIELD_OF_VIEW(bVar1, 359.0f);
				}
				else if (iVar0 == 2)
				{
					SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, Local_0.f_96, 2, true);
					SET_ACTOR_VISION_FIELD_OF_VIEW(bVar1, 359.0f);
				}
				else if (iVar0 == 3)
				{
					SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, Local_0.f_100, 2, true);
					SET_ACTOR_VISION_FIELD_OF_VIEW(bVar1, 359.0f);
				}
				else if (iVar0 == 4)
				{
					SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, Local_0.f_104, 2, true);
					SET_ACTOR_VISION_FIELD_OF_VIEW(bVar1, 359.0f);
				}
				else if (iVar0 == 5)
				{
					SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, Local_0.f_108, 2, true);
					SET_ACTOR_VISION_FIELD_OF_VIEW(bVar1, 359.0f);
				}
				else if (iVar0 == 7)
				{
					SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, Local_0.f_112, 2, true);
					SET_ACTOR_VISION_FIELD_OF_VIEW(bVar1, 359.0f);
				}
			}
			else if (iVar0 <= 8 && iVar0 >= 12)
			{
				SQUAD_JOIN(bVar1, (*uParam1)[1]);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, true);
				AI_BEHAVIOR_SET_ALLOW(bVar1, 0, 0);
				if (iVar0 <= 8 && iVar0 >= 11)
				{
					SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, Local_0.f_68, 2, true);
					SET_ACTOR_VISION_FIELD_OF_VIEW(bVar1, 359.0f);
				}
				else if (iVar0 == 12)
				{
					SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, Local_0.f_72, 1, true);
					SET_ACTOR_VISION_FIELD_OF_VIEW(bVar1, 359.0f);
				}
			}
			else if (iVar0 <= 13 && iVar0 >= 14)
			{
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, true);
				AI_BEHAVIOR_SET_ALLOW(bVar1, 0, 0);
				SQUAD_JOIN(bVar1, (*uParam1)[2]);
				SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, Local_0.f_76, 2, true);
				SET_ACTOR_VISION_FIELD_OF_VIEW(bVar1, 359.0f);
			}
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar1, 37, 5.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar1, 12, 5.0f);
		}
		iVar0++;
	}
	if (SQUAD_GET_SIZE((*uParam1)[0]) >= 0)
	{
		Function_187(iParam2, 1024);
	}
	if (SQUAD_GET_SIZE((*uParam1)[1]) >= 0)
	{
		Function_187(iParam2, 4096);
	}
	Function_214((*uParam1)[0], 1);
	Function_186((*uParam1)[0], Global_34573, 2);
	Function_186((*uParam1)[1], Global_34573, 2);
	SQUAD_SET_FACTION((*uParam1)[1], 19);
	SQUAD_SET_FACTION((*uParam1)[0], 19);
	bVar2 = CREATE_GRINGO_IN_LAYOUT(*uParam0, "nammoCache", "$/content/scripting/gringo/simpleGringo/locked_footlocker", -3986,147f, 27,828f, 3038,892f, 0.0f, -183,2096f, 0.0f);
	bVar3 = Function_213(Global_34573, 39);
	if (bVar3 == 4294967295)
	{
		bVar3 = Function_213(Global_34573, 40);
	}
	bVar4 = Function_213(Global_34573, 42);
	if (bVar4 == 4294967295)
	{
		bVar4 = Function_213(Global_34573, 41);
		if (bVar4 == 4294967295)
		{
			bVar4 = Function_213(Global_34573, 40);
		}
	}
	strcpy(&cVar5, "Ammo_", 16);
	straddi(&cVar5, GET_AMMO_ENUM(bVar3), 16);
	DECOR_SET_INT(bVar2, &cVar5, FLOOR(GET_WEAPON_MAX_AMMO(bVar3)) * 2);
	strcpy(&cVar5, "Ammo_", 16);
	straddi(&cVar5, GET_AMMO_ENUM(bVar4), 16);
	DECOR_SET_INT(bVar2, &cVar5, FLOOR(GET_WEAPON_MAX_AMMO(bVar4)) * 2);
}

int Function_213(bool bParam0, int iParam1) //Position: 0xB60B / 46603
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

void Function_214(bool bParam0, int iParam1) //Position: 0xB61C / 46620
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				Function_215(bVar1, iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_215(bool bParam0, bool bParam1) //Position: 0xB662 / 46690
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_CONVERSE_ENABLE(bParam0);
	}
	else
	{
		AI_CONVERSE_DISABLE(bParam0);
	}
	return;
}

var Function_216(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0xB684 / 46724
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_14(uParam0[iVar02], 1))
	{
		return "";
	}
	if (!Function_14(uParam0[iVar02], 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal) || uParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(StackVal))
			{
				REVIVE_PERS_CHAR(StackVal, 1);
			}
			if (!Function_14(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_12(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, false) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_218(StackVal, StackVal, StackVal, Global_6289, Function_240(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_14(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_12(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_12(uParam0[iVar02], 1);
	Function_217(StackVal, 1);
	if (bParam5)
	{
		MAKE_ACTOR_READY_FOR_ACTION(bVar1, 1);
	}
	if (!bParam4)
	{
		if (IS_ACTOR_HOGTIED(bVar1))
		{
			FREE_FROM_HOGTIE(bVar1);
		}
	}
	return bVar1;
}

int Function_217(bool bParam0, bool bParam1) //Position: 0xB81A / 47130
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			REFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 1);
			if (bParam1)
			{
				if (IS_ACTOR_HOGTIED(bVar0))
				{
					FREE_FROM_HOGTIE(bVar0);
				}
			}
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_218(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0xB8BC / 47292
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

vector3 Function_219(bool bParam0) //Position: 0xB9D5 / 47573
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_220(int iParam0) //Position: 0xB9FC / 47612
{
	int iVar0;
	
	if (Global_3380 || Global_3379)
	{
		iVar0 = 0;
		while (iVar0 <= *iParam0)
		{
			if (IS_SCRIPT_VALID((*iParam0)[iVar0]))
			{
				TERMINATE_SCRIPT((*iParam0)[iVar0]);
			}
			iVar0++;
		}
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		CLEAR_PRINTED_OBJECTIVE();
		Function_227();
		return 0;
	}
	return 1;
}

void Function_221() //Position: 0xBA44 / 47684
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	
	if (bLocal_501)
	{
		bVar0 = false;
		while (bVar0 < (GET_OBJECTSET_SIZE(bLocal_502) - 1))
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_502);
			bVar2 = FLOOR(POW(2.0f, TO_FLOAT(bVar0)));
			if (Function_222(Global_34573, bVar1) > 100.0f)
			{
				Function_219(bVar1);
				vVar3 = { StackVal, StackVal, Function_219(bVar1) };
				if (!Function_19(iLocal_500, bVar2))
				{
					Function_187(&iLocal_500, bVar2);
					CLEAR_AREA_OF_GRASS(vVar3, 1,75f);
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
			}
			else
			{
				Function_168(&iLocal_500, bVar2);
			}
			bVar0++;
		}
	}
	return;
}

float Function_222(bool bParam0, bool bParam1) //Position: 0xBACD / 47821
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_223(bParam0);
			vVar0 = { StackVal, StackVal, Function_223(bParam0) };
			Function_223(bParam1);
			vVar3 = { StackVal, StackVal, Function_223(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_223(bool bParam0) //Position: 0xBB68 / 47976
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

int Function_224(int iParam0) //Position: 0xBBD4 / 48084
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	struct<8> Var8;
	bool bVar16;
	
	if (!Function_265(iParam0, 2048))
	{
		return 0;
	}
	if (Function_273() || NET_IS_IN_SESSION())
	{
		return 0;
	}
	bLocal_502 = CREATE_OBJECTSET_IN_LAYOUT("AARewardChests", Global_30616, 12, 0);
	bLocal_501 = true;
	bVar0 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 8);
	ITERATE_ON_PARTIAL_NAME(bVar0, "f_AreaTreasure");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		Function_219(bVar1);
		vVar2 = { StackVal, StackVal, Function_219(bVar1) };
		Function_225(bVar1);
		vVar5 = { StackVal, StackVal, Function_225(bVar1) };
		Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_206("NoAATreasure") };
		bVar16 = CREATE_GRINGO_IN_LAYOUT(Global_30616, &Var8, "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", vVar2, vVar5);
		DECOR_SET_BOOL(bVar16, "ActionAreaRewardChest", true);
		ADD_OBJECT_TO_OBJECTSET(bVar16, bLocal_502);
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 1;
}

vector3 Function_225(bool bParam0) //Position: 0xBCF8 / 48376
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_226(char* cParam0, int iParam1, float fParam2, int iParam3, char* cParam4, int iParam5) //Position: 0xBD1F / 48415
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_63406 - 1))
	{
		if (STRING_LENGTH(&(Global_63406[iVar021])) == 0)
		{
			strcpy(&(Global_63406[iVar021]), cParam0, 32);
			Global_63406[iVar021].f_32 = iParam1;
			Global_63406[iVar021].f_36 = fParam2;
			Global_63406[iVar021].f_40 = iParam3;
			strcpy(&Global_63406[iVar021] + 48, cParam4, 32);
			Global_63406[iVar021].f_44 = 1;
			Global_63406[iVar021].f_80 = iParam5;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_227() //Position: 0xBD9E / 48542
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_63406 - 1))
	{
		Global_63406[iVar021].f_40 = 0;
		strcpy(&Global_63406[iVar021] + 48, "", 32);
		Global_63406[iVar021].f_36 = 1.0f;
		Global_63406[iVar021].f_32 = "";
		strcpy(&(Global_63406[iVar021]), "", 32);
		Global_63406[iVar021].f_44 = 0;
		Global_63406[iVar021].f_80 = 0;
		iVar0++;
	}
	return;
}

int Function_228(int iParam0) //Position: 0xBE07 / 48647
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	*iParam0 = { StackVal, *iParam0 };
	if ((!Function_120(Global_76846, 16) && !Global_34165.f_36) && !IS_ACTOR_ON_TRAIN(Global_34573, 0))
	{
		Function_115(Global_34573, 16, 1, 0);
	}
	bVar0 = RAND_INT_RANGE(false, 100);
	if (bVar0 <= 50)
	{
		AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_02", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else if (bVar0 > 50)
	{
		AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_08", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	bLocal_848 = CREATE_LAYOUT("Tumbleweed_AALayout");
	bLocal_949 = CREATE_JOURNAL_ENTRY("TumbleweedJournalID", 0, 4294967295, 0);
	APPEND_JOURNAL_ENTRY(bLocal_949, 0);
	uLocal_861[0] = Function_237("tumbleweed", "mansion", 1);
	uLocal_861[1] = Function_237("tumbleweed", "mansion", 2);
	uLocal_861[2] = Function_237("tumbleweed", "mansion", 5);
	uLocal_861[3] = Function_237("tumbleweed", "mansion", 7);
	Function_235(&bLocal_868, 996, 3, 1);
	Function_235(&bLocal_868, 997, 3, 1);
	Function_235(&bLocal_868, 998, 3, 1);
	Function_235(&bLocal_868, 988, 3, 1);
	Function_235(&bLocal_868, 984, 3, 1);
	Function_235(&bLocal_868, 991, 3, 1);
	iLocal_948 = Function_234();
	Function_235(&bLocal_868, iLocal_948, 3, 1);
	Function_235(&bLocal_868, 133, 3, 1);
	Function_283(&bLocal_868, "Locked_Footlocker", 1, 0);
	Function_283(&bLocal_868, "$/fragments/p_gen_shovel02x", 0, 1);
	Function_283(&bLocal_868, "$/fragments/p_gen_noose01x", 0, 1);
	Function_283(&bLocal_868, "$/fragments/p_gen_noose02x", 0, 1);
	Function_283(&bLocal_868, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_283(&bLocal_868, "action_areas", 10, 0);
	Function_283(&bLocal_868, "dead_ground_male", 5, 0);
	iLocal_867 = 0;
	if (DECOR_CHECK_EXIST(Global_34573, "TUM_MB_Running"))
	{
		DECOR_REMOVE(Global_34573, "TUM_MB_Running");
	}
	Function_232(1);
	Function_230(32768);
	if (Function_71(Global_30737) != 0 && Function_229(Global_30737) != 2)
	{
		DECOR_SET_BOOL(Global_34573, "SheriffNoTie", true);
	}
	if (Function_71(Global_30737) == 0)
	{
		iLocal_855[0] = LAUNCH_NEW_SCRIPT("$/content/Frontier/Gaptooth_Ridge/Tumbleweed/ActionArea/Tumbleweed_FTE", 0);
		Function_187(&bLocal_973, 65536);
	}
	Function_145(Global_30737, 1);
	iVar1 = 0;
	while (iVar1 <= 14)
	{
		if (!Function_14(&(Global_6501[iVar12]), 2) || Function_14(&(Global_6501[iVar12]), 4))
		{
			bLocal_967 = true;
		}
		iVar1++;
	}
	if (!bLocal_967)
	{
		iVar2 = NET_MAILBOX_GET_CHALLENGE_BY_ID("sc_challenge_aa_07");
		SC_CHALLENGE_LAUNCH(iVar2);
		if (!Function_144(&iLocal_950))
		{
			Function_70(&iLocal_950);
		}
		else
		{
			Function_61(&iLocal_950);
		}
	}
	iLocal_965 = 0;
	return 1;
}

int Function_229(int iParam0) //Position: 0xC23C / 49724
{
	if (!Function_35(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

void Function_230(int iParam0) //Position: 0xC256 / 49750
{
	Function_231(&Global_28842, iParam0);
	return;
}

void Function_231(var uParam0, int iParam1) //Position: 0xC264 / 49764
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_232(int iParam0) //Position: 0xC287 / 49799
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_233())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

bool Function_233() //Position: 0xC2BC / 49852
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_8717[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int Function_234() //Position: 0xC2E1 / 49889
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 48);
	if (bVar0 == 0)
	{
		return 9;
	}
	if (bVar0 == 1)
	{
		return 10;
	}
	if (bVar0 == 2)
	{
		return 16;
	}
	if (bVar0 == 3)
	{
		return 33;
	}
	if (bVar0 == 4)
	{
		return 34;
	}
	if (bVar0 == 5)
	{
		return 35;
	}
	if (bVar0 == 6)
	{
		return 37;
	}
	if (bVar0 == 7)
	{
		return 47;
	}
	if (bVar0 == 8)
	{
		return 71;
	}
	if (bVar0 == 9)
	{
		return 72;
	}
	if (bVar0 == 10)
	{
		return 70;
	}
	if (bVar0 == 11)
	{
		return 76;
	}
	if (bVar0 == 12)
	{
		return 79;
	}
	if (bVar0 == 13)
	{
		return 141;
	}
	if (bVar0 == 14)
	{
		return 138;
	}
	if (bVar0 == 15)
	{
		return 200;
	}
	if (bVar0 == 16)
	{
		return 203;
	}
	if (bVar0 == 17)
	{
		return 204;
	}
	if (bVar0 == 18)
	{
		return 207;
	}
	if (bVar0 == 19)
	{
		return 208;
	}
	if (bVar0 == 20)
	{
		return 217;
	}
	if (bVar0 == 21)
	{
		return 230;
	}
	if (bVar0 == 22)
	{
		return 235;
	}
	if (bVar0 == 23)
	{
		return 250;
	}
	if (bVar0 == 24)
	{
		return 312;
	}
	if (bVar0 == 25)
	{
		return 99;
	}
	if (bVar0 == 26)
	{
		return 100;
	}
	if (bVar0 == 27)
	{
		return 101;
	}
	if (bVar0 == 28)
	{
		return 102;
	}
	if (bVar0 == 29)
	{
		return 155;
	}
	if (bVar0 == 30)
	{
		return 156;
	}
	if (bVar0 == 31)
	{
		return 159;
	}
	if (bVar0 == 32)
	{
		return 160;
	}
	if (bVar0 == 33)
	{
		return 162;
	}
	if (bVar0 == 34)
	{
		return 164;
	}
	if (bVar0 == 35)
	{
		return 135;
	}
	if (bVar0 == 36)
	{
		return 136;
	}
	if (bVar0 == 37)
	{
		return 137;
	}
	if (bVar0 == 38)
	{
		return 140;
	}
	if (bVar0 == 39)
	{
		return 142;
	}
	if (bVar0 == 40)
	{
		return 143;
	}
	if (bVar0 == 41)
	{
		return 285;
	}
	if (bVar0 == 42)
	{
		return 286;
	}
	if (bVar0 == 43)
	{
		return 288;
	}
	if (bVar0 == 44)
	{
		return 291;
	}
	if (bVar0 == 45)
	{
		return 298;
	}
	if (bVar0 == 46)
	{
		return 170;
	}
	if (bVar0 == 47)
	{
		return 38;
	}
	return 39;
	return 4294967295;
}

var Function_235(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xC561 / 50529
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_41(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_236(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_236(uParam0[iVar03], 8);
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

void Function_236(var uParam0, int iParam1) //Position: 0xC631 / 50737
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

int Function_237(var uParam0, var uParam1, int iParam2) //Position: 0xC642 / 50754
{
	return Function_238(Global_29006, uParam0, uParam1, iParam2);
}

int Function_238(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0xC654 / 50772
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_5(iParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(Global_29155[iParam010].f_32))
	{
		return "";
	}
	uParam1 = uParam1;
	strcpy(&cVar0, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, iParam3, 8);
	memcpy(&cVar2, Global_29155[iParam010].f_20, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, cParam2, 32);
	stradd(&cVar2, "*", 32);
	bVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(Global_29155[iParam010].f_32, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(bVar10);
}

bool Function_239(bool bParam0) //Position: 0xC6F0 / 50928
{
	if (!Function_5(bParam0))
	{
		return 0;
	}
	return Function_265(&(Global_29008[bParam0]), 2048);
}

var Function_240() //Position: 0xC70E / 50958
{
	int iVar0;
	
	return iVar0;
}

void Function_241(bool bParam0, float fParam1) //Position: 0xC716 / 50966
{
	if (!Function_281(128))
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

void Function_242(bool bParam0, bool bParam1) //Position: 0xC754 / 51028
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
		Function_243(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_273())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_243(var uParam0, int iParam1) //Position: 0xC84E / 51278
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_244(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0xC85B / 51291
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
		Function_245();
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

void Function_245() //Position: 0xC93F / 51519
{
	int iVar0;
	
	Global_26960 = Function_246(StackVal);
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

int Function_246(int iParam0) //Position: 0xC98D / 51597
{
	if (!Function_247(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_247(int iParam0) //Position: 0xC9A5 / 51621
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_248(bool bParam0) //Position: 0xC9BA / 51642
{
	Global_26316.f_56 = (Global_26316.f_56 || bParam0);
	return;
}

void Function_249(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xC9CD / 51661
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
		Function_250();
	}
	if (bParam5)
	{
		Function_21(1048576);
	}
}

void Function_250() //Position: 0xCAE0 / 51936
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_21(16384);
	}
	return;
}

void Function_251(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0xCAFC / 51964
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (Function_273())
	{
		return;
	}
	Function_275(&(Global_29008[iParam0]), 2048);
	iVar0 = 0;
	while (iVar0 <= *uParam1)
	{
		iVar1 = iVar0;
		if (Function_14(uParam1[iVar02], 1))
		{
			Function_25(uParam1, uParam2, iVar1, 0);
		}
		Function_9(uParam1, uParam2, iVar1, 0);
		Function_252(uParam1[iVar02], uParam2[iVar03], 0);
		bVar2 = GET_TIME_OF_DAY();
		ADD_TIME(&bVar2, iParam3, false, false, 0);
		uParam1[iVar02]->f_4 = bVar2;
		iVar0++;
	}
}

void Function_252(var uParam0, var uParam1, int iParam2) //Position: 0xCB7C / 52092
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	if (iParam2 == 0)
	{
		ADD_TIME(&bVar0, Function_11(Global_29007), false, false, 0);
	}
	else
	{
		ADD_TIME(&bVar0, iParam2, false, false, 0);
	}
	uParam0->f_4 = bVar0;
	Function_12(uParam0, 4);
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal))
		{
			DESTROY_OBJECT(StackVal);
		}
	}
	return;
}

void Function_253(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0xCBCF / 52175
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_281(2))
	{
		return;
	}
	if (Function_265(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_14(uParam0[iVar02], 2))
		{
			if (Function_254(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_1(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_275(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_254(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0xCC81 / 52353
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_265(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_14(uParam0, 2))
	{
		return 1;
	}
	if (Function_14(uParam0, 4))
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
		uParam1->f_8 = Function_218(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_92(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_13(uParam0, 4);
	}
	Function_255(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_255(bool bParam0, int iParam1) //Position: 0xCDEC / 52716
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_92(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_92(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_92(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_92(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_92(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_92(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

void Function_256(int iParam0, var uParam1, bool bParam2) //Position: 0xCF28 / 53032
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

void Function_257(int iParam0, var uParam1, bool bParam2) //Position: 0xCF83 / 53123
{
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("You're passing in a zero vector for ASSIGN_RC_OBJ_ALL_TIMES. Please fix this!");
	}
	else
	{
		Function_263(iParam0, uParam1, bParam2);
		Function_262(iParam0, uParam1, bParam2);
		Function_261(iParam0, uParam1, bParam2);
		Function_260(iParam0, uParam1, bParam2);
		Function_259(iParam0, uParam1, bParam2);
		Function_258(iParam0, uParam1, bParam2);
	}
	return;
}

void Function_258(var uParam0, var uParam1, bool bParam2) //Position: 0xD01E / 53278
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Night object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 60);
	return;
}

void Function_259(var uParam0, var uParam1, bool bParam2) //Position: 0xD082 / 53378
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Evening object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 48);
	return;
}

void Function_260(var uParam0, var uParam1, bool bParam2) //Position: 0xD0E8 / 53480
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Afternoon object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 36);
	return;
}

void Function_261(var uParam0, var uParam1, bool bParam2) //Position: 0xD150 / 53584
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Noon object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 24);
	return;
}

void Function_262(var uParam0, var uParam1, bool bParam2) //Position: 0xD1B3 / 53683
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Morning object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 12);
	return;
}

void Function_263(var uParam0, var uParam1, bool bParam2) //Position: 0xD219 / 53785
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Dawn object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020]);
	PRINTVECTOR(*uParam1[bVar020]);
	PRINTNL();
	return;
}

int Function_264(int iParam0) //Position: 0xD288 / 53896
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_265(&(Global_29008[iParam0]), 4);
}

bool Function_265(var uParam0, int iParam1) //Position: 0xD2A4 / 53924
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_266(bool bParam0) //Position: 0xD2C0 / 53952
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_269();
	iVar1 = 0;
	if (!Function_41(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_236(bParam0[iVar03], 8);
		}
		else if (Function_268())
		{
			iVar1 = 1;
			Function_236(bParam0[iVar03], 8);
		}
		Function_236(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_41(bParam0[iVar03], 4))
		{
			if (!Function_41(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_41(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_41(bParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*bParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*bParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*bParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*bParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_236(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_41(bParam0[iVar03], 4))
		{
			if (!Function_41(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_236(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_236(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*bParam0)[iVar03], 4294967295))
						{
							Function_236(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_236(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_236(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_236(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_236(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_236(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_236(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_236(bParam0[iVar03], 2);
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
	Function_267();
	return 1;
}

void Function_267() //Position: 0xD63B / 54843
{
	if (!Function_281(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_268() //Position: 0xD67B / 54907
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

void Function_269() //Position: 0xD6A6 / 54950
{
	if (!Function_281(128))
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

bool Function_270(var uParam0, var uParam1, int iParam2) //Position: 0xD6E8 / 55016
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_5(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_273())
	{
		return 1;
	}
	if (Function_265(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(Function_15(iParam2), 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_14(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_14(uParam0[iVar02], 8))
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

bool Function_271() //Position: 0xD7B4 / 55220
{
	if (Function_273())
	{
		return (Function_272() != 1 || Function_272() != 0);
	}
	return 0;
}

int Function_272() //Position: 0xD7CD / 55245
{
	return Global_79349.f_16;
}

bool Function_273() //Position: 0xD7D9 / 55257
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_274(var uParam0, var uParam1, int iParam2) //Position: 0xD7E2 / 55266
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_5(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_273())
	{
		return;
	}
	if (!Function_265(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(Function_15(iParam2), 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(Function_15(iParam2), 12));
			Function_275(&(Global_29008[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_12(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_12(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_275(var uParam0, int iParam1) //Position: 0xD8B8 / 55480
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_276() //Position: 0xD8C7 / 55495
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
	
	Function_277(3, 3);
	bVar0 = bVar0;
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_nospawn", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_nospawn", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/stand_kneelvomit_n_any", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/vulture_carcass", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/pee_nospawn", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/sit_headinhands_n_any", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_283(&Local_230 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_only", 1, 0);
	if (!Function_266(&Local_230 + 4))
	{
		return 0;
	}
	Local_230 = FIND_NAMED_LAYOUT("Tumbleweed_layout");
	if (!IS_LAYOUTREF_VALID(Local_230))
	{
		Local_230 = CREATE_LAYOUT("Tumbleweed_layout");
	}
	Local_230.f_320 = CREATE_OBJECTSET_IN_LAYOUT("DigGraveGRPSet", Local_230, 8, 0);
	*(&Local_230 + 324[06]) = { -3906,102f, 31,12174f, 2906,848f };
	*(&Local_230 + 324[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag24", -3906,102f, 31,12174f, 2906,848f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar1, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_230.f_320);
	*(&Local_230 + 324[16]) = { -3908,247f, 31,12174f, 2904,38f };
	*(&Local_230 + 324[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag1", -3908,247f, 31,12174f, 2904,38f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar2, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_230.f_320);
	*(&Local_230 + 324[26]) = { -3912.0f, 30,72745f, 2900,079f };
	*(&Local_230 + 324[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag2", -3912.0f, 30,72745f, 2900,079f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar3, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_230.f_320);
	*(&Local_230 + 324[36]) = { -3910,503f, 31,12174f, 2901,969f };
	*(&Local_230 + 324[36] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag3", -3910,503f, 31,12174f, 2901,969f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar4, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_230.f_320);
	*(&Local_230 + 324[46]) = { -3918,179f, 31,12174f, 2896,037f };
	*(&Local_230 + 324[46] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag4", -3918,179f, 31,12174f, 2896,037f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar5, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_230.f_320);
	*(&Local_230 + 324[56]) = { -3925,637f, 31,12174f, 2905,692f };
	*(&Local_230 + 324[56] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag5", -3925,637f, 31,12174f, 2905,692f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar6, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_230.f_320);
	*(&Local_230 + 324[66]) = { -3922,483f, 31,12174f, 2905,238f };
	*(&Local_230 + 324[66] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag6", -3922,483f, 31,12174f, 2905,238f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar7, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_230.f_320);
	*(&Local_230 + 324[76]) = { -3919,279f, 31,12174f, 2908,607f };
	*(&Local_230 + 324[76] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag7", -3919,279f, 31,12174f, 2908,607f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar8, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_230.f_320);
	*(&Local_230 + 324[86]) = { -3926,402f, 31,12174f, 2909,343f };
	*(&Local_230 + 324[86] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag8", -3926,402f, 31,12174f, 2909,343f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar9, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_230.f_320);
	*(&Local_230 + 324[96]) = { -3921,58f, 31,12174f, 2911,037f };
	*(&Local_230 + 324[96] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag9", -3921,58f, 31,12174f, 2911,037f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar10, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_230.f_320);
	*(&Local_230 + 324[106]) = { -3925,404f, 31,12174f, 2912,359f };
	*(&Local_230 + 324[106] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag10", -3925,404f, 31,12174f, 2912,359f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar11, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_230.f_320);
	*(&Local_230 + 324[116]) = { -3924,111f, 31,12174f, 2914,913f };
	*(&Local_230 + 324[116] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag11", -3924,111f, 31,12174f, 2914,913f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar12, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_230.f_320);
	*(&Local_230 + 324[126]) = { -3917,777f, 31,12174f, 2911,917f };
	*(&Local_230 + 324[126] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag12", -3917,777f, 31,12174f, 2911,917f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar13, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_230.f_320);
	*(&Local_230 + 324[136]) = { -3919,149f, 31,12174f, 2915,562f };
	*(&Local_230 + 324[136] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag13", -3919,149f, 31,12174f, 2915,562f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar14, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_230.f_320);
	*(&Local_230 + 324[146]) = { -3922,116f, 31,12174f, 2917,964f };
	*(&Local_230 + 324[146] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag14", -3922,116f, 31,12174f, 2917,964f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar15, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_230.f_320);
	*(&Local_230 + 324[156]) = { -3920,486f, 31,12174f, 2920,596f };
	*(&Local_230 + 324[156] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag15", -3920,486f, 31,12174f, 2920,596f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar16, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_230.f_320);
	*(&Local_230 + 324[166]) = { -3917,523f, 31,12174f, 2922,875f };
	*(&Local_230 + 324[166] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag16", -3917,523f, 31,12174f, 2922,875f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar17, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_230.f_320);
	*(&Local_230 + 324[176]) = { -3912,312f, 31,12174f, 2925,515f };
	*(&Local_230 + 324[176] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag17", -3912,312f, 31,12174f, 2925,515f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar18, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_230.f_320);
	*(&Local_230 + 324[186]) = { -3914,817f, 31,12174f, 2923,994f };
	*(&Local_230 + 324[186] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag18", -3914,817f, 31,12174f, 2923,994f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar19, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_230.f_320);
	*(&Local_230 + 324[196]) = { -3911,528f, 31,12174f, 2921,32f };
	*(&Local_230 + 324[196] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag19", -3911,528f, 31,12174f, 2921,32f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar20, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_230.f_320);
	*(&Local_230 + 324[206]) = { -3914,519f, 31,12174f, 2919,528f };
	*(&Local_230 + 324[206] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag20", -3914,519f, 31,12174f, 2919,528f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar21, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_230.f_320);
	*(&Local_230 + 324[216]) = { -3916,419f, 31,12174f, 2917,745f };
	*(&Local_230 + 324[216] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag21", -3916,419f, 31,12174f, 2917,745f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar22, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_230.f_320);
	*(&Local_230 + 324[226]) = { -3913,778f, 31,12174f, 2915,724f };
	*(&Local_230 + 324[226] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag22", -3913,778f, 31,12174f, 2915,724f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar23, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_230.f_320);
	*(&Local_230 + 324[236]) = { -3906,247f, 31,12174f, 2918,422f };
	*(&Local_230 + 324[236] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_230, "Flag23", -3906,247f, 31,12174f, 2918,422f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar24, "UseAnim", "pst");
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_230.f_320);
	Local_230.f_904 = CREATE_GRINGO_IN_LAYOUT(Local_230, "stand_nearwall01", "Rand_Idle_NearWall_nospawn", -3956,483f, 29,89923f, 2941,503f, 0.0f, 127,0799f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_904), 0);
	Local_230.f_908 = CREATE_GRINGO_IN_LAYOUT(Local_230, "stand_nearwall02", "Rand_Idle_NearWall_nospawn", -3964,083f, 29,3562f, 2958,197f, 0.0f, 12,55389f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_908), 0);
	Local_230.f_912 = CREATE_GRINGO_IN_LAYOUT(Local_230, "stand_nearwall03", "Rand_Idle_NearWall_nospawn", -3974,104f, 29,3562f, 2959,421f, 0.0f, 12,55389f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_912), 0);
	Local_230.f_916 = CREATE_GRINGO_IN_LAYOUT(Local_230, "stand_leanrail01", "lean_rail_nospawn", -3980,157f, 31,94822f, 2918,335f, 0.0f, 165,4633f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_916), 0);
	Local_230.f_920 = CREATE_GRINGO_IN_LAYOUT(Local_230, "sit_headinhands02", "nsit_docks", -3991,309f, 29,38124f, 2950,047f, 0.0f, 284,5418f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_920), 0);
	Local_230.f_924 = CREATE_GRINGO_IN_LAYOUT(Local_230, "stand_randidle01", "look_out_window_L", -3993,462f, 29,34721f, 2953,094f, 0.0f, -77,11397f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_924), 0);
	Local_230.f_928 = CREATE_GRINGO_IN_LAYOUT(Local_230, "stand_kneelvomit01", "stand_kneelvomit_n_any", -3992,244f, 28,2368f, 2932,186f, 0.0f, 591,0729f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_928), 0);
	Local_230.f_932 = CREATE_GRINGO_IN_LAYOUT(Local_230, "stand_yelling01", "stand_yelling", -3998,34f, 28,24254f, 2937,194f, 0.0f, 636,315f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_932), 0);
	Local_230.f_936 = CREATE_GRINGO_IN_LAYOUT(Local_230, "stand_peeing02", "stand_peeing_b_any", -4000,305f, 28,62311f, 2945,216f, 0.0f, 583,6069f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_936), 0);
	Local_230.f_940 = CREATE_GRINGO_IN_LAYOUT(Local_230, "vulture_carcass", "vulture_carcass", -3937,402f, 29,607f, 2940,842f, 0.0f, 66,97f, 0.0f);
	Local_230.f_944 = CREATE_GRINGO_IN_LAYOUT(Local_230, "vulture_carcass1", "vulture_carcass", -3938,391f, 29,543f, 2940,184f, 0.0f, 251,4546f, 0.0f);
	Local_230.f_948 = CREATE_GRINGO_IN_LAYOUT(Local_230, "lie_sleep_on_bed_r", "lie_sleep_on_bed_r", -3972,201f, 29,3537f, 2969,121f, 0.0f, 96,67087f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_948), 0);
	Local_230.f_952 = CREATE_GRINGO_IN_LAYOUT(Local_230, "sleeping_scripted", "sleeping_scripted", -3964,11f, 29,49107f, 2970,492f, 0.0f, -21,66837f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_952), 0);
	Local_230.f_956 = CREATE_GRINGO_IN_LAYOUT(Local_230, "Pee_nospawn", "Pee_nospawn", -3945,962f, 28,0964f, 2964,621f, 0.0f, -112,395f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_956), 0);
	Local_230.f_960 = CREATE_GRINGO_IN_LAYOUT(Local_230, "Pee_nospawn1", "Pee_nospawn", -3969,06f, 28,60759f, 2962,347f, 0.0f, 106,7274f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_960), 0);
	Local_230.f_964 = CREATE_GRINGO_IN_LAYOUT(Local_230, "Rand_Idle_NearWall_nospawn", "Rand_Idle_NearWall_nospawn", -3977,78f, 29,2486f, 2961,896f, 0.0f, 12,06175f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_964), 0);
	Local_230.f_968 = CREATE_GRINGO_IN_LAYOUT(Local_230, "Rand_Idle_NearWall_nospawn1", "Rand_Idle_NearWall_nospawn", -3980,62f, 32,30972f, 2962,506f, 0.0f, 15,50468f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_968), 0);
	Local_230.f_972 = CREATE_GRINGO_IN_LAYOUT(Local_230, "Rand_Idle_Sit_Ground_nospawn", "Rand_Idle_Sit_Ground_nospawn", -3981,085f, 29,26598f, 2964,424f, 0.0f, -120,5071f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_972), 0);
	Local_230.f_976 = CREATE_GRINGO_IN_LAYOUT(Local_230, "Rand_Idle_Sit_Ground_nospawn1", "Rand_Idle_Sit_Ground_nospawn", -3977,215f, 29,34775f, 2965,374f, 0.0f, 102,4699f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_976), 0);
	Local_230.f_980 = CREATE_GRINGO_IN_LAYOUT(Local_230, "Rand_Idle_Sit_Ground_nospawn2f", "Rand_Idle_Sit_Ground_nospawn", -3964,109f, 29,37589f, 2964,187f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_980), 0);
	Local_230.f_984 = CREATE_GRINGO_IN_LAYOUT(Local_230, "rand_idle_stand_nospawn", "rand_idle_stand_nospawn", -3966,724f, 29,44706f, 2960,713f, 0.0f, 11,06243f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_984), 0);
	Local_230.f_988 = CREATE_GRINGO_IN_LAYOUT(Local_230, "rand_idle_stand_nospawn1", "rand_idle_stand_nospawn", -3979,396f, 32,28926f, 2961,967f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_988), 0);
	Local_230.f_992 = CREATE_GRINGO_IN_LAYOUT(Local_230, "sit_headinhands_n_any1", "Rand_Idle_NearWall_Shoulder_L", -3977,961f, 29,25462f, 2971,488f, 0.0f, -71,28572f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_992), 0);
	Local_230.f_996 = CREATE_GRINGO_IN_LAYOUT(Local_230, "smoking_stand", "smoking_stand", -4084,939f, 36,02277f, 2957,816f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_996), 0);
	Local_230.f_1000 = CREATE_GRINGO_IN_LAYOUT(Local_230, "smoking_stand1", "smoking_stand", -4080.0f, 35,68636f, 2952f, 0.0f, 214,9247f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_1000), 0);
	Local_230.f_1004 = CREATE_GRINGO_IN_LAYOUT(Local_230, "stand_yelling", "stand_yelling", -4079,369f, 35,51023f, 2956f, 0.0f, -77,36435f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_1004), 0);
	Local_230.f_1008 = CREATE_GRINGO_IN_LAYOUT(Local_230, "stand_yelling1", "stand_yelling", -4077,646f, 35,47124f, 2947,833f, 0.0f, 169,9451f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_1008), 0);
	Local_230.f_1012 = CREATE_GRINGO_IN_LAYOUT(Local_230, "stand_spit", "stand_spit", -4082,778f, 35,74409f, 2951,333f, 0.0f, -54,97047f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_1012), 0);
	Local_230.f_1016 = CREATE_GRINGO_IN_LAYOUT(Local_230, "Pee", "Pee", -4081,666f, 35,68197f, 2945,712f, 0.0f, 100,1252f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_1016), 0);
	Local_230.f_1020 = CREATE_GRINGO_IN_LAYOUT(Local_230, "stand_spit1", "sit_headinhands_n_any", -4085,382f, 35,7482f, 2952,974f, 0.0f, -122,7377f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_1020), 0);
	Local_230.f_1024 = CREATE_GRINGO_IN_LAYOUT(Local_230, "tumbleweed_01", "lean_fence_L_talking", -4083,174f, 37,21607f, 2945,039f, 0.0f, 239,0258f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_1024), 0);
	Local_230.f_1028 = CREATE_GRINGO_IN_LAYOUT(Local_230, "tumbleweed_02", "look_out_window_R", -4084,462f, 37,21607f, 2947,434f, 0.0f, 239,0258f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_1028), 0);
	Local_230.f_1032 = CREATE_GRINGO_IN_LAYOUT(Local_230, "tumbleweed_03", "nlean_rail", -4086,047f, 37,21607f, 2950,391f, 0.0f, 239,0258f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_1032), 0);
	Local_230.f_1036 = CREATE_GRINGO_IN_LAYOUT(Local_230, "tumbleweed_04", "Rand_Idle_NearWall", -4082,791f, 37,21607f, 2942,805f, 0.0f, 239,0258f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_1036), 0);
	Local_230.f_1040 = CREATE_GRINGO_IN_LAYOUT(Local_230, "horse_tend", "horse_tend", -4067,614f, 32,24473f, 2985,871f, 0.0f, 210,4558f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_1040), 0);
	Local_230.f_1044 = CREATE_GRINGO_IN_LAYOUT(Local_230, "horse_tend1", "horse_tend", -4063,796f, 32,19603f, 2981,507f, 0.0f, 256,6527f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_1044), 0);
	Local_230.f_1048 = CREATE_GRINGO_IN_LAYOUT(Local_230, "tumbleweed_05", "stand_lookdistance_w_any", -4083,733f, 37,21607f, 2946,219f, 0.0f, 239,0258f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_1048), 0);
	Local_230.f_1052 = CREATE_GRINGO_IN_LAYOUT(Local_230, "tumbleweed_06", "stand_lookdistance_w_any", -3899,871f, 31,84533f, 2927,522f, 0.0f, 172,6347f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_1052), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_230, "rand_idle_stand", "rand_idle_stand", -3901,799f, 31,12171f, 2927,992f, 0.0f, -165,9532f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_230, "rand_idle_stand1", "Rand_Idle_NearWall", -3901,081f, 30,87409f, 2934,851f, 0.0f, -99,86557f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_230, "rand_idle_stand2", "Sit_Ground_Only", -3901,578f, 31,00146f, 2929,798f, 0.0f, -142,2484f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_230, "rand_idle_stand3", "Sit_Ground_Only", -3899,72f, 31,01221f, 2930,18f, 0.0f, -230,5389f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_230.f_1056 = CREATE_GRINGO_IN_LAYOUT(Local_230, "grave_sit_headinhands", "sit_headinhands_n_any", -4094,39f, 40,61429f, 2948,046f, 0.0f, -145,0607f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_230.f_1056), 0);
	Local_230.f_1060 = CREATE_GRINGO_IN_LAYOUT(Local_230, "stand_spit2", "stand_spit", -3887,211f, 31,12166f, 2924,789f, 0.0f, -210,0311f, 0.0f);
	Local_230.f_1064 = CREATE_GRINGO_IN_LAYOUT(Local_230, "stand_spit3", "stand_spit", -3891,744f, 31,12174f, 2912,286f, 0.0f, 0.0f, 0.0f);
	Local_230.f_1068 = CREATE_GRINGO_IN_LAYOUT(Local_230, "smoking_stand2", "smoking_stand", -3878,785f, 31,24907f, 2923,221f, 0.0f, -180,593f, 0.0f);
	Local_230.f_1072 = CREATE_GRINGO_IN_LAYOUT(Local_230, "smoking_stand3", "smoking_stand", -3880,131f, 31,38739f, 2922,635f, 0.0f, -258,556f, 0.0f);
	Local_230.f_1076 = CREATE_GRINGO_IN_LAYOUT(Local_230, "smoking_stand4", "smoking_stand", -3904,54f, 31,12168f, 2924f, 0.0f, 90,05317f, 0.0f);
	return 1;
}

void Function_277(int iParam0, int iParam1) //Position: 0xF9EF / 63983
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

bool Function_278() //Position: 0xFA38 / 64056
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	Function_277(3, 3);
	uVar0 = uVar0;
	Function_283(&Local_0 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_283(&Local_0 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	if (!Function_266(&Local_0 + 4))
	{
		return 0;
	}
	Local_0 = FIND_NAMED_LAYOUT("Tumbleweed_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("Tumbleweed_layout");
	}
	Local_0.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_upstairs", 2, -4084,735f, 41,55975f, 2942,39f, 0.0f, -29,51146f, 0.0f, 2,568923f, 2,410614f, 14,77269f);
	Local_0.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_0, "tumv_mansionInside", 2, -4090,239f, 37,76493f, 2944,348f, 0.0f, -33,98817f, 0.0f, 27,23937f, 55,07125f, 21,66409f);
	Local_0.f_40 = CREATE_VOLUME_IN_LAYOUT(Local_0, "tumv_townInside", 2, -3977,544f, 32,25373f, 2938,717f, 0.0f, 0.0f, 0.0f, 28,56358f, 29,44215f, 51,28766f);
	Local_0.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_genBig", 3, -3977,329f, 32,21666f, 2941,784f, 0.0f, 20.0f, 0.0f, 65,16049f, 18,06927f, 58,24506f);
	Local_0.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_houseBig", 3, -4086,112f, 42,08514f, 2950,396f, 0.0f, 20.0f, 0.0f, 38,19824f, 16,27185f, 38,19824f);
	Local_0.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_houseAggroAdd", 2, -3920,058f, 0.0f, 3042,033f, 0.0f, -28,60571f, 0.0f, 39,68588f, 39,68588f, 39,68588f);
	Local_0.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_pen1", 2, -3997,895f, 28,36437f, 3051,635f, 0.0f, 15,76106f, 0.0f, 5,843853f, 5,843853f, 6,516117f);
	Local_0.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_pen2", 2, -4008,417f, 29,41184f, 3053,813f, 0.0f, 9,964094f, 0.0f, 5,861253f, 4,511758f, 5,922601f);
	Local_0.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nv_inHouse", 2, -4092,385f, 37,21731f, 2941,887f, 0.0f, -29,92689f, 0.0f, 21,60211f, 17,76842f, 22,44565f);
	Local_0.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_HOUSE_STAYIN", 2, -4095,388f, 38,51274f, 2934,629f, 0.0f, -30,52006f, 0.0f, 3,69933f, 2,942006f, 5,281651f);
	Local_0.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_0, "INHOUSE2_VOLUME", 2, -4086,277f, 42,27808f, 2945,561f, 0.0f, -28,59323f, 0.0f, 2,657445f, 3,782204f, 4,905824f);
	Local_0.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_BASEMENT", 2, -4091,639f, 35,23508f, 2939,765f, 0.0f, -31,33302f, 0.0f, 15,9445f, 3,106111f, 15,84418f);
	Local_0.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_0, "tumv_amb_vultures", 3, -4016.0f, 61,48221f, 2968.0f, 0.0f, 20.0f, 0.0f, 21,41178f, 4,672281f, 21,41178f);
	Local_0.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_StandOver", 2, -3997,819f, 28,23206f, 2934,455f, 1,163194f, 60,48953f, 0,8368272f, 3,568475f, 4,200047f, 3,436358f);
	Local_0.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_TOWN2", 2, -3978,99f, 27,16224f, 2908,762f, 0.0f, -60,5605f, 0.0f, 12,23938f, 15,48741f, 9,772036f);
	Local_0.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_TOWN_center", 3, -3975,6f, 28,16267f, 2943,68f, 0.0f, 20.0f, 0.0f, 13,98738f, 13,98738f, 13,98738f);
	Local_0.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_TOWN3", 2, -3978,31f, 33,03001f, 2918,576f, 0.0f, -15,67325f, 0.0f, 3,851652f, 2,559313f, 2,321757f);
	Local_0.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_TOWN4", 2, -3953,089f, 30,02684f, 2938,424f, 0.0f, -52,81564f, 0.0f, 6,968003f, 6,968003f, 11,60637f);
	Local_0.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_TOWN5", 2, -3960,414f, 29,94275f, 2958,398f, 0.0f, -74,63547f, 0.0f, 6,638144f, 5,124949f, 6,835195f);
	Local_0.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_sheriffIn", 2, -3997,702f, 29,15334f, 2952,097f, 0.0f, 16,4133f, 0.0f, 10,43502f, 10,43502f, 15,4332f);
	Local_0.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_INSHERIFF3", 2, -3979,778f, 31,04726f, 2962,124f, 0.0f, 14,52715f, 0.0f, 5,843855f, 8,197127f, 1,731026f);
	Local_0.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_MansionComeOut", 2, -4081,082f, 41,43871f, 2949,912f, 0.0f, -28,82555f, 0.0f, 10,13353f, 13,25633f, 20,27029f);
	Local_0.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_PlayerNearMansion", 2, -4056.0f, 30,71028f, 2968f, 0.0f, -29,59414f, 0.0f, 30,29621f, 20,19148f, 52,80212f);
	Local_0.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_SheriffRoam", 2, -3916,566f, 21,83624f, 2679,847f, 0.0f, -39,68338f, 0.0f, 8,561084f, 8,561084f, 8,561084f);
	Local_0.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_VolumeSet01", 2, -3898,692f, 35,73768f, 2918,275f, 0.0f, -16,22889f, 0.0f, 136,2227f, 69,52171f, 108,9899f);
	Local_0.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_VolumeSet02", 2, -3979,986f, 35,73768f, 2952,588f, 0.0f, -20,96874f, 0.0f, 175,9891f, 69,52171f, 108,9899f);
	Local_0.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_VolumeSet03", 2, -3994,993f, 35,73768f, 3051,826f, 0.0f, -20,96874f, 0.0f, 124,9585f, 46,70904f, 90,78781f);
	Local_0.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_CloseToHostageTaker", 2, -3996,71f, 29,29077f, 2925,798f, 0.0f, 25,80386f, 0.0f, 10,34651f, 4,200047f, 13,88339f);
	Local_0.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_MansionComeOut1", 2, -4081,044f, 38,24461f, 2961,503f, 0.0f, -1,021253f, 0.0f, 11,43818f, 13,25633f, 10,8929f);
	Local_0.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_MansionComeOut2", 2, -4088,909f, 37,969f, 2940,649f, 0.0f, -28,91998f, 0.0f, 11,43818f, 16,06557f, 10,8929f);
	Local_0.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_PlayerNearMansion1", 2, -4077,689f, 35,77419f, 2955,681f, 0.0f, -29,59414f, 0.0f, 30,29621f, 20,19148f, 52,80212f);
	Local_0.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_PlayCoverAudio", 2, -4027,5f, 31,05175f, 2947,971f, 0.0f, 16,60229f, 0.0f, 32,35521f, 24,64494f, 60,71115f);
	Local_0.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_ChangeMood", 3, -4070,817f, 25,09504f, 2953,534f, 0.0f, 20.0f, 0.0f, 40,13965f, 40,13965f, 40,13965f);
	Local_0.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_roofVolume", 2, -4092,427f, 48,13748f, 2942,142f, 0.0f, -30,10057f, 0.0f, 20,38203f, 8,670809f, 23,12734f);
	*(&Local_0 + 168) = { -3874,665f, 37,14856f, 2950,946f };
	*(&Local_0 + 168 + 12) = { 0.0f, 68,76662f, 0.0f };
	Local_0.f_192 = CREATE_POINT_IN_LAYOUT(Local_0, "tumf_teleport", -3874,665f, 37,14856f, 2950,946f, 0.0f, 68,76662f, 0.0f);
	*(&Local_0 + 196) = { -4001,897f, 28,77273f, 2922,704f };
	*(&Local_0 + 196 + 12) = { 0.0f, -20,98411f, 0.0f };
	Local_0.f_220 = CREATE_POINT_IN_LAYOUT(Local_0, "f_lawSpawn_Gallows", -4001,897f, 28,77273f, 2922,704f, 0.0f, -20,98411f, 0.0f);
	*(&Local_0 + 224) = { -4081,759f, 36,0447f, 2934,203f };
	*(&Local_0 + 224 + 12) = { 0.0f, -24,20032f, 0.0f };
	Local_0.f_248 = CREATE_POINT_IN_LAYOUT(Local_0, "f_horseOne", -4081,759f, 36,0447f, 2934,203f, 0.0f, -24,20032f, 0.0f);
	*(&Local_0 + 252) = { -4083,287f, 36,2049f, 2933,231f };
	*(&Local_0 + 252 + 12) = { 0,2059246f, -28,11596f, 0,01875682f };
	Local_0.f_276 = CREATE_POINT_IN_LAYOUT(Local_0, "f_horseTwo", -4083,287f, 36,2049f, 2933,231f, 0,2059246f, -28,11596f, 0,01875682f);
	*(&Local_0 + 280) = { -3997,158f, 32,04127f, 2937,159f };
	*(&Local_0 + 280 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_304 = CREATE_POINT_IN_LAYOUT(Local_0, "f_HangingTop", -3997,158f, 32,04127f, 2937,159f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 308) = { -3997,158f, 28,24082f, 2937,159f };
	*(&Local_0 + 308 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_332 = CREATE_POINT_IN_LAYOUT(Local_0, "f_HangingGround", -3997,158f, 28,24082f, 2937,159f, 0.0f, 0.0f, 0.0f);
	Local_0.f_336 = CREATE_OBJECTSET_IN_LAYOUT("rewardChestsSet", Local_0, 8, 0);
	*(&Local_0 + 340[06]) = { -3980,779f, 28,44726f, 2906,583f };
	*(&Local_0 + 340[06] + 12) = { 0.0f, 120,9871f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_0, "f_chest1", -3980,779f, 28,44726f, 2906,583f, 0.0f, 120,9871f, 0.0f);
	DECOR_SET_INT(bVar1, "GringoDollarAmt", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_0.f_336);
	*(&Local_0 + 340[16]) = { -4010,945f, 29,13137f, 2916,423f };
	*(&Local_0 + 340[16] + 12) = { 0.0f, -184,305f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_0, "f_chest2", -4010,945f, 29,13137f, 2916,423f, 0.0f, -184,305f, 0.0f);
	DECOR_SET_INT(bVar2, "Ammo_9", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_0.f_336);
	*(&Local_0 + 340[26]) = { -3975,424f, 25,26292f, 2875,275f };
	*(&Local_0 + 340[26] + 12) = { 0.0f, -89,38404f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_0, "f_chest3", -3975,424f, 25,26292f, 2875,275f, 0.0f, -89,38404f, 0.0f);
	DECOR_SET_INT(bVar3, "GiveItem", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_0.f_336);
	*(&Local_0 + 340[36]) = { -3948,066f, 28,10863f, 2964,988f };
	*(&Local_0 + 340[36] + 12) = { 0.0f, 180,0867f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_0, "f_chest4", -3948,066f, 28,10863f, 2964,988f, 0.0f, 180,0867f, 0.0f);
	DECOR_SET_INT(bVar4, "GiveItem", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_0.f_336);
	*(&Local_0 + 340[46]) = { -4091,129f, 37,21381f, 2954,017f };
	*(&Local_0 + 340[46] + 12) = { 0.0f, -22,62761f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_0, "f_chest5", -4091,129f, 37,21381f, 2954,017f, 0.0f, -22,62761f, 0.0f);
	DECOR_SET_INT(bVar5, "GringoDollarAmt", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_0.f_336);
	*(&Local_0 + 340[56]) = { -3981,026f, 27,83225f, 3037,358f };
	*(&Local_0 + 340[56] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_0, "f_chest6", -3981,026f, 27,83225f, 3037,358f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar6, "Ammo_9", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_0.f_336);
	*(&Local_0 + 340[66]) = { -4081,135f, 34,57015f, 2977,369f };
	*(&Local_0 + 340[66] + 12) = { 0.0f, 10,64839f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_0, "f_chest7", -4081,135f, 34,57015f, 2977,369f, 0.0f, 10,64839f, 0.0f);
	DECOR_SET_INT(bVar7, "GringoDollarAmt", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_0.f_336);
	Local_0.f_512 = CREATE_POINT_IN_LAYOUT(Local_0, "HOUSE1", -4094,922f, 37,21381f, 2936,705f, 0.0f, 0.0f, 0.0f);
	Local_0.f_516 = CREATE_POINT_IN_LAYOUT(Local_0, "HOUSE2", -4097,092f, 37,26976f, 2935,162f, 0.0f, 0.0f, 0.0f);
	Local_0.f_520 = CREATE_POINT_IN_LAYOUT(Local_0, "HOUSE3", -4093,558f, 37,26976f, 2933,848f, 0.0f, 0.0f, 0.0f);
	Local_0.f_524 = CREATE_POINT_IN_LAYOUT(Local_0, "HOUSE4", -4095,265f, 37,22854f, 2934,547f, 0.0f, 0.0f, 0.0f);
	Local_0.f_528 = CREATE_POINT_IN_LAYOUT(Local_0, "INHOUSE2", -4095,653f, 37,21381f, 2932,349f, 0.0f, -121,0326f, 0.0f);
	Local_0.f_532 = CREATE_POINT_IN_LAYOUT(Local_0, "nBASEMENT1", -4099,655f, 37,22456f, 2942,61f, 0.0f, -126,1021f, 0.0f);
	Local_0.f_536 = CREATE_POINT_IN_LAYOUT(Local_0, "nBASEMENT2", -4098,767f, 37,22456f, 2942,229f, 0.0f, -119,2245f, 0.0f);
	Local_0.f_540 = CREATE_POINT_IN_LAYOUT(Local_0, "f_TOWN1", -3998,036f, 28,22873f, 2933,964f, 0.0f, -125,5167f, 0.0f);
	Local_0.f_544 = CREATE_POINT_IN_LAYOUT(Local_0, "f_TOWN2", -3981,839f, 28,45122f, 2906,455f, 0.0f, -154,2482f, 0.0f);
	Local_0.f_548 = CREATE_POINT_IN_LAYOUT(Local_0, "f_INSHERIFF2", -3977,047f, 28,11759f, 2942,953f, 0.0f, -135,6129f, 0.0f);
	Local_0.f_552 = CREATE_POINT_IN_LAYOUT(Local_0, "f_TOWN3", -3978,502f, 31,92479f, 2917,959f, 0.0f, -187,8257f, 0.0f);
	Local_0.f_556 = CREATE_POINT_IN_LAYOUT(Local_0, "f_TOWN4", -3953.0f, 29,92f, 2941.0f, 0.0f, 0.0f, 0.0f);
	Local_0.f_560 = CREATE_POINT_IN_LAYOUT(Local_0, "f_TOWN5", -3968,541f, 28,3825f, 2948,035f, 0.0f, -69,32149f, 0.0f);
	Local_0.f_564 = CREATE_POINT_IN_LAYOUT(Local_0, "f_INSHERIFF1", -3997,209f, 29,31378f, 2950,487f, 0.0f, 0.0f, 0.0f);
	Local_0.f_568 = CREATE_POINT_IN_LAYOUT(Local_0, "f_INSHERIFF3", -3980,111f, 32,29058f, 2962,586f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 572) = { -4060.0f, 31,10222f, 2952f };
	*(&Local_0 + 572 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_596 = CREATE_POINT_IN_LAYOUT(Local_0, "f_SheriffGoToSpot", -4060.0f, 31,10222f, 2952f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 600) = { -4076,522f, 35,67557f, 2945,216f };
	*(&Local_0 + 600 + 12) = { 0.0f, 71,81523f, 0.0f };
	Local_0.f_624 = CREATE_POINT_IN_LAYOUT(Local_0, "f_SheriffTeleport", -4076,522f, 35,67557f, 2945,216f, 0.0f, 71,81523f, 0.0f);
	*(&Local_0 + 628) = { -3987,058f, 27,82765f, 3051,004f };
	*(&Local_0 + 628 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_652 = CREATE_POINT_IN_LAYOUT(Local_0, "f_ammoFootlocker01", -3987,058f, 27,82765f, 3051,004f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 656) = { -3998,304f, 29,36919f, 2947,024f };
	*(&Local_0 + 656 + 12) = { 0.0f, -166,8464f, 0.0f };
	Local_0.f_680 = CREATE_POINT_IN_LAYOUT(Local_0, "f_ammoFootlocker02", -3998,304f, 29,36919f, 2947,024f, 0.0f, -166,8464f, 0.0f);
	*(&Local_0 + 684) = { -3891,426f, 39,10479f, 2976,432f };
	*(&Local_0 + 684 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_708 = CREATE_POINT_IN_LAYOUT(Local_0, "f_SheriffSpawnNoTie", -3891,426f, 39,10479f, 2976,432f, 0.0f, 0.0f, 0.0f);
	Local_0.f_712 = CREATE_POINT_IN_LAYOUT(Local_0, "f_gringoPos", -4076,522f, 35,67557f, 2945,216f, 0.0f, 156,5471f, 0.0f);
	*(&Local_0 + 716) = { -4002,559f, 28,77277f, 2922,344f };
	*(&Local_0 + 716 + 12) = { 0.0f, -109,9354f, 0.0f };
	Local_0.f_740 = CREATE_POINT_IN_LAYOUT(Local_0, "f_hostageGringo", -4002,559f, 28,77277f, 2922,344f, 0.0f, -109,9354f, 0.0f);
	*(&Local_0 + 744) = { -4076,522f, 35,67557f, 2945,216f };
	*(&Local_0 + 744 + 12) = { 0.0f, -208,7272f, 0.0f };
	Local_0.f_768 = CREATE_POINT_IN_LAYOUT(Local_0, "f_SheriffPos", -4076,522f, 35,67557f, 2945,216f, 0.0f, -208,7272f, 0.0f);
	*(&Local_0 + 772) = { -4077,03f, 35,61034f, 2946,153f };
	*(&Local_0 + 772 + 12) = { 0.0f, -388,1979f, 0.0f };
	Local_0.f_796 = CREATE_POINT_IN_LAYOUT(Local_0, "f_MarstonPos", -4077,03f, 35,61034f, 2946,153f, 0.0f, -388,1979f, 0.0f);
	Local_0.f_800 = CREATE_POINT_IN_LAYOUT(Local_0, "f_teleportHide01", -4090,661f, 37,24136f, 2941,86f, 0.0f, -83,01345f, 0.0f);
	Local_0.f_804 = CREATE_POINT_IN_LAYOUT(Local_0, "f_teleportHide02", -4076,522f, 35,6576f, 2945,216f, 0.0f, -119,4231f, 0.0f);
	*(&Local_0 + 808) = { -4002,63f, 28,77279f, 2923,092f };
	*(&Local_0 + 808 + 12) = { 0.0f, -10,86022f, 0.0f };
	Local_0.f_832 = CREATE_POINT_IN_LAYOUT(Local_0, "f_teleportMarsMid", -4002,63f, 28,77279f, 2923,092f, 0.0f, -10,86022f, 0.0f);
	*(&Local_0 + 836) = { -4002,251f, 28,77276f, 2921,945f };
	*(&Local_0 + 836 + 12) = { 0.0f, -190,1203f, 0.0f };
	Local_0.f_860 = CREATE_POINT_IN_LAYOUT(Local_0, "f_teleportSheriffMid", -4002,251f, 28,77276f, 2921,945f, 0.0f, -190,1203f, 0.0f);
	*(&Local_0 + 864) = { -4090,118f, 33,86153f, 2934,964f };
	*(&Local_0 + 864 + 12) = { 0.0f, -136,8632f, 0.0f };
	Local_0.f_888 = CREATE_POINT_IN_LAYOUT(Local_0, "f_teleportBasement", -4090,118f, 33,86153f, 2934,964f, 0.0f, -136,8632f, 0.0f);
	Local_0.f_892 = CREATE_GRINGO_IN_LAYOUT(Local_0, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -3968,541f, 28,4404f, 2948,035f, 0.0f, -87,04881f, 0.0f);
	Local_0.f_896 = CREATE_GRINGO_IN_LAYOUT(Local_0, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -3979,998f, 32,29158f, 2962,682f, 0.0f, 14,65417f, 0.0f);
	Local_0.f_900 = CREATE_GRINGO_IN_LAYOUT(Local_0, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", -3978,41f, 31,92476f, 2918,274f, 0.0f, -195,3569f, 0.0f);
	Local_0.f_904 = CREATE_GRINGO_IN_LAYOUT(Local_0, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", -3981,955f, 28,4549f, 2906,25f, 0.0f, -150,4357f, 0.0f);
	Local_0.f_908 = CREATE_GRINGO_IN_LAYOUT(Local_0, "stand_drunk_rowdydrink4", "stand_drunk_rowdydrink", -3959,014f, 28,38515f, 2955,877f, 0.0f, -87,04881f, 0.0f);
	Local_0.f_912 = CREATE_GRINGO_IN_LAYOUT(Local_0, "smoking_stand37", "smoking_stand", -4076,522f, 35,6576f, 2945,216f, 0.0f, 157,6079f, 0.0f);
	Local_0.f_916 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_0, "ncover_low", -4062,988f, 31,80792f, 2957,25f, 0.0f, 90,6319f, 0.0f, 4);
	return 1;
}

void Function_279(bool bParam0, int iParam1) //Position: 0x11177 / 70007
{
	if (!Function_281(128))
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

void Function_280(int iParam0) //Position: 0x111B2 / 70066
{
	int iVar0;
	
	if (Function_19(iParam0, 1) && Function_19(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_281(int iParam0) //Position: 0x111E6 / 70118
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_282(var uParam0, int iParam1) //Position: 0x11202 / 70146
{
	int iVar0;
	
	if (!Function_281(2))
	{
		return 0;
	}
	if (Function_265(&(Global_29008[iParam1]), 256))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_14(uParam0[iVar02], 2))
		{
			if (Function_14(uParam0[iVar02], 4))
			{
				if (IS_LATER_THAN(StackVal, false))
				{
					return 1;
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_283(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1126C / 70252
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_284(iParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_236(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_284(var uParam0, int iParam1, int iParam2) //Position: 0x112A4 / 70308
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_41(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_236(uParam0[iVar03], 4);
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

bool Function_285(int iParam0, bool bParam1) //Position: 0x11368 / 70504
{
	int iVar0;
	
	iVar0 = Function_105(iParam0);
	if (!Function_31(iVar0))
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

int Function_286(int iParam0) //Position: 0x113A5 / 70565
{
	if (Global_3421)
	{
		return 0;
	}
	*iParam0 = *iParam0;
	if (Global_3380 || Global_3379)
	{
		return 0;
	}
	if (Global_3382)
	{
		return 0;
	}
	if (Global_3384)
	{
		return 0;
	}
	if (Global_3379)
	{
		return 0;
	}
	if (Global_3392)
	{
		return 0;
	}
	if (Global_3403)
	{
		return 1;
	}
	if (Global_3393)
	{
		return 0;
	}
	if (Global_3395 || Global_3396)
	{
		return 0;
	}
	if (Function_265(iParam0, 256))
	{
		return 0;
	}
	if (Function_273())
	{
		return 0;
	}
	return 1;
}

