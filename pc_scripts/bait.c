//Decompiled with MagicRDR v1.0
//Function Count : 84
//Statics Count : 13
//Natives Count : 185
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	struct<2> Local_7 = { 0, 0 } ;
	var uLocal_9 = 0;
	int iLocal_10 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	
	iLocal_2 = 0;
	iLocal_3 = 0;
	iLocal_4 = 1;
	iLocal_10 = 0;
	bVar0 = false;
	while (!(bVar0 || IS_EXITFLAG_SET()))
	{
		if (iLocal_2 == 0)
		{
			if (UNK_0x7BF01CCB() == 4)
			{
				iLocal_2 = 1;
			}
			else if (UNK_0x7BF01CCB() != 1)
			{
				PRINTSTRING("GRINGOITEM State: ");
				PRINTINT(UNK_0x7BF01CCB());
				PRINTNL();
				LOG_ERROR("GRINGOITEM is in an unknown state. Check spew for state number");
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
			}
		}
		else
		{
			bVar0 = Function_48(&iScriptParam_0);
		}
		GRINGO_WAIT(0);
	}
	if (!bVar0 && iLocal_2 > 4)
	{
		iLocal_2 = 4;
		Function_48(&iScriptParam_0);
	}
	UNK_0x8EA46104(iLocal_3);
	if (!Function_47(0, 0, 1, 1) && DECOR_GET_BOOL(&Global_54076, "ItemSave"))
	{
		Function_2(1);
		Function_1(1, 0);
	}
	DECOR_REMOVE(&Global_54076, "ItemSave");
	iLocal_3 = 0;
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x113 / 275
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = uParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_2(bool bParam0) //Position: 0x152 / 338
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_34();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_4();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_3(&Global_99144, 1);
		Function_3(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x1A7 / 423
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_4() //Position: 0x1BD / 445
{
	Function_32();
	Function_31();
	Function_31();
	Function_30();
	Function_30();
	Function_29();
	Function_29();
	Function_12(0);
	Function_12(0);
	Function_9();
	Function_8();
	Function_7();
	Function_6();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_5();
	return;
}

void Function_5() //Position: 0x208 / 520
{
	Global_54086[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_54086[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_54086[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_54086[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_54086[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_54086[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_54086[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_54086[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_54086[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_54086[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_54086[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_54086[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_54086[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_54086[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_54086[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_54086[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_54086[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_54086[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_54086[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_54086[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_54086[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_6() //Position: 0x30E / 782
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_39290[1])
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
	Global_131716 = fVar0;
	return;
}

void Function_7() //Position: 0x341 / 833
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
					Global_119632[iVar23] = iVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119632[iVar13] = 4294967295;
		*(&Global_119632[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	return;
}

void Function_8() //Position: 0x4D4 / 1236
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
					Global_119329[iVar23] = iVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119329[iVar13] = 4294967295;
		*(&Global_119329[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	Global_119631 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_119631 == 4294967295 && Global_119631 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_119631) != 2)
		{
			Global_119631 = 4294967295;
		}
	}
	return;
}

void Function_9() //Position: 0x68D / 1677
{
	Function_10(&Global_42918, 1, 0);
	return;
}

void Function_10(struct<2317> Param0) //Position: 0x69B / 1691
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_11();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, iVar8) || uParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(&uVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (Param0.f_1060 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, &uVar0);
			if (iVar9 != iVar7)
			{
				(*&Param0 + 92)[iVar1] = iVar9;
				(&Param0 + 92[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 92)[iVar1], &uVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			Param0.f_88 = GET_NUM_ACCESSORIES_IN_INVENTORY(&uVar0);
			iVar2 = 0;
			while (iVar2 < (Param0.f_88 - 1))
			{
				Param0[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, &uVar0);
				iVar2++;
			}
		}
		iVar3 = 0;
		while (iVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[iVar3] = _GET_AMMO_AMOUNT(&uVar0, iVar3, 0);
			iVar3++;
		}
		Param0.f_1272 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			iVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, iVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
				{
					(*&Param0 + 1208)[iVar4] = iVar8;
					Param0.f_1272 = iVar8;
				}
			}
			iVar4++;
		}
		Param0.f_2316 = GET_NUM_COLLECTABLES_IN_INVENTORY(&uVar0);
		iVar1 = 0;
		while (iVar1 < (Param0.f_2316 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, &uVar0);
			(*&Param0 + 1284)[iVar1] = uVar11;
			(&Param0 + 1284[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 1284)[iVar1], &uVar0);
			iVar1++;
		}
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (iVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, iVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (iVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, iVar13);
		}
		else
		{
			Param0.f_1280 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*&Param0 + 2320)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

var Function_11() //Position: 0x8B8 / 2232
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_12(int iParam0) //Position: 0x8CD / 2253
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
					iVar2 = ((Function_28((50 + iVar4)) + Function_28((183 + iVar4))) + Function_28((90 + iVar4)));
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
	Function_13(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_13(int iParam0, bool bParam1, bool bParam2) //Position: 0x974 / 2420
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_27(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_26(iParam0);
	if (&bParam2)
	{
		Function_14(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_14(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0xC10 / 3088
{
	char* cVar0[32];
	bool bVar8;
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
	strcpy(&Global_55480[iParam016] + 32, "", 32);
	if (&bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_55480[iParam016] + 32, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_55480[iParam016].f_124 != 3 || Global_55480[iParam016].f_96 != 21)
	{
		stradd(&Global_55480[iParam016] + 32, "$", 32);
	}
	stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
	switch (Global_55480[iParam016].f_96)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_55480[iParam016] + 32, "", 32);
			break;
		
		case 0x00000016:
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_55480[iParam016] + 32, " days", 32);
						}
						else
						{
							stradd(&Global_55480[iParam016] + 32, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar4), 32);
						stradd(&Global_55480[iParam016] + 32, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
						stradd(&Global_55480[iParam016] + 32, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
					stradd(&Global_55480[iParam016] + 32, " min", 32);
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_55480[iParam016] + 32, " ", 32);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
				stradd(&Global_55480[iParam016] + 32, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			fParam2 = (fParam2 * 3,28084f);
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
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_55480[iParam016] + 32, " mi", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " days", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_55480[iParam016] + 32, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_25(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		iVar21 = 0;
		switch (Global_55480[iParam016].f_96)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (&bParam6)
				{
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_24(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_24(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_22(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_19(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_17(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_16(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_15(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_15() //Position: 0x124E / 4686
{
	int iVar0;
	
	return &iVar0;
}

var Function_16(int iParam0) //Position: 0x1257 / 4695
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_17(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1268 / 4712
{
	char* cVar0[32];
	
	if (&bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_18("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_18("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_18("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_18(char* cParam0) //Position: 0x135F / 4959
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_19(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x137A / 4986
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_21(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_20(Function_21(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_20(int iParam0, int iParam1) //Position: 0x13E1 / 5089
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_21(int iParam0, int iParam1) //Position: 0x13F3 / 5107
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_22(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1405 / 5125
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
	if (Global_55480[iParam016].f_112 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_55480[iParam016].f_112;
	}
	fVar1 = Global_55480[iParam016].f_108;
	if (((Function_23(iParam0) != 19 || Function_23(iParam0) != 17) || Function_23(iParam0) != 10) || Function_23(iParam0) != 9)
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_23(int iParam0) //Position: 0x1539 / 5433
{
	return Global_55480[iParam016].f_96;
}

float Function_24(int iParam0) //Position: 0x1548 / 5448
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_25(int iParam0) //Position: 0x1581 / 5505
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_26(int iParam0) //Position: 0x15BE / 5566
{
	if (Global_55480[iParam016].f_112 == 0.0f)
	{
		if (Global_54086[iParam0] < Global_55480[iParam016].f_112)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_55480[iParam016].f_108 == 0.0f)
	{
		if (Global_54086[iParam0] > Global_55480[iParam016].f_108)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_27(int iParam0, float fParam1, bool bParam2) //Position: 0x1758 / 5976
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_55480[iParam016].f_100;
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
			Global_54086[iVar1] = (Global_54086[iVar1] + 1.0f);
		}
		else
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
	}
	if (Global_55480[iVar116].f_112 == 0.0f)
	{
		if (Global_54086[iVar1] < Global_55480[iVar116].f_112)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_112;
		}
	}
	if (Global_55480[iVar116].f_108 == 0.0f)
	{
		if (Global_54086[iVar1] > Global_55480[iVar116].f_108)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_108;
		}
	}
	return 1;
}

int Function_28(int iParam0) //Position: 0x199C / 6556
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

struct<8> Function_29() //Position: 0x19DD / 6621
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
		iVar2 = ((Function_28((50 + iVar3) + 15) + Function_28((183 + iVar3) + 15)) + Function_28((90 + iVar3) + 15));
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
	Function_13(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_30() //Position: 0x1A66 / 6758
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
			iVar2 = ((Function_28((50 + iVar3) + 8) + Function_28((183 + iVar3) + 8)) + Function_28((90 + iVar3) + 8));
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
	Function_13(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_31() //Position: 0x1AFD / 6909
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
		iVar2 = ((Function_28((50 + iVar3)) + Function_28((183 + iVar3))) + Function_28((90 + iVar3)));
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
	Function_13(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_32() //Position: 0x1B7C / 7036
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_33(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_13(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_33(int iParam0, float fParam1, int iParam2) //Position: 0x1BB9 / 7097
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + fParam1);
	Function_27(iParam0, fParam1, 1);
	Function_26(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_14(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_34() //Position: 0x1DC5 / 7621
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_46())
	{
		Function_42(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_42(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_36(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_36(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_35(StackVal, Var0))
	{
		Var0 = Global_54078;
		Var0.f_4 = (StackVal + 0,5f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	}
	else
	{
		Global_53524 = Var0;
	}
	Global_53524.f_208 = Global_53524.f_12;
	(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_35(vector3 vParam0) //Position: 0x1E7C / 7804
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_36(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x1E94 / 7828
{
	int iVar0;
	
	iVar0 = Function_40(&uParam2, &fParam3);
	if (Function_39(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_38(&Global_99144, 1);
			Function_3(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_38(&Global_99144, 2);
			Function_3(&Global_99144, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				uParam1 = 0;
			}
			else
			{
				uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			uParam0 = 89,88f;
			return StackVal, Vector(-2158,348f, 19,944f, 2597,452f);
		}
		uParam0 = Global_26200[iVar014].f_12;
		return StackVal, Global_26200[iVar014];
	}
	if (Global_26651)
	{
		Function_38(&Global_99144, 2);
		Function_3(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_37();
	return StackVal, Function_37();
}

struct<8> Function_37() //Position: 0x1F8C / 8076
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_38(var uParam0, int iParam1) //Position: 0x1F96 / 8086
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_39(int iParam0) //Position: 0x1FA7 / 8103
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_40(bool bParam0, bool bParam1) //Position: 0x1FBD / 8125
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_26200)
	{
		if (((Global_26200[iVar314].f_40 != 3 || Global_26200[iVar314].f_40 != 4) || (iVar3 != 15 && !&bParam0)) && (Global_26200[iVar314].f_52 != Global_43787 || bParam1))
		{
			if (Global_6606 || iVar3 == 6)
			{
				fVar2 = Function_41(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_26651)
	{
		fVar2 = Function_41(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_39(iVar0) && !&bParam1)
	{
		iVar0 = Function_40(&bParam0, 1);
	}
	return iVar0;
}

float Function_41(struct<2> Param0, struct<2> Param2) //Position: 0x2089 / 8329
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_42(float fParam0, int iParam1) //Position: 0x20A6 / 8358
{
	float fVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	float fVar7;
	
	fParam0 = fParam0;
	fVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_45(&Global_54076, &Var3);
	if (!Function_43(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 90.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -130,87f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 90.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -135,09f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 206,26f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 0.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 106,17f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 343,64f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 165,38f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 0.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -97,3f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -6,71f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -90.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -90.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -90.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -180.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 22,55f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -135.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -104,45f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -90.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 270.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 59,3f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 20,74f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = 94,65f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -135.0f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	if (!Function_43(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		fVar7 = VDIST(Var3, Var5);
		if (fVar7 > fVar0)
		{
			fParam0 = -39,9f;
			fVar0 = fVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	fVar7 = VDIST(Var3, Var5);
	if (fVar7 > fVar0)
	{
		fVar0 = fVar7;
		Var1 = Var5;
	}
	Function_38(&Global_99144, 2);
	Function_3(&Global_99144, 1);
	iParam1 = 0;
	if (Function_35(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_43(int iParam0) //Position: 0x28D2 / 10450
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_44(uVar0, 0x1000000) || Function_44(uVar0, 0x2000000)) || Function_44(uVar0, 0x4000000)) || !Function_44(uVar0, 0x10000000));
}

bool Function_44(var uParam0, int iParam1) //Position: 0x290D / 10509
{
	return (uParam0 && iParam1) == 0;
}

void Function_45(var uParam0, var uParam1) //Position: 0x291A / 10522
{
	GET_POSITION(&uParam0, &uParam1);
	return;
}

bool Function_46() //Position: 0x2929 / 10537
{
	if (Function_44(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_47(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2944 / 10564
{
	uParam0 = &uParam0;
	if (Global_6623 && !&iParam1 != 1)
	{
		return 1;
	}
	if (Global_6625 && !&iParam1 != 2)
	{
		return 1;
	}
	if (Global_6635 && !&iParam1 != 6)
	{
		return 1;
	}
	if (Global_6627 && !&iParam1 != 4)
	{
		return 1;
	}
	if (Global_6636 && uParam2)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (Global_6628 && !&iParam1 != 3)
	{
		return 1;
	}
	if (Global_93258 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

int Function_48(int iParam0) //Position: 0x29F3 / 10739
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uVar0 = GET_TARGET_ACTOR();
	iVar1 = 1;
	switch (iLocal_2)
	{
		case 0x00000000:
			iVar1 = 0;
			break;
		
		case 0x00000001:
			if (Function_83(&iParam0, &uVar0))
			{
				Function_56(&iParam0, &uVar0, &iLocal_3);
				iLocal_2 = 2;
			}
			iVar1 = 0;
			break;
		
		case 0x00000002:
			uVar2 = Function_55(&iParam0);
			if (IS_GRINGO_COMPONENT_VALID(&uVar2) && iLocal_4)
			{
				Function_51(&iParam0, &uVar0, &iLocal_3);
				iLocal_2 = 3;
			}
			else
			{
				iLocal_2 = 3;
			}
			iVar1 = 0;
			break;
		
		case 0x00000003:
			if (!Function_50(&iParam0, &uVar0, &iLocal_3))
			{
				iLocal_2 = 4;
			}
			iVar1 = 0;
			break;
		
		case 0x00000004:
			Function_49(&iParam0, &uVar0, &iLocal_3);
			iLocal_4 = 1;
			iLocal_2 = 0;
			break;
	}
	return iVar1;
}

void Function_49(int iParam0, var uParam1, int iParam2) //Position: 0x2AAA / 10922
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = Function_55(&iParam0);
	ENABLE_USE_CONTEXTS(1);
	if (IS_GRINGO_COMPONENT_VALID(&iVar0))
	{
		GRINGO_UNLOAD_ANIMATION_FOR_USER(&iVar0, GET_OBJECT_FROM_ACTOR(&uParam1));
	}
	return;
}

bool Function_50(int iParam0, int iParam1, int iParam2) //Position: 0x2ADA / 10970
{
	int iVar0;
	
	iVar0 = Function_55(&iParam0);
	if (IS_GRINGO_COMPONENT_VALID(&iVar0) && iParam2)
	{
		if (!GRINGO_IS_ACTOR_PLAYING_ANIM(&iParam1, &iVar0))
		{
			return 0;
		}
	}
	return 0;
	return 1;
}

void Function_51(int iParam0, var uParam1, var uParam2) //Position: 0x2B0C / 11020
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar0 = Function_55(&iParam0);
	uVar1 = Function_54(&iParam0);
	iVar2 = 0;
	if (IS_GRINGO_COMPONENT_VALID(&uVar0) && uParam2)
	{
		if (IS_GRINGO_COMPONENT_VALID(&uVar1))
		{
			if (GRINGO_PLAY_ANIM_ON_ACTOR(&uParam1, &uVar0, false))
			{
				if (GRINGO_ATTACH_PROP_TO_ANIM(&uParam1, &uVar1, Function_53(&uVar1, "AttachBone", &iVar2), Function_53(&uVar1, "AttachLocator", &iVar2), 1))
				{
					Function_52(&uVar1, &uParam1);
					uParam2 = 1;
				}
			}
		}
		else
		{
			GRINGO_PLAY_ANIM_ON_ACTOR(&uParam1, &uVar0, false);
			uParam2 = 1;
		}
	}
	return;
}

void Function_52(var uParam0, int iParam1) //Position: 0x2BA9 / 11177
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	uVar0 = GRINGO_GET_FIRST_CHILD(2, &uParam0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		uVar2 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(&uVar0, &iParam1);
		uVar3 = GRINGO_ANIM_GET_ACT_FILENAME(&uVar0);
		uVar4 = GRINGO_ANIM_GET_ACT_ROOTNODE(&uVar0);
		iVar1 = GRINGO_GET_PHYSINST(&uParam0);
		if (IS_PHYSINST_VALID(&iVar1))
		{
			uVar5 = GET_OBJECT_ANIMATOR_ON_OBJECT(&iVar1);
			if (IS_OBJECT_ANIMATOR_VALID(&uVar5))
			{
				LOG_ERROR("Previous object animator not cleared - destroying now!");
				DESTROY_OBJECT_ANIMATOR(&uVar5);
			}
			iVar6 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(&iVar1, &uVar2, &uVar3, &uVar4);
			if (IS_OBJECT_ANIMATOR_VALID(&iVar6))
			{
				LINK_OBJECT_ANIMATOR_TO_ACTOR(&iVar6, &iParam1, GRINGO_GET_PROP_ATTACH_SLOT(&uParam0));
			}
		}
	}
	return;
}

var Function_53(var uParam0, var uParam1, int iParam2) //Position: 0x2C71 / 11377
{
	int iVar0;
	int iVar1;
	
	iVar1 = GET_GRINGO_STRING_ATTR(&uParam1, &uParam0, &iVar0);
	iParam2 = iVar0 < 0;
	if (iParam2)
	{
		if (STRING_LENGTH(&iVar1) != 0 || STRINGS_ARE_EQUAL(&iVar1, "NoString"))
		{
			iParam2 = 0;
			return &iLocal_0;
		}
		return &iVar1;
	}
	return &iLocal_0;
}

var Function_54(int iParam0) //Position: 0x2CC1 / 11457
{
	return GRINGO_GET_FIRST_NAMED_CHILD("UseProp", 1, &iParam0);
}

int Function_55(int iParam0) //Position: 0x2CD8 / 11480
{
	return GRINGO_GET_FIRST_NAMED_CHILD("UseAnim", 2, &iParam0);
}

void Function_56(var uParam0, var uParam1, int iParam2) //Position: 0x2CEF / 11503
{
	float fVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	uLocal_5 = Function_82(&uParam0);
	uParam1 = &uParam1;
	iParam2 = 0;
	fVar0 = 0.0f;
	GET_GRINGO_FLOAT_ATTR(&fVar0, "effectTime", &uLocal_5);
	if (!DECOR_CHECK_EXIST(&uParam1, "bait"))
	{
		if (!Global_6629 && Global_43789 == Global_46914[1])
		{
			if (!Function_81())
			{
				if (Function_80())
				{
					if ((IS_ACTOR_VALID(&uParam1) && IS_ACTOR_ALIVE(&uParam1)) && !Function_76(&Global_54076, 0, 0))
					{
						if (IS_ACTOR_ON_GROUND(&uParam1) && !((IS_ACTOR_ON_TRAIN(&uParam1, 0) || IS_ACTOR_INSIDE_VEHICLE(&uParam1)) || IS_ACTOR_VALID(GET_MOUNT(&Global_54076))))
						{
							if (!IS_PLAYER_IN_COMBAT_WITHIN(0, 15.0f))
							{
								if ((Function_75(&(Global_46972[10]), 0, 4294967295, 0) && Function_74(&(Global_46972[10]), 0, 0, 0) == 4294967295) && Function_74(&(Global_46972[10]), 0, 0, 0) == 0)
								{
									ACTOR_HOLSTER_WEAPON(&Global_54076, 1);
									Function_72(481, 1, 0, 0);
									if (Function_71())
									{
										if (HAS_ITEM(SS_GET_STRING(1, 6), &Global_54076))
										{
											iVar1 = GET_ITEM_COUNT(SS_GET_STRING(1, 6), &Global_54076);
										}
										PLAYSTAT_INT("HC_BAIT", iVar1);
									}
									DECOR_SET_FLOAT(&uParam1, "bait", fVar0);
									DECOR_SET_VECTOR(&uParam1, "baitSafePos", Local_7);
									Function_68(0, 0x40400000);
									uVar2 = Function_59(0, 0, 0, 0, 0, 0, 1, 0);
									if (IS_ACTOR_VALID(&uVar2))
									{
										iVar3 = TASK_SEQUENCE_OPEN();
										TASK_FLEE_COORD(0, &Global_54078, 1, 8.0f, 10.0f, 0);
										TASK_STAND_STILL(0, 90.0f, 0, 0);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(&uVar2, iVar3);
										TASK_SEQUENCE_RELEASE(iVar3, 1);
										TASK_PRIORITY_SET(&uVar2, 1);
									}
									iParam2 = 1;
								}
								else
								{
									Function_57("item_bait_no_animals", 0x41200000, 1, 0, 2, 1, 0);
									iParam2 = 0;
								}
							}
							else
							{
								Function_57("item_bait_attacked", 0x41200000, 1, 0, 2, 1, 0);
								iParam2 = 0;
							}
						}
						else
						{
							Function_57("item_bait_ground", 0x41200000, 1, 0, 2, 1, 0);
							iParam2 = 0;
						}
					}
					else
					{
						Function_57("item_bait_disabled", 0x41200000, 1, 0, 2, 1, 0);
						iParam2 = 0;
					}
				}
				else
				{
					Function_57("item_bait_no_animals", 0x41200000, 1, 0, 2, 1, 0);
					iParam2 = 0;
				}
			}
			else
			{
				Function_57("item_bait_too_close", 0x41200000, 1, 0, 2, 1, 0);
				iParam2 = 0;
			}
		}
		else
		{
			Function_57("item_bait_town", 0x41200000, 1, 0, 2, 1, 0);
			iParam2 = 0;
		}
	}
	else
	{
		Function_57("item_bait_active", 0x41200000, 1, 0, 2, 1, 0);
		iParam2 = 0;
	}
	return;
}

void Function_57(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x2FEC / 12268
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_58(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_58(int iParam0) //Position: 0x3077 / 12407
{
	char* cVar0[16];
	
	if (!Function_46())
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

var Function_59(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7) //Position: 0x30B6 / 12470
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		return "";
	}
	iVar0 = (StackVal + 976);
	if (Global_6624)
	{
		Function_67(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_66())
		{
			return "";
		}
	}
	if (!Function_64())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_63();
	if ((bVar1 && uParam6) && uParam0)
	{
		Function_62(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_62(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_62(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_62(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_61(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_61(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_15(), iVar0, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_15(), 1,391489E-42f, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
				}
				DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
				if (IS_ACTOR_HORSE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
				}
				else if (IS_ACTOR_MULE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
				}
			}
			else
			{
				Var8 = Vector(&uParam2, &uParam3, &uParam4);
				if (!Function_35(StackVal, Var8))
				{
					TELEPORT_ACTOR(&Global_21369 + 72, &Var8, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (uParam0 || Global_6623))
	{
		if (!&bParam7)
		{
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_15(), iVar0, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
		}
		else
		{
			if (iVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (iVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_15(), 1,391489E-42f, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
		if (IS_ACTOR_HORSE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
		}
		else if (IS_ACTOR_MULE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 9 || ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 8)
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 8);
		}
	}
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	if (bVar1)
	{
		if (&bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(&Global_21369 + 72, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(&Global_54076);
		SET_ACTORS_HORSE(&Global_54076, &Global_21369 + 72);
		Function_60(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_60(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x3413 / 13331
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&uParam0, &uParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&uParam0, &uParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&uParam0, &uParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&uParam0, &uParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&uParam0, &uParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&uParam0, &uParam4);
	}
}

var Function_61(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x345D / 13405
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!&bParam2)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!&bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (&bParam4)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

struct<8> Function_62(int iParam0) //Position: 0x34FD / 13565
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_63() //Position: 0x3526 / 13606
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&Global_21369 + 72)) != &iVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, &iVar0);
		}
	}
	return;
}

bool Function_64() //Position: 0x359E / 13726
{
	if (Function_65() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_65() //Position: 0x35B4 / 13748
{
	return Global_21369.f_244;
}

bool Function_66() //Position: 0x35BF / 13759
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_67(var uParam0, bool bParam1, bool bParam2) //Position: 0x35DF / 13791
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_38(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_38(&Global_21369 + 72 + 32, 64);
	}
	return;
}

void Function_68(float fParam0, float fParam1) //Position: 0x360E / 13838
{
	*(&Global_21369 + 72 + 44) = 0;
	Global_21369.f_396 = 0;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 2)
		{
			TASK_CLEAR(&Global_21369 + 72);
		}
		if (&fParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(&Global_21369 + 72, 1);
			TASK_STAND_STILL(&Global_21369 + 72, &fParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(&Global_21369 + 400))
	{
		REMOVE_BLIP(&Global_21369 + 400);
	}
	Function_70();
	Function_69();
	if (DECOR_CHECK_EXIST(&Global_54076, "Player_SimWhistle"))
	{
		DECOR_REMOVE(&Global_54076, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(&Global_54076, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + &fParam1));
	return;
}

void Function_69() //Position: 0x371F / 14111
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_70() //Position: 0x3753 / 14163
{
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(&Global_54076, "WhistleNavQuery"));
		DECOR_REMOVE(&Global_54076, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistlePosProbed"))
	{
		DECOR_REMOVE(&Global_54076, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	return;
}

bool Function_71() //Position: 0x3859 / 14425
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

int Function_72(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x3884 / 14468
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + TO_FLOAT(bParam1));
	Function_27(iParam0, TO_FLOAT(bParam1), 1);
	Function_26(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_14(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &uParam3);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	Function_73(iParam0);
	return 1;
}

void Function_73(int iParam0) //Position: 0x3AAC / 15020
{
	switch (iParam0)
	{
		case 0x00000009:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x000001C9:
		case 0x000001CA:
		case 0x0000016B:
		case 0x0000016C:
		case 0x0000016D:
		case 0x000001D5:
		case 0x00000190:
		case 0x0000019A:
		case 0x000001DA:
		case 0x000001DB:
		case 0x000001DC:
		case 0x00000197:
		case 0x000001D4:
		case 0x00000199:
		case 0x00000291:
		case 0x00000292:
		case 0x00000293:
		case 0x00000290:
			Global_6662 = 1;
			break;
	}
	return;
}

int Function_74(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x3B4A / 15178
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(StackVal, &uParam0, &iParam1, &iParam2, &iParam3, 0f, Vector(0.0f, 0.0f, 0.0f));
}

int Function_75(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x3B66 / 15206
{
	if (!IS_POPSET_VALID(&uParam0))
	{
		return 0;
	}
	if (&bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(&uParam0, &uParam1, &uParam2);
}

bool Function_76(int iParam0, bool bParam1, bool bParam2) //Position: 0x3B92 / 15250
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !&bParam1)
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
	if (IS_ACTOR_BEING_DRAGGED(&iParam0, 0,3f))
	{
		return 1;
	}
	if (Function_79(&iParam0))
	{
		return 1;
	}
	if (Function_78(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(&iParam0) && !&bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&iParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iParam0)))
	{
		return 1;
	}
	if (Function_77())
	{
		return 1;
	}
	return 0;
}

bool Function_77() //Position: 0x3C56 / 15446
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_78(int iParam0) //Position: 0x3C6D / 15469
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_79(bool bParam0) //Position: 0x3C79 / 15481
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&bParam0));
}

bool Function_80() //Position: 0x3C88 / 15496
{
	AMBIENT_RESET_FILTER(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(640, 4.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1088, 4.0f, 1);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 4.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(2, 0.0f, 1);
	AMBIENT_SET_ELEVATION_FILTER(-10.0f, 10.0f);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(40.0f, 105.0f);
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 19,9f, 4.0f);
	AMBIENT_SET_BUMP_FILTER(0.0f, 0,6f, 4.0f);
	return AMBIENT_GET_POINT(&Local_7, 0);
}

bool Function_81() //Position: 0x3CED / 15597
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &Global_39621[iVar05] + 24))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

var Function_82(int iParam0) //Position: 0x3D37 / 15671
{
	return GRINGO_GET_FIRST_NAMED_CHILD("ItemAttribs", 4, &iParam0);
}

bool Function_83(int iParam0, int iParam1) //Position: 0x3D52 / 15698
{
	var uVar0;
	var uVar1;
	
	iParam0 = &iParam0;
	uVar0 = Function_54(&iParam0);
	uVar1 = Function_55(&iParam0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar1))
	{
		if (!iLocal_10)
		{
			ENABLE_USE_CONTEXTS(0);
			GRINGO_LOAD_ANIMATION_FOR_USER(&uVar1, GET_OBJECT_FROM_ACTOR(&iParam1));
			iLocal_10 = 1;
		}
		if (GRINGO_HAS_ANIMSET_LOADED(&uVar1, GET_OBJECT_FROM_ACTOR(&iParam1)))
		{
			if (IS_GRINGO_COMPONENT_VALID(&uVar0))
			{
				if (GRINGO_IS_PROP_READY(&uVar0))
				{
					GRINGO_SET_PROP_COLLISIONS(&uVar0, 0);
					iLocal_10 = 0;
					return 1;
				}
			}
			iLocal_10 = 0;
			return 1;
		}
		return 0;
	}
	ENABLE_USE_CONTEXTS(0);
	return 1;
	return 0;
}

