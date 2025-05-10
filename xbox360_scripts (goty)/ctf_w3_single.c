//Decompiled with MagicRDR v1.0
//Function Count : 54
//Statics Count : 106
//Natives Count : 40
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
	int iLocal_10 = 0;
	float fLocal_11 = 0.0f;
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
	var uLocal_39 = 2;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	vector3 vLocal_48 = { 0.0f, 0.0f, 0.0f };
	struct<217> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_10 = 0;
	fLocal_11 = 1.0f;
	if (Function_26())
	{
		Function_25(1);
	}
	else
	{
		Function_23(1);
	}
	Function_22(0, 5);
	while (!IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	Function_20(512);
	Function_16();
	Function_15(Global_83864.f_1284, 0, 1);
	Function_2();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x4E / 78
{
	RELEASE_LAYOUT_REF(Local_51);
	return;
}

void Function_2() //Position: 0x59 / 89
{
	Function_14();
	Function_10(&uLocal_39);
	Function_3();
	return;
}

void Function_3() //Position: 0x6A / 106
{
	Function_4();
	return;
}

void Function_4() //Position: 0x73 / 115
{
	if (Function_8(4194304))
	{
		Function_5(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_8(8388608))
	{
		Function_5(8388608, 0, 1);
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

void Function_5(int iParam0, bool bParam1, int iParam2) //Position: 0x17C / 380
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_7(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_6(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x1A4 / 420
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x1B7 / 439
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_8(int iParam0) //Position: 0x1C6 / 454
{
	return Function_9(Global_76905.f_132, iParam0);
}

int Function_9(var uParam0, int iParam1) //Position: 0x1D7 / 471
{
	return (uParam0 && iParam1) == 0;
}

void Function_10(int iParam0) //Position: 0x1E4 / 484
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_11(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x20A / 522
{
	if (Function_13(uParam0[iParam13], 4))
	{
		if (Function_13(uParam0[iParam13], 1))
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
			Function_12(uParam0[iParam13], 1);
			Function_12(uParam0[iParam13], 2);
			Function_12(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_12(var uParam0, int iParam1) //Position: 0x338 / 824
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_13(int iParam0, int iParam1) //Position: 0x352 / 850
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_14() //Position: 0x36F / 879
{
	if (iLocal_46)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_46 = 0;
	}
	return;
}

void Function_15(var uParam0, bool bParam1, bool bParam2) //Position: 0x3AE / 942
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_7(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_7(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_16() //Position: 0x3DB / 987
{
	Function_17(Function_19());
	return;
}

void Function_17(int iParam0) //Position: 0x3E7 / 999
{
	if (!Function_18(iParam0))
	{
		return;
	}
	if (iParam0 > 976 || iParam0 < 1007)
	{
		return;
	}
	Global_83864.f_1284 = iParam0;
	return;
}

bool Function_18(int iParam0) //Position: 0x414 / 1044
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_19() //Position: 0x42B / 1067
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_20(int iParam0) //Position: 0x445 / 1093
{
	Function_21(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0x47E / 1150
{
	Function_6(uParam0, iParam1);
	return;
}

void Function_22(int iParam0, int iParam1) //Position: 0x48B / 1163
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

void Function_23(bool bParam0) //Position: 0x4AC / 1196
{
	Function_24(16, bParam0);
	return;
}

void Function_24(int iParam0, bool bParam1) //Position: 0x4B9 / 1209
{
	if (bParam1)
	{
		Function_7(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_6(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

void Function_25(var uParam0) //Position: 0x4E1 / 1249
{
	Function_24(8, uParam0);
	return;
}

bool Function_26() //Position: 0x4EE / 1262
{
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_52();
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_50(512);
	Function_49(Global_83864.f_1284);
	Function_17(996);
	Function_15(Global_83864.f_1284, 0, 1);
	if (!Function_44(Local_51))
	{
		return 0;
	}
	Function_37(&Global_83591 + 276, 0);
	Function_35(&Global_83591, 1, 5, 4, 1);
	Function_35(&Global_83591, 2, 22, 1, 1);
	Function_35(&Global_83591, 3, 9, 4, 1);
	Function_30(&Global_83591, 1, 20, 3, 1);
	Function_30(&Global_83591, 2, 6, 3, 1);
	Function_30(&Global_83591, 3, 17, 4, 1);
	Function_30(&Global_83591, 4, 10, 2, 1);
	Function_29(&Global_83591);
	Function_28(&Global_83591 + 276, 4);
	Function_27(0, 6);
	Function_27(1, 1);
	return 1;
}

void Function_27(int iParam0, int iParam1) //Position: 0x5A9 / 1449
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

void Function_28(int iParam0, int iParam1) //Position: 0x5B7 / 1463
{
	(iParam0 + 228)->f_220 = 0;
	Function_7(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_29(int iParam0) //Position: 0x5CF / 1487
{
	iParam0->f_844 = 0;
	return;
}

void Function_30(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x5DB / 1499
{
	Function_31(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_31(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x5F3 / 1523
{
	Function_32(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_32(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x60A / 1546
{
	if (!Function_34(iParam1))
	{
		return;
	}
	Function_33(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_33(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x62D / 1581
{
	*uParam0 = bParam1;
	if (bParam3)
	{
		uParam0->f_4 = (CEIL(GET_WEAPON_MAX_AMMO(bParam1)) * iParam2);
	}
	else
	{
		uParam0->f_4 = iParam2;
	}
}

bool Function_34(int iParam0) //Position: 0x657 / 1623
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x667 / 1639
{
	Function_36(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x67F / 1663
{
	Function_32(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_37(int iParam0, bool bParam1) //Position: 0x694 / 1684
{
	Function_41(iParam0);
	Function_41(iParam0 + 228);
	if (bParam1)
	{
		Function_38(iParam0);
	}
	return;
}

void Function_38(int iParam0) //Position: 0x6B0 / 1712
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_39(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_39(var uParam0, int iParam1) //Position: 0x6D0 / 1744
{
	Function_40(uParam0, iParam1, 0);
	return;
}

void Function_40(int iParam0, int iParam1, int iParam2) //Position: 0x6DE / 1758
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_41(int iParam0) //Position: 0x6EF / 1775
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_43(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_42(iParam0, 0.0f);
	return;
}

void Function_42(var uParam0, int iParam1) //Position: 0x71C / 1820
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_43(int iParam0) //Position: 0x728 / 1832
{
	Function_33(iParam0, 4294967295, 0, 1);
	return;
}

bool Function_44(int iParam0) //Position: 0x736 / 1846
{
	Function_48(iParam0);
	if (Function_47())
	{
		Function_28(&Global_83591 + 276, 2);
	}
	Function_45();
	vLocal_48 = { StackVal, StackVal, Function_45() };
	return 1;
}

vector3 Function_45() //Position: 0x75A / 1882
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_46();
	vVar1 = { StackVal, StackVal, *(&Global_79349 + 28) };
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar4 = FIND_OBJECT_IN_LAYOUT(bVar0, "LobbyCenter");
		if (IS_OBJECT_VALID(bVar4))
		{
			GET_OBJECT_POSITION(bVar4, &vVar1);
		}
	}
	return StackVal, StackVal, vVar1;
}

var Function_46() //Position: 0x7A2 / 1954
{
	return Global_83591.f_140;
}

bool Function_47() //Position: 0x7AE / 1966
{
	return Function_9(Global_79962, 1024);
}

void Function_48(int iParam0) //Position: 0x7BE / 1982
{
	Global_83591.f_140 = iParam0;
	return;
}

void Function_49(int iParam0) //Position: 0x7CC / 1996
{
	if (!Function_18(iParam0))
	{
		return;
	}
	if (iParam0 > 976 || iParam0 < 1007)
	{
		return;
	}
	strcpy(&Global_76870, GET_ACTOR_ENUM_STRING_FROM_ENUM(iParam0), 64);
	return;
}

void Function_50(int iParam0) //Position: 0x7FB / 2043
{
	Function_51(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_51(var uParam0, var uParam1) //Position: 0x854 / 2132
{
	Function_7(uParam0, uParam1);
	return;
}

void Function_52() //Position: 0x861 / 2145
{
	var uVar0;
	
	Function_53(4, 1);
	uVar0 = uVar0;
	Local_51 = CREATE_LAYOUT("CTF_W3_layout");
	Local_51.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_51, "playablespace", 2, -4694.522f, 27.1563f, 3703.61f, 0.0f, 31.30436f, 0.0f, 374.0028f, 149.5109f, 390.635f);
	Local_51.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_51, "CapVol_A", 3, -4784.264f, 7.86674f, 3734.016f, 0.0f, 57.93988f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_51, "CapVol_B", 3, -4625.929f, 2.75491f, 3760.43f, 0.0f, -433.2614f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A0", 3, -4808.583f, 7.68364f, 3720.416f, 0.5122566f, -66.69447f, 2.530928f, 1.0f, 1.0f, 1.0f);
	Local_51.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A1", 3, -4788.496f, 17.93942f, 3685.867f, 0.0f, 60.35131f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A2", 3, -4796.117f, 5.989085f, 3747.172f, 0.0f, 104.4092f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A3", 3, -4784.56f, 9.012883f, 3714.475f, 0.0f, 45.70412f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A4", 3, -4788.02f, 3.020419f, 3801.314f, 0.0f, 51.22998f, 0.0f, 1.0f, 1.835308f, 1.0f);
	Local_51.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A5", 3, -4727.134f, 22.79074f, 3716.253f, 0.0f, -614.1061f, 0.0f, 1.0f, 1.835308f, 1.0f);
	Local_51.f_40 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A6", 3, -4762.791f, 5.564948f, 3787.148f, 0.0f, 19.81328f, 0.0f, 1.0f, 1.835308f, 1.0f);
	Local_51.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A7", 3, -4732.634f, 24.12945f, 3695.908f, 0.0f, -304.8735f, 0.0f, 1.0f, 1.835308f, 1.0f);
	Local_51.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B0", 3, -4608.0f, 2.85172f, 3754.641f, 0.0f, -77.695f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B1", 3, -4612.045f, 25.86038f, 3713.775f, 24.47651f, -92.85612f, -24.00811f, 1.0f, 1.0f, 1.0f);
	Local_51.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B2", 3, -4630.636f, 3.670844f, 3780.286f, 0.0f, -57.59087f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B3", 3, -4641.669f, 3.632073f, 3751.767f, 0.0f, -395.8254f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B4", 3, -4670.994f, 4.612081f, 3819.842f, 0.0f, -417.7707f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B5", 3, -4675.953f, 24.99919f, 3720.205f, 0.0f, -121.976f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B6", 3, -4712.83f, 9.868514f, 3796.011f, 0.0f, -121.847f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B7", 3, -4672.02f, 26.1765f, 3700.011f, 0.0f, -73.64684f, 0.0f, 1.0f, 1.0f, 1.0f);
	*(&Local_51 + 80) = { -4708.132f, 25.1657f, 3709.539f };
	*(&Local_51 + 80 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_104 = CREATE_POINT_IN_LAYOUT(Local_51, "Showdown_A", -4708.132f, 25.1657f, 3709.539f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 108) = { -4692.243f, 25.48273f, 3709.764f };
	*(&Local_51 + 108 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_132 = CREATE_POINT_IN_LAYOUT(Local_51, "Showdown_B", -4692.243f, 25.48273f, 3709.764f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 136) = { -4700.112f, 25.40348f, 3709.278f };
	*(&Local_51 + 136 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_160 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_0", -4700.112f, 25.40348f, 3709.278f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 164) = { -4719.854f, 37.57602f, 3751.649f };
	*(&Local_51 + 164 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_188 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_1", -4719.854f, 37.57602f, 3751.649f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 192) = { -4742.182f, 2.758449f, 3821.588f };
	*(&Local_51 + 192 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_216 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_2", -4742.182f, 2.758449f, 3821.588f, 0.0f, 0.0f, 0.0f);
	return;
}

void Function_53(int iParam0, int iParam1) //Position: 0xDDB / 3547
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

