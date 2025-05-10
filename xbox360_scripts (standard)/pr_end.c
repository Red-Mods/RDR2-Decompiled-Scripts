//Decompiled with MagicRDR v1.0
//Function Count : 245
//Statics Count : 51
//Natives Count : 282
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 1;
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
	struct<2> Local_45 = { 0, 0 } ;
	int iLocal_47 = 0;
	bool bLocal_48 = false;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	Global_29003 = 4;
	Local_45 = { StackVal, ScriptParam_0 };
	while (!IS_EXITFLAG_SET())
	{
		switch (iLocal_47)
		{
			case 0x00000000:
				bLocal_48 = false;
				Function_244(12);
				Function_244(11);
				Function_244(13);
				iLocal_47 = 1;
				break;
			
			case 0x00000001:
				Function_243(&(Global_29008[ScriptParam_0]), 4);
				bLocal_48 = false;
				iLocal_47 = 2;
				break;
			
			case 0x00000002:
				if (!Function_242(57, 0))
				{
					Function_241(&(Global_29008[Global_30621[3]]), 1024);
					Function_241(&(Global_29008[Global_30621[4]]), 1);
					Function_241(&(Global_29008[Global_30621[4]]), 2);
					iLocal_47 = 3;
					bLocal_48 = false;
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				else
				{
					bLocal_48 = Function_4(&iLocal_4, 1);
				}
				break;
			
			case 0x00000003:
				break;
		}
		WAIT(bLocal_48);
	}
	Function_1(&iLocal_4);
	Function_241(&(Global_29008[Local_45]), 64);
	Function_241(&(Global_29008[Local_45]), 4);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xEF / 239
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (iParam0[iVar040]->f_92)
		{
			Function_2(iParam0[iVar040], iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_2(int iParam0, int iParam1) //Position: 0x11F / 287
{
	if (!iParam0->f_92)
	{
		return;
	}
	switch (iParam0->f_104)
	{
		case 0x00000002:
			iParam0->f_8 = 4294967295;
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000003:
		case 0x00000005:
		case 0x00000004:
			iParam0->f_124 = 0;
			if (iParam0->f_104 == 5)
			{
				iParam0->f_28 = FLOOR(GET_CURRENT_GAME_TIME());
			}
			if (IS_BLIP_VALID(iParam0->f_100))
			{
				REMOVE_BLIP(iParam0->f_100);
			}
			if ((IS_OBJECT_VALID(iParam0->f_40) && iParam1 == 11) && iParam1 == 54)
			{
				if (GET_OBJECT_TYPE(iParam0->f_40) == 12)
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
					{
						if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
						{
							GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_40), false);
						}
					}
				}
				DESTROY_OBJECT(iParam0->f_40);
			}
			if (iParam0->f_32)
			{
				STREAMING_EVICT_GRINGO(iParam0->f_28);
				iParam0->f_32 = 0;
			}
			if (IS_OBJECT_VALID(iParam0->f_44))
			{
				Function_3(iParam0->f_44);
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_68))
			{
				RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_68);
			}
			break;
	}
	iParam0->f_92 = 0;
	return;
}

void Function_3(bool bParam0) //Position: 0x213 / 531
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "volrestrict"))
		{
			bVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(bVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				if (DECOR_CHECK_EXIST(bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(bParam0, "voldestroy"))
					{
						DESTROY_OBJECT(bVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(bVar0);
				}
			}
		}
		DESTROY_OBJECT(bParam0);
	}
	return;
}

int Function_4(int iParam0, bool bParam1) //Position: 0x29D / 669
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<105> Var3;
	
	iVar1 = 1000;
	if (Global_62478)
	{
		if (!DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "launchedmissiontester"))
		{
			if (Global_62482 >= 4294967295)
			{
				LOG_ERROR("launching mission tester");
				Function_233();
			}
			else if (Global_62481 == 4294967294)
			{
				Function_232();
			}
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "launchedmissiontester", true);
			return iVar1;
		}
	}
	if (!Global_30923 != 0)
	{
		iVar0 = 0;
		while (iVar0 < (*iParam0 - 1))
		{
			if (IS_SCRIPT_VALID(iParam0[iVar040]->f_108))
			{
				TERMINATE_SCRIPT(iParam0[iVar040]->f_108);
			}
			iVar0++;
		}
		Global_30923 = 0;
	}
	if (Function_231())
	{
		Function_1(iParam0);
		return iVar1;
	}
	Function_230(iParam0);
	if (((Global_3403 || Global_3407) || Global_3404) || Function_229(2048))
	{
		Function_1(iParam0);
		return iVar1;
	}
	if (Global_3382)
	{
		Function_1(iParam0);
		return iVar1;
	}
	if (Global_3392)
	{
		Function_1(iParam0);
		return iVar1;
	}
	if (Global_3384)
	{
		Function_1(iParam0);
		if (Global_3383)
		{
			Global_3383 = 0;
		}
		return iVar1;
	}
	if (Global_3380)
	{
		Function_1(iParam0);
		if (Global_3379)
		{
			Global_3379 = 0;
		}
		return iVar1;
	}
	if (Global_3395 || Global_3396)
	{
		return iVar1;
	}
	if (!Global_3374 && bParam1)
	{
		return iVar1;
	}
	if (!bParam1 && Function_228(Global_29006))
	{
		Function_1(iParam0);
		return iVar1;
	}
	if (Global_3379)
	{
		Function_1(iParam0);
		Global_3380 = 1;
		Function_226(1, 0);
		return iVar1;
	}
	if (Global_3383)
	{
		Function_1(iParam0);
		Global_3384 = 1;
		Function_226(0, 0);
		return iVar1;
	}
	if (Global_63096 && !Function_224(&Global_63084))
	{
		Function_1(iParam0);
		return iVar1;
	}
	if ((Function_223(1, 0, 0, 5) && !Global_3384) && !Global_3380)
	{
		Function_1(iParam0);
		return iVar1;
	}
	if (bParam1)
	{
		if (!Global_30938 != 0)
		{
			iVar2 = Function_218(StackVal, StackVal, Global_30938);
			if (Function_216(iVar2))
			{
				Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_215(iParam0, iVar2) };
				if (!Var3.f_104 != 0)
				{
					Function_95(&Var3, 0, 0, 0);
				}
			}
			Global_30938 = 0;
		}
	}
	if (Global_34165.f_36 && Global_3366)
	{
		if (Function_94(Global_34165.f_20))
		{
			if (!Global_3422[Global_34165.f_2040].f_104 != 0)
			{
				Function_95(&(Global_3422[Global_34165.f_2040]), 0, 1, 1);
				Global_34165.f_36 = 0;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if ((*iParam0)[iVar040] != Global_29003 || !bParam1)
		{
			Function_5(iParam0[iVar040], iVar0, bParam1);
		}
		iVar0++;
	}
	if ((Global_26281 + 5.0f) - 1.0f) > GET_CURRENT_GAME_TIME()
	{
		Global_3406 = 0;
	}
	return iVar1;
}

void Function_5(int iParam0, int iParam1, bool bParam2) //Position: 0x542 / 1346
{
	int iVar0;
	char* cVar1[32];
	bool bVar9;
	bool bVar10;
	vector3 vVar11;
	float fVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	
	if (iParam0->f_104 == 0)
	{
		return;
	}
	if (!bParam2)
	{
		if (!Global_29006 != iParam0->f_72)
		{
			Function_2(iParam0, iParam1);
			return;
		}
	}
	if (Function_242(iParam1, 0) && !iParam0->f_104 != 2)
	{
		Function_2(iParam0, iParam1);
		return;
	}
	iVar0 = Function_93(StackVal);
	if (iVar0 != 1)
	{
		if (!Function_92(iParam0))
		{
			Function_2(iParam0, iParam1);
			return;
		}
	}
	if (IS_SCRIPT_VALID(iParam0->f_108))
	{
		Function_2(iParam0, iParam1);
		return;
	}
	iParam0->f_124 = 0;
	iParam0->f_92 = 1;
	switch (iParam0->f_104)
	{
		case 0x00000001:
			iParam0->f_124 = 1;
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID(Global_34573))
			{
				if ((Global_26281 + 5.0f) - 1.0f) > GET_CURRENT_GAME_TIME()
				{
					if (!Function_91(iParam0))
					{
						iParam0->f_124 = 0;
						Function_90(iParam0->f_100, 0, iParam0->f_128);
						if ((IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(iParam0->f_40)) && iParam1 == 11) && iParam1 == 54)
						{
							if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
							{
								GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_40), false);
							}
						}
					}
					else if (Function_82(iParam0))
					{
						bVar10 = true;
						if (IS_OBJECT_VALID(iParam0->f_44))
						{
							if (Global_3414)
							{
								bVar10 = false;
							}
						}
						if (bVar10)
						{
							iParam0->f_124 = 0;
							Function_90(iParam0->f_100, 0, iParam0->f_128);
							if (GET_OBJECT_TYPE(iParam0->f_40) == 12)
							{
								if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
								{
									if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
									{
										GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_40), false);
									}
								}
							}
						}
					}
					else
					{
						if (GET_OBJECT_TYPE(iParam0->f_40) == 12)
						{
							if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
							{
								if (!GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
								{
									GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_40), true);
								}
							}
						}
						iParam0->f_124 = 1;
						Function_90(iParam0->f_100, 1, iParam0->f_128);
						if (Function_81(iParam0 + 128, 4096))
						{
							Function_80(iParam0 + 128, 4096);
						}
					}
					fVar14 = Function_79(StackVal, StackVal, StackVal, StackVal, Global_34574, *(iParam0 + 52));
					if (!iParam0->f_112 && !iParam0->f_152)
					{
						if (!IS_OBJECT_VALID(iParam0->f_40) && UNK_0x214AFB8C(iParam0->f_28))
						{
							if (!STREAMING_IS_GRINGO_LOADED(iParam0->f_28))
							{
								if (!iParam0->f_32)
								{
									STREAMING_REQUEST_GRINGO(iParam0->f_28);
									iParam0->f_32 = 1;
								}
							}
							else if (IS_LAYOUTREF_VALID(Global_6287))
							{
								vVar11 = { StackVal, StackVal, *(iParam0 + 80) };
								iParam0->f_40 = CREATE_GRINGO_IN_LAYOUT_BY_ID(Global_6287, Function_78(), iParam0->f_28, vVar11, 0.0f, 0.0f, 0.0f);
								if (fVar14 > 175.0f)
								{
									Function_80(iParam0 + 128, 8388608);
								}
								else
								{
									Function_77(iParam0 + 128, 8388608);
								}
							}
						}
					}
					if ((((!IS_OBJECT_VALID(iParam0->f_44) && (!iParam0->f_116 || iParam0->f_124)) && ((!iParam1 != 14 || fVar14 < 100.0f) || Global_3406)) && ((fVar14 < 7,5f || (iParam0->f_116 && iParam0->f_124)) || Global_3406)) && (!Function_81(iParam0 + 128, 1048576) || iParam0->f_124))
					{
						Function_70(iParam0);
						if (iParam0->f_128 & 524288 >= 0)
						{
							Function_68(4194304);
						}
						if (iParam0->f_124)
						{
							if (IS_BLIP_VALID(iParam0->f_100))
							{
								REMOVE_BLIP(iParam0->f_100);
							}
							iParam0->f_44 = Function_67(StackVal, StackVal, Global_6287, iParam0 + 12, *(iParam0 + 52), 0.0f, 0.0f, 0.0f, Global_34573, iParam0->f_64, 0, 3, iParam0->f_96, 3, 1, 3212836864, 3212836864, 1);
							iParam0->f_100 = GET_BLIP_ON_OBJECT(iParam0->f_44);
						}
						else if (!IS_BLIP_VALID(iParam0->f_100))
						{
							iParam0->f_100 = ADD_BLIP_FOR_COORD(iParam0 + 52, iParam0->f_96, 0, 2, 0);
						}
						SET_BLIP_PRIORITY(iParam0->f_100, 3);
						Function_90(iParam0->f_100, iParam0->f_124, iParam0->f_128);
					}
					else if (!iParam0->f_124 && IS_OBJECT_VALID(iParam0->f_44))
					{
						if (IS_BLIP_VALID(iParam0->f_100))
						{
							REMOVE_BLIP(iParam0->f_100);
						}
						Function_3(iParam0->f_44);
						iParam0->f_100 = ADD_BLIP_FOR_COORD(iParam0 + 52, iParam0->f_96, 0, 2, 0);
						SET_BLIP_PRIORITY(iParam0->f_100, 3);
						Function_90(iParam0->f_100, iParam0->f_124, iParam0->f_128);
					}
					else if (!iParam0->f_124 && !IS_BLIP_VALID(iParam0->f_100))
					{
						iParam0->f_100 = ADD_BLIP_FOR_COORD(iParam0 + 52, iParam0->f_96, 0, 2, 0);
						SET_BLIP_PRIORITY(iParam0->f_100, 3);
						Function_90(iParam0->f_100, iParam0->f_124, iParam0->f_128);
					}
					if ((!iParam0->f_112 && !iParam0->f_124) && iVar0 == 1)
					{
						if (fVar14 > 5.0f)
						{
							if (!iParam0->f_116)
							{
								Function_62(iParam0);
								if (IS_OBJECT_VALID(iParam0->f_44))
								{
									Function_3(iParam0->f_44);
									iParam0->f_100 = ADD_BLIP_FOR_COORD(iParam0 + 52, iParam0->f_96, 0, 2, 0);
									SET_BLIP_PRIORITY(iParam0->f_100, 3);
									Function_90(iParam0->f_100, iParam0->f_124, iParam0->f_128);
								}
								iParam0->f_116 = 1;
							}
						}
						else if (iParam0->f_116)
						{
							iParam0->f_116 = 0;
						}
					}
					else if ((Function_81(iParam0 + 128, 4194304) && !iParam0->f_112) && iParam0->f_124)
					{
						if (fVar14 > 5.0f && !Function_81(iParam0 + 128, 8388608))
						{
							Function_61("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
						}
					}
					if ((!iParam0->f_112 && iParam0->f_124) && iVar0 == 1)
					{
						if ((!iParam0->f_120 && IS_OBJECT_VALID(iParam0->f_44)) && fVar14 > 5.0f)
						{
							if (IS_ACTOR_DRIVING_VEHICLE(Global_34573))
							{
								Function_61("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
								iParam0->f_120 = 1;
							}
						}
					}
				}
				else
				{
					iParam0->f_124 = 0;
				}
			}
			else
			{
				iParam0->f_124 = 0;
			}
			break;
		
		case 0x00000004:
			if (!IS_ACTOR_VALID(Global_34573))
			{
				iParam0->f_124 = 0;
				return;
			}
			if ((Global_26281 + 5.0f) - 1.0f) < GET_CURRENT_GAME_TIME()
			{
				iParam0->f_124 = 0;
				return;
			}
			if (!IS_VOLUME_VALID(iParam0->f_48))
			{
				iParam0->f_124 = 0;
				return;
			}
			if (!Function_91(iParam0))
			{
				iParam0->f_124 = 0;
				Function_90(iParam0->f_100, 0, iParam0->f_128);
				if (GET_OBJECT_TYPE(iParam0->f_40) == 12)
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
					{
						if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
						{
							GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_40), false);
						}
					}
				}
			}
			else if (Function_82(iParam0))
			{
				bVar10 = true;
				if (IS_OBJECT_VALID(iParam0->f_48))
				{
					if (Global_3414)
					{
						bVar10 = false;
					}
				}
				if (bVar10)
				{
					iParam0->f_124 = 0;
					Function_90(iParam0->f_100, 0, iParam0->f_128);
					if (GET_OBJECT_TYPE(iParam0->f_40) == 12)
					{
						if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
						{
							if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
							{
								GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_40), false);
							}
						}
					}
				}
			}
			else
			{
				if (GET_OBJECT_TYPE(iParam0->f_40) == 12)
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
					{
						if (!GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
						{
							GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_40), true);
						}
					}
				}
				iParam0->f_124 = 1;
				Function_90(iParam0->f_100, 1, iParam0->f_128);
				if (Function_81(iParam0 + 128, 4096))
				{
					Function_80(iParam0 + 128, 4096);
				}
			}
			fVar14 = Function_79(StackVal, StackVal, StackVal, StackVal, Global_34574, *(iParam0 + 52));
			bVar9 = IS_ACTOR_IN_VOLUME(Global_34573, iParam0->f_48);
			if (!iParam0->f_112 && !iParam0->f_152)
			{
				if (!IS_OBJECT_VALID(iParam0->f_40) && UNK_0x214AFB8C(iParam0->f_28))
				{
					if (!STREAMING_IS_GRINGO_LOADED(iParam0->f_28))
					{
						if (!iParam0->f_32)
						{
							STREAMING_REQUEST_GRINGO(iParam0->f_28);
							iParam0->f_32 = 1;
						}
					}
					else if (IS_LAYOUTREF_VALID(Global_6287))
					{
						vVar11 = { StackVal, StackVal, *(iParam0 + 80) };
						iParam0->f_40 = CREATE_GRINGO_IN_LAYOUT_BY_ID(Global_6287, Function_78(), iParam0->f_28, vVar11, 0.0f, 0.0f, 0.0f);
						if (fVar14 > 175.0f)
						{
							Function_80(iParam0 + 128, 8388608);
						}
						else
						{
							Function_77(iParam0 + 128, 8388608);
						}
					}
				}
			}
			if (((!iParam0->f_116 && !IS_BLIP_VALID(iParam0->f_100)) && !bVar9) && (!Function_81(iParam0 + 128, 1048576) || iParam0->f_124))
			{
				Function_70(iParam0);
				if (iParam0->f_128 & 524288 >= 0)
				{
					Function_68(4194304);
				}
				iParam0->f_100 = ADD_BLIP_FOR_COORD(iParam0 + 52, iParam0->f_96, 0, 2, 0);
				SET_BLIP_PRIORITY(iParam0->f_100, 3);
				Function_90(iParam0->f_100, iParam0->f_124, iParam0->f_128);
			}
			if (((!IS_OBJECT_VALID(iParam0->f_44) && !bVar9) && iParam0->f_124) && (!Function_81(iParam0 + 128, 4194304) || Function_81(iParam0 + 128, 8388608)))
			{
				iParam0->f_44 = Function_67(StackVal, StackVal, Global_6287, iParam0 + 12, *(iParam0 + 52), 0.0f, 0.0f, 0.0f, Global_34573, 2,5f, 0, 3, 4294967295, 3, 1, 3212836864, 3212836864, 1);
			}
			if (!iParam0->f_112 && !iParam0->f_124)
			{
				if (IS_OBJECT_VALID(iParam0->f_44))
				{
					Function_3(iParam0->f_44);
				}
				if (bVar9)
				{
					if (!iParam0->f_116)
					{
						iParam0->f_116 = 1;
						Function_62(iParam0);
					}
				}
				else if (iParam0->f_116)
				{
					iParam0->f_116 = 0;
				}
			}
			else if ((Function_81(iParam0 + 128, 4194304) && !iParam0->f_112) && iParam0->f_124)
			{
				if (bVar9 && !Function_81(iParam0 + 128, 8388608))
				{
					Function_61("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if ((!iParam0->f_112 && iParam0->f_124) && iVar0 == 1)
			{
				if ((!iParam0->f_120 && IS_OBJECT_VALID(iParam0->f_44)) && bVar9)
				{
					if (IS_ACTOR_DRIVING_VEHICLE(Global_34573))
					{
						Function_61("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
						iParam0->f_120 = 1;
					}
				}
			}
			break;
		
		case 0x00000005:
			iVar15 = iParam1;
			if (!Function_91(iParam0) || Global_3403)
			{
				iParam0->f_124 = 0;
			}
			else
			{
				iParam0->f_124 = 1;
			}
			iVar17 = Function_60();
			if (iVar17 != 3 || iVar17 != 4)
			{
				if (iParam0->f_128 & 2097152 >= 0)
				{
					bVar16 = true;
				}
			}
			switch (iVar15)
			{
				case 0x00000000:
					bVar18 = Function_59(iParam0->f_72, &bVar19, &(Global_62968[iVar15]), 0);
					break;
				
				case 0x00000001:
					bVar18 = Function_59(iParam0->f_72, &bVar19, &(Global_62968[iVar15]), 1);
					break;
				
				case 0x00000007:
					bVar18 = Function_58(iParam0->f_72, &bVar19, &(Global_62968[iVar15]));
					break;
				
				case 0x00000002:
					bVar18 = Function_56(iParam0->f_72, &bVar19, &(Global_62968[iVar15]));
					break;
				
				case 0x00000008:
					bVar18 = Function_54(iParam0->f_72, &bVar19, &(Global_62968[iVar15]));
					break;
				
				case 0x00000004:
					bVar18 = Function_51(iParam0->f_72, &bVar19, &(Global_62968[iVar15]));
					break;
				
				case 0x00000005:
					bVar18 = Function_50(iParam0->f_72, &bVar19, &(Global_62968[iVar15]));
					break;
			}
			if (iVar15 == 1)
			{
				if (Global_28178 != 1)
				{
					bVar20 = true;
				}
			}
			if (((IS_ACTOR_VALID(Global_34573) && Function_49(iParam1)) && !bVar16) && !bVar20)
			{
				if (!iParam0->f_112 && ((Global_26281 + 5.0f) - 1.0f) > GET_CURRENT_GAME_TIME())
				{
					if (!IS_OBJECT_VALID(iParam0->f_40) && IS_LAYOUTREF_VALID(Global_30616))
					{
						iParam0->f_40 = CREATE_POINT_IN_LAYOUT(Global_30616, Function_78(), *(iParam0 + 52), 0.0f, 0.0f, 0.0f);
					}
				}
				if ((IS_OBJECT_VALID(iParam0->f_40) && !iParam0->f_96 != 4294967295) && !bVar16)
				{
					if (!IS_BLIP_VALID(iParam0->f_100))
					{
						iParam0->f_100 = ADD_BLIP_FOR_OBJECT(iParam0->f_40, iParam0->f_96, 0.0f, 2, 0);
						UNK_0x1E98AFEC(iParam0->f_100, 1);
						SET_BLIP_MAX_DISTANCE(iParam0->f_100, 1,25f);
						SET_BLIP_PRIORITY(iParam0->f_100, true);
					}
				}
				if (IS_BLIP_VALID(iParam0->f_100))
				{
					if (iParam0->f_124)
					{
						if (bVar18)
						{
							SET_BLIP_COLOR(iParam0->f_100, 1.0f, 1.0f, 1.0f, 1.0f);
						}
						else
						{
							SET_BLIP_COLOR(iParam0->f_100, 1.0f, 1.0f, 1.0f, 0,3f);
						}
					}
					else
					{
						SET_BLIP_COLOR(iParam0->f_100, 1.0f, 1.0f, 1.0f, 0,75f);
					}
					if (iParam0->f_124)
					{
						if (!Function_48(iParam1))
						{
							if (Function_47(StackVal, StackVal, *(iParam0 + 52), 1,25f))
							{
								if (Function_44(iParam1, 1))
								{
									Function_35(StackVal, StackVal, iParam0->f_72, (1 + iParam1), *(iParam0 + 52), Function_43(iParam0->f_128));
									SET_BLIP_BLINK(iParam0->f_100, 1, 0, 10.0f);
								}
							}
						}
					}
				}
				if (!iParam0->f_112)
				{
					if (IS_VOLUME_VALID(iParam0->f_48))
					{
						if (IS_POINT_IN_VOLUME(Global_34574, iParam0->f_48))
						{
							bVar21 = true;
						}
					}
					else if (VDIST(Global_34574, *(iParam0 + 52)) > iParam0->f_64)
					{
						bVar21 = true;
					}
					if ((bVar19 && bVar16) && !Function_34(Global_76848, 8388608))
					{
						Function_28(Global_34573, 8388608, 1, 1);
					}
					if (bVar21)
					{
						switch (iVar15)
						{
							case 0x00000000:
								Function_25(iParam0->f_72, iParam0 + 28, 0);
								break;
							
							case 0x00000001:
								Function_25(iParam0->f_72, iParam0 + 28, 1);
								break;
							
							case 0x00000007:
								Function_23(iParam0->f_72, iParam0 + 28);
								break;
							
							case 0x00000002:
								Function_19(iParam0->f_72, iParam0 + 28);
								break;
							
							case 0x00000008:
								Function_17(iParam0->f_72, iParam0 + 28);
								break;
							
							case 0x00000004:
								Function_15(iParam0->f_72, iParam0 + 28);
								break;
							
							case 0x00000005:
								Function_13(iParam0->f_72, iParam0 + 28);
								break;
							}
					}
					if (bVar19)
					{
						if (bVar18)
						{
							if (!bVar16)
							{
								if (!Function_8(Function_12(), 0, 0))
								{
									if (GET_PLAYER_ZOOM_STATE(0) == 0)
									{
										if (FABS((StackVal - StackVal)) > 1.0f)
										{
											if (!AI_GLOBAL_IS_DANGER(Global_34573, 10.0f))
											{
												if (!IS_ACTOR_RIDING_VEHICLE(Global_34573))
												{
													if (!IS_ACTOR_RIDING(Global_34573))
													{
														bVar22 = true;
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (bVar22)
					{
						if (!IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_68))
						{
							if (Function_81(iParam0 + 128, 8192))
							{
								if (Function_6() <= iParam0->f_140)
								{
									stradd(&cVar1, "NO_", 32);
								}
							}
							stradd(&cVar1, "LAUNCH_", 32);
							stradd(&cVar1, iParam0 + 12, 32);
							iParam0->f_68 = ADD_SCRIPT_USE_CONTEXT(&cVar1, 40, 5, false, 0, 0, 0, 4294967295, 0);
						}
					}
					else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_68))
					{
						RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_68);
					}
				}
			}
			else
			{
				if (IS_BLIP_VALID(iParam0->f_100))
				{
					REMOVE_BLIP(iParam0->f_100);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_68))
				{
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_68);
				}
			}
			break;
	}
	return;
}

int Function_6() //Position: 0x1276 / 4726
{
	return Function_7(0);
}

int Function_7(int iParam0) //Position: 0x1280 / 4736
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

bool Function_8(bool bParam0, bool bParam1, bool bParam2) //Position: 0x12C1 / 4801
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
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0,3f))
	{
		return 1;
	}
	if (Function_11(bParam0))
	{
		return 1;
	}
	if (Function_10(bParam0))
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
	if (Function_9())
	{
		return 1;
	}
	return 0;
}

bool Function_9() //Position: 0x1377 / 4983
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_10(bool bParam0) //Position: 0x138E / 5006
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_11(bool bParam0) //Position: 0x1399 / 5017
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

bool Function_12() //Position: 0x13A7 / 5031
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_13(int iParam0, int iParam1) //Position: 0x13BC / 5052
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	
	if (!Global_3384)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - *iParam1) >= RAND_INT_RANGE(25, 35)
		{
			Function_14(iParam0, 0);
			Function_14(iParam0, 1);
			if (StackVal > Function_79(StackVal, StackVal, StackVal, Function_79(StackVal, StackVal, StackVal, StackVal, Global_34574, Function_14(iParam0, 0)), Global_34574, Function_14(iParam0, 1)))
			{
				iVar1 = 0;
			}
			else
			{
				iVar1 = 1;
			}
			Function_14(iParam0, iVar1);
			vVar2 = { StackVal, StackVal, Function_14(iParam0, iVar1) };
			bVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_horseshoe", &vVar2, 1.0f, 0);
			if (IS_GRINGO_VALID(bVar0))
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar0, "UseCase1"));
				if (IS_ACTOR_VALID(bVar5))
				{
					SAY_SINGLE_LINE_CONTEXT(bVar5, 268, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
				}
			}
		}
	}
	else
	{
		*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
	}
	return;
}

vector3 Function_14(int iParam0, int iParam1) //Position: 0x149E / 5278
{
	if (iParam0 == Global_30668[0])
	{
		if (iParam1 == 0)
		{
			return -814,7646f, 92,42929f, 2350,04f;
		}
		return -826,37f, 92,361f, 2350,054f;
	}
	if (iParam0 == Global_30658[1])
	{
		if (iParam1 == 0)
		{
			return -3657,917f, 42,30736f, 2131,19f;
		}
		return -3666,223f, 42,223f, 2139,29f;
	}
	if (iParam0 == Global_30693[1])
	{
		if (iParam1 == 0)
		{
			return -1709,76f, 8,09067f, 4259,935f;
		}
		return -1721,364f, 8,09067f, 4259,787f;
	}
	if (iParam0 == Global_30717[1])
	{
		LOG_ERROR("Horseshoes beecher's hope has been cut");
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return 0.0f, 0.0f, 0.0f;
}

void Function_15(int iParam0, int iParam1) //Position: 0x15B5 / 5557
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	
	if (!Global_3384)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - *iParam1) >= RAND_INT_RANGE(25, 35)
		{
			bVar1 = RAND_INT_RANGE(false, 6);
			Function_16(iParam0);
			vVar2 = { StackVal, StackVal, Function_16(iParam0) };
			bVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_arm_wrestling", &vVar2, 1.0f, 0);
			if (IS_GRINGO_VALID(bVar0))
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar0, "UseCase1"));
				if (IS_ACTOR_VALID(bVar5))
				{
					SAY_SINGLE_LINE_CONTEXT(bVar5, 232, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
				}
			}
		}
	}
	else
	{
		*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
	}
	return;
}

vector3 Function_16(int iParam0) //Position: 0x1676 / 5750
{
	if (iParam0 == Global_30693[2])
	{
		return -1471,104f, 16,52992f, 3948,271f;
	}
	if (iParam0 == Global_30679[0])
	{
		return -3143,721f, 43,17878f, 3720,842f;
	}
	if (iParam0 == Global_30707[0])
	{
		return -466,5623f, 20,97986f, 3882,657f;
	}
	if (iParam0 == Global_30723[2])
	{
		return -262,932f, 85,11941f, 2119,438f;
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return 0.0f, 0.0f, 0.0f;
}

void Function_17(int iParam0, int iParam1) //Position: 0x1721 / 5921
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	
	if (!Global_3384)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - *iParam1) >= RAND_INT_RANGE(25, 35)
		{
			bVar1 = RAND_INT_RANGE(false, 6);
			Function_18(iParam0);
			vVar2 = { StackVal, StackVal, Function_18(iParam0) };
			bVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &vVar2, 1.0f, 0);
			if (IS_GRINGO_VALID(bVar0))
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar0, "UseCase1"));
				if (IS_ACTOR_VALID(bVar5))
				{
					SAY_SINGLE_LINE_CONTEXT(bVar5, 261, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
				}
			}
		}
	}
	else
	{
		*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
	}
	return;
}

vector3 Function_18(int iParam0) //Position: 0x17E6 / 6118
{
	if (iParam0 == Global_30640[0])
	{
		return -2194,388f, 16,57687f, 2592,54f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 161,1002f, 73,83751f, 2294,133f;
	}
	if (iParam0 == Global_30685[0])
	{
		return -4274,772f, 18,07059f, 4453,844f;
	}
	if (iParam0 == Global_30707[3])
	{
		return 354,5946f, 76,28807f, 3448,024f;
	}
	if (iParam0 == Global_30723[1])
	{
		return -464,3469f, 152,3559f, 1596,59f;
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return 0.0f, 0.0f, 0.0f;
}

void Function_19(int iParam0, int iParam1) //Position: 0x18B4 / 6324
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	
	if (!Global_3384)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - *iParam1) >= RAND_INT_RANGE(25, 35)
		{
			bVar1 = RAND_INT_RANGE(false, 6);
			Function_22(iParam0);
			vVar2 = { StackVal, StackVal, Function_22(iParam0) };
			bVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack_dealer", &vVar2, 1.0f, 0);
			if (IS_GRINGO_VALID(bVar0))
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar0, "UseCase1"));
				if (IS_ACTOR_VALID(bVar5))
				{
					if (Function_20(GET_OBJECT_FROM_ACTOR(bVar5), GET_OBJECT_FROM_ACTOR(Global_34573)))
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar5, "blackjack/Fake/Dealer/invite/front");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar5, "blackjack/Fake/Dealer/invite/back");
					}
					SAY_SINGLE_LINE_CONTEXT(bVar5, 242, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
				}
			}
		}
	}
	else
	{
		*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
	}
	return;
}

bool Function_20(var uParam0, bool bParam1) //Position: 0x19E1 / 6625
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_ACTOR_FROM_OBJECT(bParam1), &vVar0);
	return Function_21(StackVal, StackVal, uParam0, vVar0);
}

int Function_21(bool bParam0, vector3 vParam1) //Position: 0x19FB / 6651
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	float fVar9;
	
	GET_OBJECT_POSITION(GET_ACTOR_FROM_OBJECT(bParam0), &vVar0);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vParam1, StackVal) };
	GET_OBJECT_AXIS(bParam0, &uVar6, 2);
	fVar9 = VDOT(&vVar3, &uVar6);
	if (fVar9 > 0.0f)
	{
		return 1;
	}
	return 0;
}

vector3 Function_22(int iParam0) //Position: 0x1A3C / 6716
{
	if (iParam0 == Global_30693[0])
	{
		return -2685,988f, 31,35322f, 4283,588f;
	}
	if (iParam0 == Global_30658[1])
	{
		return -3640,397f, 42,77086f, 2104,753f;
	}
	if (iParam0 == Global_30717[0])
	{
		return 719,2065f, 78,4736f, 1312,102f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 171,4703f, 73,74976f, 2224,109f;
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

void Function_23(int iParam0, int iParam1) //Position: 0x1ADC / 6876
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	if (!Global_3384)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - *iParam1) >= RAND_INT_RANGE(25, 35)
		{
			bVar4 = RAND_INT_RANGE(false, 6);
			bVar6 = bVar4;
			while (bVar6 < 6)
			{
				if (!bVar5)
				{
					Function_24(iParam0, bVar6);
					vVar0 = { StackVal, StackVal, Function_24(iParam0, bVar6) };
					bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_liars_dice", &vVar0, 1.0f, 0);
					if (IS_GRINGO_VALID(bVar3))
					{
						bVar7 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar3, "UseCase1"));
						if (IS_ACTOR_VALID(bVar7))
						{
							SAY_SINGLE_LINE_CONTEXT(bVar7, 274, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
							bVar5 = true;
						}
					}
				}
				bVar6++;
			}
			if (!bVar5)
			{
				bVar6 = false;
				while (bVar6 < (bVar4 - 1))
				{
					Function_24(iParam0, bVar6);
					vVar0 = { StackVal, StackVal, Function_24(iParam0, bVar6) };
					bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_liars_dice", &vVar0, 1.0f, 0);
					if (IS_GRINGO_VALID(bVar3))
					{
						bVar8 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar3, "UseCase1"));
						if (IS_ACTOR_VALID(bVar8))
						{
							SAY_SINGLE_LINE_CONTEXT(bVar8, 274, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
						}
					}
					bVar6++;
				}
			}
		}
	}
	else
	{
		*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
	}
	return;
}

vector3 Function_24(int iParam0, bool bParam1) //Position: 0x1C62 / 7266
{
	if (iParam0 == Global_30685[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -4288,696f, 26,72937f, 4381,383f;
				break;
			
			case 0x00000001:
				return -4289,277f, 26,72937f, 4381,477f;
				break;
			
			case 0x00000002:
				return -4289,651f, 26,72937f, 4381,039f;
				break;
			
			case 0x00000003:
				return -4289,435f, 26,72937f, 4380,51f;
				break;
			
			case 0x00000004:
				return -4288,878f, 26,72937f, 4380,39f;
				break;
			
			case 0x00000005:
				return -4288,485f, 26,72937f, 4380,807f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return 167,5964f, 73,74156f, 2222,775f;
				break;
			
			case 0x00000001:
				return 167,958f, 73,74529f, 2222,327f;
				break;
			
			case 0x00000002:
				return 168,5496f, 73,74591f, 2222,387f;
				break;
			
			case 0x00000003:
				return 168,7889f, 73,74529f, 2222,935f;
				break;
			
			case 0x00000004:
				return 168,4313f, 73,74976f, 2223,425f;
				break;
			
			case 0x00000005:
				return 167,8298f, 73,74976f, 2223,35f;
				break;
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -788,6586f, 13,16462f, 3698,422f;
				break;
			
			case 0x00000001:
				return -788,4316f, 13,16762f, 3698,957f;
				break;
			
			case 0x00000002:
				return -788,7964f, 13,165f, 3699,425f;
				break;
			
			case 0x00000003:
				return -789,389f, 13,165f, 3699,35f;
				break;
			
			case 0x00000004:
				return -789,6095f, 13,165f, 3698,805f;
				break;
			
			case 0x00000005:
				return -789,2333f, 13,165f, 3698,335f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return 856,9058f, 77,51558f, 1278,093f;
				break;
			
			case 0x00000001:
				return 856,6888f, 77,51558f, 1277,556f;
				break;
			
			case 0x00000002:
				return 857,0518f, 77,51558f, 1277,099f;
				break;
			
			case 0x00000003:
				return 857,629f, 77,51558f, 1277,148f;
				break;
			
			case 0x00000004:
				return 857,8614f, 77,51558f, 1277,699f;
				break;
			
			case 0x00000005:
				return 857,4864f, 77,51558f, 1278,173f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

void Function_25(int iParam0, var uParam1, bool bParam2) //Position: 0x1F36 / 7990
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Global_3384)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - *uParam1) >= RAND_INT_RANGE(25, 35)
		{
			bVar1 = RAND_INT_RANGE(false, 6);
			bVar3 = bVar1;
			while (bVar3 < 6)
			{
				if (!bVar2)
				{
					Function_27(iParam0, bVar3, bParam2);
					bVar0 = Function_26(StackVal, StackVal, Function_27(iParam0, bVar3, bParam2));
					if (IS_GRINGO_VALID(bVar0))
					{
						bVar4 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar0, "UseCase1"));
						if (IS_ACTOR_VALID(bVar4))
						{
							if (IS_ACTION_NODE_PLAYING_PARTIAL(bVar4, "ncard_idle") || IS_ACTION_NODE_PLAYING_PARTIAL(bVar4, "look_at_cards"))
							{
								SET_ACTION_NODE_FOR_ACTOR(bVar4, "sit_poker/Fake/look_up");
								SAY_SINGLE_LINE_CONTEXT(bVar4, 280, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
								*uParam1 = FLOOR(GET_CURRENT_GAME_TIME());
								bVar2 = true;
							}
						}
					}
				}
				bVar3++;
			}
			if (!bVar2)
			{
				bVar3 = false;
				while (bVar3 < (bVar1 - 1))
				{
					Function_27(iParam0, bVar3, bParam2);
					bVar0 = Function_26(StackVal, StackVal, Function_27(iParam0, bVar3, bParam2));
					if (IS_GRINGO_VALID(bVar0))
					{
						bVar5 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar0, "UseCase1"));
						if (IS_ACTOR_VALID(bVar5))
						{
							if (IS_ACTION_NODE_PLAYING_PARTIAL(bVar5, "ncard_idle") || IS_ACTION_NODE_PLAYING_PARTIAL(bVar5, "look_at_cards"))
							{
								SET_ACTION_NODE_FOR_ACTOR(bVar5, "sit_poker/Fake/look_up");
								SAY_SINGLE_LINE_CONTEXT(bVar5, 280, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
								*uParam1 = FLOOR(GET_CURRENT_GAME_TIME());
							}
						}
					}
					bVar3++;
				}
			}
		}
	}
	return;
}

bool Function_26(var uParam0, var uParam1, int iParam2) //Position: 0x20C2 / 8386
{
	return LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_poker", &uParam0, 1.0f, 0);
}

vector3 Function_27(int iParam0, bool bParam1, bool bParam2) //Position: 0x2104 / 8452
{
	if (iParam0 == Global_30668[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -801,0966f, 92,75807f, 2375,792f;
				break;
			
			case 0x00000001:
				return -801,4974f, 92,75435f, 2375,295f;
				break;
			
			case 0x00000002:
				return -801,2829f, 92,75435f, 2374,737f;
				break;
			
			case 0x00000003:
				return -800,724f, 92,76255f, 2374,656f;
				break;
			
			case 0x00000004:
				return -800,3233f, 92,75678f, 2375,122f;
				break;
			
			case 0x00000005:
				return -800,5463f, 92,75435f, 2375,677f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return 164,353f, 73,75671f, 2230,925f;
				break;
			
			case 0x00000001:
				return 164,5807f, 73,82056f, 2231,472f;
				break;
			
			case 0x00000002:
				return 164,2043f, 73,75299f, 2231,971f;
				break;
			
			case 0x00000003:
				return 163,6548f, 73,76118f, 2231,889f;
				break;
			
			case 0x00000004:
				return 163,4103f, 73,76118f, 2231,366f;
				break;
			
			case 0x00000005:
				return 163,7511f, 73,75671f, 2230,869f;
				break;
		}
	}
	else if (iParam0 == Global_30640[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -2157,424f, 16,88292f, 2596,033f;
				break;
			
			case 0x00000001:
				return -2158,012f, 16,94059f, 2595,997f;
				break;
			
			case 0x00000002:
				return -2158,228f, 16,87845f, 2595,416f;
				break;
			
			case 0x00000003:
				return -2157,847f, 16,87845f, 2594,96f;
				break;
			
			case 0x00000004:
				return -2157,261f, 16,87845f, 2595,042f;
				break;
			
			case 0x00000005:
				return -2157,04f, 16,87845f, 2595,596f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		if (bParam2)
		{
			switch (bParam1)
			{
				case 0x00000000:
					return 748,5359f, 82,6927f, 1267,343f;
					break;
				
				case 0x00000001:
					return 749,138f, 82,6927f, 1266,645f;
					break;
				
				case 0x00000002:
					return 750,045f, 82,6927f, 1266,796f;
					break;
				
				case 0x00000003:
					return 750,0344f, 82,6917f, 1267,552f;
					break;
				
				case 0x00000004:
					return 749,7606f, 82,6927f, 1268,372f;
					break;
				
				case 0x00000005:
					return 748,8501f, 82,6927f, 1268,207f;
					break;
			}
		}
		else
		{
			switch (bParam1)
			{
				case 0x00000000:
					return 717,6248f, 78,47099f, 1325,972f;
					break;
				
				case 0x00000001:
					return 717,0453f, 78,47099f, 1325,919f;
					break;
				
				case 0x00000002:
					return 716,8008f, 78,47099f, 1325,396f;
					break;
				
				case 0x00000003:
					return 717,1418f, 78,47099f, 1324,928f;
					break;
				
				case 0x00000004:
					return 717,7181f, 78,47099f, 1324,969f;
					break;
				
				case 0x00000005:
					return 717,9684f, 78,47099f, 1325,495f;
					break;
				}
		}
	}
	else if (iParam0 == Global_30717[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -138,6693f, 119,2419f, 1344,049f;
				break;
			
			case 0x00000001:
				return -139,2573f, 119,2419f, 1343,961f;
				break;
			
			case 0x00000002:
				return -139,4945f, 119,2419f, 1343,419f;
				break;
			
			case 0x00000003:
				return -139,1212f, 119,2419f, 1342,946f;
				break;
			
			case 0x00000004:
				return -138,5368f, 119,2419f, 1343,024f;
				break;
			
			case 0x00000005:
				return -138,2953f, 119,2419f, 1343,58f;
				break;
		}
	}
	else if (iParam0 == Global_30693[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -2701,487f, 31,151f, 4278,554f;
				break;
			
			case 0x00000001:
				return -2701,713f, 31,151f, 4277,994f;
				break;
			
			case 0x00000002:
				return -2701,347f, 31,151f, 4277,538f;
				break;
			
			case 0x00000003:
				return -2700,726f, 31,151f, 4277,604f;
				break;
			
			case 0x00000004:
				return -2700,508f, 31,151f, 4278,2f;
				break;
			
			case 0x00000005:
				return -2700,919f, 31,151f, 4278,653f;
				break;
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -795,5794f, 13,16767f, 3699,937f;
				break;
			
			case 0x00000001:
				return -795,8744f, 13,16057f, 3699,083f;
				break;
			
			case 0x00000002:
				return -794,9905f, 13,16057f, 3698,687f;
				break;
			
			case 0x00000003:
				return -794,196f, 13,16057f, 3699,235f;
				break;
			
			case 0x00000004:
				return -794,2787f, 13,16057f, 3700,203f;
				break;
			
			case 0x00000005:
				return -795,169f, 13,16057f, 3700,608f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

void Function_28(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x267E / 9854
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_30(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_29(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_29(char* cParam0, int iParam1) //Position: 0x26EA / 9962
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

bool Function_30(bool bParam0, var uParam1, int iParam2) //Position: 0x2721 / 10017
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
		if (Function_32(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_31(uVar0))
		{
			case 0x00000002:
				if (!Function_34(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_31(char* cParam0) //Position: 0x2799 / 10137
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

int Function_32(int iParam0) //Position: 0x283A / 10298
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_33(&iVar1, 2147483648);
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

void Function_33(int iParam0, int iParam1) //Position: 0x2877 / 10359
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_34(int iParam0, bool bParam1) //Position: 0x288A / 10378
{
	if ((iParam0 && bParam1) == bParam1)
	{
		return 1;
	}
	return 0;
}

int Function_35(int iParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0x289D / 10397
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!Function_42(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_41(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_40(iParam1);
	iVar1 = 4294967295;
	bVar3 = Function_39(StackVal, StackVal, vParam2);
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal != iParam1 && Global_8723[iVar04] != iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	else
	{
		Function_38(bVar3);
		vVar7 = { StackVal, StackVal, Function_38(bVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_38(StackVal);
				vVar4 = { StackVal, StackVal, Function_38(StackVal) };
				if (Function_37(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	if (iVar1 != 4294967295)
	{
		Global_8723[iVar14] = iParam0;
		Global_8723[iVar14].f_4 = iParam1;
		Global_8723[iVar14].f_8 = bVar3;
		Global_8723[iVar14].f_12 = iParam5;
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_36(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0,5f);
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
		SET_BLIP_PRIORITY(Global_9724[iVar1], true);
		return iVar1;
	}
	return 0;
}

int Function_36(bool bParam0) //Position: 0x2A80 / 10880
{
	switch (bParam0)
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

bool Function_37(vector3 vParam0, vector3 vParam3) //Position: 0x2BB7 / 11191
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_38(bool bParam0) //Position: 0x2BE4 / 11236
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = (bParam0 && 32767);
	bVar4 = SHIFT_RIGHT(bParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if ((bParam0 && 1073741824) == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((bParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_39(vector3 vParam0) //Position: 0x2C3B / 11323
{
	bool bVar0;
	
	bVar0 = ((ROUND(FABS(vParam0.x)) && 32767) || SHIFT_LEFT((ROUND(FABS(vParam0.z)) && 32767), 15));
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

int Function_40(int iParam0) //Position: 0x2C89 / 11401
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

bool Function_41(vector3 vParam0) //Position: 0x2D41 / 11585
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_42(int iParam0) //Position: 0x2D59 / 11609
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_43(int iParam0) //Position: 0x2D6F / 11631
{
	int iVar0;
	
	if (iParam0 & 64 == 0)
	{
		iVar0 |= 2;
	}
	if (iParam0 & 128 == 0)
	{
		iVar0 |= 4;
	}
	if (iParam0 & 256 == 0)
	{
		iVar0 |= 8;
	}
	if (iParam0 & 512 == 0)
	{
		iVar0 |= 16;
	}
	if (iParam0 & 1024 == 0)
	{
		iVar0 |= 32;
	}
	if (iParam0 & 32 == 0)
	{
		iVar0 |= 1;
	}
	return iVar0;
}

bool Function_44(int iParam0, int iParam1) //Position: 0x2DD7 / 11735
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	return Function_45(iVar0, iParam1);
}

int Function_45(int iParam0, bool bParam1) //Position: 0x2DEA / 11754
{
	bool bVar0;
	struct<8> Var1;
	
	if ((!Global_26031[iParam0] && (!bParam1 || !Function_46())) && !bVar0)
	{
		switch (iParam0)
		{
			case 0x00000002:
				Global_26031[iParam0] = 1;
				break;
			
			case 0x00000001:
				bVar0 = true;
				Global_26031[iParam0] = 1;
				strcpy(&Var1, "poker", 32);
				break;
			
			case 0x00000003:
				bVar0 = true;
				Global_26031[iParam0] = 1;
				strcpy(&Var1, "nblackjack", 32);
				break;
			
			case 0x00000004:
				Global_26031[iParam0] = 1;
				break;
			
			case 0x00000005:
				bVar0 = true;
				Global_26031[iParam0] = 1;
				strcpy(&Var1, "armwrestle", 32);
				break;
			
			case 0x00000006:
				bVar0 = true;
				Global_26031[iParam0] = 1;
				strcpy(&Var1, "horseshoes", 32);
				break;
			
			case 0x00000007:
				Global_26031[iParam0] = 1;
				break;
			
			case 0x00000008:
				bVar0 = true;
				Global_26031[iParam0] = 1;
				strcpy(&Var1, "nliarsdice", 32);
				break;
			
			case 0x00000009:
				bVar0 = true;
				Global_26031[iParam0] = 1;
				strcpy(&Var1, "fivefinger", 32);
				break;
			
			case 0x0000000A:
				bVar0 = true;
				Global_26031[iParam0] = 1;
				strcpy(&Var1, "nightwatch", 32);
				break;
			
			case 0x0000000B:
				bVar0 = true;
				Global_26031[iParam0] = 1;
				strcpy(&Var1, "horsebreak", 32);
				break;
			
			case 0x0000000C:
				break;
			
			case 0x0000000D:
				break;
			
			case 0x0000000E:
				break;
			
			case 0x0000000F:
				break;
			
			case 0x00000010:
				break;
			
			case 0x00000011:
				break;
			
			case 0x00000012:
				break;
			
			case 0x00000013:
				break;
			
			case 0x00000014:
				break;
			
			case 0x00000016:
				break;
			
			default:
				LOG_ERROR("Found a REGION_BLIP_TYPE that is not enabled for unlocking");
				break;
		}
		if (bVar0 && !bParam1)
		{
			bVar0 = false;
		}
	}
	if (bVar0 && bParam1)
	{
		stradd(&Var1, "_help", 32);
		Function_61(&Var1, 0x41200000, 1, 0, 2, 1, 0);
		return 1;
	}
	return 0;
}

bool Function_46() //Position: 0x3032 / 12338
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

bool Function_47(vector3 vParam0, float fParam3) //Position: 0x305F / 12383
{
	return VDIST(vParam0, Global_34574) > (GET_RADAR_RADIUS() * fParam3);
}

bool Function_48(int iParam0) //Position: 0x307A / 12410
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_26031)
	{
		return 1;
	}
	return Global_26031[iVar0];
}

int Function_49(int iParam0) //Position: 0x309D / 12445
{
	if (iParam0 >= 4294967295 && iParam0 <= 11)
	{
		return 0;
	}
	return Global_25974[iParam0];
}

int Function_50(int iParam0, var uParam1, int iParam2) //Position: 0x30B9 / 12473
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	bool bVar7;
	
	if (!IS_OBJECTSET_VALID(*iParam2))
	{
		*iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_78(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_14(iParam0, 0);
	vVar0 = { StackVal, StackVal, Function_14(iParam0, 0) };
	if (GET_OBJECTSET_SIZE(*iParam2) > 2)
	{
		bVar3 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, *iParam2);
	}
	if (IS_OBJECT_VALID(bVar3))
	{
		bVar4 = GET_GRINGO_FROM_OBJECT(bVar3);
	}
	else
	{
		bVar4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_horseshoe", &vVar0, 1.0f, 0);
	}
	Function_14(iParam0, 1);
	vVar0 = { StackVal, StackVal, Function_14(iParam0, 1) };
	if (GET_OBJECTSET_SIZE(*iParam2) > 2)
	{
		bVar3 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, *iParam2);
	}
	if (IS_OBJECT_VALID(bVar3))
	{
		bVar5 = GET_GRINGO_FROM_OBJECT(bVar3);
	}
	else
	{
		bVar5 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_horseshoe", &vVar0, 1.0f, 0);
	}
	if (IS_GRINGO_VALID(bVar4) && IS_GRINGO_VALID(bVar5))
	{
		if (IS_GRINGO_VALID(bVar4))
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar4), *iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar4), *iParam2);
			}
		}
		if (IS_GRINGO_VALID(bVar5))
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar5), *iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar5), *iParam2);
			}
		}
	}
	if (IS_GRINGO_VALID(bVar4))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar4, "UseCase1"))))
		{
			bVar7 = bVar4;
			Function_14(iParam0, 0);
			fVar6 = Function_79(StackVal, StackVal, StackVal, StackVal, Global_34574, Function_14(iParam0, 0));
		}
	}
	if (IS_GRINGO_VALID(bVar5))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar5, "UseCase1"))))
		{
			bVar7 = bVar5;
			Function_14(iParam0, 1);
			fVar6 = Function_79(StackVal, StackVal, StackVal, StackVal, Global_34574, Function_14(iParam0, 1));
		}
	}
	if (!IS_GRINGO_VALID(bVar7))
	{
		return 0;
	}
	if (fVar6 > 2.0f)
	{
		if (!Function_8(Global_34573, 1, 1))
		{
			*uParam1 = 1;
		}
	}
	return 1;
}

int Function_51(float fParam0, float fParam1, int iParam2) //Position: 0x329E / 12958
{
	bool bVar0;
	bool bVar1[4];
	vector3 vVar6;
	bool bVar9;
	float fVar10;
	int iVar11;
	bool bVar12;
	
	bVar0 = true;
	if (!IS_OBJECTSET_VALID(*iParam2))
	{
		*iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_78(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_16(fParam0);
	vVar6 = { StackVal, StackVal, Function_16(fParam0) };
	if (GET_OBJECTSET_SIZE(*iParam2) > 1)
	{
		bVar9 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, *iParam2);
	}
	if (IS_OBJECT_VALID(bVar9))
	{
		bVar1[0] = GET_GRINGO_FROM_OBJECT(bVar9);
		bVar0 = false;
	}
	else
	{
		bVar1[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_arm_wrestling", &vVar6, 1.0f, 0);
	}
	if (IS_GRINGO_VALID(bVar1[0]))
	{
		if (!IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar1[0], "UseCase1"))))
		{
			return 0;
		}
	}
	return 0;
	Function_53(fParam0);
	vVar6 = { StackVal, StackVal, Function_53(fParam0) };
	bVar1[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_FiveFingerFillet", &vVar6, 1.0f, 0);
	if (GET_OBJECTSET_SIZE(*iParam2) > 2)
	{
		bVar9 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, *iParam2);
	}
	if (IS_OBJECT_VALID(bVar9))
	{
		bVar1[1] = GET_GRINGO_FROM_OBJECT(bVar9);
		bVar0 = false;
	}
	else
	{
		bVar1[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/player_arm_wrestling", &vVar6, 1.0f, 0);
	}
	if (IS_GRINGO_VALID(bVar1[1]))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar1[1], "UseCase1"))))
		{
			return 0;
		}
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar1[1]), &vVar6);
		fVar10 = Function_79(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar6);
		if (fVar10 > 2.0f && !Function_8(Global_34573, 1, 1))
		{
			*fParam1 = 1;
		}
	}
	else
	{
		bVar0 = false;
		return 0;
	}
	iVar11 = 0;
	while (iVar11 <= 2)
	{
		Function_52(fParam0, iVar11);
		vVar6 = { StackVal, StackVal, Function_52(fParam0, iVar11) };
		if (GET_OBJECTSET_SIZE(*iParam2) > 1)
		{
			bVar9 = GET_INDEXED_OBJECT_IN_OBJECTSET((2 + iVar11), *iParam2);
		}
		if (IS_OBJECT_VALID(bVar9))
		{
			bVar1[(2 + iVar11)] = GET_GRINGO_FROM_OBJECT(bVar9);
			bVar0 = false;
		}
		else
		{
			bVar1[(2 + iVar11)] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/arm_wrestling_spectate", &vVar6, 0,1f, 0);
			if (!IS_GRINGO_VALID(bVar1[(2 + iVar11)]))
			{
				bVar1[(2 + iVar11)] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate", &vVar6, 0,1f, 0);
			}
			if (!IS_GRINGO_VALID(bVar1[(2 + iVar11)]))
			{
				bVar1[(2 + iVar11)] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_B", &vVar6, 0,1f, 0);
			}
			if (!IS_GRINGO_VALID(bVar1[(2 + iVar11)]))
			{
				bVar1[(2 + iVar11)] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_C", &vVar6, 0,1f, 0);
			}
		}
		if (IS_GRINGO_VALID(bVar1[(2 + iVar11)]))
		{
			bVar12 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar1[(2 + iVar11)], "UseCase1"));
			if (IS_ACTOR_VALID(bVar12))
			{
				SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bVar12, 0);
			}
		}
		iVar11++;
	}
	if (bVar0)
	{
		iVar11 = 0;
		while (iVar11 <= 4)
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar1[iVar11]), *iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar1[iVar11]), *iParam2);
			}
			iVar11++;
		}
	}
	return 1;
}

vector3 Function_52(int iParam0, int iParam1) //Position: 0x36F0 / 14064
{
	if (iParam0 == Global_30693[2])
	{
		if (iParam1 == 0)
		{
			return -1470,917f, 16,54662f, 3950,254f;
		}
		if (iParam1 == 1)
		{
			return -1473,098f, 16,54662f, 3949,357f;
		}
	}
	if (iParam0 == Global_30679[0])
	{
		if (iParam1 == 0)
		{
			return -3145,761f, 43,17878f, 3722,624f;
		}
		if (iParam1 == 1)
		{
			return -3145,761f, 43,17878f, 3718,675f;
		}
	}
	if (iParam0 == Global_30707[0])
	{
		if (iParam1 == 0)
		{
			return -467,4124f, 20,97995f, 3884,092f;
		}
		if (iParam1 == 1)
		{
			return -465,9765f, 20,97995f, 3884,092f;
		}
	}
	if (iParam0 == Global_30723[2])
	{
		if (iParam1 == 0)
		{
			return -264,6337f, 85,11941f, 2120,304f;
		}
		if (iParam1 == 1)
		{
			return -264,6337f, 85,11941f, 2118,317f;
		}
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_53(int iParam0) //Position: 0x3817 / 14359
{
	if (iParam0 == Global_30693[2])
	{
		return -1471,656f, 16,56962f, 3948,088f;
	}
	if (iParam0 == Global_30679[0])
	{
		return -3143,743f, 43,17878f, 3720,288f;
	}
	if (iParam0 == Global_30707[0])
	{
		return -466,16f, 20,97986f, 3881,796f;
	}
	if (iParam0 == Global_30723[2])
	{
		return -262,9332f, 85,11941f, 2118,893f;
	}
	LOG_ERROR("Returning invalid arm wrestling player seat");
	return 0.0f, 0.0f, 0.0f;
}

int Function_54(var uParam0, float fParam1, int iParam2) //Position: 0x38C6 / 14534
{
	bool bVar0;
	bool bVar1[2];
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	float fVar9;
	int iVar10;
	
	bVar0 = true;
	if (!IS_OBJECTSET_VALID(*iParam2))
	{
		*iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_78(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_18(uParam0);
	vVar4 = { StackVal, StackVal, Function_18(uParam0) };
	if (GET_OBJECTSET_SIZE(*iParam2) > 1)
	{
		bVar7 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, *iParam2);
	}
	if (IS_OBJECT_VALID(bVar7))
	{
		bVar1[0] = GET_GRINGO_FROM_OBJECT(bVar7);
		bVar0 = false;
	}
	else
	{
		bVar1[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &vVar4, 1.0f, 0);
	}
	if (IS_GRINGO_VALID(bVar1[0]))
	{
		bVar8 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar1[0], "UseCase1"));
		if (!IS_ACTOR_VALID(bVar8))
		{
			return 0;
		}
		if (IS_ACTION_NODE_PLAYING_PARTIAL(bVar8, "fivefingerfillet/Fake"))
		{
			if (IS_ACTION_NODE_PLAYING_PARTIAL(bVar8, "fivefingerfillet/Fake/sit") || IS_ACTION_NODE_PLAYING_PARTIAL(bVar8, "fivefingerfillet/Fake/leave_game"))
			{
				return 0;
			}
		}
		return 0;
	}
	bVar0 = false;
	return 0;
	Function_55(uParam0);
	vVar4 = { StackVal, StackVal, Function_55(uParam0) };
	bVar1[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_FiveFingerFillet", &vVar4, 1.0f, 0);
	if (GET_OBJECTSET_SIZE(*iParam2) > 2)
	{
		bVar7 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, *iParam2);
	}
	if (IS_OBJECT_VALID(bVar7))
	{
		bVar1[1] = GET_GRINGO_FROM_OBJECT(bVar7);
		bVar0 = false;
	}
	else
	{
		bVar1[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_FiveFingerFillet", &vVar4, 1.0f, 0);
	}
	if (IS_GRINGO_VALID(bVar1[1]))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar1[1], "UseCase1"))))
		{
			return 0;
		}
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar1[1]), &vVar4);
		fVar9 = Function_79(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar4);
		if (fVar9 > 2.0f)
		{
			if (!Function_8(Global_34573, 1, 1))
			{
				*fParam1 = 1;
			}
		}
	}
	else
	{
		bVar0 = false;
		return 0;
	}
	if (bVar0)
	{
		iVar10 = 0;
		while (iVar10 <= 2)
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar1[iVar10]), *iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar1[iVar10]), *iParam2);
			}
			iVar10++;
		}
	}
	return 1;
}

vector3 Function_55(int iParam0) //Position: 0x3B8C / 15244
{
	if (iParam0 == Global_30640[0])
	{
		return -2194,299f, 16,57026f, 2593,136f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 161,0631f, 73,82803f, 2294,619f;
	}
	if (iParam0 == Global_30685[0])
	{
		return -4274,766f, 18,07059f, 4453,27f;
	}
	if (iParam0 == Global_30707[3])
	{
		return 354,6982f, 76,28821f, 3447,546f;
	}
	if (iParam0 == Global_30723[1])
	{
		return -465,0943f, 152,3517f, 1596,716f;
	}
	LOG_ERROR("Returning invalid five finger fillet player seat");
	return 0.0f, 0.0f, 0.0f;
}

int Function_56(int iParam0, float fParam1, int iParam2) //Position: 0x3C5E / 15454
{
	var uVar0[3];
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10[3];
	bool bVar14;
	int iVar15;
	float fVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	float fVar20;
	float fVar21;
	
	Function_22(iParam0);
	vVar4 = { StackVal, StackVal, Function_22(iParam0) };
	bVar7 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack_dealer", &vVar4, 1.0f, 0);
	if (IS_GRINGO_VALID(bVar7))
	{
		bVar8 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar7, "UseCase1"));
		if (!IS_ACTOR_VALID(bVar8))
		{
			bVar8 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar7, "UseCase2"));
		}
		if (!IS_ACTOR_VALID(bVar8))
		{
			return 0;
		}
		if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar8)))
		{
			return 0;
		}
		if (!IS_ACTION_NODE_PLAYING_PARTIAL(bVar8, "Dealer"))
		{
			return 0;
		}
	}
	return 0;
	if (!IS_OBJECTSET_VALID(*iParam2))
	{
		*iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_78(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	bVar9 = true;
	iVar15 = 0;
	fVar16 = -1.0f;
	bVar14 = false;
	while (bVar14 <= 3)
	{
		Function_57(iParam0, bVar14);
		vVar4 = { StackVal, StackVal, Function_57(iParam0, bVar14) };
		if (GET_OBJECTSET_SIZE(*iParam2) > bVar14 + 1)
		{
			bVar17 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar14, *iParam2);
		}
		if (IS_OBJECT_VALID(bVar17))
		{
			bVar10[bVar14] = GET_GRINGO_FROM_OBJECT(bVar17);
			bVar9 = false;
		}
		else
		{
			bVar10[bVar14] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack", &vVar4, 1.0f, 0);
		}
		uVar0[bVar14] = bVar10[bVar14];
		iVar18 = 0;
		while (iVar18 <= bVar14)
		{
			if (uVar0[iVar18] == bVar10[bVar14])
			{
				bVar7 = "";
				return 0;
			}
			iVar18++;
		}
		if (IS_GRINGO_VALID(bVar10[bVar14]))
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(bVar10[bVar14]))
			{
				bVar19 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar10[bVar14], "UseCase1"));
				if (IS_ACTOR_VALID(bVar19))
				{
					if (IS_ACTION_NODE_PLAYING_PARTIAL(bVar19, "idle"))
					{
						iVar15++;
					}
					else
					{
						return 0;
					}
				}
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar10[bVar14]), &vVar4);
				fVar20 = Function_79(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar4);
				if (fVar20 > fVar16 || fVar16 != -1.0f)
				{
					fVar16 = fVar20;
				}
			}
			else
			{
				return 0;
			}
		}
		bVar9 = false;
		return 0;
		bVar14++;
	}
	if (bVar9)
	{
		bVar14 = false;
		while (bVar14 <= 3)
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar10[bVar14]), *iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar10[bVar14]), *iParam2);
			}
			bVar14++;
		}
	}
	if (iVar15 > 3)
	{
		return 0;
	}
	fVar21 = 2.0f;
	if (iParam0 == Global_30668[1])
	{
		fVar21 = 1,5f;
	}
	if (fVar16 < fVar21)
	{
	}
	else if (!Function_8(Global_34573, 1, 1))
	{
		*fParam1 = 1;
	}
	return 1;
}

vector3 Function_57(int iParam0, bool bParam1) //Position: 0x3F1D / 16157
{
	if (iParam0 == Global_30693[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -2685,328f, 31,35269f, 4284,425f;
				break;
			
			case 0x00000001:
				return -2686,254f, 31,35269f, 4284,686f;
				break;
			
			case 0x00000002:
				return -2686,982f, 31,35269f, 4284,026f;
				break;
		}
	}
	else if (iParam0 == Global_30658[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -3640,897f, 42,76801f, 2104,235f;
				break;
			
			case 0x00000001:
				return -3640,023f, 42,76801f, 2104,636f;
				break;
			
			case 0x00000002:
				return -3639,895f, 42,76801f, 2105,61f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return 719,9783f, 78,4736f, 1312,265f;
				break;
			
			case 0x00000001:
				return 719,0787f, 78,4736f, 1312,605f;
				break;
			
			case 0x00000002:
				return 718,2963f, 78,4736f, 1312,011f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return 172,2084f, 73,75179f, 2224,902f;
				break;
			
			case 0x00000001:
				return 170,9445f, 73,75179f, 2224,73f;
				break;
			
			case 0x00000002:
				return 170,7396f, 73,74976f, 2223,559f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

int Function_58(int iParam0, float fParam1, int iParam2) //Position: 0x40D6 / 16598
{
	bool bVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	var uVar6[6];
	bool bVar13;
	bool bVar14[6];
	bool bVar21;
	int iVar22;
	bool bVar23;
	float fVar24;
	float fVar25;
	
	iVar1 = 0;
	fVar2 = -1.0f;
	if (!IS_OBJECTSET_VALID(*iParam2))
	{
		*iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_78(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	bVar13 = true;
	bVar0 = false;
	while (bVar0 <= 6)
	{
		Function_24(iParam0, bVar0);
		vVar3 = { StackVal, StackVal, Function_24(iParam0, bVar0) };
		if (GET_OBJECTSET_SIZE(*iParam2) > bVar0 + 1)
		{
			bVar21 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *iParam2);
		}
		if (IS_OBJECT_VALID(bVar21))
		{
			bVar14[bVar0] = GET_GRINGO_FROM_OBJECT(bVar21);
			bVar13 = false;
		}
		else
		{
			bVar14[bVar0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_liars_dice", &vVar3, 1.0f, 0);
		}
		uVar6[bVar0] = bVar14[bVar0];
		iVar22 = 0;
		while (iVar22 <= bVar0)
		{
			if (uVar6[iVar22] == bVar14[bVar0])
			{
				bVar14[bVar0] = "";
				return 0;
			}
			iVar22++;
		}
		if (IS_GRINGO_VALID(bVar14[bVar0]))
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(bVar14[bVar0]))
			{
				bVar23 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar14[bVar0], "UseCase1"));
				if (IS_ACTOR_VALID(bVar23))
				{
					if ((IS_ACTION_NODE_PLAYING_PARTIAL(bVar23, "fake_liars_dice") && !IS_ACTION_NODE_PLAYING_PARTIAL(bVar23, "sit")) && !IS_ACTION_NODE_PLAYING_PARTIAL(bVar23, "stand"))
					{
						iVar1++;
					}
					else
					{
						return 0;
					}
				}
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar14[bVar0]), &vVar3);
				fVar24 = Function_79(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar3);
				if (fVar24 > fVar2 || fVar2 != -1.0f)
				{
					fVar2 = fVar24;
				}
			}
			else
			{
				return 0;
			}
		}
		bVar13 = false;
		return 0;
		bVar0++;
	}
	if (bVar13)
	{
		bVar0 = false;
		while (bVar0 <= 6)
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar14[bVar0]), *iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar14[bVar0]), *iParam2);
			}
			bVar0++;
		}
	}
	if (iVar1 >= 0 || iVar1 <= 6)
	{
		return 0;
	}
	fVar25 = 2.0f;
	if (iParam0 == Global_30668[1])
	{
		fVar25 = 1,5f;
	}
	if (fVar2 < fVar25)
	{
	}
	else if (!Function_8(Global_34573, 1, 1))
	{
		*fParam1 = 1;
	}
	return 1;
}

int Function_59(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x4305 / 17157
{
	bool bVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	var uVar6[6];
	bool bVar13;
	bool bVar14[6];
	bool bVar21;
	int iVar22;
	bool bVar23;
	float fVar24;
	
	iVar1 = 0;
	fVar2 = -1.0f;
	if (!IS_OBJECTSET_VALID(*uParam2))
	{
		*uParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_78(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	bVar13 = true;
	bVar0 = false;
	while (bVar0 <= 6)
	{
		if (GET_OBJECTSET_SIZE(*uParam2) > bVar0 + 1)
		{
			bVar21 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam2);
		}
		if (IS_OBJECT_VALID(bVar21))
		{
			bVar14[bVar0] = GET_GRINGO_FROM_OBJECT(bVar21);
			bVar13 = false;
		}
		else
		{
			Function_27(uParam0, bVar0, iParam3);
			bVar14[bVar0] = Function_26(StackVal, StackVal, Function_27(uParam0, bVar0, iParam3));
		}
		uVar6[bVar0] = bVar14[bVar0];
		iVar22 = 0;
		while (iVar22 <= bVar0)
		{
			if (uVar6[iVar22] == bVar14[bVar0])
			{
				bVar14[bVar0] = "";
				return 0;
			}
			iVar22++;
		}
		if (IS_GRINGO_VALID(bVar14[bVar0]))
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(bVar14[bVar0]))
			{
				bVar23 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar14[bVar0], "UseCase1"));
				if (IS_ACTOR_VALID(bVar23))
				{
					if ((IS_ACTION_NODE_PLAYING_PARTIAL(bVar23, "ncard_idle") || IS_ACTION_NODE_PLAYING_PARTIAL(bVar23, "look_at_cards")) || IS_ACTION_NODE_PLAYING_PARTIAL(bVar23, "look_up"))
					{
						iVar1++;
					}
					else
					{
						return 0;
					}
				}
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar14[bVar0]), &vVar3);
				fVar24 = Function_79(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar3);
				if (fVar24 > fVar2 || fVar2 != -1.0f)
				{
					fVar2 = fVar24;
				}
			}
			else
			{
				return 0;
			}
		}
		bVar13 = false;
		bVar0++;
	}
	if (bVar13)
	{
		bVar0 = false;
		while (bVar0 <= 6)
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar14[bVar0]), *uParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar14[bVar0]), *uParam2);
			}
			bVar0++;
		}
	}
	if (iVar1 >= 0 || iVar1 <= 6)
	{
		return 0;
	}
	if (fVar2 < 2.0f)
	{
	}
	else if (!Function_8(Global_34573, 1, 1))
	{
		*uParam1 = 1;
	}
	return 1;
}

var Function_60() //Position: 0x44EA / 17642
{
	return StackVal;
}

void Function_61(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x44F5 / 17653
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

void Function_62(int iParam0) //Position: 0x4540 / 17728
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* cVar3[8];
	char* cVar5[8];
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	if (!iParam0->f_128 != 0)
	{
		if (HUD_IS_SHOWING_HELP_TEXT())
		{
			HUD_CLEAR_HELP();
		}
		if (Function_82(iParam0))
		{
			if (Function_81(iParam0 + 128, 4194304))
			{
				Function_61("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
			}
			else
			{
				Function_61("mission_later_tomorrow_no_time", 0x41200000, 1, 0, 2, 1, 0);
			}
			return;
		}
		iVar0 = Function_66(iParam0->f_128);
		iVar1 = Function_65(iParam0->f_128);
		if (Function_81(iParam0 + 128, 4096) && !Function_81(iParam0 + 128, 4194304))
		{
			if (Function_81(iParam0 + 128, 1))
			{
				bVar8 = Function_63(Function_64(iParam0->f_132));
				bVar9 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar8), GET_HOUR(bVar8), 0, 0);
				ADD_TIME(&bVar9, 0, iParam0->f_148, false, 0);
				iVar2 = GET_HOUR(bVar9);
				if ((iVar2 <= iVar0 && iVar2 > iVar1) || (iVar0 != 0 && iVar1 != 0))
				{
					if (iVar2 > 12 || iVar2 != 24)
					{
						if (iVar2 >= 12)
						{
							iVar2 = (iVar2 - 12);
						}
						else if (iVar2 == 0)
						{
							iVar2 = 12;
						}
						straddi(&cVar3, iVar2, 8);
						stradd(&cVar3, "AM", 8);
					}
					else
					{
						if (iVar2 >= 12)
						{
							iVar2 = (iVar2 - 12);
						}
						straddi(&cVar3, iVar2, 8);
						stradd(&cVar3, "PM", 8);
					}
					UI_SET_STRING("dynamic_entry_for_time", &cVar3);
					if (GET_DAY(false) <= GET_DAY(bVar9))
					{
						PRINT_HELP_FORMAT(7.0f, "mission_later_tomorrow", "dynamic_entry_for_time", "", "", "", 0, 0, 0);
					}
					else
					{
						PRINT_HELP_FORMAT(7.0f, "mission_later_today", "dynamic_entry_for_time", "", "", "", 0, 0, 0);
					}
					return;
				}
				bVar7 = true;
			}
		}
		iVar2 = GET_HOUR(false);
		if ((iVar2 <= iVar0 && iVar2 >= iVar1) || (iVar0 != 0 && iVar1 != 0))
		{
			bVar7 = true;
		}
		if (iVar0 > 12 || iVar0 != 24)
		{
			if (iVar0 >= 12)
			{
				iVar0 = (iVar0 - 12);
			}
			straddi(&cVar3, iVar0, 8);
			stradd(&cVar3, "AM", 8);
		}
		else
		{
			if (iVar0 >= 12)
			{
				iVar0 = (iVar0 - 12);
			}
			straddi(&cVar3, iVar0, 8);
			stradd(&cVar3, "PM", 8);
		}
		if (iVar1 > 12 || iVar1 != 24)
		{
			if (iVar1 >= 12)
			{
				iVar1 = (iVar1 - 12);
			}
			straddi(&cVar5, iVar1, 8);
			stradd(&cVar5, "AM", 8);
		}
		else
		{
			if (iVar1 >= 12)
			{
				iVar1 = (iVar1 - 12);
			}
			straddi(&cVar5, iVar1, 8);
			stradd(&cVar5, "PM", 8);
		}
		UI_SET_STRING("dynamic_entry_for_time", &cVar3);
		UI_SET_STRING("dynamic_entry_for_time_later", &cVar5);
		if (bVar7)
		{
			PRINT_HELP_FORMAT(7.0f, "mission_tomorrow_specific", "dynamic_entry_for_time", "dynamic_entry_for_time_later", "", "", 0, 0, 0);
		}
		else
		{
			PRINT_HELP_FORMAT(7.0f, "mission_later_specific", "dynamic_entry_for_time", "dynamic_entry_for_time_later", "", "", 0, 0, 0);
		}
		return;
	}
	return;
}

var Function_63(int iParam0) //Position: 0x4912 / 18706
{
	if (!Function_216(iParam0))
	{
		return MAKE_TIME_OF_DAY(false, false, false);
	}
	return Global_13172[iParam011].f_36;
}

int Function_64(int iParam0) //Position: 0x4931 / 18737
{
	if (!Function_94(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_65(int iParam0) //Position: 0x494B / 18763
{
	if (iParam0 & 1056 == 1024)
	{
		return 5;
	}
	if (iParam0 & 96 == 32)
	{
		return 7;
	}
	if (iParam0 & 192 == 64)
	{
		return 11;
	}
	if (iParam0 & 384 == 128)
	{
		return 14;
	}
	if (iParam0 & 768 == 256)
	{
		return 18;
	}
	if (iParam0 & 1536 == 512)
	{
		return 22;
	}
	return 0;
}

int Function_66(float fParam0) //Position: 0x49B4 / 18868
{
	if (fParam0 & 1056 == 32)
	{
		return 5;
	}
	if (fParam0 & 96 == 64)
	{
		return 7;
	}
	if (fParam0 & 192 == 128)
	{
		return 11;
	}
	if (fParam0 & 384 == 256)
	{
		return 14;
	}
	if (fParam0 & 768 == 512)
	{
		return 18;
	}
	if (fParam0 & 1536 == 1024)
	{
		return 22;
	}
	return 0;
}

var Function_67(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, float fParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x4A1D / 18973
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { fParam9, 2.0f, fParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
}

void Function_68(bool bParam0) //Position: 0x4AE8 / 19176
{
	if (Function_69(bParam0, 1) && !Function_69(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_69(bool bParam0, int iParam1) //Position: 0x4B15 / 19221
{
	return (bParam0 && iParam1) == 0;
}

void Function_70(int iParam0) //Position: 0x4B22 / 19234
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (!IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, true);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (!IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, true);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal != 0)
		{
			Function_71(0, 4, 0, 0, 1);
		}
	}
	return;
}

void Function_71(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x4B8D / 19341
{
	int iVar0;
	bool bVar1;
	
	Function_76(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_75(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, bParam3);
			Function_72(StackVal, bVar1, bParam4);
		}
	}
}

void Function_72(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4BFF / 19455
{
	int iVar0;
	
	Function_76(bParam0);
	Function_74(bParam1);
	PRINTNL();
	if (StackVal == bParam0)
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
	SET_WEATHER(bParam0, bParam1);
	Function_73();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = bParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (bParam0 != 3 || bParam0 != 4)
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
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_73() //Position: 0x4D78 / 19832
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_74(bool bParam0) //Position: 0x4D84 / 19844
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

void Function_75(bool bParam0, bool bParam1) //Position: 0x4DCA / 19914
{
	bool bVar0;
	
	bVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_76(bParam0);
	Function_74(bVar0);
	PRINTNL();
	Function_72(bParam0, bVar0, bParam1);
	return;
}

void Function_76(int iParam0) //Position: 0x4DEF / 19951
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

void Function_77(var uParam0, int iParam1) //Position: 0x4E35 / 20021
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

var Function_78() //Position: 0x4E44 / 20036
{
	bool bVar0;
	
	return bVar0;
}

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x4E4C / 20044
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(var uParam0, int iParam1) //Position: 0x4E69 / 20073
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_81(var uParam0, int iParam1) //Position: 0x4E80 / 20096
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_82(int iParam0) //Position: 0x4E9C / 20124
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = iParam0->f_36;
	if (iVar0 < 16 || iVar0 > 0)
	{
		return 0;
	}
	if (Global_3414)
	{
		return 0;
	}
	if (!iParam0->f_152)
	{
		if (SQUAD_IS_VALID(iParam0->f_156))
		{
			bVar3 = false;
			while (bVar3 <= SQUAD_GET_SIZE(iParam0->f_156))
			{
				bVar4 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_156, bVar3);
				if (IS_ACTOR_VALID(bVar4))
				{
					if (!IS_ACTOR_VEHICLE(bVar4))
					{
						if (GET_LAST_ATTACKER(bVar4) == Global_34573)
						{
							Function_89(iParam0->f_156);
							SQUAD_GOALS_CLEAR(iParam0->f_156);
							iParam0->f_152 = 1;
							if (GET_OBJECT_TYPE(iParam0->f_40) == 12)
							{
								if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
								{
									if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
									{
										GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_40), false);
									}
								}
							}
							return 1;
						}
						if (Function_85(bVar4, &uVar2, &uVar1, 0, 0, 0x40400000) && ((iParam0->f_36 != 11 || iParam0->f_36 != 12) || iParam0->f_36 != 13))
						{
							Function_89(iParam0->f_156);
							SQUAD_GOALS_CLEAR(iParam0->f_156);
							iParam0->f_152 = 1;
							if (GET_OBJECT_TYPE(iParam0->f_40) == 12)
							{
								if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
								{
									if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
									{
										GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_40), false);
									}
								}
							}
							return 1;
						}
					}
					else if (GET_LAST_ATTACK_TARGET(Global_34573) == bVar4)
					{
						Function_89(iParam0->f_156);
						SQUAD_GOALS_CLEAR(iParam0->f_156);
						iParam0->f_152 = 1;
						if (GET_OBJECT_TYPE(iParam0->f_40) == 12)
						{
							if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
							{
								if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
								{
									GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_40), false);
								}
							}
						}
						return 1;
					}
				}
				bVar3++;
			}
		}
	}
	else if (Function_83(StackVal, StackVal, Global_34573, *(iParam0 + 52)) < 100.0f)
	{
		iParam0->f_152 = 0;
		if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
		{
			if (!GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_40), true);
			}
		}
		return 0;
	}
	return 1;
	return 0;
}

float Function_83(bool bParam0, vector3 vParam1) //Position: 0x5072 / 20594
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_84(bParam0);
		vVar0 = { StackVal, StackVal, Function_84(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_84(bool bParam0) //Position: 0x50EC / 20716
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

int Function_85(bool bParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x5156 / 20822
{
	float fVar0;
	
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		if (IS_ACTOR_ON_FOOT(bParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, (fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		fVar0 = Function_88(bParam0, Global_34573);
		if (!Function_69(bParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_86(bParam0);
				return 1;
			}
		}
		if (!Function_69(bParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_86(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_86(bParam0);
				return 1;
			}
		}
		if (!Function_69(bParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_86(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1,3f)
					{
						*uParam1 = 4;
						Function_86(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_69(bParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_86(bParam0);
				return 1;
			}
		}
		if (!Function_69(bParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_86(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_86(bool bParam0) //Position: 0x52ED / 21229
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_87(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_87(bool bParam0) //Position: 0x5321 / 21281
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_88(bool bParam0, bool bParam1) //Position: 0x5338 / 21304
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	return VDIST(vVar0, vVar3);
}

void Function_89(bool bParam0) //Position: 0x5429 / 21545
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_90(bool bParam0, bool bParam1, int iParam2) //Position: 0x545B / 21595
{
	if (!IS_BLIP_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_81(&iParam2, 4194304) && !Function_81(&iParam2, 8388608))
		{
			bParam1 = false;
		}
	}
	if (bParam1)
	{
		SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 1.0f);
		SET_BLIP_SCALE(bParam0, 1,25f);
	}
	else
	{
		SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0,75f);
		SET_BLIP_SCALE(bParam0, 1.0f);
	}
	return;
}

bool Function_91(int iParam0) //Position: 0x54B8 / 21688
{
	bool bVar0;
	bool bVar1;
	
	if (!iParam0->f_128 != 0)
	{
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_81(iParam0 + 128, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_81(iParam0 + 128, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_81(iParam0 + 128, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_81(iParam0 + 128, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_81(iParam0 + 128, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_81(iParam0 + 128, 1024))
				{
					return 0;
				}
				break;
		}
		if (Function_81(iParam0 + 128, 4096))
		{
			if (Function_81(iParam0 + 128, 1))
			{
				bVar0 = Function_63(Function_64(iParam0->f_132));
				bVar1 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar0), GET_HOUR(bVar0), 0, 0);
				ADD_TIME(&bVar1, 0, iParam0->f_148, false, 0);
				if (IS_LATER_THAN(bVar1, GET_TIME_OF_DAY()))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

bool Function_92(int iParam0) //Position: 0x55B2 / 21938
{
	var uVar0;
	
	if (!iParam0->f_128 != 0)
	{
		uVar0 = iParam0->f_128;
		if (uVar0 & 1 >= 0)
		{
			if (!Function_242(iParam0->f_132, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 2 >= 0)
		{
			if (!Function_242(iParam0->f_136, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 4 >= 0)
		{
			if (!Function_242(iParam0->f_140, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 8 >= 0)
		{
			if (!Function_242(iParam0->f_144, 0))
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

int Function_93(int iParam0) //Position: 0x564B / 22091
{
	if (!Function_216(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_94(int iParam0) //Position: 0x5665 / 22117
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_95(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x567B / 22139
{
	struct<4> Var0;
	
	if ((Function_214(StackVal) != 48 && !bParam2) && !Global_3381)
	{
		bParam1 = false;
	}
	if (Function_212(StackVal) == 1)
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
			if (Function_212(StackVal) == 1)
			{
				Global_3379 = 1;
				Global_3378 = 0;
				SET_RICH_PRESENCE(StackVal, Function_214(3), 0, 0, 0);
				Function_210(&(Global_3422[Function_214(StackVal)40]));
			}
			else if (Function_212(StackVal) == 4)
			{
				Function_209(StackVal, iParam0->f_140);
				Global_3383 = 1;
				SET_RICH_PRESENCE(StackVal, (3 + Function_214(58)), 0, 0, 0);
			}
			Function_207();
			Function_226(0, 0);
			iParam0->f_108 = Function_97(StackVal, StackVal, bParam2, 0, iParam3, 0);
			iParam0->f_112 = 0;
			iParam0->f_124 = 0;
		}
		else if (!HUD_IS_FADING())
		{
			if (Function_212(StackVal) == 1)
			{
				Var0 = { StackVal, StackVal, StackVal, Function_96(Function_214(StackVal)) };
			}
			else
			{
				Var0 = { StackVal, StackVal, StackVal, *(iParam0 + 12) };
			}
			UNK_0xC6E36B1D(&Var0);
			SET_ACTOR_INVULNERABILITY(Global_34573, true);
		}
	}
	else
	{
		if (Function_212(StackVal) == 1)
		{
			Global_3379 = 1;
			Global_3378 = 0;
			Var0 = { StackVal, StackVal, StackVal, Function_96(Function_214(StackVal)) };
			if (HUD_IS_FADED())
			{
				UNK_0xC6E36B1D(&Var0);
			}
			Function_210(&(Global_3422[Function_214(StackVal)40]));
		}
		else if (Function_212(StackVal) == 4)
		{
			Function_209(StackVal, iParam0->f_140);
			Global_3383 = 1;
		}
		SET_ACTOR_INVULNERABILITY(Global_34573, true);
		Function_207();
		Function_226(0, 0);
		iParam0->f_108 = Function_97(StackVal, StackVal, bParam2, 0, 1, 0);
		iParam0->f_112 = 0;
		iParam0->f_124 = 0;
	}
}

struct<16> Function_96(bool bParam0) //Position: 0x5824 / 22564
{
	char* cVar0[16];
	
	strcpy(&cVar0, "fav_non", 16);
	if (!Function_94(bParam0))
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, *(&Global_3422[bParam040] + 12);
}

var Function_97(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5) //Position: 0x5855 / 22613
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar61;
	struct<25> Var62;
	
	if (Function_212(iParam1) == 1)
	{
		Function_226(1, 0);
	}
	else
	{
		Function_226(0, 0);
	}
	bVar1 = Function_214(iParam1);
	if (!Global_3365 || Global_3381)
	{
		if (Function_212(iParam1) == 1)
		{
			uVar2 = 58;
			if (!bParam2)
			{
				Function_164(bVar1, &uVar2, &uVar0, 1);
			}
			if (bVar1 == 1)
			{
				iVar61 = 0;
				while (iVar61 <= 4)
				{
					Function_163(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 3)
				{
					Function_162(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 11)
				{
					Function_161(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 16)
				{
					Function_160(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 58)
				{
					if (Function_216(Function_64(iVar61)))
					{
						Function_158(Function_64(iVar61));
					}
					iVar61++;
				}
				Function_156();
				Function_154(Function_6(), 0);
				Function_153();
				if (bVar1 == 1)
				{
					Function_158(Function_64(2));
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
			PRINTINT(Function_212(iParam1));
			PRINTNL();
		}
	}
	if (Function_212(iParam1) == 1)
	{
		Function_152(18, bVar1, 0);
		Function_150(18, &Global_3422[bVar140] + 12, 0, 1);
		if (!bParam2)
		{
			Function_148(bVar1);
			AUDIO_RESET_SPEECH_HISTORY();
		}
		else
		{
			Global_34165.f_136 = GET_CURRENT_GAME_TIME();
		}
	}
	Var62 = iParam1;
	Var69 = { StackVal, StackVal, StackVal, Function_147(bVar1) };
	strcpy(&Var62 + 4, UI_GET_STRING(&Var69), 16);
	Var62.f_20 = bParam2;
	Var62.f_24 = iParam3;
	Function_143(0);
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
	SET_ACTOR_INVULNERABILITY(Global_34573, false);
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return "";
	}
	if (Function_212(iParam1) == 4)
	{
		PLAY_SOUND("HUD_MENU_SELECT_MASTER");
	}
	Global_3414 = 0;
	bVar73 = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(bParam0, 4), &Var62, 7, 0);
	if (IS_SCRIPT_VALID(bVar73))
	{
		if (Function_216(iParam1))
		{
			if (bParam5)
			{
				Function_142(iParam1, iParam4);
			}
			else if (Function_93(iParam1) == 1)
			{
				Function_141(iParam1, iParam4);
			}
			else
			{
				Function_102(iParam1, iParam4);
			}
		}
		Function_100(2);
		Function_98((15 - Function_99(105)));
		return bVar73;
	}
	return "";
}

void Function_98(int iParam0) //Position: 0x5B2E / 23342
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_99(105)), 0);
	return;
}

int Function_99(int iParam0) //Position: 0x5B4F / 23375
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_100(bool bParam0) //Position: 0x5B65 / 23397
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_74(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_74(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, false, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_74(Global_12976.f_24);
	PRINTNL();
	Function_101(bParam0);
	return;
}

void Function_101(int iParam0) //Position: 0x5C01 / 23553
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_99(90)), 0);
	return;
}

void Function_102(int iParam0, int iParam1) //Position: 0x5C22 / 23586
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_216(iParam0))
	{
		Function_139();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_212(iParam0);
	if (StackVal != 2)
	{
		Function_138("DEED_START", iParam0);
	}
	Global_13172[iParam011].f_8 = StackVal + 1;
	Global_13172[iParam011].f_4 = 2;
	Global_6271 = iParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_105(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_214(iParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_104(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_103(Global_6269) };
		}
		bVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(bVar12, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar12);
		APPEND_JOURNAL_ENTRY(bVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_103(int iParam0) //Position: 0x5D32 / 23858
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_104(char* cParam0) //Position: 0x5D5C / 23900
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

void Function_105(bool bParam0) //Position: 0x5FB2 / 24498
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_132();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_106();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_33(&Global_63095, 1);
		Function_33(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_106() //Position: 0x6003 / 24579
{
	Function_117();
	Function_116();
	Function_116();
	Function_115();
	Function_115();
	Function_114();
	Function_114();
	Function_113();
	Function_113();
	if (!Function_231())
	{
		Function_111();
		Function_110();
		Function_109();
		Function_108();
	}
	Function_107();
	return;
}

void Function_107() //Position: 0x6036 / 24630
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

void Function_108() //Position: 0x613C / 24892
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

void Function_109() //Position: 0x616F / 24943
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

void Function_110() //Position: 0x62FD / 25341
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

void Function_111() //Position: 0x64B1 / 25777
{
	Function_112(&Global_28260, 1, 0);
	return;
}

void Function_112(int iParam0, bool bParam1, var uParam2) //Position: 0x64BF / 25791
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
	
	bVar0 = Function_12();
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

struct<8> Function_113() //Position: 0x66B0 / 26288
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
				iVar2 = ((Function_7((50 + iVar4)) + Function_7((183 + iVar4))) + Function_7((90 + iVar4)));
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
	Function_152(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_114() //Position: 0x674B / 26443
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
		iVar2 = ((Function_7((50 + iVar3) + 15) + Function_7((183 + iVar3) + 15)) + Function_7((90 + iVar3) + 15));
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
	Function_152(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_115() //Position: 0x67D4 / 26580
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
			iVar2 = ((Function_7((50 + iVar3) + 8) + Function_7((183 + iVar3) + 8)) + Function_7((90 + iVar3) + 8));
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
	Function_152(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_116() //Position: 0x686B / 26731
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
		iVar2 = ((Function_7((50 + iVar3)) + Function_7((183 + iVar3))) + Function_7((90 + iVar3)));
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
	Function_152(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_117() //Position: 0x68EA / 26858
{
	Function_118(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_152(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_118(int iParam0, bool bParam1, bool bParam2) //Position: 0x6910 / 26896
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
	Function_131(iParam0, bParam1, 1);
	Function_130(iParam0);
	if (bParam2 && bParam1 == 0.0f)
	{
		Function_119(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_119(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x6B1A / 27418
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_129(390))), 32);
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
					bVar19 = (Function_128(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_128(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_126(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_123(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_120(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_78(), &Var9);
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

var Function_120(int iParam0) //Position: 0x7147 / 28999
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_121(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x7158 / 29016
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_122("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_122("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_122("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_122(char* cParam0, char* cParam1) //Position: 0x724D / 29261
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_123(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x7266 / 29286
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_125(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_124(Function_125(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_124(int iParam0, int iParam1) //Position: 0x72CB / 29387
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_125(int iParam0, bool bParam1) //Position: 0x72DD / 29405
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_126(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x72EF / 29423
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
	if (((Function_127(iParam0) != 19 || Function_127(iParam0) != 17) || Function_127(iParam0) != 10) || Function_127(iParam0) != 9)
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

int Function_127(int iParam0) //Position: 0x741F / 29727
{
	return Global_35278[iParam020].f_48;
}

float Function_128(int iParam0) //Position: 0x742E / 29742
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_129(int iParam0) //Position: 0x7467 / 29799
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_130(int iParam0) //Position: 0x74A4 / 29860
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

int Function_131(int iParam0, bool bParam1, bool bParam2) //Position: 0x763E / 30270
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

void Function_132() //Position: 0x7858 / 30808
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_133(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_133(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_41(StackVal, StackVal, vVar0))
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

vector3 Function_133(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x78F9 / 30969
{
	int iVar0;
	
	iVar0 = Function_137(uParam2, uParam3);
	if (Function_136(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_135(&Global_63095, 1);
			Function_33(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_135(&Global_63095, 2);
			Function_33(&Global_63095, 1);
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
		Function_135(&Global_63095, 2);
		Function_33(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_134();
	return StackVal, StackVal, Function_134();
}

vector3 Function_134() //Position: 0x79E0 / 31200
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_135(var uParam0, int iParam1) //Position: 0x79E9 / 31209
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_136(int iParam0) //Position: 0x79F8 / 31224
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_137(bool bParam0, bool bParam1) //Position: 0x7A0E / 31246
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_79(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_79(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_136(iVar0) && !bParam1)
	{
		iVar0 = Function_137(bParam0, 1);
	}
	return iVar0;
}

void Function_138(char* cParam0, bool bParam1) //Position: 0x7AD5 / 31445
{
	struct<4> Var0;
	
	if (!Function_216(bParam1))
	{
		return;
	}
	switch (Function_212(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_147(Function_214(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_212(bParam1), Function_214(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_212(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_212(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_212(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_212(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_212(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

void Function_139() //Position: 0x7BF9 / 31737
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
			Function_140(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_140(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7E40 / 32320
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

void Function_141(int iParam0, int iParam1) //Position: 0x7E69 / 32361
{
	int iVar0;
	
	if (!Function_216(iParam0))
	{
		Function_139();
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
	iVar0 = Function_212(iParam0);
	Global_13172[iParam011].f_4 = 2;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_105(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_214(iParam0);
	}
	Global_3376 = 1;
	return;
}

void Function_142(int iParam0, int iParam1) //Position: 0x7ED0 / 32464
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_216(iParam0))
	{
		Function_139();
		return;
	}
	iVar0 = Function_212(iParam0);
	Global_13172[iParam011].f_4 = 1;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_105(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_214(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_104(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_103(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar11);
		APPEND_JOURNAL_ENTRY(bVar11, 0);
	}
	return;
}

void Function_143(bool bParam0) //Position: 0x7F76 / 32630
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
		Function_144();
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

void Function_144() //Position: 0x8004 / 32772
{
	int iVar0;
	
	Global_26960 = Function_145(StackVal);
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

int Function_145(int iParam0) //Position: 0x8052 / 32850
{
	if (!Function_146(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_146(int iParam0) //Position: 0x806A / 32874
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_147(bool bParam0) //Position: 0x807F / 32895
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, bParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_148(int iParam0) //Position: 0x80A4 / 32932
{
	int iVar0;
	
	iVar0 = Function_149(iParam0);
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Global_34165.f_140 = 0.0f;
	switch (iVar0)
	{
		case 0x00000000:
			Global_34165.f_120 = Function_7(27);
			Global_34165.f_116 = Function_7(42);
			Global_34165.f_124 = CEIL(Function_129(49));
			Global_34165.f_128 = Function_7(49);
			break;
		
		case 0x00000002:
			Global_34165.f_116 = Function_7(355);
			break;
		
		case 0x00000001:
			Global_34165.f_124 = CEIL(Function_129(49));
			Global_34165.f_128 = Function_7(49);
			break;
	}
	return;
}

int Function_149(int iParam0) //Position: 0x812E / 33070
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

int Function_150(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x81C3 / 33219
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
		Function_151(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_151(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x8515 / 34069
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, false, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

int Function_152(int iParam0, bool bParam1, bool bParam2) //Position: 0x8598 / 34200
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
		Function_131(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_130(iParam0);
	if (bParam2)
	{
		Function_119(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_153() //Position: 0x8833 / 34867
{
	WRITE_TO_FILE("New Game Progression Started\n", "C:/MoneyData.csv", 1);
	return;
}

int Function_154(int iParam0, bool bParam1) //Position: 0x8870 / 34928
{
	bool bVar0;
	
	bVar0 = Function_7(0);
	if ((Function_7(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_155(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (iParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_7(0));
	return 1;
}

int Function_155(int iParam0, bool bParam1, int iParam2) //Position: 0x8900 / 35072
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
	Function_130(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_119(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

void Function_156() //Position: 0x8AFB / 35579
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
	Function_157();
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 22);
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 4);
	return;
}

void Function_157() //Position: 0x8C7E / 35966
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	if (Global_3365)
	{
		return;
	}
	bVar2 = Function_12();
	if (!IS_ACTOR_VALID(bVar2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 38)
	{
		bVar1 = iVar0;
		bVar3 = GET_AMMO_ENUM(bVar1);
		if (bVar3 != 4294967295)
		{
			switch (UNK_0xDB679ED9(bVar1))
			{
				case 0x00000028:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, bVar3, 30.0f, 0);
					break;
				
				case 0x00000027:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, bVar3, 30.0f, 0);
					break;
				
				case 0x0000002B:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, bVar3, 12.0f, 0);
					break;
				
				case 0x0000002A:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, bVar3, 20.0f, 0);
					break;
				
				case 0x00000029:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, bVar3, 20.0f, 0);
					break;
				
				case 0x0000002C:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, bVar3, 20.0f, 0);
					break;
				}
		}
		iVar0++;
	}
	return;
}

void Function_158(int iParam0) //Position: 0x8D4F / 36175
{
	Function_159(iParam0);
	return;
}

void Function_159(int iParam0) //Position: 0x8D5A / 36186
{
	int iVar0;
	
	if (!Function_216(iParam0))
	{
		Function_139();
		return;
	}
	iVar0 = Function_212(iParam0);
	Global_13172[iParam011].f_4 = 0;
	return;
}

void Function_160(int iParam0, int iParam1) //Position: 0x8D7E / 36222
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return;
	}
	Global_25986[iParam0] = iParam1;
	return;
}

void Function_161(int iParam0, int iParam1) //Position: 0x8D9B / 36251
{
	if (iParam0 >= 4294967295 && iParam0 <= 11)
	{
		return;
	}
	Global_25974[iParam0] = iParam1;
	return;
}

void Function_162(int iParam0, int iParam1) //Position: 0x8DB8 / 36280
{
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return;
	}
	Global_25970[iParam0] = iParam1;
	return;
}

void Function_163(int iParam0, int iParam1) //Position: 0x8DD4 / 36308
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return;
	}
	Global_25965[iParam0] = iParam1;
	return;
}

void Function_164(int iParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x8DF0 / 36336
{
	if (Global_3365 && !Global_3381)
	{
		return;
	}
	if (!bParam3)
	{
		Function_165(iParam0, uParam2, 0);
		(*uParam1)[iParam0] = 1;
	}
	if (Global_3422[iParam040].f_132 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_132])
		{
			Function_164(Global_3422[iParam040].f_132, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_136 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_136])
		{
			Function_164(Global_3422[iParam040].f_136, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_140 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_140])
		{
			Function_164(Global_3422[iParam040].f_140, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_144 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_144])
		{
			Function_164(Global_3422[iParam040].f_144, uParam1, uParam2, 0);
		}
	}
}

void Function_165(int iParam0, var uParam1, bool bParam2) //Position: 0x8ED7 / 36567
{
	struct<4> Var0;
	
	if (!Function_94(iParam0))
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
			Function_205(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_202(Global_30640[0]);
			Function_202(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_200(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_202(Global_30668[0]);
			Function_191(0);
			Function_189(2, 1);
			Function_189(0, 1);
			Function_189(1, 1);
			break;
		
		case 0x00000003:
			Function_202(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_202(Global_30668[0]);
			Function_202(Global_30640[0]);
			Function_187(0, 1);
			Function_187(15, 1);
			Function_187(9, 1);
			Function_187(12, 1);
			Function_187(16, 1);
			Function_189(3, 1);
			break;
		
		case 0x00000005:
			Function_202(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_200(21, bParam2, 4);
			Function_202(Global_30668[0]);
			Function_189(39, 1);
			break;
		
		case 0x00000007:
			Function_202(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_202(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_186(4))
					{
						Function_178(4, 0, 0, 1);
					}
				}
			}
			Function_202(Global_30640[0]);
			Function_202(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_202(Global_30640[0]);
			Function_202(Global_30668[2]);
			Function_243(&(Global_29008[Global_30668[2]]), 32768);
			Function_241(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_200(9, bParam2, 4);
			Function_202(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_202(Global_30640[0]);
			Function_202(Global_30658[0]);
			Function_243(&(Global_29008[Global_30658[0]]), 32768);
			Function_241(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_202(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_202(Global_30640[0]);
			Function_202(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_202(Global_30640[1]);
			Function_202(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_202(Global_30679[0]);
			Function_202(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_202(Global_30658[5]);
			Function_202(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_200(21, bParam2, 4);
			Function_202(Global_30640[4]);
			Function_202(Global_30658[4]);
			Function_177(&Global_76847, 0x2000000);
			Function_177(&Global_76847, 0x4000000);
			Function_177(&Global_76847, 4096);
			Function_177(&Global_76847, 8);
			Function_177(&Global_76847, 8388608);
			Function_177(&Global_76847, 524288);
			Function_177(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_202(Global_30640[4]);
			Function_202(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_241(&(Global_29008[Global_30640[4]]), 256);
			Function_202(Global_30640[4]);
			Function_202(Global_30658[0]);
			Function_243(&(Global_29008[Global_30658[0]]), 32768);
			Function_241(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_202(Global_30640[0]);
			Function_202(Global_30640[5]);
			Function_200(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_202(Global_30658[3]);
			Function_243(&(Global_29008[Global_30658[3]]), 32768);
			Function_241(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_200(9, bParam2, 4);
			Function_202(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_243(&(Global_29008[Global_30679[1]]), 32768);
			Function_202(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_200(12, bParam2, 4);
			Function_241(&(Global_29008[Global_30679[1]]), 256);
			Function_202(Global_30668[3]);
			Function_202(Global_30693[0]);
			Function_202(Global_30685[0]);
			Function_191(4);
			Function_187(13, 1);
			Function_187(1, 1);
			Function_187(18, 1);
			Function_189(34, 1);
			Function_189(44, 1);
			Function_189(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_200(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_202(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_202(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_202(Global_30693[0]);
			Function_202(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_202(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_202(Global_30685[0]);
			Function_202(Global_30693[0]);
			Function_202(Global_30693[1]);
			Function_202(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_200(23, bParam2, 3);
			Function_187(23, 1);
			Function_202(Global_30685[0]);
			Function_202(Global_30685[2]);
			Function_243(&(Global_29008[Global_30685[2]]), 32768);
			Function_241(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_200(19, bParam2, 4);
			Function_202(Global_30685[0]);
			Function_202(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_200(24, bParam2, 3);
			Function_187(24, 1);
			Function_202(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_202(Global_30685[0]);
			Function_202(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_202(Global_30693[12]);
			Function_202(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_202(Global_30693[12]);
			Function_202(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_200(25, bParam2, 10);
			Function_202(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_202(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_202(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_200(13, bParam2, 4);
			Function_202(Global_30693[2]);
			Function_202(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_186(8))
				{
					Function_178(8, 0, 0, 1);
				}
			}
			Function_202(Global_30685[0]);
			Function_191(9);
			Function_187(7, 1);
			Function_187(11, 1);
			Function_187(3, 1);
			Function_187(20, 1);
			Function_189(57, 1);
			break;
		
		case 0x0000002A:
			Function_200(2, bParam2, 4);
			Function_202(Global_30717[0]);
			Function_202(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_202(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_202(Global_30717[0]);
			Function_202(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_202(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_202(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_202(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_200(17, bParam2, 4);
			Function_202(Global_30723[0]);
			Function_202(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_175(15))
				{
					Function_169(15, 0, 1);
				}
			}
			Function_241(&(Global_29008[Global_30717[1]]), 256);
			Function_191(11);
			Function_202(Global_30717[1]);
			Function_202(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_202(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_202(Global_30717[1]);
			Function_202(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_202(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_202(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_202(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_202(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_202(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_202(Global_30717[1]);
			Function_166(11);
			Function_191(12);
			Global_16537[1121].f_40 = 0;
			Function_189(56, 1);
			if (!bParam2)
			{
				if (!Function_186(9))
				{
					Function_178(9, 0, 0, 0);
				}
				if (!Function_186(10))
				{
					Function_178(10, 0, 0, 1);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_147(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_166(int iParam0) //Position: 0x97C7 / 38855
{
	bool bVar0;
	
	if (!Function_136(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_168(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_168(Global_16537[iParam021].f_72, 0);
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
			Function_167(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_167(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x9936 / 39222
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
		Function_38(Function_39(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_38(Function_39(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_38(StackVal);
				vVar1 = { StackVal, StackVal, Function_38(StackVal) };
				if (Function_37(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

void Function_168(bool bParam0, bool bParam1) //Position: 0x9A3C / 39484
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

void Function_169(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9A90 / 39568
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_174(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_175(bParam0))
	{
		if (!Function_186(bParam0))
		{
			Function_178(bParam0, 1, 0, 0);
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
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, false, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_173(457, 1, 0, 0);
		Function_172(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_223(0, 0, 1, 1))
			{
				Function_105(1);
				Function_171(1, 0);
			}
			else
			{
				Function_170();
			}
		}
	}
	return;
}

void Function_170() //Position: 0x9C2E / 39982
{
	return;
}

void Function_171(int iParam0, int iParam1) //Position: 0x9C34 / 39988
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = iParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_231())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_172(bool bParam0, int iParam1) //Position: 0x9C76 / 40054
{
	if (!Function_174(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

int Function_173(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x9CCB / 40139
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
	Function_131(iParam0, TO_FLOAT(bParam1), 1);
	Function_130(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_119(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

bool Function_174(int iParam0) //Position: 0x9EEB / 40683
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_175(int iParam0) //Position: 0x9F01 / 40705
{
	if (!Function_174(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_176(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_176(int iParam0, int iParam1) //Position: 0x9F52 / 40786
{
	int iVar0;
	
	if (!Function_174(iParam0))
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

void Function_177(var uParam0, int iParam1) //Position: 0x9F7F / 40831
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_178(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x9F8E / 40846
{
	struct<8> Var0;
	
	if (!Function_174(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_185(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_186(bParam0))
	{
		Function_173(456, 1, 0, 0);
		Function_172(bParam0, 2);
		if (bParam2)
		{
			if (!Function_223(0, 0, 1, 1))
			{
				Function_105(1);
				Function_171(1, 5);
			}
			else
			{
				Function_170();
			}
		}
		Function_179(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_46() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_46() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_61(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_34(Global_76846, 2))
		{
			Function_28(Global_34573, 2, 1, 0);
		}
	}
}

void Function_179(bool bParam0) //Position: 0xA0D8 / 41176
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
			if (Function_183(bParam0, Function_184(bVar24)))
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
			if (Function_183(bParam0, Function_184(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_182(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_181(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_180(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_180(int iParam0) //Position: 0xA288 / 41608
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_174(iParam0))
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

void Function_181(bool bParam0, bool bParam1) //Position: 0xA2DF / 41695
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

var Function_182(int iParam0) //Position: 0xA304 / 41732
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_174(iParam0))
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

bool Function_183(bool bParam0, int iParam1) //Position: 0xA35A / 41818
{
	int iVar0;
	
	if (!Function_174(bParam0))
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

int Function_184(bool bParam0) //Position: 0xA3B9 / 41913
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_185(int iParam0) //Position: 0xA3C5 / 41925
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_186(int iParam0) //Position: 0xA3E1 / 41953
{
	if (!Function_174(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_176(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_187(int iParam0, int iParam1) //Position: 0xA433 / 42035
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_188(iParam0, iParam1);
	Function_28(Global_34573, 1, 4, 1);
	return 1;
}

int Function_188(int iParam0, int iParam1) //Position: 0xA4A6 / 42150
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_189(int iParam0, int iParam1) //Position: 0xA502 / 42242
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_190(iParam0, iParam1);
	Function_28(Global_34573, 1, 4, 1);
	return 1;
}

int Function_190(int iParam0, int iParam1) //Position: 0xA573 / 42355
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_191(int iParam0) //Position: 0xA5CD / 42445
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_136(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_199(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_199(Global_16537[iParam021].f_72, 0);
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
			Function_173(468, 1, 0, 0);
			Function_198(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_61("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_167(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_178(14, 1, 0, 0);
				Function_192(14, 1, 0, 0, 0);
			}
			if (!Function_223(0, 0, 1, 1))
			{
				Function_105(1);
				Function_171(1, 6);
			}
			else
			{
				Function_170();
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
			Function_61("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_173(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_198(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_192(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0xA879 / 43129
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_174(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_185(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_176(bParam0, 2))
	{
		Function_173(456, 1, 0, 0);
		Function_172(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_61(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_183(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_172(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_223(0, 0, 1, 1))
			{
				Function_105(1);
				Function_171(1, 0);
			}
			else
			{
				Function_170();
			}
		}
		Function_179(bParam0);
		if (StackVal && !Function_69(((((!Function_46() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_69((((Function_46() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_34(Global_76846, 2))
		{
			Function_28(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_194();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_193(3, bParam1);
				break;
			
			case 0x00000005:
				Function_193(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_193(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_193(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_193(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_193(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_198(2, 24);
				break;
			
			case 0x00000003:
				Function_198(2, 25);
				break;
			
			case 0x0000000F:
				Function_198(2, 26);
				break;
			
			case 0x0000000D:
				Function_198(2, 27);
				break;
			
			case 0x0000000E:
				Function_198(2, 28);
				break;
			}
	}
}

void Function_193(int iParam0, bool bParam1) //Position: 0xAB08 / 43784
{
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	return;
	return;
}

void Function_194() //Position: 0xAB67 / 43879
{
	if (Function_174(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_197(Global_28180);
			Global_28180.f_8 = Function_195(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_197(Global_28180);
			Global_28180.f_8 = Function_195(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_195(int iParam0, int iParam1) //Position: 0xABE2 / 44002
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
					if (Function_242(6, 0) || Function_242(12, 0))
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
					vVar0 = { -2177,057f, 16,426f, 2626,285f };
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
					if (Function_196(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_242(5, 0))
					{
						vVar0 = { -4120,147f, 18,356f, 3039,531f };
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
					vVar0 = { -4178,186f, 32,616f, 4582,207f };
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
					if (Function_196(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_196(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_196(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_196(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_242(26, 0))
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
					if (Function_196(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_196(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_196(27) && iVar18)
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
					if (Function_196(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_196(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_196(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_196(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_242(17, 0) && iVar15)
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
					if (Function_196(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_242(6, 0) && Function_196(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_196(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_242(9, 0) && Function_196(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_196(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_242(8, 0) && iVar19)
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
	if (Function_41(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_41(StackVal, StackVal, vVar3))
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
	if (!Function_41(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_196(int iParam0) //Position: 0xB7D3 / 47059
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_197(int iParam0) //Position: 0xB7E8 / 47080
{
	int iVar0;
	int iVar1;
	
	if (!Function_174(iParam0))
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

void Function_198(int iParam0, bool bParam1) //Position: 0xB837 / 47159
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

void Function_199(bool bParam0, bool bParam1) //Position: 0xB89E / 47262
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

void Function_200(bool bParam0, bool bParam1, int iParam2) //Position: 0xB8EF / 47343
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_201(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_205(bParam0, 0, 0);
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

bool Function_201(int iParam0, int iParam1) //Position: 0xB95D / 47453
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_202(int iParam0) //Position: 0xB970 / 47472
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_204(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_243(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_173(473, 1, 0, 0);
		iVar0 = Function_203(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_173(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_173(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_173(476, 1, 0, 0);
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
		Function_198(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_198(7, 30);
	}
	if (Function_128(473) <= Function_129(473))
	{
		if (!Function_231())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_203(int iParam0) //Position: 0xBA6F / 47727
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_42(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_29155[iParam010];
		}
		else
		{
			iVar0 = Global_29155[iParam010];
			iVar0 = Global_29155[iVar010];
		}
	}
	return iVar0;
}

bool Function_204(var uParam0, int iParam1) //Position: 0xBAC7 / 47815
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_205(bool bParam0, bool bParam1, int iParam2) //Position: 0xBAE3 / 47843
{
	if (!Function_206(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_12(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_12(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_12(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_206(int iParam0) //Position: 0xBB3A / 47930
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_207() //Position: 0xBB4C / 47948
{
	Function_208(512);
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

void Function_208(int iParam0) //Position: 0xBB88 / 48008
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_209(int iParam0, int iParam1) //Position: 0xBB9B / 48027
{
	if (!Function_216(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

void Function_210(int iParam0) //Position: 0xBBB6 / 48054
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
			Function_211(4, 0, 0);
		}
	}
	return;
}

void Function_211(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBC1D / 48157
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
	else if (StackVal || StackVal != 12 != 20)
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
		bVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, bParam2);
		Function_72(Global_16524, bVar0, 1);
	}
	return;
}

int Function_212(bool bParam0) //Position: 0xBCFA / 48378
{
	if (!Function_213(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

bool Function_213(int iParam0) //Position: 0xBD15 / 48405
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_214(int iParam0) //Position: 0xBD2C / 48428
{
	if (!Function_213(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 12) & 255;
}

struct<160> Function_215(var uParam0, int iParam1) //Position: 0xBD4C / 48460
{
	int iVar0;
	struct<40> Var1;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (StackVal == iParam1)
		{
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0[iVar040];
		}
		iVar0++;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var1;
}

bool Function_216(int iParam0) //Position: 0xBD86 / 48518
{
	if (!Function_213(iParam0))
	{
		return 0;
	}
	if (!Function_217(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_217(int iParam0) //Position: 0xBDAA / 48554
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_218(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBDBF / 48575
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_222(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_219(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_219(bParam0, bParam1, bParam2, 4294967295);
}

int Function_219(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xBE1D / 48669
{
	var uVar0;
	
	if (!Function_221(bParam2))
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
	uVar0 = Function_222(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_220(uVar0);
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

int Function_220(int iParam0) //Position: 0xBF72 / 49010
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

bool Function_221(int iParam0) //Position: 0xBFB0 / 49072
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_222(int iParam0, int iParam1, int iParam2) //Position: 0xBFC5 / 49093
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_223(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xBFE5 / 49125
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

bool Function_224(int iParam0) //Position: 0xC08B / 49291
{
	return IS_OBJECT_VALID(Function_225(iParam0));
}

var Function_225(int iParam0) //Position: 0xC099 / 49305
{
	return iParam0->f_28;
}

void Function_226(int iParam0, int iParam1) //Position: 0xC0A3 / 49315
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
			Function_227(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_227(int iParam0) //Position: 0xC125 / 49445
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

int Function_228(int iParam0) //Position: 0xC173 / 49523
{
	if (!Function_42(iParam0))
	{
		return 0;
	}
	return Function_204(&(Global_29008[iParam0]), 2048);
}

int Function_229(int iParam0) //Position: 0xC191 / 49553
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_230(var uParam0) //Position: 0xC1AF / 49583
{
	int iVar0;
	
	if (!Global_30842[5])
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		PRINTSTRING(UI_GET_STRING(uParam0[iVar040] + 12));
		PRINTSTRING(" - ");
		switch (Function_93(StackVal))
		{
			case 0x00000003:
				PRINTSTRING("nCompleted");
				break;
			
			case 0x00000004:
				PRINTSTRING("Completed(Cheated)");
				break;
			
			case 0x00000000:
				if (Function_92(uParam0[iVar040]))
				{
					PRINTSTRING("Available to run");
				}
				else
				{
					PRINTSTRING("Can't run (conditions not met) - ");
				}
				break;
			
			case 0x00000002:
				PRINTSTRING("Currently running");
				break;
			
			default:
				PRINTSTRING("UNKNOWN");
				break;
		}
		PRINTNL();
		iVar0++;
	}
	return;
}

bool Function_231() //Position: 0xC2BC / 49852
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_232() //Position: 0xC2C5 / 49861
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar2 = UNK_0x191658C0();
	PRINTSTRING("TEST: Running External Script: ");
	PRINTSTRING(bVar2);
	PRINTNL();
	if (IS_STRING_VALID(bVar2))
	{
		if (DOES_SCRIPT_EXIST(bVar2))
		{
			bVar3 = LAUNCH_NEW_SCRIPT(bVar2, 0);
			fVar0 = GET_CURRENT_GAME_TIME();
			while ((!IS_SCRIPT_VALID(bVar3) && !bVar1) && !IS_EXITFLAG_SET())
			{
				WAIT(false);
				if ((GET_CURRENT_GAME_TIME() - fVar0) <= 1.0f)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				LOG_ERROR("TEST: CANNOT MOUNT CUSTOM SCRIPT FOR AUTOMATED TESTER");
				PRINTSTRING("TEST: CANNOT MOUNT SCRIPT: ");
				PRINTSTRING(bVar2);
				PRINTNL();
			}
			fVar0 = GET_CURRENT_GAME_TIME();
			while (IS_SCRIPT_VALID(bVar3) && !IS_EXITFLAG_SET())
			{
				WAIT(false);
			}
		}
		else
		{
			LOG_ERROR("TEST: CANNOT FIND CUSTOM SCRIPT FOR AUTOMATED TESTER");
			PRINTSTRING("TEST: CANNOT FIND SCRIPT: ");
			PRINTSTRING(bVar2);
			PRINTNL();
		}
	}
	PRINTSTRING("TEST: External Script Complete");
	PRINTNL();
	LOG_ERROR("TEST: COMPLETE");
	Global_62481 = 4294967197;
	Global_62482 = 0;
	return;
}

void Function_233() //Position: 0xC46D / 50285
{
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), true);
	Function_240(4294967295, 4294967295);
	Function_237();
	Global_62478 = 1;
	PRINTSTRING("TEST: Currently Testing Region 0 - FRONTIER");
	PRINTNL();
	if (Global_62482 > 0 || Global_62482 <= Global_3422)
	{
		Global_62481 = 4294967197;
		Global_62482 = 0;
		return;
	}
	Function_235();
	Global_62478 = 1;
	Function_234();
	LAUNCH_NEW_SCRIPT("content/scripting/DesignerDefined/AutomatedTester/MissionTester", 0);
	return;
}

int Function_234() //Position: 0xC528 / 50472
{
	bool bVar0;
	
	bVar0 = UNK_0x32D1DEB0();
	if (IS_STRING_VALID(bVar0))
	{
		if (STRINGS_ARE_EQUAL(bVar0, "Single"))
		{
			return 1;
		}
	}
	return 0;
}

void Function_235() //Position: 0xC54F / 50511
{
	Function_236(25, 2);
	return;
}

void Function_236(int iParam0, int iParam1) //Position: 0xC55B / 50523
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "HEADERBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "FOOTERBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nHEADERWIN");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "POINTER");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

void Function_237() //Position: 0xC759 / 51033
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_239())
	{
		Function_238(10, 3);
	}
	else
	{
		Function_235();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_12(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_12());
	UI_POP("nDebugMenu");
	return;
}

void Function_238(int iParam0, int iParam1) //Position: 0xC7A4 / 51108
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

bool Function_239() //Position: 0xC8DB / 51419
{
	if (Global_3380)
	{
		return 1;
	}
	if (Global_3382)
	{
		return 1;
	}
	if (Global_3392)
	{
		return 1;
	}
	if (Global_3384)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(Global_79344))
	{
		switch (Global_79349.f_16)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_69(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void Function_240(int iParam0, int iParam1) //Position: 0xC942 / 51522
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

void Function_241(var uParam0, int iParam1) //Position: 0xCA79 / 51833
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_242(int iParam0, bool bParam1) //Position: 0xCA90 / 51856
{
	int iVar0;
	
	iVar0 = Function_64(iParam0);
	if (!Function_213(iVar0))
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

void Function_243(var uParam0, int iParam1) //Position: 0xCACD / 51917
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_244(int iParam0) //Position: 0xCADC / 51932
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: CompanionsList is full.");
		return;
	}
	if (Global_8492[iParam014].f_16)
	{
		STREAMING_EVICT_ACTOR(StackVal, 4294967295);
	}
	if (IS_ACTOR_VALID(StackVal))
	{
		DESTROY_ACTOR(StackVal);
	}
	if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
	{
		DESTROY_PERS_CHAR(Global_8492[iParam014]);
	}
	return;
}

