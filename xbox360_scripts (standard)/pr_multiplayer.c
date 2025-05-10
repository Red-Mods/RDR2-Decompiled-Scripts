//Decompiled with MagicRDR v1.0
//Function Count : 176
//Statics Count : 441
//Natives Count : 189
//Parameters Count : 0

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
	float fLocal_10 = 0.0f;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	bool bLocal_20 = false;
	bool bLocal_21 = false;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	bool bLocal_24 = false;
	bool bLocal_25 = false;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	struct<1373> Local_29 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	float fVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	float fVar22;
	bool bVar23;
	var uVar24;
	bool bVar27;
	
	fLocal_10 = 1.0f;
	iLocal_19 = 255;
	bLocal_20 = 125;
	bLocal_21 = false;
	iLocal_22 = 0;
	iLocal_23 = 255;
	bLocal_24 = 170;
	bLocal_25 = 75;
	iLocal_26 = 0;
	iLocal_28 = 0;
	Local_29.f_44 = 0;
	iVar2 = 4294967295;
	bVar3 = false;
	iVar12 = 0;
	bVar13 = false;
	fVar18 = (TO_FLOAT(250) / 1000.0f);
	fVar19 = 0.0f;
	Local_29.f_88 = "";
	Local_29.f_1212 = Function_174("PR_MULTIPLAYER_NET_EVENTS");
	Function_173();
	REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_376, 65);
	Function_171();
	Function_165();
	NET_LOG(true, "GAME INVITE", "Ready For Invite Sent", 0, 0, false, 0);
	UI_SEND_EVENT("net.readyForInvite");
	WAIT(false);
	bVar23 = false;
	bVar27 = 1000;
	if (Function_164("netRandomSessioning"))
	{
		bVar23 = Function_163("netRandomSessioning");
		if (bVar23 < 2)
		{
			bVar23 = 3;
		}
	}
	while (!IS_EXITFLAG_SET())
	{
		if (Local_29.f_44 >= 1)
		{
			Function_162();
		}
		if (!Function_160(1))
		{
			Local_29.f_44 = 11;
		}
		switch (Local_29.f_44)
		{
			case 0x00000000:
				Local_29.f_84 = 0;
				Function_159(&Local_29 + 84, 1);
				Local_29.f_44 = 1;
			
			case 0x00000001:
				Function_158(&Local_29 + 128);
				Function_157();
				Local_29.f_44 = 2;
			
			case 0x00000002:
				Local_29.f_44 = 3;
				break;
			
			case 0x00000003:
				iVar0 = 4294967295;
				iVar1 = 4294967295;
				Local_29.f_108 = 4294967295;
				Local_29.f_124 = 4294967295;
				Local_29.f_112 = 4294967295;
				Local_29.f_120 = 4294967295;
				Local_29.f_104 = 4294967295;
				Local_29.f_116 = 4294967295;
				Local_29.f_68 = 4294967295;
				Local_29.f_72 = 4294967295;
				Local_29.f_76 = 4294967295;
				iVar2 = 4294967295;
				Local_29.f_1372 = 4294967295;
				(&Local_29 + 1372)->f_8 = 4294967295;
				Function_156();
				Local_29.f_100 = 1;
				Function_155(65536);
				Function_154();
				Function_153();
				Function_152(&Global_79349 + 44, 64);
				Function_159(&Local_29 + 84, 1);
				Function_151(&Local_29 + 84, 8334);
				Function_155(32768);
				bVar3 = false;
				bVar13 = false;
				Local_29.f_44 = 4;
			
			case 0x00000004:
				Function_150();
				if (Local_29.f_100)
				{
					if (NET_IS_IN_SESSION())
					{
						NET_PLAYER_BARKER_RESET(GET_LOCAL_SLOT(), 4294967295, 4294967295, 3212836864);
						Local_29.f_100 = 0;
					}
				}
				if (Function_160(32768) && !Function_149())
				{
					iVar21 = Function_148();
					if (Local_29.f_80 != iVar21)
					{
						Local_29.f_80 = iVar21;
						Function_147();
					}
					Function_121(18184, 17676, 17542);
				}
				if (Function_97(&Local_29 + 128, &iVar20, Local_29.f_124, Function_120(), !Function_160(32768)))
				{
					if (iVar20 != 4294967295)
					{
						if (Function_96(iVar20))
						{
							switch ((&Global_78617 + 196[iVar2010])->f_36)
							{
								case 0x00000048:
									if (Global_3403 || Function_95(131072, 1))
									{
										Function_94("net_help_wanted_no_teleport", 5.0f, 1, 0, 2, 1, 0);
									}
									else
									{
										Function_91();
										PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
									}
									break;
								
								case 0x00000049:
									Function_90();
									break;
								
								default:
									break;
							}
						}
						else if (!Function_160(32768))
						{
							Local_29.f_108 = iVar20;
							Local_29.f_124 = iVar20;
							if (NET_GET_POSSE_COUNT() >= 1)
							{
								if (!NET_IS_POSSE_LEADER())
								{
									Local_29.f_76 = Local_29.f_108;
									Local_29.f_108 = 4294967295;
									Local_29.f_124 = 4294967295;
									UI_ENTER("MP_BarkerPosseLeave");
								}
								else
								{
									PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
								}
							}
							else
							{
								PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
							}
						}
					}
				}
				if (Local_29.f_76 != 4294967295)
				{
					if (DECOR_CHECK_EXIST(Function_89(), "BarkerPosseLeave"))
					{
						DECOR_REMOVE(Function_89(), "BarkerPosseLeave");
						NET_POSSE_REMOVE_GAMER(GET_LOCAL_SLOT());
						Local_29.f_108 = Local_29.f_76;
						Local_29.f_124 = Local_29.f_76;
						Local_29.f_76 = 4294967295;
					}
					else if (!UI_ISACTIVE("MP_BarkerPosseLeave"))
					{
						Local_29.f_76 = 4294967295;
					}
				}
				if (bVar23 != 0)
				{
					if (UI_ISFOCUSED("HudSceneOnline") && !UI_ISACTIVE("HudMPNoFun"))
					{
						if (Function_88(&uVar24))
						{
							if (Function_83(&uVar24, TO_FLOAT(bVar27)))
							{
								if (!Function_165())
								{
									bVar3 = true;
								}
							}
						}
						else
						{
							Function_81(&uVar24);
							fVar22 = 0.0f;
							bVar27 = RAND_INT_RANGE((bVar23 / 4), bVar23);
						}
					}
				}
				Local_29.f_104 = NET_GET_AND_CLEAR_GAME_MODE_REQUEST();
				iVar1 = NET_GET_AND_CLEAR_PLAYLIST_REQUEST();
				if (!Function_160(32768))
				{
					Local_29.f_120 = Function_65(&Local_29 + 108);
				}
				if (Function_64(Local_29.f_84, 2097152))
				{
					Function_62();
					Function_151(&Local_29 + 84, 2097152);
				}
				iVar12 = 0;
				if (Function_61(&Local_29 + 1212, &iVar12))
				{
					if (iVar12 == 0 && iVar12 == 1)
					{
						Local_29.f_116 = iVar12;
						NET_LOG(true, "GAME INVITE", "Received Game Invite event in PR_multi.sc for Game mode: %s", I2STR(Local_29.f_116), 0, false, 0);
					}
					else
					{
						NET_LOG(true, "GAME INVITE", "Received NON-LOBBY Game Invite event in PR_multi.sc", 0, 0, false, 0);
					}
				}
				else if (Function_60())
				{
					NET_LOG(true, "Private Session", "Received update from Host", 0, 0, false, 0);
					if ((&Global_78578 + 112)->f_32)
					{
						if (Function_59((&Global_78578 + 112)->f_16))
						{
							if (!Function_160(16))
							{
								NET_LOG(true, "Private Session", "Need to launch lobby", 0, 0, false, 0);
								bVar13 = true;
							}
						}
						else
						{
							NET_LOG(true, "Private Session", "Can't follow private host into playlist we don't have", 0, 0, false, 0);
							UI_SEND_EVENT("net.InviteFailed_NoPlaylist");
						}
					}
					else if (Function_160(16))
					{
						NET_LOG(true, "Private Session", "Need to leave lobby", 0, 0, false, 0);
						bVar3 = true;
					}
					*(&Local_29 + 4) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78578 + 112) };
				}
				if (NET_GET_AND_CLEAR_QUIT_GAME_REQUEST())
				{
					bVar3 = true;
				}
				if (Local_29.f_116 != 4294967295)
				{
					if (Function_59(Local_29.f_116))
					{
						iVar1 = Local_29.f_116;
						iVar2 = 2;
					}
					else
					{
						iVar0 = Local_29.f_116;
						iVar2 = 2;
					}
				}
				else if (bVar13)
				{
					iVar2 = 3;
				}
				else if (Local_29.f_120 == 4294967295 && !Function_160(32768))
				{
					(&Local_29 + 1372)->f_8 = Local_29.f_120;
					Local_29.f_1360 = STRING_TO_HASH(GET_SLOT_NAME(StackVal));
					Local_29.f_1364 = Local_376[Local_29.f_1204];
					Local_29.f_124 = Local_29.f_1364;
					Function_58(Local_29.f_1364);
					Function_57();
					Function_51();
				}
				else if (Local_29.f_108 == 4294967295 && !Function_160(32768))
				{
					(&Local_29 + 1372)->f_8 = 4294967295;
					Function_147();
					Local_29.f_124 = Local_29.f_108;
					Function_49(Local_29.f_108);
					Function_51();
					Function_48(GET_LOCAL_SLOT());
				}
				else if (Local_29.f_104 != 4294967295)
				{
					iVar0 = Local_29.f_104;
					iVar2 = 0;
				}
				else if (iVar1 != 4294967295)
				{
					iVar2 = 0;
				}
				else if (Global_79960 != 4294967295)
				{
					if (Global_79960 == 4294967294)
					{
						if (NET_GET_PLAYMODE() == 1)
						{
							NET_SESSION_LEAVE_SESSION();
						}
						iVar0 = 4294967294;
					}
					else
					{
						iVar0 = Global_79960;
						iVar2 = 0;
					}
					Global_79960 = 4294967295;
				}
				else if (Global_79961 != 4294967295)
				{
					if (Function_59(Global_79961))
					{
						iVar1 = Global_79961;
						iVar2 = 0;
					}
					Global_79961 = 4294967295;
				}
				if (iVar12 == 1)
				{
					NET_LOG(true, "PR_MULTIPLAYER", "Invite to FreeMode Received", 0, 0, false, 0);
					if (Function_160(16))
					{
						NET_LOG(true, "PR_MULTIPLAYER", "---------------Requesting Lobby Disable", 0, 0, false, 0);
						Function_47();
					}
					else
					{
						Local_29.f_44 = 5;
					}
					Function_62();
				}
				else if ((iVar0 == 4294967295 || iVar1 == 4294967295) || bVar13)
				{
					Function_151(&Local_29 + 84, 1);
					if (iVar0 != 4294967294)
					{
						if (iVar2 == 4294967295)
						{
						}
						Function_41(&Local_29 + 128, 1);
						Function_39(128);
					}
					Function_62();
					Local_29.f_44 = 5;
				}
				else if (bVar3)
				{
					Function_47();
					bVar3 = false;
					Function_62();
				}
				else if (Function_160(32768))
				{
					if (Function_24(&Local_29 + 112))
					{
						if (Local_29.f_112 == 4294967295)
						{
							iVar0 = Local_29.f_108;
							iVar2 = 4;
						}
						else
						{
							iVar2 = 0;
							iVar0 = Local_29.f_1364;
						}
						Local_29.f_44 = 5;
					}
				}
				else if (Local_29.f_44 == 4)
				{
					if (!IS_SCRIPT_VALID(Global_79344))
					{
						Function_22();
					}
				}
				Function_150();
				Function_21(Local_29.f_1212);
				break;
			
			case 0x00000005:
				Function_156();
				Function_57();
				Function_20();
				if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
				}
				Function_155(65536);
				if (Function_19() && iVar0 == 4294967294)
				{
					TERMINATE_SCRIPT(Local_29);
				}
				else if (IS_SCRIPT_VALID(Global_79344))
				{
					Function_47();
				}
				else if (IS_SCRIPT_VALID(Global_78617.f_20))
				{
					TERMINATE_SCRIPT(Global_78617.f_20);
				}
				else if (IS_SCRIPT_VALID(Global_78617.f_28))
				{
					TERMINATE_SCRIPT(Global_78617.f_28);
				}
				else if (!Function_18())
				{
				}
				else if (bVar13)
				{
					Local_29.f_44 = 9;
				}
				else if (iVar0 == 4294967294)
				{
					Global_78617.f_20 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/support/MP_ActorPicker", 0);
					Local_29.f_44 = 3;
				}
				else if (iVar0 != 4294967295)
				{
					Function_39(128);
					if (Local_29.f_112 == 4294967295 || Local_29.f_108 == 4294967295)
					{
						Local_29.f_44 = 7;
					}
					else
					{
						Local_29.f_44 = 6;
					}
				}
				else if (iVar1 != 4294967295)
				{
					Local_29.f_44 = 8;
				}
				else
				{
					Function_22();
					Local_29.f_44 = 3;
				}
				break;
			
			case 0x00000007:
				if (iVar2 == 4294967295)
				{
				}
				if (Function_16(iVar0))
				{
					Function_15(StackVal, StackVal, StackVal, (&Global_78617 + 196[iVar010])->f_36, *(&Global_78617 + 196[iVar010] + 20), iVar2, Local_29.f_112);
				}
				else if ((&Global_78617 + 196[iVar010])->f_16 != 4294967295)
				{
					Function_8((&Global_78617 + 196[iVar010])->f_36, (&Global_78617 + 196[iVar010])->f_16, iVar2, Local_29.f_112);
				}
				else
				{
					Function_8(StackVal, (&Global_78617 + 196[iVar010])->f_36, iVar2, Local_29.f_112);
				}
				Local_29.f_44 = 10;
				break;
			
			case 0x00000006:
				if (iVar2 == 4294967295)
				{
				}
				Function_6(iVar0, iVar2);
				Local_29.f_44 = 10;
				break;
			
			case 0x00000008:
				if (iVar2 == 4294967295)
				{
				}
				Function_5(iVar1, iVar2);
				Local_29.f_44 = 10;
				break;
			
			case 0x00000009:
				if (iVar2 == 4294967295)
				{
				}
				Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78578 + 112) };
				Var4.f_28 = iVar2;
				Function_4(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var4);
				Local_29.f_44 = 10;
				break;
			
			case 0x0000000A:
				if (IS_SCRIPT_VALID(Global_79344))
				{
					Local_29.f_44 = 3;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(false);
	}
	Function_21(Local_29.f_1212);
	Function_57();
	Function_20();
	Function_2(&Local_29 + 128);
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	Function_1(Local_29.f_1212);
	TERMINATE_THIS_SCRIPT();
	return;
}

int Function_1(bool bParam0) //Position: 0xBEF / 3055
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

void Function_2(bool bParam0) //Position: 0xC05 / 3077
{
	Function_41(bParam0, 0);
	Function_3(bParam0);
	if (IS_LAYOUTREF_VALID(bParam0->f_12))
	{
		DESTROY_LAYOUT(bParam0->f_12);
	}
	bParam0->f_12 = "";
	return;
}

void Function_3(bool bParam0) //Position: 0xC2D / 3117
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	return;
}

void Function_4(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) //Position: 0xC44 / 3140
{
	Global_79344 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/multiplayer/rotations/gametype_lobby", &uParam0, 8, 0);
}

void Function_5(var uParam0, int iParam1) //Position: 0xC89 / 3209
{
	struct<8> Var0;
	
	Var0.f_16 = uParam0;
	itos(&Var0, 4294967295, 16);
	Var0.f_28 = iParam1;
	Var0.f_24 = 0;
	Function_4(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
	return;
}

void Function_6(int iParam0, int iParam1) //Position: 0xCAD / 3245
{
	struct<8> Var0;
	struct<4> Var8;
	
	Function_7(iParam0, &Var8);
	Var0 = { StackVal, StackVal, StackVal, Var8 };
	Var0.f_16 = Global_79963[iParam029].f_16;
	Var0.f_28 = iParam1;
	Var0.f_24 = 0;
	Function_4(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
	return;
}

int Function_7(int iParam0, int iParam1) //Position: 0xCE4 / 3300
{
	*iParam1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79963[iParam029] };
	return 1;
}

void Function_8(var uParam0, var uParam1, int iParam2, var uParam3) //Position: 0xCFB / 3323
{
	Function_15(StackVal, StackVal, StackVal, uParam0, Function_9(uParam0, uParam1), iParam2, uParam3);
}

struct<16> Function_9(int iParam0, int iParam1) //Position: 0xD13 / 3347
{
	struct<4> Var0;
	int iVar4;
	int iVar172[36];
	int iVar209;
	int iVar210;
	int iVar211;
	struct<41> Var212;
	
	strcpy(&Var0, "", 16);
	*(&iVar4 + 76) = 36;
	if (!Function_14(iParam0, &iVar4))
	{
		return StackVal, StackVal, StackVal, Var0;
	}
	iVar210 = 0;
	iVar211 = Function_13(&iVar4);
	iVar209 = 0;
	while (iVar209 <= iVar211)
	{
		Var0 = { StackVal, StackVal, StackVal, Function_12(&iVar4, iVar209) };
		if (Function_10(&Var0, &Var212, 1))
		{
			if (Var212.f_40 == iParam1)
			{
				iVar172[iVar210] = iVar209;
				iVar210++;
			}
		}
		iVar209++;
	}
	if (iVar210 == 0)
	{
		return StackVal, StackVal, StackVal, Function_12(&iVar4, (RAND_INT_RANGE(false, 10000) % iVar211));
	}
	return StackVal, StackVal, StackVal, Function_12(&iVar4, iVar172[(RAND_INT_RANGE(false, 10000) % iVar210)]);
}

bool Function_10(bool bParam0, int iParam1, bool bParam2) //Position: 0xDB9 / 3513
{
	char* cVar0[64];
	
	if (UNK_0xFAD5A270(cParam0, iParam1))
	{
		if (bParam2)
		{
			if (iParam1->f_40 == 4294967294)
			{
				iParam1->f_40 = Function_11(StackVal, StackVal, *(iParam1 + 28), 0, 1, 1);
				if (!GAME_INSTANCE_SET_REGION(bParam0, iParam1->f_40))
				{
					strcpy(&cVar0, "Unable to set region for ", 64);
					stradd(&cVar0, bParam0, 64);
				}
			}
		}
		return 1;
	}
	return 0;
}

var Function_11(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xE1E / 3614
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

struct<16> Function_12(int iParam0, int iParam1) //Position: 0xEB9 / 3769
{
	char* cVar0[16];
	
	strcpy(&cVar0, "", 16);
	if (iParam1 <= Function_13(iParam0) || iParam1 > 0)
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, *(iParam0 + 76[iParam14]);
}

int Function_13(int iParam0) //Position: 0xEE9 / 3817
{
	return iParam0->f_72;
}

bool Function_14(int iParam0, int iParam1) //Position: 0xEF3 / 3827
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (Global_0[iVar0168].f_64 == iParam0)
		{
			*iParam1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_0[iVar0168] };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_15(var uParam0, struct<4> Param1, var uParam5, var uParam6) //Position: 0xF2C / 3884
{
	struct<8> Var0;
	
	Var0.f_16 = uParam0;
	Var0 = { StackVal, StackVal, StackVal, Param1 };
	Var0.f_28 = uParam5;
	Var0.f_20 = uParam6;
	Var0.f_24 = 1;
	Function_4(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
}

bool Function_16(int iParam0) //Position: 0xF5B / 3931
{
	if (iParam0 > 0 || iParam0 <= (&Global_78617 + 196)->f_2404)
	{
		return 0;
	}
	return Function_17(&Global_78617 + 196[iParam010]);
}

bool Function_17(bool bParam0) //Position: 0xF84 / 3972
{
	return bParam0->f_16 != 4294967294;
}

bool Function_18() //Position: 0xF92 / 3986
{
	return (NET_IS_CONNECTED_FOR_PLAY() && NET_IS_MANAGER_INITIALIZED());
}

bool Function_19() //Position: 0xF9F / 3999
{
	return IS_SCRIPT_VALID(Local_29);
}

void Function_20() //Position: 0xFAA / 4010
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_29.f_1220))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Local_29.f_1220);
	}
	return;
}

void Function_21(bool bParam0) //Position: 0xFC3 / 4035
{
	if (IS_OBJECTSET_VALID(bParam0))
	{
		DISBAND_OBJECTSET(bParam0);
	}
	return;
}

void Function_22() //Position: 0xFD6 / 4054
{
	struct<4> Var0;
	struct<21> Var4;
	
	if (!Function_19() && !IS_SCRIPT_VALID(Global_78617.f_20))
	{
		if (!Function_64(Local_29.f_84, 8192))
		{
			Var0 = { StackVal, StackVal, StackVal, Function_23() };
			if (Function_10(&Var0, &Var4, 0))
			{
				Function_159(&Local_29 + 84, 8192);
				Local_29 = LAUNCH_NEW_SCRIPT(GET_ASSET_NAME(Var4.f_20, 4), 0);
			}
		}
	}
	else if (IS_SCRIPT_VALID(Local_29))
	{
		Function_151(&Local_29 + 84, 8192);
	}
	return;
}

struct<16> Function_23() //Position: 0x103E / 4158
{
	return StackVal, StackVal, StackVal, *(&Global_78617 + 32);
}

bool Function_24(int iParam0) //Position: 0x104E / 4174
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	int iVar6;
	
	*iParam0 = 4294967295;
	bVar0 = StackVal != 4294967295;
	bVar1 = false;
	if (Function_38())
	{
		Function_62();
		return 0;
	}
	bVar3 = (NET_IS_POSSE_LEADER() || Function_37());
	if (!bVar0)
	{
		if (IS_SLOT_VALID(StackVal))
		{
			if (StackVal == STRING_TO_HASH(GET_SLOT_NAME(Local_29.f_1360)))
			{
				if (Local_376[StackVal4] != 4294967295)
				{
					if (StackVal == Local_376[(&Local_29 + 1372)->f_124].f_12)
					{
						(&Local_29 + 1372)->f_12 = Local_376[StackVal4].f_12;
						NET_PLAYER_BARKER_RESET(StackVal, StackVal, Function_36((&Global_78617 + 196[Local_376[Local_376[StackVal4]4]10])->f_36), (&Local_29 + 1372)->f_12);
						NET_GAMER_BARKER_ACCEPT(StackVal);
					}
				}
				else
				{
					Function_62();
					return 0;
				}
			}
		}
		if (IS_OBJECTSET_VALID(Local_29.f_1212))
		{
			if (Function_35(Local_29.f_1212, 100, &bVar4, 1))
			{
				if (DECOR_GET_INT_VERBOSE(bVar4, "hostID", iParam0))
				{
					if (bVar3)
					{
						bVar1 = true;
					}
					else
					{
						*iParam0 = 4294967295;
					}
				}
			}
		}
	}
	fVar2 = (((&Local_29 + 1372)->f_12 - NET_GET_NET_TIME()) - 3.0f);
	if ((StackVal && !IS_SLOT_VALID(!bVar0)) && fVar2 < 3.0f)
	{
		Function_62();
		return 0;
	}
	if (bVar1)
	{
		if (Function_64(Local_29.f_84, 16))
		{
			Function_151(&Local_29 + 84, 16);
			Function_34();
		}
		return 1;
	}
	if (bVar0)
	{
		if (fVar2 < 3.0f)
		{
			if (!Function_64(Local_29.f_84, 128))
			{
				if (Function_32())
				{
					(&Local_29 + 1372)->f_12 = (NET_GET_NET_TIME() + 3.0f);
					fVar2 = 3.0f;
				}
				else if (Function_31("net_barker_start_now"))
				{
					(&Local_29 + 1372)->f_12 = (NET_GET_NET_TIME() + 3.0f);
					fVar2 = 3.0f;
				}
			}
		}
		else
		{
			Function_20();
		}
		if (!Function_64(Local_29.f_84, 8))
		{
			Function_159(&Local_29 + 84, 8);
			Local_29.f_92 = "net_barker_invite_join_waiting";
		}
	}
	else
	{
		if (bVar3)
		{
			if (Function_31("common_cancel"))
			{
				Function_62();
				return 0;
			}
		}
		iVar6 = NET_GET_POSSE_LEADER_SLOT();
		if (Function_29(iVar6))
		{
			if (StackVal != 4294967295 && Local_376[iVar64] != 4294967295)
			{
				Function_62();
				return 0;
			}
		}
		if (!Function_64(Local_29.f_84, 8))
		{
			Function_159(&Local_29 + 84, 8);
			Local_29.f_92 = "net_barker_invite_join_allowing";
		}
	}
	if ((fVar2 + 3.0f) <= 0.0f)
	{
		if (!Function_64(Local_29.f_84, 16))
		{
			Function_159(&Local_29 + 84, 16);
			Function_27();
		}
		Function_25(CEIL((fVar2 + 3.0f)), 0);
	}
	else if (Function_64(Local_29.f_84, 16))
	{
		Function_151(&Local_29 + 84, 16);
		Function_34();
		Function_25(0, 0);
	}
	if (bVar0)
	{
		return fVar2 > -3.0f;
	}
	return 0;
}

void Function_25(bool bParam0, bool bParam1) //Position: 0x133E / 4926
{
	if (Global_76905.f_128 != bParam0)
	{
		Function_26(0x20000000, 1, 1);
	}
	Global_76905.f_128 = bParam0;
	Function_26(65536, bParam1, 1);
	return;
}

void Function_26(int iParam0, bool bParam1, int iParam2) //Position: 0x136B / 4971
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_159(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_151(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_27() //Position: 0x1393 / 5011
{
	if (!Function_28(1048576))
	{
		Function_26(0x10000000, 1, 1);
	}
	Function_26(1048576, 1, 1);
	return;
}

bool Function_28(int iParam0) //Position: 0x13B7 / 5047
{
	return Function_64(Global_76905.f_132, iParam0);
}

bool Function_29(bool bParam0) //Position: 0x13C8 / 5064
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_30(bParam0);
}

bool Function_30(bool bParam0) //Position: 0x13DE / 5086
{
	char* cVar0[64];
	
	if (bParam0 > 0 || bParam0 <= 16)
	{
		strcpy(&cVar0, "TRIED TO USE IS_SLOT_DATA_VALID WITH BAD INDEX ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
		stradd(&cVar0, "!", 64);
		return 0;
	}
	if ((*&Global_78617 + 64)[bParam02] > Global_78617.f_60)
	{
		(*&Global_78617 + 64)[bParam02] = Global_78617.f_60;
		(&Global_78617 + 64[bParam02])->f_4 = _IS_CLIENT_DATA_VALID_FOR_SLOT(&Global_76943, bParam0);
	}
	return StackVal;
}

bool Function_31(bool bParam0) //Position: 0x147F / 5247
{
	int iVar0;
	float fVar1;
	bool bVar2;
	
	if (!IS_SCRIPT_USE_CONTEXT_VALID(Local_29.f_1220))
	{
		Local_29.f_1220 = ADD_SCRIPT_USE_CONTEXT(bParam0, 4294967096, 4, false, 0, 0, 0, 4294967295, 0);
		Local_29.f_1216 = -1.0f;
	}
	else if (UI_ISFOCUSED("HudSceneOnline"))
	{
		iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
		if (IS_BUTTON_DOWN(iVar0, 4, 1, false))
		{
			fVar1 = NET_GET_NET_TIME();
			if (Local_29.f_1216 >= 0.0f)
			{
				Local_29.f_1216 = fVar1;
			}
			if ((fVar1 - Local_29.f_1216) <= 1.0f)
			{
				Function_20();
				PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
				return 1;
			}
		}
		if (Local_29.f_1216 < 0.0f)
		{
			Local_29.f_1216 = -1.0f;
			bVar2 = Function_120();
			if (IS_ACTOR_VALID(bVar2))
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(bVar2))
				{
					TASK_DISMOUNT(bVar2, 1);
				}
			}
		}
	}
	else
	{
		Local_29.f_1216 = -1.0f;
	}
	return 0;
}

bool Function_32() //Position: 0x1552 / 5458
{
	int iVar0;
	
	if (StackVal == 4294967295)
	{
		iVar0 = Function_33(GET_LOCAL_SLOT());
		if ((NET_GET_PLAYMODE() != 1 && NET_IS_IN_SESSION()) && NET_IS_SESSION_HOST())
		{
			return 1;
		}
		if (iVar0 == NET_GET_SESSION_GAMER_COUNT())
		{
			return 1;
		}
		if (StackVal < iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int Function_33(bool bParam0) //Position: 0x159C / 5532
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_376, bVar0))
		{
			if (bVar0 == bParam0)
			{
				if (Local_376[bVar04] != 4294967295)
				{
					iVar1++;
				}
			}
			else if (StackVal == bParam0)
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_34() //Position: 0x15F4 / 5620
{
	if (Function_28(1048576))
	{
		Function_26(0x10000000, 1, 1);
	}
	Function_26(1048576, 0, 1);
	return;
}

bool Function_35(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x1617 / 5655
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return 0;
	}
	bVar1 = false;
	while (bVar1 < (GET_OBJECTSET_SIZE(bParam0) - 1))
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bParam0);
		if (iParam1 == GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bVar0)))
		{
			*uParam2 = bVar0;
			if (bParam3)
			{
				REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
			}
			return 1;
		}
		bVar1++;
	}
	return 0;
}

int Function_36(int iParam0) //Position: 0x1670 / 5744
{
	switch (iParam0)
	{
		case 0x00000025:
		case 0x00000026:
			return 2;
		
		case 0x00000024:
		case 0x00000028:
		case 0x0000002A:
			return 0;
		
		case 0x0000002C:
		case 0x00000023:
		case 0x00000027:
		case 0x00000029:
			return 1;
			break;
	}
	return 4294967295;
}

var Function_37() //Position: 0x16BD / 5821
{
	return NET_GET_POSSE_COUNT() >= 1;
}

bool Function_38() //Position: 0x16C8 / 5832
{
	return Function_149();
}

void Function_39(int iParam0) //Position: 0x16D1 / 5841
{
	Function_40(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_40(var uParam0, int iParam1) //Position: 0x172A / 5930
{
	Function_159(uParam0, iParam1);
	return;
}

void Function_41(int iParam0, int iParam1) //Position: 0x1737 / 5943
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		Function_46(iParam0 + 16[iVar02], 1);
		iVar0++;
	}
	Function_42(iParam0, iParam1);
	return;
}

void Function_42(int iParam0, int iParam1) //Position: 0x1763 / 5987
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		Function_43(iParam0 + 504[iVar014], iParam1);
		iVar0++;
	}
	iParam0->f_1068 = 0;
	return;
}

void Function_43(var uParam0, bool bParam1) //Position: 0x1790 / 6032
{
	if (IS_OBJECT_VALID(uParam0->f_52))
	{
		Function_44(uParam0);
		if (bParam1)
		{
			RELEASE_OBJECT_REF(uParam0->f_52);
		}
		else
		{
			DESTROY_OBJECT(uParam0->f_52);
		}
	}
	return;
}

void Function_44(int iParam0) //Position: 0x17BB / 6075
{
	Function_45(iParam0);
	if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(iParam0->f_52)))
	{
		REMOVE_BLIP(GET_BLIP_ON_OBJECT(iParam0->f_52));
	}
	return;
}

void Function_45(int iParam0) //Position: 0x17DD / 6109
{
	if (IS_OBJECT_VALID(*iParam0))
	{
		DESTROY_OBJECT(*iParam0);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	return;
}

void Function_46(var uParam0, var uParam1) //Position: 0x1803 / 6147
{
	if (IS_BLIP_VALID(*uParam0) && uParam1)
	{
		REMOVE_BLIP(*uParam0);
	}
	return;
}

int Function_47() //Position: 0x181B / 6171
{
	if (Function_160(16))
	{
	}
	else
	{
		Global_83803.f_36 = 1;
	}
	Function_155(16);
	return 1;
}

bool Function_48(bool bParam0) //Position: 0x1839 / 6201
{
	int iVar0;
	
	if (Function_64((*&Local_29 + 1292)[bParam0], 2))
	{
		return 0;
	}
	Function_159(&Local_29 + 1292[bParam0], 2);
	Function_151(&Local_29 + 1292[bParam0], 8);
	iVar0 = Function_36((&Global_78617 + 196[Local_376[bParam04]10])->f_36);
	NET_PLAYER_BARKER_RESET(bParam0, Local_376[bParam04], iVar0, Local_376[bParam04].f_12);
	return 1;
}

void Function_49(int iParam0) //Position: 0x189A / 6298
{
	Local_29.f_1372 = iParam0;
	(&Local_29 + 1372)->f_12 = (NET_GET_NET_TIME() + 90.0f);
	(&Local_29 + 1372)->f_4 = Function_50((&Global_78617 + 196[iParam010])->f_36);
	Function_150();
	return;
}

int Function_50(int iParam0) //Position: 0x18D0 / 6352
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_3361)
	{
		if (Global_0[iVar0168].f_64 == iParam0)
		{
			return Global_0[iVar0168].f_68;
		}
		iVar0++;
	}
	return 16;
}

void Function_51() //Position: 0x1904 / 6404
{
	Function_151(&Local_29 + 84, 1);
	Function_39(32768);
	Local_29.f_1216 = 0.0f;
	Local_29.f_80 = 0;
	Function_40(&Global_79349 + 44, 64);
	Function_39(65536);
	Function_53();
	Function_57();
	Function_52();
	return;
}

void Function_52() //Position: 0x193F / 6463
{
	if (IS_STRING_VALID(Local_29.f_88))
	{
		UI_REMOVE_MESSAGE_IN_QUEUE(Local_29.f_88, 1, 0);
		Local_29.f_88 = "";
	}
	return;
}

void Function_53() //Position: 0x195E / 6494
{
	int iVar0;
	
	if (StackVal == 4294967295)
	{
		iVar0 = Local_29.f_1372;
	}
	else
	{
		iVar0 = Local_29.f_1364;
	}
	if (!Function_55(iVar0, &Local_29 + 1228))
	{
		memcpy(&Local_29 + 1228, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_54((&Global_78617 + 196[iVar010])->f_36), 16);
	}
	stradd(&Local_29 + 1228, "_title", 64);
	NET_PLAYER_LIST_SET_TITLE(&Local_29 + 1228);
	return;
}

struct<32> Function_54(int iParam0) //Position: 0x19BE / 6590
{
	int iVar0;
	char* cVar1[32];
	
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (Global_0[iVar0168].f_64 == iParam0)
		{
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_0[iVar0168] + 32);
		}
		iVar0++;
	}
	strcpy(&cVar1, "", 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1;
}

bool Function_55(int iParam0, int iParam1) //Position: 0x1A02 / 6658
{
	int iVar0;
	
	if (Function_16(iParam0))
	{
		if (Function_10(&Global_78617 + 196[iParam010] + 20, &iVar0, 0))
		{
			if (Function_56(&iVar0, 1024))
			{
				*iParam1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iVar0 + 48) };
				return 1;
			}
		}
	}
	return 0;
}

bool Function_56(var uParam0, int iParam1) //Position: 0x1A3F / 6719
{
	return Function_64(uParam0->f_44, iParam1);
}

void Function_57() //Position: 0x1A4E / 6734
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_29.f_1224))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Local_29.f_1224);
	}
	if (Function_64(Local_29.f_84, 32))
	{
		Function_151(&Local_29 + 84, 32);
		UI_HIDE("MPEnvelope");
	}
	return;
}

void Function_58(int iParam0) //Position: 0x1A8C / 6796
{
	Local_29.f_1372 = iParam0;
	(&Local_29 + 1372)->f_12 = NET_GET_NET_TIME();
	(&Local_29 + 1372)->f_4 = 4294967295;
	Function_150();
	return;
}

bool Function_59(int iParam0) //Position: 0x1AAE / 6830
{
	int iVar0;
	
	*(&iVar0 + 76) = 36;
	if (Function_14(iParam0, &iVar0))
	{
		return 1;
	}
	return 0;
}

bool Function_60() //Position: 0x1ACB / 6859
{
	if (NET_GET_PLAYMODE() == 1)
	{
		if (NET_IS_IN_SESSION())
		{
			if (!NET_IS_SESSION_HOST())
			{
				return (&Local_29 + 4)->f_36 == (&Global_78578 + 112)->f_36;
			}
		}
		Function_171();
	}
	return 0;
}

bool Function_61(int iParam0, int iParam1) //Position: 0x1AFC / 6908
{
	bool bVar0;
	
	if (IS_OBJECTSET_VALID(*iParam0))
	{
		if (Function_35(*iParam0, 71, &bVar0, 0))
		{
			if (DECOR_CHECK_EXIST(bVar0, "type"))
			{
				*iParam1 = DECOR_GET_INT(bVar0, "type");
				return 1;
			}
		}
	}
	return 0;
}

void Function_62() //Position: 0x1B40 / 6976
{
	if (Function_160(32768))
	{
		Function_155(65536);
		Function_154();
		Function_153();
		Function_63(&Local_29 + 128, Local_29.f_124);
		if (StackVal >= 4294967295)
		{
			NET_GAMER_BARKER_REJECT(StackVal);
		}
		Local_29.f_100 = 1;
		Function_159(&Local_29 + 84, 1);
		Function_155(32768);
		Local_29.f_1216 = 0.0f;
		Local_29.f_80 = 0;
		(&Local_29 + 1372)->f_12 = NET_GET_NET_TIME();
		Function_152(&Global_79349 + 44, 64);
		Function_151(&Local_29 + 84, 16);
		Function_34();
		Function_20();
		Function_147();
		Function_26(16, 0, 1);
		Local_29.f_1372 = 4294967295;
		(&Local_29 + 1372)->f_8 = 4294967295;
		Local_29.f_108 = 4294967295;
		Local_29.f_124 = 4294967295;
		Function_57();
		Function_150();
	}
	return;
}

void Function_63(int iParam0, int iParam1) //Position: 0x1BEB / 7147
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1068)
	{
		if ((iParam0 + 504[iVar014])->f_48 == iParam1)
		{
			Function_45(iParam0 + 504[iVar014]);
			return;
		}
		iVar0++;
	}
	return;
}

bool Function_64(var uParam0, int iParam1) //Position: 0x1C24 / 7204
{
	return (uParam0 && iParam1) == 0;
}

var Function_65(int iParam0) //Position: 0x1C31 / 7217
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	struct<8> Var15;
	int iVar23;
	
	if (!NET_IS_IN_SESSION())
	{
		Function_57();
		Function_156();
		Function_173();
		Function_52();
		return 4294967295;
	}
	if (!Function_160(131072) || HUD_IS_FADED())
	{
		Function_52();
		Function_57();
		return 4294967295;
	}
	bVar1 = 4294967295;
	bVar2 = GET_LOCAL_SLOT();
	bVar3 = (NET_IS_POSSE_LEADER() || Function_37());
	iVar4 = NET_GET_POSSE_COUNT();
	iVar6 = 2;
	if (*iParam0 != 4294967295)
	{
		iVar6 = 16;
	}
	bVar7 = Function_38();
	iVar0 = 0;
	while (iVar0 <= iVar6)
	{
		Local_29.f_48 = (Local_29.f_48 + 1 % 16);
		if (Local_29.f_48 == 0)
		{
			Local_29.f_56 = Local_29.f_52;
			Local_29.f_64 = Local_29.f_60;
			if (Local_29.f_64 == 0)
			{
				Local_29.f_68 = 4294967295;
				Local_29.f_72 = 4294967295;
			}
			Local_29.f_52 = 0;
			Local_29.f_60 = 0;
		}
		if (bVar2 != Local_29.f_48)
		{
			if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_376, Local_29.f_48))
			{
				if (Local_376[Local_29.f_484] != 4294967295)
				{
					if (!Function_80(Local_29.f_48))
					{
						if (bVar7)
						{
							Function_79(Local_29.f_48);
							NET_PLAYER_BARKER_RESET(Local_29.f_48, 4294967295, 4294967295, 3212836864);
						}
						else
						{
							if (*iParam0 == Local_376[Local_29.f_484])
							{
								NET_GAMER_BARKER_ACCEPT(Local_29.f_48);
								Function_52();
								*iParam0 = 4294967295;
							}
							if (NET_GET_USING_SPHERE_CURVES(Local_29.f_48))
							{
								if (StackVal >= 0)
								{
									iVar5 = Function_33(Local_29.f_48);
									iVar8 = (StackVal - iVar5);
									if (iVar8 > iVar4)
									{
										if (bVar1 == 4294967295)
										{
											bVar1 = Local_29.f_48;
										}
									}
									else
									{
										Function_62();
										NET_PLAYER_BARKER_RESET(Local_29.f_48, 4294967295, 4294967295, 3212836864);
									}
								}
								else
								{
									Function_62();
									NET_PLAYER_BARKER_RESET(Local_29.f_48, 4294967295, 4294967295, 3212836864);
								}
							}
							if (Local_29.f_1372 == Local_376[Local_29.f_484])
							{
							}
							else if (StackVal && bVar3 != 4294967295)
							{
								Local_29.f_60++;
								if (Function_48(Local_29.f_48))
								{
								}
								if (Function_78(Local_29.f_48))
								{
									Local_29.f_68 = Local_29.f_48;
									Local_29.f_52++;
								}
							}
						}
					}
					else
					{
						NET_PLAYER_BARKER_RESET(Local_29.f_48, 4294967295, 4294967295, 3212836864);
					}
				}
				else
				{
					Function_79(Local_29.f_48);
				}
				if (NET_POSSE_IS_REQUEST_PRESENT(Local_29.f_48) || NET_POSSE_IS_INVITE_PRESENT(Local_29.f_48))
				{
					Local_29.f_60++;
					Local_29.f_96 = NET_POSSE_IS_REQUEST_PRESENT(Local_29.f_48);
					if (Function_77(Local_29.f_48))
					{
					}
					if (Function_76(Local_29.f_48))
					{
						Local_29.f_72 = Local_29.f_48;
						Local_29.f_52++;
					}
				}
				else
				{
					Function_75(Local_29.f_48);
				}
			}
			else
			{
				Function_74(Local_29.f_48);
				NET_PLAYER_BARKER_RESET(Local_29.f_48, 4294967295, 4294967295, 3212836864);
			}
		}
		iVar0++;
	}
	if (!bVar3)
	{
		bVar9 = NET_GET_POSSE_LEADER_SLOT();
		if (IS_SLOT_VALID(NET_GET_POSSE_LEADER_SLOT()))
		{
			iVar10 = Local_376[bVar94];
			bVar11 = StackVal;
			if (bVar11 != 4294967295)
			{
				iVar10 = Local_376[bVar114];
				if (Function_48(bVar11))
				{
				}
				return bVar11;
			}
			if (iVar10 >= 4294967295)
			{
				if (Function_48(bVar9))
				{
				}
				return bVar9;
			}
		}
	}
	if (Local_29.f_64 < 0)
	{
		Function_57();
		Function_151(&Local_29 + 84, 6);
		Local_29.f_1368 = 0.0f;
		Function_52();
		return bVar1;
	}
	if (!Function_64(Local_29.f_84, 32))
	{
		Function_159(&Local_29 + 84, 32);
		UI_SHOW("MPEnvelope");
		FLASH_SET_BOOL("net_hud", "Mail.value", Local_29.f_56 >= 0);
	}
	if (Local_29.f_56 < 0)
	{
		Local_29.f_1368 = 0.0f;
		return bVar1;
	}
	Local_29.f_1368 = (Local_29.f_1368 + GET_UNWARPED_REALTIME_SECONDS());
	if (Local_29.f_1368 > 0,5f)
	{
		if (!Function_64(Local_29.f_84, 64))
		{
			Function_159(&Local_29 + 84, 64);
			UI_HIDE("MPEnvelope");
		}
	}
	else if (Local_29.f_1368 > (0,5f * 2.0f))
	{
		if (Function_64(Local_29.f_84, 64))
		{
			Function_151(&Local_29 + 84, 64);
			UI_SHOW("MPEnvelope");
			FLASH_SET_BOOL("net_hud", "Mail.value", false);
		}
	}
	else
	{
		Local_29.f_1368 = 0.0f;
	}
	if (!UI_ISFOCUSED("HudSceneOnline"))
	{
		return bVar1;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_29.f_1224))
	{
		if (IS_SCRIPT_USE_CONTEXT_PRESSED(Local_29.f_1224))
		{
			Function_52();
			if (Local_29.f_56 == 1)
			{
				if (Local_29.f_72 != 4294967295)
				{
					NET_PLAYER_SHOW_CONTEXT_MENU(Local_29.f_72, "mp_gamer_partyjoin");
				}
				else if (Local_29.f_68 != 4294967295)
				{
					NET_PLAYER_SHOW_CONTEXT_MENU(Local_29.f_68, "mp_gamer_joinbarker");
					UI_SEND_EVENT("refreshcontextmenu");
				}
			}
			else
			{
				UI_PUSH("OL_NetworkingMenu");
				UI_SEND_EVENT("r1_released");
			}
			Function_151(&Local_29 + 84, 6);
			Function_57();
			Function_71();
			return bVar1;
		}
		if (UI_IS_MESSAGE_QUEUE_EMPTY(1))
		{
			RELEASE_SCRIPT_USE_CONTEXT(Local_29.f_1224);
		}
		else if (bVar7)
		{
			RELEASE_SCRIPT_USE_CONTEXT(Local_29.f_1224);
		}
	}
	if (Local_29.f_56 == 1)
	{
		if (!Function_64(Local_29.f_84, 2))
		{
			if (Local_29.f_68 == 4294967295 && !bVar7)
			{
				iVar13 = Local_376[Local_29.f_684];
				Function_159(&Local_29 + 84, 2);
				fVar14 = (Local_376[Local_29.f_684].f_12 - NET_GET_NET_TIME());
				Var15 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_54((&Global_78617 + 196[iVar1310])->f_36) };
				if (Function_55(iVar13, &iVar23))
				{
					Local_29.f_88 = "net_barker_invite_help_specific";
				}
				else
				{
					Local_29.f_88 = "net_barker_invite_help";
					memcpy(&iVar23, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68(&Global_78617 + 196[iVar1310], &Local_29 + 128 + 16[iVar132]), 16);
				}
				UI_SET_STRING("net_barker_dude", UI_GET_STRING(Function_67(Local_29.f_68)));
				UI_SET_STRING("net_barker_gametype", UI_GET_STRING(&Var15));
				UI_SET_STRING("net_barker_location", UI_GET_STRING(&iVar23));
				iVar12 = 1;
				Function_94(Local_29.f_88, 0x41200000, 1, 0, 2, 1, 0);
				Function_66("MPCOOP_ENTERSGATEWAY", 0);
			}
			else if (Local_29.f_72 != 4294967295)
			{
				Function_159(&Local_29 + 84, 2);
				if (Local_29.f_96)
				{
					Local_29.f_88 = "net_posse_join_request_help";
					Function_66("MPCOOP_REQUESTJOINPOSSE", 0);
				}
				else
				{
					Local_29.f_88 = "net_posse_join_invite_help";
					Function_66("MPCOOP_INVIJOINPOSSE", 0);
				}
				iVar12 = 1;
				UI_SET_STRING("net_barker_dude", UI_GET_STRING(Function_67(Local_29.f_72)));
				Function_94(Local_29.f_88, 0x41200000, 1, 0, 2, 1, 0);
			}
		}
	}
	else if (Local_29.f_56 >= 1)
	{
		if (!Function_64(Local_29.f_84, 4))
		{
			Function_159(&Local_29 + 84, 4);
			Function_52();
			iVar12 = 1;
			Local_29.f_88 = "net_invite_multiple";
			Function_94(Local_29.f_88, 10.0f, 1, 0, 2, 1, 0);
		}
	}
	if (iVar12 && !bVar7)
	{
		if (!IS_SCRIPT_USE_CONTEXT_VALID(Local_29.f_1224))
		{
			Local_29.f_1224 = ADD_SCRIPT_USE_CONTEXT("net_invite_openMenu", 100, 8, false, 0, 0, 0, 4294967295, 0);
		}
	}
	return bVar1;
}

void Function_66(char* cParam0, bool bParam1) //Position: 0x23AD / 9133
{
	int iVar0;
	
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		iVar0 = "";
		if (bParam1)
		{
			iVar0 = cParam0;
		}
		ADD_LINE_TO_CONVERSATION(false, cParam0, iVar0, false, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(0, "NARRATOR");
	}
	START_SCRIPT_CONVERSATION(false, 0);
	return;
}

var Function_67(int iParam0) //Position: 0x23ED / 9197
{
	switch (iParam0)
	{
		case 0x00000000:
			return "MPPlayerNameColored_0";
		
		case 0x00000001:
			return "MPPlayerNameColored_1";
		
		case 0x00000002:
			return "MPPlayerNameColored_2";
		
		case 0x00000003:
			return "MPPlayerNameColored_3";
		
		case 0x00000004:
			return "MPPlayerNameColored_4";
		
		case 0x00000005:
			return "MPPlayerNameColored_5";
		
		case 0x00000006:
			return "MPPlayerNameColored_6";
		
		case 0x00000007:
			return "MPPlayerNameColored_7";
		
		case 0x00000008:
			return "MPPlayerNameColored_8";
		
		case 0x00000009:
			return "MPPlayerNameColored_9";
		
		case 0x0000000A:
			return "MPPlayerNameColored_10";
		
		case 0x0000000B:
			return "MPPlayerNameColored_11";
		
		case 0x0000000C:
			return "MPPlayerNameColored_12";
		
		case 0x0000000D:
			return "MPPlayerNameColored_13";
		
		case 0x0000000E:
			return "MPPlayerNameColored_14";
		
		case 0x0000000F:
			return "MPPlayerNameColored_15";
		
		default:
	}
	return "UNHANDLED SLOT";
}

struct<32> Function_68(bool bParam0, var uParam1) //Position: 0x2601 / 9729
{
	struct<41> Var0;
	
	if (Function_17(bParam0))
	{
		if (Function_10(bParam0 + 20, &Var0, 1))
		{
			if (Function_70(Var0.f_40))
			{
				return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_69(Var0.f_40);
			}
		}
	}
	if (bParam0->f_16 >= 4294967295)
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_69(bParam0->f_16);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_69(StackVal);
}

struct<32> Function_69(int iParam0) //Position: 0x264B / 9803
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_70(iParam0))
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

bool Function_70(int iParam0) //Position: 0x2708 / 9992
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_71() //Position: 0x271E / 10014
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_73(iVar0))
		{
			Function_159(&Local_29 + 1292[iVar0], 8);
		}
		if (Function_72(iVar0))
		{
			Function_159(&Local_29 + 1292[iVar0], 4);
		}
		iVar0++;
	}
	Local_29.f_56 = 0;
	Local_29.f_52 = 0;
	Local_29.f_48 = 0;
	return;
}

bool Function_72(int iParam0) //Position: 0x2771 / 10097
{
	return Function_64((*&Local_29 + 1292)[iParam0], 1);
}

bool Function_73(int iParam0) //Position: 0x2784 / 10116
{
	return Function_64((*&Local_29 + 1292)[iParam0], 2);
}

void Function_74(int iParam0) //Position: 0x2797 / 10135
{
	(*&Local_29 + 1292)[iParam0] = 0;
	return;
}

void Function_75(int iParam0) //Position: 0x27A7 / 10151
{
	Function_151(&Local_29 + 1292[iParam0], 5);
	return;
}

bool Function_76(int iParam0) //Position: 0x27BA / 10170
{
	return !Function_64((*&Local_29 + 1292)[iParam0], 4);
}

bool Function_77(int iParam0) //Position: 0x27CE / 10190
{
	if (Function_64((*&Local_29 + 1292)[iParam0], 1))
	{
		return 0;
	}
	Function_159(&Local_29 + 1292[iParam0], 1);
	Function_151(&Local_29 + 1292[iParam0], 4);
	return 1;
}

bool Function_78(int iParam0) //Position: 0x2801 / 10241
{
	return !Function_64((*&Local_29 + 1292)[iParam0], 8);
}

void Function_79(int iParam0) //Position: 0x2816 / 10262
{
	Function_151(&Local_29 + 1292[iParam0], 10);
	return;
}

bool Function_80(int iParam0) //Position: 0x282A / 10282
{
	return (Local_376[iParam04].f_12 - NET_GET_NET_TIME()) >= 3.0f;
}

void Function_81(int iParam0) //Position: 0x283F / 10303
{
	Function_82(iParam0, 0.0f);
	return;
}

void Function_82(var uParam0, float fParam1) //Position: 0x284B / 10315
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_159(uParam0, 1);
	Function_151(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_83(var uParam0, int iParam1) //Position: 0x286C / 10348
{
	if (Function_85(uParam0, iParam1))
	{
		Function_84(uParam0);
		return 1;
	}
	return 0;
}

void Function_84(int iParam0) //Position: 0x2884 / 10372
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_85(int iParam0, float fParam1) //Position: 0x2898 / 10392
{
	if (Function_88(iParam0))
	{
		if (Function_86(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_86(int iParam0) //Position: 0x28B4 / 10420
{
	if (Function_88(iParam0))
	{
		if (Function_87(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_87(int iParam0) //Position: 0x297C / 10620
{
	return Function_64(*iParam0, 2);
}

bool Function_88(int iParam0) //Position: 0x2989 / 10633
{
	return Function_64(*iParam0, 1);
}

var Function_89() //Position: 0x2996 / 10646
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_90() //Position: 0x29C5 / 10693
{
	Global_78617.f_28 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/mp_Help_Barker.sc", 0);
	return;
}

void Function_91() //Position: 0x29FF / 10751
{
	Function_92(Function_120());
	Global_78617.f_28 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/mp_Teleport.sc", 0);
	Function_39(128);
	return;
}

void Function_92(bool bParam0) //Position: 0x2A41 / 10817
{
	Function_93(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, true);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

void Function_93(int iParam0, bool bParam1) //Position: 0x2A62 / 10850
{
	if (bParam1)
	{
		Function_159(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_151(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_94(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x2A9D / 10909
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

var Function_95(int iParam0, bool bParam1) //Position: 0x2AE8 / 10984
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_96(int iParam0) //Position: 0x2B08 / 11016
{
	if (iParam0 > 0 || iParam0 <= (&Global_78617 + 196)->f_2404)
	{
		return 0;
	}
	return (&Global_78617 + 196[iParam010])->f_16 != 146;
}

bool Function_97(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x2B33 / 11059
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	bool bVar19;
	float fVar20;
	vector3 vVar21;
	bool bVar24;
	vector3 vVar25;
	float fVar28;
	float fVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	int iVar35;
	char* cVar36[64];
	
	*uParam1 = 4294967295;
	if (!Function_119())
	{
		Function_3(bParam0);
		Function_41(bParam0, 0);
		return 0;
	}
	if ((Function_116() || Function_160(128)) || !NET_IS_IN_SESSION())
	{
		if (StackVal != 6)
		{
			bParam0->f_4 = 6;
			*bParam0 = 0;
			Function_41(bParam0, 1);
			Function_3(bParam0);
		}
		return 0;
	}
	if (NET_GET_PLAYMODE() == 1)
	{
		if (NET_IS_SESSION_HOST())
		{
			iVar0 = 3;
		}
		else
		{
			iVar0 = 4;
		}
	}
	else if (bParam4)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	bVar2 = 1E+08.0f;
	if (StackVal || bParam0->f_1072 == Global_29006 == iVar0)
	{
		Function_3(bParam0);
		Function_111(bParam0, Global_29006, iVar0);
		bParam0->f_1072 = Global_29006;
		bParam0->f_500 = 4294967295;
	}
	if (StackVal || !*bParam0 == iVar0)
	{
		*bParam0 = 1;
		iVar1 = 0;
		while (iVar1 <= (&Global_78617 + 196)->f_2404)
		{
			if (!Function_109(iVar1, iVar0))
			{
				if (IS_BLIP_VALID((*bParam0 + 16)[iVar12]))
				{
					REMOVE_BLIP((*bParam0 + 16)[iVar12]);
				}
			}
			else if (!IS_BLIP_VALID((*bParam0 + 16)[iVar12]))
			{
				(*bParam0 + 16)[iVar12] = ADD_BLIP_FOR_COORD(&Global_78617 + 196[iVar110], Function_108((&Global_78617 + 196[iVar110])->f_36), 0, 2, 0);
				UNK_0xFF3DB575((*bParam0 + 16)[iVar12], 1);
				if (GET_BLIP_ICON((*bParam0 + 16)[iVar12]) == 411)
				{
					SET_BLIP_NAME((*bParam0 + 16)[iVar12], "mp_helpBarker");
				}
				else if (Function_55(iVar1, &uVar3))
				{
					SET_BLIP_NAME((*bParam0 + 16)[iVar12], &uVar3);
				}
			}
			iVar1++;
		}
	}
	bParam0->f_4 = iVar0;
	if (IS_ACTOR_VALID(bParam3))
	{
		Function_107(bParam3);
		vVar21 = { StackVal, StackVal, Function_107(bParam3) };
	}
	bVar24 = (!Function_105(bParam3, 95) && bParam4);
	if (!bVar24)
	{
		bVar24 = (IS_ACTOR_RIDING(bParam3) || IS_ACTOR_RIDING_VEHICLE(bParam3));
	}
	if (bVar24)
	{
		Function_3(bParam0);
		bParam0->f_500 = 4294967295;
	}
	else if (bParam0->f_500 != 4294967295)
	{
		bVar2 = VDIST(vVar21, *(&Global_78617 + 196[(bParam0 + 504[bParam0->f_50014])->f_4810]));
	}
	if (!GET_CAMERA_CHANNEL_POSITION(&vVar25, 0))
	{
	}
	fVar28 = GET_CURRENT_GAME_TIME();
	fVar29 = GET_LAST_FRAME_TIME();
	iVar30 = ((SHIFT_LEFT(bLocal_20, 16) + SHIFT_LEFT(bLocal_21, 8)) + iLocal_22);
	iVar31 = ((SHIFT_LEFT(bLocal_24, 16) + SHIFT_LEFT(bLocal_25, 8)) + iLocal_26);
	iVar1 = 0;
	while (iVar1 <= bParam0->f_1068)
	{
		fVar20 = VDIST2(vVar21, *(&Global_78617 + 196[(bParam0 + 504[iVar114])->f_4810]));
		bVar19 = (fVar20 >= 9.0f && !bVar24);
		if ((bParam0 + 504[iVar114])->f_48 == iParam2)
		{
			Function_102(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam0 + 504[iVar114], vVar25, fVar28, Vector(*(&Global_78617 + 196[(bParam0 + 504[iVar114])->f_4810]), (bParam0 + 504[iVar114])->f_52, fVar29) + Vector(0.0f, 2,25f, 0.0f), 1, 13798, 0, iVar30, (bParam0 + 504[iVar114])->f_48, "barkerText", 0);
		}
		else if (Function_109((bParam0 + 504[iVar114])->f_48, iVar0))
		{
			Function_102(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam0 + 504[iVar114], vVar25, fVar28, Vector(*(&Global_78617 + 196[(bParam0 + 504[iVar114])->f_4810]), (bParam0 + 504[iVar114])->f_52, fVar29) + Vector(0.0f, 2,25f, 0.0f), 1, 13798, 0, iVar31, (bParam0 + 504[iVar114])->f_48, "barkerText", 0);
		}
		if (iVar1 == bParam0->f_500)
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
			{
				if (!WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(StackVal) && !bVar19)
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
					bParam0->f_500 = 4294967295;
					bVar2 = 1E+08.0f;
				}
			}
			else
			{
				bParam0->f_500 = 4294967295;
				bVar2 = 1E+08.0f;
			}
		}
		else if ((fVar20 > bVar2 && bVar19) && Function_109((bParam0 + 504[iVar114])->f_48, iVar0))
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
			{
				if (!WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(StackVal) && !bVar19)
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
				}
			}
			if (!IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
			{
				Function_101(bParam0, (bParam0 + 504[iVar114])->f_48);
				bParam0->f_500 = iVar1;
				bVar2 = fVar20;
			}
		}
		iVar1++;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(StackVal))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			bVar34 = (bParam0 + 504[bParam0->f_50014])->f_48;
			iVar35 = Function_99(bVar34, &bVar32, &bVar33);
			switch (iVar35)
			{
				case 0x00000001:
					memcpy(&cVar36, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_98((&Global_78617 + 196[bVar3410])->f_36), 16);
					stradd(&cVar36, "_unlock", 64);
					UI_MESSAGEBOX_SET_DESCRIPTION("NetConf_BarkerLocked", &cVar36);
					UI_ACTIVATE("NetConf_BarkerLocked");
					break;
				
				case 0x00000003:
					UI_SET_STRING("Generic_Dbuffer10_0", I2STR(bVar33));
					UI_SET_STRING("Generic_Dbuffer10_1", I2STR(bVar32));
					UI_ACTIVATE("NetAlert_PosseTooBig");
					break;
				
				case 0x00000002:
					UI_SET_STRING("Generic_Dbuffer10_0", I2STR(bVar33));
					UI_SET_STRING("Generic_Dbuffer10_1", I2STR(bVar32));
					UI_ACTIVATE("NetAlert_GroupTooBig");
					break;
				
				case 0x00000000:
				default:
					*uParam1 = bVar34;
					Function_45(bParam0 + 504[bParam0->f_50014]);
					return 1;
				}
			}
	}
	return 0;
}

struct<32> Function_98(int iParam0) //Position: 0x30BB / 12475
{
	int iVar0;
	char* cVar1[32];
	
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (Global_0[iVar0168].f_64 == iParam0)
		{
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_0[iVar0168];
		}
		iVar0++;
	}
	strcpy(&cVar1, "", 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1;
}

int Function_99(int iParam0, int iParam1, int iParam2) //Position: 0x30FD / 12541
{
	if (Function_96(iParam0))
	{
		return 0;
	}
	if (Function_100((&Global_78617 + 196[iParam010])->f_36, 4))
	{
		return 1;
	}
	*iParam1 = Function_50((&Global_78617 + 196[iParam010])->f_36);
	if (NET_GET_PLAYMODE() == 1)
	{
		if (NET_IS_IN_SESSION())
		{
			if (NET_IS_SESSION_HOST())
			{
				*iParam2 = GET_NUM_PLAYERS();
				if (*iParam1 <= *iParam2)
				{
					return 2;
				}
			}
		}
	}
	*iParam2 = NET_GET_POSSE_COUNT();
	if (*iParam2 >= 1)
	{
		if (NET_IS_POSSE_LEADER())
		{
			if (*iParam1 <= *iParam2)
			{
				return 3;
			}
		}
	}
	return 0;
}

bool Function_100(var uParam0, int iParam1) //Position: 0x3177 / 12663
{
	struct<657> Var0;
	
	*(&Var0 + 76) = 36;
	if (Function_14(uParam0, &Var0))
	{
		return Function_64(Var0.f_656, iParam1);
	}
	return 0;
}

void Function_101(int iParam0, int iParam1) //Position: 0x319D / 12701
{
	int iVar0;
	var uVar16;
	var uVar17;
	bool bVar18;
	struct<8> Var19;
	struct<8> Var27;
	
	if ((&Global_78617 + 196[iParam110])->f_36 == 72)
	{
		iParam0->f_8 = ADD_SCRIPT_USE_CONTEXT("mp_TELEPORT", 30, 4, false, 0, 0, 0, 4294967295, 0);
	}
	else if ((&Global_78617 + 196[iParam110])->f_36 == 73)
	{
		iParam0->f_8 = ADD_SCRIPT_USE_CONTEXT("mp_HelpBarker", 30, 4, false, 0, 0, 0, 4294967295, 0);
	}
	else
	{
		bVar18 = Function_99(iParam1, &uVar16, &uVar17) == false;
		if (Function_55(iParam1, &iVar0))
		{
			UI_SET_STRING("mp_barkerLocation", UI_GET_STRING(&iVar0));
			if (bVar18)
			{
				iParam0->f_8 = ADD_SCRIPT_USE_CONTEXT("mp_barker_fmt_specific_disabled", 30, 4, false, 0, 0, 0, 4294967295, 0);
			}
			else
			{
				iParam0->f_8 = ADD_SCRIPT_USE_CONTEXT("mp_barker_fmt_specific", 30, 4, false, 0, 0, 0, 4294967295, 0);
			}
		}
		else
		{
			Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68(&Global_78617 + 196[iParam110], iParam0 + 16[iParam12]) };
			UI_SET_STRING("mp_barkerLocation", UI_GET_STRING(&Var19));
			if (bVar18)
			{
				iParam0->f_8 = ADD_SCRIPT_USE_CONTEXT("mp_barker_fmt_disabled", 30, 4, false, 0, 0, 0, 4294967295, 0);
			}
			else
			{
				iParam0->f_8 = ADD_SCRIPT_USE_CONTEXT("mp_barker_fmt", 30, 4, false, 0, 0, 0, 4294967295, 0);
			}
		}
		Var27 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_54((&Global_78617 + 196[iParam110])->f_36) };
		UI_SET_STRING("mp_barkerRotation", UI_GET_STRING(&Var27));
	}
	return;
}

void Function_102(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16) //Position: 0x3359 / 13145
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	bool bVar10;
	vector3 vVar11;
	bool bVar14;
	
	if (!HUD_IS_FADED())
	{
		fVar0 = (fParam4 - iParam0->f_44);
		vVar1 = { StackVal, StackVal, Vector(vParam7, StackVal, StackVal) + Vector(0.0f, (SIN_DEGREE((75.0f * fVar0)) * 0,01f), 0.0f) };
		fVar4 = VDIST2(vParam1, vVar1);
		if (fVar4 > 2,25f || fVar4 <= 625.0f)
		{
			Function_45(iParam0);
			return;
		}
		vParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vParam1, StackVal) };
		fVar5 = fLocal_10;
		if (iParam10 == 1)
		{
			fVar5 = -1.0f;
		}
		else if (iParam0->f_40 != 0 && iParam12)
		{
			fVar5 = 14.0f;
		}
		vVar6 = { StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 20), vParam1, StackVal), StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f) };
		*(iParam0 + 20) = { StackVal, StackVal, vVar6 };
		fVar9 = (UNK_0xADF7D54B(&vVar6) + 3,14159f);
		bVar10 = false;
		if (iParam0->f_32 == 0)
		{
			if (fVar0 <= fVar5 && fVar5 <= 0.0f)
			{
				RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(bParam6, "HUD_STINGER_TEXT_MASTER"));
				iParam0->f_32 = 1;
			}
			fVar9 = (fVar9 + (SIN_DEGREE((100.0f * fVar0)) * 0,1f));
			bVar10 = true;
		}
		else
		{
			iParam0->f_36 = (iParam0->f_36 + (17.0f * fParam5));
			if (iParam0->f_32 == 1)
			{
				if (FABS((iParam0->f_36 - fVar9)) <= (3,14159f * 0,5f))
				{
					iParam0->f_32 = 2;
					iParam0->f_36 = (iParam0->f_36 - 3,14159f);
					iParam0->f_40++;
					if (iParam0->f_40 > iParam10)
					{
						iParam0->f_40 = 0;
					}
					Function_45(iParam0);
				}
			}
			else if ((iParam0->f_36 - fVar9) <= 0.0f)
			{
				iParam0->f_32 = 0;
				iParam0->f_44 = fParam4;
				if (iParam0->f_36 < fVar9)
				{
					bVar10 = true;
				}
			}
		}
		if (FABS((iParam0->f_36 - fVar9)) > 0,0001f)
		{
			return;
		}
		if (bVar10)
		{
			iParam0->f_36 = fVar9;
		}
		vVar11 = { 0,01f, -0,01f, -0,01f };
		ROTATE_VECTOR_XZ(&vVar11, iParam0->f_36, 1);
		if (!IS_OBJECT_VALID(*iParam0))
		{
			Stack.Push(bParam6);
			Stack.Push(uParam15);
			Stack.Push(iParam0->f_40);
			Stack.Push(iParam14);
			Call_Loc(iParam11);
		}
	}
}

var Function_103(float fParam0) //Position: 0x35D8 / 13784
{
	return (fParam0 * 57,29578f);
}

var Function_104(var uParam0, int iParam1) //Position: 0x35E6 / 13798
{
	int iVar0;
	char* cVar16[64];
	
	uParam0 = uParam0;
	if ((&Global_78617 + 196[iParam110])->f_36 == 72)
	{
		return "mp_TELEPORT_tis";
	}
	if ((&Global_78617 + 196[iParam110])->f_36 == 73)
	{
		return "mp_HelpBarker_tis";
	}
	memcpy(&cVar16, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_54((&Global_78617 + 196[iParam110])->f_36), 16);
	stradd(&cVar16, "_title", 64);
	if (Function_55(iParam1, &iVar0))
	{
		UI_SET_STRING_FORMAT("generic_DBuffer128_0", UI_GET_STRING("mp_barker_tis_fmt"), UI_GET_STRING(&cVar16), UI_GET_STRING(&iVar0), 0);
	}
	else
	{
		UI_SET_STRING("generic_DBuffer128_0", UI_GET_STRING(&cVar16));
	}
	return "Generic_DBuffer128_0";
}

bool Function_105(bool bParam0, int iParam1) //Position: 0x36DE / 14046
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_106(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_106(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_106(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_106(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_106(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_106(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_106(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_106(iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(bParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_106(var uParam0, int iParam1) //Position: 0x37B7 / 14263
{
	return (uParam0 && iParam1) == 0;
}

vector3 Function_107(bool bParam0) //Position: 0x37C4 / 14276
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_108(int iParam0) //Position: 0x37D5 / 14293
{
	int iVar0;
	
	if (iParam0 == 72)
	{
		return 396;
	}
	if (iParam0 == 73)
	{
		return 411;
	}
	iVar0 = 0;
	while (iVar0 <= Global_3361)
	{
		if (Global_0[iVar0168].f_64 == iParam0)
		{
			return Global_0[iVar0168].f_664;
		}
		iVar0++;
	}
	return 403;
}

bool Function_109(int iParam0, int iParam1) //Position: 0x3824 / 14372
{
	switch (iParam1)
	{
		case 0x00000004:
			return Function_96(iParam0);
		
		case 0x00000002:
			return Function_110(iParam0);
		
		default:
	}
	return 1;
}

int Function_110(int iParam0) //Position: 0x384A / 14410
{
	return (&Global_78617 + 196[iParam010])->f_36 != 73;
}

void Function_111(int iParam0, int iParam1, int iParam2) //Position: 0x385F / 14431
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3[10];
	int iVar144;
	bool bVar145;
	int iVar146;
	bool bVar147;
	
	iVar2 = iParam0->f_1068;
	iVar1 = 0;
	while (iVar1 <= iVar2)
	{
		Var3[iVar114] = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 504[iVar114]) };
		iVar1++;
	}
	iParam0->f_1068 = 0;
	iVar144 = 1;
	iVar0 = 0;
	while (iVar0 > (&Global_78617 + 196)->f_2404 && iVar144)
	{
		if (StackVal == iParam1)
		{
			if (iParam0->f_1068 > 10)
			{
				iVar144 = 0;
			}
			else
			{
				(iParam0 + 504[iParam0->f_106814])->f_48 = iVar0;
				iParam0->f_1068++;
			}
		}
		iVar0++;
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	iVar1 = 0;
	bVar145 = false;
	iVar146 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1068)
	{
		iVar144 = 1;
		while (iVar1 > iVar2 && iVar144)
		{
			if (Var3[iVar114].f_48 <= (iParam0 + 504[iVar014])->f_48)
			{
				DESTROY_OBJECT(Var3[iVar114].f_52);
				iVar1++;
			}
			else
			{
				iVar144 = 0;
			}
		}
		bVar145 = false;
		if (iVar1 <= iVar2)
		{
			if (Var3[iVar114].f_48 == (iParam0 + 504[iVar014])->f_48)
			{
				if (IS_OBJECT_VALID(Var3[iVar114].f_52))
				{
					*(iParam0 + 504[iVar014]) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var3[iVar114] };
					if (Function_109((iParam0 + 504[iVar014])->f_48, iParam2))
					{
						iVar146 = 1;
					}
					else
					{
						Function_44(iParam0 + 504[iVar014]);
					}
				}
				else
				{
					bVar145 = true;
				}
				iVar1++;
			}
			else if (Var3[iVar114].f_48 >= (iParam0 + 504[iVar014])->f_48)
			{
				bVar145 = true;
			}
		}
		else
		{
			bVar145 = true;
		}
		if (bVar145)
		{
			(iParam0 + 504[iVar014])->f_52 = Function_114(iParam0, (iParam0 + 504[iVar014])->f_48);
			if (IS_OBJECT_VALID((iParam0 + 504[iVar014])->f_52))
			{
				Function_113((iParam0 + 504[iVar014])->f_52, 1);
				CREATE_OBSTACLE_ON_OBJECT(StackVal, StackVal, Vector(*(&Global_78617 + 196[(iParam0 + 504[iVar014])->f_4810]), Function_112(), (iParam0 + 504[iVar014])->f_52) + Vector(0.0f, 1.0f, 0.0f), 0.0f, (&Global_78617 + 196[(iParam0 + 504[iVar014])->f_4810])->f_12, 0.0f, 1,2f, 2.0f, 0,75f);
				if (Function_109((iParam0 + 504[iVar014])->f_48, iParam2))
				{
					iVar146 = 1;
				}
			}
		}
		if (iVar146 && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT((iParam0 + 504[iVar014])->f_52)))
		{
			bVar147 = ADD_BLIP_FOR_OBJECT((iParam0 + 504[iVar014])->f_52, Function_108((&Global_78617 + 196[(iParam0 + 504[iVar014])->f_4810])->f_36), 0f, 2, 0);
			UNK_0x1E98AFEC(bVar147, 1);
			SET_BLIP_MAX_DISTANCE(bVar147, 1.0f);
		}
		iVar0++;
	}
	while (iVar1 <= iVar2)
	{
		DESTROY_OBJECT(Var3[iVar114].f_52);
		iVar1++;
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	return;
}

var Function_112() //Position: 0x3B0A / 15114
{
	int iVar0;
	
	return iVar0;
}

void Function_113(bool bParam0, bool bParam1) //Position: 0x3B12 / 15122
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
	bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
	ITERATE_IN_LAYOUT(bVar1, bVar0);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar2), bParam1);
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
	DESTROY_ITERATOR(bVar1);
	return;
}

var Function_114(var uParam0, int iParam1) //Position: 0x3B5E / 15198
{
	char* cVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = (&Global_78617 + 196[iParam110])->f_36;
	switch (iVar1)
	{
		case 0x00000048:
			cVar0 = "$/tune/refGroups/refGroups/mp_transport";
			break;
		
		case 0x00000049:
			cVar0 = "$/tune/refGroups/refGroups/mp_help";
			break;
		
		default:
			if (uParam0->f_1076 != iVar1)
			{
				bVar2 = Function_115(iVar1);
				if (!UNK_0x214AFB8C(bVar2))
				{
					return "";
				}
				cVar0 = GET_ASSET_NAME(bVar2, 7);
				uParam0->f_1076 = iVar1;
				uParam0->f_1080 = cVar0;
			}
			else
			{
				cVar0 = uParam0->f_1080;
			}
			break;
	}
	return CREATE_PROPSET_IN_LAYOUT(uParam0->f_12, Function_112(), cVar0, *(&Global_78617 + 196[iParam110]), 0.0f, (&Global_78617 + 196[iParam110])->f_12, 0.0f);
}

var Function_115(int iParam0) //Position: 0x3C44 / 15428
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (Global_0[iVar0168].f_64 == iParam0)
		{
			return Global_0[iVar0168].f_668;
		}
		iVar0++;
	}
	return "";
}

var Function_116() //Position: 0x3C78 / 15480
{
	return !Function_117();
}

bool Function_117() //Position: 0x3C82 / 15490
{
	if (Function_119())
	{
		return (Function_118() != 1 || Function_118() != 0);
	}
	return 0;
}

int Function_118() //Position: 0x3C9B / 15515
{
	return Global_79349.f_16;
}

bool Function_119() //Position: 0x3CA7 / 15527
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_120() //Position: 0x3CB0 / 15536
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_121(var uParam0, var uParam1, int iParam2) //Position: 0x3CC5 / 15557
{
	if (Function_28(0x4000000))
	{
		Function_147();
		Function_26(0x4000000, 0, 1);
	}
	if (Function_28(0x10000000))
	{
		Function_147();
		Function_26(0x10000000, 0, 1);
	}
	if (Function_28(2) != Function_28(0x2000000))
	{
		Function_147();
		Function_26(0x2000000, Function_28(2), 1);
	}
	if (Function_129())
	{
		Function_128(!Function_28(16));
	}
	if (Function_28(16))
	{
		Function_123(&uParam0, &uParam1, &iParam2);
		if (Function_28(8192))
		{
			if (!Function_28(4194304))
			{
				Function_26(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_28(8388608))
			{
				Function_26(8388608, 1, 1);
				UI_HIDE("Splash_Message");
				UI_HIDE("Splash_Objective");
				UI_HIDE("Subtitle_Enabler");
				UI_EXCLUDE("Splash_Message");
				UI_EXCLUDE("Splash_Objective");
				UI_EXCLUDE("Subtitle_Enabler");
				SET_HUD_MAP_DRAW_ENABLED(0);
			}
		}
		else
		{
			Function_122();
		}
		Function_26(16384, 1, 1);
	}
	else if (!Function_28(32))
	{
		Function_122();
	}
	Function_26(32768, 0, 1);
	return;
}

void Function_122() //Position: 0x3E5E / 15966
{
	if (Function_28(4194304))
	{
		Function_26(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_28(8388608))
	{
		Function_26(8388608, 0, 1);
		UI_INCLUDE("Splash_Message");
		UI_INCLUDE("Splash_Objective");
		UI_INCLUDE("Subtitle_Enabler");
		if (!UI_IS_MESSAGE_QUEUE_EMPTY(0))
		{
			UI_SHOW("Splash_Message");
		}
		if (!UI_IS_MESSAGE_QUEUE_EMPTY(2))
		{
			UI_SHOW("Splash_Objective");
		}
		UI_SHOW("Subtitle_Enabler");
		SET_HUD_MAP_DRAW_ENABLED(1);
	}
	return;
}

void Function_123(var uParam0, var uParam1, int iParam2) //Position: 0x3F67 / 16231
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_26(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_28(0x40000000);
	bVar3 = !Function_28(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_30(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_126(bVar1, 2048, 1))
			{
				iVar0 = 4294967294;
			}
			else
			{
				Stack.Push(bVar1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push("");
				Call_Loc(*uParam1);
				iVar0 = StackVal;
			}
			if (iVar0 == 0 && bVar3)
			{
				if (Function_124(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_28(4))
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, UI_GET_STRING("mp_list_joined_late"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
					}
					else
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(1);
					}
				}
			}
			else
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		else if (bVar2)
		{
			if (Function_124(bVar1, (4294966296 - bVar1), 1))
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		bVar1++;
	}
	Call_Loc(*iParam2);
	if (!StackVal)
	{
		return;
	}
	return;
}

bool Function_124(bool bParam0, int iParam1, int iParam2) //Position: 0x40DF / 16607
{
	var uVar0;
	
	return Function_125(bParam0, iParam1, &uVar0, iParam2);
}

int Function_125(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x40F0 / 16624
{
	char* cVar0[32];
	
	if (NET_PLAYER_LIST_SET_CURRENT_ITEM_BY_SLOT(bParam0) != 4294967295)
	{
		*uParam2 = 0;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_PRIORITY(iParam1);
		return 1;
	}
	*uParam2 = 1;
	if (bParam3)
	{
		strcpy(&cVar0, "WWWWWWWWWWWWWW", 32);
		if (bParam0 <= 10)
		{
			stradd(&cVar0, "0", 32);
		}
		stradd(&cVar0, I2STR(bParam0), 32);
		return NET_PLAYER_LIST_ADD_ITEM(&cVar0, iParam1);
	}
	return NET_PLAYER_LIST_ADD_GAMER_SLOT(bParam0, iParam1);
}

bool Function_126(bool bParam0, int iParam1, bool bParam2) //Position: 0x4155 / 16725
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_95(iParam1, bParam2);
	}
	if (!Function_30(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_127(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_76943[bParam096].f_124 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_127(int iParam0) //Position: 0x41D6 / 16854
{
	switch (iParam0)
	{
		case 0x00000002:
			return "DEAD";
			break;
		
		case 0x00000004:
			return "READY";
			break;
		
		case 0x00000008:
			return "POKER_FOLDED";
			break;
		
		case 0x00000010:
			return "RACE_FINISHED";
			break;
		
		case 0x00000020:
			return "REGION_HOST";
			break;
		
		case 0x00000080:
			return "ACTOR_HIDDEN";
			break;
		
		case 0x00000100:
			return "VOTE_TO_START";
			break;
		
		case 0x00000200:
			return "VOTE_TO_SKIP";
			break;
		
		case 0x00000400:
			return "VOTE_TO_REPLAY";
			break;
		
		case 0x00000001:
			return "IS_IN_LOBBY";
			break;
		
		case 0x00000040:
			return "GAME_ARBITRATOR";
			break;
		
		case 0x00000800:
			return "JOINED_GAME";
			break;
		
		case 0x00001000:
			return "SKIP_CUTSCENE";
			break;
		
		case 0x00002000:
			return "START_CUTSCENE";
			break;
		
		case 0x00004000:
			return "IS_SPECTATOR";
			break;
		
		case 0x00008000:
			return "DISTRICT_HOST";
			break;
		
		case 0x00010000:
			return "NEEDS_REVIVAL";
			break;
		
		case 0x00020000:
			return "MP_BIT_MPLAW_MOSTWANTED";
			break;
		
		case 0x00040000:
			return "HAS_VIRAL_ACHIEVEMENT";
			break;
		
		case 0x00080000:
			return "COMBATMODE_CASUAL";
			break;
		
		case 0x00100000:
			return "COMBATMODE_EXPERT";
			break;
		
		case 0x00200000:
			return "IN_ACTOR_PICKER";
			break;
		
		case 0x00400000:
			return "MELEE_BLOCKED";
			break;
		
		case 0x00800000:
			return "BLIND_FIRE";
			break;
	}
	return "UNKNOWN";
}

void Function_128(bool bParam0) //Position: 0x445F / 17503
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_26(16384, 0, 1);
	return;
}

bool Function_129() //Position: 0x4479 / 17529
{
	return Function_28(32768);
}

int Function_130() //Position: 0x4486 / 17542
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (Function_129() && Function_28(2048))
	{
		bVar0 = StackVal;
		if (bVar0 == 4294967295)
		{
			bVar0 = GET_LOCAL_SLOT();
			iVar1 = StackVal;
		}
		else
		{
			iVar1 = StackVal;
		}
		if (iVar1 < 8)
		{
			iVar2 = (iVar1 - Local_29.f_80);
			iVar3 = 0;
			while (iVar3 <= iVar2)
			{
				NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_barker_open_spot"), (4294966296 - iVar3));
				iVar3++;
			}
		}
	}
	return 1;
}

int Function_131(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x450C / 17676
{
	bool bVar0;
	
	if (!Function_28(2048))
	{
		return Function_132(bParam0, uParam1, uParam2, uParam3);
	}
	if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_376, bParam0))
	{
		if (StackVal == 4294967295)
		{
			bVar0 = GET_LOCAL_SLOT();
			if (bParam0 == bVar0)
			{
				Function_124(bParam0, 10, 0);
			}
			else if (StackVal == bVar0)
			{
				Function_124(bParam0, 0, 0);
			}
		}
		else if (StackVal == bParam0)
		{
			Function_124(bParam0, 10, 0);
		}
		else if (StackVal == StackVal)
		{
			Function_124(bParam0, 0, 0);
		}
	}
	return 0;
}

int Function_132(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x45A7 / 17831
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	Function_137(bParam1, uParam2, uParam3);
	iVar0 = Function_136(bParam0);
	if (iVar0 == Function_135())
	{
		iVar1 = ((CEIL(Function_133(1, bParam0)) / 1000) + 5000000);
	}
	else
	{
		iVar1 = ((CEIL(Function_133(1, bParam0)) / 1000) + iVar0 * 10000);
	}
	if (!bParam1)
	{
		Function_124(bParam0, iVar1, 0);
	}
	bVar2 = false;
	memcpy(&uVar3, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_69(iVar0), 16);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar2, UI_GET_STRING(&uVar3));
	bVar2++;
	if (Function_126(bParam0, 131072, 1))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar2, "<SKULL>");
	}
	return 0;
}

var Function_133(int iParam0, bool bParam1) //Position: 0x463F / 17983
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_134(iParam0);
	}
	if (!Function_30(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

var Function_134(int iParam0) //Position: 0x46A8 / 18088
{
	return (*&Global_78480 + 176)[iParam0];
}

int Function_135() //Position: 0x46B8 / 18104
{
	return Global_78480;
}

int Function_136(bool bParam0) //Position: 0x46C2 / 18114
{
	if (!Function_30(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_135();
	}
	return Global_76943[bParam096];
}

void Function_137(bool bParam0, int iParam1, char* cParam2) //Position: 0x46E7 / 18151
{
	if (bParam0)
	{
		if (Function_129())
		{
			NET_PLAYER_LIST_ADD_ITEM(cParam2, iParam1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
		}
	}
	return;
}

int Function_138() //Position: 0x4708 / 18184
{
	if (Function_28(2048))
	{
		if (Function_129())
		{
			Function_146(Local_29.f_92);
		}
		if (Function_129() || Function_145(&Global_76905 + 64, &Local_29 + 1228))
		{
			NET_PLAYER_LIST_SET_TITLE(&Local_29 + 1228);
		}
		if (!Function_141(0))
		{
			return 0;
		}
		NET_PLAYER_LIST_SET_TEAM_SORT(0);
		NET_PLAYER_LIST_SET_HEADER(1, "Common_Null");
		NET_PLAYER_LIST_SET_HEADER(2, "Common_Null");
		NET_PLAYER_LIST_SET_HEADER(3, "Common_Null");
		NET_PLAYER_LIST_SET_HEADER(4, "Common_Null");
		NET_PLAYER_LIST_SET_HEADER(5, "Common_Null");
		NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "");
		Function_26(8192, 0, 1);
		Function_26(131072, 1, 1);
	}
	else
	{
		if (Function_129())
		{
			Function_154();
		}
		return Function_139();
	}
	return 1;
}

int Function_139() //Position: 0x47E5 / 18405
{
	if (!Function_141(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_TEAM_SORT(0);
	NET_PLAYER_LIST_SET_HEADER(0, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_region");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_mw");
	NET_PLAYER_LIST_SET_HEADER(4, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(5, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_140();
	return 1;
}

void Function_140() //Position: 0x4881 / 18561
{
	if (Function_28(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_26(8192, 1, 1);
	}
	else if (Function_28(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_26(8192, 1, 1);
	}
	else
	{
		Function_26(8192, 0, 1);
	}
	return;
}

bool Function_141(bool bParam0) //Position: 0x48BE / 18622
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_129() || Function_145(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_143(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_129())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_142(Function_129());
	return 1;
}

void Function_142(bool bParam0) //Position: 0x493F / 18751
{
	if (bParam0 || Function_28(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_28(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_28(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_28(1048576) || Function_28(4)) || Function_95(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_26(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_143(var uParam0) //Position: 0x49C8 / 18888
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_144(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_144(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x49DC / 18908
{
	char* cVar0[64];
	
	if (bParam29)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 48) };
	}
	else
	{
		strcpy(&cVar0, UI_GET_STRING(&iParam0 + 48), 64);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "nINVALID!?", 64);
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_145(bool bParam0, bool bParam1) //Position: 0x4A21 / 18977
{
	if (IS_STRING_VALID(bParam0) != IS_STRING_VALID(bParam1))
	{
		return 1;
	}
	if (!IS_STRING_VALID(bParam0))
	{
		return 0;
	}
	if (!STRINGS_ARE_EQUAL(bParam0, bParam1))
	{
		return 1;
	}
	return 0;
}

void Function_146(char* cParam0) //Position: 0x4A55 / 19029
{
	if (Function_145(cParam0, &Global_76905))
	{
		Function_26(0x4000000, 1, 1);
	}
	strcpy(&Global_76905, cParam0, 64);
	return;
}

void Function_147() //Position: 0x4A79 / 19065
{
	Function_26(32768, 1, 0);
	return;
}

int Function_148() //Position: 0x4A88 / 19080
{
	if (StackVal == 4294967295)
	{
		return Function_33(GET_LOCAL_SLOT());
	}
	return Function_33(StackVal);
}

bool Function_149() //Position: 0x4AAA / 19114
{
	return Global_78480.f_24 == 4294967294;
}

void Function_150() //Position: 0x4ABA / 19130
{
	bool bVar0;
	
	if (NET_IS_IN_SESSION())
	{
		bVar0 = GET_LOCAL_SLOT();
		if (bVar0 > 0 || bVar0 <= 16)
		{
		}
		else if (!IS_SLOT_VALID(bVar0))
		{
		}
		else
		{
			Local_376[bVar04] = { StackVal, StackVal, StackVal, *(&Local_29 + 1372) };
		}
	}
	return;
}

void Function_151(var uParam0, int iParam1) //Position: 0x4AF7 / 19191
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_152(var uParam0, int iParam1) //Position: 0x4B0A / 19210
{
	Function_151(uParam0, iParam1);
	return;
}

void Function_153() //Position: 0x4B17 / 19223
{
	Function_25(4294967295, 0);
	return;
}

void Function_154() //Position: 0x4B22 / 19234
{
	Function_146(Function_112());
	return;
}

void Function_155(int iParam0) //Position: 0x4B2E / 19246
{
	Function_152(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_156() //Position: 0x4B67 / 19303
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		Function_74(iVar0);
		iVar0++;
	}
	return;
}

void Function_157() //Position: 0x4B85 / 19333
{
	return;
}

void Function_158(int iParam0) //Position: 0x4B8B / 19339
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	
	iParam0->f_8 = "";
	iParam0->f_500 = 4294967295;
	iParam0->f_1068 = 0;
	iParam0->f_1072 = 4294967295;
	iParam0->f_12 = CREATE_LAYOUT("BarkerLayout");
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= (&Global_78617 + 196)->f_2404)
	{
		(*iParam0 + 16)[iVar02] = "";
		(iParam0 + 16[iVar02])->f_4 = Function_11(StackVal, StackVal, *(&Global_78617 + 196[iVar010]), 0, 1, 0);
		if (StackVal == 4294967295)
		{
			strcpy(&cVar2, "Error! Barker added for ", 64);
			stradd(&cVar2, &Global_78617 + 196[iVar010] + 20, 64);
			stradd(&cVar2, " not in valid region!", 64);
			if (iVar1 == 4294967295)
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 4294967295)
	{
		iVar0 = iVar1;
		while (iVar0 < ((&Global_78617 + 196)->f_2404 - 1))
		{
			while (StackVal != 4294967295 && (&Global_78617 + 196)->f_2404 < 0)
			{
				*(&Global_78617 + 196[iVar010]) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78617 + 196[((&Global_78617 + 196)->f_2404 - 1)10]) };
				*(iParam0 + 16[iVar02]) = { StackVal, *(iParam0 + 16[((&Global_78617 + 196)->f_2404 - 1)2]) };
				(&Global_78617 + 196)->f_2404 = ((&Global_78617 + 196)->f_2404 - 1);
			}
			iVar0++;
		}
	}
	return;
}

void Function_159(var uParam0, int iParam1) //Position: 0x4CFA / 19706
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_160(int iParam0) //Position: 0x4D09 / 19721
{
	return Function_161(Global_79336, iParam0);
}

int Function_161(var uParam0, bool bParam1) //Position: 0x4D18 / 19736
{
	return (uParam0 && bParam1) == 0;
}

void Function_162() //Position: 0x4D25 / 19749
{
	return;
}

int Function_163(bool bParam0) //Position: 0x4D2B / 19755
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return STRING_TO_INT(bVar0);
	}
	return 4294967295;
}

bool Function_164(bool bParam0) //Position: 0x4D4E / 19790
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

bool Function_165() //Position: 0x4D6D / 19821
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = _GET_PARAM_VALUE("mploadgamemode", "DM_ARM");
	if (IS_STRING_VALID(bVar0))
	{
		iVar1 = Function_170(bVar0);
		if (iVar1 >= 4294967295)
		{
			Function_169(iVar1);
			return 1;
		}
	}
	bVar0 = _GET_PARAM_VALUE("mploadplaylist", "MULTI_ROTATION_FFA");
	if (IS_STRING_VALID(bVar0))
	{
		iVar2 = Function_167(bVar0);
		if (iVar2 != 0)
		{
			Function_166(iVar2);
			return 1;
		}
	}
	return 0;
}

void Function_166(int iParam0) //Position: 0x4DFC / 19964
{
	Global_79961 = iParam0;
	return;
}

int Function_167(char* cParam0) //Position: 0x4E08 / 19976
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (Function_168(&(Global_0[iVar0168]), cParam0))
		{
			return Global_0[iVar0168].f_64;
		}
		iVar0++;
	}
	return 0;
}

bool Function_168(char* cParam0, char* cParam1) //Position: 0x4E3B / 20027
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, cParam0, 64);
	strcpy(&cVar16, cParam1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

void Function_169(int iParam0) //Position: 0x4E66 / 20070
{
	Global_79960 = iParam0;
	return;
}

var Function_170(int iParam0) //Position: 0x4E72 / 20082
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_83589)
	{
		Function_7(iVar0, &uVar1);
		if (Function_168(&uVar1, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_171() //Position: 0x4EA3 / 20131
{
	Function_172(&Local_29 + 4);
	return;
}

void Function_172(char* cParam0) //Position: 0x4EB0 / 20144
{
	strcpy(cParam0, "FREEROAM", 16);
	cParam0->f_16 = 4294967295;
	cParam0->f_28 = 4294967295;
	cParam0->f_32 = 0;
	cParam0->f_36 = 0;
	return;
}

void Function_173() //Position: 0x4ED9 / 20185
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		Local_376[iVar04] = 4294967295;
		Local_376[iVar04].f_8 = 4294967295;
		iVar0++;
	}
	return;
}

var Function_174(bool bParam0) //Position: 0x4F04 / 20228
{
	bool bVar0;
	
	bVar0 = Function_175();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_175() //Position: 0x4F18 / 20248
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

