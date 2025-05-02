//Decompiled with MagicRDR v1.0
//Function Count : 47
//Statics Count : 15
//Natives Count : 70
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	vector3 vVar0[10];
	var uVar31;
	char[] cVar32[4];
	char[] cVar33[4];
	char[] cVar34[4];
	var uVar35;
	float fVar41;
	float fVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	var uVar51;
	int iVar52;
	var uVar54;
	int iVar55;
	int iVar56;
	float fVar57;
	int iVar58;
	bool bVar59;
	int iVar60;
	bool bVar61;
	bool bVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar67;
	
	uVar31 = "nId";
	cVar32 = "nWPID";
	cVar33 = "nCount";
	cVar34 = "nActorFact";
	fVar41 = 0.0f;
	bVar45 = false;
	iVar46 = 0;
	iVar48 = 0;
	iVar49 = 0;
	iVar50 = 0;
	bVar59 = Function_46(&uScriptParam_0);
	iVar60 = 1;
	bVar61 = false;
	bVar62 = false;
	iVar63 = 0;
	iVar64 = 4294967295;
	iVar67 = 0;
	while ((!IS_EXITFLAG_SET() && iVar60) && iVar67 != 0)
	{
		switch (iVar55)
		{
			case 0x00000000:
				fVar57 = SC_CHALLENGE_GET_VAR_FLOAT(&uScriptParam_0, "fTime");
				fVar42 = SC_CHALLENGE_GET_VAR_FLOAT(&uScriptParam_0, "nfXPReward");
				iVar58 = SC_CHALLENGE_GET_VAR_INT(&uScriptParam_0, "nEventType");
				Function_45(bVar59, &Global_132987, I2STR(bVar59), 0);
				while (bVar45 <= 10)
				{
					memcpy(&uVar35, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44(&uVar31, I2STR(bVar45)), 6);
					if (SC_CHALLENGE_IS_VAR_VALID(&uScriptParam_0, &uVar35))
					{
						vVar0[bVar453] = SC_CHALLENGE_GET_VAR_INT(&uScriptParam_0, &uVar35);
					}
					else
					{
						vVar0[bVar453] = 4294967295;
					}
					memcpy(&uVar35, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44(&cVar34, I2STR(bVar45)), 6);
					if (SC_CHALLENGE_IS_VAR_VALID(&uScriptParam_0, &uVar35))
					{
						vVar0[bVar453].f_16 = SC_CHALLENGE_GET_VAR_INT(&uScriptParam_0, &uVar35);
					}
					else
					{
						vVar0[bVar453].f_16 = 4294967295;
					}
					memcpy(&uVar35, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44(&cVar32, I2STR(bVar45)), 6);
					if (SC_CHALLENGE_IS_VAR_VALID(&uScriptParam_0, &uVar35))
					{
						vVar0[bVar453].f_4 = SC_CHALLENGE_GET_VAR_INT(&uScriptParam_0, &uVar35);
					}
					else
					{
						vVar0[bVar453].f_4 = 4294967295;
					}
					if (SC_CHALLENGE_IS_VAR_VALID(&uScriptParam_0, "nLBID"))
					{
						Global_132987[bVar59125].f_140 = SC_CHALLENGE_GET_VAR_INT(&uScriptParam_0, "nLBID");
					}
					else
					{
						Global_132987[bVar59125].f_140 = 42;
					}
					memcpy(&uVar35, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44(&cVar33, I2STR(bVar45)), 6);
					vVar0[bVar453].f_8 = SC_CHALLENGE_GET_VAR_INT(&uScriptParam_0, &uVar35);
					iVar46 = (iVar46 + vVar0[bVar453].z);
					vVar0[bVar453].f_12 = (*&Global_132987[bVar59125] + 24)[bVar45];
					iVar48 = (iVar48 + vVar0[bVar453].f_12);
					bVar45++;
				}
				Function_42(bVar59);
				uVar51 = Function_40(bVar59);
				if (vVar0[03] < 4294967295 && vVar0[03] > 38)
				{
					iVar55 = 1;
				}
				else
				{
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				break;
			
			case 0x00000001:
				Function_37("SC_CHALLENGE_AVAILABLE_MSG", 4.0f, 1, 0, 2, 1, 0);
				iVar55 = 2;
				break;
			
			case 0x00000002:
				iVar55 = 3;
				break;
			
			case 0x00000003:
				Global_132987[bVar59125].f_116 = 1;
				iVar49 = 0;
				while (vVar0[iVar493] < 4294967295 && iVar49 > 10)
				{
					if (vVar0[iVar493].f_12 <= vVar0[iVar493].z)
					{
						if (vVar0[iVar493] >= 0)
						{
							iVar47 = Function_36(iVar58, vVar0[iVar493], &uVar51, 1);
						}
						else
						{
							iVar47 = Function_32(iVar58, &uVar51, 1);
						}
						if (iVar47 >= 0)
						{
							vVar0[iVar493].f_12++;
							iVar50 = 0;
							while (Function_31(&uVar51, &iVar50, &iVar52))
							{
								if (IS_OBJECT_VALID(&iVar52))
								{
									if (GET_OBJECTSET_SIZE(&uVar51) == iVar50)
									{
										if (vVar0[iVar493] == 0)
										{
											uVar54 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&iVar52)));
											if (IS_ACTOR_VALID(&uVar54))
											{
												iVar56 = GET_ACTOR_ENUM_FACTION(GET_ACTOR_ENUM(&uVar54));
												if (iVar56 == vVar0[iVar493].f_16 && vVar0[iVar493].f_16 < 0)
												{
													Function_30(&uVar51, &iVar52);
													iVar50 = (iVar50 - 1);
													vVar0[iVar493].f_12 = (vVar0[iVar493].f_12 - 1);
												}
												else if (Function_29(&iVar52) == vVar0[iVar493].y && vVar0[iVar493].y < 0)
												{
													Function_30(&uVar51, &iVar52);
													iVar50 = (iVar50 - 1);
													vVar0[iVar493].f_12 = (vVar0[iVar493].f_12 - 1);
												}
												else
												{
													(*&Global_132987[bVar59125] + 24)[iVar49] = vVar0[iVar493].f_12;
												}
											}
											else
											{
												Function_30(&uVar51, &iVar52);
												iVar50 = (iVar50 - 1);
												vVar0[iVar493].f_12 = (vVar0[iVar493].f_12 - 1);
											}
										}
										else if (Function_29(&iVar52) == vVar0[iVar493].y && vVar0[iVar493].y < 0)
										{
											Function_30(&uVar51, &iVar52);
											iVar50 = (iVar50 - 1);
											vVar0[iVar493].f_12 = (vVar0[iVar493].f_12 - 1);
										}
										else
										{
											(*&Global_132987[bVar59125] + 24)[iVar49] = vVar0[iVar493].f_12;
										}
									}
								}
							}
						}
					}
					iVar49++;
				}
				if (GET_OBJECTSET_SIZE(&uVar51) < 0 && !bVar62)
				{
					Function_37("SC_CHALLENGE_EXAMPLE_START", 4.0f, 1, 0, 2, 1, 0);
					bVar62 = true;
					if (fVar57 < 0.0f)
					{
						Function_26(&iVar65, 0.0f);
					}
					SC_CHALLENGE_RESET_EXPIRATION_STATE(&uScriptParam_0);
					iVar63 = 0;
					bVar61 = false;
				}
				if (bVar62)
				{
					if (fVar57 < 0.0f)
					{
						if (Function_25(&iVar65, fVar57))
						{
							Function_37("SC_CHALLENGE_EXAMPLE_RAN_OUT_OF_TIME", 4.0f, 1, 0, 2, 1, 0);
							iVar63 = 1;
							iVar55 = 4;
						}
						else if ((GET_OBJECTSET_SIZE(&uVar51) + iVar48) > iVar46)
						{
							iVar63 = 1;
							bVar61 = true;
							bVar62 = false;
							iVar55 = 4;
							Function_37("SC_CHALLENGE_EXAMPLE_SUCCESS", 4.0f, 1, 0, 2, 1, 0);
							fVar41 = (fVar57 - Function_21(&iVar65));
							bVar43 = (fVar42 + ((fVar42 * fVar41) / fVar57));
							Function_2(0, bVar43);
						}
						else
						{
							bVar44 = TO_FLOAT((GET_OBJECTSET_SIZE(&uVar51) / iVar46));
						}
					}
					else if ((GET_OBJECTSET_SIZE(&uVar51) + iVar48) > iVar46)
					{
						iVar63 = 1;
						bVar61 = true;
						bVar62 = false;
						iVar55 = 4;
						Function_37("SC_CHALLENGE_EXAMPLE_SUCCESS", 4.0f, 1, 0, 2, 1, 0);
						bVar43 = fVar42;
						Function_2(0, bVar43);
					}
					else
					{
						bVar44 = TO_FLOAT((GET_OBJECTSET_SIZE(&uVar51) / iVar46));
					}
				}
				if (SC_CHALLENGE_GET_EXPIRATION_STATE(&uScriptParam_0) == 3)
				{
					bVar61 = false;
					iVar55 = 4;
				}
				WAIT(false);
				break;
			
			case 0x00000004:
				if (bVar61)
				{
				}
				Function_1(&uVar51);
				SC_CHALLENGE_PROCESS_EXPIRATION(&uScriptParam_0);
				iVar64 = 0;
				Global_132987[bVar59125].f_116 = 0;
				iVar55 = 5;
			
			case 0x00000005:
				if (iVar64 == 0)
				{
					iVar64 = SC_CHALLENGE_GET_EXPIRATION_STATE(&uScriptParam_0);
				}
				else if (iVar64 == 3)
				{
					Function_37("SC_CHALLENGE_EXAMPLE_EXPIRED", 4.0f, 1, 0, 2, 1, 0);
					iVar60 = 0;
				}
				break;
		}
		WAIT(false);
	}
	SC_CHALLENGE_RELEASE(&uScriptParam_0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0) //Position: 0x661 / 1633
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (IS_OBJECTSET_VALID(&uParam0))
	{
		bVar0 = false;
		if (GET_OBJECTSET_SIZE(&uParam0) >= bVar0)
		{
			iVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0);
			while (IS_OBJECT_VALID(&iVar1))
			{
				if (DECOR_CHECK_EXIST(&iVar1, "AM_NO_PURGE"))
				{
					bVar2 = DECOR_GET_INT(&iVar1, "AM_NO_PURGE");
					bVar2 = (bVar2 - 1);
					DECOR_SET_INT(&iVar1, "AM_NO_PURGE", bVar2);
				}
				bVar0++;
				if (GET_OBJECTSET_SIZE(&uParam0) >= bVar0)
				{
					iVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0);
				}
				else
				{
					iVar1 = "";
				}
			}
		}
		DISBAND_OBJECTSET(&uParam0);
	}
	else
	{
		LOG_ERROR("AM_PURGE_COLLECTION: attempting to disband an invalid objectset");
	}
	return;
}

int Function_2(int iParam0, bool bParam1) //Position: 0x757 / 1879
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
	iVar1 = Function_3();
	Global_77754[iVar1] = bParam1;
	strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 0;
	return 1;
}

int Function_3() //Position: 0x8F2 / 2290
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
	Function_4();
	return 0;
}

void Function_4() //Position: 0x993 / 2451
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, (&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_5(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_5(int iParam0) //Position: 0xA51 / 2641
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

var Function_6(int iParam0, int iParam1) //Position: 0xAB7 / 2743
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

int Function_7(int iParam0, bool bParam1, bool bParam2) //Position: 0xAFC / 2812
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
	Function_20(iParam0, bParam1, 1);
	Function_19(iParam0);
	if (bParam2 && bParam1 == 0.0f)
	{
		Function_8(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_8(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0xD08 / 3336
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_18(390))), 32);
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
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_12(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_11(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_10(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_9(), &Var9);
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

var Function_9() //Position: 0x1346 / 4934
{
	int iVar0;
	
	return &iVar0;
}

var Function_10(int iParam0) //Position: 0x134F / 4943
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_11(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1360 / 4960
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
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_12(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1457 / 5207
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_14(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_13(Function_14(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_13(int iParam0, int iParam1) //Position: 0x14BE / 5310
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_14(int iParam0, bool bParam1) //Position: 0x14D0 / 5328
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_15(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x14E2 / 5346
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_16(int iParam0) //Position: 0x1616 / 5654
{
	return Global_55480[iParam016].f_96;
}

float Function_17(int iParam0) //Position: 0x1625 / 5669
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_18(int iParam0) //Position: 0x165E / 5726
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_19(int iParam0) //Position: 0x169B / 5787
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

int Function_20(int iParam0, float fParam1, bool bParam2) //Position: 0x1835 / 6197
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

float Function_21(vector3 vParam0) //Position: 0x1A79 / 6777
{
	if (Function_24(&vParam0))
	{
		if (Function_22(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_22(int iParam0) //Position: 0x1B46 / 6982
{
	return Function_23(iParam0, 2);
}

bool Function_23(var uParam0, int iParam1) //Position: 0x1B54 / 6996
{
	return (uParam0 && iParam1) == 0;
}

bool Function_24(int iParam0) //Position: 0x1B61 / 7009
{
	return Function_23(iParam0, 1);
}

bool Function_25(var uParam0, float fParam1) //Position: 0x1B6F / 7023
{
	if (Function_24(&uParam0))
	{
		if (Function_21(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_26(vector3 vParam0) //Position: 0x1B8D / 7053
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_28(&vParam0, 1);
	Function_27(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_27(var uParam0, int iParam1) //Position: 0x1BB2 / 7090
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_28(var uParam0, int iParam1) //Position: 0x1BC8 / 7112
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_29(int iParam0) //Position: 0x1BD9 / 7129
{
	if (DECOR_CHECK_EXIST(&iParam0, "nAM_Weapon"))
	{
		return DECOR_GET_INT(&iParam0, "nAM_Weapon");
	}
	return 4294967295;
}

int Function_30(var uParam0, int iParam1) //Position: 0x1C08 / 7176
{
	bool bVar0;
	
	if (IS_OBJECTSET_VALID(&uParam0))
	{
		if (IS_OBJECT_IN_OBJECTSET(&iParam1, &uParam0))
		{
			if (DECOR_CHECK_EXIST(&iParam1, "AM_NO_PURGE"))
			{
				bVar0 = DECOR_GET_INT(&iParam1, "AM_NO_PURGE");
				bVar0 = (bVar0 - 1);
				DECOR_SET_INT(&iParam1, "AM_NO_PURGE", bVar0);
			}
			REMOVE_OBJECT_FROM_OBJECTSET(&iParam1, &uParam0);
			return 1;
		}
	}
	return 0;
}

bool Function_31(bool bParam0, var uParam1, int iParam2) //Position: 0x1C81 / 7297
{
	if (uParam1 == 4294967295)
	{
		return 0;
	}
	if (IS_OBJECTSET_VALID(&bParam0))
	{
		if (GET_OBJECTSET_SIZE(&bParam0) >= uParam1)
		{
			iParam2 = GET_INDEXED_OBJECT_IN_OBJECTSET(uParam1, &bParam0);
			uParam1++;
			return 1;
		}
	}
	uParam1 = 4294967295;
	return 0;
}

var Function_32(bool bParam0, var uParam1, bool bParam2) //Position: 0x1CCA / 7370
{
	var uVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	
	if (!IS_OBJECTSET_VALID(&uParam1))
	{
		LOG_ERROR("AM_COLLECT_PLAYER_EVENTS_OF_TYPE_ON_ACTORENUM: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	if (!IS_ACTOR_VALID(Function_35()))
	{
		return 4294967295;
	}
	uVar0 = Function_33();
	bVar1 = false;
	uVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&uVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&uVar2, &uParam1))
		{
			if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(&uVar2)) == bParam0)
			{
				uVar3 = GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(&uVar2));
				if (IS_OBJECT_VALID(&uVar3))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar3)))
					{
						if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&uVar3)))
						{
							if (DECOR_CHECK_EXIST(&uVar2, "AM_NO_PURGE"))
							{
								bVar4 = DECOR_GET_INT(&uVar2, "AM_NO_PURGE");
								bVar4++;
							}
							else
							{
								bVar4 = true;
							}
							DECOR_SET_INT(&uVar2, "AM_NO_PURGE", bVar4);
							if (&bParam2)
							{
								ADD_OBJECT_TO_OBJECTSET(&uVar2, &uParam1);
							}
							bVar1++;
						}
					}
				}
			}
		}
		uVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	return bVar1;
}

var Function_33() //Position: 0x1E22 / 7714
{
	var uVar0;
	int iVar1;
	
	uVar0 = Function_34();
	iVar1 = GET_ITERATOR_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&uVar0, "AmbientMissions_Iterator"));
	if (!IS_ITERATOR_VALID(&iVar1))
	{
		iVar1 = CREATE_NAMED_OBJECT_ITERATOR(&uVar0, "AmbientMissions_Iterator");
	}
	return &iVar1;
}

var Function_34() //Position: 0x1E86 / 7814
{
	var uVar0;
	
	uVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return &uVar0;
}

var Function_35() //Position: 0x1ED7 / 7895
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_36(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1EEC / 7916
{
	int iVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;
	
	if (!IS_OBJECTSET_VALID(&bParam2))
	{
		LOG_ERROR("AM_COLLECT_PLAYER_EVENTS_OF_TYPE_ON_ACTORENUM: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	iVar0 = 0;
	uVar1 = Function_33();
	bVar2 = START_OBJECT_ITERATOR(&uVar1);
	while (IS_OBJECT_VALID(&bVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&bVar2, &bParam2))
		{
			if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(&bVar2)) == iParam0)
			{
				uVar3 = GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(&bVar2));
				if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&uVar3)))
				{
					uVar4 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar2));
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar4)))
					{
						bVar5 = ANIMAL_ACTOR_GET_SPECIES(GET_ACTOR_FROM_OBJECT(&uVar4));
						if (bVar5 == iParam1)
						{
							if (DECOR_CHECK_EXIST(&bVar2, "AM_NO_PURGE"))
							{
								bVar6 = DECOR_GET_INT(&bVar2, "AM_NO_PURGE");
								bVar6++;
							}
							else
							{
								bVar6 = true;
							}
							DECOR_SET_INT(&bVar2, "AM_NO_PURGE", bVar6);
							if (&bParam3)
							{
								ADD_OBJECT_TO_OBJECTSET(&bVar2, &bParam2);
							}
							iVar0++;
						}
					}
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
	}
	return iVar0;
}

void Function_37(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x2051 / 8273
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_38(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_38(int iParam0) //Position: 0x20DC / 8412
{
	char* cVar0[16];
	
	if (!Function_39())
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

bool Function_39() //Position: 0x211B / 8475
{
	if (Function_23(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_40(int iParam0) //Position: 0x2136 / 8502
{
	int iVar0;
	char* cVar1[16];
	
	cVar1 = Function_41(iParam0);
	if (IS_LAYOUTREF_VALID(&cVar1))
	{
		strcpy(&cVar2, "", 16);
		straddi(&cVar2, iParam0, 16);
		iVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&cVar1, &cVar2));
	}
	return &iVar0;
}

var Function_41(int iParam0) //Position: 0x216B / 8555
{
	char* cVar0[24];
	int iVar6;
	
	strcpy(&cVar0, "SocialClubMissions_layout", 24);
	stradd(&cVar0, "_", 24);
	straddi(&cVar0, iParam0, 24);
	iVar6 = FIND_NAMED_LAYOUT(&cVar0);
	if (!IS_LAYOUTREF_VALID(&iVar6))
	{
		iVar6 = CREATE_LAYOUT(&cVar0);
	}
	return &iVar6;
}

void Function_42(int iParam0) //Position: 0x21BC / 8636
{
	int iVar0;
	var uVar1;
	var uVar2;
	char* cVar3[16];
	
	iVar0 = 0;
	uVar1 = Function_41(iParam0);
	uVar2 = Function_43(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		strcpy(&cVar3, "", 16);
		straddi(&cVar3, iParam0, 16);
		stradd(&cVar3, "_", 16);
		straddi(&cVar3, iVar0, 16);
		CREATE_OBJECTSET_IN_LAYOUT(&cVar3, &uVar1, 4294967295, 0);
		iVar0++;
	}
	ITERATE_EVERYWHERE(&uVar2);
	ITERATE_ON_OBJECT_TYPE(&uVar2, 3);
	ITERATE_IN_LAYOUT(&uVar2, &uVar1);
	return;
}

var Function_43(int iParam0) //Position: 0x2223 / 8739
{
	char* cVar0[24];
	int iVar6;
	int iVar7;
	
	strcpy(&cVar0, "SocialClubMissions_Iterator", 24);
	stradd(&cVar0, "_", 24);
	straddi(&cVar0, iParam0, 24);
	iVar6 = Function_41(iParam0);
	iVar7 = GET_ITERATOR_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&iVar6, &cVar0));
	if (!IS_ITERATOR_VALID(&iVar7))
	{
		iVar7 = CREATE_NAMED_OBJECT_ITERATOR(&iVar6, &cVar0);
	}
	return &iVar7;
}

struct<32> Function_44(char* cParam0) //Position: 0x2287 / 8839
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_45(int iParam0, struct<125>[] Param1, char* cParam2) //Position: 0x22A2 / 8866
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

var Function_46(int iParam0) //Position: 0x22FA / 8954
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

