//Decompiled with MagicRDR v1.0
//Function Count : 85
//Statics Count : 164
//Natives Count : 147
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	var uLocal_2 = 0;
	bool bLocal_3 = false;
	struct<4> Local_4[30];
	float fLocal_125 = 0.0f;
	var uLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = false;
	vector3 vLocal_130 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_133 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_136 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_139 = false;
	float fLocal_140 = 0.0f;
	bool bLocal_141 = false;
	bool bLocal_142 = false;
	float fLocal_143 = 0.0f;
	bool bLocal_144 = false;
	bool bLocal_145 = false;
	bool bLocal_146 = false;
	float fLocal_147 = 0.0f;
	int iLocal_148 = 0;
	bool bLocal_149 = false;
	bool bLocal_150 = false;
	bool bLocal_151 = false;
	bool bLocal_152 = false;
	int iLocal_153 = 0;
	bool bLocal_154 = false;
	vector3 vLocal_155 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_158 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_161 = false;
	bool bLocal_162 = false;
	bool bLocal_163 = false;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	
	iLocal_0 = 0;
	bVar0 = false;
	if (StackVal || StackVal != 2 != 1)
	{
		iLocal_153 = 1;
		vLocal_155 = { StackVal, StackVal, *(&Global_28210 + 24) };
	}
	while (!IS_EXITFLAG_SET())
	{
		bLocal_3 = 250;
		switch (iLocal_0)
		{
			case 0x00000000:
				if (Function_81(&Local_4, &uLocal_2, &uLocal_126, iLocal_153, 0))
				{
					iLocal_128 = Function_78(&Local_4, iLocal_153, 0);
					if (iLocal_128 >= 0)
					{
						iLocal_0 = 1;
					}
					else
					{
						Function_75("PASS_CAMP_NoDest", 0x41200000, 1, 0, 2, 1, 0);
						TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					}
				}
				else
				{
					bLocal_3 = false;
				}
				break;
			
			case 0x00000001:
				if (!HUD_IS_SHOWING_SMALL_TEXT())
				{
					iLocal_0 = 2;
					bLocal_3 = false;
				}
				break;
			
			case 0x00000002:
				if (iLocal_128 == 0)
				{
					Function_75("No destinations", 0x41200000, 1, 0, 2, 1, 0);
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					return;
				}
				iLocal_148 = Function_74(&Local_4, Local_4 + 1, 0);
				Function_72(&Local_4, iLocal_148);
				iLocal_0 = 3;
			
			case 0x00000003:
				Function_59();
				bLocal_3 = false;
				break;
			
			case 0x00000004:
				if (iLocal_153 && iLocal_127 != 0)
				{
					bLocal_145 = Function_55(StackVal, StackVal, *(&Global_28210 + 24), 393264, 0.0f, 200.0f, &vLocal_130, 0);
				}
				else
				{
					bLocal_129 = Function_54(Local_4[iLocal_1274]);
					GET_OBJECT_POSITION(bLocal_129, &vLocal_130);
				}
				bVar0 = true;
				SET_PLAYER_CONTROL(false, 0, 0, 0);
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_151))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_151);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_150))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_150);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_149))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_149);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_152))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_152);
				}
				DECOR_SET_BOOL(Global_34573, "playerFastTravel", true);
				if (!Function_53(Global_76849, 4))
				{
					Function_52(&Global_76849, 4);
				}
				bLocal_146 = CREATE_LAYOUT("campTeleport");
				iLocal_0 = 12;
				bLocal_3 = false;
			
			case 0x0000000C:
				if (!DECOR_CHECK_EXIST(Global_34573, "playerFastTravel"))
				{
					if (Function_19())
					{
						if (!DECOR_CHECK_EXIST(Global_34573, "playerFastTravelOnFoot"))
						{
							if (!DECOR_CHECK_EXIST(Global_34573, "playerFastTravelOnHorse"))
							{
								bLocal_141 = Function_7(StackVal, StackVal, 1, 1, Global_34574, bLocal_139, 1, 0);
								TELEPORT_ACTOR(bLocal_141, &Global_34574, 1, 1, 1);
							}
							else
							{
								bVar1 = DECOR_GET_INT(Global_34573, "playerFastTravelOnHorse");
								if (StackVal == bVar1 + 976)
								{
									bLocal_141 = Function_7(StackVal, StackVal, 1, 1, Global_34574, bLocal_139, 1, 0);
								}
								else
								{
									bLocal_141 = CREATE_ACTOR_IN_LAYOUT(bLocal_146, Function_6(), bVar1, Global_34574, 0.0f, bLocal_139, 0.0f);
									ACCESSORIZE_HORSE(GET_MOUNT(Global_34573), 3);
									bLocal_154 = true;
								}
								TELEPORT_ACTOR(bLocal_141, &Global_34574, 1, 1, 1);
								DECOR_REMOVE(Global_34573, "playerFastTravelOnHorse");
							}
							Function_5((TO_FLOAT(StackVal) * 2.0f));
							Function_3(ROUND((((TO_FLOAT(StackVal) * 2.0f) * 4.0f) / 3600.0f)));
						}
						else
						{
							DECOR_REMOVE(Global_34573, "playerFastTravelOnFoot");
							Function_5((TO_FLOAT(StackVal) * 4.0f));
							Function_3(ROUND((((TO_FLOAT(StackVal) * 4.0f) * 4.0f) / 3600.0f)));
						}
						iLocal_0 = 5;
					}
				}
				else
				{
					bLocal_3 = false;
				}
				break;
			
			case 0x00000005:
				if (IS_ACTOR_VALID(bLocal_141))
				{
					GET_POSITION(bLocal_141, &vLocal_158);
					if (Function_2(StackVal, StackVal, StackVal, StackVal, Global_34574, vLocal_158) > 5.0f)
					{
						if (IS_ACTOR_VALID(bLocal_141))
						{
							ACTOR_MOUNT_ACTOR(Global_34573, bLocal_141);
						}
						if (bLocal_154)
						{
							RELEASE_ACTOR(bLocal_141);
						}
						iLocal_0 = 6;
					}
				}
				else
				{
					iLocal_0 = 6;
				}
				break;
			
			case 0x00000006:
				iLocal_0 = 7;
				break;
			
			case 0x00000007:
				if (!HUD_IS_FADED() && !HUD_IS_FADING())
				{
					SET_PLAYER_CONTROL(false, 1, 0, 0);
					iLocal_0 = 8;
				}
				else if (!HUD_IS_FADING())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				break;
			
			case 0x00000008:
				if (VDIST(vLocal_130, Global_34574) > 5.0f || GET_TASK_STATUS(Global_34573, 61) != 0)
				{
					iLocal_0 = 11;
				}
				GET_ACTOR_VELOCITY(Global_34573, &vLocal_136);
				if (fLocal_140 > 1.0f)
				{
					if (VMAG(vLocal_136) > 0.5f)
					{
						fLocal_140 = GET_CURRENT_GAME_TIME();
					}
				}
				else if (VMAG(vLocal_136) < 0.25f)
				{
					fLocal_140 = 0.0f;
				}
				else if (fLocal_140 + 5.0f) > GET_CURRENT_GAME_TIME()
				{
					bLocal_3 = false;
					iLocal_0 = 11;
				}
				if (((((((((((((((((FABS(GET_STICK_Y(GET_PLAYER_PADINDEX(Global_34573), 0, 0)) < 0.25f || FABS(GET_STICK_X(GET_PLAYER_PADINDEX(Global_34573), 0, 0)) < 0.25f) || FABS(GET_STICK_Y(GET_PLAYER_PADINDEX(Global_34573), 1, 0)) < 0.25f) || FABS(GET_STICK_X(GET_PLAYER_PADINDEX(Global_34573), 1, 0)) < 0.25f) || IS_BUTTON_DOWN(GET_PLAYER_PADINDEX(Global_34573), 12, 0, false)) || IS_BUTTON_DOWN(GET_PLAYER_PADINDEX(Global_34573), 14, 0, false)) || IS_BUTTON_DOWN(GET_PLAYER_PADINDEX(Global_34573), 13, 0, false)) || IS_BUTTON_DOWN(GET_PLAYER_PADINDEX(Global_34573), 15, 0, false)) || IS_BUTTON_DOWN(GET_PLAYER_PADINDEX(Global_34573), 7, 0, false)) || IS_BUTTON_DOWN(GET_PLAYER_PADINDEX(Global_34573), 6, 0, false)) || IS_BUTTON_DOWN(GET_PLAYER_PADINDEX(Global_34573), 4, 0, false)) || IS_BUTTON_DOWN(GET_PLAYER_PADINDEX(Global_34573), 5, 0, false)) || IS_BUTTON_DOWN(GET_PLAYER_PADINDEX(Global_34573), 3, 0, false)) || IS_BUTTON_DOWN(GET_PLAYER_PADINDEX(Global_34573), 2, 0, false)) || IS_BUTTON_DOWN(GET_PLAYER_PADINDEX(Global_34573), 1, 0, false)) || IS_BUTTON_DOWN(GET_PLAYER_PADINDEX(Global_34573), 0, 0, false)) || IS_BUTTON_DOWN(GET_PLAYER_PADINDEX(Global_34573), 9, 0, false)) || IS_BUTTON_DOWN(GET_PLAYER_PADINDEX(Global_34573), 10, 0, false))
				{
					iLocal_0 = 11;
				}
				bLocal_3 = false;
				break;
			
			case 0x0000000B:
				iLocal_0 = 13;
				bLocal_3 = false;
				break;
			
			case 0x0000000D:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_3);
	}
	if (bVar0)
	{
		SET_PLAYER_CONTROL(false, 1, 0, 0);
		UI_POP("nCutscenes");
	}
	if (!IS_GAME_RESETTING())
	{
		if (HUD_IS_FADED())
		{
			HUD_FADE_IN(0.5f, 1065353216);
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_151))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_151);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_150))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_150);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_149))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_149);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_152))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_152);
	}
	if (IS_OBJECTSET_VALID(bLocal_142))
	{
		Function_1(bLocal_142);
		DESTROY_OBJECTSET(bLocal_142);
	}
	if (IS_LAYOUTREF_VALID(bLocal_146))
	{
		RELEASE_LAYOUT_REF(bLocal_146);
	}
	AI_STOP_IGNORING_ACTORS();
	Global_3391 = 0;
	RESET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(Global_34573));
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0) //Position: 0x665 / 1637
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(bVar0));
		}
	}
	return;
}

float Function_2(vector3 vParam0, vector3 vParam3) //Position: 0x6A5 / 1701
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_3(bool bParam0) //Position: 0x6C2 / 1730
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 101;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		iVar2 = 0;
		if (Global_30842[16])
		{
			PRINTNL();
			PRINTNL();
			PRINTSTRING("CUR time of day delay: ");
			Function_4(Global_16876[iVar06]);
		}
		if (GET_DAY(Global_16876[iVar06]) == 0)
		{
			iVar2 = 1;
		}
		ADD_TIME(&(Global_16876[iVar06]), iVar2, bParam0, false, 0);
		Global_17483[iVar075].f_264 = Global_16876[iVar06];
		if (Global_30842[16])
		{
			PRINTNL();
			PRINTSTRING("NEW time of day delay: ");
			Function_4(Global_16876[iVar06]);
		}
		iVar0++;
	}
	return;
}

void Function_4(bool bParam0) //Position: 0x782 / 1922
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

void Function_5(float fParam0) //Position: 0x7C8 / 1992
{
	FEED_CODE_WARP_DIST(fParam0);
	ADVANCE_TIME_HOURS(((fParam0 * 4.0f) / 3600.0f));
	return;
}

var Function_6() //Position: 0x7E0 / 2016
{
	int iVar0;
	
	return iVar0;
}

bool Function_7(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0x7E8 / 2024
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_3381)
	{
		Function_17(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_16())
		{
			return "";
		}
	}
	if (!Function_14())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	Function_13();
	if ((bVar1 && iParam6) && uParam0)
	{
		Function_12(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_12(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_12(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_12(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_11(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_11(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_10() || NET_IS_IN_SESSION())
				{
					RELEASE_ACTOR(Global_12976.f_36);
					Global_12976.f_36 = "";
					CLEAR_ACTORS_HORSE(Global_34573);
				}
				else
				{
					RELEASE_ACTOR(Global_12976.f_36);
					if (!bParam7)
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_6(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_6(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
					if (IS_ACTOR_HORSE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 4);
					}
					else if (IS_ACTOR_MULE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 3);
					}
				}
			}
			else
			{
				vVar10 = { bParam2, bParam3, bParam4 };
				if (!Function_9(StackVal, StackVal, vVar10))
				{
					TELEPORT_ACTOR(Global_12976.f_36, &vVar10, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (uParam0 || Global_3380))
	{
		if (!bParam7)
		{
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_6(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_6(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
		if (IS_ACTOR_HORSE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 4);
		}
		else if (IS_ACTOR_MULE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 9 || ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 8)
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 8);
		}
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if (bVar1)
	{
		if (bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(Global_12976.f_36, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(Global_34573);
		SET_ACTORS_HORSE(Global_34573, Global_12976.f_36);
		Function_8(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_10() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

void Function_8(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xB3E / 2878
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

bool Function_9(vector3 vParam0) //Position: 0xB7B / 2939
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_10() //Position: 0xB93 / 2963
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_11(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xB9C / 2972
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!bParam4)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (bParam5)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

vector3 Function_12(bool bParam0) //Position: 0xC37 / 3127
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_13() //Position: 0xC5E / 3166
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(Global_12976.f_36)) != bVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(Global_12976.f_36, bVar0);
		}
	}
	return;
}

bool Function_14() //Position: 0xCD0 / 3280
{
	if (Function_15() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_15() //Position: 0xCE6 / 3302
{
	return Global_12976.f_152;
}

bool Function_16() //Position: 0xCF1 / 3313
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_17(var uParam0, bool bParam1, bool bParam2) //Position: 0xD11 / 3345
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_18(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_18(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_18(var uParam0, int iParam1) //Position: 0xD3E / 3390
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_19() //Position: 0xD4D / 3405
{
	vector3 vVar0;
	bool bVar3;
	struct<6> Var9;
	struct<6> Var15;
	struct<6> Var21;
	struct<6> Var27;
	struct<6> Var33;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	bool bVar43;
	var uVar44;
	int iVar45;
	bool bVar46;
	vector3 vVar47;
	bool bVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	vector3 vVar54;
	bool bVar57;
	
	switch (iLocal_1)
	{
		case 0x00000000:
			UNK_0xEF270DC9();
			AI_IGNORE_ACTOR(Global_34573);
			iLocal_1 = 1;
			break;
		
		case 0x00000001:
			if (HUD_IS_FADED())
			{
				UI_POP("nCutscenes");
				if (iLocal_127 != 0 && iLocal_153)
				{
					bLocal_142 = Global_28210.f_12;
					iLocal_1 = 2;
				}
				else
				{
					if (!IS_OBJECTSET_VALID(bLocal_142))
					{
						bLocal_142 = CREATE_OBJECTSET_IN_LAYOUT("passengerCampPath", bLocal_146, 36, 1);
					}
					if (FIND_TRAFFIC_PATH(bLocal_146, bLocal_142, &Global_34574, &vLocal_130, 393264, &uVar44))
					{
						bLocal_145 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bLocal_142));
					}
					iLocal_1 = 2;
				}
			}
			break;
		
		case 0x00000002:
			STREAMING_EVICT_ALL();
			fLocal_125 = GET_CURRENT_GAME_TIME();
			if (!IS_OBJECT_VALID(bLocal_145))
			{
				bLocal_145 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bLocal_142));
			}
			Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_48(StackVal, StackVal, bLocal_145, vLocal_130, 2.1f, 0.0f, 1.0f, 2) };
			Function_47(&Var9);
			vLocal_133 = { StackVal, StackVal, Function_47(&Var9) };
			vLocal_130 = { StackVal, StackVal, vLocal_133 };
			bVar46 = Function_39(StackVal, StackVal, vLocal_130);
			if (IS_OBJECT_VALID(bVar46))
			{
				bVar52 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar50, bLocal_142));
				bVar53 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar50 + 1, bLocal_142));
				vVar54 = { StackVal, StackVal, vLocal_130 };
				while (((Function_9(StackVal, StackVal, vVar47) && bVar50 > 10) && IS_OBJECT_VALID(bVar52)) && IS_OBJECT_VALID(bVar53))
				{
					fVar51 = Function_38(bVar52, bVar53);
					Function_35(StackVal, StackVal, vVar54, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar50, bLocal_142)), 1.0f, GET_VOLUME_FROM_OBJECT(bVar46));
					vVar47 = { StackVal, StackVal, Function_35(StackVal, StackVal, vVar54, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar50, bLocal_142)), 1.0f, GET_VOLUME_FROM_OBJECT(bVar46)) };
					bVar50++;
					if (Function_9(StackVal, StackVal, vVar47))
					{
						if (fVar51 > 0.0f)
						{
							GET_CURVE_POINT(bVar52, 1.0f, &bVar57, 0);
						}
						else
						{
							GET_CURVE_POINT(bVar52, 0.0f, &bVar57, 0);
						}
						Function_47(&bVar57);
						vVar54 = { StackVal, StackVal, Function_47(&bVar57) };
						bVar52 = bVar53;
						bVar53 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar50 + 1, bLocal_142));
					}
				}
				if (!Function_9(StackVal, StackVal, vVar47))
				{
					vLocal_130 = { StackVal, StackVal, vVar47 };
					bLocal_161 = true;
					bLocal_162 = bVar52;
					bLocal_163 = bVar53;
					vLocal_133 = { StackVal, StackVal, vVar47 };
					Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_48(StackVal, StackVal, bLocal_145, vLocal_130, 2.1f, 0.0f, 1.0f, 2) };
				}
				if (DECOR_CHECK_EXIST(bVar46, "deleteMe"))
				{
					DESTROY_OBJECT(bVar46);
				}
			}
			if (bLocal_161)
			{
				bLocal_145 = bLocal_162;
				bVar43 = bLocal_163;
			}
			else
			{
				bVar43 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, bLocal_142));
			}
			GET_CURVE_POINT(bLocal_145, 1.0f, &Var15, 0);
			GET_CURVE_POINT(bLocal_145, 0.0f, &Var21, 0);
			GET_CURVE_POINT(bVar43, 1.0f, &Var27, 0);
			GET_CURVE_POINT(bVar43, 1.0f, &Var33, 0);
			fVar39 = Function_34(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15, Var27);
			fVar40 = Function_34(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15, Var33);
			fVar41 = Function_34(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var21, Var27);
			fVar42 = Function_34(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var21, Var33);
			if ((fVar39 > fVar41 && fVar39 > fVar42) || (fVar40 > fVar41 && fVar40 > fVar42))
			{
				UNK_0x19D652F9(bLocal_145, 1.0f, &Var9, &bVar3);
			}
			else
			{
				UNK_0x19D652F9(bLocal_145, -1.0f, &Var9, &bVar3);
			}
			Function_47(&bVar3);
			vVar0 = { StackVal, StackVal, Function_47(&bVar3) };
			Function_33(StackVal, StackVal, StackVal, StackVal, vVar0, vLocal_130);
			vLocal_133 = { StackVal, StackVal, Function_33(StackVal, StackVal, StackVal, StackVal, vVar0, vLocal_130) };
			bLocal_139 = UNK_0x9C40E671(&vLocal_133);
			iVar45 = Function_11(StackVal, StackVal, vVar0, 0, 1, 1);
			if (iVar45 != Local_4[iLocal_1274])
			{
				Local_4[iLocal_1274] = iVar45;
			}
			if (!Function_9(StackVal, StackVal, vVar0))
			{
				Function_32(StackVal, StackVal, Global_34573, vVar0, bLocal_139, 1, 1, 1);
				Global_3391 = 1;
				Global_3386 = 0;
				Function_28(1, 0, 1);
				Function_26();
				iLocal_1 = 3;
				fLocal_147 = GET_CURRENT_GAME_TIME();
			}
			else
			{
				AI_STOP_IGNORING_ACTORS();
				iLocal_1 = 7;
				return 1;
			}
		
		case 0x00000003:
			if (fLocal_125 + 1.0f) > GET_CURRENT_GAME_TIME()
			{
				CAMERA_RESET(0);
				Function_23();
				iLocal_1 = 4;
			}
			break;
		
		case 0x00000004:
			if (STREAMING_IS_WORLD_LOADED() && ((Function_21(Local_4[iLocal_1274]) || Local_4[iLocal_1274] != 4294967295) || (iLocal_153 && iLocal_127 != 0)))
			{
				if (FIND_GROUND_INTERSECTION(&Global_34574, 10.0f, &vVar0, &vVar47))
				{
					Function_32(StackVal, StackVal, Global_34573, vVar0, bLocal_139, 1, 1, 1);
				}
				iLocal_1 = 6;
			}
			else if (fLocal_147 + 50.0f) > GET_CURRENT_GAME_TIME()
			{
				if (FIND_GROUND_INTERSECTION(&Global_34574, 10.0f, &vVar0, &vVar47))
				{
					Function_32(StackVal, StackVal, Global_34573, vVar0, bLocal_139, 1, 1, 1);
				}
				iLocal_1 = 6;
			}
			break;
		
		case 0x00000006:
			if (STREAMING_IS_WORLD_LOADED() && (!Function_20(Local_4[iLocal_1274]) || Function_21(Local_4[iLocal_1274])))
			{
				AI_STOP_IGNORING_ACTORS();
				iLocal_1 = 7;
				if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
				{
					SET_ACTOR_HEADING(GET_MOUNT(Global_34573), bLocal_139, 1);
				}
				else
				{
					SET_ACTOR_HEADING(Global_34573, bLocal_139, 1);
				}
				return 1;
			}
			if (fLocal_147 + 30.0f) > GET_CURRENT_GAME_TIME()
			{
				iLocal_1 = 7;
				if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
				{
					SET_ACTOR_HEADING(GET_MOUNT(Global_34573), bLocal_139, 1);
				}
				else
				{
					SET_ACTOR_HEADING(Global_34573, bLocal_139, 1);
				}
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_20(int iParam0) //Position: 0x11A1 / 4513
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_21(int iParam0) //Position: 0x11B7 / 4535
{
	if (!Function_20(iParam0))
	{
		return 1;
	}
	return Function_22(&(Global_29008[iParam0]), 4);
}

bool Function_22(int iParam0, int iParam1) //Position: 0x11D3 / 4563
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_23() //Position: 0x11EF / 4591
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_24(16384);
	}
	return;
}

void Function_24(int iParam0) //Position: 0x120B / 4619
{
	Function_25(&Global_28842, iParam0);
	return;
}

void Function_25(var uParam0, var uParam1) //Position: 0x1219 / 4633
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_26() //Position: 0x1234 / 4660
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_27(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_27(var uParam0, int iParam1) //Position: 0x125E / 4702
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_28(var uParam0, bool bParam1, int iParam2) //Position: 0x1275 / 4725
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (Function_20(Global_29006))
		{
			Function_31(&(Global_29008[Global_29006]), 131072);
			Function_27(&(Global_29008[Global_29006]), 2097152);
			Function_29(Global_29006);
		}
		else
		{
			bParam1 = false;
		}
	}
	if (!bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_22(&(Global_29008[iVar0]), 4) || Function_22(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_27(&(Global_29008[iVar0]), 2097155);
					Function_31(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_10())
			{
			}
			WAIT(false);
		}
		if (uParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_29(int iParam0) //Position: 0x1380 / 4992
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_30())
			{
				return;
			}
		}
		if (!Function_22(&(Global_29008[iParam0]), 2048))
		{
			Global_30618 = iParam0;
		}
		Global_29007 = StackVal;
	}
	else if (Global_3386)
	{
	}
	return;
}

bool Function_30() //Position: 0x13FF / 5119
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_22(&(Global_29008[iVar0]), 4) || Function_22(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_31(var uParam0, bool bParam1) //Position: 0x1468 / 5224
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

void Function_32(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1477 / 5239
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, iParam6, iParam7);
			if (!IS_ACTOR_RIDING(bParam0))
			{
				ACTOR_MOUNT_ACTOR(bParam0, bVar0);
			}
		}
		else
		{
			bVar0 = GET_VEHICLE(bParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, iParam6, iParam7);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(bParam0, vParam1, bParam4, iParam5, iParam6, iParam7);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

vector3 Function_33(vector3 vParam0, vector3 vParam3) //Position: 0x1530 / 5424
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	VNORMALIZE(&vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_34(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) //Position: 0x154E / 5454
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_47(&bParam0);
	vVar0 = { StackVal, StackVal, Function_47(&bParam0) };
	Function_47(&bParam6);
	vVar3 = { StackVal, StackVal, Function_47(&bParam6) };
	return VDIST(vVar0, vVar3);
}

vector3 Function_35(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1573 / 5491
{
	struct<6> Var0;
	struct<6> Var6;
	vector3 vVar12;
	int iVar15;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_48(StackVal, StackVal, bParam3, vParam0, 0x41200000, 0, 0x3f800000, 1) };
	while (!Function_37(&Var0, ROUND(bParam4)) && iVar15 > 10)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var0 };
		UNK_0x19D652F9(bParam3, (bParam4 * 20.0f), &Var6, &Var0);
		Function_47(&Var0);
		if (!IS_POINT_IN_VOLUME(Function_47(&Var0), bParam5))
		{
			Function_47(&Var0);
			vVar12 = { StackVal, StackVal, Function_47(&Var0) };
			return StackVal, StackVal, vVar12;
		}
		Function_47(&Var0);
		vVar12 = { StackVal, StackVal, Function_47(&Var0) };
		iVar15++;
	}
	Function_36();
	return StackVal, StackVal, Function_36();
}

vector3 Function_36() //Position: 0x15F7 / 5623
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_37(int iParam0, int iParam1) //Position: 0x1600 / 5632
{
	if (iParam1 != 4294967295 && iParam0->f_12 > 0.001f)
	{
		return 1;
	}
	if (iParam1 != 1 && iParam0->f_12 < 0.999f)
	{
		return 1;
	}
	return 0;
}

var Function_38(bool bParam0, bool bParam1) //Position: 0x1632 / 5682
{
	struct<6> Var0;
	struct<6> Var6;
	struct<6> Var12;
	struct<6> Var18;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	
	GET_CURVE_POINT(bParam0, 1.0f, &Var0, 0);
	GET_CURVE_POINT(bParam0, 0.0f, &Var6, 0);
	GET_CURVE_POINT(bParam1, 1.0f, &Var12, 0);
	GET_CURVE_POINT(bParam1, 0.0f, &Var18, 0);
	fVar24 = Function_34(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0, Var12);
	fVar25 = Function_34(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0, Var18);
	fVar26 = Function_34(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var6, Var12);
	fVar27 = Function_34(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var6, Var18);
	if ((fVar24 > fVar26 && fVar24 > fVar27) || (fVar25 > fVar26 && fVar25 > fVar27))
	{
		return -1.0f;
	}
	return 1.0f;
}

var Function_39(vector3 vParam0) //Position: 0x16AD / 5805
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_3422)
	{
		if (Global_3422[iVar040].f_104 == 4)
		{
			if (Global_3422[iVar040].f_124)
			{
				if (!Function_43(iVar0, 0) && IS_VOLUME_VALID(Global_3422[iVar040].f_48))
				{
					if (IS_POINT_IN_VOLUME(vParam0, Global_3422[iVar040].f_48))
					{
						return GET_OBJECT_FROM_VOLUME(Global_3422[iVar040].f_48);
					}
				}
			}
		}
		if (Global_3422[iVar040].f_104 == 3)
		{
			if (Global_3422[iVar040].f_124)
			{
				if (!Function_43(iVar0, 0))
				{
					if (Function_2(StackVal, StackVal, StackVal, StackVal, vParam0, *(&Global_3422[iVar040] + 52)) > 10.0f)
					{
						bVar1 = CREATE_VOLUME_IN_LAYOUT(Global_28841, Function_6(), 3, *(&Global_3422[iVar040] + 52), 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
						DECOR_SET_BOOL(bVar1, "deleteMe", true);
						return GET_OBJECT_FROM_VOLUME(bVar1);
					}
				}
			}
		}
		iVar0++;
	}
	if (Function_41())
	{
		Function_40(Global_26303.f_24);
		if (Function_2(StackVal, StackVal, StackVal, StackVal, vParam0, Function_40(Global_26303.f_24)) > 200.0f)
		{
			Function_40(Global_26303.f_24);
			bVar1 = CREATE_VOLUME_IN_LAYOUT(Global_28841, Function_6(), 3, Function_40(Global_26303.f_24), 0.0f, 0.0f, 0.0f, 200.0f, 50.0f, 200.0f);
			DECOR_SET_BOOL(bVar1, "deleteMe", true);
			return GET_OBJECT_FROM_VOLUME(bVar1);
		}
	}
	if (IS_POINT_IN_VOLUME(StackVal, vParam0))
	{
		return GET_OBJECT_FROM_VOLUME(StackVal);
	}
	if (IS_POINT_IN_VOLUME(StackVal, vParam0))
	{
		return GET_OBJECT_FROM_VOLUME(StackVal);
	}
	if (IS_POINT_IN_VOLUME(StackVal, vParam0))
	{
		return GET_OBJECT_FROM_VOLUME(StackVal);
	}
	if (IS_POINT_IN_VOLUME(StackVal, vParam0))
	{
		return GET_OBJECT_FROM_VOLUME(StackVal);
	}
	if (IS_POINT_IN_VOLUME(StackVal, vParam0))
	{
		return GET_OBJECT_FROM_VOLUME(StackVal);
	}
	if (IS_POINT_IN_VOLUME(StackVal, vParam0))
	{
		return GET_OBJECT_FROM_VOLUME(StackVal);
	}
	if (IS_POINT_IN_VOLUME(StackVal, vParam0))
	{
		return GET_OBJECT_FROM_VOLUME(StackVal);
	}
	if (IS_POINT_IN_VOLUME(StackVal, vParam0))
	{
		return GET_OBJECT_FROM_VOLUME(StackVal);
	}
	return "";
}

vector3 Function_40(int iParam0) //Position: 0x1937 / 6455
{
	vector3 vVar0;
	
	if (iParam0 == Global_30723[5])
	{
		vVar0 = { -1043.829f, 183.985f, 1371.714f };
	}
	else if (iParam0 == Global_30693[3])
	{
		vVar0 = { -2234.426f, 23.091f, 4454.898f };
	}
	else if (iParam0 == Global_30723[6])
	{
		vVar0 = { -482.365f, 143.447f, 1908.17f };
	}
	else if (iParam0 == Global_30668[3])
	{
		vVar0 = { -490.208f, 20.103f, 3023.158f };
	}
	else if (iParam0 == Global_30640[13])
	{
		vVar0 = { -1945.125f, 30.262f, 3469.187f };
	}
	else if (iParam0 == Global_30693[7])
	{
		vVar0 = { -2726.75f, 55.867f, 4619.704f };
	}
	else if (iParam0 == Global_30640[6])
	{
		vVar0 = { -1912.426f, 29.225f, 2261.395f };
	}
	else if (iParam0 == Global_30693[10])
	{
		vVar0 = { -1756.155f, 30.369f, 4819.779f };
	}
	else if (iParam0 == Global_30693[8])
	{
		vVar0 = { -1445.059f, 19.691f, 4909.378f };
	}
	else if (iParam0 == Global_30640[11])
	{
		vVar0 = { -2829.0f, 20.079f, 3076.999f };
	}
	else if (iParam0 == Global_30668[6])
	{
		vVar0 = { -1269.727f, 109.427f, 2762.885f };
	}
	else if (iParam0 == Global_30723[3])
	{
		vVar0 = { -733.172f, 228.751f, 1129.988f };
	}
	else if (iParam0 == Global_30685[5])
	{
		vVar0 = { -3384.816f, 55.788f, 4746.955f };
	}
	else if (iParam0 == Global_30693[9])
	{
		vVar0 = { -1200.055f, 19.075f, 4964.34f };
	}
	else if (iParam0 == Global_30693[11])
	{
		vVar0 = { -1147.715f, 27.988f, 4820.093f };
	}
	else if (iParam0 == Global_30640[7])
	{
		vVar0 = { -2868.86f, 74.342f, 2178.624f };
	}
	else if (iParam0 == Global_30679[3])
	{
		vVar0 = { -3140.568f, 44.538f, 3284.213f };
	}
	else if (iParam0 == Global_30693[4])
	{
		vVar0 = { -1361.188f, 13.056f, 4299.818f };
	}
	else if (iParam0 == Global_30658[7])
	{
		vVar0 = { -4016.218f, 21.468f, 2398.236f };
	}
	else if (iParam0 == Global_30723[4])
	{
		vVar0 = { -844.503f, 189.827f, 1577.429f };
	}
	else
	{
		PRINTSTRING("The bad bh region is: ");
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(StackVal)));
		PRINTNL();
		LOG_ERROR("No True bounty location...we're guessing here!");
		GET_VOLUME_CENTER(StackVal, &vVar0);
	}
	return StackVal, StackVal, vVar0;
}

bool Function_41() //Position: 0x1C4E / 7246
{
	return Function_42(StackVal, 1);
}

bool Function_42(var uParam0, int iParam1) //Position: 0x1C5D / 7261
{
	return (uParam0 && iParam1) == 0;
}

bool Function_43(int iParam0, bool bParam1) //Position: 0x1C6A / 7274
{
	int iVar0;
	
	iVar0 = Function_45(iParam0);
	if (!Function_44(iVar0))
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

bool Function_44(int iParam0) //Position: 0x1CA7 / 7335
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_45(int iParam0) //Position: 0x1CBE / 7358
{
	if (!Function_46(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_46(int iParam0) //Position: 0x1CD8 / 7384
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

vector3 Function_47(bool bParam0) //Position: 0x1CEE / 7406
{
	vector3 vVar0;
	
	vVar0.x = *bParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

struct<24> Function_48(bool bParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, int iParam7) //Position: 0x1D0D / 7437
{
	bool bVar0;
	struct<13> Var1;
	float fVar19;
	bool bVar20;
	bool bVar21;
	
	if (!fParam6 <= fParam5)
	{
		fVar19 = fParam6;
		fParam6 = fParam5;
		fParam5 = fVar19;
	}
	GET_CURVE_POINT(bParam0, fParam5, &Var1, 0);
	Function_47(&Var1);
	bVar20 = VDIST(Function_47(&Var1), vParam1);
	Var13 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
	while (Var1.f_12 >= fParam6 && !bVar0)
	{
		Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
		UNK_0x19D652F9(bParam0, FABS(bParam4), &Var7, &Var1);
		Function_47(&Var1);
		bVar21 = VDIST(Function_47(&Var1), vParam1);
		if (bVar21 > bVar20)
		{
			bVar20 = bVar21;
			Var13 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
		}
		if (Function_51(&Var1))
		{
			bVar0 = true;
		}
	}
	if (iParam7 < 1 && bParam4 < 1.0f)
	{
		UNK_0x19D652F9(bParam0, (bParam4 / 2.0f), &Var13, &Var1);
		UNK_0x19D652F9(bParam0, (-1.0f * (bParam4 / 2.0f)), &Var13, &Var7);
		return StackVal, StackVal, StackVal, StackVal, StackVal, Function_48(StackVal, StackVal, bParam0, vParam1, (bParam4 / 10.0f), Function_50(Var7.f_12, Var1.f_12), Function_49(Var7.f_12, Var1.f_12), (iParam7 - 1));
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var13;
}

var Function_49(int iParam0, int iParam1) //Position: 0x1DFB / 7675
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

float Function_50(int iParam0, int iParam1) //Position: 0x1E0E / 7694
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_51(int iParam0) //Position: 0x1E21 / 7713
{
	if (iParam0->f_12 > 0.001f || iParam0->f_12 < 0.999f)
	{
		return 1;
	}
	return 0;
}

void Function_52(var uParam0, int iParam1) //Position: 0x1E42 / 7746
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_53(var uParam0, int iParam1) //Position: 0x1E51 / 7761
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

var Function_54(bool bParam0) //Position: 0x1E64 / 7780
{
	bool bVar0;
	bool bVar1;
	char* cVar2[24];
	
	if (!IS_LAYOUTREF_VALID(Global_28841))
	{
		return "";
	}
	if (!Function_20(bParam0))
	{
		return "";
	}
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar1, 9);
	memcpy(&cVar2, Global_29155[bParam010].f_20, 6);
	ITERATE_ON_PARTIAL_NAME(bVar1, &cVar2);
	stradd(&cVar2, "v_coach_park", 24);
	bVar0 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar0))
	{
		if (STRINGS_ARE_EQUAL(&cVar2, GET_OBJECT_NAME(bVar0)))
		{
			DESTROY_ITERATOR(bVar1);
			return bVar0;
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	bVar0 = "";
	DESTROY_ITERATOR(bVar1);
	return bVar0;
}

var Function_55(vector3 vParam0, int iParam3, float fParam4, float fParam5, var uParam6, bool bParam7) //Position: 0x1EF3 / 7923
{
	vector3 vVar0;
	bool bVar3;
	struct<9> Var4;
	
	bVar10 = -1.0f;
	Function_36();
	*uParam6 = { StackVal, StackVal, Function_36() };
	bVar3 = START_CURVE_QUERY(Global_28841, vParam0, iParam3, fParam4, fParam5, Function_50(((fParam5 - fParam4) / 5.0f), 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar3) < 0)
	{
		Function_56(StackVal, StackVal, bVar3, vParam0, iParam3, fParam4, fParam5, Function_50(((fParam5 - fParam4) / 5.0f), 20.0f));
	}
	else
	{
		bVar11 = false;
		while (bVar11 < (GET_NUM_POINTS_IN_CURVE_QUERY(bVar3) - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(bVar3, bVar11, &vVar4);
			if (!bParam7 || !Function_51(&vVar4))
			{
				vVar0.x = vVar4.x;
				vVar0.f_4 = vVar4.y;
				vVar0.f_8 = vVar4.z;
				if (bVar10 > 0.0f || bVar10 < VDIST(vParam0, vVar0))
				{
					bVar10 = VDIST(vParam0, vVar0);
					*uParam6 = { StackVal, StackVal, vVar0 };
					uVar12 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar3, bVar11);
				}
			}
			bVar11++;
		}
	}
	UNK_0xDF93BD7C(bVar3);
	return uVar12;
}

void Function_56(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x1FD1 / 8145
{
	PRINTSTRING("Curve Query Report: NumCurves-");
	PRINTINT(GET_NUM_CURVES_IN_CURVE_QUERY(bParam0));
	PRINTSTRING(" NumPoints-");
	PRINTINT(GET_NUM_POINTS_IN_CURVE_QUERY(bParam0));
	PRINTSTRING(" SearchCenter-");
	PRINTVECTOR(vParam1);
	PRINTSTRING(" curveMask-");
	PRINTINT(bParam4);
	PRINTSTRING(" min/max/freq-");
	PRINTFLOAT(bParam5);
	PRINTSTRING("/");
	PRINTFLOAT(bParam6);
	PRINTSTRING("/");
	PRINTFLOAT(bParam7);
	PRINTNL();
	Function_57(bParam0);
}

void Function_57(bool bParam0) //Position: 0x2088 / 8328
{
	bool bVar0;
	struct<6> Var1;
	
	bVar0 = false;
	while (bVar0 <= GET_NUM_CURVES_IN_CURVE_QUERY(bParam0))
	{
		PRINTSTRING(GET_CURVE_NAME(GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bParam0, bVar0)));
		PRINTNL();
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= GET_NUM_POINTS_IN_CURVE_QUERY(bParam0))
	{
		GET_POINT_FROM_CURVE_QUERY(bParam0, bVar0, &Var1);
		Function_58(StackVal, StackVal, StackVal, StackVal, StackVal, Var1);
		PRINTSTRING(" from ");
		PRINTSTRING(GET_CURVE_NAME(GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bParam0, bVar0)));
		PRINTNL();
		bVar0++;
	}
	return;
}

void Function_58(struct<17> Param0) //Position: 0x20F7 / 8439
{
	Function_47(&Param0);
	PRINTVECTOR(Function_47(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
}

void Function_59() //Position: 0x212C / 8492
{
	float fVar0;
	
	if (iLocal_153)
	{
		if (!Function_71(StackVal, StackVal, StackVal, StackVal, vLocal_155, *(&Global_28210 + 24)))
		{
			Function_66(&Local_4);
			vLocal_155 = { StackVal, StackVal, *(&Global_28210 + 24) };
			iLocal_148 = 0;
			Function_64(&Local_4, iLocal_148);
		}
		if (StackVal || StackVal != 3 != 0)
		{
			Function_63(&Local_4);
			vLocal_155 = { 0.0f, 0.0f, 0.0f };
			iLocal_148 = Function_74(&Local_4, 0, 0);
			Function_64(&Local_4, iLocal_148);
			iLocal_153 = 0;
		}
	}
	else if (StackVal || StackVal != 2 != 1)
	{
		iLocal_153 = 1;
		Function_66(&Local_4);
		vLocal_155 = { StackVal, StackVal, *(&Global_28210 + 24) };
		iLocal_148 = 0;
		Function_64(&Local_4, iLocal_148);
	}
	fVar0 = GET_STICK_Y(GET_PLAYER_PADINDEX(Global_34573), 0, 1);
	if ((fLocal_143 + 0.3f) - Function_50(0.15f, ((0.15f * TO_FLOAT(iLocal_144)) / 5.0f))) > GET_CURRENT_GAME_TIME()
	{
		if (fVar0 > -0.5f || Function_62(14, 1, 0))
		{
			PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
			iLocal_148 = Function_61(&Local_4, iLocal_148);
			Function_64(&Local_4, iLocal_148);
			fLocal_143 = GET_CURRENT_GAME_TIME();
			bLocal_144++;
		}
		else if (fVar0 < 0.5f || Function_62(12, 1, 0))
		{
			PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
			iLocal_148 = Function_74(&Local_4, iLocal_148, 0);
			Function_64(&Local_4, iLocal_148);
			fLocal_143 = GET_CURRENT_GAME_TIME();
			bLocal_144++;
		}
		else
		{
			fLocal_143 = 0.0f;
			bLocal_144 = true;
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_151))
	{
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_151))
		{
			iLocal_127 = iLocal_148;
			iLocal_0 = 4;
			Function_60();
			return;
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_152))
	{
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_152))
		{
			TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
			return;
		}
	}
	return;
}

void Function_60() //Position: 0x22CB / 8907
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_151))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_151);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_150))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_150);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_149))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_149);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_152))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_152);
	}
	return;
}

int Function_61(var uParam0, int iParam1) //Position: 0x2305 / 8965
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam1 - 1);
	if (iVar0 <= 0)
	{
		iVar0 = (*uParam0 - 1);
	}
	while (!StackVal)
	{
		iVar0 = (iVar0 - 1);
		if (iVar0 > 0 && !bVar1)
		{
			iVar0 = (*uParam0 - 1);
			bVar1 = true;
		}
		else if (iVar0 > 0 && bVar1)
		{
			if (Function_20((*uParam0)[04]))
			{
			}
			return 0;
		}
	}
	if (Function_20((*uParam0)[iVar04]))
	{
	}
	return iVar0;
}

int Function_62(int iParam0, int iParam1, bool bParam2) //Position: 0x2376 / 9078
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = IS_BUTTON_DOWN(iVar0, iParam0, iParam1, bParam2);
	if (bVar1)
	{
		switch (iParam0)
		{
			case 0x0000000E:
			case 0x0000000C:
				if (IS_BUTTON_DOWN(iVar0, 15, iParam1, bParam2) || IS_BUTTON_DOWN(iVar0, 13, iParam1, bParam2))
				{
					return 0;
				}
				break;
			
			case 0x0000000F:
			case 0x0000000D:
				if (IS_BUTTON_DOWN(iVar0, 14, iParam1, bParam2) || IS_BUTTON_DOWN(iVar0, 12, iParam1, bParam2))
				{
					return 0;
				}
				break;
			}
	}
	return bVar1;
}

void Function_63(int iParam0) //Position: 0x23F3 / 9203
{
	iParam0[04]->f_4 = 0;
	iParam0[04]->f_8 = 0;
	(*iParam0)[04] = 4294967295;
	iParam0[04]->f_12 = 0;
	return;
}

void Function_64(int iParam0, int iParam1) //Position: 0x2417 / 9239
{
	char* cVar0[32];
	
	if (iLocal_153 && iParam1 != 0)
	{
		strcpy(&cVar0, "PASS_COACH_Waypoint", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_65((*iParam0)[iParam14]) };
	}
	SET_USE_CONTEXT_TEXT(bLocal_151, "PASS_CAMP_currentDest", &cVar0, 0, 0, 0);
	return;
}

struct<32> Function_65(int iParam0) //Position: 0x2474 / 9332
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_20(iParam0))
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

void Function_66(int iParam0) //Position: 0x2531 / 9521
{
	iParam0[04]->f_4 = 1;
	iParam0[04]->f_8 = ROUND(Function_70(Global_28210.f_12));
	(*iParam0)[04] = Function_69(StackVal, StackVal, *(&Global_28210 + 24), 1);
	iParam0[04]->f_12 = Function_67(StackVal, (*iParam0)[04]);
	return;
}

int Function_67(int iParam0, int iParam1) //Position: 0x2577 / 9591
{
	int iVar0;
	
	if (Function_68(3) > 5)
	{
		return 0;
	}
	iVar0 = 1;
	if (Function_20(iParam0))
	{
		if (StackVal == 5)
		{
			iVar0 = 5;
		}
	}
	return (iVar0 * ROUND((0.67f * POW((IntToFloat(iParam1) * 0.01f), 0.9f))));
}

int Function_68(int iParam0) //Position: 0x25BF / 9663
{
	if (Function_10() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

var Function_69(vector3 vParam0, bool bParam3) //Position: 0x25E7 / 9703
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 4294967295;
	while (iVar1 > 146 && !bVar0)
	{
		if (StackVal == 2)
		{
			if (IS_VOLUME_VALID(StackVal))
			{
				if (IS_POINT_IN_VOLUME(StackVal, vParam0))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (bParam3)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

var Function_70(bool bParam0) //Position: 0x2652 / 9810
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(bParam0))
	{
		bVar1 = (bVar1 + CURVE_CALCULATE_DISTANCE_BY_STEP_SIZE(GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam0)), 0.0f, 1.0f, 50.0f));
		bVar0++;
	}
	return bVar1;
}

bool Function_71(vector3 vParam0, vector3 vParam3) //Position: 0x2689 / 9865
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_72(var uParam0, int iParam1) //Position: 0x26B6 / 9910
{
	struct<8> Var0;
	
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_152))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_152);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_150))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_150);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_149))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_149);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_151))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_151);
	}
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_65((*uParam0)[iParam14]) };
	if (iLocal_128 >= 1)
	{
		bLocal_149 = ADD_SCRIPT_USE_CONTEXT_STICK("PASS_COACH_PreviousDest", 10, 2, 0, 0, 0, 0, 4294967295, 0);
		bLocal_150 = ADD_SCRIPT_USE_CONTEXT_STICK("PASS_COACH_NextDest", 10, 3, 0, 0, 0, 0, 4294967295, 0);
	}
	if (!Function_73() || !IS_PS3())
	{
		bLocal_152 = ADD_SCRIPT_USE_CONTEXT("PASS_CAMP_Exit", 10, 5, Function_6(), Function_6(), Function_6(), Function_6(), 4294967295, "HUD_MENU_BACK_MASTER");
	}
	else
	{
		bLocal_152 = ADD_SCRIPT_USE_CONTEXT("PASS_CAMP_Exit", 10, 6, Function_6(), Function_6(), Function_6(), Function_6(), 4294967295, "HUD_MENU_BACK_MASTER");
	}
	if (!Function_73() || !IS_PS3())
	{
		bLocal_151 = ADD_SCRIPT_USE_CONTEXT(&Var0, 10, 6, Function_6(), Function_6(), Function_6(), Function_6(), 4294967295, "HUD_MENU_SELECT_MASTER");
	}
	else
	{
		bLocal_151 = ADD_SCRIPT_USE_CONTEXT(&Var0, 10, 5, Function_6(), Function_6(), Function_6(), Function_6(), 4294967295, "HUD_MENU_SELECT_MASTER");
	}
	Function_64(uParam0, iParam1);
	return;
}

bool Function_73() //Position: 0x284F / 10319
{
	return HAS_STRING_TABLE_LOADED("jp");
}

int Function_74(int iParam0, int iParam1, bool bParam2) //Position: 0x285D / 10333
{
	int iVar0;
	bool bVar1;
	
	if (bParam2)
	{
		return 0;
	}
	iVar0 = iParam1 + 1;
	if (iVar0 >= (*iParam0 - 1))
	{
		iVar0 = 0;
	}
	while (!StackVal)
	{
		iVar0++;
		if (iVar0 < (*iParam0 - 1) && !bVar1)
		{
			iVar0 = 0;
			bVar1 = true;
		}
		else if (iVar0 < (*iParam0 - 1) && bVar1)
		{
			if (Function_20((*iParam0)[04]))
			{
			}
			return 0;
		}
	}
	if (Function_20((*iParam0)[iVar04]))
	{
	}
	return iVar0;
}

void Function_75(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x28D9 / 10457
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_76(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_76(int iParam0) //Position: 0x2954 / 10580
{
	char* cVar0[16];
	
	if (!Function_77())
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

bool Function_77() //Position: 0x2993 / 10643
{
	if (Function_42(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_78(var uParam0, var uParam1, bool bParam2) //Position: 0x29AE / 10670
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 500;
	if (!bParam2)
	{
		iVar3 = 150;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if ((StackVal && Function_20((*uParam0)[iVar04])) || (uParam1 && iVar0 != 0))
		{
			if (bParam2)
			{
				uParam0[iVar04]->f_12 = Function_67(StackVal, (*uParam0)[iVar04]);
			}
			else
			{
				uParam0[iVar04]->f_12 = 0;
			}
			if (Function_20((*uParam0)[iVar04]) && !iVar0 != 0)
			{
				if (Function_22(&(Global_29008[(*uParam0)[iVar04]]), 4096) || !Global_3365)
				{
					iVar2++;
					if (Function_79() > uParam0[iVar04]->f_12)
					{
						if (StackVal >= iVar3)
						{
							bVar1++;
						}
						else
						{
							uParam0[iVar04]->f_4 = 0;
						}
					}
					else
					{
						uParam0[iVar04]->f_4 = 0;
					}
				}
				else
				{
					uParam0[iVar04]->f_4 = 0;
				}
			}
			else if (uParam1 && iVar0 != 0)
			{
				if (Function_79() > uParam0[iVar04]->f_12)
				{
					if (StackVal >= iVar3)
					{
						bVar1++;
					}
					else
					{
						uParam0[iVar04]->f_4 = 0;
					}
				}
				else
				{
					uParam0[iVar04]->f_4 = 0;
				}
			}
			else
			{
				uParam0[iVar04]->f_4 = 0;
			}
		}
		else
		{
			uParam0[iVar04]->f_4 = 0;
		}
		iVar0++;
	}
	if (iVar2 == 0)
	{
		bVar1 = 4294967295;
	}
	return bVar1;
}

int Function_79() //Position: 0x2AFD / 11005
{
	return Function_80(0);
}

int Function_80(int iParam0) //Position: 0x2B07 / 11015
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

bool Function_81(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x2B48 / 11080
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	if (Global_30842[52])
	{
		fVar2 = 10000.0f;
	}
	else
	{
		fVar2 = 1500.0f;
	}
	fVar3 = GET_PROFILE_TIME();
	switch (*uParam1)
	{
		case 0x00000000:
			iVar1 = 0;
			while (iVar1 <= *uParam0)
			{
				(*uParam0)[iVar14] = 4294967295;
				uParam0[iVar14]->f_4 = 0;
				uParam0[iVar14]->f_8 = 99999999;
				iVar1++;
			}
			if (bParam3)
			{
				if (bParam4)
				{
					uParam0[04]->f_4 = 1;
					uParam0[04]->f_8 = ROUND(Function_70(Global_28235.f_12));
					(*uParam0)[04] = Function_69(StackVal, StackVal, *(&Global_28235 + 24), 1);
				}
				else
				{
					uParam0[04]->f_4 = 1;
					uParam0[04]->f_8 = ROUND(Function_70(Global_28210.f_12));
					(*uParam0)[04] = Function_69(StackVal, StackVal, *(&Global_28210 + 24), 1);
				}
			}
			*uParam1 = 1;
			break;
		
		case 0x00000001:
			if (((Global_29004 != 0 || Global_29004 != 2) || Function_43(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30640 - 1))
				{
					if (StackVal && !(StackVal && !(Function_22(&(Global_29008[Global_30640[iVar0]]), 32768) && (Function_22(&(Global_29008[Global_30640[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_82(uParam0, Global_30640[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30640 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 2;
			break;
		
		case 0x00000002:
			if (((Global_29004 != 0 || Global_29004 != 2) || Function_43(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30668 - 1))
				{
					if (StackVal && !(StackVal && !(Function_22(&(Global_29008[Global_30668[iVar0]]), 32768) && (Function_22(&(Global_29008[Global_30668[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_82(uParam0, Global_30668[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30668 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 3;
			break;
		
		case 0x00000003:
			if (((Global_29004 != 0 || Global_29004 != 2) || Function_43(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30658 - 1))
				{
					if (StackVal && !(StackVal && !(Function_22(&(Global_29008[Global_30658[iVar0]]), 32768) && (Function_22(&(Global_29008[Global_30658[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_82(uParam0, Global_30658[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30658 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 4;
			break;
		
		case 0x00000004:
			if (((Global_29004 != 0 || Global_29004 != 2) || Function_43(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30679 - 1))
				{
					if (StackVal && !(StackVal && !(Function_22(&(Global_29008[Global_30679[iVar0]]), 32768) && (Function_22(&(Global_29008[Global_30679[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_82(uParam0, Global_30679[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30679 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 5;
			break;
		
		case 0x00000005:
			if (((Global_29004 != 0 || Global_29004 != 2) || Function_43(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30723 - 1))
				{
					if (StackVal && !(StackVal && !(Function_22(&(Global_29008[Global_30723[iVar0]]), 32768) && (Function_22(&(Global_29008[Global_30723[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_82(uParam0, Global_30723[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30723 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 6;
			break;
		
		case 0x00000006:
			if (((Global_29004 != 0 || Global_29004 != 2) || Function_43(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30717 - 1))
				{
					if (StackVal && !(StackVal && !(Function_22(&(Global_29008[Global_30717[iVar0]]), 32768) && (Function_22(&(Global_29008[Global_30717[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_82(uParam0, Global_30717[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30717 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 7;
			break;
		
		case 0x00000007:
			if ((Global_29004 != 1 || Function_43(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30685 - 1))
				{
					if (StackVal && !(StackVal && !(Function_22(&(Global_29008[Global_30685[iVar0]]), 32768) && (Function_22(&(Global_29008[Global_30685[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_82(uParam0, Global_30685[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30685 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 8;
			break;
		
		case 0x00000008:
			if ((Global_29004 != 1 || Function_43(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30693 - 1))
				{
					if (StackVal && !(StackVal && !(Function_22(&(Global_29008[Global_30693[iVar0]]), 32768) && (Function_22(&(Global_29008[Global_30693[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_82(uParam0, Global_30693[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30693 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 9;
			break;
		
		case 0x00000009:
			if ((Global_29004 != 1 || Function_43(48, 0)) || !Global_3365)
			{
				iVar0 = *uParam2;
				while (iVar0 < (Global_30707 - 1))
				{
					if (StackVal && !(StackVal && !(Function_22(&(Global_29008[Global_30707[iVar0]]), 32768) && (Function_22(&(Global_29008[Global_30707[iVar0]]), 4096) || !Global_3365)) != 5) != 6)
					{
						Function_82(uParam0, Global_30707[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_30707 - 1))
						{
							*uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			*uParam1 = 10;
			break;
		
		case 0x0000000A:
			if (Global_30842[52])
			{
				iVar0 = 0;
				while (iVar0 <= *uParam0)
				{
					if (StackVal)
					{
						if (Function_20((*uParam0)[iVar04]) && !iVar0 != 0)
						{
						}
						else if (iVar0 == 0)
						{
						}
					}
					iVar0++;
				}
			}
			*uParam2 = 0;
			return 1;
			break;
	}
	return 0;
}

void Function_82(var uParam0, int iParam1) //Position: 0x3327 / 13095
{
	var uVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	GET_OBJECT_POSITION(StackVal, &uVar0);
	iVar3 = Function_83(iParam1);
	iVar4 = 1;
	while (StackVal && (StackVal > iVar3 && iVar4 > (*uParam0 - 1)))
	{
		iVar4++;
	}
	iVar5 = iVar4;
	iVar6 = iParam1;
	iVar8 = iVar3;
	while (StackVal && iVar5 > (*uParam0 - 1))
	{
		iVar9 = StackVal;
		iVar7 = (*uParam0)[iVar54];
		uParam0[iVar54]->f_8 = iVar8;
		(*uParam0)[iVar54] = iVar6;
		uParam0[iVar54]->f_4 = 1;
		iVar8 = iVar9;
		iVar6 = iVar7;
		iVar5++;
	}
	if (!StackVal)
	{
		uParam0[iVar54]->f_8 = iVar8;
		(*uParam0)[iVar54] = iVar6;
		uParam0[iVar54]->f_4 = 1;
	}
	return;
}

int Function_83(int iParam0) //Position: 0x33F4 / 13300
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(StackVal, &vVar0);
	return Function_84(StackVal, StackVal, vVar0, 0);
}

int Function_84(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x3411 / 13329
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	
	iVar4 = 16;
	if (bParam3)
	{
		iVar4 = 393264;
	}
	bVar5 = CREATE_OBJECTSET_IN_LAYOUT("tempPathSet", Global_28841, 36, 1);
	if (FIND_TRAFFIC_PATH(Global_28841, bVar5, &Global_34574, &uParam0, iVar4, &uVar3))
	{
		bVar6 = ROUND(Function_70(bVar5));
		Function_1(bVar5);
		DESTROY_OBJECTSET(bVar5);
		return bVar6;
	}
	Function_1(bVar5);
	DESTROY_OBJECTSET(bVar5);
	return ROUND(VDIST(Global_34574, vVar0));
}

