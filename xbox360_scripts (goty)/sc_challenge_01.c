//Decompiled with MagicRDR v1.0
//Function Count : 40
//Statics Count : 25
//Natives Count : 37
//Parameters Count : 1

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
	char* cScriptParam_0 = NULL;
#endregion

void main() //Position: 0x0 / 0
{
	vector3 vVar0[10];
	var uVar31;
	char* cVar32;
	var uVar33;
	float fVar39;
	float fVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	float fVar47;
	bool bVar48;
	int iVar49;
	bool bVar50;
	int iVar51;
	int iVar52;
	int iVar56;
	
	uVar31 = "nStatId";
	cVar32 = "nCount";
	fVar39 = 0.0f;
	fVar40 = 0.0f;
	iVar44 = 0;
	iVar45 = 0;
	bVar48 = Function_39(&cScriptParam_0);
	iVar49 = 1;
	bVar50 = false;
	iVar51 = 4294967295;
	iVar56 = Function_38();
	while ((!IS_EXITFLAG_SET() && iVar49) && iVar56 != Function_38())
	{
		switch (iVar46)
		{
			case 0x00000000:
				if (SC_CHALLENGE_IS_VAR_VALID(cScriptParam_0, "bCommunity"))
				{
					Global_84611[bVar48140].f_68 = SC_CHALLENGE_GET_VAR_BOOL(cScriptParam_0, "bCommunity");
				}
				else
				{
					Global_84611[bVar48140].f_68 = 0;
				}
				if (SC_CHALLENGE_IS_VAR_VALID(cScriptParam_0, "bTimeAttack"))
				{
					Global_84611[bVar48140].f_80 = SC_CHALLENGE_GET_VAR_BOOL(cScriptParam_0, "bTimeAttack");
				}
				else
				{
					Global_84611[bVar48140].f_80 = 0;
				}
				Function_37(bVar48, &Global_84611, I2STR(bVar48), 0);
				if (SC_CHALLENGE_IS_VAR_VALID(cScriptParam_0, "nLBID"))
				{
					Global_84611[bVar48140].f_88 = SC_CHALLENGE_GET_VAR_INT(cScriptParam_0, "nLBID");
				}
				bVar43 = false;
				while (bVar43 <= 10)
				{
					memcpy(&uVar33, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(uVar31, I2STR(bVar43)), 6);
					if (SC_CHALLENGE_IS_VAR_VALID(cScriptParam_0, &uVar33))
					{
						vVar0[bVar433] = SC_CHALLENGE_GET_VAR_INT(cScriptParam_0, &uVar33);
					}
					memcpy(&uVar33, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(cVar32, I2STR(bVar43)), 6);
					if (SC_CHALLENGE_IS_VAR_VALID(cScriptParam_0, &uVar33))
					{
						vVar0[bVar433].f_4 = SC_CHALLENGE_GET_VAR_INT(cScriptParam_0, &uVar33);
					}
					vVar0[bVar433].f_8 = 0.0f;
					if (vVar0[bVar433] >= 0)
					{
						iVar45++;
					}
					bVar43++;
				}
				fVar47 = SC_CHALLENGE_GET_VAR_FLOAT(cScriptParam_0, "fTime");
				fVar40 = SC_CHALLENGE_GET_VAR_FLOAT(cScriptParam_0, "nfXPReward");
				if (vVar0[03] < 0 && vVar0[03] > 696)
				{
					iVar46 = 1;
				}
				else
				{
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				break;
			
			case 0x00000001:
				Function_33("SC_CHALLENGE_AVAILABLE_MSG", 4.0f, 1, 0, 2, 1, 0);
				bVar43 = false;
				while (bVar43 <= iVar45)
				{
					vVar0[bVar433].f_8 = (Global_34581[vVar0[bVar433]] - IntToFloat((*&Global_84611[bVar48140] + 16)[bVar43]));
					bVar43++;
				}
				iVar46 = 2;
			
			case 0x00000002:
				bVar43 = false;
				while (bVar43 <= iVar45)
				{
					if ((Global_34581[vVar0[bVar433]] - vVar0[bVar433].z) < 0.0f)
					{
						Function_33("SC_CHALLENGE_EXAMPLE_START", 4.0f, 1, 0, 2, 1, 0);
						Global_84611[bVar48140].f_64 = 1;
						Global_87412[bVar4869].f_4 = 1;
						if (fVar47 < 0.0f)
						{
							Function_30(&iVar52);
						}
						SC_CHALLENGE_RESET_EXPIRATION_STATE(cScriptParam_0);
						iVar46 = 3;
					}
					bVar43++;
				}
				break;
			
			case 0x00000003:
				if (Global_84611[bVar48140].f_80)
				{
					while (!Function_29(&iVar52, fVar47))
					{
						bVar43 = false;
						while (bVar43 <= iVar45)
						{
							bVar42 = (Global_34581[vVar0[bVar433]] - vVar0[bVar433].z);
							(*&Global_84611[bVar48140] + 16)[bVar43] = CEIL(bVar42);
							bVar43++;
						}
						WAIT(false);
					}
					if (Function_29(&iVar52, fVar47))
					{
						Function_27(&iVar52);
						bVar50 = true;
						iVar46 = 4;
					}
				}
				else
				{
					iVar44 = 0;
					bVar43 = false;
					while (bVar43 <= iVar45)
					{
						bVar42 = (Global_34581[vVar0[bVar433]] - vVar0[bVar433].z);
						(*&Global_84611[bVar48140] + 16)[bVar43] = CEIL(bVar42);
						if (bVar42 <= IntToFloat(vVar0[bVar433].y))
						{
							iVar44++;
						}
						bVar43++;
					}
					if (iVar44 == iVar45)
					{
						Function_27(&iVar52);
						bVar50 = true;
						iVar46 = 4;
					}
					else if (fVar47 < 0.0f)
					{
						if (Function_29(&iVar52, fVar47))
						{
							Function_33("SC_CHALLENGE_EXAMPLE_RAN_OUT_OF_TIME", 4.0f, 1, 0, 2, 1, 0);
							bVar50 = false;
							iVar46 = 4;
						}
					}
				}
				if (SC_CHALLENGE_GET_EXPIRATION_STATE(cScriptParam_0) == 3)
				{
					bVar50 = false;
					iVar46 = 4;
				}
				break;
			
			case 0x00000004:
				SC_CHALLENGE_PROCESS_EXPIRATION(cScriptParam_0);
				iVar51 = 0;
				if (bVar50)
				{
					if (Global_84611[bVar48140].f_80)
					{
						Function_33("SC_CHALLENGE_EXAMPLE_SUCCESS", 4.0f, 1, 0, 2, 1, 0);
						iVar44 = 0;
						fVar40 = 0.0f;
						bVar43 = false;
						while (bVar43 <= iVar45)
						{
							iVar44 = (iVar44 + (*&Global_84611[bVar48140] + 16)[bVar43]);
							bVar43++;
						}
						bVar41 = TO_FLOAT(iVar44 * 10);
						if (Function_38())
						{
							Function_25(487, bVar41, 0);
						}
						else
						{
							Function_6(0, bVar41);
						}
					}
					else
					{
						Function_33("SC_CHALLENGE_EXAMPLE_SUCCESS", 4.0f, 1, 0, 2, 1, 0);
						if (fVar47 < 0.0f)
						{
							fVar39 = (fVar47 - Function_2(&iVar52));
							bVar41 = (fVar40 + (fVar40 * Function_1(0.0f, (fVar39 / fVar47))));
						}
						else
						{
							bVar41 = fVar40;
						}
						if (Function_38())
						{
							Function_25(487, bVar41, 0);
						}
						else
						{
							Function_6(0, bVar41);
						}
					}
				}
				Global_84611[bVar48140].f_64 = 0;
				iVar46 = 5;
			
			case 0x00000005:
				if (iVar51 == 0)
				{
					iVar51 = SC_CHALLENGE_GET_EXPIRATION_STATE(cScriptParam_0);
				}
				else if (iVar51 == 3)
				{
					Function_33("SC_CHALLENGE_EXAMPLE_EXPIRED", 4.0f, 1, 0, 2, 1, 0);
					iVar49 = 0;
				}
				break;
		}
		WAIT(100);
	}
	SC_CHALLENGE_RELEASE(cScriptParam_0);
	TERMINATE_THIS_SCRIPT();
	return;
}

float Function_1(int iParam0, int iParam1) //Position: 0x569 / 1385
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

float Function_2(int iParam0) //Position: 0x57C / 1404
{
	if (Function_5(iParam0))
	{
		if (Function_3(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_3(int iParam0) //Position: 0x644 / 1604
{
	return Function_4(*iParam0, 2);
}

bool Function_4(var uParam0, int iParam1) //Position: 0x651 / 1617
{
	return (uParam0 && iParam1) == 0;
}

bool Function_5(int iParam0) //Position: 0x65E / 1630
{
	return Function_4(*iParam0, 1);
}

int Function_6(int iParam0, bool bParam1) //Position: 0x66B / 1643
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
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + bParam1);
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_7();
	Global_49199[iVar1] = bParam1;
	strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 0;
	return 1;
}

int Function_7() //Position: 0x7F7 / 2039
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
	Function_8();
	return 0;
}

void Function_8() //Position: 0x896 / 2198
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
		Function_9(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_9(int iParam0) //Position: 0x945 / 2373
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

var Function_10(int iParam0, int iParam1) //Position: 0x9A3 / 2467
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

int Function_11(int iParam0, bool bParam1, bool bParam2) //Position: 0x9E4 / 2532
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
	Function_24(iParam0, bParam1, 1);
	Function_23(iParam0);
	if (bParam2 && bParam1 == 0.0f)
	{
		Function_12(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_12(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0xBEE / 3054
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_22(390))), 32);
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
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_16(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_14(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_13(), &Var9);
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

var Function_13() //Position: 0x121B / 4635
{
	int iVar0;
	
	return iVar0;
}

var Function_14(int iParam0) //Position: 0x1223 / 4643
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_15(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1234 / 4660
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_16(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1329 / 4905
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_18(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_17(Function_18(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_17(int iParam0, int iParam1) //Position: 0x138E / 5006
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_18(int iParam0, bool bParam1) //Position: 0x13A0 / 5024
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_19(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x13B2 / 5042
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
		*uParam3 = ROUND((fVar2 * 100.0f));
		*uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		*uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		*uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_20(int iParam0) //Position: 0x14E2 / 5346
{
	return Global_35278[iParam020].f_48;
}

float Function_21(int iParam0) //Position: 0x14F1 / 5361
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_22(int iParam0) //Position: 0x152A / 5418
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_23(int iParam0) //Position: 0x1567 / 5479
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

int Function_24(int iParam0, bool bParam1, bool bParam2) //Position: 0x1701 / 5889
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

void Function_25(int iParam0, bool bParam1, int iParam2) //Position: 0x1945 / 6469
{
	Function_26(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_26(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x1961 / 6497
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
	Function_24(iParam0, TO_FLOAT(bParam1), 1);
	Function_23(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_12(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, uParam3);
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

void Function_27(int iParam0) //Position: 0x1B81 / 7041
{
	if (Function_5(iParam0))
	{
		if (!Function_3(iParam0))
		{
			iParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_28(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_28(int iParam0, int iParam1) //Position: 0x1C40 / 7232
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_29(int iParam0, float fParam1) //Position: 0x1C4F / 7247
{
	if (Function_5(iParam0))
	{
		if (Function_2(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_30(int iParam0) //Position: 0x1C6B / 7275
{
	Function_31(iParam0, 0.0f);
	return;
}

void Function_31(var uParam0, float fParam1) //Position: 0x1C77 / 7287
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_28(uParam0, 1);
	Function_32(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_32(var uParam0, int iParam1) //Position: 0x1C98 / 7320
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_33(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1CAB / 7339
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_34(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_34(int iParam0) //Position: 0x1D26 / 7462
{
	char* cVar0[16];
	
	if (!Function_35())
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

bool Function_35() //Position: 0x1D65 / 7525
{
	if (Function_4(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

struct<32> Function_36(char* cParam0, bool bParam1) //Position: 0x1D80 / 7552
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_37(int iParam0, var uParam1, char* cParam2, var uParam3) //Position: 0x1D99 / 7577
{
	int iVar0;
	
	strcpy(uParam1[iParam0140] + 8, cParam2, 8);
	(*uParam1)[iParam0140] = iParam0;
	uParam1[iParam0140]->f_60 = uParam3;
	while (iVar0 <= 10)
	{
		if (!Global_84611[iParam0140].f_64)
		{
			(*&Global_84611[iParam0140] + 16)[iVar0] = 0;
		}
		iVar0++;
	}
}

bool Function_38() //Position: 0x1DEC / 7660
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_39(int iParam0) //Position: 0x1DF5 / 7669
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

