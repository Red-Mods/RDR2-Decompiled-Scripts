//Decompiled with MagicRDR v1.0
//Function Count : 548
//Statics Count : 152
//Natives Count : 580
//Parameters Count : 0

#region Local Var
	var uLocal_0 = 0;
	bool bLocal_1 = false;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	int iLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
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
	var uLocal_45 = 11;
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
	var uLocal_67 = 11;
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
	vector3 vLocal_82 = { 0.0f, 0.0f, 0.0f };
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	float fLocal_88 = 0.0f;
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
	struct<9> Local_104[5];
	bool bLocal_150 = false;
	float fLocal_151 = 0.0f;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_85 = 31;
	iLocal_86 = 33;
	iLocal_87 = 1;
	fLocal_88 = 2.0f;
	Function_543(&(vLocal_104[09]));
	Function_419(&(vLocal_104[19]));
	Function_333(&(vLocal_104[29]));
	Function_279(&(vLocal_104[39]));
	Function_2(&(vLocal_104[49]));
	while ((!Function_1(256) && !IS_EXITFLAG_SET()) && !IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("Formations")))
	{
		WAIT(0);
	}
	iVar0 = 0;
	while (iVar0 <= vLocal_104)
	{
		Call_Loc(vLocal_104[iVar09]);
		vLocal_104[iVar09].f_32 = 1;
		iVar0++;
	}
	while (!IS_EXITFLAG_SET())
	{
		SET_DEBUG_DRAW(((Global_30900[5] || Global_30900[6]) || Global_30900[7]));
		iVar0 = 0;
		while (iVar0 <= vLocal_104)
		{
			if (bLocal_150)
			{
				PRINTSTRING("Time for Exec ");
				PRINTSTRING(&vLocal_104[iVar09] + 12);
				PRINTSTRING(": ");
				fLocal_151 = GET_PROFILE_TIME();
			}
			Call_Loc(vLocal_104[iVar09].y);
			if (bLocal_150)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fLocal_151));
				PRINTNL();
			}
			iVar0++;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(0);
		}
	}
	iVar0 = 0;
	while (iVar0 <= vLocal_104)
	{
		if (vLocal_104[iVar09].f_32)
		{
			Call_Loc(vLocal_104[iVar09].z);
		}
		iVar0++;
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

bool Function_1(int iParam0) //Position: 0x13F / 319
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_2(int iParam0) //Position: 0x15B / 347
{
	strcpy(iParam0 + 12, "EVENT-MONITOR_Z", 16);
	*iParam0 = 55167;
	iParam0->f_4 = 484;
	iParam0->f_8 = 405;
	iParam0->f_28 = 1;
	return;
}

void Function_3() //Position: 0x195 / 405
{
	bool bVar0;
	
	if (IS_ITERATOR_VALID(Global_26149))
	{
		DESTROY_ITERATOR(Global_26149);
	}
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		RELEASE_LAYOUT_REF(bVar0);
	}
	if (IS_OBJECTSET_VALID(Global_26315))
	{
		DESTROY_OBJECTSET(Global_26315);
	}
	return;
}

int Function_4() //Position: 0x1E4 / 484
{
	var uVar0;
	var uVar1;
	bool bVar2;
	
	Function_277(0);
	if (!IS_ITERATOR_VALID(Global_26149))
	{
		return 0;
	}
	Function_276();
	Function_274();
	Function_255();
	bVar2 = START_OBJECT_ITERATOR(Global_26149);
	while (IS_OBJECT_VALID(bVar2))
	{
		Function_254();
		Function_243(GET_EVENT_FROM_OBJECT(bVar2), &uVar0, &uVar1, 0);
		Function_237(GET_EVENT_FROM_OBJECT(bVar2));
		Function_233(GET_EVENT_FROM_OBJECT(bVar2));
		Function_232(GET_EVENT_FROM_OBJECT(bVar2));
		Function_148(GET_EVENT_FROM_OBJECT(bVar2));
		Function_141(GET_EVENT_FROM_OBJECT(bVar2));
		bVar2 = OBJECT_ITERATOR_NEXT(Global_26149);
	}
	Function_60(uVar0, uVar1);
	Function_38();
	Function_37();
	Function_28();
	Function_5();
	return 0;
}

void Function_5() //Position: 0x26A / 618
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (Global_63096 || Global_3380)
	{
		return;
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (IS_ACTOR_ALIVE(Global_34573))
		{
			if (!Function_27(Global_76847, 512))
			{
				if (Function_23(1, 0))
				{
					Function_17(Global_34573, 512, 2, 1);
					Function_17(Global_34573, 1024, 2, 1);
					Function_17(Global_34573, 8, 2, 1);
				}
			}
			if (!Function_27(Global_76847, 256))
			{
				if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(Global_34573)) && IS_ACTOR_VALID(Global_12976.f_36))
				{
					if (Function_14(Global_34573, Global_12976.f_36, 20.0f))
					{
						Function_17(Global_34573, 256, 2, 1);
					}
				}
			}
			if (!Function_27(Global_76847, 1048576))
			{
				if (DECOR_CHECK_EXIST(Global_34573, "bStartedGY"))
				{
					Function_17(Global_34573, 1048576, 2, 1);
					Function_17(Global_34573, 2097152, 2, 1);
					Function_17(Global_34573, 4194304, 2, 1);
				}
			}
			if (!Function_27(Global_76847, 8388608))
			{
				if (IS_WEAPON_DRAWN(Global_34573) && Function_13(0, 1, 0))
				{
					bVar0 = GET_WEAPON_IN_HAND(Global_34573);
					bVar0 = UNK_0xDB679ED9(bVar0);
					if (bVar0 == 47)
					{
						Function_17(Global_34573, 8388608, 2, 1);
					}
				}
			}
			if (!Function_27(Global_76847, 0x4000000))
			{
				if (Function_27(Global_76846, 0x2000000))
				{
					Function_17(Global_34573, 0x4000000, 2, 1);
				}
			}
			if (!Function_27(Global_76847, 128))
			{
				if (GET_ACTOR_HEALTH(Global_34573) > (GET_ACTOR_MAX_HEALTH(Global_34573) / 2.0f) && GET_ITEM_COUNT(Function_12(3), Global_34573) < 0)
				{
					Function_17(Global_34573, 128, 2, 1);
				}
			}
			if (!Function_27(Global_76847, 0x10000000))
			{
				iVar1 = GET_ITEM_COUNT(Function_12(3), Global_34573);
				iVar1 = (iVar1 + GET_ITEM_COUNT(Function_12(1), Global_34573));
				iVar1 = (iVar1 + GET_ITEM_COUNT(Function_12(0), Global_34573));
				iVar1 = (iVar1 + GET_ITEM_COUNT(Function_12(2), Global_34573));
				iVar1 = (iVar1 + GET_ITEM_COUNT(Function_12(8), Global_34573));
				iVar1 = (iVar1 + GET_ITEM_COUNT(Function_12(7), Global_34573));
				if (iVar1 >= 0)
				{
					Function_17(Global_34573, 0x10000000, 2, 1);
				}
			}
			if (!Function_27(Global_76847, 65536))
			{
				if (Function_10(0))
				{
					Function_17(Global_34573, 65536, 2, 1);
					Function_17(Global_34573, 131072, 2, 1);
				}
			}
			if (!Function_27(Global_76847, 0x20000000))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					bVar2 = GET_WEAPON_IN_HAND(Global_34573);
					bVar2 = UNK_0xDB679ED9(bVar2);
					if ((bVar2 != 41 || bVar2 != 42) || bVar2 != 44)
					{
						Function_17(Global_34573, 0x20000000, 2, 1);
					}
				}
			}
			if (!Function_27(Global_76847, 0x40000000))
			{
				if (Function_27(Global_76846, 8))
				{
					Function_17(Global_34573, 0x40000000, 2, 1);
				}
			}
			if (!Function_27(Global_76848, 2))
			{
				if (GET_ACTOR_HEALTH(Global_34573) > 60.0f)
				{
					Function_17(Global_34573, 2, 3, 1);
					Function_17(Global_34573, 4, 3, 1);
				}
			}
			if (!Function_27(Global_76848, 8))
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
				{
					bVar3 = GET_MATERIAL_AT_VECTOR(&Global_34574);
					if (((!Function_9(bVar3, 64) && !Function_9(bVar3, 32)) && !HUD_IS_SHOWING_HELP_TEXT()) && Function_8(Global_34573, 0) <= 5.0f)
					{
						if (!DECOR_CHECK_EXIST(Global_34573, "fOffRoadTimer"))
						{
							DECOR_SET_FLOAT(Global_34573, "fOffRoadTimer", GET_CURRENT_GAME_TIME());
						}
						else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Global_34573, "fOffRoadTimer")) < 10.0f)
						{
							Function_17(Global_34573, 8, 3, 1);
							DECOR_REMOVE(Global_34573, "fOffRoadTimer");
						}
					}
					else if (DECOR_CHECK_EXIST(Global_34573, "fOffRoadTimer"))
					{
						DECOR_REMOVE(Global_34573, "fOffRoadTimer");
					}
				}
			}
			if (!Function_27(Global_76848, 16))
			{
				if (Function_7(12))
				{
					Function_17(Global_34573, 16, 3, 1);
					Function_17(Global_34573, 32, 3, 1);
				}
			}
			if (!Function_27(Global_76848, 256))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_13(0, 1, 0) && Function_6(GET_WEAPON_IN_HAND(Global_34573)))
					{
						Function_17(Global_34573, 256, 3, 1);
					}
				}
			}
			if (!Function_27(Global_76848, 64))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					bVar4 = GET_WEAPON_IN_HAND(Global_34573);
					bVar4 = UNK_0xDB679ED9(bVar4);
					if (bVar4 == 44)
					{
						Function_17(Global_34573, 64, 3, 1);
					}
				}
			}
			if (!Function_27(Global_76848, 128))
			{
				if (IS_ACTOR_VALID(Global_12976.f_36))
				{
					if (Function_14(Global_34573, Global_12976.f_36, 10.0f) && !IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						Function_17(Global_34573, 128, 3, 1);
					}
				}
			}
		}
	}
	return;
}

bool Function_6(bool bParam0) //Position: 0x6F8 / 1784
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	bParam0 = UNK_0xDB679ED9(bParam0);
	switch (bParam0)
	{
		case 0x00000027:
		case 0x00000029:
		case 0x00000028:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
			return 1;
			break;
	}
	return 0;
}

bool Function_7(int iParam0) //Position: 0x73E / 1854
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

float Function_8(bool bParam0, bool bParam1) //Position: 0x753 / 1875
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

bool Function_9(bool bParam0, int iParam1) //Position: 0x772 / 1906
{
	return (bParam0 && iParam1) == 0;
}

bool Function_10(int iParam0) //Position: 0x77F / 1919
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_13172[Function_11(iParam0)11].f_12 < 0;
}

int Function_11(int iParam0) //Position: 0x7E5 / 2021
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

var Function_12(bool bParam0) //Position: 0x8A7 / 2215
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

int Function_13(int iParam0, int iParam1, int iParam2) //Position: 0x998 / 2456
{
	var uVar0;
	bool bVar1;
	
	uVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = IS_BUTTON_DOWN(uVar0, iParam0, iParam1, iParam2);
	if (bVar1)
	{
		switch (iParam0)
		{
			case 0x0000000E:
			case 0x0000000C:
				if (IS_BUTTON_DOWN(uVar0, 15, iParam1, iParam2) || IS_BUTTON_DOWN(uVar0, 13, iParam1, iParam2))
				{
					return 0;
				}
				break;
			
			case 0x0000000F:
			case 0x0000000D:
				if (IS_BUTTON_DOWN(uVar0, 14, iParam1, iParam2) || IS_BUTTON_DOWN(uVar0, 12, iParam1, iParam2))
				{
					return 0;
				}
				break;
			}
	}
	return bVar1;
}

bool Function_14(var uParam0, var uParam1, float fParam2) //Position: 0xA15 / 2581
{
	float fVar0;
	
	fVar0 = Function_15(uParam0, uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_15(bool bParam0, bool bParam1) //Position: 0xA32 / 2610
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_16(&uVar0, &uVar3);
	return iVar6;
}

var Function_16(var uParam0, int iParam1) //Position: 0xA51 / 2641
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_17(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xA6F / 2671
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_19(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_18(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_18(char* cParam0, int iParam1) //Position: 0xADB / 2779
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

bool Function_19(bool bParam0, var uParam1, int iParam2) //Position: 0xB12 / 2834
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
		if (Function_21(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_20(uVar0))
		{
			case 0x00000002:
				if (!Function_27(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_20(char* cParam0) //Position: 0xB8A / 2954
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

int Function_21(int iParam0) //Position: 0xC2B / 3115
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_22(&iVar1, 2147483648);
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

void Function_22(var uParam0, int iParam1) //Position: 0xC68 / 3176
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

bool Function_23(int iParam0, bool bParam1) //Position: 0xC7B / 3195
{
	int iVar0;
	
	iVar0 = Function_25(iParam0);
	if (!Function_24(iVar0))
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

bool Function_24(int iParam0) //Position: 0xCB8 / 3256
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_25(int iParam0) //Position: 0xCCF / 3279
{
	if (!Function_26(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_26(int iParam0) //Position: 0xCE9 / 3305
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_27(int iParam0, int iParam1) //Position: 0xCFF / 3327
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_28() //Position: 0xD12 / 3346
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	vector3 vVar8;
	vector3 vVar11;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(Global_26315))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Global_26315);
		if (IS_OBJECT_VALID(bVar2))
		{
			if (GET_OBJECT_TYPE(bVar2) == 15)
			{
				bVar1 = GET_ACTOR_FROM_OBJECT(bVar2);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (DECOR_CHECK_EXIST(bVar1, "fZombieExecutedTime"))
					{
						if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bVar1, "fZombieExecutedTime")) <= 0.3f)
						{
							REMOVE_OBJECT_FROM_OBJECTSET(bVar1, Global_26315);
							DECOR_REMOVE(bVar1, "fZombieExecutedTime");
							Function_31(bVar1, 1);
						}
					}
					else if (DECOR_CHECK_EXIST(bVar1, "fToxicKilledTime"))
					{
						if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bVar1, "fToxicKilledTime")) <= 2.0f)
						{
							REMOVE_OBJECT_FROM_OBJECTSET(bVar1, Global_26315);
							DECOR_REMOVE(bVar1, "fToxicKilledTime");
							bVar3 = "";
							if (DECOR_CHECK_EXIST(bVar1, "iToxicKilledPerp"))
							{
								bVar3 = DECOR_GET_INT(bVar1, "iToxicKilledPerp");
								DECOR_REMOVE(bVar1, "iToxicKilledPerp");
							}
							Function_30();
							vVar4 = { StackVal, StackVal, Function_30() };
							GET_OBJECT_NAMED_BONE_POSITION(bVar1, "spine00", &vVar4);
							SET_DRAW_ACTOR(bVar1, 0);
							SET_OBJECT_COLLIDE_WITH_MOVABLES(bVar1, 0);
							DECOR_SET_BOOL(bVar1, "corpse_loot_gringo", false);
							DECOR_SET_BOOL(bVar1, "NoCorpse", true);
							Function_29(&vVar4, "ToxicZombieExplosion", bVar3, 0);
							PLAY_SOUND_FROM_POSITION("ZOMBIE_TOXIC_EXPLOSION_MASTER", vVar4);
						}
					}
				}
			}
			else if (GET_OBJECT_TYPE(bVar2) == 29)
			{
				if (DECOR_CHECK_EXIST(bVar2, "fToxicKilledTime"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bVar2, "fToxicKilledTime")) <= 2.0f)
					{
						REMOVE_OBJECT_FROM_OBJECTSET(bVar2, Global_26315);
						DECOR_REMOVE(bVar2, "fToxicKilledTime");
						bVar7 = "";
						if (DECOR_CHECK_EXIST(bVar2, "iToxicKilledPerp"))
						{
							bVar7 = DECOR_GET_INT(bVar2, "iToxicKilledPerp");
							DECOR_REMOVE(bVar2, "iToxicKilledPerp");
						}
						Function_30();
						vVar8 = { StackVal, StackVal, Function_30() };
						Function_30();
						vVar11 = { StackVal, StackVal, Function_30() };
						GET_OBJECT_NAMED_BONE_POSITION(bVar2, "spine00", &vVar8);
						vVar11 = { StackVal, StackVal, vVar8 };
						vVar8.f_4 = (vVar8.y - 100.0f);
						SET_OBJECT_POSITION(bVar2, vVar8);
						SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar2), 0);
						SET_DRAW_OBJECT(bVar2, 0);
						SET_OBJECT_COLLIDE_WITH_MOVABLES(bVar2, 0);
						Function_29(&vVar11, "ToxicZombieExplosion", bVar7, 0);
						PLAY_SOUND_FROM_POSITION("ZOMBIE_TOXIC_EXPLOSION_MASTER", vVar11);
					}
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_29(var uParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0x106C / 4204
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(uParam0, cParam1, bParam2, &vVar0, iParam3);
}

vector3 Function_30() //Position: 0x1088 / 4232
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_31(bool bParam0, bool bParam1) //Position: 0x1091 / 4241
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 23, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 24, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 25, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 26, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 27, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 28, !bParam1);
		if (!bParam1)
		{
			ACTOR_ENABLE_VARIABLE_MESH(bParam0, 29, false);
			ACTOR_ENABLE_VARIABLE_MESH(bParam0, 30, false);
		}
		else
		{
			if (((Function_36() || Function_35(bParam0)) || Function_34(bParam0)) || Function_33(bParam0, 1))
			{
				ACTOR_ENABLE_VARIABLE_MESH(bParam0, 29, true);
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(bParam0, 30, true);
			}
			if (GET_OBJECT_NAMED_BONE_POSITION(GET_OBJECT_FROM_ACTOR(bParam0), "head", &vVar0))
			{
				bVar3 = CREATE_VOLUME_IN_LAYOUT(bParam0, Function_32(), 2, vVar0, 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
				RESET_RMPTFX_IN_VOLUME(bVar3);
				DESTROY_VOLUME(bVar3);
			}
			if (DECOR_CHECK_EXIST(bParam0, "oLeftEyeGlow"))
			{
				bVar4 = DECOR_GET_OBJECT(bParam0, "oLeftEyeGlow");
				if (IS_OBJECT_VALID(bVar4))
				{
					UNK_0x1A59E608(bVar4);
				}
				DECOR_REMOVE(bParam0, "oLeftEyeGlow");
			}
			if (DECOR_CHECK_EXIST(bParam0, "oRightEyeGlow"))
			{
				bVar4 = DECOR_GET_OBJECT(bParam0, "oRightEyeGlow");
				if (IS_OBJECT_VALID(bVar4))
				{
					UNK_0x1A59E608(bVar4);
				}
				DECOR_REMOVE(bParam0, "oRightEyeGlow");
			}
			DECOR_SET_BOOL(bParam0, "Zombie_NoHead", true);
			Function_30();
			bVar5 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_32(), "blood_zombie_shotgun_exit", "head", bParam0, Function_30(), bParam0);
			if (IS_OBJECT_VALID(bVar5))
			{
				Function_30();
				UNK_0x6745191B(bVar5, Function_30());
			}
		}
	}
	return;
}

var Function_32() //Position: 0x125C / 4700
{
	int iVar0;
	
	return iVar0;
}

bool Function_33(bool bParam0, int iParam1) //Position: 0x1264 / 4708
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((iVar0 != 1252 && iParam1) || (iVar0 != 1253 && iParam1)) || iVar0 != 541) || iVar0 != 542) || iVar0 != 543) || iVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_34(bool bParam0) //Position: 0x12A6 / 4774
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1228 && iVar0 >= 1239)
	{
		return 1;
	}
	return 0;
}

bool Function_35(bool bParam0) //Position: 0x12C6 / 4806
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1204 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

var Function_36() //Position: 0x12E6 / 4838
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

void Function_37() //Position: 0x12F9 / 4857
{
	int iVar0;
	bool bVar1;
	
	if (Global_63096)
	{
		if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			iVar0 = 0;
			while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (!DECOR_CHECK_EXIST(bVar1, "bToggledZombieHead"))
					{
						if (!IS_ACTOR_PLAYER(bVar1))
						{
							ACTOR_ENABLE_VARIABLE_MESH(bVar1, 0, false);
							ACTOR_ENABLE_VARIABLE_MESH(bVar1, 1, true);
							ACTOR_ENABLE_VARIABLE_MESH(bVar1, 2, true);
							ACTOR_ENABLE_VARIABLE_MESH(bVar1, 3, false);
							ACTOR_ENABLE_VARIABLE_MESH(bVar1, 4, false);
							Function_31(bVar1, 0);
							DECOR_SET_BOOL(bVar1, "bToggledZombieHead", true);
						}
					}
				}
				iVar0++;
			}
		}
	}
	return;
}

void Function_38() //Position: 0x139B / 5019
{
	bool bVar0;
	
	bVar0 = GET_WEAPON_IN_HAND(Global_34573);
	if (SHIFT_RIGHT(Global_49309, 8) & 255 >= 0)
	{
		Function_54(bVar0);
	}
	if (Global_49309 & 255 >= 0)
	{
		Function_53(bVar0);
	}
	if (Function_9(Global_49309, 0x40000000))
	{
		Function_39(135, 1, 0, 0);
	}
	if (Function_9(Global_49309, 0x20000000))
	{
		Function_39(134, 1, 0, 0);
	}
	if (Function_9(Global_49309, 0x10000000))
	{
		Function_39(136, 1, 0, 0);
	}
	if (Function_9(Global_49309, 0x8000000))
	{
		Function_39(137, 1, 0, 0);
	}
	Global_49309 = 0;
	return;
}

int Function_39(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x142C / 5164
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
	Function_52(iParam0, TO_FLOAT(bParam1), 1);
	Function_51(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_40(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_40(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x164C / 5708
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_50(390))), 32);
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
					bVar19 = (Function_49(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_49(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_47(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_44(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_42(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_41(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_32(), &Var9);
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

var Function_41(int iParam0) //Position: 0x1C79 / 7289
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_42(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1C8A / 7306
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_43("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_43("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_43("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_43(char* cParam0, char* cParam1) //Position: 0x1D7F / 7551
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_44(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1D98 / 7576
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_46(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_45(Function_46(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_45(int iParam0, int iParam1) //Position: 0x1DFD / 7677
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_46(int iParam0, bool bParam1) //Position: 0x1E0F / 7695
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_47(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1E21 / 7713
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
	if (((Function_48(iParam0) != 19 || Function_48(iParam0) != 17) || Function_48(iParam0) != 10) || Function_48(iParam0) != 9)
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

int Function_48(int iParam0) //Position: 0x1F51 / 8017
{
	return Global_35278[iParam020].f_48;
}

float Function_49(int iParam0) //Position: 0x1F60 / 8032
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_50(int iParam0) //Position: 0x1F99 / 8089
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_51(int iParam0) //Position: 0x1FD6 / 8150
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x2170 / 8560
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

void Function_53(bool bParam0) //Position: 0x23B4 / 9140
{
	int iVar0;
	
	switch (bParam0)
	{
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
		case 0x00000018:
		case 0x00000019:
		case 0x0000001D:
			break;
		
		default:
			Function_39(49, 1, 0, 0);
			break;
	}
	iVar0 = (50 + bParam0);
	Function_39(iVar0, 1, 0, 0);
	return;
}

void Function_54(bool bParam0) //Position: 0x2404 / 9220
{
	int iVar0;
	
	switch (bParam0)
	{
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
		case 0x00000018:
		case 0x00000019:
		case 0x0000001D:
			break;
		
		default:
			Function_59(49, (Function_50(49) + 1.0f));
			Function_39(89, 1, 0, 0);
			Function_58(6);
			Function_55(6);
			break;
	}
	iVar0 = (50 + bParam0);
	Function_59(iVar0, (Function_50(iVar0) + 1.0f));
	iVar0 = (90 + bParam0);
	Function_39(iVar0, 1, 0, 0);
	return;
}

void Function_55(int iParam0) //Position: 0x247C / 9340
{
	if (iParam0 == 6)
	{
		if (Global_12976.f_144 >= 0)
		{
			Global_12976.f_144 = (Global_12976.f_144 * 4294967295);
		}
		else if (Global_12976.f_144 <= 0)
		{
			Global_12976.f_144 = 0;
		}
	}
	else if (iParam0 == 11)
	{
		if (Global_12976.f_144 <= 0)
		{
			Global_12976.f_144 = (Global_12976.f_144 * 4294967295);
		}
		Global_12976.f_144++;
		if (Global_12976.f_144 >= Function_57(48))
		{
			Function_56(48, Global_12976.f_144, 0);
		}
	}
	return;
}

int Function_56(int iParam0, bool bParam1, bool bParam2) //Position: 0x24F3 / 9459
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
		Function_52(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_51(iParam0);
	if (bParam2)
	{
		Function_40(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_57(int iParam0) //Position: 0x278E / 10126
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

void Function_58(int iParam0) //Position: 0x27CF / 10191
{
	if (iParam0 == 6)
	{
		if (Global_12976.f_140 >= 0)
		{
			Global_12976.f_140 = (Global_12976.f_140 * 4294967295);
		}
		else if (Global_12976.f_140 <= 0)
		{
			Global_12976.f_140 = 0;
		}
	}
	else if (iParam0 == 10)
	{
		if (Global_12976.f_140 <= 0)
		{
			Global_12976.f_140 = (Global_12976.f_140 * 4294967295);
		}
		Global_12976.f_140++;
		if (Global_12976.f_140 >= Function_57(47))
		{
			Function_56(47, Global_12976.f_140, 0);
		}
	}
	return;
}

int Function_59(int iParam0, int iParam1) //Position: 0x2846 / 10310
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

void Function_60(int iParam0, int iParam1) //Position: 0x2886 / 10374
{
	if (StackVal == 1)
	{
		if (iParam1 >= 0)
		{
			if (iParam0 >= 0)
			{
				Function_140(0, 10, 1);
			}
			else
			{
				Function_140(0, 10, 0);
			}
			Function_61(0, &Global_49310[022] + 8, &Global_49310[022] + 12, iParam0);
		}
	}
	return;
}

void Function_61(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x28CD / 10445
{
	bool bVar0;
	float fVar1;
	
	switch (*uParam1)
	{
		case 0x00000000:
			Function_139(bParam0);
			fVar1 = Function_138(bParam0);
			if (Function_137(&iLocal_2))
			{
				if (Function_135(&iLocal_2) < 10.0f)
				{
					Global_49310[bParam022].f_28 = 0;
					bVar0 = Global_49310[bParam022].f_28;
					*uParam2 = 0.0f;
					Function_134(&iLocal_2);
					Function_133(bParam0, 1);
					Function_132(bParam0, *uParam2, 0, bVar0, 4294967295, 4294967295, 0);
				}
			}
			if ((((Global_50170[23122].f_28 != 0 || Global_50170[23122].f_28 != 1) || Global_50170[23122].f_28 != 2) || Global_50170[23122].f_28 != 4) || Global_50170[23122].f_28 != 3)
			{
				Global_49310[bParam022].f_28++;
				if (!Function_137(&iLocal_2))
				{
					Function_130(&iLocal_2);
					Function_140(bParam0, 5, 1);
				}
			}
			bVar0 = Global_49310[bParam022].f_28;
			if (Function_137(&iLocal_2))
			{
				if (bVar0 <= 5 && Function_135(&iLocal_2) >= 10.0f)
				{
					*uParam2 = 0.0f;
					Function_134(&iLocal_2);
					Function_126(bParam0, uParam1, 1, 10, 0, 1);
					Function_125(bParam0);
				}
				else
				{
					*uParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(5));
					if (*uParam2 == fVar1)
					{
						Function_132(bParam0, *uParam2, 1, bVar0, 4294967295, 4294967295, 22);
					}
				}
			}
			break;
		
		case 0x00000001:
			Function_125(bParam0);
			if (Function_124(bParam0, 10) == 1)
			{
				Function_140(bParam0, 5, 1);
				Global_49310[bParam022].f_28 = (Global_49310[bParam022].f_28 + iParam3);
				bVar0 = Global_49310[bParam022].f_28;
				if (bVar0 > 10)
				{
					*uParam2 = 0.0f;
					Function_126(bParam0, uParam1, 2, 5, 0, 1);
					Function_125(bParam0);
				}
				else
				{
					*uParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(10));
					if (*uParam2 == fVar1)
					{
						Function_132(bParam0, *uParam2, 1, bVar0, 4294967295, 4294967295, 22);
					}
				}
			}
			else
			{
				Global_49310[bParam022].f_28 = 0;
				bVar0 = Global_49310[bParam022].f_28;
				*uParam2 = 0.0f;
				Function_132(bParam0, *uParam2, 1, bVar0, 4294967295, 4294967295, 22);
			}
			break;
		
		case 0x00000002:
			Function_125(bParam0);
			if (Function_124(bParam0, 10) == 1)
			{
				Function_140(bParam0, 5, 1);
				if ((((Global_50170[23122].f_28 != 0 || Global_50170[23122].f_28 != 1) || Global_50170[23122].f_28 != 2) || Global_50170[23122].f_28 != 4) || Global_50170[23122].f_28 != 3)
				{
					if (Global_50170[23222].f_28 == 1)
					{
						Global_49310[bParam022].f_28++;
					}
				}
				bVar0 = Global_49310[bParam022].f_28;
				if (bVar0 > 5)
				{
					*uParam2 = 0.0f;
					Function_126(bParam0, uParam1, 3, 4, 0, 1);
					Function_125(bParam0);
				}
				else
				{
					*uParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(5));
					if (*uParam2 == fVar1)
					{
						Function_132(bParam0, *uParam2, 1, bVar0, 4294967295, 4294967295, 22);
					}
				}
			}
			else
			{
				Global_49310[bParam022].f_28 = 0;
				bVar0 = Global_49310[bParam022].f_28;
				*uParam2 = 0.0f;
				Function_133(bParam0, 1);
				Function_132(bParam0, *uParam2, 0, bVar0, 4294967295, 4294967295, 0);
			}
			break;
		
		case 0x00000003:
			Function_125(bParam0);
			if (Function_124(bParam0, 10) == 1)
			{
				Function_140(bParam0, 5, 1);
				if (Global_50170[23122].f_28 != 0 && Function_124(bParam0, 1) == 1)
				{
					Global_49310[bParam022].f_28++;
					Function_140(bParam0, 1, 1);
				}
				else if (Global_50170[23122].f_28 != 1 && Function_124(bParam0, 2) == 1)
				{
					Global_49310[bParam022].f_28++;
					Function_140(bParam0, 2, 1);
				}
				else if (Global_50170[23122].f_28 != 2 && Function_124(bParam0, 3) == 1)
				{
					Global_49310[bParam022].f_28++;
					Function_140(bParam0, 3, 1);
				}
				else if (Global_50170[23122].f_28 != 3 && Function_124(bParam0, 4) == 1)
				{
					Global_49310[bParam022].f_28++;
					Function_140(bParam0, 4, 1);
				}
				bVar0 = Global_49310[bParam022].f_28;
				if (bVar0 > 4)
				{
					*uParam2 = 0.0f;
					Function_126(bParam0, uParam1, 4, 5, 0, 1);
					Function_125(bParam0);
				}
				else
				{
					*uParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(4));
					if (*uParam2 == fVar1)
					{
						Function_132(bParam0, *uParam2, 0, bVar0, 4294967295, 4294967295, 22);
					}
				}
			}
			else
			{
				Global_49310[bParam022].f_28 = 0;
				bVar0 = Global_49310[bParam022].f_28;
				*uParam2 = 0.0f;
				Function_133(bParam0, 1);
				Function_132(bParam0, *uParam2, 0, bVar0, 4294967295, 4294967295, 0);
			}
			break;
		
		case 0x00000004:
			Function_139(bParam0);
			fVar1 = Function_138(bParam0);
			if (Function_137(&iLocal_2))
			{
				if (Function_135(&iLocal_2) < 10.0f)
				{
					Global_49310[bParam022].f_28 = 0;
					bVar0 = Global_49310[bParam022].f_28;
					*uParam2 = 0.0f;
					Function_134(&iLocal_2);
					Function_133(bParam0, 1);
					Function_132(bParam0, *uParam2, 0, bVar0, 4294967295, 4294967295, 0);
				}
			}
			if ((((Global_50170[23122].f_28 != 0 || Global_50170[23122].f_28 != 1) || Global_50170[23122].f_28 != 2) || Global_50170[23122].f_28 != 4) || Global_50170[23122].f_28 != 3)
			{
				if (Global_50170[23022].f_28 != 20 || Global_50170[23022].f_28 != 19)
				{
					Global_49310[bParam022].f_28++;
					if (!Function_137(&iLocal_2))
					{
						Function_140(bParam0, 5, 1);
						Function_130(&iLocal_2);
					}
				}
			}
			bVar0 = Global_49310[bParam022].f_28;
			if (Function_137(&iLocal_2))
			{
				if (bVar0 <= 5 && Function_135(&iLocal_2) >= 10.0f)
				{
					*uParam2 = 0.0f;
					Function_134(&iLocal_2);
					Function_62(bParam0, uParam1, 0);
					Function_125(bParam0);
				}
				else
				{
					*uParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(5));
					if (*uParam2 == fVar1)
					{
						Function_132(bParam0, *uParam2, 1, bVar0, 4294967295, 4294967295, 22);
					}
				}
			}
			break;
	}
}

void Function_62(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2E6F / 11887
{
	Function_133(bParam0, 1);
	*bParam1 = 10;
	Function_119(bParam0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_04_128";
	}
	Function_115(bParam0, 11);
	Function_113(bParam0, 10, 1.0f, 1);
	Function_65();
	Function_64();
	Function_63(bParam0, 4);
	return;
}

void Function_63(int iParam0, int iParam1) //Position: 0x2EC1 / 11969
{
	if (Global_34165.f_44)
	{
		Function_22(&Global_49399[iParam022] + 32, iParam1);
	}
	else
	{
		Function_22(&Global_49310[iParam022] + 32, iParam1);
	}
	return;
}

void Function_64() //Position: 0x2EEE / 12014
{
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(94))
	{
		if (StackVal && (StackVal && (StackVal && StackVal != 10 != 10) != 10) != 10)
		{
			AWARD_ACHIEVEMENT(94);
		}
	}
	return;
}

void Function_65() //Position: 0x2F35 / 12085
{
	if (!Function_23(4, 0))
	{
		Function_102(19, 0, 0, 0, 0);
	}
	else
	{
		Function_102(22, 0, 0, 0, 0);
	}
	if (StackVal && (StackVal && (StackVal && StackVal != 10 != 10) != 10) != 10)
	{
		if (!Function_23(4, 0))
		{
			Function_66(19, 0, 1);
		}
		else
		{
			Function_66(22, 0, 1);
		}
	}
	return;
}

void Function_66(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2FA5 / 12197
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_101(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_100(bParam0))
	{
		if (!Function_98(bParam0))
		{
			Function_102(bParam0, 1, 0, 0, 1);
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
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, 0, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_39(457, 1, 0, 0);
		Function_97(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_96(0, 0, 1, 1))
			{
				Function_70(1);
				Function_68(1, 0);
			}
			else
			{
				Function_67();
			}
		}
	}
	return;
}

void Function_67() //Position: 0x3144 / 12612
{
	return;
}

void Function_68(int iParam0, int iParam1) //Position: 0x314A / 12618
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = iParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_69())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_69() //Position: 0x318C / 12684
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_70(bool bParam0) //Position: 0x3195 / 12693
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_85();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_71();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_22(&Global_63095, 1);
		Function_22(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_71() //Position: 0x31E6 / 12774
{
	Function_83();
	Function_82();
	Function_82();
	Function_81();
	Function_81();
	Function_80();
	Function_80();
	Function_79(0);
	Function_79(0);
	if (!Function_69())
	{
		Function_76();
		Function_75();
		Function_74();
		Function_73();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_72();
	return;
}

void Function_72() //Position: 0x3238 / 12856
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

void Function_73() //Position: 0x333E / 13118
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

void Function_74() //Position: 0x3371 / 13169
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

void Function_75() //Position: 0x34FF / 13567
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

void Function_76() //Position: 0x36B3 / 14003
{
	Function_77(&Global_28260, 1, 0);
	return;
}

void Function_77(int iParam0, bool bParam1, var uParam2) //Position: 0x36C1 / 14017
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
	
	bVar0 = Function_78();
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

int Function_78() //Position: 0x38B2 / 14514
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_79(char* cParam0) //Position: 0x38C7 / 14535
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
				if (iVar4 == 31 || cParam0)
				{
					iVar2 = ((Function_57((50 + iVar4)) + Function_57((183 + iVar4))) + Function_57((90 + iVar4)));
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
	Function_56(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_80() //Position: 0x396D / 14701
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
		iVar2 = ((Function_57((50 + iVar3) + 15) + Function_57((183 + iVar3) + 15)) + Function_57((90 + iVar3) + 15));
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
	Function_56(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_81() //Position: 0x39F6 / 14838
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
			iVar2 = ((Function_57((50 + iVar3) + 8) + Function_57((183 + iVar3) + 8)) + Function_57((90 + iVar3) + 8));
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
	Function_56(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_82() //Position: 0x3A8D / 14989
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
		iVar2 = ((Function_57((50 + iVar3)) + Function_57((183 + iVar3))) + Function_57((90 + iVar3)));
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
	Function_56(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_83() //Position: 0x3B0C / 15116
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_84(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_56(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_84(int iParam0, bool bParam1, int iParam2) //Position: 0x3B45 / 15173
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
	Function_52(iParam0, bParam1, 1);
	Function_51(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_40(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_85() //Position: 0x3D4F / 15695
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_95())
	{
		Function_92(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_92(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_87(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_87(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_86(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0.5f);
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

bool Function_86(vector3 vParam0) //Position: 0x3E0A / 15882
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_87(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3E22 / 15906
{
	int iVar0;
	
	iVar0 = Function_90(uParam2, uParam3);
	if (Function_89(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_88(&Global_63095, 1);
			Function_22(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_88(&Global_63095, 2);
			Function_22(&Global_63095, 1);
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
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_88(&Global_63095, 2);
		Function_22(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_30();
	return StackVal, StackVal, Function_30();
}

void Function_88(bool bParam0, int iParam1) //Position: 0x3F09 / 16137
{
	*bParam0 = (*bParam0 || iParam1);
	return;
}

bool Function_89(int iParam0) //Position: 0x3F18 / 16152
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_90(bool bParam0, bool bParam1) //Position: 0x3F2E / 16174
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
				fVar2 = Function_91(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_91(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_89(bVar0) && !bParam1)
	{
		bVar0 = Function_90(bParam0, 1);
	}
	return bVar0;
}

float Function_91(vector3 vParam0, vector3 vParam3) //Position: 0x3FF5 / 16373
{
	*((&vParam0 + 4)) = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_92(var uParam0, int iParam1) //Position: 0x4014 / 16404
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_94(Global_34573, &vVar4);
	if (!Function_93(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -130.87f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.09f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 206.26f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 106.17f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 343.64f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 165.38f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -97.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -6.71f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -180.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 22.55f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -104.45f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 270.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 59.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 20.74f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 94.65f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_93(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -39.9f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	bVar10 = VDIST(vVar4, vVar7);
	if (bVar10 > bVar0)
	{
		bVar0 = bVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_88(&Global_63095, 2);
	Function_22(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_86(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_93(int iParam0) //Position: 0x4839 / 18489
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_9(uVar0, 0x1000000) || Function_9(uVar0, 0x2000000)) || Function_9(uVar0, 0x4000000)) || !Function_9(uVar0, 0x10000000));
}

void Function_94(bool bParam0, int iParam1) //Position: 0x4874 / 18548
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_95() //Position: 0x4881 / 18561
{
	if (Function_9(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_96(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x489C / 18588
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

void Function_97(bool bParam0, int iParam1) //Position: 0x4940 / 18752
{
	if (!Function_101(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_98(int iParam0) //Position: 0x4995 / 18837
{
	if (!Function_101(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_99(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_99(int iParam0, int iParam1) //Position: 0x49E7 / 18919
{
	int iVar0;
	
	if (!Function_101(iParam0))
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

bool Function_100(int iParam0) //Position: 0x4A14 / 18964
{
	if (!Function_101(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_99(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_101(int iParam0) //Position: 0x4A65 / 19045
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_102(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x4A7B / 19067
{
	char* cVar0[32];
	
	if (!Function_101(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_112(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_98(bParam0))
	{
		Function_39(456, 1, 0, 0);
		Function_97(bParam0, 2);
		if (bParam2)
		{
			if (!Function_96(0, 0, 1, 1))
			{
				Function_70(1);
				Function_68(1, 5);
			}
			else
			{
				Function_67();
			}
		}
		Function_106(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_105() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_105() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_103(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_95())
		{
			if (!Function_27(Global_76846, 2))
			{
				Function_17(Global_34573, 2, 1, 0);
			}
		}
	}
}

void Function_103(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x4BD0 / 19408
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_104(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

struct<16> Function_104(int iParam0) //Position: 0x4C4B / 19531
{
	char* cVar0[16];
	
	if (!Function_95())
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

bool Function_105() //Position: 0x4C8A / 19594
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_106(bool bParam0) //Position: 0x4CB7 / 19639
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
			if (Function_110(bParam0, Function_111(bVar24)))
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
			if (Function_110(bParam0, Function_111(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_109(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_108(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_107(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_107(int iParam0) //Position: 0x4E67 / 20071
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_101(iParam0))
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

void Function_108(int iParam0, bool bParam1) //Position: 0x4EBE / 20158
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(iParam0);
	REMOVE_JOURNAL_ENTRY(iParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(iParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(iParam0);
	}
	return;
}

var Function_109(int iParam0) //Position: 0x4EE3 / 20195
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_101(iParam0))
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

bool Function_110(bool bParam0, int iParam1) //Position: 0x4F39 / 20281
{
	int iVar0;
	
	if (!Function_101(bParam0))
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

int Function_111(bool bParam0) //Position: 0x4F98 / 20376
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_112(int iParam0) //Position: 0x4FA4 / 20388
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

int Function_113(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4FC0 / 20416
{
	char* cVar0[16];
	bool bVar4;
	
	if (bParam3)
	{
		if (Function_69() || Global_34165.f_44)
		{
			(*&Global_49399[bParam022] + 36)[bParam1] = bParam2;
		}
		else
		{
			(*&Global_49310[bParam022] + 36)[bParam1] = bParam2;
		}
		return 1;
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_114();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_FLOAT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_FLOAT: failed to store float value in slot");
	return 0;
}

var Function_114() //Position: 0x5077 / 20599
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

int Function_115(bool bParam0, int iParam1) //Position: 0x50C4 / 20676
{
	int iVar0;
	
	if (Function_69() || Global_34165.f_44)
	{
		if (bParam0 >= Global_49399)
		{
			LOG_ERROR("AM_GUI_SEND_UPDATE_MESSAGE: invalid MissionId");
			return 0;
		}
	}
	if (bParam0 >= Global_49310)
	{
		LOG_ERROR("AM_GUI_SEND_UPDATE_MESSAGE: invalid MissionId");
		return 0;
	}
	iVar0 = Function_116();
	Global_63000[iVar08] = bParam0;
	Global_63000[iVar08].f_4 = iParam1;
	Global_63082 = Function_69();
	return 1;
}

int Function_116() //Position: 0x5173 / 20851
{
	int iVar0;
	
	iVar0 = (Global_63000 - 1);
	while (iVar0 >= 0)
	{
		if (Global_63000[iVar08] == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	Function_117();
	return 0;
}

void Function_117() //Position: 0x51A1 / 20897
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_63000 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 >= 0)
	{
		Global_63000[iVar08] = Global_63000[iVar18];
		Global_63000[iVar08].f_4 = StackVal;
		*(&Global_63000[iVar08] + 8) = { StackVal, StackVal, StackVal, *(&Global_63000[iVar18] + 8) };
		*(&Global_63000[iVar08] + 24) = { StackVal, *(&Global_63000[iVar18] + 24) };
		Function_118(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_118(int iParam0) //Position: 0x5218 / 21016
{
	Global_63000[iParam08] = 4294967295;
	Global_63000[iParam08].f_4 = 4294967295;
	strcpy(&Global_63000[iParam08] + 8, "NHIL", 16);
	strcpy(&Global_63000[iParam08] + 24, "NHIL", 8);
	return;
}

void Function_119(bool bParam0) //Position: 0x5254 / 21076
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_123(bParam0));
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_122(bParam0) };
	if (Function_69() || Global_34165.f_44)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(bParam0) };
	}
	else
	{
		memcpy(&Var6, StackVal, *(&Global_49310[bParam022] + 16), 6);
	}
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_120(bParam0) };
	APPEND_JOURNAL_ENTRY_DETAIL(Function_123(bParam0), &Var6, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Function_123(bParam0), true);
	SET_JOURNAL_ENTRY_PROGRESS(Function_123(bParam0), 1.0f, 0, 0);
	return;
}

struct<24> Function_120(bool bParam0) //Position: 0x52C7 / 21191
{
	char* cVar0[24];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(bParam0) };
	if (Global_34165.f_44 || Function_69())
	{
		stradd(&cVar0, "_mp_des", 24);
		if (!IS_STRING_VALID(UI_GET_STRING(&cVar0)))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(bParam0) };
			stradd(&cVar0, "_des", 24);
		}
	}
	else
	{
		stradd(&cVar0, "_des", 24);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_121(bool bParam0) //Position: 0x5324 / 21284
{
	char* cVar0[24];
	
	if (Function_69() || Global_34165.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_49399[bParam022] + 16), 6);
		stradd(&cVar0, "_", 24);
		stradd(&cVar0, INT_TO_STRING(StackVal), 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_49310[bParam022] + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_122(bool bParam0) //Position: 0x5396 / 21398
{
	char* cVar0[24];
	
	if (Function_69() || Global_34165.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_49399[bParam022] + 16), 6);
		stradd(&cVar0, "_DYNAMIC_TITLE", 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_49310[bParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_123(bool bParam0) //Position: 0x5402 / 21506
{
	if (Function_69() || Global_34165.f_44)
	{
		return Global_49399[bParam022].f_24;
	}
	return Global_49310[bParam022].f_24;
}

int Function_124(bool bParam0, bool bParam1) //Position: 0x542A / 21546
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_114();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		if (DECOR_CHECK_EXIST(bVar4, &cVar0))
		{
			return DECOR_GET_INT(bVar4, &cVar0);
		}
		return 4294967295;
	}
	LOG_ERROR("AM_RETRIEVE_INT: failed to retrieve int value from layout");
	return 4294967295;
}

void Function_125(bool bParam0) //Position: 0x54B5 / 21685
{
	Function_139(bParam0);
	return;
}

void Function_126(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x54C0 / 21696
{
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_04_128";
	}
	*bParam1 = iParam2;
	if (bParam5)
	{
		Function_133(bParam0, 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_123(bParam0), 0.0f, 0, 0);
	}
	else
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_123(bParam0), (TO_FLOAT(Global_49310[bParam022].f_28) / TO_FLOAT(bParam3)), 0, 0);
	}
	Function_128(bParam0, 0);
	Function_115(bParam0, *bParam1);
	Function_113(bParam0, 10, 1.0f, 1);
	Function_127(bParam0, 4);
}

void Function_127(bool bParam0, int iParam1) //Position: 0x553F / 21823
{
	if (Function_69() || Global_34165.f_44)
	{
		Function_88(&Global_49399[bParam022] + 32, iParam1);
	}
	else
	{
		Function_88(&Global_49310[bParam022] + 32, iParam1);
	}
	return;
}

void Function_128(bool bParam0, bool bParam1) //Position: 0x5570 / 21872
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_123(bParam0));
	if ((bParam1 && Function_129(bParam0, 4)) || !bParam1)
	{
		PREPEND_JOURNAL_ENTRY(Function_123(bParam0), false);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_122(bParam0) };
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(bParam0) };
		UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_120(bParam0) };
		PREPEND_JOURNAL_ENTRY_DETAIL(Function_123(bParam0), &Var6, 0, 2, Function_129(bParam0, 4));
		if (bParam0 == 3)
		{
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_123(bParam0), "nAM_MAPHLP", 0, 2, true);
		}
		if (!bParam1)
		{
			Function_127(bParam0, 4);
		}
	}
	return;
}

bool Function_129(bool bParam0, int iParam1) //Position: 0x55F7 / 22007
{
	if (Function_69() || Global_34165.f_44)
	{
		return Function_9(Global_49399[bParam022].f_32, iParam1);
	}
	return Function_9(Global_49310[bParam022].f_32, iParam1);
}

void Function_130(int iParam0) //Position: 0x5629 / 22057
{
	Function_131(iParam0, 0.0f);
	return;
}

void Function_131(var uParam0, float fParam1) //Position: 0x5635 / 22069
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_88(uParam0, 1);
	Function_22(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_132(bool bParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6) //Position: 0x5656 / 22102
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	char* cVar20[24];
	char* cVar26[24];
	char* cVar32[24];
	char* cVar38[24];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_123(bParam0), fParam1, 1, 0);
	if (bParam2)
	{
		if (((bParam0 != 12 || bParam0 != 13) || bParam0 != 10) || bParam0 != 11)
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(bParam0) };
			stradd(&cVar0, "_info", 24);
			memcpy(&cVar6, StackVal, *(&Global_49399[bParam022] + 16), 6);
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
			APPEND_JOURNAL_ENTRY_DETAIL(Function_123(bParam0), &cVar0, 2, 2, false);
			Function_108(Function_123(bParam0), 0);
		}
		else
		{
			cVar20 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(bParam0) };
			if (Function_69() || Global_34165.f_44)
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
			APPEND_JOURNAL_ENTRY_DETAIL(Function_123(bParam0), &cVar20, 2, 2, true);
			Function_108(Function_123(bParam0), 0);
		}
	}
}

void Function_133(bool bParam0, bool bParam1) //Position: 0x57E1 / 22497
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_114();
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
			if (Function_69() || Global_34165.f_44)
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
			if (Function_69() || Global_34165.f_44)
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
		if (Function_69() || Global_34165.f_44)
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

void Function_134(int iParam0) //Position: 0x59A1 / 22945
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

float Function_135(int iParam0) //Position: 0x59B5 / 22965
{
	if (Function_137(iParam0))
	{
		if (Function_136(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_136(int iParam0) //Position: 0x5A7D / 23165
{
	return Function_9(*iParam0, 2);
}

bool Function_137(int iParam0) //Position: 0x5A8A / 23178
{
	return Function_9(*iParam0, 1);
}

float Function_138(bool bParam0) //Position: 0x5A97 / 23191
{
	if (Function_69() || Global_34165.f_44)
	{
		return Global_49399[bParam022].f_12;
	}
	return Global_49310[bParam022].f_12;
}

void Function_139(bool bParam0) //Position: 0x5ABF / 23231
{
	if (Function_69() || Global_34165.f_44)
	{
		Function_140(bParam0, 0, Global_49399[bParam022].f_28);
	}
	else
	{
		Function_140(bParam0, 0, Global_49310[bParam022].f_28);
	}
	return;
}

int Function_140(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5AF4 / 23284
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_114();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_INT: failed to store int value in slot");
	return 0;
}

void Function_141(bool bParam0) //Position: 0x5B68 / 23400
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	char* cVar11[64];
	bool bVar27;
	bool bVar28;
	vector3 vVar29;
	
	if (IS_LAYOUTREF_VALID(Global_30616))
	{
		if (GET_EVENT_TYPE(bParam0) != 17)
		{
			return;
		}
		bVar0 = GET_OBJECT_FROM_EVENT(bParam0);
		if (!IS_OBJECT_VALID(bVar0))
		{
			return;
		}
		if (DECOR_GET_STRING_HASH(bVar0, "ExplosionType") == STRING_TO_HASH("ZombieBaitExplosion"))
		{
			Function_147(bVar0);
			vVar1 = { StackVal, StackVal, Function_147(bVar0) };
			bVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_32(), Global_30616, 15, 1);
			if (Function_144(StackVal, StackVal, vVar1, &bVar4, 30.0f, 0x40a00000, 1, 0))
			{
				Function_142(StackVal, StackVal, bVar4, vVar1, 0x40000000);
			}
			if (GET_WEAPON_IN_HAND(Global_34573) == 37)
			{
				if (FIND_GROUND_INTERSECTION(&vVar1, 2.0f, &vVar5, &vVar8))
				{
					vVar5.f_4 = (vVar5.y + 0.2f);
					strcpy(&cVar11, "baitdyna", 64);
					stradd(&cVar11, INT_TO_STRING(FLOOR(_GET_AMMO_AMOUNT(Global_34573, 2, 0))), 64);
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), &cVar11)))
					{
						bVar27 = CREATE_PROP_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), &cVar11, "throw_dynamite01x", vVar5, vVar8, 0);
						bVar28 = GET_PHYSINST_FROM_OBJECT(bVar27);
						SET_PROP_TARGETABLE(bVar28, 1, 0);
						SET_PROP_TARGETABLE_ACQUISITION_RADIUS(bVar28, 10.0f);
						SET_PROP_TARGETABLE_SCORE_BIAS(bVar28, -100000.0f);
						SET_PROP_TARGETABLE_AS_ENEMY(bVar28, 1);
						SET_PROP_TARGETABLE_TARGET_BOX_SIZE(bVar28, 0.1f, 0.1f);
					}
				}
			}
			if (GET_OBJECT_NAMED_BONE_POSITION(Global_34573, "wrist_r_attachment", &vVar29))
			{
				if (VDIST(vVar29, vVar1) > 0.1f)
				{
					Function_29(&vVar29, "DynamiteExplosion", Global_34573, 1);
				}
			}
			DESTROY_OBJECTSET(bVar4);
		}
	}
	return;
}

void Function_142(bool bParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x5D29 / 23849
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(bParam0))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam0);
		if (IS_OBJECT_VALID(bVar1))
		{
			bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
			if (IS_ACTOR_VALID(bVar2))
			{
				if (!IS_ACTOR_HOGTIED(bVar2))
				{
					iVar3 = TASK_SEQUENCE_OPEN();
					TASK_WANDER(false, RAND_FLOAT_RANGE(0.0f, 3.0f));
					iVar4 = GET_ACTOR_GAIT_TYPE(bVar2);
					switch (iVar4)
					{
						case 0x00000004:
							iVar5 = 3;
							break;
						
						case 0x00000003:
							iVar5 = 4;
							break;
						
						case 0x00000002:
							if (Function_143(bVar2))
							{
								iVar5 = 4;
							}
							else
							{
								iVar5 = 2;
							}
							break;
						
						default:
							iVar5 = 1;
							break;
					}
					TASK_GO_NEAR_COORD(false, &uParam1, iParam4, iVar5);
					TASK_WANDER(false, 10.0f);
					TASK_SEQUENCE_CLOSE();
					if (bVar2 != Global_34573)
					{
						TASK_SEQUENCE_PERFORM(bVar2, iVar3);
					}
					TASK_SEQUENCE_RELEASE(iVar3, 1);
					if (Function_143(bVar2))
					{
						TASK_PRIORITY_SET(bVar2, 1);
					}
					else
					{
						TASK_PRIORITY_SET(bVar2, 0);
					}
				}
			}
		}
		bVar0++;
	}
}

bool Function_143(bool bParam0) //Position: 0x5E15 / 24085
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1240 && iVar0 >= 1251)
	{
		return 1;
	}
	return 0;
}

bool Function_144(vector3 vParam0, var uParam3, float fParam4, float fParam5, var uParam6, bool bParam7) //Position: 0x5E35 / 24117
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (Function_86(StackVal, StackVal, vParam0) || fParam4 >= 0.0f)
	{
		return 0;
	}
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_32(), Global_30616, 15, 1);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_32(), 3, vParam0, 0.0f, 0.0f, 0.0f, fParam4, fParam5, fParam4);
	if (IS_OBJECTSET_VALID(*uParam3) && IS_OBJECTSET_VALID(bVar0))
	{
		LOCATE_ACTORS_IN_VOLUME(bVar1, bVar0, 0, 1);
		iVar2 = GET_OBJECTSET_SIZE(bVar0);
		bVar3 = false;
		while (bVar3 <= iVar2)
		{
			bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0);
			if (IS_OBJECT_VALID(bVar4))
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(bVar4);
				if (IS_ACTOR_VALID(bVar5))
				{
					if (IS_ACTOR_ALIVE(bVar5))
					{
						if (Function_146(bVar5))
						{
							if (uParam6 || !IS_ACTOR_HOGTIED(bVar5))
							{
								if (bParam7)
								{
									if (Function_145(bVar5, 0x3f800000, 0x42960000, 1, 1, 0))
									{
										if (!IS_OBJECT_IN_OBJECTSET(bVar4, *uParam3))
										{
											ADD_OBJECT_TO_OBJECTSET(bVar4, *uParam3);
										}
									}
								}
								else if (!IS_OBJECT_IN_OBJECTSET(bVar4, *uParam3))
								{
									ADD_OBJECT_TO_OBJECTSET(bVar4, *uParam3);
								}
							}
						}
					}
				}
			}
			bVar3++;
		}
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
	if (GET_OBJECTSET_SIZE(*uParam3) >= 0)
	{
		return 1;
	}
	return 0;
}

bool Function_145(bool bParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0x5F46 / 24390
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, fParam1, fParam2, iParam3, iParam4, iParam5);
}

bool Function_146(bool bParam0) //Position: 0x5F60 / 24416
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1204 && iVar0 >= 1254)
	{
		return 1;
	}
	if (Function_33(bParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(bParam0, "Zombie");
	}
	return 0;
}

vector3 Function_147(bool bParam0) //Position: 0x5FAB / 24491
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

void Function_148(bool bParam0) //Position: 0x5FD2 / 24530
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	var uVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	vector3 vVar27;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	
	bVar0 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
	if (IS_OBJECT_VALID(bVar0))
	{
		if (GET_OBJECT_TYPE(bVar0) == 15)
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (Function_146(bVar1))
				{
					bVar2 = GET_EVENT_PERPETRATOR(bParam0);
					if (IS_OBJECT_VALID(bVar2))
					{
						if (GET_OBJECT_TYPE(bVar2) == 15)
						{
							bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
							if (IS_ACTOR_VALID(bVar3))
							{
								if (IS_ACTOR_LOCAL_PLAYER(bVar3))
								{
									switch (GET_EVENT_TYPE(bParam0))
									{
										case 0x00000012:
											if (Function_231(bVar1))
											{
												Function_221(bVar1, bVar3);
											}
											break;
										
										case 0x00000031:
											if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar1, "Hogtie")))
											{
												Function_30();
												Function_30();
												bVar4 = CREATE_GRINGO_ON_OBJECT(bVar1, "Hogtie", "$/content/scripting/gringo/simplegringo/hogtie", Function_30(), Function_30());
												if (IS_OBJECT_VALID(bVar4))
												{
													Function_30();
													Function_30();
													ATTACH_OBJECTS(bVar4, bVar1, "spine00", Function_30(), Function_30(), 4294967295);
												}
											}
											break;
										
										case 0x00000033:
											if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar1, "Hogtie_Pickup")))
											{
												Function_30();
												Function_30();
												bVar5 = CREATE_GRINGO_ON_OBJECT(bVar1, "Hogtie_Pickup", "$/content/scripting/gringo/simplegringo/hogtie_pickup", Function_30(), Function_30());
												if (IS_OBJECT_VALID(bVar5))
												{
													DECOR_SET_OBJECT(bVar1, "HogtiedGringoAttached", bVar5);
												}
												bVar6 = StackVal;
												if (IS_VOLUME_VALID(bVar6) && !Global_3385)
												{
													iVar7 = Function_220(Global_29006);
													if (iVar7 != 0)
													{
														if (!Function_218(Global_29006))
														{
															Function_217(iVar7, 0, 0, RAND_INT_RANGE(1, 5), 20);
														}
														else
														{
															bVar8 = DECOR_GET_FLOAT(bVar6, "ZombieScore");
															bVar8 = (bVar8 + 2.0f);
															DECOR_SET_FLOAT(bVar6, "ZombieScore", bVar8);
														}
													}
												}
												Function_39(678, 1, 0, 0);
											}
											break;
										
										case 0x00000030:
											if (DECOR_CHECK_EXIST(bVar1, "lasso"))
											{
												DECOR_REMOVE(bVar1, "lasso");
											}
											bVar9 = FIND_OBJECT_IN_OBJECT(bVar1, "Hogtie_Pickup");
											if (IS_OBJECT_VALID(bVar9))
											{
												DESTROY_OBJECT(bVar9);
											}
											bVar9 = FIND_OBJECT_IN_OBJECT(bVar1, "Hogtie");
											if (IS_OBJECT_VALID(bVar9))
											{
												DESTROY_OBJECT(bVar9);
											}
											break;
										
										case 0x00000022:
											if (DECOR_CHECK_STRING(bParam0, "__LinkedAnimType", "__grappleExecution"))
											{
												Function_39(677, 1, 0, 0);
												DECOR_SET_FLOAT(bVar1, "fZombieExecutedTime", GET_CURRENT_GAME_TIME());
												ADD_OBJECT_TO_OBJECTSET(bVar1, Global_26315);
											}
											else if (DECOR_CHECK_STRING(bParam0, "__LinkedAnimType", "__pistolExecution"))
											{
												switch ((RAND_INT_RANGE(0, 100000) % 6))
												{
													case 0x00000000:
														Function_212(Function_214(FIND_NAMED_LAYOUT("Formations"), 0, bVar3, 1, 0, 0));
														break;
													
													case 0x00000001:
														Function_212(Function_209(FIND_NAMED_LAYOUT("Formations"), 0, bVar3, 1, 0, 0));
														break;
													
													case 0x00000002:
														Function_212(Function_206(FIND_NAMED_LAYOUT("Formations"), 0, bVar3, 1, 0, 0));
														break;
													
													case 0x00000003:
														Function_212(Function_203(FIND_NAMED_LAYOUT("Formations"), 0, bVar3, 1, 0, 0));
														break;
													
													case 0x00000004:
														Function_212(Function_200(FIND_NAMED_LAYOUT("Formations"), 0, bVar3, 1, 0, 0));
														break;
													
													case 0x00000005:
														Function_212(Function_197(FIND_NAMED_LAYOUT("Formations"), 0, bVar3, 1, 0, 0));
														break;
												}
												if (ACTOR_HAS_WEAPON_IN_HAND(Global_34573, 33))
												{
													Function_39(677, 1, 0, 0);
												}
											}
											else if (DECOR_CHECK_STRING(bParam0, "__LinkedAnimType", "__rifleExecution"))
											{
												switch ((RAND_INT_RANGE(0, 100000) % 5))
												{
													case 0x00000000:
														Function_212(Function_194(FIND_NAMED_LAYOUT("Formations"), 0, bVar3, 1, 0, 0));
														break;
													
													case 0x00000001:
														Function_212(Function_191(FIND_NAMED_LAYOUT("Formations"), 0, bVar3, 1, 0, 0));
														break;
													
													case 0x00000002:
														Function_212(Function_188(FIND_NAMED_LAYOUT("Formations"), 0, bVar3, 1, 0, 0));
														break;
													
													case 0x00000003:
														Function_212(Function_185(FIND_NAMED_LAYOUT("Formations"), 0, bVar3, 1, 0, 0));
														break;
													
													case 0x00000004:
														Function_212(Function_182(FIND_NAMED_LAYOUT("Formations"), 0, bVar3, 1, 0, 0));
														break;
												}
												Function_39(677, 1, 0, 0);
												DECOR_SET_FLOAT(bVar1, "fZombieExecutedTime", GET_CURRENT_GAME_TIME());
												ADD_OBJECT_TO_OBJECTSET(bVar1, Global_26315);
											}
											break;
										
										case 0x00000005:
											if (DECOR_GET_INT(bParam0, "Weapon") == 34)
											{
												Function_175(bParam0, 0);
											}
											break;
										
										case 0x0000000A:
											Function_39(676, 1, 0, 0);
											Function_174(bVar1);
											break;
										
										case 0x0000005B:
											if (((DECOR_GET_STRING_HASH(GET_OBJECT_FROM_EVENT(bParam0), "ExplosionType") == STRING_TO_HASH("ZombieBaitExplosion") && DECOR_GET_STRING_HASH(GET_OBJECT_FROM_EVENT(bParam0), "ExplosionType") == STRING_TO_HASH("HolyWaterExplosion")) && DECOR_GET_STRING_HASH(GET_OBJECT_FROM_EVENT(bParam0), "ExplosionType") == STRING_TO_HASH("FireBottleExplosion")) && DECOR_GET_STRING_HASH(GET_OBJECT_FROM_EVENT(bParam0), "ExplosionType") == STRING_TO_HASH("KeroseneLampExplosion"))
											{
												Function_173(bVar1);
											}
											break;
										
										case 0x00000002:
											if (!Function_143(bVar1))
											{
												Function_39(671, 1, 0, 0);
											}
											if (Function_231(bVar1))
											{
												Function_172(bVar1);
											}
											else
											{
												if ((Function_171(bVar1) || Function_34(bVar1)) || Function_33(bVar1, 1))
												{
													Function_39(672, 1, 0, 0);
												}
												else if (Function_170(bVar1))
												{
													Function_39(674, 1, 0, 0);
												}
												else if (Function_169(bVar1))
												{
													Function_39(675, 1, 0, 0);
												}
												else if (Function_168(bVar1))
												{
													Function_39(673, 1, 0, 0);
												}
												if (Function_169(bVar1))
												{
													if ((!DECOR_CHECK_EXIST(bVar1, "NoCorpse") && GET_LAST_HIT_WEAPON(bVar1) == 31) && GET_LAST_HIT_WEAPON(bVar1) == 34)
													{
														Function_30();
														Function_30();
														bVar10 = CREATE_POINT_IN_LAYOUT(bVar1, Function_32(), Function_30(), Function_30());
														if (IS_OBJECT_VALID(bVar10))
														{
															Function_30();
															Function_30();
															ATTACH_OBJECTS(bVar10, bVar1, "spine00", Function_30(), Function_30(), 4294967295);
															PLAY_SOUND_FROM_OBJECT(bVar10, "ZOMBIE_TOXIC_PRE_EXPLO_SCREAM_FAST_MASTER");
															Function_30();
															bVar11 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_32(), "blood_zombie_anticipateBurst", "spine00", bVar1, Function_30(), bVar10);
															if (IS_OBJECT_VALID(bVar11))
															{
																Function_30();
																UNK_0x6745191B(bVar11, Function_30());
															}
															DECOR_SET_FLOAT(bVar1, "fToxicKilledTime", GET_CURRENT_GAME_TIME());
															DECOR_SET_INT(bVar1, "iToxicKilledPerp", Global_34573);
															ADD_OBJECT_TO_OBJECTSET(bVar1, Global_26315);
														}
														if (IS_ACTOR_VALID(GET_HOGTIED_MASTER(bVar1)))
														{
															FREE_FROM_HOGTIE(bVar1);
														}
													}
												}
												bVar12 = StackVal;
												if (IS_VOLUME_VALID(bVar12) && !Global_3385)
												{
													iVar13 = Function_220(Global_29006);
													if (iVar13 != 0)
													{
														if (Global_12976.f_36 != bVar1)
														{
															if (!Function_218(Global_29006))
															{
																Function_217(iVar13, 0, 0, RAND_INT_RANGE(1, 5), 20);
															}
															else
															{
																bVar14 = DECOR_GET_FLOAT(bVar12, "ZombieScore");
																bVar14 = (bVar14 + 2.0f);
																DECOR_SET_FLOAT(bVar12, "ZombieScore", bVar14);
															}
														}
													}
												}
											}
											break;
									}
									return;
								}
							}
						}
					}
					switch (GET_EVENT_TYPE(bParam0))
					{
						case 0x00000010:
							if ((Function_35(bVar1) || Function_34(bVar1)) || Function_33(bVar1, 1))
							{
								Function_31(bVar1, 0);
							}
							else if (Function_231(bVar1))
							{
								DECOR_SET_BOOL(bVar1, "Zombie", true);
								ACTOR_ENABLE_VARIABLE_MESH(bVar1, 21, true);
								ACTOR_ENABLE_VARIABLE_MESH(bVar1, 22, false);
								HORSE_SET_CURR_FRESHNESS(bVar1, 1.0f);
								HORSE_LOCK_FRESHNESS(bVar1);
								SET_ACTOR_DEATH_DROP_DISTANCE(bVar1, 50.0f);
							}
							else if (GET_ACTOR_ENUM(bVar1) == 1240)
							{
								ANIMAL_TUNING_SET_ATTRIB_BOOL(bVar1, 11, 0);
							}
							break;
						
						case 0x00000012:
							if (Function_231(bVar1))
							{
								Function_221(bVar1, 0);
							}
							break;
						
						case 0x00000057:
							if (IS_ACTOR_ALIVE(bVar1))
							{
								bVar15 = GET_EVENT_PERPETRATOR(bParam0);
								if (IS_OBJECT_VALID(bVar15))
								{
									if (GET_OBJECT_TYPE(bVar15) == 15)
									{
										bVar16 = GET_ACTOR_FROM_OBJECT(bVar15);
										if (IS_ACTOR_VALID(bVar16))
										{
											if (Function_167(bVar16))
											{
												if (GET_ACTOR_ENUM(bVar16) == 1269)
												{
													if ((!FIRE_IS_ACTOR_ON_FIRE(bVar1) && !IS_ACTOR_RIDING(bVar1)) && GET_HOGTIED_MASTER(bVar1) == bVar16)
													{
														uVar17 = FIRE_CREATE_HANDLE();
														if (IS_ACTOR_VALID(GET_RIDER(bVar16)))
														{
															FIRE_SET_OWNER(uVar17, GET_RIDER(bVar16));
														}
														else
														{
															FIRE_SET_OWNER(uVar17, bVar16);
														}
														FIRE_CREATE_ON_ACTOR(uVar17, bVar1);
														FIRE_RELEASE_HANDLE(uVar17, 1);
													}
												}
												else if (GET_ACTOR_ENUM(bVar16) == 1268)
												{
													Function_173(bVar1);
												}
												else if (GET_ACTOR_ENUM(bVar16) == 1271)
												{
												}
												else if (GET_ACTOR_ENUM(bVar16) == 1270)
												{
												}
											}
										}
									}
								}
							}
							break;
						
						case 0x0000000A:
							Function_174(bVar1);
							break;
						
						case 0x00000002:
							if (Function_231(bVar1))
							{
								Function_172(bVar1);
							}
							break;
					}
				}
				else
				{
					switch (GET_EVENT_TYPE(bParam0))
					{
						case 0x00000010:
							if (IS_ACTOR_HORSE(bVar1))
							{
								if (Function_166(bVar1))
								{
									Function_165(bVar1);
								}
								else
								{
									if (Function_167(bVar1))
									{
										Function_162(bVar1);
									}
									ACTOR_ENABLE_VARIABLE_MESH(bVar1, 21, true);
									ACTOR_ENABLE_VARIABLE_MESH(bVar1, 22, false);
								}
							}
							else if (Function_161(bVar1))
							{
								Function_160(bVar1);
							}
							break;
						
						case 0x00000012:
							if (Function_166(bVar1) || Function_167(bVar1))
							{
								bVar18 = GET_EVENT_PERPETRATOR(bParam0);
								if (IS_OBJECT_VALID(bVar18))
								{
									if (GET_OBJECT_TYPE(bVar18) == 15)
									{
										bVar19 = GET_ACTOR_FROM_OBJECT(bVar18);
										if (IS_ACTOR_VALID(bVar19))
										{
											Function_221(bVar1, bVar19);
										}
									}
								}
							}
							break;
						
						case 0x00000002:
							if (Function_167(bVar1))
							{
								Function_172(bVar1);
							}
							else
							{
								bVar20 = GET_EVENT_PERPETRATOR(bParam0);
								if (IS_OBJECT_VALID(bVar20))
								{
									if (GET_OBJECT_TYPE(bVar20) == 15)
									{
										bVar21 = GET_ACTOR_FROM_OBJECT(bVar20);
										if (IS_ACTOR_VALID(bVar21))
										{
											if (IS_ACTOR_LOCAL_PLAYER(bVar21))
											{
												if (Function_159(bVar1))
												{
													Function_39(679, 1, 0, 0);
													if (!HAS_ACHIEVEMENT_BEEN_PASSED(97))
													{
														AWARD_ACHIEVEMENT(97);
													}
												}
											}
										}
									}
								}
							}
							break;
						}
					}
			}
		}
		else if (GET_OBJECT_TYPE(bVar0) == 29)
		{
			if (Function_158(bVar0))
			{
				switch (GET_EVENT_TYPE(bParam0))
				{
					case 0x00000010:
						if (Function_157(bVar0))
						{
							ADD_OBJECT_TO_OBJECTSET(bVar0, Global_26315);
						}
						else
						{
							bVar22 = Function_156(bVar0);
							bVar23 = false;
							if (!bVar22)
							{
								if (Function_155(bVar0))
								{
									DECOR_SET_BOOL(bVar0, "bZombieCorpseArmed", true);
									bVar23 = true;
								}
							}
							bVar24 = true;
							if (!bVar22 && !bVar23)
							{
								if (IS_WEAPONENUM_LOCKED(34))
								{
									bVar24 = false;
								}
							}
							Function_30();
							bVar25 = CREATE_GRINGO_ON_OBJECT(bVar0, "Loot", "$/content/DLC/ZombiePack/Gringos/ZombiePack_LootZombie", Function_30(), 0.0f, 1.0f, 0.0f);
							if (bVar24)
							{
								if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bVar25)))
								{
									bVar26 = ADD_BLIP_FOR_OBJECT(bVar25, 456, 0.0f, 0, 0);
									SET_BLIP_MAX_DISTANCE(bVar26, 0.5f);
									UNK_0x1E98AFEC(bVar26, 1);
									SET_BLIP_SCALE(bVar26, 0.6f);
									SET_BLIP_COLOR(bVar26, 0.35f, 0.35f, 0.35f, 0.65f);
								}
							}
						}
						break;
					
					case 0x00000005:
						Function_30();
						vVar27 = { StackVal, StackVal, Function_30() };
						if (GET_OBJECT_NAMED_BONE_POSITION(bVar0, "head", &vVar27))
						{
							Function_147(GET_OBJECT_FROM_EVENT(bParam0));
							if (VDIST(Function_147(GET_OBJECT_FROM_EVENT(bParam0)), vVar27) > 0.2f)
							{
								bVar30 = GET_WEAPON_IN_HAND(GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(bParam0)));
								bVar30 = UNK_0xDB679ED9(bVar30);
								if (((((((bVar30 != 50 || bVar30 != 42) || bVar30 != 49) || bVar30 != 39) || bVar30 != 43) || bVar30 != 40) || bVar30 != 41) || bVar30 != 44)
								{
									bVar31 = GET_PHYSINST_FROM_OBJECT(bVar0);
									if (IS_PHYSINST_VALID(bVar31))
									{
										PROP_ENABLE_VARIABLE_MESH(bVar31, 23, 0);
										PROP_ENABLE_VARIABLE_MESH(bVar31, 24, 0);
										PROP_ENABLE_VARIABLE_MESH(bVar31, 25, 0);
										PROP_ENABLE_VARIABLE_MESH(bVar31, 26, 0);
										PROP_ENABLE_VARIABLE_MESH(bVar31, 27, 0);
										PROP_ENABLE_VARIABLE_MESH(bVar31, 28, 0);
										if (((Function_36() || Function_154(bVar0)) || Function_153(bVar0)) || Function_152(bVar0, 1))
										{
											PROP_ENABLE_VARIABLE_MESH(bVar31, 29, 1);
										}
										else
										{
											PROP_ENABLE_VARIABLE_MESH(bVar31, 30, 1);
										}
										if (DECOR_CHECK_EXIST(bVar31, "oLeftEyeGlow"))
										{
											bVar32 = DECOR_GET_OBJECT(bVar31, "oLeftEyeGlow");
											if (IS_OBJECT_VALID(bVar32))
											{
												UNK_0x1A59E608(bVar32);
											}
											DECOR_REMOVE(bVar31, "oLeftEyeGlow");
										}
										if (DECOR_CHECK_EXIST(bVar31, "oRightEyeGlow"))
										{
											bVar32 = DECOR_GET_OBJECT(bVar31, "oRightEyeGlow");
											if (IS_OBJECT_VALID(bVar32))
											{
												UNK_0x1A59E608(bVar32);
											}
											DECOR_REMOVE(bVar31, "oRightEyeGlow");
										}
										bVar33 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bVar0, Function_32(), "blood_zombie_shotgun_exit", vVar27);
										if (IS_OBJECT_VALID(bVar33))
										{
											Function_30();
											UNK_0x6745191B(bVar33, Function_30());
										}
									}
								}
							}
						}
						if (DECOR_GET_INT(bParam0, "Weapon") == 34)
						{
							Function_175(bParam0, 0);
						}
						break;
				}
			}
			else
			{
				switch (GET_EVENT_TYPE(bParam0))
				{
					case 0x00000010:
						if ((Function_151(bVar0) || Function_150(bVar0)) || Function_149(bVar0))
						{
							Function_30();
							bVar34 = CREATE_GRINGO_ON_OBJECT(bVar0, "Loot", "$/content/DLC/ZombiePack/Gringos/ZombiePack_LootZombie", Function_30(), 0.0f, 1.0f, 0.0f);
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bVar34)))
							{
								bVar35 = ADD_BLIP_FOR_OBJECT(bVar34, 456, 0.0f, 0, 0);
								SET_BLIP_MAX_DISTANCE(bVar35, 0.5f);
								UNK_0x1E98AFEC(bVar35, 1);
								SET_BLIP_SCALE(bVar35, 0.6f);
								SET_BLIP_COLOR(bVar35, 0.35f, 0.35f, 0.35f, 0.65f);
							}
						}
						break;
					}
				}
			}
	}
	return;
}

int Function_149(bool bParam0) //Position: 0x6EE1 / 28385
{
	if (GET_OBJECT_TYPE(bParam0) == 29)
	{
		return GET_CORPSE_ACTOR_ENUM(bParam0) != 1266;
	}
	if (GET_OBJECT_TYPE(bParam0) == 15)
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0)) != 1266;
	}
	return 0;
}

int Function_150(bool bParam0) //Position: 0x6F16 / 28438
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (GET_OBJECT_TYPE(bParam0) == 29)
	{
		iVar0 = GET_CORPSE_ACTOR_ENUM(bParam0);
	}
	else if (GET_OBJECT_TYPE(bParam0) == 15)
	{
		iVar0 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	if (iVar0 <= 1263 && iVar0 >= 1265)
	{
		return 1;
	}
	return 0;
}

int Function_151(bool bParam0) //Position: 0x6F5A / 28506
{
	if (GET_OBJECT_TYPE(bParam0) == 29)
	{
		return GET_CORPSE_ACTOR_ENUM(bParam0) != 1267;
	}
	if (GET_OBJECT_TYPE(bParam0) == 15)
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0)) != 1267;
	}
	return 0;
}

int Function_152(bool bParam0, int iParam1) //Position: 0x6F8F / 28559
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (GET_OBJECT_TYPE(bParam0) == 29)
	{
		iVar0 = GET_CORPSE_ACTOR_ENUM(bParam0);
	}
	else if (GET_OBJECT_TYPE(bParam0) == 15)
	{
		iVar0 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	if ((((((iVar0 != 1252 && iParam1) || (iVar0 != 1253 && iParam1)) || iVar0 != 541) || iVar0 != 542) || iVar0 != 543) || iVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_153(bool bParam0) //Position: 0x6FF5 / 28661
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (GET_OBJECT_TYPE(bParam0) == 29)
	{
		iVar0 = GET_CORPSE_ACTOR_ENUM(bParam0);
	}
	else if (GET_OBJECT_TYPE(bParam0) == 15)
	{
		iVar0 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	if (iVar0 <= 1228 && iVar0 >= 1239)
	{
		return 1;
	}
	return 0;
}

int Function_154(bool bParam0) //Position: 0x7039 / 28729
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (GET_OBJECT_TYPE(bParam0) == 29)
	{
		iVar0 = GET_CORPSE_ACTOR_ENUM(bParam0);
	}
	else if (GET_OBJECT_TYPE(bParam0) == 15)
	{
		iVar0 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	if (iVar0 <= 1204 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_155(bool bParam0) //Position: 0x707D / 28797
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (GET_OBJECT_TYPE(bParam0) == 29)
	{
		iVar0 = GET_CORPSE_ACTOR_ENUM(bParam0);
	}
	else
	{
		iVar0 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	bVar1 = false;
	PRINTSTRING("Checking Zombie Corpse - ");
	PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(iVar0));
	if (((((iVar0 != 1234 || iVar0 != 1236) || iVar0 != 1237) || iVar0 != 1238) || iVar0 != 118) || iVar0 != 1235)
	{
		PRINTSTRING(" - Story Char");
		bVar1 = true;
	}
	else if (((iVar0 != 1204 || iVar0 != 1206) || iVar0 != 1208) || iVar0 != 1209)
	{
		PRINTSTRING(" - Fast Zombie");
		bVar1 = true;
	}
	else if ((iVar0 != 1215 || iVar0 != 1217) || iVar0 != 1219)
	{
		PRINTSTRING(" - Bruiser Zombie");
		bVar1 = true;
	}
	else if (iVar0 <= 369 && iVar0 >= 540)
	{
		PRINTSTRING(" - Cop Or Criminal");
		bVar1 = true;
	}
	else if (GET_OBJECT_TYPE(bParam0) == 29)
	{
		bVar2 = GET_PHYSINST_FROM_OBJECT(bParam0);
		if (IS_PHYSINST_VALID(bVar2))
		{
			if (PROP_IS_VARIABLE_MESH_ENABLED(bVar2, 5))
			{
				PRINTSTRING(" - Has A Gunbelt");
				bVar1 = true;
			}
			else
			{
				PRINTSTRING(" - No Gunbelt Found");
			}
		}
	}
	else if (ACTOR_IS_VARIABLE_MESH_ENABLED(GET_ACTOR_FROM_OBJECT(bParam0), 5))
	{
		PRINTSTRING(" - Has A Gunbelt");
		bVar1 = true;
	}
	else
	{
		PRINTSTRING(" - No Gunbelt Found");
	}
	if (bVar1)
	{
		PRINTSTRING(" - Armed!!!");
		PRINTNL();
		return 1;
	}
	PRINTSTRING(" - Unarmed!!!");
	PRINTNL();
	return 0;
}

int Function_156(bool bParam0) //Position: 0x7279 / 29305
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (GET_OBJECT_TYPE(bParam0) == 29)
	{
		iVar0 = GET_CORPSE_ACTOR_ENUM(bParam0);
	}
	else if (GET_OBJECT_TYPE(bParam0) == 15)
	{
		iVar0 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	if (iVar0 <= 1240 && iVar0 >= 1251)
	{
		return 1;
	}
	return 0;
}

bool Function_157(bool bParam0) //Position: 0x72BD / 29373
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (GET_OBJECT_TYPE(bParam0) == 29)
	{
		iVar0 = GET_CORPSE_ACTOR_ENUM(bParam0);
	}
	else if (GET_OBJECT_TYPE(bParam0) == 15)
	{
		iVar0 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	if (iVar0 <= 1222 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_158(bool bParam0) //Position: 0x7301 / 29441
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (GET_OBJECT_TYPE(bParam0) == 29)
	{
		iVar0 = GET_CORPSE_ACTOR_ENUM(bParam0);
	}
	else if (GET_OBJECT_TYPE(bParam0) == 15)
	{
		iVar0 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	if (iVar0 <= 1204 && iVar0 >= 1254)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(bParam0, "Zombie");
	}
	return 0;
}

bool Function_159(bool bParam0) //Position: 0x7365 / 29541
{
	if (GET_ACTOR_ENUM(bParam0) == 1266)
	{
		return 1;
	}
	return 0;
}

void Function_160(bool bParam0) //Position: 0x7379 / 29561
{
	DECOR_SET_BOOL(bParam0, "nSasquatch", true);
	return;
}

bool Function_161(bool bParam0) //Position: 0x7392 / 29586
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1263 && iVar0 >= 1265)
	{
		return 1;
	}
	return 0;
}

void Function_162(bool bParam0) //Position: 0x73B2 / 29618
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	
	iVar0 = Function_164(bParam0);
	if (!Function_163(iVar0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "Behave", true);
	HORSE_SET_CURR_FRESHNESS(bParam0, 1.0f);
	HORSE_LOCK_FRESHNESS(bParam0);
	SET_ACTOR_DEATH_DROP_DISTANCE(bParam0, 50.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bParam0, 0.0f);
	SET_ACTOR_MAX_HEALTH(bParam0, 300.0f);
	SET_ACTOR_HEALTH(bParam0, 300.0f);
	ACCESSORIZE_HORSE(bParam0, 3);
	bVar5 = CREATE_OBJECTSET_IN_LAYOUT("emitter_set", bParam0, 4294967295, 1);
	switch (iVar0)
	{
		case 0x000004F4:
			Function_30();
			bVar1 = CREATE_RMPTFX_EMITTER_ON_OBJECT(Function_32(), "script_4Horsemen_death_01", bParam0, Function_30(), 1, bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				Function_30();
				UNK_0x6745191B(bVar1, Function_30());
				ADD_OBJECT_TO_OBJECTSET(bVar1, bVar5);
			}
			vVar2 = { 0.0f, -0.5f, -0.75f };
			bVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_32(), "script_4Horsemen_death_02", "spine00", bParam0, vVar2, bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				Function_30();
				UNK_0x6745191B(bVar1, Function_30());
				ADD_OBJECT_TO_OBJECTSET(bVar1, bVar5);
			}
			break;
		
		case 0x000004F7:
			Function_30();
			bVar1 = CREATE_RMPTFX_EMITTER_ON_OBJECT(Function_32(), "script_4Horsemen_famine_01", bParam0, Function_30(), 1, bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				Function_30();
				UNK_0x6745191B(bVar1, Function_30());
				ADD_OBJECT_TO_OBJECTSET(bVar1, bVar5);
			}
			break;
		
		case 0x000004F6:
			Function_30();
			bVar1 = CREATE_RMPTFX_EMITTER_ON_OBJECT(Function_32(), "script_4Horsemen_pestilence_01", bParam0, Function_30(), 1, bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				Function_30();
				UNK_0x6745191B(bVar1, Function_30());
				ADD_OBJECT_TO_OBJECTSET(bVar1, bVar5);
			}
			Function_30();
			bVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_32(), "blood_dripping", "nLowLip1_r", bParam0, Function_30(), bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				Function_30();
				UNK_0x6745191B(bVar1, Function_30());
				ADD_OBJECT_TO_OBJECTSET(bVar1, bVar5);
			}
			Function_30();
			bVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_32(), "blood_dripping", "nose_l", bParam0, Function_30(), bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				Function_30();
				UNK_0x6745191B(bVar1, Function_30());
				ADD_OBJECT_TO_OBJECTSET(bVar1, bVar5);
			}
			Function_30();
			bVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_32(), "blood_dripping", "Eyelid_r", bParam0, Function_30(), bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				Function_30();
				UNK_0x6745191B(bVar1, Function_30());
				ADD_OBJECT_TO_OBJECTSET(bVar1, bVar5);
			}
			Function_30();
			bVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_32(), "blood_dripping", "Eyelid_l", bParam0, Function_30(), bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				Function_30();
				UNK_0x6745191B(bVar1, Function_30());
				ADD_OBJECT_TO_OBJECTSET(bVar1, bVar5);
			}
			break;
		
		case 0x000004F5:
			Function_30();
			bVar1 = CREATE_RMPTFX_EMITTER_ON_OBJECT(Function_32(), "script_4Horsemen_war_01", bParam0, Function_30(), 1, bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				Function_30();
				UNK_0x6745191B(bVar1, Function_30());
				ADD_OBJECT_TO_OBJECTSET(bVar1, bVar5);
			}
			bVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_32(), "script_4Horsemen_war_blaze", "nail_r", bParam0, vVar2, bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				Function_30();
				UNK_0x6745191B(bVar1, Function_30());
				ADD_OBJECT_TO_OBJECTSET(bVar1, bVar5);
			}
			bVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_32(), "script_4Horsemen_war_blaze", "nail_l", bParam0, vVar2, bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				Function_30();
				UNK_0x6745191B(bVar1, Function_30());
				ADD_OBJECT_TO_OBJECTSET(bVar1, bVar5);
			}
			bVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_32(), "script_4Horsemen_war_blaze", "toe_r", bParam0, vVar2, bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				Function_30();
				UNK_0x6745191B(bVar1, Function_30());
				ADD_OBJECT_TO_OBJECTSET(bVar1, bVar5);
			}
			bVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_32(), "script_4Horsemen_war_blaze", "toe_l", bParam0, vVar2, bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				Function_30();
				UNK_0x6745191B(bVar1, Function_30());
				ADD_OBJECT_TO_OBJECTSET(bVar1, bVar5);
			}
			bVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_32(), "script_4Horsemen_war_blaze", "ntail_m_02", bParam0, vVar2, bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				Function_30();
				UNK_0x6745191B(bVar1, Function_30());
				ADD_OBJECT_TO_OBJECTSET(bVar1, bVar5);
			}
			bVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_32(), "script_4Horsemen_war_blaze", "ntail_l_03", bParam0, vVar2, bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				Function_30();
				UNK_0x6745191B(bVar1, Function_30());
				ADD_OBJECT_TO_OBJECTSET(bVar1, bVar5);
			}
			bVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_32(), "script_4Horsemen_war_blaze", "hair03_04_l", bParam0, vVar2, bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				Function_30();
				UNK_0x6745191B(bVar1, Function_30());
				ADD_OBJECT_TO_OBJECTSET(bVar1, bVar5);
			}
			bVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_32(), "script_4Horsemen_war_blaze", "hair04_04_r", bParam0, vVar2, bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				Function_30();
				UNK_0x6745191B(bVar1, Function_30());
				ADD_OBJECT_TO_OBJECTSET(bVar1, bVar5);
			}
			bVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_32(), "script_4Horsemen_war_blaze", "hair05_04_l", bParam0, vVar2, bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				Function_30();
				UNK_0x6745191B(bVar1, Function_30());
				ADD_OBJECT_TO_OBJECTSET(bVar1, bVar5);
			}
			bVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_32(), "script_4Horsemen_war_eyeLight", "Eyelid_l", bParam0, vVar2, bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				Function_30();
				UNK_0x6745191B(bVar1, Function_30());
				ADD_OBJECT_TO_OBJECTSET(bVar1, bVar5);
			}
			bVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_32(), "script_4Horsemen_war_eyeLight", "Eyelid_r", bParam0, vVar2, bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				Function_30();
				UNK_0x6745191B(bVar1, Function_30());
				ADD_OBJECT_TO_OBJECTSET(bVar1, bVar5);
			}
			break;
		
		default:
			break;
	}
	return;
}

bool Function_163(int iParam0) //Position: 0x7A5D / 31325
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_164(bool bParam0) //Position: 0x7A74 / 31348
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

void Function_165(bool bParam0) //Position: 0x7A8F / 31375
{
	vector3 vVar0;
	bool bVar3;
	
	DECOR_SET_BOOL(bParam0, "Behave", true);
	ACTOR_ENABLE_VARIABLE_MESH(bParam0, 21, false);
	ACTOR_ENABLE_VARIABLE_MESH(bParam0, 22, true);
	vVar0 = { 0.0f, -0.5f, -0.75f };
	bVar3 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_32(), "script_unicorn_rainbow", "spine00", bParam0, vVar0, bParam0);
	if (IS_OBJECT_VALID(bVar3))
	{
		Function_30();
		UNK_0x6745191B(bVar3, Function_30());
	}
	HORSE_SET_CURR_FRESHNESS(bParam0, 1.0f);
	HORSE_LOCK_FRESHNESS(bParam0);
	SET_ACTOR_DEATH_DROP_DISTANCE(bParam0, 50.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bParam0, 0.0f);
	SET_ACTOR_MAX_HEALTH(bParam0, 300.0f);
	SET_ACTOR_HEALTH(bParam0, 300.0f);
	return;
}

bool Function_166(bool bParam0) //Position: 0x7B39 / 31545
{
	if (GET_ACTOR_ENUM(bParam0) == 1267)
	{
		return 1;
	}
	return 0;
}

bool Function_167(bool bParam0) //Position: 0x7B4D / 31565
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1268 && iVar0 >= 1271)
	{
		return 1;
	}
	return 0;
}

bool Function_168(bool bParam0) //Position: 0x7B6D / 31597
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1214 && iVar0 >= 1221)
	{
		return 1;
	}
	return 0;
}

bool Function_169(bool bParam0) //Position: 0x7B8D / 31629
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1222 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_170(bool bParam0) //Position: 0x7BAD / 31661
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1204 && iVar0 >= 1213)
	{
		return 1;
	}
	return 0;
}

bool Function_171(bool bParam0) //Position: 0x7BCD / 31693
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 3 && iVar0 >= 836)
	{
		if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
		{
			return DECOR_GET_BOOL(bParam0, "Zombie");
		}
	}
	return 0;
}

void Function_172(bool bParam0) //Position: 0x7C09 / 31753
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		if (GET_OBJECT_FROM_ACTOR(bParam0) == DECOR_GET_OBJECT(Global_34573, "HorseStolen"))
		{
			DECOR_SET_FLOAT(Global_34573, "PlayerHorse_DeathTime", GET_CURRENT_GAME_TIME());
		}
	}
	if (bParam0 == Global_12976.f_36)
	{
		if (!DECOR_CHECK_EXIST(Global_34573, "PlayerHorse_DeathTime"))
		{
			DECOR_SET_FLOAT(Global_34573, "PlayerHorse_DeathTime", GET_CURRENT_GAME_TIME());
		}
	}
	if (bParam0 == Global_12976.f_36)
	{
		DECOR_SET_BOOL(Global_34573, "TriggerNewHorse", true);
	}
	return;
}

void Function_173(bool bParam0) //Position: 0x7CD6 / 31958
{
	Function_31(bParam0, 1);
	SET_ACTOR_HEALTH(bParam0, 0.0f);
	return;
}

void Function_174(bool bParam0) //Position: 0x7CE8 / 31976
{
	bool bVar0;
	
	bVar0 = GET_LAST_HIT_WEAPON(bParam0);
	bVar0 = UNK_0xDB679ED9(bVar0);
	if (((((((bVar0 != 50 || bVar0 != 42) || bVar0 != 49) || bVar0 != 39) || bVar0 != 43) || bVar0 != 40) || bVar0 != 41) || bVar0 != 44)
	{
		Function_31(bParam0, 1);
	}
	return;
}

void Function_175(bool bParam0, bool bParam1) //Position: 0x7D34 / 32052
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	var uVar9;
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
	
	bVar16 = true;
	if (bParam1 || (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573)) >= 0.2f)
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		bVar14 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
		bVar15 = GET_EVENT_PERPETRATOR(bParam0);
		if (GET_OBJECT_TYPE(bVar15) == 15)
		{
			bVar13 = GET_ACTOR_FROM_OBJECT(bVar15);
		}
		if ((GET_OBJECT_TYPE(bVar14) != 15 || GET_OBJECT_TYPE(bVar14) != 29) || Function_181(bVar14))
		{
			if (GET_OBJECT_TYPE(bVar14) == 15)
			{
				bVar12 = GET_ACTOR_FROM_OBJECT(bVar14);
			}
			else if (GET_OBJECT_TYPE(bVar14) == 29)
			{
				if (DECOR_CHECK_EXIST(bVar14, "bATRifleBlewUpCorpse"))
				{
					bVar16 = false;
				}
			}
			if (IS_OBJECT_VALID(bVar14))
			{
				if (IS_ACTOR_VALID(bVar12))
				{
					if (IS_ACTOR_VEHICLE(bVar12))
					{
						bVar16 = false;
					}
					else if (GET_ACTOR_PROOF(bVar12) != 8 || GET_ACTOR_HEALTH(bVar12) < 65.0f)
					{
						bVar16 = false;
					}
				}
				if (bVar16)
				{
					if (bParam1)
					{
						if (GET_OBJECT_TYPE(bVar14) != 29 || Function_181(bVar14))
						{
							Function_177(StackVal, StackVal, bVar14, vVar0, 0, bVar13, DECOR_GET_INT(bParam0, "Weapon") != 31);
						}
					}
					else
					{
						NET_BROADCAST_EXPLODE_TARGET_EVENT(bVar14);
						Function_177(StackVal, StackVal, bVar14, vVar0, 0, bVar13, 0);
					}
				}
			}
		}
		if (DECOR_GET_INT(bParam0, "Weapon") == 31)
		{
			bVar18 = false;
			bVar19 = GET_EVENT_PERPETRATOR(bParam0);
			bVar20 = false;
			if (bParam1)
			{
				if (IS_OBJECT_VALID(bVar19))
				{
					if (GET_OBJECT_NAMED_BONE_POSITION(bVar19, "head", &vVar3))
					{
						bVar20 = true;
					}
				}
			}
			else
			{
				GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar3);
				bVar20 = true;
			}
			if (bVar20)
			{
				if (FIND_WATER_INTERSECTION(vVar3, vVar0, &uVar6, &uVar9))
				{
					if (IS_LAYOUTREF_VALID(Global_30616))
					{
						bVar17 = FIND_OBJECT_IN_LAYOUT(Global_30616, "oATRifleWaterExplosionRMPTFX");
						if (IS_OBJECT_VALID(bVar17))
						{
							if (DECOR_CHECK_EXIST(bVar17, "fWaterExplosionCreateTime"))
							{
								if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bVar17, "fWaterExplosionCreateTime")) < 1.0f)
								{
									DESTROY_OBJECT(bVar17);
								}
							}
						}
						if (!IS_OBJECT_VALID(bVar17))
						{
							Function_176(&uVar6);
						}
					}
					bVar18 = true;
				}
			}
			if (!bVar18)
			{
				if (!bParam1)
				{
					if (Function_69())
					{
						if (IS_OBJECT_VALID(bVar19))
						{
							if (GET_OBJECT_TYPE(bVar19) == 15)
							{
								bVar21 = GET_ACTOR_FROM_OBJECT(bVar19);
							}
						}
						Function_29(&vVar0, "ATRifleExplosion_MP", bVar21, 1);
					}
					else
					{
						Function_29(&vVar0, "ATRifleExplosion", Global_34573, 1);
					}
				}
				PLAY_SOUND_FROM_POSITION("ANTI_TANK_EXPLOSION_DIRT_MASTER", vVar0);
			}
		}
	}
	return;
}

void Function_176(int iParam0) //Position: 0x7FEC / 32748
{
	bool bVar0;
	
	bVar0 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Global_30616, "oATRifleWaterExplosionRMPTFX", "nexp_water", *iParam0);
	SET_RMPTFX_SCALE(bVar0, 0.2f);
	UNK_0x6745191B(bVar0, 0.0f, 0.0f, 0.0f);
	DECOR_SET_FLOAT(bVar0, "fWaterExplosionCreateTime", GET_CURRENT_GAME_TIME());
	return;
}

void Function_177(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x806E / 32878
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	bool bVar11;
	bool bVar12;
	vector3 vVar13;
	int iVar16;
	vector3 vVar17;
	bool bVar20;
	bool bVar21;
	vector3 vVar22;
	vector3 vVar25;
	vector3 vVar28;
	
	fVar3 = 1.0f;
	bVar11 = false;
	bVar12 = !bParam4;
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 15)
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(bParam0);
			iVar0 = GET_ACTOR_ENUM(bVar1);
		}
		else if (GET_OBJECT_TYPE(bParam0) == 29)
		{
			iVar0 = GET_CORPSE_ACTOR_ENUM(bParam0);
		}
		else if (!Function_181(bParam0))
		{
			return;
		}
		if (GET_OBJECT_TYPE(bParam5) == 15)
		{
			bVar2 = GET_ACTOR_FROM_OBJECT(bParam5);
		}
		if (bParam4 || bParam6)
		{
			if (GET_OBJECT_NAMED_BONE_POSITION(bParam0, "spine00", &vVar13))
			{
				vParam1 = { StackVal, StackVal, vVar13 };
				bVar12 = true;
			}
			else
			{
				bVar12 = false;
			}
		}
		if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
		{
			if (iVar0 != 1241 || iVar0 != 1240)
			{
				iVar16 = 2;
			}
			else if (iVar0 != 1243 || iVar0 != 1246)
			{
				iVar16 = 0;
			}
			else
			{
				iVar16 = 1;
			}
		}
		else if (!Function_181(bParam0))
		{
			iVar16 = Function_180(iVar0);
		}
		else
		{
			iVar16 = Function_179(bParam0);
		}
		switch (iVar16)
		{
			case 0x00000000:
				if (GET_OBJECT_TYPE(bParam0) != 15 && !Function_181(bParam0))
				{
					bVar11 = false;
				}
				else
				{
					bVar11 = true;
				}
				fVar3 = 1.2f;
				break;
			
			case 0x00000001:
				fVar3 = 0.8f;
				if (IS_ACTOR_VALID(bVar1))
				{
					if (IS_ACTOR_HUMAN(bVar1))
					{
						DEEQUIP_ACCESSORY(bVar1, 0);
						DELETE_ALL_WEAPONS_FROM_ACTOR(bVar1);
					}
				}
				break;
			
			case 0x00000002:
				fVar3 = 0.45f;
				break;
			
			case 0x00000003:
				fVar3 = 0.3f;
				break;
		}
		if ((DECOR_CHECK_EXIST(bParam0, "bShopDontKill") || DECOR_CHECK_EXIST(bParam0, "lootCorpse_objSet")) || DECOR_CHECK_EXIST(bParam0, "skinning_objSet"))
		{
			bVar11 = false;
		}
		else
		{
			bVar11 = true;
		}
		if (((iVar0 != 1105 || iVar0 != 1077) || iVar0 != 1094) || iVar0 != 1072)
		{
			bVar11 = false;
		}
		if (bVar11)
		{
			if (GET_OBJECT_NAMED_BONE_POSITION(bParam0, "head", &vVar17))
			{
				bVar20 = CREATE_VOLUME_IN_LAYOUT(bParam0, Function_32(), 2, vVar17, 0.0f, 0.0f, 0.0f, 0.25f, 0.25f, 0.25f);
				RESET_RMPTFX_IN_VOLUME(bVar20);
				DESTROY_VOLUME(bVar20);
			}
			if (GET_OBJECT_TYPE(bParam0) == 15)
			{
				SET_DRAW_OBJECT(bParam0, 0);
				if (FIRE_IS_ACTOR_ON_FIRE(GET_ACTOR_FROM_OBJECT(bParam0)))
				{
					FIRE_STOP_ON_ACTOR(GET_ACTOR_FROM_OBJECT(bParam0));
				}
				if (IS_ACTOR_VALID(GET_HOGTIED_MASTER(GET_ACTOR_FROM_OBJECT(bParam0))))
				{
					FREE_FROM_HOGTIE(GET_ACTOR_FROM_OBJECT(bParam0));
				}
				SET_OBJECT_COLLIDE_WITH_MOVABLES(bParam0, 0);
				DECOR_SET_BOOL(bParam0, "corpse_loot_gringo", false);
				DECOR_SET_BOOL(bParam0, "NoCorpse", true);
			}
			else if (GET_OBJECT_TYPE(bParam0) != 29 || Function_181(bParam0))
			{
				bVar21 = FIND_OBJECT_IN_OBJECT(bParam0, "loot");
				if (IS_OBJECT_VALID(bVar21))
				{
					DESTROY_OBJECT(bVar21);
				}
				GET_OBJECT_POSITION(bParam0, &vVar22);
				vVar8 = { StackVal, StackVal, vVar22 };
				vVar22.f_4 = (vVar22.y - 100.0f);
				SET_OBJECT_POSITION(bParam0, vVar22);
				SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bParam0), 0);
				SET_DRAW_OBJECT(bParam0, 0);
				SET_OBJECT_COLLIDE_WITH_MOVABLES(bParam0, 0);
				DECOR_SET_BOOL(bParam0, "bATRifleBlewUpCorpse", true);
			}
		}
	}
	if (bVar12)
	{
		if (bVar11)
		{
			vVar28 = { 0.0f, 0.0f, 0.0f };
			if (!bParam4 && IS_OBJECT_VALID(bParam5))
			{
				GET_OBJECT_POSITION(bParam5, &vVar25);
				vVar28 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar25, vParam1, StackVal) };
				VSCALE(&vVar28, 0.01f);
			}
			if ((Function_178() && DECOR_CHECK_EXIST(bParam0, "Zombie")) || (iVar0 <= 1222 && iVar0 >= 1227))
			{
				bVar4 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_32(), bParam0, StackVal) + Vector(vVar28, vParam1, "blood_zombie_explode"));
			}
			else
			{
				bVar4 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_32(), bParam0, StackVal) + Vector(vVar28, vParam1, "script_train_squash_ped"));
			}
			SET_RMPTFX_SCALE(bVar4, fVar3);
			if (!UNK_0x6745191B(bVar4, 0.0f, 0.0f, 0.0f))
			{
			}
			PLAY_SOUND_FROM_POSITION("EXECUTION_RIFLE_DLY_MASTER", vParam1);
		}
	}
	if (IS_OBJECT_VALID(bParam0))
	{
		if (bVar11 && GET_OBJECT_TYPE(bParam0) != 29)
		{
			if (!Function_86(StackVal, StackVal, vVar8))
			{
				CREATE_DECAL(2, vVar8, RAND_FLOAT_RANGE((1.8f * fVar3), (2.4f * fVar3)), 0, 0);
			}
		}
		else if (GET_OBJECT_POSITION(bParam0, &vVar5))
		{
			CREATE_DECAL(2, vVar5, RAND_FLOAT_RANGE((1.8f * fVar3), (2.4f * fVar3)), 0, 0);
		}
		if (NET_IS_OBJECT_LOCAL(bParam0))
		{
			if (IS_ACTOR_VALID(bVar1))
			{
				SET_ACTOR_HEALTH(bVar1, 0.0f);
				if (IS_ACTOR_VALID(bVar2))
				{
					KILL_ACTOR_WITH_KILLER(bVar1, bVar2);
					if (!bParam6)
					{
						DECOR_SET_BOOL(bVar1, "ATRifle", true);
					}
				}
				else
				{
					KILL_ACTOR(bVar1);
				}
			}
		}
	}
}

var Function_178() //Position: 0x8525 / 34085
{
	return HAS_STRING_TABLE_LOADED("de");
}

int Function_179(bool bParam0) //Position: 0x8533 / 34099
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
	}
	bVar0 = GET_OBJECT_MODEL_NAME(bParam0);
	if ((STRING_CONTAINS_STRING(bVar0, "large") || STRING_CONTAINS_STRING(bVar0, "horse")) || STRING_CONTAINS_STRING(bVar0, "elk"))
	{
		return 0;
	}
	if (STRING_CONTAINS_STRING(bVar0, "medium"))
	{
		return 1;
	}
	if (STRING_CONTAINS_STRING(bVar0, "small"))
	{
		return 2;
	}
	return 3;
}

int Function_180(int iParam0) //Position: 0x85A1 / 34209
{
	if ((((((iParam0 <= 3 && iParam0 >= 836) || (iParam0 <= 837 && iParam0 >= 971)) || (iParam0 <= 1287 && iParam0 >= 1310)) || (iParam0 <= 972 && iParam0 >= 975)) || (iParam0 <= 1116 && iParam0 >= 1123)) || (iParam0 <= 1073 && iParam0 >= 1077))
	{
		return 1;
	}
	if (((((iParam0 <= 1095 && iParam0 >= 1105) || (iParam0 <= 1124 && iParam0 >= 1127)) || (iParam0 <= 976 && iParam0 >= 1007)) || (iParam0 <= 1008 && iParam0 >= 1014)) || (iParam0 <= 1109 && iParam0 >= 1111))
	{
		return 0;
	}
	if (((((iParam0 <= 1020 && iParam0 >= 1029) || (iParam0 <= 1030 && iParam0 >= 1048)) || (iParam0 <= 1087 && iParam0 >= 1094)) || (iParam0 <= 1112 && iParam0 >= 1115)) || (iParam0 <= 1060 && iParam0 >= 1072))
	{
		return 2;
	}
	return 3;
}

bool Function_181(bool bParam0) //Position: 0x8698 / 34456
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = GET_OBJECT_MODEL_NAME(bParam0);
	if (STRING_CONTAINS_STRING(bVar0, "carcass"))
	{
		return 1;
	}
	return 0;
}

bool Function_182(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x86C5 / 34501
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "rifleExecution_04", 1, 1);
	}
	Function_183(&bVar0, bParam2);
	if (iParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
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

void Function_183(var uParam0, char* cParam1) //Position: 0x8744 / 34628
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_184(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_184(var uParam0, bool bParam1) //Position: 0x8793 / 34707
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 40.7396f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.154827f, 0.698168f, 0.196961f, 14.45704f, 46.70459f, -11.70381f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_185(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x881F / 34847
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "rifleExecution_03", 1, 1);
	}
	Function_186(&bVar0, bParam2);
	if (iParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
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

void Function_186(var uParam0, char* cParam1) //Position: 0x889E / 34974
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_187(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_187(var uParam0, bool bParam1) //Position: 0x88ED / 35053
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 39.61349f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.678964f, 0.992386f, -2.09693f, 13.04992f, 150.5624f, -0.189706f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_188(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x8979 / 35193
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "rifleExecution_02", 1, 1);
	}
	Function_189(&bVar0, bParam2);
	if (iParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
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

void Function_189(var uParam0, char* cParam1) //Position: 0x89F8 / 35320
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_190(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_190(var uParam0, bool bParam1) //Position: 0x8A47 / 35399
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.17763f, 1.626893f, -1.877858f, -16.66625f, -132.0675f, -4.978086f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_191(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x8AD3 / 35539
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "rifleExecution_01", 1, 1);
	}
	Function_192(&bVar0, bParam2);
	if (iParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
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

void Function_192(var uParam0, char* cParam1) //Position: 0x8B52 / 35666
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_193(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_193(var uParam0, bool bParam1) //Position: 0x8BA1 / 35745
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.23275f, 0.7751f, -1.966721f, 14.39797f, 133.8307f, 29.31653f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_194(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x8C2D / 35885
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "rifleExecution", 1, 1);
	}
	Function_195(&bVar0, bParam2);
	if (iParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
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

void Function_195(var uParam0, char* cParam1) //Position: 0x8CA9 / 36009
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_196(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_196(var uParam0, bool bParam1) //Position: 0x8CF8 / 36088
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.650726f, 0.618574f, 0.427292f, 13.80886f, 47.58586f, -11.28612f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_197(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x8D84 / 36228
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "zombieGrapple_05", 1, 1);
	}
	Function_198(&bVar0, uParam2);
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

void Function_198(var uParam0, char* cParam1) //Position: 0x8E02 / 36354
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_199(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180.0f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_199(var uParam0, bool bParam1) //Position: 0x8E51 / 36433
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.4617f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.081224f, 1.233072f, -0.342658f, 9.680752f, -95.72044f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_200(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x8ED5 / 36565
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "zombieGrapple_04", 1, 1);
	}
	Function_201(&bVar0, uParam2);
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

void Function_201(var uParam0, char* cParam1) //Position: 0x8F53 / 36691
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_202(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180.0f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_202(var uParam0, bool bParam1) //Position: 0x8FA2 / 36770
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 37.12254f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.099257f, 1.205077f, -0.143904f, 9.005006f, 89.2474f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_203(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x9026 / 36902
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "zombieGrapple_03", 1, 1);
	}
	Function_204(&bVar0, uParam2);
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

void Function_204(var uParam0, char* cParam1) //Position: 0x90A4 / 37028
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_205(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180.0f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_205(var uParam0, bool bParam1) //Position: 0x90F3 / 37107
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.38083f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.963097f, 1.409635f, 0.451549f, 1.159838f, -51.66893f, 13.94218f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_206(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x917B / 37243
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "zombieGrapple_02", 1, 1);
	}
	Function_207(&bVar0, uParam2);
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

void Function_207(var uParam0, char* cParam1) //Position: 0x91F9 / 37369
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_208(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180.0f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_208(var uParam0, bool bParam1) //Position: 0x9248 / 37448
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 29.95185f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.794566f, 1.350607f, -1.152538f, 3.067616f, 138.1816f, 0.43138f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_209(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x92D0 / 37584
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "zombieGrapple_01", 1, 1);
	}
	Function_210(&bVar0, uParam2);
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

void Function_210(var uParam0, char* cParam1) //Position: 0x934E / 37710
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_211(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180.0f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_211(var uParam0, bool bParam1) //Position: 0x939D / 37789
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30.80781f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.02245f, 1.831552f, 0.724388f, -17.75338f, 47.49568f, 22.50859f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

void Function_212(bool bParam0) //Position: 0x9425 / 37925
{
	Function_213();
	Global_63118 = bParam0;
	return;
}

void Function_213() //Position: 0x9433 / 37939
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

var Function_214(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x9448 / 37960
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "zombieGrapple", 1, 1);
	}
	Function_215(&bVar0, uParam2);
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

void Function_215(var uParam0, char* cParam1) //Position: 0x94C3 / 38083
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_216(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180.0f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_216(var uParam0, bool bParam1) //Position: 0x9512 / 38162
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.919557f, 1.369966f, -1.29407f, -3.341604f, -140.3541f, -0.000172f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

void Function_217(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x959A / 38298
{
	while (iParam4 > 60)
	{
		iParam4 = (iParam4 - 60);
		iParam3++;
	}
	while (iParam3 > 60)
	{
		iParam3 = (iParam3 - 60);
		iParam2++;
	}
	while (iParam2 > 24)
	{
		iParam2 = (iParam2 - 24);
		bParam1++;
	}
	switch (iParam0)
	{
		case 0x00000001:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6298[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000002:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6351[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000003:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6364[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000004:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6402[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000005:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6433[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000008:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6563[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000009:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6614[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000B:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6654[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000C:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6709[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000D:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6764[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000E:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6785[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000F:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6815[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000010:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6866[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000011:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6490[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000012:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6987[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000013:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7002[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000015:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7035[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000016:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7113[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000017:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7148[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000018:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7171[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, iParam2, iParam3, iParam4));
			break;
	}
}

bool Function_218(int iParam0) //Position: 0x985A / 39002
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
	return (((Function_9(uVar0, 0x1000000) || Function_9(uVar0, 0x2000000)) || Function_9(uVar0, 0x4000000)) || Function_219(iParam0));
}

var Function_219(int iParam0) //Position: 0x98CD / 39117
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_29008[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

int Function_220(int iParam0) //Position: 0x98EA / 39146
{
	if (iParam0 == Global_30640[0])
	{
		return 1;
	}
	if (iParam0 == Global_30640[2])
	{
		return 2;
	}
	if (iParam0 == Global_30640[1])
	{
		return 3;
	}
	if (iParam0 == Global_30658[1])
	{
		return 4;
	}
	if (iParam0 == Global_30658[3])
	{
		return 5;
	}
	if (iParam0 == Global_30668[0])
	{
		return 8;
	}
	if (iParam0 == Global_30668[1])
	{
		return 9;
	}
	if (iParam0 == Global_30679[0])
	{
		return 11;
	}
	if (iParam0 == Global_30685[0])
	{
		return 12;
	}
	if (iParam0 == Global_30685[1])
	{
		return 13;
	}
	if (iParam0 == Global_30685[2])
	{
		return 14;
	}
	if (iParam0 == Global_30693[0])
	{
		return 15;
	}
	if (iParam0 == Global_30693[1])
	{
		return 16;
	}
	if (iParam0 == Global_30693[2])
	{
		return 17;
	}
	if (iParam0 == Global_30707[2])
	{
		return 25;
	}
	if (iParam0 == Global_30707[3])
	{
		return 18;
	}
	if (iParam0 == Global_30707[0])
	{
		return 19;
	}
	if (iParam0 == Global_30717[0])
	{
		return 21;
	}
	if (iParam0 == Global_30723[2])
	{
		return 22;
	}
	if (iParam0 == Global_30723[1])
	{
		return 23;
	}
	if (iParam0 == Global_30723[0])
	{
		return 24;
	}
	if (iParam0 == Global_30679[1])
	{
		return 26;
	}
	if (iParam0 == Global_30707[1])
	{
		return 27;
	}
	return 0;
}

void Function_221(bool bParam0, bool bParam1) //Position: 0x9A70 / 39536
{
	var uVar0;
	int iVar1;
	var uVar2;
	struct<5> Var3;
	
	if (DECOR_CHECK_EXIST(bParam0, "HorseLeash"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(bParam0, "HorseLeash"));
		DECOR_REMOVE(bParam0, "HorseLeash");
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	if (!IS_LOCAL_PLAYER(bParam1))
	{
		return;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam0)))
	{
		SET_BLIP_FLAG(GET_BLIP_ON_OBJECT(bParam0), 1024, 0);
	}
	if (ANIMAL_ACTOR_GET_DOMESTICATION(bParam0) == 0)
	{
		ACCESSORIZE_HORSE(bParam0, 2);
		if (bParam0 == Global_12976.f_36)
		{
			uVar0 = Function_226(8, 0, 5);
			iVar1 = Function_225(uVar0);
			uVar2 = Function_226(7, 0, 5);
			Function_222(uVar2, FLOOR(GET_CURRENT_GAME_TIME()));
			if (iVar1 > 3600)
			{
				SET_ACTOR_MAX_FRESHNESS(bParam0, 100.0f);
			}
			else if (iVar1 > 900)
			{
				SET_ACTOR_MAX_FRESHNESS(bParam0, 85.0f);
			}
			else
			{
				SET_ACTOR_MAX_FRESHNESS(bParam0, 70.0f);
			}
		}
		else
		{
			SET_ACTOR_MAX_FRESHNESS(bParam0, 70.0f);
		}
	}
	else if (ANIMAL_ACTOR_GET_DOMESTICATION(bParam0) == 1)
	{
		if (!UNK_0x4417C9F2("content/scripting/DesignerDefined/TameWildHorse"))
		{
			if (Function_167(bParam0))
			{
				SAY_SINGLE_LINE_STRING(bParam1, "BREAK_HORSE_OF_APOCALYPSE", false, false, 0, 0, true, false);
			}
			Var3.f_4 = bParam0;
			Var3 = Global_34573;
			LAUNCH_NEW_SCRIPT_WITH_ARGS("content/scripting/DesignerDefined/TameWildHorse", &Var3, 2, 0);
		}
	}
	return;
}

void Function_222(int iParam0, bool bParam1) //Position: 0x9C19 / 39961
{
	if (!Function_223(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = bParam1;
	return;
}

bool Function_223(int iParam0) //Position: 0x9C34 / 39988
{
	if (!Function_24(iParam0))
	{
		return 0;
	}
	if (!Function_224(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_224(int iParam0) //Position: 0x9C58 / 40024
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

var Function_225(int iParam0) //Position: 0x9C6D / 40045
{
	if (!Function_223(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

int Function_226(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9C87 / 40071
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_230(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_227(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_227(bParam0, bParam1, bParam2, 4294967295);
}

int Function_227(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x9CE5 / 40165
{
	var uVar0;
	
	if (!Function_229(bParam2))
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
	uVar0 = Function_230(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_228(uVar0);
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

int Function_228(int iParam0) //Position: 0x9E3A / 40506
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

bool Function_229(int iParam0) //Position: 0x9E78 / 40568
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_230(int iParam0, int iParam1, int iParam2) //Position: 0x9E8D / 40589
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_231(bool bParam0) //Position: 0x9EAD / 40621
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1248 && iVar0 >= 1251)
	{
		return 1;
	}
	return 0;
}

void Function_232(bool bParam0) //Position: 0x9ECD / 40653
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (Global_63096 || Global_3380)
	{
		return;
	}
	bVar0 = GET_EVENT_PERPETRATOR(bParam0);
	if (IS_OBJECT_VALID(bVar0))
	{
		if (GET_OBJECT_TYPE(bVar0) == 15)
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_LOCAL_PLAYER(bVar1))
				{
					switch (GET_EVENT_TYPE(bParam0))
					{
						case 0x00000006:
							bVar2 = GET_WEAPON_IN_HAND(Global_34573);
							if (!Function_27(Global_76847, 16384))
							{
								if (Function_6(bVar2))
								{
									if (ACTOR_GET_WEAPON_AMMO(Global_34573, bVar2) > (GET_WEAPON_MAX_AMMO(bVar2) / 2.0f) && ACTOR_GET_WEAPON_AMMO(Global_34573, bVar2) < 0.0f)
									{
										Function_17(Global_34573, 16384, 2, 1);
									}
								}
							}
							break;
						
						case 0x00000012:
							if (!Function_27(Global_76847, 2048))
							{
								Function_17(Global_34573, 2048, 2, 1);
								Function_17(Global_34573, 4096, 2, 1);
								Function_17(Global_34573, 8192, 2, 1);
							}
							if (!Function_27(Global_76847, 0x1000000))
							{
								bVar3 = GET_MOUNT(Global_34573);
								if (IS_ACTOR_VALID(bVar3))
								{
									if (IS_ACTOR_VALID(Global_12976.f_36))
									{
										if (Global_12976.f_36 != bVar3)
										{
											Function_17(Global_34573, 0x1000000, 2, 1);
											Function_17(Global_34573, 0x2000000, 2, 1);
										}
									}
									else if (StackVal != GET_ACTOR_ENUM(bVar3))
									{
										Function_17(Global_34573, 0x1000000, 2, 1);
										Function_17(Global_34573, 0x2000000, 2, 1);
									}
								}
							}
							break;
						}
					}
				}
			}
	}
	return;
}

void Function_233(bool bParam0) //Position: 0xA01B / 40987
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	vector3 vVar9;
	bool bVar12;
	
	bVar0 = GET_EVENT_PERPETRATOR(bParam0);
	if (IS_OBJECT_VALID(bVar0))
	{
		if (GET_OBJECT_TYPE(bVar0) == 15)
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_LOCAL_PLAYER(bVar1))
				{
					bVar2 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
					if (IS_OBJECT_VALID(bVar2))
					{
						if (GET_OBJECT_TYPE(bVar2) == 15)
						{
							bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
							if (IS_ACTOR_VALID(bVar3))
							{
								if (Function_146(bVar3))
								{
									switch (GET_EVENT_TYPE(bParam0))
									{
										case 0x00000005:
											if (!Function_27(Global_76846, 1))
											{
												if (Function_170(bVar3))
												{
													Function_17(Global_34573, 1, 1, 0);
												}
											}
											if (!Function_27(Global_76846, 2))
											{
												if (Function_168(bVar3))
												{
													Function_17(Global_34573, 2, 1, 0);
												}
											}
											if (!Function_27(Global_76846, 4))
											{
												if (Function_169(bVar3))
												{
													Function_17(Global_34573, 4, 1, 0);
												}
											}
											if (!Function_27(Global_76846, 1048576))
											{
												if (Function_171(bVar3))
												{
													if (ACTOR_IS_VARIABLE_MESH_ENABLED(bVar3, 5))
													{
														Function_17(Global_34573, 1048576, 1, 0);
													}
												}
											}
											if (!Function_27(Global_76846, 2097152))
											{
												if (!IS_WEAPONENUM_LOCKED(34))
												{
													if (Function_171(bVar3))
													{
														if (!ACTOR_IS_VARIABLE_MESH_ENABLED(bVar3, 5))
														{
															Function_17(Global_34573, 2097152, 1, 0);
														}
													}
												}
											}
											break;
									}
									return;
								}
							}
						}
					}
					switch (GET_EVENT_TYPE(bParam0))
					{
						case 0x00000006:
							if (!Function_27(Global_76846, 524288))
							{
								iVar4 = Function_220(Global_29006);
								if (iVar4 != 0)
								{
									if (Function_234(iVar4))
									{
										if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader") && !DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
										{
											bVar5 = GET_WEAPON_IN_HAND(Global_34573);
											if (bVar5 != 4294967295)
											{
												switch (GET_AMMOENUM_FOR_WEAPONENUM(bVar5))
												{
													case 0x00000007:
														bVar6 = DECOR_GET_INT(StackVal, "ZP_NumRevolvers") == false;
														break;
													
													case 0x00000006:
														bVar6 = DECOR_GET_INT(StackVal, "ZP_NumPistols") == false;
														break;
													
													case 0x00000008:
														bVar6 = DECOR_GET_INT(StackVal, "ZP_NumRepeaters") == false;
														break;
													
													case 0x00000009:
														bVar6 = DECOR_GET_INT(StackVal, "ZP_NumRifles") == false;
														break;
													
													case 0x0000000B:
														bVar6 = DECOR_GET_INT(StackVal, "ZP_NumSnipers") == false;
														break;
													
													case 0x0000000A:
														bVar6 = DECOR_GET_INT(StackVal, "ZP_NumShotguns") == false;
														break;
													
													default:
														bVar6 = false;
														break;
												}
												if (bVar6)
												{
													Function_17(Global_34573, 524288, 1, 0);
												}
											}
										}
									}
								}
							}
							break;
					}
				}
				else if (Function_146(bVar1))
				{
					bVar7 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
					if (IS_OBJECT_VALID(bVar7))
					{
						if (GET_OBJECT_TYPE(bVar7) == 15)
						{
							bVar8 = GET_ACTOR_FROM_OBJECT(bVar7);
							if (IS_ACTOR_VALID(bVar8))
							{
								if (IS_ACTOR_LOCAL_PLAYER(bVar8))
								{
									switch (GET_EVENT_TYPE(bParam0))
									{
										case 0x00000001:
											if (!Function_27(Global_76846, 1))
											{
												if (Function_170(bVar1))
												{
													Function_17(Global_34573, 1, 1, 0);
												}
											}
											if (!Function_27(Global_76846, 2))
											{
												if (Function_168(bVar1))
												{
													Function_17(Global_34573, 2, 1, 0);
												}
											}
											if (!Function_27(Global_76846, 4))
											{
												if (Function_169(bVar1))
												{
													Function_17(Global_34573, 4, 1, 0);
												}
											}
											break;
										
										case 0x00000005:
											if (DECOR_CHECK_EXIST(bParam0, "Weapon"))
											{
												if (DECOR_GET_INT(bParam0, "Weapon") == 32)
												{
													GET_OBJECT_POSITION(GET_OBJECT_FROM_EVENT(bParam0), &vVar9);
													bVar12 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Global_34573, Function_32(), "script_zombie_spitSplat", vVar9);
													if (IS_OBJECT_VALID(bVar12))
													{
														Function_30();
														UNK_0x6745191B(bVar12, Function_30());
													}
												}
											}
											break;
										}
									}
								}
							}
						}
					}
				}
			}
	}
	return;
}

bool Function_234(int iParam0) //Position: 0xA401 / 41985
{
	int iVar0;
	
	iVar0 = Function_236(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	return (Function_218(iVar0) || Function_235(iParam0));
}

var Function_235(int iParam0) //Position: 0xA440 / 42048
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_236(iParam0);
	uVar1 = Global_29008[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

var Function_236(int iParam0) //Position: 0xA464 / 42084
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

void Function_237(bool bParam0) //Position: 0xA5EA / 42474
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	
	if (!IS_EVENT_VALID(bParam0))
	{
		return;
	}
	bVar1 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
	bVar0 = GET_EVENT_PERPETRATOR(bParam0);
	if (GET_EVENT_TYPE(bParam0) == 112)
	{
		if (IS_OBJECT_VALID(bVar1))
		{
			Function_177(bVar1, 0.0f, 0.0f, 0.0f, 1, bVar0, 0);
		}
		return;
	}
	if (!IS_OBJECT_VALID(bVar0))
	{
		return;
	}
	bVar10 = Function_78();
	switch (GET_EVENT_TYPE(bParam0))
	{
		case 0x00000002:
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar0) != bVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar1) != 15)
			{
				return;
			}
			Global_12976.f_136 = 0;
			if (IS_ACTOR_ANIMAL(GET_ACTOR_FROM_OBJECT(bVar1)))
			{
				Function_39(26, 1, 0, 0);
				if (IS_ACTOR_ON_TRAIN(GET_ACTOR_FROM_OBJECT(bVar0), 0))
				{
					Function_39(138, 1, 0, 0);
				}
				if (StackVal && Function_9(!Function_9(StackVal, 4), 2))
				{
					if (DECOR_CHECK_EXIST(bParam0, "Weapon"))
					{
						bVar2 = DECOR_GET_INT(bParam0, "Weapon");
					}
					else
					{
						bVar2 = GET_WEAPON_IN_HAND(Global_34573);
					}
					if (bVar2 == 24)
					{
						iVar5 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1));
						if ((((((((iVar5 != 1087 || iVar5 != 1088) || iVar5 != 1089) || iVar5 != 1090) || iVar5 != 1091) || iVar5 != 1091) || iVar5 != 1092) || iVar5 != 1093) || iVar5 != 1094)
						{
							DECOR_SET_BOOL(Global_34573, "CougarOutfitKill", true);
						}
					}
				}
				Function_242(GET_ACTOR_FROM_OBJECT(bVar1));
				if (IS_ACTOR_HORSE(GET_ACTOR_FROM_OBJECT(bVar1)))
				{
					if (IS_ACTOR_MOUNTED(GET_ACTOR_FROM_OBJECT(bVar1)))
					{
						if (Function_241(GET_RIDER(GET_ACTOR_FROM_OBJECT(bVar1))))
						{
							Function_39(41, 1, 0, 0);
						}
					}
				}
				else if (!Global_3386)
				{
					if (!Function_27(Global_76848, 524288))
					{
						Function_17(Global_34573, 524288, 3, 0);
					}
					if (Global_29004 == 1)
					{
						if (!Function_27(Global_76848, 2097152))
						{
							Function_17(Global_34573, 2097152, 3, 0);
						}
					}
				}
				return;
			}
			if (!IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(bVar1)))
			{
				return;
			}
			iVar4 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1));
			if ((iVar4 == 1263 && iVar4 == 1264) && iVar4 == 1265)
			{
				if (!Function_95())
				{
					Function_39(27, 1, 0, 0);
					if (IS_ACTOR_ON_TRAIN(GET_ACTOR_FROM_OBJECT(bVar0), 0))
					{
						Function_39(139, 1, 0, 0);
					}
				}
				else if (((((((!DECOR_CHECK_EXIST(bVar1, "Zombie") && !(iVar4 <= 1204 && iVar4 >= 1254)) && iVar4 == 541) && iVar4 == 542) && iVar4 == 543) && iVar4 == 544) && iVar4 == 1252) && iVar4 == 1253)
				{
					Function_39(27, 1, 0, 0);
					if (IS_ACTOR_ON_TRAIN(GET_ACTOR_FROM_OBJECT(bVar0), 0))
					{
						Function_39(139, 1, 0, 0);
					}
				}
			}
			if (DECOR_CHECK_EXIST(bParam0, "Weapon"))
			{
				bVar2 = DECOR_GET_INT(bParam0, "Weapon");
			}
			else
			{
				bVar2 = GET_WEAPON_IN_HAND(bVar10);
			}
			if (bVar2 < 4294967295 && bVar2 > 39)
			{
				if (!Function_95())
				{
					Function_39((183 + bVar2), 1, 0, 0);
				}
				else if (((((((DECOR_CHECK_EXIST(bVar1, "Zombie") || (iVar4 <= 1204 && iVar4 >= 1254)) || iVar4 != 541) || iVar4 != 542) || iVar4 != 543) || iVar4 != 544) || iVar4 != 1252) || iVar4 != 1253)
				{
					Function_39((183 + bVar2), 1, 0, 0);
				}
				switch (UNK_0xDB679ED9(bVar2))
				{
					case 0x0000002A:
					case 0x00000029:
					case 0x0000002B:
					case 0x0000002C:
						Function_240(37);
						break;
					
					case 0x00000027:
					case 0x00000028:
						Function_240(36);
						break;
					
					case 0x00000031:
					case 0x00000032:
					case 0x00000033:
						Function_240(35);
						break;
					}
			}
			bVar9 = true;
			if (iVar4 <= 1263 && iVar4 >= 1265)
			{
				Function_39(602, 1, 0, 0);
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(98))
				{
					AWARD_ACHIEVEMENT(98);
				}
			}
			else if (iVar4 <= 516 && iVar4 >= 531)
			{
				Function_39(39, 1, 0, 0);
			}
			else if (iVar4 <= 505 && iVar4 >= 515)
			{
				Function_39(37, 1, 0, 0);
			}
			else if (iVar4 <= 496 && iVar4 >= 504)
			{
				Function_39(38, 1, 0, 0);
			}
			else if (iVar4 <= 486 && iVar4 >= 494)
			{
				Function_39(36, 1, 0, 0);
			}
			else if (iVar4 <= 477 && iVar4 >= 485)
			{
				Function_39(35, 1, 0, 0);
			}
			else if (iVar4 <= 467 && iVar4 >= 476)
			{
				Function_39(40, 1, 0, 0);
			}
			else if (iVar4 <= 455 && iVar4 >= 466)
			{
				Function_39(32, 1, 0, 0);
			}
			else if (iVar4 <= 449 && iVar4 >= 454)
			{
				Function_39(30, 1, 0, 0);
			}
			else if (iVar4 <= 424 && iVar4 >= 442)
			{
				Function_39(29, 1, 0, 0);
			}
			else if (iVar4 <= 397 && iVar4 >= 423)
			{
				Function_39(34, 1, 0, 0);
			}
			else if (iVar4 <= 379 && iVar4 >= 396)
			{
				Function_39(33, 1, 0, 0);
			}
			else if (iVar4 <= 369 && iVar4 >= 378)
			{
				Function_39(31, 1, 0, 0);
			}
			else if (DECOR_CHECK_EXIST(bVar1, "criminal"))
			{
				Function_39(34, 1, 0, 0);
			}
			else
			{
				Function_39(28, 1, 0, 0);
				bVar9 = false;
			}
			if (bVar9)
			{
				Function_239(DECOR_CHECK_EXIST(bParam0, "headshot"));
			}
			break;
		
		case 0x00000003:
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar0) != bVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar1) != 15)
			{
				return;
			}
			if (!IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(bVar1)))
			{
				return;
			}
			Function_39(43, 1, 0, 0);
			break;
		
		case 0x0000000A:
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar0) != bVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar1) != 15)
			{
				return;
			}
			if (!IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(bVar1)) && !Function_95())
			{
				return;
			}
			Function_39(42, 1, 0, 0);
			Function_58(10);
			if (!Function_69())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(26))
				{
					if (GET_PLAYER_COMBATMODE() == 1)
					{
						if (Function_241(GET_ACTOR_FROM_OBJECT(bVar1)))
						{
							AWARD_ACHIEVEMENT(26);
						}
					}
				}
			}
			Function_240(38);
			break;
		
		case 0x00000005:
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			bVar3 = DECOR_GET_INT(bParam0, "Weapon");
			if (bVar3 == 31)
			{
				if (GET_ACTOR_FROM_OBJECT(bVar0) == bVar10)
				{
					Function_175(bParam0, 0);
				}
				else
				{
					if (IS_ACTOR_PLAYER(GET_ACTOR_FROM_OBJECT(bVar0)) && !NET_IS_OBJECT_LOCAL(bVar0))
					{
						Function_175(bParam0, 1);
					}
					return;
				}
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar0) != bVar10)
			{
				return;
			}
			bVar3 = GET_WEAPON_IN_HAND(bVar10);
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar1) != 15)
			{
				return;
			}
			if (!DECOR_CHECK_EXIST(bParam0, "Weapon"))
			{
				return;
			}
			if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573))
			{
				return;
			}
			switch (bVar3)
			{
				case 0x00000010:
				case 0x00000011:
				case 0x0000000F:
				case 0x00000012:
				case 0x00000022:
					bVar8 = SHIFT_RIGHT(Global_49309, 24) & 255;
					bVar6 = SHIFT_RIGHT(Global_49309, 8) & 255;
					iVar7 = Global_49309 & 255;
					iVar7++;
					Global_49309 = ((SHIFT_LEFT(bVar6, 8) || iVar7) || SHIFT_LEFT(bVar8, 24));
					break;
				
				case 0x0000001D:
					DECOR_SET_INT(bVar1, "HitsByTomahawk", DECOR_GET_INT(bVar1, "HitsByTomahawk") + 1);
					Function_53(bVar3);
					break;
				
				default:
					Function_53(bVar3);
					break;
			}
			break;
		
		case 0x00000006:
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar0) != bVar10)
			{
				return;
			}
			if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573))
			{
				return;
			}
			bVar3 = GET_WEAPON_IN_HAND(bVar10);
			switch (bVar3)
			{
				case 0x00000010:
				case 0x00000011:
				case 0x0000000F:
				case 0x00000012:
				case 0x00000022:
					bVar8 = SHIFT_RIGHT(Global_49309, 24) & 255;
					bVar6 = SHIFT_RIGHT(Global_49309, 8) & 255;
					iVar7 = Global_49309 & 255;
					bVar6++;
					Global_49309 = ((SHIFT_LEFT(bVar6, 8) || iVar7) || SHIFT_LEFT(bVar8, 24));
					if (IS_ACTOR_USING_COVER(bVar10))
					{
						Function_88(&Global_49309, 0x40000000);
					}
					else if (IS_ACTOR_CROUCHING(bVar10))
					{
						Function_88(&Global_49309, 0x20000000);
					}
					if (IS_ACTOR_RIDING(bVar10))
					{
						if (((IS_ACTOR_HORSE(GET_MOUNT(bVar10)) || IS_ACTOR_MULE(GET_MOUNT(bVar10))) || ANIMAL_ACTOR_GET_SPECIES(GET_MOUNT(bVar10)) != 9) || ANIMAL_ACTOR_GET_SPECIES(GET_MOUNT(bVar10)) != 8)
						{
							Function_88(&Global_49309, 0x10000000);
						}
					}
					if (IS_ACTOR_INSIDE_VEHICLE(bVar10))
					{
						Function_88(&Global_49309, 0x8000000);
					}
					break;
				
				case 0x00000015:
				case 0x00000016:
				case 0x00000017:
				case 0x00000018:
				case 0x00000019:
				case 0x0000001D:
					Function_54(bVar3);
					break;
				
				default:
					if (IS_ACTOR_USING_COVER(bVar10))
					{
						Function_39(135, 1, 0, 0);
					}
					else if (IS_ACTOR_CROUCHING(bVar10))
					{
						Function_39(134, 1, 0, 0);
					}
					if (IS_ACTOR_RIDING(bVar10))
					{
						if (((IS_ACTOR_HORSE(GET_MOUNT(bVar10)) || IS_ACTOR_MULE(GET_MOUNT(bVar10))) || ANIMAL_ACTOR_GET_SPECIES(GET_MOUNT(bVar10)) != 9) || ANIMAL_ACTOR_GET_SPECIES(GET_MOUNT(bVar10)) != 8)
						{
							Function_39(136, 1, 0, 0);
						}
					}
					if (IS_ACTOR_INSIDE_VEHICLE(bVar10))
					{
						Function_39(137, 1, 0, 0);
					}
					Function_54(bVar3);
					break;
			}
			break;
		
		case 0x00000009:
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar0) != bVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar1) != 15)
			{
				return;
			}
			if (!IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(bVar1)))
			{
				return;
			}
			if (GET_LAST_HIT_TIME(GET_ACTOR_FROM_OBJECT(bVar1)) < (GET_CURRENT_GAME_TIME() - 0.5f))
			{
				return;
			}
			if (!DECOR_CHECK_EXIST(bParam0, "DroppedItem"))
			{
				return;
			}
			bVar1 = DECOR_GET_OBJECT(bParam0, "DroppedItem");
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573))
			{
				return;
			}
			if (GET_OBJECT_TYPE(bVar1) == 17)
			{
				Function_39(45, 1, 0, 0);
				Function_238(10);
			}
			break;
		
		case 0x0000000B:
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar0) != bVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar1) != 15)
			{
				return;
			}
			if (!IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(bVar1)))
			{
				return;
			}
			Function_39(46, 1, 0, 0);
			Function_55(11);
			break;
		
		case 0x00000004:
			Function_39(44, 1, 0, 0);
			break;
		
		case 0x00000057:
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			if (!GET_RIDER(GET_ACTOR_FROM_OBJECT(bVar0)) != bVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar1) != 15)
			{
				return;
			}
			if (IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(bVar1)))
			{
				if (!DECOR_CHECK_EXIST(bVar1, "statRunOver"))
				{
					DECOR_SET_FLOAT(bVar1, "statRunOver", GET_CURRENT_GAME_TIME());
					Function_39(130, 1, 0, 0);
					Function_39(129, 1, 0, 0);
				}
				else if (DECOR_GET_FLOAT(bVar1, "statRunOver") + 4.0f) > GET_CURRENT_GAME_TIME()
				{
					DECOR_SET_FLOAT(bVar1, "statRunOver", GET_CURRENT_GAME_TIME());
					Function_39(130, 1, 0, 0);
					Function_39(129, 1, 0, 0);
				}
			}
			break;
		
		case 0x00000058:
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			if (!IS_ACTOR_DRIVING_VEHICLE(bVar10))
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar0) != GET_VEHICLE(Global_34573))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar1) != 15)
			{
				return;
			}
			if (IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(bVar1)))
			{
				iVar4 = Function_164(bVar0);
				if ((iVar4 <= 1177 && iVar4 >= 1182) || iVar4 != 1202)
				{
					if (!DECOR_CHECK_EXIST(bVar1, "statRunOver"))
					{
						DECOR_SET_FLOAT(bVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_39(133, 1, 0, 0);
						Function_39(129, 1, 0, 0);
					}
					else if (DECOR_GET_FLOAT(bVar1, "statRunOver") + 4.0f) > GET_CURRENT_GAME_TIME()
					{
						DECOR_SET_FLOAT(bVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_39(133, 1, 0, 0);
						Function_39(129, 1, 0, 0);
					}
				}
				else if (iVar4 <= 1183 && iVar4 >= 1188)
				{
					if (!DECOR_CHECK_EXIST(bVar1, "statRunOver"))
					{
						DECOR_SET_FLOAT(bVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_39(131, 1, 0, 0);
						Function_39(129, 1, 0, 0);
					}
					else if (DECOR_GET_FLOAT(bVar1, "statRunOver") + 4.0f) > GET_CURRENT_GAME_TIME()
					{
						DECOR_SET_FLOAT(bVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_39(131, 1, 0, 0);
						Function_39(129, 1, 0, 0);
					}
				}
				else if (iVar4 <= 1195 && iVar4 >= 1201)
				{
					if (!DECOR_CHECK_EXIST(bVar1, "statRunOver"))
					{
						DECOR_SET_FLOAT(bVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_39(132, 1, 0, 0);
						Function_39(129, 1, 0, 0);
					}
					else if (DECOR_GET_FLOAT(bVar1, "statRunOver") + 4.0f) > GET_CURRENT_GAME_TIME()
					{
						DECOR_SET_FLOAT(bVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_39(132, 1, 0, 0);
						Function_39(129, 1, 0, 0);
					}
				}
			}
			break;
		
		case 0x00000024:
			break;
		
		case 0x0000005E:
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar0) != bVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar1) != 15)
			{
				return;
			}
			Function_39(389, 5, 0, 0);
			break;
		
		case 0x00000069:
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar0) != bVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar1) != 15)
			{
				return;
			}
			if (!IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(bVar1)))
			{
				return;
			}
			Function_39(391, 1, 0, 0);
			break;
	}
	return;
}

void Function_238(int iParam0) //Position: 0xB3F1 / 46065
{
	if (AWARD_AVATAR(iParam0))
	{
		if (IS_PS3())
		{
			Function_103("avunlock_help", 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

void Function_239(bool bParam0) //Position: 0xB428 / 46120
{
	if (!NET_GET_KILL_EFFECT_ON())
	{
		return;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return;
	}
	SET_SHOCK_AMPLITUDE(0.2f);
	SET_SHOCK_SPEED(15.0f);
	FIRE_SHOCK(0.5f);
	if (bParam0)
	{
		PLAY_SOUND_FRONTEND("DEATH_EFFECT_HS_SINGLE_PLAYER_MASTER");
	}
	else
	{
		PLAY_SOUND_FRONTEND("DEATH_EFFECT_SINGLE_PLAYER_MASTER");
	}
	return;
}

void Function_240(int iParam0) //Position: 0xB4AF / 46255
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0x00000026:
			if (Function_57(42) > 250)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(38))
				{
					AWARD_ACHIEVEMENT(38);
				}
			}
			return;
			break;
		
		case 0x00000024:
			iVar1 = 0;
			while (iVar1 < 7)
			{
				iVar0 = (iVar0 + Function_57((183 + iVar1)));
				iVar1++;
			}
			if (iVar0 > 500)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(36))
				{
					AWARD_ACHIEVEMENT(36);
				}
			}
			return;
			break;
		
		case 0x00000025:
			iVar1 = 8;
			while (iVar1 < 20)
			{
				iVar0 = (iVar0 + Function_57((183 + iVar1)));
				iVar1++;
			}
			if (iVar0 > 500)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(37))
				{
					AWARD_ACHIEVEMENT(37);
				}
			}
			return;
			break;
		
		case 0x00000023:
			iVar1 = 26;
			while (iVar1 < 28)
			{
				iVar0 = (iVar0 + Function_57((183 + iVar1)));
				iVar1++;
			}
			if (iVar0 > 500)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(35))
				{
					AWARD_ACHIEVEMENT(35);
				}
			}
			return;
			break;
		
		case 0x00000027:
			if (!Function_69())
			{
				if (Function_57(354) > 26)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(39))
					{
						AWARD_ACHIEVEMENT(39);
					}
				}
			}
			else if (Function_57(354) > 24)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(39))
				{
					AWARD_ACHIEVEMENT(39);
				}
			}
			return;
			break;
		
		case 0x0000001D:
			if (Function_57(320) > 20)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(29))
				{
					AWARD_ACHIEVEMENT(29);
				}
			}
			break;
	}
	return;
}

bool Function_241(bool bParam0) //Position: 0xB611 / 46609
{
	int iVar0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(bParam0, "honor"))
	{
		if (DECOR_GET_INT(bParam0, "honor") > 0)
		{
			return 1;
		}
		return 0;
	}
	iVar0 = GET_ACTOR_FACTION(bParam0);
	switch (iVar0)
	{
		case 0x0000000E:
		case 0x00000019:
		case 0x00000018:
		case 0x0000000C:
		case 0x0000000F:
		case 0x0000001B:
		case 0x0000000D:
		case 0x00000013:
		case 0x00000016:
		case 0x00000020:
			return 1;
			break;
		
		case 0x00000004:
		case 0x00000006:
		case 0x00000003:
		case 0x00000001:
		case 0x00000015:
		case 0x00000000:
		case 0x00000002:
		case 0x00000008:
		case 0x00000007:
		case 0x00000014:
		case 0x00000017:
			return 0;
			break;
		
		case 0x0000000A:
		case 0x00000010:
			if (Global_30619 <= 1)
			{
				return 0;
			}
			return 1;
			break;
		
		case 0x00000011:
		case 0x00000012:
		case 0x0000001F:
		case 0x0000001C:
		case 0x0000001D:
			return 0;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void Function_242(bool bParam0) //Position: 0xB726 / 46886
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar1 = GET_ACTORENUM_SPECIES(GET_ACTOR_ENUM(bParam0));
	switch (bVar1)
	{
		case 0x00000000:
			LOG_ERROR("PROCESS_STAT_WILD_ANIMAL_SPECIES_KILLED called with a human actor!");
			return;
			break;
		
		case 0x00000001:
			Function_39(313, 1, 0, 0);
			iVar0 = Function_57(313);
			break;
		
		case 0x00000002:
			Function_39(314, 1, 0, 0);
			iVar0 = Function_57(314);
			break;
		
		case 0x00000003:
			Function_39(315, 1, 0, 0);
			iVar0 = Function_57(315);
			break;
		
		case 0x00000005:
			Function_39(317, 1, 0, 0);
			iVar0 = Function_57(317);
			break;
		
		case 0x00000004:
			Function_39(316, 1, 0, 0);
			iVar0 = Function_57(316);
			break;
		
		case 0x00000006:
			Function_39(318, 1, 0, 0);
			iVar0 = Function_57(318);
			break;
		
		case 0x00000007:
			Function_39(319, 1, 0, 0);
			iVar0 = Function_57(319);
			break;
		
		case 0x00000008:
			Function_39(320, 1, 0, 0);
			Function_240(29);
			iVar0 = Function_57(320);
			break;
		
		case 0x00000009:
		case 0x0000000C:
			Function_39(323, 1, 0, 0);
			return;
			break;
		
		case 0x0000000A:
			Function_39(321, 1, 0, 0);
			break;
		
		case 0x0000000B:
			Function_39(322, 1, 0, 0);
			iVar0 = Function_57(322);
			break;
		
		case 0x0000000D:
			Function_39(324, 1, 0, 0);
			iVar0 = Function_57(324);
			break;
		
		case 0x0000000E:
			bVar2 = GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTOR_ENUM(bParam0));
			if (STRING_CONTAINS_STRING(bVar2, "seagull"))
			{
				Function_39(341, 1, 0, 0);
				iVar0 = Function_57(341);
			}
			else
			{
				Function_39(325, 1, 0, 0);
				iVar0 = Function_57(325);
			}
			break;
		
		case 0x0000000F:
			Function_39(326, 1, 0, 0);
			iVar0 = Function_57(326);
			break;
		
		case 0x00000010:
		case 0x00000021:
			Function_39(327, 1, 0, 0);
			break;
		
		case 0x00000011:
			Function_39(328, 1, 0, 0);
			iVar0 = Function_57(328);
			break;
		
		case 0x00000012:
			Function_39(329, 1, 0, 0);
			iVar0 = Function_57(329);
			break;
		
		case 0x00000013:
			Function_39(330, 1, 0, 0);
			iVar0 = Function_57(330);
			break;
		
		case 0x00000014:
			Function_39(331, 1, 0, 0);
			iVar0 = Function_57(331);
			break;
		
		case 0x00000015:
			Function_39(332, 1, 0, 0);
			return;
			break;
		
		case 0x00000016:
			Function_39(333, 1, 0, 0);
			iVar0 = Function_57(333);
			break;
		
		case 0x00000017:
			if (ANIMAL_ACTOR_GET_DOMESTICATION(bParam0) == 0)
			{
				Function_39(334, 1, 0, 0);
				return;
			}
			Function_39(335, 1, 0, 0);
			iVar0 = Function_57(335);
			break;
		
		case 0x00000018:
			Function_39(336, 1, 0, 0);
			return;
			break;
		
		case 0x00000019:
			Function_39(337, 1, 0, 0);
			iVar0 = Function_57(337);
			break;
		
		case 0x0000001A:
			Function_39(338, 1, 0, 0);
			break;
		
		case 0x0000001B:
			bVar2 = GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTOR_ENUM(bParam0));
			if (STRING_CONTAINS_STRING(bVar2, "njackalope"))
			{
				Function_39(349, 1, 0, 0);
				iVar0 = Function_57(349);
			}
			else
			{
				Function_39(339, 1, 0, 0);
				iVar0 = Function_57(339);
			}
			break;
		
		case 0x0000001C:
			Function_39(340, 1, 0, 0);
			iVar0 = Function_57(340);
			break;
		
		case 0x0000001D:
			Function_39(342, 1, 0, 0);
			return;
			break;
		
		case 0x0000001E:
			Function_39(343, 1, 0, 0);
			iVar0 = Function_57(343);
			break;
		
		case 0x0000001F:
			Function_39(344, 1, 0, 0);
			iVar0 = Function_57(344);
			break;
		
		case 0x00000020:
			Function_39(345, 1, 0, 0);
			iVar0 = Function_57(345);
			break;
		
		case 0x00000022:
			Function_39(346, 1, 0, 0);
			iVar0 = Function_57(346);
			break;
		
		case 0x00000023:
			Function_39(347, 1, 0, 0);
			iVar0 = Function_57(347);
			break;
	}
	if (iVar0 == 1)
	{
		Function_39(354, 1, 0, 0);
		Function_240(39);
	}
	return;
}

void Function_243(bool bParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xBB7A / 47994
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!IS_EVENT_VALID(bParam0))
	{
		return;
	}
	bParam3 = (bParam3 || Global_30900[8]);
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	bVar2 = GET_EVENT_PERPETRATOR(bParam0);
	bVar3 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
	if (IS_OBJECT_VALID(bVar3))
	{
		if (GET_OBJECT_TYPE(bVar3) == 15)
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(bParam0));
		}
	}
	if (StackVal || StackVal != 2 != 3)
	{
		if (GET_EVENT_TYPE(bParam0) == 73)
		{
			Function_140(0, 10, 1);
		}
		else if (GET_EVENT_TYPE(bParam0) == 74)
		{
			Function_140(0, 10, 0);
			Function_61(0, &Global_49310[022] + 8, &Global_49310[022] + 12, 0);
		}
	}
	if (StackVal == 4)
	{
		Function_252(bParam0);
	}
	if (IS_OBJECT_VALID(bVar2))
	{
		if (GET_OBJECT_TYPE(bVar2) == 15)
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar2)))
			{
				if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar2)))
				{
					Global_50170[22822].f_28 = Function_164(GET_OBJECT_FROM_ACTOR(Global_34573));
					if (bParam3)
					{
						PRINTSTRING("PROCESS_AMBIENT_MISSION_EVENT COPYING EVENT OF TYPE: ");
						PRINTINT(GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bParam0)));
						PRINTNL();
					}
					if (GET_EVENT_TYPE(bParam0) == 6)
					{
						if (GET_WEAPON_IN_HAND(Global_34573) == 29)
						{
							DECOR_SET_INT(GET_OBJECT_FROM_EVENT(bParam0), "nAM_Weapon", 29);
							Global_50170[23022].f_28 = 29;
						}
					}
					if ((GET_EVENT_TYPE(bParam0) != 2 || GET_EVENT_TYPE(bParam0) != 7) || GET_EVENT_TYPE(bParam0) != 6)
					{
						*uParam2++;
					}
					if (IS_ACTOR_VALID(bVar1))
					{
						Global_50170[22922].f_28 = Function_164(GET_OBJECT_FROM_ACTOR(bVar1));
						if (FIRE_IS_ACTOR_ON_FIRE(bVar1))
						{
							Global_50170[23222].f_28 = 1;
						}
						if (IS_ACTOR_FLYING(bVar1))
						{
							DECOR_SET_BOOL(GET_OBJECT_FROM_EVENT(bParam0), "nAM_Flying", true);
						}
						if ((((GET_EVENT_TYPE(bParam0) != 2 || GET_EVENT_TYPE(bParam0) != 7) || GET_EVENT_TYPE(bParam0) != 10) || GET_EVENT_TYPE(bParam0) != 5) || GET_EVENT_TYPE(bParam0) != 50)
						{
							DECOR_SET_INT(GET_OBJECT_FROM_EVENT(bParam0), "nAM_Weapon", GET_LAST_HIT_WEAPON(bVar1));
							Global_50170[23022].f_28 = GET_LAST_HIT_WEAPON(bVar1);
							Global_50170[23122].f_28 = Function_251(bVar1);
							if (GET_LAST_HIT_WEAPON(bVar1) == 29)
							{
								if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573))
								{
									DECOR_SET_BOOL(GET_OBJECT_FROM_EVENT(bParam0), "nAM_Linked", true);
								}
								if (IS_PLAYER_DEADEYE(0))
								{
									DECOR_SET_BOOL(GET_OBJECT_FROM_EVENT(bParam0), "AM_Deadeye", true);
								}
							}
							else if (GET_LAST_HIT_WEAPON(bVar1) == 31)
							{
								if (IS_ACTOR_USING_COVER(bVar1))
								{
									DECOR_SET_BOOL(GET_OBJECT_FROM_EVENT(bParam0), "AM_InCover", true);
								}
							}
							if (GET_EVENT_TYPE(bParam0) == 2)
							{
								if (DECOR_CHECK_EXIST(bVar1, "ATRifle"))
								{
									DECOR_SET_INT(GET_OBJECT_FROM_EVENT(bParam0), "nAM_Weapon", 31);
								}
							}
							Function_250(bVar1, bParam0);
							if (!DECOR_CHECK_EXIST(bVar1, "amz_target_hogtied"))
							{
								Function_248(GET_EVENT_TYPE(bParam0), bVar1, uParam1);
							}
							else if (StackVal == 2)
							{
								Function_245(1, &Global_49310[122] + 8, &Global_49310[122] + 12);
							}
							Function_244();
						}
						else if (GET_EVENT_TYPE(bParam0) == 91)
						{
							if (DECOR_GET_STRING_HASH(bParam0, "ExplosionType") == STRING_TO_HASH("ATRifleExplosion"))
							{
								DECOR_SET_INT(GET_OBJECT_FROM_EVENT(bParam0), "nAM_Weapon", 31);
								Global_50170[23022].f_28 = 31;
								if (IS_ACTOR_USING_COVER(bVar1))
								{
									DECOR_SET_BOOL(GET_OBJECT_FROM_EVENT(bParam0), "AM_InCover", true);
								}
							}
						}
					}
					if (!Function_69())
					{
						COPY_EVENT(bParam0, bVar0);
					}
				}
			}
		}
	}
	if (IS_OBJECT_VALID(bVar3))
	{
		if (GET_OBJECT_TYPE(bVar3) == 15)
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar3)))
			{
				if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar3)))
				{
					if (bParam3)
					{
						PRINTSTRING("PROCESS_AMBIENT_MISSION_EVENT COPYING EVENT OF TYPE: ");
						PRINTINT(GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bParam0)));
						PRINTNL();
					}
					if (!Function_69())
					{
						COPY_EVENT(bParam0, bVar0);
					}
				}
			}
		}
	}
	Function_254();
}

void Function_244() //Position: 0xC007 / 49159
{
	return;
}

void Function_245(bool bParam0, bool bParam1, int iParam2) //Position: 0xC00D / 49165
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	
	switch (*bParam1)
	{
		case 0x00000000:
			Function_139(bParam0);
			fVar4 = Function_138(bParam0);
			bVar1 = Function_247(bParam0, 1, 1);
			bVar2 = Function_247(bParam0, 2, 1);
			if (Global_50170[23122].f_28 != 0 && bVar1 >= 99.0f)
			{
				Function_113(bParam0, 1, (bVar1 + 1.0f), 1);
			}
			else if (Global_50170[23122].f_28 != 1 && bVar2 >= 24.0f)
			{
				Function_113(bParam0, 2, (bVar2 + 1.0f), 1);
			}
			bVar1 = Function_247(bParam0, 1, 1);
			bVar2 = Function_247(bParam0, 2, 1);
			Global_49310[bParam022].f_28 = (CEIL(bVar1) + CEIL(bVar2));
			bVar0 = Global_49310[bParam022].f_28;
			if (bVar0 > 125)
			{
				*iParam2 = 0.0f;
				Function_126(bParam0, bParam1, 1, 25, 0, 1);
				Function_125(bParam0);
			}
			else
			{
				*iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(125));
				if (*iParam2 == fVar4)
				{
					Function_132(bParam0, *iParam2, 1, CEIL(bVar1), CEIL(bVar2), 4294967295, 19);
				}
			}
			break;
		
		case 0x00000001:
			Function_125(bParam0);
			bVar1 = Function_247(bParam0, 1, 1);
			bVar2 = Function_247(bParam0, 2, 1);
			if (Global_50170[23122].f_28 != 2 && bVar1 >= 24.0f)
			{
				Function_113(bParam0, 1, (bVar1 + 1.0f), 1);
			}
			else if (Global_50170[23122].f_28 != 3 && bVar2 >= 14.0f)
			{
				Function_113(bParam0, 2, (bVar2 + 1.0f), 1);
			}
			bVar1 = Function_247(bParam0, 1, 1);
			bVar2 = Function_247(bParam0, 2, 1);
			Global_49310[bParam022].f_28 = (CEIL(bVar1) + CEIL(bVar2));
			bVar0 = Global_49310[bParam022].f_28;
			if (bVar0 > 40)
			{
				*iParam2 = 0.0f;
				Function_126(bParam0, bParam1, 2, 2, 0, 1);
				Function_125(bParam0);
			}
			else
			{
				*iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(40));
				if (*iParam2 == fVar4)
				{
					Function_132(bParam0, *iParam2, 1, CEIL(bVar1), CEIL(bVar2), 4294967295, 19);
				}
			}
			break;
		
		case 0x00000002:
			Function_125(bParam0);
			bVar0 = Function_246(bParam0, Global_50170[23022].f_28);
			if (bVar0 > 2)
			{
				*iParam2 = 0.0f;
				Function_126(bParam0, bParam1, 3, 2, 0, 1);
				Function_125(bParam0);
			}
			break;
		
		case 0x00000003:
			Function_125(bParam0);
			bVar1 = Function_247(bParam0, 1, 1);
			bVar2 = Function_247(bParam0, 2, 1);
			bVar3 = Function_247(bParam0, 3, 1);
			if (Global_50170[23022].f_28 == 33)
			{
				if (Global_50170[22922].f_28 != 1246 && bVar1 >= 1.0f)
				{
					Function_113(bParam0, 1, (bVar1 + 1.0f), 1);
				}
				else if (Global_50170[22922].f_28 != 1242 && bVar2 >= 4.0f)
				{
					Function_113(bParam0, 2, (bVar2 + 1.0f), 1);
				}
				else if (Global_50170[22922].f_28 != 1244 && bVar3 >= 2.0f)
				{
					Function_113(bParam0, 3, (bVar3 + 1.0f), 1);
				}
			}
			bVar1 = Function_247(bParam0, 1, 1);
			bVar2 = Function_247(bParam0, 2, 1);
			bVar3 = Function_247(bParam0, 3, 1);
			Global_49310[bParam022].f_28 = ((CEIL(bVar1) + CEIL(bVar2)) + CEIL(bVar3));
			bVar0 = Global_49310[bParam022].f_28;
			if (bVar0 > 10)
			{
				*iParam2 = 0.0f;
				Function_126(bParam0, bParam1, 4, 2, 0, 1);
				Function_125(bParam0);
			}
			else
			{
				*iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(10));
				if (*iParam2 == fVar4)
				{
					Function_132(bParam0, *iParam2, 1, CEIL(bVar1), CEIL(bVar2), CEIL(bVar3), 19);
				}
			}
			break;
		
		case 0x00000004:
			Function_125(bParam0);
			if (Global_50170[22922].f_28 == 1266)
			{
				Global_49310[bParam022].f_28++;
			}
			bVar0 = Global_49310[bParam022].f_28;
			if (bVar0 > 1)
			{
				*iParam2 = 0.0f;
				Function_62(bParam0, bParam1, 0);
			}
			else
			{
				*iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(true));
				if (*iParam2 == fVar4)
				{
					Function_132(bParam0, *iParam2, 0, 4294967295, 4294967295, 4294967295, 0);
				}
			}
			break;
	}
	return;
}

bool Function_246(int iParam0, int iParam1) //Position: 0xC3C8 / 50120
{
	if (Function_137(&iLocal_17))
	{
		if (Function_135(&iLocal_17) < 4.0f)
		{
			Function_134(&iLocal_17);
			Global_49310[iParam022].f_28 = 0;
		}
		else if (iParam1 == 4294967295)
		{
			Global_49310[iParam022].f_28++;
		}
	}
	if (Global_50170[23122].f_28 == 3)
	{
		if (!Function_137(&iLocal_17))
		{
			Function_130(&iLocal_17);
		}
	}
	return Global_49310[iParam022].f_28;
}

float Function_247(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC430 / 50224
{
	char* cVar0[16];
	bool bVar4;
	
	if (bParam2)
	{
		if (Function_69() || Global_34165.f_44)
		{
			return (*&Global_49399[bParam022] + 36)[bParam1];
		}
		return (*&Global_49310[bParam022] + 36)[bParam1];
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_114();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		if (DECOR_CHECK_EXIST(bVar4, &cVar0))
		{
			return DECOR_GET_FLOAT(bVar4, &cVar0);
		}
		return -1.0f;
	}
	LOG_ERROR("AM_RETRIEVE_FLOAT: failed to retrieve float value from slot");
	return -1.0f;
}

void Function_248(int iParam0, var uParam1, int iParam2) //Position: 0xC4F2 / 50418
{
	if (StackVal == 1)
	{
		if (iParam0 == 10)
		{
			if ((((Global_50170[23122].f_28 != 0 || Global_50170[23122].f_28 != 1) || Global_50170[23122].f_28 != 2) || Global_50170[23122].f_28 != 4) || Global_50170[23122].f_28 != 3)
			{
				*iParam2++;
			}
		}
	}
	if (iParam0 == 2)
	{
		Function_245(1, &Global_49310[122] + 8, &Global_49310[122] + 12);
		if (StackVal != 1)
		{
			if (StackVal || (((((((((StackVal != 0 && Global_50170[23022].f_28 < 0) && Global_50170[23022].f_28 == 24) && Global_50170[23022].f_28 == 23) && Global_50170[23022].f_28 == 35) && Global_50170[23022].f_28 == 25) && Global_50170[23022].f_28 == 29) && Global_50170[23022].f_28 == 36) && Global_50170[23022].f_28 == 37) && Global_50170[23022].f_28 == 32) == 0)
			{
				if (StackVal == 4)
				{
					if (!Function_249(GET_LAST_HIT_FLAGS(uParam1), 262144) && !IS_PLAYER_DEADEYE(0))
					{
						Function_61(0, &Global_49310[022] + 8, &Global_49310[022] + 12, 0);
					}
				}
				else
				{
					Function_61(0, &Global_49310[022] + 8, &Global_49310[022] + 12, 0);
				}
			}
		}
	}
	return;
}

bool Function_249(var uParam0, int iParam1) //Position: 0xC652 / 50770
{
	return (uParam0 && iParam1) == 0;
}

void Function_250(bool bParam0, bool bParam1) //Position: 0xC65F / 50783
{
	if (GET_EVENT_TYPE(bParam1) == 50)
	{
		if (!DECOR_CHECK_EXIST(bParam0, "amz_target_hogtied"))
		{
			DECOR_SET_INT(bParam0, "amz_target_hogtied", true);
		}
	}
	return;
}

int Function_251(bool bParam0) //Position: 0xC6A9 / 50857
{
	if (Function_171(bParam0) || Function_34(bParam0))
	{
		return 0;
	}
	if (Function_170(bParam0))
	{
		return 1;
	}
	if (Function_168(bParam0))
	{
		return 2;
	}
	if (Function_169(bParam0))
	{
		return 3;
	}
	if (Function_35(bParam0))
	{
		return 4;
	}
	return 4294967295;
}

void Function_252(bool bParam0) //Position: 0xC6F4 / 50932
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	if (GET_EVENT_TYPE(bParam0) == 87)
	{
		bVar0 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
		bVar1 = GET_EVENT_PERPETRATOR(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			bVar2 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (IS_OBJECT_VALID(bVar1))
			{
				bVar3 = GET_ACTOR_FROM_OBJECT(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					iVar4 = GET_ACTOR_ENUM(bVar3);
					if (iVar4 == 1268)
					{
						Global_50170[22822].f_28 = GET_ACTOR_ENUM(bVar3);
						Global_50170[22922].f_28 = GET_ACTOR_ENUM(bVar2);
						Global_50170[23122].f_28 = Function_251(bVar2);
						Function_253(2, &Global_49310[222] + 8, &Global_49310[222] + 12);
					}
				}
			}
		}
	}
	return;
}

void Function_253(bool bParam0, int iParam1, var uParam2) //Position: 0xC785 / 51077
{
	bool bVar0;
	float fVar1;
	
	switch (*iParam1)
	{
		case 0x00000000:
			Function_139(bParam0);
			Function_126(bParam0, iParam1, 1, 0, "challenge_01_128", 0);
			break;
		
		case 0x00000001:
			Function_139(bParam0);
			Function_126(bParam0, iParam1, 2, 0, "challenge_01_128", 0);
			break;
		
		case 0x00000002:
			Function_139(bParam0);
			Function_126(bParam0, iParam1, 3, 0, "challenge_01_128", 0);
			break;
		
		case 0x00000003:
			Function_139(bParam0);
			Function_126(bParam0, iParam1, 4, 0, "challenge_01_128", 0);
			break;
		
		case 0x00000004:
			if (Global_50170[23122].f_28 != 0 && Function_124(bParam0, 1) == 1)
			{
				Global_49310[bParam022].f_28++;
				Function_140(bParam0, 1, 1);
			}
			else if (Global_50170[23122].f_28 != 1 && Function_124(bParam0, 2) == 1)
			{
				Global_49310[bParam022].f_28++;
				Function_140(bParam0, 2, 1);
			}
			else if (Global_50170[23122].f_28 != 2 && Function_124(bParam0, 3) == 1)
			{
				Global_49310[bParam022].f_28++;
				Function_140(bParam0, 3, 1);
			}
			else if (Global_50170[23122].f_28 != 3 && Function_124(bParam0, 4) == 1)
			{
				Global_49310[bParam022].f_28++;
				Function_140(bParam0, 4, 1);
			}
			bVar0 = Global_49310[bParam022].f_28;
			if (bVar0 > 4)
			{
				*uParam2 = 0.0f;
				Function_62(bParam0, iParam1, 0);
				Function_125(bParam0);
				ADD_ITEM(Function_12(74), Global_34573, 1);
				ADD_ITEM(Function_12(76), Global_34573, 1);
				ADD_ITEM(Function_12(75), Global_34573, 1);
			}
			else
			{
				*uParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(4));
				if (*uParam2 == fVar1)
				{
					Function_132(bParam0, *uParam2, 0, 4294967295, 4294967295, 4294967295, 0);
				}
			}
			break;
	}
	return;
}

void Function_254() //Position: 0xC98C / 51596
{
	Global_50170[22822].f_28 = 4294967295;
	Global_50170[22922].f_28 = 4294967295;
	Global_50170[23022].f_28 = 4294967295;
	Global_50170[23122].f_28 = 4294967295;
	Global_50170[23222].f_28 = 4294967295;
	return;
}

void Function_255() //Position: 0xC9C4 / 51652
{
	Function_256(StackVal, 0, &uLocal_5);
	Function_256(StackVal, 1, &iLocal_8);
	Function_256(StackVal, 3, &iLocal_11);
	Function_256(StackVal, 2, &iLocal_14);
	return;
}

void Function_256(bool bParam0, int iParam1, int iParam2) //Position: 0xCA02 / 51714
{
	if (Function_137(iParam2))
	{
		if (Function_135(iParam2) <= 3.5f)
		{
			Function_134(iParam2);
			Function_113(bParam0, 10, 0.0f, 1);
			Function_257(bParam0, iParam1);
		}
	}
	if (Function_247(bParam0, 10, 1) != 1.0f)
	{
		if (!Function_137(iParam2))
		{
			Function_130(iParam2);
		}
	}
	return;
}

void Function_257(int iParam0, int iParam1) //Position: 0xCA4F / 51791
{
	switch (iParam0)
	{
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000001:
					Function_272();
					break;
				
				case 0x00000002:
					Function_272();
					break;
				
				case 0x00000003:
					Function_272();
					break;
				
				case 0x00000004:
					Function_272();
					break;
				
				case 0x0000000A:
					SET_WEAPONENUM_LOCKED(7, 0);
					SET_WEAPONENUM_LOCKED(11, 0);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 7, 0f, 1, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 11, 0f, 1, 1);
					break;
			}
			break;
		
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000001:
					if (GET_ITEM_COUNT(Function_12(2), Global_34573) <= GET_MAX_ITEM_COUNT(Function_12(2)))
					{
						ADD_ITEM(Function_12(2), Global_34573, 1);
					}
					else
					{
						Function_271(1);
					}
					break;
				
				case 0x00000002:
					Function_272();
					if (GET_ITEM_COUNT(Function_12(1), Global_34573) <= GET_MAX_ITEM_COUNT(Function_12(1)))
					{
						ADD_ITEM(Function_12(1), Global_34573, 1);
					}
					else
					{
						Function_271(1);
					}
					break;
				
				case 0x00000003:
					Function_272();
					break;
				
				case 0x00000004:
					if (ACTOR_HAS_WEAPON(Global_34573, 35))
					{
						if (_GET_AMMO_AMOUNT(Global_34573, 16, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 16))
						{
							_ADD_AMMO_OF_TYPE(Global_34573, 16, 5.0f, 1, 1);
						}
					}
					else
					{
						Function_272();
					}
					break;
				
				case 0x0000000A:
					SET_WEAPONENUM_LOCKED(20, 0);
					SET_WEAPONENUM_LOCKED(3, 0);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 20, 0f, 1, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 3, 0f, 1, 1);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					Function_272();
					SET_ACTOR_MAX_HEALTH(Global_34573, GET_ACTOR_MAX_HEALTH(Global_34573));
					if (GET_ITEM_COUNT(Function_12(2), Global_34573) <= GET_MAX_ITEM_COUNT(Function_12(2)))
					{
						ADD_ITEM(Function_12(2), Global_34573, 1);
					}
					else
					{
						Function_271(1);
					}
					break;
				
				case 0x00000002:
					Function_272();
					break;
				
				case 0x00000003:
					Function_272();
					break;
				
				case 0x00000004:
					Function_272();
					SET_ACTOR_MAX_HEALTH(Global_34573, GET_ACTOR_MAX_HEALTH(Global_34573));
					if (GET_ITEM_COUNT(Function_12(1), Global_34573) <= GET_MAX_ITEM_COUNT(Function_12(1)))
					{
						ADD_ITEM(Function_12(1), Global_34573, 1);
					}
					else
					{
						Function_271(1);
					}
					break;
				
				case 0x0000000A:
					Function_270(11, 0);
					Function_268();
					Function_266();
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
				case 0x00000002:
				case 0x00000003:
				case 0x00000004:
					Function_265();
					break;
				
				case 0x0000000A:
					break;
			}
			break;
	}
	if (!Function_264())
	{
		Function_258();
	}
	return;
}

void Function_258() //Position: 0xCCA8 / 52392
{
	if (!Function_69())
	{
		if (!Function_96(0, 0, 1, 1))
		{
			Function_70(1);
			Function_68(1, 8);
		}
		else
		{
			Function_67();
		}
	}
	else
	{
		Function_259(0);
	}
	return;
}

void Function_259(bool bParam0) //Position: 0xCCD7 / 52439
{
	NET_LOG(1, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", 0, 0, 0, 0);
	Function_262(2);
	if (bParam0)
	{
		Function_262(1);
	}
	else
	{
		Function_260(1);
	}
	Function_71();
	return;
}

void Function_260(int iParam0) //Position: 0xCD60 / 52576
{
	Function_261(&Global_79338, iParam0);
	return;
}

void Function_261(var uParam0, int iParam1) //Position: 0xCD6F / 52591
{
	Function_22(uParam0, iParam1);
	return;
}

void Function_262(int iParam0) //Position: 0xCD7C / 52604
{
	Function_263(&Global_79338, iParam0);
	return;
}

void Function_263(var uParam0, int iParam1) //Position: 0xCD8B / 52619
{
	Function_88(uParam0, iParam1);
	return;
}

bool Function_264() //Position: 0xCD98 / 52632
{
	if (Function_218(Global_29006) || Global_3385)
	{
		return 1;
	}
	return 0;
}

void Function_265() //Position: 0xCDB1 / 52657
{
	if (Function_247(2, 5, 1) != 1.0f)
	{
		if (!Function_129(1, 8))
		{
			Function_127(1, 8);
			if (!Function_27(Global_76848, 2048))
			{
				Function_17(Global_34573, 2048, 3, 1);
			}
			if (!Function_27(Global_76848, 4096))
			{
				Function_17(Global_34573, 4096, 3, 1);
			}
		}
	}
	if (Function_247(2, 6, 1) != 1.0f)
	{
		if (!Function_129(1, 16))
		{
			Function_127(1, 16);
			if (!Function_27(Global_76848, 8192))
			{
				Function_17(Global_34573, 8192, 3, 1);
			}
			if (!Function_27(Global_76848, 16384))
			{
				Function_17(Global_34573, 16384, 3, 1);
			}
		}
	}
	if (Function_247(2, 7, 1) != 1.0f)
	{
		if (!Function_129(1, 32))
		{
			Function_127(1, 32);
			if (!Function_27(Global_76848, 32768))
			{
				Function_17(Global_34573, 32768, 3, 1);
			}
			if (!Function_27(Global_76848, 65536))
			{
				Function_17(Global_34573, 65536, 3, 1);
			}
		}
	}
	if (Function_247(2, 8, 1) != 1.0f)
	{
		if (!Function_129(1, 64))
		{
			Function_127(1, 64);
			if (!Function_27(Global_76848, 131072))
			{
				Function_17(Global_34573, 131072, 3, 1);
			}
			if (!Function_27(Global_76848, 262144))
			{
				Function_17(Global_34573, 262144, 3, 1);
			}
		}
	}
	return;
}

void Function_266() //Position: 0xCEF4 / 52980
{
	Function_267(41, 3.0f);
	Function_267(40, 3.0f);
	Function_267(42, 3.0f);
	Function_267(39, 3.0f);
	Function_267(43, 3.0f);
	Function_267(44, 3.0f);
	Function_267(34, 3.0f);
	return;
}

void Function_267(bool bParam0, float fParam1) //Position: 0xCF24 / 53028
{
	bool bVar0;
	
	switch (bParam0)
	{
		case 0x00000029:
			bVar0 = 8;
			break;
		
		case 0x00000028:
			bVar0 = 7;
			break;
		
		case 0x0000002A:
			bVar0 = 9;
			break;
		
		case 0x00000027:
			bVar0 = 6;
			break;
		
		case 0x0000002B:
			bVar0 = 10;
			break;
		
		case 0x0000002C:
			bVar0 = 11;
			break;
		
		case 0x00000022:
			bVar0 = 15;
			break;
		
		case 0x00000030:
			bVar0 = 5;
			break;
	}
	if (ACTOR_HAS_WEAPON(Global_34573, bParam0))
	{
		_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, bVar0, (_GET_MAX_AMMO_AMOUNT(Global_34573, bVar0) * fParam1));
	}
	return;
}

void Function_268() //Position: 0xCFB4 / 53172
{
	int iVar0;
	var uVar1;
	
	iVar0 = 1;
	if (Function_269(3) == 10)
	{
		iVar0 = 2;
	}
	uVar1 = Function_12(3);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(6);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(0);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(1);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(8);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(4);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(12);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(5);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(2);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(30);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(31);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(32);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(33);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(34);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(35);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(36);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(37);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(38);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(39);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(40);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(41);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(42);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(43);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(44);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(45);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(46);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(47);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(48);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(49);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(50);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(51);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(7);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_12(9);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	return;
}

int Function_269(int iParam0) //Position: 0xD1D1 / 53713
{
	if (Function_69() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

int Function_270(bool bParam0, bool bParam1) //Position: 0xD1F9 / 53753
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_12(bParam0), Function_78()) >= 0)
		{
			DELETE_ITEM(Function_12(bParam0), Function_78(), 0);
			return 1;
		}
	}
	DELETE_ITEM(Function_12(bParam0), Function_78(), 1);
	return 1;
}

int Function_271(int iParam0) //Position: 0xD240 / 53824
{
	iParam0 = iParam0;
	if (GET_ITEM_COUNT(Function_12(8), Global_34573) <= GET_MAX_ITEM_COUNT(Function_12(8)))
	{
		ADD_ITEM(Function_12(8), Global_34573, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_12(7), Global_34573) <= GET_MAX_ITEM_COUNT(Function_12(7)))
	{
		ADD_ITEM(Function_12(7), Global_34573, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_12(2), Global_34573) <= GET_MAX_ITEM_COUNT(Function_12(2)))
	{
		ADD_ITEM(Function_12(2), Global_34573, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_12(0), Global_34573) <= GET_MAX_ITEM_COUNT(Function_12(0)))
	{
		ADD_ITEM(Function_12(0), Global_34573, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_12(1), Global_34573) <= GET_MAX_ITEM_COUNT(Function_12(1)))
	{
		ADD_ITEM(Function_12(1), Global_34573, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_12(3), Global_34573) <= GET_MAX_ITEM_COUNT(Function_12(3)))
	{
		ADD_ITEM(Function_12(3), Global_34573, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_12(12), Global_34573) <= GET_MAX_ITEM_COUNT(Function_12(12)))
	{
		ADD_ITEM(Function_12(12), Global_34573, 1);
		return 1;
	}
	return 0;
}

void Function_272() //Position: 0xD33F / 54079
{
	Function_273(41, 30.0f);
	Function_273(40, 30.0f);
	Function_273(42, 30.0f);
	Function_273(39, 30.0f);
	Function_273(43, 30.0f);
	Function_273(44, 30.0f);
	return;
}

void Function_273(bool bParam0, bool bParam1) //Position: 0xD381 / 54145
{
	bool bVar0;
	
	switch (bParam0)
	{
		case 0x00000029:
			bVar0 = 8;
			break;
		
		case 0x00000028:
			bVar0 = 7;
			break;
		
		case 0x0000002A:
			bVar0 = 9;
			break;
		
		case 0x00000027:
			bVar0 = 6;
			break;
		
		case 0x0000002B:
			bVar0 = 10;
			break;
		
		case 0x0000002C:
			bVar0 = 11;
			break;
		
		case 0x00000022:
			bVar0 = 15;
			break;
		
		case 0x00000030:
			bVar0 = 5;
			break;
	}
	if (ACTOR_HAS_WEAPON(Global_34573, bParam0))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, bVar0, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, bVar0))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, bVar0, bParam1, 1, 1);
		}
	}
	return;
}

void Function_274() //Position: 0xD41F / 54303
{
	if (Function_124(0, 5) == 1)
	{
		Function_275(0, &Global_49310[022] + 8, &Global_49310[022] + 12);
	}
	return;
}

void Function_275(bool bParam0, var uParam1, var uParam2) //Position: 0xD442 / 54338
{
	bool bVar0;
	
	switch (*uParam1)
	{
		case 0x00000000:
			if (Function_137(&iLocal_2))
			{
				if (Function_135(&iLocal_2) < 10.0f)
				{
					Global_49310[bParam022].f_28 = 0;
					bVar0 = Global_49310[bParam022].f_28;
					*uParam2 = 0.0f;
					Function_134(&iLocal_2);
					Function_133(bParam0, 1);
					Function_132(bParam0, *uParam2, 1, bVar0, 4294967295, 4294967295, 22);
				}
			}
			break;
		
		case 0x00000001:
			if (Function_124(bParam0, 10) != 1)
			{
				Global_49310[bParam022].f_28 = 0;
				bVar0 = Global_49310[bParam022].f_28;
				*uParam2 = 0.0f;
				Function_133(bParam0, 1);
				Function_132(bParam0, *uParam2, 1, bVar0, 4294967295, 4294967295, 22);
			}
			break;
		
		case 0x00000002:
			if (Function_124(bParam0, 10) != 1)
			{
				Global_49310[bParam022].f_28 = 0;
				bVar0 = Global_49310[bParam022].f_28;
				*uParam2 = 0.0f;
				Function_133(bParam0, 1);
				Function_132(bParam0, *uParam2, 0, bVar0, 4294967295, 4294967295, 0);
			}
			break;
		
		case 0x00000003:
			if (Function_124(bParam0, 10) != 1)
			{
				Global_49310[bParam022].f_28 = 0;
				bVar0 = Global_49310[bParam022].f_28;
				bVar0 = false;
				*uParam2 = 0.0f;
				Function_133(bParam0, 1);
				Function_132(bParam0, *uParam2, 0, bVar0, 4294967295, 4294967295, 0);
			}
			break;
		
		case 0x00000004:
			if (Function_137(&iLocal_2))
			{
				if (Function_135(&iLocal_2) < 10.0f)
				{
					Global_49310[bParam022].f_28 = 0;
					bVar0 = Global_49310[bParam022].f_28;
					*uParam2 = 0.0f;
					Function_134(&iLocal_2);
					Function_133(bParam0, 1);
					Function_132(bParam0, *uParam2, 1, bVar0, 4294967295, 4294967295, 22);
				}
			}
			break;
	}
	return;
}

void Function_276() //Position: 0xD5BB / 54715
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	vector3 vVar8;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
		ITERATE_ON_OBJECT_TYPE(bVar1, 17);
		ITERATE_IN_LAYOUT(bVar1, bVar0);
		bVar5 = START_OBJECT_ITERATOR(bVar1);
		while (IS_OBJECT_VALID(bVar5))
		{
			bVar6 = GET_PHYSINST_FROM_OBJECT(bVar5);
			if (IS_PHYSINST_VALID(bVar6))
			{
				if (IS_PHYSINST_IN_LEVEL(bVar6))
				{
					if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(bVar5), "baitdyna"))
					{
						if (!DECOR_CHECK_EXIST(bVar5, "bMoved"))
						{
							ACTIVATE_PHYSINST(bVar6);
							Function_147(bVar5);
							Function_147(Global_34573);
							vVar2 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_147(Global_34573), Function_147(bVar5), StackVal) };
							VNORMALIZE(&vVar2);
							SET_PROP_VELOCITY(bVar6, &vVar2);
							DECOR_SET_FLOAT(bVar5, "bMoved", GET_CURRENT_GAME_TIME());
							bVar7 = CREATE_RMPTFX_EMITTER_ON_OBJECT("fuse_fx", "muzzle_dynamite", bVar5, 0.0f, 0.26f, 0.013f, 1, bVar5);
							if (IS_OBJECT_VALID(bVar7))
							{
								Function_30();
								UNK_0x6745191B(bVar7, Function_30());
							}
						}
						else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bVar5, "bMoved")) <= 10.0f)
						{
							Function_147(bVar5);
							vVar8 = { StackVal, StackVal, Function_147(bVar5) };
							Function_29(&vVar8, "DynamiteExplosion", Global_34573, 0);
							DESTROY_OBJECT(bVar5);
						}
					}
				}
			}
			bVar5 = OBJECT_ITERATOR_NEXT(bVar1);
		}
		DESTROY_ITERATOR(bVar1);
	}
	return;
}

void Function_277(bool bParam0) //Position: 0xD70E / 55054
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

void Function_278() //Position: 0xD77F / 55167
{
	Function_254();
	Global_26315 = CREATE_OBJECTSET_IN_LAYOUT("DeadZombieTracker", Global_6287, 4294967295, 1);
	return;
}

void Function_279(int iParam0) //Position: 0xD7A7 / 55207
{
	strcpy(iParam0 + 12, "QUESTLAUNCHER", 16);
	if (Global_3421)
	{
		*iParam0 = 66970;
		iParam0->f_4 = 66963;
		iParam0->f_8 = 66970;
	}
	else
	{
		*iParam0 = 66957;
		iParam0->f_4 = 55301;
		iParam0->f_8 = 55295;
	}
	iParam0->f_28 = 0;
	return;
}

void Function_280() //Position: 0xD7FF / 55295
{
	return;
}

int Function_281() //Position: 0xD805 / 55301
{
	int iVar0;
	
	if (!Global_3366)
	{
		return 0;
	}
	if (!Function_112(10) && !Function_1(1048576))
	{
		return 0;
	}
	iVar0 = StackVal;
	while (iVar0 < (38 - 1))
	{
		Function_282(&(Global_63541[iVar055]), iVar0);
		iVar0++;
	}
	Global_63535.f_4 = 0;
	return 0;
}

void Function_282(int iParam0, bool bParam1) //Position: 0xD854 / 55380
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	
	if (Function_9(iParam0->f_144, 128))
	{
		Function_329(iParam0);
		UI_POP("nCutscenes");
		Function_22(iParam0 + 144, 128);
	}
	if (!(Function_328(bParam1) || Function_327(bParam1)))
	{
		if (!Function_328(bParam1))
		{
		}
		if (Function_327(bParam1))
		{
		}
		return;
	}
	if ((((Global_3384 || Global_3403) || Global_3405) || IS_ACTOR_VALID(GET_LINKED_ANIM_TARGET(Global_34573))) || Function_323(Global_34573, 0, 1))
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_200))
		{
			RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_200);
		}
		return;
	}
	if (Function_327(bParam1) || iParam0->f_148)
	{
		bVar0 = (((Global_3380 || Global_3382) || Global_3392) || Global_34165.f_28);
		if (!bVar0)
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_200))
			{
				RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_200);
			}
			Function_322(iParam0, bParam1);
		}
		return;
	}
	switch (*iParam0)
	{
		case 0x00000001:
			if (!IS_ACTOR_VALID(iParam0->f_204))
			{
				return;
			}
			if (!IS_GRINGO_VALID(iParam0->f_208) && UNK_0x214AFB8C(iParam0->f_60))
			{
				return;
			}
			if (!Function_314(iParam0, bParam1, 0))
			{
				return;
			}
			Function_295(iParam0, bParam1);
			break;
		
		case 0x00000002:
			if (!IS_OBJECT_VALID(iParam0->f_212))
			{
				return;
			}
			break;
		
		default:
			break;
	}
	Function_287(iParam0, bParam1, 0x41f00000, 0x42200000, 0);
	vVar1 = { StackVal, StackVal, *(iParam0 + 100) };
	vVar1.f_4 = (vVar1.y + 1.25f);
	bVar4 = IS_POSITION_INDOORS(Global_34574);
	bVar5 = IS_POSITION_INDOORS(vVar1);
	if (bVar4 != bVar5)
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_200))
		{
			RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_200);
		}
		return;
	}
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		switch (*iParam0)
		{
			case 0x00000001:
				if (bParam1 == iParam0->f_20)
				{
					if (GATEWAY_UPDATE(iParam0->f_192))
					{
						if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_200))
						{
							if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(iParam0->f_200))
							{
								RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_200);
								Function_286(iParam0);
								Function_322(iParam0, bParam1);
								UI_PUSH("nCutscenes");
							}
						}
						else if (HAS_STRING_TABLE_LOADED("dlc_zombiepack_rcm"))
						{
							iParam0->f_200 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME(iParam0 + 24, GATEWAY_GET_VOLUME(iParam0->f_192), 30, 5, 0, 0, 0, 0, 4294967295, 0);
						}
					}
					else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_200))
					{
						RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_200);
					}
				}
				else if (Function_283(iParam0->f_192, 0, 1, 1, 0, 1))
				{
					Function_286(iParam0);
					Function_322(iParam0, bParam1);
				}
				break;
			
			case 0x00000002:
			case 0x00000003:
				if (GATEWAY_UPDATE(iParam0->f_192))
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_200))
					{
						if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(iParam0->f_200))
						{
							RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_200);
							Function_286(iParam0);
							Function_322(iParam0, bParam1);
							UI_PUSH("nCutscenes");
						}
					}
					else if (HAS_STRING_TABLE_LOADED("dlc_zombiepack_rcm"))
					{
						iParam0->f_200 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME(iParam0 + 24, GATEWAY_GET_VOLUME(iParam0->f_192), 30, 4, 0, 0, 0, 0, 4294967295, 0);
					}
				}
				else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_200))
				{
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_200);
				}
				break;
			
			default:
				break;
		}
	}
	else if (((Global_3380 || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		if (!Function_9(iParam0->f_144, 4096) && !Global_63096)
		{
			if (VDIST(Global_34574, *(iParam0 + 100)) > iParam0->f_96)
			{
				Function_88(iParam0 + 144, 4096);
				PRINT_HELP_FORMAT(7.0f, "tutorial_rcm_player_busy", "", "", "", "", 0, 0, 0);
			}
		}
	}
	return;
}

bool Function_283(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0xDBB0 / 56240
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	var uVar6;
	
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
			if (IS_PLAYER_DEADEYE(0) && iParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (bParam3)
			{
				Function_285(bVar1, iParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_8(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
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
				iVar2 = TASK_SEQUENCE_OPEN();
				if (Function_8(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &uVar6);
					Function_284(&uVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &uVar6);
					Function_284(&uVar6, &vVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(0, &vVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(Global_34573, iVar2);
				TASK_SEQUENCE_RELEASE(iVar2, 1);
				DECOR_SET_FLOAT(bParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_3414 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int Function_284(var uParam0, int iParam1) //Position: 0xDDC2 / 56770
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_86(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*uParam0 = (*uParam0 + 0.01f);
	uParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_86(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_285(bool bParam0, bool bParam1) //Position: 0xDE2D / 56877
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
	else if (!bParam1 || Function_8(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

void Function_286(int iParam0) //Position: 0xDE8A / 56970
{
	int iVar0;
	
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	ENABLE_USE_CONTEXTS(0);
	iVar0 = Global_26316.f_56 & 16384;
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		SET_ACTOR_INVULNERABILITY(iParam0->f_204, 1);
		MEMORY_CLEAR_EVENTS(iParam0->f_204, 1);
	}
	SET_ACTOR_INVULNERABILITY(Global_34573, 1);
	return;
}

int Function_287(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0xDED4 / 57044
{
	bool bVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	var uVar6;
	
	if (!HUD_IS_FADING() && !HUD_IS_FADED())
	{
		if (!(((Global_3380 || Global_3382) || Global_3392) || Global_34165.f_28))
		{
			if (UNK_0x214AFB8C(iParam0->f_68))
			{
				bVar0 = VDIST(Global_34574, *(iParam0 + 100));
				if (Global_63535.f_12 == iParam1)
				{
					uVar1 = Global_63535.f_20;
					uVar2 = Function_289(StackVal, StackVal, GET_ASSET_NAME(iParam0->f_68, 9), &uVar1, *(iParam0 + 100), 0, fParam2, fParam3, 2, 1, 2, 2, 0, 1);
					Global_63535.f_20 = uVar1;
					Global_63535.f_16 = bVar0;
					if (bVar0 < fParam3)
					{
						Global_63535.f_12 = 4294967295;
						Global_63535.f_16 = 999.0f;
					}
					return uVar2;
				}
				if (bVar0 > fParam2)
				{
					if (Global_63535.f_12 != 4294967295 || (Global_63535.f_12 == iParam1 && bVar0 > Global_63535.f_16))
					{
						iVar3 = Global_63535.f_20;
						if (iVar3 == 0)
						{
							if (GET_ACTOR_ENUM(Global_34573) == 1)
							{
								CUTSCENE_MANAGER_SET_WAS_JOHN_NOW_JACK_IN_RCM_CUTSCENE(Function_288(iParam0));
							}
						}
						if (IS_ACTORSET_VALID(iParam4))
						{
							iVar4 = 0;
							while (iVar4 <= GET_ACTORSET_SIZE(iParam4))
							{
								bVar5 = GET_ACTOR_FROM_ACTORSET(iParam4, iVar4);
								if (IS_ACTOR_VALID(bVar5))
								{
									CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(bVar5), bVar5);
								}
								iVar4++;
							}
						}
						uVar6 = Function_289(StackVal, StackVal, GET_ASSET_NAME(iParam0->f_68, 9), &iVar3, *(iParam0 + 100), 0, fParam2, fParam3, 2, 1, 2, 2, 0, 1);
						Global_63535.f_20 = iVar3;
						Global_63535.f_12 = iParam1;
						Global_63535.f_16 = bVar0;
						return uVar6;
					}
				}
			}
		}
	}
	return 0;
}

float Function_288(float fParam0) //Position: 0xE035 / 57397
{
	if (fParam0->f_168 != 4294967295)
	{
		if (Global_74542[fParam0->f_16810].f_28 != TO_FLOAT(false))
		{
			return 1;
		}
		return Function_288(&(Global_63541[fParam0->f_16855]));
	}
	return 0;
}

int Function_289(bool bParam0, int iParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0xE06A / 57450
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_292(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_294()) * (fParam7 - fParam6)) * 0.5f))) || bParam12)
	{
		if (!bParam5 && (HUD_IS_FADED() || HUD_IS_FADING()))
		{
			return 0;
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && *iParam1 == 0)
		{
			if (*iParam1 != 5)
			{
				*iParam1 = 0;
				return 0;
			}
		}
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			*iParam1 = 0;
			return 0;
		}
		if ((iParam13 && Global_3380) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&vVar16, &vVar19))
			{
				if (!Function_86(StackVal, StackVal, vVar16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&vVar19, (360.0f / 6.28f));
						STREAMING_OVERRIDE_MAIN_POI(vVar16, vVar19);
					}
					else
					{
						STREAMING_LOAD_SCENE_EXT(vVar16, vVar19, 1);
					}
				}
			}
		}
		switch (*iParam1)
		{
			case 0x00000000:
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(bParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					*iParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0))
				{
					*iParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(bParam0, 0, iParam8, iParam9, iParam10, iParam11);
					*iParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_290();
					CUTSCENE_MANAGER_RESUME_LOADING();
					*iParam1 = 3;
				}
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					*iParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				break;
			
			default:
				*iParam1 = 0;
				break;
		}
	}
	else if ((!Function_292(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_294()) * (fParam7 - fParam6)) * 0.5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*iParam1 = 0;
	}
	else if (!Function_292(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_290() //Position: 0xE2B0 / 58032
{
	int iVar0;
	vector3 vVar1;
	struct<5> Var4;
	struct<5> Var10;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(iVar0, &vVar1, &Var4))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(iVar0, &vVar7, &Var10);
			Function_291(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		iVar0++;
	}
	return;
}

void Function_291(char* cParam0, vector3 vParam1) //Position: 0xE304 / 58116
{
	char* cVar0[64];
	
	strcpy(&cVar0, "CUT_ACTOR: ", 64);
	stradd(&cVar0, cParam0, 64);
	strcpy(&cVar0, "start pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "start heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam4, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam8, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
}

bool Function_292(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xE42C / 58412
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_293(bParam0);
		if (VDIST(Function_293(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_293(bool bParam0) //Position: 0xE4B6 / 58550
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

int Function_294() //Position: 0xE520 / 58656
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_295(int iParam0, int iParam1) //Position: 0xE52F / 58671
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	struct<9> Var8;
	float fVar17;
	
	if (Function_9(iParam0->f_144, 2048))
	{
		return;
	}
	bVar0 = (((Global_3380 || Global_3382) || Global_3392) || Global_34165.f_28);
	bVar1 = IS_OBJECT_VALID(iParam0->f_192);
	if (!bVar1 && !bVar0)
	{
		iVar2 = 6;
		if (GET_TARGETED_JOURNAL_ENTRY() == iParam0->f_140)
		{
			iVar2 = 7;
		}
		Function_305(iParam0, iVar2);
	}
	else if (bVar0 && bVar1)
	{
		DESTROY_OBJECT(iParam0->f_192);
	}
	if (IS_BLIP_VALID(iParam0->f_184))
	{
		if (iParam0->f_80 == 4294967295)
		{
		}
		else if (GET_BLIP_ICON(iParam0->f_184) == 440)
		{
			vVar3 = { StackVal, StackVal, *(iParam0 + 100) };
			vVar3.f_4 = (vVar3.y + 0.5f);
			if (iParam1 == 5)
			{
				vVar3.f_4 = (vVar3.y + 1.5f);
				if (StackVal || !Function_304(StackVal, VDIST(Global_34574, *(iParam0 + 100)) < 50.0f, vVar3, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					return;
				}
			}
			if (iParam1 == 17)
			{
				vVar3.f_4 = (vVar3.y + 5.0f);
				if (StackVal || !Function_304(StackVal, VDIST(Global_34574, *(iParam0 + 100)) < 40.0f, vVar3, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					return;
				}
			}
			if (iParam1 == 13)
			{
				return;
			}
			if (iParam1 > 2 || iParam1 < 5)
			{
				if (!Function_304(StackVal, StackVal, vVar3, 0x3f800000, 0x42960000, 1, 1, 0) && VDIST(Global_34574, *(iParam0 + 100)) < 42.0f)
				{
					return;
				}
			}
			Global_74542[iParam110].f_12 = 1;
			REMOVE_BLIP(iParam0->f_184);
		}
		else if (bVar0)
		{
			REMOVE_BLIP(iParam0->f_184);
			REMOVE_BLIP(iParam0->f_188);
		}
	}
	if (!IS_BLIP_VALID(iParam0->f_184))
	{
		if (bVar0)
		{
			if (iParam1 == iParam0->f_20)
			{
				if (Function_303(iParam0->f_132))
				{
					Function_300(StackVal, StackVal, iParam0->f_132, 23, *(iParam0 + 100), 63);
				}
				else
				{
					Function_300(StackVal, StackVal, Global_29006, 23, *(iParam0 + 100), 63);
				}
			}
		}
		else
		{
			if (iParam1 == iParam0->f_20)
			{
				if (Function_303(iParam0->f_132))
				{
					Function_296(StackVal, iParam0->f_132, 23, iParam0->f_100);
				}
				else
				{
					Function_296(StackVal, Global_29006, 23, iParam0->f_100);
				}
				Function_22(iParam0 + 144, 4096);
			}
			if (iParam0->f_80 == 4294967295)
			{
				fVar6 = 0.5f;
				fVar7 = 70.0f;
				vVar8 = { StackVal, StackVal, *(iParam0 + 112) };
				vVar8 = (vVar8.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
				vVar8.f_8 = (vVar8.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
				iParam0->f_184 = ADD_BLIP_FOR_COORD(&vVar8, 440, 0.0f, 3, 7);
				SET_BLIP_SCALE(iParam0->f_184, fVar7);
				SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
				SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, fVar6);
				SET_BLIP_PRIORITY(iParam0->f_184, 3);
			}
			else if (iParam1 == 23 || !IS_OBJECT_VALID(iParam0->f_212))
			{
				if ((iParam1 != 5 && VDIST(Global_34574, *(iParam0 + 100)) < 40.0f) || (iParam1 != 17 && VDIST(Global_34574, *(iParam0 + 100)) < 40.0f))
				{
					fVar11 = 0.5f;
					fVar12 = 50.0f;
					vVar13 = { StackVal, StackVal, *(iParam0 + 112) };
					vVar13 = (vVar13.x + RAND_FLOAT_RANGE(5.0f, 15.0f));
					vVar13.f_8 = (vVar13.z + RAND_FLOAT_RANGE(5.0f, 15.0f));
					iParam0->f_184 = ADD_BLIP_FOR_COORD(&vVar13, 440, 0.0f, 3, 7);
					SET_BLIP_SCALE(iParam0->f_184, fVar12);
					SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
					SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, fVar11);
					SET_BLIP_PRIORITY(iParam0->f_184, 3);
				}
				else if (iParam1 == 13)
				{
					fVar16 = 0.5f;
					fVar17 = 30.0f;
					iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 112, 440, 0.0f, 3, 7);
					SET_BLIP_SCALE(iParam0->f_184, fVar17);
					SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
					SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, fVar16);
					SET_BLIP_PRIORITY(iParam0->f_184, 3);
				}
				else
				{
					iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 100, iParam0->f_80, 0.0f, 3, 7);
					SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
					iParam0->f_188 = ADD_BLIP_FOR_COORD(iParam0 + 100, iParam0->f_80, 0.0f, 3, 7);
					SET_BLIP_NAME(iParam0->f_188, iParam0 + 4);
					if (iParam1 == 19)
					{
						SET_BLIP_COLOR(iParam0->f_184, 1.0f, 1.0f, 1.0f, 1.0f);
						SET_BLIP_COLOR(iParam0->f_188, 1.0f, 1.0f, 1.0f, 1.0f);
					}
					else if (iParam1 == 20)
					{
						SET_BLIP_COLOR(iParam0->f_184, 0.34f, 0.58f, 0.74f, 1.0f);
						SET_BLIP_COLOR(iParam0->f_188, 0.34f, 0.58f, 0.74f, 1.0f);
					}
					else if (iParam1 == 21)
					{
						SET_BLIP_COLOR(iParam0->f_184, 0.79f, 0.69f, 0.0f, 1.0f);
						SET_BLIP_COLOR(iParam0->f_188, 0.79f, 0.69f, 0.0f, 1.0f);
					}
					else
					{
						SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, 1.0f);
						SET_BLIP_COLOR(iParam0->f_188, 0.63f, 0.85f, 0.0f, 1.0f);
					}
					if (iParam0->f_80 == 312 || iParam0->f_80 == 311)
					{
						UNK_0xFF3DB575(iParam0->f_188, 1);
						SET_BLIP_PRIORITY(iParam0->f_188, 3);
						SET_BLIP_MAX_DISTANCE(iParam0->f_184, 3.0f);
					}
				}
			}
		}
	}
	return;
}

void Function_296(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xEA01 / 59905
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal && Global_8723[iVar04] != iParam0 != iParam1)
			{
				Global_8723[iVar04] = 4294967294;
				Global_8723[iVar04].f_4 = 0;
				Global_8723[iVar04].f_8 = 0;
				if (IS_BLIP_VALID(Global_9724[iVar0]))
				{
					REMOVE_BLIP(Global_9724[iVar0]);
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_298(Function_299(iParam2, 0.0f, bParam3));
		vVar4 = { StackVal, StackVal, Function_298(Function_299(iParam2, 0.0f, bParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_298(StackVal);
				vVar1 = { StackVal, StackVal, Function_298(StackVal) };
				if (Function_297(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
				{
					Global_8723[iVar04] = 4294967294;
					Global_8723[iVar04].f_4 = 0;
					Global_8723[iVar04].f_8 = 0;
					if (IS_BLIP_VALID(Global_9724[iVar0]))
					{
						REMOVE_BLIP(Global_9724[iVar0]);
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_297(vector3 vParam0, vector3 vParam3) //Position: 0xEB07 / 60167
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_298(int iParam0) //Position: 0xEB34 / 60212
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = iParam0 & 32767;
	bVar4 = SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

int Function_299(vector3 vParam0) //Position: 0xEB8B / 60299
{
	bool bVar0;
	
	bVar0 = (ROUND(FABS(vParam0.x)) & 32767 || SHIFT_LEFT(ROUND(FABS(vParam0.z)) & 32767, 15));
	if (vParam0.x < 0.0f)
	{
		bVar0 = (bVar0 || 1073741824);
	}
	if (vParam0.z < 0.0f)
	{
		bVar0 = (bVar0 || 2147483648);
	}
	return bVar0;
}

int Function_300(bool bParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0xEBD9 / 60377
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!Function_303(bParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_86(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_302(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_299(StackVal, StackVal, vParam2);
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal != iParam1 && Global_8723[iVar04] != bParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	else
	{
		Function_298(uVar3);
		vVar7 = { StackVal, StackVal, Function_298(uVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_298(StackVal);
				vVar4 = { StackVal, StackVal, Function_298(StackVal) };
				if (Function_297(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	if (iVar1 != 4294967295)
	{
		Global_8723[iVar14] = bParam0;
		Global_8723[iVar14].f_4 = iParam1;
		Global_8723[iVar14].f_8 = uVar3;
		Global_8723[iVar14].f_12 = iParam5;
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_301(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0.5f);
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_CHANCE");
		}
		else if (iParam1 == 11)
		{
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_HORSEBREAKING");
		}
		else if (iParam1 == 24)
		{
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_CHANCE");
		}
		UNK_0xFF3DB575(Global_9724[iVar1], 1);
		SET_BLIP_PRIORITY(Global_9724[iVar1], 1);
		return iVar1;
	}
	return 0;
}

int Function_301(int iParam0) //Position: 0xEDBC / 60860
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
			return 433;
			break;
		
		case 0x00000003:
			return 349;
			break;
		
		case 0x00000004:
			return 327;
			break;
		
		case 0x00000005:
			return 351;
			break;
		
		case 0x00000006:
			return 350;
			break;
		
		case 0x00000008:
			return 426;
			break;
		
		case 0x00000009:
			return 353;
			break;
		
		case 0x0000000A:
			return 341;
			break;
		
		case 0x0000000B:
			return 327;
			break;
		
		case 0x0000000C:
			return 397;
			break;
		
		case 0x0000000D:
			return 399;
			break;
		
		case 0x0000000E:
			return 398;
			break;
		
		case 0x0000000F:
			return 520;
			break;
		
		case 0x00000010:
			return 326;
			break;
		
		case 0x00000011:
			return 420;
			break;
		
		case 0x00000012:
			return 421;
			break;
		
		case 0x00000013:
			return 346;
			break;
		
		case 0x00000014:
			return 354;
			break;
		
		case 0x00000015:
			return 525;
			break;
		
		case 0x00000016:
			return 383;
			break;
		
		case 0x00000017:
			return 411;
			break;
		
		case 0x00000018:
			return 411;
			break;
		
		default:
			break;
	}
	return 327;
}

int Function_302(int iParam0) //Position: 0xEEF3 / 61171
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
		case 0x00000009:
			return 1;
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x00000017:
			return 2;
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000015:
			return 3;
			break;
		
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			return 6;
			break;
		
		case 0x00000016:
			return 0;
			break;
		
		case 0x00000013:
			return 5;
			break;
		
		case 0x00000014:
			return 4;
			break;
		
		default:
			break;
	}
	return 0;
}

bool Function_303(bool bParam0) //Position: 0xEFAB / 61355
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_304(vector3 vParam0, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7) //Position: 0xEFC1 / 61377
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, fParam3, fParam4, iParam5, iParam6, iParam7);
}

void Function_305(int iParam0, int iParam1) //Position: 0xEFDD / 61405
{
	float fVar0;
	bool bVar1;
	
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_9(iParam0->f_144, 2048) || Global_3380) || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		return;
	}
	fVar0 = iParam0->f_96;
	iParam0->f_192 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(Global_63535, Function_32(), *(iParam0 + 112), 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0, 0, Global_34573, iParam1, iParam0->f_92, 0, 1, 1);
	Function_306(iParam0);
	bVar1 = GATEWAY_GET_MARKER(iParam0->f_192);
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	return;
}

void Function_306(int iParam0) //Position: 0xF097 / 61591
{
	float fVar0;
	bool bVar1;
	
	if (IS_VOLUME_VALID(iParam0->f_216))
	{
		return;
	}
	iParam0->f_216 = CREATE_VOLUME_IN_LAYOUT(Global_63535, Function_32(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	fVar0 = 20.0f;
	if (Function_303(iParam0->f_132))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
	bVar1 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_216, Function_32(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0);
	DECOR_SET_INT(bVar1, "category", 512);
	Function_307(&bVar1, 0);
	return;
}

int Function_307(var uParam0, int iParam1) //Position: 0xF139 / 61753
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*uParam0, &uVar1);
	Function_311(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_308(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_308(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xF29A / 62106
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_309("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

struct<32> Function_309(bool bParam0) //Position: 0xF335 / 62261
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_310("0", &cVar8, ""), 4);
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

struct<32> Function_310(char* cParam0, char* cParam1, char* cParam2) //Position: 0xF39F / 62367
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_311(bool bParam0) //Position: 0xF3BE / 62398
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					GET_VOLUME_CENTER(StackVal, &vVar1);
					if (IS_BLIP_VALID(StackVal))
					{
						REMOVE_BLIP(StackVal);
					}
					if (!IS_ACTOR_VALID(Global_34573))
					{
						Function_313(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_312(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_313(iVar0);
						}
					}
					else if (Function_312(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_313(iVar0);
					}
				}
				else if (DECOR_GET_INT(StackVal, "script") == bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(bParam0);
					RELEASE_VOLUME(StackVal);
				}
			}
		}
		else
		{
			Function_313(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_312(bool bParam0, vector3 vParam1) //Position: 0xF51F / 62751
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_293(bParam0);
		vVar0 = { StackVal, StackVal, Function_293(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_313(int iParam0) //Position: 0xF599 / 62873
{
	if (IS_VOLUME_VALID(Global_26155[iParam05].f_12))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	}
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	RELEASE_VOLUME(StackVal);
	RELEASE_VOLUME(Global_26155[iParam05].f_12);
	return;
}

bool Function_314(int iParam0, int iParam1, bool bParam2) //Position: 0xF5FA / 62970
{
	char* cVar0[64];
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	
	if (!((((Global_63096 || Global_3384) || Global_3369) || iParam0->f_152) || GET_ACTOR_INVULNERABILITY(iParam0->f_204)))
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, *(iParam0 + 4), 16);
		if (!Function_321(iParam0))
		{
			stradd(&cVar0, ": DA: Quest helper now hostile with player.", 64);
			TASK_CLEAR(iParam0->f_204);
			Function_316(iParam0, iParam1, 0, 0, bParam2);
			bVar16 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam155].f_140, 1);
			if (!bVar16)
			{
				bVar17 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam155].f_140, 0);
				if (bVar17)
				{
					Function_315(iParam1, 1);
				}
				else
				{
					Function_103("RCM_NPC_Attack_Fail", 10.0f, 1, 0, 0, 1, 0);
					Global_74542[iParam110] = 7;
					Global_74542[iParam110].f_4 = GET_TIME_OF_DAY();
					ADD_TIME_USING_TIME_OF_DAY(&Global_74542[iParam110] + 4, Global_63541[iParam155].f_84);
				}
			}
			return 0;
		}
		if (IS_AI_ACTOR_ENGAGED_IN_COMBAT(iParam0->f_204) && GET_ACTOR_UNDER_RETICLE(Global_34573, 0) == iParam0->f_204)
		{
			stradd(&cVar0, ": DA: Quest helper is now in combat.", 64);
			TASK_CLEAR(iParam0->f_204);
			Function_316(iParam0, iParam1, 0, 0, bParam2);
			return 0;
		}
		if (FIRE_IS_ACTOR_ON_FIRE(iParam0->f_204))
		{
			stradd(&cVar0, "DA: Quest helper is ablaze.", 64);
			TASK_CLEAR(iParam0->f_204);
			Function_316(iParam0, iParam1, 0, 0, bParam2);
			return 0;
		}
		if (IS_ACTOR_DEAD(iParam0->f_204))
		{
			stradd(&cVar0, "DA: Quest helper is dead.", 64);
			TASK_CLEAR(iParam0->f_204);
			Function_316(iParam0, iParam1, 0, 0, bParam2);
			bVar18 = false;
			bVar19 = GET_LAST_ATTACKER(iParam0->f_204);
			if (IS_ACTOR_VALID(bVar19))
			{
				if (IS_ACTOR_LOCAL_PLAYER(bVar19))
				{
					bVar18 = true;
				}
			}
			bVar20 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam155].f_140, 1);
			if (!bVar20)
			{
				bVar21 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam155].f_140, 0);
				if (bVar18)
				{
					if (bVar21)
					{
						Function_315(iParam1, 1);
					}
					else
					{
						stradd(&cVar0, "DA: Printing help message RCM_NPC_Attack_Fail", 64);
						Function_103("RCM_NPC_Attack_Fail", 10.0f, 1, 0, 0, 1, 0);
						Global_74542[iParam110] = 7;
						Global_74542[iParam110].f_4 = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_74542[iParam110] + 4, Global_63541[iParam155].f_84);
					}
				}
				else
				{
					Function_103("RCM_NPC_Dead", 10.0f, 1, 0, 0, 1, 0);
					Global_74542[iParam110] = 7;
					Global_74542[iParam110].f_4 = GET_TIME_OF_DAY();
					ADD_TIME_USING_TIME_OF_DAY(&Global_74542[iParam110] + 4, Global_63541[iParam155].f_84);
				}
			}
			return 0;
		}
		if (AI_HAS_ACTOR_BUMPED_INTO_ME(iParam0->f_204, Global_34573, 5.0f) && AI_WAS_PUSHED_OVER(iParam0->f_204, 5.0f))
		{
			stradd(&cVar0, "DA: Quest helper has been bumped.", 64);
			Function_316(iParam0, iParam1, 0, 0, bParam2);
			TASK_CLEAR(iParam0->f_204);
			TASK_PRIORITY_SET(iParam0->f_204, 2);
			TASK_FLEE_ACTOR(iParam0->f_204, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_OVERRIDE_SET_MOVETYPE(iParam0->f_204, 1);
			if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam155].f_140, 0))
			{
				PRINT_OBJECTIVE_FORMAT(7.5f, "RCM_Quest_Disabled", iParam0 + 4, "", "", "", 0, 2, 0, 0, 0);
				DEACTIVATE_JOURNAL_ENTRY(iParam0->f_140, 1);
				SET_JOURNAL_ENTRY_PROGRESS(iParam0->f_140, -1.0f, 0, "RCM_InactiveJournal");
			}
			Global_74542[iParam110] = 7;
			Global_74542[iParam110].f_4 = GET_TIME_OF_DAY();
			ADD_TIME_USING_TIME_OF_DAY(&Global_74542[iParam110] + 4, Global_63541[iParam155].f_84);
		}
	}
	return 1;
}

void Function_315(int iParam0, bool bParam1) //Position: 0xF9FF / 63999
{
	char* cVar0[32];
	
	Global_74542[iParam010] = 7;
	Global_74542[iParam010].f_4 = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_74542[iParam010] + 4, Global_63541[iParam055].f_84);
	PRINT_OBJECTIVE_FORMAT(7.5f, "RCM_Quest_Fail", &Global_63541[iParam055] + 4, "", "", "", 0, 2, 0, 0, 0);
	if (bParam1)
	{
		switch (Global_29004)
		{
			case 0x00000000:
				strcpy(&cVar0, "FTR", 32);
				break;
			
			case 0x00000001:
				strcpy(&cVar0, "MEX", 32);
				break;
			
			case 0x00000002:
				strcpy(&cVar0, "NOR", 32);
				break;
			
			default:
				PRINTSTRING("Unknown territory");
				PRINTINT(Global_29004);
				LOG_ERROR("Unknown geographic territory in MARK_QUEST_AS_FAILED");
				break;
		}
		stradd(&cVar0, "_RCM_FAIL_SONG_01", 32);
		AUDIO_MUSIC_ONE_SHOT(&cVar0, 0, 0, 0, 0, 0);
		SAY_SINGLE_LINE_CONTEXT(Global_34573, 394, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
	}
	if (!Function_27(Global_76846, 8192))
	{
		Function_17(Global_34573, 8192, 1, 0);
	}
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam055].f_140, 0))
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_63541[iParam055].f_140, -1.0f, 0, "RCM_FailedJournal");
	}
	return;
}

void Function_316(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0xFB7F / 64383
{
	int iVar0;
	
	iVar0 = 0;
	iParam2 = iParam2;
	if (IS_BLIP_VALID(iParam0->f_184))
	{
		if ((!Function_9(Global_63541[iParam155].f_144, 64) || Function_7(iParam1)) || Function_320(iParam1))
		{
			if (((((iParam1 != 2 || iParam1 != 6) || iParam1 != 8) || iParam1 != 24) && !Function_7(iParam1)) && !Function_320(iParam1))
			{
			}
			else
			{
				if (IS_BLIP_VALID(iParam0->f_184))
				{
					REMOVE_BLIP(iParam0->f_184);
				}
				if (IS_BLIP_VALID(iParam0->f_188))
				{
					REMOVE_BLIP(iParam0->f_188);
				}
			}
		}
	}
	else
	{
		if (Function_9(Global_63541[iParam155].f_144, 64))
		{
			Function_318(iParam0, iParam1);
		}
		if (!(Function_7(iParam1) || Function_320(iParam1)))
		{
			DEACTIVATE_JOURNAL_ENTRY(iParam0->f_140, 0);
			SET_JOURNAL_ENTRY_PROGRESS(iParam0->f_140, -1.0f, 1, 0);
		}
	}
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		DESTROY_OBJECT(iParam0->f_192);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_200))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_200);
	}
	if (IS_GRINGO_VALID(iParam0->f_208))
	{
		if (!Function_9(iParam0->f_144, 32))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(iParam0->f_208));
		}
		else
		{
			iParam0->f_208 = "";
		}
		Function_22(iParam0 + 144, 32);
	}
	if (IS_OBJECT_VALID(iParam0->f_212))
	{
		RELEASE_OBJECT_REF(iParam0->f_212);
	}
	if (IS_VOLUME_VALID(iParam0->f_216))
	{
		DESTROY_VOLUME(iParam0->f_216);
	}
	if (bParam4)
	{
		Function_317(iParam0);
	}
	Function_22(iParam0 + 144, 256);
	switch (Global_74542[iParam110])
	{
		case 0x00000002:
		case 0x00000005:
		case 0x00000003:
			Global_74542[iParam110] = 1;
			break;
		
		default:
			break;
	}
	if (IS_SCRIPT_VALID(iParam0->f_196) && iParam3)
	{
		TERMINATE_SCRIPT(iParam0->f_196);
	}
	switch (*iParam0)
	{
		case 0x00000001:
			if (IS_ACTOR_VALID(iParam0->f_204))
			{
				AI_CLEAR_DONT_HARM_ACTOR(iParam0->f_204);
				AI_CONVERSE_ENABLE(iParam0->f_204);
				SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(iParam0->f_204, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_204, 1);
				if (SQUAD_IS_VALID(SQUAD_GET(iParam0->f_204)))
				{
					DESTROY_OBJECT(SQUAD_GET(iParam0->f_204));
				}
				RELEASE_ACTOR(iParam0->f_204);
			}
			break;
		
		default:
			break;
	}
}

void Function_317(int iParam0) //Position: 0xFD6A / 64874
{
	if (Function_9(iParam0->f_144, 1))
	{
		STREAMING_EVICT_ACTOR(iParam0->f_136, 4294967295);
		Function_22(iParam0 + 144, 1);
	}
	if (Function_9(iParam0->f_144, 8))
	{
		REMOVE_STRING_TABLE("dlc_zombiepack_rcm");
		Function_22(iParam0 + 144, 8);
	}
	if (Function_9(iParam0->f_144, 2))
	{
		STREAMING_EVICT_GRINGO(iParam0->f_60);
		Function_22(iParam0 + 144, 2);
	}
	if (Function_9(iParam0->f_144, 4))
	{
		STREAMING_EVICT_PROP(iParam0->f_64);
		Function_22(iParam0 + 144, 4);
	}
	return;
}

void Function_318(int iParam0, int iParam1) //Position: 0xFDEC / 65004
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	vVar0 = { StackVal, StackVal, *(iParam0 + 112) };
	vVar0.f_4 = (vVar0.y + 0.5f);
	fVar3 = 1.0f;
	fVar4 = 50.0f;
	if ((((StackVal && Function_304(StackVal, Function_328(iParam1), vVar0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_319(iParam1)) || Global_74542[iParam110].f_12 != 1) || Function_9(Global_63541[iParam155].f_144, 64))
	{
		if (((iParam0->f_80 != 4294967295 || iParam1 != 10) || iParam1 != 17) || iParam1 != 5)
		{
			fVar3 = 0.5f;
			fVar8 = 70.0f;
			vVar5 = { StackVal, StackVal, *(iParam0 + 112) };
			vVar5 = (vVar5.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
			vVar5.f_8 = (vVar5.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
			iParam0->f_184 = ADD_BLIP_FOR_COORD(&vVar5, 440, 0.0f, 2, 0);
			SET_BLIP_SCALE(iParam0->f_184, fVar8);
			SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
			SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, fVar3);
			SET_BLIP_PRIORITY(iParam0->f_184, 3);
		}
		else if (iParam1 == 13)
		{
			fVar3 = 0.5f;
			fVar9 = 30.0f;
			iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 112, 440, 0.0f, 2, 0);
			SET_BLIP_SCALE(iParam0->f_184, fVar9);
			SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
			SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, fVar3);
			SET_BLIP_PRIORITY(iParam0->f_184, 3);
		}
		else if (iParam1 == 23 || !IS_OBJECT_VALID(iParam0->f_212))
		{
			iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 0);
			if (((((((((((iParam0->f_80 == 312 && iParam0->f_80 == 311) && iParam1 == 24) && iParam1 == 6) && iParam1 == 7) && iParam1 == 8) && iParam1 == 2) && iParam1 == 20) && iParam1 == 21) && iParam1 == 25) && iParam1 == 26) && iParam1 == 27)
			{
				SET_BLIP_MAX_DISTANCE(iParam0->f_184, 3.0f);
			}
			iParam0->f_188 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 0);
			if (((iParam1 != 24 || iParam1 != 6) || iParam1 != 8) || iParam1 != 2)
			{
				SET_BLIP_NAME(iParam0->f_188, "ZOMBIE_STORY");
			}
			else
			{
				SET_BLIP_NAME(iParam0->f_188, iParam0 + 4);
			}
			UNK_0xFF3DB575(iParam0->f_188, 1);
			if (iParam0->f_80 == 312 && iParam0->f_80 == 311)
			{
				SET_BLIP_PRIORITY(iParam0->f_188, 3);
			}
			if (Function_9(Global_74542[iParam110].f_24, 1))
			{
				SET_BLIP_COLOR(iParam0->f_188, 0.63f, 0.85f, 0.0f, 0.5f);
				if (Global_29006 != Global_63541[iParam155].f_132 && !Function_105())
				{
					Function_103("TerrCont_RCM", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			else
			{
				SET_BLIP_COLOR(iParam0->f_188, 0.63f, 0.85f, 0.0f, fVar3);
			}
			Global_74542[iParam110].f_12 = 1;
		}
		if (IS_BLIP_VALID(iParam0->f_184))
		{
			if (((iParam1 != 24 || iParam1 != 6) || iParam1 != 8) || iParam1 != 2)
			{
				SET_BLIP_NAME(iParam0->f_184, "ZOMBIE_STORY");
				if (iParam1 == 2)
				{
					SET_BLIP_BLINK(iParam0->f_184, 1, 0, (7.5f + 5.0f));
				}
				else
				{
					SET_BLIP_BLINK(iParam0->f_184, 1, 0, 7.5f);
				}
			}
			else
			{
				SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
			}
			if (Function_9(Global_74542[iParam110].f_24, 1))
			{
				SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, 0.5f);
				if (Global_29006 != Global_63541[iParam155].f_132 && !Function_105())
				{
					Function_103("TerrCont_RCM", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			else
			{
				SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, fVar3);
			}
			SET_BLIP_PRIORITY(iParam0->f_184, 3);
		}
	}
	else
	{
		fVar3 = 0.5f;
		vVar5 = { StackVal, StackVal, *(iParam0 + 112) };
		vVar5 = (vVar5.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
		vVar5.f_8 = (vVar5.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
		iParam0->f_184 = ADD_BLIP_FOR_COORD(&vVar5, 440, 0.0f, 2, 0);
		SET_BLIP_SCALE(iParam0->f_184, fVar4);
		SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
		SET_BLIP_PRIORITY(iParam0->f_184, 3);
	}
	if (iParam1 == 19)
	{
		SET_BLIP_COLOR(iParam0->f_184, 1.0f, 1.0f, 1.0f, 1.0f);
		SET_BLIP_COLOR(iParam0->f_188, 1.0f, 1.0f, 1.0f, 1.0f);
	}
	else if (iParam1 == 20)
	{
		SET_BLIP_COLOR(iParam0->f_184, 0.34f, 0.58f, 0.74f, 1.0f);
		SET_BLIP_COLOR(iParam0->f_188, 0.34f, 0.58f, 0.74f, 1.0f);
	}
	else if (iParam1 == 21)
	{
		SET_BLIP_COLOR(iParam0->f_184, 0.79f, 0.69f, 0.0f, 1.0f);
		SET_BLIP_COLOR(iParam0->f_188, 0.79f, 0.69f, 0.0f, 1.0f);
	}
	return;
}

int Function_319(int iParam0) //Position: 0x1027F / 66175
{
	if ((Global_74542[iParam010] != 3 || Global_74542[iParam010] != 4) || Global_74542[iParam010] != 5)
	{
		return 1;
	}
	return 0;
}

bool Function_320(int iParam0) //Position: 0x102AB / 66219
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_321(int iParam0) //Position: 0x102C0 / 66240
{
	if (!iParam0->f_152)
	{
		if (Function_95())
		{
			if (((AI_IS_AGGROING(iParam0->f_204, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(iParam0->f_204, Global_34573)) || GET_LAST_ATTACKER(iParam0->f_204) != Global_34573) || IS_ACTOR_HANDSUP(iParam0->f_204))
			{
				return 0;
			}
			if ((IS_PLAYER_TARGETTING_ACTOR(0, iParam0->f_204, 1) && GET_ACTOR_FACTION(iParam0->f_204) == 20) && GET_ACTOR_FACTION(iParam0->f_204) == 23)
			{
				return 0;
			}
		}
		if ((((AI_IS_AGGROING(iParam0->f_204, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(iParam0->f_204, Global_34573)) || GET_LAST_ATTACKER(iParam0->f_204) != Global_34573) || IS_ACTOR_HANDSUP(iParam0->f_204)) || IS_PLAYER_TARGETTING_ACTOR(0, iParam0->f_204, 1))
		{
			return 0;
		}
		return 1;
	}
	return 1;
}

void Function_322(int iParam0, int iParam1) //Position: 0x10364 / 66404
{
	struct<5> Var0;
	
	Var0 = iParam1;
	Var0.f_4 = 4;
	if (!IS_SCRIPT_VALID(iParam0->f_196))
	{
		iParam0->f_196 = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(iParam0->f_56, 4), &Var0, 2, 0);
	}
	if (!IS_SCRIPT_VALID(iParam0->f_196))
	{
		PRINTSTRING("Quest launch FAIL: ");
		PRINTSTRING(GET_ASSET_NAME(iParam0->f_56, 4));
		PRINTNL();
		LOG_ERROR("Failed to launch quest script! Check spew!");
	}
	else
	{
		Global_74542[iParam110] = 5;
		if (!(IS_JOURNAL_ENTRY_IN_LIST(iParam0->f_140, 0) || iParam0->f_148))
		{
			iParam0->f_140 = CREATE_JOURNAL_ENTRY(iParam0 + 4, 2, iParam0->f_20, "Mission_Strangers");
			PREPEND_JOURNAL_ENTRY(iParam0->f_140, false);
		}
	}
	return;
}

int Function_323(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1043C / 66620
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(0))
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
	if (Function_326(bParam0))
	{
		return 1;
	}
	if (Function_325(bParam0))
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
	if (Function_324())
	{
		return 1;
	}
	return 0;
}

bool Function_324() //Position: 0x104F2 / 66802
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_325(int iParam0) //Position: 0x10509 / 66825
{
	return IS_ACTOR_IN_HOGTIE(iParam0);
}

bool Function_326(bool bParam0) //Position: 0x10514 / 66836
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

bool Function_327(int iParam0) //Position: 0x10522 / 66850
{
	if (Global_74542[iParam010] == 3)
	{
		return 1;
	}
	return 0;
}

bool Function_328(int iParam0) //Position: 0x10537 / 66871
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

void Function_329(var uParam0) //Position: 0x1054C / 66892
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	ENABLE_USE_CONTEXTS(1);
	Global_26316.f_56 |= 16384;
	if (IS_ACTOR_VALID(uParam0->f_204) && uParam0->f_136 == 358)
	{
		SET_ACTOR_INVULNERABILITY(uParam0->f_204, 0);
	}
	SET_ACTOR_INVULNERABILITY(Global_34573, 0);
	return;
}

void Function_330() //Position: 0x1058D / 66957
{
	return;
}

int Function_331() //Position: 0x10593 / 66963
{
	return 0;
}

void Function_332() //Position: 0x1059A / 66970
{
	return;
}

void Function_333(int iParam0) //Position: 0x105A0 / 66976
{
	strcpy(iParam0 + 12, "MISSIONLAUNCHER", 16);
	if (Global_3421)
	{
		*iParam0 = 66970;
		iParam0->f_4 = 66963;
		iParam0->f_8 = 66970;
	}
	else
	{
		*iParam0 = 85657;
		iParam0->f_4 = 67072;
		iParam0->f_8 = 67066;
	}
	iParam0->f_28 = 0;
	return;
}

void Function_334() //Position: 0x105FA / 67066
{
	return;
}

int Function_335() //Position: 0x10600 / 67072
{
	float fVar0;
	int iVar1;
	
	if (!Global_3366)
	{
		return 0;
	}
	if (Function_96(0, 0, 1, 1) && !Global_3414)
	{
		return 0;
	}
	if (((((Global_3403 || Global_3404) || Function_417(2048)) || Global_3407) || Function_9(Global_63084.f_32, 1)) && !Global_3414)
	{
		return 0;
	}
	if (!Global_3390)
	{
		return 0;
	}
	if (IS_GAME_RESETTING())
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return 0;
	}
	if (Function_416(&Global_3422[240] + 128, 2))
	{
		if (Function_7(7) && Function_7(11))
		{
			if (((Function_7(18) && Function_7(37)) && Function_7(14)) && Function_7(21))
			{
				Function_415(&Global_3422[240] + 128, 2);
			}
			else if (!Function_27(Global_76847, 2))
			{
				Function_17(Global_34573, 2, 2, 1);
			}
		}
	}
	if (Function_416(&Global_3422[340] + 128, 2))
	{
		if ((Function_7(27) && Function_7(23)) && Function_7(1))
		{
			Function_415(&Global_3422[340] + 128, 2);
		}
	}
	fVar0 = GET_PROFILE_TIME();
	iVar1 = Global_6266;
	while (iVar1 < (Global_3422 - 1))
	{
		if ((!Global_3379 && !Global_3383) && !Global_63096)
		{
			if ((GET_PROFILE_TIME() - fVar0) < 150.0f)
			{
				Global_6266 = iVar1;
				return 0;
			}
			if ((Global_3422[iVar140] != Global_29003 && !Global_3422[iVar140].f_112) && Global_3422[iVar140].f_124)
			{
				if (!Function_416(&Global_3422[iVar140] + 128, 4194304) || Function_416(&Global_3422[iVar140] + 128, 8388608))
				{
					Function_412(&(Global_3422[iVar140]), iVar1);
				}
			}
			if (Global_3422[iVar140].f_112)
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
					return 0;
				}
				SATCHEL_SET_ENABLED(0);
				if (!Function_223(StackVal))
				{
					Function_336(&(Global_3422[iVar140]), 0, 0, 1);
				}
				else
				{
					Function_336(&(Global_3422[iVar140]), !HUD_IS_FADED(), 0, 1);
				}
			}
		}
		else if (Global_3379)
		{
		}
		else if (Global_3383)
		{
		}
		else if (Global_63096)
		{
		}
		iVar1++;
	}
	Global_6266 = 1;
	return 0;
}

void Function_336(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x1080B / 67595
{
	struct<4> Var0;
	
	if ((Function_411(StackVal) != 4 && !bParam2) && !Global_3381)
	{
		bParam1 = false;
	}
	if (Function_410(StackVal) == 1)
	{
		if (IS_OBJECT_VALID(iParam0->f_40))
		{
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_40), false);
			}
			DESTROY_OBJECT(iParam0->f_40);
		}
	}
	if (bParam1)
	{
		if (HUD_IS_FADED())
		{
			if (Function_410(StackVal) == 1)
			{
				Global_3379 = 1;
				Global_3378 = 0;
				SET_RICH_PRESENCE(StackVal, Function_411(3), 0, 0, 0);
				Function_405(&(Global_3422[Function_411(StackVal)40]));
			}
			else if (Function_410(StackVal) == 4)
			{
				Function_222(StackVal, iParam0->f_140);
				Global_3383 = 1;
				SET_RICH_PRESENCE(StackVal, (3 + Function_411(58)), 0, 0, 0);
			}
			Function_403();
			Function_401(0, 0);
			iParam0->f_108 = Function_338(StackVal, StackVal, bParam2, 0, iParam3, 0);
			iParam0->f_112 = 0;
			iParam0->f_124 = 0;
		}
		else if (!HUD_IS_FADING())
		{
			if (Function_410(StackVal) == 1)
			{
				Var0 = { StackVal, StackVal, StackVal, Function_337(Function_411(StackVal)) };
			}
			else
			{
				Var0 = { StackVal, StackVal, StackVal, *(iParam0 + 12) };
			}
			UNK_0xC6E36B1D(&Var0);
			SET_ACTOR_INVULNERABILITY(Global_34573, 1);
		}
	}
	else
	{
		if (Function_410(StackVal) == 1)
		{
			Global_3379 = 1;
			Global_3378 = 0;
			Var0 = { StackVal, StackVal, StackVal, Function_337(Function_411(StackVal)) };
			if (HUD_IS_FADED())
			{
				if (Function_411(StackVal) != 4)
				{
					UNK_0xC6E36B1D(&Var0);
				}
				else
				{
					UNK_0xEF270DC9();
				}
			}
			Function_405(&(Global_3422[Function_411(StackVal)40]));
		}
		else if (Function_410(StackVal) == 4)
		{
			Function_222(StackVal, iParam0->f_140);
			Global_3383 = 1;
		}
		SET_ACTOR_INVULNERABILITY(Global_34573, 1);
		Function_403();
		Function_401(0, 0);
		iParam0->f_108 = Function_338(StackVal, StackVal, bParam2, 0, 1, 0);
		iParam0->f_112 = 0;
		iParam0->f_124 = 0;
	}
}

struct<16> Function_337(bool bParam0) //Position: 0x109C4 / 68036
{
	char* cVar0[16];
	
	strcpy(&cVar0, "fav_non", 16);
	if (!Function_26(bParam0))
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, *(&Global_3422[bParam040] + 12);
}

var Function_338(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5) //Position: 0x109F5 / 68085
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar61;
	struct<25> Var62;
	
	if (Function_410(iParam1) == 1)
	{
		Function_401(1, 0);
	}
	else
	{
		Function_401(0, 0);
	}
	bVar1 = Function_411(iParam1);
	if (!Global_3365 || Global_3381)
	{
		if (Function_410(iParam1) == 1)
		{
			uVar2 = 58;
			if (!bParam2)
			{
				Function_373(bVar1, &uVar2, &uVar0, 1);
			}
			if (bVar1 == 1)
			{
				iVar61 = 0;
				while (iVar61 <= 4)
				{
					Function_372(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 3)
				{
					Function_371(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 11)
				{
					Function_370(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 16)
				{
					Function_369(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 58)
				{
					if (Function_223(Function_25(iVar61)))
					{
						Function_367(Function_25(iVar61));
					}
					iVar61++;
				}
				Function_365();
				Function_362(Function_364(), 0);
				Function_361();
				if (bVar1 == 1)
				{
					Function_367(Function_25(2));
				}
			}
			if (bVar1 == 57)
			{
				DISABLE_CHILD_SECTOR("beh_silo02x");
				ENABLE_CHILD_SECTOR("beh_silo01x");
				DISABLE_CHILD_SECTOR("beh_house02x");
				DISABLE_CHILD_SECTOR("beh_house02props01x");
				ENABLE_CHILD_SECTOR("beh_house01x");
				ENABLE_CHILD_SECTOR("beh_house01props01x");
			}
		}
		else
		{
			PRINTSTRING("Launch type = ");
			PRINTINT(Function_410(iParam1));
			PRINTNL();
		}
	}
	if (Function_410(iParam1) == 1)
	{
		Function_56(18, bVar1, 0);
		Function_359(18, &Global_3422[bVar140] + 12, 0, 1);
		if (!bParam2)
		{
			Function_357(bVar1);
			AUDIO_RESET_SPEECH_HISTORY();
		}
		else
		{
			Global_34165.f_136 = GET_CURRENT_GAME_TIME();
		}
	}
	Var62 = iParam1;
	Var69 = { StackVal, StackVal, StackVal, Function_356(bVar1) };
	strcpy(&Var62 + 4, UI_GET_STRING(&Var69), 16);
	Var62.f_20 = bParam2;
	Var62.f_24 = iParam3;
	Function_352(0);
	SATCHEL_SET_ENABLED(1);
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		TERMINATE_SCRIPT(Global_26316.f_60);
	}
	if (IS_SCRIPT_VALID(Global_26316.f_64))
	{
		TERMINATE_SCRIPT(Global_26316.f_64);
	}
	Global_3378 = 0;
	SET_ACTOR_INVULNERABILITY(Global_34573, 0);
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return "";
	}
	if (((IS_OBJECT_VALID(Global_63084.f_28) || Function_9(Global_63084.f_32, 2)) || Function_9(Global_63084.f_32, 1)) || Function_9(Global_63084.f_32, 65536))
	{
		Function_22(&Global_63084 + 32, 2);
		Function_22(&Global_63084 + 32, 1);
		Function_22(&Global_63084 + 32, 65536);
		Function_88(&Global_63084 + 32, 4);
	}
	if (Function_410(iParam1) == 4)
	{
		PLAY_SOUND("HUD_MENU_SELECT_MASTER");
	}
	Global_3414 = 0;
	bVar73 = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(iParam0, 4), &Var62, 7, 0);
	if (IS_SCRIPT_VALID(bVar73))
	{
		if (Function_223(iParam1))
		{
			if (bParam5)
			{
				Function_351(iParam1, iParam4);
			}
			else if (Function_350(iParam1) == 1)
			{
				Function_349(iParam1, iParam4);
			}
			else
			{
				Function_344(iParam1, iParam4);
			}
		}
		Function_341(2);
		Function_339((15 - Function_340(105)));
		return bVar73;
	}
	return "";
}

void Function_339(int iParam0) //Position: 0x10D21 / 68897
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_340(105)), 0);
	return;
}

int Function_340(int iParam0) //Position: 0x10D42 / 68930
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_341(int iParam0) //Position: 0x10D58 / 68952
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_343(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_343(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, 0, iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_343(Global_12976.f_24);
	PRINTNL();
	Function_342(iParam0);
	return;
}

void Function_342(int iParam0) //Position: 0x10DF4 / 69108
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_340(90)), 0);
	return;
}

void Function_343(bool bParam0) //Position: 0x10E15 / 69141
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

void Function_344(int iParam0, int iParam1) //Position: 0x10E5B / 69211
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	int iVar12;
	
	if (!Function_223(iParam0))
	{
		Function_347();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_410(iParam0);
	if (StackVal != 2)
	{
		Function_346("DEED_START", iParam0);
	}
	Global_13172[iParam011].f_8 = StackVal + 1;
	Global_13172[iParam011].f_4 = 2;
	Global_6271 = iParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_70(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_411(iParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_345(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_104(Global_6269) };
		}
		iVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(iVar12, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(iVar12);
		APPEND_JOURNAL_ENTRY(iVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_3376 = 1;
	return;
}

struct<24> Function_345(char* cParam0) //Position: 0x10F6B / 69483
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

void Function_346(char* cParam0, bool bParam1) //Position: 0x111C1 / 70081
{
	struct<4> Var0;
	
	if (!Function_223(bParam1))
	{
		return;
	}
	switch (Function_410(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_356(Function_411(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_410(bParam1), Function_411(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_410(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_410(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_410(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_410(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_410(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

void Function_347() //Position: 0x112E5 / 70373
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
			Function_348(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_348(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1152C / 70956
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_349(int iParam0, int iParam1) //Position: 0x11555 / 70997
{
	int iVar0;
	
	if (!Function_223(iParam0))
	{
		Function_347();
		return;
	}
	if (StackVal == 2)
	{
		return;
	}
	if (!StackVal != 1)
	{
		return;
	}
	iVar0 = Function_410(iParam0);
	Global_13172[iParam011].f_4 = 2;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_70(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_411(iParam0);
	}
	Global_3376 = 1;
	return;
}

int Function_350(int iParam0) //Position: 0x115BC / 71100
{
	if (!Function_223(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_351(int iParam0, int iParam1) //Position: 0x115D6 / 71126
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	
	if (!Function_223(iParam0))
	{
		Function_347();
		return;
	}
	iVar0 = Function_410(iParam0);
	Global_13172[iParam011].f_4 = 1;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_70(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_411(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_345(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_104(Global_6269) };
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(iVar11);
		APPEND_JOURNAL_ENTRY(iVar11, 0);
	}
	return;
}

void Function_352(bool bParam0) //Position: 0x1167C / 71292
{
	if (Global_3403 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_3403 = 1;
		if (!Global_27759)
		{
			if (IS_FACTION_VALID(Global_26361))
			{
				SET_FACTIONS_STATUS_TWO_WAY(Global_26361, 2, 6);
			}
		}
		Global_13111 = 0;
	}
	else
	{
		Global_3403 = 0;
		Global_3405 = 0;
		Function_353();
		if (IS_FACTION_VALID(Global_26361))
		{
			SET_FACTIONS_STATUS_TWO_WAY(Global_26361, 2, 2);
		}
		SET_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
		SET_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
		if (IS_SCRIPT_VALID(Global_26316.f_60))
		{
			TERMINATE_SCRIPT(Global_26316.f_60);
		}
		if (IS_SCRIPT_VALID(Global_26316.f_64))
		{
			TERMINATE_SCRIPT(Global_26316.f_64);
		}
		Global_13111 = 4294967295;
	}
	return;
}

void Function_353() //Position: 0x11707 / 71431
{
	int iVar0;
	
	Global_26960 = Function_354(StackVal);
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

int Function_354(int iParam0) //Position: 0x11755 / 71509
{
	if (!Function_355(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_355(int iParam0) //Position: 0x1176D / 71533
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_356(bool bParam0) //Position: 0x11782 / 71554
{
	char* cVar0[16];
	
	if (!Function_95())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, bParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_357(int iParam0) //Position: 0x117BC / 71612
{
	int iVar0;
	
	iVar0 = Function_358(iParam0);
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Global_34165.f_140 = 0.0f;
	switch (iVar0)
	{
		case 0x00000000:
			Global_34165.f_120 = Function_57(27);
			Global_34165.f_116 = Function_57(42);
			Global_34165.f_124 = CEIL(Function_50(49));
			Global_34165.f_128 = Function_57(49);
			break;
		
		case 0x00000002:
			Global_34165.f_116 = Function_57(355);
			break;
		
		case 0x00000001:
			Global_34165.f_124 = CEIL(Function_50(49));
			Global_34165.f_128 = Function_57(49);
			break;
	}
	return;
}

int Function_358(int iParam0) //Position: 0x11846 / 71750
{
	switch (iParam0)
	{
		case 0x00000002:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000032:
			return 1;
			break;
		
		case 0x00000007:
		case 0x00000031:
		case 0x00000037:
			return 2;
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000016:
		case 0x00000006:
		case 0x00000005:
		case 0x0000000B:
		case 0x00000011:
		case 0x0000000F:
		case 0x0000000C:
		case 0x00000038:
		case 0x00000033:
		case 0x00000001:
			return 3;
			break;
	}
	return 0;
}

int Function_359(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x118DB / 71899
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
		Function_360(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_360(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, bool bParam10) //Position: 0x11C2D / 72749
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), iParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), iParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), iParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

void Function_361() //Position: 0x11CB0 / 72880
{
	WRITE_TO_FILE("New Game Progression Started\n", "C:/MoneyData.csv", 1);
	return;
}

int Function_362(int iParam0, bool bParam1) //Position: 0x11CED / 72941
{
	bool bVar0;
	
	bVar0 = Function_57(0);
	if ((Function_57(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_363(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (iParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_57(0));
	return 1;
}

int Function_363(int iParam0, bool bParam1, int iParam2) //Position: 0x11D7D / 73085
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
	Function_51(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_40(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_364() //Position: 0x11F78 / 73592
{
	return Function_57(0);
}

void Function_365() //Position: 0x11F82 / 73602
{
	PRINTSTRING("Unlocking Frontier Weapons");
	PRINTNL();
	SET_WEAPONENUM_LOCKED(false, 1);
	SET_WEAPONENUM_LOCKED(true, 1);
	SET_WEAPONENUM_LOCKED(2, 1);
	SET_WEAPONENUM_LOCKED(3, 1);
	SET_WEAPONENUM_LOCKED(4, 0);
	SET_WEAPONENUM_LOCKED(5, 1);
	SET_WEAPONENUM_LOCKED(6, 1);
	SET_WEAPONENUM_LOCKED(7, 1);
	SET_WEAPONENUM_LOCKED(12, 1);
	SET_WEAPONENUM_LOCKED(13, 1);
	SET_WEAPONENUM_LOCKED(14, 1);
	SET_WEAPONENUM_LOCKED(19, 1);
	SET_WEAPONENUM_LOCKED(20, 1);
	SET_WEAPONENUM_LOCKED(9, 1);
	SET_WEAPONENUM_LOCKED(10, 1);
	SET_WEAPONENUM_LOCKED(11, 1);
	SET_WEAPONENUM_LOCKED(16, 0);
	SET_WEAPONENUM_LOCKED(17, 1);
	SET_WEAPONENUM_LOCKED(18, 1);
	SET_WEAPONENUM_LOCKED(15, 1);
	SET_WEAPONENUM_LOCKED(22, 0);
	SET_WEAPONENUM_LOCKED(23, 1);
	SET_WEAPONENUM_LOCKED(24, 1);
	SET_WEAPONENUM_LOCKED(25, 1);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), false);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), true);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 2);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 3);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 15);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 6);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 5);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 7);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 14);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 12);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 13);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 19);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 20);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 9);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 10);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 11);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 17);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 18);
	GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 4, 1.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 22, 1.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 8, 1.0f, 0, 1);
	Function_366();
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 22);
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 4);
	return;
}

void Function_366() //Position: 0x12105 / 73989
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = 0;
	if (Global_3365)
	{
		return;
	}
	bVar2 = Function_78();
	if (!IS_ACTOR_VALID(bVar2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 38)
	{
		bVar1 = iVar0;
		iVar3 = GET_AMMO_ENUM(bVar1);
		if (iVar3 != 4294967295)
		{
			switch (UNK_0xDB679ED9(bVar1))
			{
				case 0x00000028:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, iVar3, 30.0f, 0);
					break;
				
				case 0x00000027:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, iVar3, 30.0f, 0);
					break;
				
				case 0x0000002B:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, iVar3, 12.0f, 0);
					break;
				
				case 0x0000002A:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, iVar3, 20.0f, 0);
					break;
				
				case 0x00000029:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, iVar3, 20.0f, 0);
					break;
				
				case 0x0000002C:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, iVar3, 20.0f, 0);
					break;
				}
		}
		iVar0++;
	}
	return;
}

void Function_367(int iParam0) //Position: 0x121D6 / 74198
{
	Function_368(iParam0);
	return;
}

void Function_368(int iParam0) //Position: 0x121E1 / 74209
{
	int iVar0;
	
	if (!Function_223(iParam0))
	{
		Function_347();
		return;
	}
	iVar0 = Function_410(iParam0);
	Global_13172[iParam011].f_4 = 0;
	return;
}

void Function_369(int iParam0, int iParam1) //Position: 0x12205 / 74245
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return;
	}
	Global_25986[iParam0] = iParam1;
	return;
}

void Function_370(int iParam0, int iParam1) //Position: 0x12222 / 74274
{
	if (iParam0 >= 4294967295 && iParam0 <= 11)
	{
		return;
	}
	Global_25974[iParam0] = iParam1;
	return;
}

void Function_371(int iParam0, int iParam1) //Position: 0x1223F / 74303
{
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return;
	}
	Global_25970[iParam0] = iParam1;
	return;
}

void Function_372(int iParam0, int iParam1) //Position: 0x1225B / 74331
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return;
	}
	Global_25965[iParam0] = iParam1;
	return;
}

void Function_373(int iParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x12277 / 74359
{
	if (Global_3365 && !Global_3381)
	{
		return;
	}
	if (!bParam3)
	{
		if (!Function_95())
		{
			Function_377(iParam0, uParam2, 0);
		}
		else
		{
			Function_374(iParam0, uParam2, 0);
		}
		(*uParam1)[iParam0] = 1;
	}
	if (Global_3422[iParam040].f_132 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_132])
		{
			Function_373(Global_3422[iParam040].f_132, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_136 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_136])
		{
			Function_373(Global_3422[iParam040].f_136, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_140 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_140])
		{
			Function_373(Global_3422[iParam040].f_140, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_144 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_144])
		{
			Function_373(Global_3422[iParam040].f_144, uParam1, uParam2, 0);
		}
	}
}

void Function_374(int iParam0, var uParam1, bool bParam2) //Position: 0x12370 / 74608
{
	struct<4> Var0;
	
	*uParam1 = *uParam1;
	if (!Function_26(iParam0))
	{
		return;
	}
	if (Global_3381 && Global_6267 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_375(21, bParam2, 0);
			Function_375(16, bParam2, 0);
			SET_DISABLE_DEADEYE(0, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
			SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_356(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

int Function_375(bool bParam0, bool bParam1, int iParam2) //Position: 0x1240E / 74766
{
	if (!Function_376(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_78(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_78(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_78(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_376(int iParam0) //Position: 0x12465 / 74853
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_377(int iParam0, var uParam1, bool bParam2) //Position: 0x12477 / 74871
{
	struct<4> Var0;
	
	if (!Function_26(iParam0))
	{
		return;
	}
	if (Global_3381 && Global_6267 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_375(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_398(Global_30640[0]);
			Function_398(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_396(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_398(Global_30668[0]);
			Function_389(0);
			Function_387(2, 1);
			Function_387(0, 1);
			Function_387(1, 1);
			break;
		
		case 0x00000003:
			Function_398(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_398(Global_30668[0]);
			Function_398(Global_30640[0]);
			Function_385(0, 1);
			Function_385(15, 1);
			Function_385(9, 1);
			Function_385(12, 1);
			Function_385(16, 1);
			Function_387(3, 1);
			break;
		
		case 0x00000005:
			Function_398(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_396(21, bParam2, 4);
			Function_398(Global_30668[0]);
			Function_387(39, 1);
			break;
		
		case 0x00000007:
			Function_398(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_398(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3() || Function_384())
				{
					if (!Function_98(4))
					{
						Function_102(4, 0, 0, 1, 0);
					}
				}
			}
			Function_398(Global_30640[0]);
			Function_398(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_398(Global_30640[0]);
			Function_398(Global_30668[2]);
			Function_383(&(Global_29008[Global_30668[2]]), 32768);
			Function_382(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_396(9, bParam2, 4);
			Function_398(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_398(Global_30640[0]);
			Function_398(Global_30658[0]);
			Function_383(&(Global_29008[Global_30658[0]]), 32768);
			Function_382(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_398(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_398(Global_30640[0]);
			Function_398(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_398(Global_30640[1]);
			Function_398(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_398(Global_30679[0]);
			Function_398(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_398(Global_30658[5]);
			Function_398(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_396(21, bParam2, 4);
			Function_398(Global_30640[4]);
			Function_398(Global_30658[4]);
			Function_381(&Global_76847, 0x2000000);
			Function_381(&Global_76847, 0x4000000);
			Function_381(&Global_76847, 4096);
			Function_381(&Global_76847, 8);
			Function_381(&Global_76847, 8388608);
			Function_381(&Global_76847, 524288);
			Function_381(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_398(Global_30640[4]);
			Function_398(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_382(&(Global_29008[Global_30640[4]]), 256);
			Function_398(Global_30640[4]);
			Function_398(Global_30658[0]);
			Function_383(&(Global_29008[Global_30658[0]]), 32768);
			Function_382(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_398(Global_30640[0]);
			Function_398(Global_30640[5]);
			Function_396(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_398(Global_30658[3]);
			Function_383(&(Global_29008[Global_30658[3]]), 32768);
			Function_382(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_396(9, bParam2, 4);
			Function_398(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_383(&(Global_29008[Global_30679[1]]), 32768);
			Function_398(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_396(12, bParam2, 4);
			Function_382(&(Global_29008[Global_30679[1]]), 256);
			Function_398(Global_30668[3]);
			Function_398(Global_30693[0]);
			Function_398(Global_30685[0]);
			Function_389(4);
			Function_385(13, 1);
			Function_385(1, 1);
			Function_385(18, 1);
			Function_387(34, 1);
			Function_387(44, 1);
			Function_387(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_396(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_398(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_398(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_398(Global_30693[0]);
			Function_398(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_398(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_398(Global_30685[0]);
			Function_398(Global_30693[0]);
			Function_398(Global_30693[1]);
			Function_398(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_396(23, bParam2, 3);
			Function_385(23, 1);
			Function_398(Global_30685[0]);
			Function_398(Global_30685[2]);
			Function_383(&(Global_29008[Global_30685[2]]), 32768);
			Function_382(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_396(19, bParam2, 4);
			Function_398(Global_30685[0]);
			Function_398(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_396(24, bParam2, 3);
			Function_385(24, 1);
			Function_398(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_398(Global_30685[0]);
			Function_398(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_398(Global_30693[12]);
			Function_398(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_398(Global_30693[12]);
			Function_398(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_396(25, bParam2, 10);
			Function_398(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_398(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_398(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_396(13, bParam2, 4);
			Function_398(Global_30693[2]);
			Function_398(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_98(8))
				{
					Function_102(8, 0, 0, 1, 0);
				}
			}
			Function_398(Global_30685[0]);
			Function_389(9);
			Function_385(7, 1);
			Function_385(11, 1);
			Function_385(3, 1);
			Function_385(20, 1);
			Function_387(57, 1);
			break;
		
		case 0x0000002A:
			Function_396(2, bParam2, 4);
			Function_398(Global_30717[0]);
			Function_398(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_398(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_398(Global_30717[0]);
			Function_398(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_398(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_398(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_398(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_396(17, bParam2, 4);
			Function_398(Global_30723[0]);
			Function_398(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_100(15))
				{
					Function_66(15, 0, 1);
				}
			}
			Function_380(2, 26);
			Function_382(&(Global_29008[Global_30717[1]]), 256);
			Function_389(11);
			Function_398(Global_30717[1]);
			Function_398(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_398(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_398(Global_30717[1]);
			Function_398(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_398(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_398(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_398(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_398(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_398(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_398(Global_30717[1]);
			Function_378(11);
			Function_389(12);
			Global_16537[1121].f_40 = 0;
			Function_387(56, 1);
			if (!bParam2)
			{
				if (!Function_98(9))
				{
					Function_102(9, 0, 0, 0, 0);
				}
				if (!Function_98(10))
				{
					Function_102(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_356(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_378(int iParam0) //Position: 0x12D75 / 77173
{
	bool bVar0;
	
	if (!Function_89(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_379(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_379(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), false);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (!DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse", true);
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Global_16537[iParam021].f_40 = 6;
			Function_296(Global_16537[iParam021].f_48, 16, 0, 0);
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_SET_BOOL(bVar0, "PlayerHouse_NoHorse", true);
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_REMOVE(Global_16537[iParam021].f_80, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_379(bool bParam0, bool bParam1) //Position: 0x12EE4 / 77540
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

void Function_380(int iParam0, bool bParam1) //Position: 0x12F38 / 77624
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

void Function_381(var uParam0, int iParam1) //Position: 0x12F9F / 77727
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_382(var uParam0, int iParam1) //Position: 0x12FAE / 77742
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_383(var uParam0, int iParam1) //Position: 0x12FC5 / 77765
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_384() //Position: 0x12FD4 / 77780
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_9(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_385(int iParam0, int iParam1) //Position: 0x13004 / 77828
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_386(iParam0, iParam1);
	Function_17(Global_34573, 1, 4, 1);
	return 1;
}

int Function_386(int iParam0, int iParam1) //Position: 0x13077 / 77943
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_387(int iParam0, int iParam1) //Position: 0x130D3 / 78035
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_388(iParam0, iParam1);
	Function_17(Global_34573, 1, 4, 1);
	return 1;
}

int Function_388(int iParam0, int iParam1) //Position: 0x13144 / 78148
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_389(int iParam0) //Position: 0x1319E / 78238
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_89(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_395(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_395(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), true);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Function_39(468, 1, 0, 0);
			Function_380(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_103("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_296(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_102(14, 1, 0, 0, 0);
				Function_390(14, 1, 0, 0, 0);
			}
			if (!Function_96(0, 0, 1, 1))
			{
				Function_70(1);
				Function_68(1, 6);
			}
			else
			{
				Function_67();
			}
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_REMOVE(bVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			break;
		
		case 0x00000001:
			bVar1 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar1))
			{
				DECOR_REMOVE(bVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			Global_16537[iParam021].f_40 = 4;
			Function_103("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_39(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_380(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_390(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x1344B / 78923
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_101(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_112(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_99(bParam0, 2))
	{
		Function_39(456, 1, 0, 0);
		Function_97(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_103(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_110(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_97(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_96(0, 0, 1, 1))
			{
				Function_70(1);
				Function_68(1, 0);
			}
			else
			{
				Function_67();
			}
		}
		Function_106(bParam0);
		if (StackVal && !Function_9(((((!Function_105() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_9((((Function_105() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_95())
		{
			if (!Function_27(Global_76846, 2))
			{
				Function_17(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_392();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_391(3, bParam1);
				break;
			
			case 0x00000005:
				Function_391(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_391(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_391(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_391(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_391(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_380(2, 24);
				break;
			
			case 0x00000003:
				Function_380(2, 25);
				break;
			
			case 0x0000000F:
				Function_380(2, 26);
				break;
			
			case 0x0000000D:
				Function_380(2, 27);
				break;
			
			case 0x0000000E:
				Function_380(2, 28);
				break;
			}
	}
}

void Function_391(int iParam0, bool bParam1) //Position: 0x136E1 / 79585
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (bParam1 > 0)
	{
		(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_392() //Position: 0x1374C / 79692
{
	if (Function_101(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_394(Global_28180);
			Global_28180.f_8 = Function_393(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_394(Global_28180);
			Global_28180.f_8 = Function_393(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_393(int iParam0, int iParam1) //Position: 0x137C7 / 79815
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
					if (Function_23(6, 0) || Function_23(12, 0))
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
					vVar0 = { -2177.057f, 16.426f, 2626.285f };
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
					if (Function_7(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_23(5, 0))
					{
						vVar0 = { -4120.147f, 18.356f, 3039.531f };
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
					vVar0 = { -4178.186f, 32.616f, 4582.207f };
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
					if (Function_7(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_7(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_7(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_7(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_23(26, 0))
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
					if (Function_7(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_7(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_7(27) && iVar18)
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
					if (Function_7(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_7(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_7(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_7(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_23(17, 0) && iVar15)
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
					if (Function_7(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_23(6, 0) && Function_7(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_7(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_23(9, 0) && Function_7(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_7(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_23(8, 0) && iVar19)
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
	if (Function_86(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_86(StackVal, StackVal, vVar3))
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
	if (!Function_86(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_394(int iParam0) //Position: 0x143B9 / 82873
{
	int iVar0;
	int iVar1;
	
	if (!Function_101(iParam0))
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

void Function_395(bool bParam0, bool bParam1) //Position: 0x14408 / 82952
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

void Function_396(bool bParam0, bool bParam1, int iParam2) //Position: 0x14459 / 83033
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_397(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_375(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_3381 && iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_397(int iParam0, int iParam1) //Position: 0x144C7 / 83143
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_398(int iParam0) //Position: 0x144DA / 83162
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_400(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_383(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_39(473, 1, 0, 0);
		iVar0 = Function_399(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_39(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_39(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_39(476, 1, 0, 0);
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
		Function_380(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_380(7, 30);
	}
	if (Function_49(473) <= Function_50(473))
	{
		if (!Function_69())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_399(bool bParam0) //Position: 0x145D9 / 83417
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (!bParam0 != 4294967295 && Function_303(bParam0))
	{
		if (StackVal == 1)
		{
			bVar0 = bParam0;
		}
		else if (StackVal == 2)
		{
			bVar0 = Global_29155[bParam010];
		}
		else
		{
			bVar0 = Global_29155[bParam010];
			bVar0 = Global_29155[bVar010];
		}
	}
	return bVar0;
}

bool Function_400(var uParam0, int iParam1) //Position: 0x14631 / 83505
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_401(int iParam0, int iParam1) //Position: 0x1464D / 83533
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_25267[iVar058] != 128 || Global_25267[iVar058] != 64) && iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(Global_25267[iVar058].f_44) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(Global_25267[iVar058].f_44);
			Function_402(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_402(int iParam0) //Position: 0x146CF / 83663
{
	iParam0->f_92 = 0;
	iParam0->f_4 = 0;
	iParam0->f_12 = 4294967295;
	iParam0->f_16 = "";
	*(iParam0 + 20) = { 0.0f, 0.0f, 0.0f };
	*(iParam0 + 32) = { 0.0f, 0.0f, 0.0f };
	iParam0->f_44 = "";
	iParam0->f_56 = "";
	iParam0->f_48 = 4294967295;
	iParam0->f_52 = "";
	iParam0->f_88 = 0.0f;
	iParam0->f_76 = 0;
	return;
}

void Function_403() //Position: 0x1471D / 83741
{
	Function_404(512);
	Global_27761 = 0.0f;
	UNK_0x598815BD(Global_27761);
	if (IS_SCRIPT_VALID(Global_26316.f_64))
	{
		TERMINATE_SCRIPT(Global_26316.f_64);
	}
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		TERMINATE_SCRIPT(Global_26316.f_60);
	}
	return;
}

void Function_404(int iParam0) //Position: 0x14759 / 83801
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_405(int iParam0) //Position: 0x1476C / 83820
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_406(4, 0, 0);
		}
	}
	return;
}

void Function_406(int iParam0, int iParam1, int iParam2) //Position: 0x147D3 / 83923
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
		Function_407(Global_16524, bVar0, 1);
	}
	return;
}

void Function_407(int iParam0, bool bParam1, bool bParam2) //Position: 0x148B9 / 84153
{
	int iVar0;
	
	Function_409(iParam0);
	Function_343(bParam1);
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
	Function_408();
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

void Function_408() //Position: 0x14A32 / 84530
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_409(int iParam0) //Position: 0x14A3E / 84542
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

int Function_410(bool bParam0) //Position: 0x14A84 / 84612
{
	if (!Function_24(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

bool Function_411(int iParam0) //Position: 0x14A9F / 84639
{
	if (!Function_24(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 12) & 255;
}

void Function_412(var uParam0, int iParam1) //Position: 0x14ABF / 84671
{
	switch (uParam0->f_104)
	{
		case 0x00000001:
			if (!Function_23(iParam1, 0))
			{
				if (Function_414(uParam0))
				{
					if (!Global_3381)
					{
						uParam0->f_112 = 1;
					}
					return;
				}
			}
			break;
		
		case 0x00000003:
			if (IS_OBJECT_VALID(uParam0->f_44))
			{
				if (Function_283(uParam0->f_44, 1, 1, 0, 1, 0))
				{
					Global_3378 = 1;
					uParam0->f_112 = 1;
				}
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(uParam0->f_48))
			{
				if (Function_413(uParam0->f_48, Global_34573, 1, 1, 0, 1, 0))
				{
					Global_3378 = 1;
					uParam0->f_112 = 1;
				}
			}
			break;
	}
	return;
}

bool Function_413(bool bParam0, bool bParam1, int iParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x14B4F / 84815
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_VOLUME_AND_STOP_ACTOR");
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Invalid actor given to UPDATE_VOLUME_AND_STOP_ACTOR");
		return 0;
	}
	if (IS_ACTOR_RIDING_VEHICLE(bParam1))
	{
		return 0;
	}
	if (bParam5)
	{
		if (DECOR_CHECK_EXIST(bParam0, "gaveDismount"))
		{
			if (!IS_ACTOR_RIDING(bParam1) || ((uParam6 && GET_TASK_STATUS(GET_ACTOR_FROM_OBJECT(bParam1), 12) != 1) && (GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bParam0, "gaveDismount")) < 0.25f))
			{
				DECOR_REMOVE(bParam0, "gaveDismount");
				return 1;
			}
			return 0;
		}
	}
	if (IS_ACTOR_IN_VOLUME(bParam1, bParam0))
	{
		if (IS_ACTOR_PLAYER(bParam1))
		{
			SET_PLAYER_CONTROL(0, 0, iParam2, iParam2);
		}
		if (IS_PLAYER_DEADEYE(0) && uParam3)
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (bParam4)
		{
			Function_285(bParam1, 0);
		}
		else if (IS_ACTOR_RIDING(bParam1))
		{
			if (Function_8(bParam1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bParam1)))
			{
				SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(bParam1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
			}
			RESET_ACTOR_GAITS(GET_MOUNT(bParam1), 1);
		}
		else
		{
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
		}
		if (bParam5 && IS_ACTOR_RIDING(bParam1))
		{
			iVar0 = TASK_SEQUENCE_OPEN();
			if (Function_8(bParam1, 0) < 12.0f)
			{
				vVar1 = { 0.0f, 0.0f, -4.0f };
				UNK_0xB89CC342(bParam1, &vVar1, &uVar4);
				Function_284(&uVar4, &vVar1);
			}
			else
			{
				vVar1 = { 0.0f, 0.0f, -2.0f };
				UNK_0xB89CC342(bParam1, &vVar1, &uVar4);
				Function_284(&uVar4, &vVar1);
			}
			TASK_DISMOUNT(false, 1);
			TASK_GO_TO_COORD(0, &vVar1, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(Global_34573, iVar0);
			TASK_SEQUENCE_RELEASE(iVar0, 1);
			DECOR_SET_FLOAT(bParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
			Global_3414 = 1;
			return 0;
		}
		return 1;
	}
	return 0;
}

bool Function_414(int iParam0) //Position: 0x14DAF / 85423
{
	var uVar0;
	
	if (!iParam0->f_128 != 0)
	{
		uVar0 = iParam0->f_128;
		if (uVar0 & 1 >= 0)
		{
			if (!Function_23(iParam0->f_132, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 2 >= 0)
		{
			if (!Function_23(iParam0->f_136, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 4 >= 0)
		{
			if (!Function_23(iParam0->f_140, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 8 >= 0)
		{
			if (!Function_23(iParam0->f_144, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 1073741824 >= 0)
		{
			if (Global_30922 == 4294967295)
			{
				return 0;
			}
			PRINTINT(Global_30922);
			PRINTNL();
			iParam0->f_8 = Global_30922;
			Global_30922 = 4294967295;
		}
	}
	return 1;
}

void Function_415(var uParam0, int iParam1) //Position: 0x14E48 / 85576
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_416(var uParam0, int iParam1) //Position: 0x14E5F / 85599
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_417(int iParam0) //Position: 0x14E7B / 85627
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_418() //Position: 0x14E99 / 85657
{
	return;
}

void Function_419(int iParam0) //Position: 0x14E9F / 85663
{
	strcpy(iParam0 + 12, "EVT-RESP_Z", 16);
	*iParam0 = 112613;
	iParam0->f_4 = 85722;
	iParam0->f_8 = 85716;
	iParam0->f_28 = 1;
	return;
}

void Function_420() //Position: 0x14ED4 / 85716
{
	return;
}

int Function_421() //Position: 0x14EDA / 85722
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
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
	int iVar19;
	vector3 vVar20;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	struct<25> Var26;
	bool bVar51;
	bool bVar52;
	int iVar53;
	struct<8> Var54;
	vector3 vVar62;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	bool bVar72;
	bool bVar73;
	int iVar74;
	bool bVar75;
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	iVar0 = GET_NUM_EVENT_RESPONSES();
	iVar2 = 0;
	while (iVar2 < (iVar0 - 1))
	{
		bVar16 = GET_EVENT_FOR_RESPONSE(iVar2);
		switch (GET_EVENT_RESPONSE_ID(iVar2))
		{
			case 0x00000001:
				bVar11 = GET_EVENT_TARGET_AS_PHYSINST(bVar16);
				if (IS_PHYSINST_VALID(bVar11))
				{
					bVar12 = GET_OBJECT_FROM_PHYSINST(bVar11);
					if (!DECOR_CHECK_EXIST(bVar12, "nnoExplode"))
					{
						GET_OBJECT_POSITION(bVar12, &vVar3);
						bVar25 = GET_EVENT_PERPETRATOR(bVar16);
						if (IS_OBJECT_VALID(bVar25))
						{
							Function_29(&vVar3, "DynamiteExplosion", GET_ACTOR_FROM_OBJECT(bVar25), 0);
						}
						else
						{
							Function_29(&vVar3, "DynamiteExplosion", 0, 0);
						}
					}
					if (!DECOR_CHECK_EXIST(bVar12, "nnoDestroy"))
					{
						DESTROY_OBJECT(bVar12);
					}
					else
					{
						SET_PROP_HEALTH(bVar12, 10.0f);
						DECOR_REMOVE(bVar12, "nnoDestroy");
					}
				}
				break;
			
			case 0x00000002:
				bVar11 = GET_EVENT_TARGET_AS_PHYSINST(bVar16);
				if (IS_PHYSINST_VALID(bVar11))
				{
					bVar12 = GET_OBJECT_FROM_PHYSINST(bVar11);
					if (!DECOR_CHECK_EXIST(bVar12, "nnoExplode"))
					{
						GET_OBJECT_POSITION(bVar12, &vVar3);
						bVar25 = GET_EVENT_PERPETRATOR(bVar16);
						if (IS_OBJECT_VALID(bVar25))
						{
							Function_29(&vVar3, "FireBottleExplosion", GET_ACTOR_FROM_OBJECT(bVar25), 0);
						}
						else
						{
							Function_29(&vVar3, "FireBottleExplosion", 0, 0);
						}
					}
					if (!DECOR_CHECK_EXIST(bVar12, "nnoDestroy"))
					{
						DESTROY_OBJECT(bVar12);
					}
					else
					{
						SET_PROP_HEALTH(bVar12, 10.0f);
						DECOR_REMOVE(bVar12, "nnoDestroy");
					}
				}
				break;
			
			case 0x00000003:
				bVar11 = GET_EVENT_TARGET_AS_PHYSINST(bVar16);
				if (IS_PHYSINST_VALID(bVar11))
				{
					bVar12 = GET_OBJECT_FROM_PHYSINST(bVar11);
					if (!DECOR_CHECK_EXIST(bVar12, "nnoExplode"))
					{
						GET_OBJECT_POSITION(bVar12, &vVar3);
						bVar25 = GET_EVENT_PERPETRATOR(bVar16);
						if (IS_OBJECT_VALID(bVar25))
						{
							Function_29(&vVar3, "KeroseneLampExplosion", GET_ACTOR_FROM_OBJECT(bVar25), 0);
						}
						else
						{
							Function_29(&vVar3, "KeroseneLampExplosion", 0, 0);
						}
					}
					if (!DECOR_CHECK_EXIST(bVar12, "nnoDestroy"))
					{
						DESTROY_OBJECT(bVar12);
					}
					else
					{
						SET_PROP_HEALTH(bVar12, 10.0f);
						DECOR_REMOVE(bVar12, "nnoDestroy");
					}
				}
				break;
			
			case 0x00000004:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					DESTROY_OBJECT(bVar12);
				}
				break;
			
			case 0x00000005:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					bVar25 = GET_EVENT_PERPETRATOR(bVar16);
					if (IS_OBJECT_VALID(bVar25))
					{
						Function_29(&vVar3, "GrenadeExplosion", GET_ACTOR_FROM_OBJECT(bVar25), 1);
						Function_29(&vVar3, "FireBottleExplosion", GET_ACTOR_FROM_OBJECT(bVar25), 1);
					}
					else
					{
						Function_29(&vVar3, "GrenadeExplosion", 0, 1);
						Function_29(&vVar3, "FireBottleExplosion", 0, 1);
					}
					DESTROY_OBJECT(bVar12);
				}
				break;
			
			case 0x00000007:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					vVar3 = { 0.0f, 0.0f, 0.0f };
					vVar6 = { 0.0f, 0.0f, 0.0f };
					CREATE_GRINGO_ON_OBJECT(bVar12, "sliding_gate_gringo", "$/content/scripting/gringo/simplegringo/sliding_gate", vVar3, vVar6);
				}
				break;
			
			case 0x00000036:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (!IS_ACTOR_PLAYER(bVar10))
						{
							ACTOR_ENABLE_VARIABLE_MESH(bVar10, 0, false);
							ACTOR_ENABLE_VARIABLE_MESH(bVar10, 1, true);
							ACTOR_ENABLE_VARIABLE_MESH(bVar10, 2, true);
							ACTOR_ENABLE_VARIABLE_MESH(bVar10, 3, false);
							ACTOR_ENABLE_VARIABLE_MESH(bVar10, 4, false);
							Function_31(bVar10, 0);
							if (!Function_35(bVar10))
							{
								if (Function_541(bVar10) == GET_AMBIENT_LAYOUT())
								{
									Function_535(bVar10, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
								}
							}
						}
					}
				}
				break;
			
			case 0x00000008:
			case 0x00000009:
				break;
			
			case 0x0000000A:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (!Function_158(bVar12))
					{
						bVar35 = false;
						if (DECOR_CHECK_EXIST(bVar12, "corpse_loot_gringo"))
						{
							if (DECOR_GET_BOOL(bVar12, "corpse_loot_gringo") == 1)
							{
								bVar35 = true;
							}
							DECOR_REMOVE(bVar12, "corpse_loot_gringo");
						}
						else
						{
							bVar35 = true;
						}
						if (DECOR_CHECK_EXIST(bVar12, "ReturnCorpse"))
						{
							ADD_OBJECT_TO_OBJECTSET(bVar12, GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(bVar12, "ReturnCorpse")));
						}
						if (bVar35)
						{
							vVar3 = { 0.0f, 0.0f, 0.0f };
							vVar6 = { 0.0f, 0.0f, 0.0f };
							iVar36 = 0;
							vVar37 = { 0.0f, 0.0f, 0.0f };
							vVar40 = { 0.0f, 0.0f, 0.0f };
							vVar43 = { 0.0f, 0.0f, 0.0f };
							vVar46 = { 0.0f, 0.0f, 0.0f };
							if (!DECOR_CHECK_EXIST(bVar12, "NoEating"))
							{
								if (DECOR_CHECK_EXIST(bVar12, "AddCoyoteEatingToCorpse"))
								{
									DECOR_REMOVE(bVar12, "AddCoyoteEatingToCorpse");
									PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(bVar12, &iVar36, &vVar37, &vVar40, &vVar43, &vVar46);
									bVar49 = CREATE_GRINGO_ON_OBJECT(bVar12, Function_32(), "coyote_eating", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									DECOR_SET_OBJECT(bVar49, "GringoTarg", bVar12);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "AddBearEatingToCorpse"))
								{
									DECOR_REMOVE(bVar12, "AddBearEatingToCorpse");
									PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(bVar12, &iVar36, &vVar37, &vVar40, &vVar43, &vVar46);
									bVar49 = CREATE_GRINGO_ON_OBJECT(bVar12, Function_32(), "bear_eating", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									DECOR_SET_OBJECT(bVar49, "GringoTarg", bVar12);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "AddWolfEatingToCorpse"))
								{
									DECOR_REMOVE(bVar12, "AddWolfEatingToCorpse");
									PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(bVar12, &iVar36, &vVar37, &vVar40, &vVar43, &vVar46);
									bVar49 = CREATE_GRINGO_ON_OBJECT(bVar12, Function_32(), "wolf_eating", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									DECOR_SET_OBJECT(bVar49, "GringoTarg", bVar12);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "AddCougarEatingToCorpse"))
								{
									DECOR_REMOVE(bVar12, "AddCougarEatingToCorpse");
									PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(bVar12, &iVar36, &vVar37, &vVar40, &vVar43, &vVar46);
									bVar49 = CREATE_GRINGO_ON_OBJECT(bVar12, Function_32(), "cougar_eating", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									DECOR_SET_OBJECT(bVar49, "GringoTarg", bVar12);
								}
							}
							else
							{
								DECOR_REMOVE(bVar12, "NoEating");
							}
							if (Function_112(6))
							{
								if (!DECOR_CHECK_EXIST(bVar12, "nNoLooting"))
								{
									bVar17 = CREATE_GRINGO_IN_LAYOUT(Global_6289, "Loot", "Loot_Corpse", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									ATTACH_OBJECTS(bVar17, bVar12, "pelvis", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
									GIVE_OBJECT_TO_LAYOUT(bVar17, bVar12);
									GRINGO_SET_TARGET_OBJECT(GET_GRINGO_FROM_OBJECT(bVar17), bVar12, 1);
									if (DECOR_CHECK_EXIST(bVar12, "LootCorpse_CreateBlip"))
									{
										if (!DECOR_CHECK_EXIST(bVar12, "LootCorpse_WhichBlip"))
										{
											ADD_BLIP_FOR_OBJECT(bVar17, 325, 0.0f, 2, 0);
										}
										else
										{
											ADD_BLIP_FOR_OBJECT(bVar17, DECOR_GET_INT(bVar12, "LootCorpse_WhichBlip"), 0.0f, 2, 0);
											DECOR_REMOVE(bVar12, "LootCorpse_WhichBlip");
										}
										DECOR_REMOVE(bVar12, "LootCorpse_CreateBlip");
									}
									else
									{
										bVar50 = ADD_BLIP_FOR_OBJECT(bVar17, 456, 0.0f, 0, 0);
										SET_BLIP_MAX_DISTANCE(bVar50, 0.5f);
										UNK_0x1E98AFEC(bVar50, 1);
										SET_BLIP_SCALE(bVar50, 0.6f);
										SET_BLIP_COLOR(bVar50, 0.35f, 0.35f, 0.35f, 0.65f);
									}
									if (DECOR_CHECK_EXIST(bVar12, "lootCorpse_objSet"))
									{
										ADD_OBJECT_TO_OBJECTSET(bVar17, GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(bVar12, "lootCorpse_objSet")));
									}
								}
								else
								{
									DECOR_REMOVE(bVar12, "nNoLooting");
								}
							}
						}
					}
				}
				break;
			
			case 0x00000038:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					bVar51 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(bVar16));
					bVar52 = GET_ACTOR_FROM_OBJECT(bVar12);
					if (IS_ACTOR_VALID(bVar52))
					{
						iVar53 = GET_ACTOR_ENUM(bVar52);
						if (iVar53 <= 976 && iVar53 >= 1007)
						{
							if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
							{
								if (bVar12 == DECOR_GET_OBJECT(Global_34573, "HorseStolen"))
								{
									DECOR_SET_FLOAT(Global_34573, "PlayerHorse_DeathTime", GET_CURRENT_GAME_TIME());
								}
							}
							if (bVar52 == Global_12976.f_36)
							{
								if (!DECOR_CHECK_EXIST(Global_34573, "PlayerHorse_DeathTime"))
								{
									DECOR_SET_FLOAT(Global_34573, "PlayerHorse_DeathTime", GET_CURRENT_GAME_TIME());
								}
							}
							if (bVar52 == Global_12976.f_36)
							{
								DECOR_SET_BOOL(Global_34573, "TriggerNewHorse", true);
							}
						}
						if (bVar12 == GET_OBJECT_FROM_ACTOR(Global_34573) && bVar12 == GET_OBJECT_FROM_ACTOR(GET_MOUNT(Global_34573)))
						{
							if (IS_ACTOR_VALID(bVar51))
							{
								if (GET_ACTOR_ENUM(bVar51) <= 1155 && GET_ACTOR_ENUM(bVar51) >= 1176)
								{
									ADD_BLOOD_TO_ACTOR(bVar52, 0.1f, 1.1f, -0.1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar52, -0.1f, 1.1f, -0.1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar52, 0.0f, 1.3f, -0.1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar52, 0.0f, 1.2f, -0.1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar52, -0.1f, 1.25f, -0.1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar52, 0.0f, 1.1f, -0.1f, 0, 1, 0);
									if (DECOR_CHECK_EXIST(bVar12, "LastCarrierPlayer"))
									{
										if (!IS_ACTOR_MALE(bVar52))
										{
											if (CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), bVar12, 1065353216, 1117126656, 1, 1, 0))
											{
												if (!HAS_ACHIEVEMENT_BEEN_PASSED(20))
												{
													AWARD_ACHIEVEMENT(20);
												}
											}
										}
									}
									if (Function_8(bVar51, 0) <= 7.25f)
									{
										Var54 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_309("HitByTrain_FX") };
										Function_147(bVar12);
										vVar62 = { StackVal, StackVal, Function_147(bVar12) };
										if (!UNK_0x6745191B(CREATE_RMPTFX_EMITTER_IN_LAYOUT(Global_30616, &Var54, "script_train_squash_ped", vVar62), 0.0f, 0.0f, 0.0f))
										{
										}
										if (DECOR_CHECK_EXIST(bVar12, "CrimeHoldupBadguy"))
										{
											DECOR_SET_BOOL(Global_34573, "CHBadguy_Gone", true);
										}
										DESTROY_OBJECT(bVar12);
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x0000000B:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar10, "Hogtie")))
							{
								if (IS_ACTOR_PLAYER(bVar10))
								{
									AI_DONT_HARM_ACTOR(bVar10);
								}
								Function_30();
								Function_30();
								bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, "Hogtie", "$/content/scripting/gringo/simplegringo/hogtie", Function_30(), Function_30());
								if (IS_OBJECT_VALID(bVar15))
								{
									Function_30();
									Function_30();
									ATTACH_OBJECTS(bVar15, bVar10, "spine00", Function_30(), Function_30(), 4294967295);
								}
							}
						}
					}
				}
				break;
			
			case 0x00000034:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie")))
					{
						vVar3 = { 0.0f, 0.0f, 0.0f };
						vVar6 = { 0.0f, 0.0f, 0.0f };
						if (IS_ACTOR_VALID(bVar10) && IS_ACTOR_PLAYER(bVar10))
						{
							AI_DONT_HARM_ACTOR(bVar10);
						}
					}
				}
				break;
			
			case 0x00000027:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (GET_OBJECT_TYPE(bVar12) == 15)
				{
					if (GET_ACTOR_FROM_OBJECT(bVar12) == Global_34573)
					{
						DECOR_SET_BOOL(bVar12, "coplasso", true);
					}
				}
				break;
			
			case 0x0000000C:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (!Function_146(GET_ACTOR_FROM_OBJECT(bVar12)))
					{
						if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie_Pickup")))
						{
							Function_30();
							Function_30();
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar12, "Hogtie_Pickup", "$/content/scripting/gringo/simplegringo/hogtie_pickup", Function_30(), Function_30());
							if (IS_OBJECT_VALID(bVar15))
							{
								DECOR_SET_OBJECT(bVar12, "HogtiedGringoAttached", bVar15);
							}
						}
						bVar25 = GET_EVENT_PERPETRATOR(bVar16);
						if (IS_OBJECT_VALID(bVar25))
						{
							if (GET_ACTOR_FROM_OBJECT(bVar25) == Function_78())
							{
								Global_12976.f_136++;
								if (Global_12976.f_136 >= Function_57(262))
								{
									Function_56(262, Global_12976.f_136, 0);
								}
							}
						}
					}
				}
				break;
			
			case 0x0000000D:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (DECOR_CHECK_EXIST(bVar12, "lasso"))
					{
						DECOR_REMOVE(bVar12, "lasso");
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie_Pickup")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie_Pickup"));
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie"));
					}
				}
				break;
			
			case 0x00000010:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_animal");
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (IS_ACTOR_HORSE(GET_ACTOR_FROM_OBJECT(bVar12)) && ANIMAL_ACTOR_GET_DOMESTICATION(GET_ACTOR_FROM_OBJECT(bVar12)) == 0)
					{
						if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (!IS_SCRIPT_VALID(bLocal_1))
							{
								if (!IS_DEBUGKEY_DOWN(50))
								{
									Var33.f_4 = GET_ACTOR_FROM_OBJECT(bVar12);
									Var33 = GET_ACTOR_FROM_OBJECT(bVar13);
									bLocal_1 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/scripting/DesignerDefined/TameWildHorse", &Var33, 2, 0);
								}
							}
						}
					}
					if (DECOR_CHECK_EXIST(bVar12, "HorseLeash"))
					{
						DESTROY_OBJECT(DECOR_GET_OBJECT(bVar12, "HorseLeash"));
						DECOR_REMOVE(bVar12, "HorseLeash");
					}
					if (IS_ACTOR_HORSE(GET_ACTOR_FROM_OBJECT(bVar12)) || IS_ACTOR_MULE(GET_ACTOR_FROM_OBJECT(bVar12)))
					{
						if (ANIMAL_ACTOR_GET_DOMESTICATION(GET_ACTOR_FROM_OBJECT(bVar12)) != 1)
						{
							ACCESSORIZE_HORSE(GET_ACTOR_FROM_OBJECT(bVar12), 2);
							if (bVar13 == GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)))
							{
								if (bVar12 == GET_OBJECT_FROM_ACTOR(Global_12976.f_36))
								{
									iVar65 = Function_226(8, 0, 5);
									iVar66 = Function_225(iVar65);
									iVar67 = Function_226(7, 0, 5);
									Function_222(iVar67, FLOOR(GET_CURRENT_GAME_TIME()));
									if (iVar66 > 3600)
									{
										SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(bVar12), 100.0f);
									}
									else if (iVar66 > 900)
									{
										SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(bVar12), 85.0f);
									}
									else
									{
										SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(bVar12), 70.0f);
									}
								}
								else
								{
									SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(bVar12), 70.0f);
								}
							}
						}
					}
					if (bVar13 == GET_OBJECT_FROM_ACTOR(Global_34573))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bVar12)))
						{
							SET_BLIP_FLAG(GET_BLIP_ON_OBJECT(bVar12), 1024, 0);
						}
					}
				}
				break;
			
			case 0x00000011:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_animal");
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (bVar13 == GET_OBJECT_FROM_ACTOR(Global_34573))
					{
						if (bVar12 == GET_OBJECT_FROM_ACTOR(Global_12976.f_36))
						{
							iVar68 = Function_226(7, 0, 5);
							iVar69 = Function_225(iVar68);
							iVar69 = (ROUND(GET_CURRENT_GAME_TIME()) - iVar69);
							iVar70 = Function_226(8, 0, 5);
							iVar71 = Function_225(iVar70);
							bVar72 = (iVar69 + iVar71);
							if (bVar72 <= 0)
							{
								bVar72 = false;
							}
							Function_222(iVar70, bVar72);
						}
					}
				}
				break;
			
			case 0x0000000F:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
					{
						if (GET_OBJECT_TYPE(bVar13) == 15)
						{
							if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
								{
									if (Function_534(bVar12, bVar13))
									{
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x0000002E:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) != 15 && GET_OBJECT_TYPE(bVar12) != 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)) && IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar12)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)) && !Function_146(GET_ACTOR_FROM_OBJECT(bVar12)))
							{
								if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "BedStealthKill"))
								{
									Function_212(Function_531(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "BedStealthKill_R"))
								{
									Function_212(Function_528(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__GroundAttack"))
								{
									Function_212(Function_523(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "n__WallPin"))
								{
									Function_147(bVar13);
									*(&Var26 + 12) = { StackVal, StackVal, Function_147(bVar13) };
									Function_522(bVar13);
									Var26 = { StackVal, StackVal, Function_522(bVar13) };
									Function_212(Function_518(FIND_NAMED_LAYOUT("Formations"), 0, &Var26, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__ChairSmash"))
								{
									Function_212(Function_515(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 0, 0, 1));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__tknExecutionBack"))
								{
									switch (RAND_INT_RANGE(0, 5))
									{
										case 0x00000000:
											Function_212(Function_512(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_212(Function_509(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_212(Function_506(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_212(Function_503(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_212(Function_500(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000005:
											Function_212(Function_497(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__pistolExecution"))
								{
									switch (RAND_INT_RANGE(0, 5))
									{
										case 0x00000000:
											Function_212(Function_494(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_212(Function_491(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_212(Function_488(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_212(Function_485(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_212(Function_482(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000005:
											Function_212(Function_479(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__pistolKneelExecution"))
								{
									Function_212(Function_476(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__rifleExecution"))
								{
									switch (RAND_INT_RANGE(0, 4))
									{
										case 0x00000000:
											Function_212(Function_194(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_212(Function_191(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_212(Function_188(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_212(Function_185(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_212(Function_182(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__rifleKneelExecution"))
								{
									Function_212(Function_473(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__tknExecution"))
								{
									switch (RAND_INT_RANGE(0, 4))
									{
										case 0x00000000:
											Function_212(Function_470(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_212(Function_467(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_212(Function_464(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_212(Function_461(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_212(Function_458(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__tknKneelExecution"))
								{
									Function_212(Function_455(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
							}
						}
					}
				}
				break;
			
			case 0x0000002F:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				if (IS_OBJECT_VALID(bVar13) && IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
				{
					if (DECOR_CHECK_STRING(bVar16, "__HorseAgitated", "__BuckRider"))
					{
						PLAYER_RUMBLE("HorseBuckRumble", 4294967295, 0);
					}
					else
					{
						PLAYER_RUMBLE("HorseAgitatedRumble", 4294967295, 0);
					}
				}
				break;
			
			case 0x00000032:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				if (IS_OBJECT_VALID(bVar13))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							Function_147(bVar13);
							*(&Var26 + 12) = { StackVal, StackVal, Function_147(bVar13) };
							Function_522(bVar13);
							Var26 = { StackVal, StackVal, Function_522(bVar13) };
							Var26.f_24 = 0;
							Function_212(Function_452(FIND_NAMED_LAYOUT("Formations"), 0, &Var26, GET_PLAYER_ACTOR(0), bVar13, 1, 0, 0));
						}
					}
				}
				break;
			
			case 0x00000033:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				if (IS_OBJECT_VALID(bVar13))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							Function_147(bVar13);
							*(&Var26 + 12) = { StackVal, StackVal, Function_147(bVar13) };
							Function_522(bVar13);
							Var26 = { StackVal, StackVal, Function_522(bVar13) };
							Var26.f_24 = 0;
							Function_212(Function_449(FIND_NAMED_LAYOUT("Formations"), 0, &Var26, GET_PLAYER_ACTOR(0), bVar13, 1, 0, 0));
						}
					}
				}
				break;
			
			case 0x00000014:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							ENABLE_VEHICLE_SEAT(bVar10, 0, 0);
						}
					}
				}
				break;
			
			case 0x00000016:
				bVar12 = CREATE_PROP_IN_LAYOUT(bVar10, "maximGun", "$/fragments/p_gen_gatlingMaxim02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_OBJECT_VALID(bVar12))
						{
							iVar1 = 0;
							while (iVar1 <= GET_NUM_AVAILABLE_SEATS(bVar10))
							{
								ENABLE_VEHICLE_SEAT(bVar10, iVar1, 0);
								iVar1++;
							}
							SET_PROP_AI_OBSTACLE_ENABLED(bVar12, 0);
							SET_OBJECT_COLLIDE_WITH_OBJECT(bVar12, bVar10, 0);
							bVar11 = GET_PHYSINST_FROM_OBJECT(bVar10);
							if (IS_PHYSINST_VALID(bVar11))
							{
								GET_LOCATOR_OFFSETS(bVar11, "gattling_attach", &vVar3, &vVar6);
								vVar6.f_4 = (vVar6.y + 180.0f);
								ATTACH_OBJECTS(bVar12, bVar10, Function_32(), vVar3, vVar6, 4294967295);
								bVar15 = FIND_OBJECT_IN_OBJECT(bVar12, "shootBabyShoot");
								if (IS_OBJECT_VALID(bVar15))
								{
									DESTROY_OBJECT(bVar15);
								}
								CREATE_GRINGO_ON_OBJECT(bVar12, "shootBabyShoot", "stagegat_attach", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
							}
						}
					}
				}
				break;
			
			case 0x00000015:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							iVar1 = 0;
							while (iVar1 <= GET_NUM_AVAILABLE_SEATS(bVar10))
							{
								ENABLE_VEHICLE_SEAT(bVar10, iVar1, 0);
								iVar1++;
							}
							bVar12 = CREATE_PROP_IN_LAYOUT(bVar10, "maximGun", "$/fragments/p_gen_gatlingMaxim02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
							if (IS_OBJECT_VALID(bVar12))
							{
								SET_PROP_AI_OBSTACLE_ENABLED(bVar12, 0);
								SET_OBJECT_COLLIDE_WITH_OBJECT(bVar12, bVar10, 0);
								bVar11 = GET_PHYSINST_FROM_OBJECT(bVar10);
								if (IS_PHYSINST_VALID(bVar11))
								{
									GET_LOCATOR_OFFSETS(bVar11, "gattling_attach", &vVar3, &vVar6);
									vVar6.f_4 = (vVar6.y + 180.0f);
									ATTACH_OBJECTS(bVar12, bVar10, Function_32(), vVar3, vVar6, 4294967295);
									bVar15 = FIND_OBJECT_IN_OBJECT(bVar12, "shootBabyShoot");
									if (IS_OBJECT_VALID(bVar15))
									{
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "MaximShoot", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "MaximShootWagon", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "MaximShootTruck", 1);
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x00000017:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							iVar1 = 2;
							while (iVar1 < (GET_NUM_AVAILABLE_SEATS(bVar10) - 1))
							{
								ENABLE_VEHICLE_SEAT(bVar10, iVar1, 0);
								iVar1++;
							}
							bVar12 = CREATE_PROP_IN_LAYOUT(bVar10, "gatlingGun", "$/fragments/p_gen_gatlinggun01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
							if (IS_OBJECT_VALID(bVar12))
							{
								SET_PROP_AI_OBSTACLE_ENABLED(bVar12, 0);
								SET_OBJECT_COLLIDE_WITH_OBJECT(bVar12, bVar10, 0);
								bVar11 = GET_PHYSINST_FROM_OBJECT(bVar10);
								if (IS_PHYSINST_VALID(bVar11))
								{
									GET_LOCATOR_OFFSETS(bVar11, "gattling_attach", &vVar3, &vVar6);
									vVar6.f_4 = (vVar6.y + 180.0f);
									ATTACH_OBJECTS(bVar12, bVar10, Function_32(), vVar3, vVar6, 4294967295);
									bVar15 = FIND_OBJECT_IN_OBJECT(bVar12, "shootBabyShoot");
									if (IS_OBJECT_VALID(bVar15))
									{
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "GatlingShoot", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "GatlingShootCoach", 1);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "GatlingShootWagon", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "GatlingShootTruck", 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x00000018:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), 2, 0);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), 3, 0);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), 4, 0);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), 5, 0);
				break;
			
			case 0x00000019:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), 0, 0);
				break;
			
			case 0x0000001A:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_32(), "$/content/scripting/gringo/simplegringo/trainCarArmored", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x0000001B:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_32(), "$/content/scripting/gringo/simplegringo/trainCarBaggage", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x0000001C:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_32(), "$/content/scripting/gringo/simplegringo/trainCarBox01", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x0000001D:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_32(), "$/content/scripting/gringo/simplegringo/trainCarBox02", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x0000001E:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_32(), "$/content/scripting/gringo/simplegringo/trainCarBox03", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x0000001F:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_32(), "$/content/scripting/gringo/simplegringo/trainCarBox04", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000020:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_32(), "$/content/scripting/gringo/simplegringo/trainCarBox05", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000021:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_32(), "$/content/scripting/gringo/simplegringo/trainCarCaboose", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000022:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_32(), "$/content/scripting/gringo/simplegringo/trainCarCattle", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000023:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_32(), "$/content/scripting/gringo/simplegringo/trainCarFlat", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000024:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_32(), "$/content/scripting/gringo/simplegringo/trainCar01", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
							iVar1 = 0;
							while (iVar1 <= GET_NUM_AVAILABLE_SEATS(bVar10))
							{
								ENABLE_VEHICLE_SEAT(bVar10, iVar1, 1);
								iVar1++;
							}
						}
					}
				}
				break;
			
			case 0x00000025:
				if (Global_34208.f_1440)
				{
					bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
					if (IS_OBJECT_VALID(bVar12))
					{
						if (GET_OBJECT_TYPE(bVar12) == 15)
						{
							bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
							if (IS_ACTOR_VALID(bVar10))
							{
								bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_32(), "$/content/scripting/gringo/simplegringo/trainCarSteamer", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
							}
						}
					}
				}
				else
				{
					Global_34208.f_1440 = 1;
				}
				break;
			
			case 0x00000026:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_32(), "$/content/scripting/gringo/simplegringo/trainCarWood", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000028:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_animal");
				bVar23 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(bVar16));
				bVar9 = DECOR_GET_VECTOR(bVar16, "__hjk_perp_position", &vVar20);
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								if (!bVar9)
								{
									GET_OBJECT_POSITION(GET_ACTOR_FROM_OBJECT(bVar13), &vVar20);
								}
								if (Function_448(StackVal, StackVal, bVar12, vVar20))
								{
									Function_212(Function_444(FIND_NAMED_LAYOUT("Formations"), 0, bVar12, 1, 0, 0));
								}
								else
								{
									Function_212(Function_440(FIND_NAMED_LAYOUT("Formations"), 0, bVar12, 1, 0, 0));
								}
							}
						}
					}
				}
				break;
			
			case 0x00000029:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_vehicle");
				bVar23 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(bVar16));
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								Function_212(Function_436(FIND_NAMED_LAYOUT("Formations"), 0, bVar12, 1, 0, 0));
							}
						}
					}
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VEHICLE(bVar10))
						{
							if (GET_OBJECT_TYPE(bVar13) == 15)
							{
								bVar73 = GET_ACTOR_FROM_OBJECT(bVar13);
							}
							iVar1 = 0;
							while (iVar1 <= GET_NUM_AVAILABLE_SEATS(bVar10))
							{
								bVar24 = GET_ACTOR_IN_VEHICLE_SEAT(bVar10, iVar1);
								if ((IS_ACTOR_VALID(bVar23) && bVar24 == bVar73) && bVar24 == bVar23)
								{
									TASK_VEHICLE_LEAVE(bVar24);
								}
								iVar1++;
							}
						}
					}
				}
				break;
			
			case 0x0000002A:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_animal");
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								bVar14 = GET_OBJECT_FROM_ACTOR(GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar13)));
								bVar14 = bVar14;
								Function_212(Function_432(FIND_NAMED_LAYOUT("Formations"), 0, bVar14, bVar12, 1, 0, 0));
							}
						}
					}
				}
				break;
			
			case 0x0000002B:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_vehicle");
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								bVar14 = GET_OBJECT_FROM_ACTOR(GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar13)));
								iVar19 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar12));
								bVar18 = iVar19;
								switch (bVar18)
								{
									case 0x000004AD:
										Function_212(Function_427(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, bVar12, bVar14, 1, 0, 0));
										break;
									
									default:
										Function_212(Function_422(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, bVar12, bVar14, 1, 0, 0));
										break;
									}
								}
							}
						}
				}
				break;
			
			case 0x0000002C:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_animal");
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								bVar14 = GET_OBJECT_FROM_ACTOR(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(bVar13)));
								Function_212(Function_422(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, bVar12, bVar14, 1, 0, 0));
							}
						}
					}
				}
				break;
			
			case 0x0000002D:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_vehicle");
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								bVar14 = GET_OBJECT_FROM_ACTOR(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(bVar13)));
							}
						}
					}
				}
				break;
			
			case 0x00000037:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
					if (GET_LAST_ATTACKER(bVar10) == Global_34573)
					{
						iVar74 = Function_226(6, 3, 5);
						bVar75 = Function_225(iVar74);
						if (Global_29006 == Global_30640[0])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "armv_saloon_set")) || IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_ARMAddKO")))
							{
								Function_88(&bVar75, 1);
							}
						}
						else if (Global_29006 == Global_30658[1])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "ratv_saloon")))
							{
								Function_88(&bVar75, 2);
							}
						}
						else if (Global_29006 == Global_30668[1])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "thiv_saloon_set")) || IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_THIAddKO")))
							{
								Function_88(&bVar75, 4);
							}
						}
						else if (Global_29006 == Global_30685[0])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "escv_cantina_set")))
							{
								Function_88(&bVar75, 8);
							}
						}
						else if (Global_29006 == Global_30693[0])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "chuv_knockout_set")))
							{
								Function_88(&bVar75, 16);
							}
						}
						else if (Global_29006 == Global_30707[2])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "casv_bar_set")))
							{
								Function_88(&bVar75, 32);
							}
						}
						else if (Global_29006 == Global_30717[0])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "blkv_saloon_set")))
							{
								Function_88(&bVar75, 64);
							}
						}
						Function_222(iVar74, bVar75);
						if (bVar75 != (128 - 1) && !Function_9(bVar75, 128))
						{
							Function_88(&bVar75, 128);
							AWARD_ACHIEVEMENT(15);
						}
					}
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie")))
					{
						vVar3 = { 0.0f, 0.0f, 0.0f };
						vVar6 = { 0.0f, 0.0f, 0.0f };
						if (IS_ACTOR_VALID(bVar10) && IS_ACTOR_PLAYER(bVar10))
						{
							AI_DONT_HARM_ACTOR(bVar10);
						}
						bVar15 = CREATE_GRINGO_ON_OBJECT(bVar12, "Hogtie", "$/content/scripting/gringo/simplegringo/hogtie", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						ATTACH_OBJECTS(bVar15, bVar12, "spine00", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
					}
				}
				break;
			
			case 0x00000039:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (DECOR_CHECK_EXIST(bVar12, "lasso"))
					{
						DECOR_REMOVE(bVar12, "lasso");
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie_Pickup")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie_Pickup"));
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie"));
					}
					bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
					if (IS_ACTOR_VALID(bVar10) && IS_ACTOR_PLAYER(bVar10))
					{
						AI_CLEAR_DONT_HARM_ACTOR(bVar10);
					}
				}
				break;
			
			case 0x0000003A:
				bVar11 = GET_EVENT_TARGET_AS_PHYSINST(bVar16);
				if (IS_PHYSINST_VALID(bVar11))
				{
					bVar12 = GET_OBJECT_FROM_PHYSINST(bVar11);
					if (!DECOR_CHECK_EXIST(bVar12, "nnoExplode"))
					{
						GET_OBJECT_POSITION(bVar12, &vVar3);
						bVar25 = GET_EVENT_PERPETRATOR(bVar16);
						if (IS_OBJECT_VALID(bVar25))
						{
							Function_29(&vVar3, "DynamiteCrateExp", GET_ACTOR_FROM_OBJECT(bVar25), 0);
						}
						else
						{
							Function_29(&vVar3, "DynamiteCrateExp", 0, 0);
						}
					}
					DESTROY_OBJECT(bVar12);
				}
				break;
		}
		iVar2++;
	}
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 0;
}

bool Function_422(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7) //Position: 0x17B2B / 97067
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HijackHorseToWagon", 3, 1);
	}
	Function_423(&bVar0, bParam2, bParam3, bParam4);
	if (iParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_423(var uParam0, char* cParam1, var uParam2, var uParam3) //Position: 0x17BAF / 97199
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_426(&uVar0, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_425(&uVar0, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_424(&uVar0, uParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "CJAir", 0, 1, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 2, cParam1, "JackWagon_vehLoc", 1, 1, 180f);
}

void Function_424(var uParam0, bool bParam1) //Position: 0x17C2B / 97323
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 4.240117f, 2.848692f, -3.453501f, -14.51869f, 120.8944f, -0.096658f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.705376f, 1.356211f, -0.494339f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_425(var uParam0, bool bParam1) //Position: 0x17CAE / 97454
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.312839f, 2.04426f, -3.890313f, -11.40707f, -165.6106f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 1.292647f, 1.248807f, -0.071487f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_426(var uParam0, bool bParam1) //Position: 0x17D2D / 97581
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -3.382136f, 2.293721f, 0.74885f, -8.276146f, -68.90104f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.051506f, 1.75836f, -0.576088f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_427(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x17DAC / 97708
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HijackHorseToPrison", 3, 1);
	}
	Function_428(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else if (bParam6)
	{
		SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return bVar0;
}

void Function_428(var uParam0, char* cParam1, var uParam2, var uParam3) //Position: 0x17E25 / 97829
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_431(&uVar0, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_430(&uVar0, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_429(&uVar0, uParam2);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "CJAir", 4294967295, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 2, cParam1, "JackWagon_vehLoc", 4294967295, 0, 180f);
}

void Function_429(var uParam0, bool bParam1) //Position: 0x17E9A / 97946
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_OBJECTS(*uParam0, bParam1, Function_32(), 5.056644f, 3.927511f, -3.112992f, 2.874524f, 1.177293f, 3.10158f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.88904f, 2.422013f, -0.671586f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_430(var uParam0, bool bParam1) //Position: 0x17F2F / 98095
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_OBJECTS(*uParam0, bParam1, Function_32(), 0.312839f, 2.04426f, -3.890313f, 2.942502f, -0.251143f, -3.141593f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 1.292647f, 1.248807f, -0.071487f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_431(var uParam0, bool bParam1) //Position: 0x17FC4 / 98244
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_OBJECTS(*uParam0, bParam1, Function_32(), -3.382136f, 2.293721f, 0.74885f, -0.144446f, -1.20255f, 0.0f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.051506f, 1.75836f, -0.576088f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_432(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x1805A / 98394
{
	bool bVar0;
	
	if (bParam4)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HijackHorseToHorse", 2, 1);
	}
	Function_433(&bVar0, uParam2, uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_433(var uParam0, var uParam1, int iParam2) //Position: 0x180DC / 98524
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_435(&uVar0, uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_434(&uVar0, iParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.75f, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.5f, 1);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(uVar1, 1000.0f, 0);
	return;
}

void Function_434(var uParam0, bool bParam1) //Position: 0x18131 / 98609
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.577029f, 1.710976f, -3.825424f, -3.464217f, 169.0016f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -1.289642f, 1.484856f, -0.158455f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_435(var uParam0, bool bParam1) //Position: 0x181B0 / 98736
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.496739f, 1.711366f, -2.162416f, -5.032116f, 131.0492f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.087791f, 1.409592f, 0.088257f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_436(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1822F / 98863
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Hijack", 2, 1);
	}
	Function_437(&bVar0, uParam2);
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

void Function_437(var uParam0, int iParam1) //Position: 0x182A3 / 98979
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_439(&uVar0, iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_438(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 2.0f, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 2.0f, 1);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(uVar1, 2.0f, 0, 0);
	return;
}

void Function_438(var uParam0, bool bParam1) //Position: 0x182ED / 99053
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -3.366477f, 1.49934f, -2.612921f, 8.860391f, -121.5917f, 1.481497f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	return;
}

void Function_439(var uParam0, bool bParam1) //Position: 0x18355 / 99157
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.576806f, 2.573345f, -4.386736f, -12.39926f, 179.9947f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	return;
}

bool Function_440(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x183B9 / 99257
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HijackHorseLeft", 2, 1);
	}
	Function_441(&bVar0, uParam2);
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

void Function_441(var uParam0, int iParam1) //Position: 0x18436 / 99382
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_443(&uVar0, iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_442(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.25f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 0.9f, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.0f, 2);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(uVar1, 1000.0f, 0);
	return;
}

void Function_442(var uParam0, bool bParam1) //Position: 0x18497 / 99479
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -2.547432f, 1.293245f, -3.496428f, -2.252641f, -148.9353f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.300987f, 1.122006f, 0.23275f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_443(var uParam0, bool bParam1) //Position: 0x18516 / 99606
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.008554f, 1.956293f, -1.766058f, -4.570198f, -158.2257f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.208504f, 1.783894f, 0.236752f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_444(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x18595 / 99733
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HijackHorseRight", 2, 1);
	}
	Function_445(&bVar0, uParam2);
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

void Function_445(var uParam0, int iParam1) //Position: 0x18613 / 99859
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_447(&uVar0, iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_446(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.25f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 0.9f, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.0f, 2);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(uVar1, 1000.0f, 0);
	return;
}

void Function_446(var uParam0, bool bParam1) //Position: 0x18674 / 99956
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.547f, 1.293245f, -3.496428f, -2.252641f, -148.9353f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.300987f, 1.122006f, 0.23275f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_447(var uParam0, bool bParam1) //Position: 0x186F3 / 100083
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.009f, 1.956293f, -1.766058f, -4.570198f, -158.2257f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.208504f, 1.783894f, 0.236752f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_448(bool bParam0, vector3 vParam1) //Position: 0x18772 / 100210
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

bool Function_449(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x187B0 / 100272
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HorseFalling", 1, 1);
	}
	Function_450(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 1.0f, 4294967295, 0, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_450(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1882E / 100398
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_451(&uVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 2.5f, 0);
}

void Function_451(var uParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x1885F / 100447
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	vVar3 = { 0.0f, 0.0f, 0.0f };
	vVar6 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar3 = { 0.0f, 2.12f, -2.422f };
	UNK_0xF76F2BB3(&vVar3, bParam1, bParam1->f_24, 4);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar3, StackVal) };
	vVar6 = { 0.0f, -30.351f, -15.34f };
	UNK_0xF76F2BB3(&vVar6, bParam1, bParam1->f_24, 4);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar6, StackVal) };
	CAMERA_PROBE(&vVar0, vVar3, vVar6, uParam2, 23);
	vVar0.x = (vVar0.x + 0.0f);
	vVar0.f_4 = (vVar0.y + 1.0f);
	vVar0.f_8 = (vVar0.z + 0.0f);
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
}

bool Function_452(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x1894C / 100684
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "WagonCrash", 1, 1);
	}
	Function_453(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 1, 0, 1);
		}
	}
	return bVar0;
}

void Function_453(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x189C8 / 100808
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_454(&uVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 4.0f, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(uVar1, 1.0f, 0, 0.0f);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
}

void Function_454(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x18A05 / 100869
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	vVar0 = { 9.270768f, 7.965437f, 3.153887f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.407577f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.407577f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 507);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 129);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.407577f, 0.0f, 1);
}

bool Function_455(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x18AE6 / 101094
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknKneelExecution", 1, 1);
	}
	Function_456(&bVar0, uParam2);
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

void Function_456(var uParam0, char* cParam1) //Position: 0x18B65 / 101221
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_457(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_457(var uParam0, bool bParam1) //Position: 0x18BB4 / 101300
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.077684f, 1.688702f, 0.09395f, -16.10126f, 77.37032f, 0.009626f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_458(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x18C40 / 101440
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecution_04", 1, 1);
	}
	Function_459(&bVar0, uParam2);
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

void Function_459(var uParam0, char* cParam1) //Position: 0x18CBD / 101565
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_460(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_460(var uParam0, bool bParam1) //Position: 0x18D0C / 101644
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 33.73909f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.598154f, 1.524616f, -1.161397f, -8.163617f, -141.3147f, -16.12286f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_461(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x18D94 / 101780
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecution_03", 1, 1);
	}
	Function_462(&bVar0, uParam2);
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

void Function_462(var uParam0, char* cParam1) //Position: 0x18E11 / 101905
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_463(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_463(var uParam0, bool bParam1) //Position: 0x18E60 / 101984
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30.6607f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.785012f, 1.737865f, -0.003387f, -16.92512f, 84.24278f, 11.77102f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_464(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x18EE8 / 102120
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecution_02", 1, 1);
	}
	Function_465(&bVar0, uParam2);
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

void Function_465(var uParam0, char* cParam1) //Position: 0x18F65 / 102245
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_466(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_466(var uParam0, bool bParam1) //Position: 0x18FB4 / 102324
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.45036f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.033225f, 1.295071f, 0.859828f, 2.370899f, -21.91965f, 11.26406f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_467(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1903C / 102460
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecution_01", 1, 1);
	}
	Function_468(&bVar0, uParam2);
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

void Function_468(var uParam0, char* cParam1) //Position: 0x190B9 / 102585
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_469(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_469(var uParam0, bool bParam1) //Position: 0x19108 / 102664
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.45036f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.15953f, 1.084327f, -1.321146f, 8.784932f, 138.2104f, -8.502293f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_470(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x19190 / 102800
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecution", 1, 1);
	}
	Function_471(&bVar0, uParam2);
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

void Function_471(var uParam0, char* cParam1) //Position: 0x1920A / 102922
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_472(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_472(var uParam0, bool bParam1) //Position: 0x19259 / 103001
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 39.86723f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.731022f, 1.207424f, -0.59499f, -0.219386f, 98.4201f, -6.49419f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_473(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x192E1 / 103137
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "rifleKneelExecution", 1, 1);
	}
	Function_474(&bVar0, uParam2);
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

void Function_474(var uParam0, char* cParam1) //Position: 0x19362 / 103266
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_475(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_475(var uParam0, bool bParam1) //Position: 0x193B1 / 103345
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 44.73655f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.427828f, 1.442699f, -0.021391f, -11.90606f, 72.94113f, 5.7E-05f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_476(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1943D / 103485
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "pistolKneelExecution", 1, 1);
	}
	Function_477(&bVar0, uParam2);
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

void Function_477(var uParam0, char* cParam1) //Position: 0x194BF / 103615
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_478(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_478(var uParam0, bool bParam1) //Position: 0x1950E / 103694
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 44.73655f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.381174f, 1.428986f, -0.436662f, -11.62205f, 89.08679f, -0.000115f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.795814f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_479(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1959A / 103834
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "PistolExecution_05", 1, 1);
	}
	Function_480(&bVar0, uParam2);
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

void Function_480(var uParam0, char* cParam1) //Position: 0x1961A / 103962
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_481(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_481(var uParam0, bool bParam1) //Position: 0x19669 / 104041
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.57505f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.18887f, 1.61792f, 0.534385f, -15.9202f, 45.06617f, 3.526383f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_482(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x196F5 / 104181
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "PistolExecution_04", 1, 1);
	}
	Function_483(&bVar0, uParam2);
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

void Function_483(var uParam0, char* cParam1) //Position: 0x19775 / 104309
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_484(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_484(var uParam0, bool bParam1) //Position: 0x197C4 / 104388
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 44.49909f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.024016f, 0.554619f, 0.408258f, 30.14079f, 44.81871f, 3.92224f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_485(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x19850 / 104528
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "pistolExecution_03", 1, 1);
	}
	Function_486(&bVar0, uParam2);
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

void Function_486(var uParam0, char* cParam1) //Position: 0x198D0 / 104656
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_487(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_487(var uParam0, bool bParam1) //Position: 0x1991F / 104735
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 44.18989f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.108242f, 1.113226f, 0.091178f, 4.81359f, -74.79637f, -10.2132f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_488(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x199AB / 104875
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "pistolExecution_02", 1, 1);
	}
	Function_489(&bVar0, uParam2);
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

void Function_489(var uParam0, char* cParam1) //Position: 0x19A2B / 105003
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_490(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_490(var uParam0, bool bParam1) //Position: 0x19A7A / 105082
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.08115f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.736095f, 0.952384f, -1.123448f, 10.26351f, 112.517f, 12.43874f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_491(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x19B06 / 105222
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "pistolExecution_01", 1, 1);
	}
	Function_492(&bVar0, uParam2);
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

void Function_492(var uParam0, char* cParam1) //Position: 0x19B86 / 105350
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_493(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_493(var uParam0, bool bParam1) //Position: 0x19BD5 / 105429
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.68156f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.121333f, 0.883925f, 0.788724f, 13.18485f, 39.53941f, 6.69186f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_494(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x19C61 / 105569
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "pistolExecution", 1, 1);
	}
	Function_495(&bVar0, uParam2);
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

void Function_495(var uParam0, char* cParam1) //Position: 0x19CDE / 105694
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_496(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_496(var uParam0, bool bParam1) //Position: 0x19D2D / 105773
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 40.64627f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.833069f, 0.910306f, 0.392504f, 6.567528f, 60.56582f, 0.046868f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_497(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x19DB9 / 105913
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecutionBack_05", 1, 1);
	}
	Function_498(&bVar0, uParam2);
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

void Function_498(var uParam0, char* cParam1) //Position: 0x19E3A / 106042
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_499(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_499(var uParam0, bool bParam1) //Position: 0x19E89 / 106121
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.79285f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.367814f, 1.599156f, 1.072289f, -3.876976f, 19.19374f, 11.86928f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_500(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x19F11 / 106257
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecutionBack_04", 1, 1);
	}
	Function_501(&bVar0, uParam2);
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

void Function_501(var uParam0, char* cParam1) //Position: 0x19F92 / 106386
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_502(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_502(var uParam0, bool bParam1) //Position: 0x19FE1 / 106465
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 34.38961f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.2005f, 0.639449f, -0.77461f, 28.96044f, 100.1754f, -21.46019f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_503(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1A069 / 106601
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecutionBack_03", 1, 1);
	}
	Function_504(&bVar0, uParam2);
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

void Function_504(var uParam0, char* cParam1) //Position: 0x1A0EA / 106730
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_505(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_505(var uParam0, bool bParam1) //Position: 0x1A139 / 106809
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 31.09979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.772715f, 0.601514f, 0.683062f, 27.82014f, 33.3886f, -21.21926f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_506(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1A1C1 / 106945
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecutionBack_02", 1, 1);
	}
	Function_507(&bVar0, uParam2);
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

void Function_507(var uParam0, char* cParam1) //Position: 0x1A242 / 107074
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_508(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_508(var uParam0, bool bParam1) //Position: 0x1A291 / 107153
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 31.67371f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.261779f, 1.408872f, 1.275128f, 0.737339f, 39.14373f, -9.138619f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_509(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1A319 / 107289
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecutionBack_01", 1, 1);
	}
	Function_510(&bVar0, uParam2);
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

void Function_510(var uParam0, char* cParam1) //Position: 0x1A39A / 107418
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_511(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_511(var uParam0, bool bParam1) //Position: 0x1A3E9 / 107497
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 23.34922f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.193164f, -0.139685f, -0.718702f, 33.4145f, 100.2139f, 15.81386f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_512(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1A475 / 107637
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecutionBack", 1, 1);
	}
	Function_513(&bVar0, uParam2);
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

void Function_513(var uParam0, char* cParam1) //Position: 0x1A4F3 / 107763
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_514(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_514(var uParam0, bool bParam1) //Position: 0x1A542 / 107842
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 31.67371f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.158421f, 1.612226f, 0.177963f, -3.552166f, -69.33723f, -2.450368f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_515(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1A5CA / 107978
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "ChairSmash", 1, 1);
	}
	Function_516(&bVar0, uParam2);
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

void Function_516(var uParam0, char* cParam1) //Position: 0x1A642 / 108098
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_517(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__EndChairSmash", 0, 1, 180f);
	return;
}

void Function_517(var uParam0, bool bParam1) //Position: 0x1A682 / 108162
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -3.305018f, 1.08927f, 0.490524f, -4.4265f, -62.37619f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.451405f, 0.839948f, -1.002819f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_518(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x1A701 / 108289
{
	bool bVar0;
	
	if (bParam4)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "WallPin", 2, 1);
	}
	Function_519(&bVar0, uParam2, uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_519(var uParam0, var uParam1, char* cParam2) //Position: 0x1A778 / 108408
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_521(&uVar0, uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_520(&uVar0, uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.2f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 0, 1, 0.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 1, cParam2, "__EndWallPin", 2, 1, 180f);
	return;
}

void Function_520(var uParam0, bool bParam1) //Position: 0x1A7E3 / 108515
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -2.000206f, 1.399983f, -0.499981f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0.970139f, 1E-06f, 0.242549f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	return;
}

void Function_521(var uParam0, bool bParam1) //Position: 0x1A882 / 108674
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -2.004646f, 1.400002f, -0.423557f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0.999992f, 1E-06f, -0.004033f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	return;
}

vector3 Function_522(bool bParam0) //Position: 0x1A921 / 108833
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

bool Function_523(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1A948 / 108872
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "GroundAttack", 3, 1);
	}
	Function_524(&bVar0, uParam2);
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

void Function_524(var uParam0, char* cParam1) //Position: 0x1A9C2 / 108994
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_527(&uVar0, cParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_526(&uVar0, cParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_525(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.7f, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 0, 1, 0.75f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 1, cParam1, "__EndGroundAttack", 2, 0, 7.0f);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 1, 2, 2.0f, 3, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	return;
}

void Function_525(var uParam0, bool bParam1) //Position: 0x1AA6A / 109162
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -4.069192f, 1.679383f, 1.090629f, -10.92779f, -67.95651f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.043306f, 0.840791f, -0.539488f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

void Function_526(var uParam0, bool bParam1) //Position: 0x1AB18 / 109336
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.651182f, 1.344121f, 0.315187f, -21.06256f, -60.6819f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.047794f, 0.635919f, -0.585258f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

void Function_527(var uParam0, bool bParam1) //Position: 0x1ABC6 / 109510
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -4.069192f, 1.679383f, 1.090629f, -10.92779f, -67.95651f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.043306f, 0.840791f, -0.539488f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_528(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1AC74 / 109684
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "BedStealthKill_R", 1, 1);
	}
	Function_529(&bVar0, uParam2);
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

void Function_529(var uParam0, char* cParam1) //Position: 0x1ACF2 / 109810
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_530(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "BedStealthKill_R", 0, 1, 180f);
	return;
}

void Function_530(var uParam0, bool bParam1) //Position: 0x1AD33 / 109875
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 33.936f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.938993f, 2.898682f, 0.045806f, -51.88138f, 61.50959f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.123694f, 0.266305f, -0.939428f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_531(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1ADB2 / 110002
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "BedStealthKill", 1, 1);
	}
	Function_532(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else if (bParam4)
	{
		SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return bVar0;
}

void Function_532(var uParam0, char* cParam1) //Position: 0x1AE22 / 110114
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_533(&uVar0, cParam1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1.0f, 4294967295);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "BedStealthKill", 4294967295, 0, 180f);
	return;
}

void Function_533(var uParam0, bool bParam1) //Position: 0x1AE64 / 110180
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_OBJECTS(*uParam0, bParam1, Function_32(), -1.97754f, 2.195687f, -0.487989f, -0.712222f, -1.448415f, 0.0f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.182648f, 0.316525f, -0.753682f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_534(var uParam0, bool bParam1) //Position: 0x1AEF5 / 110325
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(bParam1, &vVar0);
	return Function_448(StackVal, StackVal, uParam0, vVar0);
}

void Function_535(bool bParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x1AF0C / 110348
{
	int iVar0;
	
	if (Function_35(bParam0) && !Function_33(bParam0, 1))
	{
		LOG_ERROR("Calling MAKE_ACTOR_ZOMBIE() on a CUSTOM ZOMBIE! Don't do that!");
		return;
	}
	TURN_ACTOR_INTO_ZOMBIE(bParam0, iParam1);
	if (iParam2 == 4294967294 && iParam3 == 4294967294)
	{
		if (iParam2 == 4294967295)
		{
			iParam2 = RAND_INT_RANGE(0, 4);
		}
		if (iParam3 == 4294967295)
		{
			iParam3 = RAND_INT_RANGE(0, 4);
		}
		if (!ADD_ZOMBIE_TO_ACTOR(bParam0, iParam2, iParam3))
		{
			LOG_ERROR("MAKE_ACTOR_ZOMBIE: Failed to apply bloody head/body textures!");
		}
	}
	if (bParam6)
	{
		DEEQUIP_ACCESSORY(bParam0, 0);
	}
	if (bParam7)
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	}
	Function_539(bParam0);
	DECOR_SET_BOOL(bParam0, "Zombie", true);
	Function_538(bParam0);
	SET_ACTOR_ALLOW_DISARM(bParam0, 0);
	SET_CRIPPLE_ENABLE(bParam0, 0);
	SET_CRIPPLE_FLAG(bParam0, 0);
	SET_ALLOW_COLD_WEATHER_BREATH(bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(bParam0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bParam0, 1);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.0f, 1.115f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 15.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 155.0f);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bParam0, 0, 0);
	iVar0 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
	if (AI_PREDICATE_IS_VALID(iVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, iVar0, 1);
	}
	if (iParam1 <= 1204 && iParam1 >= 1213)
	{
		DECOR_SET_BOOL(bParam0, "FastZombie", true);
	}
	else if (iParam1 <= 1214 && iParam1 >= 1221)
	{
		DECOR_SET_BOOL(bParam0, "BruiserZombie", true);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 12.5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 12.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 0.5f);
	}
	SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(bParam0, "head");
	if (iParam1 <= 1214 && iParam1 >= 1221)
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2030.0f, 1);
	}
	else
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2020.0f, 1);
	}
	Function_536(bParam0, uParam4, uParam5);
}

void Function_536(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1B16F / 110959
{
	switch (bParam1)
	{
		case 0x00000000:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "zombie/PlayDead"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "zombie/PlayDead");
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "zombie/GroundSpawn"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "zombie/GroundSpawn");
			}
			break;
	}
	if (bParam1 != 4294967295)
	{
		if (bParam2)
		{
			Function_537(bParam0, bParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(bParam0);
			SET_ALLOW_EXECUTE(bParam0, 0);
		}
	}
	return;
}

void Function_537(bool bParam0, int iParam1, bool bParam2) //Position: 0x1B221 / 111137
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	
	SET_ALLOW_EXECUTE(bParam0, 1);
	AI_CLEAR_DONT_HARM_ACTOR(bParam0);
	switch (iParam1)
	{
		case 0x00000001:
			GET_POSITION(bParam0, &vVar0);
			GET_ACTOR_AXIS(bParam0, &vVar3, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.75f, 0.75f, 0.75f), StackVal, StackVal) };
			FIND_GROUND_INTERSECTION(&vVar0, 10.0f, &vVar3, &vVar6);
			vVar3.f_4 = (vVar3.y + 0.05f);
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_32(), "script_zombie_emerge", vVar3);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_30();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_32(), vVar3, Function_30());
				SNAP_OBJECT_TO_GROUND(bVar10, 2.5f, 1, 1092616192);
				GET_OBJECT_ORIENTATION(bVar10, &vVar6);
				DESTROY_OBJECT(bVar10);
				UNK_0x6745191B(bVar9, vVar6);
			}
			break;
		
		case 0x00000002:
			GET_POSITION(bParam0, &vVar0);
			GET_ACTOR_AXIS(bParam0, &vVar3, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.75f, 0.75f, 0.75f), StackVal, StackVal) };
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_32(), "script_zombie_emerge", vVar0);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_30();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_32(), vVar0, Function_30());
				SNAP_OBJECT_TO_GROUND(bVar10, 2.5f, 1, 1092616192);
				GET_OBJECT_ORIENTATION(bVar10, &vVar6);
				DESTROY_OBJECT(bVar10);
				UNK_0x6745191B(bVar9, vVar6);
			}
			break;
	}
	if (!bParam2)
	{
		if (!DECOR_CHECK_EXIST(bParam0, "WakeUp"))
		{
			DECOR_SET_BOOL(bParam0, "WakeUp", true);
		}
	}
	else if (!DECOR_CHECK_EXIST(bParam0, "WakeUpFast"))
	{
		DECOR_SET_BOOL(bParam0, "WakeUpFast", true);
	}
	return;
}

void Function_538(bool bParam0) //Position: 0x1B3D1 / 111569
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", true);
	}
	return;
}

void Function_539(bool bParam0) //Position: 0x1B405 / 111621
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(bParam0, 0.4f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.6f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bParam0, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 3.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 4, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 1, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 36, 0.75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 42, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 58, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 61, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 50, -0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 51, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 52, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 8, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(bParam0, 0.0f);
	Function_540(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_540(var uParam0, bool bParam1) //Position: 0x1B769 / 112489
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(uParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

int Function_541(bool bParam0) //Position: 0x1B78B / 112523
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

void Function_542() //Position: 0x1B7E5 / 112613
{
	return;
}

void Function_543(int iParam0) //Position: 0x1B7EB / 112619
{
	strcpy(iParam0 + 12, "AMBIENT-MAIDEN", 16);
	*iParam0 = 112741;
	iParam0->f_4 = 112682;
	iParam0->f_8 = 112676;
	iParam0->f_28 = 1;
	return;
}

void Function_544() //Position: 0x1B824 / 112676
{
	return;
}

int Function_545() //Position: 0x1B82A / 112682
{
	bool bVar0;
	
	if (!IS_ACTOR_ALIVE(Function_78()))
	{
		return 0;
	}
	bVar0 = VDIST(Global_34574, vLocal_82);
	if (bVar0 < 5.0f && IS_ACTOR_VALID(Function_78()))
	{
		AMBIENT_SET_SCAN_CENTER_PLAYER();
		vLocal_82 = { StackVal, StackVal, Global_34574 };
	}
	return 0;
}

void Function_546() //Position: 0x1B865 / 112741
{
	Function_547();
	return;
}

void Function_547() //Position: 0x1B86E / 112750
{
	AMBIENT_SET_UPDATES_ENABLED(1);
	AMBIENT_SET_POINT_SPACING(4.5f);
	AMBIENT_SET_SLOPE_VALUES(0.985f, 0.94f, 0.85f, 0.75f);
	if (IS_ACTOR_VALID(Global_34573))
	{
		AMBIENT_SET_SCAN_CENTER_PLAYER();
		vLocal_82 = { StackVal, StackVal, Global_34574 };
	}
	else
	{
		AMBIENT_SET_SCAN_CENTER(Global_34165);
		vLocal_82 = { StackVal, StackVal, Global_34165 };
	}
	return;
}

