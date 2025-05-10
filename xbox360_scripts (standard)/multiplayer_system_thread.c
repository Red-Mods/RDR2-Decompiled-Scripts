//Decompiled with MagicRDR v1.0
//Function Count : 452
//Statics Count : 464
//Natives Count : 320
//Parameters Count : 0

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	bool bLocal_3 = false;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	bool bLocal_6 = false;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	float fLocal_13 = 0.0f;
	bool bLocal_14 = false;
	bool bLocal_15 = false;
	float fLocal_16 = 0.0f;
	float fLocal_17 = 0.0f;
	float fLocal_18 = 0.0f;
	bool bLocal_19 = false;
	bool bLocal_20 = false;
	struct<27> Local_21[16];
	bool bLocal_454 = false;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	int iLocal_457 = 0;
	bool bLocal_458 = false;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	int iLocal_461 = 0;
	bool bLocal_462 = false;
	int iLocal_463 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	iLocal_15 = 0;
	iVar1 = 1;
	bVar3 = false;
	bVar4 = !Function_451("nnoMPFlash");
	bVar5 = IS_SCRIPT_VALID(Global_79344);
	Function_450();
	NET_SCRIPTMSG_REGISTER_HANDLER(104, 57277);
	NET_SCRIPTMSG_REGISTER_HANDLER(11, 57077);
	NET_SCRIPTMSG_REGISTER_HANDLER(12, 56917);
	NET_SCRIPTMSG_REGISTER_HANDLER(9, 56870);
	Function_440();
	Function_428();
	Function_345();
	bLocal_20 = Function_343("MultSysThread");
	while (!IS_EXITFLAG_SET() && Function_342(1))
	{
		Function_341();
		Function_236();
		Function_113();
		if ((GET_CURRENT_GAME_TIME() - fLocal_18) < 5.0f)
		{
			Function_111();
		}
		if (Function_110(bLocal_20, 101, &bVar0, 0))
		{
			Function_105();
		}
		if (NET_IS_IN_SESSION())
		{
			if (!bVar3)
			{
				bVar3 = true;
				Function_99();
			}
			Function_97(2);
			Function_97(1);
			if (fLocal_16 < 0.0f)
			{
				if (!HUD_IS_FADED())
				{
					if ((GET_CURRENT_GAME_TIME() - fLocal_16) <= 7.0f)
					{
						fLocal_16 = 0.0f;
					}
				}
				else
				{
					fLocal_16 = GET_CURRENT_GAME_TIME();
				}
				Function_96(&bLocal_14, 8);
			}
			else if (Function_95(bLocal_14, 8))
			{
				Function_94();
				Function_93(&bLocal_14, 8);
			}
			if (Function_110(bLocal_20, 68, &bVar0, 0))
			{
				if (!Function_95(bLocal_14, 8))
				{
					if (DECOR_GET_INT_VERBOSE(bVar0, "Slot", &iVar6))
					{
						if (GET_LOCAL_SLOT() != iVar6)
						{
							if (iVar6 <= 0 && iVar6 > 16)
							{
								Local_21[iVar627].f_92 = 5;
							}
						}
					}
				}
			}
			if (Function_110(bLocal_20, 69, &bVar0, 0))
			{
				Function_94();
			}
			Function_76();
			Function_48();
		}
		else if (fLocal_16 >= 0.0f)
		{
			fLocal_16 = GET_CURRENT_GAME_TIME();
			Function_450();
		}
		Function_24();
		Function_23(bLocal_20);
		if (bVar4)
		{
			Function_8(0);
		}
		WAIT(false);
	}
	Function_7(bLocal_20);
	UNREGISTER_SCRIPT_WITH_AUDIO();
	if (Function_342(524288))
	{
		UNK_0x8DEC3E03("top");
		Function_6(0);
	}
	if (!Function_342(1))
	{
		UI_EXIT("nMPRewards");
	}
	Function_3();
	Function_1(1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0) //Position: 0x1D0 / 464
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_2(16384, 0, 1);
	return;
}

void Function_2(int iParam0, bool bParam1, int iParam2) //Position: 0x1EA / 490
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_96(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_93(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_3() //Position: 0x212 / 530
{
	Function_4();
	return;
}

void Function_4() //Position: 0x21B / 539
{
	if (Function_5(4194304))
	{
		Function_2(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_5(8388608))
	{
		Function_2(8388608, 0, 1);
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

bool Function_5(int iParam0) //Position: 0x324 / 804
{
	return Function_95(Global_76905.f_132, iParam0);
}

void Function_6(bool bParam0) //Position: 0x335 / 821
{
	UI_HIDE("MPReward");
	if (IS_STRING_VALID(bParam0))
	{
		PLAY_SOUND_FRONTEND(bParam0);
	}
	return;
}

int Function_7(bool bParam0) //Position: 0x356 / 854
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

void Function_8(bool bParam0) //Position: 0x36C / 876
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	Function_20();
	bVar0 = false;
	bVar1 = false;
	bVar2 = (((Function_5(4) || Function_5(1024)) || Function_5(8)) || bParam0);
	if (bParam0)
	{
		bVar0 = true;
	}
	else if (Function_5(4))
	{
		bVar0 = true;
	}
	else if (Function_5(32))
	{
		bVar1 = true;
	}
	else if (Function_5(8))
	{
		bVar0 = true;
	}
	else if (Function_5(1024))
	{
		if (Function_5(1))
		{
			bVar0 = true;
		}
		else
		{
			bVar1 = true;
		}
	}
	bVar3 = Function_19();
	if (bVar3 && !bVar2)
	{
		if (!iLocal_11)
		{
			iLocal_11 = 1;
			if (HUD_IS_SHOWING_HELP_TEXT())
			{
				HUD_CLEAR_HELP();
			}
			if (!bVar2)
			{
				Function_94();
			}
		}
	}
	else if (iLocal_11)
	{
		iLocal_11 = 0;
		Function_94();
	}
	if (NET_IS_IN_SESSION())
	{
		if (!iLocal_12)
		{
			iLocal_12 = 1;
			Function_94();
		}
	}
	else if (iLocal_12)
	{
		Function_94();
		iLocal_12 = 0;
	}
	bVar4 = Function_16();
	Function_2(2, bVar4, 1);
	if (bVar1 || bVar4)
	{
		if (Function_5(16384))
		{
			Function_1(1);
			Function_15();
			Function_2(16, 0, 1);
		}
	}
	else if (bVar0 || bVar1)
	{
		Function_2(2048, 0, 1);
		Function_15();
		if (Function_5(16))
		{
			if (bVar1)
			{
				Function_94();
			}
		}
		else if (bVar0)
		{
			Function_94();
		}
		Function_2(16, bVar0, 1);
		if (Function_5(8))
		{
			Function_2(4096, 1, 1);
		}
	}
	else if (bVar3)
	{
		Function_2(2048, 0, 1);
		Function_2(16, 1, 1);
		Function_2(4096, 1, 1);
		Function_13();
	}
	else if (Function_12(1, 1))
	{
		Function_2(2048, 0, 1);
		Function_2(16, 1, 1);
	}
	else if (Function_9())
	{
		Function_2(2064, 1, 1);
		Function_2(4096, 0, 1);
		Function_15();
	}
	else
	{
		Function_2(6160, 0, 1);
		Function_15();
	}
	return;
}

bool Function_9() //Position: 0x50F / 1295
{
	return Function_10(64);
}

bool Function_10(int iParam0) //Position: 0x51A / 1306
{
	return Function_11(&Global_79349, iParam0);
}

int Function_11(var uParam0, int iParam1) //Position: 0x529 / 1321
{
	return Function_95(uParam0->f_44, iParam1);
}

bool Function_12(bool bParam0, bool bParam1) //Position: 0x538 / 1336
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_13() //Position: 0x558 / 1368
{
	bool bVar0;
	
	if (!iLocal_10)
	{
		iLocal_10 = 1;
		bVar0 = GET_LAST_PRINTED_OBJECTIVE();
		if (IS_STRING_VALID(bVar0))
		{
			Function_14(bVar0, 0x40f00000, 1, 2, 0, 0, 0);
		}
	}
	return;
}

void Function_14(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x583 / 1411
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

void Function_15() //Position: 0x5D6 / 1494
{
	if (iLocal_10)
	{
		iLocal_10 = 0;
	}
	return;
}

int Function_16() //Position: 0x5E4 / 1508
{
	if (HUD_IS_FADED())
	{
		return 1;
	}
	if (HUD_IS_FADING())
	{
		return 1;
	}
	if (HUD_IS_SHOWING_HELP_TEXT())
	{
		return 1;
	}
	if (HUD_IS_SHOWING_BIG_TEXT())
	{
		return 1;
	}
	if (Function_342(524288))
	{
		return 1;
	}
	if (Function_17(2))
	{
		return 1;
	}
	if (UI_ISFOCUSED("MPSplash"))
	{
		return 1;
	}
	return 0;
}

bool Function_17(bool bParam0) //Position: 0x645 / 1605
{
	return Function_18(Global_83864.f_1252, bParam0);
}

bool Function_18(int iParam0, bool bParam1) //Position: 0x657 / 1623
{
	return (iParam0 && bParam1) == 0;
}

bool Function_19() //Position: 0x664 / 1636
{
	return Function_342(32);
}

void Function_20() //Position: 0x66F / 1647
{
	bool bVar0;
	
	bVar0 = Function_342(4);
	if ((Function_22(12, 1, 1) && Function_21()) || bVar0)
	{
		if (fLocal_13 > 1.0f)
		{
			if (bVar0)
			{
				fLocal_13 = 1.0f;
			}
			else
			{
				fLocal_13 = (fLocal_13 + GET_UNWARPED_REALTIME_SECONDS());
			}
			if (fLocal_13 <= 1.0f)
			{
				NET_VOICE_BROADCAST_ENABLE();
			}
		}
	}
	else if (fLocal_13 <= 1.0f)
	{
		NET_VOICE_BROADCAST_DISABLE();
		fLocal_13 = 0.0f;
	}
	return;
}

var Function_21() //Position: 0x6C0 / 1728
{
	return !Function_22(2, 1, 1);
}

bool Function_22(int iParam0, int iParam1, bool bParam2) //Position: 0x6CD / 1741
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = IS_BUTTON_DOWN(iVar0, iParam0, iParam1, bParam2);
	if (bVar1)
	{
		switch (iParam0)
		{
			case 0x0000000E:
			case 0x0000000C:
				if (IS_BUTTON_DOWN(iVar0, 15, iParam1, bParam2) || IS_BUTTON_DOWN(iVar0, 13, iParam1, bParam2))
				{
					return 0;
				}
				break;
			
			case 0x0000000F:
			case 0x0000000D:
				if (IS_BUTTON_DOWN(iVar0, 14, iParam1, bParam2) || IS_BUTTON_DOWN(iVar0, 12, iParam1, bParam2))
				{
					return 0;
				}
				break;
			}
	}
	return bVar1;
}

void Function_23(bool bParam0) //Position: 0x74A / 1866
{
	if (IS_OBJECTSET_VALID(bParam0))
	{
		DISBAND_OBJECTSET(bParam0);
	}
	return;
}

void Function_24() //Position: 0x75D / 1885
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	bool bVar11;
	var uVar12;
	var uVar13;
	float fVar14;
	bool bVar15;
	
	fVar0 = 0.0f;
	bVar1 = Function_46();
	bVar3 = GET_OBJECTSET_SIZE(bVar1);
	fVar4 = GET_CURRENT_GAME_TIME();
	bVar2 = false;
	while (bVar2 <= bVar3)
	{
		bVar11 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, bVar1);
		if (IS_OBJECT_VALID(bVar11))
		{
			if (DECOR_GET_FLOAT_VERBOSE(bVar11, Function_45(), &fVar0))
			{
				if (DECOR_GET_INT_VERBOSE(bVar11, Function_44(), &uVar7))
				{
					iVar5 = Function_42(uVar7);
					iVar6 = 0;
					if (iVar5 == 1)
					{
						if (DECOR_GET_INT_VERBOSE(bVar11, Function_41(), &uVar8))
						{
							iVar6 = Function_40(uVar8);
						}
					}
					if (fVar4 - fVar0) <= Function_39(iVar5, iVar6)
					{
						fVar14 = GRINGO_QUERY_FLOAT(GET_GRINGO_FROM_OBJECT(bVar11), "UseCase", "ActivationRadius", &uVar10);
						fVar14 = (fVar14 + 1.0f);
						Function_38(bVar11);
						if (Function_36(StackVal, StackVal, Function_38(bVar11), &uVar9, 0) <= fVar14)
						{
							bVar15 = GET_OBJECT_OWNER(bVar11);
							PLAY_SIMPLE_PROP_ANIMATION(bVar15, "crateMultiplayer_close", 0, 0, 1f, 0);
							RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(bVar15, "LOCKER_OPEN_QUICK_MASTER"));
							DECOR_REMOVE(bVar11, Function_45());
							REMOVE_OBJECT_FROM_OBJECTSET(bVar11, bVar1);
							bVar3 = GET_OBJECTSET_SIZE(bVar1);
							uVar12 = Function_35(uVar7);
							uVar13 = Function_34(uVar7);
							if (uVar12 || uVar13)
							{
								Function_25(bVar15, bVar11, iVar5, uVar12, uVar13);
							}
						}
						else
						{
							DECOR_SET_FLOAT(bVar11, Function_45(), (fVar0 + 1.0f));
						}
					}
				}
			}
		}
		bVar2++;
	}
	return;
}

void Function_25(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x8CA / 2250
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	var uVar5;
	bool bVar6;
	
	switch (iParam2)
	{
		case 0x00000001:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 379, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 379, 0f, 2, 0);
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_41(), &uVar5))
				{
					Function_29(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_28();
				vVar0 = { StackVal, StackVal, Function_28() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 0, vVar0, 0);
			}
			break;
		
		case 0x00000002:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 380, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 380, 0f, 2, 0);
			}
			if (bParam4)
			{
				Function_27();
				vVar0 = { StackVal, StackVal, Function_27() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 0, vVar0, 0);
			}
			break;
		
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 381, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 381, 0f, 2, 0);
			}
			if (bParam4)
			{
				Function_26();
				vVar0 = { StackVal, StackVal, Function_26() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 3, vVar0, 0);
			}
			break;
	}
	SET_BLIP_MAX_DISTANCE(bVar3, 1.0f);
	UNK_0x1E98AFEC(bVar3, 1);
	UNK_0xFF3DB575(bVar4, 1);
}

vector3 Function_26() //Position: 0x9F0 / 2544
{
	return 0.0f, 0,101f, -0,195f;
}

vector3 Function_27() //Position: 0xA01 / 2561
{
	return 0.0f, 0,127f, -0,177f;
}

vector3 Function_28() //Position: 0xA12 / 2578
{
	return 0.0f, 0,158f, -0,163f;
}

void Function_29(var uParam0, int iParam1) //Position: 0xA23 / 2595
{
	*iParam1 = Function_30(uParam0, Function_32(), 0);
	iParam1->f_4 = Function_30(uParam0, Function_32() + 8, Function_32());
	return;
}

var Function_30(var uParam0, int iParam1, bool bParam2) //Position: 0xA46 / 2630
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_31((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

int Function_31(bool bParam0) //Position: 0xA65 / 2661
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_32() //Position: 0xA71 / 2673
{
	return Function_33(39);
}

int Function_33(bool bParam0) //Position: 0xA7C / 2684
{
	int iVar0;
	
	if (bParam0 <= 0)
	{
		return 0x40000000;
	}
	iVar0 = 0;
	while (bParam0 >= 0)
	{
		bParam0 = SHIFT_RIGHT(bParam0, true);
		iVar0++;
	}
	return iVar0;
}

bool Function_34(bool bParam0) //Position: 0xAAA / 2730
{
	return Function_95(bParam0, 2);
}

bool Function_35(bool bParam0) //Position: 0xAB6 / 2742
{
	return Function_95(bParam0, 1);
}

float Function_36(vector3 vParam0, var uParam3, bool bParam4) //Position: 0xAC2 / 2754
{
	float fVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	bVar1 = 1E+08.0f;
	*uParam3 = 4294967295;
	bVar7 = false;
	while (bVar7 <= 16)
	{
		if (IS_SLOT_VALID(bVar7))
		{
			bVar6 = GET_SLOT_ACTOR(bVar7);
			bVar5 = false;
			if (IS_ACTOR_VALID(bVar6))
			{
				Function_37(bVar6, &vVar2);
				bVar5 = true;
			}
			else if (bParam4)
			{
				if (GET_SLOT_POSITION(bVar7, &vVar2))
				{
					bVar5 = true;
				}
			}
			if (bVar5)
			{
				fVar0 = VDIST2(vParam0, vVar2);
				if (fVar0 > bVar1)
				{
					*uParam3 = bVar7;
					bVar1 = fVar0;
				}
			}
		}
		bVar7++;
	}
	return SQRT(bVar1);
}

void Function_37(bool bParam0, bool bParam1) //Position: 0xB49 / 2889
{
	GET_POSITION(bParam0, bParam1);
	return;
}

vector3 Function_38(bool bParam0) //Position: 0xB56 / 2902
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

float Function_39(int iParam0, int iParam1) //Position: 0xB7D / 2941
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000002:
			iVar0 = (&Global_83591 + 276 + 528)->f_28;
			break;
		
		case 0x00000004:
			iVar0 = (&Global_83591 + 276 + 528)->f_36;
			break;
		
		case 0x00000003:
			iVar0 = (&Global_83591 + 276 + 528)->f_32;
			break;
		
		case 0x00000001:
			if (iParam1 > 6 && iParam1 <= 0)
			{
				iVar0 = (*&Global_83591 + 276 + 528)[iParam1];
			}
			else
			{
				iVar0 = 15.0f;
			}
			break;
	}
	if (iVar0 >= 0.0f)
	{
		return 15.0f;
	}
	return iVar0;
}

int Function_40(var uParam0) //Position: 0xC0D / 3085
{
	return Function_30(uParam0, 32, Function_32() + 8);
}

var Function_41() //Position: 0xC1F / 3103
{
	return "PackedWeapon";
}

int Function_42(bool bParam0) //Position: 0xC34 / 3124
{
	return Function_30(bParam0, Function_43() + 2, 2);
}

int Function_43() //Position: 0xC45 / 3141
{
	return Function_33(6);
}

var Function_44() //Position: 0xC4F / 3151
{
	return "PackedMetadata";
}

var Function_45() //Position: 0xC66 / 3174
{
	return "nResetTime";
}

var Function_46() //Position: 0xC78 / 3192
{
	if (!IS_OBJECTSET_VALID(Global_83590))
	{
		Global_83590 = CREATE_OBJECTSET_IN_LAYOUT("gMP_OpenedPickupSet", Function_47(), 12, 1);
	}
	return Global_83590;
}

var Function_47() //Position: 0xCB0 / 3248
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_48() //Position: 0xCDF / 3295
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	struct<16> Var9;
	float fVar25;
	bool bVar26;
	int iVar27;
	bool bVar28;
	char* cVar29[64];
	bool bVar45;
	
	bVar0 = (Function_12(1, 1) || Function_73());
	uVar1 = (Function_12(1, 1) || Function_10(2048));
	bVar2 = Function_72();
	bVar3 = Function_71();
	bVar7 = GET_LOCAL_SLOT();
	iVar8 = Function_70();
	fVar25 = NET_GET_NET_TIME();
	iVar27 = 1;
	if (GET_DEBUG_DRAW_STATE())
	{
		iVar27 = 16;
	}
	bVar28 = false;
	strcpy(&cVar29, UI_GET_STRING("title_xplvl_0_ui"), 64);
	iVar4 = 0;
	while (iVar4 <= iVar27)
	{
		if (!IS_SLOT_VALID(iLocal_15))
		{
			if (Local_21[bLocal_1527] != 0)
			{
				NET_GAMER_SET_TEAM(bLocal_15, 0);
			}
			if (Local_21[bLocal_1527].f_92 >= 0)
			{
			}
			Local_21[bLocal_1527].f_92 = 0;
			Local_21[bLocal_1527] = 0;
			Local_21[bLocal_1527].f_4 = 0;
			*(&Local_21[bLocal_1527] + 8) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar29 };
			Local_21[bLocal_1527].f_104 = 0;
			Local_21[bLocal_1527].f_96 = 0;
		}
		else
		{
			if (bLocal_15 != bVar7 && bVar0)
			{
				iVar6 = 0;
			}
			else if (bLocal_15 == bVar7 && uVar1)
			{
				iVar6 = 0;
			}
			else if (bVar2)
			{
				if (iVar8 == Function_69(bLocal_15, 1, 0))
				{
					iVar6 = 2;
				}
				else
				{
					iVar6 = 1;
				}
			}
			else if (bVar3)
			{
				iVar6 = 5;
			}
			else
			{
				iVar6 = 3;
			}
			if (Local_21[bLocal_1527] != iVar6)
			{
				NET_GAMER_SET_TEAM(bLocal_15, iVar6);
				Local_21[bLocal_1527] = iVar6;
			}
			if (Local_21[bLocal_1527].f_92 >= 0)
			{
				if (Function_68(bLocal_15))
				{
					if (Function_66(bLocal_15, 2048, 1))
					{
						Local_21[bLocal_1527].f_92 = (Local_21[bLocal_1527].f_92 - 1);
						if (Local_21[bLocal_1527].f_92 < 0)
						{
							Function_63("net_player_joined", bLocal_15);
							Local_21[bLocal_1527].f_92 = 0;
						}
					}
				}
			}
			if (Function_68(bLocal_15))
			{
				iVar5 = Function_61(bLocal_15);
				if (StackVal != iVar5)
				{
					Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59(bLocal_15) };
					NET_GAMER_SET_TITLE(bLocal_15, &Var9);
					Local_21[bLocal_1527].f_4 = iVar5;
					*(&Local_21[bLocal_1527] + 8) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var9 };
				}
				bVar26 = GET_SLOT_ACTOR(bLocal_15);
				bVar28 = IS_ACTOR_VALID(bVar26);
				if (bVar28)
				{
					if (Function_66(bLocal_15, 4194304, 1))
					{
						if (!Local_21[bLocal_1527].f_96)
						{
							Local_21[bLocal_1527].f_96 = 1;
							DECOR_SET_BOOL(bVar26, "NoMelee", true);
						}
					}
					else if (Local_21[bLocal_1527].f_96)
					{
						Local_21[bLocal_1527].f_96 = 0;
						DECOR_REMOVE(bVar26, "NoMelee");
					}
				}
				else
				{
					Local_21[bLocal_1527].f_96 = 0;
				}
				if (Local_21[bLocal_1527].f_72)
				{
					if (Function_58(fVar25, bLocal_15, bVar26))
					{
						if (bVar28 && bLocal_15 == bVar7)
						{
							if (!DECOR_CHECK_EXIST(bVar26, "ArmUp"))
							{
								DECOR_SET_BOOL(bVar26, "ArmUp", true);
							}
						}
					}
					else
					{
						Local_21[bLocal_1527].f_72 = 0;
						if (bVar28)
						{
							DECOR_REMOVE(bVar26, "ArmUp");
							if (IS_OBJECT_VALID(Local_21[bLocal_1527].f_76))
							{
								UNK_0x1A59E608(Local_21[bLocal_1527].f_76);
								DESTROY_OBJECT(Local_21[bLocal_1527].f_76);
							}
						}
					}
				}
			}
		}
		bLocal_15 = (bLocal_15 + 1 % 16);
		iVar4++;
	}
	if (Function_10(8192))
	{
		bVar45 = false;
		while (bVar45 <= 4)
		{
			if (Function_57(bVar45))
			{
				Function_49(bVar45, GET_SLOT_ACTOR(bVar45));
			}
			bVar45++;
		}
	}
	return;
}

void Function_49(bool bParam0, bool bParam1) //Position: 0xFFA / 4090
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	
	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	if (IS_ACTOR_VALID(bParam1))
	{
		bVar3 = true;
		if (IS_OBJECT_VALID(Local_21[bParam027].f_100))
		{
			bVar4 = true;
			bVar5 = Function_56(GET_GRINGO_FROM_OBJECT(Local_21[bParam027].f_100), "UseCase");
			if (IS_OBJECT_VALID(bVar5))
			{
				bVar1 = true;
				bVar2 = IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar5));
			}
		}
	}
	if (Function_66(bParam0, 65536, 1))
	{
		if (!Local_21[bParam027].f_84)
		{
			Local_21[bParam027].f_84 = 1;
			Function_63("mp_needs_rez", bParam0);
			if (bParam0 != GET_LOCAL_SLOT())
			{
				if (!Function_12(16386, 0))
				{
					PRINT_BIG_FORMAT(4.0f, "mp_needs_rez_big", Function_55(bParam0), 0, 0, 0, 2, 0);
					NET_GAMER_SET_BLIP_OVERRIDE(bParam0, 528);
				}
				Function_54("MPCOOP_PLAYERDOWN", 0);
			}
			else if (IS_ACTOR_VALID(bParam1))
			{
				AI_IGNORE_ACTOR(bParam1);
			}
		}
		if (bVar3)
		{
			if (!bVar4)
			{
				if (IS_ACTOR_INITED(bParam1))
				{
					DISABLE_GRINGO_STREAMING_CHECKS();
					Local_21[bParam027].f_100 = CREATE_GRINGO_IN_LAYOUT(bParam1, "rezMe", "$/content/scripting/gringo/simplegringo/mp_rezBuddy", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
					bVar4 = IS_OBJECT_VALID(Local_21[bParam027].f_100);
					if (bVar4)
					{
					}
					SET_ATTACHMENT_IGNORE_ROTATION(ATTACH_OBJECTS(Local_21[bParam027].f_100, bParam1, "spine00", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295), 1);
					ENABLE_GRINGO_STREAMING_CHECKS();
				}
			}
			if (bVar2)
			{
				if (Local_21[bParam027].f_88)
				{
					Local_21[bParam027].f_88 = 0;
					NET_GAMER_ICON_RESET_TIMER(bParam0, 0.0f);
				}
			}
			else if (bParam0 != GET_LOCAL_SLOT())
			{
				if (!Local_21[bParam027].f_88)
				{
					Local_21[bParam027].f_88 = 1;
					fVar6 = Function_50(bParam0);
					NET_GAMER_ICON_RESET_TIMER(bParam0, fVar6);
					AI_IGNORE_ACTOR(bParam1);
				}
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		if (Local_21[bParam027].f_84)
		{
			if (bVar3)
			{
				AI_STOP_IGNORING_ACTOR(bParam1);
			}
			NET_GAMER_SET_BLIP_OVERRIDE(bParam0, 4294967295);
			Local_21[bParam027].f_84 = 0;
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		if (bVar4)
		{
			if (!bVar1)
			{
				DESTROY_OBJECT(Local_21[bParam027].f_100);
			}
		}
		if (Local_21[bParam027].f_88)
		{
			NET_GAMER_ICON_RESET_TIMER(bParam0, 0.0f);
			Local_21[bParam027].f_88 = 0;
		}
		Local_21[bParam027].f_104 = 0;
	}
	return;
}

var Function_50(bool bParam0) //Position: 0x1252 / 4690
{
	if (Function_68(bParam0))
	{
		return (1.0f - ((NET_GET_NET_TIME() - Function_52(2, bParam0)) / Function_51()));
	}
	return 0.0f;
}

float Function_51() //Position: 0x1272 / 4722
{
	if (Function_95(Global_79962, 32))
	{
		return 20.0f;
	}
	return 30.0f;
}

float Function_52(int iParam0, bool bParam1) //Position: 0x1292 / 4754
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_53(iParam0);
	}
	if (!Function_68(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

var Function_53(int iParam0) //Position: 0x12FB / 4859
{
	return (*&Global_78480 + 176)[iParam0];
}

void Function_54(char* cParam0, bool bParam1) //Position: 0x130B / 4875
{
	int iVar0;
	
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		iVar0 = "";
		if (bParam1)
		{
			iVar0 = cParam0;
		}
		ADD_LINE_TO_CONVERSATION(false, cParam0, iVar0, false, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(0, "NARRATOR");
	}
	START_SCRIPT_CONVERSATION(false, 0);
	return;
}

var Function_55(bool bParam0) //Position: 0x134B / 4939
{
	switch (bParam0)
	{
		case 0x00000000:
			return "MPPlayerNameColored_0";
		
		case 0x00000001:
			return "MPPlayerNameColored_1";
		
		case 0x00000002:
			return "MPPlayerNameColored_2";
		
		case 0x00000003:
			return "MPPlayerNameColored_3";
		
		case 0x00000004:
			return "MPPlayerNameColored_4";
		
		case 0x00000005:
			return "MPPlayerNameColored_5";
		
		case 0x00000006:
			return "MPPlayerNameColored_6";
		
		case 0x00000007:
			return "MPPlayerNameColored_7";
		
		case 0x00000008:
			return "MPPlayerNameColored_8";
		
		case 0x00000009:
			return "MPPlayerNameColored_9";
		
		case 0x0000000A:
			return "MPPlayerNameColored_10";
		
		case 0x0000000B:
			return "MPPlayerNameColored_11";
		
		case 0x0000000C:
			return "MPPlayerNameColored_12";
		
		case 0x0000000D:
			return "MPPlayerNameColored_13";
		
		case 0x0000000E:
			return "MPPlayerNameColored_14";
		
		case 0x0000000F:
			return "MPPlayerNameColored_15";
		
		default:
	}
	return "UNHANDLED SLOT";
}

var Function_56(bool bParam0, bool bParam1) //Position: 0x155F / 5471
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

bool Function_57(bool bParam0) //Position: 0x156C / 5484
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_68(bParam0);
}

bool Function_58(float fParam0, int iParam1, bool bParam2) //Position: 0x1582 / 5506
{
	void fVar0;
	
	if ((fParam0 - Local_21[iParam127].f_80) <= 2,5f)
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam2))
	{
		return 1;
	}
	fVar0 = GET_LAST_ATTACK_TIME(bParam2);
	return fVar0 >= 0.0f;
}

struct<64> Function_59(bool bParam0) //Position: 0x15B4 / 5556
{
	char* cVar0[64];
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60();
	}
	if (!Function_68(bParam0))
	{
		strcpy(&cVar0, "Tried to get title from bad slot #", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[bParam096] + 32);
}

struct<64> Function_60() //Position: 0x1612 / 5650
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

var Function_61(bool bParam0) //Position: 0x1623 / 5667
{
	char* cVar0[64];
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_62();
	}
	if (!Function_68(bParam0))
	{
		strcpy(&cVar0, "Tried to get title from bad slot #", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	return Global_76943[bParam096].f_28;
}

var Function_62() //Position: 0x167A / 5754
{
	return Global_78480.f_28;
}

void Function_63(bool bParam0, bool bParam1) //Position: 0x1686 / 5766
{
	var uVar0;
	
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64(bParam1), 2);
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), &uVar0, 0, 0, 0, 0, 0);
	return;
}

struct<32> Function_64(bool bParam0) //Position: 0x16A6 / 5798
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_65("g", I2STR(bParam0));
}

struct<32> Function_65(char* cParam0, char* cParam1) //Position: 0x16BA / 5818
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_66(bool bParam0, int iParam1, bool bParam2) //Position: 0x16D3 / 5843
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_12(iParam1, bParam2);
	}
	if (!Function_68(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_67(iParam1), 64);
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

var Function_67(int iParam0) //Position: 0x1754 / 5972
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
	}
	return "UNKNOWN";
}

bool Function_68(bool bParam0) //Position: 0x19DD / 6621
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

int Function_69(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1A7E / 6782
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_68(bParam0))
			{
				if (!Function_66(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

int Function_70() //Position: 0x1AC2 / 6850
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_69(GET_LOCAL_SLOT(), 1, 0);
}

bool Function_71() //Position: 0x1AD9 / 6873
{
	return Function_10(4);
}

bool Function_72() //Position: 0x1AE3 / 6883
{
	return Function_10(2);
}

bool Function_73() //Position: 0x1AED / 6893
{
	if (Function_75())
	{
		return (Function_74() != 1 || Function_74() != 0);
	}
	return 0;
}

int Function_74() //Position: 0x1B06 / 6918
{
	return Global_79349.f_16;
}

bool Function_75() //Position: 0x1B12 / 6930
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_76() //Position: 0x1B1B / 6939
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	if (Function_110(bLocal_20, 81, &bVar1, 0))
	{
		if (NET_IS_POSSE_LEADER())
		{
			Function_91("net_posse_led", Function_92(GET_LOCAL_SLOT(), 1));
		}
		bVar2 = true;
		Function_89(Function_90(2));
		fLocal_17 = GET_CURRENT_GAME_TIME();
	}
	if (Function_110(bLocal_20, 82, &bVar1, 0))
	{
		Function_88("net_posse_left");
		Function_83(Function_90(1));
		fLocal_17 = GET_CURRENT_GAME_TIME();
	}
	if (Function_110(bLocal_20, 83, &bVar1, 0))
	{
		bVar2 = true;
		if (DECOR_GET_INT_VERBOSE(bVar1, "Slot", &bVar0))
		{
			if (IS_SLOT_VALID(bVar0))
			{
				Function_81(bVar0, Function_90(2));
				if (GET_LOCAL_SLOT() != bVar0)
				{
					bVar3 = NET_GET_POSSE_LEADER_SLOT();
					if (IS_SLOT_VALID(bVar3))
					{
						if (bVar0 == bVar3)
						{
							Function_91("net_posse_joined", Function_92(bVar0, 1));
							if (Function_73())
							{
								Function_78();
							}
						}
						else if ((GET_CURRENT_GAME_TIME() - fLocal_17) <= 1.0f)
						{
							Function_77("net_posse_member_added", bVar0, Function_92(bVar3, 1));
						}
					}
				}
			}
		}
	}
	if (bVar2)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(43) && NET_IS_POSSE_LEADER())
		{
			iVar4 = NET_GET_POSSE_COUNT();
			if (iVar4 == 8)
			{
				AWARD_ACHIEVEMENT(43);
			}
		}
	}
	if (Function_110(bLocal_20, 100, &bVar1, 0))
	{
	}
	if (Function_110(bLocal_20, 84, &bVar1, 0))
	{
		if (DECOR_GET_INT_VERBOSE(bVar1, "Slot", &bVar0))
		{
			Function_81(bVar0, 1);
			if ((GET_CURRENT_GAME_TIME() - fLocal_17) <= 1.0f)
			{
				if (GET_LOCAL_SLOT() == bVar0 && bVar0 <= 0)
				{
					if (NET_GET_POSSE_COUNT() >= 1)
					{
						Function_77("net_posse_member_removed", bVar0, Function_92(bVar0, 1));
					}
				}
			}
		}
	}
	return;
}

void Function_77(bool bParam0, bool bParam1, int iParam2) //Position: 0x1CD6 / 7382
{
	var uVar0;
	
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64(bParam1), 2);
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), &uVar0, iParam2, 0, 0, 0, 0);
	return;
}

void Function_78() //Position: 0x1CF7 / 7415
{
	vector3 vVar0;
	
	if (Function_79())
	{
		if (GET_SLOT_POSITION(NET_GET_POSSE_LEADER_SLOT(), &vVar0))
		{
			if (VDIST(vVar0, Global_34574) < 400.0f)
			{
				UI_SEND_EVENT("net.posse_prompt_teleport");
			}
		}
	}
	return;
}

bool Function_79() //Position: 0x1D45 / 7493
{
	return (Function_80() && !NET_IS_POSSE_LEADER());
}

var Function_80() //Position: 0x1D53 / 7507
{
	return NET_GET_POSSE_COUNT() < 1;
}

void Function_81(bool bParam0, bool bParam1) //Position: 0x1D5E / 7518
{
	bool bVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_82(GET_LOCAL_SLOT(), bParam0) && !Function_90(2))
		{
			return;
		}
		if (!Function_90(1))
		{
			return;
		}
	}
	bVar0 = GET_SLOT_ACTOR(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bVar0, bParam1);
		SET_ALLOW_DEADEYE_LOCKS(bVar0, bParam1);
	}
	return;
}

bool Function_82(bool bParam0, bool bParam1) //Position: 0x1DAB / 7595
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = NET_GET_GAMER_POSSE_LEADER(bParam0);
	bVar1 = NET_GET_GAMER_POSSE_LEADER(bParam1);
	if (bVar0 != bVar1 && bVar0 < 4294967295)
	{
		return 1;
	}
	return 0;
}

void Function_83(bool bParam0) //Position: 0x1DCF / 7631
{
	bool bVar0;
	
	if (bParam0)
	{
		Function_86(1);
	}
	else
	{
		Function_84(1);
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			Function_81(bVar0, bParam0);
		}
		bVar0++;
	}
	return;
}

void Function_84(int iParam0) //Position: 0x1E07 / 7687
{
	Function_85(&Global_79337, iParam0);
	return;
}

void Function_85(var uParam0, int iParam1) //Position: 0x1E16 / 7702
{
	Function_93(uParam0, iParam1);
	return;
}

void Function_86(int iParam0) //Position: 0x1E23 / 7715
{
	Function_87(&Global_79337, iParam0);
	return;
}

void Function_87(var uParam0, int iParam1) //Position: 0x1E32 / 7730
{
	Function_96(uParam0, iParam1);
	return;
}

void Function_88(bool bParam0) //Position: 0x1E3F / 7743
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), 0, 0, 0, 0, 0, 0);
	return;
}

void Function_89(bool bParam0) //Position: 0x1E53 / 7763
{
	bool bVar0;
	
	if (bParam0)
	{
		Function_86(2);
	}
	else
	{
		Function_84(2);
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (Function_82(GET_LOCAL_SLOT(), bVar0))
			{
				Function_81(bVar0, bParam0);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_90(bool bParam0) //Position: 0x1E96 / 7830
{
	return Function_18(Global_79337, bParam0);
}

void Function_91(bool bParam0, int iParam1) //Position: 0x1EA5 / 7845
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), iParam1, 0, 0, 0, 0, 0);
	return;
}

int Function_92(bool bParam0, int iParam1) //Position: 0x1EBA / 7866
{
	return NET_GET_GAMER_HEX_COLOR(bParam0, iParam1);
}

void Function_93(bool bParam0, int iParam1) //Position: 0x1EC7 / 7879
{
	*bParam0 = (*bParam0 - (*bParam0 && iParam1));
	return;
}

void Function_94() //Position: 0x1EDA / 7898
{
	Function_2(32768, 1, 0);
	return;
}

bool Function_95(bool bParam0, int iParam1) //Position: 0x1EE9 / 7913
{
	return (bParam0 && iParam1) == 0;
}

void Function_96(bool bParam0, int iParam1) //Position: 0x1EF6 / 7926
{
	*bParam0 = (*bParam0 || iParam1);
	return;
}

void Function_97(int iParam0) //Position: 0x1F05 / 7941
{
	var uVar0;
	var uVar1;
	
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	while (NET_SCRIPTMSG_ISPENDING(iParam0, &uVar1))
	{
		if (NET_SCRIPTMSG_QUERY_HANDLER(uVar1, &uVar0))
		{
			Stack.Push(iParam0);
			Call_Loc(uVar0);
		}
		else
		{
			Function_98(iParam0);
		}
	}
	return;
}

void Function_98(int iParam0) //Position: 0x1F37 / 7991
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_99() //Position: 0x1F46 / 8006
{
	if (Function_451("generateRandomLifetimeScore"))
	{
	}
	Function_102();
	Function_101(4096);
	Function_100();
	return;
}

void Function_100() //Position: 0x1F7C / 8060
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_101(int iParam0) //Position: 0x1F95 / 8085
{
	Function_85(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_102() //Position: 0x1FCE / 8142
{
	Function_103();
	return;
}

void Function_103() //Position: 0x1FD7 / 8151
{
	Function_104(&Global_78480 + 220);
	return;
}

void Function_104(var uParam0) //Position: 0x1FE6 / 8166
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_105() //Position: 0x2007 / 8199
{
	vector3 vVar0;
	
	if (NET_POSSE_GET_LEADER_WAYPOINT(&vVar0))
	{
		vVar0.f_4 = 25.0f;
		if (!Function_109(StackVal, StackVal, StackVal, StackVal, vVar0, *(&Global_28235 + 36)))
		{
			Function_107(StackVal, StackVal, vVar0, 0.0f, 0.0f, 0.0f, 1);
		}
	}
	else if (StackVal != 2 && Global_28235 != 3)
	{
		if (!NET_POSSE_IS_LEADER_WAYPOINT_VALID())
		{
			Function_106();
		}
	}
	return;
}

void Function_106() //Position: 0x2058 / 8280
{
	if (Global_28235 == 3)
	{
		Global_28235.f_4 = 3;
	}
	*(&Global_28235 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28235 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(2);
	return;
}

void Function_107(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x2083 / 8323
{
	*(&Global_28235 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28235 + 36) = { StackVal, StackVal, vParam0 };
	Global_28235 = 3;
	Global_28235.f_4 = 0;
	Global_28235.f_60 = 4;
	Global_28235.f_64 = uParam3;
	Global_28235.f_68 = uParam4;
	Global_28235.f_72 = uParam5;
	Global_28235.f_16 = 393264;
	if (!IS_OBJECTSET_VALID(Global_28235.f_12))
	{
		Global_28235.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "PosseGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28235.f_12) >= 0)
	{
		Function_108(Global_28235.f_12);
		CLEAN_OBJECTSET(Global_28235.f_12);
	}
	Global_28235.f_92 = uParam6;
	Global_28210.f_96 = 1;
}

void Function_108(bool bParam0) //Position: 0x2123 / 8483
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(bVar0));
		}
	}
	return;
}

bool Function_109(vector3 vParam0, vector3 vParam3) //Position: 0x2163 / 8547
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

bool Function_110(bool bParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2190 / 8592
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return 0;
	}
	bVar1 = false;
	while (bVar1 < (GET_OBJECTSET_SIZE(bParam0) - 1))
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bParam0);
		if (iParam1 == GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bVar0)))
		{
			*bParam2 = bVar0;
			if (bParam3)
			{
				REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
			}
			return 1;
		}
		bVar1++;
	}
	return 0;
}

void Function_111() //Position: 0x21E9 / 8681
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	bVar0 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("Playerlayout"));
	ITERATE_ON_OBJECT_TYPE(bVar0, 15);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	bVar2 = GET_CURRENT_GAME_TIME();
	fLocal_18 = bVar2;
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar3 = GET_ACTOR_FROM_OBJECT(bVar1);
		if (IS_ACTOR_VALID(bVar3))
		{
			if (IS_ACTOR_ANIMAL(bVar3) && !IS_ACTOR_MOUNTED(bVar3))
			{
				if (StackVal == 5)
				{
					if (GET_TASK_STATUS(bVar3, 86) != 1)
					{
						DECOR_SET_INT(bVar1, "state", 2);
						bLocal_19 = 2;
					}
				}
				else if (!DECOR_CHECK_EXIST(bVar1, "state"))
				{
					DECOR_SET_INT(bVar1, "state", false);
					bLocal_19 = false;
				}
				else
				{
					bLocal_19 = DECOR_GET_INT(bVar1, "state");
				}
				switch (bLocal_19)
				{
					case 0x00000000:
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar3)))
						{
							DECOR_SET_FLOAT(bVar1, "timer", bVar2);
							NET_OBJECT_SET_REPLICATION_MODE(bVar1, 5);
							DECOR_SET_INT(bVar1, "state", true);
						}
						break;
					
					case 0x00000001:
						if (DECOR_CHECK_EXIST(bVar1, "timer"))
						{
							if ((bVar2 - DECOR_GET_FLOAT(bVar1, "timer")) < 60.0f)
							{
								DECOR_SET_INT(bVar1, "state", 2);
							}
						}
						break;
					
					case 0x00000002:
						RELEASE_ACTOR(bVar3);
						TASK_OVERRIDE_SET_MOVETYPE(bVar3, 2);
						TASK_FLEE_ACTORSET(bVar3, Global_78576, -1.0f, -1.0f, 0, 0, 0);
						TASK_PRIORITY_SET(bVar3, true);
						DECOR_REMOVE_ALL(bVar1);
						break;
					}
				}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	bVar4 = Function_112();
	bVar5 = GET_MOUNT(Function_112());
	if (IS_ACTOR_VALID(bVar5) && IS_ACTOR_VALID(bVar4))
	{
		TASK_CLEAR(bVar5);
		DECOR_REMOVE_ALL(GET_OBJECT_FROM_ACTOR(bVar5));
		GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bVar5), FIND_NAMED_LAYOUT("Playerlayout"));
	}
	if (IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

var Function_112() //Position: 0x23B1 / 9137
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_113() //Position: 0x23C6 / 9158
{
	bool bVar0;
	
	Function_235(0);
	bVar0 = START_OBJECT_ITERATOR(Global_26149);
	while (IS_OBJECT_VALID(bVar0))
	{
		Function_114(GET_EVENT_FROM_OBJECT(bVar0));
		bVar0 = OBJECT_ITERATOR_NEXT(Global_26149);
	}
	return;
}

void Function_114(bool bParam0) //Position: 0x23F3 / 9203
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_EVENT_VALID(bParam0))
	{
		return;
	}
	switch (GET_EVENT_TYPE(bParam0))
	{
		case 0x00000009:
		case 0x0000000B:
			if (!Function_342(4096))
			{
				return;
			}
			bVar0 = GET_EVENT_PERPETRATOR(bParam0);
			if (!IS_OBJECT_VALID(bVar0))
			{
				return;
			}
			if (GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (!IS_ACTOR_VALID(bVar1))
			{
				return;
			}
			if (!IS_ACTOR_LOCAL_PLAYER(bVar1))
			{
				return;
			}
			break;
		
		case 0x00000003:
			bVar0 = GET_EVENT_PERPETRATOR(bParam0);
			if (!IS_OBJECT_VALID(GET_EVENT_TARGET_AS_OBJECT(bParam0)))
			{
				return;
			}
			if (!IS_OBJECT_VALID(bVar0))
			{
				return;
			}
			if (DECOR_CHECK_EXIST(GET_EVENT_TARGET_AS_OBJECT(bParam0), "duel"))
			{
				return;
			}
			break;
		
		case 0x00000001:
			if (GET_EVENT_TARGET_AS_OBJECT(bParam0) == "")
			{
				return;
			}
			bVar0 = GET_EVENT_PERPETRATOR(bParam0);
			if (!IS_OBJECT_VALID(bVar0))
			{
				return;
			}
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (!IS_ACTOR_VALID(bVar1))
			{
				return;
			}
			if (!IS_ACTOR_LOCAL_PLAYER(bVar1))
			{
				return;
			}
			break;
		
		case 0x00000002:
			bVar0 = GET_EVENT_PERPETRATOR(bParam0);
			if (!IS_OBJECT_VALID(bVar0))
			{
			}
			break;
		
		case 0x0000000A:
			bVar0 = GET_EVENT_PERPETRATOR(bParam0);
			if (!IS_OBJECT_VALID(bVar0))
			{
			}
			break;
		
		default:
			return;
	}
	Function_115(bParam0);
	return;
}

void Function_115(bool bParam0) //Position: 0x2510 / 9488
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	int iVar26;
	bool bVar27;
	struct<8> Var28;
	int iVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	int iVar40;
	float fVar41;
	float fVar42;
	
	iVar5 = 4294967295;
	bVar6 = 4294967295;
	bVar10 = false;
	bVar11 = false;
	bVar12 = false;
	bVar13 = false;
	bVar14 = false;
	bVar15 = false;
	bVar16 = false;
	iVar17 = 0;
	bVar22 = 4294967295;
	bVar23 = 4294967295;
	bVar24 = "";
	bVar0 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
	if (IS_OBJECT_VALID(bVar0))
	{
		if (GET_OBJECT_TYPE(bVar0) == 15)
		{
			bVar2 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (IS_ACTOR_VALID(bVar2))
			{
				iVar5 = GET_ACTOR_FACTION(bVar2);
				if (IS_ACTOR_PLAYER(bVar2))
				{
					bVar14 = true;
					Function_37(bVar2, &vVar7);
					bVar23 = GET_ACTOR_SLOT(bVar2);
					if (IS_ACTOR_LOCAL_PLAYER(bVar2))
					{
						bVar15 = true;
					}
				}
				else if (IS_ACTOR_RIDEABLE(bVar2))
				{
					bVar25 = GET_RIDER(bVar2);
					if (IS_ACTOR_VALID(bVar25))
					{
						if (IS_ACTOR_PLAYER(bVar25))
						{
							bVar23 = GET_ACTOR_SLOT(bVar25);
							Function_37(bVar2, &vVar7);
							if (IS_ACTOR_LOCAL_PLAYER(bVar25))
							{
								bVar16 = true;
								bVar21 = ANIMAL_ACTOR_GET_SPECIES(bVar2);
							}
							else
							{
								iVar17 = 1;
							}
						}
					}
					else
					{
						iVar26 = Function_112();
						if (Function_232(iVar26, 0, 0, 0, 0, 0, 0, 0, 0))
						{
							if (GET_MOST_RECENT_RIDER(bVar2) == iVar26)
							{
								Function_37(bVar2, &vVar7);
								bVar23 = GET_LOCAL_SLOT();
								bVar16 = true;
								bVar21 = ANIMAL_ACTOR_GET_SPECIES(bVar2);
							}
						}
					}
				}
			}
		}
	}
	bVar1 = GET_EVENT_PERPETRATOR(bParam0);
	if (IS_OBJECT_VALID(bVar1))
	{
		if (GET_OBJECT_TYPE(bVar1) == 15)
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(bVar1);
			if (IS_ACTOR_VALID(bVar3))
			{
				bVar10 = true;
				bVar6 = GET_ACTOR_ENUM_FACTION(GET_ACTOR_ENUM(bVar3));
				if (IS_ACTOR_PLAYER(bVar3))
				{
					bVar11 = true;
					bVar22 = GET_ACTOR_SLOT(bVar3);
					if (IS_LOCAL_PLAYER(bVar3))
					{
						bVar12 = true;
					}
				}
			}
		}
	}
	bVar27 = false;
	if (!(bVar15 && bVar12))
	{
		if (Function_231())
		{
			if (Function_230())
			{
				if (bVar15 && bVar11)
				{
					if (Function_70() == Function_69(bVar22, 1, 0))
					{
						bVar27 = true;
					}
				}
				else if (bVar12 && bVar14)
				{
					if (Function_70() == Function_69(bVar23, 1, 0))
					{
						bVar27 = true;
					}
				}
			}
			if (!bVar27)
			{
			}
		}
	}
	iVar36 = 4294967295;
	bVar37 = true;
	if (Function_229())
	{
		bVar37 = false;
	}
	bVar38 = Function_10(32768);
	switch (GET_EVENT_TYPE(bParam0))
	{
		case 0x00000009:
			if (!bVar14)
			{
				if (IS_ACTOR_VALID(bVar2))
				{
					if (IS_ACTOR_ALIVE(bVar2))
					{
						if (DECOR_CHECK_EXIST(bParam0, "DroppedItem"))
						{
							bVar39 = DECOR_GET_OBJECT(bParam0, "DroppedItem");
							if (IS_OBJECT_VALID(bVar39))
							{
								if (GET_OBJECT_TYPE(bVar39) == 17)
								{
									Function_228();
									if (bVar38)
									{
										if (Function_227(4) == 5)
										{
											if (Function_95((*&Global_84364 + 712)[5], 1))
											{
												Function_226(&Global_50170, 158, 1, 50.0f, 0, 1);
												Function_226(&Global_50170, 159, 10, 250.0f, 1, 1);
												Function_226(&Global_50170, 160, 50, 500.0f, 5, 1);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x0000000B:
			if (!bVar14)
			{
				if (IS_ACTOR_VALID(bVar2))
				{
					if (IS_ACTOR_ALIVE(bVar2))
					{
						if (DECOR_CHECK_EXIST(bParam0, "DroppedWeapon"))
						{
							bVar39 = DECOR_GET_OBJECT(bParam0, "DroppedWeapon");
							if (IS_OBJECT_VALID(bVar39))
							{
								if (GET_OBJECT_TYPE(bVar39) == 34)
								{
									Function_225();
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000003:
			if (bVar12 && bVar14)
			{
				if (!bVar27 && bVar37)
				{
					Function_224(32, 1);
				}
			}
			if (bVar15 && bVar11)
			{
				if (!bVar27 && bVar37)
				{
					Function_224(33, 1);
				}
				Function_219(StackVal, StackVal, 6, vVar7, bVar22, 4294967295, 0, 0, 0);
			}
			break;
		
		case 0x00000001:
			if (((bVar12 && (bVar14 || iVar17)) && !bVar15) && !bVar27)
			{
				if (IS_ACTOR_ALIVE(bVar2))
				{
					iVar40 = GET_LAST_HIT_FLAGS(bVar2);
					if (!Function_95(iVar40, 65814))
					{
						Function_218();
					}
				}
			}
			break;
		
		case 0x0000000A:
			if (bVar12 && bVar37)
			{
				if (IS_ACTOR_HUMAN(bVar2))
				{
					if (!bVar27)
					{
						Function_224(34, 1);
					}
				}
			}
			break;
		
		case 0x00000002:
			if (DECOR_GET_INT_VERBOSE(bParam0, "Weapon", &iVar36))
			{
			}
			else
			{
				iVar36 = GET_LAST_HIT_WEAPON(bVar2);
			}
			bVar13 = IS_ACTOR_HUMAN(bVar2);
			bVar19 = Function_18(GET_LAST_HIT_FLAGS(bVar2), 4);
			if (!bVar19)
			{
				bVar18 = DECOR_CHECK_EXIST(bParam0, "Headshot");
			}
			if (!bVar14)
			{
				if (Function_342(4096))
				{
					if (bVar13)
					{
						Function_156(bVar2, bVar18, bVar12);
					}
					else if (DECOR_CHECK_EXIST(bVar2, "nKillBonus"))
					{
						Function_156(bVar2, bVar18, bVar12);
					}
				}
			}
			if (bVar12)
			{
				if (bVar14)
				{
					if (bVar15)
					{
						Function_154(StackVal, StackVal, bVar2, vVar7, 0);
						if (bVar37)
						{
							Function_224(12, 1);
						}
						Function_145();
					}
				}
				else if (bVar13)
				{
					Function_144(bVar18);
					if (bVar38)
					{
						Function_143(bVar2);
						Function_142(bVar2);
					}
					bVar4 = GET_LAST_ATTACK_TARGET(bVar2);
					if (IS_ACTOR_VALID(bVar4))
					{
						if (IS_ACTOR_PLAYER(bVar4))
						{
							bVar20 = GET_ACTOR_SLOT(bVar4);
							if (bVar20 != GET_LOCAL_SLOT())
							{
								if (IS_ACTOR_ALIVE(bVar4))
								{
									if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(bVar2)) >= 3.0f)
									{
										if (bVar37)
										{
											Function_224(28, 1);
											Function_54("GENMESS_GUARDIANANGEL", 0);
										}
										Function_219(StackVal, StackVal, 7, vVar7, bVar20, 4294967295, 0, 0, 0);
										if (bVar38)
										{
											Function_226(&Global_50170, 69, 1, 50.0f, 0, 1);
											Function_226(&Global_50170, 70, 10, 100.0f, 1, 1);
											Function_226(&Global_50170, 71, 50, 250.0f, 2, 1);
											Function_226(&Global_50170, 72, 250, 500.0f, 5, 1);
										}
									}
								}
								else if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(bVar2)) >= 10.0f)
								{
									Function_219(StackVal, StackVal, 8, vVar7, bVar20, 4294967295, 0, 0, 0);
									Function_54("GENMESS_EYE4EYE", 0);
								}
							}
						}
						else
						{
							Function_141(&Global_56612, bVar3);
						}
					}
					if (bVar37)
					{
						if (Function_73())
						{
							if (!Function_342(4096))
							{
								Function_125(1.0f, 0);
							}
							if (IS_LAYOUTREF_VALID(Function_124()))
							{
								bVar24 = GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(bVar2));
								if (IS_LAYOUTREF_VALID(bVar24))
								{
									if (bVar24 == Function_124())
									{
										Function_224(29, 1);
										if (Function_123(iVar5))
										{
											Function_224(31, 1);
										}
										else if (Function_122(iVar5))
										{
											Function_224(30, 1);
										}
									}
								}
							}
						}
						else
						{
							Function_224(29, 1);
							if (Function_123(iVar5))
							{
								Function_224(31, 1);
							}
							else if (Function_122(iVar5))
							{
								Function_224(30, 1);
							}
						}
					}
				}
				else if (bVar16)
				{
					Function_219(StackVal, StackVal, 1, vVar7, bVar23, iVar36, bVar21, bVar18, 0);
				}
				else if (Function_342(4096))
				{
					Function_121(3212836864);
				}
			}
			else if (bVar15 || bVar16)
			{
				if (!bVar16)
				{
					if (bVar37 && (!bVar27 || Function_71()))
					{
						Function_224(12, 1);
					}
					if (Function_120(35) > 3)
					{
						if (bVar11)
						{
							Function_119(bVar23, bVar22, 4294967295);
						}
					}
					if (bVar11)
					{
						Function_118(4194304, Function_66(bVar22, 8388608, 1));
					}
					Function_145();
				}
				if (bVar11)
				{
					if (bVar27)
					{
						Function_219(StackVal, StackVal, 2, vVar7, bVar22, iVar36, bVar21, bVar18, 0);
					}
					else
					{
						Function_219(StackVal, StackVal, 1, vVar7, bVar22, iVar36, bVar21, bVar18, bVar19);
					}
				}
				else if (!bVar10 || bVar2 != bVar3)
				{
					Function_154(StackVal, StackVal, bVar2, vVar7, bVar16);
				}
				else if (IS_ACTOR_HUMAN(bVar3))
				{
					Function_219(StackVal, StackVal, 4, vVar7, bVar6, iVar36, bVar21, bVar18, 0);
				}
				else if (IS_ACTOR_ANIMAL(bVar3))
				{
					Function_219(StackVal, StackVal, 5, vVar7, ANIMAL_ACTOR_GET_SPECIES(bVar3), 4294967295, bVar21, 0, 0);
				}
				else
				{
					Function_154(StackVal, StackVal, bVar2, vVar7, bVar16);
				}
			}
			else if (IS_ACTOR_VALID(bVar2) && IS_ACTOR_VALID(bVar3))
			{
				if (bVar11)
				{
					if (Function_231())
					{
						if (IS_ACTOR_PLAYER(bVar2))
						{
							if (Function_70() == Function_69(bVar23, 1, 0))
							{
								bVar27 = true;
							}
						}
					}
					if (!bVar27)
					{
						fVar41 = GET_DAMAGE_BY_LOCAL_PLAYER(bVar2);
						fVar42 = GET_ACTOR_MAX_HEALTH(bVar2);
						if (fVar41 < (fVar42 * 0,5f))
						{
							Function_224(38, 1);
							if (bVar14)
							{
								Var28 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("nmp_assist", 4294967295) };
								Function_63(&Var28, bVar22);
							}
							else
							{
								Function_63("mp_assist_npc", bVar22);
							}
							if (bVar38)
							{
								Function_226(&Global_50170, 73, 1, 50.0f, 0, 1);
								Function_226(&Global_50170, 74, 10, 100.0f, 1, 1);
								Function_226(&Global_50170, 75, 50, 250.0f, 2, 1);
								Function_226(&Global_50170, 76, 250, 500.0f, 5, 1);
							}
						}
					}
				}
			}
			break;
	}
	return;
}

struct<32> Function_116(char* cParam0, int iParam1) //Position: 0x2CFC / 11516
{
	char* cVar0[32];
	int iVar8;
	
	strcpy(&cVar0, cParam0, 32);
	iVar8 = Function_117(cParam0);
	if (iParam1 == 4294967295)
	{
		if ((RAND_INT_RANGE(false, 10000) % 100) > 30 && iVar8 < 0)
		{
			stradd(&cVar0, "_", 32);
			stradd(&cVar0, I2STR((RAND_INT_RANGE(false, 10000) % iVar8) + 1), 32);
		}
	}
	else if (iParam1 >= 0)
	{
		stradd(&cVar0, "_", 32);
		stradd(&cVar0, I2STR((iParam1 % iVar8) + 1), 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_117(char* cParam0) //Position: 0x2D6B / 11627
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, "_count", 32);
	return (STRING_TO_INT(UI_GET_STRING(&cVar0)) - 1);
}

void Function_118(int iParam0, bool bParam1) //Position: 0x2D8E / 11662
{
	if (bParam1)
	{
		Function_96(&Global_78480 + 128, iParam0);
	}
	else
	{
		Function_93(&Global_78480 + 128, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = Global_78480.f_128;
	}
	return;
}

void Function_119(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2DC9 / 11721
{
	struct<9> Var0;
	
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	vVar0 = bParam0;
	vVar0.y = bParam1;
	vVar0.z = bParam2;
	NET_SCRIPTMSG_SEND(2, 7, &vVar0, 3, 1);
	if (bParam2 == 4294967295)
	{
		PLAYSTAT_STRING("Killstreak_End", GET_SLOT_NAME(bParam1));
	}
	else
	{
		PLAYSTAT_INT("Killstreak", bParam2);
	}
	return;
}

int Function_120(int iParam0) //Position: 0x2E2F / 11823
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

void Function_121(float fParam0) //Position: 0x2E48 / 11848
{
	if (fParam0 != -1.0f)
	{
		fParam0 = GET_CURRENT_GAME_TIME();
	}
	if (Function_95(StackVal, 2))
	{
		UI_ANIM_SETUP("XpComboTimer", 10.0f, 32, false);
		UI_ANIM_RESTART("XpComboTimer");
	}
	Global_76939 = fParam0;
	return;
}

bool Function_122(int iParam0) //Position: 0x2E99 / 11929
{
	switch (iParam0)
	{
		case 0x00000003:
			return 1;
		
		case 0x00000005:
			return 1;
		
		case 0x0000000B:
			return 1;
		
		case 0x00000007:
			return 1;
		
		case 0x00000006:
			return 1;
		
		case 0x00000010:
			return 1;
		
		case 0x0000000A:
			return 1;
		
		case 0x00000004:
			return 1;
		
		case 0x00000008:
			return 1;
		
		default:
	}
	return 0;
	return 0;
}

bool Function_123(int iParam0) //Position: 0x2EF1 / 12017
{
	switch (iParam0)
	{
		case 0x00000019:
			return 1;
		
		case 0x0000000D:
			return 1;
		
		case 0x0000000E:
			return 1;
		
		case 0x0000000F:
			return 1;
		
		case 0x0000000C:
			return 1;
		
		case 0x00000010:
			return 1;
		
		case 0x0000001A:
			return 1;
		
		case 0x00000013:
			return 1;
		
		default:
	}
	return 0;
	return 0;
}

int Function_124() //Position: 0x2F41 / 12097
{
	return Global_83591.f_140;
}

int Function_125(float fParam0, bool bParam1) //Position: 0x2F4D / 12109
{
	if (!Function_73())
	{
		Global_83822 = 1;
	}
	Function_126(487, (fParam0 * Global_3362), bParam1);
	return 1;
}

void Function_126(int iParam0, bool bParam1, int iParam2) //Position: 0x2F6E / 12142
{
	Function_127(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_127(int iParam0, bool bParam1, int iParam2, var uParam3) //Position: 0x2F8A / 12170
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
	Function_140(iParam0, TO_FLOAT(bParam1), 1);
	Function_139(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_128(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, uParam3);
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

void Function_128(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x31AA / 12714
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_138(390))), 32);
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
					bVar19 = (Function_137(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_137(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_135(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_132(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_131(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_130(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_129(), &Var9);
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

var Function_129() //Position: 0x37D7 / 14295
{
	int iVar0;
	
	return iVar0;
}

var Function_130(int iParam0) //Position: 0x37DF / 14303
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_131(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x37F0 / 14320
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_65("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_65("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_65("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_132(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x38E5 / 14565
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_134(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_133(Function_134(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_133(int iParam0, int iParam1) //Position: 0x394A / 14666
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_134(int iParam0, bool bParam1) //Position: 0x395C / 14684
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_135(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x396E / 14702
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
	if (((Function_136(iParam0) != 19 || Function_136(iParam0) != 17) || Function_136(iParam0) != 10) || Function_136(iParam0) != 9)
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

int Function_136(int iParam0) //Position: 0x3A9E / 15006
{
	return Global_35278[iParam020].f_48;
}

float Function_137(int iParam0) //Position: 0x3AAD / 15021
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_138(int iParam0) //Position: 0x3AE6 / 15078
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_139(int iParam0) //Position: 0x3B23 / 15139
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

int Function_140(int iParam0, bool bParam1, bool bParam2) //Position: 0x3CBD / 15549
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

void Function_141(var uParam0, bool bParam1) //Position: 0x3ED7 / 16087
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (uParam0[iVar09]->f_20)
		{
			if (!IS_ACTOR_RIDING(bParam1))
			{
				uParam0[iVar09]->f_32 = 0;
			}
		}
		iVar0++;
	}
	return;
}

void Function_142(bool bParam0) //Position: 0x3F0D / 16141
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = GET_LAST_HIT_WEAPON(bParam0);
	iVar1 = Function_227(4);
	bVar2 = Function_95((*&Global_84364 + 712)[iVar1], 1);
	if (bVar2)
	{
		switch (iVar0)
		{
			case 0x0000001A:
				switch (iVar1)
				{
					case 0x00000001:
						Function_226(&Global_50170, 102, 10, 50.0f, 0, 1);
						Function_226(&Global_50170, 103, 50, 250.0f, 1, 1);
						Function_226(&Global_50170, 104, 250, 500.0f, 5, 1);
						break;
					
					case 0x00000002:
						Function_226(&Global_50170, 116, 10, 50.0f, 0, 1);
						Function_226(&Global_50170, 117, 50, 250.0f, 1, 1);
						Function_226(&Global_50170, 118, 250, 500.0f, 5, 1);
						break;
				}
				break;
			
			case 0x0000001C:
				switch (iVar1)
				{
					case 0x00000004:
						Function_226(&Global_50170, 144, 10, 50.0f, 0, 1);
						Function_226(&Global_50170, 145, 50, 250.0f, 1, 1);
						Function_226(&Global_50170, 146, 250, 500.0f, 5, 1);
						break;
				}
				break;
			}
	}
	return;
}

void Function_143(int iParam0) //Position: 0x400A / 16394
{
	int iVar0;
	bool bVar1;
	
	iVar0 = Function_227(4);
	bVar1 = Function_95((*&Global_84364 + 712)[iVar0], 1);
	if (bVar1)
	{
		switch (iVar0)
		{
			case 0x00000000:
				Function_226(&Global_50170, 83, 50, 50.0f, 0, 1);
				Function_226(&Global_50170, 84, 250, 250.0f, 1, 1);
				Function_226(&Global_50170, 85, 1000, 500.0f, 5, 1);
				break;
			
			case 0x00000001:
				Function_226(&Global_50170, 97, 50, 50.0f, 0, 1);
				Function_226(&Global_50170, 98, 250, 250.0f, 1, 1);
				Function_226(&Global_50170, 99, 1000, 500.0f, 5, 1);
				break;
			
			case 0x00000002:
				Function_226(&Global_50170, 111, 50, 50.0f, 0, 1);
				Function_226(&Global_50170, 112, 250, 250.0f, 1, 1);
				Function_226(&Global_50170, 113, 1000, 500.0f, 5, 1);
				break;
			
			case 0x00000003:
				Function_226(&Global_50170, 125, 50, 50.0f, 0, 1);
				Function_226(&Global_50170, 126, 250, 250.0f, 1, 1);
				Function_226(&Global_50170, 127, 1000, 500.0f, 5, 1);
				break;
			
			case 0x00000004:
				Function_226(&Global_50170, 139, 50, 50.0f, 0, 1);
				Function_226(&Global_50170, 140, 250, 250.0f, 1, 1);
				Function_226(&Global_50170, 141, 1000, 500.0f, 5, 1);
				break;
			
			case 0x00000005:
				Function_226(&Global_50170, 153, 50, 50.0f, 0, 1);
				Function_226(&Global_50170, 154, 250, 250.0f, 1, 1);
				Function_226(&Global_50170, 155, 1000, 500.0f, 5, 1);
				break;
			}
	}
	return;
}

void Function_144(bool bParam0) //Position: 0x4195 / 16789
{
	if (!NET_GET_KILL_EFFECT_ON())
	{
		return;
	}
	if (bParam0)
	{
		SET_SHOCK_AMPLITUDE(1.0f);
		SET_SHOCK_SPEED(9.0f);
		FIRE_SHOCK(0,4f);
		PLAY_SOUND_FRONTEND("DEATH_EFFECT_HS_MASTER");
	}
	else
	{
		SET_SHOCK_AMPLITUDE(0,5f);
		SET_SHOCK_SPEED(9.0f);
		FIRE_SHOCK(0,5f);
		PLAY_SOUND_FRONTEND("DEATH_EFFECT_MASTER");
	}
	return;
}

void Function_145() //Position: 0x420C / 16908
{
	Function_100();
	Function_148();
	Function_146();
	return;
}

void Function_146() //Position: 0x421B / 16923
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_147();
	return;
}

void Function_147() //Position: 0x424F / 16975
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_148() //Position: 0x4260 / 16992
{
	Function_149(&(Global_50170[522]));
	Function_149(&(Global_50170[622]));
	Function_149(&(Global_50170[722]));
	Function_149(&(Global_50170[822]));
	Function_149(&(Global_50170[922]));
	Function_149(&(Global_50170[1022]));
	Function_149(&(Global_50170[1122]));
	return;
}

void Function_149(bool bParam0) //Position: 0x42A9 / 17065
{
	Global_56092[*bParam0] = 0;
	Function_150(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_150(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x42C3 / 17091
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_153(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_152(iParam0), 6);
		stradd(&cVar0, "_info", 24);
		memcpy(&cVar6, StackVal, *(&Global_50170[iParam022] + 16), 6);
		stradd(&cVar6, "_num", 24);
		if (bParam3 >= 4294967295)
		{
			UI_SET_STRING(&cVar6, INT_TO_STRING(bParam3));
		}
		if (bParam4 >= 4294967295)
		{
			strcpy(&cVar12, "PVP_num2", 16);
			UI_SET_STRING(&cVar12, INT_TO_STRING(bParam4));
		}
		if (bParam5 >= 4294967295)
		{
			strcpy(&cVar16, "PVP_num3", 16);
			UI_SET_STRING(&cVar16, INT_TO_STRING(bParam5));
		}
		APPEND_JOURNAL_ENTRY_DETAIL(Function_153(iParam0), &cVar0, 2, 2, true);
		Function_151(Function_153(iParam0), 0);
	}
}

void Function_151(bool bParam0, bool bParam1) //Position: 0x4371 / 17265
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

struct<16> Function_152(int iParam0) //Position: 0x4396 / 17302
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_153(bool bParam0) //Position: 0x43CA / 17354
{
	return Global_50170[bParam022].f_24;
}

void Function_154(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0x43D9 / 17369
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_LAST_HIT_FLAGS(bParam0);
	bVar1 = false;
	if (bParam4)
	{
		bVar1 = ANIMAL_ACTOR_GET_SPECIES(bParam0);
	}
	if (Global_30842[46])
	{
		Function_155(iVar0, 4);
		PRINTNL();
	}
	if (DECOR_CHECK_EXIST(bParam0, "Drowned") || Function_95(iVar0, 8192))
	{
		Function_219(StackVal, StackVal, 3, vParam1, 1, 4294967295, bVar1, 0, 0);
	}
	else if (DECOR_CHECK_EXIST(bParam0, "BledOut"))
	{
		Function_219(StackVal, StackVal, 3, vParam1, 5, 4294967295, bVar1, 0, 0);
	}
	else if (Function_95(iVar0, 32768))
	{
		Function_219(StackVal, StackVal, 3, vParam1, 3, 4294967295, bVar1, 0, 0);
	}
	else if (Function_95(iVar0, 8))
	{
		Function_219(StackVal, StackVal, 3, vParam1, 2, 4294967295, bVar1, 0, 0);
	}
	else if (Function_95(iVar0, 16))
	{
		Function_219(StackVal, StackVal, 3, vParam1, 4, 4294967295, bVar1, 0, 0);
	}
	else
	{
		Function_219(StackVal, StackVal, 3, vParam1, 0, 4294967295, bVar1, 0, 0);
	}
}

void Function_155(int iParam0, int iParam1) //Position: 0x44BA / 17594
{
	bool bVar0;
	
	bVar0 = 31;
	while (bVar0 > 0)
	{
		if (Function_95(iParam0, Function_31(bVar0)))
		{
			PRINTINT(true);
		}
		else
		{
			PRINTINT(false);
		}
		if ((bVar0 % iParam1) != 0 && bVar0 < 0)
		{
			PRINTSTRING(" ");
		}
		bVar0 = (bVar0 + 4294967295);
	}
	return;
}

void Function_156(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4501 / 17665
{
	if (Function_342(8192))
	{
		Function_167(bParam0, bParam1, bParam2);
	}
	else if (Function_342(16384))
	{
		if (bParam2)
		{
			UI_ENTER("XpHud");
		}
		Function_160(bParam0, bParam2);
	}
	else if (Global_3403)
	{
		if (bParam2)
		{
			UI_ENTER("XpHud");
			Function_159();
			if (Function_158(bParam0))
			{
				Function_157(bParam0, bParam2);
			}
			else
			{
				Function_125(1.0f, 0);
			}
		}
	}
	return;
}

void Function_157(var uParam0, bool bParam1) //Position: 0x4570 / 17776
{
	bool bVar0;
	
	uParam0 = uParam0;
	if (bParam1)
	{
		bVar0 = false;
		switch (StackVal)
		{
			case 0x00000000:
			case 0x00000001:
			case 0x00000002:
				bVar0 = false;
				break;
			
			case 0x00000003:
				bVar0 = 7;
				break;
			
			case 0x00000004:
			case 0x00000005:
				bVar0 = 10;
				break;
			
			case 0x00000006:
				bVar0 = 12;
				break;
			
			case 0x00000007:
			case 0x00000008:
				bVar0 = 14;
				break;
			
			case 0x00000009:
				bVar0 = 15;
				break;
			
			default:
				if (StackVal <= 15)
				{
					bVar0 = 17;
				}
				else
				{
					bVar0 = 20;
				}
				break;
		}
		if (bVar0 >= 0)
		{
			Function_125(TO_FLOAT(bVar0), "xp_wanted_combo");
		}
		else
		{
			Function_125(5.0f, 0);
		}
	}
	else
	{
		Function_125(1.0f, 0);
	}
	return;
}

bool Function_158(bool bParam0) //Position: 0x463D / 17981
{
	int iVar0;
	
	iVar0 = GET_ACTOR_FACTION(bParam0);
	if (iVar0 != 8 || iVar0 != 10)
	{
		return 1;
	}
	return 0;
}

void Function_159() //Position: 0x465B / 18011
{
	float fVar0;
	struct<5> Var1;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	if (StackVal <= 998)
	{
		if ((fVar0 - Global_76939) >= 10.0f || Global_76939 != 0.0f)
		{
			Global_76939.f_8 = StackVal + 1;
			if (StackVal <= Global_76939.f_12)
			{
				Global_76939.f_12 = StackVal;
			}
		}
		if (StackVal > 2)
		{
			UI_SHOW("XPMultiplier");
			UI_SHOW("XPComboTimer");
			UI_ANIM_SETUP("XpComboSpin", 0,2f, 180, false);
			UI_ANIM_RESTART("XpComboSpin");
			Var1.f_4 = (StackVal + Function_134((4294966996 - 2), 30) * 50);
			PLAY_SOUND_FRONTEND_INITPARAMS("HUD_MP_KILL_RISER_MASTER", &Var1);
			Function_96(&Global_76939 + 4, 3);
		}
	}
	Function_121(fVar0);
	return;
}

void Function_160(bool bParam0, bool bParam1) //Position: 0x4750 / 18256
{
	bool bVar0;
	int iVar1;
	
	if (bParam1)
	{
		bVar0 = false;
		if (DECOR_GET_INT_VERBOSE(bParam0, "nKillBonus", &bVar0))
		{
			if (bVar0 < 0)
			{
				return;
			}
			iVar1 = DECOR_GET_STRING_HASH(bParam0, "KillBonusClass");
			if (iVar1 != 0)
			{
				Function_161(bVar0, "", iVar1);
			}
			else
			{
				Function_161(bVar0, "XP_class_special", 0);
			}
		}
		else
		{
			Function_161(10, 0, 0);
		}
		Function_159();
	}
	else if (GET_DAMAGE_BY_LOCAL_PLAYER(bParam0) < 0.0f)
	{
		Function_161(2, 0, 0);
	}
	return;
}

void Function_161(bool bParam0, bool bParam1, int iParam2) //Position: 0x47DF / 18399
{
	Function_164(bParam0);
	if (iParam2 != 0)
	{
		UNK_0xA6403262(Function_162(), UI_GET_STRING_BY_HASH(iParam2));
	}
	else
	{
		if (!IS_STRING_VALID(bParam1))
		{
			bParam1 = "Common_Null";
		}
		UNK_0xA6403262(Function_162(), UI_GET_STRING(bParam1));
	}
	return;
}

int Function_162() //Position: 0x4822 / 18466
{
	return Function_163(0);
}

int Function_163(int iParam0) //Position: 0x482C / 18476
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_164(int iParam0) //Position: 0x483C / 18492
{
	Function_165(0, iParam0);
	return;
}

void Function_165(var uParam0, int iParam1) //Position: 0x4848 / 18504
{
	Function_166(uParam0, (Function_163(uParam0) + iParam1));
	return;
}

void Function_166(int iParam0, int iParam1) //Position: 0x485B / 18523
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_167(bool bParam0, var uParam1, bool bParam2) //Position: 0x4884 / 18564
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	
	bVar0 = false;
	if (DECOR_GET_INT_VERBOSE(bParam0, "nKillBonus", &bVar0))
	{
		if (bVar0 < 0)
		{
			return;
		}
	}
	if (bParam2)
	{
		bVar1 = false;
		switch (StackVal)
		{
			case 0x00000000:
				bVar1 = false;
				break;
			
			case 0x00000001:
				bVar1 = 5;
				break;
			
			case 0x00000002:
				bVar1 = 5;
				Function_168(StackVal + 1);
				break;
			
			case 0x00000003:
				bVar1 = 10;
				break;
			
			case 0x00000004:
				bVar1 = 10;
				Function_168(StackVal + 1);
				break;
			
			case 0x00000005:
				bVar1 = 15;
				break;
			
			case 0x00000006:
				bVar1 = 20;
				Function_168(StackVal + 1);
				break;
			
			case 0x00000007:
				bVar1 = 25;
				break;
			
			case 0x00000008:
				bVar1 = 30;
				break;
			
			case 0x00000009:
				bVar1 = 40;
				break;
			
			default:
				if (StackVal <= 15)
				{
					bVar1 = 50;
				}
				else
				{
					bVar1 = 100;
				}
				break;
		}
		if (bVar1 >= 0)
		{
			Function_161(bVar1, "xp_combo", 0);
		}
		Function_159();
		if (bVar0 >= 0)
		{
			iVar2 = DECOR_GET_STRING_HASH(bParam0, "KillBonusClass");
			if (iVar2 != 0)
			{
				Function_161(bVar0, "", iVar2);
			}
			else
			{
				Function_161(bVar0, "XP_class_special", 0);
			}
		}
	}
	fVar3 = GET_DAMAGE_BY_LOCAL_PLAYER(bParam0);
	bVar4 = ROUND((fVar3 / 5.0f)) * 5;
	if (bVar4 >= 0)
	{
		if (uParam1 && bParam2)
		{
			UI_SET_STRING_FORMAT("Generic_Dbuffer32_0", UI_GET_STRING("XP_Class_headshot"), I2STR(CEIL(2.0f)), I2STR(bVar4), 0);
			Function_161((bVar4 * CEIL(2.0f)), "Generic_Dbuffer32_0", 0);
		}
		else
		{
			Function_161(bVar4, 0, 0);
		}
	}
	return;
}

void Function_168(bool bParam0) //Position: 0x4A62 / 19042
{
	int iVar0;
	bool bVar1;
	
	iVar0 = Function_227(4);
	bVar1 = Function_95((*&Global_84364 + 712)[iVar0], 1);
	if (bVar1)
	{
		switch (iVar0)
		{
			case 0x00000000:
				Function_169(&Global_50170, 80, bParam0, 3, 50.0f, 0);
				Function_169(&Global_50170, 81, bParam0, 5, 250.0f, 1);
				Function_169(&Global_50170, 82, bParam0, 7, 500.0f, 5);
				break;
			
			case 0x00000001:
				Function_169(&Global_50170, 94, bParam0, 3, 50.0f, 0);
				Function_169(&Global_50170, 95, bParam0, 5, 250.0f, 1);
				Function_169(&Global_50170, 96, bParam0, 7, 500.0f, 5);
				break;
			
			case 0x00000002:
				Function_169(&Global_50170, 108, bParam0, 3, 50.0f, 0);
				Function_169(&Global_50170, 109, bParam0, 5, 250.0f, 1);
				Function_169(&Global_50170, 110, bParam0, 7, 500.0f, 5);
				break;
			
			case 0x00000003:
				Function_169(&Global_50170, 122, bParam0, 3, 50.0f, 0);
				Function_169(&Global_50170, 123, bParam0, 5, 250.0f, 1);
				Function_169(&Global_50170, 124, bParam0, 7, 500.0f, 5);
				break;
			
			case 0x00000004:
				Function_169(&Global_50170, 136, bParam0, 3, 50.0f, 0);
				Function_169(&Global_50170, 137, bParam0, 5, 250.0f, 1);
				Function_169(&Global_50170, 138, bParam0, 7, 500.0f, 5);
				break;
			
			case 0x00000005:
				Function_169(&Global_50170, 150, bParam0, 3, 50.0f, 0);
				Function_169(&Global_50170, 151, bParam0, 5, 250.0f, 1);
				Function_169(&Global_50170, 152, bParam0, 7, 500.0f, 5);
				break;
			}
	}
	return;
}

void Function_169(var uParam0, int iParam1, var uParam2, int iParam3, float fParam4, int iParam5) //Position: 0x4BF3 / 19443
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_170(iParam1, uParam0[iParam122] + 4, uParam0[iParam122] + 8, uParam0[iParam122] + 12, uParam2, iParam3, fParam4, iParam5, 0);
			break;
	}
}

void Function_170(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8) //Position: 0x4C37 / 19511
{
	float fVar0;
	var uVar1;
	
	fVar0 = Function_217(iParam0);
	if (bParam4 > iParam5)
	{
		uVar1 = Function_216(iParam0);
		Function_172(iParam0, uParam1, uParam2, uParam3, uParam6, uParam7, uVar1);
	}
	else if (bParam4 >= 4294967295)
	{
		*uParam3 = TO_FLOAT(bParam4);
		*uParam3 = (*uParam3 / IntToFloat(iParam5));
		if (*uParam3 == fVar0)
		{
			Function_150(iParam0, *uParam3, (uParam8 && Function_171(iParam0, 4)), bParam4, 4294967295, 4294967295);
		}
	}
}

bool Function_171(int iParam0, int iParam1) //Position: 0x4C9E / 19614
{
	return Function_95(Global_50170[iParam022].f_32, iParam1);
}

void Function_172(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, bool bParam6) //Position: 0x4CB2 / 19634
{
	var uVar0;
	
	*uParam2 = 10;
	*uParam1 = 2;
	*uParam3 = 1.0f;
	if (!IS_STRING_VALID(bParam6))
	{
		bParam6 = "challenge_01_128";
	}
	Function_211(&Global_50170[iParam022] + 16, CEIL(bParam4), bParam6);
	if (iParam5 != 5)
	{
		uVar0 = iParam0 + 1;
		Function_207(uVar0, 0, 0, 0);
		CLEAR_JOURNAL_ENTRY(Function_153(iParam0));
		REMOVE_JOURNAL_ENTRY(Function_153(iParam0), false);
		Function_206(iParam0, 4);
	}
	else
	{
		Function_202(iParam0, 0);
	}
	Function_173();
}

void Function_173() //Position: 0x4D2F / 19759
{
	if (!Function_75())
	{
		if (!Function_201(1, 3, 1, 1))
		{
			Function_193(1);
			Function_192(1, 8);
		}
	}
	else
	{
		Function_174(0);
	}
	return;
}

void Function_174(bool bParam0) //Position: 0x4D58 / 19800
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", 0, 0, false, 0);
	Function_191(2);
	if (bParam0)
	{
		Function_191(1);
	}
	else
	{
		Function_190(1);
	}
	Function_175();
	return;
}

void Function_175() //Position: 0x4DE1 / 19937
{
	Function_188();
	Function_187();
	Function_187();
	Function_186();
	Function_186();
	Function_185();
	Function_185();
	Function_182();
	Function_182();
	if (!Function_75())
	{
		Function_180();
		Function_179();
		Function_178();
		Function_177();
	}
	Function_176();
	return;
}

void Function_176() //Position: 0x4E14 / 19988
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

void Function_177() //Position: 0x4F1A / 20250
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

void Function_178() //Position: 0x4F4D / 20301
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

void Function_179() //Position: 0x50DB / 20699
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

void Function_180() //Position: 0x528F / 21135
{
	Function_181(&Global_28260, 1, 0);
	return;
}

void Function_181(int iParam0, bool bParam1, var uParam2) //Position: 0x529D / 21149
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
	
	bVar0 = Function_112();
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

struct<8> Function_182() //Position: 0x548E / 21646
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
				iVar2 = ((Function_184((50 + iVar4)) + Function_184((183 + iVar4))) + Function_184((90 + iVar4)));
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
	Function_183(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_183(int iParam0, bool bParam1, bool bParam2) //Position: 0x5529 / 21801
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
		Function_140(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_139(iParam0);
	if (bParam2)
	{
		Function_128(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_184(bool bParam0) //Position: 0x57C4 / 22468
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_185() //Position: 0x5805 / 22533
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
		iVar2 = ((Function_184((50 + iVar3) + 15) + Function_184((183 + iVar3) + 15)) + Function_184((90 + iVar3) + 15));
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
	Function_183(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_186() //Position: 0x588E / 22670
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
			iVar2 = ((Function_184((50 + iVar3) + 8) + Function_184((183 + iVar3) + 8)) + Function_184((90 + iVar3) + 8));
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
	Function_183(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_187() //Position: 0x5925 / 22821
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
		iVar2 = ((Function_184((50 + iVar3)) + Function_184((183 + iVar3))) + Function_184((90 + iVar3)));
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
	Function_183(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_188() //Position: 0x59A4 / 22948
{
	Function_189(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_183(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_189(int iParam0, bool bParam1, int iParam2) //Position: 0x59CA / 22986
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
	Function_140(iParam0, bParam1, 1);
	Function_139(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_128(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_190(int iParam0) //Position: 0x5BD4 / 23508
{
	Function_85(&Global_79338, iParam0);
	return;
}

void Function_191(int iParam0) //Position: 0x5BE3 / 23523
{
	Function_87(&Global_79338, iParam0);
	return;
}

void Function_192(int iParam0, int iParam1) //Position: 0x5BF2 / 23538
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = iParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_75())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_193(bool bParam0) //Position: 0x5C34 / 23604
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_194();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_175();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_93(&Global_63095, 1);
		Function_93(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_194() //Position: 0x5C85 / 23685
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_196(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_196(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_195(StackVal, StackVal, vVar0))
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

bool Function_195(vector3 vParam0) //Position: 0x5D26 / 23846
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_196(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5D3E / 23870
{
	int iVar0;
	
	iVar0 = Function_199(uParam2, uParam3);
	if (Function_198(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_96(&Global_63095, 1);
			Function_93(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_96(&Global_63095, 2);
			Function_93(&Global_63095, 1);
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
		Function_96(&Global_63095, 2);
		Function_93(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_197();
	return StackVal, StackVal, Function_197();
}

vector3 Function_197() //Position: 0x5E25 / 24101
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_198(int iParam0) //Position: 0x5E2E / 24110
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_199(bool bParam0, bool bParam1) //Position: 0x5E44 / 24132
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
				fVar2 = Function_200(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_200(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_198(bVar0) && !bParam1)
	{
		bVar0 = Function_199(bParam0, 1);
	}
	return bVar0;
}

float Function_200(vector3 vParam0, vector3 vParam3) //Position: 0x5F0B / 24331
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_201(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x5F28 / 24360
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

void Function_202(bool bParam0, int iParam1) //Position: 0x5FCC / 24524
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (bParam0 <= 58 && bParam0 >= 186) != 10) && !Function_205(bParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_153(bParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_204(bParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_152(bParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_203(bParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_153(bParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_153(bParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_153(bParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_203(int iParam0) //Position: 0x604E / 24654
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_152(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_204(int iParam0) //Position: 0x606E / 24686
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_205(int iParam0) //Position: 0x609F / 24735
{
	switch (iParam0)
	{
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000044:
		case 0x00000048:
		case 0x0000004C:
		case 0x0000004F:
		case 0x00000052:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
		case 0x0000005A:
		case 0x0000005D:
		case 0x00000060:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000068:
		case 0x0000006B:
		case 0x0000006E:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000076:
		case 0x00000079:
		case 0x0000007C:
		case 0x0000007F:
		case 0x00000080:
		case 0x00000081:
		case 0x00000084:
		case 0x00000087:
		case 0x0000008A:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000092:
		case 0x00000095:
		case 0x00000098:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x000000A0:
		case 0x000000A1:
		case 0x000000A2:
		case 0x000000A3:
		case 0x000000A4:
		case 0x000000A5:
		case 0x000000A6:
		case 0x000000A7:
		case 0x000000A8:
		case 0x000000AB:
		case 0x000000AE:
		case 0x000000B1:
		case 0x000000B4:
		case 0x000000B7:
		case 0x000000BA:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void Function_206(int iParam0, int iParam1) //Position: 0x621D / 25117
{
	Function_93(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_207(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6231 / 25137
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_205(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_153(iParam0));
	if ((bParam3 && Function_171(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_153(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_204(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_152(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_210(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_209(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_203(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_153(iParam0), &Var7, 0, 2, Function_171(iParam0, 4));
			if (!bParam3)
			{
				Function_208(iParam0, 4);
			}
		}
	}
}

void Function_208(int iParam0, int iParam1) //Position: 0x62EE / 25326
{
	Function_96(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_209(int iParam0) //Position: 0x6302 / 25346
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_210(int iParam0) //Position: 0x6330 / 25392
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_211(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6360 / 25440
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_47();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_215(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_214(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_213(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_212(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_215(), iVar1 + 1);
	return;
}

struct<16> Function_212(int iParam0) //Position: 0x63D2 / 25554
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_213(int iParam0) //Position: 0x63F3 / 25587
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_214(int iParam0) //Position: 0x6414 / 25620
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_215() //Position: 0x6435 / 25653
{
	return "CQueue_Count";
}

var Function_216(int iParam0) //Position: 0x644A / 25674
{
	int iVar0;
	
	iVar0 = "COOP_icon_128";
	switch (iParam0)
	{
		case 0x0000004D:
		case 0x0000004E:
		case 0x0000004F:
		case 0x00000050:
		case 0x00000051:
		case 0x00000052:
		case 0x00000053:
		case 0x00000054:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
		case 0x00000058:
		case 0x00000059:
		case 0x0000005A:
		case 0x000000A9:
		case 0x000000AA:
		case 0x000000AB:
			iVar0 = "SC_AA_Pikes_Icon_128";
			break;
		
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
		case 0x00000061:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000066:
		case 0x00000067:
		case 0x00000068:
		case 0x000000AC:
		case 0x000000AD:
		case 0x000000AE:
			iVar0 = "SC_AA_Mercer_Icon_128";
			break;
		
		case 0x00000069:
		case 0x0000006A:
		case 0x0000006B:
		case 0x0000006C:
		case 0x0000006D:
		case 0x0000006E:
		case 0x0000006F:
		case 0x00000070:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000074:
		case 0x00000075:
		case 0x00000076:
		case 0x000000AF:
		case 0x000000B0:
		case 0x000000B1:
			iVar0 = "SC_AA_Tesoro_Icon_128";
			break;
		
		case 0x00000077:
		case 0x00000078:
		case 0x00000079:
		case 0x0000007A:
		case 0x0000007B:
		case 0x0000007C:
		case 0x0000007D:
		case 0x0000007E:
		case 0x0000007F:
		case 0x00000080:
		case 0x00000081:
		case 0x00000082:
		case 0x00000083:
		case 0x00000084:
		case 0x000000B2:
		case 0x000000B3:
		case 0x000000B4:
			iVar0 = "SC_AA_Gaptooth_Icon_128";
			break;
		
		case 0x00000085:
		case 0x00000086:
		case 0x00000087:
		case 0x00000088:
		case 0x00000089:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000090:
		case 0x00000091:
		case 0x00000092:
		case 0x000000B5:
		case 0x000000B6:
		case 0x000000B7:
			iVar0 = "Coop_advanced_icon_128";
			break;
		
		case 0x00000093:
		case 0x00000094:
		case 0x00000095:
		case 0x00000096:
		case 0x00000097:
		case 0x00000098:
		case 0x00000099:
		case 0x0000009A:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x0000009E:
		case 0x0000009F:
		case 0x000000A0:
		case 0x000000B8:
		case 0x000000B9:
		case 0x000000BA:
			iVar0 = "SC_AA_Nosalida_Icon_128";
			break;
		
		default:
			iVar0 = "COOP_icon_128";
			break;
	}
	return iVar0;
}

float Function_217(int iParam0) //Position: 0x6796 / 26518
{
	return Global_50170[iParam022].f_12;
}

void Function_218() //Position: 0x67A5 / 26533
{
	PLAY_SOUND_FRONTEND("MULTIPLAYER_THUNK_MASTER");
	FLASH_SET_BOOL("mp_hud", "Reticle.Hit", 1);
	FLASH_SET_INT("mp_hud", "Reticle.Refresh", true);
	FLASH_SET_INT("mp_hud", "Refresh", true);
	return;
}

void Function_219(int iParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x681D / 26653
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = 4294967295;
	if (NET_IS_IN_SESSION())
	{
		bVar1 = GET_LOCAL_SLOT();
		if (IS_SLOT_VALID(bVar1))
		{
			bVar0 = bVar1;
		}
	}
	Function_220(StackVal, StackVal, bVar0, bParam4, iParam0, vParam1, iParam5, bParam6, bParam7, bParam8);
}

void Function_220(int iParam0, var uParam1, int iParam2, vector3 vParam3, var uParam6, int iParam7, var uParam8, bool bParam9) //Position: 0x6854 / 26708
{
	struct<11> Var0;
	bool bVar11;
	
	Var0 = iParam0;
	Var0.f_4 = uParam1;
	Var0.f_12 = uParam6;
	Var0.f_28 = uParam8;
	Var0.f_8 = iParam2;
	*(&Var0 + 16) = { StackVal, StackVal, vParam3 };
	Var0.f_32 = iParam7;
	if (iParam7 == 0)
	{
		bVar11 = Function_112();
		switch (iParam2)
		{
			case 0x00000005:
			case 0x00000000:
			case 0x00000006:
			case 0x00000004:
			case 0x00000001:
			case 0x00000002:
			case 0x00000003:
				Var0.f_40 = Global_78480.f_128;
				if (IS_ACTOR_VALID(bVar11))
				{
					if (Function_222(bVar11))
					{
						Function_87(&Var0 + 40, 1048576);
					}
					if (IS_ACTOR_RIDING(bVar11))
					{
						Function_87(&Var0 + 40, 2097152);
					}
					if (IS_ACTOR_USING_COVER(bVar11))
					{
						Function_87(&Var0 + 40, 8388608);
					}
				}
				*(&Global_78617 + 2604) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0 };
				Function_221(&Global_78617 + 2648);
				break;
			
			default:
				break;
			}
	}
	if (bParam9)
	{
		Function_87(&Var0 + 40, 0x1000000);
	}
	if (iParam0 >= 4294967295)
	{
		NET_SCRIPTMSG_SEND(2, 6, &Var0, 11, 1);
	}
}

void Function_221(int iParam0) //Position: 0x6959 / 26969
{
	*iParam0++;
	return;
}

bool Function_222(bool bParam0) //Position: 0x6967 / 26983
{
	struct<5> Var0;
	
	if (Function_223(bParam0))
	{
		return 0;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam0)))
	{
		return 0;
	}
	if (IS_ACTOR_USING_LEDGE(bParam0))
	{
		if (GET_ACTOR_VELOCITY(bParam0, &Var0))
		{
			if (StackVal > -2.0f)
			{
				return 1;
			}
		}
		return 0;
	}
	return !IS_ACTOR_ON_LADDER(bParam0);
}

bool Function_223(bool bParam0) //Position: 0x69AD / 27053
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_ON_FOOT(bParam0))
	{
		return IS_ACTOR_ON_GROUND(bParam0);
	}
	bVar0 = GET_MOUNT(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		return IS_ACTOR_ON_GROUND(bVar0);
	}
	bVar0 = GET_VEHICLE(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		return IS_ACTOR_ON_GROUND(bVar0);
	}
	return 0;
}

void Function_224(int iParam0, int iParam1) //Position: 0x69FD / 27133
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

void Function_225() //Position: 0x6A22 / 27170
{
	Function_121(3212836864);
	if (Function_342(8192))
	{
		Function_161(20, "nxp_disarm", 0);
	}
	else if (Function_342(16384))
	{
		Function_161(5, "nxp_disarm", 0);
	}
	return;
}

void Function_226(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5) //Position: 0x6A68 / 27240
{
	bool bVar0;
	
	switch (StackVal)
	{
		case 0x00000000:
			uParam0[iParam122]->f_28++;
			bVar0 = uParam0[iParam122]->f_28;
			Function_170(iParam1, uParam0[iParam122] + 4, uParam0[iParam122] + 8, uParam0[iParam122] + 12, bVar0, iParam2, fParam3, iParam4, iParam5);
			break;
	}
}

int Function_227(int iParam0) //Position: 0x6AC9 / 27337
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

void Function_228() //Position: 0x6AE9 / 27369
{
	Function_121(3212836864);
	if (Function_342(8192))
	{
		Function_161(10, "xp_hatshot", 0);
	}
	else if (Function_342(16384))
	{
		Function_161(2, "xp_hatshot", 0);
	}
	return;
}

bool Function_229() //Position: 0x6B31 / 27441
{
	if (Function_342(2048))
	{
		if ((IntToFloat(ABS(CEIL(GET_CURRENT_UNWARPED_TIME()))) - Global_78617.f_56) >= 3.0f)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool Function_230() //Position: 0x6B5B / 27483
{
	return UNK_0xA80C6DE6(&Global_78578);
}

bool Function_231() //Position: 0x6B68 / 27496
{
	return Function_10(32);
}

bool Function_232(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x6B73 / 27507
{
	var uVar0;
	
	if (bParam1)
	{
		Function_87(&uVar0, 1);
	}
	if (bParam2)
	{
		Function_87(&uVar0, 2);
	}
	if (bParam3)
	{
		Function_87(&uVar0, 4);
	}
	if (bParam4)
	{
		Function_87(&uVar0, 8);
	}
	if (bParam5)
	{
		Function_87(&uVar0, 1024);
	}
	if (bParam7)
	{
		Function_87(&uVar0, 16);
	}
	if (bParam8)
	{
		Function_87(&uVar0, 32);
	}
	if (bParam6)
	{
		Function_87(&uVar0, 1048576);
	}
	return Function_233(uParam0, uVar0);
}

int Function_233(bool bParam0, int iParam1) //Position: 0x6BE2 / 27618
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_234(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_234(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_234(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_234(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_234(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_234(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_234(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_234(iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(bParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_234(var uParam0, int iParam1) //Position: 0x6CBB / 27835
{
	return (uParam0 && iParam1) == 0;
}

void Function_235(bool bParam0) //Position: 0x6CC8 / 27848
{
	if (!IS_ITERATOR_VALID(Global_26149))
	{
		if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("Formations")))
		{
			Global_26149 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("Formations"));
		}
	}
	if (!IS_ITERATOR_VALID(Global_26149))
	{
		return;
	}
	ITERATE_EVERYWHERE(Global_26149);
	ITERATE_ON_OBJECT_TYPE(Global_26149, 3);
	if (!bParam0 != "")
	{
		ITERATE_IN_SET(Global_26149, bParam0);
	}
	else
	{
		ITERATE_IN_LAYOUT(Global_26149, GET_EVENT_LAYOUT());
	}
	return;
}

void Function_236() //Position: 0x6D39 / 27961
{
	bool bVar0;
	
	if (Global_83864.f_1280)
	{
		if (Function_73())
		{
			bVar0 = Global_83864.f_1260 > Global_83864.f_1264;
		}
		if (Global_83864.f_1268 == 4294967295)
		{
			Global_83864.f_1268 = (Global_83864.f_1264 - 1);
		}
		Function_315(!Function_73(), 0);
		Global_83864.f_1280 = 0;
	}
	Function_264();
	Function_259();
	Function_237(bVar0);
	return;
}

void Function_237(bool bParam0) //Position: 0x6D96 / 28054
{
	bool bVar0;
	struct<8> Var1;
	float fVar9;
	
	if (Global_83864.f_1272)
	{
		if (!Function_342(524288))
		{
			if (bParam0)
			{
				Global_83864.f_1272 = 0;
				return;
			}
		}
		if (Function_257())
		{
			if (!Function_256(&bLocal_454))
			{
				if (Function_342(524288))
				{
					UI_EXIT("MPReward");
				}
				Function_255(&bLocal_454, -2.0f);
				Function_254(&bLocal_454);
			}
		}
		else
		{
			if (Function_256(&bLocal_454))
			{
				if (Function_342(524288))
				{
					UI_ENTER("MPReward");
				}
				bVar0 = Function_252(Global_83864.f_1264 + 1);
				UI_SET_TEXT("MPRewardItem.s1", bVar0);
				UI_REFRESH("MPRewardTitle");
				Function_251(&bLocal_454);
			}
			if (Function_249(&bLocal_454, 0.0f) || !Function_248(&bLocal_454))
			{
				fVar9 = -2.0f;
				switch (iLocal_457)
				{
					case 0x00000000:
						Function_246(Global_83864.f_1264, 0);
						Function_255(&bLocal_454, fVar9);
						Function_245(524288);
						UNK_0x8DEC3E03("left");
						if (Global_83864.f_1268 >= Global_83864.f_1264)
						{
							Global_83864.f_1268 = 0;
						}
						else if (Global_83864.f_1268 == 49)
						{
							Global_83864.f_1268 = 0;
						}
						else if (Global_83864.f_1268 == 4294967295)
						{
							Global_83864.f_1268 = Function_133(0, (Global_83864.f_1264 - 1));
						}
						iLocal_463 = Global_83864.f_1268 + 1;
						iLocal_457 = 1;
						break;
					
					case 0x00000001:
						if (StackVal != 4294967295)
						{
							Function_255(&bLocal_454, fVar9);
							Function_244(StackVal, GET_WEAPON_DISPLAY_NAME("XP_Weapon_Unlock"));
						}
						if (iLocal_463 <= Global_83864.f_1264)
						{
							iLocal_463++;
						}
						else
						{
							iLocal_463 = Global_83864.f_1268 + 1;
							iLocal_457 = 2;
						}
						break;
					
					case 0x00000002:
						if (StackVal != 4294967295)
						{
							Function_255(&bLocal_454, fVar9);
							Function_244(StackVal, GET_ACTOR_ENUM_STRING_FROM_ENUM("XP_Horse_Unlock"));
						}
						if (iLocal_463 <= Global_83864.f_1264)
						{
							iLocal_463++;
						}
						else
						{
							iLocal_463 = Global_83864.f_1268 + 1;
							if (Global_84364.f_708 >= 0)
							{
								iLocal_457 = 5;
							}
							else
							{
								iLocal_457 = 3;
							}
						}
						break;
					
					case 0x00000003:
						if (Global_83864[iLocal_4636].f_12 != 0)
						{
							Function_255(&bLocal_454, fVar9);
							Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_243(Global_83864[iLocal_4636].f_12) };
							Function_244("XP_Playlist_Unlock", &Var1);
						}
						if (iLocal_463 <= Global_83864.f_1264)
						{
							iLocal_463++;
						}
						else if (Function_242(iLocal_463, 8))
						{
							iLocal_457 = 4;
						}
						else
						{
							iLocal_457 = 5;
						}
						break;
					
					case 0x00000004:
						Function_255(&bLocal_454, fVar9);
						Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_243(41) };
						Function_244("XP_Playlist_Unlock", &Var1);
						iLocal_457 = 5;
						break;
					
					case 0x00000005:
						if (Function_241(Global_83864.f_1268 + 1, Global_83864.f_1264, 2))
						{
							Function_255(&bLocal_454, fVar9);
							Function_244("XP_PVP_Challenge_Unlock", 0);
						}
						iLocal_457 = 6;
						break;
					
					case 0x00000006:
						if (Function_241(Global_83864.f_1268 + 1, Global_83864.f_1264, 4))
						{
							Function_255(&bLocal_454, fVar9);
							Function_244("XP_FM_Challenge_Unlock", 0);
						}
						iLocal_457 = 7;
						break;
					
					case 0x00000007:
						if ((Function_239(Global_83864.f_1268 + 1, Global_83864.f_1264) && Global_84364.f_708 != 0) || (Global_84364.f_708 != 4 && Global_83864.f_1264 != 49))
						{
							Function_255(&bLocal_454, fVar9);
							Function_244("XP_Avatar_Unlock", 0);
						}
						iLocal_457 = 8;
						break;
					
					case 0x00000008:
						if (Function_242(Global_83864.f_1264, 8) && Global_84364.f_708 > 4)
						{
							Function_255(&bLocal_454, fVar9);
							Function_244("XP_PassingIntoLegend", 0);
						}
						iLocal_457 = 9;
						break;
					
					case 0x00000009:
						Global_83864.f_1268 = Global_83864.f_1264;
						Function_6("HUD_MP_OUTRO_MASTER");
						UNK_0x8DEC3E03("top");
						Function_101(524288);
						Function_238(&bLocal_454);
						Global_83864.f_1272 = 0;
						break;
					}
				}
		}
	}
	else
	{
		iLocal_457 = 0;
	}
	return;
}

void Function_238(bool bParam0) //Position: 0x723B / 29243
{
	bParam0->f_4 = 0.0f;
	bParam0->f_8 = 0.0f;
	*bParam0 = 0;
	return;
}

int Function_239(int iParam0, int iParam1) //Position: 0x724F / 29263
{
	bool bVar0;
	int iVar1;
	
	bVar0 = 837;
	while (bVar0 < 971)
	{
		iVar1 = Function_240(bVar0);
		if (iParam0 + 1 >= iVar1 && iVar1 >= iParam1 + 1)
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int Function_240(bool bParam0) //Position: 0x7287 / 29319
{
	return (ABS(GET_ACTORENUM_AVATAR_GROUP(bParam0)) % 1000);
}

bool Function_241(var uParam0, int iParam1, int iParam2) //Position: 0x7299 / 29337
{
	int iVar0;
	
	iVar0 = uParam0;
	while (iVar0 < iParam1)
	{
		if (Function_242(iVar0, iParam2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_242(int iParam0, int iParam1) //Position: 0x72C0 / 29376
{
	return Function_95(Global_83864[iParam06].f_16, iParam1);
}

struct<32> Function_243(int iParam0) //Position: 0x72D5 / 29397
{
	int iVar0;
	char* cVar1[32];
	
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (Global_0[iVar0168].f_64 == iParam0)
		{
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_0[iVar0168];
		}
		iVar0++;
	}
	strcpy(&cVar1, "", 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1;
}

void Function_244(bool bParam0, bool bParam1) //Position: 0x7317 / 29463
{
	PLAY_SOUND_FRONTEND("HUD_MP_UNLOCK_MASTER");
	if (IS_STRING_VALID(bParam1))
	{
		UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING(bParam0), UI_GET_STRING(bParam1), 0, 0);
		UI_SET_TEXT("MPRewardItem.s0", "Generic_Dbuffer128_1");
	}
	else
	{
		UI_SET_TEXT("MPRewardItem.s0", bParam0);
	}
	UI_SHOW("MPRewardItem.s0");
	UI_REFRESH("MPRewardItem.s0");
	return;
}

void Function_245(int iParam0) //Position: 0x73D5 / 29653
{
	Function_87(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_246(int iParam0, int iParam1) //Position: 0x742E / 29742
{
	struct<8> Var0;
	bool bVar8;
	int iVar9;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_131(iParam0, iParam1, 1, 0) };
	bVar8 = "XP_Unlock_Level";
	if (iParam0 == 49)
	{
		bVar8 = "XP_Unlock_LevelCap";
	}
	iVar9 = 0;
	if (UI_ISACTIVE("MPSplash"))
	{
		iVar9 = 2;
	}
	Function_247(&Var0, bVar8, "Common_Null", "HUD_MP_LEVEL_UP_MASTER", iVar9, 0, 0);
	UI_SET_TEXT("MPRewardItem.s1", Function_252(iParam0 + 1));
	UI_SHOW("MPRewardItem.s1");
	return;
}

void Function_247(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x74EE / 29934
{
	if (iParam6 != 0)
	{
		UI_TEXTURE_SET_HASH("MPRankTexture", iParam6);
	}
	else
	{
		UI_TEXTURE_SET_NAME("MPRankTexture", uParam0);
	}
	UI_SET_TEXT("MPRewardTitle", bParam1);
	if (iParam5 != 0)
	{
		UI_SET_TEXT_HASH("MPRewardItem.s0", iParam5);
	}
	else
	{
		UI_SET_TEXT("MPRewardItem.s0", bParam2);
	}
	UI_SHOW("MPReward");
	UI_SHOW("MPRewardItem.s0");
	UI_SET_STYLE("MPRewardTitle", iParam4);
	UI_REFRESH("MPRewardItem.s0");
	UI_SHOW("MPRewardItem.s1");
	UI_SET_TEXT("MPRewardItem.s1", "Common_Null");
	PLAY_SOUND_FRONTEND(bParam3);
}

bool Function_248(bool bParam0) //Position: 0x75FF / 30207
{
	return Function_95(*bParam0, 1);
}

bool Function_249(bool bParam0, float fParam1) //Position: 0x760C / 30220
{
	if (Function_248(bParam0))
	{
		if (Function_250(bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_250(bool bParam0) //Position: 0x7628 / 30248
{
	if (Function_248(bParam0))
	{
		if (Function_256(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_251(bool bParam0) //Position: 0x76F0 / 30448
{
	if (Function_248(bParam0))
	{
		if (Function_256(bParam0))
		{
			bParam0->f_4 = (StackVal - GET_CURRENT_GAME_TIME());
			bParam0->f_8 = 0.0f;
			Function_93(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to UNPAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to UNPAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

var Function_252(bool bParam0) //Position: 0x77B7 / 30647
{
	bool bVar0;
	
	bVar0 = Function_253();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_253() //Position: 0x77CE / 30670
{
	Global_6285 = (Global_6285 + 1 % 10);
	switch (Global_6285)
	{
		case 0x00000001:
			return "POD2ST1";
		
		case 0x00000002:
			return "POD2ST2";
		
		case 0x00000003:
			return "POD2ST3";
		
		case 0x00000004:
			return "POD2ST4";
		
		case 0x00000005:
			return "POD2ST5";
		
		case 0x00000006:
			return "POD2ST6";
		
		case 0x00000007:
			return "POD2ST7";
		
		case 0x00000008:
			return "POD2ST8";
		
		case 0x00000009:
			return "POD2ST9";
		
		default:
	}
	return "POD2ST0";
}

void Function_254(bool bParam0) //Position: 0x788A / 30858
{
	if (Function_248(bParam0))
	{
		if (!Function_256(bParam0))
		{
			bParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_96(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_255(bool bParam0, float fParam1) //Position: 0x7949 / 31049
{
	bParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_96(bParam0, 1);
	Function_93(bParam0, 2);
	bParam0->f_8 = 0.0f;
	return;
}

bool Function_256(bool bParam0) //Position: 0x796A / 31082
{
	return Function_95(*bParam0, 2);
}

bool Function_257() //Position: 0x7977 / 31095
{
	if (HUD_IS_FADED())
	{
		return 1;
	}
	if (HUD_IS_FADING())
	{
		return 1;
	}
	if (!UI_ISFOCUSED("HudSceneOnline"))
	{
		return 1;
	}
	if (Function_17(1) && !Function_342(524288))
	{
		return 1;
	}
	if (Function_17(2))
	{
		return 1;
	}
	if ((Function_258(4) || Function_258(8)) && !Function_342(524288))
	{
		return 1;
	}
	return 0;
}

bool Function_258(bool bParam0) //Position: 0x79EA / 31210
{
	return Function_18(Global_78617.f_52, bParam0);
}

void Function_259() //Position: 0x79FB / 31227
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	struct<4> Var5;
	
	bVar0 = Function_47();
	if (Function_263())
	{
		if (Function_248(&bLocal_458))
		{
			if (!Function_256(&bLocal_458))
			{
				Function_254(&bLocal_458);
				UI_EXIT("MPReward");
			}
		}
		return;
	}
	if (Function_256(&bLocal_458))
	{
		Function_251(&bLocal_458);
		UI_SHOW("MPReward");
	}
	switch (iLocal_461)
	{
		case 0x00000000:
			if (!Function_17(2))
			{
				if (!DECOR_CHECK_EXIST(bVar0, "CQueue_Count"))
				{
					return;
				}
			}
		
		case 0x00000001:
			if (Function_248(&bLocal_458))
			{
				if (!Function_249(&bLocal_458, 0.0f))
				{
					return;
				}
			}
			bVar1 = DECOR_GET_INT(bVar0, Function_215());
			bVar2 = SHIFT_RIGHT(bVar1, 20);
			bVar1 = (bVar1 && 1023);
			Var5 = { StackVal, StackVal, StackVal, Function_214(bVar2) };
			bVar3 = DECOR_GET_INT(bVar0, &Var5);
			DECOR_REMOVE(bVar0, &Var5);
			Var5 = { StackVal, StackVal, StackVal, Function_212(bVar2) };
			bLocal_462 = DECOR_GET_INT(bVar0, &Var5);
			DECOR_REMOVE(bVar0, &Var5);
			Var5 = { StackVal, StackVal, StackVal, Function_213(bVar2) };
			bVar4 = DECOR_GET_INT(bVar0, &Var5);
			DECOR_REMOVE(bVar0, &Var5);
			Function_247("ignoreMe", "mp_challengeComplete", "ignoreMe", "HUD_MP_CHALLENGE_MASTER", 1, bVar3, bVar4);
			Function_255(&bLocal_458, -1.0f);
			Function_262(2);
			iLocal_461 = 2;
			break;
		
		case 0x00000002:
			if (Function_261(&bLocal_458, 0.0f))
			{
				Function_255(&bLocal_458, -2.0f);
				Function_125(TO_FLOAT(bLocal_462), 0);
				iLocal_461 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_261(&bLocal_458, 0.0f))
			{
				bVar1 = DECOR_GET_INT(bVar0, "CQueue_Count");
				bVar2 = SHIFT_RIGHT(bVar1, 20) + 1;
				bVar1 = (bVar1 && 1023);
				if (bVar2 <= bVar1)
				{
					DECOR_SET_INT(bVar0, "CQueue_Count", (bVar1 + SHIFT_LEFT(bVar2, 20)));
					Function_255(&bLocal_458, -0,25f);
					iLocal_461 = 1;
					Function_6(0);
				}
				else
				{
					DECOR_REMOVE(bVar0, "CQueue_Count");
					iLocal_461 = 0;
					Function_260(2);
					Function_6("HUD_MP_OUTRO_MASTER");
				}
			}
			break;
	}
	return;
}

void Function_260(int iParam0) //Position: 0x7C41 / 31809
{
	Function_85(&Global_83864 + 1252, iParam0);
	return;
}

bool Function_261(bool bParam0, float fParam1) //Position: 0x7C53 / 31827
{
	if (Function_249(bParam0, fParam1))
	{
		Function_238(bParam0);
		return 1;
	}
	return 0;
}

void Function_262(int iParam0) //Position: 0x7C6B / 31851
{
	Function_87(&Global_83864 + 1252, iParam0);
	return;
}

bool Function_263() //Position: 0x7C7D / 31869
{
	if (HUD_IS_FADED())
	{
		return 1;
	}
	if (HUD_IS_FADING())
	{
		return 1;
	}
	if (Function_17(4) && !Function_17(2))
	{
		return 1;
	}
	if (Function_342(524288))
	{
		return 1;
	}
	if ((Function_258(4) || Function_258(8)) && !Function_17(2))
	{
		return 1;
	}
	if (!UI_ISFOCUSED("HudSceneOnline"))
	{
		return 1;
	}
	return 0;
}

void Function_264() //Position: 0x7CED / 31981
{
	var uVar0;
	
	uVar0 = Global_83864.f_1264;
	if (!Function_314(uVar0, 1) && !Global_83864.f_1276)
	{
		if (Function_313())
		{
			Function_311(2, 35542);
			Function_311(4, 35439);
			Function_311(16, 35308);
			Function_311(10, 35228);
			Function_311(21, 35122);
			Function_311(6, 35042);
			Function_311(6, 34992);
			Function_311(7, 34942);
			Function_311(12, 34816);
			Function_311(11, 34792);
			Function_311(25, 34708);
			Function_311(19, 34627);
			Function_311(27, 34547);
			Function_311(29, 34517);
			Function_311(31, 34436);
			Function_311(34, 34355);
			Function_311(45, 34300);
			Function_311(45, 34270);
			Function_311(45, 34239);
			Function_311(0, 33984);
			Function_311(13, 33949);
			Function_311(2, 33914);
			Function_311(12, 33879);
			Function_311(3, 33844);
			Function_311(14, 33809);
			Function_311(5, 33774);
			Function_311(18, 33735);
			Function_311(41, 33696);
			Function_278(2, 187, 207);
			Function_278(5, 188, 208);
			Function_278(8, 189, 209);
			Function_278(9, 190, 210);
			Function_278(11, 191, 211);
			Function_278(13, 192, 212);
			Function_278(17, 193, 213);
			Function_278(18, 194, 214);
			Function_278(20, 195, 215);
			Function_278(24, 196, 216);
			Function_278(26, 197, 217);
			Function_278(28, 198, 218);
			Function_278(32, 200, 220);
			Function_278(35, 201, 221);
			Function_278(37, 202, 222);
			Function_278(40, 203, 223);
			Function_278(43, 204, 224);
			Function_278(46, 205, 225);
			Function_278(49, 206, 226);
			Function_278(50, 199, 219);
			Function_266(15, 10);
			Function_266(22, 12);
			Function_265(uVar0, 1);
		}
	}
	return;
}

void Function_265(int iParam0, int iParam1) //Position: 0x7EA6 / 32422
{
	Function_96(&Global_83864[iParam06] + 20, iParam1);
	return;
}

void Function_266(int iParam0, int iParam1) //Position: 0x7EBB / 32443
{
	if (Global_83864.f_1264 + 1 > iParam0)
	{
		Function_267(&(Global_49399[iParam122]));
	}
	return;
}

void Function_267(int iParam0) //Position: 0x7ED9 / 32473
{
	Function_275(*iParam0);
	if (!Function_274(*iParam0, 2))
	{
		Function_270(*iParam0, 0);
		Function_269(*iParam0, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_268(*iParam0), 0.0f, false, 0);
	}
	iParam0->f_4 = 1;
	return;
}

bool Function_268(int iParam0) //Position: 0x7F0F / 32527
{
	if (Function_75() || Global_34165.f_44)
	{
		return Global_49399[iParam022].f_24;
	}
	return Global_49310[iParam022].f_24;
}

void Function_269(int iParam0, int iParam1) //Position: 0x7F37 / 32567
{
	if (Function_75() || Global_34165.f_44)
	{
		Function_96(&Global_49399[iParam022] + 32, iParam1);
	}
	else
	{
		Function_96(&Global_49310[iParam022] + 32, iParam1);
	}
	return;
}

void Function_270(int iParam0, bool bParam1) //Position: 0x7F68 / 32616
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_268(iParam0));
	if ((bParam1 && Function_274(iParam0, 4)) || !bParam1)
	{
		PREPEND_JOURNAL_ENTRY(Function_268(iParam0), false);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_273(iParam0) };
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_272(iParam0) };
		UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_271(iParam0) };
		PREPEND_JOURNAL_ENTRY_DETAIL(Function_268(iParam0), &Var6, 0, 2, Function_274(iParam0, 4));
		if (iParam0 == 3)
		{
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_268(iParam0), "nAM_MAPHLP", 0, 2, true);
		}
		if (!bParam1)
		{
			Function_269(iParam0, 4);
		}
	}
	return;
}

struct<24> Function_271(int iParam0) //Position: 0x7FEF / 32751
{
	char* cVar0[24];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_272(iParam0) };
	if (Global_34165.f_44 || Function_75())
	{
		stradd(&cVar0, "_mp_des", 24);
		if (!IS_STRING_VALID(UI_GET_STRING(&cVar0)))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_272(iParam0) };
			stradd(&cVar0, "_des", 24);
		}
	}
	else
	{
		stradd(&cVar0, "_des", 24);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_272(int iParam0) //Position: 0x804F / 32847
{
	char* cVar0[24];
	
	if (Function_75() || Global_34165.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_49399[iParam022] + 16), 6);
		stradd(&cVar0, "_", 24);
		stradd(&cVar0, INT_TO_STRING(StackVal), 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_49310[iParam022] + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_273(int iParam0) //Position: 0x80C1 / 32961
{
	char* cVar0[24];
	
	if (Function_75() || Global_34165.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_49399[iParam022] + 16), 6);
		stradd(&cVar0, "_DYNAMIC_TITLE", 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_49310[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_274(int iParam0, int iParam1) //Position: 0x812D / 33069
{
	if (Function_75() || Global_34165.f_44)
	{
		return Function_95(Global_49399[iParam022].f_32, iParam1);
	}
	return Function_95(Global_49310[iParam022].f_32, iParam1);
}

void Function_275(bool bParam0) //Position: 0x815F / 33119
{
	if (Function_75() || Global_34165.f_44)
	{
		Function_276(bParam0, 0, Global_49399[bParam022].f_28);
	}
	else
	{
		Function_276(bParam0, 0, Global_49310[bParam022].f_28);
	}
	return;
}

int Function_276(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8194 / 33172
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_277();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_INT: failed to store int value in slot");
	return 0;
}

var Function_277() //Position: 0x8208 / 33288
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_278(int iParam0, int iParam1, int iParam2) //Position: 0x8255 / 33365
{
	if (Global_83864.f_1264 + 1 > iParam0)
	{
		Function_279(&(Global_50170[iParam222]), 25, 100.0f);
		Function_279(&(Global_50170[iParam122]), 25, 50.0f);
	}
	return;
}

void Function_279(var uParam0, bool bParam1, bool bParam2) //Position: 0x828B / 33419
{
	Function_280(*uParam0);
	if (!Function_171(*uParam0, 2))
	{
		Function_207(*uParam0, bParam1, CEIL(bParam2), 0);
		Function_208(*uParam0, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_153(*uParam0), 0.0f, false, 0);
	}
	uParam0->f_4 = 1;
	return;
}

void Function_280(int iParam0) //Position: 0x82C8 / 33480
{
	Function_281(iParam0, 0, Global_50170[iParam022].f_28);
	return;
}

int Function_281(bool bParam0, bool bParam1, bool bParam2) //Position: 0x82DE / 33502
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_282();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

var Function_282() //Position: 0x8353 / 33619
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_283() //Position: 0x83A0 / 33696
{
	if (!Function_274(9, 2))
	{
		Function_270(9, 0);
		Function_269(9, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_268(9), 0.0f, false, 0);
	}
	return;
}

void Function_284() //Position: 0x83C7 / 33735
{
	if (!Function_274(8, 2))
	{
		Function_270(8, 0);
		Function_269(8, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_268(8), 0.0f, false, 0);
	}
	return;
}

void Function_285() //Position: 0x83EE / 33774
{
	if (!Function_274(7, 2))
	{
		Function_270(7, 0);
		Function_269(7, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_268(7), 0.0f, false, 0);
	}
	return;
}

void Function_286() //Position: 0x8411 / 33809
{
	if (!Function_274(6, 2))
	{
		Function_270(6, 0);
		Function_269(6, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_268(6), 0.0f, false, 0);
	}
	return;
}

void Function_287() //Position: 0x8434 / 33844
{
	if (!Function_274(2, 2))
	{
		Function_270(2, 0);
		Function_269(2, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_268(2), 0.0f, false, 0);
	}
	return;
}

void Function_288() //Position: 0x8457 / 33879
{
	if (!Function_274(5, 2))
	{
		Function_270(5, 0);
		Function_269(5, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_268(5), 0.0f, false, 0);
	}
	return;
}

void Function_289() //Position: 0x847A / 33914
{
	if (!Function_274(1, 2))
	{
		Function_270(1, 0);
		Function_269(1, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_268(1), 0.0f, false, 0);
	}
	return;
}

void Function_290() //Position: 0x849D / 33949
{
	if (!Function_274(4, 2))
	{
		Function_270(4, 0);
		Function_269(4, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_268(4), 0.0f, false, 0);
	}
	return;
}

void Function_291() //Position: 0x84C0 / 33984
{
	Function_292();
	return;
}

void Function_292() //Position: 0x84C9 / 33993
{
	if (!Function_171(58, 2))
	{
		Function_208(58, 2);
		Function_207(58, 0, 0, 0);
	}
	if (!Function_171(59, 2))
	{
		Function_208(59, 2);
		Function_207(59, 0, 0, 0);
	}
	if (!Function_171(60, 2))
	{
		Function_208(60, 2);
		Function_207(60, 0, 0, 0);
	}
	if (!Function_171(61, 2))
	{
		Function_208(61, 2);
		Function_207(61, 0, 0, 0);
	}
	if (!Function_171(62, 2))
	{
		Function_208(62, 2);
		Function_207(62, 0, 0, 0);
	}
	if (!Function_171(63, 2))
	{
		Function_208(63, 2);
		Function_207(63, 0, 0, 0);
	}
	if (!Function_171(64, 2))
	{
		Function_208(64, 2);
		Function_207(64, 0, 0, 0);
	}
	if (!Function_171(65, 2))
	{
		Function_208(65, 2);
		Function_207(65, 0, 0, 0);
	}
	if (!Function_171(69, 2))
	{
		Function_208(69, 2);
		Function_207(69, 0, 0, 0);
	}
	if (!Function_171(73, 2))
	{
		Function_208(73, 2);
		Function_207(73, 0, 0, 0);
	}
	return;
}

void Function_293() //Position: 0x85BF / 34239
{
	if (!Function_171(51, 2))
	{
		Function_208(51, 2);
		Function_207(51, 2, 50, 0);
	}
	return;
}

void Function_294() //Position: 0x85DE / 34270
{
	if (!Function_171(50, 2))
	{
		Function_208(50, 2);
		Function_207(50, 10, 50, 0);
	}
	return;
}

void Function_295() //Position: 0x85FC / 34300
{
	if (!Function_171(49, 2))
	{
		Function_208(49, 2);
		Function_207(49, 10, 50, 0);
	}
	if (!Function_171(52, 2))
	{
		Function_208(52, 2);
		Function_207(52, 1, 150, 0);
	}
	return;
}

void Function_296() //Position: 0x8633 / 34355
{
	if (!Function_171(19, 2))
	{
		Function_208(19, 2);
		Function_207(19, 1, 50, 0);
	}
	if (!Function_171(20, 2))
	{
		Function_208(20, 2);
		Function_207(20, 5, 50, 0);
	}
	if (!Function_171(21, 2))
	{
		Function_208(21, 2);
		Function_207(21, 1, 50, 0);
	}
	return;
}

void Function_297() //Position: 0x8684 / 34436
{
	if (!Function_171(15, 2))
	{
		Function_208(15, 2);
		Function_207(15, 1, 150, 0);
	}
	if (!Function_171(16, 2))
	{
		Function_208(16, 2);
		Function_207(16, 1, 150, 0);
	}
	if (!Function_171(17, 2))
	{
		Function_208(17, 2);
		Function_207(17, 1, 50, 0);
	}
	return;
}

void Function_298() //Position: 0x86D5 / 34517
{
	if (!Function_171(27, 2))
	{
		Function_208(27, 2);
		Function_207(27, 10, 50, 0);
	}
	return;
}

void Function_299() //Position: 0x86F3 / 34547
{
	if (!Function_171(22, 2))
	{
		Function_208(22, 2);
		Function_207(22, 1, 150, 0);
	}
	if (!Function_171(25, 2))
	{
		Function_208(25, 2);
		Function_207(25, 25, 50, 0);
	}
	if (!Function_171(26, 2))
	{
		Function_208(26, 2);
		Function_207(26, 1, 150, 0);
	}
	return;
}

void Function_300() //Position: 0x8743 / 34627
{
	if (!Function_171(12, 2))
	{
		Function_208(12, 2);
		Function_207(12, 5, 150, 0);
	}
	if (!Function_171(13, 2))
	{
		Function_208(13, 2);
		Function_207(13, 5, 150, 0);
	}
	if (!Function_171(14, 2))
	{
		Function_208(14, 2);
		Function_207(14, 5, 150, 0);
	}
	return;
}

void Function_301() //Position: 0x8794 / 34708
{
	if (!Function_171(55, 2))
	{
		Function_208(55, 2);
		Function_207(55, 0, 0, 0);
	}
	if (!Function_171(56, 4))
	{
		Function_207(56, 0, 0, 0);
	}
	if (!Function_171(57, 4))
	{
		Function_207(57, 0, 0, 0);
	}
	if (!Function_171(54, 4))
	{
		Function_207(54, 0, 0, 0);
	}
	return;
}

void Function_302() //Position: 0x87E8 / 34792
{
	if (!Function_171(54, 4))
	{
		Function_207(54, 0, 0, 0);
	}
	return;
}

void Function_303() //Position: 0x8800 / 34816
{
	if (!Function_171(7, 2))
	{
		Function_208(7, 2);
		Function_207(7, 3, 50, 0);
	}
	if (!Function_171(8, 2))
	{
		Function_208(8, 2);
		Function_207(8, 3, 50, 0);
	}
	if (!Function_171(9, 2))
	{
		Function_208(9, 2);
		Function_207(9, 3, 150, 0);
	}
	if (!Function_171(10, 2))
	{
		Function_208(10, 2);
		Function_207(10, 10, 150, 0);
	}
	if (!Function_171(11, 2))
	{
		Function_208(11, 2);
		Function_207(11, 20, 150, 0);
	}
	return;
}

void Function_304() //Position: 0x887E / 34942
{
	if (!Function_171(5, 2))
	{
		Function_208(5, 2);
		Function_207(5, 3, 50, 0);
	}
	if (!Function_171(6, 2))
	{
		Function_208(6, 2);
		Function_207(6, 5, 50, 0);
	}
	return;
}

void Function_305() //Position: 0x88B0 / 34992
{
	if (!Function_171(0, 2))
	{
		Function_208(0, 2);
		Function_207(0, 1, 50, 0);
	}
	if (!Function_171(1, 2))
	{
		Function_208(1, 2);
		Function_207(1, 1, 50, 0);
	}
	return;
}

void Function_306() //Position: 0x88E2 / 35042
{
	if (!Function_171(46, 2))
	{
		Function_208(46, 2);
		Function_207(46, 1, 50, 0);
	}
	if (!Function_171(47, 2))
	{
		Function_208(47, 2);
		Function_207(47, 1, 50, 0);
	}
	if (!Function_171(48, 2))
	{
		Function_208(48, 2);
		Function_207(48, 10, 50, 0);
	}
	return;
}

void Function_307() //Position: 0x8932 / 35122
{
	if (!Function_171(42, 2))
	{
		Function_208(42, 2);
		Function_207(42, 5, 50, 0);
	}
	if (!Function_171(43, 2))
	{
		Function_208(43, 2);
		Function_207(43, 3, 50, 0);
	}
	if (!Function_171(44, 2))
	{
		Function_208(44, 2);
		Function_207(44, 1, 150, 0);
	}
	if (!Function_171(45, 2))
	{
		Function_208(45, 2);
		Function_207(45, 1, 150, 0);
	}
	return;
}

void Function_308() //Position: 0x899C / 35228
{
	if (!Function_171(39, 2))
	{
		Function_208(39, 2);
		Function_207(39, 1, 50, 0);
	}
	if (!Function_171(40, 2))
	{
		Function_208(40, 2);
		Function_207(40, 1, 50, 0);
	}
	if (!Function_171(41, 2))
	{
		Function_208(41, 2);
		Function_207(41, 10, 50, 0);
	}
	return;
}

void Function_309() //Position: 0x89EC / 35308
{
	if (!Function_171(34, 2))
	{
		Function_208(34, 2);
		Function_207(34, 5, 50, 0);
	}
	if (!Function_171(35, 2))
	{
		Function_208(35, 2);
		Function_207(35, 1, 50, 0);
	}
	if (!Function_171(36, 2))
	{
		Function_208(36, 2);
		Function_207(36, 1, 150, 0);
	}
	if (!Function_171(37, 2))
	{
		Function_208(37, 2);
		Function_207(37, 1, 150, 0);
	}
	if (!Function_171(38, 2))
	{
		Function_208(38, 2);
		Function_207(38, 1, 150, 0);
	}
	return;
}

void Function_310() //Position: 0x8A6F / 35439
{
	if (!Function_171(31, 2))
	{
		Function_208(31, 2);
		Function_207(31, 1, 50, 0);
	}
	if (!Function_171(32, 2))
	{
		Function_208(32, 2);
		Function_207(32, 1, 50, 0);
	}
	if (!Function_171(33, 2))
	{
		Function_208(33, 2);
		Function_207(33, 10, 50, 0);
	}
	return;
}

void Function_311(int iParam0, int iParam1) //Position: 0x8ABF / 35519
{
	if (Global_83864.f_1264 + 1 > iParam0)
	{
		Call_Loc(iParam1);
	}
	return;
}

void Function_312() //Position: 0x8AD6 / 35542
{
	if (!Function_171(2, 2))
	{
		Function_208(2, 2);
		Function_207(2, 1, 50, 0);
	}
	if (!Function_171(3, 2))
	{
		Function_208(3, 2);
		Function_207(3, 1, 50, 0);
	}
	if (!Function_171(4, 2))
	{
		Function_208(4, 2);
		Function_207(4, 1, 150, 0);
	}
	return;
}

bool Function_313() //Position: 0x8B1E / 35614
{
	if (!HUD_IS_FADING() && !HUD_IS_FADED())
	{
		return 1;
	}
	return 0;
}

bool Function_314(int iParam0, int iParam1) //Position: 0x8B33 / 35635
{
	return Function_95(Global_83864[iParam06].f_20, iParam1);
}

void Function_315(bool bParam0, bool bParam1) //Position: 0x8B48 / 35656
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	int iVar4;
	
	if (bParam0)
	{
		iVar0 = Global_83864.f_1264 + 1;
	}
	else
	{
		iVar0 = Global_83864.f_1260 + 1;
	}
	iVar1 = 1;
	fVar2 = Function_137(487);
	uVar3 = Function_112();
	if (bParam1)
	{
	}
	while (iVar0 > 50 && iVar1)
	{
		if (fVar2 <= Global_83864[iVar06])
		{
			if (!Function_242(iVar0, 1))
			{
				if (!bParam1)
				{
					Function_174(0);
					if (StackVal != 4294967295)
					{
						if (!bParam0)
						{
							Function_336(&uVar3, &Global_83864[iVar06] + 4);
						}
						else if (Function_335(StackVal))
						{
							Global_84559[1] = StackVal;
						}
					}
				}
				else if (StackVal != 4294967295)
				{
					if (Function_335(StackVal))
					{
						Global_84559[1] = StackVal;
					}
				}
				if (StackVal != 4294967295)
				{
					if (!bParam1)
					{
						Global_83864.f_1284 = StackVal;
					}
					if (!bParam0)
					{
						if (!bParam1)
						{
							Function_334(Global_83864.f_1284);
							Function_330();
							Function_329(Global_83864.f_1284, 0, 1);
						}
					}
					iVar4 = Function_328(StackVal);
					Function_96(&Global_83864 + 1204[iVar4], 1);
				}
				if (Global_83864[iVar06].f_12 != 0)
				{
					Function_326(Global_83864[iVar06].f_12);
					if (Global_83864[iVar06].f_12 == 36)
					{
						NET_SET_QUICKMATCH_PLAYLIST_RANGE(34, 36);
					}
				}
				if (Function_242(iVar0, 8))
				{
					Function_326(41);
				}
				if (!bParam0)
				{
					Global_83864.f_1260 = iVar0;
					Function_325(iVar0, 1);
				}
				Global_83864.f_1264 = iVar0;
				if (bParam0)
				{
					if (Global_83864.f_1264 < 9)
					{
						Function_324(4);
					}
				}
				Function_323();
				if (Global_83864.f_1264 == 49)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(45))
					{
						AWARD_ACHIEVEMENT(45);
					}
				}
				if (!bParam1)
				{
					Global_83864.f_1272 = 1;
					Function_321(Global_83864.f_1264 + 1);
					Function_316(Global_83864.f_1264 + 1);
					if (Global_83864.f_1264 != 49 && Global_84364.f_708 != 4)
					{
						Function_316(500);
					}
				}
			}
			iVar0++;
		}
		else
		{
			iVar1 = 0;
		}
	}
	if (bParam1)
	{
	}
	return;
}

void Function_316(int iParam0) //Position: 0x8D76 / 36214
{
	int iVar0;
	
	iVar0 = 837;
	while (iVar0 < 971)
	{
		if (Function_240(iVar0) == iParam0)
		{
			Function_317(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_317(int iParam0) //Position: 0x8DA1 / 36257
{
	Function_96(&Global_83864 + 1976[Function_320(iParam0)], Function_318(iParam0));
	return;
}

int Function_318(int iParam0) //Position: 0x8DBD / 36285
{
	return Function_31((Function_319(iParam0) % 32));
}

int Function_319(int iParam0) //Position: 0x8DCE / 36302
{
	return (iParam0 - 837);
}

int Function_320(int iParam0) //Position: 0x8DDA / 36314
{
	return (Function_319(iParam0) / 32);
}

void Function_321(int iParam0) //Position: 0x8DE8 / 36328
{
	Function_322(iParam0, 1);
	return;
}

void Function_322(int iParam0, bool bParam1) //Position: 0x8DF4 / 36340
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_96(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_31((iVar0 % 32)));
	}
	else
	{
		Function_93(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_31((iVar0 % 32)));
	}
	return;
}

void Function_323() //Position: 0x8E4A / 36426
{
	bool bVar0;
	
	bVar0 = (Global_83864.f_1264 + 1 + Global_84364.f_708 * 50);
	NET_GAMERDATA_SET("Rank", bVar0);
	UPDATE_PROFILE_STAT("MpLevel", TO_FLOAT(bVar0), 1);
	return;
}

void Function_324(int iParam0) //Position: 0x8E84 / 36484
{
	Function_87(&Global_83864 + 1256, iParam0);
	return;
}

void Function_325(int iParam0, int iParam1) //Position: 0x8E96 / 36502
{
	Function_96(&Global_83864[iParam06] + 16, iParam1);
	return;
}

void Function_326(int iParam0) //Position: 0x8EAB / 36523
{
	if (!Function_95((*&Global_84364 + 408)[iParam0], 1))
	{
		Function_327(iParam0);
		Function_96(&Global_84364 + 408[iParam0], 1);
	}
	return;
}

void Function_327(int iParam0) //Position: 0x8ED8 / 36568
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_3361)
	{
		if (Global_0[iVar0168].f_64 == iParam0)
		{
			if (Function_95(Global_0[iVar0168].f_656, 4))
			{
				Function_93(&Global_0[iVar0168] + 656, 4);
				NET_SET_PLAYLIST_LOCKED(&(Global_0[iVar0168]), 0);
			}
			return;
		}
		iVar0++;
	}
	return;
}

int Function_328(int iParam0) //Position: 0x8F2B / 36651
{
	switch (iParam0)
	{
		case 0x000003E8:
			return 0;
			break;
		
		case 0x000003E4:
			return 1;
			break;
		
		case 0x000003DB:
			return 2;
			break;
		
		case 0x000003D0:
			return 3;
			break;
		
		case 0x000003D6:
			return 4;
			break;
		
		case 0x000003D3:
			return 5;
			break;
		
		case 0x000003EE:
			return 6;
			break;
		
		case 0x000003EC:
			return 7;
			break;
		
		case 0x000003ED:
			return 8;
			break;
		
		case 0x000003EF:
			return 9;
			break;
		
		case 0x000003EB:
			return 10;
			break;
		
		default:
			LOG_ERROR("INVALID HORSE PASSED IN TO GET_MOUNT_INDEX! GIVING AE_RIDEABLE_ANIMAL_MEX_Mule01");
			return 0;
			break;
	}
	return 0;
}

void Function_329(var uParam0, bool bParam1, bool bParam2) //Position: 0x9010 / 36880
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_96(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_96(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_330() //Position: 0x903D / 36925
{
	Function_331(Function_333());
	return;
}

void Function_331(int iParam0) //Position: 0x9049 / 36937
{
	if (!Function_332(iParam0))
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

bool Function_332(int iParam0) //Position: 0x9076 / 36982
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

var Function_333() //Position: 0x908D / 37005
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_334(bool bParam0) //Position: 0x90A7 / 37031
{
	if (!Function_332(bParam0))
	{
		return;
	}
	if (bParam0 > 976 || bParam0 < 1007)
	{
		return;
	}
	strcpy(&Global_76870, GET_ACTOR_ENUM_STRING_FROM_ENUM(bParam0), 64);
	return;
}

bool Function_335(bool bParam0) //Position: 0x90D6 / 37078
{
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000030:
		case 0x0000002F:
			return 1;
			break;
	}
	return 0;
}

void Function_336(var uParam0, int iParam1) //Position: 0x90F8 / 37112
{
	int iVar0;
	
	if (!ACTOR_HAS_WEAPON(*uParam0, *iParam1))
	{
		Function_339(*iParam1, 1, 1);
		iVar0 = GET_AMMO_ENUM(*iParam1);
		if (Function_338(iVar0, 1))
		{
			_ADD_AMMO_OF_TYPE(*uParam0, iVar0, TO_FLOAT(Function_337(&Global_83591 + 276, iVar0)), 0, 0);
		}
	}
	if (Function_335(*iParam1))
	{
		Global_84559[*iParam1] = 1;
	}
	return;
}

int Function_337(int iParam0, int iParam1) //Position: 0x9151 / 37201
{
	if (Function_338(iParam1, 1))
	{
		return (*iParam0 + 456)[iParam1];
	}
	return 0;
}

bool Function_338(int iParam0, int iParam1) //Position: 0x916B / 37227
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

int Function_339(bool bParam0, bool bParam1, int iParam2) //Position: 0x917E / 37246
{
	if (!Function_340(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_112(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_112(), bParam0, 1.0f, 0, 0);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_112(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_340(int iParam0) //Position: 0x91D4 / 37332
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_341() //Position: 0x91E6 / 37350
{
	float fVar0;
	bool bVar1;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	if (Function_95(StackVal, 1))
	{
		if (UI_ANIM_GET_TIME("XPComboSpin") > 0,05f)
		{
			UI_ANIM_SETUP("XpComboTimer", 10.0f, 32, false);
			UI_ANIM_RESTART("XpComboTimer");
			UI_SET_TEXT(StackVal, Function_252("XPComboLevel"));
			Function_93(&Global_76939 + 4, 1);
		}
	}
	if (Global_76939 <= 0.0f)
	{
		if ((fVar0 - Global_76939) < 10.0f)
		{
			bVar1 = ROUND(Function_137(488));
			if (Global_76939.f_12 >= 3)
			{
				if (Global_76939.f_12 >= bVar1)
				{
					Function_127(488, (Global_76939.f_12 - bVar1), 0, 0);
				}
			}
			Global_76939.f_8 = 0;
			Global_76939 = 0.0f;
			if (Function_95(StackVal, 2))
			{
				UI_HIDE("XPMultiplier");
				PLAY_SOUND_FRONTEND("HUD_MP_KILL_CHAIN_MASTER");
				Function_93(&Global_76939 + 4, 2);
			}
			Function_168(0);
		}
	}
	return;
}

bool Function_342(int iParam0) //Position: 0x930B / 37643
{
	return Function_18(Global_79336, iParam0);
}

var Function_343(bool bParam0) //Position: 0x931A / 37658
{
	bool bVar0;
	
	bVar0 = Function_344();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_344() //Position: 0x932E / 37678
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_345() //Position: 0x936A / 37738
{
	NET_SCRIPTMSG_REGISTER_HANDLER(6, 38556);
	NET_SCRIPTMSG_REGISTER_HANDLER(7, 38214);
	NET_SCRIPTMSG_REGISTER_HANDLER(17, 38199);
	NET_SCRIPTMSG_REGISTER_HANDLER(78, 38114);
	NET_SCRIPTMSG_REGISTER_HANDLER(81, 37792);
	return;
}

void Function_346(int iParam0) //Position: 0x93A0 / 37792
{
	struct<5> Var0;
	struct<8> Var5;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 3);
	uVar3 = Var0;
	bVar4 = StackVal;
	if (Function_349(uVar3) && IS_SLOT_VALID(bVar4))
	{
		Var5 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_348(uVar3) };
		Function_347("net_aa_completed", UI_GET_STRING(&Var5), bVar4);
	}
	return;
}

void Function_347(bool bParam0, int iParam1, bool bParam2) //Position: 0x93EE / 37870
{
	var uVar0;
	
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64(bParam2), 2);
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), iParam1, &uVar0, 0, 0, 0, 0);
	return;
}

struct<32> Function_348(int iParam0) //Position: 0x940F / 37903
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_349(iParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, Global_29155[iParam010].f_20, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(StackVal))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_349(int iParam0) //Position: 0x94CC / 38092
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_350(int iParam0) //Position: 0x94E2 / 38114
{
	struct<5> Var0;
	int iVar5;
	var uVar6;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 4);
	bVar4 = Var0;
	iVar5 = StackVal;
	if (!IS_SLOT_VALID(bVar4))
	{
		return;
	}
	if (iVar5 != 4294967294)
	{
		memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_348(iVar5), 16);
		Function_77("net_player_entered", bVar4, UI_GET_STRING(&uVar6));
	}
	return;
}

void Function_351(int iParam0) //Position: 0x9537 / 38199
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 7);
	return;
}

void Function_352(int iParam0) //Position: 0x9546 / 38214
{
	struct<9> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &vVar0, 3);
	switch (vVar0.z)
	{
		case 0xFFFFFFFF:
			if (!Function_354(vVar0.y, vVar0.x))
			{
				Function_353("mp_killstreak_ended", vVar0.y, vVar0.x);
				if (vVar0.y != GET_LOCAL_SLOT() || vVar0.x != GET_LOCAL_SLOT())
				{
					Function_54("GENMESS_SWEETJUST", 0);
				}
				if (vVar0.y == GET_LOCAL_SLOT())
				{
					Function_125(25.0f, 0);
				}
			}
			break;
		
		case 0x00000003:
			Function_63("mp_killstreak_level1", vVar0.x);
			break;
		
		case 0x00000006:
			Function_63("mp_killstreak_level2", vVar0.x);
			break;
		
		case 0x00000008:
			Function_63("mp_killstreak_level3", vVar0.x);
			break;
	}
	return;
}

void Function_353(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9640 / 38464
{
	var uVar0;
	var uVar2;
	
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64(bParam1), 2);
	memcpy(&uVar2, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64(bParam2), 2);
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), &uVar0, &uVar2, 0, 0, 0, 0);
	return;
}

bool Function_354(bool bParam0, bool bParam1) //Position: 0x966C / 38508
{
	if (Function_69(bParam0, 1, 0) != 4294967295 && Function_69(bParam1, 1, 0) != 4294967295)
	{
		return 0;
	}
	return Function_69(bParam0, 1, 0) != Function_69(bParam1, 1, 0);
}

void Function_355(int iParam0) //Position: 0x969C / 38556
{
	struct<33> Var0;
	bool bVar33;
	int iVar34;
	struct<8> Var35;
	struct<8> Var43;
	struct<8> Var51;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 11);
	bVar11 = true;
	bVar12 = IS_SLOT_VALID(Var0);
	bVar13 = false;
	if (StackVal && StackVal <= 0 > 16)
	{
		bVar13 = IS_SLOT_VALID(StackVal);
	}
	memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("deathmsg_suicide", 4294967295), 16);
	if (Var0.f_28)
	{
	}
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	bVar33 = GET_LOCAL_SLOT();
	switch (StackVal)
	{
		case 0x00000000:
			break;
		
		case 0x00000003:
			switch (StackVal)
			{
				case 0x00000000:
					break;
				
				case 0x00000005:
					memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("deathmsg_bledout", 4294967295), 16);
					break;
				
				case 0x00000001:
					memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("deathmsg_drowned", 4294967295), 16);
					break;
				
				case 0x00000003:
					memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("deathmsg_cactused", 4294967295), 16);
					break;
				
				case 0x00000002:
					memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("deathmsg_exploded", 4294967295), 16);
					break;
				
				case 0x00000004:
					memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("deathmsg_fired", 4294967295), 16);
					break;
			}
			break;
		
		case 0x00000007:
			if (StackVal == bVar33)
			{
				Function_427("Defended", Var0);
			}
			memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("mp_defended", 4294967295), 16);
			bVar30 = true;
			bVar11 = false;
			break;
		
		case 0x00000008:
			if (StackVal == bVar33)
			{
				Function_427("nVengeance", Var0);
			}
			memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("mp_vengeance", 4294967295), 16);
			bVar30 = true;
			bVar11 = false;
			break;
		
		case 0x00000004:
			if (UNK_0xDB679ED9(Var0.f_12) == 44)
			{
				memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("deathmsg_sniped", 4294967295), 16);
			}
			else
			{
				strcpy(&Var14, Function_426(StackVal), 64);
			}
			break;
		
		case 0x00000005:
			strcpy(&Var14, Function_425(StackVal), 64);
			break;
		
		case 0x00000002:
			bVar11 = false;
			memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("deathmsg_teamkilled", 4294967295), 16);
			break;
		
		case 0x00000001:
			bVar11 = false;
			if (Var0.f_12 == 22)
			{
				memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("deathmsg_stabbed", 4294967295), 16);
			}
			else if (Var0.f_12 == 25)
			{
				bVar32 = Function_73();
				memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("deathmsg_throw", 4294967295), 16);
			}
			else if (Function_18(Var0.f_40, 0x1000000))
			{
				switch (UNK_0xDB679ED9(Var0.f_12))
				{
					case 0x00000027:
					case 0x00000028:
						memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("deathmsg_pistol", 4294967295), 16);
						break;
					
					case 0x0000002B:
					case 0x0000002A:
					case 0x00000029:
					case 0x0000002C:
						memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("deathmsg_rifle", 4294967295), 16);
						break;
					
					default:
						memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("deathmsg", 4294967295), 16);
						break;
				}
			}
			else if (Var0.f_28)
			{
				memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("deathmsg_head", 4294967295), 16);
				bVar32 = Function_73();
			}
			else
			{
				memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("deathmsg", 4294967295), 16);
				bVar32 = Function_73();
			}
			bVar31 = Function_10(16384);
			if (StackVal == bVar33)
			{
				Function_144(Var0.f_28);
				if (Var0.f_32 == 0)
				{
					if (Function_229())
					{
					}
					else
					{
						Function_224(11, 1);
						Function_424(StackVal, Var0);
						if (Function_18(Var0.f_40, 1))
						{
							Function_224(17, 1);
						}
						if (bVar31)
						{
							switch (Function_74())
							{
								case 0x00000002:
									Function_422(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[522] + 4, &Global_50170[522] + 8, &Global_50170[522] + 12, Var0);
									Function_421(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[1022] + 4, &Global_50170[1022] + 8, &Global_50170[1022] + 12, Var0);
									break;
								
								case 0x00000011:
									Function_420(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[622] + 4, &Global_50170[622] + 8, &Global_50170[622] + 12, Var0);
									Function_419(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[1122] + 4, &Global_50170[1122] + 8, &Global_50170[1122] + 12, Var0);
									break;
								
								case 0x00000009:
									Function_418(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[3422] + 4, &Global_50170[3422] + 8, &Global_50170[3422] + 12, Var0);
									Function_416(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[3822] + 4, &Global_50170[3822] + 8, &Global_50170[3822] + 12, Var0);
									break;
								
								case 0x00000007:
									break;
								
								case 0x00000008:
									Function_414(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[4222] + 4, &Global_50170[4222] + 8, &Global_50170[4222] + 12, Var0);
									break;
							}
							Function_413(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[722] + 4, &Global_50170[722] + 8, &Global_50170[722] + 12, Var0);
							Function_412(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[822] + 4, &Global_50170[822] + 8, &Global_50170[822] + 12, Var0);
							Function_409(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[922] + 4, &Global_50170[922] + 8, &Global_50170[922] + 12, Var0);
							Function_408(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[1922] + 4, &Global_50170[1922] + 8, &Global_50170[1922] + 12, Var0);
							Function_406(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[2722] + 4, &Global_50170[2722] + 8, &Global_50170[2722] + 12, Var0);
							Function_405(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[2222] + 4, &Global_50170[2222] + 8, &Global_50170[2222] + 12, Var0);
							Function_404(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[2522] + 4, &Global_50170[2522] + 8, &Global_50170[2522] + 12, Var0);
							Function_402(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[2622] + 4, &Global_50170[2622] + 8, &Global_50170[2622] + 12, Var0);
							Function_401(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[4922] + 4, &Global_50170[4922] + 8, &Global_50170[4922] + 12, Var0);
							Function_400(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[5022] + 4, &Global_50170[5022] + 8, &Global_50170[5022] + 12, Var0);
							Function_399(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[5222] + 4, &Global_50170[5222] + 8, &Global_50170[5222] + 12, Var0);
							Function_395(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[5122] + 4, &Global_50170[5122] + 8, &Global_50170[5122] + 12, Var0);
							Function_372(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
						}
						if (NET_GET_PLAYMODE() == 0)
						{
							if (!HAS_ACHIEVEMENT_BEEN_PASSED(48))
							{
								if (Function_66(Var0, 262144, 1) && !Function_12(262144, 1))
								{
									Function_371(262144, 1);
									AWARD_ACHIEVEMENT(48);
								}
							}
						}
						Function_369(StackVal, StackVal, StackVal, StackVal, Global_34574, GET_SLOT_NAME(Var0), *(&Var0 + 16), GET_WEAPON_ENUM_STRING_FROM_ENUM(Var0.f_12));
						if (Function_73() || Function_342(4096))
						{
							if (Function_12(131072, 1))
							{
								Function_368(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[5622] + 8, &Global_50170[5622] + 12, Var0);
							}
							if (Function_66(Var0, 131072, 1))
							{
								Function_366(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[5522] + 8, &Global_50170[5522] + 12, Var0);
								if (Function_12(131072, 1))
								{
									Function_364(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[5722] + 8, Var0);
								}
								Function_54("GENMESS_LOCALKILLSMW", 0);
								Function_125(200.0f, 0);
							}
							else if (Function_12(131072, 1))
							{
								Function_125(25.0f, 0);
							}
							else
							{
								Function_125(10.0f, 0);
							}
						}
					}
				}
				else if (Var0.f_32 >= 0)
				{
					if (bVar31)
					{
						if (Var0 == Global_56352[21])
						{
							Function_359(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[2122] + 4, &Global_50170[2122] + 8, &Global_50170[2122] + 12, Var0);
						}
					}
				}
			}
			else if (Var0 == bVar33)
			{
				Global_56092[19] = 0;
				Global_56092[21] = 0;
				Global_56352[20] = 4294967295;
				Global_56092[20] = 0;
				if (bVar31)
				{
					if (IS_SLOT_VALID(StackVal))
					{
						Global_56352[19] = StackVal;
						Global_56352[21] = StackVal;
					}
				}
				Function_358();
				Function_148();
			}
			if (bVar31 && !Function_342(2048))
			{
				if (IS_SLOT_VALID(StackVal))
				{
					Global_56352[17] = StackVal;
				}
			}
			break;
		
		case 0x00000006:
			bVar11 = false;
			memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("deathmsg_ko", 4294967295), 16);
			break;
		
		case 0x00000009:
			if (Var0 == bVar33)
			{
				bVar30 = true;
				bVar11 = false;
				memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_116("nmp_assist", 4294967295), 16);
				Function_54("GENMESS_BADBLOOD", 0);
			}
			else
			{
				return;
			}
			break;
	}
	if (bVar12)
	{
		if (bVar30)
		{
			iVar34 = Var0;
			Var0 = StackVal;
			Var0.f_4 = iVar34;
		}
		if (bVar11)
		{
			if (Var0.f_32 >= 0)
			{
				Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_357(Var0, Var0.f_32, 0) };
				Function_91(&Var14, UI_GET_STRING(&Var35));
			}
			else
			{
				Function_63(&Var14, Var0);
			}
		}
		else if (bVar13)
		{
			if (Var0.f_32 >= 0)
			{
				Var43 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_357(Var0, Var0.f_32, 0) };
				Function_77(StackVal, &Var14, UI_GET_STRING(&Var43));
			}
			else if (StackVal && Function_66(bVar32, 1572864, 0))
			{
				Var51 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_356(StackVal, Function_66(StackVal, 1048576, 1), 0) };
				Function_347(&Var14, UI_GET_STRING(&Var51), Var0);
			}
			else
			{
				Function_353(StackVal, &Var14, Var0);
			}
		}
	}
	return;
}

struct<32> Function_356(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA03D / 41021
{
	char* cVar0[32];
	bool bVar8;
	
	strcpy(&cVar0, "MP_PlayerNameCM_", 32);
	stradd(&cVar0, I2STR(bParam0), 32);
	if (bParam1)
	{
		bVar8 = "mp_death_expert";
	}
	else
	{
		bVar8 = "mp_death_casual";
	}
	if (bParam2)
	{
		UI_SET_STRING_FORMAT(&cVar0, UI_GET_STRING(bVar8), "<0xAA3311>WWWWWWWWWWWWWWWW</0x>", 0, 0);
	}
	else
	{
		UI_SET_STRING_FORMAT(&cVar0, UI_GET_STRING(bVar8), UI_GET_STRING(Function_55(bParam0)), 0, 0);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_357(bool bParam0, int iParam1, bool bParam2) //Position: 0xA0E4 / 41188
{
	char* cVar0[32];
	bool bVar8;
	
	strcpy(&cVar0, "MP_PlayerNameMounted_", 32);
	stradd(&cVar0, I2STR(bParam0), 32);
	if (iParam1 == 24)
	{
		bVar8 = "mp_death_mule";
	}
	else if (iParam1 == 23)
	{
		bVar8 = "mp_death_horse";
	}
	else if (iParam1 == 9)
	{
		bVar8 = "mp_death_bull";
	}
	else
	{
		bVar8 = "mp_death_mount";
	}
	if (bParam2)
	{
		UI_SET_STRING_FORMAT(&cVar0, UI_GET_STRING(bVar8), Function_92(bParam0, 1), "WWWWWWWWWWWWWWWW", 0);
	}
	else
	{
		UI_SET_STRING_FORMAT(&cVar0, UI_GET_STRING(bVar8), Function_92(bParam0, 1), GET_SLOT_NAME(bParam0), 0);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_358() //Position: 0xA1C0 / 41408
{
	if (Function_248(&bLocal_6))
	{
		Global_50170[5422].f_12 = 0.0f;
		Function_238(&bLocal_6);
	}
	return;
}

void Function_359(var uParam0, var uParam1, var uParam2, struct<33> Param3) //Position: 0xA1DD / 41437
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 33)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(21);
				if (Param3.f_32 >= 0)
				{
					Global_56092[21]++;
				}
				bVar0 = Global_56092[21];
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_361(21, 50, Function_363(), 3036);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_150(21, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_360(var uParam0, bool bParam1, int iParam2) //Position: 0xA267 / 41575
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(iParam2));
	return;
}

void Function_361(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xA27F / 41599
{
	Function_362(bParam0, 1);
	Global_50170[bParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_153(bParam0), 1.0f, false, 0);
	Function_202(bParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_321(iParam3);
	}
	Function_211(&Global_50170[bParam022] + 16, bParam1, bParam2);
	Function_173();
}

void Function_362(bool bParam0, bool bParam1) //Position: 0xA2E5 / 41701
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_282();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_INTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_FLOATSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			(*&Global_50170[bParam022] + 36)[bVar0] = 0.0f;
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_TIMERSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_OBJECTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
	}
	if (bParam1)
	{
		Global_50170[bParam022].f_28 = 0;
	}
	return;
}

bool Function_363() //Position: 0xA431 / 42033
{
	return "MP_Revenge_Icon_128";
}

void Function_364(var uParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) //Position: 0xA44D / 42061
{
	if (Global_83864.f_1264 <= 24 && !*uParam0 != 10)
	{
		switch (*uParam0)
		{
			case 0x00000000:
				if (StackVal == GET_LOCAL_SLOT())
				{
					*uParam0 = 10;
					Function_361(57, 50, Function_365(), 1060);
				}
				break;
			}
	}
}

bool Function_365() //Position: 0xA496 / 42134
{
	return "challenge_04_128";
}

void Function_366(var uParam0, var uParam1, struct<5> Param2, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) //Position: 0xA4AF / 42159
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	var uVar5;
	
	if (Global_83864.f_1264 <= 24 && !*uParam0 != 10)
	{
		switch (*uParam0)
		{
			case 0x00000000:
				iVar0 = 1;
				iVar1 = 1;
				bVar2 = 5;
				iVar4 = 1054;
				break;
			
			case 0x00000001:
				iVar0 = 2;
				iVar1 = 5;
				bVar2 = 25;
				iVar4 = 1055;
				break;
			
			case 0x00000002:
				iVar0 = 10;
				iVar1 = 25;
				iVar4 = 1056;
				break;
		}
		if (StackVal == GET_LOCAL_SLOT())
		{
			Global_50170[5522].f_28++;
			fVar3 = Function_217(55);
			if (Global_50170[5522].f_28 > iVar1)
			{
				if (iVar0 == 10)
				{
					*uParam1 = 1.0f;
					Function_361(55, 50, Function_365(), iVar4);
				}
				else
				{
					Function_367(55, &uVar5, 2, uParam0, iVar0, *uParam1, 0, 50, Global_50170[5522].f_28, bVar2, 50, Function_365(), iVar4);
				}
				Function_173();
			}
			else if (Global_50170[5522].f_28 >= 4294967295)
			{
				*uParam1 = TO_FLOAT(Global_50170[5522].f_28);
				*uParam1 = (*uParam1 / IntToFloat(iVar1));
				if (*uParam1 == fVar3)
				{
					Function_150(55, *uParam1, 1, Global_50170[5522].f_28, 4294967295, 4294967295);
				}
			}
		}
	}
}

void Function_367(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12) //Position: 0xA5D1 / 42449
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_152(iParam0) };
	Function_211(&Var0, bParam7, bParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_360(&fParam5, bParam8, bParam9);
	Function_150(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_207(iParam0, bParam9, bParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_321(iParam12);
	}
	Function_206(iParam0, 4);
	Function_173();
}

void Function_368(var uParam0, var uParam1, struct<5> Param2, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) //Position: 0xA647 / 42567
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	var uVar6;
	
	if (Global_83864.f_1264 <= 24 && !*uParam0 != 10)
	{
		switch (*uParam0)
		{
			case 0x00000000:
				iVar0 = 1;
				iVar3 = 3;
				bVar2 = 5;
				iVar5 = 1057;
				break;
			
			case 0x00000001:
				iVar0 = 2;
				iVar3 = 5;
				bVar2 = 7;
				iVar5 = 1058;
				break;
			
			case 0x00000002:
				iVar0 = 10;
				iVar3 = 7;
				iVar5 = 1059;
				break;
		}
		fVar4 = Function_217(56);
		if (StackVal == GET_LOCAL_SLOT())
		{
			bVar1 = Function_120(35);
		}
		if (bVar1 > iVar3)
		{
			bVar1 = false;
			if (iVar0 == 10)
			{
				*uParam1 = 1.0f;
				Function_361(56, 50, Function_365(), iVar5);
			}
			else
			{
				*uParam1 = TO_FLOAT(bVar1);
				*uParam1 = (*uParam1 / IntToFloat(bVar2));
				Function_367(56, &uVar6, 2, uParam0, iVar0, *uParam1, 0, 50, 0, bVar2, 50, Function_365(), iVar5);
			}
			Function_173();
		}
		else if (bVar1 >= 4294967295)
		{
			*uParam1 = TO_FLOAT(bVar1);
			*uParam1 = (*uParam1 / IntToFloat(iVar3));
			if (*uParam1 == fVar4)
			{
				Function_150(56, *uParam1, 1, bVar1, 4294967295, 4294967295);
			}
		}
	}
}

void Function_369(vector3 vParam0, char* cParam3, vector3 vParam4, char* cParam7) //Position: 0xA74C / 42828
{
	PLAYSTAT_STRING("Kill", cParam3);
	PLAYSTAT_STRING("nKill_meth", cParam7);
	Function_370(StackVal, StackVal, "Kill_MyPos", vParam0);
	Function_370(StackVal, StackVal, "Kill_ViPos", vParam4);
}

void Function_370(char* cParam0, vector3 vParam1) //Position: 0xA799 / 42905
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_371(int iParam0, bool bParam1) //Position: 0xA7D7 / 42967
{
	if (bParam1)
	{
		Function_96(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_93(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_372(struct<29> Param0) //Position: 0xA812 / 43026
{
	var uVar0;
	var uVar1;
	
	uVar0 = "challenge_01lvl2_128";
	uVar1 = "challenge_01_128";
	switch (Param0.f_12)
	{
		case 0x00000008:
			Function_394(&(Global_50170[18722]), 1, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_388(&(Global_50170[20722]), 8, 1, 1, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000000:
			Function_394(&(Global_50170[18822]), 4, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_388(&(Global_50170[20822]), 0, 4, 2, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000009:
			Function_394(&(Global_50170[18922]), 7, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_388(&(Global_50170[20922]), 9, 7, 3, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000005:
			Function_394(&(Global_50170[19022]), 8, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_388(&(Global_50170[21022]), 5, 8, 4, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000011:
			Function_394(&(Global_50170[19122]), 10, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_388(&(Global_50170[21122]), 17, 10, 5, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x0000000C:
			Function_394(&(Global_50170[19222]), 12, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_388(&(Global_50170[21222]), 12, 12, 6, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000006:
			Function_394(&(Global_50170[19322]), 16, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_388(&(Global_50170[21322]), 6, 16, 8, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x0000000F:
			Function_394(&(Global_50170[19422]), 17, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_388(&(Global_50170[21422]), 15, 17, 9, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000013:
			Function_394(&(Global_50170[19522]), 19, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_388(&(Global_50170[21522]), 19, 19, 10, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000001:
			Function_394(&(Global_50170[19622]), 23, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_388(&(Global_50170[21622]), 1, 23, 14, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000012:
			Function_394(&(Global_50170[19722]), 25, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_388(&(Global_50170[21722]), 18, 25, 15, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000014:
			Function_394(&(Global_50170[19822]), 27, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_388(&(Global_50170[21822]), 20, 27, 16, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x0000000E:
			Function_394(&(Global_50170[19922]), 29, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_388(&(Global_50170[21922]), 14, 29, 17, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x0000000A:
			Function_394(&(Global_50170[20022]), 31, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_388(&(Global_50170[22022]), 10, 31, 18, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000002:
			Function_394(&(Global_50170[20122]), 34, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_388(&(Global_50170[22122]), 2, 34, 19, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000010:
			Function_394(&(Global_50170[20222]), 36, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_388(&(Global_50170[22222]), 16, 36, 20, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x0000000D:
			Function_394(&(Global_50170[20322]), 39, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_388(&(Global_50170[22322]), 13, 39, 21, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x0000000B:
			Function_394(&(Global_50170[20422]), 42, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_388(&(Global_50170[22422]), 11, 42, 22, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000007:
			Function_394(&(Global_50170[20522]), 45, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_388(&(Global_50170[22522]), 7, 45, 23, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000003:
			Function_394(&(Global_50170[20622]), 48, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_388(&(Global_50170[22622]), 3, 48, 24, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000018:
			Function_373(&(Global_49399[1022]), 14, 5, 250.0f, 25, 250.0f, 50, 250.0f, 0, uVar1);
			break;
		
		case 0x00000017:
			Function_373(&(Global_49399[1222]), 21, 5, 250.0f, 25, 250.0f, 50, 250.0f, 0, uVar1);
			break;
	}
}

void Function_373(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, var uParam9) //Position: 0xAFB0 / 44976
{
	if (Global_83864.f_1264 > iParam1)
	{
		Function_374(uParam0, iParam1, iParam2, fParam3, iParam4, fParam5, iParam6, fParam7, iParam8, uParam9);
	}
}

void Function_374(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7, var uParam8, var uParam9) //Position: 0xAFDB / 45019
{
	switch (StackVal)
	{
		case 0x00000000:
			if (StackVal == 0)
			{
				Function_267(iParam0);
			}
			Function_375(iParam0, iParam1, uParam2, 1, uParam3, uParam8, bParam4, uParam5, uParam9);
			break;
		
		case 0x00000001:
			Function_375(iParam0, iParam1, bParam4, 2, uParam5, uParam8, bParam6, uParam7, uParam9);
			break;
		
		case 0x00000002:
			Function_375(iParam0, iParam1, bParam6, 3, uParam7, uParam8, 0, 0.0f, uParam9);
			break;
	}
}

void Function_375(int iParam0, int iParam1, bool bParam2, int iParam3, var uParam4, var uParam5, int iParam6, float fParam7, var uParam8) //Position: 0xB04E / 45134
{
	float fVar0;
	bool bVar1;
	struct<6> Var2;
	
	fVar0 = Function_387(*iParam0);
	Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_386(*iParam0) };
	UI_SET_STRING(&Var2, I2STR(bParam2));
	if (Global_83864.f_1264 > iParam1)
	{
		Global_49399[*iParam022].f_28++;
		bVar1 = iParam0->f_28;
	}
	if (bVar1 > bParam2)
	{
		if (iParam3 == 3)
		{
			Function_384(iParam0, uParam4, uParam8);
		}
		else
		{
			iParam0->f_4 = 2;
			Function_379(&(Global_49399[*iParam022]), iParam3, uParam4, uParam5, uParam8);
			Function_378(&(Global_49399[*iParam022]), bVar1, iParam6, fParam7);
		}
	}
	else if (bVar1 > 0)
	{
		iParam0->f_12 = Function_377(1.0f, (TO_FLOAT(bVar1) / TO_FLOAT(bParam2)));
		if (iParam0->f_12 == fVar0)
		{
			Function_376(*iParam0, iParam0->f_12, 1, bVar1, 4294967295, 4294967295, 0);
		}
	}
}

void Function_376(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6) //Position: 0xB112 / 45330
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	char* cVar20[24];
	char* cVar26[24];
	char* cVar32[24];
	char* cVar38[24];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_268(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		if (((iParam0 != 12 || iParam0 != 13) || iParam0 != 10) || iParam0 != 11)
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_272(iParam0) };
			stradd(&cVar0, "_info", 24);
			memcpy(&cVar6, StackVal, *(&Global_49399[iParam022] + 16), 6);
			stradd(&cVar6, "_num", 24);
			if (bParam3 >= 4294967295)
			{
				UI_SET_STRING(&cVar6, INT_TO_STRING(bParam3));
			}
			if (bParam4 >= 4294967295)
			{
				strcpy(&cVar12, "PVP_num2", 16);
				UI_SET_STRING(&cVar12, INT_TO_STRING(bParam4));
			}
			if (bParam5 >= 4294967295)
			{
				strcpy(&cVar16, "PVP_num3", 16);
				UI_SET_STRING(&cVar16, INT_TO_STRING(bParam5));
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Function_268(iParam0), &cVar0, 2, 2, false);
			Function_151(Function_268(iParam0), 0);
		}
		else
		{
			cVar20 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_272(iParam0) };
			if (Function_75() || Global_34165.f_44)
			{
				stradd(&cVar20, "_info_mp", 24);
			}
			else
			{
				stradd(&cVar20, "_info", 24);
			}
			if (bParam3 >= 4294967295)
			{
				strcpy(&cVar26, "AM_num", 24);
				stradd(&cVar26, INT_TO_STRING((1 + iParam6)), 24);
				UI_SET_STRING(&cVar26, INT_TO_STRING(bParam3));
			}
			if (bParam4 >= 4294967295)
			{
				strcpy(&cVar32, "AM_num", 24);
				stradd(&cVar32, INT_TO_STRING((2 + iParam6)), 24);
				UI_SET_STRING(&cVar32, INT_TO_STRING(bParam4));
			}
			if (bParam5 >= 4294967295)
			{
				strcpy(&cVar38, "AM_num", 24);
				stradd(&cVar38, INT_TO_STRING((3 + iParam6)), 24);
				UI_SET_STRING(&cVar38, INT_TO_STRING(bParam5));
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Function_268(iParam0), &cVar20, 2, 2, true);
			Function_151(Function_268(iParam0), 0);
		}
	}
}

var Function_377(int iParam0, int iParam1) //Position: 0xB29D / 45725
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_378(var uParam0, bool bParam1, bool bParam2, float fParam3) //Position: 0xB2B0 / 45744
{
	Function_275(*uParam0);
	Function_270(*uParam0, 0);
	if (bParam2 != 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_268(*uParam0), (TO_FLOAT(bParam1) / TO_FLOAT(bParam2)), false, 0);
	}
	else
	{
		LOG_ERROR("Divide by zero attempt in MP_WEAPON_CHALLENGE_LEVEL_START.... ya thats bad bail out");
		SET_JOURNAL_ENTRY_PROGRESS(Function_268(*uParam0), 0.0f, false, 0);
	}
	if (fParam3 != 0.0f)
	{
	}
	uParam0->f_4 = 1;
}

void Function_379(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xB355 / 45909
{
	bool bVar0;
	
	Function_383(*uParam0, bParam3);
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_01_128";
	}
	memcpy(&bVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_272(*uParam0), 4);
	Function_211(&bVar0, CEIL(bParam2), bParam4);
	uParam0->f_8 = uParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	Function_382(*uParam0, 4);
	Function_380();
}

void Function_380() //Position: 0xB3B4 / 46004
{
	if (!Function_75())
	{
		if (!Function_201(0, 0, 1, 1))
		{
			Function_193(1);
			Function_192(1, 8);
		}
		else
		{
			Function_381();
		}
	}
	else
	{
		Function_174(0);
	}
	return;
}

void Function_381() //Position: 0xB3E3 / 46051
{
	return;
}

void Function_382(int iParam0, int iParam1) //Position: 0xB3E9 / 46057
{
	if (Global_34165.f_44)
	{
		Function_93(&Global_49399[iParam022] + 32, iParam1);
	}
	else
	{
		Function_93(&Global_49310[iParam022] + 32, iParam1);
	}
	return;
}

void Function_383(bool bParam0, bool bParam1) //Position: 0xB416 / 46102
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_277();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_INTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_FLOATSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			if (Function_75() || Global_34165.f_44)
			{
				(*&Global_49399[bParam022] + 36)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_49310[bParam022] + 36)[bVar0] = 0.0f;
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_TIMERSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_OBJECTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			if (Function_75() || Global_34165.f_44)
			{
				(*&Global_49399[bParam022] + 36)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_49310[bParam022] + 36)[bVar0] = 0.0f;
			}
			bVar0++;
		}
	}
	if (bParam1)
	{
		if (Function_75() || Global_34165.f_44)
		{
			Global_49399[bParam022].f_28 = 0;
		}
		else
		{
			Global_49310[bParam022].f_28 = 0;
		}
	}
	return;
}

void Function_384(var uParam0, bool bParam1, bool bParam2) //Position: 0xB5D6 / 46550
{
	Function_383(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_268(*uParam0), 1.0f, false, 0);
	Function_385(*uParam0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	Function_211(&Global_49399[*uParam022] + 16, CEIL(bParam1), bParam2);
	Function_380();
	return;
}

void Function_385(int iParam0) //Position: 0xB63A / 46650
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_268(iParam0));
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_273(iParam0) };
	if (Function_75() || Global_34165.f_44)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_272(iParam0) };
	}
	else
	{
		memcpy(&Var6, StackVal, *(&Global_49310[iParam022] + 16), 6);
	}
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_271(iParam0) };
	APPEND_JOURNAL_ENTRY_DETAIL(Function_268(iParam0), &Var6, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Function_268(iParam0), true);
	SET_JOURNAL_ENTRY_PROGRESS(Function_268(iParam0), 1.0f, false, 0);
	return;
}

struct<24> Function_386(int iParam0) //Position: 0xB6AD / 46765
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_49399[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_387(bool bParam0) //Position: 0xB6DD / 46813
{
	if (Function_75() || Global_34165.f_44)
	{
		return Global_49399[bParam022].f_12;
	}
	return Global_49310[bParam022].f_12;
}

void Function_388(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, float fParam8, bool bParam9, float fParam10, int iParam11, var uParam12) //Position: 0xB705 / 46853
{
	if (Global_83864.f_1264 > iParam2)
	{
		Function_389(uParam0, iParam2, bParam5, bParam6, bParam7, fParam8, bParam9, fParam10, iParam4, iParam11, uParam12);
		if (StackVal == 10)
		{
			SET_WEAPON_GOLD(Function_112(), bParam1, true);
			Global_83823[bParam1] = 1;
			Function_321((2000 + iParam3));
		}
	}
}

void Function_389(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7, int iParam8, var uParam9, var uParam10) //Position: 0xB756 / 46934
{
	switch (StackVal)
	{
		case 0x00000000:
			if (StackVal == 0)
			{
				Function_279(uParam0, bParam2, bParam3);
			}
			Function_390(uParam0, iParam1, bParam2, iParam8, 1, bParam3, uParam9, bParam4, uParam5, uParam10);
			break;
		
		case 0x00000001:
			Function_390(uParam0, iParam1, bParam4, iParam8, 2, uParam5, uParam9, bParam6, uParam7, uParam10);
			break;
		
		case 0x00000002:
			Function_390(uParam0, iParam1, bParam6, iParam8, 3, uParam7, uParam9, 0, 0.0f, uParam10);
			break;
	}
}

void Function_390(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, float fParam8, var uParam9) //Position: 0xB7D3 / 47059
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	fVar0 = Function_217(*uParam0);
	if (Global_83864.f_1264 > iParam1)
	{
		Global_50170[*uParam022].f_28++;
		bVar1 = Global_50170[*uParam022].f_28;
		if (bVar1 > bParam2)
		{
			bVar2 = false;
			if (iParam3 == 4294967295)
			{
				bVar2 = true;
			}
			else if (StackVal == 10)
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				uParam0->f_4 = 2;
				if (iParam4 == 3)
				{
					Function_393(uParam0, uParam5, uParam9);
				}
				else
				{
					Function_392(uParam0, iParam4, uParam5, uParam6, uParam9);
					Function_391(uParam0, bVar1, iParam7, fParam8);
				}
			}
		}
		else if (bVar1 > 0)
		{
			uParam0->f_12 = Function_377(1.0f, (TO_FLOAT(bVar1) / TO_FLOAT(bParam2)));
			if (uParam0->f_12 == fVar0)
			{
				Function_150(*uParam0, uParam0->f_12, 1, bVar1, 4294967295, 4294967295);
			}
		}
	}
}

void Function_391(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xB8A1 / 47265
{
	Function_280(*uParam0);
	Function_207(*uParam0, bParam2, CEIL(bParam3), 0);
	if (bParam2 != 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_153(*uParam0), (TO_FLOAT(bParam1) / TO_FLOAT(bParam2)), false, 0);
	}
	else
	{
		LOG_ERROR("Divide by zero attempt in MP_WEAPON_CHALLENGE_LEVEL_START.... ya thats bad bail out");
		SET_JOURNAL_ENTRY_PROGRESS(Function_153(*uParam0), 0.0f, false, 0);
	}
	uParam0->f_4 = 1;
}

void Function_392(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xB946 / 47430
{
	struct<4> Var0;
	
	Function_362(*uParam0, bParam3);
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_152(*uParam0) };
	Function_211(&Var0, CEIL(bParam2), bParam4);
	uParam0->f_8 = uParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	Function_206(*uParam0, 4);
	Function_173();
}

void Function_393(var uParam0, bool bParam1, bool bParam2) //Position: 0xB9A4 / 47524
{
	Function_362(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_153(*uParam0), 1.0f, false, 0);
	Function_202(*uParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	Function_211(&Global_50170[*uParam022] + 16, CEIL(bParam1), bParam2);
	Function_173();
	return;
}

void Function_394(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, var uParam9) //Position: 0xBA09 / 47625
{
	if (Global_83864.f_1264 > iParam1)
	{
		Function_389(uParam0, iParam1, iParam2, fParam3, iParam4, fParam5, iParam6, fParam7, 4294967295, iParam8, uParam9);
	}
}

void Function_395(var uParam0, var uParam1, var uParam2, struct<13> Param3) //Position: 0xBA35 / 47669
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 44)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(51);
				if (Function_261(&bLocal_3, 2.0f))
				{
					Global_50170[5122].f_28 = 0;
				}
				if (StackVal != GET_LOCAL_SLOT() && Param3.f_12 != 28)
				{
					if (!Function_398(Param3))
					{
						Global_50170[5122].f_28++;
					}
				}
				bVar0 = Global_50170[5122].f_28;
				if (Function_248(&bLocal_3))
				{
					if (Function_250(&bLocal_3) > 2.0f)
					{
						if (bVar0 > 2)
						{
							Function_367(51, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 3, 100, Function_397(), 3101);
							*uParam2 = 0.0f;
							bVar0 = false;
						}
						else if (bVar0 >= 4294967295)
						{
							Function_360(uParam2, bVar0, 2);
							if (*uParam2 == fVar1)
							{
								Function_150(51, *uParam2, 1, bVar0, 4294967295, 4294967295);
							}
						}
					}
					else if (Function_261(&bLocal_3, 2.0f))
					{
						Global_50170[5122].f_28 = 0;
						*uParam2 = 0.0f;
					}
				}
				else
				{
					Function_396(&bLocal_3);
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_217(49);
				if (Function_261(&bLocal_3, 2.0f))
				{
					Global_50170[5122].f_28 = 0;
				}
				if (StackVal != GET_LOCAL_SLOT() && Param3.f_12 != 28)
				{
					if (!Function_398(Param3))
					{
						Global_50170[5122].f_28++;
					}
				}
				bVar0 = Global_50170[5122].f_28;
				if (Function_248(&bLocal_3))
				{
					if (Function_250(&bLocal_3) > 2.0f)
					{
						if (bVar0 > 3)
						{
							Function_367(51, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 5, 150, Function_397(), 3102);
							*uParam2 = 0.0f;
							bVar0 = false;
						}
						else if (bVar0 >= 4294967295)
						{
							Function_360(uParam2, bVar0, 3);
							if (*uParam2 == fVar1)
							{
								Function_150(51, *uParam2, 1, bVar0, 4294967295, 4294967295);
							}
						}
					}
					else if (Function_261(&bLocal_3, 2.0f))
					{
						Global_50170[5122].f_28 = 0;
						*uParam2 = 0.0f;
					}
				}
				else
				{
					Function_396(&bLocal_3);
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_217(51);
				if (Function_261(&bLocal_3, 2.0f))
				{
					Global_50170[5122].f_28 = 0;
				}
				if (StackVal != GET_LOCAL_SLOT() && Param3.f_12 != 28)
				{
					if (!Function_398(Param3))
					{
						Global_50170[5122].f_28++;
					}
				}
				bVar0 = Global_50170[5122].f_28;
				if (Function_248(&bLocal_3))
				{
					if (Function_250(&bLocal_3) > 2.0f)
					{
						if (bVar0 > 5)
						{
							Function_361(51, 150, Function_397(), 3103);
						}
						else if (bVar0 >= 4294967295)
						{
							Function_360(uParam2, bVar0, 5);
							if (*uParam2 == fVar1)
							{
								Function_150(51, *uParam2, 1, bVar0, 4294967295, 4294967295);
							}
						}
					}
					else if (Function_261(&bLocal_3, 2.0f))
					{
						Global_50170[5122].f_28 = 0;
						*uParam2 = 0.0f;
					}
				}
				else
				{
					Function_396(&bLocal_3);
				}
				break;
			}
	}
}

void Function_396(bool bParam0) //Position: 0xBCE0 / 48352
{
	Function_255(bParam0, 0.0f);
	return;
}

bool Function_397() //Position: 0xBCEC / 48364
{
	return "MP_HeavyWeapons_Icon_128";
}

bool Function_398(bool bParam0) //Position: 0xBD0D / 48397
{
	if (Function_69(bParam0, 1, 0) != 4294967295 && Function_70() != 4294967295)
	{
		return 0;
	}
	return Function_69(bParam0, 1, 0) != Function_70();
}

void Function_399(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0xBD35 / 48437
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 44)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(52);
				if ((StackVal != GET_LOCAL_SLOT() && Param3.f_12 != 28) && Function_18(Param3.f_40, 8388608))
				{
					if (!Function_398(Param3))
					{
						Global_50170[5222].f_28++;
					}
				}
				bVar0 = Global_50170[5222].f_28;
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_361(52, 150, Function_397(), 3104);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_150(52, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_400(var uParam0, var uParam1, var uParam2, struct<13> Param3) //Position: 0xBDE5 / 48613
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 44)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(50);
				if (StackVal != GET_LOCAL_SLOT() && (Param3.f_12 != 26 || Param3.f_12 != 27))
				{
					if (!Function_398(Param3))
					{
						Global_50170[5022].f_28++;
					}
				}
				bVar0 = Global_50170[5022].f_28;
				if (bVar0 > 10)
				{
					Function_367(50, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 50, 100, Function_397(), 3098);
					Function_360(uParam2, bVar0, 50);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 10);
					if (*uParam2 == fVar1)
					{
						Function_150(50, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_217(49);
				if (StackVal != GET_LOCAL_SLOT() && (Param3.f_12 != 26 || Param3.f_12 != 27))
				{
					if (!Function_398(Param3))
					{
						Global_50170[5022].f_28++;
					}
				}
				bVar0 = Global_50170[5022].f_28;
				if (bVar0 > 50)
				{
					Function_367(50, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 100, 150, Function_397(), 3099);
					Function_360(uParam2, bVar0, 100);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_150(50, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_217(50);
				if (StackVal != GET_LOCAL_SLOT() && (Param3.f_12 != 26 || Param3.f_12 != 27))
				{
					if (!Function_398(Param3))
					{
						Global_50170[5022].f_28++;
					}
				}
				bVar0 = Global_50170[5022].f_28;
				if (bVar0 > 100)
				{
					Function_361(50, 150, Function_397(), 3100);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 100);
					if (*uParam2 == fVar1)
					{
						Function_150(50, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_401(var uParam0, var uParam1, var uParam2, struct<13> Param3) //Position: 0xBFDD / 49117
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 44)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(49);
				if (StackVal != GET_LOCAL_SLOT() && Param3.f_12 != 28)
				{
					if (!Function_398(Param3))
					{
						Global_50170[4922].f_28++;
					}
				}
				bVar0 = Global_50170[4922].f_28;
				if (bVar0 > 10)
				{
					Function_367(49, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 50, 100, Function_397(), 3095);
					Function_360(uParam2, bVar0, 50);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 10);
					if (*uParam2 == fVar1)
					{
						Function_150(49, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_217(49);
				if (StackVal != GET_LOCAL_SLOT() && Param3.f_12 != 28)
				{
					if (!Function_398(Param3))
					{
						Global_50170[4922].f_28++;
					}
				}
				bVar0 = Global_50170[4922].f_28;
				if (bVar0 > 50)
				{
					Function_367(49, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 100, 150, Function_397(), 3096);
					Function_360(uParam2, bVar0, 100);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_150(49, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_217(49);
				if (StackVal != GET_LOCAL_SLOT() && Param3.f_12 != 28)
				{
					if (!Function_398(Param3))
					{
						Global_50170[4922].f_28++;
					}
				}
				bVar0 = Global_50170[4922].f_28;
				if (bVar0 > 100)
				{
					Function_361(49, 150, Function_397(), 3097);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 100);
					if (*uParam2 == fVar1)
					{
						Function_150(49, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_402(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0xC1CC / 49612
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 26)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(26);
				if (StackVal != GET_LOCAL_SLOT() && Function_18(Param3.f_40, 4194304))
				{
					if (!Function_398(Param3))
					{
						Global_50170[2622].f_28++;
					}
				}
				bVar0 = Global_50170[2622].f_28;
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_361(26, 150, Function_403(), 3041);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_150(26, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

bool Function_403() //Position: 0xC274 / 49780
{
	return "MP_TrickShot_Icon_128";
}

void Function_404(var uParam0, var uParam1, var uParam2, struct<5> Param3, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0xC292 / 49810
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 26)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(25);
				if (StackVal != GET_LOCAL_SLOT() && IS_ACTOR_USING_COVER(Function_112()))
				{
					if (!Function_398(Param3))
					{
						Global_50170[2522].f_28++;
					}
				}
				bVar0 = Global_50170[2522].f_28;
				if (bVar0 > 25)
				{
					Function_367(25, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 100, 100, Function_403(), 3039);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 25);
					if (*uParam2 == fVar1)
					{
						Function_150(25, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_217(25);
				if (StackVal != GET_LOCAL_SLOT() && IS_ACTOR_USING_COVER(Function_112()))
				{
					if (!Function_398(Param3))
					{
						Global_50170[2522].f_28++;
					}
				}
				bVar0 = Global_50170[2522].f_28;
				if (bVar0 > 100)
				{
					Function_361(25, 100, Function_403(), 3040);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 100);
					if (*uParam2 == fVar1)
					{
						Function_150(25, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_405(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0xC3CF / 50127
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 26)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(22);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3))
					{
						if (!Function_398(Param3))
						{
							if (Function_18(Param3.f_40, 1048576))
							{
								Global_50170[2222].f_28++;
							}
						}
					}
				}
				bVar0 = Global_50170[2222].f_28;
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_361(22, 150, Function_403(), 3038);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_150(22, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_406(var uParam0, var uParam1, var uParam2, struct<5> Param3, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0xC480 / 50304
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 28)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(27);
				if (StackVal != GET_LOCAL_SLOT() && IS_ACTOR_RIDING(Function_112()))
				{
					if (!Function_398(Param3))
					{
						Global_50170[2722].f_28++;
					}
				}
				bVar0 = Global_50170[2722].f_28;
				if (bVar0 > 10)
				{
					Function_367(27, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 50, 100, Function_407(), 3042);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 10);
					if (*uParam2 == fVar1)
					{
						Function_150(27, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_217(27);
				if (StackVal != GET_LOCAL_SLOT() && IS_ACTOR_RIDING(Function_112()))
				{
					if (!Function_398(Param3))
					{
						Global_50170[2722].f_28++;
					}
				}
				bVar0 = Global_50170[2722].f_28;
				if (bVar0 > 50)
				{
					Function_367(27, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 100, 150, Function_407(), 3043);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_150(27, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_217(27);
				if (StackVal != GET_LOCAL_SLOT() && IS_ACTOR_RIDING(Function_112()))
				{
					if (!Function_398(Param3))
					{
						Global_50170[2722].f_28++;
					}
				}
				bVar0 = Global_50170[2722].f_28;
				if (bVar0 > 100)
				{
					Function_361(27, 150, Function_407(), 3044);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 100);
					if (*uParam2 == fVar1)
					{
						Function_150(27, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

bool Function_407() //Position: 0xC659 / 50777
{
	return "MP_TDM2_Icon_128";
}

void Function_408(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0xC672 / 50802
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 33)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(19);
				if (iParam3 == Global_56352[19])
				{
					Global_56092[19]++;
				}
				bVar0 = Global_56092[19];
				if (bVar0 > 1)
				{
					Function_367(19, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 3, 100, Function_363(), 3034);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_150(19, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_217(19);
				if (iParam3 == Global_56352[19])
				{
					Global_56092[19]++;
				}
				bVar0 = Global_56092[19];
				if (bVar0 > 3)
				{
					Function_361(19, 100, Function_363(), 3035);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_150(19, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_409(var uParam0, var uParam1, var uParam2, struct<5> Param3, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0xC781 / 51073
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 11)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(9);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (PPP_GET_ELEMENT_MAGNITUDE(0) <= 0,75f)
					{
						Global_56092[9]++;
						bVar0 = Global_56092[9];
					}
					else
					{
						Function_411(9);
					}
				}
				if (bVar0 > 3)
				{
					*uParam0 = 2;
					Function_361(9, 150, Function_410(), 3023);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_150(9, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

bool Function_410() //Position: 0xC822 / 51234
{
	return "Killstreak2_icon_128";
}

void Function_411(int iParam0) //Position: 0xC83F / 51263
{
	Global_56092[iParam0] = 0;
	Global_56352[iParam0] = 4294967295;
	return;
}

void Function_412(var uParam0, var uParam1, var uParam2, struct<5> Param3, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0xC855 / 51285
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 11)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(8);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_ACTOR_RIDING(Function_112()))
					{
						Global_56092[8]++;
						bVar0 = Global_56092[8];
					}
					else
					{
						Function_411(8);
					}
				}
				if (bVar0 > 3)
				{
					Function_367(8, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_410(), 3021);
					Function_362(8, 1);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_150(8, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_217(8);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_ACTOR_RIDING(Function_112()))
					{
						Global_56092[8]++;
						bVar0 = Global_56092[8];
					}
					else
					{
						Function_411(8);
					}
				}
				if (bVar0 > 5)
				{
					Function_361(8, 100, Function_410(), 3022);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_150(8, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_413(var uParam0, var uParam1, var uParam2, struct<13> Param3) //Position: 0xC988 / 51592
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 11)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(7);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (Param3.f_12 != 22 || Param3.f_12 != 25)
					{
						Global_56092[7]++;
						bVar0 = Global_56092[7];
					}
					else
					{
						Function_411(7);
					}
				}
				if (bVar0 > 3)
				{
					Function_367(7, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_410(), 3019);
					Function_362(7, 1);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_150(7, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_217(7);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (Param3.f_12 != 22 || Param3.f_12 != 25)
					{
						Global_56092[7]++;
						bVar0 = Global_56092[7];
					}
					else
					{
						Function_411(7);
					}
				}
				if (bVar0 > 5)
				{
					Function_361(7, 100, Function_410(), 3020);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_150(7, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_414(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0xCABF / 51903
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 20)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(42);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3) && !Function_398(Param3))
					{
						if (Function_18(Param3.f_40, 1))
						{
							Global_50170[4222].f_28++;
						}
					}
				}
				bVar0 = Global_50170[4222].f_28;
				if (bVar0 > 5)
				{
					Function_367(42, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 25, 100, Function_415(), 3076);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_150(42, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_217(42);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3) && !Function_398(Param3))
					{
						if (Function_18(Param3.f_40, 1))
						{
							Global_50170[4222].f_28++;
						}
					}
				}
				bVar0 = Global_50170[4222].f_28;
				if (bVar0 > 25)
				{
					Function_367(42, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 75, 150, Function_415(), 3077);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 25);
					if (*uParam2 == fVar1)
					{
						Function_150(42, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_217(42);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3) && !Function_398(Param3))
					{
						if (Function_18(Param3.f_40, 1))
						{
							Global_50170[4222].f_28++;
						}
					}
				}
				bVar0 = Global_50170[4222].f_28;
				if (bVar0 > 75)
				{
					Function_361(42, 150, Function_415(), 3078);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 75);
					if (*uParam2 == fVar1)
					{
						Function_150(42, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

bool Function_415() //Position: 0xCCB1 / 52401
{
	return "MP_GrabtheBag2_Icon_128";
}

void Function_416(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0xCCD1 / 52433
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 15)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(38);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3) && !Function_398(Param3))
					{
						if (Function_18(Param3.f_40, 1))
						{
							if (Param3.f_12 == 22)
							{
								Global_50170[3822].f_28++;
							}
						}
					}
				}
				bVar0 = Global_50170[3822].f_28;
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_361(38, 150, Function_417(), 3064);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_150(38, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

bool Function_417() //Position: 0xCD86 / 52614
{
	return "MP_HoldYourOwn_Icon_128";
}

void Function_418(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0xCDA6 / 52646
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 15)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(34);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3) && !Function_398(Param3))
					{
						if (Function_18(Param3.f_40, 1))
						{
							Global_50170[3422].f_28++;
						}
					}
				}
				bVar0 = Global_50170[3422].f_28;
				if (bVar0 > 5)
				{
					Function_367(34, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 25, 100, Function_417(), 3056);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_150(34, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_217(34);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3) && !Function_398(Param3))
					{
						if (Function_18(Param3.f_40, 1))
						{
							Global_50170[3422].f_28++;
						}
					}
				}
				bVar0 = Global_50170[3422].f_28;
				if (bVar0 > 25)
				{
					Function_367(34, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 75, 150, Function_417(), 3057);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 25);
					if (*uParam2 == fVar1)
					{
						Function_150(34, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_217(34);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3) && !Function_398(Param3))
					{
						if (Function_18(Param3.f_40, 1))
						{
							Global_50170[3422].f_28++;
						}
					}
				}
				bVar0 = Global_50170[3422].f_28;
				if (bVar0 > 75)
				{
					Function_361(34, 150, Function_417(), 3058);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 75);
					if (*uParam2 == fVar1)
					{
						Function_150(34, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_419(var uParam0, var uParam1, var uParam2, struct<5> Param3, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0xCF98 / 53144
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 11)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(11);
				if (StackVal == GET_LOCAL_SLOT())
				{
					bVar0 = Function_120(35);
				}
				if (bVar0 > 20)
				{
					*uParam0 = 2;
					Function_361(11, 150, Function_410(), 3025);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 20);
					if (*uParam2 == fVar1)
					{
						Function_150(11, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_420(var uParam0, var uParam1, var uParam2, struct<5> Param3, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0xD014 / 53268
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 6)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(6);
				if (StackVal == GET_LOCAL_SLOT())
				{
					bVar0 = Function_120(35);
				}
				if (bVar0 > 5)
				{
					Function_367(6, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 10, 100, Function_410(), 3016);
					Function_362(6, 1);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_150(6, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_217(6);
				if (StackVal == GET_LOCAL_SLOT())
				{
					bVar0 = Function_120(35);
				}
				if (bVar0 > 10)
				{
					Function_367(6, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 15, 150, Function_410(), 3017);
					Function_362(6, 1);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 10);
					if (*uParam2 == fVar1)
					{
						Function_150(6, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_217(6);
				if (StackVal == GET_LOCAL_SLOT())
				{
					bVar0 = Function_120(35);
				}
				if (bVar0 > 15)
				{
					Function_361(6, 150, Function_410(), 3018);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 15);
					if (*uParam2 == fVar1)
					{
						Function_150(6, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_421(var uParam0, var uParam1, var uParam2, struct<5> Param3, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0xD171 / 53617
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 11)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(10);
				if (StackVal == GET_LOCAL_SLOT())
				{
					bVar0 = Function_120(35);
				}
				if (bVar0 > 10)
				{
					*uParam0 = 2;
					Function_361(10, 150, Function_410(), 3024);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 10);
					if (*uParam2 == fVar1)
					{
						Function_150(10, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_422(var uParam0, var uParam1, var uParam2, struct<5> Param3, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0xD1ED / 53741
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 6)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(5);
				if (StackVal == GET_LOCAL_SLOT())
				{
					bVar0 = Function_120(35);
				}
				if (bVar0 > 3)
				{
					Function_367(5, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_423(), 3013);
					Function_362(5, 1);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_150(5, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_217(5);
				if (StackVal == GET_LOCAL_SLOT())
				{
					bVar0 = Function_120(35);
				}
				if (bVar0 > 5)
				{
					Function_367(5, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 7, 150, Function_423(), 3014);
					Function_362(5, 1);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_150(5, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_217(5);
				if (StackVal == GET_LOCAL_SLOT())
				{
					bVar0 = Function_120(35);
				}
				if (bVar0 > 7)
				{
					Function_361(5, 150, Function_423(), 3015);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_360(uParam2, bVar0, 7);
					if (*uParam2 == fVar1)
					{
						Function_150(5, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

bool Function_423() //Position: 0xD346 / 54086
{
	return "MP_KillStreak_Icon_128";
}

void Function_424(bool bParam0, bool bParam1) //Position: 0xD365 / 54117
{
	bool bVar0;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		Function_224(35, 1);
		bVar0 = Function_120(35);
		if (bVar0 > 3)
		{
			Function_91("mp_killstreak_personal", I2STR(Function_120(35)));
		}
		switch (bVar0)
		{
			case 0x00000003:
				Function_54("GENMESS_TRIGRHAP", 0);
				Function_119(bParam0, bParam1, bVar0);
				break;
			
			case 0x00000006:
				Function_54("GENMESS_BIGGUNS", 0);
				Function_119(bParam0, bParam1, bVar0);
				break;
			
			case 0x00000008:
				Function_54("GENMESS_STONECOLDKILLA", 0);
				Function_119(bParam0, bParam1, bVar0);
				break;
			}
	}
	return;
}

var Function_425(int iParam0) //Position: 0xD431 / 54321
{
	switch (iParam0)
	{
		case 0x00000001:
			return "deathmsg_ARMADILLO";
			break;
		
		case 0x00000002:
			return "deathmsg_BAT";
			break;
		
		case 0x00000003:
			return "deathmsg_BEAR";
			break;
		
		case 0x00000004:
			return "deathmsg_BEAVER";
			break;
		
		case 0x00000005:
			return "deathmsg_BIGHORN";
			break;
		
		case 0x00000006:
			return "deathmsg_BOAR";
			break;
		
		case 0x00000007:
			return "deathmsg_BOBCAT";
			break;
		
		case 0x00000008:
			return "deathmsg_BUFFALO";
			break;
		
		case 0x00000009:
			return "deathmsg_BULL";
			break;
		
		case 0x0000000A:
			return "deathmsg_CHICKEN";
			break;
		
		case 0x0000000B:
			return "deathmsg_COUGAR";
			break;
		
		case 0x0000000C:
			return "deathmsg_COW";
			break;
		
		case 0x0000000D:
			return "deathmsg_COYOTE";
			break;
		
		case 0x0000000E:
			return "deathmsg_CROW";
			break;
		
		case 0x0000000F:
			return "deathmsg_DEER";
			break;
		
		case 0x00000010:
			return "deathmsg_DOG";
			break;
		
		case 0x00000011:
			return "deathmsg_DUCK";
			break;
		
		case 0x00000012:
			return "deathmsg_EAGLE";
			break;
		
		case 0x00000013:
			return "deathmsg_ELK";
			break;
		
		case 0x00000014:
			return "deathmsg_FOX";
			break;
		
		case 0x00000015:
			return "deathmsg_GOAT";
			break;
		
		case 0x00000016:
			return "deathmsg_HAWK";
			break;
		
		case 0x00000017:
			return "deathmsg_HORSE";
			break;
		
		case 0x00000018:
			return "deathmsg_MULE";
			break;
		
		case 0x00000019:
			return "deathmsg_OWL";
			break;
		
		case 0x0000001A:
			return "deathmsg_PIG";
			break;
		
		case 0x0000001B:
			return "deathmsg_RABBIT";
			break;
		
		case 0x0000001C:
			return "deathmsg_RACCOON";
			break;
		
		case 0x0000001E:
			return "deathmsg_SKUNK";
			break;
		
		case 0x0000001F:
			return "deathmsg_SNAKE";
			break;
		
		case 0x00000020:
			return "deathmsg_SONGBIRD";
			break;
		
		case 0x00000021:
			return "deathmsg_STREETDOG";
			break;
		
		case 0x00000022:
			return "deathmsg_VULTURE";
			break;
		
		case 0x00000023:
			return "deathmsg_WOLF";
			break;
	}
	return "deathmsg_animal";
}

var Function_426(int iParam0) //Position: 0xD7E8 / 55272
{
	switch (iParam0)
	{
		case 0x0000000B:
			return "deathmsg_BOUNTY_HUNTER";
			break;
		
		case 0x00000003:
			return "deathmsg_BYSTANDER";
			break;
		
		case 0x00000005:
			return "deathmsg_INDIAN_BYSTANDER";
			break;
		
		case 0x00000006:
			return "deathmsg_MEXICAN_BYSTANDER";
			break;
		
		case 0x00000004:
			return "deathmsg_U_S_BYSTANDER";
			break;
		
		case 0x0000000E:
			return "deathmsg_CATTLE_RUSTLER";
			break;
		
		case 0x00000019:
			return "deathmsg_DRUNK_N_DIRTY";
			break;
		
		case 0x0000000D:
			return "deathmsg_GENERIC_CRIMINAL";
			break;
		
		case 0x0000000C:
			return "deathmsg_MEXICAN_BANDITO";
			break;
		
		case 0x0000001A:
			return "deathmsg_SMUGGLERS";
			break;
		
		case 0x00000018:
			return "deathmsg_TREASURE_HUNTER";
			break;
		
		case 0x0000000F:
			return "deathmsg_INDIAN_RAIDER";
			break;
		
		case 0x00000009:
		case 0x00000008:
		case 0x00000007:
			return "deathmsg_LAW";
			break;
		
		case 0x0000000A:
			return "deathmsg_MEXICAN_LAW";
			break;
		
		case 0x0000001B:
			return "deathmsg_MEXICAN_REBEL";
			break;
		
		case 0x00000010:
			return "deathmsg_MEXICAN_SOLDIER";
			break;
	}
	return "deathmsg_somebody";
}

void Function_427(char* cParam0, bool bParam1) //Position: 0xDA42 / 55874
{
	PLAYSTAT_STRING(cParam0, GET_SLOT_NAME(bParam1));
	return;
}

void Function_428() //Position: 0xDA52 / 55890
{
	Function_437(56583);
	Function_429();
	return;
}

void Function_429() //Position: 0xDA62 / 55906
{
	NET_SCRIPTMSG_REGISTER_HANDLER(19, 56307);
	NET_SCRIPTMSG_REGISTER_HANDLER(20, 55932);
	return;
}

void Function_430(int iParam0) //Position: 0xDA7C / 55932
{
	struct<69> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 18);
	if (Var0.f_68 != GET_LOCAL_SLOT())
	{
		return;
	}
	bVar18 = Function_433(&Var0 + 32, &Var0);
	if (IS_OBJECT_VALID(bVar18))
	{
		Function_431(bVar18, 1, Var0.f_64);
	}
	return;
}

void Function_431(bool bParam0, bool bParam1, bool bParam2) //Position: 0xDAB7 / 55991
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!IS_OBJECT_IN_OBJECTSET(bParam0, Function_46()))
	{
		if (Function_432(bParam0) != 5)
		{
			ADD_OBJECT_TO_OBJECTSET(bParam0, Function_46());
		}
		bVar0 = GET_OBJECT_OWNER(bParam0);
		DESTROY_OBJECT_GLOW(bVar0);
		PLAY_SIMPLE_PROP_ANIMATION(bVar0, "crateMultiplayer_open", 0, 0, 2.0f, 0);
		if (bParam1)
		{
			bParam2 = (bParam2 - (NET_GET_NET_TIME() - GET_CURRENT_GAME_TIME()));
		}
		else
		{
			RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(bVar0, "LOCKER_OPEN_QUICK_MASTER"));
			bParam2 = GET_CURRENT_GAME_TIME();
		}
		DECOR_SET_FLOAT(bParam0, Function_45(), bParam2);
		bVar1 = GET_BLIP_ON_OBJECT(bVar0);
		if (IS_BLIP_VALID(bVar1))
		{
			REMOVE_BLIP(bVar1);
		}
		bVar1 = GET_BLIP_ON_OBJECT(bParam0);
		if (IS_BLIP_VALID(bVar1))
		{
			REMOVE_BLIP(bVar1);
		}
	}
	return;
}

int Function_432(bool bParam0) //Position: 0xDB88 / 56200
{
	return Function_42(DECOR_GET_INT(bParam0, Function_44()));
}

var Function_433(bool bParam0, bool bParam1) //Position: 0xDB99 / 56217
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT(bParam0);
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		return "";
	}
	bVar1 = FIND_OBJECT_IN_LAYOUT(bVar0, bParam1);
	if (!IS_OBJECT_VALID(bVar1))
	{
		return "";
	}
	bVar2 = FIND_OBJECT_IN_OBJECT(bVar1, Function_434());
	if (!IS_OBJECT_VALID(bVar2))
	{
		return "";
	}
	return bVar2;
}

var Function_434() //Position: 0xDBDF / 56287
{
	return "MPItemGiver";
}

void Function_435(int iParam0) //Position: 0xDBF3 / 56307
{
	var uVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	struct<69> Var6;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	if (NET_IS_SESSION_HOST())
	{
		bVar1 = Function_46();
		iVar2 = Function_134(15, GET_OBJECTSET_SIZE(bVar1));
		Var6.f_68 = uVar0;
		bVar3 = false;
		while (bVar3 <= iVar2)
		{
			bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar1);
			if (IS_OBJECT_VALID(bVar4))
			{
				if (DECOR_GET_FLOAT_VERBOSE(bVar4, Function_45(), &fVar5))
				{
					Var6.f_64 = (fVar5 + (NET_GET_NET_TIME() - GET_CURRENT_GAME_TIME()));
					strcpy(&Var6, GET_OBJECT_NAME(GET_OBJECT_OWNER(bVar4)), 32);
					bVar24 = Function_436(bVar4);
					if (IS_LAYOUTREF_VALID(bVar24))
					{
						strcpy(&Var6 + 32, GET_LAYOUT_NAME(bVar24), 32);
					}
					else
					{
						strcpy(&Var6 + 32, Function_129(), 32);
					}
					NET_SCRIPTMSG_SEND(1, 20, &Var6, 18, 0);
				}
			}
			bVar3++;
		}
	}
	return;
}

var Function_436(bool bParam0) //Position: 0xDC9F / 56479
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 1)
		{
			bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
		}
		while (!IS_LAYOUTREF_VALID(bVar0) && IS_OBJECT_VALID(bParam0))
		{
			bParam0 = GET_OBJECT_OWNER(bParam0);
			if (GET_OBJECT_TYPE(bParam0) == 1)
			{
				bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(bVar0))
		{
			return bVar0;
		}
	}
	return "";
}

void Function_437(int iParam0) //Position: 0xDCF9 / 56569
{
	NET_SCRIPTMSG_REGISTER_HANDLER(18, iParam0);
	return;
}

void Function_438(var uParam0) //Position: 0xDD07 / 56583
{
	struct<5> Var0;
	
	Function_439(uParam0, &Var0);
	if (StackVal != 5 && IS_SLOT_VALID(Var0))
	{
		Function_63("net_player_found_xpbonus", Var0);
	}
	return;
}

void Function_439(int iParam0, int iParam1) //Position: 0xDD43 / 56643
{
	bool bVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, iParam1, 18);
	bVar0 = Function_433(iParam1 + 40, iParam1 + 8);
	if (IS_OBJECT_VALID(bVar0))
	{
		Function_431(bVar0, 0, 0);
	}
	return;
}

void Function_440() //Position: 0xDD6F / 56687
{
	iLocal_10 = 0;
	iLocal_11 = 0;
	Function_2(49153, 0, 1);
	Function_443();
	Function_441();
	return;
}

void Function_441() //Position: 0xDD8A / 56714
{
	Function_442(4294967295, 0);
	return;
}

void Function_442(int iParam0, bool bParam1) //Position: 0xDD95 / 56725
{
	if (Global_76905.f_128 != iParam0)
	{
		Function_2(0x20000000, 1, 1);
	}
	Global_76905.f_128 = iParam0;
	Function_2(65536, bParam1, 1);
	return;
}

void Function_443() //Position: 0xDDC2 / 56770
{
	Function_444(Function_129());
	return;
}

void Function_444(char* cParam0) //Position: 0xDDCE / 56782
{
	if (Function_445(cParam0, &Global_76905))
	{
		Function_2(0x4000000, 1, 1);
	}
	strcpy(&Global_76905, cParam0, 64);
	return;
}

bool Function_445(bool bParam0, bool bParam1) //Position: 0xDDF2 / 56818
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

void Function_446(int iParam0) //Position: 0xDE26 / 56870
{
	struct<5> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 2);
	if (IS_SLOT_VALID(Var0))
	{
		Local_21[Var027].f_72 = 1;
		Local_21[Var027].f_80 = StackVal;
	}
	return;
}

void Function_447(int iParam0) //Position: 0xDE55 / 56917
{
	var uVar0[2];
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 3);
	NET_LOG(true, "Rezzing", "Emergency Revival recv'd from Player #%s (%s), for #%s (%s)", I2STR(uVar0[0]), GET_SLOT_NAME(uVar0[0]), I2STR(uVar0[1]), GET_SLOT_NAME(uVar0[1]));
	if (uVar0[1] == GET_LOCAL_SLOT())
	{
		if (Function_12(65536, 0))
		{
			Function_371(65536, 0);
		}
	}
	return;
}

void Function_448(int iParam0) //Position: 0xDEF5 / 57077
{
	var uVar0[2];
	bool bVar3;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 3);
	if (IS_SLOT_VALID(uVar0[0]) && IS_SLOT_VALID(uVar0[1]))
	{
		bVar3 = GET_LOCAL_SLOT();
		Function_353("nmp_rezzed", uVar0[0], uVar0[1]);
		if (bVar3 == uVar0[1])
		{
			Function_371(65536, 0);
		}
		else
		{
			Function_54("MPCOOP_PLAYERREVIVED", 0);
			if (bVar3 == uVar0[0])
			{
				Function_224(39, 1);
				Function_226(&Global_50170, 65, 1, 50.0f, 0, 0);
				Function_226(&Global_50170, 66, 10, 100.0f, 1, 0);
				Function_226(&Global_50170, 67, 50, 250.0f, 2, 0);
				Function_226(&Global_50170, 68, 250, 500.0f, 5, 0);
			}
		}
	}
	return;
}

void Function_449(int iParam0) //Position: 0xDFBD / 57277
{
	bool bVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &bVar0, 3);
	NET_LOG(true, "GENERAL MP", "############ DITCH ORDER RECEIVED FROM #%s, %s!", I2STR(bVar0), GET_SLOT_NAME(bVar0), false, 0);
	Function_245(64);
	return;
}

void Function_450() //Position: 0xE020 / 57376
{
	bool bVar0;
	char* cVar1[64];
	
	strcpy(&cVar1, UI_GET_STRING("title_xplvl_0_ui"), 64);
	bVar0 = false;
	while (bVar0 <= 16)
	{
		Local_21[bVar027] = 6;
		Local_21[bVar027].f_4 = 0;
		*(&Local_21[bVar027] + 8) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		Local_21[bVar027].f_72 = 0;
		Local_21[bVar027].f_80 = 0.0f;
		Local_21[bVar027].f_92 = 0;
		Local_21[bVar027].f_96 = 0;
		if (IS_OBJECT_VALID(Local_21[bVar027].f_100))
		{
			DESTROY_OBJECT(Local_21[bVar027].f_100);
		}
		if (Local_21[bVar027].f_88)
		{
			Local_21[bVar027].f_88 = 0;
			NET_GAMER_ICON_RESET_TIMER(bVar0, 0.0f);
		}
		NET_GAMER_SET_TEAM(bVar0, 0);
		bVar0++;
	}
	return;
}

bool Function_451(bool bParam0) //Position: 0xE0D0 / 57552
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

