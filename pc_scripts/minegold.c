//Decompiled with MagicRDR v1.0
//Function Count : 44
//Statics Count : 32
//Natives Count : 75
//Parameters Count : 2

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	struct<57> Local_2 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	
	iLocal_24 = 0;
	iLocal_25 = 0;
	iLocal_26 = 0;
	iLocal_27 = 0;
	iScriptParam_0 = &iScriptParam_0;
	Local_2.f_56 = 0;
	iLocal_24 = 0;
	uVar1 = Function_42(GRINGO_GET_FIRST_NAMED_CHILD("MineGold", 3, &iScriptParam_0), &uVar0);
	while (IS_GRINGO_ACTIVE())
	{
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			bVar2 = false;
			bVar3 = false;
			switch (GRINGO_GET_MESSAGE_TYPE())
			{
				case 0x00000000:
					if (Function_35(&iScriptParam_0, &bVar3))
					{
						GRINGO_SET_REQUEST_STRING(&uVar1);
						bVar2 = true;
					}
					break;
				
				case 0x00000001:
					if (Function_35(&iScriptParam_0, &bVar3))
					{
						GRINGO_SET_REQUEST_STRING(&uVar1);
						bVar2 = true;
						if (bVar3)
						{
							if (Function_32(&iScriptParam_0))
							{
								Local_2.f_56 = 1;
								iLocal_24 = 1;
								GRINGO_SET_AVAILABILITY(&Local_2, 0);
								GRINGO_SET_COMPONENT_USER(GET_OBJECT_FROM_ACTOR(&Local_2 + 8), &Local_2);
							}
						}
					}
					break;
				
				case 0x00000002:
					break;
			}
			GRINGO_SET_MESSAGE_RETURN(bVar2);
		}
		if (Local_2.f_56)
		{
			if (!Function_1(&iScriptParam_0))
			{
				iLocal_24 = 4;
				Function_1(&iScriptParam_0);
			}
		}
		GRINGO_WAIT(0);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

bool Function_1(int iParam0) //Position: 0xEC / 236
{
	var uVar0;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	iParam0 = &iParam0;
	GET_POSITION(&Local_2 + 8, &uVar0);
	switch (iLocal_24)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			Function_28(&Local_2 + 16);
			uLocal_28 = GRINGO_GET_FIRST_NAMED_CHILD("AttachProp", 1, &Local_2);
			if (IS_GRINGO_COMPONENT_VALID(&uLocal_28))
			{
				UNK_0x6BA667B5(&uLocal_28);
				GRINGO_IS_PROP_READY(&uLocal_28);
				GRINGO_SET_PROP_COLLISIONS(&uLocal_28, 0);
			}
			ACTOR_HOLSTER_WEAPON(&Local_2 + 8, 1);
			if (!iLocal_25)
			{
				GRINGO_GET_USE_COMPONENT_POSITION(&Local_2 + 72, &Local_2);
				bVar3 = Function_27(&Local_2);
				iLocal_25 = 1;
			}
			else if (!iLocal_26)
			{
				if (GRINGO_ACTOR_MOVE_TO_AND_FACE(&Local_2 + 8, &Local_2 + 72, 0,1f, 0,1f, 1, bVar3, 0,1f, 1, 0))
				{
					iLocal_26 = 1;
				}
			}
			bVar2 = GRINGO_IS_PROP_READY(&uLocal_28);
			if (bVar2)
			{
				if (iLocal_26)
				{
					uVar4 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnim", 2, &Local_2);
					GRINGO_PLAY_ANIM_ON_ACTOR_WITH_PROP_COMPONENT(&Local_2 + 8, &uVar4, &uLocal_28, "wrist_r_attachment", "grab", 0);
					if (RAND_INT_RANGE(true, 100) < 50)
					{
						iLocal_27 = 1;
					}
					iLocal_24 = 2;
					iLocal_26 = 0;
					iLocal_25 = 0;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_26(&Local_2 + 8))
			{
				iLocal_24 = 4;
			}
			if (Function_22(&Local_2 + 16) < Function_20(&Local_2))
			{
				if (iLocal_27)
				{
					uVar5 = GRINGO_GET_FIRST_NAMED_CHILD("Succeed", 2, &Local_2);
					GRINGO_PLAY_ANIM_ON_ACTOR_WITH_PROP_COMPONENT(&Local_2 + 8, &uVar5, &uLocal_28, "wrist_r_attachment", "grab", 0);
				}
				else
				{
					uVar5 = GRINGO_GET_FIRST_NAMED_CHILD("Fail", 2, &Local_2);
					GRINGO_PLAY_ANIM_ON_ACTOR_WITH_PROP_COMPONENT(&Local_2 + 8, &uVar5, &uLocal_28, "wrist_r_attachment", "grab", 0);
				}
				iLocal_24 = 3;
			}
			break;
		
		case 0x00000003:
			if (iLocal_27)
			{
				if (RAND_INT_RANGE(true, 100) < 50)
				{
					Function_2(RAND_INT_RANGE(60, 100), 1, 1);
				}
				else
				{
					Function_2(RAND_INT_RANGE(10, 50), 1, 1);
				}
			}
			Function_28(&Local_2 + 16);
			iLocal_24 = 4;
			break;
		
		case 0x00000004:
			if (((IS_ACTOR_ANIM_PLAYING(&Local_2 + 8, "gent_minegold_crouch_pst") || IS_ACTOR_ANIM_PLAYING(&Local_2 + 8, "gent_minegold_findbad")) || IS_ACTOR_ANIM_PLAYING(&Local_2 + 8, "gent_minegold_findgood")) || IS_ACTOR_ANIM_PLAYING(&Local_2 + 8, "gent_minegold_crouch_pre"))
			{
				iLocal_24 = iLocal_24;
			}
			else
			{
				iLocal_24 = 5;
			}
			break;
		
		case 0x00000005:
			Local_2.f_56 = 0;
			iLocal_24 = 0;
			iLocal_27 = 0;
			if (IS_ACTOR_VALID(&Local_2 + 8))
			{
				SET_GRINGO_OBJECT_REF_ATTR(&uVar6, "UserObject", &Local_2);
				DEREFERENCE_ACTOR(&Local_2 + 8);
				ACTOR_END_FORCE_HOLSTER(&Local_2 + 8);
				RESET_ANIM_SET_FOR_ACTOR(&Local_2 + 8, 0);
				GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&Local_2 + 8);
				GRINGO_REPORT_USE_FINISHED(&Local_2 + 8, true);
				GRINGO_CLEAR_COMPONENT_USER(&Local_2);
				GRINGO_SET_AVAILABILITY(&Local_2, 1);
			}
			if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
			{
				DEREFERENCE_OBJECT(GET_TARGET_OBJECT());
			}
			GRINGO_STOP();
			DESTROY_OBJECT(GET_OBJECT_FROM_PHYSINST(GRINGO_GET_PHYSINST(&uLocal_28)));
			DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
			break;
	}
	return 1;
}

int Function_2(bool bParam0, bool bParam1, bool bParam2) //Position: 0x437 / 1079
{
	bool bVar0;
	
	bVar0 = Function_19(0);
	if ((Function_19(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_3(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_19(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_3(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_19(597) + Function_19(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

int Function_3(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x509 / 1289
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
	Function_18(iParam0, TO_FLOAT(bParam1), 1);
	Function_17(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_5(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_4(iParam0);
	return 1;
}

void Function_4(bool bParam0) //Position: 0x731 / 1841
{
	switch (bParam0)
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

void Function_5(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x7CF / 1999
{
	char* cVar0[32];
	bool bVar8;
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
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
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
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
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
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_16(390))), 32);
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
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_15(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_15(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_13(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_10(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_8(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_7(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_6(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_6() //Position: 0xE0D / 3597
{
	int iVar0;
	
	return &iVar0;
}

var Function_7(int iParam0) //Position: 0xE16 / 3606
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_8(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xE27 / 3623
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_9("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_9(char* cParam0) //Position: 0xF1E / 3870
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_10(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0xF39 / 3897
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_12(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_11(Function_12(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_11(int iParam0, int iParam1) //Position: 0xFA0 / 4000
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_12(int iParam0, bool bParam1) //Position: 0xFB2 / 4018
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_13(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0xFC4 / 4036
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
	if (((Function_14(iParam0) != 19 || Function_14(iParam0) != 17) || Function_14(iParam0) != 10) || Function_14(iParam0) != 9)
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

int Function_14(int iParam0) //Position: 0x10F8 / 4344
{
	return Global_55480[iParam016].f_96;
}

float Function_15(int iParam0) //Position: 0x1107 / 4359
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_16(int iParam0) //Position: 0x1140 / 4416
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_17(int iParam0) //Position: 0x117D / 4477
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

int Function_18(int iParam0, float fParam1, bool bParam2) //Position: 0x1317 / 4887
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

int Function_19(int iParam0) //Position: 0x155B / 5467
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

float Function_20(int iParam0) //Position: 0x159C / 5532
{
	return Function_21(&iParam0, "UseTime", 5.0f);
}

int Function_21(var uParam0, var uParam1, int iParam2) //Position: 0x15B3 / 5555
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, &uParam1, &uParam0);
	return iVar0;
}

var Function_22(vector3 vParam0) //Position: 0x15CB / 5579
{
	if (Function_25(&vParam0))
	{
		if (Function_23(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_23(int iParam0) //Position: 0x1698 / 5784
{
	return Function_24(iParam0, 2);
}

int Function_24(var uParam0, int iParam1) //Position: 0x16A6 / 5798
{
	return (uParam0 && iParam1) == 0;
}

bool Function_25(int iParam0) //Position: 0x16B3 / 5811
{
	return Function_24(iParam0, 1);
}

bool Function_26(int iParam0) //Position: 0x16C1 / 5825
{
	if (GET_CURRENT_GAME_TIME() < 2.0f)
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&iParam0)) > 3.0f && (GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&iParam0)) < 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

var Function_27(int iParam0) //Position: 0x16EE / 5870
{
	return GRINGO_GET_USE_COMPONENT_HEADING(&iParam0);
}

void Function_28(int iParam0) //Position: 0x16FA / 5882
{
	Function_29(&iParam0, 0.0f);
	return;
}

void Function_29(vector3 vParam0) //Position: 0x1707 / 5895
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_31(&vParam0, 1);
	Function_30(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_30(var uParam0, int iParam1) //Position: 0x172C / 5932
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_31(var uParam0, int iParam1) //Position: 0x1742 / 5954
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_32(int iParam0) //Position: 0x1753 / 5971
{
	int iVar0;
	var uVar1;
	int iVar3;
	var uVar5;
	
	iVar0 = 1;
	GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &uVar1);
	SET_GRINGO_OBJECT_REF_ATTR(GET_OBJECT_FROM_ACTOR(&Local_2 + 8), "UserObject", &Local_2);
	Function_34(GRINGO_GET_REQUESTING_ACTOR(), &iVar3);
	if (Function_33(&uVar1, &iVar3) >= 10.0f)
	{
		uVar5 = GRINGO_GET_FIRST_NAMED_CHILD("MineGold", 3, &iParam0);
		if (IS_GRINGO_COMPONENT_VALID(&uVar5))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

float Function_33(struct<2> Param0) //Position: 0x17C5 / 6085
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

void Function_34(int iParam0, int iParam1) //Position: 0x17E4 / 6116
{
	GET_POSITION(&iParam0, &iParam1);
	return;
}

bool Function_35(int iParam0, int iParam1) //Position: 0x17F3 / 6131
{
	struct<2> Var0;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	if (!Local_2.f_56)
	{
		Function_41();
		Function_40(&iParam0);
		Function_39(&Local_2);
		Function_38(&Local_2);
		Function_37(&Local_2);
		Function_36(&Local_2);
		if (!IS_ACTOR_ALIVE(&Local_2 + 8) || !IS_ACTOR_VALID(&Local_2 + 8))
		{
			return 0;
		}
		Function_34(&Local_2 + 8, &Var0);
		bVar2 = VDIST(Var0, *(&Local_2 + 60));
		if (bVar2 < Local_2.f_44)
		{
			return 0;
		}
		if (!Local_2.f_48 != 0.0f)
		{
			fVar3 = 0.0f;
			fVar4 = 0.0f;
			if (Local_2.f_48 < 0.0f)
			{
				fVar4 = UNK_0x9C40E671(&Local_2 + 32);
				fVar3 = (bVar2 - fVar4);
			}
			else
			{
				fVar3 = ((180.0f + bVar2) - fVar4);
			}
			if (fVar3 < 180.0f)
			{
				fVar3 = (fVar3 - 360.0f);
			}
			else if (fVar3 > -180.0f)
			{
				fVar3 = (fVar3 + 360.0f);
			}
			if (fVar3 < FABS(Local_2.f_48))
			{
				return 0;
			}
		}
		*(&Local_2 + 8) = GRINGO_GET_REQUESTING_ACTOR();
		iParam1 = 1;
		return 1;
	}
	if (&Local_2 + 8 == GRINGO_GET_REQUESTING_ACTOR())
	{
		Local_2.f_56 = 1;
		iParam1 = 0;
		return 1;
	}
	return 0;
}

void Function_36(int iParam0) //Position: 0x18FE / 6398
{
	GRINGO_GET_USE_COMPONENT_POSITION(&Local_2 + 60, &iParam0);
	*(&Local_2 + 72) = Vector(StackVal, StackVal, StackVal) + Vector(Vector(*(&Local_2 + 32), *(&Local_2 + 60), StackVal) * Vector(0,4f, 0,4f, 0,4f), StackVal, StackVal);
	return;
}

void Function_37(int iParam0) //Position: 0x1928 / 6440
{
	GET_GRINGO_FLOAT_ATTR(&Local_2 + 48, "UseDirectionToleranceDegrees", &iParam0);
	return;
}

void Function_38(int iParam0) //Position: 0x1958 / 6488
{
	GET_GRINGO_FLOAT_ATTR(&Local_2 + 44, "ActivationRadius", &iParam0);
	return;
}

void Function_39(int iParam0) //Position: 0x197C / 6524
{
	GET_GRINGO_VECTOR_ATTR(&Local_2 + 32, "UseDirection", &iParam0);
	return;
}

void Function_40(int iParam0) //Position: 0x199C / 6556
{
	Local_2 = GRINGO_GET_FIRST_NAMED_CHILD("MineGold", 3, &iParam0);
	return;
}

void Function_41() //Position: 0x19B7 / 6583
{
	*(&Local_2 + 8) = GRINGO_GET_REQUESTING_ACTOR();
	return;
}

int Function_42(var uParam0, int iParam1) //Position: 0x19C5 / 6597
{
	return Function_43(&uParam0, "UseName", &iParam1);
}

int Function_43(var uParam0, var uParam1, var uParam2) //Position: 0x19DE / 6622
{
	int iVar0;
	var uVar1;
	
	uVar1 = GET_GRINGO_STRING_ATTR(&uParam1, &uParam0, &iVar0);
	uParam2 = iVar0 < 0;
	if (uParam2)
	{
		if (STRING_LENGTH(&uVar1) != 0 || STRINGS_ARE_EQUAL(&uVar1, "NoString"))
		{
			uParam2 = 0;
			return &uLocal_0;
		}
		return &uVar1;
	}
	return &uLocal_0;
}

