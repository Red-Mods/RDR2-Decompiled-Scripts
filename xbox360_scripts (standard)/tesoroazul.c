//Decompiled with MagicRDR v1.0
//Function Count : 335
//Statics Count : 1140
//Natives Count : 525
//Parameters Count : 2

#region Local Var
	var uLocal_0 = 0;
	struct<2209> Local_1 = { 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_668 = 0;
	iLocal_669 = 0;
	iLocal_682 = 0;
	iLocal_686 = 0;
	iLocal_701 = 0;
	iLocal_702 = 0;
	iLocal_836 = 0;
	iLocal_848 = 0;
	iLocal_849 = 0;
	iLocal_850 = 0;
	iLocal_851 = 0;
	iLocal_852 = 0;
	iLocal_853 = 0;
	iLocal_854 = 0;
	iLocal_855 = 0;
	iLocal_856 = 0;
	bLocal_857 = false;
	iLocal_858 = 0;
	iLocal_859 = 0;
	iLocal_860 = 0;
	iLocal_861 = 0;
	iLocal_862 = 0;
	iLocal_863 = 0;
	iLocal_864 = 0;
	iLocal_865 = 0;
	iLocal_866 = 0;
	iLocal_867 = 0;
	bLocal_868 = false;
	bLocal_869 = false;
	bLocal_870 = false;
	iLocal_871 = 0;
	bLocal_872 = false;
	iLocal_873 = 0;
	iLocal_874 = 0;
	iLocal_875 = 0;
	iLocal_876 = 0;
	iLocal_877 = 0;
	iLocal_878 = 0;
	iLocal_887 = 0;
	bLocal_888 = false;
	bLocal_1137 = false;
	iLocal_890 = 0;
	SET_DUST_LEVEL(3);
	Function_334("Initializing TesoroAzul", 3);
	iVar0 = Function_333(&(Global_29008[iScriptParam_0]));
	if (iVar0 && Function_332(&Global_6785, iScriptParam_0))
	{
		if (Function_331(8))
		{
			bLocal_1137 = true;
			Function_330(8);
		}
	}
	while (!IS_EXITFLAG_SET())
	{
		iLocal_891 = 1000;
		switch (iLocal_890)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_890 = 1;
				}
				iLocal_891 = 0;
				break;
			
			case 0x00000001:
				if (Function_329())
				{
					iLocal_890 = 2;
				}
				iLocal_891 = 0;
				break;
			
			case 0x00000002:
				if (Function_327())
				{
					Function_326(&(Global_29008[iScriptParam_0]), 32);
					iLocal_890 = 3;
				}
				iLocal_891 = 0;
				break;
			
			case 0x00000003:
				bLocal_892 = LAUNCH_NEW_SCRIPT_WITH_ARGS("TesoroAzulVol", &iScriptParam_0, 2, 0);
				Function_325(&Global_6785, &Global_7910, iScriptParam_0);
				iLocal_890 = 5;
				if (Function_324() && Function_322())
				{
					bLocal_893 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Tesoro_Azul/TesoroAzulMP", 0);
				}
				iLocal_891 = 0;
				break;
			
			case 0x00000005:
				if (Function_321(&Global_6785, &Global_7910, iScriptParam_0))
				{
					iLocal_890 = 4;
					iLocal_891 = 0;
				}
				else
				{
					iLocal_891 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_320(&(Global_29008[iScriptParam_0]), 16) && Function_319(Global_29155[iScriptParam_010]))
				{
					iLocal_890 = 6;
				}
				iLocal_891 = 0;
				break;
			
			case 0x00000006:
				if (!Function_320(&(Global_29008[iScriptParam_0]), 256) && Function_331(2))
				{
					Function_312(0, &uLocal_894, Local_1.f_1216);
					Function_311(0, &uLocal_894, Local_1);
					Function_303(1, &uLocal_894, -3279,646f, 38,149f, 4543,188f);
					Function_311(1, &uLocal_894, Local_1);
					Function_312(2, &uLocal_894, Local_1.f_1224);
					Function_311(2, &uLocal_894, Local_1);
					Function_312(3, &uLocal_894, Local_1.f_1228);
					Function_311(3, &uLocal_894, Local_1);
					Function_312(4, &uLocal_894, Local_1.f_1232);
					Function_311(4, &uLocal_894, Local_1);
					Function_312(5, &uLocal_894, Local_1.f_1236);
					Function_311(5, &uLocal_894, Local_1);
					Function_312(6, &uLocal_894, Local_1.f_1204);
					Function_311(6, &uLocal_894, Local_1);
					Function_312(7, &uLocal_894, Local_1.f_1208);
					Function_311(7, &uLocal_894, Local_1);
					Function_312(8, &uLocal_894, Local_1.f_1212);
					Function_311(8, &uLocal_894, Local_1);
					Function_312(9, &uLocal_894, Local_1.f_1252);
					Function_311(9, &uLocal_894, Local_1);
					Function_300(&Global_6785, &Global_7910, &uLocal_894, Global_6289, iScriptParam_0);
				}
				else
				{
					iVar0 = 0;
					iLocal_1136 = 1;
				}
				if (Function_320(&(Global_29008[iScriptParam_0]), 256) || !Function_331(2))
				{
					iLocal_1136 = 1;
				}
				Function_326(&(Global_29008[iScriptParam_0]), 8);
				iLocal_890 = 7;
				iLocal_891 = 0;
				break;
			
			case 0x00000007:
				switch (Global_30619)
				{
					case 0x00000000:
						break;
					
					case 0x00000001:
						break;
					
					case 0x00000002:
						break;
					
					case 0x00000003:
						break;
				}
				iLocal_890 = 8;
				iLocal_891 = 0;
				break;
			
			case 0x00000008:
				Function_299(64);
				Function_295(2, 4294967295, 4294967295, 0, 3);
				if (Function_324())
				{
					Function_293(StackVal, 0, 0.0f, 3, Local_1, 1);
				}
				else if (Function_292(iScriptParam_0, &Global_6785, iLocal_1136))
				{
					Function_293(StackVal, 0, 0,2f, 3, Local_1, 1);
				}
				else
				{
					switch (Global_30619)
					{
						case 0x00000000:
						case 0x00000001:
							Function_293(StackVal, 0, 0,2f, 3, Local_1, 1);
							break;
						
						case 0x00000002:
							Function_293(StackVal, 0, 0,5f, 3, Local_1, 1);
							break;
						
						case 0x00000003:
							Function_293(StackVal, 0, 0,2f, 3, Local_1, 1);
							break;
						}
				}
				Function_326(&(Global_29008[iScriptParam_0]), 512);
				iLocal_890 = 9;
				iLocal_891 = 0;
				break;
			
			case 0x00000009:
				Function_290(Local_1, iScriptParam_0);
				Function_326(&(Global_29008[iScriptParam_0]), 4);
				Function_289("Finished Initializing TesoroAzul", 5.0f);
				iLocal_890 = 10;
				iLocal_891 = 0;
				if (Function_288(27, 0) || !Global_3365)
				{
					if (iVar0 && !Function_287(Global_30685[2]))
					{
						if ((!Global_3380 && !Global_3382) && !Global_3384)
						{
							iLocal_1135 = 1;
							Function_275();
						}
					}
					else
					{
						if ((Function_287(Global_30685[2]) && !Global_3380) && !Global_63096)
						{
							Function_274();
							Function_273("AA_GhostTown", 0, -1.0f, 1, 0, 0);
						}
						iVar0 = 0;
					}
				}
				Function_272(&(Global_29008[iScriptParam_0]));
				break;
			
			case 0x0000000A:
				Function_269();
				if (iVar0 && iLocal_1135)
				{
					iVar0 = Function_51(&iScriptParam_0);
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		iLocal_891 = iLocal_891;
		WAIT(false);
	}
	if (iVar0 && iLocal_1135)
	{
		Function_24();
		iLocal_1135 = 0;
	}
	if (bLocal_1137)
	{
		Function_22(8);
	}
	Function_20();
	SET_DUST_LEVEL(2);
	Function_12(&Global_6785, &Global_7910, iScriptParam_0, iLocal_1136);
	Function_11();
	Function_6();
	Function_2(iScriptParam_0);
	Function_1(&(Global_29008[iScriptParam_0]), 32);
	Function_1(&(Global_29008[iScriptParam_0]), 64);
	Function_1(&(Global_29008[iScriptParam_0]), 8);
	Function_1(&(Global_29008[iScriptParam_0]), 512);
	Function_1(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_893))
	{
		TERMINATE_SCRIPT(bLocal_893);
	}
	if (IS_SCRIPT_VALID(bLocal_892))
	{
		TERMINATE_SCRIPT(bLocal_892);
	}
	Function_289("Unloaded TesoroAzul", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x664 / 1636
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2(int iParam0) //Position: 0x67B / 1659
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

void Function_3(int iParam0) //Position: 0x6B1 / 1713
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x6D3 / 1747
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x6E9 / 1769
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x6FF / 1791
{
	Function_7(&Local_560 + 4);
	RELEASE_LAYOUT_REF(Local_560);
	return;
}

void Function_7(int iParam0) //Position: 0x713 / 1811
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_8(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x739 / 1849
{
	if (Function_10(uParam0[iParam13], 4))
	{
		if (Function_10(uParam0[iParam13], 1))
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
			Function_9(uParam0[iParam13], 1);
			Function_9(uParam0[iParam13], 2);
			Function_9(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x867 / 2151
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_10(int iParam0, int iParam1) //Position: 0x881 / 2177
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11() //Position: 0x89E / 2206
{
	Function_7(&Local_1 + 4);
	RELEASE_LAYOUT_REF(Local_1);
	return;
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x8B0 / 2224
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (StackVal != 5 && Function_324())
	{
		return;
	}
	if (Function_320(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(Function_19(iParam2), 12));
		Function_1(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (!Function_18(uParam0[iVar02], 1))
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_18(uParam0[iVar02], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
				Function_17(uParam0[iVar02], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_18(uParam0[iVar02], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_17(uParam0[iVar02], 16);
		}
		iVar0++;
	}
	if (!Function_320(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar1 = true;
	if (!Function_331(2) || Function_320(&(Global_29008[iParam2]), 256))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_18(uParam0[iVar02], 2) && !Function_18(uParam0[iVar02], 4))
		{
			Function_13(uParam0, uParam1, iVar0, bParam3);
		}
		if (bVar1)
		{
			if (Function_18(uParam0[iVar02], 2) && !Function_18(uParam0[iVar02], 4))
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
			Function_326(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_13(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xA9B / 2715
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_16(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_15(Global_29007), Function_14(Global_29007), false, 0);
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
		Function_16(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_15(Global_29007), Function_14(Global_29007), false, 0);
	}
}

int Function_14(int iParam0) //Position: 0xBEA / 3050
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

int Function_15(int iParam0) //Position: 0xC15 / 3093
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

void Function_16(var uParam0, int iParam1) //Position: 0xC49 / 3145
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_17(var uParam0, int iParam1) //Position: 0xC58 / 3160
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_18(var uParam0, int iParam1) //Position: 0xC6F / 3183
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_19(int iParam0) //Position: 0xC8B / 3211
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

void Function_20() //Position: 0x1139 / 4409
{
	if (IS_OBJECTSET_VALID(bLocal_889))
	{
		Function_21(bLocal_889);
		DESTROY_OBJECTSET(bLocal_889);
	}
	return;
}

void Function_21(bool bParam0) //Position: 0x1154 / 4436
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

void Function_22(bool bParam0) //Position: 0x1199 / 4505
{
	if (Function_23(bParam0, 1) && !Function_23(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_23(bool bParam0, bool bParam1) //Position: 0x11C6 / 4550
{
	return (bParam0 && bParam1) == 0;
}

void Function_24() //Position: 0x11D3 / 4563
{
	int iVar0;
	
	if (Function_50(Global_30741) == 2)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_FLEEING", true, false, 2, 0, true, false);
		}
	}
	iLocal_848 = 1;
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	REMOVE_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("tes_JournalID"), false);
	Function_274();
	Function_48(1);
	Function_46(32768);
	Function_45(&bLocal_840, 0x1000000);
	Function_45(&bLocal_840, 0x2000000);
	Function_45(&bLocal_840, 0x8000000);
	Function_45(&bLocal_840, 0x4000000);
	Function_44();
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_734)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_734));
	}
	Function_43(Local_808[04]);
	if (DECOR_CHECK_EXIST(Global_34573, "TES_LawHelping"))
	{
		Function_40();
		DECOR_REMOVE(Global_34573, "TES_LawHelping");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "TES_SpawnedPreacher"))
	{
		DECOR_REMOVE(Global_34573, "TES_SpawnedPreacher");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "TES_SpawnedProstitute"))
	{
		DECOR_REMOVE(Global_34573, "TES_SpawnedProstitute");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "TES_SpawnedDealer"))
	{
		DECOR_REMOVE(Global_34573, "TES_SpawnedDealer");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "TES_SpawnedSupplier"))
	{
		DECOR_REMOVE(Global_34573, "TES_SpawnedSupplier");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "tes_spawnedBoss"))
	{
		DECOR_REMOVE(Global_34573, "tes_spawnedBoss");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "TES_BossKeepUpdating"))
	{
		DECOR_REMOVE(Global_34573, "TES_BossKeepUpdating");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "TES_UnlockGate"))
	{
		DECOR_REMOVE(Global_34573, "TES_UnlockGate");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "TES_BossDead"))
	{
		DECOR_REMOVE(Global_34573, "TES_BossDead");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "TES_churchSquadBlip1"))
	{
		DECOR_REMOVE(Global_34573, "TES_churchSquadBlip1");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "TES_churchSquadBlip2"))
	{
		DECOR_REMOVE(Global_34573, "TES_churchSquadBlip2");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "tes_gateGuyReady01"))
	{
		DECOR_REMOVE(Global_34573, "tes_gateGuyReady01");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "tes_gateGuyReady02"))
	{
		DECOR_REMOVE(Global_34573, "tes_gateGuyReady02");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "DeputyReleased"))
	{
		DECOR_REMOVE(Global_34573, "DeputyReleased");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "TES_BossDead01"))
	{
		DECOR_REMOVE(Global_34573, "TES_BossDead01");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "SpawnedOnLeft"))
	{
		DECOR_REMOVE(Global_34573, "SpawnedOnLeft");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "SpawnedOnRight"))
	{
		DECOR_REMOVE(Global_34573, "SpawnedOnRight");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "BossIsDead"))
	{
		DECOR_REMOVE(Global_34573, "BossIsDead");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "PlayerInVolume"))
	{
		DECOR_REMOVE(Global_34573, "PlayerInVolume");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "PreacherDead"))
	{
		DECOR_REMOVE(Global_34573, "PreacherDead");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "DeputyDied"))
	{
		DECOR_REMOVE(Global_34573, "DeputyDied");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "BossScriptRunning"))
	{
		DECOR_REMOVE(Global_34573, "BossScriptRunning");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "TES_ResetSheriffTimer"))
	{
		DECOR_REMOVE(Global_34573, "TES_ResetSheriffTimer");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "DeputyDiedForSheriff"))
	{
		DECOR_REMOVE(Global_34573, "DeputyDiedForSheriff");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "ReadyForEnding"))
	{
		DECOR_REMOVE(Global_34573, "ReadyForEnding");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "PimpIsDead"))
	{
		DECOR_REMOVE(Global_34573, "PimpIsDead");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "TES_InsideHouse"))
	{
		DECOR_REMOVE(Global_34573, "TES_InsideHouse");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "InTownWithoutSheriff"))
	{
		DECOR_REMOVE(Global_34573, "InTownWithoutSheriff");
	}
	if (DECOR_CHECK_EXIST(bLocal_735, "AA_Exit"))
	{
		DECOR_REMOVE(bLocal_735, "AA_Exit");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "SheriffNotNatural"))
	{
		DECOR_REMOVE(Global_34573, "SheriffNotNatural");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "IntroCoverExit"))
	{
		DECOR_REMOVE(Global_34573, "IntroCoverExit");
	}
	if (IS_VOLUME_VALID(bLocal_748))
	{
		DESTROY_VOLUME(bLocal_748);
	}
	bLocal_840 = false;
	Function_38(&uLocal_708, 0);
	Function_38(&uLocal_718, 0);
	Function_37(&Local_808, &vLocal_825);
	if (IS_ACTOR_VALID(bLocal_734))
	{
		RELEASE_ACTOR(bLocal_734);
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (SQUAD_IS_VALID(Local_808[iVar04]))
		{
			SQUAD_MAKE_EMPTY(Local_808[iVar04]);
			DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(Local_808[iVar04]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (SQUAD_IS_VALID(vLocal_825[iVar03]))
		{
			SQUAD_MAKE_EMPTY(vLocal_825[iVar03]);
			DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(vLocal_825[iVar03]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (SQUAD_IS_VALID(uLocal_743[iVar0]))
		{
			SQUAD_MAKE_EMPTY(uLocal_743[iVar0]);
			DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(uLocal_743[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		Function_35(&Global_6785, &Global_7910, iVar0, 0);
		iVar0++;
	}
	if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(bLocal_837)))
	{
		DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_837));
	}
	if (IS_LAYOUTREF_VALID(bLocal_747))
	{
		RELEASE_LAYOUT_OBJECTS(bLocal_747);
		RELEASE_LAYOUT_REF(bLocal_747);
	}
	if (Function_50(Global_30741) == 2)
	{
		Function_25(Global_30741);
	}
	if (!ACTOR_HAS_WEAPON(Global_34573, 6))
	{
		SET_WEAPONENUM_LOCKED(6, 1);
	}
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	Function_7(&bLocal_755);
	return;
}

void Function_25(int iParam0) //Position: 0x1A4B / 6731
{
	var uVar0;
	
	if (!Function_33(iParam0))
	{
		Function_31();
		return;
	}
	uVar0 = Function_30(iParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_26("DEED_CANCEL", iParam0);
	}
	Global_13172[iParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_26(char* cParam0, bool bParam1) //Position: 0x1A9E / 6814
{
	struct<4> Var0;
	
	if (!Function_33(bParam1))
	{
		return;
	}
	switch (Function_30(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_27(Function_28(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_30(bParam1), Function_28(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_30(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_30(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_30(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_30(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_30(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_27(int iParam0) //Position: 0x1BC2 / 7106
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_28(bool bParam0) //Position: 0x1BE7 / 7143
{
	if (!Function_29(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_29(int iParam0) //Position: 0x1C07 / 7175
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_30(bool bParam0) //Position: 0x1C1E / 7198
{
	if (!Function_29(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_31() //Position: 0x1C39 / 7225
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
			Function_32(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_32(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1E80 / 7808
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

bool Function_33(int iParam0) //Position: 0x1EA9 / 7849
{
	if (!Function_29(iParam0))
	{
		return 0;
	}
	if (!Function_34(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_34(int iParam0) //Position: 0x1ECD / 7885
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_35(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1EE2 / 7906
{
	int iVar0;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_18(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_18(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_18(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_17(uParam0[iVar02], 8);
	}
	Function_17(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_36(StackVal);
	if (bParam3)
	{
		Function_13(uParam0, uParam1, uParam2, 0);
	}
}

int Function_36(bool bParam0) //Position: 0x1F7C / 8060
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

void Function_37(var uParam0, int iParam1) //Position: 0x2016 / 8214
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (SQUAD_IS_VALID((*uParam0)[iVar04]))
		{
			SQUAD_GOALS_CLEAR((*uParam0)[iVar04]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (SQUAD_IS_VALID((*iParam1)[iVar03]))
		{
			SQUAD_GOALS_CLEAR((*iParam1)[iVar03]);
		}
		iVar0++;
	}
	return;
}

void Function_38(var uParam0, int iParam1) //Position: 0x206A / 8298
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (IS_DOOR_VALID((*uParam0)[iVar0]))
		{
			if (IS_DOOR_LOCKED((*uParam0)[iVar0]))
			{
				Function_39((*uParam0)[iVar0], iParam1);
			}
		}
		iVar0++;
	}
	return;
}

void Function_39(bool bParam0, bool bParam1) //Position: 0x20AA / 8362
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

void Function_40() //Position: 0x20FB / 8443
{
	if (SQUAD_IS_VALID(bLocal_673))
	{
		Function_41(&bLocal_673, 1, 0);
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(bLocal_673));
	}
	return;
}

void Function_41(bool bParam0, bool bParam1, bool bParam2) //Position: 0x211B / 8475
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (bParam2)
			{
				if (!Function_42(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_42(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x2197 / 8599
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_43(bool bParam0) //Position: 0x21B1 / 8625
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

void Function_44() //Position: 0x21FE / 8702
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_45(int iParam0, bool bParam1) //Position: 0x2213 / 8723
{
	*iParam0 = (*iParam0 - (*iParam0 && bParam1));
	return;
}

void Function_46(int iParam0) //Position: 0x2226 / 8742
{
	Function_47(&Global_28842, iParam0);
	return;
}

void Function_47(var uParam0, int iParam1) //Position: 0x2234 / 8756
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_48(int iParam0) //Position: 0x224F / 8783
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_49())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_49() //Position: 0x228B / 8843
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

int Function_50(int iParam0) //Position: 0x22B0 / 8880
{
	if (!Function_33(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_51(int iParam0) //Position: 0x22CA / 8906
{
	vector3 vVar0;
	bool bVar3;
	vector3 vVar4;
	var uVar7;
	
	if (!Function_320(&(Global_29008[*iParam0]), 8))
	{
		return 0;
	}
	if (!Function_268(&iLocal_753))
	{
		REMOVE_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("tes_JournalID"), false);
		Function_24();
		return 0;
	}
	switch (iLocal_836)
	{
		case 0x00000000:
			if (Function_263(&bLocal_755))
			{
				Function_259(&uLocal_721);
				Function_255(&bLocal_747, &Local_808, &uLocal_721, &vLocal_825, &bLocal_734, &bLocal_840);
				Function_254(&uLocal_721);
				Function_253(&bLocal_747, &uLocal_736, &uLocal_743);
				Function_250(&bLocal_747, &uLocal_752, &uLocal_751);
				Function_249(&uLocal_721);
				bLocal_839 = GET_GRINGO_FROM_OBJECT(Local_1.f_2168);
				bLocal_837 = LOCATE_GRINGO_OF_TYPE("sit_headinhands", &Local_1 + 1680, 1.0f, 1);
				if (!IS_GRINGO_VALID(bLocal_837))
				{
					LOG_ERROR("SheriffGringo IS INVALID");
				}
				if (!IS_GRINGO_VALID(bLocal_839))
				{
					LOG_ERROR("shakeHandsGringo IS INVALID");
				}
				if (Function_23(bLocal_840, 0x40000000))
				{
					Function_248(&bLocal_840, 2147483648);
					Function_247(&bLocal_747, &bLocal_735, &uLocal_739, &bLocal_746);
				}
				else
				{
					Function_244(&bLocal_747, &bLocal_840, &bLocal_734, &vLocal_825, &bLocal_735, &uLocal_739, &bLocal_746, &uLocal_750);
				}
				Function_243(Local_1.f_2112);
				vLocal_842 = { StackVal, StackVal, Function_243(Local_1.f_2112) };
				bLocal_742 = GET_ACTORS_HORSE(Global_34573);
				TASK_STAND_STILL(bLocal_742, -1.0f, 0, 0);
				Function_243(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_TeleportHorse"));
				vLocal_845 = { StackVal, StackVal, Function_243(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_TeleportHorse")) };
				bLocal_749 = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_CheckPlayerHorse");
				iLocal_836 = 1;
			}
			break;
		
		case 0x00000001:
			if (IS_VOLUME_VALID(Local_1.f_260))
			{
				DELETE_PROJECTILES_IN_VOLUME(Local_1.f_260);
				FIRE_STOP_FLAMES_IN_VOLUME(Local_1.f_260);
			}
			if (!iLocal_876)
			{
				if (DECOR_CHECK_EXIST(Global_34573, "TES_InsideHouse") || DECOR_CHECK_EXIST(Global_34573, "BossScriptRunning"))
				{
					if (IS_VOLUME_VALID(Local_1.f_260))
					{
						DESTROY_VOLUME(Local_1.f_260);
					}
					SET_ACTOR_INVULNERABILITY(bLocal_735, false);
					iLocal_876 = 1;
				}
			}
			if (!iLocal_877)
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, Local_1.f_192) && !DECOR_CHECK_EXIST(Global_34573, "BossScriptRunning"))
				{
					Function_39(uLocal_718[0], 0);
					Function_39(uLocal_718[1], 0);
					iLocal_877 = 1;
					iLocal_878 = 0;
				}
			}
			if (!iLocal_878)
			{
				if ((iLocal_877 && !IS_ACTOR_IN_VOLUME(Global_34573, Local_1.f_192)) && !DECOR_CHECK_EXIST(Global_34573, "BossScriptRunning"))
				{
					Function_242(uLocal_718[0], 0);
					Function_242(uLocal_718[1], 0);
					iLocal_877 = 0;
					iLocal_878 = 1;
				}
			}
			if (!Function_23(bLocal_840, 0x40000000))
			{
				if (!iLocal_865)
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, Local_1.f_252))
					{
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_241("tes_SheriffObj", 0x40f00000, 1, 2, 0, 0, 0);
						APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("tes_JournalID"), "tes_SheriffObj", 0, 0, false);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("tes_JournalID"), 0);
						if (!Function_50(Global_30741) != 2)
						{
							Function_240(Global_30741, 1);
							Global_3385 = 1;
							SET_PLAYER_ENDLESS_READYMODE(0, 1);
						}
						iLocal_865 = 1;
					}
				}
			}
			else if (!iLocal_865)
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, Local_1.f_252))
				{
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_241("tes_MainObj", 0x40f00000, 1, 2, 0, 0, 0);
					APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("tes_JournalID"), "tes_SheriffObj", 0, 0, false);
					APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("tes_JournalID"), 0);
					Function_239(Local_808[04], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					if (!Function_50(Global_30741) != 2)
					{
						Function_240(Global_30741, 1);
						Global_3385 = 1;
					}
					if (IS_ACTOR_VALID(uLocal_736[0]))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(uLocal_736[0])))
						{
							ADD_BLIP_FOR_ACTOR(uLocal_736[0], 322, 0, 2, 0);
						}
					}
					if (IS_ACTOR_VALID(uLocal_736[1]))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(uLocal_736[1])))
						{
							ADD_BLIP_FOR_ACTOR(uLocal_736[1], 322, 0, 2, 0);
						}
					}
					iLocal_865 = 1;
				}
			}
			Function_237("sc_challenge_aa_06", &iLocal_796);
			Function_236(&Local_808, &uLocal_743);
			if (DECOR_CHECK_EXIST(Global_34573, "BossIsDead") && !iLocal_863)
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_734)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_734));
					iLocal_863 = 1;
				}
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_1.f_108) && !iLocal_861)
			{
				Function_235(Local_808[04], -1.0f);
				Function_235(uLocal_743[0], -1.0f);
				Function_239(uLocal_743[0], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				if (SQUAD_GET_SIZE(vLocal_825[03]) == 1)
				{
					if (SQUAD_IS_VALID(vLocal_825[03]))
					{
						if (!Function_234(vLocal_825[03], 0x3f800000, 0x42960000, 1, 1))
						{
							Function_233(vLocal_825[03]);
						}
					}
				}
				if (HUD_IS_SHOWING_OBJECTIVE())
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
				}
				Function_241("tes_mainObj", 0x40f00000, 1, 2, 0, 0, 0);
				CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("tes_JournalID"), 0);
				APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("tes_JournalID"), "tes_mainObj", 0, 0, false);
				APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("tes_JournalID"), 0);
				iLocal_861 = 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_1.f_108) && !iLocal_867)
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
				iLocal_867 = 1;
			}
			if (Function_23(bLocal_840, 0x40000000) && !iLocal_859)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(vLocal_825[03]) == 0)
				{
					TASK_CLEAR(uLocal_736[0]);
					TASK_CLEAR(uLocal_736[1]);
					Function_39(uLocal_708[0], 0);
					Function_39(uLocal_708[1], 0);
					OPEN_DOOR_DIRECTION(uLocal_708[0], false);
					OPEN_DOOR_DIRECTION(uLocal_708[1], true);
					if (IS_ACTOR_VALID(uLocal_736[0]))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(uLocal_736[0])))
						{
							ADD_BLIP_FOR_ACTOR(uLocal_736[0], 322, 0, 2, 0);
						}
					}
					if (IS_ACTOR_VALID(uLocal_736[1]))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(uLocal_736[1])))
						{
							ADD_BLIP_FOR_ACTOR(uLocal_736[1], 322, 0, 2, 0);
						}
					}
					vVar0 = { -3220,429f, 38,204f, 4536,344f };
					SET_ACTOR_MIN_SPEED(uLocal_736[0], 2);
					SET_ACTOR_MIN_SPEED(uLocal_736[1], 2);
					TASK_SHOOT_ENEMIES_FROM_POSITION(uLocal_736[0], &Local_1 + 1512, 0.0f, -1.0f);
					TASK_SHOOT_ENEMIES_FROM_POSITION(uLocal_736[1], &Local_1 + 1540, 0.0f, -1.0f);
					SET_ACTOR_STAY_WITHIN_VOLUME(uLocal_736[0], Local_1.f_184, 2, true);
					SET_ACTOR_STAY_WITHIN_VOLUME(uLocal_736[1], Local_1.f_184, 2, true);
					iLocal_859 = 1;
				}
			}
			if (Function_23(bLocal_840, 0x40000000) && !iLocal_860)
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, Local_1.f_128))
				{
					Function_235(Local_808[04], -1.0f);
					iLocal_860 = 1;
				}
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_1.f_200) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_808[04]) != 0)
			{
				if (!Function_23(iLocal_879, 1))
				{
					Function_248(&iLocal_879, 1);
					iLocal_836 = 12;
					break;
				}
			}
			if (!IS_ACTOR_IN_VOLUME(Global_34573, Local_1.f_240) && !iLocal_855)
			{
				Function_231(Local_808[04], 0, 0, 0);
				iLocal_855 = 1;
				iLocal_856 = 0;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_1.f_240) && !iLocal_856)
			{
				Function_231(Local_808[04], 1, 1, 1);
				iLocal_856 = 1;
				iLocal_855 = 0;
			}
			if (!Function_23(bLocal_840, 16384))
			{
				Function_248(&bLocal_840, 16384);
				bLocal_742 = GET_ACTORS_HORSE(Global_34573);
				TASK_STAND_STILL(bLocal_742, -1.0f, 0, 0);
			}
			Function_230(&iLocal_866, &uLocal_708, &(iLocal_753[0]));
			if (Function_23(bLocal_840, 0x40000000))
			{
				if (!iLocal_851)
				{
					if (Function_228(Global_34573, vLocal_825[03], 1, 1, 1, 35.0f))
					{
						Function_239(vLocal_825[03], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					iLocal_851 = 1;
				}
			}
			if (!iLocal_852)
			{
				if (SQUAD_GET_SIZE(vLocal_825[03]) == 1)
				{
					if (Function_228(Global_34573, vLocal_825[03], 1, 1, 1, 5.0f) || IS_PLAYER_TARGETTING_ACTOR(false, SQUAD_GET_ACTOR_BY_INDEX(vLocal_825[03], false), 1))
					{
						SQUAD_SET_FACTION(vLocal_825[03], 19);
						Function_227(vLocal_825[03], Global_34573, 4);
						Function_226(vLocal_825[03], Global_34573, 1);
						TASK_SHOOT_ENEMIES_FROM_COVER(SQUAD_GET_ACTOR_BY_INDEX(vLocal_825[03], false), GET_COVER_LOCATION_FROM_OBJECT(Local_1.f_2188), -1.0f, 5.0f);
						iLocal_852 = 1;
						if (!Function_225(vLocal_825[03], 1))
						{
							Function_239(vLocal_825[03], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
						if (!Function_50(Global_30741) != 2)
						{
							Function_240(Global_30741, 1);
							Global_3385 = 1;
							SET_PLAYER_ENDLESS_READYMODE(0, 1);
						}
					}
				}
			}
			if (!Function_23(bLocal_840, 0x40000000))
			{
				if (!iLocal_862)
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(uLocal_743[0]) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(vLocal_825[03]) != 0)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_274();
						Function_241("tes_MainObj", 0x40f00000, 1, 2, 0, 0, 0);
						Function_239(Local_808[04], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(bLocal_792, 0);
						APPEND_JOURNAL_ENTRY_DETAIL(bLocal_792, "tes_MainObj", 0, 0, false);
						APPEND_JOURNAL_ENTRY(bLocal_792, 0);
						Function_224(bLocal_734, Local_808[04]);
						iLocal_862 = 1;
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_1.f_108) && !Function_23(bLocal_840, 16384))
			{
				Function_248(&bLocal_840, 16384);
				Function_39(uLocal_708[0], 0);
				Function_39(uLocal_708[1], 0);
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_1.f_236) && !Function_23(bLocal_840, 1))
			{
				SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(uLocal_721[2], Local_1.f_232, 4, 1);
				Function_248(&bLocal_840, 1);
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_1.f_128) && !Function_23(bLocal_840, 0x10000000))
			{
				DECOR_SET_BOOL(Global_34573, "PlayerInVolume", true);
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_808[04], false))))
				{
					Function_239(Local_808[04], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
				Function_39(Function_222("tesoroAzul", "house03", 1), 0);
				Function_248(&bLocal_840, 0x10000000);
			}
			Function_221();
			if (Function_219(&uLocal_793, &uLocal_713, &Local_808) && !iLocal_849)
			{
				iLocal_849 = 1;
				Function_218(Local_808[14], 1, 1);
				Function_217(Local_808[14], Local_1.f_112, 1, 2);
				Function_215(Local_808[14]);
			}
			if ((!Function_23(bLocal_840, 0x40000000) && !Function_23(bLocal_840, 2147483648)) && DECOR_CHECK_EXIST(Global_34573, "Trigger_TES_Intro"))
			{
				DECOR_REMOVE(Global_34573, "Trigger_TES_Intro");
				bVar3 = GET_ACTORS_HORSE(Global_34573);
				if (IS_ACTOR_VALID(bVar3))
				{
					if (IS_ACTOR_IN_VOLUME(bVar3, bLocal_749))
					{
						TELEPORT_ACTOR(bVar3, &vLocal_845, 1, 1, 1);
					}
				}
				iLocal_836 = 7;
				break;
			}
			if (!DECOR_CHECK_EXIST(Global_34573, "TES_churchSquadBlip1"))
			{
				Function_214(&Local_808);
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_808[04]) < 2)
			{
				DECOR_SET_BOOL(Global_34573, "TES_churchSquadBlip1", true);
			}
			if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_808[04]) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_808[14]) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(vLocal_825[03]) != 0) && DECOR_CHECK_EXIST(Global_34573, "PreacherDead"))
			{
				DECOR_SET_BOOL(Global_34573, "ReadyForEnding", true);
				if (!Function_23(bLocal_840, 64))
				{
					Function_39(Function_222("tesoroAzul", "House01", 1), 0);
					Function_39(Function_222("tesoroAzul", "House01", 2), 0);
					Function_248(&bLocal_840, 64);
				}
				if (!Function_23(bLocal_840, 0x20000000))
				{
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_241("tes_deputyObj", 0x40f00000, 1, 2, 0, 0, 0);
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(bLocal_792, 0);
					APPEND_JOURNAL_ENTRY_DETAIL(bLocal_792, "tes_deputyObj", 0, 0, false);
					APPEND_JOURNAL_ENTRY(bLocal_792, 0);
					AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
					Function_213(&iLocal_802);
					Function_211(&iLocal_802);
					Function_248(&bLocal_840, 0x20000000);
				}
			}
			if (!iLocal_864)
			{
				if (DECOR_CHECK_EXIST(Global_34573, "ReadyForEnding"))
				{
					if (Function_210(&iLocal_802))
					{
						if (Function_208(&iLocal_802) < 5.0f)
						{
							Function_207();
							iLocal_864 = 1;
						}
					}
				}
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_746) == 0)
			{
				if (!Function_23(bLocal_840, 128))
				{
					Function_248(&bLocal_840, 128);
					DECOR_SET_BOOL(Global_34573, "DeputyDiedForSheriff", true);
				}
			}
			if (Function_202(&bLocal_840, &bLocal_735, &bLocal_747, &bLocal_857, &iLocal_858, &bLocal_734, &bLocal_839))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_735)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_735));
				}
				if (!iLocal_854)
				{
					iLocal_854 = 1;
					Function_201(Global_30741, 0);
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(bLocal_792, 0);
					APPEND_JOURNAL_ENTRY(bLocal_792, 1);
					if (Function_210(&iLocal_796))
					{
						bLocal_841 = Function_208(&iLocal_796);
					}
					if (Function_210(&iLocal_796))
					{
						if (Function_200(465) < 0.0f)
						{
							if (bLocal_841 > Function_200(465))
							{
								Function_199(465, bLocal_841, 0);
							}
						}
						else
						{
							Function_199(465, bLocal_841, 0);
						}
					}
					SET_PLAYER_ENDLESS_READYMODE(0, 0);
					if (Function_198(Global_30737) > 1)
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(13))
						{
							AWARD_ACHIEVEMENT(13);
						}
					}
				}
				if (IS_ACTOR_ALIVE(bLocal_735) && !IS_PLAYER_DEADEYE(0))
				{
					if (!DECOR_CHECK_EXIST(Global_34573, "DeputyDied"))
					{
						if (DECOR_CHECK_EXIST(Global_34573, "DeputyReleased"))
						{
							if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Global_34573, "DeputyReleased")) < 2.0f)
							{
								if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_746) == 1)
								{
									if (IS_ACTOR_ALIVE(bLocal_735))
									{
										if (!bLocal_857)
										{
											if (!DECOR_CHECK_EXIST(Global_34573, "PlayerNotVolume"))
											{
												Function_195(0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1);
												UI_PUSH("CutsceneWithMessages");
												Function_190(bLocal_747, 0, 1, 0, 0);
												TELEPORT_ACTOR_WITH_HEADING(Global_34573, *(&Local_1 + 1948), 90.0f, 0, false, 0);
												TELEPORT_ACTOR_WITH_HEADING(uLocal_739[0], *(&Local_1 + 1892), -85.0f, 1, true, 1);
												TELEPORT_ACTOR_WITH_HEADING(uLocal_739[1], *(&Local_1 + 1920), -80.0f, 1, true, 1);
												TASK_STAND_STILL(uLocal_739[0], -1.0f, 0, 0);
												TASK_STAND_STILL(uLocal_739[1], -1.0f, 0, 0);
												if (IS_ACTOR_VALID(bLocal_734))
												{
													DESTROY_ACTOR(bLocal_734);
													DECOR_SET_BOOL(Global_34573, "SheriffNotNatural", true);
												}
												Function_213(&iLocal_799);
												Function_211(&iLocal_799);
												iLocal_836 = 2;
											}
											else if (DECOR_CHECK_EXIST(Global_34573, "PlayerNotVolume"))
											{
												if (!Function_210(&iLocal_805))
												{
													Function_213(&iLocal_805);
												}
												bLocal_872 = true;
												if (IS_ACTOR_VALID(bLocal_735))
												{
													if (IS_ACTOR_ALIVE(bLocal_735))
													{
														DESTROY_ACTOR(bLocal_735);
														bLocal_869 = true;
													}
												}
												iLocal_836 = 4;
											}
										}
										else if (bLocal_857)
										{
											if (!Function_210(&iLocal_805))
											{
												Function_213(&iLocal_805);
											}
											bLocal_872 = true;
											if (IS_ACTOR_VALID(bLocal_735))
											{
												if (IS_ACTOR_ALIVE(bLocal_735))
												{
													DESTROY_ACTOR(bLocal_735);
													bLocal_869 = true;
												}
											}
											iLocal_836 = 4;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (!Function_210(&iLocal_805))
					{
						Function_213(&iLocal_805);
					}
					bLocal_872 = true;
					iLocal_836 = 4;
				}
			}
			if (!Function_23(bLocal_840, 0x40000000))
			{
				if (!Function_23(bLocal_840, 2147483648))
				{
					if (!Function_174(&bLocal_734, &vLocal_825, &uLocal_708, &bLocal_734, &uLocal_743, &uLocal_838, &bLocal_839, &iLocal_853, &uLocal_750, &iLocal_858))
					{
						Function_45(&bLocal_840, 1024);
						Function_248(&bLocal_840, 2147483648);
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!bLocal_870)
			{
				if (Function_210(&iLocal_799))
				{
					if (Function_208(&iLocal_799) < 10.0f)
					{
						if (IS_ACTOR_VALID(bLocal_735))
						{
							DESTROY_ACTOR(bLocal_735);
							bLocal_869 = true;
						}
						if (IS_ACTOR_VALID(uLocal_739[0]))
						{
							DESTROY_ACTOR(uLocal_739[0]);
						}
						if (IS_ACTOR_VALID(uLocal_739[1]))
						{
							DESTROY_ACTOR(uLocal_739[1]);
						}
						PRINT_BIG("TES_PrintBig", 1084227584, 0, 2, 0);
						bLocal_870 = true;
					}
				}
			}
			if (bLocal_870)
			{
				if (!iLocal_871)
				{
					if (Function_210(&iLocal_799))
					{
						if (Function_208(&iLocal_799) < 18.0f)
						{
							SET_CAMERA_POSITION(GET_GAME_CAMERA(), -3242,17f, 39,22358f, 4563,479f);
							SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 0.0f, 90.0f, 0.0f, 0);
							Function_172(2, 0, 1, 1, 1, 1, 0, 1, 0, 1);
							UI_POP("CutsceneWithMessages");
							Function_170(Function_171(1, 1, 1, 0, 0), 1);
							if (bLocal_869)
							{
								Function_166(200, 1, 0);
								Function_153(50, 1, 0);
							}
							else
							{
								Function_166(100, 1, 0);
							}
							Function_151(9, 0, 1);
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_120(Global_30741);
							Function_69(Global_30741, 1, 1, 0);
							iLocal_871 = 1;
							iLocal_836 = 6;
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			if (bLocal_872)
			{
				if (!iLocal_873)
				{
					if (Function_210(&iLocal_805))
					{
						if (Function_208(&iLocal_805) < 2.0f)
						{
							if (IS_ACTOR_VALID(bLocal_734))
							{
								DESTROY_ACTOR(bLocal_734);
							}
							TELEPORT_ACTOR_WITH_HEADING(Global_34573, *(&Local_1 + 1948), 90.0f, 0, false, 0);
							Function_195(0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1);
							UI_PUSH("CutsceneWithMessages");
							Function_65(bLocal_747, 0, 1, 0, 0);
							if (Function_210(&iLocal_805))
							{
								Function_211(&iLocal_805);
							}
							iLocal_873 = 1;
						}
					}
				}
			}
			if (bLocal_872)
			{
				if (!iLocal_874)
				{
					if (Function_210(&iLocal_805))
					{
						if (Function_208(&iLocal_805) < 3.0f)
						{
							if (IS_ACTOR_VALID(uLocal_739[0]))
							{
								DESTROY_ACTOR(uLocal_739[0]);
							}
							if (IS_ACTOR_VALID(uLocal_739[1]))
							{
								DESTROY_ACTOR(uLocal_739[1]);
							}
							PRINT_BIG("TES_PrintBig", 1084227584, 0, 2, 0);
							iLocal_874 = 1;
						}
					}
				}
			}
			if (bLocal_872)
			{
				if (!iLocal_875)
				{
					if (Function_210(&iLocal_805))
					{
						if (Function_208(&iLocal_805) < 12.0f)
						{
							SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), 0.0f, 90.0f, 0.0f, 0);
							Function_172(2, 0, 1, 1, 1, 1, 0, 1, 0, 1);
							UI_POP("CutsceneWithMessages");
							if (bLocal_869)
							{
								Function_166(200, 1, 0);
								Function_153(50, 1, 0);
							}
							else if (!bLocal_869)
							{
								Function_166(100, 1, 0);
							}
							Function_170(Function_171(1, 1, 1, 0, 0), 1);
							Function_151(9, 0, 1);
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_120(Global_30741);
							Function_69(Global_30741, 1, 1, 0);
							iLocal_836 = 6;
							iLocal_875 = 1;
						}
					}
				}
			}
			break;
		
		case 0x00000006:
			if (!iLocal_848)
			{
				Function_24();
				iLocal_848 = 1;
			}
			break;
		
		case 0x0000000C:
			Function_211(&iLocal_880);
			iLocal_753[0] = LAUNCH_NEW_SCRIPT("$/content/Ambient/Regional/TES/event_tes_mb_Prea", 0);
			Function_248(&bLocal_840, 2048);
			iLocal_836 = 13;
			break;
		
		case 0x0000000D:
			if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TES_Preacher_Layout")))
			{
				bLocal_883 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_Preacher_Layout"), "Preacher");
				if (IS_ACTOR_VALID(bLocal_883))
				{
					GET_OBJECT_POSITION(Local_1.f_2152, &vVar4);
					GET_OBJECT_ORIENTATION(Local_1.f_2152, &uVar7);
					SET_OBJECT_POSITION(bLocal_883, vVar4);
					SET_OBJECT_ORIENTATION(bLocal_883, vVar4);
					DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_883);
					SET_WEAPONENUM_LOCKED(16, 0);
					GIVE_WEAPON_TO_ACTOR(bLocal_883, 16, false, 1, 1);
					ACTOR_PUT_WEAPON_IN_HAND(bLocal_883, 16, 1);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_883, 0);
					Function_211(&iLocal_880);
					iLocal_836 = 14;
				}
				else
				{
					iLocal_836 = 1;
				}
			}
			break;
		
		case 0x0000000E:
			if (ACTOR_HAS_WEAPON_IN_HAND(bLocal_883, 16))
			{
				TASK_USE_GRINGO(bLocal_883, GET_GRINGO_FROM_OBJECT(Local_1.f_2152), "UseCase1", true, 1);
				SAY_SINGLE_LINE_CONTEXT(bLocal_883, 60, false, 1, 0, 2, 4294967295, 4294967295, 0, 1);
				iLocal_836 = 15;
			}
			if (Function_23(bLocal_840, 2048))
			{
				if (!IS_ACTOR_VALID(bLocal_883))
				{
					iLocal_836 = 1;
				}
			}
			break;
		
		case 0x0000000F:
			if (IS_ACTOR_VALID(bLocal_883))
			{
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_883)))
				{
					iLocal_850 = 1;
				}
				else if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_883)) && iLocal_850)
				{
					DECOR_SET_BOOL(bLocal_883, "nTriggerAI", true);
					TASK_STAND_STILL(bLocal_883, -1.0f, 0, 0);
					iLocal_836 = 1;
				}
			}
			else
			{
				iLocal_836 = 1;
			}
			break;
		
		case 0x00000007:
			if (!Function_50(Global_30741) != 2)
			{
				Function_240(Global_30741, 1);
				Global_3385 = 1;
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
			}
			HUD_CLEAR_HELP();
			HUD_CLEAR_HELP_QUEUE();
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_195(0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1);
			bLocal_884 = Function_61(bLocal_747, 0, 1, 0, 0);
			Function_60(&vLocal_825);
			bLocal_885 = CREATE_VOLUME_IN_LAYOUT(bLocal_747, Function_59(), 3, -3218,79f, 37,14f, 4534,36f, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 6.0f);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_885);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_885);
			CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_885, 15);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(bLocal_885);
			bLocal_886 = GET_WEAPON_IN_HAND(Global_34573);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			ACTOR_START_FORCE_HOLSTER(Global_34573, 0, 0);
			Function_57(Global_34573, 0);
			RESET_ANIM_SET_FOR_ACTOR(Global_34573, false);
			TELEPORT_ACTOR_WITH_HEADING(Global_34573, vLocal_842, 60,751f, 0, false, 0);
			SET_PLAYER_POSTURE(0, 1, 0);
			SET_ANIM_SET_FOR_ACTOR(Global_34573, "AA_tesoro_intro_cover", 0);
			SET_ACTION_NODE_FOR_ACTOR(Global_34573, "AA_tesoro_intro_cover/Player/Ply_Pre");
			Function_211(&iLocal_880);
			iLocal_836 = 8;
			break;
		
		case 0x00000008:
			if (Function_210(&iLocal_880))
			{
				if (Function_208(&iLocal_880) < 0,5f)
				{
					Function_55();
					SET_FORCED_LOOK_ENABLE(Global_34573, 0);
					SET_AUTO_CONVERSATION_LOOK(Global_34573, 0);
					iLocal_836 = 9;
				}
			}
			break;
		
		case 0x00000009:
			if (Function_210(&iLocal_880))
			{
				if (Function_208(&iLocal_880) <= 2.0f)
				{
					Function_235(Local_808[04], -1.0f);
					Function_248(&bLocal_840, 524288);
					Function_211(&iLocal_880);
					iLocal_836 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (Function_210(&iLocal_880))
			{
				if (Function_208(&iLocal_880) <= 6.0f)
				{
					Function_54(&vLocal_825);
					TASK_CLEAR(uLocal_736[0]);
					TASK_CLEAR(uLocal_736[1]);
					Function_39(uLocal_708[0], 0);
					Function_39(uLocal_708[1], 0);
					OPEN_DOOR_DIRECTION(uLocal_708[0], false);
					OPEN_DOOR_DIRECTION(uLocal_708[1], true);
					if (IS_ACTOR_VALID(uLocal_736[0]))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(uLocal_736[0])))
						{
							ADD_BLIP_FOR_ACTOR(uLocal_736[0], 322, 0, 2, 0);
						}
					}
					if (IS_ACTOR_VALID(uLocal_736[1]))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(uLocal_736[1])))
						{
							ADD_BLIP_FOR_ACTOR(uLocal_736[1], 322, 0, 2, 0);
						}
					}
					SET_ACTOR_MIN_SPEED(uLocal_736[0], 2);
					SET_ACTOR_MIN_SPEED(uLocal_736[1], 2);
					TASK_SHOOT_ENEMIES_FROM_POSITION(uLocal_736[0], &Local_1 + 1512, -34.0f, -1.0f);
					TASK_SHOOT_ENEMIES_FROM_POSITION(uLocal_736[1], &Local_1 + 1540, -30.0f, -1.0f);
					SET_ACTOR_STAY_WITHIN_VOLUME(uLocal_736[0], Local_1.f_184, 2, true);
					SET_ACTOR_STAY_WITHIN_VOLUME(uLocal_736[1], Local_1.f_184, 2, true);
					DECOR_SET_BOOL(bLocal_734, "IntroCoverExit", true);
					TELEPORT_ACTOR_WITH_HEADING(Global_34573, vLocal_842, 60,751f, 0, false, 0);
					REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_885);
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_885);
					DESTROY_VOLUME(bLocal_885);
					if (IS_ACTOR_VALID(bLocal_734))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_734)))
						{
							ADD_BLIP_FOR_ACTOR(bLocal_734, 325, 0, 2, 0);
						}
					}
					STOP_FORCE_LOOK_AT_COORD(bLocal_734);
					TASK_CLEAR(bLocal_734);
					TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_734, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "sheriff_startingCover")), -1.0f, 0.0f);
					Function_227(uLocal_743[0], Global_34573, 4);
					Function_227(uLocal_743[0], bLocal_734, 4);
					Function_53(uLocal_743[0], Global_34573);
					Function_53(uLocal_743[0], bLocal_734);
					Function_52(bLocal_734, uLocal_743[0], 4);
					Function_224(bLocal_734, uLocal_743[0]);
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_734, 13, false);
					ACTOR_END_FORCE_HOLSTER(Global_34573);
					if (bLocal_886 != 4294967295)
					{
						ACTOR_PUT_WEAPON_IN_HAND(Global_34573, bLocal_886, 0);
					}
					SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), -8,863f, 147,791f, 2,402f, 0);
					RESET_ANIM_SET_FOR_ACTOR(Global_34573, true);
					SET_PLAYER_POSTURE(0, 1, 0);
					ATTACH_PLAYER_TO_COVER(0, 1, 1);
					ACTOR_POP_NEXT_GAIT(Global_34573, 0, false);
					Function_172(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
					DECOR_SET_BOOL(Global_34573, "IntroCoverExit", true);
					DESTROY_OBJECT(bLocal_884);
					iLocal_861 = 1;
					Function_211(&iLocal_880);
					iLocal_836 = 11;
				}
			}
			break;
		
		case 0x0000000B:
			if (Function_210(&iLocal_880))
			{
				if (Function_208(&iLocal_880) < 0,1f)
				{
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_241("tes_SheriffGuardObj", 0x40f00000, 1, 2, 0, 0, 0);
					CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("tes_JournalID"), 0);
					APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("tes_JournalID"), "tes_SheriffGuardObj", 0, 0, false);
					APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("tes_JournalID"), 0);
					if (DECOR_CHECK_EXIST(bLocal_734, "IntroCoverExit"))
					{
						DECOR_REMOVE(bLocal_734, "IntroCoverExit");
					}
					iLocal_836 = 1;
				}
			}
			break;
	}
	return 1;
}

void Function_52(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3D2A / 15658
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

void Function_53(bool bParam0, bool bParam1) //Position: 0x3D74 / 15732
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

void Function_54(int iParam0) //Position: 0x3DC6 / 15814
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE((*iParam0)[03]) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[03], bVar0)))
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[03], bVar0), 13, false);
		}
		bVar0++;
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE((*iParam0)[13]) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[13], bVar1)))
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[13], bVar1), 13, false);
		}
		bVar1++;
	}
	return;
}

void Function_55() //Position: 0x3E42 / 15938
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "TesAzul_KilledGaurds", "TesAzul_KilledGaurds", false, 2, 1, 0, 1);
	Function_56();
	START_SCRIPT_CONVERSATION(true, 0);
	return;
}

void Function_56() //Position: 0x3E90 / 16016
{
	ADD_NEW_CONVERSATION_SPEAKER(false, Global_34573, 0);
	ADD_NEW_CONVERSATION_SPEAKER(true, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_AA_Layout"), "sheriff"), 0);
	return;
}

void Function_57(bool bParam0, bool bParam1) //Position: 0x3EC3 / 16067
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_RIDING(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			RESET_ACTOR_GAITS(bVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(bParam0))
	{
		bVar1 = GET_VEHICLE(bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			STOP_VEHICLE(bVar1);
		}
	}
	else if (!bParam1 || Function_58(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_58(bool bParam0, bool bParam1) //Position: 0x3F20 / 16160
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_59() //Position: 0x3F3F / 16191
{
	int iVar0;
	
	return iVar0;
}

void Function_60(int iParam0) //Position: 0x3F47 / 16199
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE((*iParam0)[03]) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[03], bVar0)))
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[03], bVar0), 13, true);
		}
		bVar0++;
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE((*iParam0)[13]) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[13], bVar1)))
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[13], bVar1), 13, true);
		}
		bVar1++;
	}
	return;
}

var Function_61(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x3FC3 / 16323
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_59(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TesoroIntro1", 2, 1);
	}
	Function_62(&bVar0);
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

void Function_62(int iParam0) //Position: 0x403E / 16446
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_64(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_63(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 7.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 1.0f, 1);
	return;
}

void Function_63(int iParam0) //Position: 0x407D / 16509
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3220,87f, 38,54813f, 4532,362f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,205784f, -2,954043f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_64(int iParam0) //Position: 0x40E7 / 16615
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3219,452f, 38,55973f, 4532,351f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,016785f, 2,34352f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

var Function_65(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x4151 / 16721
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_59(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nTES_Vista", 2, 1);
	}
	Function_66(&bVar0);
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

void Function_66(int iParam0) //Position: 0x41C6 / 16838
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_68(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_67(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 11.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 1.0f, 1);
	return;
}

void Function_67(int iParam0) //Position: 0x4209 / 16905
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,97587f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3294,48f, 43,04517f, 4534,758f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,123455f, -2,149507f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_68(int iParam0) //Position: 0x4273 / 17011
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,97587f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3290,493f, 42,93991f, 4530,982f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,031552f, -2,403163f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_69(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x42DD / 17117
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_33(bParam0))
	{
		Function_31();
		return;
	}
	iVar0 = Function_30(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_28(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_119(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_118(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_112();
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
		Function_26("DEED_COMPLETE", bParam0);
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
			Function_108(bParam0);
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
						switch (Function_28(bParam0))
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
			Function_72(1);
			Function_71(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_70(bParam0, &Var14);
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

void Function_70(int iParam0, int iParam1) //Position: 0x44EF / 17647
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_71(bool bParam0, int iParam1) //Position: 0x4529 / 17705
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_324())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_72(bool bParam0) //Position: 0x456B / 17771
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_101();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_73();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_45(&Global_63095, 1);
		Function_45(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_73() //Position: 0x45BC / 17852
{
	Function_99();
	Function_98();
	Function_98();
	Function_97();
	Function_97();
	Function_96();
	Function_96();
	Function_81();
	Function_81();
	if (!Function_324())
	{
		Function_78();
		Function_77();
		Function_76();
		Function_75();
	}
	Function_74();
	return;
}

void Function_74() //Position: 0x45EF / 17903
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

void Function_75() //Position: 0x46F5 / 18165
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

void Function_76() //Position: 0x4728 / 18216
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

void Function_77() //Position: 0x48B6 / 18614
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

void Function_78() //Position: 0x4A6A / 19050
{
	Function_79(&Global_28260, 1, 0);
	return;
}

void Function_79(int iParam0, bool bParam1, var uParam2) //Position: 0x4A78 / 19064
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
	
	bVar0 = Function_80();
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

var Function_80() //Position: 0x4C69 / 19561
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_81() //Position: 0x4C7E / 19582
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
				iVar2 = ((Function_95((50 + iVar4)) + Function_95((183 + iVar4))) + Function_95((90 + iVar4)));
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
	Function_82(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_82(int iParam0, bool bParam1, bool bParam2) //Position: 0x4D19 / 19737
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
		Function_94(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_93(iParam0);
	if (bParam2)
	{
		Function_83(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_83(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x4FB4 / 20404
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_92(390))), 32);
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
					bVar19 = (Function_200(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_200(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_90(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_87(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_85(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_84(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_59(), &Var9);
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

var Function_84(int iParam0) //Position: 0x55E1 / 21985
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_85(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x55F2 / 22002
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_86("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_86("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_86("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_86(char* cParam0, char* cParam1) //Position: 0x56E7 / 22247
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_87(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x5700 / 22272
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_89(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_88(Function_89(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_88(int iParam0, int iParam1) //Position: 0x5765 / 22373
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_89(int iParam0, bool bParam1) //Position: 0x5777 / 22391
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_90(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x5789 / 22409
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
	if (((Function_91(iParam0) != 19 || Function_91(iParam0) != 17) || Function_91(iParam0) != 10) || Function_91(iParam0) != 9)
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

int Function_91(int iParam0) //Position: 0x58B9 / 22713
{
	return Global_35278[iParam020].f_48;
}

var Function_92(int iParam0) //Position: 0x58C8 / 22728
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_93(int iParam0) //Position: 0x5905 / 22789
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

int Function_94(int iParam0, bool bParam1, bool bParam2) //Position: 0x5A9F / 23199
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

int Function_95(bool bParam0) //Position: 0x5CB9 / 23737
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_96() //Position: 0x5CFA / 23802
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
		iVar2 = ((Function_95((50 + iVar3) + 15) + Function_95((183 + iVar3) + 15)) + Function_95((90 + iVar3) + 15));
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
	Function_82(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_97() //Position: 0x5D83 / 23939
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
			iVar2 = ((Function_95((50 + iVar3) + 8) + Function_95((183 + iVar3) + 8)) + Function_95((90 + iVar3) + 8));
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
	Function_82(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_98() //Position: 0x5E1A / 24090
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
		iVar2 = ((Function_95((50 + iVar3)) + Function_95((183 + iVar3))) + Function_95((90 + iVar3)));
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
	Function_82(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_99() //Position: 0x5E99 / 24217
{
	Function_100(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_82(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_100(int iParam0, bool bParam1, int iParam2) //Position: 0x5EBF / 24255
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
	Function_94(iParam0, bParam1, 1);
	Function_93(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_83(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_101() //Position: 0x60C9 / 24777
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_103(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_103(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_102(StackVal, StackVal, vVar0))
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

bool Function_102(vector3 vParam0) //Position: 0x616A / 24938
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_103(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x6182 / 24962
{
	int iVar0;
	
	iVar0 = Function_106(uParam2, uParam3);
	if (Function_105(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_248(&Global_63095, 1);
			Function_45(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_248(&Global_63095, 2);
			Function_45(&Global_63095, 1);
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
		Function_248(&Global_63095, 2);
		Function_45(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_104();
	return StackVal, StackVal, Function_104();
}

vector3 Function_104() //Position: 0x6269 / 25193
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_105(int iParam0) //Position: 0x6272 / 25202
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_106(bool bParam0, bool bParam1) //Position: 0x6288 / 25224
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
				fVar2 = Function_107(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_107(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_105(bVar0) && !bParam1)
	{
		bVar0 = Function_106(bParam0, 1);
	}
	return bVar0;
}

float Function_107(vector3 vParam0, vector3 vParam3) //Position: 0x634F / 25423
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_108(bool bParam0) //Position: 0x636C / 25452
{
	int iVar0;
	int iVar1;
	
	if (!Function_29(bParam0))
	{
		return;
	}
	switch (Function_30(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_28(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_111(12, 1, 0, 0);
				Function_110(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_111(13, 1, 0, 0);
				Function_110(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_111(14, 1, 0, 0);
				Function_110(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_111(15, 1, 0, 0);
				Function_110(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_111(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_28(bParam0))
			{
				case 0x00000000:
					if (Function_198(bParam0) == 1)
					{
						iVar0 = Function_109(bParam0);
						if (Function_5(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_110(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_110(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_110(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_110(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_110(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_110(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_110(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_110(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_110(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_110(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_110(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_110(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_110(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_110(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_110(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_110(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_110(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_110(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_110(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_110(4, 19);
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
								Function_111(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_111(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_111(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_109(bParam0) == 0)
			{
				if (Function_198(bParam0) == 1)
				{
					Function_111(458, 1, 0, 0);
					iVar0 = Function_28(bParam0);
					if (Function_5(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_110(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_110(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_110(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_110(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_110(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_110(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_110(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_110(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_198(bParam0) == 1)
			{
				Function_111(400, 1, 0, 0);
			}
			switch (Function_28(bParam0))
			{
				case 0x00000001:
					Function_111(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_110(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_110(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_110(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_111(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_110(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_110(6, 9);
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

int Function_109(bool bParam0) //Position: 0x6848 / 26696
{
	if (!Function_29(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

void Function_110(int iParam0, bool bParam1) //Position: 0x6867 / 26727
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

int Function_111(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x68CE / 26830
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
	Function_94(iParam0, TO_FLOAT(bParam1), 1);
	Function_93(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_83(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_112() //Position: 0x6AEE / 27374
{
	int iVar0;
	int iVar1;
	
	if (!Function_117(Global_6269))
	{
		return;
	}
	iVar0 = Function_95(24);
	iVar1 = Function_116(Global_6269);
	if (!Function_117(iVar0) && Function_115(iVar1) < 0)
	{
		Function_82(24, Global_6269, 0);
		Function_113(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_115(Function_116(iVar0)))
	{
		Function_82(24, Global_6269, 0);
		Function_113(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_113(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x6B6E / 27502
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
		Function_114(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_114(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x6EC0 / 28352
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

int Function_115(int iParam0) //Position: 0x6F43 / 28483
{
	if (!Function_33(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_116(int iParam0) //Position: 0x6F5D / 28509
{
	if (!Function_117(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_117(int iParam0) //Position: 0x6F77 / 28535
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_118(int iParam0) //Position: 0x6F8D / 28557
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_119(char* cParam0) //Position: 0x6FB7 / 28599
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

void Function_120(bool bParam0) //Position: 0x720D / 29197
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (Function_28(bParam0) == Global_30640[2])
	{
		if (Function_150(2) && !Function_149(2))
		{
			Function_142(2, 2, 0, 0, 1);
		}
	}
	if (Function_28(bParam0) == Global_30658[3])
	{
		if (Function_150(6) && !Function_149(6))
		{
			Function_142(6, 16, 0, 0, 1);
		}
	}
	if (!Function_150(10) || Function_149(10))
	{
		return;
	}
	bVar0 = MAKE_TIME_OF_DAY_EX((GET_DAY(false) - 1), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
	bVar1 = GET_TIME_OF_DAY();
	iVar2 = Function_198(Global_30734);
	if (Global_30734 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_198(Global_30736);
	if (Global_30736 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_198(Global_30738);
	if (Global_30738 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_198(Global_30737);
	if (Global_30737 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_198(Global_30739);
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
	Function_121(10, 0, 1);
	return;
}

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x73B4 / 29620
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_141(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_149(bParam0))
	{
		if (!Function_150(bParam0))
		{
			Function_125(bParam0, 1, 0, 0);
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
		Function_111(457, 1, 0, 0);
		Function_124(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_123(0, 0, 1, 1))
			{
				Function_72(1);
				Function_71(1, 0);
			}
			else
			{
				Function_122();
			}
		}
	}
	return;
}

void Function_122() //Position: 0x7552 / 30034
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7558 / 30040
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

void Function_124(bool bParam0, int iParam1) //Position: 0x75FC / 30204
{
	if (!Function_141(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

void Function_125(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7651 / 30289
{
	struct<8> Var0;
	
	if (!Function_141(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_140(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_150(bParam0))
	{
		Function_111(456, 1, 0, 0);
		Function_124(bParam0, 2);
		if (bParam2)
		{
			if (!Function_123(0, 0, 1, 1))
			{
				Function_72(1);
				Function_71(1, 5);
			}
			else
			{
				Function_122();
			}
		}
		Function_134(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_133() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_133() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_132(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_131(Global_76846, 2))
		{
			Function_126(Global_34573, 2, 1, 0);
		}
	}
}

void Function_126(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x779B / 30619
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_128(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_127(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_127(char* cParam0, int iParam1) //Position: 0x7807 / 30727
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

bool Function_128(bool bParam0, var uParam1, int iParam2) //Position: 0x783E / 30782
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
		if (Function_130(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_129(uVar0))
		{
			case 0x00000002:
				if (!Function_131(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_129(char* cParam0) //Position: 0x78B6 / 30902
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

int Function_130(int iParam0) //Position: 0x7957 / 31063
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_45(&iVar1, 2147483648);
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

bool Function_131(int iParam0, int iParam1) //Position: 0x7994 / 31124
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_132(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x79A7 / 31143
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

bool Function_133() //Position: 0x79F2 / 31218
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x7A1F / 31263
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
			if (Function_138(bParam0, Function_139(bVar24)))
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
			if (Function_138(bParam0, Function_139(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_137(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_136(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_135(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_135(int iParam0) //Position: 0x7BCF / 31695
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_141(iParam0))
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x7C26 / 31782
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

var Function_137(int iParam0) //Position: 0x7C4B / 31819
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_141(iParam0))
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

bool Function_138(bool bParam0, int iParam1) //Position: 0x7CA1 / 31905
{
	int iVar0;
	
	if (!Function_141(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_139(bool bParam0) //Position: 0x7D00 / 32000
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x7D0C / 32012
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x7D28 / 32040
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_142(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x7D3E / 32062
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_141(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_140(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_148(bParam0, 2))
	{
		Function_111(456, 1, 0, 0);
		Function_124(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_132(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_138(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_124(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_123(0, 0, 1, 1))
			{
				Function_72(1);
				Function_71(1, 0);
			}
			else
			{
				Function_122();
			}
		}
		Function_134(bParam0);
		if (StackVal && !Function_23(((((!Function_133() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_23((((Function_133() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_131(Global_76846, 2))
		{
			Function_126(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_144();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_143(3, bParam1);
				break;
			
			case 0x00000005:
				Function_143(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_143(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_143(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_143(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_143(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_110(2, 24);
				break;
			
			case 0x00000003:
				Function_110(2, 25);
				break;
			
			case 0x0000000F:
				Function_110(2, 26);
				break;
			
			case 0x0000000D:
				Function_110(2, 27);
				break;
			
			case 0x0000000E:
				Function_110(2, 28);
				break;
			}
	}
}

void Function_143(int iParam0, bool bParam1) //Position: 0x7FCD / 32717
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

void Function_144() //Position: 0x8053 / 32851
{
	if (Function_141(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_147(Global_28180);
			Global_28180.f_8 = Function_145(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_147(Global_28180);
			Global_28180.f_8 = Function_145(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_145(int iParam0, int iParam1) //Position: 0x80CE / 32974
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
					if (Function_288(6, 0) || Function_288(12, 0))
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
					if (Function_146(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_288(5, 0))
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
					if (Function_146(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_146(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_146(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_146(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_288(26, 0))
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
					if (Function_146(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_146(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_146(27) && iVar18)
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
					if (Function_146(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_146(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_146(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_146(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_288(17, 0) && iVar15)
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
					if (Function_146(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_288(6, 0) && Function_146(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_146(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_288(9, 0) && Function_146(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_146(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_288(8, 0) && iVar19)
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
	if (Function_102(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_102(StackVal, StackVal, vVar3))
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
	if (!Function_102(StackVal, StackVal, vVar3))
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

int Function_146(int iParam0) //Position: 0x8CBF / 36031
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_147(int iParam0) //Position: 0x8CD4 / 36052
{
	int iVar0;
	int iVar1;
	
	if (!Function_141(iParam0))
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

bool Function_148(int iParam0, int iParam1) //Position: 0x8D23 / 36131
{
	int iVar0;
	
	if (!Function_141(iParam0))
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

bool Function_149(int iParam0) //Position: 0x8D50 / 36176
{
	if (!Function_141(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_148(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_150(int iParam0) //Position: 0x8DA1 / 36257
{
	if (!Function_141(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_148(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_151(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8DF3 / 36339
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_152(bParam0), Function_80()) == 0)
		{
			ADD_ITEM(Function_152(bParam0), Function_80(), bParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_152(bParam0), Function_80(), bParam2);
	return 1;
}

var Function_152(bool bParam0) //Position: 0x8E3E / 36414
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

void Function_153(int iParam0, bool bParam1, bool bParam2) //Position: 0x8F2F / 36655
{
	int iVar0;
	bool bVar1;
	
	if (Function_165(0) && (!Global_3380 || iParam0 == 100))
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
	iVar0 = Function_95(3);
	Function_162();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_160(3, bVar1);
		if (!bParam2)
		{
			if (!Function_131(Global_76848, 4))
			{
				Function_126(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_111(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_200(3));
	iVar0 = Function_95(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_155(4, Function_159(Global_12976.f_156), 1);
				Function_154(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_155(4, Function_159(Global_12976.f_156), 1);
				Function_154(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_155(4, Function_159(Global_12976.f_156), 1);
				Function_154(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_155(4, Function_159(Global_12976.f_156), 1);
				Function_154(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_155(4, Function_159(Global_12976.f_156), 1);
				Function_154(Global_12976.f_152, Global_12976.f_156);
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

void Function_154(int iParam0, int iParam1) //Position: 0x90F2 / 37106
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

int Function_155(int iParam0, char* cParam1, bool bParam2) //Position: 0x9350 / 37712
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
	Function_113(iParam0, cParam1, 0, 1);
	iVar1 = Function_156();
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

int Function_156() //Position: 0x94D5 / 38101
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
	Function_157();
	return 0;
}

void Function_157() //Position: 0x9574 / 38260
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
		Function_158(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_158(int iParam0) //Position: 0x9623 / 38435
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

var Function_159(int iParam0) //Position: 0x9681 / 38529
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

int Function_160(int iParam0, bool bParam1) //Position: 0x9710 / 38672
{
	bool bVar0;
	int iVar1;
	
	Function_111(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_161(iParam0, 4294967295);
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
	iVar1 = Function_156();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_161(int iParam0, int iParam1) //Position: 0x98AD / 39085
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

void Function_162() //Position: 0x98EE / 39150
{
	Function_164(3, 0.0f);
	Function_163(3, 10000.0f);
	return;
}

int Function_163(int iParam0, int iParam1) //Position: 0x9904 / 39172
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_164(int iParam0, int iParam1) //Position: 0x9944 / 39236
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_165(int iParam0) //Position: 0x9984 / 39300
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_166(int iParam0, bool bParam1, bool bParam2) //Position: 0x9993 / 39315
{
	int iVar0;
	bool bVar1;
	
	if (Function_165(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_95(1);
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
			Function_160(1, bVar1);
			if (!bParam2)
			{
				if (!Function_131(Global_76848, 1))
				{
					Function_126(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_169(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_131(Global_76848, 2))
				{
					Function_126(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_111(1, bVar1, 0, 0);
	}
	else
	{
		Function_168(1, (4294967295 * bVar1), 0);
	}
	if (Function_95(1) <= 4294962296)
	{
		Function_82(1, 4294962296, 0);
	}
	else if (Function_95(1) >= 5000)
	{
		Function_82(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_200(1));
	iVar0 = Function_95(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_155(2, Function_167(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_155(2, Function_167(Global_12976.f_152), 0);
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
				Function_155(2, Function_167(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_155(2, Function_167(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_155(2, Function_167(Global_12976.f_152), 1);
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
				Function_155(2, Function_167(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_155(2, Function_167(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_155(2, Function_167(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_155(2, Function_167(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_155(2, Function_167(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_155(2, Function_167(Global_12976.f_152), 1);
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
				Function_155(2, Function_167(Global_12976.f_152), 0);
			}
			break;
	}
	Function_154(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_167(int iParam0) //Position: 0x9CA8 / 40104
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

int Function_168(int iParam0, bool bParam1, int iParam2) //Position: 0x9D4B / 40267
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
	Function_93(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_83(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_169(int iParam0, bool bParam1) //Position: 0x9F46 / 40774
{
	bool bVar0;
	int iVar1;
	
	Function_168(iParam0, bParam1, 0);
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
	iVar1 = Function_161(iParam0, 4294967295);
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
	iVar1 = Function_156();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_170(bool bParam0, bool bParam1) //Position: 0xA0E2 / 41186
{
	bool bVar0;
	
	bVar0 = Function_95(0);
	if ((Function_95(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_111(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_95(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_111(597, bParam0, 0, 0);
	}
	if ((Function_95(597) + Function_95(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

bool Function_171(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xA1AD / 41389
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
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_95(5)) / 100.0f) * 0,5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_152(17), Global_34573))
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

void Function_172(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xA2AF / 41647
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
		bVar0 = Function_80();
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
			if (Function_324())
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
		Function_111(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_44();
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
	Function_173(iParam9);
}

void Function_173(bool bParam0) //Position: 0xA39F / 41887
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

bool Function_174(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0xA444 / 42052
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	bool bVar8;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	
	if (Function_23(iLocal_675, 8192))
	{
		return 0;
	}
	if (!iLocal_676)
	{
		Function_60(uParam1);
		iLocal_676 = 1;
		if (IS_ACTOR_VALID(*uParam0))
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*uParam0, 13, true);
		}
	}
	if (!IS_ACTOR_ALIVE(*uParam0))
	{
		DECOR_REMOVE(Global_34573, "TES_LawHelping");
		Function_44();
		if (!DECOR_CHECK_EXIST(Global_34573, "SheriffNotNatural"))
		{
			if (!Function_23(iLocal_675, 16))
			{
				if (!Function_189(*uParam0, Global_34573))
				{
					Function_273("tes_SheriffDied", 0, -1.0f, 2, 0, 0);
					Function_273("tes_help_sheriffDead", 0, -1.0f, 1, 0, 0);
				}
				else
				{
					Function_273("tes_help_sherDeadByPlayer", 0, -1.0f, 1, 0, 0);
					if (iLocal_686 <= 0 && iLocal_686 >= 10)
					{
						Function_273("tes_help_sheriffDead", 0, -1.0f, 1, 0, 0);
					}
				}
				Function_248(&iLocal_675, 16);
			}
			return 0;
		}
	}
	if (GET_LASSO_TARGET(Global_34573) == *uParam0)
	{
		if (!Function_23(iLocal_675, 4194304))
		{
			Function_273("tes_lassoedSheriff", 0, -1.0f, 1, 0, 0);
			Function_248(&iLocal_675, 4194304);
			MEMORY_CONSIDER_AS_ENEMY(*uParam0, Global_34573);
			if (IS_ACTOR_VALID(*uParam0))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*uParam0)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(*uParam0));
				}
			}
			return 0;
		}
	}
	GET_POSITION(*uParam0, &uVar0);
	GET_POSITION(Global_34573, &uVar3);
	if (Function_23(iLocal_675, 512))
	{
		DECOR_SET_BOOL(Global_34573, "SpawnedOnLeft", true);
		iVar6 = 0;
	}
	else
	{
		DECOR_SET_BOOL(Global_34573, "SpawnedOnRight", true);
		iVar6 = 1;
	}
	switch (iLocal_686)
	{
		case 0x00000000:
			if (((!Function_23(iLocal_675, 131072) && !Function_23(iLocal_675, 1048576)) && !HUD_IS_FADED()) && !HUD_IS_FADED())
			{
				Function_248(&iLocal_675, 1048576);
			}
			if (!iLocal_677)
			{
				if (Function_188(0, (*uParam1)[iVar63], 1) && Function_187(Global_34573, *uParam0) > 10.0f)
				{
					Function_54(uParam1);
					iLocal_677 = 1;
					if (IS_ACTOR_VALID(*uParam0))
					{
						COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*uParam0, 13, false);
					}
				}
			}
			if (!Function_23(iLocal_675, 131072))
			{
				if (Function_228(Global_34573, (*uParam1)[iVar63], 1, 1, 1, 25.0f))
				{
					Function_248(&iLocal_675, 131072);
					Function_239((*uParam1)[iVar63], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_53((*uParam1)[iVar63], *uParam0);
					Function_186(bLocal_673, (*uParam1)[iVar63], 1);
					Function_185();
				}
			}
			if (Function_187(*uParam0, Global_34573) < 10.0f && !iLocal_678)
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(*uParam3, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "sheriff_startingCover")), -1.0f, 0.0f);
				iLocal_678 = 1;
				iLocal_679 = 0;
			}
			if (Function_187(*uParam0, Global_34573) > 10.0f && !iLocal_679)
			{
				TASK_HIDE_AT_COVER(*uParam3, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "sheriff_startingCover")), -1.0f, 0.0f, 0);
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_JOINING_THE_FRAY", true, false, 2, 0, true, false);
				}
				iLocal_679 = 1;
				iLocal_678 = 0;
			}
			if (!iLocal_681)
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, Local_1.f_216) && IS_ACTOR_RIDING_VEHICLE(Global_34573))
				{
					if (HUD_IS_SHOWING_HELP_TEXT())
					{
						HUD_CLEAR_HELP();
						HUD_CLEAR_HELP_QUEUE();
					}
					Function_132("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_681 = 1;
				}
			}
			if (iLocal_681)
			{
				if (Function_182(Global_34573, Local_1.f_216) <= 15.0f)
				{
					iLocal_681 = 0;
				}
			}
			if (Function_180(*uParam8, 0, 1, 1, 1, 0))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(*uParam8));
				DESTROY_OBJECT(*uParam8);
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_274();
				iLocal_686 = 1;
			}
			else if (IS_ACTOR_IN_VOLUME(Global_34573, Local_1.f_108))
			{
				Function_39((*uParam2)[0], 0);
				Function_39((*uParam2)[1], 0);
				DECOR_SET_BOOL(Global_34573, "InTownWithoutSheriff", true);
				if (IS_ACTOR_VALID(*uParam0))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*uParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(*uParam0));
					}
				}
				if (SQUAD_IS_VALID(bLocal_673))
				{
					Function_41(&bLocal_673, 1, 0);
					DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(bLocal_673));
				}
				if (IS_OBJECT_VALID(*uParam8))
				{
					DESTROY_OBJECT(*uParam8);
				}
				Function_248(&iLocal_675, 8192);
				iLocal_686 = 1;
			}
			break;
		
		case 0x00000001:
			uVar7 = Function_178("ProsSideSquad", FIND_NAMED_LAYOUT("TES_AA_Layout"));
			bVar8 = Function_178("ChurchSideSquad", FIND_NAMED_LAYOUT("TES_AA_Layout"));
			DECOR_SET_BOOL(Global_34573, "Trigger_TES_Intro", true);
			Function_177(bLocal_673, (*uParam4)[iVar6], 1);
			Function_211(&iLocal_683);
			Function_248(&iLocal_675, 0x8000000);
			iLocal_686 = 4;
			break;
		
		case 0x00000004:
			if (Function_210(&iLocal_683))
			{
				if (Function_208(&iLocal_683) < 7.0f)
				{
					DECOR_SET_BOOL(Global_34573, "tes_gateGuyReady01", true);
					DECOR_SET_BOOL(Global_34573, "tes_gateGuyReady02", true);
					iLocal_686 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS((*uParam4)[0]) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS((*uParam1)[03]) != 0)
			{
				AI_DONT_HARM_ACTOR(*uParam0);
				Function_248(&iLocal_675, 1024);
				if (!Function_210(&iLocal_670))
				{
					Function_213(&iLocal_670);
				}
				iLocal_686 = 5;
			}
			break;
		
		case 0x00000005:
			if (Function_210(&iLocal_670))
			{
				if (Function_208(&iLocal_670) <= 2.0f)
				{
					SQUAD_GOALS_CLEAR(bLocal_673);
					bLocal_674 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &Local_1 + 936, 3.0f, 2);
					TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_1.f_2192), -1.0f, 1086324736);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(*uParam0, bLocal_674);
					TASK_SEQUENCE_RELEASE(bLocal_674, 1);
					Function_176(*uParam0, uVar7);
					Function_176(*uParam0, bVar8);
					SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(10, 13, 0,1f);
					SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(13, 10, 0,1f);
					DECOR_SET_BOOL(Global_34573, "TES_LawHelping", true);
					iLocal_686 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (!iLocal_669)
			{
				if (GET_TASK_STATUS(*uParam0, 28) == 1)
				{
					AI_CLEAR_DONT_HARM_ACTOR(*uParam0);
					iLocal_669 = 1;
				}
			}
			if (DECOR_CHECK_EXIST(Global_34573, "ReadyForEnding"))
			{
				iLocal_686 = 11;
			}
			break;
		
		case 0x0000000B:
			if (DECOR_CHECK_EXIST(Global_34573, "ReadyForEnding"))
			{
				vVar9 = { -3243,32f, 38,149f, 4556,002f };
				vVar12 = { -3242,374f, 39,28f, 4559,253f };
				Function_39(Function_222("tesoroAzul", "house01", 1), 0);
				*uParam5 = LOCATE_GRINGO_OF_TYPE("door_kick_rifle_to_coh", &vVar12, 3.0f, 1);
				SQUAD_GOALS_CLEAR(bLocal_673);
				Function_175(bLocal_673);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(*uParam0);
				TASK_CLEAR(*uParam0);
				if (DECOR_CHECK_EXIST(*uParam0, "IntroCoverExit"))
				{
					DECOR_REMOVE(*uParam0, "IntroCoverExit");
				}
				bLocal_674 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &vVar9, 4);
				TASK_USE_GRINGO(false, *uParam5, "UseCase1", true, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(*uParam0, bLocal_674);
				TASK_SEQUENCE_RELEASE(bLocal_674, 1);
				Function_248(&iLocal_675, 32768);
				iLocal_686 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!iLocal_682)
			{
				if (DECOR_CHECK_EXIST(Global_34573, "BossScriptRunning"))
				{
					if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TES_Boss_Layout")))
					{
						if (IS_ACTOR_VALID(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_Boss_Layout"), "Juan")))
						{
							if (IS_ACTOR_ALIVE(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_Boss_Layout"), "Juan")))
							{
								if (DECOR_CHECK_EXIST(Global_34573, "DeputyDiedForSheriff") && !*uParam7)
								{
									if (IS_ACTOR_VALID(*uParam0))
									{
										DECOR_SET_BOOL(*uParam0, "IntroCoverExit", true);
									}
									TASK_CLEAR(*uParam0);
									SQUAD_GOALS_CLEAR(bLocal_673);
									Function_175(bLocal_673);
									TASK_KILL_CHAR(*uParam0, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_Boss_Layout"), "Juan"));
									MEMORY_REPORT_POSITION_AUTO(*uParam0, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_Boss_Layout"), "Juan"), true);
									iLocal_682 = 1;
									*uParam7 = 1;
								}
							}
						}
					}
				}
			}
			if (*uParam9 && !iLocal_680)
			{
				if (IS_ACTOR_VALID(*uParam0))
				{
					DECOR_SET_BOOL(*uParam0, "IntroCoverExit", true);
				}
				TASK_CLEAR(*uParam0);
				SQUAD_GOALS_CLEAR(bLocal_673);
				Function_175(bLocal_673);
				TASK_KILL_CHAR(*uParam0, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_Boss_Layout"), "Juan"));
				MEMORY_REPORT_POSITION_AUTO(*uParam0, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_Boss_Layout"), "Juan"), true);
				iLocal_680 = 1;
			}
			if (DECOR_CHECK_EXIST(Global_34573, "DeputyReleased"))
			{
				TASK_CLEAR(*uParam0);
				SQUAD_GOALS_CLEAR(bLocal_673);
				Function_175(bLocal_673);
				if (IS_ACTOR_VALID(*uParam0))
				{
					DECOR_SET_BOOL(*uParam0, "IntroCoverExit", true);
				}
				vVar15 = { -3244,361f, 38.0f, 4548,187f };
				bLocal_674 = TASK_SEQUENCE_OPEN();
				TASK_USE_GRINGO(false, *uParam6, "UseCase1", true, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(*uParam0, bLocal_674);
				TASK_SEQUENCE_RELEASE(bLocal_674, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam0, 1);
			}
			break;
	}
	return 1;
}

void Function_175(bool bParam0) //Position: 0xAE9C / 44700
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

void Function_176(bool bParam0, bool bParam1) //Position: 0xAECE / 44750
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_REPORT_POSITION_AUTO(bParam0, bVar1, true);
		}
		bVar0++;
	}
	return;
}

void Function_177(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAF05 / 44805
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE(bParam1) - 1))
				{
					bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar1);
					if (IS_ACTOR_VALID(bVar3))
					{
						if (IS_ACTOR_ALIVE(bVar3))
						{
							MEMORY_REPORT_POSITION_AUTO(bVar2, bVar3, bParam2);
						}
					}
					bVar1++;
				}
			}
		}
		bVar0++;
	}
	return;
}

var Function_178(bool bParam0, bool bParam1) //Position: 0xAF76 / 44918
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
		if (STRING_CONTAINS_STRING(bVar4, bParam0) || Function_179(bParam0, bVar4))
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

int Function_179(char* cParam0, bool bParam1) //Position: 0xB01E / 45086
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

bool Function_180(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB049 / 45129
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	int iVar6;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_GATEWAY_AND_STOP_ACTOR");
		return 0;
	}
	if (bParam4)
	{
		if (DECOR_CHECK_EXIST(bParam0, "gaveDismount"))
		{
			bVar0 = GATEWAY_GET_ACTOR(bParam0);
			if (IS_OBJECT_VALID(bVar0))
			{
				bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
				if (!IS_ACTOR_RIDING(bVar1))
				{
					DECOR_REMOVE(bParam0, "gaveDismount");
					return 1;
				}
				return 0;
			}
			return 1;
		}
	}
	if (GATEWAY_UPDATE(bParam0))
	{
		bVar0 = GATEWAY_GET_ACTOR(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (IS_ACTOR_PLAYER(bVar1))
			{
				SET_PLAYER_CONTROL(0, 0, iParam1, iParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && uParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (bParam3)
			{
				Function_57(bVar1, uParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_58(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(bVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(bVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(bVar1))
			{
				bVar2 = TASK_SEQUENCE_OPEN();
				if (Function_58(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_181(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_181(&iVar6, &vVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(false, &vVar3, true);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(Global_34573, bVar2);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
				DECOR_SET_FLOAT(bParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_3414 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int Function_181(int iParam0, int iParam1) //Position: 0xB25B / 45659
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_102(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0,01f);
	iParam0->f_8 = (StackVal + 0,01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_102(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_182(bool bParam0, int iParam1) //Position: 0xB2C6 / 45766
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_184(bParam0);
		vVar0 = { StackVal, StackVal, Function_184(bParam0) };
		Function_183(iParam1);
		vVar3 = { StackVal, StackVal, Function_183(iParam1) };
		return VDIST(vVar0, vVar3);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to volume. Returning 0.0!");
	return 0.0f;
}

vector3 Function_183(bool bParam0) //Position: 0xB343 / 45891
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_184(bool bParam0) //Position: 0xB354 / 45908
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

void Function_185() //Position: 0xB3BE / 46014
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "TesAzul_HelpFight", "TesAzul_HelpFight", false, 2, 1, 0, 1);
	Function_56();
	START_SCRIPT_CONVERSATION(true, 0);
	return;
}

void Function_186(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB406 / 46086
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
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
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE(bParam1) - 1))
				{
					bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar1);
					if (IS_ACTOR_VALID(bVar3))
					{
						if (IS_ACTOR_ALIVE(bVar3))
						{
							MEMORY_REPORT_POSITION_AUTO(bVar2, bVar3, bParam2);
						}
					}
					bVar1++;
				}
			}
		}
		bVar0++;
	}
	return;
}

float Function_187(bool bParam0, bool bParam1) //Position: 0xB48B / 46219
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

int Function_188(bool bParam0, bool bParam1, int iParam2) //Position: 0xB57C / 46460
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (IS_PLAYER_TARGETTING_ACTOR(bParam0, bVar1, iParam2))
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_189(bool bParam0, bool bParam1) //Position: 0xB5CD / 46541
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(bParam0) == bParam1)
	{
		if (IS_ACTOR_DEAD(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

var Function_190(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xB5FE / 46590
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_59(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TES_EndingVista", 3, 1);
	}
	Function_191(&bVar0);
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

void Function_191(int iParam0) //Position: 0xB679 / 46713
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_194(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_193(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_192(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 6.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 11.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 1.0f, 2);
	return;
}

void Function_192(int iParam0) //Position: 0xB6D4 / 46804
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 36,44935f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3302,775f, 42,49386f, 4539,279f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,006917f, -1,868997f, -0,000157f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_193(int iParam0) //Position: 0xB742 / 46914
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 36,44935f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3303,364f, 42,45905f, 4534,415f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,006289f, -2,002424f, -0,000157f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_194(bool bParam0) //Position: 0xB7B0 / 47024
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 48,32753f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -3248,305f, 40,61472f, 4562,832f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, -0,093492f, -1,958853f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

void Function_195(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xB81A / 47130
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iParam1 = iParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(false);
	Function_44();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_80();
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
			if (Function_324())
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
				Function_197(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_59(), 2, Function_197(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_111(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_196()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_196()));
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
	if (Function_331(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_330(0x4000000);
	}
	if (Function_331(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_330(0x8000000);
	}
}

var Function_196() //Position: 0xBAC3 / 47811
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

vector3 Function_197(bool bParam0) //Position: 0xBB42 / 47938
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_198(bool bParam0) //Position: 0xBB53 / 47955
{
	if (!Function_29(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

int Function_199(int iParam0, bool bParam1, bool bParam2) //Position: 0xBB6D / 47981
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
		Function_94(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_93(iParam0);
	if (bParam2)
	{
		Function_83(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

float Function_200(int iParam0) //Position: 0xBDD9 / 48601
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_201(int iParam0, int iParam1) //Position: 0xBE12 / 48658
{
	if (!Function_33(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

bool Function_202(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xBE2D / 48685
{
	if (DECOR_CHECK_EXIST(Global_34573, "DeputyReleased") || DECOR_CHECK_EXIST(Global_34573, "DeputyDied"))
	{
		return 1;
	}
	if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TES_Boss_Layout")))
	{
		if (IS_ACTOR_VALID(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_Boss_Layout"), "Juan")))
		{
			if ((!IS_ACTION_NODE_PLAYING_PARTIAL(*uParam1, "hold_hostage") && IS_ACTOR_ALIVE(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_Boss_Layout"), "Juan"))) && IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_EndingHouse")))
			{
				*uParam3 = 1;
				if (!*uParam4)
				{
					TASK_FLEE_ACTOR(*uParam1, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TES_Boss_Layout"), "Juan"), 15.0f, -1.0f, 0, 0, 0);
					*uParam4 = 1;
				}
			}
		}
	}
	if (DECOR_CHECK_EXIST(Global_34573, "BossIsDead"))
	{
		CANCEL_DEADEYE();
		if (IS_ACTOR_ALIVE(*uParam1))
		{
			DECOR_SET_FLOAT(Global_34573, "DeputyReleased", GET_CURRENT_GAME_TIME());
			Function_203(iParam2);
			AI_ENABLE_PERCEPTION(*uParam1);
			Function_45(iParam0, 512);
			if (!*uParam3 && IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_EndingHouse")))
			{
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, *(&Local_1 + 1948), 90.0f, 1, true, 1);
				DECOR_SET_BOOL(*uParam1, "AA_Exit", true);
			}
			else if (IS_ACTOR_ALIVE(*uParam5))
			{
				DECOR_SET_BOOL(Global_34573, "PlayerNotVolume", true);
				RESET_ANIM_SET_FOR_ACTOR(*uParam1, true);
				AI_GLOBAL_CLEAR_DANGER(*uParam1);
				TASK_CLEAR(*uParam1);
				TASK_USE_GRINGO(*uParam1, *uParam6, "ChildUse", true, 1);
			}
			SAY_SINGLE_LINE_CONTEXT(*uParam1, 103, Global_34573, 1, 0, 0, 4294967295, 4294967295, 0, 1);
			return 1;
		}
		if (!IS_ACTOR_ALIVE(*uParam1))
		{
			DECOR_SET_BOOL(Global_34573, "DeputyDied", true);
			Function_203(iParam2);
			return 1;
		}
	}
	return 0;
}

void Function_203(int iParam0) //Position: 0xC06A / 49258
{
	bool bVar0;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TES_AreaVultures", *iParam0, 4294967295, 0);
	Function_204(iParam0, &bVar0, &Local_1 + 188);
	return;
}

void Function_204(var uParam0, var uParam1, int iParam2) //Position: 0xC098 / 49304
{
	struct<9> Var0;
	struct<8> Var9;
	vector3 vVar17;
	vector3 vVar20;
	bool bVar23;
	
	if (!IS_LAYOUTREF_VALID(*uParam0))
	{
		return;
	}
	if (!IS_VOLUME_VALID(*iParam2))
	{
		return;
	}
	if (!IS_OBJECTSET_VALID(*uParam1))
	{
		*uParam1 = CREATE_OBJECTSET_IN_LAYOUT("Ambiance_VultureSet", *uParam0, 15, 0);
	}
	vVar0 = { 0.0f, 0.0f, 0.0f };
	GET_VOLUME_SCALE(*iParam2, &vVar0);
	fVar3 = ((vVar0.x + vVar0.z) / 2.0f);
	bVar4 = ROUND((vVar0.x + IntToFloat(RAND_INT_RANGE(true, 3))));
	PRINTSTRING("Trying to create this many vultures: ");
	PRINTINT(bVar4);
	PRINTNL();
	vVar5 = { 0.0f, 0.0f, 0.0f };
	GET_VOLUME_CENTER(*iParam2, &vVar5);
	iVar8 = 0;
	while (iVar8 < (bVar4 - 1))
	{
		Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_205("Ambiance_Vlt") };
		vVar17 = { RAND_FLOAT_RANGE((vVar5.x - fVar3), (vVar5.x + fVar3)), RAND_FLOAT_RANGE((vVar5.y - 5.0f), (vVar5.y + 5.0f)), RAND_FLOAT_RANGE((vVar5.z - fVar3), (vVar5.z + fVar3)) };
		vVar20 = { 0.0f, RAND_FLOAT_RANGE(0.0f, 359,9f), 0.0f };
		bVar23 = CREATE_ACTOR_IN_LAYOUT(*uParam0, &Var9, 1128, vVar17, vVar20);
		MAKE_BIRD_FLY_FROM_POINT(bVar23, vVar17, vVar20);
		ADD_OBJECT_TO_OBJECTSET(bVar23, *uParam1);
		TASK_PRIORITY_SET(bVar23, true);
		TASK_BIRD_SOAR_AT_COORD(bVar23, &vVar5, -1.0f, 1106247680);
		iVar8++;
	}
	return;
}

struct<32> Function_205(bool bParam0) //Position: 0xC1F4 / 49652
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_206("0", &cVar8, ""), 4);
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

struct<32> Function_206(char* cParam0, char* cParam1, char* cParam2) //Position: 0xC25E / 49758
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_207() //Position: 0xC27D / 49789
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "TesAzul_DeputyInHouse", "TesAzul_DeputyInHouse", false, 3, 1, 0, 1);
	Function_56();
	START_SCRIPT_CONVERSATION(true, 0);
	return;
}

float Function_208(int iParam0) //Position: 0xC2CD / 49869
{
	if (Function_210(iParam0))
	{
		if (Function_209(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_209(int iParam0) //Position: 0xC395 / 50069
{
	return Function_23(*iParam0, 2);
}

bool Function_210(int iParam0) //Position: 0xC3A2 / 50082
{
	return Function_23(*iParam0, 1);
}

void Function_211(int iParam0) //Position: 0xC3AF / 50095
{
	Function_212(iParam0, 0.0f);
	return;
}

void Function_212(var uParam0, float fParam1) //Position: 0xC3BB / 50107
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_248(uParam0, 1);
	Function_45(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_213(int iParam0) //Position: 0xC3DC / 50140
{
	if (!Function_210(iParam0))
	{
		Function_212(iParam0, 0.0f);
	}
	return;
}

void Function_214(int iParam0) //Position: 0xC3F1 / 50161
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 2)
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[14], bVar0)))
		{
			if (!IS_ACTOR_IN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[14], bVar0), Local_1.f_140))
			{
				TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX((*iParam0)[14], bVar0), &Local_1 + 1324, 1, 1, 1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_215(bool bParam0) //Position: 0xC443 / 50243
{
	Function_226(bParam0, Global_34573, 1);
	Function_216(bParam0, 1);
	Function_227(bParam0, Global_34573, 4);
	Function_53(bParam0, Global_34573);
	return;
}

void Function_216(bool bParam0, int iParam1) //Position: 0xC469 / 50281
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

var Function_217(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xC4AA / 50346
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return bVar0;
	}
	bVar0 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, bParam2, bParam1, iParam3);
	iVar1 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bParam0, false, bParam1, 4, 1);
	SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(bParam0, iVar1, bVar0);
	return bVar0;
}

void Function_218(bool bParam0, int iParam1, bool bParam2) //Position: 0xC4E5 / 50405
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
			if (IS_ACTOR_ALIVE(bVar1))
			{
				TASK_DRAW_HOLSTER_WEAPON(bVar1, iParam1);
				TASK_PRIORITY_SET(bVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

int Function_219(int iParam0, int iParam1, int iParam2) //Position: 0xC534 / 50484
{
	bool bVar0;
	
	bVar0 = false;
	switch (iLocal_668)
	{
		case 0x00000000:
			if (DECOR_CHECK_EXIST(Global_34573, "TES_churchSquadBlip1"))
			{
				Function_211(iParam0);
				iLocal_668 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_210(iParam0))
			{
				if (Function_208(iParam0) < 2.0f)
				{
					Function_220();
					iLocal_668 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_210(iParam0))
			{
				if (Function_208(iParam0) < 3.0f)
				{
					Function_239((*iParam2)[14], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					bVar0 = false;
					while (bVar0 < (SQUAD_GET_SIZE((*iParam2)[14]) - 1))
					{
						if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX((*iParam2)[14], bVar0)))
						{
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX((*iParam2)[14], bVar0));
							SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(SQUAD_GET_ACTOR_BY_INDEX((*iParam2)[14], bVar0), Local_1.f_140, 4, 1);
						}
						bVar0++;
					}
					if (IS_DOOR_LOCKED((*iParam1)[0]))
					{
						Function_39((*iParam1)[0], 0);
					}
					if (IS_DOOR_LOCKED((*iParam1)[1]))
					{
						Function_39((*iParam1)[1], 0);
					}
					return 1;
				}
			}
			break;
	}
	return 0;
}

void Function_220() //Position: 0xC645 / 50757
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "TesAzul_WarnsAnothaAttack", "TesAzul_WarnsAnothaAttack", false, 3, 1, 0, 1);
	Function_56();
	START_SCRIPT_CONVERSATION(true, 0);
	return;
}

void Function_221() //Position: 0xC69D / 50845
{
	if (!Function_23(bLocal_840, 32))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_808[04]) < 2)
		{
			SQUAD_GOALS_CLEAR(Local_808[04]);
			Function_175(Local_808[04]);
			Function_217(Local_808[04], Local_1.f_164, 0, 4294967295);
			Function_248(&bLocal_840, 32);
		}
	}
	if (Function_23(bLocal_840, 2147483648))
	{
		if (!Function_23(bLocal_840, 4194304))
		{
			if (!Function_23(bLocal_840, 0x8000000))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(vLocal_825[03]) == 0)
				{
					DECOR_SET_BOOL(Global_34573, "tes_gateGuyReady01", true);
					Function_248(&bLocal_840, 4194304);
				}
			}
		}
	}
	if (Function_23(bLocal_840, 2147483648))
	{
		if (!Function_23(bLocal_840, 4194304))
		{
			if (!Function_23(bLocal_840, 0x4000000))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(vLocal_825[13]) == 0)
				{
					DECOR_SET_BOOL(Global_34573, "tes_gateGuyReady02", true);
					Function_248(&bLocal_840, 4194304);
				}
			}
		}
	}
	return;
}

bool Function_222(var uParam0, var uParam1, int iParam2) //Position: 0xC7A4 / 51108
{
	return Function_223(Global_29006, uParam0, uParam1, iParam2);
}

int Function_223(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0xC7B6 / 51126
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

void Function_224(bool bParam0, bool bParam1) //Position: 0xC852 / 51282
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_IDENTIFY(bParam0, bVar1);
		}
		bVar0++;
	}
	return;
}

bool Function_225(bool bParam0, bool bParam1) //Position: 0xC888 / 51336
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

void Function_226(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC8DE / 51422
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
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
				if (bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(bVar1, bParam1, true);
				}
				else
				{
					GET_POSITION(bParam1, &uVar2);
					MEMORY_REPORT_POSITION(bVar1, bParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_227(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC949 / 51529
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

bool Function_228(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, float fParam5) //Position: 0xC98E / 51598
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
			if (Function_229(bParam0, bVar1, iParam2, iParam3, iParam4, fParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_229(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xC9EE / 51694
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

void Function_230(var uParam0, var uParam1, int iParam2) //Position: 0xCADB / 51931
{
	if (!*uParam0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "ReadyForEnding"))
		{
			*iParam2 = LAUNCH_NEW_SCRIPT("$/content/Ambient/Regional/TES/event_tes_boss", 0);
			*uParam0 = 1;
			Function_39((*uParam1)[0], 0);
			Function_39((*uParam1)[1], 0);
		}
	}
	return;
}

void Function_231(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0xCB4F / 52047
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		Function_232(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1, iParam2, iParam3, 1, 0, 1);
		bVar0++;
	}
}

void Function_232(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0xCB85 / 52101
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, bParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

void Function_233(bool bParam0) //Position: 0xCBC2 / 52162
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
			SQUAD_LEAVE(bVar1);
			DESTROY_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_234(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xCC06 / 52230
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (Function_42(bVar1, iParam1, iParam2, iParam3, iParam4, 0))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_235(bool bParam0, bool bParam1) //Position: 0xCC4B / 52299
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

void Function_236(var uParam0, int iParam1) //Position: 0xCC94 / 52372
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID((*iParam1)[0]))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE((*iParam1)[0]) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX((*iParam1)[0], bVar0)))
			{
				if (IS_ACTOR_HOGTIED(SQUAD_GET_ACTOR_BY_INDEX((*iParam1)[0], bVar0)))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX((*iParam1)[0], bVar0))))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX((*iParam1)[0], bVar0)));
					}
				}
			}
			bVar0++;
		}
	}
	if (SQUAD_IS_VALID((*uParam0)[14]))
	{
		bVar1 = false;
		while (bVar1 < (SQUAD_GET_SIZE((*uParam0)[14]) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX((*uParam0)[14], bVar1)))
			{
				if (IS_ACTOR_IN_HOGTIE(SQUAD_GET_ACTOR_BY_INDEX((*uParam0)[14], bVar1)))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX((*uParam0)[14], bVar1))))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX((*uParam0)[14], bVar1)));
					}
				}
			}
			bVar1++;
		}
	}
	return;
}

void Function_237(char* cParam0, int iParam1) //Position: 0xCD6C / 52588
{
	var uVar0;
	int iVar1;
	
	uVar0 = NET_MAILBOX_GET_CHALLENGE_BY_ID(cParam0);
	iVar1 = Function_238(&uVar0);
	if (iVar1 >= 4294967295)
	{
		if (Global_84611[iVar1140].f_64 && Function_210(iParam1))
		{
			(*&Global_84611[iVar1140] + 144)[412] = Function_208(iParam1);
		}
	}
	return;
}

var Function_238(bool bParam0) //Position: 0xCDAB / 52651
{
	int iVar0;
	int iVar1;
	
	iVar0 = *bParam0;
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

void Function_239(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0xCDDD / 52701
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

void Function_240(bool bParam0, int iParam1) //Position: 0xCEC7 / 52935
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_33(bParam0))
	{
		Function_31();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_30(bParam0);
	if (StackVal != 2)
	{
		Function_26("DEED_START", bParam0);
	}
	Global_13172[bParam011].f_8 = StackVal + 1;
	Global_13172[bParam011].f_4 = 2;
	Global_6271 = bParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_72(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_28(bParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_119(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_118(Global_6269) };
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

void Function_241(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xCFD7 / 53207
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

void Function_242(bool bParam0, bool bParam1) //Position: 0xD02A / 53290
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

vector3 Function_243(bool bParam0) //Position: 0xD07E / 53374
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

void Function_244(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) //Position: 0xD0A5 / 53413
{
	if (Function_23(*iParam1, 1024))
	{
		Function_248(iParam1, 512);
		*uParam2 = CREATE_ACTOR_IN_LAYOUT(*uParam0, "sheriff", 462, *(&Local_1 + 264), *(&Local_1 + 264 + 12));
		bLocal_673 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "TES_LawSquad"));
		SQUAD_JOIN(*uParam2, bLocal_673);
		Function_248(&iLocal_675, 512);
		TASK_PRIORITY_SET(*uParam2, true);
		SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bLocal_673, true, Local_1.f_88, 4, 1);
		(*uParam5)[0] = CREATE_ACTOR_IN_LAYOUT(*uParam0, Function_59(), 976, *(&Local_1 + 684), *(&Local_1 + 684 + 12));
		TASK_STAND_STILL((*uParam5)[0], -1.0f, 0, 0);
		ACCESSORIZE_HORSE((*uParam5)[0], 3);
		(*uParam5)[1] = CREATE_ACTOR_IN_LAYOUT(*uParam0, Function_59(), 977, *(&Local_1 + 740), *(&Local_1 + 740 + 12));
		TASK_STAND_STILL((*uParam5)[1], -1.0f, 0, 0);
		ACCESSORIZE_HORSE((*uParam5)[1], 3);
		*uParam4 = CREATE_ACTOR_IN_LAYOUT(*uParam0, "BobTheCaptive", 461, *(&Local_1 + 908), *(&Local_1 + 908 + 12));
		*uParam6 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "TES_DeputySquad"));
		SQUAD_JOIN(*uParam4, *uParam6);
		MEMORY_CONSIDER_AS(*uParam4, Global_34573, false);
		DELETE_ALL_WEAPONS_FROM_ACTOR(*uParam4);
		TASK_STAND_STILL(*uParam4, -1.0f, 0, 0);
		SET_ACTOR_CAN_BE_TARGETED(*uParam4, false);
		SET_ACTOR_CAN_BE_SOFTLOCKED(*uParam4, 0);
		SET_ACTOR_CAN_BE_HARDLOCKED(*uParam4, 0);
		SET_ACTOR_CAN_BE_AIMASSISTED(*uParam4, 0);
		SET_ACTOR_INVULNERABILITY(*uParam4, true);
		AI_ENABLE_PERCEPTION(*uParam4);
		SET_ACTOR_CAN_PLAY_GESTURES(*uParam4, false);
		SET_ACTOR_UPDATE_PRIORITY(*uParam4, false);
		SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(10, 13, 0,1f);
		SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(13, 10, 0,1f);
		SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(20, 13, 0,1f);
		SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(13, 20, 0,1f);
		SET_FACTIONS_STATUS_TWO_WAY(10, 13, 4);
		SQUAD_SET_FACTION(bLocal_673, 20);
		MEMORY_CONSIDER_AS_ENEMY(*uParam2, FIND_ACTOR_IN_LAYOUT(Global_30616, "Preacher"));
		MEMORY_CONSIDER_AS_ENEMY(*uParam2, FIND_ACTOR_IN_LAYOUT(Global_30616, "MainHo"));
		MEMORY_CONSIDER_AS_ENEMY(*uParam2, FIND_ACTOR_IN_LAYOUT(Global_30616, "Juan"));
		MEMORY_ATTACK_ON_SIGHT(*uParam2, 1);
		MEMORY_CONSIDER_AS(*uParam2, Global_34573, false);
		SET_CRIPPLE_ENABLE(*uParam2, 0);
		SET_ACTOR_ALLOW_DISARM(*uParam2, false);
		SET_ACTOR_PROOF(*uParam2, 128);
		DELETE_ALL_WEAPONS_FROM_ACTOR(*uParam2);
		GIVE_WEAPON_TO_ACTOR(*uParam2, 9, false, 1, 1);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam2, 0);
		SET_ACTOR_CAN_PLAY_GESTURES(*uParam2, false);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*uParam2, 2, false);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*uParam2, 3, false);
		SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0,1f);
		Function_227((*uParam3)[13], *uParam2, 4);
		Function_52(*uParam2, (*uParam3)[13], 4);
		Function_227((*uParam3)[03], *uParam2, 4);
		Function_52(*uParam2, (*uParam3)[03], 4);
		Function_245(&Local_1 + 2192);
		*uParam7 = CREATE_GATEWAY_IN_LAYOUT(*uParam0, Function_59(), Local_1.f_216, Global_34573, 2, 3, 0, false, 1, 1);
		ADD_BLIP_FOR_OBJECT(*uParam7, 330, 0f, 2, 0);
	}
}

void Function_245(int iParam0) //Position: 0xD36E / 54126
{
	vector3 vVar0;
	vector3 vVar3;
	char* cVar6[64];
	bool bVar22;
	
	Function_243(*iParam0);
	vVar0 = { StackVal, StackVal, Function_243(*iParam0) };
	Function_246(*iParam0);
	vVar3 = { StackVal, StackVal, Function_246(*iParam0) };
	strcpy(&cVar6, GET_OBJECT_NAME(*iParam0), 64);
	bVar22 = GET_OBJECT_OWNER(*iParam0);
	vVar3.x = 0.0f;
	vVar3.f_8 = 0.0f;
	vVar3.f_4 = (180.0f - vVar3.y);
	vVar3.f_4 = GET_OBJECT_HEADING(*iParam0);
	PRINTSTRING("Creating right hand cover in ");
	PRINTSTRING(GET_OBJECT_NAME(bVar22));
	PRINTSTRING(" at ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(" facing ");
	PRINTVECTOR(vVar3);
	PRINTSTRING(" called ");
	PRINTSTRING(&cVar6);
	PRINTNL();
	DESTROY_OBJECT(*iParam0);
	*iParam0 = CREATE_COVER_LOCATION_IN_LAYOUT(bVar22, &cVar6, vVar0, vVar3, 2);
	return;
}

vector3 Function_246(bool bParam0) //Position: 0xD43A / 54330
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

void Function_247(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xD461 / 54369
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	
	bVar0 = 999,9f;
	GET_POSITION(Global_34573, &vVar1);
	if (VDIST(*(&Local_1 + 264), vVar1) > bVar0)
	{
		bVar0 = VDIST(*(&Local_1 + 264), vVar1);
		bVar5 = true;
		bVar4 = false;
		Function_248(&iLocal_675, 512);
	}
	if (VDIST(*(&Local_1 + 320), vVar1) > bVar0)
	{
		bVar0 = VDIST(*(&Local_1 + 320), vVar1);
		bVar5 = false;
		bVar4 = true;
		Function_45(&iLocal_675, 512);
	}
	if (bVar4)
	{
		(*uParam2)[0] = CREATE_ACTOR_IN_LAYOUT(*uParam0, Function_59(), 976, *(&Local_1 + 600), *(&Local_1 + 600 + 12));
		(*uParam2)[1] = CREATE_ACTOR_IN_LAYOUT(*uParam0, Function_59(), 977, *(&Local_1 + 628), *(&Local_1 + 628 + 12));
	}
	else if (bVar5)
	{
		(*uParam2)[0] = CREATE_ACTOR_IN_LAYOUT(*uParam0, Function_59(), 976, *(&Local_1 + 684), *(&Local_1 + 684 + 12));
		(*uParam2)[1] = CREATE_ACTOR_IN_LAYOUT(*uParam0, Function_59(), 977, *(&Local_1 + 740), *(&Local_1 + 740 + 12));
	}
	TASK_STAND_STILL((*uParam2)[0], -1.0f, 0, 0);
	TASK_STAND_STILL((*uParam2)[1], -1.0f, 0, 0);
	*uParam1 = CREATE_ACTOR_IN_LAYOUT(*uParam0, "BobTheCaptive", 461, *(&Local_1 + 908), *(&Local_1 + 908 + 12));
	*uParam3 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "TES_DeputySquad"));
	SQUAD_JOIN(*uParam1, *uParam3);
	MEMORY_CONSIDER_AS(*uParam1, Global_34573, false);
	TASK_STAND_STILL(*uParam1, -1.0f, 0, 0);
	SET_ACTOR_CAN_BE_TARGETED(*uParam1, false);
	SET_ACTOR_CAN_BE_SOFTLOCKED(*uParam1, 0);
	SET_ACTOR_CAN_BE_HARDLOCKED(*uParam1, 0);
	SET_ACTOR_CAN_BE_AIMASSISTED(*uParam1, 0);
	AI_ENABLE_PERCEPTION(*uParam1);
	if (Function_23(iLocal_675, 512))
	{
		DECOR_SET_BOOL(Global_34573, "SpawnedOnLeft", true);
	}
	else
	{
		DECOR_SET_BOOL(Global_34573, "SpawnedOnRight", true);
	}
}

void Function_248(bool bParam0, bool bParam1) //Position: 0xD64D / 54861
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

void Function_249(int iParam0) //Position: 0xD65C / 54876
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	Function_243(Local_1.f_1204);
	vVar0 = { StackVal, StackVal, Function_243(Local_1.f_1204) };
	Function_243(Local_1.f_1212);
	vVar3 = { StackVal, StackVal, Function_243(Local_1.f_1212) };
	Function_243(Local_1.f_1224);
	vVar6 = { StackVal, StackVal, Function_243(Local_1.f_1224) };
	TELEPORT_ACTOR((*iParam0)[6], &vVar0, 1, 1, 1);
	TELEPORT_ACTOR((*iParam0)[8], &vVar3, 1, 1, 1);
	TELEPORT_ACTOR((*iParam0)[2], &vVar6, 1, 1, 1);
	return;
}

void Function_250(var uParam0, var uParam1, bool bParam2) //Position: 0xD6AE / 54958
{
	char* cVar0[32];
	
	*uParam1 = CREATE_OBJECTSET_IN_LAYOUT("TES_AreaChests", *uParam0, 4294967295, 0);
	Function_252(uParam0, Local_1.f_1352, uParam1);
	*bParam2 = CREATE_GRINGO_IN_LAYOUT(*uParam0, "gunChest", "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", *(&Local_1 + 2060), *(&Local_1 + 2060 + 12));
	strcpy(&cVar0, "Weapon_", 32);
	straddi(&cVar0, 6, 32);
	DECOR_SET_INT(*bParam2, &cVar0, false);
	Function_251(*uParam0, 43, Local_1.f_1760, 0, 1, 0.0f, 0, 3212836864);
	Function_251(*uParam0, 43, Local_1.f_1732, 0, 1, 0.0f, 0, 3212836864);
	Function_251(*uParam0, 43, Local_1.f_1788, 0, 1, 0.0f, 0, 3212836864);
	return;
}

var Function_251(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, int iParam7) //Position: 0xD79E / 55198
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	vector3 vVar7;
	vector3 vVar10;
	
	GET_OBJECT_POSITION(bParam2, &uVar4);
	bVar0 = CREATE_WEAPON_PICKUP(bParam0, bParam1, &uVar4, 0.0f, fParam5, iParam6, iParam7);
	GET_OBJECT_POSITION(bParam2, &vVar7);
	GET_OBJECT_ORIENTATION(bParam2, &vVar10);
	SET_OBJECT_POSITION(bVar0, vVar7);
	SET_OBJECT_ORIENTATION(bVar0, vVar10);
	if (bParam3)
	{
		vVar1 = { 0.0f, -0,001f, 0.0f };
		ACTIVATE_PHYSINST(GET_PHYSINST_FROM_OBJECT(bVar0));
		SET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT(bVar0), &vVar1);
	}
	DECOR_SET_INT(bVar0, "NumClips", bParam4);
	return bVar0;
}

void Function_252(var uParam0, bool bParam1, int iParam2) //Position: 0xD81C / 55324
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
		Function_243(bVar1);
		vVar2 = { StackVal, StackVal, Function_243(bVar1) };
		bVar5 = GET_OBJECT_HEADING(bVar1);
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_205("amb_areaChest") };
	}
}

void Function_253(var uParam0, var uParam1, int iParam2) //Position: 0xDAD8 / 56024
{
	(*iParam2)[0] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "TES_RunOutSquad0"));
	(*uParam1)[0] = CREATE_ACTOR_IN_LAYOUT(*uParam0, "gateGuy", 411, *(&Local_1 + 992), *(&Local_1 + 992 + 12));
	SQUAD_JOIN((*uParam1)[0], (*iParam2)[0]);
	MEMORY_CONSIDER_AS((*uParam1)[0], Global_34573, 4);
	TASK_STAND_STILL((*uParam1)[0], -1.0f, 0, 0);
	MEMORY_REPORT_POSITION_AUTO((*uParam1)[0], Global_34573, true);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED((*uParam1)[0], true);
	(*uParam1)[1] = CREATE_ACTOR_IN_LAYOUT(*uParam0, "ngateGuy01", 414, *(&Local_1 + 1020), *(&Local_1 + 1020 + 12));
	SQUAD_JOIN((*uParam1)[1], (*iParam2)[0]);
	MEMORY_CONSIDER_AS((*uParam1)[1], Global_34573, 4);
	TASK_STAND_STILL((*uParam1)[1], -1.0f, 0, 0);
	MEMORY_REPORT_POSITION_AUTO((*uParam1)[1], Global_34573, true);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED((*uParam1)[1], true);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK((*iParam2)[0], 690856);
	SQUAD_SET_FACTION((*iParam2)[0], 19);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION((*iParam2)[0], 0);
	return;
}

void Function_254(bool bParam0) //Position: 0xDBE3 / 56291
{
	TELEPORT_ACTOR((*bParam0)[9], &Local_1 + 1048, 1, 1, 1);
	return;
}

void Function_255(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xDBFA / 56314
{
	int iVar0;
	
	(*uParam1)[04] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "ProsSideSquad"));
	iVar0 = 6;
	while (iVar0 < 8)
	{
		if (IS_ACTOR_VALID((*uParam2)[iVar0]))
		{
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED((*uParam2)[iVar0], true);
			Function_258((*uParam2)[iVar0], 50.0f, 1.0f, 1.0f);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME((*uParam2)[iVar0], Local_1.f_140);
			TASK_STAND_STILL((*uParam2)[iVar0], -1.0f, 0, 0);
			SQUAD_JOIN((*uParam2)[iVar0], (*uParam1)[04]);
			ADD_ACTOR_STAY_WITHIN_VOLUME((*uParam2)[iVar0], Local_1.f_112);
			MEMORY_IDENTIFY((*uParam2)[iVar0], Global_34573);
			MEMORY_REPORT_POSITION_AUTO((*uParam2)[iVar0], Global_34573, true);
			SQUAD_SET_FACTION((*uParam1)[04], 19);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION((*uParam1)[04], 0);
		}
		iVar0++;
	}
	uParam1[04]->f_12 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME((*uParam1)[04], true, Local_1.f_112, 1, 1);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (IS_ACTOR_VALID((*uParam2)[iVar0]))
		{
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED((*uParam2)[iVar0], true);
			Function_258((*uParam2)[iVar0], 50.0f, 1.0f, 1.0f);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME((*uParam2)[iVar0], Local_1.f_140);
			TASK_STAND_STILL((*uParam2)[iVar0], -1.0f, 0, 0);
			SQUAD_JOIN((*uParam2)[iVar0], (*uParam1)[04]);
			ADD_ACTOR_STAY_WITHIN_VOLUME((*uParam2)[iVar0], Local_1.f_112);
			MEMORY_IDENTIFY((*uParam2)[iVar0], Global_34573);
			MEMORY_REPORT_POSITION_AUTO((*uParam2)[iVar0], Global_34573, true);
		}
		iVar0++;
	}
	(*uParam1)[14] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "ChurchSideSquad"));
	iVar0 = 3;
	while (iVar0 < 5)
	{
		if (IS_ACTOR_VALID((*uParam2)[iVar0]))
		{
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED((*uParam2)[iVar0], true);
			Function_258((*uParam2)[iVar0], 50.0f, 1.0f, 1.0f);
			SQUAD_JOIN((*uParam2)[iVar0], (*uParam1)[14]);
			SQUAD_SET_FACTION((*uParam1)[14], 19);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION((*uParam1)[14], 0);
			TASK_STAND_STILL((*uParam2)[iVar0], -1.0f, 0, 0);
			ADD_ACTOR_STAY_WITHIN_VOLUME((*uParam2)[iVar0], Local_1.f_140);
			MEMORY_IDENTIFY((*uParam2)[iVar0], Global_34573);
			MEMORY_REPORT_POSITION_AUTO((*uParam2)[iVar0], Global_34573, true);
		}
		iVar0++;
	}
	(*uParam3)[03] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "FrontGateSquad"));
	if (IS_ACTOR_VALID((*uParam2)[9]))
	{
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED((*uParam2)[9], true);
		MEMORY_CONSIDER_AS((*uParam2)[9], Global_34573, 2);
		SQUAD_JOIN((*uParam2)[9], (*uParam3)[03]);
		MEMORY_IDENTIFY((*uParam2)[9], *uParam4);
		MEMORY_IDENTIFY((*uParam2)[9], Global_34573);
		if (Function_23(*uParam5, 1024))
		{
			TASK_SHOOT_FROM_COVER(SQUAD_GET_ACTOR_BY_INDEX((*uParam3)[03], false), *uParam4, GET_COVER_LOCATION_FROM_OBJECT(Local_1.f_2188), -1.0f, 1086324736);
		}
		else
		{
			Function_175((*uParam3)[03]);
			Function_257((*uParam3)[03], 1, -1.0f);
		}
		SQUAD_SET_FACTION((*uParam3)[03], 21);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION((*uParam3)[03], 0);
		uParam3[03]->f_4 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME((*uParam3)[03], true, Local_1.f_100, 1, 1);
	}
	Function_256((*uParam1)[04], Global_34573, 4);
	Function_256((*uParam1)[14], Global_34573, 4);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK((*uParam1)[04], 690856);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK((*uParam1)[14], 690856);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK((*uParam3)[03], 690856);
}

void Function_256(bool bParam0, bool bParam1, bool bParam2) //Position: 0xDF0D / 57101
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
			MEMORY_CONSIDER_AS(bVar1, bParam1, bParam2);
			MEMORY_IDENTIFY(bVar1, bParam1);
			if (!bParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_IDENTIFY(bParam1, bVar1);
				MEMORY_CONSIDER_AS(bParam1, bVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_257(bool bParam0, bool bParam1, bool bParam2) //Position: 0xDF7B / 57211
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	bool bVar5;
	
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
			GET_POSITION(bVar1, &uVar2);
			bVar5 = GET_HEADING(bVar1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(bVar1, &uVar2, bVar5, bParam2);
			TASK_PRIORITY_SET(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_258(bool bParam0, bool bParam1, float fParam2, float fParam3) //Position: 0xDFD4 / 57300
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (fParam2 == -1.0f || fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, fParam2, fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, bParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
		}
	}
}

void Function_259(bool bParam0) //Position: 0xE01B / 57371
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		(*bParam0)[iVar0] = Function_260(&Global_6785, &Global_7910, iVar0, 0, 0, 1);
		if (IS_ACTOR_VALID((*bParam0)[iVar0]))
		{
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*bParam0)[iVar0], 80.0f);
		}
		iVar0++;
	}
	return;
}

var Function_260(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0xE062 / 57442
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_18(uParam0[iVar02], 1))
	{
		return "";
	}
	if (!Function_18(uParam0[iVar02], 2))
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
			if (!Function_18(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_16(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, false) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_262(StackVal, StackVal, StackVal, Global_6289, Function_59(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_18(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_16(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_16(uParam0[iVar02], 1);
	Function_261(StackVal, 1);
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

int Function_261(bool bParam0, bool bParam1) //Position: 0xE1F8 / 57848
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

var Function_262(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0xE29A / 58010
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

bool Function_263(bool bParam0) //Position: 0xE3B3 / 58291
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_267();
	iVar1 = 0;
	if (!Function_10(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_266(bParam0[iVar03], 8);
		}
		else if (Function_265())
		{
			iVar1 = 1;
			Function_266(bParam0[iVar03], 8);
		}
		Function_266(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_10(bParam0[iVar03], 4))
		{
			if (!Function_10(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_10(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_10(bParam0[03], 8) || iVar1));
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
				Function_266(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_10(bParam0[iVar03], 4))
		{
			if (!Function_10(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_266(bParam0[iVar03], 2);
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
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_266(bParam0[iVar03], 2);
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
	Function_264();
	return 1;
}

void Function_264() //Position: 0xE72E / 59182
{
	if (!Function_331(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_265() //Position: 0xE76E / 59246
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

void Function_266(var uParam0, int iParam1) //Position: 0xE799 / 59289
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_267() //Position: 0xE7AA / 59306
{
	if (!Function_331(128))
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

bool Function_268(int iParam0) //Position: 0xE7EC / 59372
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
		Function_274();
		return 0;
	}
	return 1;
}

void Function_269() //Position: 0xE834 / 59444
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	
	if (bLocal_888)
	{
		bVar0 = false;
		while (bVar0 < (GET_OBJECTSET_SIZE(bLocal_889) - 1))
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_889);
			bVar2 = FLOOR(POW(2.0f, TO_FLOAT(bVar0)));
			if (Function_270(Global_34573, bVar1) > 100.0f)
			{
				Function_243(bVar1);
				vVar3 = { StackVal, StackVal, Function_243(bVar1) };
				if (!Function_23(iLocal_887, bVar2))
				{
					Function_248(&iLocal_887, bVar2);
					CLEAR_AREA_OF_GRASS(vVar3, 1,75f);
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
			}
			else
			{
				Function_45(&iLocal_887, bVar2);
			}
			bVar0++;
		}
	}
	return;
}

float Function_270(bool bParam0, bool bParam1) //Position: 0xE8BD / 59581
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_271(bParam0);
			vVar0 = { StackVal, StackVal, Function_271(bParam0) };
			Function_271(bParam1);
			vVar3 = { StackVal, StackVal, Function_271(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_271(bool bParam0) //Position: 0xE958 / 59736
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

int Function_272(bool bParam0) //Position: 0xE9C4 / 59844
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	struct<8> Var8;
	bool bVar16;
	
	if (!Function_320(bParam0, 2048))
	{
		return 0;
	}
	if (Function_324() || NET_IS_IN_SESSION())
	{
		return 0;
	}
	bLocal_889 = CREATE_OBJECTSET_IN_LAYOUT("AARewardChests", Global_30616, 12, 0);
	bLocal_888 = true;
	bVar0 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 8);
	ITERATE_ON_PARTIAL_NAME(bVar0, "f_AreaTreasure");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		Function_243(bVar1);
		vVar2 = { StackVal, StackVal, Function_243(bVar1) };
		Function_246(bVar1);
		vVar5 = { StackVal, StackVal, Function_246(bVar1) };
		Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_205("NoAATreasure") };
		bVar16 = CREATE_GRINGO_IN_LAYOUT(Global_30616, &Var8, "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", vVar2, vVar5);
		DECOR_SET_BOOL(bVar16, "ActionAreaRewardChest", true);
		ADD_OBJECT_TO_OBJECTSET(bVar16, bLocal_889);
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 1;
}

int Function_273(char* cParam0, int iParam1, float fParam2, int iParam3, char* cParam4, int iParam5) //Position: 0xEAE8 / 60136
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

void Function_274() //Position: 0xEB67 / 60263
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

void Function_275() //Position: 0xEBD0 / 60368
{
	int iVar0;
	int iVar1;
	
	AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_07", "SUSPENSE_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
	HUD_CLEAR_HELP();
	HUD_CLEAR_HELP_QUEUE();
	if ((!Function_131(Global_76846, 16) && !Global_34165.f_36) && !IS_ACTOR_ON_TRAIN(Global_34573, 0))
	{
		Function_126(Global_34573, 16, 1, 0);
	}
	bLocal_792 = CREATE_JOURNAL_ENTRY("tes_JournalID", 0, 4294967295, 0);
	APPEND_JOURNAL_ENTRY(bLocal_792, 0);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_1.f_148);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_1.f_148);
	uLocal_832[0] = Function_282(1, Global_30685[2], 5);
	uLocal_832[1] = Function_282(4, Global_30685[2], 5);
	uLocal_832[2] = Function_282(0, Global_30685[2], 5);
	Function_281(uLocal_832[2]);
	Function_281(uLocal_832[1]);
	Function_281(uLocal_832[0]);
	Function_201(Global_30741, 1);
	if (Function_198(Global_30741) == 0)
	{
		Function_248(&bLocal_840, 1024);
	}
	if (Function_198(Global_30741) > 1)
	{
		Function_248(&bLocal_840, 0x40000000);
	}
	uLocal_708[0] = Function_222("tesoroAzul", "wall01", 4);
	uLocal_708[1] = Function_222("tesoroAzul", "wall01", 3);
	uLocal_708[2] = Function_222("tesoroAzul", "wall01", 2);
	uLocal_708[3] = Function_222("tesoroAzul", "wall01", 1);
	uLocal_713[0] = Function_222("tesoroAzul", "house04", 1);
	uLocal_713[1] = Function_222("tesoroAzul", "house04", 2);
	uLocal_713[2] = Function_222("tesoroAzul", "house02", 1);
	uLocal_713[3] = Function_222("tesoroAzul", "house02", 2);
	Function_242(uLocal_713[0], 0);
	Function_242(uLocal_713[1], 0);
	Function_242(uLocal_713[2], 0);
	Function_242(uLocal_713[3], 0);
	uLocal_718[0] = Function_222("tesoroAzul", "house01", 1);
	uLocal_718[1] = Function_222("tesoroAzul", "house01", 2);
	CLOSE_DOOR_FAST(uLocal_718[0]);
	CLOSE_DOOR_FAST(uLocal_718[1]);
	if (!IS_DOOR_LOCKED(uLocal_718[0]))
	{
		Function_242(uLocal_718[0], 0);
	}
	if (!IS_DOOR_LOCKED(uLocal_718[1]))
	{
		Function_242(uLocal_718[1], 0);
	}
	Function_280(&bLocal_755, 461, 3, 1);
	Function_280(&bLocal_755, 462, 3, 1);
	Function_280(&bLocal_755, 406, 3, 1);
	Function_280(&bLocal_755, 408, 3, 1);
	Function_278(&bLocal_755, "action_areas", 10, 0);
	Function_278(&bLocal_755, "door_kick_rifle_to_coh", 1, 0);
	Function_278(&bLocal_755, "shotgun_doubleBarrel01x", 0, 1);
	Function_278(&bLocal_755, "AA_tesoro_intro_cover", 5, 0);
	Function_278(&bLocal_755, "custom/AA_tesoro_intro_cover", 8, 0);
	Function_278(&bLocal_755, "shakehands_link", 1, 0);
	Function_278(&bLocal_755, "Locked_Footlocker", 1, 0);
	Function_280(&bLocal_755, 1128, 3, 1);
	Function_245(&Local_1 + 2184);
	bLocal_747 = CREATE_LAYOUT("TES_AA_Layout");
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (!(iVar0 != 10 || iVar0 != 11))
		{
			if (!Function_18(&(Global_6785[iVar02]), 2) || Function_18(&(Global_6785[iVar02]), 4))
			{
				bLocal_868 = true;
			}
		}
		iVar0++;
	}
	if (!bLocal_868)
	{
		iVar1 = NET_MAILBOX_GET_CHALLENGE_BY_ID("sc_challenge_aa_06");
		SC_CHALLENGE_LAUNCH(iVar1);
		if (!Function_210(&iLocal_796))
		{
			Function_213(&iLocal_796);
		}
		else
		{
			Function_211(&iLocal_796);
		}
	}
	Function_276(32768);
	return;
}

void Function_276(int iParam0) //Position: 0xF047 / 61511
{
	Function_277(&Global_28842, iParam0);
	return;
}

void Function_277(var uParam0, int iParam1) //Position: 0xF055 / 61525
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

var Function_278(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xF078 / 61560
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_279(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_266(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_279(var uParam0, int iParam1, int iParam2) //Position: 0xF0B0 / 61616
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_10(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_266(uParam0[iVar03], 4);
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

var Function_280(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xF174 / 61812
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_10(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_266(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_266(bParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*bParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_281(int iParam0) //Position: 0xF244 / 62020
{
	var uVar0;
	
	if (!Function_33(iParam0))
	{
		Function_31();
		return;
	}
	uVar0 = Function_30(iParam0);
	Global_13172[iParam011].f_4 = 0;
	return;
}

int Function_282(bool bParam0, bool bParam1, bool bParam2) //Position: 0xF268 / 62056
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_286(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_283(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_283(bParam0, bParam1, bParam2, 4294967295);
}

int Function_283(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xF2C6 / 62150
{
	var uVar0;
	
	if (!Function_285(bParam2))
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
	uVar0 = Function_286(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_284(uVar0);
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

int Function_284(int iParam0) //Position: 0xF41B / 62491
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

bool Function_285(int iParam0) //Position: 0xF459 / 62553
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_286(int iParam0, int iParam1, int iParam2) //Position: 0xF46E / 62574
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_287(int iParam0) //Position: 0xF48E / 62606
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	return Function_320(&(Global_29008[iParam0]), 2048);
}

int Function_288(int iParam0, bool bParam1) //Position: 0xF4AC / 62636
{
	int iVar0;
	
	iVar0 = Function_116(iParam0);
	if (!Function_29(iVar0))
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

void Function_289(bool bParam0, float fParam1) //Position: 0xF4E9 / 62697
{
	if (!Function_331(128))
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

void Function_290(bool bParam0, bool bParam1) //Position: 0xF527 / 62759
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
		Function_291(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_324())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_291(var uParam0, int iParam1) //Position: 0xF621 / 63009
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

bool Function_292(int iParam0, var uParam1, bool bParam2) //Position: 0xF62E / 63022
{
	char* cVar0[64];
	struct<5> Var16;
	
	*uParam1[02] = { StackVal, *uParam1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_320(&(Global_29008[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_30717[1] && Function_288(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	if (Function_324())
	{
		return 0;
	}
	strcpy(&cVar0, "$/content/init/pop/", 64);
	Var16 = iParam0;
	Var16.f_4 = *uParam1;
	stradd(&cVar0, &Global_29155[Global_30621[Global_29004]10] + 20, 64);
	stradd(&cVar0, "_ghost_town", 64);
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	Global_30617 = LAUNCH_NEW_SCRIPT_WITH_ARGS(&cVar0, &Var16, 2, 0);
	return 1;
}

void Function_293(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xF6EE / 63214
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
		Function_294();
	}
	if (bParam5)
	{
		Function_46(1048576);
	}
}

void Function_294() //Position: 0xF801 / 63489
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_46(16384);
	}
	return;
}

void Function_295(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0xF81D / 63517
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
		Function_296();
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

void Function_296() //Position: 0xF901 / 63745
{
	int iVar0;
	
	Global_26960 = Function_297(StackVal);
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

int Function_297(int iParam0) //Position: 0xF94F / 63823
{
	if (!Function_298(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_298(int iParam0) //Position: 0xF967 / 63847
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_299(int iParam0) //Position: 0xF97C / 63868
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_300(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0xF98F / 63887
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_331(2))
	{
		return;
	}
	if (Function_320(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_18(uParam0[iVar02], 2))
		{
			if (Function_301(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_326(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_301(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0xFA41 / 64065
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_320(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_18(uParam0, 2))
	{
		return 1;
	}
	if (Function_18(uParam0, 4))
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
		uParam1->f_8 = Function_262(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_102(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(uParam0, 4);
	}
	Function_302(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_302(bool bParam0, int iParam1) //Position: 0xFBAC / 64428
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_102(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_102(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_102(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_102(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_102(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_102(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

void Function_303(var uParam0, var uParam1, vector3 vParam2) //Position: 0xFCE8 / 64744
{
	if (Function_102(StackVal, StackVal, vParam2))
	{
		LOG_ERROR("You're passing in a zero vector for ASSIGN_RC_VEC_ALL_TIMES. Please fix this!");
	}
	else
	{
		Function_310(StackVal, StackVal, uParam0, uParam1, vParam2);
		Function_309(StackVal, StackVal, uParam0, uParam1, vParam2);
		Function_308(StackVal, StackVal, uParam0, uParam1, vParam2);
		Function_307(StackVal, StackVal, uParam0, uParam1, vParam2);
		Function_306(StackVal, StackVal, uParam0, uParam1, vParam2);
		Function_304(StackVal, StackVal, uParam0, uParam1, vParam2);
	}
}

void Function_304(var uParam0, var uParam1, vector3 vParam2) //Position: 0xFD92 / 64914
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_305(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

bool Function_305(vector3 vParam0, vector3 vParam3) //Position: 0xFDF8 / 65016
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_306(var uParam0, var uParam1, vector3 vParam2) //Position: 0xFE25 / 65061
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_305(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_307(var uParam0, var uParam1, vector3 vParam2) //Position: 0xFE8D / 65165
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_305(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_308(var uParam0, var uParam1, vector3 vParam2) //Position: 0xFEF7 / 65271
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_305(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_309(var uParam0, var uParam1, vector3 vParam2) //Position: 0xFF5C / 65372
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_305(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_310(var uParam0, var uParam1, vector3 vParam2) //Position: 0xFFC4 / 65476
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_305(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

void Function_311(int iParam0, var uParam1, bool bParam2) //Position: 0x10029 / 65577
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

void Function_312(int iParam0, var uParam1, bool bParam2) //Position: 0x10084 / 65668
{
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("You're passing in a zero vector for ASSIGN_RC_OBJ_ALL_TIMES. Please fix this!");
	}
	else
	{
		Function_318(iParam0, uParam1, bParam2);
		Function_317(iParam0, uParam1, bParam2);
		Function_316(iParam0, uParam1, bParam2);
		Function_315(iParam0, uParam1, bParam2);
		Function_314(iParam0, uParam1, bParam2);
		Function_313(iParam0, uParam1, bParam2);
	}
	return;
}

void Function_313(var uParam0, var uParam1, bool bParam2) //Position: 0x1011F / 65823
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

void Function_314(var uParam0, var uParam1, bool bParam2) //Position: 0x10183 / 65923
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

void Function_315(var uParam0, var uParam1, bool bParam2) //Position: 0x101E9 / 66025
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

void Function_316(var uParam0, var uParam1, bool bParam2) //Position: 0x10251 / 66129
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

void Function_317(var uParam0, var uParam1, bool bParam2) //Position: 0x102B4 / 66228
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

void Function_318(var uParam0, var uParam1, bool bParam2) //Position: 0x1031A / 66330
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

int Function_319(int iParam0) //Position: 0x10389 / 66441
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_320(&(Global_29008[iParam0]), 4);
}

bool Function_320(var uParam0, int iParam1) //Position: 0x103A5 / 66469
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_321(var uParam0, var uParam1, int iParam2) //Position: 0x103C1 / 66497
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_5(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_324())
	{
		return 1;
	}
	if (Function_320(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(Function_19(iParam2), 12)))
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

int Function_322() //Position: 0x1048D / 66701
{
	if (Function_324())
	{
		return (Function_323() != 1 || Function_323() != 0);
	}
	return 0;
}

int Function_323() //Position: 0x104A6 / 66726
{
	return Global_79349.f_16;
}

bool Function_324() //Position: 0x104B2 / 66738
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_325(var uParam0, var uParam1, int iParam2) //Position: 0x104BB / 66747
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_5(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_324())
	{
		return;
	}
	if (!Function_320(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(Function_19(iParam2), 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(Function_19(iParam2), 12));
			Function_326(&(Global_29008[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_16(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_16(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_326(var uParam0, int iParam1) //Position: 0x10591 / 66961
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_327() //Position: 0x105A0 / 66976
{
	var uVar0;
	
	Function_328(3, 3);
	uVar0 = uVar0;
	Function_278(&Local_560 + 4, "$/content/scripting/gringo/simplegringo/sit_sleeponbench_n_any", 1, 0);
	Function_278(&Local_560 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_278(&Local_560 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_278(&Local_560 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_278(&Local_560 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_278(&Local_560 + 4, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_278(&Local_560 + 4, "$/content/scripting/gringo/simplegringo/dealer_and_customer", 1, 0);
	Function_278(&Local_560 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_278(&Local_560 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_278(&Local_560 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanknife", 1, 0);
	Function_278(&Local_560 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_278(&Local_560 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_278(&Local_560 + 4, "$/content/scripting/gringo/simplegringo/sit_headinhands_n_any", 1, 0);
	Function_278(&Local_560 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanpistol", 1, 0);
	Function_278(&Local_560 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_278(&Local_560 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_278(&Local_560 + 4, "$/content/scripting/gringo/simplegringo/flirting_whore", 1, 0);
	Function_278(&Local_560 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	if (!Function_263(&Local_560 + 4))
	{
		return 0;
	}
	Local_560 = FIND_NAMED_LAYOUT("TesoroAzul_layout");
	if (!IS_LAYOUTREF_VALID(Local_560))
	{
		Local_560 = CREATE_LAYOUT("TesoroAzul_layout");
	}
	Local_560.f_224 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sit_sleeponbench_n_any", "sit_sleeponbench_n_any", -3244,408f, 38,19928f, 4542,214f, 0.0f, 180,1627f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_224), 0);
	Local_560.f_228 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sit_sleeponbench_n_any1", "sit_sleeponbench_n_any", -3255,032f, 39,29401f, 4558,21f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_228), 0);
	Local_560.f_232 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sit_sleeponbench_n_any5", "sit_sleeponbench_n_any", -3283,97f, 39,26327f, 4559,062f, 0.0f, -37,67156f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_232), 0);
	Local_560.f_236 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sleeping_scripted", "sleeping_scripted", -3291,927f, 39,1667f, 4565,734f, 0.0f, -33,03367f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_236), 0);
	Local_560.f_240 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sleeping_scripted1", "sleeping_scripted", -3239,592f, 38,42777f, 4535,862f, 0.0f, -106,6595f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_240), 0);
	Local_560.f_244 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sleeping_scripted3", "sleeping_scripted", -3240,963f, 38,20451f, 4535,047f, 0.0f, 23,49129f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_244), 0);
	Local_560.f_248 = CREATE_GRINGO_IN_LAYOUT(Local_560, "lie_sleep_on_bed_l", "lie_sleep_on_bed_l", -3281,87f, 39,25564f, 4557,682f, 0.0f, 37,22447f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_248), 0);
	Local_560.f_252 = CREATE_GRINGO_IN_LAYOUT(Local_560, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -3270,622f, 40,16965f, 4541,397f, 0.0f, 177,9028f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_252), 0);
	Local_560.f_256 = CREATE_GRINGO_IN_LAYOUT(Local_560, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", -3273,17f, 40,14159f, 4538,505f, 0.0f, 121,8172f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_256), 0);
	Local_560.f_260 = CREATE_GRINGO_IN_LAYOUT(Local_560, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", -3261,249f, 42,59938f, 4556,613f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_260), 0);
	Local_560.f_264 = CREATE_GRINGO_IN_LAYOUT(Local_560, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", -3255,384f, 42,57737f, 4556,627f, 0.0f, -53,12926f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_264), 0);
	Local_560.f_268 = CREATE_GRINGO_IN_LAYOUT(Local_560, "stand_lookdistance_w_any5", "stand_lookdistance_w_any", -3282,434f, 42,19703f, 4558,405f, 0.0f, 92,34225f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_268), 0);
	Local_560.f_272 = CREATE_GRINGO_IN_LAYOUT(Local_560, "stand_lookdistance_w_any4", "stand_lookdistance_w_any", -3278,809f, 42,23241f, 4562,368f, 0.0f, -168,3611f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_272), 0);
	Local_560.f_276 = CREATE_GRINGO_IN_LAYOUT(Local_560, "Pee", "Pee", -3258,915f, 38,1489f, 4547,365f, 0.0f, 90,20707f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_276), 0);
	Local_560.f_280 = CREATE_GRINGO_IN_LAYOUT(Local_560, "Pee1", "Pee", -3260,984f, 38,19858f, 4545,676f, 0.0f, 195,0909f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_280), 0);
	Local_560.f_284 = CREATE_GRINGO_IN_LAYOUT(Local_560, "stand_peeing_b_any", "stand_peeing_b_any", -3243,81f, 39,15283f, 4568,422f, 0.0f, -148,3599f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_284), 0);
	Local_560.f_288 = CREATE_GRINGO_IN_LAYOUT(Local_560, "stand_peeing_b_any1", "stand_peeing_b_any", -3268f, 39,23588f, 4556,13f, 0.0f, 157,9097f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_288), 0);
	Local_560.f_292 = CREATE_GRINGO_IN_LAYOUT(Local_560, "stand_peeing_b_any2", "stand_peeing_b_any", -3250,518f, 38,36234f, 4552,079f, 0.0f, -42,68856f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_292), 0);
	Local_560.f_296 = CREATE_GRINGO_IN_LAYOUT(Local_560, "dealer_and_customer", "dealer_and_customer", -3296,065f, 39,1528f, 4559,927f, 0.0f, -56,37352f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_296), 0);
	Local_560.f_300 = CREATE_GRINGO_IN_LAYOUT(Local_560, "dealer_and_customer1", "dealer_and_customer", -3272,835f, 38,14893f, 4541,657f, 0.0f, 130,773f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_300), 0);
	Local_560.f_304 = CREATE_GRINGO_IN_LAYOUT(Local_560, "dealer_and_customer2", "dealer_and_customer", -3248.0f, 39,15283f, 4568,246f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_304), 0);
	Local_560.f_308 = CREATE_GRINGO_IN_LAYOUT(Local_560, "nsit_docks", "nsit_docks", -3282,287f, 39,27118f, 4551,203f, 0.0f, 35,6928f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_308), 0);
	Local_560.f_312 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sit_docks1", "nsit_docks", -3275,372f, 40,2414f, 4538,514f, 0.0f, 179,2844f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_312), 0);
	Local_560.f_316 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sit_docks2", "nsit_docks", -3282,221f, 42,50676f, 4565,349f, 0.0f, 220,5138f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_316), 0);
	Local_560.f_320 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sit_ground_play_harmonica", "sit_ground_play_harmonica", -3272,134f, 40,16892f, 4541,868f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_320), 0);
	Local_560.f_324 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sit_ground_play_harmonica1", "sit_ground_play_harmonica", -3258,941f, 42,57413f, 4556,805f, 0.0f, 181,2949f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_324), 0);
	Local_560.f_328 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sit_ground_play_harmonica2", "sit_ground_play_harmonica", -3252,027f, 38,25563f, 4540,378f, 0.0f, 178,3351f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_328), 0);
	Local_560.f_332 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sit_cleanknife", "sit_cleanknife", -3256,346f, 39,24395f, 4558,189f, 0.0f, -0,3677738f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_332), 0);
	Local_560.f_336 = CREATE_GRINGO_IN_LAYOUT(Local_560, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -3262,394f, 38,17802f, 4548,206f, 0.0f, 90,68082f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_336), 0);
	Local_560.f_340 = CREATE_GRINGO_IN_LAYOUT(Local_560, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -3242,475f, 39,25019f, 4566,129f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_340), 0);
	Local_560.f_344 = CREATE_GRINGO_IN_LAYOUT(Local_560, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", -3284.0f, 38,43526f, 4549,148f, 0.0f, 57,12309f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_344), 0);
	Local_560.f_348 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sit_ground_smoke", "sit_ground_smoke", -3292.0f, 39,1528f, 4551,171f, 0.0f, -178,6161f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_348), 0);
	Local_560.f_352 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sit_ground_smoke1", "sit_ground_smoke", -3278,594f, 40,14517f, 4536,559f, 0.0f, -182,5346f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_352), 0);
	Local_560.f_356 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sit_ground_smoke2", "sit_ground_smoke", -3268,508f, 38,14893f, 4542,967f, 0.0f, -143,1388f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_356), 0);
	Local_560.f_360 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sit_ground_smoke3", "sit_ground_smoke", -3276,293f, 39,2479f, 4560,752f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_360), 0);
	Local_560.f_364 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sit_ground_smoke4", "sit_ground_smoke", -3272,092f, 39,19081f, 4558,986f, 0.0f, -89,58073f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_364), 0);
	Local_560.f_368 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sit_headinhands_n_any01", "sit_headinhands_n_any", -3268,984f, 38,35751f, 4530,393f, 0.0f, -182,2507f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_368), 0);
	Local_560.f_372 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sit_cleanpistol", "sit_cleanpistol", -3271,569f, 38,19445f, 4543,613f, 0.0f, 138,6318f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_372), 0);
	Local_560.f_376 = CREATE_GRINGO_IN_LAYOUT(Local_560, "stand_yawning_n_any", "stand_yawning_n_any", -3240,719f, 38,20005f, 4542,776f, 0.0f, 189,2953f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_376), 0);
	Local_560.f_380 = CREATE_GRINGO_IN_LAYOUT(Local_560, "Rand_Idle_NearWall", "Rand_Idle_NearWall", -3285,752f, 39,26874f, 4557,189f, 0.0f, 39,35398f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_380), 0);
	Local_560.f_384 = CREATE_GRINGO_IN_LAYOUT(Local_560, "flirting_whore2", "flirting_whore", -3238,646f, 38,1489f, 4545,382f, 0.0f, -203,9036f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_384), 0);
	Local_560.f_388 = CREATE_GRINGO_IN_LAYOUT(Local_560, "flirting_whore3", "flirting_whore", -3248.0f, 38,14893f, 4544.0f, 0.0f, -162,2322f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_388), 0);
	Local_560.f_392 = CREATE_GRINGO_IN_LAYOUT(Local_560, "flirting_whore4", "flirting_whore", -3256,612f, 38,14896f, 4540,333f, 0.0f, -178,0666f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_392), 0);
	Local_560.f_396 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sleeping_wall_scripted", "sleeping_wall_scripted", -3278,511f, 38,1489f, 4533,941f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_396), 0);
	Local_560.f_400 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sleeping_wall_scripted1", "sleeping_wall_scripted", -3276.0f, 38,1489f, 4529,195f, 0.0f, -182,3298f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_400), 0);
	Local_560.f_404 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sleeping_wall_scripted2", "sleeping_wall_scripted", -3277,5f, 38,14893f, 4538,014f, 0.0f, 96,54556f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_404), 0);
	Local_560.f_408 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sleeping_wall_scripted3", "sleeping_wall_scripted", -3229,556f, 38,14893f, 4546,674f, 0.0f, -90,23033f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_408), 0);
	Local_560.f_412 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sleeping_wall_scripted4", "sleeping_wall_scripted", -3229,986f, 38,14896f, 4551,475f, 0.0f, -88,88425f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_412), 0);
	Local_560.f_416 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sleeping_wall_scripted5", "sleeping_wall_scripted", -3299,955f, 39,15283f, 4544,85f, 0.0f, 82,67175f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_416), 0);
	Local_560.f_420 = CREATE_GRINGO_IN_LAYOUT(Local_560, "sleeping_wall_scripted6", "sleeping_wall_scripted", -3299,905f, 39,15283f, 4549,054f, 0.0f, 85,54407f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_420), 0);
	Local_560.f_424 = CREATE_GRINGO_IN_LAYOUT(Local_560, "stand_lookdistance_w_any7", "stand_lookdistance_w_any", -3230f, 38,14893f, 4548,997f, 0.0f, -111,0893f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_424), 0);
	Local_560.f_428 = CREATE_GRINGO_IN_LAYOUT(Local_560, "stand_lookdistance_w_any8", "stand_lookdistance_w_any", -3300,847f, 39,15283f, 4547,111f, 0.0f, 96,1373f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_560.f_428), 0);
	return 1;
}

void Function_328(int iParam0, int iParam1) //Position: 0x11D93 / 73107
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

bool Function_329() //Position: 0x11DDC / 73180
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	Function_328(3, 3);
	uVar0 = uVar0;
	Function_278(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/sit_headinhands_n_any", 1, 0);
	Function_278(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/shotgun_boss", 1, 0);
	Function_278(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/door_kick_rifle_to_coh", 1, 0);
	Function_278(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/tes_coverintro_player", 1, 0);
	Function_278(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/tes_coverintro_sheriff", 1, 0);
	Function_278(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/shakehands_link", 1, 0);
	if (!Function_263(&Local_1 + 4))
	{
		return 0;
	}
	Local_1 = FIND_NAMED_LAYOUT("TesoroAzul_layout");
	if (!IS_LAYOUTREF_VALID(Local_1))
	{
		Local_1 = CREATE_LAYOUT("TesoroAzul_layout");
	}
	Local_1.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_sheriffFarmInside", 2, -3323,313f, 40,785f, 4552,968f, 0.0f, 0.0f, 0.0f, 8,375486f, 7,088272f, 7,849358f);
	Local_1.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_sheriffSupplyInside", 2, -3300,955f, 38,1489f, 4529,81f, 0.0f, 0.0f, 0.0f, 4,882275f, 3,950875f, 4,888096f);
	Local_1.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_sheriffWhoreInside", 2, -3220,593f, 37,52043f, 4533,755f, 0.0f, -19,37662f, 0.0f, 5,148424f, 6,233284f, 6,233284f);
	Local_1.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_sheriffChurchInside", 2, -3232,017f, 38,8161f, 4565,574f, 0.0f, 0.0f, 0.0f, 5,300668f, 7,731307f, 6,220103f);
	Local_1.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_backGate", 2, -3300,548f, 39,10523f, 4546,712f, 0.0f, 0.0f, 0.0f, 3,90573f, 4,052313f, 5,641007f);
	Local_1.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_frontGate", 2, -3230,286f, 37,65789f, 4553,479f, 0.0f, 81,40613f, 0.0f, 4,208195f, 5,833527f, 6,556743f);
	Local_1.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_checkInside", 2, -3265,379f, 38,14893f, 4548,498f, 0.0f, 0.0f, 0.0f, 125,8221f, 26,57143f, 73,20856f);
	Local_1.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_wholeTown", 2, -3266,199f, 38,14893f, 4548,644f, 0.0f, 0.0f, 0.0f, 62,77723f, 38,81983f, 38,81983f);
	Local_1.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_prosIn", 2, -3265,185f, 38,14893f, 4548,972f, 0.0f, 0.0f, 0.0f, 49,08432f, 30,48538f, 32,94942f);
	Local_1.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_captiveLeaving", 2, -3243,245f, 38,1489f, 4556.0f, 0.0f, 0.0f, 0.0f, 13,33256f, 2,798824f, 2,798824f);
	Local_1.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_1, "pimpVolume", 2, -3241,411f, 39,56648f, 4540,728f, 0.0f, -0,7841256f, 0.0f, 12,87314f, 6,866024f, 12,52157f);
	Local_1.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_gateGuyStayInVolume", 2, -3237,342f, 38,69643f, 4549,063f, 0.0f, 0.0f, 0.0f, 2,591131f, 3,674161f, 7,622671f);
	Local_1.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_addBlipFirstSquad", 2, -3266,199f, 38,14893f, 4548,644f, 0.0f, 0.0f, 0.0f, 61,86731f, 38,81983f, 38,81983f);
	Local_1.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_gateGuyStayInVolume1", 2, -3295,216f, 39,71419f, 4547,189f, 0.0f, 0.0f, 0.0f, 3,927643f, 3,674161f, 4,484834f);
	Local_1.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_PreacherVolume", 2, -3258,89f, 39,29543f, 4560,402f, 0.0f, 0.0f, 0.0f, 12,12044f, 9,254376f, 16,3949f);
	Local_1.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_ChurchSquadRight", 2, -3281,136f, 39,56166f, 4559,848f, 0.0f, -56,89914f, 0.0f, 7,039056f, 7,702643f, 5,641255f);
	Local_1.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_wholeTown1", 2, -3262,857f, 38,14893f, 4540,492f, 0.0f, 0.0f, 0.0f, 52,07693f, 23,60052f, 20,23231f);
	Local_1.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_ambientExclusion", 2, -3263,76f, 38,14893f, 4548,644f, 0.0f, 0.0f, 0.0f, 103,9709f, 38,81983f, 39,80967f);
	Local_1.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_JuanDominguezObjective", 2, -3233,773f, 38,87122f, 4549,194f, 0.0f, 0.0f, 0.0f, 11,6645f, 3,613787f, 9,074621f);
	Local_1.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_1, "pimpVolume1", 2, -3240,726f, 39,03219f, 4539,12f, 0.0f, -0,7841256f, 0.0f, 3,035321f, 1,864784f, 3,384375f);
	Local_1.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_pimpHouse", 2, -3242,237f, 39,40137f, 4538,768f, 0.0f, -0,7841256f, 0.0f, 7,098369f, 2,349428f, 4,644449f);
	Local_1.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_prosThreeGuysLeft", 2, -3263,773f, 38,14893f, 4547,35f, 0.0f, 0.0f, 0.0f, 6,90598f, 6,90598f, 6,90598f);
	Local_1.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_defendRoof", 2, -3258,516f, 43,4594f, 4558,277f, 0.0f, 0.0f, 0.0f, 8,522068f, 2,392462f, 2,60385f);
	Local_1.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_1, "nv_prosIn1", 2, -3263,026f, 38,14893f, 4548,565f, 0.0f, 0.0f, 0.0f, 27,91771f, 30,48538f, 13,88249f);
	Local_1.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_DeputyGoToSpot", 2, -2764,88f, 33,79f, 4287,68f, 0.0f, -10,51184f, 0.0f, 25,21913f, 14,58265f, 27,41931f);
	Local_1.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_tes_startObjective", 2, -3263,784f, 41,2887f, 4548,498f, 0.0f, 0.0f, 0.0f, 380,0691f, 55,79219f, 209,5086f);
	Local_1.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_frontGate1", 2, -3229,774f, 38,09704f, 4548,959f, 0.0f, -0,00556294f, 0.0f, 5,629417f, 4,354507f, 6,005315f);
	Local_1.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_voltureSpawn", 2, -3242,858f, 55,30248f, 4549,83f, 0.0f, 0.0f, 0.0f, 6.0f, 2.0f, 6.0f);
	Local_1.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_EndingHouse", 2, -3244,254f, 40,59864f, 4562,46f, 0.0f, 0.0f, 0.0f, 7,812244f, 4,966928f, 4,79681f);
	Local_1.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_pimpStayInVolume", 2, -3264,027f, 39,56648f, 4549,843f, 0.0f, -0,7841256f, 0.0f, 44,60882f, 6,866024f, 8,43239f);
	Local_1.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_TriggerPriest", 2, -3258,558f, 38,1489f, 4547,677f, 0.0f, 0.0f, 0.0f, 22,5079f, 11,37141f, 17,14375f);
	Local_1.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_horseWander1", 2, -3238,17f, 37,25783f, 4525,896f, 0.0f, 0.0f, 0.0f, 4,722734f, 6,491456f, 4,125681f);
	Local_1.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_horseWander2", 2, -3294,01f, 39,15283f, 4572,377f, 0.0f, 0.0f, 0.0f, 5,951175f, 7,14141f, 4,919638f);
	Local_1.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_TriggerPimp", 2, -3270,797f, 37,73671f, 4548,326f, 0.0f, 0.0f, 0.0f, 37,49358f, 19,4779f, 31,47092f);
	Local_1.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_1, "f_startIntro", 3, -3217,856f, 37,95359f, 4534,051f, 0.0f, 54,46543f, 0.0f, 3,070723f, 1,5f, 2,366489f);
	Local_1.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_SheriffInTown", 2, -3234,562f, 37,72468f, 4548,97f, 0.0f, 0.0f, 0.0f, 5,893853f, 5,542946f, 4,184093f);
	Local_1.f_224 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_PlayerAtCover", 2, -3245,832f, 38,14893f, 4552,966f, 0.0f, 0.0f, 0.0f, 3,057167f, 4,316301f, 4,089939f);
	Local_1.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_PimpStayInVolume01", 2, -3270,804f, 37,73671f, 4547,567f, 0.0f, 0.0f, 0.0f, 42,3812f, 19,4779f, 14,35036f);
	Local_1.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_GetGuyOut", 2, -3254,189f, 38,43877f, 4536,927f, 0.0f, -25,78424f, 0.0f, 5,775861f, 7,103632f, 6,923692f);
	Local_1.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_SendGuyOut", 2, -3243,306f, 38,1489f, 4550,042f, 0.0f, 0.0f, 0.0f, 10,38934f, 10,54231f, 30,18468f);
	Local_1.f_240 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_NotTargetable", 2, -3266,1f, 37,73671f, 4547,991f, 0.0f, 0.0f, 0.0f, 126,0061f, 47,51117f, 82,92996f);
	Local_1.f_244 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_executionVol", 2, -3244,584f, 39,58719f, 4563,567f, 0.0f, 0.0f, 0.0f, 1,507066f, 4,584162f, 1,749671f);
	Local_1.f_248 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_PimpGoToVolume", 2, -3286,166f, 38,05438f, 4547,425f, 0.0f, 0.0f, 0.0f, 11,54062f, 8,717119f, 9,990112f);
	Local_1.f_252 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_PrintFirstObjective", 2, -3251,118f, 37,73671f, 4547,991f, 0.0f, 0.0f, 0.0f, 192,2129f, 47,51117f, 82,92996f);
	Local_1.f_256 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_CheckPlayerHorse", 2, -3219,442f, 37,53819f, 4534,23f, 0.0f, -31,19423f, 0.0f, 9,467752f, 7,544872f, 7,61265f);
	Local_1.f_260 = CREATE_VOLUME_IN_LAYOUT(Local_1, "v_EndingHouse1", 2, -3244,254f, 40,59864f, 4562,46f, 0.0f, 0.0f, 0.0f, 9,660106f, 6,141775f, 5,931419f);
	*(&Local_1 + 264) = { -3220.0f, 37,14499f, 4533,361f };
	*(&Local_1 + 264 + 12) = { 0.0f, -205,5809f, 0.0f };
	Local_1.f_288 = CREATE_POINT_IN_LAYOUT(Local_1, "f_prosStart", -3220.0f, 37,14499f, 4533,361f, 0.0f, -205,5809f, 0.0f);
	*(&Local_1 + 292) = { -3232.0f, 39,15283f, 4568.0f };
	*(&Local_1 + 292 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_1.f_316 = CREATE_POINT_IN_LAYOUT(Local_1, "f_churchStart", -3232.0f, 39,15283f, 4568.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_1 + 320) = { -3324,588f, 40,15336f, 4553,735f };
	*(&Local_1 + 320 + 12) = { 0.0f, -60,21358f, 0.0f };
	Local_1.f_344 = CREATE_POINT_IN_LAYOUT(Local_1, "f_farmStart", -3324,588f, 40,15336f, 4553,735f, 0.0f, -60,21358f, 0.0f);
	*(&Local_1 + 348) = { -3300.0f, 38,14893f, 4528.0f };
	*(&Local_1 + 348 + 12) = { 0.0f, 169,0685f, 0.0f };
	Local_1.f_372 = CREATE_POINT_IN_LAYOUT(Local_1, "f_supplyStart", -3300.0f, 38,14893f, 4528.0f, 0.0f, 169,0685f, 0.0f);
	*(&Local_1 + 376) = { -3225,961f, 37,14496f, 4535,234f };
	*(&Local_1 + 376 + 12) = { 0.0f, -171,9254f, 0.0f };
	Local_1.f_400 = CREATE_POINT_IN_LAYOUT(Local_1, "f_corpseWhore1", -3225,961f, 37,14496f, 4535,234f, 0.0f, -171,9254f, 0.0f);
	*(&Local_1 + 404) = { -3233,622f, 37,72468f, 4546,665f };
	*(&Local_1 + 404 + 12) = { 0.0f, -150,4031f, 0.0f };
	Local_1.f_428 = CREATE_POINT_IN_LAYOUT(Local_1, "f_corpseWhoreChurch", -3233,622f, 37,72468f, 4546,665f, 0.0f, -150,4031f, 0.0f);
	*(&Local_1 + 432) = { -3229,576f, 38,14893f, 4564.0f };
	*(&Local_1 + 432 + 12) = { 0.0f, 55,70581f, 0.0f };
	Local_1.f_456 = CREATE_POINT_IN_LAYOUT(Local_1, "f_corpseChurch1", -3229,576f, 38,14893f, 4564.0f, 0.0f, 55,70581f, 0.0f);
	*(&Local_1 + 460) = { -3296.0f, 39,15283f, 4572.0f };
	*(&Local_1 + 460 + 12) = { 0.0f, 165,898f, 0.0f };
	Local_1.f_484 = CREATE_POINT_IN_LAYOUT(Local_1, "f_corpseDealer1", -3296.0f, 39,15283f, 4572.0f, 0.0f, 165,898f, 0.0f);
	*(&Local_1 + 488) = { -3303,866f, 39,11914f, 4534,056f };
	*(&Local_1 + 488 + 12) = { 0.0f, -72,01543f, 0.0f };
	Local_1.f_512 = CREATE_POINT_IN_LAYOUT(Local_1, "f_corpseSupplier1", -3303,866f, 39,11914f, 4534,056f, 0.0f, -72,01543f, 0.0f);
	*(&Local_1 + 516) = { -3300.0f, 39,15037f, 4547,564f };
	*(&Local_1 + 516 + 12) = { 0.0f, 73,85822f, 0.0f };
	Local_1.f_540 = CREATE_POINT_IN_LAYOUT(Local_1, "f_corpseDealerSupplier", -3300.0f, 39,15037f, 4547,564f, 0.0f, 73,85822f, 0.0f);
	*(&Local_1 + 544) = { -3229,682f, 37,49239f, 4549,219f };
	*(&Local_1 + 544 + 12) = { 0.0f, 84,604f, 0.0f };
	Local_1.f_568 = CREATE_POINT_IN_LAYOUT(Local_1, "f_DoorPosRt", -3229,682f, 37,49239f, 4549,219f, 0.0f, 84,604f, 0.0f);
	*(&Local_1 + 572) = { -3302,09f, 39,13883f, 4546,963f };
	*(&Local_1 + 572 + 12) = { 0.0f, -89,43679f, 0.0f };
	Local_1.f_596 = CREATE_POINT_IN_LAYOUT(Local_1, "f_DoorPosLt", -3302,09f, 39,13883f, 4546,963f, 0.0f, -89,43679f, 0.0f);
	*(&Local_1 + 600) = { -3296.0f, 39,15283f, 4571,571f };
	*(&Local_1 + 600 + 12) = { 0.0f, 177,2946f, 0.0f };
	Local_1.f_624 = CREATE_POINT_IN_LAYOUT(Local_1, "tesf_DealerHorse1", -3296.0f, 39,15283f, 4571,571f, 0.0f, 177,2946f, 0.0f);
	*(&Local_1 + 628) = { -3291,992f, 39,15283f, 4572,339f };
	*(&Local_1 + 628 + 12) = { 0.0f, 182,6594f, 0.0f };
	Local_1.f_652 = CREATE_POINT_IN_LAYOUT(Local_1, "tesf_DealerHorse2", -3291,992f, 39,15283f, 4572,339f, 0.0f, 182,6594f, 0.0f);
	*(&Local_1 + 656) = { -3294,19f, 38,1489f, 4525,177f };
	*(&Local_1 + 656 + 12) = { 0.0f, -182,9804f, 0.0f };
	Local_1.f_680 = CREATE_POINT_IN_LAYOUT(Local_1, "tesf_SupplierHorse1", -3294,19f, 38,1489f, 4525,177f, 0.0f, -182,9804f, 0.0f);
	*(&Local_1 + 684) = { -3239,152f, 37,50234f, 4525,9f };
	*(&Local_1 + 684 + 12) = { 0.0f, -5,857777f, 0.0f };
	Local_1.f_708 = CREATE_POINT_IN_LAYOUT(Local_1, "tesf_whoreHorse1", -3239,152f, 37,50234f, 4525,9f, 0.0f, -5,857777f, 0.0f);
	*(&Local_1 + 712) = { -3296,004f, 38,12819f, 4525,267f };
	*(&Local_1 + 712 + 12) = { 0.0f, -182,9804f, 0.0f };
	Local_1.f_736 = CREATE_POINT_IN_LAYOUT(Local_1, "tesf_SupplierHorse2", -3296,004f, 38,12819f, 4525,267f, 0.0f, -182,9804f, 0.0f);
	*(&Local_1 + 740) = { -3237,127f, 37,61917f, 4526,047f };
	*(&Local_1 + 740 + 12) = { 0.0f, 2,053689f, 0.0f };
	Local_1.f_764 = CREATE_POINT_IN_LAYOUT(Local_1, "tesf_WhoreHorse2", -3237,127f, 37,61917f, 4526,047f, 0.0f, 2,053689f, 0.0f);
	*(&Local_1 + 768) = { -3241,555f, 39,1528f, 4572,544f };
	*(&Local_1 + 768 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_1.f_792 = CREATE_POINT_IN_LAYOUT(Local_1, "tesf_ChurchHorse1", -3241,555f, 39,1528f, 4572,544f, 0.0f, 0.0f, 0.0f);
	*(&Local_1 + 796) = { -3240.0f, 39,1528f, 4572,544f };
	*(&Local_1 + 796 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_1.f_820 = CREATE_POINT_IN_LAYOUT(Local_1, "tesf_ChurchHorse2", -3240.0f, 39,1528f, 4572,544f, 0.0f, 0.0f, 0.0f);
	*(&Local_1 + 824) = { -3184,381f, 42,76007f, 4594,739f };
	*(&Local_1 + 824 + 12) = { 0.0f, 48,94003f, 0.0f };
	Local_1.f_848 = CREATE_POINT_IN_LAYOUT(Local_1, "tesf_teleport", -3184,381f, 42,76007f, 4594,739f, 0.0f, 48,94003f, 0.0f);
	*(&Local_1 + 852) = { -3233,63f, 39,00423f, 4549,049f };
	*(&Local_1 + 852 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_1.f_876 = CREATE_POINT_IN_LAYOUT(Local_1, "f_DoorShootRt", -3233,63f, 39,00423f, 4549,049f, 0.0f, 0.0f, 0.0f);
	*(&Local_1 + 880) = { -3298,061f, 39,87785f, 4547,019f };
	*(&Local_1 + 880 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_1.f_904 = CREATE_POINT_IN_LAYOUT(Local_1, "f_DoorShootLt", -3298,061f, 39,87785f, 4547,019f, 0.0f, 0.0f, 0.0f);
	*(&Local_1 + 908) = { -3245,41f, 39,23372f, 4563,421f };
	*(&Local_1 + 908 + 12) = { 0.0f, -89,59062f, 0.0f };
	Local_1.f_932 = CREATE_POINT_IN_LAYOUT(Local_1, "deputyObjectiveFlag", -3245,41f, 39,23372f, 4563,421f, 0.0f, -89,59062f, 0.0f);
	*(&Local_1 + 936) = { -3234,332f, 38,23849f, 4549,019f };
	*(&Local_1 + 936 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_1.f_960 = CREATE_POINT_IN_LAYOUT(Local_1, "tes_leftSide_flag", -3234,332f, 38,23849f, 4549,019f, 0.0f, 0.0f, 0.0f);
	*(&Local_1 + 964) = { -3297,811f, 39,13767f, 4547,03f };
	*(&Local_1 + 964 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_1.f_988 = CREATE_POINT_IN_LAYOUT(Local_1, "tes_rightSide_flag", -3297,811f, 39,13767f, 4547,03f, 0.0f, 0.0f, 0.0f);
	*(&Local_1 + 992) = { -3236,733f, 38,14892f, 4546,369f };
	*(&Local_1 + 992 + 12) = { 0.0f, -127,6579f, 0.0f };
	Local_1.f_1016 = CREATE_POINT_IN_LAYOUT(Local_1, "nf_gateGuy", -3236,733f, 38,14892f, 4546,369f, 0.0f, -127,6579f, 0.0f);
	*(&Local_1 + 1020) = { -3236,958f, 38,14467f, 4551,277f };
	*(&Local_1 + 1020 + 12) = { 0.0f, -78,85402f, 0.0f };
	Local_1.f_1044 = CREATE_POINT_IN_LAYOUT(Local_1, "f_gateGuy01", -3236,958f, 38,14467f, 4551,277f, 0.0f, -78,85402f, 0.0f);
	*(&Local_1 + 1048) = { -3228,46f, 37,81367f, 4555,122f };
	*(&Local_1 + 1048 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_1.f_1072 = CREATE_POINT_IN_LAYOUT(Local_1, "guardTeleportPosition01", -3228,46f, 37,81367f, 4555,122f, 0.0f, 0.0f, 0.0f);
	*(&Local_1 + 1076) = { -3232,621f, 37,81367f, 4553,554f };
	*(&Local_1 + 1076 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_1.f_1100 = CREATE_POINT_IN_LAYOUT(Local_1, "guardTeleportPosition02", -3232,621f, 37,81367f, 4553,554f, 0.0f, 0.0f, 0.0f);
	*(&Local_1 + 1104) = { -3241,24f, 38,26578f, 4539,743f };
	*(&Local_1 + 1104 + 12) = { 0.0f, 169,5163f, -1.0f };
	Local_1.f_1128 = CREATE_POINT_IN_LAYOUT(Local_1, "f_FEMALE_PROS_01", -3241,24f, 38,26578f, 4539,743f, 0.0f, 169,5163f, -1.0f);
	*(&Local_1 + 1132) = { -3241,664f, 38,26411f, 4539,123f };
	*(&Local_1 + 1132 + 12) = { 0.0f, -198,3456f, -1.0f };
	Local_1.f_1156 = CREATE_POINT_IN_LAYOUT(Local_1, "f_FEMALE_PROS_02", -3241,664f, 38,26411f, 4539,123f, 0.0f, -198,3456f, -1.0f);
	*(&Local_1 + 1160) = { -3240,743f, 38,26026f, 4539,001f };
	*(&Local_1 + 1160 + 12) = { 0.0f, -178,1418f, -1.0f };
	Local_1.f_1184 = CREATE_POINT_IN_LAYOUT(Local_1, "f_FEMALE_PROS_03", -3240,743f, 38,26026f, 4539,001f, 0.0f, -178,1418f, -1.0f);
	Local_1.f_1188 = CREATE_POINT_IN_LAYOUT(Local_1, "f_PIMP_BOSS", -3241,092f, 38,29401f, 4538,319f, 0.0f, 166,3998f, -1.0f);
	Local_1.f_1192 = CREATE_POINT_IN_LAYOUT(Local_1, "f_PREACHER_BOSS", -3258,516f, 39,376f, 4566,383f, 0.0f, 0.0f, -1.0f);
	Local_1.f_1196 = CREATE_POINT_IN_LAYOUT(Local_1, "f_FATHER_SQUAD_02", -3255,989f, 39,376f, 4566,669f, 0.0f, 0.0f, -1.0f);
	Local_1.f_1200 = CREATE_POINT_IN_LAYOUT(Local_1, "f_FATHER_SQUAD_03", -3258,16f, 39,249f, 4563,27f, 0.0f, 0.0f, -1.0f);
	Local_1.f_1204 = CREATE_POINT_IN_LAYOUT(Local_1, "f_TES_PROSTITUTE1", -3251,827f, 38,19906f, 4552,458f, 0.0f, -463,2202f, 0.0f);
	Local_1.f_1208 = CREATE_POINT_IN_LAYOUT(Local_1, "f_TES_PROSTITUTE2", -3260,063f, 39,24408f, 4557,537f, 0.0f, -475,7115f, 0.0f);
	Local_1.f_1212 = CREATE_POINT_IN_LAYOUT(Local_1, "f_TES_PROSTITUTE3", -3264,477f, 38,14893f, 4539,657f, 0.0f, -445,9531f, 0.0f);
	Local_1.f_1216 = CREATE_POINT_IN_LAYOUT(Local_1, "f_TES_BANDITO1", -3282,751f, 38,35536f, 4549,957f, 0.0f, -79,01511f, 0.0f);
	Local_1.f_1220 = CREATE_POINT_IN_LAYOUT(Local_1, "f_TES_BANDITO2", -3269,925f, 40,05334f, 4535,914f, 0.0f, -157,2591f, 0.0f);
	Local_1.f_1224 = CREATE_POINT_IN_LAYOUT(Local_1, "f_TES_BANDITO3", -3253,23f, 38,38774f, 4537,039f, 0.0f, -119,3968f, 0.0f);
	Local_1.f_1228 = CREATE_POINT_IN_LAYOUT(Local_1, "f_TES_BANDITO4", -3278,533f, 39,21079f, 4560,232f, 0.0f, -418,3815f, 0.0f);
	Local_1.f_1232 = CREATE_POINT_IN_LAYOUT(Local_1, "f_TES_BANDITO5", -3281,594f, 39,2916f, 4562,122f, 0.0f, -443,398f, 0.0f);
	Local_1.f_1236 = CREATE_POINT_IN_LAYOUT(Local_1, "f_TES_BANDITO6", -3279,38f, 39,26727f, 4560,876f, 0.0f, -422,9509f, 0.0f);
	Local_1.f_1240 = CREATE_POINT_IN_LAYOUT(Local_1, "f_TES_BANDITO7", -3269,58f, 39,40359f, 4555,325f, 0.0f, -762,1315f, 0.0f);
	Local_1.f_1244 = CREATE_POINT_IN_LAYOUT(Local_1, "f_TES_BANDITO8", -3271,041f, 40,17388f, 4539,809f, 0.0f, -632,2083f, 0.0f);
	Local_1.f_1248 = CREATE_POINT_IN_LAYOUT(Local_1, "f_TES_BANDITO9", -3276.0f, 38,1489f, 4542,28f, 0.0f, -606,9f, 0.0f);
	Local_1.f_1252 = CREATE_POINT_IN_LAYOUT(Local_1, "f_TES_BANDITO10", -3232.0f, 37,88876f, 4552,16f, 0.0f, -810,5383f, 0.0f);
	Local_1.f_1256 = CREATE_POINT_IN_LAYOUT(Local_1, "f_TES_BANDITO11", -3231,614f, 37,67611f, 4545,407f, 0.0f, -452,5928f, 0.0f);
	Local_1.f_1260 = CREATE_POINT_IN_LAYOUT(Local_1, "f_TES_BANDITO12", -3299,131f, 38,85653f, 4549.0f, 0.0f, -625,1725f, 0.0f);
	Local_1.f_1264 = CREATE_POINT_IN_LAYOUT(Local_1, "f_TES_BANDITO13", -3299,629f, 39,06519f, 4544,829f, 0.0f, -628,7875f, 0.0f);
	*(&Local_1 + 1268) = { -3296,435f, 39,07924f, 4546,292f };
	*(&Local_1 + 1268 + 12) = { 0.0f, -273,264f, 0.0f };
	Local_1.f_1292 = CREATE_POINT_IN_LAYOUT(Local_1, "f_gateGuy02", -3296,435f, 39,07924f, 4546,292f, 0.0f, -273,264f, 0.0f);
	*(&Local_1 + 1296) = { -3296,542f, 38,98146f, 4547,552f };
	*(&Local_1 + 1296 + 12) = { 0.0f, -273,264f, 0.0f };
	Local_1.f_1320 = CREATE_POINT_IN_LAYOUT(Local_1, "f_gateGuy03", -3296,542f, 38,98146f, 4547,552f, 0.0f, -273,264f, 0.0f);
	*(&Local_1 + 1324) = { -3280,423f, 39,2916f, 4560,762f };
	*(&Local_1 + 1324 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_1.f_1348 = CREATE_POINT_IN_LAYOUT(Local_1, "v_teleport02", -3280,423f, 39,2916f, 4560,762f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1352 = CREATE_OBJECTSET_IN_LAYOUT("rewardChestsSet", Local_1, 8, 0);
	*(&Local_1 + 1356[06]) = { -3293,726f, 39,14257f, 4561,292f };
	*(&Local_1 + 1356[06] + 12) = { 0.0f, -138,6533f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_1, "f_rewardChest01", -3293,726f, 39,14257f, 4561,292f, 0.0f, -138,6533f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_1.f_1352);
	*(&Local_1 + 1356[16]) = { -3256,386f, 38,33931f, 4536,9f };
	*(&Local_1 + 1356[16] + 12) = { 0.0f, -157,7097f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_1, "f_rewardChest02", -3256,386f, 38,33931f, 4536,9f, 0.0f, -157,7097f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_1.f_1352);
	*(&Local_1 + 1356[26]) = { -3260,063f, 42,35891f, 4556,905f };
	*(&Local_1 + 1356[26] + 12) = { 0.0f, -179,6612f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_1, "f_rewardChest03", -3260,063f, 42,35891f, 4556,905f, 0.0f, -179,6612f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_1.f_1352);
	*(&Local_1 + 1356[36]) = { -3284,179f, 42,50474f, 4558,42f };
	*(&Local_1 + 1356[36] + 12) = { 0.0f, -462,3916f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_1, "f_rewardChest05", -3284,179f, 42,50474f, 4558,42f, 0.0f, -462,3916f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_1.f_1352);
	*(&Local_1 + 1456) = { -3262,636f, 43,05503f, 4567,487f };
	*(&Local_1 + 1456 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_1.f_1480 = CREATE_POINT_IN_LAYOUT(Local_1, "f_ladderPoint", -3262,636f, 43,05503f, 4567,487f, 0.0f, 0.0f, 0.0f);
	*(&Local_1 + 1484) = { -3262,345f, 42,31497f, 4559,36f };
	*(&Local_1 + 1484 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_1.f_1508 = CREATE_POINT_IN_LAYOUT(Local_1, "f_ladderPoint1", -3262,345f, 42,31497f, 4559,36f, 0.0f, 0.0f, 0.0f);
	*(&Local_1 + 1512) = { -3231,35f, 37,60664f, 4548,61f };
	*(&Local_1 + 1512 + 12) = { 0.0f, -33,738f, 0.0f };
	Local_1.f_1536 = CREATE_POINT_IN_LAYOUT(Local_1, "f_guyRunningOut1", -3231,35f, 37,60664f, 4548,61f, 0.0f, -33,738f, 0.0f);
	*(&Local_1 + 1540) = { -3228,545f, 37,48878f, 4550,17f };
	*(&Local_1 + 1540 + 12) = { 0.0f, -30,18377f, 0.0f };
	Local_1.f_1564 = CREATE_POINT_IN_LAYOUT(Local_1, "f_guyRunningOut2", -3228,545f, 37,48878f, 4550,17f, 0.0f, -30,18377f, 0.0f);
	*(&Local_1 + 1568) = { -3300,743f, 39,14547f, 4545,98f };
	*(&Local_1 + 1568 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_1.f_1592 = CREATE_POINT_IN_LAYOUT(Local_1, "f_guyRunningOut3", -3300,743f, 39,14547f, 4545,98f, 0.0f, 0.0f, 0.0f);
	*(&Local_1 + 1596) = { -3300,743f, 39,14547f, 4547,92f };
	*(&Local_1 + 1596 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_1.f_1620 = CREATE_POINT_IN_LAYOUT(Local_1, "f_guyRunningOut4", -3300,743f, 39,14547f, 4547,92f, 0.0f, 0.0f, 0.0f);
	*(&Local_1 + 1624) = { -3220,105f, 37,11281f, 4549,591f };
	*(&Local_1 + 1624 + 12) = { 0.0f, 89,25315f, 0.0f };
	Local_1.f_1648 = CREATE_POINT_IN_LAYOUT(Local_1, "v_tes_SheriffGoToSpot", -3220,105f, 37,11281f, 4549,591f, 0.0f, 89,25315f, 0.0f);
	*(&Local_1 + 1652) = { -3246,624f, 39,20978f, 4563,427f };
	*(&Local_1 + 1652 + 12) = { 0.0f, -92,81906f, 0.0f };
	Local_1.f_1676 = CREATE_POINT_IN_LAYOUT(Local_1, "f_BossFlag", -3246,624f, 39,20978f, 4563,427f, 0.0f, -92,81906f, 0.0f);
	*(&Local_1 + 1680) = { -3244,251f, 38,3009f, 4542,222f };
	*(&Local_1 + 1680 + 12) = { 0.0f, -183,0775f, 0.0f };
	Local_1.f_1704 = CREATE_POINT_IN_LAYOUT(Local_1, "f_SheriffGringo", -3244,251f, 38,3009f, 4542,222f, 0.0f, -183,0775f, 0.0f);
	*(&Local_1 + 1708) = { -3250,776f, 38,00482f, 4534,076f };
	*(&Local_1 + 1708 + 12) = { 285,2712f, 193,5048f, -178,4847f };
	Local_1.f_1732 = CREATE_POINT_IN_LAYOUT(Local_1, "f_weaponPickup02", -3250,776f, 38,00482f, 4534,076f, 285,2712f, 193,5048f, -178,4847f);
	*(&Local_1 + 1736) = { -3242,264f, 39,52536f, 4565,281f };
	*(&Local_1 + 1736 + 12) = { 98,88873f, 175,957f, 0.0f };
	Local_1.f_1760 = CREATE_POINT_IN_LAYOUT(Local_1, "f_weaponPickup01", -3242,264f, 39,52536f, 4565,281f, 98,88873f, 175,957f, 0.0f);
	*(&Local_1 + 1764) = { -3272,117f, 39,52103f, 4561,81f };
	*(&Local_1 + 1764 + 12) = { 461,3647f, 177,405f, 3,741271f };
	Local_1.f_1788 = CREATE_POINT_IN_LAYOUT(Local_1, "f_weaponPickup03", -3272,117f, 39,52103f, 4561,81f, 461,3647f, 177,405f, 3,741271f);
	*(&Local_1 + 1792) = { -3236,945f, 37,90723f, 4548,759f };
	*(&Local_1 + 1792 + 12) = { 0.0f, 85,4296f, 0.0f };
	Local_1.f_1816 = CREATE_POINT_IN_LAYOUT(Local_1, "f_SheriffGoInTownLeft", -3236,945f, 37,90723f, 4548,759f, 0.0f, 85,4296f, 0.0f);
	*(&Local_1 + 1820) = { -3292.0f, 38,83525f, 4548,225f };
	*(&Local_1 + 1820 + 12) = { 0.0f, -88,03016f, 0.0f };
	Local_1.f_1844 = CREATE_POINT_IN_LAYOUT(Local_1, "f_SheriffGoInTownRight", -3292.0f, 38,83525f, 4548,225f, 0.0f, -88,03016f, 0.0f);
	Local_1.f_1848 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene1Set", Local_1, 8, 0);
	(*&Local_1 + 1852)[0] = CREATE_POINT_IN_LAYOUT(Local_1, "f_Cut1_BaddieGoto1", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_1 + 1852)[0], Local_1.f_1848);
	(*&Local_1 + 1852)[1] = CREATE_POINT_IN_LAYOUT(Local_1, "f_Cut1_BaddieGoto2", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_1 + 1852)[1], Local_1.f_1848);
	*(&Local_1 + 1864) = { -3287,323f, 38,05438f, 4547,425f };
	*(&Local_1 + 1864 + 12) = { 0.0f, -85,52766f, 0.0f };
	Local_1.f_1888 = CREATE_POINT_IN_LAYOUT(Local_1, "v_PimpGoto", -3287,323f, 38,05438f, 4547,425f, 0.0f, -85,52766f, 0.0f);
	*(&Local_1 + 1892) = { -3224.0f, 37,32822f, 4546,445f };
	*(&Local_1 + 1892 + 12) = { 0.0f, -84,74841f, 0.0f };
	Local_1.f_1916 = CREATE_POINT_IN_LAYOUT(Local_1, "f_Horse0", -3224.0f, 37,32822f, 4546,445f, 0.0f, -84,74841f, 0.0f);
	*(&Local_1 + 1920) = { -3224.0f, 37,14493f, 4544f };
	*(&Local_1 + 1920 + 12) = { 0.0f, -87,93457f, 0.0f };
	Local_1.f_1944 = CREATE_POINT_IN_LAYOUT(Local_1, "f_Horse1", -3224.0f, 37,14493f, 4544f, 0.0f, -87,93457f, 0.0f);
	*(&Local_1 + 1948) = { -3242,17f, 39,22358f, 4563,479f };
	*(&Local_1 + 1948 + 12) = { 0.0f, 90.0f, 0.0f };
	Local_1.f_1972 = CREATE_POINT_IN_LAYOUT(Local_1, "f_teleportJohn", -3242,17f, 39,22358f, 4563,479f, 0.0f, 90.0f, 0.0f);
	*(&Local_1 + 1976) = { -3243,995f, 39,248f, 4563,506f };
	*(&Local_1 + 1976 + 12) = { 0.0f, 358,262f, 0.0f };
	Local_1.f_2000 = CREATE_POINT_IN_LAYOUT(Local_1, "f_teleportJohn01", -3243,995f, 39,248f, 4563,506f, 0.0f, 358,262f, 0.0f);
	*(&Local_1 + 2004) = { -3240.0f, 38,1489f, 4552.0f };
	*(&Local_1 + 2004 + 12) = { 0.0f, -224,5283f, 0.0f };
	Local_1.f_2028 = CREATE_POINT_IN_LAYOUT(Local_1, "f_SheriffShakePos", -3240.0f, 38,1489f, 4552.0f, 0.0f, -224,5283f, 0.0f);
	*(&Local_1 + 2032) = { -3254,846f, 37,99887f, 4544,597f };
	*(&Local_1 + 2032 + 12) = { 0.0f, -100,385f, 0.0f };
	Local_1.f_2056 = CREATE_POINT_IN_LAYOUT(Local_1, "f_bossGoToSpot", -3254,846f, 37,99887f, 4544,597f, 0.0f, -100,385f, 0.0f);
	*(&Local_1 + 2060) = { -3241,712f, 39,24794f, 4561,089f };
	*(&Local_1 + 2060 + 12) = { 0.0f, -268,9221f, 0.0f };
	Local_1.f_2084 = CREATE_POINT_IN_LAYOUT(Local_1, "f_gunChest", -3241,712f, 39,24794f, 4561,089f, 0.0f, -268,9221f, 0.0f);
	*(&Local_1 + 2088) = { -3218,711f, 37,145f, 4535,117f };
	*(&Local_1 + 2088 + 12) = { 0.0f, 60,751f, 0.0f };
	Local_1.f_2112 = CREATE_POINT_IN_LAYOUT(Local_1, "f_playerCover", -3218,711f, 37,145f, 4535,117f, 0.0f, 60,751f, 0.0f);
	*(&Local_1 + 2116) = { -3244,334f, 38,00027f, 4548,086f };
	*(&Local_1 + 2116 + 12) = { 0.0f, 90.0f, 0.0f };
	Local_1.f_2140 = CREATE_POINT_IN_LAYOUT(Local_1, "f_teleportJohnEnding", -3244,334f, 38,00027f, 4548,086f, 0.0f, 90.0f, 0.0f);
	Local_1.f_2144 = CREATE_POINT_IN_LAYOUT(Local_1, "f_TeleportHorse", -3212f, 37,1451f, 4524.0f, 0.0f, 126,3442f, 0.0f);
	Local_1.f_2148 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sit_headinhands_n_any", "sit_headinhands_n_any", -3244,338f, 38,30203f, 4542,589f, 0.0f, -180.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_1.f_2148), 0);
	Local_1.f_2152 = CREATE_GRINGO_IN_LAYOUT(Local_1, "shotgun_boss", "shotgun_boss", -3257,012f, 39,26036f, 4559,685f, 0.0f, 190,0254f, 0.0f);
	Local_1.f_2156 = CREATE_GRINGO_IN_LAYOUT(Local_1, "door_kick_rifle_to_coh", "door_kick_rifle_to_coh", -3243,193f, 39,29246f, 4559,008f, 0.0f, -180.0f, 0.0f);
	Local_1.f_2160 = CREATE_GRINGO_IN_LAYOUT(Local_1, "TES_CoverIntro_Player", "TES_CoverIntro_Player", -3218,791f, 37,14441f, 4534,369f, 0.0f, 53,11246f, 0.0f);
	Local_1.f_2164 = CREATE_GRINGO_IN_LAYOUT(Local_1, "TES_CoverIntro_Sheriff", "TES_CoverIntro_Sheriff", -3220,412f, 37,146f, 4533,669f, 0.0f, -205,9385f, 0.0f);
	Local_1.f_2168 = CREATE_GRINGO_IN_LAYOUT(Local_1, "shakehands_link", "shakehands_link", -3240.0f, 38,1489f, 4552.0f, 0.0f, 147,4366f, 0.0f);
	Local_1.f_2172 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_1, "ncover_low", -3232,171f, 38,49347f, 4565,38f, 0.0f, 0,1224193f, 0.0f, 4);
	Local_1.f_2176 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_1, "cover_low4", -3300,103f, 39,24572f, 4568,177f, 0.0f, 0.0f, 0.0f, 4);
	Local_1.f_2180 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_1, "cover_low5", -3301,151f, 38,43265f, 4528,36f, 0.0f, -177,4746f, 0.0f, 4);
	Local_1.f_2184 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_1, "c_DeputyCover", -3242,76f, 39,23006f, 4559,802f, 0.0f, 0.0f, 0.0f, 1);
	Local_1.f_2188 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_1, "c_GateGuardCover01", -3228,199f, 37,54156f, 4554,29f, 0.0f, -162,1901f, 0.0f, 1);
	Local_1.f_2192 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_1, "sheriffStartCover", -3237,927f, 37,94839f, 4541,535f, 0.0f, -181,2439f, 0.0f, 1);
	Local_1.f_2196 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_1, "cover_low6", -3227,521f, 37,57331f, 4552,891f, 0.0f, 105,1223f, 0.0f, 4);
	Local_1.f_2200 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_1, "cover_low7", -3218,667f, 37,2401f, 4534,249f, 0.0f, -208,873f, 0.0f, 4);
	Local_1.f_2204 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_1, "sheriff_2ndCover", -3244,517f, 39,14593f, 4552,298f, 0.0f, 92,84489f, 0.0f, 4);
	Local_1.f_2208 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_1, "sheriff_startingCover", -3219,834f, 37,14871f, 4533,474f, 0.0f, 153,5474f, 0.0f, 4);
}

void Function_330(int iParam0) //Position: 0x14B45 / 84805
{
	int iVar0;
	
	if (Function_23(iParam0, 1) && Function_23(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_331(int iParam0) //Position: 0x14B79 / 84857
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_332(var uParam0, int iParam1) //Position: 0x14B95 / 84885
{
	int iVar0;
	
	if (!Function_331(2))
	{
		return 0;
	}
	if (Function_320(&(Global_29008[iParam1]), 256))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_18(uParam0[iVar02], 2))
		{
			if (Function_18(uParam0[iVar02], 4))
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

int Function_333(int iParam0) //Position: 0x14BFF / 84991
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
	if (Function_320(iParam0, 256))
	{
		return 0;
	}
	if (Function_324())
	{
		return 0;
	}
	return 1;
}

void Function_334(bool bParam0, var uParam1) //Position: 0x14C71 / 85105
{
	if (!Function_331(128))
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

