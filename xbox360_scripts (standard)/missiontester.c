//Decompiled with MagicRDR v1.0
//Function Count : 168
//Statics Count : 0
//Natives Count : 199
//Parameters Count : 0

#region Local Var
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	bool bVar17;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	struct<153> Var23;
	
	ADD_PERSISTENT_SCRIPT(GET_THIS_SCRIPT_ID());
	while (!Global_3374)
	{
		WAIT(false);
	}
	bVar0 = false;
	iVar3 = 1;
	vVar8 = { 0.0f, 0.0f, 0.0f };
	vVar11 = { 0.0f, 0.0f, -10.0f };
	vVar14 = { 0.0f, 0.0f, 0.0f };
	if (Function_167("skipCutscenes"))
	{
		bVar5 = true;
	}
	bVar19 = Global_62482;
	bVar20 = false;
	bVar21 = UNK_0x32D1DEB0();
	if (IS_STRING_VALID(bVar21))
	{
		if (STRINGS_ARE_EQUAL(bVar21, "Single"))
		{
			bVar20 = true;
		}
	}
	bVar22 = false;
	if (Function_167("testStages"))
	{
		bVar22 = true;
	}
	if (bVar19 > 1 && !bVar20)
	{
		bVar19 = true;
	}
	*(&Var23 + 80) = 3;
	if (bVar22)
	{
		RETRIEVE_GAME_STATE(&Var23, 44, 1);
		bVar19 = Var23.f_152;
		if (Global_34165.f_28)
		{
			while (!Global_3380)
			{
				WAIT(false);
			}
		}
	}
	if (bVar19 <= Global_62482)
	{
		bVar19 = Global_62482;
	}
	if (bVar19 >= 2)
	{
		if (!Function_166(StackVal, 0))
		{
			Function_159(StackVal, 1, 1, 0);
		}
		if (!Function_166(StackVal, 0))
		{
			Function_159(StackVal, 1, 1, 0);
		}
		Global_63097 = 0;
	}
	while (iVar3 && !IS_EXITFLAG_SET())
	{
		if (bVar22)
		{
			if (bVar0 <= 12)
			{
				SET_ACTOR_HEALTH(GET_PLAYER_ACTOR(0), GET_ACTOR_MAX_HEALTH(GET_PLAYER_ACTOR(0)));
			}
			else if (bVar0 > 13 && UI_ISACTIVE("MissionFailedMenu"))
			{
				fVar1 = 0.0f;
				bVar0 = 13;
			}
		}
		switch (bVar0)
		{
			case 0x00000000:
				if (DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "forcecutsceneskip"))
				{
					DECOR_REMOVE(GET_PLAYER_ACTOR(0), "forcecutsceneskip");
				}
				if (Global_34165.f_28 && bVar22)
				{
					Global_34165.f_28 = 0;
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 2;
				}
				else if (Function_157(StackVal))
				{
					PRINTSTRING("TEST: Currently Testing Mission ");
					PRINTINT(bVar19);
					PRINTNL();
					PRINTSTRING("TEST: Registered Mission Name is ");
					PRINTSTRING(UI_GET_STRING(&Global_3422[bVar1940] + 12));
					PRINTNL();
					iVar4 = Function_156(StackVal);
					if (iVar4 >= 0)
					{
						if (UNK_0x214AFB8C(StackVal))
						{
							bVar2 = GET_ASSET_NAME(StackVal, 4);
							if (DOES_SCRIPT_EXIST(bVar2))
							{
								if (bVar19 != 25)
								{
									HUD_FADE_OUT(0,5f, 1f, 1);
									fVar1 = GET_CURRENT_GAME_TIME();
									bVar0 = true;
								}
								else
								{
									LOG_ERROR("TEST:RESULT: SKIPPED");
									fVar1 = GET_CURRENT_GAME_TIME();
									bVar19++;
									if (bVar20)
									{
										Global_62481 = 4294967197;
										Global_62482 = 0;
										iVar3 = 0;
									}
								}
							}
							else if ((GET_CURRENT_GAME_TIME() - fVar1) < 1.0f)
							{
								LOG_ERROR("TEST:RESULT: SKIPPED");
								fVar1 = GET_CURRENT_GAME_TIME();
								bVar0 = 17;
							}
						}
						else if ((GET_CURRENT_GAME_TIME() - fVar1) < 1.0f)
						{
							LOG_ERROR("TEST:RESULT: SKIPPED");
							fVar1 = GET_CURRENT_GAME_TIME();
							bVar0 = 17;
						}
					}
					else if ((GET_CURRENT_GAME_TIME() - fVar1) < 1.0f)
					{
						LOG_ERROR("TEST:RESULT: SKIPPED");
						fVar1 = GET_CURRENT_GAME_TIME();
						bVar0 = 17;
					}
				}
				else
				{
					LOG_ERROR("could not verify the deed!");
					if ((GET_CURRENT_GAME_TIME() - fVar1) < 1.0f)
					{
						LOG_ERROR("TEST:RESULT: SKIPPED");
						fVar1 = GET_CURRENT_GAME_TIME();
						bVar0 = 17;
					}
				}
				break;
			
			case 0x00000001:
				if ((GET_CURRENT_GAME_TIME() - fVar1) < 1.0f)
				{
					if (Global_3422[bVar1940].f_104 != 1)
					{
						Function_3(&(Global_3422[bVar1940]), 0, 0, 1);
					}
					RETRIEVE_GAME_STATE(&Var23, 44, 1);
					Var23.f_152 = bVar19;
					STORE_GAME_STATE(&Var23, 44, 1);
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 2;
				}
				else if ((GET_CURRENT_GAME_TIME() - fVar1) < 10.0f)
				{
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 17;
				}
				break;
			
			case 0x00000002:
				if (IS_SCRIPT_VALID(Global_3422[bVar1940].f_108))
				{
					if ((GET_CURRENT_GAME_TIME() - fVar1) < 1.0f)
					{
						fVar1 = GET_CURRENT_GAME_TIME();
						bVar0 = 3;
					}
				}
				else if ((GET_CURRENT_GAME_TIME() - fVar1) < 60.0f)
				{
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 17;
				}
				break;
			
			case 0x00000003:
				if (!HUD_IS_FADED() && !HUD_IS_FADING())
				{
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				if (STREAMING_IS_WORLD_LOADED())
				{
					Global_63096 = 0;
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 4;
					if (DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "forcecutsceneskip"))
					{
						DECOR_REMOVE(GET_PLAYER_ACTOR(0), "forcecutsceneskip");
					}
				}
				else if ((GET_CURRENT_GAME_TIME() - fVar1) < 300.0f)
				{
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 17;
				}
				break;
			
			case 0x00000004:
				if ((((GET_CURRENT_GAME_TIME() - fVar1) < 30.0f || Global_63096) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) || (!HUD_IS_FADED() && !HUD_IS_FADING()))
				{
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 5;
				}
				else if ((GET_CURRENT_GAME_TIME() - fVar1) < 300.0f)
				{
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 17;
				}
				break;
			
			case 0x00000005:
				if (bVar5)
				{
					if ((GET_CURRENT_GAME_TIME() - fVar1) < 4.0f)
					{
						DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "forcecutsceneskip", true);
						fVar1 = GET_CURRENT_GAME_TIME();
						bVar0 = 6;
					}
					else if (GET_CURRENT_GAME_TIME() - fVar1) < (4.0f * 5.0f)
					{
						fVar1 = GET_CURRENT_GAME_TIME();
						bVar0 = 17;
					}
				}
				else if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !Global_63096) && !IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0))
				{
					DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "forcecutsceneskip", true);
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 6;
				}
				else if ((GET_CURRENT_GAME_TIME() - fVar1) < 300.0f)
				{
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 17;
				}
				break;
			
			case 0x00000006:
				if ((GET_CURRENT_GAME_TIME() - fVar1) < 5.0f || (HUD_IS_FADED() && bVar5))
				{
					if (STREAMING_IS_WORLD_LOADED())
					{
						Function_2(1.0f);
						fVar1 = GET_CURRENT_GAME_TIME();
						bVar0 = 7;
					}
					else if ((GET_CURRENT_GAME_TIME() - fVar1) < 300.0f)
					{
						fVar1 = GET_CURRENT_GAME_TIME();
						bVar0 = 17;
					}
				}
				break;
			
			case 0x00000007:
				if (bVar22)
				{
					if (!IS_SCRIPT_VALID(Global_3422[bVar1940].f_108))
					{
						fVar1 = GET_CURRENT_GAME_TIME();
						bVar0 = 19;
					}
				}
				if (!HUD_IS_FADED() && !HUD_IS_FADING())
				{
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 8;
				}
				else if ((GET_CURRENT_GAME_TIME() - fVar1) < 120.0f)
				{
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 17;
				}
				break;
			
			case 0x00000008:
				if (bVar22)
				{
					if (!IS_SCRIPT_VALID(Global_3422[bVar1940].f_108))
					{
						fVar1 = GET_CURRENT_GAME_TIME();
						bVar0 = 19;
					}
				}
				if (IS_PLAYER_CONTROLLABLE(0))
				{
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 11;
					bVar17 = UNK_0x191658C0();
					if (IS_STRING_VALID(bVar17))
					{
						if (DOES_SCRIPT_EXIST(bVar17))
						{
							bVar6 = LAUNCH_NEW_SCRIPT(bVar17, 0);
							bVar0 = 9;
						}
					}
				}
				else if ((GET_CURRENT_GAME_TIME() - fVar1) < 10.0f)
				{
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 17;
				}
				break;
			
			case 0x00000009:
				if (IS_SCRIPT_VALID(bVar6))
				{
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 10;
				}
				else if ((GET_CURRENT_GAME_TIME() - fVar1) < 1.0f)
				{
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 17;
				}
				break;
			
			case 0x0000000A:
				if (!IS_SCRIPT_VALID(bVar6))
				{
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 11;
				}
				else if ((GET_CURRENT_GAME_TIME() - fVar1) < 35.0f)
				{
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 17;
				}
				break;
			
			case 0x0000000B:
				if ((GET_CURRENT_GAME_TIME() - fVar1) < 1.0f)
				{
					bVar7 = true;
					GET_POSITION(GET_PLAYER_ACTOR(0), &vVar14);
					vVar11 = { 0.0f, 0.0f, -10.0f };
					UNK_0xB89CC342(GET_PLAYER_ACTOR(0), &vVar11, &vVar8);
					AI_SET_NAV_PATHFINDING_ENABLED(GET_PLAYER_ACTOR(0), false);
					TASK_GO_NEAR_COORD(GET_PLAYER_ACTOR(0), &vVar8, 2.0f, true);
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 12;
				}
				else if ((GET_CURRENT_GAME_TIME() - fVar1) < 1.0f)
				{
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 17;
				}
				break;
			
			case 0x0000000C:
				if ((GET_CURRENT_GAME_TIME() - fVar1) < 5.0f)
				{
					AI_SET_NAV_PATHFINDING_ENABLED(GET_PLAYER_ACTOR(0), true);
					GET_POSITION(GET_PLAYER_ACTOR(0), &vVar11);
					if (Function_1(StackVal, StackVal, StackVal, StackVal, vVar14, vVar11))
					{
						bVar7 = false;
					}
					DUMP_MEMORY_STATS();
					fVar1 = GET_CURRENT_GAME_TIME();
					if ((((bVar22 && bVar19 == 1) && bVar19 == 2) && bVar19 == 50) && IS_SCRIPT_VALID(Global_3422[bVar1940].f_108))
					{
						KILL_ACTOR(Global_34573);
						bVar0 = 13;
						fVar1 = 0.0f;
					}
					else
					{
						bVar0 = 18;
					}
				}
				break;
			
			case 0x0000000D:
				if (UI_ISACTIVE("MissionFailedMenu"))
				{
					UI_SEND_EVENT("Jump");
					fVar1 = 0.0f;
					bVar0 = 14;
				}
				else if (!IS_SCRIPT_VALID(Global_3422[bVar1940].f_108))
				{
					bVar0 = 19;
				}
				else
				{
					fVar1 = (fVar1 + GET_UNWARPED_REALTIME_SECONDS());
					if (fVar1 < 10.0f)
					{
						fVar1 = GET_CURRENT_GAME_TIME();
						bVar0 = 17;
					}
				}
				break;
			
			case 0x0000000E:
				if (UI_ISACTIVE("Mission_Failed_Jump_Confirmation_Popup"))
				{
					fVar1 = 0.0f;
					bVar0 = 15;
				}
				else
				{
					fVar1 = (fVar1 + GET_UNWARPED_REALTIME_SECONDS());
					if (fVar1 < 10.0f)
					{
						fVar1 = GET_CURRENT_GAME_TIME();
						bVar0 = 17;
					}
				}
				break;
			
			case 0x0000000F:
				if (!IS_GAME_RESETTING())
				{
					bVar0 = 3;
				}
				else
				{
					fVar1 = (fVar1 + GET_UNWARPED_REALTIME_SECONDS());
					if (fVar1 < 10.0f)
					{
						fVar1 = GET_CURRENT_GAME_TIME();
						bVar0 = 17;
					}
				}
				break;
			
			case 0x00000012:
				if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
				}
				if (IS_SCRIPT_VALID(Global_3422[bVar1940].f_108))
				{
					TERMINATE_SCRIPT(Global_3422[bVar1940].f_108);
				}
				if (!IS_SCRIPT_VALID(Global_3422[bVar1940].f_108) && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 19;
				}
				else if ((GET_CURRENT_GAME_TIME() - fVar1) < 60.0f)
				{
					LOG_ERROR("TEST: ABORT: CANNOT QUIT CURRENT MISSION SCRIPT");
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 17;
				}
				break;
			
			case 0x00000011:
				if ((GET_CURRENT_GAME_TIME() - fVar1) < 10.0f)
				{
					fVar1 = GET_CURRENT_GAME_TIME();
					bVar0 = 19;
					LOG_ERROR("TEST: RESULT: TIME OUT");
				}
				break;
			
			case 0x00000013:
				if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
				}
				if (IS_SCRIPT_VALID(Global_3422[bVar1940].f_108))
				{
					TERMINATE_SCRIPT(Global_3422[bVar1940].f_108);
				}
				if (!IS_SCRIPT_VALID(Global_3422[bVar1940].f_108) && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					DUMP_MEMORY_STATS();
					if (!IS_ACTOR_VALID(GET_PLAYER_ACTOR(0)))
					{
						LOG_ERROR("TEST: ABORT: INVALID PLAYER! THE TEST SESSION CANNOT CONTINUE.");
						LOG_ERROR("TEST: RESULT: FAILED");
						RESET_GAME();
					}
					else if (IS_ACTOR_DEAD(GET_PLAYER_ACTOR(0)))
					{
						LOG_ERROR("TEST: ABORT: DEAD PLAYER! THE TEST SESSION CANNOT CONTINUE.");
						RESET_GAME();
					}
					else
					{
						if (!IS_CAMERA_ACTIVE_ON_CHANNEL(GET_GAME_CAMERA(), false))
						{
							SET_CURRENT_CAMERA_ON_CHANNEL(GET_GAME_CAMERA(), 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
						}
						if (bVar7)
						{
							LOG_ERROR("TEST: RESULT: PASSED");
						}
						else
						{
							LOG_ERROR("TEST: RESULT: FAILED");
						}
						if (Global_3422[bVar1940].f_104 == 1)
						{
							Function_159(StackVal, 1, 1, 0);
						}
						bVar19++;
						RETRIEVE_GAME_STATE(&Var23, 44, 1);
						Var23.f_152 = bVar19;
						STORE_GAME_STATE(&Var23, 44, 1);
						if (bVar20 || bVar19 <= Global_3422)
						{
							if (Function_167("dontLoop") || bVar20)
							{
								LOG_ERROR("TEST: COMPLETE");
								Global_62481 = 4294967197;
								Global_62482 = 0;
								iVar3 = 0;
							}
							else
							{
								bVar19 = true;
							}
						}
						else
						{
							Global_34165.f_28 = 0;
							bVar0 = false;
						}
					}
				}
				else if ((GET_CURRENT_GAME_TIME() - fVar1) < 60.0f)
				{
					LOG_ERROR("TEST: ABORT: CANNOT QUIT CURRENT MISSION SCRIPT");
					fVar1 = GET_CURRENT_GAME_TIME();
					DUMP_MEMORY_STATS();
					if (Global_3422[bVar1940].f_104 == 1)
					{
						Function_159(StackVal, 1, 1, 0);
					}
					bVar19++;
					RETRIEVE_GAME_STATE(&Var23, 44, 1);
					Var23.f_152 = bVar19;
					STORE_GAME_STATE(&Var23, 44, 1);
					if (bVar20 || bVar19 <= Global_3422)
					{
						LOG_ERROR("TEST: COMPLETE");
						if (Function_167("dontLoop") || bVar20)
						{
							Global_62481 = 4294967197;
							Global_62482 = 0;
							iVar3 = 0;
						}
						else
						{
							bVar19 = true;
						}
					}
					else
					{
						Global_34165.f_28 = 0;
						bVar0 = false;
					}
				}
				break;
		}
		WAIT(false);
	}
	RETRIEVE_GAME_STATE(&Var23, 44, 1);
	Var23.f_152 = bVar19;
	STORE_GAME_STATE(&Var23, 44, 1);
	LOG_ERROR("killing the mission tester script");
	REMOVE_PERSISTENT_SCRIPT(GET_THIS_SCRIPT_ID());
	TERMINATE_THIS_SCRIPT();
	return;
}

bool Function_1(vector3 vParam0, vector3 vParam3) //Position: 0xD38 / 3384
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_2(bool bParam0) //Position: 0xD65 / 3429
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(bParam0, 1065353216);
		}
	}
	return;
}

void Function_3(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0xD82 / 3458
{
	struct<4> Var0;
	
	if ((Function_155(StackVal) != 48 && !bParam2) && !Global_3381)
	{
		bParam1 = false;
	}
	if (Function_154(StackVal) == 1)
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
			if (Function_154(StackVal) == 1)
			{
				Global_3379 = 1;
				Global_3378 = 0;
				SET_RICH_PRESENCE(StackVal, Function_155(3), 0, 0, 0);
				Function_149(&(Global_3422[Function_155(StackVal)40]));
			}
			else if (Function_154(StackVal) == 4)
			{
				Function_148(StackVal, iParam0->f_140);
				Global_3383 = 1;
				SET_RICH_PRESENCE(StackVal, (3 + Function_155(58)), 0, 0, 0);
			}
			Function_146();
			Function_144(0, 0);
			iParam0->f_108 = Function_6(StackVal, StackVal, bParam2, 0, uParam3, 0);
			iParam0->f_112 = 0;
			iParam0->f_124 = 0;
		}
		else if (!HUD_IS_FADING())
		{
			if (Function_154(StackVal) == 1)
			{
				Var0 = { StackVal, StackVal, StackVal, Function_4(Function_155(StackVal)) };
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
		if (Function_154(StackVal) == 1)
		{
			Global_3379 = 1;
			Global_3378 = 0;
			Var0 = { StackVal, StackVal, StackVal, Function_4(Function_155(StackVal)) };
			if (HUD_IS_FADED())
			{
				UNK_0xC6E36B1D(&Var0);
			}
			Function_149(&(Global_3422[Function_155(StackVal)40]));
		}
		else if (Function_154(StackVal) == 4)
		{
			Function_148(StackVal, iParam0->f_140);
			Global_3383 = 1;
		}
		SET_ACTOR_INVULNERABILITY(Global_34573, true);
		Function_146();
		Function_144(0, 0);
		iParam0->f_108 = Function_6(StackVal, StackVal, bParam2, 0, 1, 0);
		iParam0->f_112 = 0;
		iParam0->f_124 = 0;
	}
}

struct<16> Function_4(bool bParam0) //Position: 0xF2B / 3883
{
	char* cVar0[16];
	
	strcpy(&cVar0, "fav_non", 16);
	if (!Function_5(bParam0))
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, *(&Global_3422[bParam040] + 12);
}

bool Function_5(bool bParam0) //Position: 0xF5C / 3932
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_6(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, bool bParam5) //Position: 0xF72 / 3954
{
	var uVar0;
	bool bVar1;
	var uVar2;
	bool bVar61;
	struct<25> Var62;
	
	if (Function_154(bParam1) == 1)
	{
		Function_144(1, 0);
	}
	else
	{
		Function_144(0, 0);
	}
	bVar1 = Function_155(bParam1);
	if (!Global_3365 || Global_3381)
	{
		if (Function_154(bParam1) == 1)
		{
			uVar2 = 58;
			if (!bParam2)
			{
				Function_84(bVar1, &uVar2, &uVar0, 1);
			}
			if (bVar1 == 1)
			{
				bVar61 = false;
				while (bVar61 <= 4)
				{
					Function_83(bVar61, 0);
					bVar61++;
				}
				bVar61 = false;
				while (bVar61 <= 3)
				{
					Function_82(bVar61, 0);
					bVar61++;
				}
				bVar61 = false;
				while (bVar61 <= 11)
				{
					Function_81(bVar61, 0);
					bVar61++;
				}
				bVar61 = false;
				while (bVar61 <= 16)
				{
					Function_80(bVar61, 0);
					bVar61++;
				}
				bVar61 = false;
				while (bVar61 <= 58)
				{
					if (Function_157(Function_79(bVar61)))
					{
						Function_77(Function_79(bVar61));
					}
					bVar61++;
				}
				Function_75();
				Function_72(Function_74(), 0);
				Function_71();
				if (bVar1 == 1)
				{
					Function_77(Function_79(2));
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
			PRINTINT(Function_154(bParam1));
			PRINTNL();
		}
	}
	if (Function_154(bParam1) == 1)
	{
		Function_70(18, bVar1, 0);
		Function_68(18, &Global_3422[bVar140] + 12, 0, 1);
		if (!bParam2)
		{
			Function_66(bVar1);
			AUDIO_RESET_SPEECH_HISTORY();
		}
		else
		{
			Global_34165.f_136 = GET_CURRENT_GAME_TIME();
		}
	}
	Var62 = bParam1;
	Var69 = { StackVal, StackVal, StackVal, Function_65(bVar1) };
	strcpy(&Var62 + 4, UI_GET_STRING(&Var69), 16);
	Var62.f_20 = bParam2;
	Var62.f_24 = iParam3;
	Function_61(0);
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
	if (Function_154(bParam1) == 4)
	{
		PLAY_SOUND("HUD_MENU_SELECT_MASTER");
	}
	Global_3414 = 0;
	bVar73 = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(bParam0, 4), &Var62, 7, 0);
	if (IS_SCRIPT_VALID(bVar73))
	{
		if (Function_157(bParam1))
		{
			if (bParam5)
			{
				Function_60(bParam1, iParam4);
			}
			else if (Function_59(bParam1) == 1)
			{
				Function_58(bParam1, iParam4);
			}
			else
			{
				Function_12(bParam1, iParam4);
			}
		}
		Function_9(2);
		Function_7((15 - Function_8(105)));
		return bVar73;
	}
	return "";
}

void Function_7(int iParam0) //Position: 0x124B / 4683
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_8(105)), 0);
	return;
}

int Function_8(int iParam0) //Position: 0x126C / 4716
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_9(bool bParam0) //Position: 0x1282 / 4738
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_11(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_11(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, false, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_11(Global_12976.f_24);
	PRINTNL();
	Function_10(bParam0);
	return;
}

void Function_10(int iParam0) //Position: 0x131E / 4894
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_8(90)), 0);
	return;
}

void Function_11(bool bParam0) //Position: 0x133F / 4927
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

void Function_12(bool bParam0, int iParam1) //Position: 0x1385 / 4997
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_157(bParam0))
	{
		Function_56();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_154(bParam0);
	if (StackVal != 2)
	{
		Function_55("DEED_START", bParam0);
	}
	Global_13172[bParam011].f_8 = StackVal + 1;
	Global_13172[bParam011].f_4 = 2;
	Global_6271 = bParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_15(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_155(bParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_13(Global_6269) };
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

struct<16> Function_13(int iParam0) //Position: 0x1495 / 5269
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_14(char* cParam0) //Position: 0x14BF / 5311
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

void Function_15(bool bParam0) //Position: 0x1715 / 5909
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_47();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_17();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_16(&Global_63095, 1);
		Function_16(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_16(int iParam0, int iParam1) //Position: 0x1766 / 5990
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_17() //Position: 0x1779 / 6009
{
	Function_31();
	Function_30();
	Function_30();
	Function_29();
	Function_29();
	Function_28();
	Function_28();
	Function_26();
	Function_26();
	if (!Function_25())
	{
		Function_22();
		Function_21();
		Function_20();
		Function_19();
	}
	Function_18();
	return;
}

void Function_18() //Position: 0x17AC / 6060
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

void Function_19() //Position: 0x18B2 / 6322
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

void Function_20() //Position: 0x18E5 / 6373
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

void Function_21() //Position: 0x1A73 / 6771
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

void Function_22() //Position: 0x1C27 / 7207
{
	Function_23(&Global_28260, 1, 0);
	return;
}

void Function_23(int iParam0, bool bParam1, var uParam2) //Position: 0x1C35 / 7221
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
	
	bVar0 = Function_24();
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

var Function_24() //Position: 0x1E26 / 7718
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_25() //Position: 0x1E3B / 7739
{
	return NET_IS_MANAGER_INITIALIZED();
}

struct<8> Function_26() //Position: 0x1E44 / 7748
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
				iVar2 = ((Function_27((50 + iVar4)) + Function_27((183 + iVar4))) + Function_27((90 + iVar4)));
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
	Function_70(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_27(bool bParam0) //Position: 0x1EDF / 7903
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_28() //Position: 0x1F20 / 7968
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
		iVar2 = ((Function_27((50 + iVar3) + 15) + Function_27((183 + iVar3) + 15)) + Function_27((90 + iVar3) + 15));
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
	Function_70(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_29() //Position: 0x1FA9 / 8105
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
			iVar2 = ((Function_27((50 + iVar3) + 8) + Function_27((183 + iVar3) + 8)) + Function_27((90 + iVar3) + 8));
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
	Function_70(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_30() //Position: 0x2040 / 8256
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
		iVar2 = ((Function_27((50 + iVar3)) + Function_27((183 + iVar3))) + Function_27((90 + iVar3)));
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
	Function_70(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_31() //Position: 0x20BF / 8383
{
	Function_32(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_70(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_32(int iParam0, bool bParam1, bool bParam2) //Position: 0x20E5 / 8421
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
	Function_46(iParam0, bParam1, 1);
	Function_45(iParam0);
	if (bParam2 && bParam1 == 0.0f)
	{
		Function_33(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_33(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x22EF / 8943
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_44(390))), 32);
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
					bVar19 = (Function_43(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_43(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_41(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_38(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_35(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_34(), &Var9);
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

var Function_34() //Position: 0x291C / 10524
{
	int iVar0;
	
	return iVar0;
}

var Function_35(int iParam0) //Position: 0x2924 / 10532
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_36(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2935 / 10549
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_37(char* cParam0, char* cParam1) //Position: 0x2A2A / 10794
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_38(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2A43 / 10819
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_40(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_39(Function_40(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_39(int iParam0, int iParam1) //Position: 0x2AA8 / 10920
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_40(int iParam0, bool bParam1) //Position: 0x2ABA / 10938
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_41(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2ACC / 10956
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
	if (((Function_42(iParam0) != 19 || Function_42(iParam0) != 17) || Function_42(iParam0) != 10) || Function_42(iParam0) != 9)
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

int Function_42(int iParam0) //Position: 0x2BFC / 11260
{
	return Global_35278[iParam020].f_48;
}

float Function_43(int iParam0) //Position: 0x2C0B / 11275
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_44(int iParam0) //Position: 0x2C44 / 11332
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_45(int iParam0) //Position: 0x2C81 / 11393
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

int Function_46(int iParam0, bool bParam1, bool bParam2) //Position: 0x2E1B / 11803
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

void Function_47() //Position: 0x3035 / 12341
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_49(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_49(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_48(StackVal, StackVal, vVar0))
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

bool Function_48(vector3 vParam0) //Position: 0x30D6 / 12502
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_49(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x30EE / 12526
{
	int iVar0;
	
	iVar0 = Function_53(uParam2, uParam3);
	if (Function_52(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_51(&Global_63095, 1);
			Function_16(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_51(&Global_63095, 2);
			Function_16(&Global_63095, 1);
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
		Function_51(&Global_63095, 2);
		Function_16(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_50();
	return StackVal, StackVal, Function_50();
}

vector3 Function_50() //Position: 0x31D5 / 12757
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_51(var uParam0, int iParam1) //Position: 0x31DE / 12766
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_52(int iParam0) //Position: 0x31ED / 12781
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_53(bool bParam0, bool bParam1) //Position: 0x3203 / 12803
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	bVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_54(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					bVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_54(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_52(bVar0) && !bParam1)
	{
		bVar0 = Function_53(bParam0, 1);
	}
	return bVar0;
}

float Function_54(vector3 vParam0, vector3 vParam3) //Position: 0x32CA / 13002
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_55(char* cParam0, bool bParam1) //Position: 0x32E7 / 13031
{
	struct<4> Var0;
	
	if (!Function_157(bParam1))
	{
		return;
	}
	switch (Function_154(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_65(Function_155(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_154(bParam1), Function_155(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_154(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_154(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_154(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_154(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_154(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

void Function_56() //Position: 0x340B / 13323
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
			Function_57(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_57(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3652 / 13906
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_58(bool bParam0, int iParam1) //Position: 0x367B / 13947
{
	int iVar0;
	
	if (!Function_157(bParam0))
	{
		Function_56();
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
	iVar0 = Function_154(bParam0);
	Global_13172[bParam011].f_4 = 2;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_15(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_155(bParam0);
	}
	Global_3376 = 1;
	return;
}

int Function_59(bool bParam0) //Position: 0x36E2 / 14050
{
	if (!Function_157(bParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_60(bool bParam0, int iParam1) //Position: 0x36FC / 14076
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_157(bParam0))
	{
		Function_56();
		return;
	}
	iVar0 = Function_154(bParam0);
	Global_13172[bParam011].f_4 = 1;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_15(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_155(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_13(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar11);
		APPEND_JOURNAL_ENTRY(bVar11, 0);
	}
	return;
}

void Function_61(bool bParam0) //Position: 0x37A2 / 14242
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
		Function_62();
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

void Function_62() //Position: 0x382D / 14381
{
	int iVar0;
	
	Global_26960 = Function_63(StackVal);
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

int Function_63(int iParam0) //Position: 0x387B / 14459
{
	if (!Function_64(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_64(int iParam0) //Position: 0x3893 / 14483
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_65(bool bParam0) //Position: 0x38A8 / 14504
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, bParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_66(int iParam0) //Position: 0x38CD / 14541
{
	int iVar0;
	
	iVar0 = Function_67(iParam0);
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Global_34165.f_140 = 0.0f;
	switch (iVar0)
	{
		case 0x00000000:
			Global_34165.f_120 = Function_27(27);
			Global_34165.f_116 = Function_27(42);
			Global_34165.f_124 = CEIL(Function_44(49));
			Global_34165.f_128 = Function_27(49);
			break;
		
		case 0x00000002:
			Global_34165.f_116 = Function_27(355);
			break;
		
		case 0x00000001:
			Global_34165.f_124 = CEIL(Function_44(49));
			Global_34165.f_128 = Function_27(49);
			break;
	}
	return;
}

int Function_67(int iParam0) //Position: 0x3957 / 14679
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

int Function_68(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x39EC / 14828
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
		Function_69(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_69(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3D3E / 15678
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

int Function_70(int iParam0, bool bParam1, bool bParam2) //Position: 0x3DC1 / 15809
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
		Function_46(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_45(iParam0);
	if (bParam2)
	{
		Function_33(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_71() //Position: 0x40D6 / 16598
{
	WRITE_TO_FILE("New Game Progression Started\n", "C:/MoneyData.csv", 1);
	return;
}

int Function_72(int iParam0, bool bParam1) //Position: 0x4113 / 16659
{
	bool bVar0;
	
	bVar0 = Function_27(0);
	if ((Function_27(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_73(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (iParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_27(0));
	return 1;
}

int Function_73(int iParam0, bool bParam1, int iParam2) //Position: 0x41A3 / 16803
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
	Function_45(iParam0);
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

int Function_74() //Position: 0x439E / 17310
{
	return Function_27(0);
}

void Function_75() //Position: 0x43A8 / 17320
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
	Function_76();
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 22);
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 4);
	return;
}

void Function_76() //Position: 0x452B / 17707
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
	bVar2 = Function_24();
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

void Function_77(int iParam0) //Position: 0x45FC / 17916
{
	Function_78(iParam0);
	return;
}

void Function_78(bool bParam0) //Position: 0x4607 / 17927
{
	int iVar0;
	
	if (!Function_157(bParam0))
	{
		Function_56();
		return;
	}
	iVar0 = Function_154(bParam0);
	Global_13172[bParam011].f_4 = 0;
	return;
}

int Function_79(bool bParam0) //Position: 0x462B / 17963
{
	if (!Function_5(bParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_80(int iParam0, int iParam1) //Position: 0x4645 / 17989
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return;
	}
	Global_25986[iParam0] = iParam1;
	return;
}

void Function_81(int iParam0, int iParam1) //Position: 0x4662 / 18018
{
	if (iParam0 >= 4294967295 && iParam0 <= 11)
	{
		return;
	}
	Global_25974[iParam0] = iParam1;
	return;
}

void Function_82(int iParam0, int iParam1) //Position: 0x467F / 18047
{
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return;
	}
	Global_25970[iParam0] = iParam1;
	return;
}

void Function_83(int iParam0, int iParam1) //Position: 0x469B / 18075
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return;
	}
	Global_25965[iParam0] = iParam1;
	return;
}

void Function_84(int iParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x46B7 / 18103
{
	if (Global_3365 && !Global_3381)
	{
		return;
	}
	if (!bParam3)
	{
		Function_85(iParam0, uParam2, 0);
		(*uParam1)[iParam0] = 1;
	}
	if (Global_3422[iParam040].f_132 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_132])
		{
			Function_84(Global_3422[iParam040].f_132, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_136 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_136])
		{
			Function_84(Global_3422[iParam040].f_136, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_140 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_140])
		{
			Function_84(Global_3422[iParam040].f_140, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_144 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_144])
		{
			Function_84(Global_3422[iParam040].f_144, uParam1, uParam2, 0);
		}
	}
}

void Function_85(bool bParam0, var uParam1, bool bParam2) //Position: 0x479E / 18334
{
	struct<4> Var0;
	
	if (!Function_5(bParam0))
	{
		return;
	}
	if (Global_3381 && Global_6267 != bParam0)
	{
		return;
	}
	switch (bParam0)
	{
		case 0x00000001:
			Function_142(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_138(Global_30640[0]);
			Function_138(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_136(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_138(Global_30668[0]);
			Function_124(0);
			Function_122(2, 1);
			Function_122(0, 1);
			Function_122(1, 1);
			break;
		
		case 0x00000003:
			Function_138(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_138(Global_30668[0]);
			Function_138(Global_30640[0]);
			Function_120(0, 1);
			Function_120(15, 1);
			Function_120(9, 1);
			Function_120(12, 1);
			Function_120(16, 1);
			Function_122(3, 1);
			break;
		
		case 0x00000005:
			Function_138(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_136(21, bParam2, 4);
			Function_138(Global_30668[0]);
			Function_122(39, 1);
			break;
		
		case 0x00000007:
			Function_138(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_138(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_119(4))
					{
						Function_103(4, 0, 0, 1);
					}
				}
			}
			Function_138(Global_30640[0]);
			Function_138(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_138(Global_30640[0]);
			Function_138(Global_30668[2]);
			Function_102(&(Global_29008[Global_30668[2]]), 32768);
			Function_101(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_136(9, bParam2, 4);
			Function_138(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_138(Global_30640[0]);
			Function_138(Global_30658[0]);
			Function_102(&(Global_29008[Global_30658[0]]), 32768);
			Function_101(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_138(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_138(Global_30640[0]);
			Function_138(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_138(Global_30640[1]);
			Function_138(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_138(Global_30679[0]);
			Function_138(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_138(Global_30658[5]);
			Function_138(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_136(21, bParam2, 4);
			Function_138(Global_30640[4]);
			Function_138(Global_30658[4]);
			Function_100(&Global_76847, 0x2000000);
			Function_100(&Global_76847, 0x4000000);
			Function_100(&Global_76847, 4096);
			Function_100(&Global_76847, 8);
			Function_100(&Global_76847, 8388608);
			Function_100(&Global_76847, 524288);
			Function_100(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_138(Global_30640[4]);
			Function_138(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_101(&(Global_29008[Global_30640[4]]), 256);
			Function_138(Global_30640[4]);
			Function_138(Global_30658[0]);
			Function_102(&(Global_29008[Global_30658[0]]), 32768);
			Function_101(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_138(Global_30640[0]);
			Function_138(Global_30640[5]);
			Function_136(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_138(Global_30658[3]);
			Function_102(&(Global_29008[Global_30658[3]]), 32768);
			Function_101(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_136(9, bParam2, 4);
			Function_138(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_102(&(Global_29008[Global_30679[1]]), 32768);
			Function_138(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_136(12, bParam2, 4);
			Function_101(&(Global_29008[Global_30679[1]]), 256);
			Function_138(Global_30668[3]);
			Function_138(Global_30693[0]);
			Function_138(Global_30685[0]);
			Function_124(4);
			Function_120(13, 1);
			Function_120(1, 1);
			Function_120(18, 1);
			Function_122(34, 1);
			Function_122(44, 1);
			Function_122(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_136(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_138(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_138(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_138(Global_30693[0]);
			Function_138(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_138(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_138(Global_30685[0]);
			Function_138(Global_30693[0]);
			Function_138(Global_30693[1]);
			Function_138(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_136(23, bParam2, 3);
			Function_120(23, 1);
			Function_138(Global_30685[0]);
			Function_138(Global_30685[2]);
			Function_102(&(Global_29008[Global_30685[2]]), 32768);
			Function_101(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_136(19, bParam2, 4);
			Function_138(Global_30685[0]);
			Function_138(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_136(24, bParam2, 3);
			Function_120(24, 1);
			Function_138(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_138(Global_30685[0]);
			Function_138(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_138(Global_30693[12]);
			Function_138(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_138(Global_30693[12]);
			Function_138(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_136(25, bParam2, 10);
			Function_138(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_138(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_138(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_136(13, bParam2, 4);
			Function_138(Global_30693[2]);
			Function_138(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_119(8))
				{
					Function_103(8, 0, 0, 1);
				}
			}
			Function_138(Global_30685[0]);
			Function_124(9);
			Function_120(7, 1);
			Function_120(11, 1);
			Function_120(3, 1);
			Function_120(20, 1);
			Function_122(57, 1);
			break;
		
		case 0x0000002A:
			Function_136(2, bParam2, 4);
			Function_138(Global_30717[0]);
			Function_138(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_138(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_138(Global_30717[0]);
			Function_138(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_138(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_138(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_138(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_136(17, bParam2, 4);
			Function_138(Global_30723[0]);
			Function_138(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_98(15))
				{
					Function_91(15, 0, 1);
				}
			}
			Function_101(&(Global_29008[Global_30717[1]]), 256);
			Function_124(11);
			Function_138(Global_30717[1]);
			Function_138(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_138(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_138(Global_30717[1]);
			Function_138(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_138(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_138(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_138(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_138(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_138(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_138(Global_30717[1]);
			Function_86(11);
			Function_124(12);
			Global_16537[1121].f_40 = 0;
			Function_122(56, 1);
			if (!bParam2)
			{
				if (!Function_119(9))
				{
					Function_103(9, 0, 0, 0);
				}
				if (!Function_119(10))
				{
					Function_103(10, 0, 0, 1);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_65(bParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_86(int iParam0) //Position: 0x508E / 20622
{
	bool bVar0;
	
	if (!Function_52(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_90(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_90(Global_16537[iParam021].f_72, 0);
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
			Function_87(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_87(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x51FD / 20989
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
		Function_88(Function_89(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_88(Function_89(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_88(StackVal);
				vVar1 = { StackVal, StackVal, Function_88(StackVal) };
				if (Function_1(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

vector3 Function_88(int iParam0) //Position: 0x5303 / 21251
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = iParam0 & 32767;
	bVar4 = SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_89(vector3 vParam0) //Position: 0x535A / 21338
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

void Function_90(bool bParam0, bool bParam1) //Position: 0x53A8 / 21416
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

void Function_91(bool bParam0, bool bParam1, bool bParam2) //Position: 0x53FC / 21500
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_97(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_98(bParam0))
	{
		if (!Function_119(bParam0))
		{
			Function_103(bParam0, 1, 0, 0);
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
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_96(457, 1, 0, 0);
		Function_95(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_94(0, 0, 1, 1))
			{
				Function_15(1);
				Function_93(1, 0);
			}
			else
			{
				Function_92();
			}
		}
	}
	return;
}

void Function_92() //Position: 0x559A / 21914
{
	return;
}

void Function_93(int iParam0, int iParam1) //Position: 0x55A0 / 21920
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = iParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_25())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_94(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x55E2 / 21986
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

void Function_95(bool bParam0, int iParam1) //Position: 0x5686 / 22150
{
	if (!Function_97(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

int Function_96(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x56DB / 22235
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
	Function_46(iParam0, TO_FLOAT(bParam1), 1);
	Function_45(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_33(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

bool Function_97(int iParam0) //Position: 0x58FB / 22779
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_98(int iParam0) //Position: 0x5911 / 22801
{
	if (!Function_97(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_99(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_99(int iParam0, int iParam1) //Position: 0x5962 / 22882
{
	int iVar0;
	
	if (!Function_97(iParam0))
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

void Function_100(var uParam0, int iParam1) //Position: 0x598F / 22927
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_101(var uParam0, int iParam1) //Position: 0x599E / 22942
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_102(var uParam0, int iParam1) //Position: 0x59B5 / 22965
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_103(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x59C4 / 22980
{
	struct<8> Var0;
	
	if (!Function_97(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_118(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_119(bParam0))
	{
		Function_96(456, 1, 0, 0);
		Function_95(bParam0, 2);
		if (bParam2)
		{
			if (!Function_94(0, 0, 1, 1))
			{
				Function_15(1);
				Function_93(1, 5);
			}
			else
			{
				Function_92();
			}
		}
		Function_112(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_111() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_111() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_110(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_109(Global_76846, 2))
		{
			Function_104(Global_34573, 2, 1, 0);
		}
	}
}

void Function_104(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x5B0E / 23310
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_106(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_105(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_105(char* cParam0, int iParam1) //Position: 0x5B7A / 23418
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

bool Function_106(bool bParam0, var uParam1, int iParam2) //Position: 0x5BB1 / 23473
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
		if (Function_108(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_107(uVar0))
		{
			case 0x00000002:
				if (!Function_109(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_107(char* cParam0) //Position: 0x5C29 / 23593
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

int Function_108(int iParam0) //Position: 0x5CCA / 23754
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_16(&iVar1, 2147483648);
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

bool Function_109(int iParam0, int iParam1) //Position: 0x5D07 / 23815
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_110(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5D1A / 23834
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

bool Function_111() //Position: 0x5D65 / 23909
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_112(bool bParam0) //Position: 0x5D92 / 23954
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
			if (Function_116(bParam0, Function_117(bVar24)))
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
			if (Function_116(bParam0, Function_117(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_115(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_114(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_113(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_113(int iParam0) //Position: 0x5F42 / 24386
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_97(iParam0))
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

void Function_114(bool bParam0, bool bParam1) //Position: 0x5F99 / 24473
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

var Function_115(int iParam0) //Position: 0x5FBE / 24510
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_97(iParam0))
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

bool Function_116(bool bParam0, int iParam1) //Position: 0x6014 / 24596
{
	int iVar0;
	
	if (!Function_97(bParam0))
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

int Function_117(bool bParam0) //Position: 0x6073 / 24691
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_118(int iParam0) //Position: 0x607F / 24703
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_119(int iParam0) //Position: 0x609B / 24731
{
	if (!Function_97(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_99(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_120(int iParam0, int iParam1) //Position: 0x60ED / 24813
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_121(iParam0, iParam1);
	Function_104(Global_34573, 1, 4, 1);
	return 1;
}

int Function_121(int iParam0, int iParam1) //Position: 0x6160 / 24928
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_122(int iParam0, int iParam1) //Position: 0x61BC / 25020
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_123(iParam0, iParam1);
	Function_104(Global_34573, 1, 4, 1);
	return 1;
}

int Function_123(int iParam0, int iParam1) //Position: 0x622D / 25133
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_124(int iParam0) //Position: 0x6287 / 25223
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_52(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_135(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_135(Global_16537[iParam021].f_72, 0);
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
			Function_96(468, 1, 0, 0);
			Function_134(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_110("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_87(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_103(14, 1, 0, 0);
				Function_125(14, 1, 0, 0, 0);
			}
			if (!Function_94(0, 0, 1, 1))
			{
				Function_15(1);
				Function_93(1, 6);
			}
			else
			{
				Function_92();
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
			Function_110("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_96(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_134(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_125(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x6533 / 25907
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_97(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_118(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_99(bParam0, 2))
	{
		Function_96(456, 1, 0, 0);
		Function_95(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_110(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_116(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_95(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_94(0, 0, 1, 1))
			{
				Function_15(1);
				Function_93(1, 0);
			}
			else
			{
				Function_92();
			}
		}
		Function_112(bParam0);
		if (StackVal && !Function_133(((((!Function_111() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_133((((Function_111() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_109(Global_76846, 2))
		{
			Function_104(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_127();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_126(3, bParam1);
				break;
			
			case 0x00000005:
				Function_126(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_126(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_126(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_126(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_126(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_134(2, 24);
				break;
			
			case 0x00000003:
				Function_134(2, 25);
				break;
			
			case 0x0000000F:
				Function_134(2, 26);
				break;
			
			case 0x0000000D:
				Function_134(2, 27);
				break;
			
			case 0x0000000E:
				Function_134(2, 28);
				break;
			}
	}
}

void Function_126(int iParam0, bool bParam1) //Position: 0x67C2 / 26562
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

void Function_127() //Position: 0x6821 / 26657
{
	if (Function_97(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_132(Global_28180);
			Global_28180.f_8 = Function_128(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_132(Global_28180);
			Global_28180.f_8 = Function_128(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_128(int iParam0, int iParam1) //Position: 0x689C / 26780
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
					if (Function_130(6, 0) || Function_130(12, 0))
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
					if (Function_129(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_130(5, 0))
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
					if (Function_129(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_129(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_129(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_129(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_130(26, 0))
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
					if (Function_129(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_129(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_129(27) && iVar18)
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
					if (Function_129(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_129(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_129(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_129(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_130(17, 0) && iVar15)
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
					if (Function_129(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_130(6, 0) && Function_129(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_129(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_130(9, 0) && Function_129(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_129(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_130(8, 0) && iVar19)
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
	if (Function_48(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_48(StackVal, StackVal, vVar3))
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
	if (!Function_48(StackVal, StackVal, vVar3))
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

int Function_129(int iParam0) //Position: 0x748D / 29837
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_130(bool bParam0, bool bParam1) //Position: 0x74A2 / 29858
{
	int iVar0;
	
	iVar0 = Function_79(bParam0);
	if (!Function_131(iVar0))
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

bool Function_131(int iParam0) //Position: 0x74DF / 29919
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_132(int iParam0) //Position: 0x74F6 / 29942
{
	int iVar0;
	int iVar1;
	
	if (!Function_97(iParam0))
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

bool Function_133(bool bParam0, int iParam1) //Position: 0x7545 / 30021
{
	return (bParam0 && iParam1) == 0;
}

void Function_134(int iParam0, bool bParam1) //Position: 0x7552 / 30034
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

void Function_135(bool bParam0, bool bParam1) //Position: 0x75B9 / 30137
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

void Function_136(bool bParam0, bool bParam1, int iParam2) //Position: 0x760A / 30218
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_137(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_142(bParam0, 0, 0);
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

bool Function_137(int iParam0, int iParam1) //Position: 0x7678 / 30328
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_138(int iParam0) //Position: 0x768B / 30347
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_141(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_102(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_96(473, 1, 0, 0);
		iVar0 = Function_139(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_96(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_96(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_96(476, 1, 0, 0);
		}
	}
	bVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (bVar1 >= 30)
	{
		bVar1 = (bVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_134(iVar2, bVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_134(7, 30);
	}
	if (Function_43(473) <= Function_44(473))
	{
		if (!Function_25())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_139(int iParam0) //Position: 0x778A / 30602
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_140(iParam0))
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

bool Function_140(int iParam0) //Position: 0x77E2 / 30690
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_141(var uParam0, int iParam1) //Position: 0x77F8 / 30712
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_142(bool bParam0, bool bParam1, int iParam2) //Position: 0x7814 / 30740
{
	if (!Function_143(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_24(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_24(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_24(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_143(int iParam0) //Position: 0x786B / 30827
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_144(int iParam0, int iParam1) //Position: 0x787D / 30845
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
			Function_145(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_145(int iParam0) //Position: 0x78FF / 30975
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

void Function_146() //Position: 0x794D / 31053
{
	Function_147(512);
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

void Function_147(int iParam0) //Position: 0x7989 / 31113
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_148(int iParam0, int iParam1) //Position: 0x799C / 31132
{
	if (!Function_157(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

void Function_149(int iParam0) //Position: 0x79B7 / 31159
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
			Function_150(4, 0, 0);
		}
	}
	return;
}

void Function_150(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7A1E / 31262
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
		Function_151(Global_16524, bVar0, 1);
	}
	return;
}

void Function_151(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7AFB / 31483
{
	int iVar0;
	
	Function_153(bParam0);
	Function_11(bParam1);
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
	Function_152();
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

void Function_152() //Position: 0x7C74 / 31860
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_153(int iParam0) //Position: 0x7C80 / 31872
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

int Function_154(bool bParam0) //Position: 0x7CC6 / 31942
{
	if (!Function_131(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

bool Function_155(bool bParam0) //Position: 0x7CE1 / 31969
{
	if (!Function_131(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

int Function_156(int iParam0) //Position: 0x7D01 / 32001
{
	if (!Function_157(iParam0))
	{
		return 0;
	}
	return Global_16198[iParam0];
}

bool Function_157(bool bParam0) //Position: 0x7D19 / 32025
{
	if (!Function_131(bParam0))
	{
		return 0;
	}
	if (!Function_158(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_158(int iParam0) //Position: 0x7D3D / 32061
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_159(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7D52 / 32082
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_157(bParam0))
	{
		Function_56();
		return;
	}
	iVar0 = Function_154(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_155(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_13(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_164();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_55("DEED_COMPLETE", bParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[bParam011].f_4 = 4;
		}
		else
		{
			Global_13172[bParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[bParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_161(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (iVar0)
				{
					case 0x00000001:
						iVar13 = 4;
						break;
					
					case 0x00000004:
						iVar13 = 3;
						break;
					
					case 0x00000006:
						iVar13 = 2;
						break;
					
					case 0x00000002:
						switch (Function_155(bParam0))
						{
							case 0x00000000:
								iVar13 = 1;
								break;
							
							default:
								iVar13 = 0;
								break;
						}
						break;
					
					case 0x00000003:
						iVar13 = 10;
						break;
					}
			}
			Function_15(1);
			Function_93(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_160(bParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_6269;
		Var14.f_20 = bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 44, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_3376 = 1;
}

void Function_160(int iParam0, int iParam1) //Position: 0x7F64 / 32612
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_161(bool bParam0) //Position: 0x7F9E / 32670
{
	int iVar0;
	int iVar1;
	
	if (!Function_131(bParam0))
	{
		return;
	}
	switch (Function_154(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_155(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_96(12, 1, 0, 0);
				Function_134(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_96(13, 1, 0, 0);
				Function_134(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_96(14, 1, 0, 0);
				Function_134(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_96(15, 1, 0, 0);
				Function_134(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_96(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_155(bParam0))
			{
				case 0x00000000:
					if (Function_163(bParam0) == 1)
					{
						iVar0 = Function_162(bParam0);
						if (Function_140(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_134(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_134(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_134(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_134(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_134(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_134(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_134(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_134(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_134(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_134(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_134(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_134(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_134(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_134(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_134(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_134(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_134(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_134(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_134(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_134(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_29155[iVar010];
							}
							else
							{
								iVar0 = Global_29155[iVar010];
								iVar0 = Global_29155[iVar010];
							}
							if (iVar0 == Global_30621[0])
							{
								Function_96(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_96(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_96(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_162(bParam0) == 0)
			{
				if (Function_163(bParam0) == 1)
				{
					Function_96(458, 1, 0, 0);
					iVar0 = Function_155(bParam0);
					if (Function_140(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_134(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_134(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_134(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_134(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_134(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_134(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_134(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_134(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_163(bParam0) == 1)
			{
				Function_96(400, 1, 0, 0);
			}
			switch (Function_155(bParam0))
			{
				case 0x00000001:
					Function_96(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_134(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_134(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_134(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_96(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_134(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_134(6, 9);
					}
					break;
				
				default:
					LOG_ERROR("Please insure this job case is taken care of and create a null case");
					break;
			}
			break;
	}
	return;
}

int Function_162(bool bParam0) //Position: 0x847B / 33915
{
	if (!Function_131(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_163(bool bParam0) //Position: 0x849A / 33946
{
	if (!Function_131(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_164() //Position: 0x84B4 / 33972
{
	bool bVar0;
	int iVar1;
	
	if (!Function_5(Global_6269))
	{
		return;
	}
	bVar0 = Function_27(24);
	iVar1 = Function_79(Global_6269);
	if (!Function_5(bVar0) && Function_165(iVar1) < 0)
	{
		Function_70(24, Global_6269, 0);
		Function_68(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_165(Function_79(bVar0)))
	{
		Function_70(24, Global_6269, 0);
		Function_68(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_165(int iParam0) //Position: 0x8534 / 34100
{
	if (!Function_157(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_166(int iParam0, bool bParam1) //Position: 0x854E / 34126
{
	if (!Function_157(iParam0))
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

bool Function_167(bool bParam0) //Position: 0x8584 / 34180
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

