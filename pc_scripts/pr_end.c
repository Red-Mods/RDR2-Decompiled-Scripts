//Decompiled with MagicRDR v1.0
//Function Count : 251
//Statics Count : 68
//Natives Count : 284
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
	var uLocal_45 = 0;
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
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = false;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	Global_43786 = 4;
	iLocal_62 = &iScriptParam_0;
	while (!IS_EXITFLAG_SET())
	{
		switch (iLocal_64)
		{
			case 0x00000000:
				bLocal_65 = false;
				Function_250(12);
				Function_250(11);
				Function_250(13);
				iLocal_64 = 1;
				break;
			
			case 0x00000001:
				Function_249(&(Global_43791[iScriptParam_0]), 4);
				bLocal_65 = false;
				iLocal_64 = 2;
				break;
			
			case 0x00000002:
				if (!Function_248(57, 0))
				{
					Function_247(&(Global_43791[Global_46722[3]]), 1024);
					Function_247(&(Global_43791[Global_46722[4]]), 1);
					Function_247(&(Global_43791[Global_46722[4]]), 2);
					iLocal_64 = 3;
					bLocal_65 = false;
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				else
				{
					bLocal_65 = Function_4(&iLocal_4, 1);
				}
				break;
			
			case 0x00000003:
				break;
		}
		WAIT(bLocal_65);
	}
	Function_1(&iLocal_4);
	Function_247(&(Global_43791[iLocal_62]), 64);
	Function_247(&(Global_43791[iLocal_62]), 4);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(struct<28>[] Param0) //Position: 0xED / 237
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Param0[iVar028].f_132)
		{
			Function_2(&(Param0[iVar028]), iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_2(struct<181> Param0) //Position: 0x120 / 288
{
	if (!Param0.f_132)
	{
		return;
	}
	switch (Param0.f_152)
	{
		case 0x00000002:
			*(&Param0 + 8) = 4294967295;
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000003:
		case 0x00000005:
		case 0x00000004:
			Param0.f_180 = 0;
			if (Param0.f_152 == 5)
			{
				Param0.f_48 = FLOOR(GET_CURRENT_GAME_TIME());
			}
			if (IS_BLIP_VALID(&Param0 + 144))
			{
				REMOVE_BLIP(&Param0 + 144);
			}
			if ((IS_OBJECT_VALID(&Param0 + 64) && iParam1 == 11) && iParam1 == 54)
			{
				if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
					{
						if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
						{
							GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
						}
					}
				}
				DESTROY_OBJECT(&Param0 + 64);
			}
			if (Param0.f_52)
			{
				STREAMING_EVICT_GRINGO(Param0.f_48);
				Param0.f_52 = 0;
			}
			if (IS_OBJECT_VALID(&Param0 + 72))
			{
				Function_3(&Param0 + 72);
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 104))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 104);
			}
			break;
	}
	Param0.f_132 = 0;
	return;
}

void Function_3(int iParam0) //Position: 0x237 / 567
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&iParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&iParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&iParam0, "voldestroy"))
					{
						DESTROY_OBJECT(&uVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(&uVar0);
				}
			}
		}
		DESTROY_OBJECT(&iParam0);
	}
	return;
}

int Function_4(struct<28>[] Param0, bool bParam1) //Position: 0x2CD / 717
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<153> Var3;
	
	iVar1 = 1000;
	if (Global_98250)
	{
		if (!DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "launchedmissiontester"))
		{
			if (Global_98254 >= 4294967295)
			{
				LOG_ERROR("launching mission tester");
				Function_239();
			}
			else if (Global_98253 == 4294967294)
			{
				Function_238();
			}
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "launchedmissiontester", true);
			return iVar1;
		}
	}
	if (!Global_47312 != 0)
	{
		iVar0 = 0;
		while (iVar0 < (Param0 - 1))
		{
			if (IS_SCRIPT_VALID(&Param0[iVar028] + 160))
			{
				TERMINATE_SCRIPT(&Param0[iVar028] + 160);
			}
			iVar0++;
		}
		Global_47312 = 0;
	}
	Function_237(&Param0);
	if (((Global_6646 || Global_6650) || Global_6647) || Function_236(2048))
	{
		Function_1(&Param0);
		return iVar1;
	}
	if (Global_6625)
	{
		Function_1(&Param0);
		return iVar1;
	}
	if (Global_6635)
	{
		Function_1(&Param0);
		return iVar1;
	}
	if (Global_6627)
	{
		Function_1(&Param0);
		if (Global_6626)
		{
			Global_6626 = 0;
		}
		return iVar1;
	}
	if (Global_6623)
	{
		Function_1(&Param0);
		if (Global_6622)
		{
			Global_6622 = 0;
		}
		return iVar1;
	}
	if (Global_6638 || Global_6639)
	{
		return iVar1;
	}
	if (!Global_6617 && bParam1)
	{
		return iVar1;
	}
	if (!bParam1 && Function_235(Global_43789))
	{
		Function_1(&Param0);
		return iVar1;
	}
	if (Global_6622)
	{
		Function_1(&Param0);
		Global_6623 = 1;
		Function_233(1, 0);
		return iVar1;
	}
	if (Global_6626)
	{
		Function_1(&Param0);
		Global_6627 = 1;
		Function_233(0, 0);
		return iVar1;
	}
	if (Global_99146 && !Function_231(&Global_99130))
	{
		Function_1(&Param0);
		return iVar1;
	}
	if ((Function_230(1, 0, 0, 5) && !Global_6627) && !Global_6623)
	{
		Function_1(&Param0);
		return iVar1;
	}
	if (bParam1)
	{
		if (!Global_47341 != 0)
		{
			iVar2 = Function_225(StackVal, StackVal, Global_47341);
			if (Function_223(iVar2))
			{
				Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_222(&Param0, iVar2) };
				if (!Var3.f_152 != 0)
				{
					Function_97(&Var3, 0, 0, 0);
				}
			}
			Global_47341 = 0;
		}
	}
	if (Global_53524.f_36 && Global_6607)
	{
		if (Function_96(Global_53524.f_20))
		{
			if (!Global_6667[Global_53524.f_2028].f_152 != 0)
			{
				Function_97(&(Global_6667[Global_53524.f_2028]), 0, 1, 1);
				Global_53524.f_36 = 0;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Param0[iVar028] != Global_43786 || !bParam1)
		{
			Function_5(&(Param0[iVar028]), iVar0, bParam1);
		}
		iVar0++;
	}
	if ((Global_39873 + 5.0f) - 1.0f) > GET_CURRENT_GAME_TIME()
	{
		Global_6649 = 0;
	}
	return iVar1;
}

void Function_5(struct<209> Param0) //Position: 0x57D / 1405
{
	int iVar0;
	char* cVar1[32];
	bool bVar9;
	bool bVar10;
	struct<2> Var11;
	float fVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	
	if (Param0.f_152 == 0)
	{
		return;
	}
	if (!bParam2)
	{
		if (!Global_43789 != Param0.f_112)
		{
			Function_2(&Param0, iParam1);
			return;
		}
	}
	if (Function_248(iParam1, 0) && !Param0.f_152 != 2)
	{
		Function_2(&Param0, iParam1);
		return;
	}
	iVar0 = Function_95(StackVal);
	if (iVar0 != 1)
	{
		if (!Function_94(&Param0))
		{
			Function_2(&Param0, iParam1);
			return;
		}
	}
	if (IS_SCRIPT_VALID(&Param0 + 160))
	{
		Function_2(&Param0, iParam1);
		return;
	}
	Param0.f_180 = 0;
	Param0.f_132 = 1;
	switch (Param0.f_152)
	{
		case 0x00000001:
			Param0.f_180 = 1;
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if ((Global_39873 + 5.0f) - 1.0f) > GET_CURRENT_GAME_TIME()
				{
					if (!Function_93(&Param0))
					{
						Param0.f_180 = 0;
						Function_92(&Param0 + 144, 0, Param0.f_184);
						if ((IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)) && iParam1 == 11) && iParam1 == 54)
						{
							if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
							{
								GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
							}
						}
					}
					else if (Function_84(&Param0))
					{
						bVar10 = true;
						if (IS_OBJECT_VALID(&Param0 + 72))
						{
							if (Global_6657)
							{
								bVar10 = false;
							}
						}
						if (bVar10)
						{
							Param0.f_180 = 0;
							Function_92(&Param0 + 144, 0, Param0.f_184);
							if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
							{
								if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
								{
									if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
									{
										GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
									}
								}
							}
						}
					}
					else
					{
						if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
						{
							if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
							{
								if (!GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
								{
									GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), true);
								}
							}
						}
						Param0.f_180 = 1;
						Function_92(&Param0 + 144, 1, Param0.f_184);
						if (Function_83(&Param0 + 184, 4096))
						{
							Function_82(&Param0 + 184, 4096);
						}
					}
					fVar13 = Function_81(StackVal, StackVal, Global_54078, *(&Param0 + 88));
					if (!Param0.f_168 && !Param0.f_208)
					{
						if (!IS_OBJECT_VALID(&Param0 + 64) && UNK_0x214AFB8C(Param0.f_48))
						{
							if (!STREAMING_IS_GRINGO_LOADED(Param0.f_48))
							{
								if (!Param0.f_52)
								{
									STREAMING_REQUEST_GRINGO(Param0.f_48);
									Param0.f_52 = 1;
								}
							}
							else if (IS_LAYOUTREF_VALID(&Global_10992))
							{
								Var11 = *(&Param0 + 120);
								*(&Param0 + 64) = CREATE_GRINGO_IN_LAYOUT_BY_ID(StackVal, &Global_10992, Function_80(), Param0.f_48, Var11, Vector(0.0f, 0.0f, 0.0f));
								if (fVar13 > 175.0f)
								{
									Function_82(&Param0 + 184, 8388608);
								}
								else
								{
									Function_79(&Param0 + 184, 8388608);
								}
							}
						}
					}
					if ((((!IS_OBJECT_VALID(&Param0 + 72) && (!Param0.f_172 || Param0.f_180)) && ((!iParam1 != 14 || fVar13 < 100.0f) || Global_6649)) && ((fVar13 < 7,5f || (Param0.f_172 && Param0.f_180)) || Global_6649)) && (!Function_83(&Param0 + 184, 1048576) || Param0.f_180))
					{
						Function_72(&Param0);
						if (Param0.f_184 & 524288 >= 0)
						{
							Function_71(4194304);
						}
						if (Param0.f_180)
						{
							if (IS_BLIP_VALID(&Param0 + 144))
							{
								REMOVE_BLIP(&Param0 + 144);
							}
							*(&Param0 + 72) = Function_70(StackVal, StackVal, &Global_10992, &Param0 + 16, *(&Param0 + 88), Vector(0.0f, 0.0f, 0.0f), &Global_54076, Param0.f_100, 0, 3, Param0.f_136, 3, 1, 3212836864, 3212836864, 1);
							*(&Param0 + 144) = GET_BLIP_ON_OBJECT(&Param0 + 72);
						}
						else if (!IS_BLIP_VALID(&Param0 + 144))
						{
							*(&Param0 + 144) = ADD_BLIP_FOR_COORD(&Param0 + 88, Param0.f_136, 0, 2, 0);
						}
						SET_BLIP_PRIORITY(&Param0 + 144, 3);
						Function_92(&Param0 + 144, Param0.f_180, Param0.f_184);
					}
					else if (!Param0.f_180 && IS_OBJECT_VALID(&Param0 + 72))
					{
						if (IS_BLIP_VALID(&Param0 + 144))
						{
							REMOVE_BLIP(&Param0 + 144);
						}
						Function_3(&Param0 + 72);
						*(&Param0 + 144) = ADD_BLIP_FOR_COORD(&Param0 + 88, Param0.f_136, 0, 2, 0);
						SET_BLIP_PRIORITY(&Param0 + 144, 3);
						Function_92(&Param0 + 144, Param0.f_180, Param0.f_184);
					}
					else if (!Param0.f_180 && !IS_BLIP_VALID(&Param0 + 144))
					{
						*(&Param0 + 144) = ADD_BLIP_FOR_COORD(&Param0 + 88, Param0.f_136, 0, 2, 0);
						SET_BLIP_PRIORITY(&Param0 + 144, 3);
						Function_92(&Param0 + 144, Param0.f_180, Param0.f_184);
					}
					if ((!Param0.f_168 && !Param0.f_180) && iVar0 == 1)
					{
						if (fVar13 > 5.0f)
						{
							if (!Param0.f_172)
							{
								Function_65(&Param0);
								if (IS_OBJECT_VALID(&Param0 + 72))
								{
									Function_3(&Param0 + 72);
									*(&Param0 + 144) = ADD_BLIP_FOR_COORD(&Param0 + 88, Param0.f_136, 0, 2, 0);
									SET_BLIP_PRIORITY(&Param0 + 144, 3);
									Function_92(&Param0 + 144, Param0.f_180, Param0.f_184);
								}
								Param0.f_172 = 1;
							}
						}
						else if (Param0.f_172)
						{
							Param0.f_172 = 0;
						}
					}
					else if ((Function_83(&Param0 + 184, 4194304) && !Param0.f_168) && Param0.f_180)
					{
						if (fVar13 > 5.0f && !Function_83(&Param0 + 184, 8388608))
						{
							Function_61("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
						}
					}
					if ((!Param0.f_168 && Param0.f_180) && iVar0 == 1)
					{
						if ((!Param0.f_176 && IS_OBJECT_VALID(&Param0 + 72)) && fVar13 > 5.0f)
						{
							if (IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
							{
								Function_61("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
								Param0.f_176 = 1;
							}
						}
					}
				}
				else
				{
					Param0.f_180 = 0;
				}
			}
			else
			{
				Param0.f_180 = 0;
			}
			break;
		
		case 0x00000004:
			if (!IS_ACTOR_VALID(&Global_54076))
			{
				Param0.f_180 = 0;
				return;
			}
			if ((Global_39873 + 5.0f) - 1.0f) < GET_CURRENT_GAME_TIME()
			{
				Param0.f_180 = 0;
				return;
			}
			if (!IS_VOLUME_VALID(&Param0 + 80))
			{
				Param0.f_180 = 0;
				return;
			}
			if (!Function_93(&Param0))
			{
				Param0.f_180 = 0;
				Function_92(&Param0 + 144, 0, Param0.f_184);
				if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
					{
						if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
						{
							GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
						}
					}
				}
			}
			else if (Function_84(&Param0))
			{
				bVar10 = true;
				if (IS_OBJECT_VALID(&Param0 + 80))
				{
					if (Global_6657)
					{
						bVar10 = false;
					}
				}
				if (bVar10)
				{
					Param0.f_180 = 0;
					Function_92(&Param0 + 144, 0, Param0.f_184);
					if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
					{
						if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
						{
							if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
							{
								GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
							}
						}
					}
				}
			}
			else
			{
				if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
					{
						if (!GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
						{
							GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), true);
						}
					}
				}
				Param0.f_180 = 1;
				Function_92(&Param0 + 144, 1, Param0.f_184);
				if (Function_83(&Param0 + 184, 4096))
				{
					Function_82(&Param0 + 184, 4096);
				}
			}
			fVar13 = Function_81(StackVal, StackVal, Global_54078, *(&Param0 + 88));
			bVar9 = IS_ACTOR_IN_VOLUME(&Global_54076, &Param0 + 80);
			if (!Param0.f_168 && !Param0.f_208)
			{
				if (!IS_OBJECT_VALID(&Param0 + 64) && UNK_0x214AFB8C(Param0.f_48))
				{
					if (!STREAMING_IS_GRINGO_LOADED(Param0.f_48))
					{
						if (!Param0.f_52)
						{
							STREAMING_REQUEST_GRINGO(Param0.f_48);
							Param0.f_52 = 1;
						}
					}
					else if (IS_LAYOUTREF_VALID(&Global_10992))
					{
						Var11 = *(&Param0 + 120);
						*(&Param0 + 64) = CREATE_GRINGO_IN_LAYOUT_BY_ID(StackVal, &Global_10992, Function_80(), Param0.f_48, Var11, Vector(0.0f, 0.0f, 0.0f));
						if (fVar13 > 175.0f)
						{
							Function_82(&Param0 + 184, 8388608);
						}
						else
						{
							Function_79(&Param0 + 184, 8388608);
						}
					}
				}
			}
			if (((!Param0.f_172 && !IS_BLIP_VALID(&Param0 + 144)) && !bVar9) && (!Function_83(&Param0 + 184, 1048576) || Param0.f_180))
			{
				Function_72(&Param0);
				if (Param0.f_184 & 524288 >= 0)
				{
					Function_71(4194304);
				}
				*(&Param0 + 144) = ADD_BLIP_FOR_COORD(&Param0 + 88, Param0.f_136, 0, 2, 0);
				SET_BLIP_PRIORITY(&Param0 + 144, 3);
				Function_92(&Param0 + 144, Param0.f_180, Param0.f_184);
			}
			if (((!IS_OBJECT_VALID(&Param0 + 72) && !bVar9) && Param0.f_180) && (!Function_83(&Param0 + 184, 4194304) || Function_83(&Param0 + 184, 8388608)))
			{
				*(&Param0 + 72) = Function_70(StackVal, StackVal, &Global_10992, &Param0 + 16, *(&Param0 + 88), Vector(0.0f, 0.0f, 0.0f), &Global_54076, 2,5f, 0, 3, 4294967295, 3, 1, 3212836864, 3212836864, 1);
			}
			if (!Param0.f_168 && !Param0.f_180)
			{
				if (IS_OBJECT_VALID(&Param0 + 72))
				{
					Function_3(&Param0 + 72);
				}
				if (bVar9)
				{
					if (!Param0.f_172)
					{
						Param0.f_172 = 1;
						Function_65(&Param0);
					}
				}
				else if (Param0.f_172)
				{
					Param0.f_172 = 0;
				}
			}
			else if ((Function_83(&Param0 + 184, 4194304) && !Param0.f_168) && Param0.f_180)
			{
				if (bVar9 && !Function_83(&Param0 + 184, 8388608))
				{
					Function_61("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if ((!Param0.f_168 && Param0.f_180) && iVar0 == 1)
			{
				if ((!Param0.f_176 && IS_OBJECT_VALID(&Param0 + 72)) && bVar9)
				{
					if (IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
					{
						Function_61("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
						Param0.f_176 = 1;
					}
				}
			}
			break;
		
		case 0x00000005:
			iVar14 = iParam1;
			if (!Function_93(&Param0) || Global_6646)
			{
				Param0.f_180 = 0;
			}
			else
			{
				Param0.f_180 = 1;
			}
			iVar16 = Function_60();
			if (iVar16 != 3 || iVar16 != 4)
			{
				if (Param0.f_184 & 2097152 >= 0)
				{
					bVar15 = true;
				}
			}
			switch (iVar14)
			{
				case 0x00000000:
					bVar17 = Function_59(Param0.f_112, &bVar18, &(Global_98936[iVar14]), 0);
					break;
				
				case 0x00000001:
					bVar17 = Function_59(Param0.f_112, &bVar18, &(Global_98936[iVar14]), 1);
					break;
				
				case 0x00000007:
					bVar17 = Function_58(Param0.f_112, &bVar18, &(Global_98936[iVar14]));
					break;
				
				case 0x00000002:
					bVar17 = Function_56(Param0.f_112, &bVar18, &(Global_98936[iVar14]));
					break;
				
				case 0x00000008:
					bVar17 = Function_54(Param0.f_112, &bVar18, &(Global_98936[iVar14]));
					break;
				
				case 0x00000004:
					bVar17 = Function_51(Param0.f_112, &bVar18, &(Global_98936[iVar14]));
					break;
				
				case 0x00000005:
					bVar17 = Function_50(Param0.f_112, &bVar18, &(Global_98936[iVar14]));
					break;
			}
			if (iVar14 == 1)
			{
				if (Global_42825 != 1)
				{
					bVar19 = true;
				}
			}
			if (((IS_ACTOR_VALID(&Global_54076) && Function_49(iParam1)) && !bVar15) && !bVar19)
			{
				if (!Param0.f_168 && ((Global_39873 + 5.0f) - 1.0f) > GET_CURRENT_GAME_TIME())
				{
					if (!IS_OBJECT_VALID(&Param0 + 64) && IS_LAYOUTREF_VALID(&Global_46715))
					{
						*(&Param0 + 64) = CREATE_POINT_IN_LAYOUT(StackVal, &Global_46715, Function_80(), *(&Param0 + 88), Vector(0.0f, 0.0f, 0.0f));
					}
				}
				if ((IS_OBJECT_VALID(&Param0 + 64) && !Param0.f_136 != 4294967295) && !bVar15)
				{
					if (!IS_BLIP_VALID(&Param0 + 144))
					{
						*(&Param0 + 144) = ADD_BLIP_FOR_OBJECT(&Param0 + 64, Param0.f_136, 0.0f, 2, 0);
						UNK_0x1E98AFEC(&Param0 + 144, 1);
						SET_BLIP_MAX_DISTANCE(&Param0 + 144, 1,25f);
						SET_BLIP_PRIORITY(&Param0 + 144, true);
					}
				}
				if (IS_BLIP_VALID(&Param0 + 144))
				{
					if (Param0.f_180)
					{
						if (bVar17)
						{
							SET_BLIP_COLOR(&Param0 + 144, 1.0f, 1.0f, 1.0f, 1.0f);
						}
						else
						{
							SET_BLIP_COLOR(&Param0 + 144, 1.0f, 1.0f, 1.0f, 0,3f);
						}
					}
					else
					{
						SET_BLIP_COLOR(&Param0 + 144, 1.0f, 1.0f, 1.0f, 0,75f);
					}
					if (Param0.f_180)
					{
						if (!Function_48(iParam1))
						{
							if (Function_47(StackVal, *(&Param0 + 88), 1,25f))
							{
								if (Function_44(iParam1, 1))
								{
									Function_35(StackVal, Param0.f_112, (1 + iParam1), *(&Param0 + 88), Function_43(Param0.f_184));
									SET_BLIP_BLINK(&Param0 + 144, 1, 0, 10.0f);
								}
							}
						}
					}
				}
				if (!Param0.f_168)
				{
					if (IS_VOLUME_VALID(&Param0 + 80))
					{
						if (IS_POINT_IN_VOLUME(Global_54078, &Param0 + 80))
						{
							bVar20 = true;
						}
					}
					else if (VDIST(Global_54078, *(&Param0 + 88)) > Param0.f_100)
					{
						bVar20 = true;
					}
					if ((bVar18 && bVar15) && !Function_34(Global_119936, 8388608))
					{
						Function_28(&Global_54076, 8388608, 1, 1);
					}
					if (bVar20)
					{
						switch (iVar14)
						{
							case 0x00000000:
								Function_25(Param0.f_112, &Param0 + 48, 0);
								break;
							
							case 0x00000001:
								Function_25(Param0.f_112, &Param0 + 48, 1);
								break;
							
							case 0x00000007:
								Function_23(Param0.f_112, &Param0 + 48);
								break;
							
							case 0x00000002:
								Function_19(Param0.f_112, &Param0 + 48);
								break;
							
							case 0x00000008:
								Function_17(Param0.f_112, &Param0 + 48);
								break;
							
							case 0x00000004:
								Function_15(Param0.f_112, &Param0 + 48);
								break;
							
							case 0x00000005:
								Function_13(Param0.f_112, &Param0 + 48);
								break;
							}
					}
					if (bVar18)
					{
						if (bVar17)
						{
							if (!bVar15)
							{
								if (!Function_8(Function_12(), 0, 0))
								{
									if (GET_PLAYER_ZOOM_STATE(0) == 0)
									{
										if (FABS((StackVal - StackVal)) > 1.0f)
										{
											if (!AI_GLOBAL_IS_DANGER(&Global_54076, 10.0f))
											{
												if (!IS_ACTOR_RIDING_VEHICLE(&Global_54076))
												{
													if (!IS_ACTOR_RIDING(&Global_54076))
													{
														bVar21 = true;
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (bVar21)
					{
						if (!IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 104))
						{
							if (Function_83(&Param0 + 184, 8192))
							{
								if (Function_6() <= Param0.f_196)
								{
									stradd(&cVar1, "NO_", 32);
								}
							}
							stradd(&cVar1, "LAUNCH_", 32);
							stradd(&cVar1, &Param0 + 16, 32);
							*(&Param0 + 104) = ADD_SCRIPT_USE_CONTEXT(&cVar1, 40, "@GENERIC.USE", false, 0, 0, 0, 4294967295, 0);
						}
					}
					else if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 104))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 104);
					}
				}
			}
			else
			{
				if (IS_BLIP_VALID(&Param0 + 144))
				{
					REMOVE_BLIP(&Param0 + 144);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 104))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 104);
				}
			}
			break;
	}
	return;
}

int Function_6() //Position: 0x1451 / 5201
{
	return Function_7(0);
}

int Function_7(int iParam0) //Position: 0x145B / 5211
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

bool Function_8(int iParam0, bool bParam1, bool bParam2) //Position: 0x149C / 5276
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
	if (Function_11(&iParam0))
	{
		return 1;
	}
	if (Function_10(&iParam0))
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
	if (Function_9())
	{
		return 1;
	}
	return 0;
}

bool Function_9() //Position: 0x1560 / 5472
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_10(int iParam0) //Position: 0x1577 / 5495
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_11(bool bParam0) //Position: 0x1583 / 5507
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&bParam0));
}

int Function_12() //Position: 0x1592 / 5522
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_13(bool bParam0, var uParam1) //Position: 0x15A7 / 5543
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar4;
	
	if (!Global_6627)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - uParam1) >= RAND_INT_RANGE(25, 35)
		{
			Function_14(bParam0, 0);
			Function_14(bParam0, 1);
			if (StackVal > Function_81(StackVal, Function_81(StackVal, StackVal, Global_54078, Function_14(bParam0, 0)), Global_54078, Function_14(bParam0, 1)))
			{
				iVar1 = 0;
			}
			else
			{
				iVar1 = 1;
			}
			Function_14(bParam0, iVar1);
			uVar2 = Function_14(bParam0, iVar1);
			uVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_horseshoe", &uVar2, 1.0f, 0);
			if (IS_GRINGO_VALID(&uVar0))
			{
				iVar4 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar0, "UseCase1"));
				if (IS_ACTOR_VALID(&iVar4))
				{
					SAY_SINGLE_LINE_CONTEXT(&iVar4, 268, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					uParam1 = FLOOR(GET_CURRENT_GAME_TIME());
				}
			}
		}
	}
	else
	{
		uParam1 = FLOOR(GET_CURRENT_GAME_TIME());
	}
	return;
}

struct<8> Function_14(int iParam0, int iParam1) //Position: 0x1692 / 5778
{
	if (iParam0 == Global_46816[0])
	{
		if (&iParam1 == 0)
		{
			return StackVal, Vector(-814,7646f, 92,42929f, 2350,04f);
		}
		return StackVal, Vector(-826,37f, 92,361f, 2350,054f);
	}
	if (iParam0 == Global_46796[1])
	{
		if (&iParam1 == 0)
		{
			return StackVal, Vector(-3657,917f, 42,30736f, 2131,19f);
		}
		return StackVal, Vector(-3666,223f, 42,223f, 2139,29f);
	}
	if (iParam0 == Global_46866[1])
	{
		if (&iParam1 == 0)
		{
			return StackVal, Vector(-1709,76f, 8,09067f, 4259,935f);
		}
		return StackVal, Vector(-1721,364f, 8,09067f, 4259,787f);
	}
	if (iParam0 == Global_46914[1])
	{
		LOG_ERROR("Horseshoes beecher's hope has been cut");
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_15(bool bParam0, var uParam1) //Position: 0x17B3 / 6067
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar4;
	
	if (!Global_6627)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - uParam1) >= RAND_INT_RANGE(25, 35)
		{
			bVar1 = RAND_INT_RANGE(false, 6);
			Function_16(bParam0);
			uVar2 = Function_16(bParam0);
			uVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_arm_wrestling", &uVar2, 1.0f, 0);
			if (IS_GRINGO_VALID(&uVar0))
			{
				iVar4 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar0, "UseCase1"));
				if (IS_ACTOR_VALID(&iVar4))
				{
					SAY_SINGLE_LINE_CONTEXT(&iVar4, 232, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					uParam1 = FLOOR(GET_CURRENT_GAME_TIME());
				}
			}
		}
	}
	else
	{
		uParam1 = FLOOR(GET_CURRENT_GAME_TIME());
	}
	return;
}

struct<8> Function_16(int iParam0) //Position: 0x187D / 6269
{
	if (iParam0 == Global_46866[2])
	{
		return StackVal, Vector(-1471,104f, 16,52992f, 3948,271f);
	}
	if (iParam0 == Global_46838[0])
	{
		return StackVal, Vector(-3143,721f, 43,17878f, 3720,842f);
	}
	if (iParam0 == Global_46894[0])
	{
		return StackVal, Vector(-466,5623f, 20,97986f, 3882,657f);
	}
	if (iParam0 == Global_46926[2])
	{
		return StackVal, Vector(-262,932f, 85,11941f, 2119,438f);
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_17(bool bParam0, var uParam1) //Position: 0x192D / 6445
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar4;
	
	if (!Global_6627)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - uParam1) >= RAND_INT_RANGE(25, 35)
		{
			bVar1 = RAND_INT_RANGE(false, 6);
			Function_18(bParam0);
			uVar2 = Function_18(bParam0);
			uVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &uVar2, 1.0f, 0);
			if (IS_GRINGO_VALID(&uVar0))
			{
				iVar4 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar0, "UseCase1"));
				if (IS_ACTOR_VALID(&iVar4))
				{
					SAY_SINGLE_LINE_CONTEXT(&iVar4, 261, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					uParam1 = FLOOR(GET_CURRENT_GAME_TIME());
				}
			}
		}
	}
	else
	{
		uParam1 = FLOOR(GET_CURRENT_GAME_TIME());
	}
	return;
}

struct<8> Function_18(int iParam0) //Position: 0x19FB / 6651
{
	if (iParam0 == Global_46760[0])
	{
		return StackVal, Vector(-2194,388f, 16,57687f, 2592,54f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(161,1002f, 73,83751f, 2294,133f);
	}
	if (iParam0 == Global_46850[0])
	{
		return StackVal, Vector(-4274,772f, 18,07059f, 4453,844f);
	}
	if (iParam0 == Global_46894[3])
	{
		return StackVal, Vector(354,5946f, 76,28807f, 3448,024f);
	}
	if (iParam0 == Global_46926[1])
	{
		return StackVal, Vector(-464,3469f, 152,3559f, 1596,59f);
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_19(int iParam0, int iParam1) //Position: 0x1ACF / 6863
{
	var uVar0;
	bool bVar1;
	var uVar2;
	var uVar4;
	
	if (!Global_6627)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - iParam1) >= RAND_INT_RANGE(25, 35)
		{
			bVar1 = RAND_INT_RANGE(false, 6);
			Function_22(iParam0);
			uVar2 = Function_22(iParam0);
			uVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack_dealer", &uVar2, 1.0f, 0);
			if (IS_GRINGO_VALID(&uVar0))
			{
				uVar4 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar0, "UseCase1"));
				if (IS_ACTOR_VALID(&uVar4))
				{
					if (Function_20(GET_OBJECT_FROM_ACTOR(&uVar4), GET_OBJECT_FROM_ACTOR(&Global_54076)))
					{
						SET_ACTION_NODE_FOR_ACTOR(&uVar4, "blackjack/Fake/Dealer/invite/front");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(&uVar4, "blackjack/Fake/Dealer/invite/back");
					}
					SAY_SINGLE_LINE_CONTEXT(&uVar4, 242, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
				}
			}
		}
	}
	else
	{
		iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
	}
	return;
}

bool Function_20(var uParam0, int iParam1) //Position: 0x1C09 / 7177
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_ACTOR_FROM_OBJECT(&iParam1), &Var0);
	return Function_21(StackVal, &uParam0, Var0);
}

int Function_21(var uParam0, struct<2> Param1) //Position: 0x1C25 / 7205
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	float fVar6;
	
	GET_OBJECT_POSITION(GET_ACTOR_FROM_OBJECT(&uParam0), &Var0);
	uVar2 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Param1, StackVal);
	GET_OBJECT_AXIS(&uParam0, &uVar4, 2);
	fVar6 = VDOT(&uVar2, &uVar4);
	if (fVar6 > 0.0f)
	{
		return 1;
	}
	return 0;
}

struct<8> Function_22(int iParam0) //Position: 0x1C63 / 7267
{
	if (iParam0 == Global_46866[0])
	{
		return StackVal, Vector(-2685,988f, 31,35322f, 4283,588f);
	}
	if (iParam0 == Global_46796[1])
	{
		return StackVal, Vector(-3640,397f, 42,77086f, 2104,753f);
	}
	if (iParam0 == Global_46914[0])
	{
		return StackVal, Vector(719,2065f, 78,4736f, 1312,102f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(171,4703f, 73,74976f, 2224,109f);
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_23(int iParam0, int iParam1) //Position: 0x1D08 / 7432
{
	var uVar0;
	var uVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	var uVar7;
	
	if (!Global_6627)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - iParam1) >= RAND_INT_RANGE(25, 35)
		{
			bVar3 = RAND_INT_RANGE(false, 6);
			bVar5 = bVar3;
			while (bVar5 < 6)
			{
				if (!bVar4)
				{
					Function_24(iParam0, bVar5);
					uVar0 = Function_24(iParam0, bVar5);
					uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_liars_dice", &uVar0, 1.0f, 0);
					if (IS_GRINGO_VALID(&uVar2))
					{
						uVar6 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar2, "UseCase1"));
						if (IS_ACTOR_VALID(&uVar6))
						{
							SAY_SINGLE_LINE_CONTEXT(&uVar6, 274, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
							bVar4 = true;
						}
					}
				}
				bVar5++;
			}
			if (!bVar4)
			{
				bVar5 = false;
				while (bVar5 < (bVar3 - 1))
				{
					Function_24(iParam0, bVar5);
					uVar0 = Function_24(iParam0, bVar5);
					uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_liars_dice", &uVar0, 1.0f, 0);
					if (IS_GRINGO_VALID(&uVar2))
					{
						uVar7 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar2, "UseCase1"));
						if (IS_ACTOR_VALID(&uVar7))
						{
							SAY_SINGLE_LINE_CONTEXT(&uVar7, 274, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
						}
					}
					bVar5++;
				}
			}
		}
	}
	else
	{
		iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
	}
	return;
}

struct<8> Function_24(int iParam0, bool bParam1) //Position: 0x1E9E / 7838
{
	if (iParam0 == Global_46850[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-4288,696f, 26,72937f, 4381,383f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-4289,277f, 26,72937f, 4381,477f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-4289,651f, 26,72937f, 4381,039f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-4289,435f, 26,72937f, 4380,51f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-4288,878f, 26,72937f, 4380,39f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-4288,485f, 26,72937f, 4380,807f);
				break;
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return StackVal, Vector(167,5964f, 73,74156f, 2222,775f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(167,958f, 73,74529f, 2222,327f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(168,5496f, 73,74591f, 2222,387f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(168,7889f, 73,74529f, 2222,935f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(168,4313f, 73,74976f, 2223,425f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(167,8298f, 73,74976f, 2223,35f);
				break;
		}
	}
	else if (iParam0 == Global_46894[2])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-788,6586f, 13,16462f, 3698,422f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-788,4316f, 13,16762f, 3698,957f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-788,7964f, 13,165f, 3699,425f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-789,389f, 13,165f, 3699,35f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-789,6095f, 13,165f, 3698,805f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-789,2333f, 13,165f, 3698,335f);
				break;
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return StackVal, Vector(856,9058f, 77,51558f, 1278,093f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(856,6888f, 77,51558f, 1277,556f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(857,0518f, 77,51558f, 1277,099f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(857,629f, 77,51558f, 1277,148f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(857,8614f, 77,51558f, 1277,699f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(857,4864f, 77,51558f, 1278,173f);
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_25(int iParam0, var uParam1, bool bParam2) //Position: 0x218B / 8587
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	
	if (!Global_6627)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - uParam1) >= RAND_INT_RANGE(25, 35)
		{
			bVar1 = RAND_INT_RANGE(false, 6);
			bVar3 = bVar1;
			while (bVar3 < 6)
			{
				if (!bVar2)
				{
					Function_27(iParam0, bVar3, &bParam2);
					uVar0 = Function_26(StackVal, Function_27(iParam0, bVar3, &bParam2));
					if (IS_GRINGO_VALID(&uVar0))
					{
						uVar4 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar0, "UseCase1"));
						if (IS_ACTOR_VALID(&uVar4))
						{
							if (IS_ACTION_NODE_PLAYING_PARTIAL(&uVar4, "ncard_idle") || IS_ACTION_NODE_PLAYING_PARTIAL(&uVar4, "look_at_cards"))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uVar4, "sit_poker/Fake/look_up");
								SAY_SINGLE_LINE_CONTEXT(&uVar4, 280, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
								uParam1 = FLOOR(GET_CURRENT_GAME_TIME());
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
					Function_27(iParam0, bVar3, &bParam2);
					uVar0 = Function_26(StackVal, Function_27(iParam0, bVar3, &bParam2));
					if (IS_GRINGO_VALID(&uVar0))
					{
						uVar5 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar0, "UseCase1"));
						if (IS_ACTOR_VALID(&uVar5))
						{
							if (IS_ACTION_NODE_PLAYING_PARTIAL(&uVar5, "ncard_idle") || IS_ACTION_NODE_PLAYING_PARTIAL(&uVar5, "look_at_cards"))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uVar5, "sit_poker/Fake/look_up");
								SAY_SINGLE_LINE_CONTEXT(&uVar5, 280, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
								uParam1 = FLOOR(GET_CURRENT_GAME_TIME());
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

var Function_26(var uParam0, int iParam1) //Position: 0x2330 / 9008
{
	return LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_poker", &uParam0, 1.0f, 0);
}

struct<8> Function_27(int iParam0, bool bParam1, bool bParam2) //Position: 0x2372 / 9074
{
	if (iParam0 == Global_46816[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-801,0966f, 92,75807f, 2375,792f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-801,4974f, 92,75435f, 2375,295f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-801,2829f, 92,75435f, 2374,737f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-800,724f, 92,76255f, 2374,656f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-800,3233f, 92,75678f, 2375,122f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-800,5463f, 92,75435f, 2375,677f);
				break;
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return StackVal, Vector(164,353f, 73,75671f, 2230,925f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(164,5807f, 73,82056f, 2231,472f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(164,2043f, 73,75299f, 2231,971f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(163,6548f, 73,76118f, 2231,889f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(163,4103f, 73,76118f, 2231,366f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(163,7511f, 73,75671f, 2230,869f);
				break;
		}
	}
	else if (iParam0 == Global_46760[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-2157,424f, 16,88292f, 2596,033f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-2158,012f, 16,94059f, 2595,997f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-2158,228f, 16,87845f, 2595,416f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-2157,847f, 16,87845f, 2594,96f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-2157,261f, 16,87845f, 2595,042f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-2157,04f, 16,87845f, 2595,596f);
				break;
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		if (&bParam2)
		{
			switch (bParam1)
			{
				case 0x00000000:
					return StackVal, Vector(748,5359f, 82,6927f, 1267,343f);
					break;
				
				case 0x00000001:
					return StackVal, Vector(749,138f, 82,6927f, 1266,645f);
					break;
				
				case 0x00000002:
					return StackVal, Vector(750,045f, 82,6927f, 1266,796f);
					break;
				
				case 0x00000003:
					return StackVal, Vector(750,0344f, 82,6917f, 1267,552f);
					break;
				
				case 0x00000004:
					return StackVal, Vector(749,7606f, 82,6927f, 1268,372f);
					break;
				
				case 0x00000005:
					return StackVal, Vector(748,8501f, 82,6927f, 1268,207f);
					break;
			}
		}
		else
		{
			switch (bParam1)
			{
				case 0x00000000:
					return StackVal, Vector(717,6248f, 78,47099f, 1325,972f);
					break;
				
				case 0x00000001:
					return StackVal, Vector(717,0453f, 78,47099f, 1325,919f);
					break;
				
				case 0x00000002:
					return StackVal, Vector(716,8008f, 78,47099f, 1325,396f);
					break;
				
				case 0x00000003:
					return StackVal, Vector(717,1418f, 78,47099f, 1324,928f);
					break;
				
				case 0x00000004:
					return StackVal, Vector(717,7181f, 78,47099f, 1324,969f);
					break;
				
				case 0x00000005:
					return StackVal, Vector(717,9684f, 78,47099f, 1325,495f);
					break;
				}
		}
	}
	else if (iParam0 == Global_46914[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-138,6693f, 119,2419f, 1344,049f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-139,2573f, 119,2419f, 1343,961f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-139,4945f, 119,2419f, 1343,419f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-139,1212f, 119,2419f, 1342,946f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-138,5368f, 119,2419f, 1343,024f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-138,2953f, 119,2419f, 1343,58f);
				break;
		}
	}
	else if (iParam0 == Global_46866[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-2701,487f, 31,151f, 4278,554f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-2701,713f, 31,151f, 4277,994f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-2701,347f, 31,151f, 4277,538f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-2700,726f, 31,151f, 4277,604f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-2700,508f, 31,151f, 4278,2f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-2700,919f, 31,151f, 4278,653f);
				break;
		}
	}
	else if (iParam0 == Global_46894[2])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-795,5794f, 13,16767f, 3699,937f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-795,8744f, 13,16057f, 3699,083f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-794,9905f, 13,16057f, 3698,687f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-794,196f, 13,16057f, 3699,235f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-794,2787f, 13,16057f, 3700,203f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-795,169f, 13,16057f, 3700,608f);
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_28(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x291E / 10526
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_30(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_29(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_29(char* cParam0) //Position: 0x2993 / 10643
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

bool Function_30(int iParam0, var uParam1, int iParam2) //Position: 0x29CD / 10701
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
		if (Function_32(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_31(uVar0))
		{
			case 0x00000002:
				if (!Function_34(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_31(char* cParam0) //Position: 0x2A49 / 10825
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

int Function_32(int iParam0) //Position: 0x2AEA / 10986
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

void Function_33(int iParam0, int iParam1) //Position: 0x2B27 / 11047
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_34(var uParam0, int iParam1) //Position: 0x2B3D / 11069
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_35(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0x2B50 / 11088
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	struct<2> Var6;
	
	if (!Function_42(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_41(StackVal, Param2))
	{
		return 0;
	}
	iVar2 = Function_40(iParam1);
	iVar1 = 4294967295;
	iVar3 = Function_39(StackVal, Param2);
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal != iParam1 && Global_15863[iVar02] != iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	else
	{
		Function_38(iVar3);
		Var6 = Function_38(iVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_38(StackVal);
				Var4 = Function_38(StackVal);
				if (Function_37(StackVal, StackVal, Var4, Var6))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	if (iVar1 != 4294967295)
	{
		Global_15863[iVar12] = iParam0;
		Global_15863[iVar12].f_4 = iParam1;
		Global_15863[iVar12].f_8 = iVar3;
		Global_15863[iVar12].f_12 = &iParam4;
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_36(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(&(Global_16865[iVar1]), 1.0f, 1.0f, 1.0f, 0,5f);
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_CHANCE");
		}
		else if (iParam1 == 11)
		{
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_HORSEBREAKING");
		}
		else if (iParam1 == 24)
		{
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_CHANCE");
		}
		UNK_0xFF3DB575(&(Global_16865[iVar1]), 1);
		SET_BLIP_PRIORITY(&(Global_16865[iVar1]), true);
		return iVar1;
	}
	return 0;
}

int Function_36(int iParam0) //Position: 0x2D39 / 11577
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

bool Function_37(struct<2> Param0, struct<2> Param2) //Position: 0x2E70 / 11888
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_38(int iParam0) //Position: 0x2E9C / 11932
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	
	bVar2 = iParam0 & 32767;
	bVar3 = SHIFT_RIGHT(iParam0, 15) & 32767;
	Var0 = TO_FLOAT(bVar2);
	Var0.f_8 = TO_FLOAT(bVar3);
	if (iParam0 & 1073741824 == 0)
	{
		Var0 = (Var0 * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		Var0.f_8 = (StackVal * -1.0f);
	}
	return StackVal, Var0;
}

var Function_39(vector3 vParam0) //Position: 0x2EF3 / 12019
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

int Function_40(int iParam0) //Position: 0x2F41 / 12097
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

bool Function_41(char* cParam0) //Position: 0x2FF9 / 12281
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

bool Function_42(int iParam0) //Position: 0x3011 / 12305
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_43(int iParam0) //Position: 0x3027 / 12327
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

bool Function_44(int iParam0, int iParam1) //Position: 0x308F / 12431
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	return Function_45(iVar0, &iParam1);
}

int Function_45(int iParam0, bool bParam1) //Position: 0x30A3 / 12451
{
	bool bVar0;
	struct<8> Var1;
	
	if ((!Global_39380[iParam0] && (!&bParam1 || !Function_46())) && !bVar0)
	{
		switch (iParam0)
		{
			case 0x00000002:
				Global_39380[iParam0] = 1;
				break;
			
			case 0x00000001:
				bVar0 = true;
				Global_39380[iParam0] = 1;
				strcpy(&Var1, "poker", 32);
				break;
			
			case 0x00000003:
				bVar0 = true;
				Global_39380[iParam0] = 1;
				strcpy(&Var1, "nblackjack", 32);
				break;
			
			case 0x00000004:
				Global_39380[iParam0] = 1;
				break;
			
			case 0x00000005:
				bVar0 = true;
				Global_39380[iParam0] = 1;
				strcpy(&Var1, "armwrestle", 32);
				break;
			
			case 0x00000006:
				bVar0 = true;
				Global_39380[iParam0] = 1;
				strcpy(&Var1, "horseshoes", 32);
				break;
			
			case 0x00000007:
				Global_39380[iParam0] = 1;
				break;
			
			case 0x00000008:
				bVar0 = true;
				Global_39380[iParam0] = 1;
				strcpy(&Var1, "nliarsdice", 32);
				break;
			
			case 0x00000009:
				bVar0 = true;
				Global_39380[iParam0] = 1;
				strcpy(&Var1, "fivefinger", 32);
				break;
			
			case 0x0000000A:
				bVar0 = true;
				Global_39380[iParam0] = 1;
				strcpy(&Var1, "nightwatch", 32);
				break;
			
			case 0x0000000B:
				bVar0 = true;
				Global_39380[iParam0] = 1;
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
		if (bVar0 && !&bParam1)
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

bool Function_46() //Position: 0x32EE / 13038
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

bool Function_47(struct<2> Param0, float fParam2) //Position: 0x331B / 13083
{
	return VDIST(Param0, Global_54078) > (GET_RADAR_RADIUS() * &fParam2);
}

bool Function_48(int iParam0) //Position: 0x3335 / 13109
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_39380)
	{
		return 1;
	}
	return Global_39380[iVar0];
}

int Function_49(int iParam0) //Position: 0x3358 / 13144
{
	if (iParam0 >= 4294967295 && iParam0 <= 11)
	{
		return 0;
	}
	return Global_39266[iParam0];
}

int Function_50(int iParam0, bool bParam1, int iParam2) //Position: 0x3374 / 13172
{
	int iVar0;
	var uVar2;
	var uVar3;
	var uVar4;
	float fVar5;
	var uVar6;
	
	if (!IS_OBJECTSET_VALID(&iParam2))
	{
		iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_80(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_14(iParam0, 0);
	iVar0 = Function_14(iParam0, 0);
	if (GET_OBJECTSET_SIZE(&iParam2) > 2)
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iParam2);
	}
	if (IS_OBJECT_VALID(&uVar2))
	{
		uVar3 = GET_GRINGO_FROM_OBJECT(&uVar2);
	}
	else
	{
		uVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_horseshoe", &iVar0, 1.0f, 0);
	}
	Function_14(iParam0, 1);
	iVar0 = Function_14(iParam0, 1);
	if (GET_OBJECTSET_SIZE(&iParam2) > 2)
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iParam2);
	}
	if (IS_OBJECT_VALID(&uVar2))
	{
		uVar4 = GET_GRINGO_FROM_OBJECT(&uVar2);
	}
	else
	{
		uVar4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_horseshoe", &iVar0, 1.0f, 0);
	}
	if (IS_GRINGO_VALID(&uVar3) && IS_GRINGO_VALID(&uVar4))
	{
		if (IS_GRINGO_VALID(&uVar3))
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(&uVar3), &iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(&uVar3), &iParam2);
			}
		}
		if (IS_GRINGO_VALID(&uVar4))
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(&uVar4), &iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(&uVar4), &iParam2);
			}
		}
	}
	if (IS_GRINGO_VALID(&uVar3))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar3, "UseCase1"))))
		{
			uVar6 = &uVar3;
			Function_14(iParam0, 0);
			fVar5 = Function_81(StackVal, StackVal, Global_54078, Function_14(iParam0, 0));
		}
	}
	if (IS_GRINGO_VALID(&uVar4))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar4, "UseCase1"))))
		{
			uVar6 = &uVar4;
			Function_14(iParam0, 1);
			fVar5 = Function_81(StackVal, StackVal, Global_54078, Function_14(iParam0, 1));
		}
	}
	if (!IS_GRINGO_VALID(&uVar6))
	{
		return 0;
	}
	if (fVar5 > 2.0f)
	{
		if (!Function_8(&Global_54076, 1, 1))
		{
			bParam1 = 1;
		}
	}
	return 1;
}

int Function_51(bool bParam0, bool bParam1, int iParam2) //Position: 0x357E / 13694
{
	bool bVar0;
	var uVar1[4];
	struct<2> Var6;
	var uVar8;
	float fVar9;
	int iVar10;
	var uVar11;
	
	bVar0 = true;
	if (!IS_OBJECTSET_VALID(&iParam2))
	{
		iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_80(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_16(bParam0);
	Var6 = Function_16(bParam0);
	if (GET_OBJECTSET_SIZE(&iParam2) > 1)
	{
		uVar8 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iParam2);
	}
	if (IS_OBJECT_VALID(&uVar8))
	{
		uVar1[0] = GET_GRINGO_FROM_OBJECT(&uVar8);
		bVar0 = false;
	}
	else
	{
		uVar1[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_arm_wrestling", &Var6, 1.0f, 0);
	}
	if (IS_GRINGO_VALID(&(uVar1[0])))
	{
		if (!IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&(uVar1[0]), "UseCase1"))))
		{
			return 0;
		}
	}
	return 0;
	Function_53(bParam0);
	Var6 = Function_53(bParam0);
	uVar1[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_FiveFingerFillet", &Var6, 1.0f, 0);
	if (GET_OBJECTSET_SIZE(&iParam2) > 2)
	{
		uVar8 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iParam2);
	}
	if (IS_OBJECT_VALID(&uVar8))
	{
		uVar1[1] = GET_GRINGO_FROM_OBJECT(&uVar8);
		bVar0 = false;
	}
	else
	{
		uVar1[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/player_arm_wrestling", &Var6, 1.0f, 0);
	}
	if (IS_GRINGO_VALID(&(uVar1[1])))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&(uVar1[1]), "UseCase1"))))
		{
			return 0;
		}
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&(uVar1[1])), &Var6);
		fVar9 = Function_81(StackVal, StackVal, Global_54078, Var6);
		if (fVar9 > 2.0f && !Function_8(&Global_54076, 1, 1))
		{
			bParam1 = 1;
		}
	}
	else
	{
		bVar0 = false;
		return 0;
	}
	iVar10 = 0;
	while (iVar10 <= 2)
	{
		Function_52(bParam0, iVar10);
		Var6 = Function_52(bParam0, iVar10);
		if (GET_OBJECTSET_SIZE(&iParam2) > 1)
		{
			uVar8 = GET_INDEXED_OBJECT_IN_OBJECTSET((2 + iVar10), &iParam2);
		}
		if (IS_OBJECT_VALID(&uVar8))
		{
			uVar1[(2 + iVar10)] = GET_GRINGO_FROM_OBJECT(&uVar8);
			bVar0 = false;
		}
		else
		{
			uVar1[(2 + iVar10)] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/arm_wrestling_spectate", &Var6, 0,1f, 0);
			if (!IS_GRINGO_VALID(&(uVar1[(2 + iVar10)])))
			{
				uVar1[(2 + iVar10)] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate", &Var6, 0,1f, 0);
			}
			if (!IS_GRINGO_VALID(&(uVar1[(2 + iVar10)])))
			{
				uVar1[(2 + iVar10)] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_B", &Var6, 0,1f, 0);
			}
			if (!IS_GRINGO_VALID(&(uVar1[(2 + iVar10)])))
			{
				uVar1[(2 + iVar10)] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_C", &Var6, 0,1f, 0);
			}
		}
		if (IS_GRINGO_VALID(&(uVar1[(2 + iVar10)])))
		{
			uVar11 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&(uVar1[(2 + iVar10)]), "UseCase1"));
			if (IS_ACTOR_VALID(&uVar11))
			{
				SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&uVar11, 0);
			}
		}
		iVar10++;
	}
	if (bVar0)
	{
		iVar10 = 0;
		while (iVar10 <= 4)
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(&(uVar1[iVar10])), &iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(&(uVar1[iVar10])), &iParam2);
			}
			iVar10++;
		}
	}
	return 1;
}

struct<8> Function_52(int iParam0, int iParam1) //Position: 0x39FB / 14843
{
	if (iParam0 == Global_46866[2])
	{
		if (iParam1 == 0)
		{
			return StackVal, Vector(-1470,917f, 16,54662f, 3950,254f);
		}
		if (iParam1 == 1)
		{
			return StackVal, Vector(-1473,098f, 16,54662f, 3949,357f);
		}
	}
	if (iParam0 == Global_46838[0])
	{
		if (iParam1 == 0)
		{
			return StackVal, Vector(-3145,761f, 43,17878f, 3722,624f);
		}
		if (iParam1 == 1)
		{
			return StackVal, Vector(-3145,761f, 43,17878f, 3718,675f);
		}
	}
	if (iParam0 == Global_46894[0])
	{
		if (iParam1 == 0)
		{
			return StackVal, Vector(-467,4124f, 20,97995f, 3884,092f);
		}
		if (iParam1 == 1)
		{
			return StackVal, Vector(-465,9765f, 20,97995f, 3884,092f);
		}
	}
	if (iParam0 == Global_46926[2])
	{
		if (iParam1 == 0)
		{
			return StackVal, Vector(-264,6337f, 85,11941f, 2120,304f);
		}
		if (iParam1 == 1)
		{
			return StackVal, Vector(-264,6337f, 85,11941f, 2118,317f);
		}
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_53(int iParam0) //Position: 0x3B2B / 15147
{
	if (iParam0 == Global_46866[2])
	{
		return StackVal, Vector(-1471,656f, 16,56962f, 3948,088f);
	}
	if (iParam0 == Global_46838[0])
	{
		return StackVal, Vector(-3143,743f, 43,17878f, 3720,288f);
	}
	if (iParam0 == Global_46894[0])
	{
		return StackVal, Vector(-466,16f, 20,97986f, 3881,796f);
	}
	if (iParam0 == Global_46926[2])
	{
		return StackVal, Vector(-262,9332f, 85,11941f, 2118,893f);
	}
	LOG_ERROR("Returning invalid arm wrestling player seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

int Function_54(var uParam0, var uParam1, int iParam2) //Position: 0x3BDF / 15327
{
	bool bVar0;
	var uVar1[2];
	struct<2> Var4;
	var uVar6;
	var uVar7;
	float fVar8;
	int iVar9;
	
	bVar0 = true;
	if (!IS_OBJECTSET_VALID(&iParam2))
	{
		iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_80(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_18(uParam0);
	Var4 = Function_18(uParam0);
	if (GET_OBJECTSET_SIZE(&iParam2) > 1)
	{
		uVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iParam2);
	}
	if (IS_OBJECT_VALID(&uVar6))
	{
		uVar1[0] = GET_GRINGO_FROM_OBJECT(&uVar6);
		bVar0 = false;
	}
	else
	{
		uVar1[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &Var4, 1.0f, 0);
	}
	if (IS_GRINGO_VALID(&(uVar1[0])))
	{
		uVar7 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&(uVar1[0]), "UseCase1"));
		if (!IS_ACTOR_VALID(&uVar7))
		{
			return 0;
		}
		if (IS_ACTION_NODE_PLAYING_PARTIAL(&uVar7, "fivefingerfillet/Fake"))
		{
			if (IS_ACTION_NODE_PLAYING_PARTIAL(&uVar7, "fivefingerfillet/Fake/sit") || IS_ACTION_NODE_PLAYING_PARTIAL(&uVar7, "fivefingerfillet/Fake/leave_game"))
			{
				return 0;
			}
		}
		return 0;
	}
	bVar0 = false;
	return 0;
	Function_55(uParam0);
	Var4 = Function_55(uParam0);
	uVar1[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_FiveFingerFillet", &Var4, 1.0f, 0);
	if (GET_OBJECTSET_SIZE(&iParam2) > 2)
	{
		uVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iParam2);
	}
	if (IS_OBJECT_VALID(&uVar6))
	{
		uVar1[1] = GET_GRINGO_FROM_OBJECT(&uVar6);
		bVar0 = false;
	}
	else
	{
		uVar1[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_FiveFingerFillet", &Var4, 1.0f, 0);
	}
	if (IS_GRINGO_VALID(&(uVar1[1])))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&(uVar1[1]), "UseCase1"))))
		{
			return 0;
		}
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&(uVar1[1])), &Var4);
		fVar8 = Function_81(StackVal, StackVal, Global_54078, Var4);
		if (fVar8 > 2.0f)
		{
			if (!Function_8(&Global_54076, 1, 1))
			{
				uParam1 = 1;
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
		iVar9 = 0;
		while (iVar9 <= 2)
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(&(uVar1[iVar9])), &iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(&(uVar1[iVar9])), &iParam2);
			}
			iVar9++;
		}
	}
	return 1;
}

struct<8> Function_55(int iParam0) //Position: 0x3EC4 / 16068
{
	if (iParam0 == Global_46760[0])
	{
		return StackVal, Vector(-2194,299f, 16,57026f, 2593,136f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(161,0631f, 73,82803f, 2294,619f);
	}
	if (iParam0 == Global_46850[0])
	{
		return StackVal, Vector(-4274,766f, 18,07059f, 4453,27f);
	}
	if (iParam0 == Global_46894[3])
	{
		return StackVal, Vector(354,6982f, 76,28821f, 3447,546f);
	}
	if (iParam0 == Global_46926[1])
	{
		return StackVal, Vector(-465,0943f, 152,3517f, 1596,716f);
	}
	LOG_ERROR("Returning invalid five finger fillet player seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

int Function_56(int iParam0, float fParam1, int iParam2) //Position: 0x3F9C / 16284
{
	var uVar0[3];
	struct<2> Var4;
	var uVar6;
	var uVar7;
	bool bVar8;
	var uVar9[3];
	bool bVar13;
	int iVar14;
	float fVar15;
	var uVar16;
	int iVar17;
	var uVar18;
	float fVar19;
	float fVar20;
	
	Function_22(iParam0);
	Var4 = Function_22(iParam0);
	uVar6 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack_dealer", &Var4, 1.0f, 0);
	if (IS_GRINGO_VALID(&uVar6))
	{
		uVar7 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar6, "UseCase1"));
		if (!IS_ACTOR_VALID(&uVar7))
		{
			uVar7 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar6, "UseCase2"));
		}
		if (!IS_ACTOR_VALID(&uVar7))
		{
			return 0;
		}
		if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&uVar7)))
		{
			return 0;
		}
		if (!IS_ACTION_NODE_PLAYING_PARTIAL(&uVar7, "Dealer"))
		{
			return 0;
		}
	}
	return 0;
	if (!IS_OBJECTSET_VALID(&iParam2))
	{
		iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_80(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	bVar8 = true;
	iVar14 = 0;
	fVar15 = -1.0f;
	bVar13 = false;
	while (bVar13 <= 3)
	{
		Function_57(iParam0, bVar13);
		Var4 = Function_57(iParam0, bVar13);
		if (GET_OBJECTSET_SIZE(&iParam2) > bVar13 + 1)
		{
			uVar16 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar13, &iParam2);
		}
		if (IS_OBJECT_VALID(&uVar16))
		{
			uVar9[bVar13] = GET_GRINGO_FROM_OBJECT(&uVar16);
			bVar8 = false;
		}
		else
		{
			uVar9[bVar13] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack", &Var4, 1.0f, 0);
		}
		uVar0[bVar13] = &uVar9[bVar13];
		iVar17 = 0;
		while (iVar17 <= bVar13)
		{
			if (&uVar0[iVar17] == &uVar9[bVar13])
			{
				uVar6 = "";
				return 0;
			}
			iVar17++;
		}
		if (IS_GRINGO_VALID(&(uVar9[bVar13])))
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(&(uVar9[bVar13])))
			{
				uVar18 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&(uVar9[bVar13]), "UseCase1"));
				if (IS_ACTOR_VALID(&uVar18))
				{
					if (IS_ACTION_NODE_PLAYING_PARTIAL(&uVar18, "idle"))
					{
						iVar14++;
					}
					else
					{
						return 0;
					}
				}
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&(uVar9[bVar13])), &Var4);
				fVar19 = Function_81(StackVal, StackVal, Global_54078, Var4);
				if (fVar19 > fVar15 || fVar15 != -1.0f)
				{
					fVar15 = fVar19;
				}
			}
			else
			{
				return 0;
			}
		}
		bVar8 = false;
		return 0;
		bVar13++;
	}
	if (bVar8)
	{
		bVar13 = false;
		while (bVar13 <= 3)
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(&(uVar9[bVar13])), &iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(&(uVar9[bVar13])), &iParam2);
			}
			bVar13++;
		}
	}
	if (iVar14 > 3)
	{
		return 0;
	}
	fVar20 = 2.0f;
	if (iParam0 == Global_46816[1])
	{
		fVar20 = 1,5f;
	}
	if (fVar15 < fVar20)
	{
	}
	else if (!Function_8(&Global_54076, 1, 1))
	{
		fParam1 = 1;
	}
	return 1;
}

struct<8> Function_57(int iParam0, int iParam1) //Position: 0x4280 / 17024
{
	if (iParam0 == Global_46866[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-2685,328f, 31,35269f, 4284,425f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-2686,254f, 31,35269f, 4284,686f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-2686,982f, 31,35269f, 4284,026f);
				break;
		}
	}
	else if (iParam0 == Global_46796[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-3640,897f, 42,76801f, 2104,235f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-3640,023f, 42,76801f, 2104,636f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-3639,895f, 42,76801f, 2105,61f);
				break;
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(719,9783f, 78,4736f, 1312,265f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(719,0787f, 78,4736f, 1312,605f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(718,2963f, 78,4736f, 1312,011f);
				break;
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(172,2084f, 73,75179f, 2224,902f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(170,9445f, 73,75179f, 2224,73f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(170,7396f, 73,74976f, 2223,559f);
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

int Function_58(int iParam0, float fParam1, int iParam2) //Position: 0x4435 / 17461
{
	bool bVar0;
	int iVar1;
	float fVar2;
	struct<2> Var3;
	var uVar5[6];
	bool bVar12;
	var uVar13[6];
	var uVar20;
	int iVar21;
	var uVar22;
	float fVar23;
	float fVar24;
	
	iVar1 = 0;
	fVar2 = -1.0f;
	if (!IS_OBJECTSET_VALID(&iParam2))
	{
		iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_80(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	bVar12 = true;
	bVar0 = false;
	while (bVar0 <= 6)
	{
		Function_24(iParam0, bVar0);
		Var3 = Function_24(iParam0, bVar0);
		if (GET_OBJECTSET_SIZE(&iParam2) > bVar0 + 1)
		{
			uVar20 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam2);
		}
		if (IS_OBJECT_VALID(&uVar20))
		{
			uVar13[bVar0] = GET_GRINGO_FROM_OBJECT(&uVar20);
			bVar12 = false;
		}
		else
		{
			uVar13[bVar0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_liars_dice", &Var3, 1.0f, 0);
		}
		uVar5[bVar0] = &uVar13[bVar0];
		iVar21 = 0;
		while (iVar21 <= bVar0)
		{
			if (&uVar5[iVar21] == &uVar13[bVar0])
			{
				uVar13[bVar0] = "";
				return 0;
			}
			iVar21++;
		}
		if (IS_GRINGO_VALID(&(uVar13[bVar0])))
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(&(uVar13[bVar0])))
			{
				uVar22 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&(uVar13[bVar0]), "UseCase1"));
				if (IS_ACTOR_VALID(&uVar22))
				{
					if ((IS_ACTION_NODE_PLAYING_PARTIAL(&uVar22, "fake_liars_dice") && !IS_ACTION_NODE_PLAYING_PARTIAL(&uVar22, "sit")) && !IS_ACTION_NODE_PLAYING_PARTIAL(&uVar22, "stand"))
					{
						iVar1++;
					}
					else
					{
						return 0;
					}
				}
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&(uVar13[bVar0])), &Var3);
				fVar23 = Function_81(StackVal, StackVal, Global_54078, Var3);
				if (fVar23 > fVar2 || fVar2 != -1.0f)
				{
					fVar2 = fVar23;
				}
			}
			else
			{
				return 0;
			}
		}
		bVar12 = false;
		return 0;
		bVar0++;
	}
	if (bVar12)
	{
		bVar0 = false;
		while (bVar0 <= 6)
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(&(uVar13[bVar0])), &iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(&(uVar13[bVar0])), &iParam2);
			}
			bVar0++;
		}
	}
	if (iVar1 >= 0 || iVar1 <= 6)
	{
		return 0;
	}
	fVar24 = 2.0f;
	if (iParam0 == Global_46816[1])
	{
		fVar24 = 1,5f;
	}
	if (fVar2 < fVar24)
	{
	}
	else if (!Function_8(&Global_54076, 1, 1))
	{
		fParam1 = 1;
	}
	return 1;
}

int Function_59(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x4680 / 18048
{
	bool bVar0;
	int iVar1;
	float fVar2;
	struct<2> Var3;
	var uVar5[6];
	bool bVar12;
	var uVar13[6];
	var uVar20;
	int iVar21;
	var uVar22;
	float fVar23;
	
	iVar1 = 0;
	fVar2 = -1.0f;
	if (!IS_OBJECTSET_VALID(&uParam2))
	{
		uParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_80(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	bVar12 = true;
	bVar0 = false;
	while (bVar0 <= 6)
	{
		if (GET_OBJECTSET_SIZE(&uParam2) > bVar0 + 1)
		{
			uVar20 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam2);
		}
		if (IS_OBJECT_VALID(&uVar20))
		{
			uVar13[bVar0] = GET_GRINGO_FROM_OBJECT(&uVar20);
			bVar12 = false;
		}
		else
		{
			Function_27(uParam0, bVar0, &iParam3);
			uVar13[bVar0] = Function_26(StackVal, Function_27(uParam0, bVar0, &iParam3));
		}
		uVar5[bVar0] = &uVar13[bVar0];
		iVar21 = 0;
		while (iVar21 <= bVar0)
		{
			if (&uVar5[iVar21] == &uVar13[bVar0])
			{
				uVar13[bVar0] = "";
				return 0;
			}
			iVar21++;
		}
		if (IS_GRINGO_VALID(&(uVar13[bVar0])))
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(&(uVar13[bVar0])))
			{
				uVar22 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&(uVar13[bVar0]), "UseCase1"));
				if (IS_ACTOR_VALID(&uVar22))
				{
					if ((IS_ACTION_NODE_PLAYING_PARTIAL(&uVar22, "ncard_idle") || IS_ACTION_NODE_PLAYING_PARTIAL(&uVar22, "look_at_cards")) || IS_ACTION_NODE_PLAYING_PARTIAL(&uVar22, "look_up"))
					{
						iVar1++;
					}
					else
					{
						return 0;
					}
				}
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&(uVar13[bVar0])), &Var3);
				fVar23 = Function_81(StackVal, StackVal, Global_54078, Var3);
				if (fVar23 > fVar2 || fVar2 != -1.0f)
				{
					fVar2 = fVar23;
				}
			}
			else
			{
				return 0;
			}
		}
		bVar12 = false;
		bVar0++;
	}
	if (bVar12)
	{
		bVar0 = false;
		while (bVar0 <= 6)
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(&(uVar13[bVar0])), &uParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(&(uVar13[bVar0])), &uParam2);
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
	else if (!Function_8(&Global_54076, 1, 1))
	{
		uParam1 = 1;
	}
	return 1;
}

var Function_60() //Position: 0x4883 / 18563
{
	return StackVal;
}

void Function_61(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x488E / 18574
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_62(Global_10966) };
		}
		PRINT_HELP_B(&bParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&bParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_62(int iParam0) //Position: 0x4919 / 18713
{
	char* cVar0[16];
	
	if (!Function_63())
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

bool Function_63() //Position: 0x4958 / 18776
{
	if (Function_64(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_64(bool bParam0, int iParam1) //Position: 0x4973 / 18803
{
	return (bParam0 && iParam1) == 0;
}

void Function_65(struct<205> Param0) //Position: 0x4980 / 18816
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar5;
	bool bVar7;
	var uVar8;
	var uVar9;
	
	if (!Param0.f_184 != 0)
	{
		if (HUD_IS_SHOWING_HELP_TEXT())
		{
			HUD_CLEAR_HELP();
		}
		if (Function_84(&Param0))
		{
			if (Function_83(&Param0 + 184, 4194304))
			{
				Function_61("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
			}
			else
			{
				Function_61("mission_later_tomorrow_no_time", 0x41200000, 1, 0, 2, 1, 0);
			}
			return;
		}
		iVar0 = Function_69(Param0.f_184);
		iVar1 = Function_68(Param0.f_184);
		if (Function_83(&Param0 + 184, 4096) && !Function_83(&Param0 + 184, 4194304))
		{
			if (Function_83(&Param0 + 184, 1))
			{
				uVar8 = Function_66(Function_67(Param0.f_188));
				uVar9 = MAKE_TIME_OF_DAY_EX(GET_DAY(&uVar8), GET_HOUR(&uVar8), 0, 0);
				ADD_TIME(&uVar9, 0, Param0.f_204, false, 0);
				iVar2 = GET_HOUR(&uVar9);
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
						straddi(&uVar3, iVar2, 8);
						UI_SET_STRING("dynamic_entry_for_hour", &uVar3);
						UI_SET_STRING("dynamic_entry_for_time", UI_GET_STRING("dynamic_entry_for_morning"));
					}
					else
					{
						if (iVar2 >= 12)
						{
							iVar2 = (iVar2 - 12);
						}
						straddi(&uVar3, iVar2, 8);
						UI_SET_STRING("dynamic_entry_for_hour", &uVar3);
						UI_SET_STRING("dynamic_entry_for_time", UI_GET_STRING("dynamic_entry_for_afternoon"));
					}
					if (GET_DAY(0) <= GET_DAY(&uVar9))
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
			straddi(&uVar3, iVar0, 8);
			UI_SET_STRING("dynamic_entry_for_hour", &uVar3);
			UI_SET_STRING("dynamic_entry_for_time", UI_GET_STRING("dynamic_entry_for_morning"));
		}
		else
		{
			if (iVar0 >= 12)
			{
				iVar0 = (iVar0 - 12);
			}
			straddi(&uVar3, iVar0, 8);
			UI_SET_STRING("dynamic_entry_for_hour", &uVar3);
			UI_SET_STRING("dynamic_entry_for_time", UI_GET_STRING("dynamic_entry_for_afternoon"));
		}
		if (iVar1 > 12 || iVar1 != 24)
		{
			if (iVar1 >= 12)
			{
				iVar1 = (iVar1 - 12);
			}
			straddi(&uVar5, iVar1, 8);
			UI_SET_STRING("dynamic_entry_for_hour", &uVar5);
			UI_SET_STRING("dynamic_entry_for_time_later", UI_GET_STRING("dynamic_entry_for_morning"));
		}
		else
		{
			if (iVar1 >= 12)
			{
				iVar1 = (iVar1 - 12);
			}
			straddi(&uVar5, iVar1, 8);
			UI_SET_STRING("dynamic_entry_for_hour", &uVar5);
			UI_SET_STRING("dynamic_entry_for_time_later", UI_GET_STRING("dynamic_entry_for_afternoon"));
		}
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

var Function_66(int iParam0) //Position: 0x4EF4 / 20212
{
	if (!Function_223(iParam0))
	{
		return MAKE_TIME_OF_DAY(false, false, 0);
	}
	return &Global_21684[iParam07] + 40;
}

int Function_67(int iParam0) //Position: 0x4F14 / 20244
{
	if (!Function_96(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_68(int iParam0) //Position: 0x4F2E / 20270
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

int Function_69(float fParam0) //Position: 0x4F97 / 20375
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

bool Function_70(var uParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, int iParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x5000 / 20480
{
	struct<2> Var0;
	char* cVar2[32];
	float fVar11;
	var uVar12;
	
	Var0 = Vector(&iParam7, 2.0f, &iParam7);
	Param2.f_4 = (StackVal + 0,75f);
	cVar2 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(&uParam0, &cParam1, Param2, Param4, Var0, &fParam9, &uParam6, &iParam8, &bParam11, 0, &iParam12, &bParam15);
	if (IS_OBJECT_VALID(&cVar2))
	{
		strcpy(&cVar3, &cParam1, 32);
		if (IS_STRING_VALID(&cParam1))
		{
			stradd(&cVar3, "restrict", 32);
		}
		fVar11 = CREATE_VOLUME_IN_LAYOUT(StackVal, &uParam0, &cVar3, 2, Param2, Param4, Vector(5.0f, 5.0f, 5.0f));
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&fVar11);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&fVar11);
		if (&iParam10 != 4294967295)
		{
			uVar12 = ADD_BLIP_FOR_OBJECT(&cVar2, &iParam10, 0.0f, 2, 0);
		}
		if (&fParam13 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(&uVar12, &fParam13);
		}
		if (&fParam14 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(&uVar12, &fParam14);
		}
		DECOR_SET_OBJECT(&cVar2, "volrestrict", &fVar11);
	}
	return &cVar2;
}

void Function_71(bool bParam0) //Position: 0x50EB / 20715
{
	if (Function_64(bParam0, 1) && !Function_64(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_72(struct<185> Param0) //Position: 0x5118 / 20760
{
	if (Param0.f_184 & 114688 == 0)
	{
		return;
	}
	if (Param0.f_184 & 16384 >= 0)
	{
		if (!IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, true);
		}
	}
	else if (Param0.f_184 & 32768 >= 0)
	{
		if (!IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, true);
		}
	}
	else if (Param0.f_184 & 65536 >= 0)
	{
		if (StackVal != 0)
		{
			Function_73(0, 4, 0, 0, 1);
		}
	}
	return;
}

void Function_73(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x5187 / 20871
{
	int iVar0;
	bool bVar1;
	
	Function_78(iParam0);
	Global_26182.f_4 = iParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_77(StackVal, &bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_74(StackVal, &bVar1, &bParam4);
		}
	}
}

void Function_74(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5201 / 20993
{
	int iVar0;
	
	Function_78(bParam0);
	Function_76(&bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, &bParam1);
	Function_75();
	Global_26182.f_48 = StackVal;
	(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&bParam1), 0);
	Global_26182.f_8 = bParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
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
		if (Global_26182.f_32 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_26182.f_32);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_75() //Position: 0x5380 / 21376
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_76(int iParam0) //Position: 0x538C / 21388
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&iParam0));
	return;
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x53D6 / 21462
{
	bool bVar0;
	
	bVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_78(bParam0);
	Function_76(&bVar0);
	PRINTNL();
	Function_74(bParam0, &bVar0, &bParam1);
	return;
}

void Function_78(int iParam0) //Position: 0x53FF / 21503
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

void Function_79(var uParam0, int iParam1) //Position: 0x5445 / 21573
{
	uParam0 = (uParam0 || iParam1);
	return;
}

var Function_80() //Position: 0x5456 / 21590
{
	int iVar0;
	
	return &iVar0;
}

float Function_81(struct<2> Param0, struct<2> Param2) //Position: 0x545F / 21599
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

void Function_82(var uParam0, int iParam1) //Position: 0x547C / 21628
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_83(var uParam0, int iParam1) //Position: 0x5496 / 21654
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_84(struct<209> Param0) //Position: 0x54B3 / 21683
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	int iVar4;
	
	iVar0 = Param0.f_56;
	if (iVar0 < 16 || iVar0 > 0)
	{
		return 0;
	}
	if (Global_6657)
	{
		return 0;
	}
	if (!Param0.f_208)
	{
		if (SQUAD_IS_VALID(&Param0 + 216))
		{
			bVar3 = false;
			while (bVar3 <= SQUAD_GET_SIZE(&Param0 + 216))
			{
				iVar4 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 216, bVar3);
				if (IS_ACTOR_VALID(&iVar4))
				{
					if (!IS_ACTOR_VEHICLE(&iVar4))
					{
						if (GET_LAST_ATTACKER(&iVar4) == &Global_54076)
						{
							Function_91(&Param0 + 216);
							SQUAD_GOALS_CLEAR(&Param0 + 216);
							Param0.f_208 = 1;
							if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
							{
								if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
								{
									if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
									{
										GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
									}
								}
							}
							return 1;
						}
						if (Function_87(&iVar4, &uVar2, &uVar1, 0, 0, 0x40400000) && ((Param0.f_56 != 11 || Param0.f_56 != 12) || Param0.f_56 != 13))
						{
							Function_91(&Param0 + 216);
							SQUAD_GOALS_CLEAR(&Param0 + 216);
							Param0.f_208 = 1;
							if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
							{
								if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
								{
									if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
									{
										GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
									}
								}
							}
							return 1;
						}
					}
					else if (GET_LAST_ATTACK_TARGET(&Global_54076) == &iVar4)
					{
						Function_91(&Param0 + 216);
						SQUAD_GOALS_CLEAR(&Param0 + 216);
						Param0.f_208 = 1;
						if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
						{
							if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
							{
								if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
								{
									GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
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
	else if (Function_85(StackVal, &Global_54076, *(&Param0 + 88)) < 100.0f)
	{
		Param0.f_208 = 0;
		if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
		{
			if (!GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), true);
			}
		}
		return 0;
	}
	return 1;
	return 0;
}

float Function_85(var uParam0, struct<2> Param1) //Position: 0x56CC / 22220
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_86(&uParam0);
		Var0 = Function_86(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_86(bool bParam0) //Position: 0x5743 / 22339
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		GET_POSITION(&bParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

int Function_87(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x57AF / 22447
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
		fVar0 = Function_90(&iParam0, &Global_54076);
		if (!Function_64(&bParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_88(&iParam0);
				return 1;
			}
		}
		if (!Function_64(&bParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_88(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_88(&iParam0);
				return 1;
			}
		}
		if (!Function_64(&bParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_88(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_88(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_64(&bParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_88(&iParam0);
				return 1;
			}
		}
		if (!Function_64(&bParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_88(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_88(int iParam0) //Position: 0x5978 / 22904
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_89(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_89(int iParam0) //Position: 0x59B5 / 22965
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_90(var uParam0, int iParam1) //Position: 0x59CE / 22990
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_91(int iParam0) //Position: 0x5AC3 / 23235
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_92(var uParam0, bool bParam1, int iParam2) //Position: 0x5AF8 / 23288
{
	if (!IS_BLIP_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_83(&iParam2, 4194304) && !Function_83(&iParam2, 8388608))
		{
			bParam1 = false;
		}
	}
	if (bParam1)
	{
		SET_BLIP_COLOR(&uParam0, 1.0f, 1.0f, 1.0f, 1.0f);
		SET_BLIP_SCALE(&uParam0, 1,25f);
	}
	else
	{
		SET_BLIP_COLOR(&uParam0, 1.0f, 1.0f, 1.0f, 0,75f);
		SET_BLIP_SCALE(&uParam0, 1.0f);
	}
	return;
}

bool Function_93(struct<205> Param0) //Position: 0x5B5A / 23386
{
	var uVar0;
	var uVar1;
	
	if (!Param0.f_184 != 0)
	{
		switch (Global_99472)
		{
			case 0x00000001:
				if (!Function_83(&Param0 + 184, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_83(&Param0 + 184, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_83(&Param0 + 184, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_83(&Param0 + 184, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_83(&Param0 + 184, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_83(&Param0 + 184, 1024))
				{
					return 0;
				}
				break;
		}
		if (Function_83(&Param0 + 184, 4096))
		{
			if (Function_83(&Param0 + 184, 1))
			{
				uVar0 = Function_66(Function_67(Param0.f_188));
				uVar1 = MAKE_TIME_OF_DAY_EX(GET_DAY(&uVar0), GET_HOUR(&uVar0), 0, 0);
				ADD_TIME(&uVar1, 0, Param0.f_204, false, 0);
				if (IS_LATER_THAN(&uVar1, GET_TIME_OF_DAY()))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

bool Function_94(struct<201> Param0) //Position: 0x5C65 / 23653
{
	var uVar0;
	
	if (!Param0.f_184 != 0)
	{
		uVar0 = Param0.f_184;
		if (uVar0 & 1 >= 0)
		{
			if (!Function_248(Param0.f_188, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 2 >= 0)
		{
			if (!Function_248(Param0.f_192, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 4 >= 0)
		{
			if (!Function_248(Param0.f_196, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 8 >= 0)
		{
			if (!Function_248(Param0.f_200, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 1073741824 >= 0)
		{
			if (&Global_47310 == 4294967295)
			{
				return 0;
			}
			PRINTINT(&Global_47310);
			PRINTNL();
			*(&Param0 + 8) = &Global_47310;
			Global_47310 = 4294967295;
		}
	}
	return 1;
}

int Function_95(int iParam0) //Position: 0x5D0A / 23818
{
	if (!Function_223(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96(int iParam0) //Position: 0x5D24 / 23844
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_97(struct<197> Param0) //Position: 0x5D3A / 23866
{
	struct<4> Var0;
	
	if ((Function_221(StackVal) != 48 && !bParam2) && !Global_6624)
	{
		bParam1 = false;
	}
	if (Function_219(StackVal) == 1)
	{
		if (IS_OBJECT_VALID(&Param0 + 64))
		{
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
			}
			DESTROY_OBJECT(&Param0 + 64);
		}
	}
	if (bParam1)
	{
		if (HUD_IS_FADED())
		{
			if (Function_219(StackVal) == 1)
			{
				Global_6622 = 1;
				Global_6621 = 0;
				Function_217(&(Global_6667[Function_221(StackVal)28]));
			}
			else if (Function_219(StackVal) == 4)
			{
				Function_216(StackVal, Param0.f_196);
				Global_6626 = 1;
			}
			Function_214();
			Function_233(0, 0);
			*(&Param0 + 160) = Function_99(StackVal, &Param0 + 8, bParam2, 0, &iParam3, 0);
			Param0.f_168 = 0;
			Param0.f_180 = 0;
		}
		else if (!HUD_IS_FADING())
		{
			if (Function_219(StackVal) == 1)
			{
				Var0 = { StackVal, StackVal, StackVal, Function_98(Function_221(StackVal)) };
			}
			else
			{
				Var0 = { StackVal, StackVal, StackVal, *(&Param0 + 16) };
			}
			UNK_0xC6E36B1D(&Var0);
			SET_ACTOR_INVULNERABILITY(&Global_54076, true);
		}
	}
	else
	{
		if (Function_219(StackVal) == 1)
		{
			Global_6622 = 1;
			Global_6621 = 0;
			Var0 = { StackVal, StackVal, StackVal, Function_98(Function_221(StackVal)) };
			if (HUD_IS_FADED())
			{
				UNK_0xC6E36B1D(&Var0);
			}
			Function_217(&(Global_6667[Function_221(StackVal)28]));
		}
		else if (Function_219(StackVal) == 4)
		{
			Function_216(StackVal, Param0.f_196);
			Global_6626 = 1;
		}
		SET_ACTOR_INVULNERABILITY(&Global_54076, true);
		Function_214();
		Function_233(0, 0);
		*(&Param0 + 160) = Function_99(StackVal, &Param0 + 8, bParam2, 0, 1, 0);
		Param0.f_168 = 0;
		Param0.f_180 = 0;
	}
}

struct<16> Function_98(bool bParam0) //Position: 0x5EED / 24301
{
	char* cVar0[16];
	
	strcpy(&cVar0, "fav_non", 16);
	if (!Function_96(bParam0))
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, *(&Global_6667[bParam028] + 16);
}

bool Function_99(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5) //Position: 0x5F1E / 24350
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar61;
	struct<41> Var62;
	
	if (Function_219(iParam1) == 1)
	{
		Function_233(1, 0);
	}
	else
	{
		Function_233(0, 0);
	}
	bVar1 = Function_221(iParam1);
	if (!Global_6606 || Global_6624)
	{
		if (Function_219(iParam1) == 1)
		{
			uVar2 = 58;
			if (!bParam2)
			{
				Function_168(bVar1, &uVar2, &uVar0, 1);
			}
			if (bVar1 == 1)
			{
				iVar61 = 0;
				while (iVar61 <= 4)
				{
					Function_167(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 3)
				{
					Function_166(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 11)
				{
					Function_165(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 16)
				{
					Function_164(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 58)
				{
					if (Function_223(Function_67(iVar61)))
					{
						Function_162(Function_67(iVar61));
					}
					iVar61++;
				}
				Function_160();
				Function_158(Function_6(), 0);
				Function_157();
				if (bVar1 == 1)
				{
					Function_162(Function_67(2));
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
			PRINTINT(Function_219(iParam1));
			PRINTNL();
		}
	}
	if (Function_219(iParam1) == 1)
	{
		Function_156(18, bVar1, 0);
		Function_154(18, &Global_6667[bVar128] + 16, 0, 1);
		if (!bParam2)
		{
			Function_152(bVar1);
			AUDIO_RESET_SPEECH_HISTORY();
		}
		else
		{
			Global_53524.f_188 = GET_CURRENT_GAME_TIME();
		}
	}
	Var62 = iParam1;
	Var68 = { StackVal, StackVal, StackVal, Function_151(bVar1) };
	strcpy(&Var62 + 4, UI_GET_STRING(&Var68), 16);
	Var62.f_36 = bParam2;
	Var62.f_40 = &iParam3;
	Function_147(0);
	SATCHEL_SET_ENABLED(1);
	if (IS_SCRIPT_VALID(&Global_39922 + 96))
	{
		TERMINATE_SCRIPT(&Global_39922 + 96);
	}
	if (IS_SCRIPT_VALID(&Global_39922 + 104))
	{
		TERMINATE_SCRIPT(&Global_39922 + 104);
	}
	Global_6621 = 0;
	SET_ACTOR_INVULNERABILITY(&Global_54076, false);
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		return "";
	}
	if (((IS_OBJECT_VALID(&Global_99130 + 32) || Function_64(Global_99130.f_40, 2)) || Function_64(Global_99130.f_40, 1)) || Function_64(Global_99130.f_40, 65536))
	{
		Function_33(&Global_99130 + 40, 2);
		Function_33(&Global_99130 + 40, 1);
		Function_33(&Global_99130 + 40, 65536);
		Function_146(&Global_99130 + 40, 4);
	}
	if (Function_219(iParam1) == 4)
	{
		PLAY_SOUND("HUD_MENU_SELECT_MASTER");
	}
	Global_6657 = 0;
	uVar72 = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(&uParam0, 4), &Var62, 12, 0);
	if (IS_SCRIPT_VALID(&uVar72))
	{
		if (Function_223(iParam1))
		{
			if (&bParam5)
			{
				Function_145(iParam1, &iParam4);
			}
			else if (Function_95(iParam1) == 1)
			{
				Function_144(iParam1, &iParam4);
			}
			else
			{
				Function_104(iParam1, &iParam4);
			}
		}
		Function_102(2);
		Function_100((15 - Function_101(105)));
		return &uVar72;
	}
	return "";
}

void Function_100(int iParam0) //Position: 0x6264 / 25188
{
	(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_101(105)), 0);
	return;
}

int Function_101(int iParam0) //Position: 0x6287 / 25223
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_102(int iParam0) //Position: 0x629E / 25246
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_76(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_76(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_76(&Global_21369 + 48);
	PRINTNL();
	Function_103(&iParam0);
	return;
}

void Function_103(int iParam0) //Position: 0x6340 / 25408
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_101(90)), 0);
	return;
}

void Function_104(int iParam0, int iParam1) //Position: 0x6363 / 25443
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	int iVar12;
	
	if (!Function_223(iParam0))
	{
		Function_142();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_219(iParam0);
	if (StackVal != 2)
	{
		Function_141("DEED_START", iParam0);
	}
	Global_21684[iParam07].f_8 = StackVal + 1;
	Global_21684[iParam07].f_4 = 2;
	Global_10968 = iParam0;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_106(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_221(iParam0);
		Global_10966 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_105(Global_10966) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_62(Global_10966) };
		}
		iVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(iVar12, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(iVar12);
		APPEND_JOURNAL_ENTRY(iVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_6619 = 1;
	return;
}

struct<24> Function_105(char* cParam0) //Position: 0x6474 / 25716
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

void Function_106(bool bParam0) //Position: 0x66CA / 26314
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_133();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_107();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_33(&Global_99144, 1);
		Function_33(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_107() //Position: 0x671F / 26399
{
	Function_118();
	Function_117();
	Function_117();
	Function_116();
	Function_116();
	Function_115();
	Function_115();
	Function_114(0);
	Function_114(0);
	Function_112();
	Function_111();
	Function_110();
	Function_109();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_108();
	return;
}

void Function_108() //Position: 0x676A / 26474
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

void Function_109() //Position: 0x6870 / 26736
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

void Function_110() //Position: 0x68A3 / 26787
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

void Function_111() //Position: 0x6A36 / 27190
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

void Function_112() //Position: 0x6BEF / 27631
{
	Function_113(&Global_42918, 1, 0);
	return;
}

void Function_113(struct<2317> Param0) //Position: 0x6BFD / 27645
{
	var uVar0;
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
	
	uVar0 = Function_12();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || iParam2)
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
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[bVar3] = _GET_AMMO_AMOUNT(&uVar0, bVar3, 0);
			bVar3++;
		}
		Param0.f_1272 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, bVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*&Param0 + 1208)[iVar4] = bVar8;
					Param0.f_1272 = bVar8;
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
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (bVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, bVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (bVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, bVar13);
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

struct<8> Function_114(char* cParam0) //Position: 0x6E1A / 28186
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
					iVar2 = ((Function_7((50 + iVar4)) + Function_7((183 + iVar4))) + Function_7((90 + iVar4)));
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
	Function_156(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_115() //Position: 0x6EC1 / 28353
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
	Function_156(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_116() //Position: 0x6F4A / 28490
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
	Function_156(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_117() //Position: 0x6FE1 / 28641
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
	Function_156(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_118() //Position: 0x7060 / 28768
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_119(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_156(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_119(int iParam0, bool bParam1, bool bParam2) //Position: 0x709D / 28829
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
	Function_132(iParam0, bParam1, 1);
	Function_131(iParam0);
	if (bParam2 && bParam1 == 0.0f)
	{
		Function_120(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_120(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x72A9 / 29353
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_130(390))), 32);
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
					bVar19 = (Function_129(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_129(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_127(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_124(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_122(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_121(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_80(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_121(int iParam0) //Position: 0x78E7 / 30951
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_122(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x78F8 / 30968
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_123("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_123("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_123("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_123(char* cParam0) //Position: 0x79EF / 31215
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_124(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x7A0A / 31242
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_126(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_125(Function_126(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_125(int iParam0, int iParam1) //Position: 0x7A71 / 31345
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_126(int iParam0, bool bParam1) //Position: 0x7A83 / 31363
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_127(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x7A95 / 31381
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
	if (((Function_128(iParam0) != 19 || Function_128(iParam0) != 17) || Function_128(iParam0) != 10) || Function_128(iParam0) != 9)
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

int Function_128(int iParam0) //Position: 0x7BC9 / 31689
{
	return Global_55480[iParam016].f_96;
}

float Function_129(int iParam0) //Position: 0x7BD8 / 31704
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_130(int iParam0) //Position: 0x7C11 / 31761
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_131(int iParam0) //Position: 0x7C4E / 31822
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

int Function_132(int iParam0, bool bParam1, bool bParam2) //Position: 0x7DE8 / 32232
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
			Global_54086[iVar1] = (Global_54086[iVar1] + bParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = bParam1;
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

void Function_133() //Position: 0x8072 / 32882
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_63())
	{
		Function_138(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_138(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_134(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_134(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_41(StackVal, Var0))
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
	*(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

struct<8> Function_134(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x8129 / 33065
{
	int iVar0;
	
	iVar0 = Function_137(&uParam2, &fParam3);
	if (Function_136(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_146(&Global_99144, 1);
			Function_33(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_146(&Global_99144, 2);
			Function_33(&Global_99144, 1);
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
		Function_146(&Global_99144, 2);
		Function_33(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_135();
	return StackVal, Function_135();
}

struct<8> Function_135() //Position: 0x8221 / 33313
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_136(int iParam0) //Position: 0x822B / 33323
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_137(bool bParam0, bool bParam1) //Position: 0x8241 / 33345
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
				fVar2 = Function_81(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_81(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_136(iVar0) && !&bParam1)
	{
		iVar0 = Function_137(&bParam0, 1);
	}
	return iVar0;
}

struct<8> Function_138(float fParam0, int iParam1) //Position: 0x830D / 33549
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_140(&Global_54076, &Var3);
	if (!Function_139(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -130,87f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135,09f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 206,26f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 106,17f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 343,64f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 165,38f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -97,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -6,71f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -180.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 22,55f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -104,45f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 270.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 59,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 20,74f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 94,65f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_139(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -39,9f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	bVar7 = VDIST(Var3, Var5);
	if (bVar7 > bVar0)
	{
		bVar0 = bVar7;
		Var1 = Var5;
	}
	Function_146(&Global_99144, 2);
	Function_33(&Global_99144, 1);
	iParam1 = 0;
	if (Function_41(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_139(int iParam0) //Position: 0x8B39 / 35641
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_64(uVar0, 0x1000000) || Function_64(uVar0, 0x2000000)) || Function_64(uVar0, 0x4000000)) || !Function_64(uVar0, 0x10000000));
}

void Function_140(var uParam0, int iParam1) //Position: 0x8B74 / 35700
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_141(var uParam0, bool bParam1) //Position: 0x8B83 / 35715
{
	struct<4> Var0;
	
	if (!Function_223(bParam1))
	{
		return;
	}
	switch (Function_219(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_151(Function_221(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_219(bParam1), Function_221(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_219(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_219(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_219(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_219(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_219(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

void Function_142() //Position: 0x8CAD / 36013
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_47151[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_26088)
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
			straddi(&cVar2, Global_26088[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (!Global_21684[iVar07] != 0)
		{
			Function_143(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_143(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8EF4 / 36596
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_144(int iParam0, int iParam1) //Position: 0x8F20 / 36640
{
	int iVar0;
	
	if (!Function_223(iParam0))
	{
		Function_142();
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
	iVar0 = Function_219(iParam0);
	Global_21684[iParam07].f_4 = 2;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_106(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_221(iParam0);
	}
	Global_6619 = 1;
	return;
}

void Function_145(int iParam0, int iParam1) //Position: 0x8F88 / 36744
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	
	if (!Function_223(iParam0))
	{
		Function_142();
		return;
	}
	iVar0 = Function_219(iParam0);
	Global_21684[iParam07].f_4 = 1;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_106(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_221(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_105(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_62(Global_10966) };
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(iVar11);
		APPEND_JOURNAL_ENTRY(iVar11, 0);
	}
	return;
}

void Function_146(var uParam0, int iParam1) //Position: 0x902F / 36911
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_147(bool bParam0) //Position: 0x9040 / 36928
{
	if (Global_6646 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_6646 = 1;
		if (!Global_42250)
		{
			if (IS_FACTION_VALID(Global_40000))
			{
				SET_FACTIONS_STATUS_TWO_WAY(Global_40000, 2, 6);
			}
		}
		Global_21575 = 0;
	}
	else
	{
		Global_6646 = 0;
		Global_6648 = 0;
		Function_148();
		if (IS_FACTION_VALID(Global_40000))
		{
			SET_FACTIONS_STATUS_TWO_WAY(Global_40000, 2, 2);
		}
		SET_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
		SET_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
		if (IS_SCRIPT_VALID(&Global_39922 + 96))
		{
			TERMINATE_SCRIPT(&Global_39922 + 96);
		}
		if (IS_SCRIPT_VALID(&Global_39922 + 104))
		{
			TERMINATE_SCRIPT(&Global_39922 + 104);
		}
		Global_21575 = 4294967295;
	}
	return;
}

void Function_148() //Position: 0x90CF / 37071
{
	int iVar0;
	
	Global_41176 = Function_149(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_41252[iVar011] != 0)
		{
			(*&Global_41176 + 4)[iVar0] = (*&Global_40060 + 68[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_149(int iParam0) //Position: 0x911D / 37149
{
	if (!Function_150(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_150(int iParam0) //Position: 0x9135 / 37173
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_151(bool bParam0) //Position: 0x914A / 37194
{
	char* cVar0[16];
	
	if (!Function_63())
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

void Function_152(int iParam0) //Position: 0x9184 / 37252
{
	int iVar0;
	
	iVar0 = Function_153(iParam0);
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	Global_53524.f_192 = 0.0f;
	switch (iVar0)
	{
		case 0x00000000:
			Global_53524.f_172 = Function_7(27);
			Global_53524.f_168 = Function_7(42);
			Global_53524.f_176 = CEIL(Function_130(49));
			Global_53524.f_180 = Function_7(49);
			break;
		
		case 0x00000002:
			Global_53524.f_168 = Function_7(355);
			break;
		
		case 0x00000001:
			Global_53524.f_176 = CEIL(Function_130(49));
			Global_53524.f_180 = Function_7(49);
			break;
	}
	return;
}

int Function_153(int iParam0) //Position: 0x920E / 37390
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

int Function_154(int iParam0, char* cParam1) //Position: 0x92A3 / 37539
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_55480[iParam016] + 32, &cParam1, 32);
	if (&bParam2)
	{
		uVar1 = Global_55480[iParam016].f_124;
		Function_155(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &uParam3);
	}
	return 1;
}

void Function_155(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x95FA / 38394
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

int Function_156(int iParam0, bool bParam1, bool bParam2) //Position: 0x9682 / 38530
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
		Function_132(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_131(iParam0);
	if (&bParam2)
	{
		Function_120(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_157() //Position: 0x991E / 39198
{
	WRITE_TO_FILE("New Game Progression Started\n", "C:/MoneyData.csv", 1);
	return;
}

int Function_158(int iParam0, bool bParam1) //Position: 0x995B / 39259
{
	bool bVar0;
	
	bVar0 = Function_7(0);
	if ((Function_7(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_159(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (iParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_7(0));
	return 1;
}

int Function_159(int iParam0, bool bParam1, int iParam2) //Position: 0x99EC / 39404
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
	Function_131(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_120(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

void Function_160() //Position: 0x9BE9 / 39913
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
	Function_161();
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 22);
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 4);
	return;
}

void Function_161() //Position: 0x9D6C / 40300
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	
	iVar0 = 0;
	if (Global_6606)
	{
		return;
	}
	uVar2 = Function_12();
	if (!IS_ACTOR_VALID(&uVar2))
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
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 30.0f, 0);
					break;
				
				case 0x00000027:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 30.0f, 0);
					break;
				
				case 0x0000002B:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 12.0f, 0);
					break;
				
				case 0x0000002A:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 20.0f, 0);
					break;
				
				case 0x00000029:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 20.0f, 0);
					break;
				
				case 0x0000002C:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 20.0f, 0);
					break;
				}
		}
		iVar0++;
	}
	return;
}

void Function_162(int iParam0) //Position: 0x9E45 / 40517
{
	Function_163(iParam0);
	return;
}

void Function_163(int iParam0) //Position: 0x9E50 / 40528
{
	int iVar0;
	
	if (!Function_223(iParam0))
	{
		Function_142();
		return;
	}
	iVar0 = Function_219(iParam0);
	Global_21684[iParam07].f_4 = 0;
	return;
}

void Function_164(int iParam0, int iParam1) //Position: 0x9E74 / 40564
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return;
	}
	Global_39290[iParam0] = &iParam1;
	return;
}

void Function_165(int iParam0, int iParam1) //Position: 0x9E92 / 40594
{
	if (iParam0 >= 4294967295 && iParam0 <= 11)
	{
		return;
	}
	Global_39266[iParam0] = &iParam1;
	return;
}

void Function_166(int iParam0, int iParam1) //Position: 0x9EB0 / 40624
{
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return;
	}
	Global_39258[iParam0] = &iParam1;
	return;
}

void Function_167(int iParam0, int iParam1) //Position: 0x9ECD / 40653
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return;
	}
	Global_39248[iParam0] = &iParam1;
	return;
}

void Function_168(int iParam0, int[] iParam1, var uParam2, bool bParam3) //Position: 0x9EEA / 40682
{
	if (Global_6606 && !Global_6624)
	{
		return;
	}
	if (!&bParam3)
	{
		if (!Function_63())
		{
			Function_172(iParam0, &uParam2, 0);
		}
		else
		{
			Function_169(iParam0, &uParam2, 0);
		}
		iParam1[iParam0] = 1;
	}
	if (Global_6667[iParam028].f_188 != 4294967295)
	{
		if (!iParam1[Global_6667[iParam028].f_188])
		{
			Function_168(Global_6667[iParam028].f_188, &iParam1, &uParam2, 0);
		}
	}
	if (Global_6667[iParam028].f_192 != 4294967295)
	{
		if (!iParam1[Global_6667[iParam028].f_192])
		{
			Function_168(Global_6667[iParam028].f_192, &iParam1, &uParam2, 0);
		}
	}
	if (Global_6667[iParam028].f_196 != 4294967295)
	{
		if (!iParam1[Global_6667[iParam028].f_196])
		{
			Function_168(Global_6667[iParam028].f_196, &iParam1, &uParam2, 0);
		}
	}
	if (Global_6667[iParam028].f_200 != 4294967295)
	{
		if (!iParam1[Global_6667[iParam028].f_200])
		{
			Function_168(Global_6667[iParam028].f_200, &iParam1, &uParam2, 0);
		}
	}
}

void Function_169(int iParam0, var uParam1, bool bParam2) //Position: 0x9FF3 / 40947
{
	struct<4> Var0;
	
	uParam1 = uParam1;
	if (!Function_96(iParam0))
	{
		return;
	}
	if (Global_6624 && Global_10964 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_170(21, &bParam2, 0);
			Function_170(16, &bParam2, 0);
			SET_DISABLE_DEADEYE(0, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, true);
			SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_151(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

int Function_170(bool bParam0, bool bParam1, int iParam2) //Position: 0xA095 / 41109
{
	if (!Function_171(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_12(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_12(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_12(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_171(int iParam0) //Position: 0xA0EF / 41199
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_172(int iParam0, var uParam1, bool bParam2) //Position: 0xA101 / 41217
{
	struct<4> Var0;
	
	if (!Function_96(iParam0))
	{
		return;
	}
	if (Global_6624 && Global_10964 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_170(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_211(Global_46760[0]);
			Function_211(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_209(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_211(Global_46816[0]);
			Function_201(0);
			Function_199(2, 1);
			Function_199(0, 1);
			Function_199(1, 1);
			break;
		
		case 0x00000003:
			Function_211(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_211(Global_46816[0]);
			Function_211(Global_46760[0]);
			Function_197(0, 1);
			Function_197(15, 1);
			Function_197(9, 1);
			Function_197(12, 1);
			Function_197(16, 1);
			Function_199(3, 1);
			break;
		
		case 0x00000005:
			Function_211(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_209(21, &bParam2, 4);
			Function_211(Global_46816[0]);
			Function_199(39, 1);
			break;
		
		case 0x00000007:
			Function_211(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_211(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_196())
				{
					if (!Function_195(4))
					{
						Function_187(4, 0, 0, 1, 0);
					}
				}
			}
			Function_211(Global_46760[0]);
			Function_211(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_211(Global_46760[0]);
			Function_211(Global_46816[2]);
			Function_249(&(Global_43791[Global_46816[2]]), 32768);
			Function_247(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_209(9, &bParam2, 4);
			Function_211(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_211(Global_46760[0]);
			Function_211(Global_46796[0]);
			Function_249(&(Global_43791[Global_46796[0]]), 32768);
			Function_247(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_211(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_211(Global_46760[0]);
			Function_211(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_211(Global_46760[1]);
			Function_211(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_211(Global_46838[0]);
			Function_211(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_211(Global_46796[5]);
			Function_211(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_209(21, &bParam2, 4);
			Function_211(Global_46760[4]);
			Function_211(Global_46796[4]);
			Function_186(&Global_119935, 0x2000000);
			Function_186(&Global_119935, 0x4000000);
			Function_186(&Global_119935, 4096);
			Function_186(&Global_119935, 8);
			Function_186(&Global_119935, 8388608);
			Function_186(&Global_119935, 524288);
			Function_186(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_211(Global_46760[4]);
			Function_211(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_247(&(Global_43791[Global_46760[4]]), 256);
			Function_211(Global_46760[4]);
			Function_211(Global_46796[0]);
			Function_249(&(Global_43791[Global_46796[0]]), 32768);
			Function_247(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_211(Global_46760[0]);
			Function_211(Global_46760[5]);
			Function_209(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_211(Global_46796[3]);
			Function_249(&(Global_43791[Global_46796[3]]), 32768);
			Function_247(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_209(9, &bParam2, 4);
			Function_211(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_249(&(Global_43791[Global_46838[1]]), 32768);
			Function_211(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_209(12, &bParam2, 4);
			Function_247(&(Global_43791[Global_46838[1]]), 256);
			Function_211(Global_46816[3]);
			Function_211(Global_46866[0]);
			Function_211(Global_46850[0]);
			Function_201(4);
			Function_197(13, 1);
			Function_197(1, 1);
			Function_197(18, 1);
			Function_199(34, 1);
			Function_199(44, 1);
			Function_199(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_209(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_211(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_211(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_211(Global_46866[0]);
			Function_211(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_211(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_211(Global_46850[0]);
			Function_211(Global_46866[0]);
			Function_211(Global_46866[1]);
			Function_211(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_209(23, &bParam2, 3);
			Function_197(23, 1);
			Function_211(Global_46850[0]);
			Function_211(Global_46850[2]);
			Function_249(&(Global_43791[Global_46850[2]]), 32768);
			Function_247(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_209(19, &bParam2, 4);
			Function_211(Global_46850[0]);
			Function_211(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_209(24, &bParam2, 3);
			Function_197(24, 1);
			Function_211(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_211(Global_46850[0]);
			Function_211(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_211(Global_46866[12]);
			Function_211(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_211(Global_46866[12]);
			Function_211(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_209(25, &bParam2, 10);
			Function_211(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_211(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_211(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_209(13, &bParam2, 4);
			Function_211(Global_46866[2]);
			Function_211(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_195(8))
				{
					Function_187(8, 0, 0, 1, 0);
				}
			}
			Function_211(Global_46850[0]);
			Function_201(9);
			Function_197(7, 1);
			Function_197(11, 1);
			Function_197(3, 1);
			Function_197(20, 1);
			Function_199(57, 1);
			break;
		
		case 0x0000002A:
			Function_209(2, &bParam2, 4);
			Function_211(Global_46914[0]);
			Function_211(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_211(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_211(Global_46914[0]);
			Function_211(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_211(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_211(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_211(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_209(17, &bParam2, 4);
			Function_211(Global_46926[0]);
			Function_211(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_184(15))
				{
					Function_177(15, 0, 1);
				}
			}
			Function_176(2, 26);
			Function_247(&(Global_43791[Global_46914[1]]), 256);
			Function_201(11);
			Function_211(Global_46914[1]);
			Function_211(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_211(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_211(Global_46914[1]);
			Function_211(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_211(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_211(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_211(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_211(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_211(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_211(Global_46914[1]);
			Function_173(11);
			Function_201(12);
			Global_26200[1114].f_40 = 0;
			Function_199(56, 1);
			if (!&bParam2)
			{
				if (!Function_195(9))
				{
					Function_187(9, 0, 0, 0, 0);
				}
				if (!Function_195(10))
				{
					Function_187(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_151(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_173(int iParam0) //Position: 0xAA1C / 43548
{
	var uVar0;
	
	if (!Function_136(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_175(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_175(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), false);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (!DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse", true);
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Global_26200[iParam014].f_40 = 6;
			Function_174(Global_26200[iParam014].f_48, 16, 0, 0);
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_SET_BOOL(&uVar0, "PlayerHouse_NoHorse", true);
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_REMOVE(&Global_26200[iParam014] + 104, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_174(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xAB99 / 43929
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal && Global_15863[iVar02] != iParam0 != iParam1)
			{
				Global_15863[iVar02] = 4294967294;
				Global_15863[iVar02].f_4 = 0;
				Global_15863[iVar02].f_8 = 0;
				if (IS_BLIP_VALID(&(Global_16865[iVar0])))
				{
					REMOVE_BLIP(&(Global_16865[iVar0]));
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_38(Function_39(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_38(Function_39(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_38(StackVal);
				Var1 = Function_38(StackVal);
				if (Function_37(StackVal, StackVal, Var1, Var3))
				{
					Global_15863[iVar02] = 4294967294;
					Global_15863[iVar02].f_4 = 0;
					Global_15863[iVar02].f_8 = 0;
					if (IS_BLIP_VALID(&(Global_16865[iVar0])))
					{
						REMOVE_BLIP(&(Global_16865[iVar0]));
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

void Function_175(var uParam0, int iParam1) //Position: 0xACA4 / 44196
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "lockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "unlockMe"))
	{
		DECOR_REMOVE(&uParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 1);
	}
	return;
}

void Function_176(int iParam0, int iParam1) //Position: 0xACFF / 44287
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bVar0);
	return;
	return;
}

void Function_177(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAD69 / 44393
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_183(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_184(bParam0))
	{
		if (!Function_195(bParam0))
		{
			Function_187(bParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_42265[bParam09].f_64 != 4294967295 || (Global_42265[bParam09].f_64 != 0 && Global_42265[bParam09].f_28 < 0))
		{
			Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_42265[bParam09].f_64);
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, false, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_181(457, 1, 0, 0);
		Function_180(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_230(0, 0, 1, 1))
			{
				Function_106(1);
				Function_179(1, 0);
			}
			else
			{
				Function_178();
			}
		}
	}
	return;
}

void Function_178() //Position: 0xAF0A / 44810
{
	return;
}

void Function_179(int iParam0, int iParam1) //Position: 0xAF10 / 44816
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = iParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_180(bool bParam0, int iParam1) //Position: 0xAF4F / 44879
{
	if (!Function_183(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

int Function_181(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xAFA4 / 44964
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
	Function_132(iParam0, TO_FLOAT(bParam1), 1);
	Function_131(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_120(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_182(iParam0);
	return 1;
}

void Function_182(int iParam0) //Position: 0xB1CC / 45516
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

bool Function_183(int iParam0) //Position: 0xB26A / 45674
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_184(int iParam0) //Position: 0xB280 / 45696
{
	if (!Function_183(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_185(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_185(int iParam0, int iParam1) //Position: 0xB2D1 / 45777
{
	int iVar0;
	
	if (!Function_183(iParam0))
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

void Function_186(var uParam0, int iParam1) //Position: 0xB2FE / 45822
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_187(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xB30F / 45839
{
	char* cVar0[32];
	
	if (!Function_183(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_194(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_195(bParam0))
	{
		Function_181(456, 1, 0, 0);
		Function_180(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_230(0, 0, 1, 1))
			{
				Function_106(1);
				Function_179(1, 5);
			}
			else
			{
				Function_178();
			}
		}
		Function_188(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_46() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_46() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_61(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_63())
		{
			if (!Function_34(Global_119934, 2))
			{
				Function_28(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_188(bool bParam0) //Position: 0xB46B / 46187
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 1))
	{
		Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 0);
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_192(bParam0, Function_193(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_192(bParam0, Function_193(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_191(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_190(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_189(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_189(int iParam0) //Position: 0xB61B / 46619
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_183(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

void Function_190(char* cParam0, bool bParam1) //Position: 0xB672 / 46706
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

var Function_191(int iParam0) //Position: 0xB697 / 46743
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_183(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

bool Function_192(bool bParam0, int iParam1) //Position: 0xB6ED / 46829
{
	int iVar0;
	
	if (!Function_183(bParam0))
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

int Function_193(bool bParam0) //Position: 0xB74C / 46924
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_194(int iParam0) //Position: 0xB758 / 46936
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_195(int iParam0) //Position: 0xB774 / 46964
{
	if (!Function_183(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_185(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_196() //Position: 0xB7C6 / 47046
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_64(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_197(int iParam0, int iParam1) //Position: 0xB7F6 / 47094
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_198(iParam0, iParam1);
	Function_28(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_198(int iParam0, int iParam1) //Position: 0xB86B / 47211
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_199(int iParam0, int iParam1) //Position: 0xB8C8 / 47304
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_200(iParam0, iParam1);
	Function_28(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_200(int iParam0, int iParam1) //Position: 0xB93B / 47419
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_201(int iParam0) //Position: 0xB996 / 47510
{
	var uVar0;
	var uVar1;
	
	if (!Function_136(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_208(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_208(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), true);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Function_181(468, 1, 0, 0);
			Function_176(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_61("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_174(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_187(14, 1, 0, 0, 0);
				Function_202(14, 1, 0, 0, 0);
			}
			if (!Function_230(0, 0, 1, 1))
			{
				Function_106(1);
				Function_179(1, 6);
			}
			else
			{
				Function_178();
			}
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_REMOVE(&uVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", true);
			}
			break;
		
		case 0x00000001:
			uVar1 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar1))
			{
				DECOR_REMOVE(&uVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", true);
			}
			Global_26200[iParam014].f_40 = 4;
			Function_61("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_181(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_176(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_202(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0xBC56 / 48214
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_183(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_194(3) || uParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_185(bParam0, 2))
	{
		Function_181(456, 1, 0, 0);
		Function_180(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_61(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_192(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_180(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_230(0, 0, 1, 1))
			{
				Function_106(1);
				Function_179(1, 0);
			}
			else
			{
				Function_178();
			}
		}
		Function_188(bParam0);
		if (StackVal && !Function_64(((((!Function_46() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_64((((Function_46() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_63())
		{
			if (!Function_34(Global_119934, 2))
			{
				Function_28(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_204();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_203(3, bParam1);
				break;
			
			case 0x00000005:
				Function_203(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_203(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_203(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_203(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_203(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_176(2, 24);
				break;
			
			case 0x00000003:
				Function_176(2, 25);
				break;
			
			case 0x0000000F:
				Function_176(2, 26);
				break;
			
			case 0x0000000D:
				Function_176(2, 27);
				break;
			
			case 0x0000000E:
				Function_176(2, 28);
				break;
			}
	}
}

void Function_203(int iParam0, bool bParam1) //Position: 0xBEF5 / 48885
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&bParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_204() //Position: 0xBF64 / 48996
{
	if (Function_183(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_207(Global_42827);
			*(&Global_42827 + 8) = Function_205(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_207(Global_42827);
			*(&Global_42827 + 8) = Function_205(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_205(int iParam0, int iParam1) //Position: 0xBFE4 / 49124
{
	struct<2> Var0;
	struct<9> Var2;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar13 = 1;
	iVar14 = 1;
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[2]9] + 8;
					strcpy(&cVar5, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_248(6, 0) || Function_248(12, 0))
					{
						cVar4 = &Global_44085[Global_46760[1]9] + 8;
					}
					strcpy(&cVar5, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-2177,057f, 16,426f, 2626,285f);
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46736[2]9] + 8;
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[7]9] + 8;
					strcpy(&cVar5, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_206(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_248(5, 0))
					{
						Var0 = Vector(-4120,147f, 18,356f, 3039,531f);
						vVar2 = Vector(500.0f, 500.0f, 500.0f);
						iVar14 = 0;
					}
					strcpy(&cVar5, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46796[3]9] + 8;
					strcpy(&cVar5, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46850[3]9] + 8;
					strcpy(&cVar5, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46894[2]9] + 8;
					strcpy(&cVar5, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-4178,186f, 32,616f, 4582,207f);
					vVar2 = Vector(500.0f, 500.0f, 500.0f);
					strcpy(&cVar5, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46866[4]9] + 8;
					strcpy(&cVar5, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_206(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_206(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_206(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_206(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_248(26, 0))
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_206(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_206(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_206(27) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46894[3]9] + 8;
					strcpy(&cVar5, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46850[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46926[5]9] + 8;
					strcpy(&cVar5, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46926[2]9] + 8;
					strcpy(&cVar5, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_206(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_206(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_206(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_206(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_248(17, 0) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					strcpy(&cVar5, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46760[4]9] + 8;
					strcpy(&cVar5, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46760[2]9] + 8;
					strcpy(&cVar5, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_206(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_248(6, 0) && Function_206(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_206(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_248(9, 0) && Function_206(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_206(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_248(8, 0) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					strcpy(&cVar5, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_41(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_41(StackVal, vVar2))
			{
				if (GET_OBJECT_TYPE(&cVar4) == 9)
				{
					GET_VOLUME_SCALE(&cVar4, &vVar2);
				}
				else
				{
					vVar2 = Vector(200.0f, 200.0f, 200.0f);
				}
			}
		}
	}
	if (!Function_41(StackVal, vVar2))
	{
		iVar18 = ADD_BLIP_FOR_COORD(&Var0, 440, 0, 2, 0);
		SET_BLIP_SCALE(&iVar18, ((vVar2.x + vVar2.z) / 2.0f));
		SET_BLIP_COLOR(&iVar18, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(&iVar18, 3);
		SET_BLIP_NAME(&iVar18, &cVar5);
		return &iVar18;
	}
	return "";
}

int Function_206(int iParam0) //Position: 0xCC4D / 52301
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_207(int iParam0) //Position: 0xCC62 / 52322
{
	int iVar0;
	int iVar1;
	
	if (!Function_183(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

void Function_208(var uParam0, int iParam1) //Position: 0xCCB1 / 52401
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "unlockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "lockMe"))
	{
		DECOR_REMOVE(&uParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 0);
	}
	return;
}

void Function_209(bool bParam0, bool bParam1, int iParam2) //Position: 0xCD09 / 52489
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_210(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_170(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_6624 && &iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_210(int iParam0, int iParam1) //Position: 0xCD7C / 52604
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_211(int iParam0) //Position: 0xCD90 / 52624
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_213(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_249(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_181(473, 1, 0, 0);
		iVar0 = Function_212(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_181(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_181(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_181(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_44085[iParam09].f_64 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_176(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_176(7, 30);
	}
	if (Function_129(473) <= Function_130(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_212(int iParam0) //Position: 0xCE81 / 52865
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
			iVar0 = Global_44085[iParam09];
		}
		else
		{
			iVar0 = Global_44085[iParam09];
			iVar0 = Global_44085[iVar09];
		}
	}
	return iVar0;
}

bool Function_213(int iParam0, int iParam1) //Position: 0xCED9 / 52953
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_214() //Position: 0xCEF6 / 52982
{
	Function_215(512);
	Global_42252 = 0.0f;
	UNK_0x598815BD(Global_42252);
	if (IS_SCRIPT_VALID(&Global_39922 + 104))
	{
		TERMINATE_SCRIPT(&Global_39922 + 104);
	}
	if (IS_SCRIPT_VALID(&Global_39922 + 96))
	{
		TERMINATE_SCRIPT(&Global_39922 + 96);
	}
	return;
}

void Function_215(int iParam0) //Position: 0xCF36 / 53046
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_216(int iParam0, int iParam1) //Position: 0xCF49 / 53065
{
	if (!Function_223(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

void Function_217(struct<185> Param0) //Position: 0xCF64 / 53092
{
	if (Param0.f_184 & 114688 == 0)
	{
		return;
	}
	if (Param0.f_184 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (Param0.f_184 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (Param0.f_184 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_218(4, 0, 0);
		}
	}
	return;
}

void Function_218(bool bParam0, var uParam1, int iParam2) //Position: 0xCFCF / 53199
{
	var uVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_26182 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_26182 = Global_26182.f_48;
	}
	else
	{
		Global_26182 = StackVal;
	}
	Global_26182.f_4 = 4294967295;
	Global_26182.f_24 = 0;
	if (!StackVal != Global_26182)
	{
		uVar0 = MAKE_TIME_OF_DAY(bParam0, &uParam1, &iParam2);
		Function_74(Global_26182, &uVar0, 1);
	}
	return;
}

int Function_219(bool bParam0) //Position: 0xD0B9 / 53433
{
	if (!Function_220(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

bool Function_220(int iParam0) //Position: 0xD0D4 / 53460
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_221(int iParam0) //Position: 0xD0EB / 53483
{
	if (!Function_220(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

struct<112> Function_222(struct<28>[] Param0, int iParam1) //Position: 0xD10B / 53515
{
	int iVar0;
	struct<28> Var1;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (StackVal == iParam1)
		{
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0[iVar028];
		}
		iVar0++;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var1;
}

bool Function_223(int iParam0) //Position: 0xD148 / 53576
{
	if (!Function_220(iParam0))
	{
		return 0;
	}
	if (!Function_224(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_224(int iParam0) //Position: 0xD16C / 53612
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_225(bool bParam0, bool bParam1, bool bParam2) //Position: 0xD181 / 53633
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_229(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_226(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_226(bParam0, bParam1, bParam2, 4294967295);
}

int Function_226(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xD1DF / 53727
{
	var uVar0;
	
	if (!Function_228(bParam2))
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
	uVar0 = Function_229(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_227(uVar0);
	}
	if (&iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (&iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_21684[&iParam37] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_25536[&iParam3] = 0;
		Global_21684[&iParam37].f_4 = 0;
		Global_21684[&iParam37].f_8 = 0;
		Global_21684[&iParam37].f_12 = 0;
		Global_21684[&iParam37].f_16 = 0;
		Global_21684[&iParam37] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_227(int iParam0) //Position: 0xD343 / 54083
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iParam0)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_228(int iParam0) //Position: 0xD381 / 54145
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_229(int iParam0, int iParam1, int iParam2) //Position: 0xD396 / 54166
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_230(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xD3B6 / 54198
{
	iParam0 = &iParam0;
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
	if (Global_6636 && iParam2)
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
	if (Global_93258 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_231(int iParam0) //Position: 0xD465 / 54373
{
	return IS_OBJECT_VALID(Function_232(&iParam0));
}

var Function_232(int iParam0) //Position: 0xD474 / 54388
{
	return &iParam0 + 32;
}

void Function_233(int iParam0, int iParam1) //Position: 0xD480 / 54400
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_38380[iVar036] != 128 || Global_38380[iVar036] != 64) && &iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(&Global_38380[iVar036] + 48) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(&Global_38380[iVar036] + 48);
			Function_234(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_234(struct<113> Param0) //Position: 0xD507 / 54535
{
	Param0.f_112 = 0;
	Param0.f_4 = 0;
	Param0.f_12 = 4294967295;
	(&Param0 + 16) = "";
	*(&Param0 + 24) = Vector(0.0f, 0.0f, 0.0f);
	*(&Param0 + 36) = Vector(0.0f, 0.0f, 0.0f);
	(&Param0 + 48) = "";
	(&Param0 + 72) = "";
	Param0.f_56 = 4294967295;
	(&Param0 + 64) = "";
	Param0.f_108 = 0.0f;
	Param0.f_96 = 0;
	return;
}

int Function_235(int iParam0) //Position: 0xD565 / 54629
{
	if (!Function_42(iParam0))
	{
		return 0;
	}
	return Function_213(&(Global_43791[iParam0]), 2048);
}

int Function_236(int iParam0) //Position: 0xD583 / 54659
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_237(struct<28>[] Param0) //Position: 0xD5A1 / 54689
{
	int iVar0;
	
	if (!Global_47151[5])
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		PRINTSTRING(UI_GET_STRING(&Param0[iVar028] + 16));
		PRINTSTRING(" - ");
		switch (Function_95(StackVal))
		{
			case 0x00000003:
				PRINTSTRING("nCompleted");
				break;
			
			case 0x00000004:
				PRINTSTRING("Completed(Cheated)");
				break;
			
			case 0x00000000:
				if (Function_94(&(Param0[iVar028])))
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

void Function_238() //Position: 0xD6B2 / 54962
{
	float fVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	uVar2 = UNK_0x191658C0();
	PRINTSTRING("TEST: Running External Script: ");
	PRINTSTRING(&uVar2);
	PRINTNL();
	if (IS_STRING_VALID(&uVar2))
	{
		if (DOES_SCRIPT_EXIST(&uVar2))
		{
			uVar3 = LAUNCH_NEW_SCRIPT(&uVar2, 0);
			fVar0 = GET_CURRENT_GAME_TIME();
			while ((!IS_SCRIPT_VALID(&uVar3) && !bVar1) && !IS_EXITFLAG_SET())
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
				PRINTSTRING(&uVar2);
				PRINTNL();
			}
			fVar0 = GET_CURRENT_GAME_TIME();
			while (IS_SCRIPT_VALID(&uVar3) && !IS_EXITFLAG_SET())
			{
				WAIT(false);
			}
		}
		else
		{
			LOG_ERROR("TEST: CANNOT FIND CUSTOM SCRIPT FOR AUTOMATED TESTER");
			PRINTSTRING("TEST: CANNOT FIND SCRIPT: ");
			PRINTSTRING(&uVar2);
			PRINTNL();
		}
	}
	PRINTSTRING("TEST: External Script Complete");
	PRINTNL();
	LOG_ERROR("TEST: COMPLETE");
	Global_98253 = 4294967197;
	Global_98254 = 0;
	return;
}

void Function_239() //Position: 0xD866 / 55398
{
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), true);
	Function_246(4294967295, 4294967295);
	Function_243();
	Global_98250 = 1;
	PRINTSTRING("TEST: Currently Testing Region 0 - FRONTIER");
	PRINTNL();
	if (Global_98254 > 0 || Global_98254 <= Global_6667)
	{
		Global_98253 = 4294967197;
		Global_98254 = 0;
		return;
	}
	Function_241();
	Global_98250 = 1;
	Function_240();
	LAUNCH_NEW_SCRIPT("content/scripting/DesignerDefined/AutomatedTester/MissionTester", 0);
	return;
}

int Function_240() //Position: 0xD927 / 55591
{
	var uVar0;
	
	uVar0 = UNK_0x32D1DEB0();
	if (IS_STRING_VALID(&uVar0))
	{
		if (STRINGS_ARE_EQUAL(&uVar0, "Single"))
		{
			return 1;
		}
	}
	return 0;
}

void Function_241() //Position: 0xD951 / 55633
{
	Function_242(25, 2);
	return;
}

void Function_242(int iParam0, int iParam1) //Position: 0xD95D / 55645
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "HEADERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "FOOTERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nHEADERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "POINTER");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_243() //Position: 0xDB89 / 56201
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_245())
	{
		Function_244(10, 3);
	}
	else
	{
		Function_241();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_12(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_12());
	UI_POP("nDebugMenu");
	return;
}

void Function_244(int iParam0, int iParam1) //Position: 0xDBD4 / 56276
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

bool Function_245() //Position: 0xDD21 / 56609
{
	if (Global_6623)
	{
		return 1;
	}
	if (Global_6625)
	{
		return 1;
	}
	if (Global_6635)
	{
		return 1;
	}
	if (Global_6627)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(&Global_124165))
	{
		switch (Global_124175.f_32)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_64(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void Function_246(int iParam0, int iParam1) //Position: 0xDD89 / 56713
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_247(var uParam0, int iParam1) //Position: 0xDED6 / 57046
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_248(int iParam0, bool bParam1) //Position: 0xDEF0 / 57072
{
	int iVar0;
	
	iVar0 = Function_67(iParam0);
	if (!Function_220(iVar0))
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

void Function_249(var uParam0, int iParam1) //Position: 0xDF2E / 57134
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_250(int iParam0) //Position: 0xDF3F / 57151
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: CompanionsList is full.");
		return;
	}
	if (Global_15402[iParam014].f_32)
	{
		STREAMING_EVICT_ACTOR(&Global_15402[iParam014] + 16, 4294967295);
	}
	if (IS_ACTOR_VALID(&Global_15402[iParam014] + 8))
	{
		DESTROY_ACTOR(&Global_15402[iParam014] + 8);
	}
	if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		DESTROY_PERS_CHAR(&(Global_15402[iParam014]));
	}
	return;
}

