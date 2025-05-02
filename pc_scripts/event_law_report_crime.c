//Decompiled with MagicRDR v1.0
//Function Count : 155
//Statics Count : 26
//Natives Count : 372
//Parameters Count : 10

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
	int iLocal_13 = 0;
	bool bLocal_14 = false;
	int iLocal_15 = 0;
	struct<37> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	struct<2> Var5;
	struct<2> Var7;
	struct<2> Var9;
	struct<2> Var11;
	struct<2> Var13;
	struct<2> Var15;
	struct<2> Var17;
	var uVar19;
	var uVar21;
	int iVar23;
	var uVar24;
	bool bVar25;
	bool bVar26;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	int iVar36;
	int iVar37;
	float fVar51;
	var uVar52;
	float fVar53;
	bool bVar54;
	float fVar55;
	var uVar56;
	var uVar57;
	var uVar58;
	int iVar59;
	var uVar60;
	var uVar61;
	var uVar62;
	bool bVar63;
	bool bVar64;
	bool bVar65;
	bool bVar66;
	float fVar67;
	float fVar68;
	float fVar69;
	bool bVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	bool bVar74;
	struct<2> Var75;
	int iVar77;
	float fVar78;
	struct<2> Var79;
	var uVar81;
	var uVar82;
	float fVar83;
	int iVar84;
	var uVar85;
	var uVar86;
	var uVar88;
	var uVar89;
	int iVar91;
	var uVar92;
	struct<2> Var93;
	
	iLocal_13 = 0;
	if (!IS_CRIME_VALID(&ScriptParam_0))
	{
		TERMINATE_THIS_SCRIPT();
	}
	if (!Function_154(GET_CRIME_TYPE(&ScriptParam_0)))
	{
		TERMINATE_THIS_SCRIPT();
	}
	Global_6647 = 1;
	iVar37 = 6;
	bVar63 = false;
	bVar64 = false;
	bVar66 = true;
	fVar67 = -1.0f;
	fVar69 = GET_CURRENT_GAME_TIME();
	if (!Function_153(Global_119935, 1))
	{
		Function_147(&Global_54076, 1, 2, 0);
	}
	uVar57 = Function_145(&ScriptParam_0 + 8, 32768);
	bVar70 = Function_144(ScriptParam_0.f_36);
	Function_142(&iVar37, "pointing", 5, 0);
	Function_142(&iVar37, "custom/pointing", 8, 0);
	Function_142(&iVar37, "witness", 5, 0);
	Function_142(&iVar37, "witness_fema", 5, 0);
	Function_142(&iVar37, "custom/witness", 8, 0);
	Function_141(&iVar37, bVar70, 3, 0);
	fVar53 = 3,5f;
	if (Function_136(&iVar37))
	{
		bVar64 = true;
	}
	if (IS_OBJECT_VALID(&ScriptParam_0 + 16))
	{
		GET_OBJECT_POSITION(&ScriptParam_0 + 16, &Var3);
		GET_OBJECT_POSITION(&ScriptParam_0 + 16, &Var7);
		if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(&ScriptParam_0 + 16), "road"))
		{
			bVar32 = true;
			fVar53 = 5.0f;
		}
	}
	else
	{
		bVar29 = true;
		fVar55 = (GET_CURRENT_GAME_TIME() + 30.0f);
		iLocal_15 = 1;
	}
	Function_127(&bVar29, &bVar26, &uVar60, &Var15, &Var17);
	iVar2 = GET_CRIME_CRIMINAL(&ScriptParam_0);
	GET_CRIME_POSITION(&ScriptParam_0, &uVar19);
	GET_POSITION(&iVar2, &uVar21);
	iVar72 = 0;
	PLAYER_RUMBLE("RUMBLE_LGT", 4294967295, 0);
	while (!IS_EXITFLAG_SET())
	{
		iVar73 = 250;
		if (!bVar64)
		{
			if (Function_136(&iVar37))
			{
				bVar64 = true;
			}
		}
		if (!IS_CRIME_VALID(&ScriptParam_0) && iVar72 == 11)
		{
			if (iVar72 != 14)
			{
				bVar33 = true;
				iVar72 = 14;
				iVar73 = 0;
			}
		}
		else if (Global_6621)
		{
			if (iVar72 != 14)
			{
				bVar33 = true;
				iVar72 = 14;
				iVar73 = 0;
			}
		}
		else if (Global_6646 && iVar72 > 5)
		{
			if (iVar72 != 14)
			{
				SET_CRIME_WITNESSED(&ScriptParam_0, 3);
				Function_126();
				iVar72 = 14;
				bVar28 = true;
				iVar73 = 0;
			}
		}
		else if (!iVar72 != 0)
		{
			GET_OBJECT_POSITION(&iVar0, &Var3);
			GET_POSITION(&iVar2, &Var5);
			if (!IS_ACTOR_VALID(&iVar0))
			{
				if (iVar72 != 14)
				{
					bVar33 = true;
					iVar72 = 14;
					iVar73 = 0;
				}
			}
			else if (!IS_ACTOR_ALIVE(&iVar0))
			{
				if (iVar72 != 14)
				{
					iVar72 = 14;
					iVar73 = 0;
				}
			}
			else if ((IS_ACTOR_HOGTIED(&iVar0) || IS_ACTOR_CRIPPLED(&iVar0, 3)) || IS_ACTOR_CRIPPLED(&iVar0, 4))
			{
				if (iVar72 != 14)
				{
					iVar72 = 14;
					iVar73 = 0;
				}
			}
			if (!bVar65 && iVar72 == 14)
			{
				if (Global_43790 != iVar23)
				{
					bVar74 = false;
					if (iVar23 != 3 || iVar23 != 4)
					{
						if (Global_43790 == 3 && Global_43790 == 4)
						{
							Function_125(GET_PLAYER_ACTOR(0));
							if (VDIST(Var3, Function_125(GET_PLAYER_ACTOR(0))) <= 40.0f)
							{
								bVar74 = true;
							}
						}
					}
					else if (Global_43790 != 3 || Global_43790 != 4)
					{
						Var75 = Var3;
						Function_125(GET_PLAYER_ACTOR(0));
						if (VDIST(Var75, Function_125(GET_PLAYER_ACTOR(0))) <= 40.0f)
						{
							bVar74 = true;
						}
					}
					if (bVar74)
					{
						switch (iVar72)
						{
							case 0x00000005:
							case 0x00000004:
							case 0x00000003:
								bVar65 = true;
								fVar68 = (GET_CURRENT_GAME_TIME() + 1,5f);
								Function_124(&iVar0);
								iVar72 = 14;
								iVar73 = 0;
								break;
							
							case 0x00000001:
							case 0x00000002:
								bVar33 = true;
								iVar72 = 14;
								iVar73 = 0;
								break;
							}
					}
					iVar23 = Global_43790;
				}
			}
			if (!bVar29)
			{
				if (VDIST(Var3, Var7) > 17.0f)
				{
					if (VDIST(Var3, Var5) <= 80.0f || !bVar32)
					{
						MEMORY_PREFER_WALKING(&iVar0, 1);
					}
				}
			}
		}
		switch (iVar72)
		{
			case 0x00000000:
				if (GET_OBJECT_TYPE(&ScriptParam_0 + 8) == 24)
				{
					ACTIVATE_ACTOR_FOR_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&ScriptParam_0 + 8));
					Function_123(GET_PERS_CHAR_FROM_OBJECT(&ScriptParam_0 + 8), 1);
					iVar0 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&ScriptParam_0 + 8));
					REFERENCE_ACTOR(&iVar0);
					SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(GET_PERS_CHAR_FROM_OBJECT(&ScriptParam_0 + 8), 1);
				}
				else
				{
					iVar0 = GET_ACTOR_FROM_OBJECT(&ScriptParam_0 + 8);
					REFERENCE_ACTOR(&iVar0);
					SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iVar0, 1);
				}
				REFERENCE_ACTOR(&iVar0);
				TASK_PRIORITY_SET(&iVar0, true);
				SET_ACTOR_UPDATE_PRIORITY(&iVar0, false);
				SET_ACTOR_CAN_PLAY_GESTURES(&iVar0, false);
				iVar23 = Global_43790;
				TASK_CLEAR(&iVar0);
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iVar0)))
				{
					AI_QUICK_EXIT_GRINGO(&iVar0, 1);
				}
				if (MEMORY_GET_IS_VISIBLE(&iVar0, &iVar2))
				{
					bVar30 = true;
				}
				else if (IS_ACTOR_VALID(GET_VEHICLE(&iVar0)))
				{
					if (Function_122(&iVar0, GET_VEHICLE(&iVar0), 0))
					{
						bVar30 = true;
					}
				}
				if (bVar30)
				{
					switch (Global_41252[GET_CRIME_TYPE(&ScriptParam_0)11].f_36)
					{
						case 0x00000000:
						case 0x00000002:
						case 0x00000003:
							Function_121(StackVal, &iVar0, &iVar2, Var3, fVar53, bVar29, &fVar55);
							SAY_SINGLE_LINE_CONTEXT(&iVar0, 85, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
							GET_OBJECT_POSITION(&iVar0, &Var13);
							bVar54 = GET_CURRENT_GAME_TIME();
							iVar72 = 5;
							break;
						
						case 0x00000004:
							SAY_SINGLE_LINE_CONTEXT(&iVar0, 105, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
							ADD_BLIP_FOR_ACTOR(&iVar0, 344, 0, 2, 0);
							GET_POSITION(&iVar2, &Var5);
							TASK_FOLLOW_OBJECT_AT_DISTANCE(&iVar0, Function_120(), 8.0f, 4);
							SAY_SINGLE_LINE_CONTEXT(&iVar0, 85, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
							SET_BLIP_COLOR(GET_BLIP_ON_ACTOR(&iVar0), 1.0f, 1.0f, 1.0f, 0,5f);
							GET_OBJECT_POSITION(&iVar0, &Var13);
							bVar54 = GET_CURRENT_GAME_TIME();
							iVar72 = 4;
							break;
						
						default:
							break;
					}
				}
				else
				{
					if (IS_ACTOR_VALID(&iVar0))
					{
						if (!IS_ACTOR_RIDING_VEHICLE(&iVar0))
						{
							TASK_GO_NEAR_COORD(&iVar0, &uVar19, fVar53, 4);
							TASK_PRIORITY_SET(&iVar0, true);
						}
						else
						{
							iVar36 = TASK_SEQUENCE_OPEN();
							TASK_VEHICLE_LEAVE(0);
							TASK_GO_NEAR_COORD(0, &uVar19, fVar53, 4);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&iVar0, iVar36);
							TASK_SEQUENCE_RELEASE(iVar36, 1);
							MEMORY_PREFER_WALKING(&iVar0, 1);
							TASK_PRIORITY_SET(&iVar0, true);
						}
					}
					SAY_SINGLE_LINE_CONTEXT(&iVar0, 61, 0, 1, 1, 2, 4294967295, 4294967295, 0, 1);
					GET_OBJECT_POSITION(&iVar0, &Var13);
					iVar72 = 1;
				}
				if (IS_ACTOR_VALID(&iVar0))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iVar0)))
					{
						ADD_BLIP_FOR_ACTOR(&iVar0, 344, 0, 2, 0);
					}
					if (!bVar30)
					{
						SET_BLIP_COLOR(GET_BLIP_ON_ACTOR(&iVar0), 1.0f, 1.0f, 1.0f, 0,5f);
						SET_BLIP_BLINK(GET_BLIP_ON_ACTOR(&iVar0), 1, 1, 5f);
					}
					GET_OBJECT_POSITION(&iVar0, &Var13);
					bVar54 = GET_CURRENT_GAME_TIME();
				}
				else
				{
					iVar72 = 14;
				}
				break;
			
			case 0x00000001:
				if (VDIST(Var13, Var3) < 2.0f)
				{
					Var13 = Var3;
					bVar54 = GET_CURRENT_GAME_TIME();
				}
				else if (GET_CURRENT_GAME_TIME() < (bVar54 + 10.0f))
				{
					Function_110(&ScriptParam_0, &iVar0, &uVar58, &Var3, &Var7, &Var13, &bVar54, &uVar61, &iVar72, &iVar73);
					break;
				}
				iVar77 = 0;
				if (Global_43790 == 4 && Global_43790 == 3)
				{
					if (Global_40000.f_72 > 2)
					{
						iVar77 = 1;
					}
				}
				if (!Function_109(&iVar2, 2) != &ScriptParam_0)
				{
					if (IS_ACTOR_VALID(&iVar0))
					{
						ScriptParam_0 = Function_109(&iVar2, 2);
						GET_CRIME_POSITION(&ScriptParam_0, &uVar19);
						TASK_GO_NEAR_COORD(&iVar0, &uVar19, fVar53, 4);
						TASK_PRIORITY_SET(&iVar0, true);
						SAY_SINGLE_LINE_CONTEXT(&iVar0, 61, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
					}
				}
				else if ((MEMORY_GET_IS_VISIBLE(&iVar0, &iVar2) || Function_104(&iVar0, fVar69, &uVar62, &fVar67)) || iVar77)
				{
					if (IS_ACTOR_VALID(&iVar0))
					{
						TASK_CLEAR(&iVar0);
						if (Function_102(&iVar0))
						{
							Function_101(&iVar0, &iVar2);
						}
					}
					SAY_SINGLE_LINE_CONTEXT(&iVar0, 60, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
					SET_BLIP_COLOR(GET_BLIP_ON_ACTOR(&iVar0), 1.0f, 1.0f, 1.0f, 1.0f);
					SET_BLIP_BLINK(GET_BLIP_ON_ACTOR(&iVar0), 1, 1, 5f);
					fVar51 = GET_CURRENT_GAME_TIME();
					iVar72 = 3;
				}
				else if (GET_TASK_STATUS(&iVar0, 61) == 0)
				{
					if (!IS_ACTOR_RIDING_VEHICLE(&iVar0))
					{
						TASK_GO_NEAR_COORD(&iVar0, &uVar21, 5.0f, 1);
						TASK_PRIORITY_SET(&iVar0, true);
					}
					else
					{
						iVar36 = TASK_SEQUENCE_OPEN();
						TASK_VEHICLE_LEAVE(0);
						TASK_GO_NEAR_COORD(0, &uVar21, 5.0f, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&iVar0, iVar36);
						TASK_SEQUENCE_RELEASE(iVar36, 1);
						MEMORY_PREFER_WALKING(&iVar0, 1);
						TASK_PRIORITY_SET(&iVar0, true);
					}
					GET_OBJECT_POSITION(&iVar0, &Var13);
					iVar72 = 2;
				}
				else if (!IS_CRIME_VALID(&ScriptParam_0))
				{
					bVar33 = true;
					iVar72 = 14;
				}
				else if (!IS_ACTOR_VALID(&iVar0))
				{
					iVar72 = 14;
				}
				break;
			
			case 0x00000002:
				if (VDIST(Var13, Var3) < 2.0f)
				{
					Var13 = Var3;
					bVar54 = GET_CURRENT_GAME_TIME();
				}
				else if (GET_TASK_STATUS(&iVar0, 59) != 1)
				{
					if (GET_CURRENT_GAME_TIME() < (bVar54 + 10.0f))
					{
						Function_110(&ScriptParam_0, &iVar0, &uVar58, &Var3, &Var7, &Var13, &bVar54, &uVar61, &iVar72, &iVar73);
						break;
					}
				}
				else
				{
					Var13 = Var3;
					bVar54 = GET_CURRENT_GAME_TIME();
				}
				if (!Function_109(&iVar2, 2) != &ScriptParam_0)
				{
					if (IS_ACTOR_VALID(&iVar0))
					{
						ScriptParam_0 = Function_109(&iVar2, 2);
						GET_CRIME_POSITION(&ScriptParam_0, &uVar19);
						TASK_GO_NEAR_COORD(&iVar0, &uVar19, fVar53, 4);
						TASK_PRIORITY_SET(&iVar0, true);
						SAY_SINGLE_LINE_CONTEXT(&iVar0, 61, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
					}
				}
				else if (MEMORY_GET_IS_VISIBLE(&iVar0, &iVar2) || Function_104(&iVar0, fVar69, &uVar62, &fVar67))
				{
					if (IS_ACTOR_VALID(&iVar0))
					{
						TASK_CLEAR(&iVar0);
						if (Function_102(&iVar0))
						{
							Function_101(&iVar0, &iVar2);
						}
					}
					SAY_SINGLE_LINE_CONTEXT(&iVar0, 60, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
					SET_BLIP_COLOR(GET_BLIP_ON_ACTOR(&iVar0), 1.0f, 1.0f, 1.0f, 1.0f);
					SET_BLIP_BLINK(GET_BLIP_ON_ACTOR(&iVar0), 1, 1, 5f);
					if (Function_102(&iVar0))
					{
						Function_101(&iVar0, &iVar2);
					}
					fVar51 = GET_CURRENT_GAME_TIME();
					iVar72 = 3;
				}
				else if (GET_TASK_STATUS(&iVar0, 61) != 0 && !GET_TASK_STATUS(&iVar0, 59) != 1)
				{
					TASK_SEARCH(&iVar0, 1, 30.0f);
				}
				else if (GET_TASK_STATUS(&iVar0, 59) == 0)
				{
					bVar33 = true;
					iVar72 = 14;
				}
				else if (!IS_CRIME_VALID(&ScriptParam_0))
				{
					bVar33 = true;
					iVar72 = 14;
				}
				else if (!IS_ACTOR_VALID(&iVar0))
				{
					iVar72 = 14;
				}
				break;
			
			case 0x00000004:
				if (!GET_CRIME_TYPE(Function_99(&ScriptParam_0, Function_120(), 2, 50)) != GET_CRIME_TYPE(&ScriptParam_0) || Function_104(&iVar0, fVar69, &uVar62, &fVar67))
				{
					if (IS_ACTOR_VALID(&iVar0))
					{
						Function_121(StackVal, &iVar0, &iVar2, Var3, fVar53, bVar29, &fVar55);
						SAY_SINGLE_LINE_CONTEXT(&iVar0, 85, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
						GET_OBJECT_POSITION(&iVar0, &Var13);
						bVar54 = GET_CURRENT_GAME_TIME();
						iVar72 = 5;
						SET_BLIP_COLOR(GET_BLIP_ON_ACTOR(&iVar0), 1.0f, 1.0f, 1.0f, 1.0f);
						SET_BLIP_BLINK(GET_BLIP_ON_ACTOR(&iVar0), 1, 1, 5f);
					}
				}
				else if (!IS_CRIME_VALID(&ScriptParam_0))
				{
					bVar33 = true;
					iVar72 = 14;
				}
				else if (!IS_ACTOR_VALID(&iVar0))
				{
					iVar72 = 14;
				}
				else if (!IS_CRIME_IN_PROGRESS(&ScriptParam_0))
				{
					Function_121(StackVal, &iVar0, &iVar2, Var3, fVar53, bVar29, &fVar55);
					SAY_SINGLE_LINE_CONTEXT(&iVar0, 85, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
					GET_OBJECT_POSITION(&iVar0, &Var13);
					bVar54 = GET_CURRENT_GAME_TIME();
					iVar72 = 5;
					SET_BLIP_COLOR(GET_BLIP_ON_ACTOR(&iVar0), 1.0f, 1.0f, 1.0f, 1.0f);
					SET_BLIP_BLINK(GET_BLIP_ON_ACTOR(&iVar0), 1, 1, 5f);
				}
				break;
			
			case 0x00000003:
				if ((fVar51 + 1.0f) > GET_CURRENT_GAME_TIME() || VDIST(Var3, Var5) > 3.0f)
				{
					if (IS_ACTOR_VALID(&iVar0))
					{
						RESET_ANIM_SET_FOR_ACTOR(&iVar0, 1);
						TASK_CLEAR(&iVar0);
						Function_121(StackVal, &iVar0, &iVar2, Var3, fVar53, bVar29, &fVar55);
						SAY_SINGLE_LINE_CONTEXT(&iVar0, 85, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
					}
					GET_OBJECT_POSITION(&iVar0, &Var13);
					bVar54 = GET_CURRENT_GAME_TIME();
					iVar72 = 5;
				}
				break;
			
			case 0x00000005:
				if (!bVar63 && !bVar29)
				{
					if (!IS_OBJECT_VALID(&uVar61))
					{
						if (IS_LAYOUTREF_VALID(&Global_46715))
						{
							uVar61 = CREATE_NAV_QUERY(&Global_46715, "witnessQuery");
							NAV_QUERY_START_CAN_PATH_TO_POINT(&uVar61, Var3, Var7, GET_ACTOR_ENUM(&iVar0));
						}
					}
					else if (NAV_QUERY_IS_DONE(&uVar61))
					{
						if (NAV_QUERY_CAN_PATH_TO_POINT(&uVar61))
						{
							bVar63 = true;
						}
						else
						{
							Function_110(&ScriptParam_0, &iVar0, &uVar58, &Var3, &Var7, &Var13, &bVar54, &uVar61, &iVar72, &iVar73);
							break;
						}
					}
				}
				if (VDIST(Var13, Var3) < 2.0f)
				{
					Var13 = Var3;
					bVar54 = GET_CURRENT_GAME_TIME();
				}
				else
				{
					if (IS_ACTOR_RIDING_VEHICLE(&iVar0))
					{
						fVar78 = 17.0f;
						if (bVar26)
						{
							fVar78 = 20.0f;
						}
						if (!iLocal_15)
						{
							if (bVar29)
							{
								if (GET_CURRENT_GAME_TIME() < (bVar54 + 2,5f))
								{
									iLocal_15 = 1;
									fVar55 = GET_CURRENT_GAME_TIME();
									bVar54 = GET_CURRENT_GAME_TIME();
								}
							}
						}
						Function_125(&iVar0);
						if ((GET_CURRENT_GAME_TIME() < (bVar54 + 5.0f) || ((VDIST(Function_125(&iVar0), Var7) > fVar78 && !bVar32) && !bVar29)) || DECOR_GET_BOOL(&iVar0, "witnessOutNow"))
						{
							iVar36 = TASK_SEQUENCE_OPEN();
							TASK_VEHICLE_LEAVE(0);
							if (!bVar29)
							{
								TASK_GO_NEAR_COORD(0, &Var7, fVar53, 4);
							}
							else
							{
								TASK_FLEE_ACTOR(false, &iVar2, -1.0f, -1.0f, 0, 0, 0);
							}
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&iVar0, iVar36);
							TASK_SEQUENCE_RELEASE(iVar36, 1);
							MEMORY_PREFER_WALKING(&iVar0, 1);
							bVar54 = GET_CURRENT_GAME_TIME();
							TASK_PRIORITY_SET(&iVar0, true);
						}
					}
					if (GET_CURRENT_GAME_TIME() < (bVar54 + 10.0f))
					{
						Function_110(&ScriptParam_0, &iVar0, &uVar58, &Var3, &Var7, &Var13, &bVar54, &uVar61, &iVar72, &iVar73);
						break;
					}
				}
				if (bVar29)
				{
					if (!bVar31)
					{
						if (Function_98(GET_PLAYER_ACTOR(0), &iVar0) > 50.0f)
						{
							if (GET_CURRENT_GAME_TIME() <= fVar55)
							{
								Function_125(&iVar0);
								Function_96(StackVal, Function_125(&iVar0));
								Var79 = Function_96(StackVal, Function_125(&iVar0));
								if (!Function_95(StackVal, Var79))
								{
									TASK_GO_NEAR_COORD(&iVar0, &Var79, 20.0f, 3);
									TASK_PRIORITY_SET(&iVar0, true);
									fVar55 = (GET_CURRENT_GAME_TIME() + 5.0f);
									bVar31 = true;
								}
								else
								{
									fVar55 = (GET_CURRENT_GAME_TIME() + 30.0f);
									iLocal_15 = 1;
								}
							}
						}
						else
						{
							fVar55 = (GET_CURRENT_GAME_TIME() + 30.0f);
							iLocal_15 = 1;
						}
					}
					else if (GET_CURRENT_GAME_TIME() <= fVar55)
					{
						uVar81 = CREATE_OBJECT_ITERATOR(&Global_46715);
						if (IS_ITERATOR_VALID(&uVar81))
						{
							ITERATE_ON_OBJECT_TYPE(&uVar81, 8);
							ITERATE_ON_PARTIAL_NAME(&uVar81, "report_crime");
							Function_125(&iVar0);
							uVar82 = Function_94(StackVal, &uVar81, Function_125(&iVar0), 1.0f);
							if (IS_OBJECT_VALID(&uVar82))
							{
								if (!STRING_CONTAINS_STRING(GET_OBJECT_NAME(&uVar82), "road"))
								{
									GET_OBJECT_POSITION(&uVar82, &Var7);
									TASK_GO_NEAR_COORD(&iVar0, &Var7, fVar53, 4);
									TASK_PRIORITY_SET(&iVar0, true);
									bVar32 = false;
									bVar29 = false;
								}
								else
								{
									fVar55 = (GET_CURRENT_GAME_TIME() + 5.0f);
								}
							}
							else
							{
								fVar55 = (GET_CURRENT_GAME_TIME() + 5.0f);
							}
							DESTROY_ITERATOR(&uVar81);
						}
						else
						{
							fVar55 = (GET_CURRENT_GAME_TIME() + 5.0f);
						}
					}
				}
				if (Function_92(ScriptParam_0.f_24, GET_OBJECT_FROM_ACTOR(&iVar0), 1))
				{
					if (GET_OBJECTSET_SIZE(&Global_98981) >= 0)
					{
						iVar1 = Function_90(StackVal, Var3);
					}
					else
					{
						iVar1 = Function_89(StackVal, Var3);
					}
					if (!IS_ACTOR_VALID(&iVar1))
					{
					}
					iVar72 = 6;
					bVar66 = false;
					iVar73 = 0;
				}
				else if (!bVar29 && VDIST(Var3, Var7) >= fVar53)
				{
					if (!bVar32)
					{
						iVar71 = 1;
						iVar72 = 6;
						iVar73 = 0;
					}
					else
					{
						if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iVar0, 1.0f, 80.0f, 1, 1, 0))
						{
							fVar83 = 35.0f;
						}
						else
						{
							fVar83 = 80.0f;
						}
						if (VDIST(Var3, Var5) > fVar83)
						{
							TASK_FLEE_ACTOR(&iVar0, &iVar2, -1.0f, -1.0f, 0, 0, 0);
							bVar29 = true;
							bVar32 = false;
							iLocal_15 = 1;
							fVar55 = (GET_CURRENT_GAME_TIME() + 30.0f);
						}
						else
						{
							iVar71 = 1;
							iVar72 = 6;
							iVar73 = 0;
						}
					}
				}
				else if (bVar29 && VDIST(Var3, Var5) < 140.0f)
				{
					iVar72 = 6;
					iVar73 = 0;
				}
				else if (Global_6646)
				{
					SET_CRIME_WITNESSED(&ScriptParam_0, 3);
					Function_126();
					iVar72 = 14;
					bVar28 = true;
					iVar73 = 0;
				}
				else
				{
					if (IS_OBJECT_VALID(&uVar57))
					{
						if (IS_POINT_IN_VOLUME(Var3, GET_VOLUME_FROM_OBJECT(&uVar57)))
						{
							iVar71 = 0;
							iVar72 = 6;
							iVar73 = 0;
						}
					}
					if (!bVar29)
					{
						iVar84 = GET_TASK_STATUS(&iVar0, 61);
						if (iVar84 == 0)
						{
							TASK_GO_NEAR_COORD(&iVar0, &Var7, fVar53, 4);
							TASK_PRIORITY_SET(&iVar0, true);
						}
					}
					if (VDIST(Var3, Var5) > 6.0f && !bVar28)
					{
						if (((((Function_88() <= Function_84(&ScriptParam_0) && GET_CURRENT_CAMERA_TYPE_FROM_CHANNEL(0) != 1) && GET_LAST_ATTACKER(&iVar0) == &iVar2) && !Function_83()) && !Function_82()) && !IS_ACTOR_ON_LADDER(&iVar0))
						{
							bVar25 = true;
						}
						else
						{
							bVar25 = false;
						}
					}
					else
					{
						bVar25 = false;
					}
					if (bVar25)
					{
						if (!IS_SCRIPT_USE_CONTEXT_VALID(&uVar24))
						{
							uVar24 = ADD_SCRIPT_USE_CONTEXT("law_pay_witness", 50, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
							SET_USE_CONTEXT_TEXT(&uVar24, "law_pay_witness", I2STR(Function_84(&ScriptParam_0)), 0, 0, 0);
							if (!Function_153(Global_119935, 2))
							{
								Function_147(&Global_54076, 2, 2, 0);
							}
						}
					}
					else if (IS_SCRIPT_USE_CONTEXT_VALID(&uVar24))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&uVar24);
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(&uVar24))
					{
						if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uVar24))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&uVar24);
							iVar72 = 12;
							iVar73 = 0;
						}
					}
				}
				break;
			
			case 0x00000006:
				if (IS_PLAYER_CONTROLLABLE(0))
				{
					Function_124(&iVar0);
					bVar28 = true;
					if (bVar29)
					{
						if (Global_43790 == 4 && Global_43790 == 3)
						{
							*(&Global_39922 + 280) = Var3;
							Function_81(0x1000000);
							iVar72 = 8;
						}
						else
						{
							bVar65 = true;
							fVar68 = (GET_CURRENT_GAME_TIME() + 1,5f);
							Function_124(&iVar0);
							iVar72 = 14;
							iVar73 = 0;
						}
					}
					else
					{
						iVar72 = 7;
					}
					SET_CRIME_WITNESSED(&ScriptParam_0, 3);
					Function_126();
					iVar73 = 0;
				}
				break;
			
			case 0x00000007:
				if (!Function_80(&(Global_46972[2]), 0, 4294967295, 0) || !Function_80(&(Global_46972[6]), 0, 4294967295, 0))
				{
					bVar66 = false;
				}
				if (!bVar32)
				{
					uVar56 = Function_79("jail_leave_start");
					if (Global_43789 == Global_46760[0])
					{
						uVar86 = Vector(-2088,95f, 17,6f, 2604,89f);
						uVar85 = FIND_NEAREST_DOOR(&uVar86, 2.0f);
						if (IS_DOOR_VALID(&uVar85))
						{
							if (IS_DOOR_LOCKED(&uVar85))
							{
								bVar66 = false;
							}
						}
					}
					else if (Global_43789 == Global_46914[0])
					{
						uVar89 = Vector(760,86f, 79,8f, 1234,83f);
						uVar88 = FIND_NEAREST_DOOR(&uVar89, 2.0f);
						if (IS_DOOR_VALID(&uVar88))
						{
							if (IS_DOOR_LOCKED(&uVar88))
							{
								bVar66 = false;
							}
						}
					}
					if (bVar66)
					{
						if (IS_OBJECT_VALID(&uVar56))
						{
							GET_OBJECT_POSITION(&uVar56, &Var9);
							Var11 = Vector(StackVal, StackVal, StackVal) - Vector(Var7, Var9, StackVal);
							VSCALE(&Var11, 0,5f);
							Var11 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var11, StackVal);
						}
						else
						{
							LOG_ERROR("We think we are a building law spawn, but dont have a jail_leave_flag. We really aren't");
							iVar71 = 0;
						}
					}
					else
					{
						iVar71 = 0;
					}
					if (STREAMING_IS_ACTOR_LOADED(bVar70, 4294967295))
					{
					}
					else
					{
						bVar66 = false;
					}
					if (bVar66)
					{
						if (!IS_ACTOR_VALID(&iVar1))
						{
							iVar1 = CREATE_ACTOR_IN_LAYOUT(StackVal, &Global_46715, Function_78(), bVar70, Var9, Vector(0.0f, 0.0f, 0.0f));
							Function_77(&iVar1, 0);
							SET_ACTOR_UPDATE_PRIORITY(&iVar1, false);
						}
					}
					Function_76(ScriptParam_0.f_36, 0, 0, 0, 0);
					if (bVar26)
					{
						if ((((((((((!Function_153(Global_119935, 4) && VDIST(Global_54078, Var3) < 7,5f) && Global_6629) && !IS_ACTOR_INSIDE_VEHICLE(Function_120())) && iVar71) && !IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(Function_120()))) && bVar66) && !Function_75(0, 0, 1, 1)) && GET_CURRENT_CAMERA_TYPE_FROM_CHANNEL(0) != 1) && !Global_6664) && !Function_71(12, 0))
						{
							if (Global_43789 != Global_46816[0] || Global_43789 != Global_46760[0])
							{
								Function_70();
								iVar72 = 10;
							}
							else
							{
								iVar72 = 9;
							}
						}
						else
						{
							iVar72 = 9;
						}
					}
					else
					{
						iVar72 = 9;
					}
				}
				else
				{
					if (!IS_ACTOR_VALID(&iVar1))
					{
						if (STREAMING_IS_ACTOR_LOADED(bVar70, 4294967295))
						{
						}
						iVar1 = Function_60(StackVal, StackVal, &Global_46715, Function_78(), bVar70, Function_78(), Function_62(&(Global_46972[6]), 0, 0, 0), Var7, Vector(0.0f, 0.0f, 0.0f));
						Function_77(&iVar1, 0);
						SET_ACTOR_UPDATE_PRIORITY(&iVar1, false);
					}
					Function_76(ScriptParam_0.f_36, 0, 0, 0, 0);
					iVar72 = 9;
					iVar73 = 0;
				}
				break;
			
			case 0x00000008:
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iVar0)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iVar0));
				}
				iVar72 = 9;
				iVar73 = 0;
				break;
			
			case 0x00000009:
				if (Function_56(StackVal, StackVal, &iVar59, &uVar52, &iVar0, &iVar1, Var11, Var5))
				{
					Global_42256 = (GET_CURRENT_GAME_TIME() + 12.0f);
					if (!IS_ACTOR_VALID(&iVar1))
					{
						WAIT(2000);
					}
					iVar72 = 14;
					iVar73 = 0;
				}
				break;
			
			case 0x0000000C:
				TASK_CLEAR(&iVar0);
				iVar91 = Function_84(&ScriptParam_0);
				if (iVar91 >= Function_55(255))
				{
					Function_54(255, iVar91, 0);
				}
				Function_51(253, 1, 0, 0);
				Function_37(iVar91, 1);
				Function_36(&iVar0, iVar91);
				Function_34();
				iVar72 = 13;
				iVar73 = 0;
				break;
			
			case 0x0000000D:
				if (IS_PLAYER_IN_COMBAT(0))
				{
					if (IS_ACTOR_MALE(&iVar0))
					{
						SAY_SINGLE_LINE_STRING_WITH_REPLY_OVER_PAIN(Function_120(), "PLAYER_OFFER_BRIBE_M", &iVar0, "Bribe_Accept", 1, 0, 0, 0);
					}
					else
					{
						SAY_SINGLE_LINE_STRING_WITH_REPLY_OVER_PAIN(Function_120(), "PLAYER_OFFER_BRIBE_F", &iVar0, "Bribe_Accept", 1, 0, 0, 0);
					}
				}
				else if (IS_ACTOR_MALE(&iVar0))
				{
					SAY_SINGLE_LINE_STRING_WITH_REPLY_OVER_PAIN(Function_120(), "PLAYER_OFFER_BRIBE_URGENT_M", &iVar0, "Bribe_Accept", 1, 0, 0, 0);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_REPLY_OVER_PAIN(Function_120(), "PLAYER_OFFER_BRIBE_URGENT_F", &iVar0, "Bribe_Accept", 1, 0, 0, 0);
				}
				if (GET_CRIME_TYPE(&ScriptParam_0) == 28)
				{
					uVar92 = GET_CRIME_VICTIM(&ScriptParam_0);
					if (IS_OBJECT_VALID(&uVar92))
					{
						if (GET_OBJECT_TYPE(&uVar92) != 9 || GET_OBJECT_TYPE(&uVar92) != 10)
						{
							if (DECOR_CHECK_EXIST(&uVar92, "lawAllowTrespassTime"))
							{
								DECOR_REMOVE(&uVar92, "lawAllowTrespassTime");
							}
							DECOR_SET_FLOAT(&uVar92, "lawAllowTrespassTime", (GET_CURRENT_GAME_TIME() + 10.0f));
						}
					}
				}
				AUDIO_SET_PLAYER_MOOD(0, 0);
				MEMORY_CLEAR_ALL(&iVar0);
				ACTOR_HOLSTER_WEAPON(&iVar0, 1);
				MEMORY_CONSIDER_AS(&iVar0, &iVar2, 2);
				bVar33 = true;
				bVar34 = true;
				iVar72 = 14;
				iVar73 = 0;
				break;
			
			case 0x0000000A:
				if (Global_43789 != Global_46816[0] || Global_43789 != Global_46760[0])
				{
					fVar51 = GET_CURRENT_GAME_TIME();
					Function_33("LAW_AI_STATE: EYEWITNESS ROAD REPORT CUTSCENE", 11);
					Function_29(0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0x3f800000, 0);
					bLocal_14 = true;
					Function_125(Function_120());
					Var93 = Function_125(Function_120());
					PREVENT_DESPAWN_SET_SPHERE(Var93, 10.0f);
					STREAMING_UNLOAD_SCENE();
					GET_OBJECT_POSITION(GET_GAME_CAMERA(), &Var15);
					GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &Var17);
					STREAMING_LOAD_SCENE_EXT(Var15, Var17, 1);
					Function_27(Function_120(), 0);
					Function_23(&iVar0, &iVar1);
					if (!IS_ACTOR_RAGDOLL(&iVar0))
					{
						TELEPORT_ACTOR(&iVar0, &Var7, 1, 1, 1);
					}
					Global_99146 = 1;
					iVar72 = 11;
					iVar59 = 0;
				}
				else
				{
					iVar72 = 9;
				}
				iVar73 = 0;
				break;
			
			case 0x0000000B:
				if (Function_56(StackVal, StackVal, &iVar59, &uVar52, &iVar0, &iVar1, Var11, Var5))
				{
					Function_20(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					bLocal_14 = false;
					if (IS_ACTOR_INSIDE_VEHICLE(Function_120()))
					{
						if (IS_ACTOR_VALID(GET_VEHICLE(Function_120())))
						{
							START_VEHICLE(GET_VEHICLE(Function_120()));
						}
					}
					DESTROY_OBJECT(&uVar60);
					STREAMING_SET_POI_LIMIT(1);
					bVar26 = false;
					iVar72 = 14;
				}
				if (IS_OBJECT_VALID(&uVar60))
				{
					PLAY_CUTSCENEOBJECT(&uVar60, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
					if (fVar51 + 2.0f) > GET_CURRENT_GAME_TIME()
					{
						if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
						{
							if (iVar72 != 14)
							{
								Function_20(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
								bLocal_14 = false;
								if (IS_ACTOR_INSIDE_VEHICLE(Function_120()))
								{
									if (IS_ACTOR_VALID(GET_VEHICLE(Function_120())))
									{
										START_VEHICLE(GET_VEHICLE(Function_120()));
									}
								}
								DESTROY_OBJECT(&uVar60);
								STREAMING_SET_POI_LIMIT(1);
								bVar26 = false;
								iVar72 = 9;
							}
						}
					}
				}
				if (!Function_19())
				{
					if (!Function_153(Global_119935, 4))
					{
						Function_15("tutorial_eyewitness_3", 0x41200000, 1, 0, 2, 1, 0);
						Function_14(&Global_119935, 4);
					}
					else if (!Function_153(Global_119935, 32768))
					{
						Function_15("tutorial_law_local_spawn", 0x41200000, 1, 0, 2, 1, 0);
						Function_14(&Global_119935, 32768);
					}
				}
				iVar73 = 0;
				break;
			
			case 0x0000000E:
				iVar73 = 0;
				if (GET_CURRENT_GAME_TIME() <= fVar68 || !bVar65)
				{
					if (bLocal_14)
					{
						Function_20(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						bLocal_14 = false;
					}
					if (IS_ACTOR_VALID(&iVar0))
					{
						RESET_ANIM_SET_FOR_ACTOR(&iVar0, 1);
						if (IS_ACTOR_VALID(&iVar2))
						{
							TASK_FLEE_ACTOR(&iVar0, &iVar2, -1.0f, -1.0f, 0, 0, 0);
						}
						else if (IS_ACTOR_VALID(&Global_54076))
						{
							TASK_FLEE_ACTOR(&iVar0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
						}
						else
						{
							TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
						}
					}
					if (bVar65)
					{
						if (Global_43790 != 4 || Global_43790 != 3)
						{
							Function_76(Global_40000.f_12, 0, 0, 0, 0);
						}
						else
						{
							Function_81(0x1000000);
							Function_11(StackVal, Global_40022.f_12, Var5);
							*(&Global_39922 + 280) = Function_11(StackVal, Global_40022.f_12, Var5);
							(&Global_39922 + 280)->f_4 = (StackVal + 1000.0f);
						}
						SET_CRIME_WITNESSED(&ScriptParam_0, 3);
						Function_126();
						Function_124(&iVar0);
						bVar28 = true;
						WAIT(2000);
					}
					PREVENT_DESPAWN_CLEAR();
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				break;
		}
		iVar73 = 0;
		WAIT(iVar73);
	}
	if (bVar33)
	{
		if (bVar34)
		{
			Function_10();
		}
		else
		{
			Function_6(&ScriptParam_0);
		}
	}
	if (bVar26)
	{
		if (IS_OBJECT_VALID(&uVar60))
		{
			DESTROY_OBJECT(&uVar60);
		}
		STREAMING_UNLOAD_SCENE();
		STREAMING_SET_POI_LIMIT(1);
	}
	if (IS_ACTOR_VALID(&iVar0))
	{
		Function_124(&iVar0);
		TASK_CLEAR(&iVar0);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uVar24))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uVar24);
	}
	if (IS_ACTOR_VALID(&iVar1))
	{
		SET_ACTOR_CAN_PLAY_GESTURES(&iVar0, true);
		if (IS_ACTOR_VALID(GET_MOUNT(&iVar1)))
		{
			RELEASE_ACTOR(GET_MOUNT(&iVar1));
		}
		TASK_CLEAR(&iVar1);
		RELEASE_ACTOR(GET_MOUNT(&iVar1));
	}
	Function_2(&iVar37);
	if (GET_OBJECT_TYPE(&ScriptParam_0 + 8) == 24)
	{
		Function_1(GET_PERS_CHAR_FROM_OBJECT(&ScriptParam_0 + 8));
		DEREFERENCE_ACTOR(&iVar0);
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(GET_PERS_CHAR_FROM_OBJECT(&ScriptParam_0 + 8), 0);
	}
	else
	{
		RELEASE_ACTOR(GET_ACTOR_FROM_OBJECT(&ScriptParam_0 + 8));
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iVar0, 0);
	}
	if (IS_OBJECT_VALID(&uVar61))
	{
		NAV_QUERY_STOP(&uVar61);
		DESTROY_OBJECT(&uVar61);
	}
	PREVENT_DESPAWN_CLEAR();
	if (Global_40000.f_72 > Global_40000.f_76)
	{
		Global_40000.f_80 = (GET_CURRENT_GAME_TIME() + 60.0f);
	}
	if (bLocal_14)
	{
		Function_20(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	}
	Global_99146 = 0;
	Global_6649 = 1;
	Global_6647 = 0;
	TERMINATE_THIS_SCRIPT();
	return;
}

int Function_1(int iParam0) //Position: 0x1A20 / 6688
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 0);
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			DEREFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, 1);
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(&uVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_2(int iParam0) //Position: 0x1AC9 / 6857
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_3(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(struct<2>[] Param0, int iParam1) //Position: 0x1AF1 / 6897
{
	if (Function_5(&(Param0[iParam12]), 4))
	{
		if (Function_5(&(Param0[iParam12]), 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP(&(Param0[iParam12]));
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET(&(Param0[iParam12]));
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR(&(Param0[iParam12]), 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO(&(Param0[iParam12]));
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT(&(Param0[iParam12]));
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iParam12]), 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY(&(Param0[iParam12]));
					break;
				
				default:
					break;
			}
			Function_4(&(Param0[iParam12]), 1);
			Function_4(&(Param0[iParam12]), 2);
			Function_4(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_4(struct<13> Param0) //Position: 0x1C3C / 7228
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_5(struct<13> Param0) //Position: 0x1C59 / 7257
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(int iParam0) //Position: 0x1C77 / 7287
{
	if (IS_CRIME_VALID(&iParam0))
	{
		Function_8(&iParam0);
		Function_7(&iParam0);
	}
	return;
}

void Function_7(int iParam0) //Position: 0x1C92 / 7314
{
	bool bVar0;
	
	if (IS_OBJECTSET_VALID(GET_CRIME_OBJECTSET(&iParam0)))
	{
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(GET_CRIME_OBJECTSET(&iParam0)))
		{
			DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, GET_CRIME_OBJECTSET(&iParam0)));
			bVar0++;
		}
		DESTROY_OBJECTSET(GET_CRIME_OBJECTSET(&iParam0));
	}
	DESTROY_OBJECT(GET_OBJECT_FROM_CRIME(&iParam0));
	return;
}

void Function_8(var uParam0) //Position: 0x1CDE / 7390
{
	float fVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	fVar0 = GET_CRIME_END_TIMESTAMP(&uParam0);
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_39918);
	iVar2 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_9(&uVar1, &iVar2);
	iVar3 = START_OBJECT_ITERATOR(&uVar1);
	while (IS_OBJECT_VALID(&iVar3))
	{
		iVar4 = GET_CRIME_FROM_OBJECT(&iVar3);
		if (GET_CRIME_END_TIMESTAMP(&iVar4) > fVar0)
		{
			Function_7(&iVar4);
		}
		iVar3 = OBJECT_ITERATOR_NEXT(&uVar1);
	}
	DESTROY_ITERATOR(&uVar1);
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x1D5B / 7515
{
	ITERATE_EVERYWHERE(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uParam0, 31);
	if (!&iParam1 != "")
	{
		ITERATE_IN_SET(&uParam0, &iParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(&uParam0, GET_ITERATOR_PARENT(&uParam0));
	}
	return;
}

void Function_10() //Position: 0x1D91 / 7569
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_9(&uVar0, &iVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		Function_7(&uVar3);
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

struct<8> Function_11(int iParam0, struct<2> Param1) //Position: 0x1DFA / 7674
{
	if (iParam0 == Global_46866[2])
	{
		Function_13(StackVal, StackVal, StackVal, Param1, Vector(-1552,54f, 16,18f, 3947,3f), Vector(-1569,48f, 17,08f, 3911,75f));
		return StackVal, Function_13(StackVal, StackVal, StackVal, Param1, Vector(-1552,54f, 16,18f, 3947,3f), Vector(-1569,48f, 17,08f, 3911,75f));
	}
	if (iParam0 == Global_46760[0])
	{
		Function_13(StackVal, StackVal, StackVal, Param1, Vector(-2177,79f, 17,72f, 2615,17f), Vector(-2098,61f, 17,52f, 2578,78f));
		return StackVal, Function_13(StackVal, StackVal, StackVal, Param1, Vector(-2177,79f, 17,72f, 2615,17f), Vector(-2098,61f, 17,52f, 2578,78f));
	}
	if (iParam0 == Global_46816[0])
	{
		Function_13(StackVal, StackVal, StackVal, Param1, Vector(-942,84f, 90,12f, 2440,58f), Vector(-788,44f, 93,84f, 2427,6f));
		return StackVal, Function_13(StackVal, StackVal, StackVal, Param1, Vector(-942,84f, 90,12f, 2440,58f), Vector(-788,44f, 93,84f, 2427,6f));
	}
	if (iParam0 == Global_46796[4])
	{
		Function_13(StackVal, StackVal, StackVal, Param1, Vector(-3716,79f, 9,25f, 3450,1f), Vector(-3723,36f, 9,35f, 3497,21f));
		return StackVal, Function_13(StackVal, StackVal, StackVal, Param1, Vector(-3716,79f, 9,25f, 3450,1f), Vector(-3723,36f, 9,35f, 3497,21f));
	}
	if (iParam0 == Global_46914[0])
	{
		Function_13(StackVal, StackVal, StackVal, Param1, Vector(557,42f, 90,59f, 1239,03f), Vector(603,39f, 84,17f, 1416,26f));
		return StackVal, Function_13(StackVal, StackVal, StackVal, Param1, Vector(557,42f, 90,59f, 1239,03f), Vector(603,39f, 84,17f, 1416,26f));
	}
	if (iParam0 == Global_46866[0])
	{
		Function_13(StackVal, StackVal, StackVal, Param1, Vector(-2778,89f, 33,59f, 4275,72f), Vector(-2621,83f, 30,19f, 4222,53f));
		return StackVal, Function_13(StackVal, StackVal, StackVal, Param1, Vector(-2778,89f, 33,59f, 4275,72f), Vector(-2621,83f, 30,19f, 4222,53f));
	}
	if (iParam0 == Global_46760[4])
	{
		Function_13(StackVal, StackVal, StackVal, Param1, Vector(-1810,33f, 22,99f, 2820,15f), Vector(-1773,93f, 26,24f, 2896,65f));
		return StackVal, Function_13(StackVal, StackVal, StackVal, Param1, Vector(-1810,33f, 22,99f, 2820,15f), Vector(-1773,93f, 26,24f, 2896,65f));
	}
	if (iParam0 == Global_46894[0])
	{
		Function_13(StackVal, StackVal, StackVal, Param1, Vector(-444,13f, 23,88f, 3979,26f), Vector(-480,69f, 21.0f, 3897,62f));
		return StackVal, Function_13(StackVal, StackVal, StackVal, Param1, Vector(-444,13f, 23,88f, 3979,26f), Vector(-480,69f, 21.0f, 3897,62f));
	}
	if (iParam0 == Global_46850[0])
	{
		Function_13(StackVal, StackVal, StackVal, Param1, Vector(-4354,76f, 21,36f, 4469,53f), Vector(-4442,29f, 35,29f, 4346,45f));
		return StackVal, Function_13(StackVal, StackVal, StackVal, Param1, Vector(-4354,76f, 21,36f, 4469,53f), Vector(-4442,29f, 35,29f, 4346,45f));
	}
	if (iParam0 == Global_46866[1])
	{
		Function_13(StackVal, StackVal, StackVal, Param1, Vector(-1679.0f, 9,36f, 4279,81f), Vector(-1715,42f, 9,5f, 4163,3f));
		return StackVal, Function_13(StackVal, StackVal, StackVal, Param1, Vector(-1679.0f, 9,36f, 4279,81f), Vector(-1715,42f, 9,5f, 4163,3f));
	}
	if (iParam0 == Global_46926[1])
	{
		Function_13(StackVal, StackVal, StackVal, Param1, Vector(-426,93f, 151,16f, 1587,94f), Vector(-413,66f, 152,73f, 1661,62f));
		return StackVal, Function_13(StackVal, StackVal, StackVal, Param1, Vector(-426,93f, 151,16f, 1587,94f), Vector(-413,66f, 152,73f, 1661,62f));
	}
	if (iParam0 == Global_46926[2])
	{
		Function_13(StackVal, StackVal, StackVal, Param1, Vector(-228,08f, 83,83f, 2078,84f), Vector(-325,82f, 85,37f, 2065,88f));
		return StackVal, Function_13(StackVal, StackVal, StackVal, Param1, Vector(-228,08f, 83,83f, 2078,84f), Vector(-325,82f, 85,37f, 2065,88f));
	}
	if (iParam0 == Global_46838[0])
	{
		Function_13(StackVal, StackVal, StackVal, Param1, Vector(-3126,94f, 43,98f, 3747,1f), Vector(-3126,94f, 43,98f, 3747,1f));
		return StackVal, Function_13(StackVal, StackVal, StackVal, Param1, Vector(-3126,94f, 43,98f, 3747,1f), Vector(-3126,94f, 43,98f, 3747,1f));
	}
	if (iParam0 == Global_46760[1])
	{
		Function_13(StackVal, StackVal, StackVal, Param1, Vector(-3269,94f, 15,81f, 2723,35f), Vector(-3269,94f, 15,81f, 2723,35f));
		return StackVal, Function_13(StackVal, StackVal, StackVal, Param1, Vector(-3269,94f, 15,81f, 2723,35f), Vector(-3269,94f, 15,81f, 2723,35f));
	}
	if (iParam0 == Global_46796[1])
	{
		Function_13(StackVal, StackVal, StackVal, Param1, Vector(-3695,5f, 41,3f, 2154,66f), Vector(-3623,43f, 42,96f, 2146,64f));
		return StackVal, Function_13(StackVal, StackVal, StackVal, Param1, Vector(-3695,5f, 41,3f, 2154,66f), Vector(-3623,43f, 42,96f, 2146,64f));
	}
	Function_12();
	return StackVal, Function_12();
}

struct<8> Function_12() //Position: 0x212A / 8490
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_13(struct<2> Param0, struct<2> Param2, struct<2> Param4) //Position: 0x2134 / 8500
{
	if (VDIST(Param0, Param2) >= VDIST(Param0, Param4))
	{
		return StackVal, Param2;
	}
	return StackVal, Param4;
	Function_12();
	return StackVal, Function_12();
}

void Function_14(var uParam0, int iParam1) //Position: 0x216A / 8554
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_15(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x217B / 8571
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_16(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_16(int iParam0) //Position: 0x2206 / 8710
{
	char* cVar0[16];
	
	if (!Function_17())
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

bool Function_17() //Position: 0x2245 / 8773
{
	if (Function_18(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_18(var uParam0, bool bParam1) //Position: 0x2260 / 8800
{
	return (uParam0 && bParam1) == 0;
}

bool Function_19() //Position: 0x226D / 8813
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_20(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0x229A / 8858
{
	var uVar0;
	
	bParam1 = &bParam1;
	if (&bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (&bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		uVar0 = Function_120();
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (&bParam2)
			{
				TASK_CLEAR(&uVar0);
			}
			if (!&bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 1);
				}
			}
			ACTOR_END_FORCE_HOLSTER(&uVar0);
			SET_ACTOR_INVULNERABILITY(&uVar0, 0);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_51(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_70();
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (&bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_21(&iParam9, &iParam10);
}

void Function_21(var uParam0, bool bParam1) //Position: 0x2369 / 9065
{
	uParam0 = &uParam0;
	HUD_ENABLE(&uParam0);
	if (&bParam1)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(Global_99471);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
	}
	if (!Global_6623)
	{
		Function_22();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_99146 = 0;
	Global_99147 = 0;
	if (IS_VOLUME_VALID(&Global_99170))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
	}
	SET_TREE_COST_MODIFIER(1.0f);
	SET_USES_QUAD_IK_FIX(0);
	return;
}

void Function_22() //Position: 0x2438 / 9272
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

void Function_23(var uParam0, int iParam1) //Position: 0x24B0 / 9392
{
	bool bVar0;
	
	bVar0 = IS_ACTOR_RAGDOLL(&uParam0);
	if (!bVar0)
	{
		ACTOR_HOLSTER_WEAPON(&uParam0, 1);
	}
	MEMORY_CLEAR_ALL(&uParam0);
	MEMORY_CLEAR_ALL(&iParam1);
	if (!bVar0)
	{
		ACTOR_START_FORCE_HOLSTER(&uParam0, 0, 0);
	}
	ACTOR_START_FORCE_HOLSTER(&iParam1, 0, 0);
	RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
	RESET_ANIM_SET_FOR_ACTOR(&iParam1, 1);
	TASK_CLEAR(&uParam0);
	TASK_CLEAR(&iParam1);
	AI_IGNORE_ACTOR(&uParam0);
	AI_IGNORE_ACTOR(&iParam1);
	if (!bVar0)
	{
		Function_24(&uParam0, &iParam1);
	}
	TASK_FACE_ACTOR(&iParam1, &uParam0, 1, 3212836864);
	return;
}

void Function_24(var uParam0, int iParam1) //Position: 0x2536 / 9526
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var0);
	Function_25(StackVal, &uParam0, Var0);
	return;
}

void Function_25(int iParam0, struct<2> Param1) //Position: 0x2552 / 9554
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&iParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_26(&iParam0, &iParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_26(GET_MOUNT(&iParam0), &iParam0, Param1), 1);
	}
	return;
}

var Function_26(int iParam0, struct<2> Param1) //Position: 0x258D / 9613
{
	struct<2> Var0;
	
	Function_125(&iParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_125(&iParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

void Function_27(var uParam0, bool bParam1) //Position: 0x260E / 9742
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_RIDING(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&uParam0))
	{
		uVar1 = GET_VEHICLE(&uParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			STOP_VEHICLE(&uVar1);
		}
	}
	else if (!&bParam1 || Function_28(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

float Function_28(var uParam0, bool bParam1) //Position: 0x2678 / 9848
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_29(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, var uParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11, var uParam12, var uParam13) //Position: 0x2699 / 9881
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uParam1 = &uParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_70();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		iVar1 = Function_120();
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (GET_WEAPON_IN_HAND(&iVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&iVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&iVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&iVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&iVar1, 0);
			}
			SET_ACTOR_HEALTH(&iVar1, GET_ACTOR_MAX_HEALTH(&iVar1));
			SET_ACTOR_INVULNERABILITY(&iVar1, 1);
			AI_IGNORE_ACTOR(&iVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (&bParam8)
		{
			if (IS_VOLUME_VALID(&uParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&uParam7);
				DELETE_PROJECTILES_IN_VOLUME(&uParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_125(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_78(), 2,802597E-45f, Function_125(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_51(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (uParam10 && !Function_17())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_32()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_32()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", 1);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(&Global_54076, 1);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_99146 = 1;
	Global_99168 = GET_THIS_SCRIPT_ID();
	Global_99170 = "";
	if (IS_VOLUME_VALID(&uVar0))
	{
		DESTROY_VOLUME(&uVar0);
	}
	if (Function_31(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_30(0x4000000);
	}
	if (Function_31(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_30(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&uParam12);
	SET_USES_QUAD_IK_FIX(&uParam13);
}

void Function_30(int iParam0) //Position: 0x294B / 10571
{
	int iVar0;
	
	if (Function_18(iParam0, 1) && Function_18(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_31(int iParam0) //Position: 0x297F / 10623
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_32() //Position: 0x299B / 10651
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		iVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&iVar2))
		{
			while (IS_OBJECT_VALID(&iVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&iVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&iVar2), "bino_camera"))
				{
					return &iVar2;
				}
				iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

void Function_33(char* cParam0) //Position: 0x2A29 / 10793
{
	if (!Function_31(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_21610, &cParam0))
	{
		strcpy(&Global_21610, &cParam0, 64);
		Global_21610.f_132 = 1;
		Global_21610.f_128 = GET_CURRENT_GAME_TIME();
		Global_21610.f_136 = Global_21610.f_128;
	}
	return;
}

void Function_34() //Position: 0x2A66 / 10854
{
	AI_GLOBAL_CLEAR_ALL_DANGER();
	Function_35(GET_AMBIENT_LAYOUT());
	Function_35(GET_GC_LAYOUT());
	Function_35(&Global_10996);
	Function_35(&Global_10994);
	Function_35(&Global_43578);
	Function_35(&Global_10998);
	Function_35(&Global_99717);
	return;
}

void Function_35(int iParam0) //Position: 0x2A9F / 10911
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (IS_LAYOUTREF_VALID(&iParam0))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
		ITERATE_IN_LAYOUT(&uVar0, &iParam0);
		iVar1 = START_OBJECT_ITERATOR(&uVar0);
		if (IS_ACTOR_VALID(Function_120()))
		{
			while (IS_OBJECT_VALID(&iVar1))
			{
				iVar2 = "";
				if (GET_OBJECT_TYPE(&iVar1) == 15)
				{
					iVar2 = GET_ACTOR_FROM_OBJECT(&iVar1);
				}
				else if (GET_OBJECT_TYPE(&iVar1) == 24)
				{
					iVar2 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar1));
				}
				if (IS_ACTOR_VALID(&iVar2))
				{
					if (GET_ACTOR_FACTION(&iVar2) != 4 || GET_ACTOR_FACTION(&iVar2) != 6)
					{
						TASK_CLEAR(&iVar2);
						MEMORY_CONSIDER_AS(&iVar2, Function_120(), 2);
						MEMORY_CLEAR_ALL(&iVar2);
					}
				}
				iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
			}
		}
		DESTROY_ITERATOR(&uVar0);
	}
	return;
}

void Function_36(var uParam0, bool bParam1) //Position: 0x2B53 / 11091
{
	bool bVar0;
	
	if (DECOR_CHECK_EXIST(&uParam0, "iAdditionalMoney"))
	{
		bVar0 = DECOR_GET_INT(&uParam0, "iAdditionalMoney");
		bVar0 = (bVar0 + bParam1);
		DECOR_SET_INT(&uParam0, "iAdditionalMoney", bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, "iAdditionalMoney", bParam1);
	}
	return;
}

int Function_37(int iParam0, bool bParam1) //Position: 0x2BD2 / 11218
{
	bool bVar0;
	
	bVar0 = Function_55(0);
	if ((Function_55(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_38(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (iParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_55(0));
	return 1;
}

int Function_38(int iParam0, bool bParam1, bool bParam2) //Position: 0x2C63 / 11363
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(bParam1));
	Function_50(iParam0);
	if (bParam2 && bParam1 == 0)
	{
		Function_39(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

void Function_39(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, int iParam7) //Position: 0x2E60 / 11872
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_49(390))), 32);
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
					fVar19 = (Function_48(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_48(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_46(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_43(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_41(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_40(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_78(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_40(int iParam0) //Position: 0x349E / 13470
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_41(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x34AF / 13487
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_42("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_42("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_42("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_42(char* cParam0) //Position: 0x35A6 / 13734
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_43(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x35C1 / 13761
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_45(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_44(Function_45(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_44(int iParam0, int iParam1) //Position: 0x3628 / 13864
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_45(int iParam0, bool bParam1) //Position: 0x363A / 13882
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_46(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x364C / 13900
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
	if (((Function_47(iParam0) != 19 || Function_47(iParam0) != 17) || Function_47(iParam0) != 10) || Function_47(iParam0) != 9)
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

int Function_47(int iParam0) //Position: 0x3780 / 14208
{
	return Global_55480[iParam016].f_96;
}

float Function_48(int iParam0) //Position: 0x378F / 14223
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_49(int iParam0) //Position: 0x37C8 / 14280
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_50(int iParam0) //Position: 0x3805 / 14341
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

int Function_51(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x399F / 14751
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
	Function_53(iParam0, TO_FLOAT(bParam1), 1);
	Function_50(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_39(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_52(iParam0);
	return 1;
}

void Function_52(int iParam0) //Position: 0x3BC7 / 15303
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

int Function_53(int iParam0, float fParam1, bool bParam2) //Position: 0x3C65 / 15461
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

int Function_54(int iParam0, bool bParam1, bool bParam2) //Position: 0x3EA9 / 16041
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
		Function_53(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_50(iParam0);
	if (&bParam2)
	{
		Function_39(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_55(bool bParam0) //Position: 0x4146 / 16710
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

bool Function_56(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7) //Position: 0x4187 / 16775
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&iParam2))
	{
		iParam0 = 10;
	}
	else if (!IS_ACTOR_ALIVE(&iParam2))
	{
		iParam0 = 10;
	}
	if (!IS_ACTOR_VALID(&iParam3))
	{
		iParam0 = 10;
	}
	else if (!IS_ACTOR_ALIVE(&iParam3))
	{
		iParam0 = 10;
	}
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = IS_ACTOR_RAGDOLL(&iParam2);
			if (Function_58(&iParam2))
			{
				Function_57(&iParam2, &Global_54076);
			}
			if (!bVar0)
			{
				SET_MOVER_FROZEN(&iParam2, 1);
			}
			TASK_GO_NEAR_COORD(&iParam3, &uParam4, 1.0f, 2);
			if (!bVar0)
			{
				TASK_PRIORITY_SET(&iParam2, true);
			}
			TASK_PRIORITY_SET(&iParam3, true);
			if (!bVar0)
			{
				SAY_SINGLE_LINE_CONTEXT(&iParam2, 86, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
			}
			iParam0 = 1;
			uParam1 = GET_CURRENT_GAME_TIME();
		
		case 0x00000001:
			if (GET_TASK_STATUS(&iParam3, 4294967295) != 2 || GET_TASK_STATUS(&iParam3, 4294967295) != 0)
			{
				iParam0 = 6;
			}
			if (uParam1 + 2.0f) > GET_CURRENT_GAME_TIME()
			{
				iParam0 = 6;
			}
			break;
		
		case 0x00000006:
			ACTOR_DRAW_ANY_WEAPON(&iParam3, 1);
			SAY_SINGLE_LINE_CONTEXT(&iParam3, 60, &iParam2, 1, 0, 2, 4294967295, 4294967295, 0, 1);
			iParam0 = 7;
			uParam1 = GET_CURRENT_GAME_TIME();
		
		case 0x00000007:
			if (uParam1 + 1,5f) > GET_CURRENT_GAME_TIME()
			{
				iParam0 = 8;
			}
			break;
		
		case 0x00000008:
			GET_POSITION(Function_120(), &uParam6);
			TASK_GO_NEAR_COORD(&iParam3, &uParam6, 5.0f, 4);
			if (IS_MOVER_FROZEN(&iParam2))
			{
				SET_MOVER_FROZEN(&iParam2, 0);
			}
			TASK_FLEE_ACTOR(&iParam2, Function_120(), -1.0f, -1.0f, 0, 0, 0);
			iParam0 = 9;
			uParam1 = GET_CURRENT_GAME_TIME();
		
		case 0x00000009:
			if (Global_43789 == Global_46816[0])
			{
				if (uParam1 + 1.0f) > GET_CURRENT_GAME_TIME()
				{
					iParam0 = 10;
				}
			}
			else if (uParam1 + 1,5f) > GET_CURRENT_GAME_TIME()
			{
				iParam0 = 10;
			}
			break;
		
		case 0x0000000A:
			return 1;
			break;
	}
	return 0;
}

void Function_57(var uParam0, int iParam1) //Position: 0x4362 / 17250
{
	struct<9> Var0;
	
	GET_POSITION(&uParam0, &vVar0);
	GET_POSITION(&iParam1, &vVar2);
	uVar4 = Vector((vVar2.x - vVar0.x), 0.0f, (vVar2.z - vVar0.z));
	fVar6 = (GET_HEADING(&uParam0) - UNK_0x9C40E671(&uVar4));
	if (IS_ACTOR_MALE(&uParam0))
	{
		SET_ANIM_SET_FOR_ACTOR(&uParam0, "witness", 0);
	}
	else
	{
		SET_ANIM_SET_FOR_ACTOR(&uParam0, "witness_fema", 0);
	}
	while (fVar6 > -0,1f || fVar6 < 360,1f)
	{
		if (fVar6 > -0,1f)
		{
			fVar6 = (fVar6 + 360.0f);
		}
		else if (fVar6 < 360,1f)
		{
			fVar6 = (fVar6 - 360.0f);
		}
	}
	if (fVar6 < 90.0f)
	{
		SET_ACTION_NODE_FOR_ACTOR(&uParam0, "witness/right");
	}
	else if (fVar6 < 270.0f)
	{
		SET_ACTION_NODE_FOR_ACTOR(&uParam0, "witness/left");
	}
	else
	{
		SET_ACTION_NODE_FOR_ACTOR(&uParam0, "witness/back");
	}
	return;
}

bool Function_58(int iParam0) //Position: 0x4471 / 17521
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (((!IS_ACTOR_RIDING_VEHICLE(&iParam0) && !IS_ACTOR_RIDING(&iParam0)) && !IS_ACTOR_RAGDOLL(&iParam0)) && !IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(GET_CURRENT_GRINGO(&iParam0))))
		{
			if (Function_59())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool Function_59() //Position: 0x44B6 / 17590
{
	if ((HAS_ANIM_SET_LOADED("witness") && HAS_ANIM_SET_LOADED("witness_fema")) && HAS_ACTION_TREE_LOADED("custom/witness"))
	{
		return 1;
	}
	return 0;
}

var Function_60(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x44F7 / 17655
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_61(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_61(bParam4))
	{
		bParam4 = 976;
	}
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam3, bParam4, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam1, bParam2, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(&uVar0))
	{
		DESTROY_ACTOR(&uVar1);
		return "";
	}
	ACCESSORIZE_HORSE(&uVar1, 3);
	ACTOR_MOUNT_ACTOR(&uVar0, &uVar1);
	return &uVar0;
}

bool Function_61(bool bParam0) //Position: 0x462F / 17967
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_62(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x4646 / 17990
{
	return Function_63(&uParam0, iParam1, &iParam2, 4294967295, &iParam3);
}

var Function_63(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x465D / 18013
{
	return Function_64(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_64(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x467B / 18043
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_69();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_61(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_68(&uParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_68(&uParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_67(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_61(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_67(bVar0))
				{
					Function_66();
				}
				Function_65(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_61(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (iParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return bVar0;
}

void Function_65(int iParam0) //Position: 0x4974 / 18804
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			(*&Global_46956 + 12)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_66() //Position: 0x4A28 / 18984
{
	int iVar0;
	
	if (Global_6645)
	{
		Global_46956 = GET_THIS_SCRIPT_ID();
		Global_46956.f_8 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		(*&Global_46956 + 12)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_67(bool bParam0) //Position: 0x4A63 / 19043
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_68(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x4A90 / 19088
{
	int iVar0;
	
	PRINTSTRING("NoDupes=");
	if (bParam1)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  RANDACTOR_FILTER=");
	PRINTINT(&iParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(&iParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (&bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(&uParam0, &iParam2, &iParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		iVar0++;
	}
}

void Function_69() //Position: 0x4BEB / 19435
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_66();
		}
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_66();
	return;
}

void Function_70() //Position: 0x4C37 / 19511
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_71(int iParam0, bool bParam1) //Position: 0x4C4C / 19532
{
	int iVar0;
	
	iVar0 = Function_73(iParam0);
	if (!Function_72(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_72(int iParam0) //Position: 0x4C8A / 19594
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_73(int iParam0) //Position: 0x4CA1 / 19617
{
	if (!Function_74(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_74(int iParam0) //Position: 0x4CBB / 19643
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_75(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x4CD1 / 19665
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

void Function_76(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x4D80 / 19840
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &iParam1, &iParam2, &iParam3, &iParam4);
	uParam0 = uParam0;
}

int Function_77(int iParam0, int iParam1) //Position: 0x4DA3 / 19875
{
	var uVar0;
	var uVar1;
	
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&Global_39918);
		ITERATE_EVERYWHERE(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 2);
		ITERATE_ON_PARTIAL_NAME(&uVar1, "nSharedLaw");
		uVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(&uVar1));
		DESTROY_ITERATOR(&uVar1);
	}
	else
	{
		uVar0 = &iParam1;
	}
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(&iParam0, &uVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(&iParam0, &uVar0);
	CLEAN_OBJECTSET(&uVar0);
	return 1;
}

var Function_78() //Position: 0x4E2E / 20014
{
	int iVar0;
	
	return &iVar0;
}

var Function_79(int iParam0) //Position: 0x4E37 / 20023
{
	int iVar0;
	var uVar1;
	
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_40000 + 16);
	ITERATE_IN_LAYOUT(&uVar1, &Global_40000 + 16);
	ITERATE_ON_OBJECT_TYPE(&uVar1, 8);
	ITERATE_ON_PARTIAL_NAME(&uVar1, &iParam0);
	iVar0 = START_OBJECT_ITERATOR(&uVar1);
	if (IS_OBJECT_VALID(&iVar0))
	{
		DESTROY_ITERATOR(&uVar1);
		return &iVar0;
	}
	DESTROY_ITERATOR(&uVar1);
	return "";
}

bool Function_80(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4E8A / 20106
{
	if (!IS_POPSET_VALID(&uParam0))
	{
		return 0;
	}
	if (&bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(&uParam0, &iParam1, &iParam2);
}

void Function_81(int iParam0) //Position: 0x4EB6 / 20150
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_82() //Position: 0x4EC9 / 20169
{
	return Global_54082 != 3;
}

bool Function_83() //Position: 0x4ED4 / 20180
{
	return Global_54082 != 2;
}

int Function_84(bool bParam0) //Position: 0x4EDF / 20191
{
	bool bVar0;
	
	bVar0 = CEIL((IntToFloat(Function_86(&bParam0)) * 0,5f));
	if (Function_85() >= 2 && Function_85() == 4294967295)
	{
		bVar0 = CEIL((IntToFloat(bVar0) * 0,5f));
	}
	return bVar0;
}

int Function_85() //Position: 0x4F16 / 20246
{
	return Global_21369.f_244;
}

int Function_86(var uParam0) //Position: 0x4F21 / 20257
{
	struct<73> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_41252[GET_CRIME_TYPE(&uParam0)11] };
	if (Var0.f_36 != 2 || (Var0.f_36 != 3 && Var0.f_72 < 0))
	{
		if (Function_87() == 5)
		{
			return CEIL((IntToFloat((Var0.f_40 * GET_CRIME_COUNTER(&uParam0))) / 2.0f));
		}
		return (Var0.f_40 * GET_CRIME_COUNTER(&uParam0));
	}
	if (Function_87() == 5)
	{
		return CEIL((IntToFloat(Var0.f_40) / 2.0f));
	}
	return Var0.f_40;
}

int Function_87() //Position: 0x4F8C / 20364
{
	return Global_21369.f_248;
}

int Function_88() //Position: 0x4F97 / 20375
{
	return Function_55(0);
}

var Function_89(struct<2> Param0) //Position: 0x4FA1 / 20385
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	bool bVar4;
	int iVar5;
	
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_39918);
	ITERATE_IN_LAYOUT(&uVar1, GET_AMBIENT_LAYOUT());
	ITERATE_ON_OBJECT_TYPE(&uVar1, 15);
	bVar4 = 1E+08.0f;
	iVar5 = GET_ACTOR_FROM_OBJECT(START_OBJECT_ITERATOR(&uVar1));
	while (IS_ACTOR_VALID(&iVar5))
	{
		GET_OBJECT_POSITION(&iVar5, &Var2);
		if (VDIST(Param0, Var2) > bVar4)
		{
			bVar4 = VDIST(Param0, Var2);
			iVar0 = &iVar5;
		}
		iVar5 = GET_ACTOR_FROM_OBJECT(OBJECT_ITERATOR_NEXT(&uVar1));
	}
	DESTROY_ITERATOR(&uVar1);
	return &iVar0;
}

var Function_90(struct<2> Param0) //Position: 0x5023 / 20515
{
	bool bVar0;
	struct<2> Var1;
	bool bVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	var uVar8;
	
	bVar3 = 1E+08.0f;
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&Global_98981))
	{
		uVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_98981);
		GET_OBJECT_POSITION(&uVar5, &Var1);
		if (VDIST(Param0, Var1) > bVar3)
		{
			bVar7 = true;
			if (GET_OBJECT_TYPE(&uVar5) == 24)
			{
				if (!IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&uVar5))))
				{
					bVar7 = false;
				}
			}
			if (bVar7)
			{
				bVar3 = VDIST(Param0, Var1);
				uVar4 = &uVar5;
			}
		}
		bVar0++;
	}
	if (GET_OBJECT_TYPE(&uVar4) == 15)
	{
		iVar6 = GET_ACTOR_FROM_OBJECT(&uVar4);
		if (IS_ACTOR_VALID(&iVar6))
		{
			REFERENCE_ACTOR(&iVar6);
			TASK_CLEAR(&iVar6);
			TASK_OVERRIDE_CLEAR_MOVETYPE(&iVar6);
		}
	}
	else if (GET_OBJECT_TYPE(&uVar4) == 24)
	{
		uVar8 = GET_PERS_CHAR_FROM_OBJECT(&uVar4);
		ACTIVATE_ACTOR_FOR_PERS_CHAR(&uVar8);
		iVar6 = GET_ACTOR_FROM_PERS_CHAR(&uVar8);
		if (IS_ACTOR_VALID(&iVar6))
		{
			REFERENCE_ACTOR(&iVar6);
			TASK_CLEAR(&iVar6);
			TASK_OVERRIDE_CLEAR_MOVETYPE(&iVar6);
		}
	}
	Function_91(&iVar6, 1);
	return &iVar6;
}

void Function_91(var uParam0, int iParam1) //Position: 0x5124 / 20772
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (iParam1 == 1)
	{
		DECOR_SET_BOOL(&uParam0, "nsharedlaw", 1);
	}
	else
	{
		DECOR_REMOVE(&uParam0, "nsharedlaw");
	}
	return;
}

bool Function_92(int iParam0, int iParam1, bool bParam2) //Position: 0x5165 / 20837
{
	int iVar0;
	struct<2> Var1;
	
	if (GET_OBJECT_TYPE(&iParam1) == 15)
	{
		if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, &iParam1))
		{
			return 1;
		}
		if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(&iParam1))))
		{
			return CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, GET_MOUNT(GET_ACTOR_FROM_OBJECT(&iParam1)));
		}
		if (IS_ACTOR_VALID(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(&iParam1))))
		{
			return CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, GET_VEHICLE(GET_ACTOR_FROM_OBJECT(&iParam1)));
		}
		return 0;
	}
	if (&bParam2)
	{
		if (!IS_ITERATOR_VALID(&Global_39554))
		{
			LOG_ERROR("MULTI_CAN_ANYONE_OF_FACTION_SEE_OBJECT: NO Ambient Iterator Valid");
			return 0;
		}
		GET_OBJECT_POSITION(&iParam1, &Var1);
		Function_93(&Global_39554);
		ITERATE_IN_LAYOUT(&Global_39554, GET_AMBIENT_LAYOUT());
		ITERATE_ON_OBJECT_TYPE(&Global_39554, 15);
		ITERATE_IN_SPHERE(&Global_39554, Var1, 25.0f);
		iVar0 = START_OBJECT_ITERATOR(&Global_39554);
		while (IS_OBJECT_VALID(&iVar0))
		{
			if (GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(&iVar0)) == iParam0)
			{
				return 1;
			}
			iVar0 = OBJECT_ITERATOR_NEXT(&Global_39554);
		}
		Function_93(&Global_39554);
		ITERATE_IN_LAYOUT(&Global_39554, &Global_10996);
		ITERATE_ON_OBJECT_TYPE(&Global_39554, 24);
		ITERATE_IN_SPHERE(&Global_39554, Var1, 25.0f);
		iVar0 = START_OBJECT_ITERATOR(&Global_39554);
		while (IS_OBJECT_VALID(&iVar0))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar0))))
			{
				if (GET_ACTOR_FACTION(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar0))) == iParam0)
				{
					return 1;
				}
			}
			iVar0 = OBJECT_ITERATOR_NEXT(&Global_39554);
		}
	}
	return 0;
}

int Function_93(int iParam0) //Position: 0x52F5 / 21237
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_78());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_78());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

var Function_94(var uParam0, struct<2> Param1, float fParam3) //Position: 0x532B / 21291
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var4);
		bVar2 = VDIST(Var4, Param1);
		if (bVar2 < fParam3)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				bVar3 = bVar2;
				uVar1 = &fVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

bool Function_95(vector3 vParam0) //Position: 0x53B1 / 21425
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_96(struct<2> Param0) //Position: 0x53C9 / 21449
{
	struct<2> Var0;
	struct<2> Var2;
	bool bVar4;
	int iVar5;
	
	Function_12();
	Var0 = Function_12();
	bVar4 = 99999.0f;
	iVar5 = 0;
	while (iVar5 < 145)
	{
		if ((StackVal && (StackVal || IS_VOLUME_VALID(&Global_44085[iVar59] + 8) != 3 != 4)) && Function_97(iVar5))
		{
			GET_VOLUME_CENTER(&Global_44085[iVar59] + 8, &Var2);
			if (VDIST(Param0, Var2) > bVar4)
			{
				Var0 = Var2;
				bVar4 = VDIST(Param0, Var2);
			}
		}
		iVar5++;
	}
	return StackVal, Var0;
}

int Function_97(int iParam0) //Position: 0x5455 / 21589
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((((iVar0 != Global_46816[0] || iVar0 != Global_46760[0]) || iVar0 != Global_46866[0]) || iVar0 != Global_46850[0]) || iVar0 != Global_46914[0])
	{
		return 1;
	}
	return 0;
}

float Function_98(int iParam0, int iParam1) //Position: 0x5496 / 21654
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&iParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

var Function_99(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x558B / 21899
{
	float fVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return &iParam0;
	}
	if (!Function_100(iParam2))
	{
		return &iParam0;
	}
	if (!IS_CRIME_VALID(&iParam0))
	{
		return &iParam0;
	}
	fVar0 = GET_CRIME_BEGIN_TIMESTAMP(&iParam0);
	iVar1 = Global_41252[GET_CRIME_TYPE(&iParam0)11].f_40;
	uVar2 = CREATE_OBJECT_ITERATOR(&Global_39918);
	iVar3 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_9(&uVar2, &iVar3);
	iVar4 = START_OBJECT_ITERATOR(&uVar2);
	while (IS_OBJECT_VALID(&iVar4))
	{
		iVar6 = GET_CRIME_FROM_OBJECT(&iVar4);
		if ((GET_CRIME_CRIMINAL(&iVar6) != &iParam1 && GET_CRIME_WITNESSED(&iVar6) <= iParam2) && !&iVar6 != &iParam0)
		{
			if ((Global_41252[GET_CRIME_TYPE(&iVar6)11].f_40 < iVar1 && Global_41252[GET_CRIME_TYPE(&iVar6)11].f_40 < &iParam3) && GET_CRIME_BEGIN_TIMESTAMP(&iVar6) < fVar0)
			{
				fVar0 = GET_CRIME_BEGIN_TIMESTAMP(&iVar6);
				uVar5 = &iVar6;
				iVar1 = Global_41252[GET_CRIME_TYPE(&iVar6)11].f_40;
			}
		}
		iVar4 = OBJECT_ITERATOR_NEXT(&uVar2);
	}
	DESTROY_ITERATOR(&uVar2);
	if (IS_CRIME_VALID(&uVar5))
	{
		return &uVar5;
	}
	return &iParam0;
}

bool Function_100(int iParam0) //Position: 0x56B4 / 22196
{
	if (iParam0 > 0 || iParam0 < 3)
	{
		return 0;
	}
	return 1;
}

void Function_101(int iParam0, int iParam1) //Position: 0x56C9 / 22217
{
	struct<9> Var0;
	
	GET_POSITION(&iParam0, &vVar0);
	GET_POSITION(&iParam1, &vVar2);
	uVar4 = Vector((vVar2.x - vVar0.x), 0.0f, (vVar2.z - vVar0.z));
	fVar6 = (GET_HEADING(&iParam0) - UNK_0x9C40E671(&uVar4));
	SET_ANIM_SET_FOR_ACTOR(&iParam0, "pointing", 0);
	while (fVar6 > -0,1f || fVar6 < 360,1f)
	{
		if (fVar6 > -0,1f)
		{
			fVar6 = (fVar6 + 360.0f);
		}
		else if (fVar6 < 360,1f)
		{
			fVar6 = (fVar6 - 360.0f);
		}
	}
	if (fVar6 > 22,5f || fVar6 < 337,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(&iParam0, "pointing/000");
	}
	else if (fVar6 > 67,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(&iParam0, "pointing/045");
	}
	else if (fVar6 > 112,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(&iParam0, "pointing/090");
	}
	else if (fVar6 > 157,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(&iParam0, "pointing/135");
	}
	else if (fVar6 > 202,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(&iParam0, "pointing/180");
	}
	else if (fVar6 > 247,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(&iParam0, "pointing/225");
	}
	else if (fVar6 > 292,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(&iParam0, "pointing/270");
	}
	else
	{
		SET_ACTION_NODE_FOR_ACTOR(&iParam0, "pointing/315");
	}
	return;
}

bool Function_102(int iParam0) //Position: 0x5872 / 22642
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (((!IS_ACTOR_RIDING_VEHICLE(&iParam0) && !IS_ACTOR_RAGDOLL(&iParam0)) && !IS_ACTOR_ON_LADDER(&iParam0)) && !IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(GET_CURRENT_GRINGO(&iParam0))))
		{
			if (Function_103())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool Function_103() //Position: 0x58B7 / 22711
{
	if (HAS_ANIM_SET_LOADED("pointing") && HAS_ACTION_TREE_LOADED("custom/pointing"))
	{
		return 1;
	}
	return 0;
}

int Function_104(int iParam0, float fParam1, var uParam2, float fParam3) //Position: 0x58E7 / 22759
{
	int iVar0;
	
	iVar0 = 0;
	if (GET_CURRENT_GAME_TIME() <= (fParam1 + 2,5f))
	{
		Function_108(&iVar0, 1);
	}
	else
	{
		Function_108(&iVar0, 1);
		Function_108(&iVar0, 16);
		Function_108(&iVar0, 2);
	}
	if (Function_105(&iParam0, &uParam2, &fParam3, iVar0, 0, 0x40400000))
	{
		return 1;
	}
	return 0;
}

bool Function_105(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x593A / 22842
{
	float fVar0;
	
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		if (IS_ACTOR_ON_FOOT(&iParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, &fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, (&fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		fVar0 = Function_98(&iParam0, &Global_54076);
		if (!Function_18(&uParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_106(&iParam0);
				return 1;
			}
		}
		if (!Function_18(&uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_106(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_106(&iParam0);
				return 1;
			}
		}
		if (!Function_18(&uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_106(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_106(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_18(&uParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_106(&iParam0);
				return 1;
			}
		}
		if (!Function_18(&uParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_106(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_106(int iParam0) //Position: 0x5B03 / 23299
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_107(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_107(int iParam0) //Position: 0x5B40 / 23360
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_108(int iParam0, int iParam1) //Position: 0x5B59 / 23385
{
	iParam0 = (iParam0 || iParam1);
	return;
}

int Function_109(int iParam0, bool bParam1) //Position: 0x5B6A / 23402
{
	float fVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return "";
	}
	if (!Function_100(bParam1))
	{
		return "";
	}
	fVar0 = -1.0f;
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_39918);
	iVar2 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_9(&uVar1, &iVar2);
	iVar3 = START_OBJECT_ITERATOR(&uVar1);
	while (IS_OBJECT_VALID(&iVar3))
	{
		uVar5 = GET_CRIME_FROM_OBJECT(&iVar3);
		if (GET_CRIME_CRIMINAL(&uVar5) != &iParam0 && GET_CRIME_WITNESSED(&uVar5) <= bParam1)
		{
			if (GET_CRIME_END_TIMESTAMP(&uVar5) < fVar0)
			{
				fVar0 = GET_CRIME_END_TIMESTAMP(&uVar5);
				iVar4 = &uVar5;
			}
		}
		iVar3 = OBJECT_ITERATOR_NEXT(&uVar1);
	}
	DESTROY_ITERATOR(&uVar1);
	return &iVar4;
}

void Function_110(int iParam0, int iParam1, var uParam2, struct<2> Param3, var uParam5, bool bParam6, var uParam7, int iParam8, int iParam9) //Position: 0x5C1D / 23581
{
	DECOR_SET_BOOL(&iParam1, "nnowitness", 1);
	uParam2 = &iParam0 + 8;
	(&iParam0 + 8) = Function_111(StackVal, &iParam0, Param4, 10.0f, 1, 0);
	if (IS_OBJECT_VALID(&iParam0 + 8))
	{
		if (GET_OBJECT_TYPE(&uParam2) == 24)
		{
			Function_1(GET_PERS_CHAR_FROM_OBJECT(&uParam2));
			DEREFERENCE_ACTOR(&iParam1);
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam1));
		}
		else
		{
			RELEASE_ACTOR(GET_ACTOR_FROM_OBJECT(&iParam1));
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam1));
		}
		uParam5 = Param3;
		bParam6 = GET_CURRENT_GAME_TIME();
		NAV_QUERY_STOP(&uParam7);
		iParam8 = 0;
		iParam9 = 0;
	}
	else
	{
		iParam8 = 14;
		iParam9 = 0;
	}
}

var Function_111(var uParam0, struct<2> Param1, float fParam3, bool bParam4, var uParam5) //Position: 0x5CD7 / 23767
{
	var uVar0;
	
	if (fParam3 < 100.0f)
	{
		return "";
	}
	uVar0 = "";
	Function_119();
	if (IS_LAYOUTREF_VALID(GET_AMBIENT_LAYOUT()))
	{
		uVar0 = Function_112(StackVal, StackVal, GET_AMBIENT_LAYOUT(), 15, &uParam0, Param1, fParam3, 0, &uParam5, 0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			return &uVar0;
		}
	}
	if (IS_LAYOUTREF_VALID(&Global_10996))
	{
		uVar0 = Function_112(StackVal, StackVal, &Global_10996, 24, &uParam0, Param1, fParam3, 0, &uParam5, 0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			return &uVar0;
		}
	}
	if (IS_LAYOUTREF_VALID(&Global_10994))
	{
		uVar0 = Function_112(StackVal, StackVal, &Global_10994, 24, &uParam0, Param1, fParam3, 0, &uParam5, 0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			return &uVar0;
		}
	}
	if (IS_LAYOUTREF_VALID(GET_GC_LAYOUT()))
	{
		uVar0 = Function_112(StackVal, StackVal, GET_GC_LAYOUT(), 15, &uParam0, Param1, fParam3, 0, &uParam5, 0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			return &uVar0;
		}
	}
	if (IS_LAYOUTREF_VALID(&Global_43578))
	{
		if (&bParam4)
		{
			uVar0 = Function_112(StackVal, StackVal, &Global_43578, 15, &uParam0, Param1, fParam3, 1, &uParam5, 0);
			if (IS_OBJECT_VALID(&uVar0))
			{
				return &uVar0;
			}
		}
	}
	if (IS_LAYOUTREF_VALID(&Global_10998))
	{
		uVar0 = Function_112(StackVal, StackVal, &Global_10998, 15, &uParam0, Param1, fParam3, 0, &uParam5, 0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			return &uVar0;
		}
	}
	return Function_111(StackVal, &uParam0, Param1, (fParam3 * 2.0f), &bParam4, 0);
}

var Function_112(var uParam0, int iParam1, int iParam2, var uParam3, struct<2> Param4, float fParam6, bool bParam7, var uParam8, int iParam9) //Position: 0x5E5B / 24155
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	int iVar4;
	
	GET_CRIME_POSITION(&uParam3, &Var2);
	Function_93(&Global_39554);
	ITERATE_ON_OBJECT_TYPE(&Global_39554, iParam2);
	if (&iParam9 == "")
	{
		ITERATE_IN_SPHERE(&Global_39554, Var2, fParam6);
	}
	else
	{
		ITERATE_IN_VOLUME(&Global_39554, &iParam9);
	}
	ITERATE_IN_LAYOUT(&Global_39554, &uParam0);
	if (GET_NUM_ITERATOR_MATCHES(&Global_39554) >= 0)
	{
		iVar0 = Function_118(StackVal, &Global_39554, iParam1, GET_CRIME_VICTIM(&uParam3), "nnowitness", Param4, GET_CRIME_CRIMINAL(&uParam3));
		uVar1 = Function_113(&iVar0, &bParam7, &uParam8);
		if (IS_OBJECT_VALID(&uVar1))
		{
			return &uVar1;
		}
		if (iParam1 == 6)
		{
			iVar4 = 4;
		}
		else if (iParam1 == 4)
		{
			iVar4 = 6;
		}
		if (iVar4 != 4 || iVar4 != 6)
		{
			iVar0 = Function_118(StackVal, &Global_39554, iVar4, GET_CRIME_VICTIM(&uParam3), "nnowitness", Param4, GET_CRIME_CRIMINAL(&uParam3));
			uVar1 = Function_113(&iVar0, &bParam7, &uParam8);
			if (IS_OBJECT_VALID(&uVar1))
			{
				return &uVar1;
			}
		}
	}
	return "";
}

int Function_113(int iParam0, bool bParam1, var uParam2) //Position: 0x5F62 / 24418
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	
	uParam2 = &uParam2;
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (GET_OBJECT_TYPE(&iParam0) == 15)
		{
			uVar0 = GET_ACTOR_FROM_OBJECT(&iParam0);
		}
		else if (GET_OBJECT_TYPE(&iParam0) == 24)
		{
			uVar0 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iParam0));
		}
		if (&bParam1)
		{
			if (IS_ACTOR_RIDING_VEHICLE(&uVar0))
			{
				bVar1 = false;
				uVar2 = GET_VEHICLE(&uVar0);
				if (IS_ACTOR_VALID(&uVar2))
				{
					iVar3 = GET_ACTOR_IN_VEHICLE_SEAT(&uVar2, false);
					if (IS_ACTOR_VALID(&iVar3) && &iVar3 == GET_PLAYER_ACTOR(0))
					{
						iParam0 = GET_OBJECT_FROM_ACTOR(&iVar3);
						bVar1 = true;
					}
				}
				if (!bVar1)
				{
					DECOR_SET_BOOL(&iParam0, "witnessOutNow", 1);
					MEMORY_PREFER_WALKING(&uVar0, 1);
				}
			}
		}
		if (!Function_116(&iParam0) && !Function_115(&iParam0))
		{
			if (IS_ACTOR_HOGTIED(&uVar0))
			{
				DECOR_SET_BOOL(&iParam0, "nnowitness", 1);
			}
			else
			{
				if (SQUAD_IS_VALID(&Global_43660 + 8))
				{
					if (&uVar0 == Function_114(&Global_43660 + 8))
					{
						Global_43580.f_100 = GET_CURRENT_GAME_TIME();
					}
				}
				DECOR_SET_BOOL(&iParam0, "witness", 1);
				return &iParam0;
			}
		}
	}
	return "";
}

int Function_114(var uParam0) //Position: 0x6083 / 24707
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		if (IS_ACTOR_VALID(&iVar0) && IS_ACTOR_ALIVE(&iVar0))
		{
			return &iVar0;
		}
		bVar1++;
	}
	return "";
}

bool Function_115(int iParam0) //Position: 0x60D0 / 24784
{
	var uVar0;
	var uVar1;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (GET_OBJECT_TYPE(&iParam0) == 15)
		{
			uVar0 = GET_ACTOR_FROM_OBJECT(&iParam0);
		}
		else if (GET_OBJECT_TYPE(&iParam0) == 24)
		{
			uVar0 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iParam0));
		}
		if (IS_ACTOR_VALID(&uVar0))
		{
			uVar1 = GET_OBJECT_FROM_GRINGO(GET_CURRENT_GRINGO(&uVar0));
			if (IS_OBJECT_VALID(&uVar1))
			{
				if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(&uVar1), "sleep"))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_116(int iParam0) //Position: 0x6142 / 24898
{
	int iVar0;
	
	if (GET_OBJECT_TYPE(&iParam0) == 24)
	{
		iVar0 = GET_PERS_CHAR_FROM_OBJECT(&iParam0);
		if (IS_PERS_CHAR_VALID(&iVar0))
		{
			if (Global_43789 == Global_46816[0])
			{
				if (&iVar0 != &Global_13580[183] + 16 || &iVar0 != &Global_13580[23] + 16)
				{
					DECOR_SET_BOOL(&iParam0, "nnowitness", 1);
					return 1;
				}
			}
			if (Global_43789 == Global_46796[4])
			{
				if (&iVar0 == &Global_13504[13] + 16)
				{
					if (Function_117(&(Global_11492[12]), 1))
					{
						DECOR_SET_BOOL(&iParam0, "nnowitness", 1);
						return 1;
					}
				}
			}
			if (Global_43789 == Global_46850[0])
			{
				if (&iVar0 != &Global_14012[253] + 16 || &iVar0 != &Global_14012[263] + 16)
				{
					DECOR_SET_BOOL(&iParam0, "nnowitness", 1);
					return 1;
				}
			}
			if (Global_43789 == Global_46894[1])
			{
				if (&iVar0 == &Global_14762[103] + 16)
				{
					DECOR_SET_BOOL(&iParam0, "nnowitness", 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_117(int iParam0, int iParam1) //Position: 0x6262 / 25186
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_118(var uParam0, int iParam1, int iParam2, int iParam3, struct<2> Param4, int iParam6) //Position: 0x627F / 25215
{
	var uVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	struct<2> Var6;
	struct<2> Var8;
	
	if (!IS_ITERATOR_VALID(&uParam0))
	{
		LOG_ERROR("GET_FACTION_OBJECT_FROM_ITERATOR: Invalid iterator");
		return "";
	}
	if (!IS_FACTION_VALID(iParam1))
	{
		LOG_ERROR("GET_FACTION_OBJECT_FROM_ITERATOR: Invalid faction");
		return "";
	}
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		LOG_ERROR("GET_FACTION_OBJECT_FROM_ITERATOR: Invalid local player");
		return "";
	}
	uVar0 = "";
	uVar1 = "";
	fVar2 = 1,001638E+07.0f;
	fVar3 = 1,001638E+07.0f;
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var8);
	iVar4 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&iVar4))
	{
		switch (GET_OBJECT_TYPE(&iVar4))
		{
			case 0x0000000F:
				if ((IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(&iVar4)) && GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(&iVar4)) != iParam1) && IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(&iVar4)))
				{
					if (!&iVar4 != &iParam2)
					{
						if (!DECOR_CHECK_EXIST(&iVar4, &iParam3))
						{
							GET_OBJECT_POSITION(&iVar4, &Var6);
							fVar5 = (VDIST(Var6, Param4) - (VDIST(Var6, Var8) * 2.0f));
							if (&iParam6 != "" || MEMORY_GET_IS_VISIBLE(GET_ACTOR_FROM_OBJECT(&iVar4), &iParam6))
							{
								if (fVar5 > fVar2)
								{
									fVar2 = fVar5;
									uVar0 = &iVar4;
								}
							}
							else if (fVar5 > fVar3)
							{
								fVar3 = fVar5;
								uVar1 = &iVar4;
							}
						}
					}
				}
				break;
			
			case 0x00000018:
				if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_OBJECT(&iVar4)) && IS_PERS_CHAR_ALIVE(GET_PERS_CHAR_FROM_OBJECT(&iVar4)))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar4))))
					{
						if (GET_ACTOR_FACTION(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar4))) == iParam1)
						{
							if (!GET_OBJECT_FROM_ACTOR(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar4))) != &iParam2)
							{
								if (!DECOR_CHECK_EXIST(&iVar4, &iParam3) && !DECOR_CHECK_EXIST(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar4)), &iParam3))
								{
									GET_OBJECT_POSITION(&iVar4, &Var6);
									fVar5 = (VDIST(Var6, Param4) - (VDIST(Var6, Var8) * 2.0f));
									if (&iParam6 != "" || MEMORY_GET_IS_VISIBLE(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar4)), &iParam6))
									{
										if (fVar5 > fVar2)
										{
											fVar2 = fVar5;
											uVar0 = &iVar4;
										}
									}
									else if (fVar5 > fVar3)
									{
										fVar3 = fVar5;
										uVar1 = &iVar4;
									}
								}
							}
						}
					}
				}
				break;
		}
		iVar4 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	if (IS_OBJECT_VALID(&uVar0))
	{
		return &uVar0;
	}
	return &uVar1;
}

void Function_119() //Position: 0x6532 / 25906
{
	var uVar0;
	
	if (!IS_ITERATOR_VALID(&Global_39554))
	{
		uVar0 = FIND_NAMED_LAYOUT("regions_layout");
		if (!IS_LAYOUTREF_VALID(&uVar0))
		{
			LOG_ERROR("Attempting to create a new ambient iterator, but regions_layout is not valid. Bad things, man, bad things");
			return;
		}
		Global_39554 = CREATE_OBJECT_ITERATOR(&uVar0);
	}
	Function_93(&Global_39554);
	ITERATE_IN_LAYOUT(&Global_39554, GET_AMBIENT_LAYOUT());
	return;
}

int Function_120() //Position: 0x65EF / 26095
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_121(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, bool bParam5, float fParam6) //Position: 0x6604 / 26116
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (bParam5)
		{
			if (!AI_GET_TASK_RETREAT_FLAG(&iParam0))
			{
				if (IS_ACTOR_RIDING_VEHICLE(&iParam0))
				{
					fParam6 = (GET_CURRENT_GAME_TIME() + 1.0f);
				}
				else if (IS_ACTOR_RIDING(&iParam0))
				{
					Function_125(&iParam0);
					Function_125(&iParam1);
					if (VDIST(Function_125(&iParam0), Function_125(&iParam1)) > 40.0f)
					{
						fParam6 = (GET_CURRENT_GAME_TIME() + 1.0f);
					}
					else
					{
						fParam6 = (GET_CURRENT_GAME_TIME() + 30.0f);
					}
				}
				iLocal_15 = 1;
				TASK_FLEE_ACTOR(&iParam0, &iParam1, -1.0f, -1.0f, 0, 0, 0);
			}
		}
		else
		{
			TASK_GO_NEAR_COORD(&iParam0, &uParam2, (fParam4 - 0,2f), 4);
			TASK_PRIORITY_SET(&iParam0, true);
		}
	}
}

bool Function_122(int iParam0, int iParam1, bool bParam2) //Position: 0x66A9 / 26281
{
	int iVar0;
	
	if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam1, bParam2) != &iParam0)
	{
		return 0;
	}
	GET_ACTOR_VEHICLE_STATE(&iParam0, &bParam2, &iVar0);
	if (iVar0 == 1)
	{
		return 1;
	}
	return 0;
}

int Function_123(bool bParam0, bool bParam1) //Position: 0x66D3 / 26323
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&bParam0))
	{
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&bParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			REFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 1);
			if (&bParam1)
			{
				if (IS_ACTOR_HOGTIED(&uVar0))
				{
					FREE_FROM_HOGTIE(&uVar0);
				}
			}
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&bParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bParam0, 1);
			return 1;
		}
	}
	return 0;
}

void Function_124(int iParam0) //Position: 0x6785 / 26501
{
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam0));
	}
	return;
}

struct<8> Function_125(int iParam0) //Position: 0x67A2 / 26530
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_126() //Position: 0x67B4 / 26548
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_9(&uVar0, &uVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		if (IS_CRIME_VALID(&uVar3))
		{
			SET_CRIME_WITNESSED(&uVar3, 3);
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_127(var uParam0, var uParam1, var uParam2, struct<2> Param3) //Position: 0x6827 / 26663
{
	bool bVar0;
	var uVar1;
	
	uParam1 = 0;
	if (!Function_153(Global_119935, 4))
	{
		if ((((!uParam0 && !Function_71(12, 0)) && !Global_6664) && !Global_6627) && !Global_6623)
		{
			bVar0 = false;
			if (Global_43789 == Global_46816[0])
			{
				uParam2 = Function_132(&Global_46715, 0, 1, 1, 0);
				bVar0 = true;
			}
			else if (Global_43789 == Global_46760[0])
			{
				uParam2 = Function_128(&Global_46715, 0, 1, 1, 0);
				bVar0 = true;
			}
			if (bVar0)
			{
				if (IS_OBJECT_VALID(&uParam2))
				{
					STREAMING_SET_POI_LIMIT(2);
					uVar1 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam2, 0);
					GET_OBJECT_POSITION(&uVar1, &Param3);
					GET_OBJECT_ORIENTATION(&uVar1, &Param4);
					STREAMING_LOAD_SCENE_EXT(Param3, Param4, 1);
					uParam1 = 1;
				}
			}
		}
	}
}

var Function_128(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x68E6 / 26854
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_78(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "arm_report", 2, 1);
	}
	Function_129(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else if (&bParam3)
	{
		SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return &uVar0;
}

void Function_129(int iParam0) //Position: 0x695D / 26973
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_131(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_130(&uVar0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 2.0f, 4294967295);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 9.0f, 4294967295, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 20.0f, 4294967295);
	return;
}

void Function_130(int iParam0) //Position: 0x69AE / 27054
{
	SET_CAMERASHOT_ASPECT_RATIO(&iParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(&iParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2095,323f, 17,77037f, 2609,019f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-1,007215f, -46,1367f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_131(int iParam0) //Position: 0x6A2F / 27183
{
	SET_CAMERASHOT_ASPECT_RATIO(&iParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(&iParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2095,645f, 17,96468f, 2610,948f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-2,598799f, -32,44547f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_132(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x6AB0 / 27312
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_78(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "hen_report", 2, 1);
	}
	Function_133(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_133(int iParam0) //Position: 0x6B34 / 27444
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_135(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_134(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 20.0f, 2);
	return;
}

void Function_134(int iParam0) //Position: 0x6B82 / 27522
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 45,71919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-822,4377f, 95,00072f, 2418,255f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-4,785713f, -172,2064f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_135(int iParam0) //Position: 0x6BEF / 27631
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 45,71919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-822,9067f, 95,76531f, 2418,458f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(7,367466f, -172,3804f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

bool Function_136(struct<2>[] Param0) //Position: 0x6C5C / 27740
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_140();
	iVar1 = 0;
	if (!Function_5(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_139(&(Param0[iVar02]), 8);
		}
		else if (Function_138())
		{
			iVar1 = 1;
			Function_139(&(Param0[iVar02]), 8);
		}
		Function_139(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_5(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_5(&(Param0[02]), 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iVar02])), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO(&(Param0[iVar02]));
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT(&(Param0[iVar02]));
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iVar02]), 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY(&(Param0[iVar02]));
						break;
					
					default:
						break;
				}
				Function_139(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_139(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_139(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED(&(Param0[iVar02]), 4294967295))
						{
							Function_139(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_139(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_139(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_139(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_139(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_139(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_139(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_139(&(Param0[iVar02]), 2);
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
	Function_137();
	return 1;
}

void Function_137() //Position: 0x701E / 28702
{
	if (!Function_31(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_138() //Position: 0x705E / 28766
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == &Global_99725[iVar043] + 296)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_139(struct<13> Param0) //Position: 0x708C / 28812
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_140() //Position: 0x709F / 28831
{
	if (!Function_31(128))
	{
		return;
	}
	if (Global_21646.f_132 == 0)
	{
		strcpy(&Global_21646, "nStreaming", 64);
		Global_21646.f_132 = 1;
		Global_21646.f_128 = GET_CURRENT_GAME_TIME();
		Global_21646.f_136 = Global_21610.f_128;
	}
	return;
}

var Function_141(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x70E1 / 28897
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_139(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_139(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (bParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_142(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x71BD / 29117
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_143(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_139(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_143(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x71FB / 29179
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_139(&(Param0[iVar02]), 4);
			return iVar0;
		}
		if (StackVal && &iParam1 != &Param0[iVar02] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_144(int iParam0) //Position: 0x72CA / 29386
{
	int iVar0;
	int iVar1;
	
	iVar1 = RAND_INT_RANGE(0, 10000);
	if (iParam0 == Global_46760[0])
	{
		if (iVar1 <= 2500)
		{
			iVar0 = 427;
		}
		else if (iVar1 <= 5000)
		{
			iVar0 = 436;
		}
		else if (iVar1 <= 7500)
		{
			iVar0 = 440;
		}
		else
		{
			iVar0 = 442;
		}
	}
	else if (iParam0 == Global_46816[0])
	{
		if (iVar1 <= 2000)
		{
			iVar0 = 437;
		}
		else if (iVar1 <= 4000)
		{
			iVar0 = 441;
		}
		else if (iVar1 <= 6000)
		{
			iVar0 = 425;
		}
		else if (iVar1 <= 8000)
		{
			iVar0 = 428;
		}
		else
		{
			iVar0 = 429;
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		if (iVar1 <= 2000)
		{
			iVar0 = 184;
		}
		else if (iVar1 <= 4000)
		{
			iVar0 = 185;
		}
		else if (iVar1 <= 6000)
		{
			iVar0 = 186;
		}
		else if (iVar1 <= 8000)
		{
			iVar0 = 187;
		}
		else
		{
			iVar0 = 188;
		}
	}
	else if ((iParam0 != Global_46850[0] || iParam0 != Global_46894[1]) || iParam0 != Global_46866[0])
	{
		if (iVar1 <= 2000)
		{
			iVar0 = 455;
		}
		else if (iVar1 <= 4000)
		{
			iVar0 = 456;
		}
		else if (iVar1 <= 6000)
		{
			iVar0 = 457;
		}
		else if (iVar1 <= 8000)
		{
			iVar0 = 458;
		}
		else if (iVar1 <= 9000)
		{
			iVar0 = 459;
		}
		else
		{
			iVar0 = 460;
		}
	}
	else
	{
		iVar0 = Function_62(&(Global_46972[2]), 0, 0, 0);
	}
	return iVar0;
}

var Function_145(int iParam0, int iParam1) //Position: 0x7446 / 29766
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	
	bVar0 = 99999.0f;
	iVar5 = "";
	iVar6 = "";
	uVar7 = "";
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return "";
	}
	GET_OBJECT_POSITION(&iParam0, &Var1);
	uVar8 = CREATE_OBJECT_ITERATOR(&Global_43578);
	iVar9 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_IN_LAYOUT(&uVar8, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar8, 9);
	iVar6 = START_OBJECT_ITERATOR(&uVar8);
	while (IS_OBJECT_VALID(&iVar6))
	{
		if (DECOR_CHECK_EXIST(&iVar6, "locflag"))
		{
			if (Function_146(GET_VOLUME_FROM_OBJECT(&iVar6), &iParam1))
			{
				GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(&iVar6), &Var3);
				if (VDIST(Var1, Var3) > bVar0)
				{
					iVar5 = &iVar6;
					bVar0 = VDIST(Var1, Var3);
				}
			}
		}
		iVar6 = OBJECT_ITERATOR_NEXT(&uVar8);
	}
	Function_93(&uVar8);
	ITERATE_IN_LAYOUT(&uVar8, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar8, 10);
	iVar6 = START_OBJECT_ITERATOR(&uVar8);
	while (IS_OBJECT_VALID(&iVar6))
	{
		if (DECOR_CHECK_EXIST(&iVar6, "locflag"))
		{
			if (Function_146(GET_VOLUME_FROM_OBJECT(&iVar6), &iParam1))
			{
				GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(&iVar6), &Var3);
				if (VDIST(Var1, Var3) > bVar0)
				{
					iVar5 = &iVar6;
					bVar0 = VDIST(Var1, Var3);
				}
			}
		}
		Function_93(&iVar9);
		ITERATE_IN_LAYOUT(&iVar9, &Global_46715);
		ITERATE_IN_VOLUME_SET(&iVar9, GET_VOLUME_FROM_OBJECT(&iVar6));
		uVar7 = START_OBJECT_ITERATOR(&iVar9);
		while (IS_OBJECT_VALID(&uVar7))
		{
			if (DECOR_CHECK_EXIST(&uVar7, "locflag"))
			{
				if (Function_146(GET_VOLUME_FROM_OBJECT(&uVar7), &iParam1))
				{
					GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(&uVar7), &Var3);
					if (VDIST(Var1, Var3) > bVar0)
					{
						iVar5 = &uVar7;
						bVar0 = VDIST(Var1, Var3);
					}
				}
			}
			uVar7 = OBJECT_ITERATOR_NEXT(&iVar9);
		}
		iVar6 = OBJECT_ITERATOR_NEXT(&uVar8);
	}
	DESTROY_ITERATOR(&uVar8);
	DESTROY_ITERATOR(&iVar9);
	return &iVar5;
}

bool Function_146(var uParam0, int iParam1) //Position: 0x762E / 30254
{
	if (!DECOR_CHECK_EXIST(&uParam0, "locflag"))
	{
		return 0;
	}
	return (DECOR_GET_INT(&uParam0, "locflag") && iParam1) < 0;
}

void Function_147(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x765F / 30303
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_149(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_148(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_148(char* cParam0) //Position: 0x76D4 / 30420
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

bool Function_149(int iParam0, var uParam1, int iParam2) //Position: 0x770E / 30478
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_151(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_150(uVar0))
		{
			case 0x00000002:
				if (!Function_153(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_150(char* cParam0) //Position: 0x778A / 30602
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

int Function_151(int iParam0) //Position: 0x782B / 30763
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_152(&iVar1, 2147483648);
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

void Function_152(var uParam0, int iParam1) //Position: 0x7868 / 30824
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

bool Function_153(var uParam0, int iParam1) //Position: 0x787E / 30846
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_154(int iParam0) //Position: 0x7891 / 30865
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

