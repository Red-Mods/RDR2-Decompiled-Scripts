//Decompiled with MagicRDR v1.0
//Function Count : 266
//Statics Count : 165
//Natives Count : 377
//Parameters Count : 51

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 2;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0.0f;
	bool bLocal_21 = false;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	bool bLocal_27 = false;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	bool bLocal_33 = false;
	int iLocal_34 = 0;
	float fLocal_35 = 0.0f;
	vector3 vLocal_36 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_39 = false;
	bool bLocal_40 = false;
	char* cLocal_41[16] = "";
	int iLocal_45 = 0;
	bool bLocal_46 = false;
	bool bLocal_47 = false;
	bool bLocal_48 = false;
	bool bLocal_49 = false;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	struct<73> Local_53 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 1;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5[3];
	int iVar9[4];
	bool bVar14;
	int iVar69;
	int iVar70;
	int iVar71;
	var uVar72;
	int iVar73;
	var uVar74;
	var uVar75;
	int iVar76;
	int iVar77;
	vector3 vVar78;
	int iVar81;
	int iVar82;
	bool bVar83;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	bLocal_21 = false;
	iLocal_25 = 0;
	iLocal_26 = 0;
	bLocal_27 = false;
	iLocal_28 = 1;
	iLocal_29 = 1;
	iLocal_34 = 0;
	strcpy(&cLocal_41, "thief", 16);
	iLocal_45 = 0;
	bLocal_46 = false;
	bLocal_47 = false;
	bLocal_48 = false;
	bLocal_49 = false;
	iLocal_50 = 0;
	iLocal_51 = 0;
	iLocal_52 = 0;
	fLocal_102 = 240.0f;
	fLocal_104 = 0.0f;
	iLocal_106 = 0;
	bLocal_112 = false;
	iLocal_113 = 0;
	iVar0 = 0;
	uVar1 = Function_251(Global_29005, 0x42a00000, 0x469c4000, 0, 0, 4294967295);
	iVar2 = 0;
	bVar4 = false;
	bVar14 = 18;
	Function_250(&uLocal_30, 0.0f);
	iVar70 = 0;
	iVar71 = 0;
	uVar72 = Function_248(1, 1, 1, 0, 0);
	if (!IS_POPSET_VALID(Global_30750[0]) || !IS_POPSET_VALID(Global_30750[6]))
	{
		iVar0 = 5;
	}
	else
	{
		switch (Global_29004)
		{
			case 0x00000000:
				iVar69 = Function_247(4, 3);
				switch (iVar69)
				{
					case 0x00000000:
						bLocal_48 = true;
						iVar9[0] = 51;
						break;
					
					case 0x00000001:
						iVar9[0] = 154;
						break;
					
					case 0x00000002:
						iVar9[0] = 165;
						break;
				}
				break;
			
			case 0x00000001:
				if (Function_247(4, 2) == 0)
				{
					iVar9[0] = 303;
				}
				else
				{
					iVar9[0] = 306;
				}
				break;
			
			case 0x00000002:
				iVar69 = Function_247(4, 3);
				switch (iVar69)
				{
					case 0x00000000:
						iVar9[0] = 43;
						break;
					
					case 0x00000001:
						iVar9[0] = 89;
						break;
					
					case 0x00000002:
						iVar9[0] = 197;
						break;
				}
				break;
		}
		iVar9[1] = Function_238(Global_30750[0], 1, 2, 1);
		if (iVar9[0] != 43 || iVar9[0] != 51)
		{
			iVar9[2] = 1183;
		}
		else
		{
			iVar9[2] = RAND_INT_RANGE(1183, 1188);
		}
		iVar9[3] = Function_238(Global_30750[6], 1, 0, 1);
		if (((iVar9[0] != 4294967295 || iVar9[1] != 4294967295) || iVar9[2] != 4294967295) || iVar9[3] != 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			Function_237(&bVar14, iVar9[0], 3, 0);
			Function_237(&bVar14, iVar9[1], 3, 0);
			Function_237(&bVar14, iVar9[3], 3, 0);
			Function_237(&bVar14, iVar9[2], 3, 0);
			Function_235(&bVar14, "p_gen_suitcase01x", 0, 0);
			Function_235(&bVar14, "nthank_you", 5, 0);
			Function_235(&bVar14, "custom/thank_you", 8, 0);
			Function_235(&bVar14, "stolen_pleading", 5, 0);
			Function_235(&bVar14, "custom/stolen_pleading", 8, 0);
			Function_235(&bVar14, "stolen_panic", 5, 0);
			Function_235(&bVar14, "custom/stolen_panic", 8, 0);
			Function_235(&bVar14, "excited_return", 5, 0);
			Function_235(&bVar14, "custom/excited_return", 8, 0);
			Function_235(&bVar14, "thanks", 5, 0);
			Function_235(&bVar14, "custom/thanks", 8, 0);
			Function_235(&bVar14, "plead_wait_excite", 5, 0);
			Function_235(&bVar14, "custom/plead_wait_excite", 8, 0);
			Function_234(&iVar9, 3);
			if (Global_3382 == 1)
			{
				iVar0 = 5;
			}
			bVar3 = CREATE_LAYOUT(Function_233());
			if (!IS_LAYOUTREF_VALID(bVar3))
			{
				iVar0 = 5;
			}
		}
	}
	iVar73 = 0;
	iVar76 = 4294967295;
	iVar77 = 0;
	vVar78.x = 1.0f;
	iVar82 = 0;
	bVar83 = false;
	while (!IS_EXITFLAG_SET())
	{
		iVar81 = 600;
		if (Function_232(&bVar83, &iVar0, &iVar82, &iVar81, bVar4))
		{
			if (bVar83)
			{
				Function_230(&bVar5, 2);
			}
			else
			{
				Function_228(&bVar5, 2);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_222(&bVar14))
				{
					iVar0 = 1;
				}
				break;
			
			case 0x00000001:
				if (Function_188(&ScriptParam_0, &iVar81, &iVar77, &iVar73, 1))
				{
					iVar0 = 2;
				}
				else if (iVar73 == 1)
				{
					iVar0 = 5;
				}
				break;
			
			case 0x00000002:
				bLocal_33 = CREATE_POINT_IN_LAYOUT(bVar3, Function_233(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bLocal_33, Global_34573, Function_233(), 0.0f, 0.5f, -2.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				if (VDIST(Global_34574, *(&ScriptParam_0 + 8)) > Function_187())
				{
					PRINTVECTOR(*(&ScriptParam_0 + 8));
					PRINTNL();
					PRINTVECTOR(Global_34574);
					PRINTNL();
					iVar0 = 5;
					iVar81 = 0;
					break;
				}
				else
				{
					memcpy(&cLocal_41, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_185("thief"), 4);
					bVar5[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(&cLocal_41, bVar3, StackVal) + Vector(vVar78, *(&ScriptParam_0 + 8), iVar9[0]), *(&ScriptParam_0 + 20));
					SET_ACTOR_CAN_PLAY_GESTURES(bVar5[0], false);
					DELETE_ALL_WEAPONS_FROM_ACTOR(bVar5[0]);
					vVar78.x = (vVar78.x + vVar78.x);
					Function_184(bVar5[0]);
					memcpy(&cLocal_41, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_185("thief"), 4);
					bVar5[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(&cLocal_41, bVar3, StackVal) + Vector(vVar78, *(&ScriptParam_0 + 8), iVar9[1]), *(&ScriptParam_0 + 20));
					SET_ACTOR_CAN_PLAY_GESTURES(bVar5[1], false);
					SET_ACTOR_UPDATE_PRIORITY(bVar5[1], false);
					vVar78.x = (vVar78.x + vVar78.x);
					DECOR_SET_BOOL(bVar5[1], "criminal", 1);
					memcpy(&cLocal_41, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_185("thief"), 4);
					bVar5[2] = Function_180(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(iVar9[2], &cLocal_41, bVar3) + Vector(vVar78, *(&ScriptParam_0 + 8), iVar9[3]), *(&ScriptParam_0 + 20), 1, 976, 976, 976, 4);
					vVar78.x = (vVar78.x + vVar78.x);
					if ((iVar9[2] != 1184 || iVar9[2] != 1185) || iVar9[2] != 1186)
					{
						bLocal_103 = CREATE_PROP_IN_LAYOUT(bVar3, Function_233(), "p_gen_suitcase01x", *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 0);
						ATTACH_OBJECTS_NO_DRV(bLocal_103, bVar5[2], Function_233(), -0.3f, 0.789f, 2.258f, 0.0f, 9.648f, 0.0f);
						SET_OBJECT_COLLIDE_WITH_MOVABLES(bLocal_103, 0);
					}
					SET_ACTOR_IN_VEHICLE(bVar5[1], bVar5[2], 0);
					TASK_STAND_STILL(bVar5[0], -1.0f, 0, 0);
					TASK_PRIORITY_SET(bVar5[0], 0);
					Function_179(bVar5[1]);
					Function_179(bVar5[2]);
					Function_178(bVar5[1], 0);
					Function_176(StackVal, StackVal, &uVar74, &uVar75, &iVar76, 5.0f, *(&ScriptParam_0 + 8));
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar5[0], 0);
					UNK_0x99AFD2D1(bVar5[0], 1, 1);
					Function_175(&iLocal_24, 16);
					iVar0 = 3;
					iVar81 = 0;
				}
				break;
			
			case 0x00000003:
				if (IS_ACTOR_VALID(bVar5[2]))
				{
					if ((GET_ACTOR_IN_VEHICLE_SEAT(bVar5[2], 0) != "" && iVar70 > 6) && iLocal_50)
					{
						if (Function_173(bVar5[0], 0))
						{
							iLocal_25 = 1;
							if (Function_172(bVar5[0], bVar5[2]) > 25.0f)
							{
								if (Function_172(Global_34573, bVar5[0]) < 50.0f)
								{
									bLocal_21 = true;
									iVar70 = 9;
								}
								else
								{
									iVar70 = 8;
								}
							}
						}
					}
				}
				Function_159(&bVar5, 3, &bVar4, ScriptParam_0.f_56, 100, 0x42a00000, 1);
				if (!Function_158(bVar5[2], 1, 1, 2))
				{
					Function_156("crimeWagonThief_fail04", iLocal_45, 1);
					iVar0 = 5;
					iVar81 = 0;
					break;
				}
				if (!Function_149(ScriptParam_0.f_56, bVar5[0], &iLocal_25, &iVar2, iLocal_45, 1, 1, 1))
				{
					if (Global_3403 || Global_3404)
					{
						Function_156("victimFailAggroDanger", iLocal_45, 1);
					}
					iVar0 = 5;
					iVar81 = 0;
					break;
				}
				switch (iVar71)
				{
					case 0x00000000:
						if (!Function_146(bVar5[0], Global_34573, Function_147(1)))
						{
							iVar0 = 5;
							iVar81 = 0;
							break;
						}
						if (!Function_173(bVar5[0], 0))
						{
							iVar0 = 5;
							iVar81 = 0;
							break;
						}
						break;
					
					case 0x00000001:
						if (iVar70 <= 6)
						{
							if (!Function_146(bVar5[2], Global_34573, fLocal_102))
							{
								if (Function_173(bVar5[1], 0))
								{
									Function_156("crimeWagonThief_fail01", iLocal_45, 1);
								}
								else
								{
									Function_156("crimeWagonThief_fail05", iLocal_45, 1);
								}
								if (IS_BLIP_VALID(bLocal_39))
								{
									REMOVE_BLIP(bLocal_39);
								}
								AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar5[0], 1);
								UNK_0x99AFD2D1(bVar5[0], 0, 0);
								RESET_ANIM_SET_FOR_ACTOR(bVar5[0], 1);
								FORCE_LOOK_AT_ACTOR(bVar5[0], Global_34573, 8.0f);
								TASK_TAUNT_ACTOR_IN_PLACE(bVar5[0], Global_34573, -1f);
								Function_250(&uLocal_107, 0.0f);
								iVar70 = 11;
							}
						}
						break;
					
					case 0x00000002:
						if (!Function_146(bVar5[0], Global_34573, (fLocal_35 + 80.0f)))
						{
							Function_141(4294967246, 1, 0);
							Function_156("crimeWagonThief_fail03", iLocal_45, 1);
							iVar0 = 5;
							iVar81 = 0;
							break;
						}
						break;
				}
				if (iLocal_45)
				{
					iLocal_24 = 0;
					Function_175(&iLocal_24, 16);
				}
				else
				{
					Function_175(&iLocal_24, 2);
				}
				if (Function_138(bVar5[0], &iLocal_23, &fLocal_104, iLocal_24, 0, 0x40400000))
				{
					switch (iLocal_23)
					{
						case 0x00000001:
							Function_156("victimFailAggroDanger", iLocal_45, 1);
							break;
						
						case 0x00000002:
							Function_156("victimFailAggroShot", iLocal_45, 1);
							break;
						
						case 0x00000004:
							Function_156("victimFailAggroHostile", iLocal_45, 1);
							break;
						
						case 0x00000008:
							Function_156("victimFailAggroAttacked", iLocal_45, 1);
							Function_137(bVar5[0], &Global_34573);
							Function_136(bVar5[0]);
							bLocal_27 = true;
							iVar0 = 5;
							iVar81 = 0;
							break;
							break;
					}
					if (!bLocal_27)
					{
						Function_136(bVar5[0]);
						CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bVar5[0]);
						RESET_ANIM_SET_FOR_ACTOR(bVar5[0], 1);
						TASK_FLEE_ACTOR(bVar5[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
						bLocal_27 = true;
						iVar0 = 5;
						iVar81 = 0;
						break;
					}
				}
				if (!IS_ACTOR_ALIVE(bVar5[0]))
				{
					Function_156("crimeWagonThief_fail02", iLocal_45, 1);
					iVar0 = 5;
					iVar81 = 0;
					break;
				}
				if (Function_30(&iVar70, &iVar71, &bVar5, &iVar81, &uVar1, bVar3, uVar72))
				{
					iVar0 = 5;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				iVar81 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar81 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar81);
		}
	}
	if (bLocal_112)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	Function_228(&bVar5, 2);
	Function_29(&uVar74, &uVar75, &iVar76);
	Function_28(bVar5[0]);
	Function_27(&iVar9, 3);
	if (IS_BLIP_VALID(bLocal_39))
	{
		REMOVE_BLIP(bLocal_39);
	}
	Function_25(bVar5[0]);
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (Function_173(bVar5[2], 0))
	{
	}
	if (!bVar4)
	{
		Function_23(&bVar5, 4294967295);
		if (IS_OBJECT_VALID(bVar3))
		{
			UNK_0xA936E73B(bVar3, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar3, 1);
		}
	}
	else
	{
		if (Function_173(bVar5[0], 0))
		{
			RESET_ANIM_SET_FOR_ACTOR(bVar5[0], 1);
			if (!bLocal_27)
			{
				Function_14(bVar5[0], 4, 0, 2);
			}
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar5[0], 1);
			UNK_0x99AFD2D1(bVar5[0], 0, 0);
		}
		if (Function_173(bVar5[1], 0))
		{
			Function_12(bVar5[1], 0.0f, 0.0f, 0.0f, 0, 4, 2, 1);
		}
	}
	if (!bVar4)
	{
		Function_6(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	if (bLocal_47)
	{
		Function_5();
	}
	Function_1(&bVar14);
	RELEASE_LAYOUT_REF(bVar3);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xB6B / 2923
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_2(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_2(var uParam0, int iParam1) //Position: 0xB91 / 2961
{
	if (Function_4(uParam0[iParam13], 4))
	{
		if (Function_4(uParam0[iParam13], 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP((*uParam0)[iParam13]);
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET((*uParam0)[iParam13]);
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR((*uParam0)[iParam13], 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO((*uParam0)[iParam13]);
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT((*uParam0)[iParam13]);
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*uParam0)[iParam13], 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY((*uParam0)[iParam13]);
					break;
				
				default:
					break;
			}
			Function_3(uParam0[iParam13], 1);
			Function_3(uParam0[iParam13], 2);
			Function_3(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0xCBF / 3263
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(int iParam0, int iParam1) //Position: 0xCD9 / 3289
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5() //Position: 0xCF6 / 3318
{
	if (Global_28185 == 2)
	{
		Global_28185.f_4 = 3;
	}
	*(&Global_28185 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28185 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(1);
	return;
}

bool Function_6(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xD21 / 3361
{
	bool bVar0;
	bool bVar1;
	
	if (Global_30842[16])
	{
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
	}
	fParam1 = fParam1;
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_3399 = 0;
		Function_8("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_17483[iParam075].f_116 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_3367)
			{
				if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_3367 = 1;
			Global_6281 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(Global_17483[iParam075].f_260);
		if (Global_30842[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_7(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_7(bVar0);
		}
		if (!bParam3)
		{
			ADD_TIME(&bVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, 0, 10, 0);
		}
		if (Global_30842[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_7(bVar0);
		}
		Global_17483[iParam075].f_264 = bVar0;
		Global_16876[iParam06] = bVar0;
		if (bParam2)
		{
			Global_16876[iParam06].f_4 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_17483[iParam075].f_116 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_3367)
				{
					if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_3367 = 1;
				Global_6281 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_7(bool bParam0) //Position: 0xF7E / 3966
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

void Function_8(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xFC4 / 4036
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_9(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_9(int iParam0) //Position: 0x103B / 4155
{
	char* cVar0[16];
	
	if (!Function_10())
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

bool Function_10() //Position: 0x107A / 4218
{
	if (Function_11(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_11(int iParam0, bool bParam1) //Position: 0x1095 / 4245
{
	return (iParam0 && bParam1) == 0;
}

void Function_12(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x10A2 / 4258
{
	if (!IS_OBJECTSET_VALID(Global_28842.f_60))
	{
		Global_28842.f_60 = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", Global_28841, 15, 1);
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam4 != 0)
	{
		DECOR_SET_INT(bParam0, "overrideCurve", bParam4);
	}
	if (!Function_13(StackVal, StackVal, vParam1))
	{
		DECOR_SET_VECTOR(bParam0, "overrideDest", vParam1);
	}
	if (bParam5 != 0)
	{
		DECOR_SET_INT(bParam0, "overrideSpeed", bParam5);
	}
	if (bParam6 != 2)
	{
		DECOR_SET_INT(bParam0, "overridePriority", bParam6);
	}
	else
	{
		TASK_PRIORITY_SET(bParam0, 2);
	}
	if (bParam7)
	{
		DECOR_SET_INT(bParam0, "quickRelease", bParam6);
	}
	if (!IS_OBJECT_IN_OBJECTSET(bParam0, Global_28842.f_60))
	{
		ADD_OBJECT_TO_OBJECTSET(bParam0, Global_28842.f_60);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 1);
}

bool Function_13(vector3 vParam0) //Position: 0x11AA / 4522
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_14(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x11C2 / 4546
{
	int iVar0;
	bool bVar1;
	
	if (iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_VEHICLE(bParam0))
		{
			SQUAD_LEAVE(bParam0);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
			{
				bVar1 = GET_DRAFT_ACTOR(iVar0, bParam0);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_15(bVar1, 0, 0, 0, 1);
				}
				iVar0++;
			}
		}
		Function_15(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x12A2 / 4770
{
	char* cVar0[32];
	
	Function_22();
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(bParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(bParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_21(bParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), Global_6290))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(bParam0), 32);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "(NAMELESS)", 32);
		}
		PRINTSTRING("Could not add ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
		LOG_ERROR("Could not add actor to actorroam. Report the offending script");
	}
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	if (iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 32, 0);
	}
	Function_20(bParam0, 0);
	Function_19(bParam0, iParam1);
	Function_18(bParam0, uParam2);
	Function_17(bParam0, uParam3);
	if (Function_16(bParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(bParam0, 0);
	}
	return 1;
}

int Function_16(bool bParam0) //Position: 0x14F0 / 5360
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_17(bool bParam0, bool bParam1) //Position: 0x1513 / 5395
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_18(bool bParam0, bool bParam1) //Position: 0x1536 / 5430
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_19(bool bParam0, bool bParam1) //Position: 0x155A / 5466
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_20(bool bParam0, bool bParam1) //Position: 0x1580 / 5504
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_21(bool bParam0) //Position: 0x15A3 / 5539
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_22() //Position: 0x15C1 / 5569
{
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		Global_6290 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(Global_16516))
	{
		Global_16516 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", Global_6290, 4294967295, 1);
	}
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0x160B / 5643
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_24(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_24(int iParam0) //Position: 0x1638 / 5688
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*iParam0, 0);
		TASK_FLEE_ACTOR(*iParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*iParam0, 0);
	}
	return;
}

int Function_25(bool bParam0) //Position: 0x1663 / 5731
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_26(bParam0);
		return 1;
	}
	return 0;
}

void Function_26(bool bParam0) //Position: 0x1679 / 5753
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		}
	}
	return;
}

void Function_27(var uParam0, int iParam1) //Position: 0x16A5 / 5797
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION((*uParam0)[iVar0]);
		iVar0++;
	}
	return;
}

void Function_28(bool bParam0) //Position: 0x16C7 / 5831
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, 1);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, 0);
	}
	return;
}

void Function_29(var uParam0, var uParam1, int iParam2) //Position: 0x16E1 / 5857
{
	if (*uParam0 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(*uParam0);
	}
	if (*uParam1 != 4294967295)
	{
		RESET_THIS_BREAKABLE_TREE_CLEARING(*uParam1);
	}
	if (*iParam2 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(*iParam2);
	}
	return;
}

bool Function_30(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x170E / 5902
{
	var uVar0;
	
	*uParam4 = *uParam4;
	*uParam3 = *uParam3;
	switch (*uParam0)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING_VEHICLE((*uParam2)[1]))
			{
				iLocal_50 = 1;
				Local_53.f_4 = 2;
				Local_53.f_72 = 4;
				Function_135(&Local_53, 0.0f, 0.0f, 0.0f);
				Function_134((*uParam2)[1]);
				uLocal_101 = Function_133(StackVal, StackVal, Function_134((*uParam2)[1]), 16, 0.0f, 35.0f, 2.0f);
				Function_134((*uParam2)[1]);
				Function_129(StackVal, StackVal, &Local_53, Function_134((*uParam2)[1]), 0.0f, Function_132((*uParam2)[1]), 0.0f, uLocal_101, 1, 1);
				Function_86(&Local_53, 0, 1, 1);
				SQUAD_JOIN(StackVal, (*uParam2)[1]);
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			iLocal_34 = 0;
			if (Function_173((*uParam2)[1], 0))
			{
				if (!Function_146((*uParam2)[1], Global_34573, 150.0f) && !iLocal_34)
				{
					TASK_OVERRIDE_SET_MOVETYPE((*uParam2)[1], 5);
					iLocal_34 = 1;
				}
			}
			if (!iLocal_34)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE((*uParam2)[1]);
				Local_53.f_72 = 4;
				Function_86(&Local_53, 0, 1, 1);
			}
			if (Function_173((*uParam2)[1], 0))
			{
				if (!Function_146((*uParam2)[1], Global_34573, (fLocal_102 - 30.0f)))
				{
					return 1;
				}
			}
			*uParam3 = 0;
			if (Function_85(uParam2[0], &Global_34573, &iLocal_52, uParam5, 55.0f, &bLocal_49, bLocal_33, &uLocal_107, &iLocal_51, 25.0f, 1, 4, -5.0f, 40.0f, "crimeWagonTheif_msg03", 0))
			{
				if (bLocal_49)
				{
					Function_82();
					iLocal_25 = 1;
					RESET_ANIM_SET_FOR_ACTOR((*uParam2)[0], 1);
					if (bLocal_48)
					{
						SET_ANIM_SET_FOR_ACTOR((*uParam2)[0], "plead_wait_excite", 0);
						SET_ACTION_NODE_FOR_ACTOR((*uParam2)[0], "plead_wait_excite/pre");
					}
					else
					{
						SET_ANIM_SET_FOR_ACTOR((*uParam2)[0], "stolen_pleading", 0);
						SET_ACTION_NODE_FOR_ACTOR((*uParam2)[0], "stolen_pleading");
					}
					*uParam0 = 2;
				}
			}
			else
			{
				return 1;
			}
			if (iLocal_51 && !IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*uParam2)[0])))
			{
				ADD_BLIP_FOR_ACTOR((*uParam2)[0], 325, 0, 2, 0);
			}
			break;
		
		case 0x00000002:
			if (iLocal_34)
			{
				Local_53.f_72 = 4;
				TASK_OVERRIDE_CLEAR_MOVETYPE((*uParam2)[1]);
				iLocal_34 = 0;
			}
			Function_86(&Local_53, 0, 1, 1);
			if (!IS_AMBIENT_SPEECH_PLAYING((*uParam2)[0]))
			{
				if (Function_172(Global_34573, (*uParam2)[0]) > 26.0f)
				{
					Function_81((*uParam2)[0], Global_34573, "crimeWagonTheif_msg01", "crimeWagonTheif_msg01", 5, 60, 1, 1);
					Function_250(&uLocal_30, 0.0f);
					*uParam0 = 3;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 0x00000003:
			if (Function_77(&uLocal_30, 2.0f))
			{
				Function_134((*uParam2)[0]);
				vLocal_36 = { StackVal, StackVal, Function_134((*uParam2)[0]) };
				Function_178((*uParam2)[0], 4294967295 * 50);
				Function_76("crimeWagonThief_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_25((*uParam2)[0]);
				bLocal_39 = ADD_BLIP_FOR_ACTOR((*uParam2)[2], 325, 0.0f, 3, 0);
				SET_BLIP_NAME(bLocal_39, "crimeWagonThief_blip");
				*uParam1 = 1;
				*uParam0 = 5;
				iLocal_45 = 1;
			}
			break;
		
		case 0x00000005:
			Function_86(&Local_53, 0, 1, 1);
			TASK_PRIORITY_SET((*uParam2)[1], 0);
			*uParam0 = 4;
			break;
		
		case 0x00000004:
			if (!iLocal_113)
			{
				if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam2)[1], 1.0f, 45.0f, 1, 1, 0))
				{
					iLocal_113 = 1;
					AUDIO_MUSIC_SET_MOOD("CHASE_HIGH", 0, 4294967295, 4294967295);
				}
			}
			if (iLocal_28 && !IS_AMBIENT_SPEECH_PLAYING((*uParam2)[0]))
			{
				if (bLocal_48)
				{
					SET_ACTION_NODE_FOR_ACTOR((*uParam2)[0], "plead_wait_excite/waiting");
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR((*uParam2)[0], 1);
					SET_ANIM_SET_FOR_ACTOR((*uParam2)[0], "stolen_panic", 0);
					SET_ACTION_NODE_FOR_ACTOR((*uParam2)[0], "stolen_panic/loop");
				}
				iLocal_28 = 0;
			}
			if (!iLocal_26)
			{
				if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam2)[1], 1.0f, 15.0f, 1, 1, 0) && MEMORY_GET_IS_VISIBLE((*uParam2)[1], Global_34573))
				{
					SET_ACTOR_ALLOW_WEAPON_REACTIONS((*uParam2)[1], 1);
					MEMORY_CONSIDER_AS((*uParam2)[1], Global_34573, 4);
					iLocal_26 = 1;
				}
			}
			if (!bLocal_46)
			{
				if (Function_173((*uParam2)[1], 0))
				{
					if ((GET_NUM_WEAPONS_IN_INVENTORY((*uParam2)[1]) != 0 && GET_LAST_ATTACKER((*uParam2)[1]) != Global_34573) && iLocal_29)
					{
						uVar0 = TASK_SEQUENCE_OPEN();
						TASK_VEHICLE_LEAVE(0);
						TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM((*uParam2)[1], uVar0);
						TASK_SEQUENCE_RELEASE(uVar0, 1);
						iLocal_29 = 0;
					}
					if (GET_ACTOR_IN_VEHICLE_SEAT((*uParam2)[2], 0) != (*uParam2)[1])
					{
						HUD_CLEAR_OBJECTIVE();
						if (!bLocal_21 && Function_172((*uParam2)[2], (*uParam2)[0]) < 25.0f)
						{
							AUDIO_MUSIC_SET_MOOD("nCHASE_LOW", 0, 4294967295, 4294967295);
							Function_76("crimeWagonThief_obj04", 0x40f00000, 1, 2, 0, 0, 0, 0);
						}
						TASK_STAND_STILL((*uParam2)[2], -1.0f, 0, 0);
						bLocal_46 = true;
					}
				}
				else
				{
					HUD_CLEAR_OBJECTIVE();
					if (!bLocal_21 && Function_172((*uParam2)[2], (*uParam2)[0]) < 25.0f)
					{
						AUDIO_MUSIC_SET_MOOD("nCHASE_LOW", 0, 4294967295, 4294967295);
						Function_76("crimeWagonThief_obj04", 0x40f00000, 1, 2, 0, 0, 0, 0);
					}
					TASK_STAND_STILL((*uParam2)[2], -1.0f, 0, 0);
					bLocal_46 = true;
				}
			}
			if (!bLocal_46)
			{
				uLocal_22 = Function_86(&Local_53, 0, 1, 1);
			}
			uLocal_22 = uLocal_22;
			if (GET_ACTOR_IN_VEHICLE_SEAT((*uParam2)[2], 0) == Global_34573)
			{
				*uParam1 = 2;
				fLocal_35 = Function_75(&Global_34574, &vLocal_36);
				if (IS_BLIP_VALID(bLocal_39))
				{
					REMOVE_BLIP(bLocal_39);
				}
				HUD_CLEAR_OBJECTIVE();
				Function_76("crimeWagonThief_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
				bLocal_39 = ADD_BLIP_FOR_ACTOR((*uParam2)[0], 325, 0.0f, 3, 0);
				*uParam0 = 6;
				bLocal_47 = true;
				Function_73(StackVal, StackVal, vLocal_36, 2, 48, 1);
			}
			break;
		
		case 0x00000006:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam2)[0], 1.0f, 45.0f, 1, 1, 0) && Function_172((*uParam2)[0], (*uParam2)[2]) > 45.0f)
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				RESET_ANIM_SET_FOR_ACTOR((*uParam2)[0], 1);
				FORCE_LOOK_AT_ACTOR((*uParam2)[0], Global_34573, 8.0f);
				if (bLocal_48)
				{
					SET_ACTION_NODE_FOR_ACTOR((*uParam2)[0], "plead_wait_excite/excited_return");
					Function_81(Global_34573, (*uParam2)[0], "WagonTheifPlayer_msg01", "WagonTheifPlayer_msg01", 5, 60, 1, 1);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR((*uParam2)[0], 1);
					SET_ANIM_SET_FOR_ACTOR((*uParam2)[0], "excited_return", 0);
					SET_ACTION_NODE_FOR_ACTOR((*uParam2)[0], "excited_return");
					Function_81(Global_34573, (*uParam2)[0], "WagonTheifPlayer_msg02", "WagonTheifPlayer_msg02", 5, 60, 1, 1);
				}
				*uParam0 = 7;
			}
			break;
		
		case 0x00000007:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam2)[0], 1.0f, 25.0f, 1, 1, 0) && Function_172((*uParam2)[0], (*uParam2)[2]) > 25.0f)
			{
				if (GET_ACTOR_IN_VEHICLE_SEAT((*uParam2)[2], 0) == Global_34573)
				{
					Function_76("crimeWagonThief_obj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				bLocal_40 = GET_DRAFT_ACTOR(0, (*uParam2)[2]);
				TASK_STAND_STILL(bLocal_40, -1.0f, 1, 0);
				TASK_PRIORITY_SET(bLocal_40, 0);
				*uParam0 = 8;
			}
			break;
		
		case 0x00000008:
			if (GET_ACTOR_IN_VEHICLE_SEAT((*uParam2)[2], 0) != Global_34573)
			{
				if (Function_71(uParam2[0], &Global_34573, &uLocal_105, &iLocal_106, &uLocal_107, uParam5, 25.0f, &iLocal_110, bLocal_33, uParam3, "thanks", "thanks", "crimeWagonTheif_msg02", "crimeWagonTheif_msg02", 30.0f, 2, -5.0f, 0, 2.0f, 0, 0, 0, 1, 0, 0x40800000))
				{
					if (iLocal_110 == 1)
					{
						TOGGLE_ACTOR_ACTION_SIGNAL_ON((*uParam2)[0], 8, "FASTWALK");
						TASK_VEHICLE_ENTER_SPECIFIC_LOCATION((*uParam2)[0], (*uParam2)[2], 0, 1, 0);
						Function_250(&uLocal_107, 0.0f);
						*uParam0 = 10;
					}
				}
				else if (Function_173((*uParam2)[0], 0))
				{
					TOGGLE_ACTOR_ACTION_SIGNAL_ON((*uParam2)[0], 8, "FASTWALK");
					TASK_VEHICLE_ENTER_SPECIFIC_LOCATION((*uParam2)[0], (*uParam2)[2], 0, 1, 1);
					Function_250(&uLocal_107, 0.0f);
					*uParam0 = 10;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 0x00000009:
			TOGGLE_ACTOR_ACTION_SIGNAL_ON((*uParam2)[0], 8, "FASTWALK");
			SET_ANIM_SET_FOR_ACTOR((*uParam2)[0], "nthank_you", 0);
			uVar0 = TASK_SEQUENCE_OPEN();
			TASK_FACE_ACTOR(0, Global_34573, 0, 3212836864);
			TASK_ACTION_PERFORM(0, "nthank_you");
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(0, (*uParam2)[2], 0, 1, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM((*uParam2)[0], uVar0);
			TASK_SEQUENCE_RELEASE(uVar0, 1);
			Function_250(&uLocal_107, 0.0f);
			*uParam0 = 10;
			break;
		
		case 0x0000000A:
			if (GET_ACTOR_IN_VEHICLE_SEAT((*uParam2)[2], 0) == (*uParam2)[0])
			{
				AI_SPEECH_SET_ALLOW_FOR_ACTOR((*uParam2)[0], 1);
				UNK_0x99AFD2D1((*uParam2)[0], 0, 0);
				Function_48(20, 1, 0);
				if (IS_ACTOR_ALIVE((*uParam2)[1]))
				{
					Function_141(100, 1, 0);
				}
				else
				{
					Function_141(50, 1, 0);
				}
				Function_46(uParam6, 1);
				if (IS_BLIP_VALID(bLocal_39))
				{
					REMOVE_BLIP(bLocal_39);
				}
				Function_31(4);
				bLocal_27 = true;
				Function_12((*uParam2)[0], 0.0f, 0.0f, 0.0f, 0, 0, 2, 1);
				return 1;
			}
			if (Function_77(&uLocal_107, 10.0f) && GET_ACTOR_IN_VEHICLE_SEAT((*uParam2)[2], 0) != Global_34573)
			{
				REMOVE_BLIP(bLocal_39);
				Function_141(4294967246, 1, 0);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR((*uParam2)[0], 1);
				UNK_0x99AFD2D1((*uParam2)[0], 0, 0);
				TOGGLE_ACTOR_ACTION_SIGNAL_OFF((*uParam2)[0]);
				FORCE_LOOK_AT_ACTOR((*uParam2)[0], Global_34573, 8.0f);
				TASK_TAUNT_ACTOR_IN_PLACE((*uParam2)[0], Global_34573, -1f);
				Function_250(&uLocal_107, 0.0f);
				*uParam0 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_77(&uLocal_107, 5.0f))
			{
				bLocal_27 = true;
				Function_14((*uParam2)[0], 4, 0, 2);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_31(int iParam0) //Position: 0x21A7 / 8615
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_32(409, 1, 0, 0);
	}
	return;
}

int Function_32(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x21D8 / 8664
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
	Function_45(iParam0, TO_FLOAT(bParam1), 1);
	Function_44(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_33(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_33(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x23F8 / 9208
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_43(390))), 32);
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
					bVar19 = (Function_42(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_42(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_40(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_37(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_34(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_233(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_34(int iParam0) //Position: 0x2A25 / 10789
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_35(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2A36 / 10806
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

struct<32> Function_36(char* cParam0, bool bParam1) //Position: 0x2B2B / 11051
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_37(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2B44 / 11076
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_39(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_38(Function_39(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_38(int iParam0, int iParam1) //Position: 0x2BA9 / 11177
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_39(int iParam0, int iParam1) //Position: 0x2BBB / 11195
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_40(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2BCD / 11213
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
	if (((Function_41(iParam0) != 19 || Function_41(iParam0) != 17) || Function_41(iParam0) != 10) || Function_41(iParam0) != 9)
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

int Function_41(int iParam0) //Position: 0x2CFD / 11517
{
	return Global_35278[iParam020].f_48;
}

float Function_42(int iParam0) //Position: 0x2D0C / 11532
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_43(int iParam0) //Position: 0x2D45 / 11589
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_44(int iParam0) //Position: 0x2D82 / 11650
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

int Function_45(int iParam0, bool bParam1, bool bParam2) //Position: 0x2F1C / 12060
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

int Function_46(bool bParam0, bool bParam1) //Position: 0x3160 / 12640
{
	bool bVar0;
	
	bVar0 = Function_47(0);
	if ((Function_47(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_32(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_47(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_32(597, bParam0, 0, 0);
	}
	if ((Function_47(597) + Function_47(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

int Function_47(int iParam0) //Position: 0x322B / 12843
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

void Function_48(int iParam0, bool bParam1, bool bParam2) //Position: 0x326C / 12908
{
	int iVar0;
	bool bVar1;
	
	if (Function_70(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_69())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_47(3);
	Function_66();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_64(3, bVar1);
		if (!bParam2)
		{
			if (!Function_63(Global_76848, 4))
			{
				Function_57(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_32(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_42(3));
	iVar0 = Function_47(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_50(4, Function_56(Global_12976.f_156), 1);
				Function_49(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_50(4, Function_56(Global_12976.f_156), 1);
				Function_49(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_50(4, Function_56(Global_12976.f_156), 1);
				Function_49(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_50(4, Function_56(Global_12976.f_156), 1);
				Function_49(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_50(4, Function_56(Global_12976.f_156), 1);
				Function_49(Global_12976.f_152, Global_12976.f_156);
				if (Global_12976.f_152 != 6 || Global_12976.f_152 != 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000005:
			break;
	}
	return;
}

void Function_49(int iParam0, int iParam1) //Position: 0x343B / 13371
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 1);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 1);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 1);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 0);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_50(int iParam0, char* cParam1, bool bParam2) //Position: 0x3699 / 13977
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_54(iParam0, cParam1, 0, 1);
	iVar1 = Function_51();
	Global_49199[iVar1] = 0.0f;
	strcpy(&Global_49205[iVar120] + 16, cParam1, 32);
	strcpy(&Global_49205[iVar120] + 8, "QME=", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	if (bParam2)
	{
		Global_49205[iVar120].f_72 = 5;
	}
	else
	{
		Global_49205[iVar120].f_72 = 6;
	}
	return 1;
}

int Function_51() //Position: 0x381E / 14366
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
	Function_52();
	return 0;
}

void Function_52() //Position: 0x38BD / 14525
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
		Function_53(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_53(int iParam0) //Position: 0x396C / 14700
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

int Function_54(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x39CA / 14794
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
		Function_55(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_55(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3D1C / 15644
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

var Function_56(int iParam0) //Position: 0x3D9F / 15775
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_ntr1";
			break;
		
		case 0x00000001:
			return "sr_ntr2";
			break;
		
		case 0x00000002:
			return "sr_ntr3";
			break;
		
		case 0x00000003:
			return "sr_ntr4";
			break;
		
		case 0x00000004:
			return "sr_ntr5";
			break;
		
		case 0x00000005:
			return "sr_ntr6";
			break;
	}
	return "sr_ntr1";
}

void Function_57(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x3E2E / 15918
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_59(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_58(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_58(char* cParam0, int iParam1) //Position: 0x3E9A / 16026
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

bool Function_59(bool bParam0, var uParam1, int iParam2) //Position: 0x3ED1 / 16081
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
		if (Function_61(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_60(uVar0))
		{
			case 0x00000002:
				if (!Function_63(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_60(char* cParam0) //Position: 0x3F49 / 16201
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

int Function_61(int iParam0) //Position: 0x3FEA / 16362
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_62(&iVar1, 2147483648);
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

void Function_62(int iParam0, int iParam1) //Position: 0x4029 / 16425
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_63(var uParam0, int iParam1) //Position: 0x403C / 16444
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_64(int iParam0, bool bParam1) //Position: 0x404F / 16463
{
	bool bVar0;
	int iVar1;
	
	Function_32(iParam0, bParam1, 0, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_65(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_51();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_65(int iParam0, int iParam1) //Position: 0x41EC / 16876
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

void Function_66() //Position: 0x422D / 16941
{
	Function_68(3, 0.0f);
	Function_67(3, 10000.0f);
	return;
}

int Function_67(int iParam0, int iParam1) //Position: 0x4243 / 16963
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_68(int iParam0, int iParam1) //Position: 0x4283 / 17027
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

bool Function_69() //Position: 0x42C3 / 17091
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_70(bool bParam0) //Position: 0x42EE / 17134
{
	return (*&Global_12976 + 104)[bParam0];
}

bool Function_71(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, float fParam6, var uParam7, bool bParam8, var uParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14, int iParam15, float fParam16, bool bParam17, var uParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, var uParam23, float fParam24) //Position: 0x42FD / 17149
{
	var uVar0;
	
	*uParam9 = *uParam9;
	uParam18 = uParam18;
	bParam17 = bParam17;
	if (!IS_ACTOR_VALID(*uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(*uParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(*uParam0) == Global_34573)
	{
		TASK_FLEE_ACTOR(*uParam0, Global_34573, 150.0f, -1.0f, 0, 0, 0);
		return 0;
	}
	switch (*uParam3)
	{
		case 0x00000000:
			if (bParam21)
			{
				*uParam3 = 3;
			}
			else
			{
				MEMORY_CLEAR_EVENTS(*uParam0, 0);
				ACTOR_START_FORCE_HOLSTER(*uParam0, 1, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(*uParam0, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
				*uParam2 = Function_172(*uParam0, Global_34573);
				AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
				bParam8 = CREATE_POINT_IN_LAYOUT(bParam5, Function_233(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bParam8, *uParam1, Function_233(), 0.0f, 0.5f, fParam16, 0.0f, 0.0f, 0.0f, 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0) || Function_172(Global_34573, *uParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam8, 1.0f, iParam15);
					TASK_PRIORITY_SET(*uParam0, 1);
				}
				*uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_172(*uParam0, *uParam1) - *uParam2) < fParam6)
			{
				TASK_FLEE_ACTOR(*uParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0))
			{
				uVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, *uParam1, 0, 3212836864);
				TASK_FACE_ACTOR(0, *uParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(*uParam0, uVar0);
				TASK_SEQUENCE_RELEASE(uVar0, 1);
				TASK_PRIORITY_SET(*uParam0, 1);
				*uParam9 = 0;
				*uParam3 = 4;
			}
			else if (!Function_173(*uParam0, 0))
			{
				if (IS_ACTOR_VALID(*uParam0))
				{
					TASK_FLEE_ACTOR(*uParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				}
				return 0;
			}
			break;
		
		case 0x00000003:
			RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(*uParam0, bParam10, 0);
			SET_ACTION_NODE_FOR_ACTOR(*uParam0, bParam11);
			TASK_FACE_ACTOR(*uParam0, *uParam1, 1, 3212836864);
			*uParam3 = 4;
			break;
		
		case 0x00000004:
			*uParam9 = 0;
			if (GET_NTH_TASK_STATUS(*uParam0, 0) != 0 || bParam21)
			{
				if (!bParam21)
				{
					SET_ANIM_SET_FOR_ACTOR(*uParam0, bParam10, 1);
					SET_ACTION_NODE_FOR_ACTOR(*uParam0, bParam11);
				}
				if (bParam19)
				{
					Function_81(*uParam0, Global_34573, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_81(*uParam0, Global_34573, bParam12, iParam13, 5, 60, 1, 1);
				}
				*uParam3 = 5;
				Function_250(uParam4, 0.0f);
			}
			else if (!Function_173(*uParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (uParam23 && !Function_72(*uParam0))
			{
				if (fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
						Function_14(*uParam0, 4, 0, 1);
					}
				}
				else if (Function_77(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_14(*uParam0, 4, 0, 1);
				}
			}
			if (bParam22)
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
					{
						if (!IS_STRING_VALID(bParam20))
						{
							SAY_SINGLE_LINE_CONTEXT(Global_34573, 409, *uParam0, 0, 0, 5, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							Function_81(Global_34573, *uParam0, bParam20, bParam20, 5, 60, 1, 1);
						}
						*uParam3 = 6;
					}
				}
			}
			else if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
			{
				*uParam3 = 6;
			}
			break;
		
		case 0x00000006:
			if (uParam23 && !Function_72(*uParam0))
			{
				if (Function_77(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_14(*uParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(*uParam0, bParam11) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
				*uParam7 = 1;
				if (bParam17)
				{
					Function_14(*uParam0, 4, 0, iParam15);
					TASK_PRIORITY_SET(*uParam0, 2);
				}
				AI_GOAL_LOOK_CLEAR(*uParam0);
				ACTOR_END_FORCE_HOLSTER(*uParam0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam0, 4294967295);
				return 1;
			}
			break;
	}
	return 1;
}

bool Function_72(bool bParam0) //Position: 0x46A3 / 18083
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		return 1;
	}
	return 0;
}

void Function_73(vector3 vParam0, var uParam3, var uParam4, var uParam5) //Position: 0x46C8 / 18120
{
	*(&Global_28185 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28185 + 36) = { StackVal, StackVal, vParam0 };
	Global_28185 = 2;
	Global_28185.f_4 = 0;
	Global_28185.f_60 = uParam3;
	Global_28185.f_16 = uParam4;
	if (uParam4 & 16 >= 0)
	{
		Global_28185.f_16 |= 131072;
	}
	if (uParam4 & 32 >= 0)
	{
		Global_28185.f_16 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(Global_28185.f_12))
	{
		Global_28185.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "MissionGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28185.f_12) >= 0)
	{
		Function_74(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = uParam5;
}

void Function_74(int iParam0) //Position: 0x4784 / 18308
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(iParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(iParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(bVar0, iParam0);
		CLEAN_OBJECTSET(iParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(bVar0));
		}
	}
	return;
}

float Function_75(var uParam0, bool bParam1) //Position: 0x47C4 / 18372
{
	vector3 vVar0;
	int iVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	iVar3 = VMAG(vVar0);
	return iVar3;
}

void Function_76(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x47E2 / 18402
{
	struct<4> Var0;
	var uVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_9(Global_6269) };
		}
		PRINT_OBJECTIVE_B(uParam0, iParam1, iParam7, iParam3, iParam2, &Var0, 0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(uParam0, iParam1, iParam7, iParam3, iParam2, uVar4, iParam5, iParam6);
	}
}

bool Function_77(var uParam0, float fParam1) //Position: 0x4867 / 18535
{
	if (Function_80(uParam0))
	{
		if (Function_78(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_78(bool bParam0) //Position: 0x4883 / 18563
{
	if (Function_80(bParam0))
	{
		if (Function_79(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_79(int iParam0) //Position: 0x494B / 18763
{
	return Function_11(*iParam0, 2);
}

bool Function_80(bool bParam0) //Position: 0x4958 / 18776
{
	return Function_11(*bParam0, 1);
}

void Function_81(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x4965 / 18789
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_172(bParam0, Global_34573) >= IntToFloat(iParam5))
		{
			if (!IS_ACTOR_VALID(bParam1))
			{
				bParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
			if (bParam6)
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 0, 1))
					{
						bParam3 = bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 1, 1))
				{
					bParam3 = bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(bParam0, bParam2, true, true, iParam4, 0, false, true);
			}
		}
	}
}

void Function_82() //Position: 0x49F5 / 18933
{
	int iVar0;
	
	bLocal_112 = true;
	if (Global_29004 == 0)
	{
		iVar0 = Function_84(3);
		if (iVar0 == 0)
		{
			iLocal_111 = "FTR_SONG_02";
		}
		else if (iVar0 == 1)
		{
			iLocal_111 = "FTR_SONG_03";
		}
		else if (iVar0 == 2)
		{
			iLocal_111 = "FTR_SONG_05";
		}
	}
	else if (Global_29004 == 2)
	{
		iLocal_111 = "NRT_SONG_05";
	}
	else if (Global_29004 == 1)
	{
		if (Function_83())
		{
			iLocal_111 = "MEX_SONG_04";
		}
		else
		{
			iLocal_111 = "MEX_SONG_05";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(iLocal_111, "IDLE", 0.0f, 500, 4294967295, 3212836864, 0);
	return;
}

bool Function_83() //Position: 0x4AB7 / 19127
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

var Function_84(bool bParam0) //Position: 0x4ACA / 19146
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_85(var uParam0, var uParam1, var uParam2, bool bParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, var uParam14, var uParam15) //Position: 0x4AE3 / 19171
{
	float fVar0;
	
	if (!IS_ACTOR_VALID(*uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(*uParam1))
	{
		return 0;
	}
	if (fParam13 == 0.0f && !*uParam8)
	{
		if (fParam13 > fParam9)
		{
			LOG_ERROR("firstAudioDist is too low to ever work");
		}
		else if (Function_172(*uParam0, *uParam1) > fParam13)
		{
			*uParam8 = 1;
			Function_81(*uParam0, Global_34573, uParam14, uParam14, 5, 60, 1, uParam15);
			Function_250(uParam7, 0.0f);
		}
	}
	switch (*uParam2)
	{
		case 0x00000000:
			SET_ACTOR_UPDATE_PRIORITY(*uParam0, false);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
			fLocal_20 = Function_172(*uParam0, Global_34573);
			AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
			bParam6 = CREATE_POINT_IN_LAYOUT(bParam3, Function_233(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
			ATTACH_OBJECTS(bParam6, *uParam1, Function_233(), 0.0f, 0.5f, fParam12, 0.0f, 0.0f, 0.0f, 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam6, 1.0f, iParam11);
			TASK_PRIORITY_SET(*uParam0, 1);
			*uParam2 = 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_ON_FOOT(Global_34573))
			{
				fVar0 = (fParam9 - 3.0f);
			}
			else
			{
				fVar0 = fParam9;
			}
			if ((Function_172(*uParam0, *uParam1) - fLocal_20) < fParam4)
			{
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, fVar0, 1, 1, 0))
			{
				if (bParam10)
				{
					TASK_CLEAR(*uParam0);
					TASK_FACE_ACTOR(*uParam0, *uParam1, 1, 3212836864);
				}
				else
				{
					AI_GOAL_LOOK_CLEAR(*uParam0);
				}
				*uParam5 = 1;
				return 1;
			}
			if (!Function_173(*uParam0, 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int Function_86(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x4C71 / 19569
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	struct<6> Var10;
	bool bVar16;
	bool bVar17;
	
	iVar0 = 0;
	if (!SQUAD_IS_VALID(StackVal) && !(((*bParam0 != 0 || *bParam0 != 18) || *bParam0 != 16) || *bParam0 != 17))
	{
		*bParam0 = 0;
		return 4;
	}
	switch (*bParam0)
	{
		case 0x00000000:
			iVar0 = 2;
			break;
		
		case 0x00000009:
			iVar0 = 2;
			break;
		
		case 0x0000000A:
			iVar0 = 2;
			break;
		
		case 0x0000000C:
			iVar0 = 2;
			break;
		
		case 0x0000000D:
			iVar0 = 2;
			break;
		
		case 0x00000010:
			iVar0 = 2;
			break;
		
		case 0x00000011:
			iVar0 = 2;
			break;
		
		case 0x00000001:
			Function_128(bParam0 + 24);
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_128(bParam0 + 24), *(bParam0 + 168), StackVal) };
			Function_128(bParam0 + 24);
			vVar4 = { StackVal, StackVal, Function_128(bParam0 + 24) };
			Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, *(bParam0 + 24) };
			*(bParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_126(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam0, Var10, bParam0->f_152, vVar1) };
			if (Function_125(bParam0 + 24))
			{
				*bParam0 = 16;
				return 3;
			}
			Function_128(bParam0 + 24);
			*(bParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar4, Function_128(bParam0 + 24), StackVal) };
			*(bParam0 + 168) = { 0.0f, UNK_0x9C40E671(bParam0 + 168), 0.0f };
			if (bParam1)
			{
				Function_117(bParam0, 0);
			}
			*bParam0 = 2;
			return 1;
			break;
		
		case 0x00000002:
			bVar17 = false;
			while (StackVal <= SQUAD_GET_SIZE(bVar17))
			{
				TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar17));
				bVar17++;
			}
			if (Function_110(bParam0, bParam1, bParam3))
			{
				*bParam0 = 7;
			}
			else
			{
				return 6;
			}
			break;
		
		case 0x00000003:
			if (!SQUAD_IS_VALID(StackVal))
			{
				*bParam0 = 16;
				return 4;
			}
			if (!IS_ACTOR_VALID(Function_109(StackVal)))
			{
				*bParam0 = 16;
				return 5;
			}
			GET_POSITION(Function_109(StackVal), &vVar4);
			*(bParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_108(StackVal, StackVal, vVar4) };
			GET_ACTOR_VELOCITY(Function_109(StackVal), &vVar1);
			GET_POSITION(Function_109(StackVal), &vVar7);
			if (Function_125(bParam0 + 24))
			{
				*(bParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_106(Function_109(StackVal)) };
				return 7;
			}
			if (Function_110(bParam0, bParam1, bParam3))
			{
				*bParam0 = 7;
			}
			else
			{
				return 6;
			}
			break;
		
		case 0x00000006:
			iParam2 = iParam2;
			if (Function_110(bParam0, bParam1, bParam3))
			{
				*bParam0 = 7;
			}
			else
			{
				return 6;
			}
			if (!Function_96(bParam0))
			{
				*bParam0 = 9;
				return 7;
			}
			if (!Function_110(bParam0, bParam1, bParam3))
			{
				*bParam0 = 16;
				return 6;
			}
			*bParam0 = 7;
		
		case 0x00000008:
			break;
		
		case 0x00000007:
			if (!Function_91(bParam0))
			{
				*bParam0 = 6;
				return 0;
			}
			if (bParam1)
			{
				if (Function_89(bParam0))
				{
					bVar16 = true;
				}
				if (Function_88(StackVal))
				{
					bVar16 = true;
				}
				if (bParam0->f_96 && bParam0->f_72 < 2)
				{
					bVar16 = true;
				}
				if (Global_3403 && bParam0->f_72 == 3)
				{
					bVar16 = true;
				}
				if (bVar16)
				{
					Function_117(bParam0, 0);
				}
			}
			GET_POSITION(Function_109(StackVal), &vVar7);
			if (bParam0->f_88)
			{
				if (!Function_13(StackVal, StackVal, *(bParam0 + 136)))
				{
					if (Function_87(StackVal, StackVal, StackVal, StackVal, vVar7, *(bParam0 + 136)) > bParam0->f_128)
					{
						SQUAD_GOALS_CLEAR(StackVal);
						TASK_GO_TO_COORD(Function_109(StackVal), bParam0 + 136, 1);
						*bParam0 = 8;
						bParam0->f_88 = 0;
						return 8;
					}
				}
			}
			break;
	}
	return iVar0;
}

float Function_87(vector3 vParam0, vector3 vParam3) //Position: 0x4F8C / 20364
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_88(bool bParam0) //Position: 0x4FA9 / 20393
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		if (AI_GET_TASK_RETREAT_FLAG(SQUAD_GET_ACTOR_BY_INDEX(bParam0, iVar0)))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_89(int iParam0) //Position: 0x4FD5 / 20437
{
	if (!IS_VOLUME_VALID(Global_28842.f_28))
	{
		return 0;
	}
	if (StackVal || (StackVal || StackVal != 2 != 4) != 1)
	{
		if (Function_90(StackVal, Global_28842.f_28))
		{
			if (!iParam0->f_96)
			{
				iParam0->f_96 = 1;
				return 1;
			}
		}
		if (iParam0->f_96)
		{
			iParam0->f_96 = 0;
			return 1;
		}
	}
	if (iParam0->f_96)
	{
		iParam0->f_96 = 0;
		return 1;
	}
	return 0;
}

bool Function_90(bool bParam0, bool bParam1) //Position: 0x5044 / 20548
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	if (!IS_VOLUME_VALID(bParam1))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_VEHICLE(bVar1))
			{
				if (IS_ACTOR_ALIVE(bVar1))
				{
					if (IS_ACTOR_IN_VOLUME(bVar1, bParam1))
					{
						return 1;
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(bVar1, bParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_91(int iParam0) //Position: 0x50C6 / 20678
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	if (DECOR_CHECK_EXIST(StackVal, "coachService"))
	{
		return 1;
	}
	Function_128(iParam0 + 24);
	bVar6 = Function_95(StackVal, StackVal, StackVal, Function_128(iParam0 + 24));
	GET_POSITION(bVar6, &vVar0);
	Function_128(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_128(iParam0 + 24) };
	if (iParam0->f_156 > 1.0f)
	{
		iParam0->f_156 = Function_94(StackVal, iParam0->f_72);
	}
	if (StackVal > Function_93(VDIST(vVar3, vVar0), Function_94(iParam0->f_156, iParam0->f_72)))
	{
		*iParam0 = 6;
		return 0;
	}
	if (Function_92())
	{
		if (SQUAD_GOAL_GET_STATUS(StackVal, iParam0->f_12) != 3)
		{
			SQUAD_GOALS_CLEAR(StackVal);
			iParam0->f_12 = "";
			return 0;
		}
	}
	return 1;
}

bool Function_92() //Position: 0x5170 / 20848
{
	return NET_IS_MANAGER_INITIALIZED();
}

float Function_93(int iParam0, int iParam1) //Position: 0x5179 / 20857
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_94(int iParam0, int iParam1) //Position: 0x518C / 20876
{
	float fVar0;
	
	fVar0 = 5.0f;
	if (StackVal == 1)
	{
		fVar0 = 5.0f;
	}
	switch (iParam1)
	{
		case 0x00000001:
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000005:
				case 0x00000001:
					return (15.0f * fVar0);
					break;
				
				case 0x00000002:
					return (25.0f * fVar0);
					break;
				
				case 0x00000004:
					return (45.0f * fVar0);
					break;
				
				case 0x00000003:
					return (45.0f * fVar0);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam0)
			{
				case 0x00000005:
				case 0x00000001:
					return (20.0f * fVar0);
					break;
				
				case 0x00000002:
					return (35.0f * fVar0);
					break;
				
				case 0x00000004:
					return (60.0f * fVar0);
					break;
				
				case 0x00000003:
					return (60.0f * fVar0);
					break;
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in FlagBuffer");
			break;
	}
	return (45.0f * fVar0);
}

var Function_95(vector3 vParam0, bool bParam3) //Position: 0x529D / 21149
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = -1.0f;
	if (Function_13(StackVal, StackVal, vParam0))
	{
		LOG_WARNING("Invalid test vector passed to GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR");
		return "";
	}
	if (!SQUAD_IS_VALID(bParam3))
	{
		LOG_WARNING("Invalid squad passed to GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR");
		return "";
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam3) - 1))
	{
		bVar3 = GET_OBJECT_FROM_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bParam3, bVar0));
		GET_OBJECT_POSITION(bVar3, &vVar4);
		if (VDIST(vParam0, vVar4) > fVar2 || fVar2 > 0.0f)
		{
			fVar2 = VDIST(vParam0, vVar4);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam3, bVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR!");
	return "";
}

bool Function_96(bool bParam0) //Position: 0x541E / 21534
{
	var uVar0;
	bool bVar3;
	
	if (DECOR_CHECK_EXIST(StackVal, "wasstickup"))
	{
		DECOR_REMOVE(StackVal, "wasstickup");
		return 1;
	}
	Function_128(bParam0 + 24);
	bVar3 = Function_95(StackVal, StackVal, StackVal, Function_128(bParam0 + 24));
	GET_POSITION(bVar3, &uVar0);
	*(bParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_97(StackVal, StackVal, StackVal, StackVal, StackVal, bParam0, *(bParam0 + 24), bParam0->f_152, 2.5f, 0) };
	if (Function_125(bParam0 + 24))
	{
		return 0;
	}
	return 1;
}

struct<24> Function_97(int iParam0, struct<6> Param1, bool bParam7, float fParam8, var uParam9) //Position: 0x5491 / 21649
{
	struct<6> Var0;
	vector3 vVar6;
	int iVar9;
	bool bVar10;
	var uVar11;
	float fVar12;
	float fVar13;
	int iVar14;
	var uVar15;
	vector3 vVar18;
	vector3 vVar21;
	float fVar24;
	struct<6> Var25;
	var uVar31;
	int iVar32;
	bool bVar33;
	float fVar34;
	struct<17> Var35;
	struct<6> Var57;
	
	Function_128(&Param1);
	vVar6 = { StackVal, StackVal, Function_128(&Param1) };
	iVar9 = 0;
	uVar11 = Function_105(StackVal, iParam0->f_164);
	fVar12 = 0.0f;
	if (IS_OBJECTSET_VALID(iParam0->f_48))
	{
		fVar13 = 5.0f;
	}
	else
	{
		fVar13 = (fParam8 * 2.0f);
	}
	iVar14 = 0;
	GET_OBJECT_POSITION(Function_109(StackVal), &uVar15);
	vVar18 = { 0.0f, 0.0f, -1.0f };
	if (!IS_OBJECTSET_VALID(iParam0->f_160))
	{
		iParam0->f_160 = CREATE_OBJECTSET_IN_LAYOUT(Function_233(), Global_28841, 36, 1);
	}
	iVar32 = 4294967295;
	while (!bVar10)
	{
		uVar31 = START_CURVE_QUERY(Global_28841, vVar6, uVar11, fVar12, fVar13, Function_93(Function_104(iParam0), ((fVar13 - fVar12) / 2.0f)), 0);
		if (IS_OBJECT_VALID(bParam7))
		{
			REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(uVar31, bParam7);
			if (!IS_OBJECT_IN_OBJECTSET(bParam7, iParam0->f_160))
			{
				ADD_OBJECT_TO_OBJECTSET(bParam7, iParam0->f_160);
			}
		}
		if (IS_OBJECTSET_VALID(iParam0->f_48))
		{
			iVar9 = 0;
			while (iVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(uVar31))
			{
				bVar33 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(uVar31, iVar9);
				if (!IS_OBJECT_IN_OBJECTSET(bVar33, iParam0->f_48))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(uVar31, bVar33);
					RELEASE_CURVE(bVar33);
				}
				iVar9++;
			}
		}
		else
		{
			iVar9 = 0;
			while (iVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(uVar31))
			{
				bVar33 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(uVar31, iVar9);
				if (IS_OBJECT_IN_OBJECTSET(bVar33, iParam0->f_160))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(uVar31, bVar33);
					RELEASE_CURVE(bVar33);
				}
				iVar9++;
			}
		}
		if (!GET_NUM_CURVES_IN_CURVE_QUERY(uVar31) < 0)
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bParam7, iParam0->f_160);
			UNK_0xDF93BD7C(uVar31);
			Function_74(iParam0->f_160);
			ADD_OBJECT_TO_OBJECTSET(bParam7, iParam0->f_160);
			if (uParam9 || iVar14 > 5)
			{
				fVar12 = fVar13;
				fVar13 = (fVar13 + fParam8);
				iVar14++;
			}
			else
			{
				return StackVal, StackVal, StackVal, StackVal, StackVal, Function_103();
			}
		}
		fVar34 = -100000.0f;
		iVar32 = 4294967295;
		iVar9 = 0;
		if (IS_OBJECTSET_VALID(iParam0->f_48))
		{
			iVar9 = 0;
			while (iVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(uVar31))
			{
				bVar33 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(uVar31, iVar9);
				if (IS_OBJECT_IN_OBJECTSET(bVar33, iParam0->f_48))
				{
					GET_POINT_FROM_CURVE_QUERY(uVar31, iVar9, &Var25);
					Function_128(&Var25);
					Function_128(&Param1);
					vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_128(&Param1), Function_128(&Var25), StackVal) };
					fVar24 = VDOT(&vVar21, &vVar18);
					if (fVar24 < fVar34)
					{
						fVar34 = fVar24;
						iVar32 = iVar9;
					}
				}
				RELEASE_CURVE(bVar33);
				iVar9++;
			}
		}
		else if (Function_13(StackVal, StackVal, vVar18))
		{
			iVar32 = ROUND((TO_FLOAT(RAND_INT_RANGE(0, (GET_NUM_CURVES_IN_CURVE_QUERY(uVar31) - 1000))) / 1000.0f));
		}
		else if (Global_3386)
		{
			Function_128(&Param1);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_128(&Param1), Global_34574, StackVal) };
			VNORMALIZE(&vVar18);
			Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_103() };
			Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_103() };
			iVar9 = 0;
			while (iVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(uVar31))
			{
				bVar47 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(uVar31, iVar9);
				GET_CURVE_POINT(bVar47, 1.0f, &Var35, 0);
				GET_CURVE_POINT(bVar47, 0.0f, &Var41, 0);
				Function_128(&Param1);
				Function_128(&Var35);
				Function_128(&Param1);
				Function_128(&Var41);
				if (StackVal > Function_87(StackVal, StackVal, StackVal, Function_87(StackVal, StackVal, StackVal, StackVal, Function_128(&Param1), Function_128(&Var35)), Function_128(&Param1), Function_128(&Var41)))
				{
					UNK_0x04D89A35(bVar47, 1.0f, 0.0f, -5.0f, &Var25);
				}
				else
				{
					UNK_0x04D89A35(bVar47, 0.0f, 0.0f, 5.0f, &Var25);
				}
				if (Global_30842[12])
				{
					Function_102(StackVal, StackVal, StackVal, StackVal, StackVal, Var25);
					PRINTNL();
				}
				Function_128(&Var25);
				Function_128(&Param1);
				vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_128(&Param1), Function_128(&Var25), StackVal) };
				VNORMALIZE(&vVar21);
				fVar24 = VDOT(&vVar21, &vVar18);
				fVar24 = (fVar24 * RAND_FLOAT_GAUSSIAN(0.5f, 0.5f));
				if (fVar24 < fVar34)
				{
					fVar34 = fVar24;
					iVar32 = iVar9;
				}
				RELEASE_CURVE(bVar47);
				iVar9++;
			}
		}
		else
		{
			Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_103() };
			Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_103() };
			Function_128(&Param1);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_128(&Param1), Global_34574, StackVal) };
			VNORMALIZE(&vVar18);
			iVar9 = 0;
			while (iVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(uVar31))
			{
				bVar47 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(uVar31, iVar9);
				GET_CURVE_POINT(bVar47, 1.0f, &Var35, 0);
				GET_CURVE_POINT(bVar47, 0.0f, &Var41, 0);
				Function_128(&Param1);
				Function_128(&Var35);
				Function_128(&Param1);
				Function_128(&Var41);
				if (StackVal > Function_87(StackVal, StackVal, StackVal, Function_87(StackVal, StackVal, StackVal, StackVal, Function_128(&Param1), Function_128(&Var35)), Function_128(&Param1), Function_128(&Var41)))
				{
					UNK_0x04D89A35(bVar47, 1.0f, Var35.f_16, 5.0f, &Var25);
				}
				else
				{
					UNK_0x04D89A35(bVar47, 0.0f, Var41.f_16, 5.0f, &Var25);
				}
				Function_128(&Var25);
				Function_128(&Param1);
				vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_128(&Param1), Function_128(&Var25), StackVal) };
				VNORMALIZE(&vVar21);
				fVar24 = VDOT(&vVar21, &vVar18);
				fVar24 = (fVar24 * RAND_FLOAT_GAUSSIAN(0.25f, 1.0f));
				if (fVar24 < fVar34)
				{
					fVar34 = fVar24;
					iVar32 = iVar9;
				}
				RELEASE_CURVE(bVar47);
				iVar9++;
			}
		}
		iVar14 = 0;
		if (iVar32 == 4294967295)
		{
			UNK_0xDF93BD7C(uVar31);
			if (uParam9 || iVar14 > 5)
			{
				fVar12 = fVar13;
				fVar13 = (fVar13 + fParam8);
				iVar14++;
			}
			else
			{
				return StackVal, StackVal, StackVal, StackVal, StackVal, Function_103();
			}
		}
		bVar10 = true;
	}
	iParam0->f_152 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(uVar31, iVar32);
	iParam0->f_156 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(iParam0->f_152, 0.0f, 1.0f, 10);
	GET_POINT_FROM_CURVE_QUERY(uVar31, iVar32, &Var0);
	Function_128(&Var0);
	vVar48 = { StackVal, StackVal, Function_128(&Var0) };
	GET_CURVE_POINT(iParam0->f_152, 1.0f, &Var51, 0);
	GET_CURVE_POINT(iParam0->f_152, 0.0f, &Var57, 0);
	if (StackVal < Function_101(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_101(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var51, Param1), Var57, Param1))
	{
		iParam0->f_148 = 1;
		GET_CURVE_POINT(iParam0->f_152, 1.0f, &Var0, 0);
	}
	else
	{
		iParam0->f_148 = 4294967295;
		GET_CURVE_POINT(iParam0->f_152, 0.0f, &Var0, 0);
	}
	if (Global_30900[1])
	{
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 <= GET_NUM_POINTS_IN_CURVE_QUERY(uVar31))
		{
			GET_POINT_FROM_CURVE_QUERY(uVar31, iVar9, &Var25);
			Function_128(&Var25);
			vVar48 = { StackVal, StackVal, Function_128(&Var25) };
			iVar9++;
		}
		Function_128(&Var0);
		vVar48 = { StackVal, StackVal, Function_128(&Var0) };
	}
	Function_98(iParam0);
	UNK_0xDF93BD7C(uVar31);
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_98(int iParam0) //Position: 0x5987 / 22919
{
	if (!Function_100(iParam0))
	{
		return;
	}
	if (!Function_99(StackVal))
	{
		return;
	}
	if (!SQUAD_IS_VALID(StackVal))
	{
		return;
	}
	if (!IS_OBJECT_VALID(iParam0->f_152))
	{
		return;
	}
	if (!iParam0->f_20 < 0)
	{
		return;
	}
	if (!GET_CURVE_TYPE(iParam0->f_152) != 4 && !GET_CURVE_TYPE(iParam0->f_152) != 5)
	{
		LOG_ERROR("Adding a traffic node with a bad pathtype. I thought we filtered this?");
		return;
	}
	return;
}

bool Function_99(int iParam0) //Position: 0x5A2B / 23083
{
	if (iParam0 > 0 || iParam0 < 3)
	{
		return 0;
	}
	return 1;
}

bool Function_100(bool bParam0) //Position: 0x5A40 / 23104
{
	if (*bParam0 == 0)
	{
		return 0;
	}
	return 1;
}

float Function_101(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) //Position: 0x5A50 / 23120
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_128(&bParam0);
	vVar0 = { StackVal, StackVal, Function_128(&bParam0) };
	Function_128(&bParam6);
	vVar3 = { StackVal, StackVal, Function_128(&bParam6) };
	return VDIST(vVar0, vVar3);
}

void Function_102(struct<17> Param0) //Position: 0x5A75 / 23157
{
	Function_128(&Param0);
	PRINTVECTOR(Function_128(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
}

struct<24> Function_103() //Position: 0x5AAA / 23210
{
	struct<6> Var0;
	
	Var0.f_20 = 4294967295;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

var Function_104(int iParam0) //Position: 0x5ABB / 23227
{
	if (IS_OBJECTSET_VALID(iParam0->f_48))
	{
		return 5.0f;
	}
	switch (StackVal)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			switch (iParam0->f_72)
			{
				case 0x00000005:
					return 2.5f;
					break;
				
				case 0x00000001:
					return 3.75f;
					break;
				
				case 0x00000002:
					return 6.25f;
					break;
				
				case 0x00000004:
					return 8.75f;
					break;
				
				case 0x00000003:
					return 12.5f;
					break;
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in NextTravelFreq");
			break;
	}
	return 6.25f;
}

int Function_105(int iParam0, int iParam1) //Position: 0x5B73 / 23411
{
	if (iParam1 != 0)
	{
		return iParam1;
	}
	switch (iParam0)
	{
		case 0x00000002:
			return 16;
			break;
		
		case 0x00000001:
			return 48;
			break;
	}
	return 48;
}

struct<24> Function_106(bool bParam0) //Position: 0x5BA3 / 23459
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { 0.0f, -50.0f, 0.0f };
	GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(bParam0), vVar0, &vVar3);
	if (!Function_107(&vVar3, 50.0f, &vVar0, 10))
	{
		vVar0 = { StackVal, StackVal, vVar3 };
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Function_108(StackVal, StackVal, vVar0);
}

bool Function_107(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x5BE6 / 23526
{
	var uVar0;
	int iVar3;
	vector3 vVar4;
	
	if (iParam3 == 4294967295)
	{
		iVar3 = 4294967294;
	}
	else
	{
		iVar3 = 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar4);
		if (VDIST(*uParam0, vVar4) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(vVar4);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(*uParam0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(*uParam0, vVar4));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
	{
		if (!Function_13(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*uParam0 = (*uParam0 + 0.01f);
		uParam0->f_8 = (StackVal + 0.01f);
		if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_13(StackVal, StackVal, *iParam2))
			{
				return 1;
			}
		}
		*iParam2 = { StackVal, StackVal, *uParam0 };
		iParam2->f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar3++;
		}
		WAIT(0);
	}
	return 0;
}

struct<24> Function_108(vector3 vParam0) //Position: 0x5D18 / 23832
{
	struct<6> Var0;
	
	Var0 = vParam0.x;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

var Function_109(bool bParam0) //Position: 0x5D38 / 23864
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	iVar1 = 0;
	while (iVar1 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, iVar1);
		if (IS_ACTOR_VALID(bVar0) && IS_ACTOR_ALIVE(bVar0))
		{
			return bVar0;
		}
		bVar1++;
	}
	return "";
}

bool Function_110(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5D7E / 23934
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!Function_100(bParam0))
	{
		Function_115(bParam0, 1);
		return 0;
	}
	if (DECOR_CHECK_EXIST(StackVal, "coachService"))
	{
		return 1;
	}
	AI_CLEAR_NAV_MATERIAL_USAGE(Function_109(StackVal));
	if (!SQUAD_GOAL_IS_VALID(bParam0->f_12))
	{
		SQUAD_GOALS_CLEAR(StackVal);
	}
	Function_128(bParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_128(bParam0 + 24) };
	vVar0 = { StackVal, StackVal, vVar3 };
	Function_114(StackVal, StackVal, vVar0, bParam0 + 24);
	if (bParam1)
	{
		bParam0->f_76 = Function_113(StackVal, bParam0->f_76, bParam0->f_80);
		if (!bParam0->f_96 || bParam0->f_72 != 4294967295)
		{
			bParam0->f_72 = bParam0->f_76;
		}
	}
	if (bParam2)
	{
		AI_SET_NAV_MATERIAL_USAGE(StackVal, Function_112(Function_109(StackVal)), 0);
	}
	Function_111(bParam0);
	return 1;
}

void Function_111(int iParam0) //Position: 0x5E36 / 24118
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(StackVal))
	{
		return;
	}
	iVar1 = 2;
	if (Function_10())
	{
		iVar1 = 0;
	}
	if (iParam0->f_148 == 4294967295)
	{
		iVar0 = 1;
	}
	if (iParam0->f_108)
	{
		iVar1 = 1;
	}
	if (iParam0->f_116)
	{
		if (!iParam0->f_96 && GET_CURVE_TYPE(iParam0->f_152) == 5)
		{
			iParam0->f_116 = 0;
		}
	}
	else
	{
		if (GET_CURVE_TYPE(iParam0->f_152) == 5)
		{
			iParam0->f_116 = 1;
		}
		if (iParam0->f_96)
		{
			iParam0->f_116 = 1;
		}
	}
	if (!SQUAD_GOAL_IS_VALID(iParam0->f_12))
	{
		iParam0->f_12 = SQUAD_GOAL_ADD_FOLLOW_TRAFFIC_CURVE(StackVal, 0, 4294967295, iParam0->f_152, iParam0->f_72, iVar0, iVar1);
		if (iParam0->f_116)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 2, 0);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 1, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 2, 1);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 1, 0);
		}
		if (iParam0->f_84 != 2)
		{
			if (!iParam0->f_104)
			{
				iParam0->f_84 = 2;
			}
			else
			{
				SQUAD_FOLLOW_TRAFFIC_CURVE_SET_TASK_PRIORITY(StackVal, iParam0->f_12, iParam0->f_84);
			}
		}
		if (StackVal && !iParam0->f_112 != 2)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 4, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 4, 0);
		}
		SQUAD_GOAL_ADD_FACTION_STATUS_WITHIN_GOAL(StackVal, 1, 0);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(StackVal, 1);
	}
	else
	{
		if (!SQUAD_FOLLOW_TRAFFIC_CURVE_IS_CURVE_ALREADY_IN_LIST(StackVal, iParam0->f_12, iParam0->f_152, iVar0, 0))
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_ENQUEUE_CURVE(StackVal, iParam0->f_12, iParam0->f_152, iVar0);
		}
		if (iParam0->f_116)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 2, 0);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 1, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 2, 1);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 1, 0);
		}
	}
	return;
}

int Function_112(int iParam0) //Position: 0x5FD6 / 24534
{
	switch (iParam0)
	{
		case 0x00000002:
			return 64;
			break;
		
		case 0x00000001:
			return 96;
			break;
	}
	return 96;
}

int Function_113(int iParam0, int iParam1, int iParam2) //Position: 0x5FFD / 24573
{
	int iVar0;
	int iVar1;
	
	if (!Function_10())
	{
		if (iParam2 != 0)
		{
			return iParam2;
		}
		iVar0 = RAND_INT_RANGE(1, 10000);
		iParam1 = iParam1;
		switch (iParam0)
		{
			case 0x00000001:
				if (iVar0 <= 5000)
				{
					return 2;
				}
				if (iVar0 <= 4000)
				{
					return 4;
				}
				return 3;
				break;
			
			case 0x00000003:
				if (iVar0 <= 5000)
				{
					return 1;
				}
				return 2;
				break;
			
			case 0x00000002:
				if (iVar0 <= 7500)
				{
					return 2;
				}
				return 4;
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in WildSpeed");
				break;
		}
		return 2;
	}
	if (iParam2 != 0)
	{
		return iParam2;
	}
	iVar1 = RAND_INT_RANGE(1, 10000);
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 0x00000001:
			if (iVar1 <= 9000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000003:
			if (iVar1 <= 7500)
			{
				return 2;
			}
			return 4;
			break;
		
		case 0x00000002:
			if (iVar1 <= 7500)
			{
				return 2;
			}
			return 4;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in WildSpeed");
			break;
	}
	return 2;
}

void Function_114(vector3 vParam0) //Position: 0x613B / 24891
{
	*uParam3 = vParam0.x;
	uParam3->f_4 = vParam0.y;
	uParam3->f_8 = vParam0.z;
}

void Function_115(bool bParam0, int iParam1) //Position: 0x6158 / 24920
{
	struct<5> Var0;
	char* cVar6[16];
	struct<13> Var10;
	
	if (!Global_30900[1] && iParam1)
	{
		return;
	}
	if (!Function_100(bParam0))
	{
		return;
	}
	strcpy(&cVar6, "TRAFFIC NODE", 16);
	switch (bParam0->f_72)
	{
		case 0x00000005:
			Var10 = 1.0f;
			Var10.f_4 = 0.0f;
			Var10.f_8 = 0.0f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000001:
			Var10 = 0.9f;
			Var10.f_4 = 0.55f;
			Var10.f_8 = 0.1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000002:
			Var10 = 0.9f;
			Var10.f_4 = 0.9f;
			Var10.f_8 = 0.1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000004:
			Var10 = 0.2f;
			Var10.f_4 = 0.8f;
			Var10.f_8 = 0.1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000003:
			Var10 = 0.1f;
			Var10.f_4 = 0.1f;
			Var10.f_8 = 1.0f;
			Var10.f_12 = 1.0f;
			break;
	}
	GET_POSITION(Function_109(StackVal), &Var0);
	vVar14 = { 0.0f, 1.0f, 0.0f };
	if (Function_92())
	{
		fVar17 = 0.0f;
		if (!Function_116(bParam0, &fVar17, 0))
		{
			if (fVar17 < 0.0f)
			{
				vVar14 = { 1.0f, 1.0f, 0.0f };
			}
			else
			{
				vVar14 = { 0.0f, 0.0f, 1.0f };
			}
		}
	}
	Var0.f_4 = (StackVal + 2.5f);
	Var0.f_4 = (StackVal + 1.0f);
	Var0.f_4 = (StackVal + 0.5f);
	switch (StackVal)
	{
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
	}
	Function_128(bParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_128(bParam0 + 24) };
	return;
}

bool Function_116(bool bParam0, var uParam1, bool bParam2) //Position: 0x62D1 / 25297
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (StackVal || !SQUAD_IS_VALID(!Function_100(bParam0)))
	{
		*uParam1 = 0.0f;
		return 0;
	}
	bVar2 = true;
	iVar3 = SQUAD_GET_SIZE(StackVal);
	iVar4 = 0;
	bVar1 = false;
	while (bVar1 <= iVar3)
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar1);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (!NET_IS_OBJECT_LOCAL(bVar0))
			{
				iVar4++;
				bVar2 = false;
			}
		}
		bVar1++;
	}
	iVar5 = 0;
	if (!bParam2)
	{
		bVar1 = false;
		if (IS_OBJECTSET_VALID(bParam0->f_180))
		{
			iVar5 = GET_OBJECTSET_SIZE(bParam0->f_180);
			bVar1 = false;
			while (bVar1 <= iVar5)
			{
				bVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bParam0->f_180));
				if (IS_ACTOR_VALID(bVar0))
				{
					if (!NET_IS_OBJECT_LOCAL(bVar0))
					{
						iVar4++;
						bVar2 = false;
					}
				}
				bVar1++;
			}
		}
	}
	if (bVar2)
	{
		*uParam1 = 1.0f;
	}
	else if (iVar4 <= (iVar3 + iVar5))
	{
		*uParam1 = 0.5f;
	}
	else
	{
		*uParam1 = 0.0f;
	}
	return bVar2;
}

void Function_117(bool bParam0, int iParam1) //Position: 0x63B7 / 25527
{
	if (!Function_10())
	{
		Function_124(StackVal);
		if (Global_28842.f_80 != 0)
		{
			bParam0->f_72 = Global_28842.f_80;
			Function_123(StackVal, bParam0->f_72);
		}
		else if (Global_3403 || iParam1)
		{
			if (StackVal == 2)
			{
				bParam0->f_72 = 4;
			}
			else
			{
				bParam0->f_72 = 3;
			}
			Function_123(StackVal, bParam0->f_72);
			if (StackVal == 2)
			{
				Function_122(StackVal, 1);
			}
		}
		else if (StackVal || Function_88((Global_3404 || Function_120(131072))))
		{
			bParam0->f_72 = 4;
			Function_123(StackVal, bParam0->f_72);
			if (StackVal == 2)
			{
				Function_122(StackVal, 1);
			}
		}
		else if (bParam0->f_92)
		{
			bParam0->f_72 = Function_119(StackVal, bParam0->f_80);
			Function_123(StackVal, bParam0->f_72);
		}
		else if (bParam0->f_96)
		{
			bParam0->f_72 = Function_118(StackVal, bParam0->f_80);
			Function_123(StackVal, bParam0->f_72);
			if (StackVal == 2)
			{
				Function_122(StackVal, 0);
			}
		}
		else
		{
			bParam0->f_72 = bParam0->f_76;
			if (StackVal == 2)
			{
				Function_122(StackVal, 1);
			}
		}
	}
	else
	{
		Function_124(StackVal);
		if (Global_28842.f_80 != 0)
		{
			bParam0->f_72 = Global_28842.f_80;
			Function_123(StackVal, bParam0->f_72);
		}
		else if (StackVal || Function_88(Function_120(131072)))
		{
			bParam0->f_72 = 3;
			Function_123(StackVal, bParam0->f_72);
			if (StackVal == 2)
			{
				Function_122(StackVal, 1);
			}
		}
		else if (bParam0->f_92)
		{
			bParam0->f_72 = Function_119(StackVal, bParam0->f_80);
			Function_123(StackVal, bParam0->f_72);
		}
		else if (bParam0->f_96)
		{
			bParam0->f_72 = Function_118(StackVal, bParam0->f_80);
			Function_123(StackVal, bParam0->f_72);
			if (StackVal == 2)
			{
				Function_122(StackVal, 0);
			}
		}
		else
		{
			bParam0->f_72 = bParam0->f_76;
			if (StackVal == 2)
			{
				Function_122(StackVal, 1);
			}
		}
	}
	return;
}

int Function_118(bool bParam0, int iParam1) //Position: 0x659F / 26015
{
	int iVar0;
	int iVar1;
	
	if (!Function_10())
	{
		if (iParam1 != 0)
		{
			return iParam1;
		}
		iVar0 = RAND_INT_RANGE(1, 10000);
		switch (bParam0)
		{
			case 0x00000001:
				if (iVar0 <= 9000)
				{
					return 1;
				}
				return 2;
				break;
			
			case 0x00000002:
				return 1;
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in TownSpeed");
				break;
		}
		return 1;
	}
	if (iParam1 != 0)
	{
		return iParam1;
	}
	iVar1 = RAND_INT_RANGE(1, 10000);
	switch (bParam0)
	{
		case 0x00000001:
			if (iVar1 <= 9000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (iVar1 <= 9000)
			{
				return 2;
			}
			return 4;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in TownSpeed");
			break;
	}
	return 2;
}

int Function_119(int iParam0, bool bParam1) //Position: 0x668B / 26251
{
	if (!Function_10())
	{
		if (bParam1 != 0)
		{
			return bParam1;
		}
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000003:
				return 1;
				break;
			
			case 0x00000002:
				return 5;
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in PlayerNearSpeed");
				break;
		}
		return 5;
	}
	if (bParam1 != 0)
	{
		return bParam1;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000003:
			return 4;
			break;
		
		case 0x00000002:
			return 2;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in PlayerNearSpeed");
			break;
	}
	return 2;
}

bool Function_120(int iParam0) //Position: 0x6756 / 26454
{
	return Function_121(&Global_28842, iParam0);
}

int Function_121(var uParam0, int iParam1) //Position: 0x6764 / 26468
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_122(bool bParam0, int iParam1) //Position: 0x6780 / 26496
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(SQUAD_GET_ACTOR_BY_INDEX(bParam0, iVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_123(bool bParam0, int iParam1) //Position: 0x67A8 / 26536
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		TASK_OVERRIDE_SET_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, iVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_124(bool bParam0) //Position: 0x67D0 / 26576
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		TASK_OVERRIDE_CLEAR_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, iVar0));
		bVar0++;
	}
	return;
}

bool Function_125(bool bParam0) //Position: 0x67F6 / 26614
{
	return ((((StackVal && (StackVal && *bParam0 != 0.0f != 0.0f) != 0.0f) && bParam0->f_12 != 0.0f) && bParam0->f_16 != 0.0f) && bParam0->f_20 != 4294967295);
}

struct<24> Function_126(int iParam0, struct<6> Param1, bool bParam7, vector3 vParam8) //Position: 0x6824 / 26660
{
	bool bVar0;
	bool bVar6;
	struct<6> Var12;
	
	if (!IS_OBJECT_VALID(bParam7))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, Var12;
	}
	iParam0->f_148 = Function_127(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam7, Param1, vParam8);
	if (iParam0->f_148 >= 0)
	{
		GET_CURVE_POINT(bParam7, 1.0f, &Var12, 0);
		UNK_0x19D652F9(bParam7, 1.0f, &Param1, &bVar0);
		Function_128(&bVar0);
		Function_128(&Param1);
		*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_128(&Param1), Function_128(&bVar0), StackVal) };
		*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	}
	else
	{
		GET_CURVE_POINT(bParam7, 0.0f, &Var12, 0);
		UNK_0x19D652F9(bParam7, -1.0f, &Param1, &bVar6);
		Function_128(&bVar6);
		Function_128(&Param1);
		*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_128(&Param1), Function_128(&bVar6), StackVal) };
		*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var12;
}

int Function_127(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x68C2 / 26818
{
	bool bVar0;
	bool bVar6;
	vector3 vVar12;
	vector3 vVar15;
	float fVar18;
	float fVar19;
	
	UNK_0x19D652F9(bParam0, 1.0f, &bParam1, &bVar0);
	UNK_0x19D652F9(bParam0, -1.0f, &bParam1, &bVar6);
	Function_128(&bVar0);
	Function_128(&bParam1);
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_128(&bParam1), Function_128(&bVar0), StackVal) };
	fVar18 = VDOT(&uParam7, &vVar12);
	Function_128(&bVar6);
	Function_128(&bParam1);
	vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_128(&bParam1), Function_128(&bVar6), StackVal) };
	fVar19 = VDOT(&uParam7, &vVar15);
	if (fVar19 > fVar18)
	{
		return 1;
	}
	return 4294967295;
}

vector3 Function_128(bool bParam0) //Position: 0x691B / 26907
{
	vector3 vVar0;
	
	vVar0.x = *bParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

void Function_129(int iParam0, vector3 vParam1, struct<5> Param4, var uParam9) //Position: 0x693A / 26938
{
	*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_108(StackVal, StackVal, vParam1) };
	(iParam0 + 24)->f_12 = Param4;
	(iParam0 + 24)->f_16 = StackVal;
	iParam0->f_152 = uParam7;
	iParam0->f_112 = uParam9;
	iParam0->f_116 = uParam8;
	Function_130(iParam0);
	iParam0->f_20 = SQUAD_GET_SIZE(StackVal);
	Function_98(iParam0);
}

void Function_130(var uParam0) //Position: 0x6988 / 27016
{
	struct<2> Var0;
	
	if (!SQUAD_IS_VALID(StackVal))
	{
		Function_131();
		Var0 = { StackVal, Function_131() };
		uParam0->f_8 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_28841, &Var0));
	}
	*uParam0 = 1;
	return;
}

struct<8> Function_131() //Position: 0x69B3 / 27059
{
	char* cVar0[8];
	
	strcpy(&cVar0, "", 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	return StackVal, cVar0;
}

var Function_132(bool bParam0) //Position: 0x6A0A / 27146
{
	return GET_HEADING(bParam0);
}

var Function_133(vector3 vParam0, int iParam3, float fParam4, float fParam5, float fParam6) //Position: 0x6A15 / 27157
{
	vector3 vVar0;
	var uVar3;
	struct<9> Var4;
	
	fVar11 = -1.0f;
	uVar3 = START_CURVE_QUERY(Global_28841, vParam0, iParam3, fParam4, fParam5, fParam6, 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(uVar3) < 0)
	{
	}
	else
	{
		iVar12 = 0;
		while (iVar12 < (GET_NUM_POINTS_IN_CURVE_QUERY(uVar3) - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(uVar3, iVar12, &vVar4);
			vVar0.x = vVar4.x;
			vVar0.f_4 = vVar4.y;
			vVar0.f_8 = vVar4.z;
			if (fVar11 > 0.0f || fVar11 < VDIST(vParam0, vVar0))
			{
				fVar11 = VDIST(vParam0, vVar0);
				uVar10 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(uVar3, iVar12);
			}
			iVar12++;
		}
	}
	UNK_0xDF93BD7C(uVar3);
	return uVar10;
}

vector3 Function_134(bool bParam0) //Position: 0x6AAC / 27308
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_135(int iParam0, vector3 vParam1) //Position: 0x6ABD / 27325
{
	*(iParam0 + 168) = { StackVal, StackVal, vParam1 };
}

void Function_136(bool bParam0) //Position: 0x6ACF / 27343
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "nnostickup"))
		{
			DECOR_REMOVE(bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
		TASK_PRIORITY_SET(bParam0, 2);
	}
	return;
}

int Function_137(bool bParam0, bool bParam1) //Position: 0x6B1B / 27419
{
	if (IS_ACTOR_HUMAN(bParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(bParam0) == 0)
		{
			TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bParam0, 0);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(*bParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(bParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(bParam0, *bParam1, 1);
	TASK_KILL_CHAR(bParam0, *bParam1);
	TASK_PRIORITY_SET(bParam0, 1);
	return 1;
}

bool Function_138(bool bParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x6C00 / 27648
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
		fVar0 = Function_172(bParam0, Global_34573);
		if (!Function_11(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_139(bParam0);
				return 1;
			}
		}
		if (!Function_11(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_139(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_139(bParam0);
				return 1;
			}
		}
		if (!Function_11(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_139(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_139(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_11(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_139(bParam0);
				return 1;
			}
		}
		if (!Function_11(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_139(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_139(bool bParam0) //Position: 0x6D97 / 28055
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_140(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_140(bool bParam0) //Position: 0x6DCB / 28107
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_141(int iParam0, bool bParam1, bool bParam2) //Position: 0x6DE2 / 28130
{
	int iVar0;
	bool bVar1;
	
	if (Function_70(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_69())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_47(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_64(1, bVar1);
			if (!bParam2)
			{
				if (!Function_63(Global_76848, 1))
				{
					Function_57(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_145(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_63(Global_76848, 2))
				{
					Function_57(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_32(1, bVar1, 0, 0);
	}
	else
	{
		Function_144(1, (4294967295 * bVar1), 0);
	}
	if (Function_47(1) <= 4294962296)
	{
		Function_143(1, 4294962296, 0);
	}
	else if (Function_47(1) >= 5000)
	{
		Function_143(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_42(1));
	iVar0 = Function_47(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_50(2, Function_142(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_50(2, Function_142(Global_12976.f_152), 0);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_12976.f_152 = 2;
				Function_50(2, Function_142(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_50(2, Function_142(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_50(2, Function_142(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", Global_34573))
			{
				DELETE_ITEM("HONOR_ROSARY", Global_34573, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_12976.f_152 = 2;
				Function_50(2, Function_142(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_50(2, Function_142(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_50(2, Function_142(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_50(2, Function_142(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_50(2, Function_142(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_50(2, Function_142(Global_12976.f_152), 1);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000006:
			if (iVar0 < 4500)
			{
				Global_12976.f_152 = 5;
				Function_50(2, Function_142(Global_12976.f_152), 0);
			}
			break;
	}
	Function_49(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_142(int iParam0) //Position: 0x7103 / 28931
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_hnr7";
			break;
		
		case 0x00000001:
			return "sr_hnr6";
			break;
		
		case 0x00000002:
			return "sr_hnr5";
			break;
		
		case 0x00000003:
			return "sr_hnr4";
			break;
		
		case 0x00000004:
			return "sr_hnr3";
			break;
		
		case 0x00000005:
			return "sr_hnr2";
			break;
		
		case 0x00000006:
			return "sr_hnr1";
			break;
	}
	return "sr_hnr4";
}

int Function_143(int iParam0, bool bParam1, bool bParam2) //Position: 0x71A6 / 29094
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
		Function_45(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_44(iParam0);
	if (bParam2)
	{
		Function_33(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_144(int iParam0, bool bParam1, int iParam2) //Position: 0x7441 / 29761
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
	Function_44(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_33(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_145(int iParam0, bool bParam1) //Position: 0x763C / 30268
{
	bool bVar0;
	int iVar1;
	
	Function_144(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_65(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_51();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

bool Function_146(bool bParam0, bool bParam1, int iParam2) //Position: 0x77D8 / 30680
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, iParam2))
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

float Function_147(bool bParam0) //Position: 0x78E9 / 30953
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_148(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_148(float fParam0, bool bParam1) //Position: 0x7924 / 31012
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*fParam0 = 65.0f;
		*bParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*fParam0 = 115.0f;
		*bParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*fParam0 = 130.0f;
			*bParam1 = 190.0f;
		}
		else
		{
			*fParam0 = 130.0f;
			*bParam1 = 190.0f;
		}
	}
	return;
}

bool Function_149(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x79AD / 31149
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_172(Global_34573, bParam1) > 15.0f)
				{
					*uParam2 = 1;
				}
			}
		}
		if (Global_3394 && !*uParam2)
		{
			return 0;
		}
		if ((Global_3367 && Global_6281 == GET_THIS_SCRIPT_ID()) && !*uParam2)
		{
			return 0;
		}
		if (Function_152() && !*uParam2)
		{
			return 0;
		}
		if (Function_151(iParam0) && !*uParam2)
		{
			return 0;
		}
		if (Global_3387 && !bParam4)
		{
			return 0;
		}
		if (Global_3410)
		{
			return 0;
		}
		if (Global_3384)
		{
			return 0;
		}
		if (Global_3403 && uParam7)
		{
			*uParam3 = 1;
			return 0;
		}
		if (Global_3404 && uParam7)
		{
			*uParam3 = 1;
			return 0;
		}
		if (Global_3392 && !*uParam2)
		{
			return 0;
		}
		if (Global_3393 && !*uParam2)
		{
			return 0;
		}
		if (bParam6)
		{
			if (Global_63096 && !*uParam2)
			{
				return 0;
			}
		}
		if (IS_ACTOR_ON_TRAIN(Global_34573, 0))
		{
			return 0;
		}
	}
	if (StackVal & 2048 != 2048)
	{
		if (!Function_150(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_150(int iParam0, int iParam1) //Position: 0x7ADB / 31451
{
	iParam0 = iParam0;
	if (Global_3382 != 1 && iParam1)
	{
		return 0;
	}
	if (Global_3369 == 1)
	{
		return 0;
	}
	return 1;
}

int Function_151(int iParam0) //Position: 0x7AFC / 31484
{
	float fVar0;
	
	if (StackVal & 64 == 64)
	{
		fVar0 = GET_LAST_HIT_TIME(Global_34573);
		if (fVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(Global_34573)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_152() //Position: 0x7B3A / 31546
{
	int iVar0;
	int iVar1;
	
	if (Global_3386)
	{
		iVar1 = 9;
	}
	else
	{
		iVar1 = 22;
	}
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					if (StackVal != DECOR_GET_INT(GET_THIS_SCRIPT_ID(), "script"))
					{
						if (Function_153(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_153(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_153(bool bParam0, bool bParam1) //Position: 0x7BF5 / 31733
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_155(bParam0);
			vVar0 = { StackVal, StackVal, Function_155(bParam0) };
			Function_154(bParam1);
			vVar3 = { StackVal, StackVal, Function_154(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_154(bool bParam0) //Position: 0x7C95 / 31893
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

vector3 Function_155(bool bParam0) //Position: 0x7D01 / 32001
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

void Function_156(var uParam0, bool bParam1, bool bParam2) //Position: 0x7D6B / 32107
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_76(uParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (bParam2)
		{
			Function_157();
		}
	}
	return;
}

void Function_157() //Position: 0x7D94 / 32148
{
	switch (Global_29004)
	{
		case 0x00000000:
			AUDIO_MUSIC_ONE_SHOT("FTR_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_ONE_SHOT("MEX_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_ONE_SHOT("NRT_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
	}
	return;
}

bool Function_158(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x7E1D / 32285
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(bParam0) <= 1)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(bParam0) <= iParam1)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(bParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 2)
			{
				if (bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 3)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= iParam3)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	return 1;
}

void Function_159(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x7ED6 / 32470
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!*uParam2)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 <= iParam1)
	{
		if (IS_ACTOR_VALID((*uParam0)[iVar1]))
		{
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam0)[iVar1], 1.0f, iParam5, 1, 1, 0))
			{
				*uParam2 = 1;
				if (iParam4 != 0)
				{
					Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam4));
				}
			}
		}
		iVar1++;
	}
	if (*uParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_171(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_170(0);
		}
		if (bParam6)
		{
			Function_168(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Global_3401 = 1;
			Function_166(iParam3);
		}
		Function_164(iParam3);
		if (Function_163(StackVal, 32768))
		{
			Function_160(1);
		}
		Global_16876[iParam36].f_12++;
		Function_32(408, 1, 0, 0);
	}
}

void Function_160(bool bParam0) //Position: 0x7FC3 / 32707
{
	if (bParam0)
	{
		Function_162(0x10000000);
	}
	else
	{
		Function_161(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_161(int iParam0) //Position: 0x7FE7 / 32743
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_162(int iParam0) //Position: 0x8006 / 32774
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_163(var uParam0, int iParam1) //Position: 0x8019 / 32793
{
	return (uParam0 && iParam1) == 0;
}

void Function_164(int iParam0) //Position: 0x8026 / 32806
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_11(StackVal, 524288))
	{
		if (Global_16876[iParam06].f_16 < 0 && Global_16876[iParam06].f_16 > 2)
		{
			iVar0 = 10;
		}
		else if (Global_16876[iParam06].f_16 <= 2 && Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 16;
		}
		else if (Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 24;
		}
		if (iVar0 >= 0)
		{
			bVar1 = Function_165(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_165(int iParam0) //Position: 0x80CA / 32970
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_166(int iParam0) //Position: 0x80E0 / 32992
{
	struct<77> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Global_30842[16])
	{
		PRINTNL();
		PRINTSTRING("SAVE_BEAT_STATE: ");
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
		PRINTNL();
		PRINTSTRING("curIDX: ");
		PRINTINT(Var0.f_76);
		PRINTNL();
	}
	Function_167(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
	if (Var0.f_76 == 2)
	{
		Var0.f_76 = 0;
	}
	else
	{
		Var0.f_76++;
	}
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_167(var uParam0, var uParam1, int iParam2) //Position: 0x817E / 33150
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_168(int iParam0, int iParam1) //Position: 0x8196 / 33174
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
			Function_169(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_169(int iParam0) //Position: 0x8218 / 33304
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

void Function_170(int iParam0) //Position: 0x8266 / 33382
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_165(900)), 0);
	return;
}

void Function_171(int iParam0) //Position: 0x8288 / 33416
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_165(200)), 0);
	return;
}

float Function_172(bool bParam0, bool bParam1) //Position: 0x82A9 / 33449
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

bool Function_173(bool bParam0, bool bParam1) //Position: 0x839A / 33690
{
	if (bParam1)
	{
		if (IS_ACTOR_HOGTIED(bParam0))
		{
			if (!(GET_TASK_STATUS(bParam0, 25) != 1 || GET_TASK_STATUS(bParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(bParam0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(bParam0, 1);
			}
			Function_25(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_25(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_174(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(bParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_174(bool bParam0, int iParam1) //Position: 0x8436 / 33846
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(bParam0))
		{
			return 1;
		}
		bVar0 = SQUAD_GET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

void Function_175(int iParam0, int iParam1) //Position: 0x8480 / 33920
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_176(var uParam0, var uParam1, var uParam2, float fParam3, vector3 vParam4) //Position: 0x848F / 33935
{
	var uVar0[5];
	int iVar6;
	
	if (*uParam0 != 4294967295)
	{
		*uParam0 = CLEAR_AREA_OF_TREE_TYPE(vParam4, (fParam3 + 2.0f), "");
	}
	if (*uParam1 != 4294967295)
	{
		*uParam1 = CLEAR_AREA_OF_BREAKABLE_TREES(vParam4, (fParam3 + 2.0f));
	}
	if (*uParam2 != 4294967295)
	{
		*uParam2 = CLEAR_AREA_OF_GRASS(vParam4, fParam3);
	}
	if (IS_LAYOUTREF_VALID(Global_30616))
	{
		if (Function_177(StackVal, StackVal, Global_30616, "player_herb", &uVar0, 20.0f, 5, vParam4) >= 0)
		{
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				if (IS_OBJECT_VALID(uVar0[iVar6]))
				{
					DESTROY_OBJECT(uVar0[iVar6]);
				}
				iVar6++;
			}
		}
	}
}

int Function_177(bool bParam0, bool bParam1, var uParam2, float fParam3, int iParam4, vector3 vParam5) //Position: 0x8530 / 34096
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	
	iVar0 = 0;
	iParam4 = iParam4;
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar5 = CREATE_OBJECT_ITERATOR(bParam0);
		ITERATE_ON_OBJECT_TYPE(bVar5, 12);
		ITERATE_ON_PARTIAL_NAME(bVar5, bParam1);
		bVar4 = START_OBJECT_ITERATOR(bVar5);
		while (IS_OBJECT_VALID(bVar4))
		{
			if (IS_OBJECT_VALID(bVar4))
			{
				GET_OBJECT_POSITION(bVar4, &vVar1);
				if (VDIST(vParam5, vVar1) > fParam3)
				{
					(*uParam2)[iVar0] = bVar4;
					iVar0++;
					if (iVar0 > iParam4)
					{
						DESTROY_ITERATOR(bVar5);
						return iVar0;
					}
				}
			}
			bVar4 = OBJECT_ITERATOR_NEXT(bVar5);
		}
		DESTROY_ITERATOR(bVar5);
		return iVar0;
	}
	return iVar0;
}

void Function_178(bool bParam0, bool bParam1) //Position: 0x85C4 / 34244
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_179(bool bParam0) //Position: 0x85E4 / 34276
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", 1);
	}
	return;
}

bool Function_180(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x8618 / 34328
{
	bool bVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
	int iVar10;
	char* cVar11[16];
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam4, vParam7);
	if (!IS_ACTOR_VALID(bVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return bVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(bVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(bVar0);
		if (iParam14 > iVar10 && iParam14 < 0)
		{
			iVar10 = iParam14;
		}
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			bVar15 = "";
			if (Function_183(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_182(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_181(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[iVar9] = bVar16;
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar16, vParam4, vParam7);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(bVar15))
			{
				switch (iVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = iParam11;
						break;
					
					case 0x00000002:
						bVar17 = iParam12;
						break;
					
					case 0x00000003:
						bVar17 = iParam13;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return bVar0;
				}
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar17, vParam4, vParam7);
			}
			if (IS_ACTOR_VALID(bVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(bVar15, bVar0, iVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return bVar0;
			}
			iVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(bVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		iVar18 = 2;
		while (iVar18 < (GET_NUM_AVAILABLE_SEATS(bVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(bVar0, iVar18, 0);
			iVar18++;
		}
	}
	return bVar0;
}

bool Function_181(int iParam0, int iParam1) //Position: 0x884C / 34892
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= *iParam1)
	{
		if ((*iParam1)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_182(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x887E / 34942
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1, vParam1);
}

int Function_183(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8896 / 34966
{
	if (!IS_POPSET_VALID(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(bParam0, bParam1, bParam2);
}

void Function_184(bool bParam0) //Position: 0x88BD / 35005
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, 0);
	}
	return;
}

struct<32> Function_185(bool bParam0) //Position: 0x88D7 / 35031
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_186("0", &cVar8, ""), 4);
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

struct<32> Function_186(char* cParam0, char* cParam1, char* cParam2) //Position: 0x8941 / 35137
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

float Function_187() //Position: 0x8960 / 35168
{
	float fVar0;
	bool bVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_148(&fVar0, &bVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_188(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x8991 / 35217
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_185(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_220(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_218(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_189(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_8("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
			}
		}
		else if (*uParam2 >= 20)
		{
			*uParam3 = 1;
			Global_26153++;
		}
		*uParam2++;
		*uParam1 = 1000;
		*(iParam0 + 8) = { 0.0f, 0.0f, 0.0f };
		return 0;
	}
	if (iParam0->f_32)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		Global_3399 = 0;
		Function_8("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_6(iParam0->f_56, 0, 1, 0, 0))
		{
			*uParam3 = 1;
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed, shutting down event");
			return 0;
		}
		if (iParam0->f_52 >= 0.0f)
		{
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed: Volume restriction size not set");
			return 0;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_185("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_220(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_218(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_189(int iParam0) //Position: 0x8D23 / 36131
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	bool bVar12;
	float fVar13;
	bool bVar14;
	struct<17> Var15;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar9);
	switch (iParam0->f_64)
	{
		case 0x00000005:
			if (!IS_ITERATOR_VALID(StackVal))
			{
				if (IS_LAYOUTREF_VALID(Global_30616))
				{
					iParam0->f_4 = CREATE_OBJECT_ITERATOR(Global_30616);
				}
				else
				{
					return 0;
				}
			}
			Function_217(iParam0 + 4);
			switch ((iParam0 + 64 + 24)->f_20)
			{
				case 0x00000000:
					ITERATE_IN_LAYOUT(StackVal, Global_30616);
					break;
				
				case 0x00000001:
					ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
					break;
			}
			if (StackVal < 0.0f)
			{
				vVar3 = { 0.0f, 0.0f, Function_147(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_147(1));
			}
			if (!STRINGS_ARE_EQUAL(iParam0 + 64 + 24, ""))
			{
				ITERATE_ON_PARTIAL_NAME(StackVal, iParam0 + 64 + 24);
			}
			if (!4294967295 != (iParam0 + 64 + 24)->f_12)
			{
				ITERATE_ON_OBJECT_TYPE(StackVal, (iParam0 + 64 + 24)->f_12);
			}
			if (GET_NUM_ITERATOR_MATCHES(StackVal) >= 0)
			{
				if (StackVal & 512 == 0 || iParam0->f_36 != 1)
				{
					if ((iParam0 + 64 + 24)->f_16 == 0)
					{
						bVar0 = Function_216(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_215(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_214(StackVal, StackVal, StackVal, vVar9, Function_187());
				}
				else
				{
					bVar0 = Function_213(StackVal, StackVal, StackVal, vVar9, Function_187(), "locflag", (iParam0 + 64 + 24)->f_16);
				}
				if (IS_OBJECT_VALID(bVar0))
				{
					GET_OBJECT_POSITION(bVar0, iParam0 + 8);
					GET_OBJECT_ORIENTATION(bVar0, iParam0 + 20);
					iParam0->f_48 = bVar0;
					DESTROY_ITERATOR(StackVal);
				}
				else
				{
					DESTROY_ITERATOR(StackVal);
					return 0;
				}
			}
			DESTROY_ITERATOR(StackVal);
			return 0;
			break;
		
		case 0x00000006:
			if (!IS_ITERATOR_VALID(StackVal))
			{
				iParam0->f_4 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("regions_layout"));
			}
			Function_217(iParam0 + 4);
			ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
			fVar13 = 130.0f;
			bVar12 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &vVar3);
			ITERATE_IN_SPHERE(StackVal, StackVal, vVar3);
			bVar1 = START_OBJECT_ITERATOR(StackVal);
			while (IS_OBJECT_VALID(bVar1) && !IS_OBJECT_VALID(bVar0))
			{
				if (DECOR_CHECK_EXIST(bVar1, "regid"))
				{
					bVar14 = DECOR_GET_INT(bVar1, "regid");
					if (Function_212(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_147(1))
								{
									bVar0 = bVar1;
								}
							}
						}
					}
				}
				bVar1 = OBJECT_ITERATOR_NEXT(StackVal);
			}
			if (IS_OBJECT_VALID(bVar0))
			{
				GET_OBJECT_POSITION(bVar0, iParam0 + 8);
				Function_107(iParam0 + 8, 99.0f, iParam0 + 8, 10);
				GET_OBJECT_ORIENTATION(bVar0, iParam0 + 20);
				iParam0->f_48 = DECOR_GET_INT(bVar0, "regid");
			}
			else
			{
				DESTROY_ITERATOR(StackVal);
				return 0;
			}
			break;
		
		case 0x00000002:
		case 0x00000001:
			if (StackVal && (((!Global_3386 && Global_3388) && ARE_CURVES_IN_RANGE(48, vVar9, 100.0f)) && 8) != 8)
			{
				vVar6 = { 0.0f, 0.0f, -10.0f };
				ROTATE_VECTOR_XZ(&vVar6, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Function_211(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_211(&vVar9, &vVar6) };
				if (!Function_13(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_148(&fVar13, &bVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((bVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_208(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_204(iParam0);
			}
			if (iVar2 == 1)
			{
				if ((iParam0 + 64)->f_128 == 4)
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (GET_OBJECT_TYPE(StackVal) == 9)
						{
							if (!IS_POINT_IN_VOLUME(StackVal, *(iParam0 + 8)))
							{
								return 0;
							}
						}
					}
				}
				if ((iParam0 + 64)->f_128 == 5)
				{
				}
				if (iParam0->f_60 == 2)
				{
					if (!Function_203(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_202(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_11(StackVal, 131072))
				{
					if (StackVal || Function_201(StackVal, Function_201(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_200(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_196(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
				{
					return 0;
				}
			}
			return 0;
			break;
		
		case 0x00000003:
			if (StackVal)
			{
				fVar13 = 120.0f;
				bVar12 = 150.0f;
				vVar3 = { 0.0f, 0.0f, ((fVar13 + bVar12) * -0.5f) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				uVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_105((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_105((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) >= 0)
			{
				iVar21 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(uVar23, iVar21, &Var15);
				Function_128(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_128(&Var15) };
				iParam0->f_20 = Var15.f_12;
				(iParam0 + 20)->f_4 = Var15.f_16;
				iParam0->f_48 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(uVar23, iVar21);
				UNK_0xDF93BD7C(uVar23);
			}
			else
			{
				UNK_0xDF93BD7C(uVar23);
				return 0;
			}
			if (iParam0->f_60 == 2)
			{
				if (!Function_203(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_202(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_203(StackVal, Function_202(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_11(StackVal, 131072))
			{
				if (StackVal || Function_201(StackVal, Function_201(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_196(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_194((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_191(StackVal, Global_29004, Global_29005, Global_29006, 1);
					if (IS_PERS_CHAR_VALID(bVar24))
					{
						if (IS_PERS_CHAR_ALIVE(bVar24))
						{
							return 0;
						}
					}
					break;
				
				case 0x00000002:
					iVar22 = 0;
					while (StackVal <= (StackVal - iVar22) + 1)
					{
						bVar24 = Function_191(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
						if (IS_PERS_CHAR_VALID(bVar24))
						{
							if (IS_PERS_CHAR_ALIVE(bVar24))
							{
								iVar25++;
							}
						}
						iVar22++;
					}
					if (iVar25 >= 0)
					{
						return 0;
					}
					break;
				
				case 0x00000003:
					if (!IS_ACTOR_IN_VOLUME(StackVal, GET_PLAYER_ACTOR(0)))
					{
						return 0;
					}
					break;
				
				case 0x00000004:
					iParam0->f_48 = StackVal;
					break;
				
				default:
					LOG_ERROR("TRIGGER_NONE event type??");
					return 0;
					break;
			}
			break;
		
		default:
			LOG_ERROR("AMB_EVENT type not defined for BEAT_SET_LAUNCH_PARAMS_FOR_BEAT");
			return 0;
			break;
	}
	if (Function_190(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_190(vector3 vParam0) //Position: 0x954D / 38221
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= GET_OBJECTSET_SIZE(Global_25964))
	{
		if (IS_POINT_IN_VOLUME(vParam0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, Global_25964))))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_191(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9582 / 38274
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = bParam1;
	bVar1 = bParam2;
	PRINTSTRING("RC_REFERENCE_GLOBAL ");
	PRINTINT(bParam0);
	PRINTSTRING("-");
	PRINTINT(bVar0);
	PRINTSTRING("-");
	PRINTINT(bVar1);
	PRINTSTRING(" ");
	PRINTINT(bParam3);
	PRINTNL();
	if (!bParam4)
	{
		switch (bParam0)
		{
			case 0x00000000:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_192(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_192(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_192(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_192(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_192(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_192(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_192(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_192(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_192(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_192(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_192(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_192(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_192(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_192(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_192(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_192(&Global_6704, &Global_7790, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000001:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_192(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_192(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_192(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_192(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_192(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_192(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_192(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_192(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_192(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_192(&Global_7027, &Global_8268, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000002:
				return "";
				break;
			
			default:
				return "";
				break;
		}
	}
	else if (bVar1 == Global_30640[0])
	{
		return Function_192(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_192(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_192(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_192(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_192(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_192(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_192(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_192(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_192(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_192(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_192(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_192(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_192(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_192(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_192(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_192(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_192(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_192(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_192(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_192(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_192(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_192(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_192(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_192(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_192(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_192(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_192(var uParam0, var uParam1, bool bParam2) //Position: 0x9B97 / 39831
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_193(uParam0[iVar02], 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
	return StackVal;
}

bool Function_193(var uParam0, int iParam1) //Position: 0x9BE9 / 39913
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_194(int iParam0) //Position: 0x9C05 / 39941
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar1, 25);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	if (iParam0 == 0)
	{
		iVar0 = GET_NUM_ITERATOR_MATCHES(bVar1);
	}
	else
	{
		while (IS_OBJECT_VALID(bVar2))
		{
			if (Function_195(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_195(bool bParam0) //Position: 0x9C60 / 40032
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_109(bParam0);
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 4294967295;
	}
	if (IS_ACTOR_RIDING_VEHICLE(bVar0))
	{
		return 2;
	}
	if (IS_ACTOR_RIDING(bVar0))
	{
		return 1;
	}
	return 4294967295;
}

bool Function_196(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x9C98 / 40088
{
	var uVar0;
	int iVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	
	if (bParam3)
	{
		return 1;
	}
	bVar4 = false;
	Function_197(4294967295);
	iVar3 = 0;
	while (iVar3 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			bVar6 = DECOR_GET_INT(StackVal, "category");
			if (iParam2 != 0)
			{
				if (bVar6 != iParam2 && iParam2 != 256)
				{
					bVar4 = true;
				}
			}
			GET_VOLUME_CENTER(StackVal, &uVar0);
			if (iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(StackVal, *uParam0))
				{
					return 0;
				}
			}
			fVar5 = *fParam1;
			if (bVar4)
			{
				fVar5 = (fVar5 + 170.0f);
			}
			if (Global_3386 && bVar6 != 512)
			{
			}
			else if (Function_75(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

int Function_197(bool bParam0) //Position: 0x9D68 / 40296
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
						Function_199(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_198(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_199(iVar0);
						}
					}
					else if (Function_198(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_199(iVar0);
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
			Function_199(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_198(bool bParam0, vector3 vParam1) //Position: 0x9EC9 / 40649
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_155(bParam0);
		vVar0 = { StackVal, StackVal, Function_155(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_199(int iParam0) //Position: 0x9F43 / 40771
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

bool Function_200(vector3 vParam0) //Position: 0x9FA4 / 40868
{
	struct<9> Var0;
	
	iVar7 = 0;
	while (iVar7 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
			{
				if (GET_OBJECT_TYPE(StackVal) == 9)
				{
					GET_VOLUME_SCALE(StackVal, &vVar0);
					GET_VOLUME_CENTER(StackVal, &vVar3);
					fVar6 = VDIST(vParam0, vVar3);
					if ((fVar6 - ((vVar0.x + vVar0.z) / 2.0f)) > 60.0f)
					{
						return 1;
					}
				}
			}
		}
		iVar7++;
	}
	return 0;
}

int Function_201(vector3 vParam0) //Position: 0xA045 / 41029
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal == 4)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_202(vector3 vParam0) //Position: 0xA091 / 41105
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal || StackVal != 3 != 4)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_203(vector3 vParam0) //Position: 0xA0EA / 41194
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 3 != 4) != 5) != 6) != 7)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int Function_204(int iParam0) //Position: 0xA167 / 41319
{
	float fVar0;
	bool bVar1;
	
	Function_148(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_207(0);
	AMBIENT_ENABLE_QUADRANT_FILTER(1);
	AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
	if ((iParam0 + 64 + 60)->f_44 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (iParam0 + 64 + 60)->f_44, (iParam0 + 64 + 60)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (iParam0 + 64 + 60)->f_44);
		}
	}
	else
	{
		Function_206(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	}
	if ((iParam0 + 64 + 60)->f_52 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (iParam0 + 64 + 60)->f_52, (iParam0 + 64 + 60)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (iParam0 + 64 + 60)->f_52);
		}
	}
	Function_205(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_30842[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_36);
		PRINTNL();
	}
	if ((iParam0 + 64 + 60)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (iParam0 + 64 + 60)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((iParam0 + 64 + 60)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((iParam0 + 64 + 60)->f_36, (iParam0 + 64 + 60)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(iParam0 + 8, 0))
	{
		return 1;
	}
	return 0;
}

void Function_205(struct<33> Param0) //Position: 0xA302 / 41730
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTSTRING("n, Radius ");
				PRINTFLOAT(Param0.f_20);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(StackVal, Param0.f_20, 0);
		}
	}
	if (!Param0.f_12 != 4294967295 && !Param0.f_12 != 0)
	{
		AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(Param0.f_12, Param0.f_24, 1);
	}
	if (!Param0.f_16 != 4294967295 && !Param0.f_16 != 0)
	{
		if (Global_30842[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1.43493E-42f, 1);
}

void Function_206(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0xA42E / 42030
{
	if (Param0 == 0)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 1)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 2)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 3)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
}

void Function_207(float fParam0) //Position: 0xA47F / 42111
{
	if (fParam0 < 0.1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * fParam0), fParam0);
	}
	else if (Global_3386)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

int Function_208(int iParam0, vector3 vParam1) //Position: 0xA4C3 / 42179
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_210();
	Function_207(0);
	Function_209(0);
	if ((iParam0 + 64 + 60)->f_44 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (iParam0 + 64 + 60)->f_44, (iParam0 + 64 + 60)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (iParam0 + 64 + 60)->f_44);
		}
	}
	else
	{
		Function_206(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	}
	if ((iParam0 + 64 + 60)->f_52 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (iParam0 + 64 + 60)->f_52, (iParam0 + 64 + 60)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (iParam0 + 64 + 60)->f_52);
		}
	}
	Function_205(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_30842[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_36);
		PRINTNL();
	}
	if ((iParam0 + 64 + 60)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (iParam0 + 64 + 60)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((iParam0 + 64 + 60)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((iParam0 + 64 + 60)->f_36, (iParam0 + 64 + 60)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(iParam0 + 8, 0))
	{
		return 1;
	}
	return 0;
}

void Function_209(bool bParam0) //Position: 0xA665 / 42597
{
	switch (bParam0)
	{
		case 0x00000004:
		case 0x00000001:
			AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
			break;
		
		case 0x00000007:
		case 0x00000002:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 0);
			break;
		
		case 0x00000006:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 0, 0);
			break;
		
		case 0x00000005:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 1, 0);
			break;
		
		case 0x00000008:
		case 0x00000003:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 0, 1);
			AMBIENT_SET_DISTANCE_FILTER(5.0f, 25.0f);
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000009:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 1);
			break;
		
		default:
			LOG_ERROR("No point type filter set!");
			break;
	}
	return;
}

void Function_210() //Position: 0xA718 / 42776
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_211(var uParam0, int iParam1) //Position: 0xA727 / 42791
{
	var uVar0;
	bool bVar6;
	float fVar7;
	bool bVar8;
	float fVar9;
	var uVar10;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	bool bVar25;
	bool bVar31;
	
	uVar10 = START_CURVE_QUERY(Global_28841, *uParam0, 48, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(uVar10) < 0)
	{
		UNK_0xDF93BD7C(uVar10);
		vVar11 = { 0.0f, 0.0f, 0.0f };
		return StackVal, StackVal, vVar11;
	}
	GET_POINT_FROM_CURVE_QUERY(uVar10, 0, &uVar0);
	bVar6 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(uVar10, 0);
	if (IS_OBJECT_VALID(bVar6))
	{
		vVar16 = { StackVal, StackVal, *iParam1 };
		UNK_0x19D652F9(bVar6, 50.0f, &uVar0, &bVar25);
		UNK_0x19D652F9(bVar6, -50.0f, &uVar0, &bVar31);
		Function_128(&bVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_128(&bVar25), StackVal) };
		Function_128(&bVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_128(&bVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_148(&fVar7, &bVar8);
		fVar9 = ((fVar7 + bVar8) / 2.0f);
		if (fVar15 > 0.0f && fVar14 > 0.0f)
		{
			UNK_0xDF93BD7C(uVar10);
			vVar11 = { 0.0f, 0.0f, 0.0f };
			return StackVal, StackVal, vVar11;
		}
		if (fVar15 > fVar14)
		{
			UNK_0x19D652F9(bVar6, (fVar9 * -1.0f), &uVar0, &bVar31);
			Function_128(&bVar31);
			vVar11 = { StackVal, StackVal, Function_128(&bVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &bVar25);
			Function_128(&bVar25);
			vVar11 = { StackVal, StackVal, Function_128(&bVar25) };
		}
	}
	UNK_0xDF93BD7C(uVar10);
	return StackVal, StackVal, vVar11;
}

bool Function_212(bool bParam0) //Position: 0xA834 / 43060
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_213(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0xA84A / 43082
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	
	fVar4 = 50.0f;
	fVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		fVar2 = VDIST(vVar5, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (fVar2 < fParam4)
				{
					if (fVar3 > 0.0f || fVar2 > fVar3)
					{
						if (Function_196(&vVar5, &fVar4, 0, 0))
						{
							fVar3 = fVar2;
							bVar1 = bVar0;
							PRINTSTRING("Assigning new closestObject ");
							PRINTNL();
						}
					}
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_214(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xA8F2 / 43250
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	vector3 vVar5;
	
	fVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		fVar2 = VDIST(vVar5, vParam1);
		if (fVar2 < fParam4)
		{
			if (fVar3 > 0.0f || fVar2 > fVar3)
			{
				if (Function_196(&vVar5, &uVar4, 0, 0))
				{
					fVar3 = fVar2;
					bVar1 = bVar0;
					PRINTSTRING("Assigning new closestObject ");
					PRINTNL();
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_215(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0xA97B / 43387
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		fVar2 = VDIST(vVar4, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (fVar2 < fParam4)
				{
					if (fVar3 > 0.0f || fVar2 > fVar3)
					{
						fVar3 = fVar2;
						bVar1 = bVar0;
						PRINTSTRING("Assigning new closestObject ");
						PRINTNL();
					}
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_216(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xAA10 / 43536
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		fVar2 = VDIST(vVar4, vParam1);
		if (fVar2 < fParam4)
		{
			if (fVar3 > 0.0f || fVar2 > fVar3)
			{
				fVar3 = fVar2;
				bVar1 = bVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

int Function_217(int iParam0) //Position: 0xAA8D / 43661
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_233());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_233());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_218(bool bParam0, int iParam1) //Position: 0xAABE / 43710
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*bParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*bParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*bParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*bParam0, &uVar1);
	Function_197(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_219(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_219(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xAC1F / 44063
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_185("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_220(bool bParam0, vector3 vParam1) //Position: 0xACBA / 44218
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_221(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_221(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xACEA / 44266
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

bool Function_222(int iParam0) //Position: 0xAD0D / 44301
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_227();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_226(iParam0[iVar03], 8);
		}
		else if (Function_225())
		{
			iVar1 = 1;
			Function_226(iParam0[iVar03], 8);
		}
		Function_226(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_4(iParam0[iVar03], 4))
		{
			if (!Function_4(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_4(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_4(iParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*iParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*iParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*iParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*iParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_226(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_4(iParam0[iVar03], 4))
		{
			if (!Function_4(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_226(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_226(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*iParam0)[iVar03], 4294967295))
						{
							Function_226(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_226(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_226(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_226(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_226(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_226(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_226(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_226(iParam0[iVar03], 2);
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
	Function_223();
	return 1;
}

void Function_223() //Position: 0xB088 / 45192
{
	if (!Function_224(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_224(int iParam0) //Position: 0xB0C8 / 45256
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_225() //Position: 0xB0E4 / 45284
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == Global_63541[iVar055].f_196)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_226(var uParam0, int iParam1) //Position: 0xB10F / 45327
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_227() //Position: 0xB120 / 45344
{
	if (!Function_224(128))
	{
		return;
	}
	if (Global_13152.f_68 == 0)
	{
		strcpy(&Global_13152, "nStreaming", 64);
		Global_13152.f_68 = 1;
		Global_13152.f_64 = GET_CURRENT_GAME_TIME();
		Global_13152.f_72 = Global_13133.f_64;
	}
	return;
}

void Function_228(bool bParam0, int iParam1) //Position: 0xB162 / 45410
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_229(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_229(int iParam0) //Position: 0xB18F / 45455
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(*iParam0);
		if (IS_ACTOR_ANIMAL(*iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*iParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, 1);
			MEMORY_ALLOW_SHOOTING(*iParam0, 1);
		}
	}
	return;
}

void Function_230(var uParam0, int iParam1) //Position: 0xB1D1 / 45521
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_231(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_231(int iParam0) //Position: 0xB1FE / 45566
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, 0);
		SET_ACTOR_MAX_SPEED(*iParam0, 5);
		if (IS_ACTOR_ANIMAL(*iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*iParam0), 0, 0);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, 0);
			MEMORY_ALLOW_SHOOTING(*iParam0, 0);
		}
	}
	return;
}

bool Function_232(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB241 / 45633
{
	if (Global_63096 && !GET_THIS_SCRIPT_ID() != Global_63116)
	{
		*uParam3 = 0;
		if (!*uParam0)
		{
			*uParam0 = 1;
			if ((*uParam1 < 2 && *uParam1 > 5) && uParam4)
			{
				*uParam2 = *uParam1;
				*uParam1 = 7;
			}
			else
			{
				*uParam1 = 6;
				return 0;
			}
			return 1;
		}
	}
	if (*uParam0)
	{
		*uParam0 = 0;
		*uParam1 = *uParam2;
		return 1;
	}
	return 0;
}

var Function_233() //Position: 0xB2A9 / 45737
{
	int iVar0;
	
	return iVar0;
}

void Function_234(var uParam0, int iParam1) //Position: 0xB2B1 / 45745
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		ADD_AMBIENT_SPAWN_TYPE_RESTRICTION((*uParam0)[iVar0]);
		iVar0++;
	}
	return;
}

var Function_235(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xB2D3 / 45779
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_236(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_226(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_236(var uParam0, int iParam1, int iParam2) //Position: 0xB30B / 45835
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_226(uParam0[iVar03], 4);
			return iVar0;
		}
		if (StackVal && iParam1 != (*uParam0)[iVar03] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_237(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xB3CF / 46031
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_226(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_226(uParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_238(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0xB49F / 46239
{
	return Function_239(uParam0, iParam1, iParam2, 4294967295, iParam3);
}

var Function_239(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB4B3 / 46259
{
	return Function_240(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_240(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0xB4CC / 46284
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_246();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_245(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_244(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_244(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_243(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_245(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_243(bVar0))
				{
					Function_242();
				}
				Function_241(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_245(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (bParam2 == 0)
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

void Function_241(int iParam0) //Position: 0xB7BF / 47039
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			(*&Global_30742 + 8)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_242() //Position: 0xB873 / 47219
{
	int iVar0;
	
	if (Global_3402)
	{
		Global_30742 = GET_THIS_SCRIPT_ID();
		Global_30742.f_4 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		(*&Global_30742 + 8)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_243(bool bParam0) //Position: 0xB8AD / 47277
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_244(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xB8DA / 47322
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
	PRINTINT(bParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(bParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(bParam0, bParam2, bParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, iVar0), 4294967295))
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

bool Function_245(bool bParam0) //Position: 0xBA2B / 47659
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_246() //Position: 0xBA42 / 47682
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_242();
		}
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_242();
	return;
}

int Function_247(int iParam0, int iParam1) //Position: 0xBA8D / 47757
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

var Function_248(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xBAA3 / 47779
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			bVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			bVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (iParam1)
	{
		case 0x00000000:
			bVar0 = (bVar0 * 0.75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1.25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0.75f);
			break;
	}
	if (bParam2)
	{
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_47(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_249(17), Global_34573))
		{
			bVar0 = (bVar0 * 1.2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1.1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

var Function_249(bool bParam0) //Position: 0xBBA5 / 48037
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

void Function_250(var uParam0, bool bParam1) //Position: 0xBC96 / 48278
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - bParam1);
	Function_175(uParam0, 1);
	Function_62(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

var Function_251(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0xBCB7 / 48311
{
	int iVar0;
	int iVar1[146];
	int iVar148[146];
	int iVar295;
	vector3 vVar296;
	vector3 vVar299;
	float fVar302;
	float fVar303;
	float fVar304[146];
	float fVar451[146];
	int iVar598;
	int iVar599;
	int iVar600;
	int iVar601;
	int iVar602;
	int iVar603;
	struct<8> Var604;
	
	iVar0 = 4294967295;
	fVar303 = 1.001638E+07.0f;
	iVar601 = 0;
	iVar602 = 0;
	iVar603 = 0;
	iVar598 = 0;
	while (iVar598 < 145)
	{
		iVar1[iVar598] = 4294967295;
		iVar148[iVar598] = 4294967295;
		iVar598++;
	}
	if (!Function_212(iParam0))
	{
		iParam0 = Global_29005;
	}
	iVar295 = Function_264(iParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar299);
	iVar598 = 0;
	while (iVar598 < 145)
	{
		Function_263(StackVal);
		vVar296 = { StackVal, StackVal, Function_263(StackVal) };
		fVar302 = VDIST(vVar299, vVar296);
		if (iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(StackVal) && (iVar295 != Function_264(Global_29155[iVar59810]) || iParam0 != 4294967295)) != 1) && Function_262(&(Global_29008[iVar598]), 8192)) && iVar598 == 0)
		{
			if (iVar598 == 146)
			{
				LOG_ERROR("The bountyhunter region count is screwy. Tell Ben.");
				return 4294967294;
			}
			if (fVar302 > fVar303)
			{
				fVar303 = fVar302;
				iVar600 = iVar598;
			}
			if (fVar302 < fParam1 && fVar302 > fParam2)
			{
				iVar1[iVar601] = iVar598;
				fVar304[iVar601] = fVar302;
				iVar601++;
				if (Function_255(Function_257(iVar598, 0, 2)) == 0)
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is NOT FINISHED.");
					PRINTNL();
					iVar148[iVar602] = iVar598;
					fVar451[iVar602] = fVar302;
					iVar602++;
				}
				else
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is FINISHED. ");
					PRINTNL();
				}
			}
		}
		if (iVar601 == iVar1)
		{
			iVar598 = 146;
			LOG_ERROR("Reached regCount max? Tell Ben.");
		}
		iVar598++;
	}
	if (iParam5 != 4294967295)
	{
		Function_254(&iVar1, &fVar304, iVar601);
		Function_254(&iVar148, &fVar451, iVar602);
	}
	if (iVar602 < 0 && iParam4 != 1)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_39(3, iVar602);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_39(5, iVar602);
				break;
			
			case 0x00000004:
				iVar603 = Function_39(7, iVar602);
				break;
			
			case 0x00000005:
				iVar603 = Function_39(10, iVar602);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_39(5, iVar602);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = iVar148[iVar599];
		if (Function_212(iVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_253();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_252(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_263(StackVal);
		vVar296 = { StackVal, StackVal, Function_263(StackVal) };
		fVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(fVar302);
		PRINTNL();
	}
	else if (iVar601 >= 0)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_39(3, iVar601);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_39(5, iVar601);
				break;
			
			case 0x00000004:
				iVar603 = Function_39(7, iVar601);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar603 = Function_39(10, iVar601);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_39(5, iVar601);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = iVar1[iVar599];
		if (Function_212(iVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_253();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_252(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_263(StackVal);
		vVar296 = { StackVal, StackVal, Function_263(StackVal) };
		fVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(fVar302);
		PRINTNL();
	}
	else
	{
		LOG_ERROR("No valid landmark picked");
		PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK found no valid landmarks");
		PRINTNL();
		return iVar600;
	}
	return iVar0;
}

struct<32> Function_252(int iParam0) //Position: 0xC361 / 50017
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_212(iParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, Global_29155[iParam010].f_20, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(StackVal))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_253() //Position: 0xC41E / 50206
{
	if (Global_29004 == 0)
	{
		return Global_30640[6];
	}
	if (Global_29004 == 1)
	{
		return Global_30693[3];
	}
	return Global_30723[5];
}

void Function_254(int iParam0, float fParam1, int iParam2) //Position: 0xC44C / 50252
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = 1;
	while (iVar0 < (iParam2 - 1))
	{
		fVar3 = (*fParam1)[iVar0];
		uVar2 = (*iParam0)[iVar0];
		iVar1 = (iVar0 - 1);
		iVar4 = 0;
		while (iVar4 == 0)
		{
			if ((*fParam1)[iVar1] < fVar3)
			{
				(*fParam1)[iVar1 + 1] = (*fParam1)[iVar1];
				(*iParam0)[iVar1 + 1] = (*iParam0)[iVar1];
				iVar1 = (iVar1 - 1);
				if (iVar1 <= 0)
				{
					iVar4 = 1;
				}
			}
			else
			{
				iVar4 = 1;
			}
		}
		(*iParam0)[iVar1 + 1] = uVar2;
		(*fParam1)[iVar1 + 1] = fVar3;
		iVar0++;
	}
	return;
}

int Function_255(int iParam0) //Position: 0xC4DA / 50394
{
	if (!Function_256(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

bool Function_256(int iParam0) //Position: 0xC4F4 / 50420
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_257(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC50B / 50443
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_261(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_258(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_258(bParam0, bParam1, bParam2, 4294967295);
}

int Function_258(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xC569 / 50537
{
	var uVar0;
	
	if (!Function_260(bParam2))
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
	uVar0 = Function_261(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_259(uVar0);
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

int Function_259(int iParam0) //Position: 0xC6BE / 50878
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

bool Function_260(int iParam0) //Position: 0xC6FC / 50940
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_261(int iParam0, int iParam1, int iParam2) //Position: 0xC711 / 50961
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_262(var uParam0, int iParam1) //Position: 0xC731 / 50993
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

vector3 Function_263(bool bParam0) //Position: 0xC74D / 51021
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_264(int iParam0) //Position: 0xC75E / 51038
{
	return Function_265(iParam0);
}

int Function_265(int iParam0) //Position: 0xC769 / 51049
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_212(iParam0))
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

