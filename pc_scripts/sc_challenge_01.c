//Decompiled with MagicRDR v1.0
//Function Count : 37
//Statics Count : 33
//Natives Count : 35
//Parameters Count : 2

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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	struct<2> Var0[10];
	var uVar21;
	char[] cVar22[4];
	var uVar23;
	float fVar29;
	float fVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	float fVar37;
	bool bVar38;
	int iVar39;
	bool bVar40;
	int iVar41;
	int iVar42;
	int iVar45;
	
	uVar21 = "nStatId";
	cVar22 = "nCount";
	fVar29 = 0.0f;
	fVar30 = 0.0f;
	iVar34 = 0;
	iVar35 = 0;
	bVar38 = Function_36(&uScriptParam_0);
	iVar39 = 1;
	bVar40 = false;
	iVar41 = 4294967295;
	iVar45 = 0;
	while ((!IS_EXITFLAG_SET() && iVar39) && iVar45 != 0)
	{
		switch (iVar36)
		{
			case 0x00000000:
				if (SC_CHALLENGE_IS_VAR_VALID(&uScriptParam_0, "bCommunity"))
				{
					Global_132987[bVar38125].f_120 = SC_CHALLENGE_GET_VAR_BOOL(&uScriptParam_0, "bCommunity");
				}
				else
				{
					Global_132987[bVar38125].f_120 = 0;
				}
				if (SC_CHALLENGE_IS_VAR_VALID(&uScriptParam_0, "bTimeAttack"))
				{
					Global_132987[bVar38125].f_132 = SC_CHALLENGE_GET_VAR_BOOL(&uScriptParam_0, "bTimeAttack");
				}
				else
				{
					Global_132987[bVar38125].f_132 = 0;
				}
				Function_35(bVar38, &Global_132987, I2STR(bVar38), 0);
				if (SC_CHALLENGE_IS_VAR_VALID(&uScriptParam_0, "nLBID"))
				{
					Global_132987[bVar38125].f_140 = SC_CHALLENGE_GET_VAR_INT(&uScriptParam_0, "nLBID");
				}
				bVar33 = false;
				while (bVar33 <= 10)
				{
					memcpy(&uVar23, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34(&uVar21, I2STR(bVar33)), 6);
					if (SC_CHALLENGE_IS_VAR_VALID(&uScriptParam_0, &uVar23))
					{
						Var0[bVar332] = SC_CHALLENGE_GET_VAR_INT(&uScriptParam_0, &uVar23);
					}
					memcpy(&uVar23, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34(&cVar22, I2STR(bVar33)), 6);
					if (SC_CHALLENGE_IS_VAR_VALID(&uScriptParam_0, &uVar23))
					{
						Var0[bVar332].f_4 = SC_CHALLENGE_GET_VAR_INT(&uScriptParam_0, &uVar23);
					}
					Var0[bVar332].f_8 = 0.0f;
					if (Var0[bVar332] >= 0)
					{
						iVar35++;
					}
					bVar33++;
				}
				fVar37 = SC_CHALLENGE_GET_VAR_FLOAT(&uScriptParam_0, "fTime");
				fVar30 = SC_CHALLENGE_GET_VAR_FLOAT(&uScriptParam_0, "nfXPReward");
				if (Var0[02] < 0 && Var0[02] > 696)
				{
					iVar36 = 1;
				}
				else
				{
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				break;
			
			case 0x00000001:
				Function_31("SC_CHALLENGE_AVAILABLE_MSG", 4.0f, 1, 0, 2, 1, 0);
				bVar33 = false;
				while (bVar33 <= iVar35)
				{
					Var0[bVar332].f_8 = (Global_54086[Var0[bVar332]] - IntToFloat((*&Global_132987[bVar38125] + 24)[bVar33]));
					bVar33++;
				}
				iVar36 = 2;
			
			case 0x00000002:
				bVar33 = false;
				while (bVar33 <= iVar35)
				{
					if ((StackVal - Global_54086[Var0[bVar332]]) < 0.0f)
					{
						Function_31("SC_CHALLENGE_EXAMPLE_START", 4.0f, 1, 0, 2, 1, 0);
						Global_132987[bVar38125].f_116 = 1;
						Global_137989[bVar3866].f_4 = 1;
						if (fVar37 < 0.0f)
						{
							Function_28(&iVar42);
						}
						SC_CHALLENGE_RESET_EXPIRATION_STATE(&uScriptParam_0);
						iVar36 = 3;
					}
					bVar33++;
				}
				break;
			
			case 0x00000003:
				if (Global_132987[bVar38125].f_132)
				{
					while (!Function_27(&iVar42, fVar37))
					{
						bVar33 = false;
						while (bVar33 <= iVar35)
						{
							bVar32 = (StackVal - Global_54086[Var0[bVar332]]);
							(*&Global_132987[bVar38125] + 24)[bVar33] = CEIL(bVar32);
							bVar33++;
						}
						WAIT(false);
					}
					if (Function_27(&iVar42, fVar37))
					{
						Function_25(&iVar42);
						bVar40 = true;
						iVar36 = 4;
					}
				}
				else
				{
					iVar34 = 0;
					bVar33 = false;
					while (bVar33 <= iVar35)
					{
						bVar32 = (StackVal - Global_54086[Var0[bVar332]]);
						(*&Global_132987[bVar38125] + 24)[bVar33] = CEIL(bVar32);
						if (StackVal <= IntToFloat(bVar32))
						{
							iVar34++;
						}
						bVar33++;
					}
					if (iVar34 == iVar35)
					{
						Function_25(&iVar42);
						bVar40 = true;
						iVar36 = 4;
					}
					else if (fVar37 < 0.0f)
					{
						if (Function_27(&iVar42, fVar37))
						{
							Function_31("SC_CHALLENGE_EXAMPLE_RAN_OUT_OF_TIME", 4.0f, 1, 0, 2, 1, 0);
							bVar40 = false;
							iVar36 = 4;
						}
					}
				}
				if (SC_CHALLENGE_GET_EXPIRATION_STATE(&uScriptParam_0) == 3)
				{
					bVar40 = false;
					iVar36 = 4;
				}
				break;
			
			case 0x00000004:
				SC_CHALLENGE_PROCESS_EXPIRATION(&uScriptParam_0);
				iVar41 = 0;
				if (bVar40)
				{
					if (Global_132987[bVar38125].f_132)
					{
						Function_31("SC_CHALLENGE_EXAMPLE_SUCCESS", 4.0f, 1, 0, 2, 1, 0);
						iVar34 = 0;
						fVar30 = 0.0f;
						bVar33 = false;
						while (bVar33 <= iVar35)
						{
							iVar34 = (iVar34 + (*&Global_132987[bVar38125] + 24)[bVar33]);
							bVar33++;
						}
						bVar31 = TO_FLOAT(iVar34 * 10);
						Function_6(0, bVar31);
					}
					else
					{
						Function_31("SC_CHALLENGE_EXAMPLE_SUCCESS", 4.0f, 1, 0, 2, 1, 0);
						if (fVar37 < 0.0f)
						{
							fVar29 = (fVar37 - Function_2(&iVar42));
							bVar31 = (fVar30 + (fVar30 * Function_1(0.0f, (fVar29 / fVar37))));
						}
						else
						{
							bVar31 = fVar30;
						}
						Function_6(0, bVar31);
					}
				}
				Global_132987[bVar38125].f_116 = 0;
				iVar36 = 5;
			
			case 0x00000005:
				if (iVar41 == 0)
				{
					iVar41 = SC_CHALLENGE_GET_EXPIRATION_STATE(&uScriptParam_0);
				}
				else if (iVar41 == 3)
				{
					Function_31("SC_CHALLENGE_EXAMPLE_EXPIRED", 4.0f, 1, 0, 2, 1, 0);
					iVar39 = 0;
				}
				break;
		}
		WAIT(100);
	}
	SC_CHALLENGE_RELEASE(&uScriptParam_0);
	TERMINATE_THIS_SCRIPT();
	return;
}

float Function_1(int iParam0, int iParam1) //Position: 0x556 / 1366
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

float Function_2(vector3 vParam0) //Position: 0x569 / 1385
{
	if (Function_5(&vParam0))
	{
		if (Function_3(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_3(int iParam0) //Position: 0x636 / 1590
{
	return Function_4(iParam0, 2);
}

bool Function_4(var uParam0, int iParam1) //Position: 0x644 / 1604
{
	return (uParam0 && iParam1) == 0;
}

bool Function_5(int iParam0) //Position: 0x651 / 1617
{
	return Function_4(iParam0, 1);
}

int Function_6(int iParam0, bool bParam1) //Position: 0x65F / 1631
{
	bool bVar0;
	int iVar1;
	
	Function_11(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("STAT_INCREASE: fIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	iVar1 = Function_10(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + bParam1);
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_7();
	Global_77754[iVar1] = bParam1;
	strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 0;
	return 1;
}

int Function_7() //Position: 0x7FA / 2042
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_96 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_8();
	return 0;
}

void Function_8() //Position: 0x89B / 2203
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, *(&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_9(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_9(int iParam0) //Position: 0x959 / 2393
{
	Global_77754[iParam0] = 0.0f;
	strcpy(&(Global_77766[iParam016]), "", 8);
	strcpy(&Global_77766[iParam016] + 16, "", 8);
	strcpy(&Global_77766[iParam016] + 32, "", 32);
	Global_77766[iParam016].f_96 = 4294967295;
	Global_77766[iParam016].f_100 = 4294967295;
	Global_77766[iParam016].f_116 = 4294967295;
	Global_77766[iParam016].f_120 = 4294967295;
	return;
}

var Function_10(int iParam0, int iParam1) //Position: 0x9BF / 2495
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_116 == iParam0)
		{
			if (&iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != &iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

int Function_11(int iParam0, bool bParam1, bool bParam2) //Position: 0xA04 / 2564
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
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + bParam1);
	Function_24(iParam0, bParam1, 1);
	Function_23(iParam0);
	if (bParam2 && bParam1 == 0.0f)
	{
		Function_12(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_12(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0xC10 / 3088
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_22(390))), 32);
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
					bVar19 = (Function_21(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_21(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_19(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_16(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_14(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_13(), &Var9);
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

var Function_13() //Position: 0x124E / 4686
{
	int iVar0;
	
	return &iVar0;
}

var Function_14(int iParam0) //Position: 0x1257 / 4695
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_15(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1268 / 4712
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_16(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x135F / 4959
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_18(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_17(Function_18(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_17(int iParam0, int iParam1) //Position: 0x13C6 / 5062
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_18(int iParam0, bool bParam1) //Position: 0x13D8 / 5080
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_19(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x13EA / 5098
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
	if (((Function_20(iParam0) != 19 || Function_20(iParam0) != 17) || Function_20(iParam0) != 10) || Function_20(iParam0) != 9)
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

int Function_20(int iParam0) //Position: 0x151E / 5406
{
	return Global_55480[iParam016].f_96;
}

float Function_21(int iParam0) //Position: 0x152D / 5421
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_22(int iParam0) //Position: 0x1566 / 5478
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_23(int iParam0) //Position: 0x15A3 / 5539
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

int Function_24(int iParam0, float fParam1, bool bParam2) //Position: 0x173D / 5949
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

void Function_25(vector3 vParam0) //Position: 0x1981 / 6529
{
	if (Function_5(&vParam0))
	{
		if (!Function_3(&vParam0))
		{
			vParam0.f_8 = (GET_CURRENT_GAME_TIME() - vParam0.y);
			Function_26(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_26(var uParam0, int iParam1) //Position: 0x1A45 / 6725
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_27(int iParam0, float fParam1) //Position: 0x1A56 / 6742
{
	if (Function_5(&iParam0))
	{
		if (Function_2(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_28(int iParam0) //Position: 0x1A74 / 6772
{
	Function_29(&iParam0, 0.0f);
	return;
}

void Function_29(vector3 vParam0) //Position: 0x1A81 / 6785
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_26(&vParam0, 1);
	Function_30(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_30(var uParam0, int iParam1) //Position: 0x1AA6 / 6822
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_31(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1ABC / 6844
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_32(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_32(int iParam0) //Position: 0x1B47 / 6983
{
	char* cVar0[16];
	
	if (!Function_33())
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

bool Function_33() //Position: 0x1B86 / 7046
{
	if (Function_4(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

struct<32> Function_34(char* cParam0) //Position: 0x1BA1 / 7073
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_35(int iParam0, struct<125>[] Param1, char* cParam2) //Position: 0x1BBC / 7100
{
	int iVar0;
	
	strcpy(&Param1[iParam0125] + 8, &cParam2, 8);
	Param1[iParam0125] = iParam0;
	Param1[iParam0125].f_112 = &uParam3;
	while (iVar0 <= 10)
	{
		if (!Global_132987[iParam0125].f_116)
		{
			(*&Global_132987[iParam0125] + 24)[iVar0] = 0;
		}
		iVar0++;
	}
}

var Function_36(int iParam0) //Position: 0x1C14 / 7188
{
	int iVar0;
	int iVar1;
	
	iVar0 = &iParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (Global_132987[iVar1125] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return 4294967295;
}

