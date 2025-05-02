//Decompiled with MagicRDR v1.0
//Function Count : 48
//Statics Count : 10
//Natives Count : 72
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
	char* cScriptParam_0 = NULL;
#endregion

void main() //Position: 0x0 / 0
{
	struct<5> Var0[10];
	var uVar51;
	char* cVar52;
	char* cVar53;
	char* cVar54;
	var uVar55;
	float fVar61;
	float fVar62;
	bool bVar63;
	bool bVar64;
	bool bVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	bool bVar71;
	bool bVar72;
	bool bVar74;
	int iVar75;
	int iVar76;
	float fVar77;
	int iVar78;
	bool bVar79;
	int iVar80;
	bool bVar81;
	bool bVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar88;
	
	uVar51 = "nId";
	cVar52 = "nWPID";
	cVar53 = "nCount";
	cVar54 = "nActorFact";
	fVar61 = 0.0f;
	bVar65 = false;
	iVar66 = 0;
	iVar68 = 0;
	iVar69 = 0;
	iVar70 = 0;
	bVar79 = Function_47(&cScriptParam_0);
	iVar80 = 1;
	bVar81 = false;
	bVar82 = false;
	iVar83 = 0;
	iVar84 = 4294967295;
	iVar88 = Function_46();
	while ((!IS_EXITFLAG_SET() && iVar80) && iVar88 != Function_46())
	{
		switch (iVar75)
		{
			case 0x00000000:
				fVar77 = SC_CHALLENGE_GET_VAR_FLOAT(cScriptParam_0, "fTime");
				fVar62 = SC_CHALLENGE_GET_VAR_FLOAT(cScriptParam_0, "nfXPReward");
				iVar78 = SC_CHALLENGE_GET_VAR_INT(cScriptParam_0, "nEventType");
				Function_45(bVar79, &Global_84611, I2STR(bVar79), 0);
				while (bVar65 <= 10)
				{
					memcpy(&uVar55, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44(uVar51, I2STR(bVar65)), 6);
					if (SC_CHALLENGE_IS_VAR_VALID(cScriptParam_0, &uVar55))
					{
						Var0[bVar655] = SC_CHALLENGE_GET_VAR_INT(cScriptParam_0, &uVar55);
					}
					else
					{
						Var0[bVar655] = 4294967295;
					}
					memcpy(&uVar55, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44(cVar54, I2STR(bVar65)), 6);
					if (SC_CHALLENGE_IS_VAR_VALID(cScriptParam_0, &uVar55))
					{
						Var0[bVar655].f_16 = SC_CHALLENGE_GET_VAR_INT(cScriptParam_0, &uVar55);
					}
					else
					{
						Var0[bVar655].f_16 = 4294967295;
					}
					memcpy(&uVar55, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44(cVar52, I2STR(bVar65)), 6);
					if (SC_CHALLENGE_IS_VAR_VALID(cScriptParam_0, &uVar55))
					{
						Var0[bVar655].f_4 = SC_CHALLENGE_GET_VAR_INT(cScriptParam_0, &uVar55);
					}
					else
					{
						Var0[bVar655].f_4 = 4294967295;
					}
					if (SC_CHALLENGE_IS_VAR_VALID(cScriptParam_0, "nLBID"))
					{
						Global_84611[bVar79140].f_88 = SC_CHALLENGE_GET_VAR_INT(cScriptParam_0, "nLBID");
					}
					else
					{
						Global_84611[bVar79140].f_88 = 42;
					}
					memcpy(&uVar55, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44(cVar53, I2STR(bVar65)), 6);
					Var0[bVar655].f_8 = SC_CHALLENGE_GET_VAR_INT(cScriptParam_0, &uVar55);
					iVar66 = (StackVal + iVar66);
					Var0[bVar655].f_12 = (*&Global_84611[bVar79140] + 16)[bVar65];
					iVar68 = (iVar68 + Var0[bVar655].f_12);
					bVar65++;
				}
				Function_42(bVar79);
				bVar71 = Function_40(bVar79);
				if (Var0[05] < 4294967295 && Var0[05] > 37)
				{
					iVar75 = 1;
				}
				else
				{
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				break;
			
			case 0x00000001:
				Function_39("SC_CHALLENGE_AVAILABLE_MSG", 4.0f, 1, 0, 2, 1, 0);
				iVar75 = 2;
				break;
			
			case 0x00000002:
				iVar75 = 3;
				break;
			
			case 0x00000003:
				Global_84611[bVar79140].f_64 = 1;
				iVar69 = 0;
				while (Var0[iVar695] < 4294967295 && iVar69 > 10)
				{
					if (StackVal <= Var0[iVar695].f_12)
					{
						if (Var0[iVar695] >= 0)
						{
							iVar67 = Function_38(iVar78, Var0[iVar695], &bVar71, 1);
						}
						else
						{
							iVar67 = Function_34(iVar78, &bVar71, 1);
						}
						if (iVar67 >= 0)
						{
							Var0[iVar695].f_12++;
							iVar70 = 0;
							while (Function_33(&bVar71, &iVar70, &bVar72))
							{
								if (IS_OBJECT_VALID(bVar72))
								{
									if (GET_OBJECTSET_SIZE(bVar71) == iVar70)
									{
										if (Var0[iVar695] == 0)
										{
											bVar74 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar72)));
											if (IS_ACTOR_VALID(bVar74))
											{
												iVar76 = GET_ACTOR_ENUM_FACTION(GET_ACTOR_ENUM(bVar74));
												if (iVar76 == Var0[iVar695].f_16 && Var0[iVar695].f_16 < 0)
												{
													Function_32(&bVar71, &bVar72);
													iVar70 = (iVar70 - 1);
													Var0[iVar695].f_12 = (Var0[iVar695].f_12 - 1);
												}
												else if (StackVal && StackVal == Function_31(bVar72) < 0)
												{
													Function_32(&bVar71, &bVar72);
													iVar70 = (iVar70 - 1);
													Var0[iVar695].f_12 = (Var0[iVar695].f_12 - 1);
												}
												else
												{
													(*&Global_84611[bVar79140] + 16)[iVar69] = Var0[iVar695].f_12;
												}
											}
											else
											{
												Function_32(&bVar71, &bVar72);
												iVar70 = (iVar70 - 1);
												Var0[iVar695].f_12 = (Var0[iVar695].f_12 - 1);
											}
										}
										else if (StackVal && StackVal == Function_31(bVar72) < 0)
										{
											Function_32(&bVar71, &bVar72);
											iVar70 = (iVar70 - 1);
											Var0[iVar695].f_12 = (Var0[iVar695].f_12 - 1);
										}
										else
										{
											(*&Global_84611[bVar79140] + 16)[iVar69] = Var0[iVar695].f_12;
										}
									}
								}
							}
						}
					}
					iVar69++;
				}
				if (GET_OBJECTSET_SIZE(bVar71) < 0 && !bVar82)
				{
					Function_39("SC_CHALLENGE_EXAMPLE_START", 4.0f, 1, 0, 2, 1, 0);
					bVar82 = true;
					if (fVar77 < 0.0f)
					{
						Function_28(&iVar85, 0.0f);
					}
					SC_CHALLENGE_RESET_EXPIRATION_STATE(cScriptParam_0);
					iVar83 = 0;
					bVar81 = false;
				}
				if (bVar82)
				{
					if (fVar77 < 0.0f)
					{
						if (Function_27(&iVar85, fVar77))
						{
							Function_39("SC_CHALLENGE_EXAMPLE_RAN_OUT_OF_TIME", 4.0f, 1, 0, 2, 1, 0);
							iVar83 = 1;
							iVar75 = 4;
						}
						else if ((GET_OBJECTSET_SIZE(bVar71) + iVar68) > iVar66)
						{
							iVar83 = 1;
							bVar81 = true;
							bVar82 = false;
							iVar75 = 4;
							Function_39("SC_CHALLENGE_EXAMPLE_SUCCESS", 4.0f, 1, 0, 2, 1, 0);
							fVar61 = (fVar77 - Function_23(&iVar85));
							bVar63 = (fVar62 + ((fVar62 * fVar61) / fVar77));
							if (Function_46())
							{
								Function_21(487, bVar63, 0);
							}
							else
							{
								Function_2(0, bVar63);
							}
						}
						else
						{
							bVar64 = TO_FLOAT((GET_OBJECTSET_SIZE(bVar71) / iVar66));
						}
					}
					else if ((GET_OBJECTSET_SIZE(bVar71) + iVar68) > iVar66)
					{
						iVar83 = 1;
						bVar81 = true;
						bVar82 = false;
						iVar75 = 4;
						Function_39("SC_CHALLENGE_EXAMPLE_SUCCESS", 4.0f, 1, 0, 2, 1, 0);
						bVar63 = fVar62;
						if (Function_46())
						{
							Function_21(487, bVar63, 0);
						}
						else
						{
							Function_2(0, bVar63);
						}
					}
					else
					{
						bVar64 = TO_FLOAT((GET_OBJECTSET_SIZE(bVar71) / iVar66));
					}
				}
				if (SC_CHALLENGE_GET_EXPIRATION_STATE(cScriptParam_0) == 3)
				{
					bVar81 = false;
					iVar75 = 4;
				}
				WAIT(false);
				break;
			
			case 0x00000004:
				if (bVar81)
				{
				}
				Function_1(&bVar71);
				SC_CHALLENGE_PROCESS_EXPIRATION(cScriptParam_0);
				iVar84 = 0;
				Global_84611[bVar79140].f_64 = 0;
				iVar75 = 5;
			
			case 0x00000005:
				if (iVar84 == 0)
				{
					iVar84 = SC_CHALLENGE_GET_EXPIRATION_STATE(cScriptParam_0);
				}
				else if (iVar84 == 3)
				{
					Function_39("SC_CHALLENGE_EXAMPLE_EXPIRED", 4.0f, 1, 0, 2, 1, 0);
					iVar80 = 0;
				}
				break;
		}
		WAIT(false);
	}
	SC_CHALLENGE_RELEASE(cScriptParam_0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x662 / 1634
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_OBJECTSET_VALID(*iParam0))
	{
		bVar0 = false;
		if (GET_OBJECTSET_SIZE(*iParam0) >= bVar0)
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *iParam0);
			while (IS_OBJECT_VALID(bVar1))
			{
				if (DECOR_CHECK_EXIST(bVar1, "AM_NO_PURGE"))
				{
					bVar2 = DECOR_GET_INT(bVar1, "AM_NO_PURGE");
					bVar2 = (bVar2 - 1);
					DECOR_SET_INT(bVar1, "AM_NO_PURGE", bVar2);
				}
				bVar0++;
				if (GET_OBJECTSET_SIZE(*iParam0) >= bVar0)
				{
					bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *iParam0);
				}
				else
				{
					bVar1 = "";
				}
			}
		}
		DISBAND_OBJECTSET(*iParam0);
	}
	else
	{
		LOG_ERROR("AM_PURGE_COLLECTION: attempting to disband an invalid objectset");
	}
	return;
}

int Function_2(int iParam0, bool bParam1) //Position: 0x74B / 1867
{
	bool bVar0;
	int iVar1;
	
	Function_7(iParam0, bParam1, 0);
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
	iVar1 = Function_6(iParam0, 4294967295);
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
	iVar1 = Function_3();
	Global_49199[iVar1] = bParam1;
	strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 0;
	return 1;
}

int Function_3() //Position: 0x8D7 / 2263
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
	Function_4();
	return 0;
}

void Function_4() //Position: 0x976 / 2422
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
		Function_5(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_5(int iParam0) //Position: 0xA25 / 2597
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

var Function_6(int iParam0, int iParam1) //Position: 0xA83 / 2691
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

int Function_7(int iParam0, bool bParam1, bool bParam2) //Position: 0xAC4 / 2756
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
	Function_20(iParam0, bParam1, 1);
	Function_19(iParam0);
	if (bParam2 && bParam1 == 0.0f)
	{
		Function_8(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_8(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0xCCE / 3278
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_18(390))), 32);
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
					bVar19 = (Function_17(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_17(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_15(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_12(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_11(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_10(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_9(), &Var9);
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

var Function_9() //Position: 0x12FB / 4859
{
	int iVar0;
	
	return iVar0;
}

var Function_10(int iParam0) //Position: 0x1303 / 4867
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_11(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1314 / 4884
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_12(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1409 / 5129
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_14(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_13(Function_14(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_13(int iParam0, int iParam1) //Position: 0x146E / 5230
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_14(int iParam0, bool bParam1) //Position: 0x1480 / 5248
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_15(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1492 / 5266
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
	if (((Function_16(iParam0) != 19 || Function_16(iParam0) != 17) || Function_16(iParam0) != 10) || Function_16(iParam0) != 9)
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

int Function_16(int iParam0) //Position: 0x15C2 / 5570
{
	return Global_35278[iParam020].f_48;
}

float Function_17(int iParam0) //Position: 0x15D1 / 5585
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_18(int iParam0) //Position: 0x160A / 5642
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_19(int iParam0) //Position: 0x1647 / 5703
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

int Function_20(int iParam0, bool bParam1, bool bParam2) //Position: 0x17E1 / 6113
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

void Function_21(int iParam0, bool bParam1, int iParam2) //Position: 0x19FB / 6651
{
	Function_22(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_22(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x1A17 / 6679
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
	Function_20(iParam0, TO_FLOAT(bParam1), 1);
	Function_19(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_8(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, uParam3);
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

float Function_23(int iParam0) //Position: 0x1C37 / 7223
{
	if (Function_26(iParam0))
	{
		if (Function_24(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_24(int iParam0) //Position: 0x1CFF / 7423
{
	return Function_25(*iParam0, 2);
}

int Function_25(var uParam0, int iParam1) //Position: 0x1D0C / 7436
{
	return (uParam0 && iParam1) == 0;
}

bool Function_26(int iParam0) //Position: 0x1D19 / 7449
{
	return Function_25(*iParam0, 1);
}

bool Function_27(var uParam0, float fParam1) //Position: 0x1D26 / 7462
{
	if (Function_26(uParam0))
	{
		if (Function_23(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_28(var uParam0, float fParam1) //Position: 0x1D42 / 7490
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_30(uParam0, 1);
	Function_29(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_29(var uParam0, int iParam1) //Position: 0x1D63 / 7523
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_30(var uParam0, int iParam1) //Position: 0x1D76 / 7542
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_31(bool bParam0) //Position: 0x1D85 / 7557
{
	if (DECOR_CHECK_EXIST(bParam0, "nAM_Weapon"))
	{
		return DECOR_GET_INT(bParam0, "nAM_Weapon");
	}
	return 4294967295;
}

int Function_32(bool bParam0, bool bParam1) //Position: 0x1DB2 / 7602
{
	bool bVar0;
	
	if (IS_OBJECTSET_VALID(*bParam0))
	{
		if (IS_OBJECT_IN_OBJECTSET(*bParam1, *bParam0))
		{
			if (DECOR_CHECK_EXIST(*bParam1, "AM_NO_PURGE"))
			{
				bVar0 = DECOR_GET_INT(*bParam1, "AM_NO_PURGE");
				bVar0 = (bVar0 - 1);
				DECOR_SET_INT(*bParam1, "AM_NO_PURGE", bVar0);
			}
			REMOVE_OBJECT_FROM_OBJECTSET(*bParam1, *bParam0);
			return 1;
		}
	}
	return 0;
}

bool Function_33(var uParam0, int iParam1, int iParam2) //Position: 0x1E23 / 7715
{
	if (*iParam1 == 4294967295)
	{
		return 0;
	}
	if (IS_OBJECTSET_VALID(*uParam0))
	{
		if (GET_OBJECTSET_SIZE(*uParam0) >= *iParam1)
		{
			*iParam2 = GET_INDEXED_OBJECT_IN_OBJECTSET(*iParam1, *uParam0);
			*iParam1++;
			return 1;
		}
	}
	*iParam1 = 4294967295;
	return 0;
}

var Function_34(int iParam0, var uParam1, bool bParam2) //Position: 0x1E62 / 7778
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (!IS_OBJECTSET_VALID(*uParam1))
	{
		LOG_ERROR("AM_COLLECT_PLAYER_EVENTS_OF_TYPE_ON_ACTORENUM: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	if (!IS_ACTOR_VALID(Function_37()))
	{
		return 4294967295;
	}
	bVar0 = Function_35();
	bVar1 = false;
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bVar2, *uParam1))
		{
			if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bVar2)) == iParam0)
			{
				bVar3 = GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(bVar2));
				if (IS_OBJECT_VALID(bVar3))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar3)))
					{
						if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar3)))
						{
							if (DECOR_CHECK_EXIST(bVar2, "AM_NO_PURGE"))
							{
								bVar4 = DECOR_GET_INT(bVar2, "AM_NO_PURGE");
								bVar4++;
							}
							else
							{
								bVar4 = true;
							}
							DECOR_SET_INT(bVar2, "AM_NO_PURGE", bVar4);
							if (bParam2)
							{
								ADD_OBJECT_TO_OBJECTSET(bVar2, *uParam1);
							}
							bVar1++;
						}
					}
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	return bVar1;
}

var Function_35() //Position: 0x1FA5 / 8101
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = Function_36();
	bVar1 = GET_ITERATOR_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bVar0, "AmbientMissions_Iterator"));
	if (!IS_ITERATOR_VALID(bVar1))
	{
		bVar1 = CREATE_NAMED_OBJECT_ITERATOR(bVar0, "AmbientMissions_Iterator");
	}
	return bVar1;
}

var Function_36() //Position: 0x2002 / 8194
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

var Function_37() //Position: 0x204F / 8271
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_38(int iParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x2064 / 8292
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!IS_OBJECTSET_VALID(*uParam2))
	{
		LOG_ERROR("AM_COLLECT_PLAYER_EVENTS_OF_TYPE_ON_ACTORENUM: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	iVar0 = 0;
	bVar1 = Function_35();
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bVar2, *uParam2))
		{
			if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bVar2)) == iParam0)
			{
				bVar3 = GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(bVar2));
				if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar3)))
				{
					bVar4 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2));
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar4)))
					{
						bVar5 = ANIMAL_ACTOR_GET_SPECIES(GET_ACTOR_FROM_OBJECT(bVar4));
						if (bVar5 == iParam1)
						{
							if (DECOR_CHECK_EXIST(bVar2, "AM_NO_PURGE"))
							{
								bVar6 = DECOR_GET_INT(bVar2, "AM_NO_PURGE");
								bVar6++;
							}
							else
							{
								bVar6 = true;
							}
							DECOR_SET_INT(bVar2, "AM_NO_PURGE", bVar6);
							if (bParam3)
							{
								ADD_OBJECT_TO_OBJECTSET(bVar2, *uParam2);
							}
							iVar0++;
						}
					}
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	return iVar0;
}

void Function_39(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x21B2 / 8626
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

var Function_40(int iParam0) //Position: 0x21FD / 8701
{
	int iVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar1 = Function_41(iParam0);
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		strcpy(&cVar2, "", 16);
		straddi(&cVar2, iParam0, 16);
		iVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bVar1, &cVar2));
	}
	return iVar0;
}

var Function_41(int iParam0) //Position: 0x222D / 8749
{
	char* cVar0[24];
	bool bVar6;
	
	strcpy(&cVar0, "SocialClubMissions_layout", 24);
	stradd(&cVar0, "_", 24);
	straddi(&cVar0, iParam0, 24);
	bVar6 = FIND_NAMED_LAYOUT(&cVar0);
	if (!IS_LAYOUTREF_VALID(bVar6))
	{
		bVar6 = CREATE_LAYOUT(&cVar0);
	}
	return bVar6;
}

void Function_42(int iParam0) //Position: 0x227A / 8826
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	char* cVar3[16];
	
	iVar0 = 0;
	bVar1 = Function_41(iParam0);
	bVar2 = Function_43(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		strcpy(&cVar3, "", 16);
		straddi(&cVar3, iParam0, 16);
		stradd(&cVar3, "_", 16);
		straddi(&cVar3, iVar0, 16);
		CREATE_OBJECTSET_IN_LAYOUT(&cVar3, bVar1, 4294967295, 0);
		iVar0++;
	}
	ITERATE_EVERYWHERE(bVar2);
	ITERATE_ON_OBJECT_TYPE(bVar2, 3);
	ITERATE_IN_LAYOUT(bVar2, bVar1);
	return;
}

var Function_43(int iParam0) //Position: 0x22DA / 8922
{
	char* cVar0[24];
	bool bVar6;
	bool bVar7;
	
	strcpy(&cVar0, "SocialClubMissions_Iterator", 24);
	stradd(&cVar0, "_", 24);
	straddi(&cVar0, iParam0, 24);
	bVar6 = Function_41(iParam0);
	bVar7 = GET_ITERATOR_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bVar6, &cVar0));
	if (!IS_ITERATOR_VALID(bVar7))
	{
		bVar7 = CREATE_NAMED_OBJECT_ITERATOR(bVar6, &cVar0);
	}
	return bVar7;
}

struct<32> Function_44(char* cParam0, char* cParam1) //Position: 0x2337 / 9015
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_45(int iParam0, var uParam1, char* cParam2, var uParam3) //Position: 0x2350 / 9040
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

bool Function_46() //Position: 0x23A3 / 9123
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_47(int iParam0) //Position: 0x23AC / 9132
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

