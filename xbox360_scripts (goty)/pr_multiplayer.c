//Decompiled with MagicRDR v1.0
//Function Count : 225
//Statics Count : 492
//Natives Count : 214
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
	int iLocal_12 = 0;
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
	var uLocal_28 = 11;
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
	var uLocal_50 = 11;
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
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	bool bLocal_68 = false;
	struct<1417> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	bool bVar20;
	int iVar21;
	float fVar22;
	bool bVar23;
	var uVar24;
	bool bVar27;
	
	fLocal_10 = 1.0f;
	iLocal_12 = 0;
	bLocal_68 = false;
	Local_69.f_44 = 0;
	iVar2 = 4294967295;
	bVar3 = false;
	iVar12 = 0;
	bVar13 = false;
	fVar18 = (TO_FLOAT(250) / 1000.0f);
	fVar19 = 0.0f;
	Local_69.f_88 = "";
	Local_69.f_1248 = Function_223("PR_MULTIPLAYER_NET_EVENTS");
	Function_222();
	REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_427, 65);
	Function_220();
	Function_214();
	NET_LOG(true, "GAME INVITE", "Ready For Invite Sent", false, false, false, false);
	UI_SEND_EVENT("net.readyForInvite");
	WAIT(false);
	bVar23 = false;
	bVar27 = 1000;
	if (Function_213("netRandomSessioning"))
	{
		bVar23 = Function_212("netRandomSessioning");
		if (bVar23 < 2)
		{
			bVar23 = 3;
		}
	}
	while (!IS_EXITFLAG_SET())
	{
		if (Local_69.f_44 >= 1)
		{
			Function_211();
		}
		if (!Function_210(1))
		{
			Local_69.f_44 = 11;
		}
		switch (Local_69.f_44)
		{
			case 0x00000000:
				Local_69.f_84 = 0;
				Function_209(&Local_69 + 84, 1);
				Local_69.f_44 = 1;
			
			case 0x00000001:
				Function_208(&Local_69 + 128);
				Function_207();
				Local_69.f_44 = 2;
			
			case 0x00000002:
				Local_69.f_44 = 3;
				break;
			
			case 0x00000003:
				iVar0 = 4294967295;
				iVar1 = 4294967295;
				Local_69.f_108 = 4294967295;
				Local_69.f_124 = 4294967295;
				Local_69.f_112 = 4294967295;
				Local_69.f_120 = 4294967295;
				Local_69.f_104 = 4294967295;
				Local_69.f_116 = 4294967295;
				Local_69.f_68 = 4294967295;
				Local_69.f_72 = 4294967295;
				Local_69.f_76 = 4294967295;
				iVar2 = 4294967295;
				Local_69.f_1416 = 4294967295;
				(&Local_69 + 1416)->f_8 = 4294967295;
				Local_69.f_1404 = 4294967295;
				Local_69.f_1408 = 4294967295;
				Function_206();
				Local_69.f_100 = 1;
				Function_205(65536);
				Function_204();
				Function_203();
				Function_202(&Global_79349 + 44, 64);
				Function_209(&Local_69 + 84, 1);
				Function_201(&Local_69 + 84, 9102);
				Function_205(32768);
				bVar3 = false;
				bVar13 = false;
				Local_69.f_44 = 4;
			
			case 0x00000004:
				Function_200();
				if (Local_69.f_100)
				{
					if (NET_IS_IN_SESSION())
					{
						NET_PLAYER_BARKER_RESET(GET_LOCAL_SLOT(), 4294967295, 4294967295, 3212836864);
						Local_69.f_100 = 0;
					}
				}
				if (Function_210(32768) && !Function_199())
				{
					iVar21 = Function_198();
					if (Local_69.f_80 != iVar21)
					{
						Local_69.f_80 = iVar21;
						Function_197();
					}
					Function_169(25296, 24454, 24320);
				}
				if (Function_132(&Local_69 + 128, &bVar20, Local_69.f_124, Function_168(), !Function_210(32768), GET_DEBUG_DRAW_STATE()))
				{
					if (bVar20 != 4294967295)
					{
						if (Function_131(bVar20))
						{
							switch ((&Global_78617 + 196[bVar2010])->f_36)
							{
								case 0x00000048:
									if (Global_3403 || Function_130(131072, 1))
									{
										Function_127("net_help_wanted_no_teleport", 5.0f, 1, 0, 2, 1, 0);
									}
									else
									{
										Function_124();
										PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
									}
									break;
								
								case 0x00000049:
									Function_123();
									break;
								
								case 0x0000003D:
									Function_117((&Local_69 + 128)->f_1072, bVar20);
									break;
								
								default:
									break;
							}
						}
						else if (!Function_210(32768))
						{
							Local_69.f_108 = bVar20;
							Local_69.f_124 = bVar20;
							if (NET_GET_POSSE_COUNT() >= 1)
							{
								if (!NET_IS_POSSE_LEADER())
								{
									Local_69.f_76 = Local_69.f_108;
									Local_69.f_108 = 4294967295;
									Local_69.f_124 = 4294967295;
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
				if (Local_69.f_76 != 4294967295)
				{
					if (DECOR_CHECK_EXIST(Function_116(), "BarkerPosseLeave"))
					{
						DECOR_REMOVE(Function_116(), "BarkerPosseLeave");
						NET_POSSE_REMOVE_GAMER(GET_LOCAL_SLOT());
						Local_69.f_108 = Local_69.f_76;
						Local_69.f_124 = Local_69.f_76;
						Local_69.f_76 = 4294967295;
					}
					else if (!UI_ISACTIVE("MP_BarkerPosseLeave"))
					{
						Local_69.f_76 = 4294967295;
					}
				}
				if (bVar23 != 0)
				{
					if (UI_ISFOCUSED("HudSceneOnline") && !UI_ISACTIVE("HudMPNoFun"))
					{
						if (Function_115(&uVar24))
						{
							if (Function_110(&uVar24, TO_FLOAT(bVar27)))
							{
								if (!Function_214())
								{
									bVar3 = true;
								}
							}
						}
						else
						{
							Function_108(&uVar24);
							fVar22 = 0.0f;
							bVar27 = RAND_INT_RANGE((bVar23 / 4), bVar23);
						}
					}
				}
				Local_69.f_104 = NET_GET_AND_CLEAR_GAME_MODE_REQUEST();
				iVar1 = NET_GET_AND_CLEAR_PLAYLIST_REQUEST();
				if (!Function_210(32768))
				{
					Local_69.f_120 = Function_85(&Local_69 + 108);
				}
				if (Function_84(Local_69.f_84, 2097152))
				{
					Function_82();
					Function_201(&Local_69 + 84, 2097152);
				}
				iVar12 = 0;
				if (Function_81(&Local_69 + 1248, &iVar12))
				{
					if (((iVar12 == 0 && iVar12 == 1) && iVar12 == Function_80()) && iVar12 == Function_79())
					{
						Local_69.f_116 = iVar12;
						NET_LOG(true, "GAME INVITE", "Received Game Invite event in PR_multi.sc for Game mode: %s", I2STR(Local_69.f_116), false, false, false);
					}
					else
					{
						NET_LOG(true, "GAME INVITE", "Received NON-LOBBY Game Invite event in PR_multi.sc", false, false, false, false);
						if (iVar12 == Function_80())
						{
							iVar12 = 1;
							Function_78();
						}
						else if (iVar12 == Function_79())
						{
							iVar12 = 1;
							Function_77();
						}
						else if (iVar12 != 1 && (Function_76() || Function_75()))
						{
							Function_74();
						}
					}
				}
				else if (Function_73())
				{
					NET_LOG(true, "Private Session", "Received update from Host", false, false, false, false);
					if ((&Global_78578 + 112)->f_32)
					{
						if (Function_72((&Global_78578 + 112)->f_16))
						{
							if (!Function_210(16))
							{
								NET_LOG(true, "Private Session", "Need to launch lobby", false, false, false, false);
								bVar13 = true;
							}
						}
						else
						{
							NET_LOG(true, "Private Session", "Can't follow private host into playlist we don't have", false, false, false, false);
							UI_SEND_EVENT("net.InviteFailed_NoPlaylist");
						}
					}
					else
					{
						if (Function_210(16))
						{
							NET_LOG(true, "Private Session", "Need to leave lobby", false, false, false, false);
							bVar3 = true;
						}
						if (&Global_78578 + 112)->f_16 == Function_71()
						{
							if (!Function_75())
							{
								iVar1 = Function_71();
							}
							Function_78();
						}
						else if (&Global_78578 + 112)->f_16 == Function_70()
						{
							if (!Function_76())
							{
								iVar1 = Function_70();
							}
							Function_77();
						}
						else
						{
							if (Function_75() || Function_76())
							{
								iVar1 = 1;
							}
							Function_74();
						}
					}
					*(&Local_69 + 4) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78578 + 112) };
				}
				if (((NET_GET_AND_CLEAR_QUIT_GAME_REQUEST() || iVar1 != Function_71()) || iVar1 != Function_70()) || iVar1 != 1)
				{
					bVar3 = true;
					if (iVar1 == Function_71())
					{
						iVar1 = 4294967295;
						if ((NET_GET_PLAYMODE() != 1 && NET_IS_SESSION_HOST()) && !Function_75())
						{
							strcpy(&Var4, "FREEROAM", 16);
							Var4.f_16 = Function_71();
							Var4.f_28 = 4294967295;
							Function_69(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, Var4);
						}
						Function_78();
					}
					else if (iVar1 == Function_70())
					{
						iVar1 = 4294967295;
						if ((NET_GET_PLAYMODE() != 1 && NET_IS_SESSION_HOST()) && !Function_76())
						{
							strcpy(&Var4, "FREEROAM", 16);
							Var4.f_16 = Function_70();
							Var4.f_28 = 4294967295;
							Function_69(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, Var4);
						}
						Function_77();
					}
					else
					{
						if ((NET_GET_PLAYMODE() != 1 && NET_IS_SESSION_HOST()) && (Function_75() || Function_76()))
						{
							strcpy(&Var4, "FREEROAM", 16);
							Var4.f_16 = 4294967295;
							Var4.f_28 = 4294967295;
							Function_69(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, Var4);
						}
						if (iVar1 == 1)
						{
							iVar1 = 4294967295;
						}
						Function_74();
					}
				}
				if (Local_69.f_116 != 4294967295)
				{
					if (Function_72(Local_69.f_116))
					{
						iVar1 = Local_69.f_116;
						iVar2 = 2;
					}
					else
					{
						iVar0 = Local_69.f_116;
						iVar2 = 2;
					}
				}
				else if (bVar13)
				{
					iVar2 = 3;
				}
				else if (Local_69.f_120 == 4294967295 && !Function_210(32768))
				{
					(&Local_69 + 1416)->f_8 = Local_69.f_120;
					Local_69.f_1396 = STRING_TO_HASH(GET_SLOT_NAME(StackVal));
					Local_69.f_1400 = Local_427[Local_69.f_1204];
					Local_69.f_124 = Local_69.f_1400;
					Function_68(Local_69.f_1400);
					Function_66();
					Function_59();
				}
				else if (Local_69.f_108 == 4294967295 && !Function_210(32768))
				{
					(&Local_69 + 1416)->f_8 = 4294967295;
					Function_197();
					Local_69.f_124 = Local_69.f_108;
					Function_57(Local_69.f_108);
					Function_59();
					Function_56(GET_LOCAL_SLOT());
				}
				else if (Local_69.f_104 != 4294967295)
				{
					iVar0 = Local_69.f_104;
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
					if (Function_72(Global_79961))
					{
						iVar1 = Global_79961;
						iVar2 = 0;
					}
					Global_79961 = 4294967295;
				}
				if (iVar12 == 1)
				{
					NET_LOG(true, "PR_MULTIPLAYER", "Invite to FreeMode Received", false, false, false, false);
					if (Function_210(16))
					{
						NET_LOG(true, "PR_MULTIPLAYER", "---------------Requesting Lobby Disable", false, false, false, false);
						Function_55();
					}
					else
					{
						Local_69.f_44 = 5;
					}
					Function_82();
				}
				else if ((iVar0 == 4294967295 || iVar1 == 4294967295) || bVar13)
				{
					Function_201(&Local_69 + 84, 1);
					if (iVar0 != 4294967294)
					{
						if (iVar2 == 4294967295)
						{
						}
						Function_48(&Local_69 + 128, 1);
						Function_46(128);
					}
					Function_82();
					Local_69.f_44 = 5;
				}
				else if (bVar3)
				{
					Function_55();
					bVar3 = false;
					Function_82();
				}
				else if (Function_210(32768))
				{
					if (Function_26(&Local_69 + 112))
					{
						if (Local_69.f_112 == 4294967295)
						{
							iVar0 = Local_69.f_108;
							iVar2 = 4;
						}
						else
						{
							iVar2 = 0;
							if (Function_24(Local_69.f_1400))
							{
								Function_82();
							}
							else
							{
								iVar0 = Local_69.f_1400;
							}
						}
						Local_69.f_44 = 5;
					}
				}
				else if (Local_69.f_44 == 4)
				{
					if (!IS_SCRIPT_VALID(Global_79344))
					{
						Function_22();
					}
				}
				Function_200();
				Function_21(Local_69.f_1248);
				break;
			
			case 0x00000005:
				Function_206();
				Function_66();
				Function_20();
				if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
				}
				Function_205(65536);
				if (Function_19() && iVar0 == 4294967294)
				{
					TERMINATE_SCRIPT(Local_69);
				}
				else if (IS_SCRIPT_VALID(Global_79344))
				{
					Function_55();
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
					Local_69.f_44 = 9;
				}
				else if (iVar0 == 4294967294)
				{
					Global_78617.f_20 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/support/MP_ActorPicker", 0);
					Local_69.f_44 = 3;
				}
				else if (iVar0 != 4294967295)
				{
					Function_46(128);
					if (Local_69.f_112 == 4294967295 || Local_69.f_108 == 4294967295)
					{
						Local_69.f_44 = 7;
					}
					else
					{
						Local_69.f_44 = 6;
					}
				}
				else if (iVar1 != 4294967295)
				{
					Local_69.f_44 = 8;
				}
				else
				{
					Function_22();
					Local_69.f_44 = 3;
				}
				break;
			
			case 0x00000007:
				if (iVar2 == 4294967295)
				{
				}
				if (Function_16(iVar0))
				{
					Function_15(StackVal, StackVal, StackVal, (&Global_78617 + 196[iVar010])->f_36, *(&Global_78617 + 196[iVar010] + 20), iVar2, Local_69.f_112);
				}
				else if ((&Global_78617 + 196[iVar010])->f_16 != 4294967295)
				{
					Function_8((&Global_78617 + 196[iVar010])->f_36, (&Global_78617 + 196[iVar010])->f_16, iVar2, Local_69.f_112);
				}
				else
				{
					Function_8(StackVal, (&Global_78617 + 196[iVar010])->f_36, iVar2, Local_69.f_112);
				}
				Local_69.f_44 = 10;
				break;
			
			case 0x00000006:
				if (iVar2 == 4294967295)
				{
				}
				Function_6(iVar0, iVar2);
				Local_69.f_44 = 10;
				break;
			
			case 0x00000008:
				if (iVar2 == 4294967295)
				{
				}
				Function_5(iVar1, iVar2);
				Local_69.f_44 = 10;
				break;
			
			case 0x00000009:
				if (iVar2 == 4294967295)
				{
				}
				Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78578 + 112) };
				Var4.f_28 = iVar2;
				Function_4(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var4);
				Local_69.f_44 = 10;
				break;
			
			case 0x0000000A:
				if (IS_SCRIPT_VALID(Global_79344))
				{
					Local_69.f_44 = 3;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(false);
	}
	Function_21(Local_69.f_1248);
	Function_66();
	Function_20();
	Function_2(&Local_69 + 128);
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	Function_1(Local_69.f_1248);
	TERMINATE_THIS_SCRIPT();
	return;
}

int Function_1(bool bParam0) //Position: 0xD7D / 3453
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

void Function_2(bool bParam0) //Position: 0xD93 / 3475
{
	Function_48(bParam0, 0);
	Function_3(bParam0);
	if (IS_LAYOUTREF_VALID(bParam0->f_12))
	{
		DESTROY_LAYOUT(bParam0->f_12);
	}
	bParam0->f_12 = "";
	return;
}

void Function_3(bool bParam0) //Position: 0xDBB / 3515
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	return;
}

void Function_4(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) //Position: 0xDD2 / 3538
{
	Global_79344 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/multiplayer/rotations/gametype_lobby", &uParam0, 8, 0);
}

void Function_5(var uParam0, int iParam1) //Position: 0xE17 / 3607
{
	struct<8> Var0;
	
	Var0.f_16 = uParam0;
	itos(&Var0, 4294967295, 16);
	Var0.f_28 = iParam1;
	Var0.f_24 = 0;
	Function_4(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
	return;
}

void Function_6(int iParam0, int iParam1) //Position: 0xE3B / 3643
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

int Function_7(int iParam0, int iParam1) //Position: 0xE72 / 3698
{
	*iParam1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79963[iParam029] };
	return 1;
}

void Function_8(var uParam0, var uParam1, int iParam2, var uParam3) //Position: 0xE89 / 3721
{
	Function_15(StackVal, StackVal, StackVal, uParam0, Function_9(uParam0, uParam1), iParam2, uParam3);
}

struct<16> Function_9(int iParam0, int iParam1) //Position: 0xEA1 / 3745
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

bool Function_10(bool bParam0, int iParam1, bool bParam2) //Position: 0xF47 / 3911
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

var Function_11(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xFAC / 4012
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

struct<16> Function_12(int iParam0, int iParam1) //Position: 0x1047 / 4167
{
	char* cVar0[16];
	
	strcpy(&cVar0, "", 16);
	if (iParam1 <= Function_13(iParam0) || iParam1 > 0)
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, *(iParam0 + 76[iParam14]);
}

int Function_13(int iParam0) //Position: 0x1077 / 4215
{
	return iParam0->f_72;
}

bool Function_14(int iParam0, int iParam1) //Position: 0x1081 / 4225
{
	if (GET_PLAYLIST_FROM_DB(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

void Function_15(var uParam0, struct<4> Param1, var uParam5, var uParam6) //Position: 0x1094 / 4244
{
	struct<8> Var0;
	
	Var0.f_16 = uParam0;
	Var0 = { StackVal, StackVal, StackVal, Param1 };
	Var0.f_28 = uParam5;
	Var0.f_20 = uParam6;
	Var0.f_24 = 1;
	Function_4(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
}

bool Function_16(int iParam0) //Position: 0x10C3 / 4291
{
	return Function_17(&Global_78617 + 196[iParam010]);
}

bool Function_17(bool bParam0) //Position: 0x10D6 / 4310
{
	return bParam0->f_16 != 4294967294;
}

bool Function_18() //Position: 0x10E4 / 4324
{
	return (NET_IS_CONNECTED_FOR_PLAY() && NET_IS_MANAGER_INITIALIZED());
}

bool Function_19() //Position: 0x10F1 / 4337
{
	return IS_SCRIPT_VALID(Local_69);
}

void Function_20() //Position: 0x10FC / 4348
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_69.f_1256))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Local_69.f_1256);
	}
	return;
}

void Function_21(bool bParam0) //Position: 0x1115 / 4373
{
	if (IS_OBJECTSET_VALID(bParam0))
	{
		DISBAND_OBJECTSET(bParam0);
	}
	return;
}

void Function_22() //Position: 0x1128 / 4392
{
	struct<4> Var0;
	struct<21> Var4;
	
	if (!Function_19() && !IS_SCRIPT_VALID(Global_78617.f_20))
	{
		if (!Function_84(Local_69.f_84, 8192))
		{
			Var0 = { StackVal, StackVal, StackVal, Function_23() };
			if (Function_10(&Var0, &Var4, 0))
			{
				Function_209(&Local_69 + 84, 8192);
				Local_69 = LAUNCH_NEW_SCRIPT(GET_ASSET_NAME(Var4.f_20, 4), 0);
			}
		}
	}
	else if (IS_SCRIPT_VALID(Local_69))
	{
		Function_201(&Local_69 + 84, 8192);
	}
	return;
}

struct<16> Function_23() //Position: 0x1190 / 4496
{
	return StackVal, StackVal, StackVal, *(&Global_78617 + 32);
}

bool Function_24(bool bParam0) //Position: 0x11A0 / 4512
{
	if (bParam0 > 0 || bParam0 <= 60)
	{
		return 0;
	}
	if (!Function_25(bParam0))
	{
		return 0;
	}
	return (&Global_78617 + 196[bParam010])->f_16 != 4294967293;
}

bool Function_25(int iParam0) //Position: 0x11D0 / 4560
{
	return (&Global_78617 + 196[iParam010])->f_36 == 0;
}

bool Function_26(int iParam0) //Position: 0x11E4 / 4580
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
	if (Function_41())
	{
		Function_82();
		return 0;
	}
	bVar3 = (NET_IS_POSSE_LEADER() || Function_40());
	if (!bVar0)
	{
		if (IS_SLOT_VALID(StackVal))
		{
			if (StackVal == STRING_TO_HASH(GET_SLOT_NAME(Local_69.f_1396)))
			{
				if (Local_427[StackVal4] != 4294967295)
				{
					if (StackVal == Local_427[(&Local_69 + 1416)->f_124].f_12)
					{
						(&Local_69 + 1416)->f_12 = Local_427[StackVal4].f_12;
						NET_PLAYER_BARKER_RESET(StackVal, StackVal, Function_39((&Global_78617 + 196[Local_427[Local_427[StackVal4]4]10])->f_36), (&Local_69 + 1416)->f_12);
						NET_GAMER_BARKER_ACCEPT(StackVal);
					}
				}
				else
				{
					Function_82();
					return 0;
				}
			}
		}
		if (IS_OBJECTSET_VALID(Local_69.f_1248))
		{
			if (Function_38(Local_69.f_1248, 100, &bVar4, 1))
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
			else if (Function_37(Local_69.f_1248, 61))
			{
				Function_82();
				return 0;
			}
		}
	}
	fVar2 = (((&Local_69 + 1416)->f_12 - NET_GET_NET_TIME()) - 3.0f);
	if ((StackVal && !IS_SLOT_VALID(!bVar0)) && fVar2 < 3.0f)
	{
		Function_82();
		return 0;
	}
	if (bVar1)
	{
		if (Function_84(Local_69.f_84, 16))
		{
			Function_201(&Local_69 + 84, 16);
			Function_36();
		}
		return 1;
	}
	if (bVar0)
	{
		if (fVar2 < 3.0f)
		{
			if (!Function_84(Local_69.f_84, 128))
			{
				if (Function_34())
				{
					(&Local_69 + 1416)->f_12 = (NET_GET_NET_TIME() + 3.0f);
					fVar2 = 3.0f;
				}
				else if (Function_33("net_barker_start_now"))
				{
					(&Local_69 + 1416)->f_12 = (NET_GET_NET_TIME() + 3.0f);
					fVar2 = 3.0f;
				}
			}
		}
		else
		{
			Function_20();
		}
		if (!Function_84(Local_69.f_84, 8))
		{
			Function_209(&Local_69 + 84, 8);
			Local_69.f_92 = "net_barker_invite_join_waiting";
		}
	}
	else
	{
		if (bVar3)
		{
			if (Function_33("common_cancel"))
			{
				Function_82();
				return 0;
			}
		}
		iVar6 = NET_GET_POSSE_LEADER_SLOT();
		if (Function_31(iVar6))
		{
			if (StackVal != 4294967295 && Local_427[iVar64] != 4294967295)
			{
				Function_82();
				return 0;
			}
		}
		if (!Function_84(Local_69.f_84, 8))
		{
			Function_209(&Local_69 + 84, 8);
			Local_69.f_92 = "net_barker_invite_join_allowing";
		}
	}
	if ((fVar2 + 3.0f) <= 0.0f)
	{
		if (!Function_84(Local_69.f_84, 16))
		{
			Function_209(&Local_69 + 84, 16);
			Function_29();
		}
		Function_27(CEIL((fVar2 + 3.0f)), 0);
	}
	else if (Function_84(Local_69.f_84, 16))
	{
		Function_201(&Local_69 + 84, 16);
		Function_36();
		Function_27(0, 0);
	}
	if (bVar0)
	{
		return fVar2 > -3.0f;
	}
	return 0;
}

void Function_27(bool bParam0, bool bParam1) //Position: 0x14E9 / 5353
{
	if (Global_76905.f_128 != bParam0)
	{
		Function_28(0x20000000, 1, 1);
	}
	Global_76905.f_128 = bParam0;
	Function_28(65536, bParam1, 1);
	return;
}

void Function_28(int iParam0, bool bParam1, int iParam2) //Position: 0x1516 / 5398
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_209(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_201(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_29() //Position: 0x153E / 5438
{
	if (!Function_30(1048576))
	{
		Function_28(0x10000000, 1, 1);
	}
	Function_28(1048576, 1, 1);
	return;
}

bool Function_30(int iParam0) //Position: 0x1562 / 5474
{
	return Function_84(Global_76905.f_132, iParam0);
}

bool Function_31(bool bParam0) //Position: 0x1573 / 5491
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_32(bParam0);
}

bool Function_32(bool bParam0) //Position: 0x1589 / 5513
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

bool Function_33(bool bParam0) //Position: 0x162A / 5674
{
	int iVar0;
	float fVar1;
	bool bVar2;
	
	if (!IS_SCRIPT_USE_CONTEXT_VALID(Local_69.f_1256))
	{
		Local_69.f_1256 = ADD_SCRIPT_USE_CONTEXT(bParam0, 4294967096, 4, false, 0, 0, 0, 4294967295, 0);
		Local_69.f_1252 = -1.0f;
	}
	else if (UI_ISFOCUSED("HudSceneOnline"))
	{
		iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
		if (IS_BUTTON_DOWN(iVar0, 4, 1, false))
		{
			fVar1 = NET_GET_NET_TIME();
			if (Local_69.f_1252 >= 0.0f)
			{
				Local_69.f_1252 = fVar1;
			}
			if ((fVar1 - Local_69.f_1252) <= 1.0f)
			{
				Function_20();
				PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
				return 1;
			}
		}
		if (Local_69.f_1252 < 0.0f)
		{
			Local_69.f_1252 = -1.0f;
			bVar2 = Function_168();
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
		Local_69.f_1252 = -1.0f;
	}
	return 0;
}

bool Function_34() //Position: 0x16FD / 5885
{
	int iVar0;
	
	if (StackVal == 4294967295)
	{
		iVar0 = Function_35(GET_LOCAL_SLOT());
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

int Function_35(bool bParam0) //Position: 0x1747 / 5959
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_427, bVar0))
		{
			if (bVar0 == bParam0)
			{
				if (Local_427[bVar04] != 4294967295)
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

void Function_36() //Position: 0x179F / 6047
{
	if (Function_30(1048576))
	{
		Function_28(0x10000000, 1, 1);
	}
	Function_28(1048576, 0, 1);
	return;
}

bool Function_37(bool bParam0, int iParam1) //Position: 0x17C2 / 6082
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
			return 1;
		}
		bVar1++;
	}
	return 0;
}

bool Function_38(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x1804 / 6148
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

int Function_39(int iParam0) //Position: 0x185D / 6237
{
	switch (iParam0)
	{
		case 0x00000035:
			return 3;
		
		case 0x00000036:
			return 4;
		
		case 0x0000003D:
			return 2;
		
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

var Function_40() //Position: 0x18C2 / 6338
{
	return NET_GET_POSSE_COUNT() >= 1;
}

bool Function_41() //Position: 0x18CD / 6349
{
	if (Function_44() && !Function_42(512))
	{
		return 1;
	}
	return Function_199();
}

bool Function_42(int iParam0) //Position: 0x18E6 / 6374
{
	return Function_43(iParam0);
}

int Function_43(int iParam0) //Position: 0x18F1 / 6385
{
	return Function_84((&Global_83591 + 140)->f_56, iParam0);
}

bool Function_44() //Position: 0x1904 / 6404
{
	if (Function_45(1) <= 0)
	{
		return 0;
	}
	return Global_29006 != Function_45(1);
}

int Function_45(int iParam0) //Position: 0x191C / 6428
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

void Function_46(int iParam0) //Position: 0x193C / 6460
{
	Function_47(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_47(var uParam0, int iParam1) //Position: 0x1995 / 6549
{
	Function_209(uParam0, iParam1);
	return;
}

void Function_48(int iParam0, int iParam1) //Position: 0x19A2 / 6562
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		Function_54(iParam0 + 16[iVar02], 1);
		iVar0++;
	}
	Function_49(iParam0, iParam1);
	return;
}

void Function_49(int iParam0, int iParam1) //Position: 0x19CE / 6606
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		Function_50(iParam0 + 504[iVar014], iParam1);
		iVar0++;
	}
	iParam0->f_1068 = 0;
	return;
}

void Function_50(var uParam0, bool bParam1) //Position: 0x19FB / 6651
{
	if (IS_OBJECT_VALID(uParam0->f_52))
	{
		Function_51(uParam0);
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

void Function_51(int iParam0) //Position: 0x1A26 / 6694
{
	Function_53(iParam0);
	if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(iParam0->f_52)))
	{
		REMOVE_BLIP(GET_BLIP_ON_OBJECT(iParam0->f_52));
	}
	Function_52(iParam0->f_52);
	return;
}

void Function_52(bool bParam0) //Position: 0x1A4F / 6735
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (GET_OBJECT_TYPE(bParam0) != 13)
	{
		return;
	}
	bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
	bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
	ITERATE_IN_LAYOUT(bVar1, bVar0);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	bVar3 = GET_BLIP_ON_OBJECT(bVar2);
	if (IS_BLIP_VALID(bVar3))
	{
		REMOVE_BLIP(bVar3);
	}
	DESTROY_ITERATOR(bVar1);
	return;
}

void Function_53(int iParam0) //Position: 0x1A95 / 6805
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

void Function_54(var uParam0, var uParam1) //Position: 0x1ABB / 6843
{
	if (IS_BLIP_VALID(*uParam0) && uParam1)
	{
		REMOVE_BLIP(*uParam0);
	}
	return;
}

int Function_55() //Position: 0x1AD3 / 6867
{
	if (Function_210(16))
	{
	}
	else
	{
		Global_83803.f_36 = 1;
	}
	Function_205(16);
	return 1;
}

bool Function_56(bool bParam0) //Position: 0x1AF1 / 6897
{
	int iVar0;
	
	if (Function_84((*&Local_69 + 1328)[bParam0], 2))
	{
		return 0;
	}
	Function_209(&Local_69 + 1328[bParam0], 2);
	Function_201(&Local_69 + 1328[bParam0], 8);
	iVar0 = Function_39((&Global_78617 + 196[Local_427[bParam04]10])->f_36);
	NET_PLAYER_BARKER_RESET(bParam0, Local_427[bParam04], iVar0, Local_427[bParam04].f_12);
	return 1;
}

void Function_57(int iParam0) //Position: 0x1B52 / 6994
{
	Local_69.f_1416 = iParam0;
	(&Local_69 + 1416)->f_12 = (NET_GET_NET_TIME() + 90.0f);
	(&Local_69 + 1416)->f_4 = Function_58((&Global_78617 + 196[iParam010])->f_36);
	Function_200();
	return;
}

int Function_58(int iParam0) //Position: 0x1B88 / 7048
{
	struct<69> Var0;
	
	*(&Var0 + 76) = 36;
	if (Function_14(iParam0, &Var0))
	{
		return Var0.f_68;
	}
	return 16;
}

void Function_59() //Position: 0x1BA9 / 7081
{
	Function_201(&Local_69 + 84, 1);
	Function_46(32768);
	Local_69.f_1252 = 0.0f;
	Local_69.f_80 = 0;
	Function_47(&Global_79349 + 44, 64);
	Function_46(65536);
	Function_62();
	Function_66();
	Function_61();
	Function_60();
	return;
}

void Function_60() //Position: 0x1BE7 / 7143
{
	if (IS_STRING_VALID(Local_69.f_88))
	{
		UI_REMOVE_MESSAGE_IN_QUEUE(Local_69.f_88, 1, 0);
		Local_69.f_88 = "";
	}
	return;
}

void Function_61() //Position: 0x1C06 / 7174
{
	Function_201(&Local_69 + 84, 768);
	Local_69.f_1404 = 4294967295;
	Local_69.f_1408 = 4294967295;
	return;
}

void Function_62() //Position: 0x1C22 / 7202
{
	bool bVar0;
	
	if (StackVal == 4294967295)
	{
		bVar0 = Local_69.f_1416;
	}
	else
	{
		bVar0 = Local_69.f_1400;
	}
	if (!Function_64(bVar0, &Local_69 + 1264))
	{
		memcpy(&Local_69 + 1264, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63((&Global_78617 + 196[bVar010])->f_36), 16);
	}
	stradd(&Local_69 + 1264, "_title", 64);
	NET_PLAYER_LIST_SET_TITLE(&Local_69 + 1264);
	return;
}

struct<32> Function_63(int iParam0) //Position: 0x1C82 / 7298
{
	int iVar0;
	char* cVar168[32];
	
	*(&iVar0 + 76) = 36;
	if (GET_PLAYLIST_FROM_DB(iParam0, &iVar0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iVar0 + 32);
	}
	strcpy(&cVar168, "", 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar168;
}

bool Function_64(bool bParam0, int iParam1) //Position: 0x1CB4 / 7348
{
	int iVar0;
	
	if (Function_16(bParam0))
	{
		if (Function_10(&Global_78617 + 196[bParam010] + 20, &iVar0, 0))
		{
			if (Function_65(&iVar0, 1024))
			{
				*iParam1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iVar0 + 48) };
				return 1;
			}
		}
	}
	return 0;
}

bool Function_65(var uParam0, int iParam1) //Position: 0x1CF1 / 7409
{
	return Function_84(uParam0->f_44, iParam1);
}

void Function_66() //Position: 0x1D00 / 7424
{
	if (Function_84(Local_69.f_84, 32))
	{
		Function_201(&Local_69 + 84, 32);
		UI_HIDE("MPEnvelope");
	}
	Function_67();
	return;
}

void Function_67() //Position: 0x1D2E / 7470
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_69.f_1260))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Local_69.f_1260);
	}
	return;
}

void Function_68(bool bParam0) //Position: 0x1D47 / 7495
{
	Local_69.f_1416 = bParam0;
	(&Local_69 + 1416)->f_12 = NET_GET_NET_TIME();
	(&Local_69 + 1416)->f_4 = 4294967295;
	Function_200();
	return;
}

void Function_69(int iParam0, struct<8> Param1) //Position: 0x1D69 / 7529
{
	if (NET_GET_PLAYMODE() == 1)
	{
		if (NET_IS_IN_SESSION())
		{
			if (NET_IS_SESSION_HOST())
			{
				*(&Global_78578 + 112) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
				(&Global_78578 + 112)->f_32 = iParam0;
				(&Global_78578 + 112)->f_36++;
			}
		}
	}
}

int Function_70() //Position: 0x1DAE / 7598
{
	return 31;
}

int Function_71() //Position: 0x1DB6 / 7606
{
	return 32;
}

bool Function_72(int iParam0) //Position: 0x1DBE / 7614
{
	struct<73> Var0;
	
	*(&Var0 + 76) = 36;
	if (Function_14(iParam0, &Var0))
	{
		if (Var0.f_72 >= 0)
		{
			return 1;
		}
		if ((iParam0 != 33 || iParam0 != 32) || iParam0 != 31)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_73() //Position: 0x1DF9 / 7673
{
	if (NET_GET_PLAYMODE() == 1)
	{
		if (NET_IS_IN_SESSION())
		{
			if (!NET_IS_SESSION_HOST())
			{
				return (&Local_69 + 4)->f_36 == (&Global_78578 + 112)->f_36;
			}
		}
		Function_220();
	}
	return 0;
}

void Function_74() //Position: 0x1E2A / 7722
{
	NET_SET_FREE_ROAM_MODE(0);
	return;
}

bool Function_75() //Position: 0x1E34 / 7732
{
	return NET_GET_FREE_ROAM_MODE() != 1;
}

bool Function_76() //Position: 0x1E3F / 7743
{
	return NET_GET_FREE_ROAM_MODE() != 2;
}

void Function_77() //Position: 0x1E4A / 7754
{
	NET_SET_FREE_ROAM_MODE(2);
	return;
}

void Function_78() //Position: 0x1E54 / 7764
{
	NET_SET_FREE_ROAM_MODE(1);
	return;
}

int Function_79() //Position: 0x1E5E / 7774
{
	return 31;
}

int Function_80() //Position: 0x1E66 / 7782
{
	return 32;
}

bool Function_81(int iParam0, int iParam1) //Position: 0x1E6E / 7790
{
	bool bVar0;
	
	if (IS_OBJECTSET_VALID(*iParam0))
	{
		if (Function_38(*iParam0, 71, &bVar0, 0))
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

void Function_82() //Position: 0x1EB2 / 7858
{
	if (Function_210(32768))
	{
		Function_205(65536);
		Function_204();
		Function_203();
		Function_83(&Local_69 + 128, Local_69.f_124);
		if (StackVal >= 4294967295)
		{
			NET_GAMER_BARKER_REJECT(StackVal);
		}
		Local_69.f_100 = 1;
		Function_209(&Local_69 + 84, 1);
		Function_205(32768);
		Local_69.f_1252 = 0.0f;
		Local_69.f_80 = 0;
		(&Local_69 + 1416)->f_12 = NET_GET_NET_TIME();
		Function_202(&Global_79349 + 44, 64);
		Function_201(&Local_69 + 84, 16);
		Function_36();
		Function_20();
		Function_197();
		Function_28(16, 0, 1);
		Local_69.f_1416 = 4294967295;
		(&Local_69 + 1416)->f_8 = 4294967295;
		Local_69.f_108 = 4294967295;
		Local_69.f_124 = 4294967295;
		Function_66();
		Function_61();
		Function_200();
	}
	return;
}

void Function_83(int iParam0, int iParam1) //Position: 0x1F60 / 8032
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1068)
	{
		if ((iParam0 + 504[iVar014])->f_48 == iParam1)
		{
			Function_53(iParam0 + 504[iVar014]);
			return;
		}
		iVar0++;
	}
	return;
}

bool Function_84(var uParam0, int iParam1) //Position: 0x1F99 / 8089
{
	return (uParam0 && iParam1) == 0;
}

var Function_85(int iParam0) //Position: 0x1FA6 / 8102
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	char* cVar8[64];
	int iVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	int iVar28;
	bool bVar29;
	char* cVar30[32];
	var uVar38;
	bool bVar54;
	int iVar55;
	struct<8> Var56;
	int iVar64;
	
	if (!NET_IS_IN_SESSION())
	{
		Function_66();
		Function_61();
		Function_206();
		Function_222();
		Function_60();
		return 4294967295;
	}
	if (!Function_210(131072) || HUD_IS_FADED())
	{
		Function_60();
		Function_66();
		Function_61();
		return 4294967295;
	}
	bVar1 = 4294967295;
	bVar2 = GET_LOCAL_SLOT();
	bVar3 = (NET_IS_POSSE_LEADER() || Function_40());
	iVar4 = NET_GET_POSSE_COUNT();
	iVar6 = 2;
	if (*iParam0 != 4294967295)
	{
		iVar6 = 16;
	}
	bVar7 = Function_41();
	if (Function_105(&Local_69 + 1408, &Local_69 + 1404))
	{
		if (!bVar7)
		{
			Function_209(&Local_69 + 84, 512);
		}
	}
	iVar0 = 0;
	while (iVar0 <= iVar6)
	{
		Local_69.f_48 = (Local_69.f_48 + 1 % 16);
		if (Local_69.f_48 == 0)
		{
			Local_69.f_56 = Local_69.f_52;
			Local_69.f_64 = Local_69.f_60;
			if (Local_69.f_64 == 0)
			{
				Local_69.f_68 = 4294967295;
				Local_69.f_72 = 4294967295;
			}
			Local_69.f_52 = 0;
			Local_69.f_60 = 0;
		}
		if (bVar2 != Local_69.f_48)
		{
			if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_427, Local_69.f_48))
			{
				if (Local_427[Local_69.f_484] != 4294967295)
				{
					if (!Function_104(Local_69.f_48))
					{
						if (bVar7)
						{
							Function_103(Local_69.f_48);
							NET_PLAYER_BARKER_RESET(Local_69.f_48, 4294967295, 4294967295, 3212836864);
						}
						else if (Function_24(Local_427[Local_69.f_484]))
						{
							if (Function_102(Local_69.f_48))
							{
								if (StackVal == 4294967295)
								{
									memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_101((&Global_78617 + 196[Local_427[Local_69.f_484]10])->f_36), 16);
									stradd(&cVar8, "_invite", 64);
									PRINT_HELP_FORMAT(10.0f, &cVar8, Function_100(Local_69.f_48), false, 0, 0, 2, 0, 0);
								}
								NET_PLAYER_BARKER_RESET(Local_69.f_48, 4294967295, 4294967295, 3212836864);
								Function_209(&Local_69 + 1328[Local_69.f_48], 10);
							}
						}
						else
						{
							if (*iParam0 == Local_427[Local_69.f_484])
							{
								NET_GAMER_BARKER_ACCEPT(Local_69.f_48);
								Function_60();
								*iParam0 = 4294967295;
							}
							if (NET_GET_USING_SPHERE_CURVES(Local_69.f_48))
							{
								if (StackVal >= 0)
								{
									iVar5 = Function_35(Local_69.f_48);
									iVar24 = (StackVal - iVar5);
									if (iVar24 > iVar4)
									{
										if (bVar1 == 4294967295)
										{
											bVar1 = Local_69.f_48;
										}
									}
									else
									{
										Function_82();
										NET_PLAYER_BARKER_RESET(Local_69.f_48, 4294967295, 4294967295, 3212836864);
									}
								}
								else
								{
									Function_82();
									NET_PLAYER_BARKER_RESET(Local_69.f_48, 4294967295, 4294967295, 3212836864);
								}
							}
							if (Local_69.f_1416 == Local_427[Local_69.f_484])
							{
							}
							else if ((StackVal && bVar3 != 4294967295) && !Function_99(Local_69.f_48))
							{
								Local_69.f_60++;
								if (Function_56(Local_69.f_48))
								{
								}
								if (Function_102(Local_69.f_48))
								{
									Local_69.f_68 = Local_69.f_48;
									Local_69.f_52++;
								}
							}
						}
					}
					else
					{
						NET_PLAYER_BARKER_RESET(Local_69.f_48, 4294967295, 4294967295, 3212836864);
					}
				}
				else
				{
					Function_103(Local_69.f_48);
				}
				if (NET_POSSE_IS_REQUEST_PRESENT(Local_69.f_48) || NET_POSSE_IS_INVITE_PRESENT(Local_69.f_48))
				{
					Local_69.f_60++;
					Local_69.f_96 = NET_POSSE_IS_REQUEST_PRESENT(Local_69.f_48);
					if (Function_98(Local_69.f_48))
					{
					}
					if (Function_97(Local_69.f_48))
					{
						Local_69.f_72 = Local_69.f_48;
						Local_69.f_52++;
					}
				}
				else
				{
					Function_96(Local_69.f_48);
				}
			}
			else
			{
				Function_95(Local_69.f_48);
				NET_PLAYER_BARKER_RESET(Local_69.f_48, 4294967295, 4294967295, 3212836864);
			}
		}
		iVar0++;
	}
	if (!bVar3)
	{
		bVar25 = NET_GET_POSSE_LEADER_SLOT();
		if (IS_SLOT_VALID(bVar25))
		{
			bVar26 = Local_427[bVar254];
			bVar27 = StackVal;
			if (bVar27 != 4294967295)
			{
				bVar26 = Local_427[bVar274];
				if (Function_24(bVar26))
				{
					NET_TICKER_REPORTF(UI_GET_STRING("mp_follow_fail_dlc"), false, false, 0, 0, 0, 0);
					NET_POSSE_REMOVE_GAMER(GET_LOCAL_SLOT());
					return 4294967295;
				}
				if (Function_56(bVar27))
				{
				}
				return bVar27;
			}
			if (bVar26 >= 4294967295)
			{
				if (Function_24(bVar26))
				{
					NET_TICKER_REPORTF(UI_GET_STRING("mp_follow_fail_dlc"), false, false, 0, 0, 0, 0);
					NET_POSSE_REMOVE_GAMER(GET_LOCAL_SLOT());
					return 4294967295;
				}
				if (Function_56(bVar25))
				{
				}
				return bVar25;
			}
		}
	}
	if (!Function_84(Local_69.f_84, 512))
	{
		if (Local_69.f_64 < 0)
		{
			Function_66();
			Function_201(&Local_69 + 84, 262);
			Local_69.f_1412 = 0.0f;
			Function_60();
			return bVar1;
		}
		if (!Function_84(Local_69.f_84, 32))
		{
			Function_209(&Local_69 + 84, 32);
			UI_SHOW("MPEnvelope");
			FLASH_SET_BOOL("net_hud", "Mail.value", Local_69.f_56 >= 0);
		}
		if (Local_69.f_56 < 0)
		{
			Local_69.f_1412 = 0.0f;
			return bVar1;
		}
		Local_69.f_1412 = (Local_69.f_1412 + GET_UNWARPED_REALTIME_SECONDS());
		if (Local_69.f_1412 > 0.5f)
		{
			if (!Function_84(Local_69.f_84, 64))
			{
				Function_209(&Local_69 + 84, 64);
				UI_HIDE("MPEnvelope");
			}
		}
		else if (Local_69.f_1412 > (0.5f * 2.0f))
		{
			if (Function_84(Local_69.f_84, 64))
			{
				Function_201(&Local_69 + 84, 64);
				UI_SHOW("MPEnvelope");
				FLASH_SET_BOOL("net_hud", "Mail.value", false);
			}
		}
		else
		{
			Local_69.f_1412 = 0.0f;
		}
	}
	if (!UI_ISFOCUSED("HudSceneOnline"))
	{
		return bVar1;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_69.f_1260))
	{
		if (IS_SCRIPT_USE_CONTEXT_PRESSED(Local_69.f_1260))
		{
			Function_60();
			if (Function_84(Local_69.f_84, 512))
			{
				UI_ACTIVATE("NetConf_FRDTeleport");
				Local_69.f_1404 = 4294967295;
				Function_201(&Local_69 + 84, 768);
				Function_61();
			}
			else
			{
				if (Local_69.f_56 == 1)
				{
					if (Local_69.f_72 != 4294967295)
					{
						NET_PLAYER_SHOW_CONTEXT_MENU(Local_69.f_72, "mp_gamer_partyjoin");
					}
					else if (Local_69.f_68 != 4294967295)
					{
						NET_PLAYER_SHOW_CONTEXT_MENU(Local_69.f_68, "mp_gamer_joinbarker");
						UI_SEND_EVENT("refreshcontextmenu");
					}
				}
				else
				{
					UI_PUSH("OL_NetworkingMenu");
					UI_SEND_EVENT("r1_released");
				}
				Function_201(&Local_69 + 84, 6);
			}
			Function_66();
			Function_92();
			return bVar1;
		}
		if (UI_IS_MESSAGE_QUEUE_EMPTY(1))
		{
			Function_67();
			Function_61();
		}
		else if (bVar7)
		{
			Function_67();
			Function_61();
		}
	}
	if (Function_84(Local_69.f_84, 512) && !bVar7)
	{
		if (!Function_84(Local_69.f_84, 256))
		{
			if (Local_69.f_1404 != 4294967295)
			{
				Function_209(&Local_69 + 84, 256);
				if (Local_69.f_1408 <= 0)
				{
					Local_69.f_88 = "mp_FRD_RunningElsewhere";
				}
				else
				{
					strcpy(&cVar30, "mp_FreeRoamDefense", 32);
					Local_69.f_88 = "net_barker_invite_help_specific";
					memcpy(&uVar38, StackVal, StackVal, StackVal, *(&Global_78617 + 196[Local_69.f_140410] + 20), 16);
					UI_SET_STRING("net_barker_dude", UI_GET_STRING(Function_100(Local_69.f_1408)));
					UI_SET_STRING("net_barker_gametype", UI_GET_STRING(&cVar30));
					UI_SET_STRING("net_barker_location", UI_GET_STRING(&uVar38));
				}
				iVar28 = 1;
				bVar29 = true;
				Function_127(Local_69.f_88, 0x41200000, 1, 0, 2, 1, 0);
				if (Function_90(1024))
				{
					Function_89("ATTDEF_FR_DEF1ST", 0);
				}
				else
				{
					Function_89("MPCOOP_ENTERSGATEWAY", 0);
				}
			}
		}
	}
	else if (Local_69.f_56 == 1)
	{
		if (!Function_84(Local_69.f_84, 2))
		{
			if (Local_69.f_68 == 4294967295 && !bVar7)
			{
				bVar54 = Local_427[Local_69.f_684];
				iVar55 = Local_69.f_68;
				Function_209(&Local_69 + 84, 2);
				Var56 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63((&Global_78617 + 196[bVar5410])->f_36) };
				if (Function_64(bVar54, &iVar64))
				{
					Local_69.f_88 = "net_barker_invite_help_specific";
				}
				else
				{
					Local_69.f_88 = "net_barker_invite_help";
					memcpy(&iVar64, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_86(&Global_78617 + 196[bVar5410], &Local_69 + 128 + 16[bVar542]), 16);
				}
				UI_SET_STRING("net_barker_dude", UI_GET_STRING(Function_100(iVar55)));
				UI_SET_STRING("net_barker_gametype", UI_GET_STRING(&Var56));
				UI_SET_STRING("net_barker_location", UI_GET_STRING(&iVar64));
				iVar28 = 1;
				Function_127(Local_69.f_88, 0x41200000, 1, 0, 2, 1, 0);
				Function_89("MPCOOP_ENTERSGATEWAY", 0);
			}
			else if (Local_69.f_72 != 4294967295)
			{
				Function_209(&Local_69 + 84, 2);
				if (Local_69.f_96)
				{
					Local_69.f_88 = "net_posse_join_request_help";
					if (!Function_84(Global_79349.f_44, 4194304))
					{
						Function_89("MPCOOP_REQUESTJOINPOSSE", 0);
					}
					else
					{
						Function_89("UN_Narr2_ReqJoinPosse", 0);
					}
				}
				else
				{
					Local_69.f_88 = "net_posse_join_invite_help";
					if (!Function_84(Global_79349.f_44, 4194304))
					{
						Function_89("MPCOOP_INVIJOINPOSSE", 0);
					}
					else
					{
						Function_89("UN_Narr2_PosseInvite", 0);
					}
				}
				iVar28 = 1;
				UI_SET_STRING("net_barker_dude", UI_GET_STRING(Function_100(Local_69.f_72)));
				Function_127(Local_69.f_88, 0x41200000, 1, 0, 2, 1, 0);
			}
		}
	}
	else if (Local_69.f_56 >= 1)
	{
		if (!Function_84(Local_69.f_84, 4))
		{
			Function_209(&Local_69 + 84, 4);
			Function_60();
			iVar28 = 1;
			Local_69.f_88 = "net_invite_multiple";
			Function_127(Local_69.f_88, 10.0f, 1, 0, 2, 1, 0);
		}
	}
	if (iVar28 && !bVar7)
	{
		if (!IS_SCRIPT_USE_CONTEXT_VALID(Local_69.f_1260))
		{
			if (bVar29)
			{
				Local_69.f_1260 = ADD_SCRIPT_USE_CONTEXT("mp_FRD_Invite", 100, 8, false, 0, 0, 0, 4294967295, 0);
			}
			else
			{
				Local_69.f_1260 = ADD_SCRIPT_USE_CONTEXT("net_invite_openMenu", 100, 8, false, 0, 0, 0, 4294967295, 0);
			}
		}
	}
	return bVar1;
}

struct<32> Function_86(bool bParam0, var uParam1) //Position: 0x2A6D / 10861
{
	struct<41> Var0;
	
	if (Function_17(bParam0))
	{
		if (Function_10(bParam0 + 20, &Var0, 1))
		{
			if (Function_88(Var0.f_40))
			{
				return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87(Var0.f_40);
			}
		}
	}
	if (bParam0->f_16 >= 4294967295)
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87(bParam0->f_16);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87(StackVal);
}

struct<32> Function_87(int iParam0) //Position: 0x2AB7 / 10935
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_88(iParam0))
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

bool Function_88(int iParam0) //Position: 0x2B74 / 11124
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_89(bool bParam0, bool bParam1) //Position: 0x2B8A / 11146
{
	bool bVar0;
	
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		bVar0 = "";
		if (bParam1)
		{
			bVar0 = bParam0;
		}
		ADD_LINE_TO_CONVERSATION(0, bParam0, bVar0, 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(0, "NARRATOR");
	}
	START_SCRIPT_CONVERSATION(false, 0);
	return;
}

bool Function_90(bool bParam0) //Position: 0x2BCA / 11210
{
	return Function_91(Global_83864.f_1252, bParam0);
}

int Function_91(var uParam0, bool bParam1) //Position: 0x2BDC / 11228
{
	return (uParam0 && bParam1) == 0;
}

void Function_92() //Position: 0x2BE9 / 11241
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_94(iVar0))
		{
			Function_209(&Local_69 + 1328[iVar0], 8);
		}
		if (Function_93(iVar0))
		{
			Function_209(&Local_69 + 1328[iVar0], 4);
		}
		iVar0++;
	}
	Local_69.f_56 = 0;
	Local_69.f_52 = 0;
	Local_69.f_48 = 0;
	return;
}

bool Function_93(int iParam0) //Position: 0x2C3C / 11324
{
	return Function_84((*&Local_69 + 1328)[iParam0], 1);
}

bool Function_94(int iParam0) //Position: 0x2C4F / 11343
{
	return Function_84((*&Local_69 + 1328)[iParam0], 2);
}

void Function_95(int iParam0) //Position: 0x2C62 / 11362
{
	(*&Local_69 + 1328)[iParam0] = 0;
	return;
}

void Function_96(int iParam0) //Position: 0x2C72 / 11378
{
	Function_201(&Local_69 + 1328[iParam0], 5);
	return;
}

bool Function_97(int iParam0) //Position: 0x2C85 / 11397
{
	return !Function_84((*&Local_69 + 1328)[iParam0], 4);
}

bool Function_98(int iParam0) //Position: 0x2C99 / 11417
{
	if (Function_84((*&Local_69 + 1328)[iParam0], 1))
	{
		return 0;
	}
	Function_209(&Local_69 + 1328[iParam0], 1);
	Function_201(&Local_69 + 1328[iParam0], 4);
	return 1;
}

bool Function_99(int iParam0) //Position: 0x2CCC / 11468
{
	return Function_84((*&Local_69 + 1328)[iParam0], 16);
}

var Function_100(int iParam0) //Position: 0x2CE0 / 11488
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

struct<32> Function_101(int iParam0) //Position: 0x2EF4 / 12020
{
	struct<8> Var0;
	char* cVar168[32];
	
	*(&Var0 + 76) = 36;
	if (GET_PLAYLIST_FROM_DB(iParam0, &Var0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
	}
	strcpy(&cVar168, "", 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar168;
}

bool Function_102(int iParam0) //Position: 0x2F24 / 12068
{
	return !Function_84((*&Local_69 + 1328)[iParam0], 8);
}

void Function_103(int iParam0) //Position: 0x2F39 / 12089
{
	Function_201(&Local_69 + 1328[iParam0], 26);
	return;
}

bool Function_104(int iParam0) //Position: 0x2F4D / 12109
{
	return (Local_427[iParam04].f_12 - NET_GET_NET_TIME()) >= 3.0f;
}

bool Function_105(var uParam0, int iParam1) //Position: 0x2F62 / 12130
{
	bool bVar0;
	var uVar1;
	
	bVar0 = FIND_NAMED_LAYOUT("FRD_TMSLayout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		return 0;
	}
	if (DECOR_GET_INT_VERBOSE(bVar0, "FRD_Invite", &uVar1))
	{
		*uParam0 = Function_106(uVar1, 32, 16);
		*iParam1 = Function_106(uVar1, 16, 0);
		NET_LOG(true, "FRD Invite", "RECVing invite from FreeMode from %s, %s, at barker %s", I2STR(*uParam0), GET_SLOT_NAME(*uParam0), I2STR(*iParam1), false);
		DECOR_REMOVE(bVar0, "FRD_Invite");
		return 1;
	}
	return 0;
}

var Function_106(var uParam0, int iParam1, bool bParam2) //Position: 0x3028 / 12328
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_107((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

var Function_107(bool bParam0) //Position: 0x3047 / 12359
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_108(int iParam0) //Position: 0x3053 / 12371
{
	Function_109(iParam0, 0.0f);
	return;
}

void Function_109(var uParam0, float fParam1) //Position: 0x305F / 12383
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_209(uParam0, 1);
	Function_201(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_110(var uParam0, int iParam1) //Position: 0x3080 / 12416
{
	if (Function_112(uParam0, iParam1))
	{
		Function_111(uParam0);
		return 1;
	}
	return 0;
}

void Function_111(int iParam0) //Position: 0x3098 / 12440
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_112(bool bParam0, float fParam1) //Position: 0x30AC / 12460
{
	if (Function_115(bParam0))
	{
		if (Function_113(bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_113(bool bParam0) //Position: 0x30C8 / 12488
{
	if (Function_115(bParam0))
	{
		if (Function_114(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_114(int iParam0) //Position: 0x3190 / 12688
{
	return Function_84(*iParam0, 2);
}

bool Function_115(bool bParam0) //Position: 0x319D / 12701
{
	return Function_84(*bParam0, 1);
}

var Function_116() //Position: 0x31AA / 12714
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_117(int iParam0, int iParam1) //Position: 0x31D9 / 12761
{
	if (Function_45(1) == iParam0 && Function_45(1) <= 0)
	{
		UI_ACTIVATE("NetConf_FRDTeleport");
	}
	else if (Function_121())
	{
		Function_127("mp_FRD_NoClaimWhileWanted", 0x41200000, 1, 0, 2, 1, 0);
	}
	else
	{
		Function_118(Function_119(iParam0), iParam1, GET_LOCAL_SLOT());
	}
	return;
}

void Function_118(var uParam0, var uParam1, int iParam2) //Position: 0x324B / 12875
{
	struct<9> Var0;
	
	vVar0 = iParam2;
	vVar0.z = uParam0;
	vVar0.y = uParam1;
	NET_SCRIPTMSG_SEND(2, 98, &vVar0, 3, 1);
	NET_LOG(true, "FRD Client", "SEND FRD Start Request sent for %s, barker #%s for Player #%s", I2STR(vVar0.z), I2STR(vVar0.y), I2STR(vVar0.x), false);
	return;
}

var Function_119(int iParam0) //Position: 0x32D1 / 13009
{
	int iVar0;
	
	if (iParam0 == 4294967294)
	{
		return 4294967295;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (Function_120(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int Function_120(int iParam0) //Position: 0x3302 / 13058
{
	switch (iParam0)
	{
		case 0xFFFFFFFE:
		case 0xFFFFFFFF:
			return 4294967294;
		
		case 0x00000000:
			return Global_30640[0];
		
		case 0x00000001:
			return Global_30693[0];
		
		case 0x00000002:
			return Global_30668[0];
		
		case 0x00000003:
			return Global_30668[1];
		
		case 0x00000004:
			return Global_30717[0];
		
		case 0x00000005:
			return Global_30685[0];
		
		case 0x00000006:
			return Global_30693[1];
		
		case 0x00000007:
			return Global_30723[2];
		
		default:
	}
	return 4294967294;
}

bool Function_121() //Position: 0x338A / 13194
{
	return Function_122() == 4294967295;
}

int Function_122() //Position: 0x3395 / 13205
{
	return Global_78480.f_112;
}

void Function_123() //Position: 0x33A1 / 13217
{
	Global_78617.f_28 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/mp_Help_Barker.sc", 0);
	return;
}

void Function_124() //Position: 0x33DB / 13275
{
	Function_125(Function_168());
	Global_78617.f_28 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/mp_Teleport.sc", 0);
	Function_46(128);
	return;
}

void Function_125(bool bParam0) //Position: 0x341D / 13341
{
	Function_126(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, 1);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

void Function_126(int iParam0, bool bParam1) //Position: 0x343E / 13374
{
	if (bParam1)
	{
		Function_209(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_201(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_127(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x3479 / 13433
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_128(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_128(int iParam0) //Position: 0x34F4 / 13556
{
	char* cVar0[16];
	
	if (!Function_129())
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

bool Function_129() //Position: 0x3533 / 13619
{
	if (Function_84(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_130(int iParam0, bool bParam1) //Position: 0x354E / 13646
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_131(bool bParam0) //Position: 0x356E / 13678
{
	if (bParam0 > 0 || bParam0 <= 60)
	{
		return 0;
	}
	if (!Function_25(bParam0))
	{
		return 0;
	}
	return (&Global_78617 + 196[bParam010])->f_16 != 146;
}

bool Function_132(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x359D / 13725
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	bool bVar23;
	float fVar24;
	vector3 vVar25;
	bool bVar28;
	vector3 vVar29;
	float fVar32;
	float fVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	float fVar37;
	float fVar38;
	float fVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	int iVar43;
	char* cVar44[64];
	
	*uParam1 = 4294967295;
	if (!Function_167())
	{
		Function_3(bParam0);
		Function_48(bParam0, 0);
		return 0;
	}
	if ((Function_164() || Function_210(128)) || !NET_IS_IN_SESSION())
	{
		if (StackVal != 6)
		{
			bParam0->f_4 = 6;
			*bParam0 = 0;
			Function_48(bParam0, 1);
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
	bVar3 = NET_GET_SESSION_GAMER_COUNT();
	bVar4 = Function_45(2) == bParam0->f_1076;
	if (!bVar4)
	{
		bVar4 = Function_45(1) == bParam0->f_1080;
		if (!bVar4)
		{
			bVar4 = Function_45(4) == bParam0->f_1084;
			if (!bVar4)
			{
				bVar4 = Function_43(1024) == bParam0->f_1108;
				if (!bVar4)
				{
					if (Function_45(2) > 0)
					{
						Function_163(Function_45(2));
						bVar4 = VDIST(*(bParam0 + 1092), Function_163(Function_45(2))) <= 0.001f;
					}
					if (!bVar4)
					{
						bVar5 = bParam0->f_1088 <= Function_45(3);
						bVar6 = bVar3 <= Function_45(3);
						bVar4 = bVar5 == bVar6;
					}
				}
			}
		}
	}
	if ((StackVal || bParam0->f_1072 == Global_29006 == iVar0) || bVar4)
	{
		NET_LOG(true, "BARKERS", "RE-CACHING ACTIVE BARKERS. Old Region: %s New One: %s", I2STR(bParam0->f_1072), I2STR(Global_29006), false, false);
		NET_LOG(StackVal, true, "BARKERS", Function_162("Status changed from %s to %s"), Function_162(iVar0), false, false);
		NET_LOG(true, "BARKERS", "FRD Runner changed from %s to %s", I2STR(bParam0->f_1076), I2STR(Function_45(2)), false, false);
		NET_LOG(true, "BARKERS", "FRD Region from %s to %s", I2STR(bParam0->f_1080), I2STR(Function_45(1)), false, false);
		NET_LOG(true, "BARKERS", "FRD GamerCount from %s to %s", I2STR(bParam0->f_1088), I2STR(bVar3), false, false);
		Function_3(bParam0);
		Function_156(bParam0, Global_29006, iVar0);
		bParam0->f_1072 = Global_29006;
		bParam0->f_500 = 4294967295;
		bParam0->f_1088 = bVar3;
		bParam0->f_1076 = Function_45(2);
		bParam0->f_1080 = Function_45(1);
		bParam0->f_1084 = Function_45(4);
		bParam0->f_1108 = Function_43(1024);
		if (bParam0->f_1076 > 0)
		{
			Function_163(Function_45(2));
			*(bParam0 + 1092) = { StackVal, StackVal, Function_163(Function_45(2)) };
		}
	}
	if ((StackVal || !*bParam0 == iVar0) || bVar4)
	{
		*bParam0 = 1;
		iVar1 = 0;
		while (iVar1 <= 60)
		{
			if (Function_25(iVar1))
			{
				if (!Function_153(bParam0, iVar1, iVar0, 0, 0))
				{
					if (IS_BLIP_VALID((*bParam0 + 16)[iVar12]))
					{
						REMOVE_BLIP((*bParam0 + 16)[iVar12]);
					}
				}
				else
				{
					if (!IS_BLIP_VALID((*bParam0 + 16)[iVar12]))
					{
						(*bParam0 + 16)[iVar12] = ADD_BLIP_FOR_COORD(&Global_78617 + 196[iVar110], Function_152((&Global_78617 + 196[iVar110])->f_36), 0f, 2, 0);
						UNK_0xFF3DB575((*bParam0 + 16)[iVar12], 1);
					}
					if (Function_151(iVar1))
					{
						if (Function_147(StackVal, (*bParam0 + 16)[iVar12], iVar1))
						{
							SET_BLIP_NAME((*bParam0 + 16)[iVar12], "MP_FreeRoamDefense_blip");
						}
						else
						{
							SET_BLIP_NAME((*bParam0 + 16)[iVar12], "MP_FreeRoamDefense");
						}
					}
					else if (Function_24(iVar1))
					{
						SET_BLIP_COLOR((*bParam0 + 16)[iVar12], 1.0f, 1.0f, 1.0f, 0.4f);
					}
					if (GET_BLIP_ICON((*bParam0 + 16)[iVar12]) == 411)
					{
						SET_BLIP_NAME((*bParam0 + 16)[iVar12], "mp_helpBarker");
					}
					else if (Function_64(iVar1, &uVar7))
					{
						SET_BLIP_NAME((*bParam0 + 16)[iVar12], &uVar7);
					}
				}
			}
			iVar1++;
		}
	}
	bParam0->f_4 = iVar0;
	if (IS_ACTOR_VALID(bParam3))
	{
		Function_146(bParam3);
		vVar25 = { StackVal, StackVal, Function_146(bParam3) };
	}
	bVar28 = (!Function_144(bParam3, 95) && bParam4);
	if (!bVar28)
	{
		bVar28 = (IS_ACTOR_RIDING(bParam3) || IS_ACTOR_RIDING_VEHICLE(bParam3));
		if (!bVar28)
		{
			bVar28 = (GET_CURRENT_GAME_TIME() - bParam0->f_1104) > 1.5f;
		}
	}
	if (bVar28)
	{
		Function_3(bParam0);
		bParam0->f_500 = 4294967295;
	}
	else if (bParam0->f_500 != 4294967295)
	{
		bVar2 = VDIST(vVar25, *(&Global_78617 + 196[(bParam0 + 504[bParam0->f_50014])->f_4810]));
	}
	if (!GET_CAMERA_CHANNEL_POSITION(&vVar29, 0))
	{
	}
	fVar32 = GET_CURRENT_GAME_TIME();
	fVar33 = GET_LAST_FRAME_TIME();
	iVar34 = (SHIFT_LEFT(125, 16) + SHIFT_LEFT(false, 8));
	iVar35 = (SHIFT_LEFT(170, 16) + SHIFT_LEFT(75, 8));
	iVar36 = 0;
	if (Function_45(2) > 0)
	{
		if (!IS_SLOT_VALID(Function_45(2)))
		{
			fVar37 = 0.8f;
			fVar38 = 0.8f;
			fVar39 = 0.8f;
		}
		else if (!NET_GET_GAMER_RGB_COLOR(Function_45(2), &fVar37, &fVar38, &fVar39))
		{
		}
		iVar36 = ((SHIFT_LEFT(ROUND((fVar37 * 255.0f)), 16) + SHIFT_LEFT(ROUND((fVar38 * 255.0f)), 8)) + ROUND((fVar39 * 255.0f)));
	}
	else
	{
		iVar36 = iVar35;
	}
	iVar1 = 0;
	while (iVar1 <= bParam0->f_1068)
	{
		fVar24 = VDIST2(vVar25, *(&Global_78617 + 196[(bParam0 + 504[iVar114])->f_4810]));
		bVar23 = (fVar24 >= 9.0f && !bVar28);
		if ((bParam0 + 504[iVar114])->f_48 == iParam2)
		{
			Function_141(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam0 + 504[iVar114], vVar29, fVar32, Vector(*(&Global_78617 + 196[(bParam0 + 504[iVar114])->f_4810]), (bParam0 + 504[iVar114])->f_52, fVar33) + Vector(0.0f, 2.25f, 0.0f), 1, 18962, 0, iVar34, (bParam0 + 504[iVar114])->f_48, "barkerText", 0);
		}
		else if (Function_153(bParam0, (bParam0 + 504[iVar114])->f_48, iVar0, 0, 0))
		{
			if (Function_151((bParam0 + 504[iVar114])->f_48) && Function_44())
			{
				Function_141(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam0 + 504[iVar114], vVar29, fVar32, Vector(*(&Global_78617 + 196[(bParam0 + 504[iVar114])->f_4810]), (bParam0 + 504[iVar114])->f_52, fVar33) + Vector(0.0f, 2.25f, 0.0f), 1, 17590, 0, iVar36, (bParam0 + 504[iVar114])->f_48, "barkerText", 0);
			}
			else
			{
				Function_141(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam0 + 504[iVar114], vVar29, fVar32, Vector(*(&Global_78617 + 196[(bParam0 + 504[iVar114])->f_4810]), (bParam0 + 504[iVar114])->f_52, fVar33) + Vector(0.0f, 2.25f, 0.0f), 1, 18962, 0, iVar35, (bParam0 + 504[iVar114])->f_48, "barkerText", 0);
			}
		}
		if (iVar1 == bParam0->f_500)
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
			{
				if (!WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(StackVal) && !Function_137(bParam3, bParam0 + 504[iVar114], bVar23, bParam5))
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
		else if (fVar24 > bVar2)
		{
			if (Function_153(bParam0, (bParam0 + 504[iVar114])->f_48, iVar0, 1, 0))
			{
				if (Function_137(bParam3, bParam0 + 504[iVar114], bVar23, bParam5))
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
					{
						if (!WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(StackVal) && !bVar23)
						{
							RELEASE_SCRIPT_USE_CONTEXT(StackVal);
						}
					}
					if (!IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
					{
						Function_136(bParam0, (bParam0 + 504[iVar114])->f_48);
						bParam0->f_500 = iVar1;
						bVar2 = fVar24;
					}
				}
			}
		}
		iVar1++;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(StackVal))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			bVar42 = (bParam0 + 504[bParam0->f_50014])->f_48;
			iVar43 = Function_133(bVar42, &bVar40, &bVar41);
			bParam0->f_1104 = GET_CURRENT_GAME_TIME();
			switch (iVar43)
			{
				case 0x00000006:
					UI_MESSAGEBOX_SET_DESCRIPTION("NetConf_BarkerLocked", "mp_FRD_TooEmpty");
					UI_ACTIVATE("NetConf_BarkerLocked");
					break;
				
				case 0x00000005:
					UI_MESSAGEBOX_SET_DESCRIPTION("NetConf_BarkerLocked", "mp_FRD_PublicOnly");
					UI_ACTIVATE("NetConf_BarkerLocked");
					break;
				
				case 0x00000007:
					UI_MESSAGEBOX_SET_DESCRIPTION("NetConf_BarkerLocked", "mp_FRD_TooSoon");
					UI_ACTIVATE("NetConf_BarkerLocked");
					break;
				
				case 0x00000001:
				case 0x00000004:
					if (Function_151(bVar42))
					{
						strcpy(&cVar44, "FRD_SellText", 64);
					}
					else
					{
						memcpy(&cVar44, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_101((&Global_78617 + 196[bVar4210])->f_36), 16);
						stradd(&cVar44, "_unlock", 64);
					}
					UI_MESSAGEBOX_SET_DESCRIPTION("NetConf_BarkerLocked", &cVar44);
					UI_ACTIVATE("NetConf_BarkerLocked");
					break;
				
				case 0x00000003:
					UI_SET_STRING("Generic_Dbuffer10_0", I2STR(bVar41));
					UI_SET_STRING("Generic_Dbuffer10_1", I2STR(bVar40));
					UI_ACTIVATE("NetAlert_PosseTooBig");
					break;
				
				case 0x00000002:
					UI_SET_STRING("Generic_Dbuffer10_0", I2STR(bVar41));
					UI_SET_STRING("Generic_Dbuffer10_1", I2STR(bVar40));
					UI_ACTIVATE("NetAlert_GroupTooBig");
					break;
				
				case 0x00000000:
				default:
					*uParam1 = bVar42;
					Function_53(bParam0 + 504[bParam0->f_50014]);
					return 1;
				}
			}
	}
	return 0;
}

int Function_133(bool bParam0, int iParam1, int iParam2) //Position: 0x401A / 16410
{
	int iVar0;
	
	iVar0 = NET_GET_PLAYMODE();
	if (Function_151(bParam0))
	{
		if (!Function_42(1024))
		{
			if (!Function_90(1024) && Function_45(2) != 4294967295)
			{
				return 4;
			}
		}
		if (Function_42(2048) && iVar0 == 0)
		{
			return 5;
		}
		if (NET_GET_SESSION_GAMER_COUNT() > Function_45(3) && Function_45(2) != 4294967295)
		{
			return 6;
		}
		if (Function_135(bParam0))
		{
			return 7;
		}
	}
	if (Function_131(bParam0))
	{
		return 0;
	}
	if (Function_24(bParam0))
	{
		return 4;
	}
	if (Function_134((&Global_78617 + 196[bParam010])->f_36, 4))
	{
		return 1;
	}
	*iParam1 = Function_58((&Global_78617 + 196[bParam010])->f_36);
	if (iVar0 == 1)
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

bool Function_134(int iParam0, int iParam1) //Position: 0x40F5 / 16629
{
	struct<657> Var0;
	
	*(&Var0 + 76) = 36;
	if (Function_14(iParam0, &Var0))
	{
		return Function_84(Var0.f_656, iParam1);
	}
	return 0;
}

bool Function_135(int iParam0) //Position: 0x411B / 16667
{
	int iVar0;
	
	if (!Function_151(iParam0))
	{
		return 0;
	}
	iVar0 = (iParam0 - 50);
	return Function_45(4) != iVar0;
}

void Function_136(int iParam0, bool bParam1) //Position: 0x413A / 16698
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar18;
	int iVar19;
	bool bVar20;
	struct<8> Var21;
	struct<8> Var29;
	
	if ((&Global_78617 + 196[bParam110])->f_36 == 72)
	{
		iParam0->f_8 = ADD_SCRIPT_USE_CONTEXT("mp_TELEPORT", 30, 4, false, 0, 0, 0, 4294967295, 0);
	}
	else if ((&Global_78617 + 196[bParam110])->f_36 == 73)
	{
		iParam0->f_8 = ADD_SCRIPT_USE_CONTEXT("mp_HelpBarker", 30, 4, false, 0, 0, 0, 4294967295, 0);
	}
	else if (Function_151(bParam1))
	{
		if (Function_44())
		{
			if (Function_121())
			{
				iParam0->f_8 = ADD_SCRIPT_USE_CONTEXT("mp_FreeRoamDefense_Disabled", 30, 4, false, 0, 0, 0, 4294967295, 0);
			}
			else
			{
				iParam0->f_8 = ADD_SCRIPT_USE_CONTEXT("mp_FreeRoamDefense_claim", 30, 4, false, 0, 0, 0, 4294967295, 0);
			}
		}
		else
		{
			UI_SET_STRING("mp_barkerLocation", UI_GET_STRING(&Global_78617 + 196[bParam110] + 20));
			UI_SET_STRING("mp_barkerRotation", UI_GET_STRING("mp_FreeRoamDefense"));
			if (Function_133(bParam1, &uVar0, &uVar1) != 0)
			{
				iParam0->f_8 = ADD_SCRIPT_USE_CONTEXT("mp_barker_fmt_specific_disabled", 30, 4, false, 0, 0, 0, 4294967295, 0);
			}
			else
			{
				iParam0->f_8 = ADD_SCRIPT_USE_CONTEXT("mp_barker_fmt_specific", 30, 4, false, 0, 0, 0, 4294967295, 0);
			}
		}
	}
	else
	{
		bVar20 = Function_133(bParam1, &iVar18, &iVar19) == false;
		if (Function_64(bParam1, &iVar2))
		{
			UI_SET_STRING("mp_barkerLocation", UI_GET_STRING(&iVar2));
			if (bVar20)
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
			Var21 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_86(&Global_78617 + 196[bParam110], iParam0 + 16[bParam12]) };
			UI_SET_STRING("mp_barkerLocation", UI_GET_STRING(&Var21));
			if (bVar20)
			{
				iParam0->f_8 = ADD_SCRIPT_USE_CONTEXT("mp_barker_fmt_disabled", 30, 4, false, 0, 0, 0, 4294967295, 0);
			}
			else
			{
				iParam0->f_8 = ADD_SCRIPT_USE_CONTEXT("mp_barker_fmt", 30, 4, false, 0, 0, 0, 4294967295, 0);
			}
		}
		Var29 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63((&Global_78617 + 196[bParam110])->f_36) };
		UI_SET_STRING("mp_barkerRotation", UI_GET_STRING(&Var29));
	}
	return;
}

bool Function_137(bool bParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x442C / 17452
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	var uVar12;
	bool bVar15;
	
	if (!bParam2)
	{
		return 0;
	}
	if (!Function_151(uParam1->f_48))
	{
		return 1;
	}
	uParam3 = uParam3;
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	vVar3 = { 0.0f, 1.0f, 0.0f };
	if (GET_ACTOR_OFFSET_WORLD_COORDS(bParam0, &vVar3, &uVar0))
	{
		if (GET_OBJECT_RELATIVE_POSITION(uParam1->f_52, 0.0f, 1.0f, 0.0f, &vVar6))
		{
			if (!FIND_INTERSECTION(&uVar0, &vVar6, &vVar9, &uVar12, 0, 1, 4194304))
			{
				return 1;
			}
			bVar15 = VDIST(vVar9, vVar6);
			if (bVar15 >= 0.2f)
			{
				return 1;
			}
		}
	}
	return 0;
}

var Function_138(var uParam0, var uParam1) //Position: 0x44B6 / 17590
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	switch (Function_45(2))
	{
		case 0xFFFFFFFF:
		case 0xFFFFFFFD:
			return "mp_FreeRoamDefense_tis";
		
		case 0xFFFFFFFE:
			return "mp_FRD_UpForGrabs_TIS";
		
		default:
	}
	if (Function_140())
	{
		UI_SET_STRING_FORMAT("Generic_Dbuffer128_2", "%s<nl>%s", UI_GET_STRING("mp_FreeRoamDefense_owner"), UI_GET_STRING(Function_139(Function_45(2))), false);
	}
	else
	{
		UI_SET_STRING_FORMAT("Generic_Dbuffer128_2", "%s<nl><fs6>%s", UI_GET_STRING("mp_FreeRoamDefense_owner"), UI_GET_STRING(Function_139(Function_45(2))), false);
	}
	return "Generic_Dbuffer128_2";
}

var Function_139(int iParam0) //Position: 0x45D3 / 17875
{
	switch (iParam0)
	{
		case 0x00000000:
			return "MPPlayerName_0";
		
		case 0x00000001:
			return "MPPlayerName_1";
		
		case 0x00000002:
			return "MPPlayerName_2";
		
		case 0x00000003:
			return "MPPlayerName_3";
		
		case 0x00000004:
			return "MPPlayerName_4";
		
		case 0x00000005:
			return "MPPlayerName_5";
		
		case 0x00000006:
			return "MPPlayerName_6";
		
		case 0x00000007:
			return "MPPlayerName_7";
		
		case 0x00000008:
			return "MPPlayerName_8";
		
		case 0x00000009:
			return "MPPlayerName_9";
		
		case 0x0000000A:
			return "MPPlayerName_10";
		
		case 0x0000000B:
			return "MPPlayerName_11";
		
		case 0x0000000C:
			return "MPPlayerName_12";
		
		case 0x0000000D:
			return "MPPlayerName_13";
		
		case 0x0000000E:
			return "MPPlayerName_14";
		
		case 0x0000000F:
			return "MPPlayerName_15";
		
		default:
	}
	return "UNHANDLED SLOT";
}

bool Function_140() //Position: 0x4777 / 18295
{
	return HAS_STRING_TABLE_LOADED("jp");
}

void Function_141(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16) //Position: 0x4785 / 18309
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	bool bVar10;
	vector3 vVar11;
	float fVar14;
	
	if (!HUD_IS_FADED())
	{
		fVar0 = (fParam4 - iParam0->f_44);
		vVar1 = { StackVal, StackVal, Vector(vParam7, StackVal, StackVal) + Vector(0.0f, (SIN_DEGREE((75.0f * fVar0)) * 0.01f), 0.0f) };
		fVar4 = VDIST2(vParam1, vVar1);
		if (fVar4 > 2.25f || fVar4 <= 625.0f)
		{
			Function_53(iParam0);
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
		vVar6 = { StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 20), vParam1, StackVal), StackVal, StackVal) * Vector(0.5f, 0.5f, 0.5f) };
		*(iParam0 + 20) = { StackVal, StackVal, vVar6 };
		fVar9 = (UNK_0xADF7D54B(&vVar6) + 3.14159f);
		bVar10 = false;
		if (iParam0->f_32 == 0)
		{
			if (fVar0 <= fVar5 && fVar5 <= 0.0f)
			{
				RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(bParam6, "HUD_STINGER_TEXT_MASTER"));
				iParam0->f_32 = 1;
			}
			fVar9 = (fVar9 + (SIN_DEGREE((100.0f * fVar0)) * 0.1f));
			bVar10 = true;
		}
		else
		{
			iParam0->f_36 = (iParam0->f_36 + (17.0f * fParam5));
			if (iParam0->f_32 == 1)
			{
				if (FABS((iParam0->f_36 - fVar9)) <= (3.14159f * 0.5f))
				{
					iParam0->f_32 = 2;
					iParam0->f_36 = (iParam0->f_36 - 3.14159f);
					iParam0->f_40++;
					if (iParam0->f_40 > iParam10)
					{
						iParam0->f_40 = 0;
					}
					Function_53(iParam0);
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
		if (FABS((iParam0->f_36 - fVar9)) > 0.0001f)
		{
			return;
		}
		if (bVar10)
		{
			iParam0->f_36 = fVar9;
		}
		vVar11 = { 0.01f, -0.01f, -0.01f };
		ROTATE_VECTOR_XZ(&vVar11, iParam0->f_36, 1);
		if (!IS_OBJECT_VALID(*iParam0))
		{
			Stack.Push(bParam6);
			Stack.Push(uParam15);
			Stack.Push(iParam0->f_40);
			Stack.Push(iParam14);
			Call_Loc(iParam11);
			*iParam0 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, vVar1, 0.0f, iParam0->f_36, 0.0f, iParam13);
			if (iParam16 >= 4294967295)
			{
				Stack.Push(bParam6);
				Stack.Push("");
				Stack.Push(iParam0->f_40);
				Stack.Push(iParam14);
				Call_Loc(iParam11);
				iParam0->f_4 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal), 0.0f, iParam0->f_36, 0.0f, iParam16);
			}
		}
		else
		{
			fVar14 = Function_142(iParam0->f_36);
			SET_OBJECT_POSITION(*iParam0, vVar1);
			if (!SET_OBJECT_ORIENTATION(*iParam0, 0.0f, fVar14, 0.0f))
			{
			}
			if (iParam16 >= 4294967295)
			{
				SET_OBJECT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal));
				if (!SET_OBJECT_ORIENTATION(StackVal, 0.0f, fVar14, 0.0f))
				{
				}
			}
		}
	}
}

var Function_142(float fParam0) //Position: 0x4A04 / 18948
{
	return (fParam0 * 57.29578f);
}

var Function_143(var uParam0, bool bParam1) //Position: 0x4A12 / 18962
{
	int iVar0;
	char* cVar16[64];
	
	uParam0 = uParam0;
	if ((&Global_78617 + 196[bParam110])->f_36 == 72)
	{
		return "mp_TELEPORT_tis";
	}
	if ((&Global_78617 + 196[bParam110])->f_36 == 73)
	{
		return "mp_HelpBarker_tis";
	}
	if (Function_151(bParam1))
	{
		return "mp_FreeRoamDefense_tis";
	}
	memcpy(&cVar16, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63((&Global_78617 + 196[bParam110])->f_36), 16);
	stradd(&cVar16, "_title", 64);
	if (Function_64(bParam1, &iVar0))
	{
		UI_SET_STRING_FORMAT("Generic_Dbuffer128_2", UI_GET_STRING("mp_barker_tis_fmt"), UI_GET_STRING(&cVar16), UI_GET_STRING(&iVar0), false);
	}
	else
	{
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar16));
	}
	return "Generic_Dbuffer128_2";
}

bool Function_144(bool bParam0, int iParam1) //Position: 0x4B2F / 19247
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_145(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_145(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_145(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_145(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_145(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_145(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_145(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_145(iParam1, 64))
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

bool Function_145(var uParam0, int iParam1) //Position: 0x4C08 / 19464
{
	return (uParam0 && iParam1) == 0;
}

vector3 Function_146(bool bParam0) //Position: 0x4C15 / 19477
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_147(bool bParam0, int iParam1, int iParam2) //Position: 0x4C26 / 19494
{
	if (Function_45(1) <= 0)
	{
		if ((!Function_90(1024) && !Function_42(1024)) || Function_135(iParam2))
		{
			SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
		}
		else
		{
			SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 1.0f);
		}
	}
	else if (Function_45(1) == iParam1)
	{
		Function_148(bParam0, Function_45(2), 0x3f800000, 0);
		return 1;
	}
	Function_148(bParam0, 4294967295, 0.4f, 0);
	return 0;
}

void Function_148(bool bParam0, int iParam1, float fParam2, bool bParam3) //Position: 0x4C92 / 19602
{
	struct<9> Var0;
	
	if (iParam1 == 4294967294)
	{
		SET_BLIP_COLOR(bParam0, (206.0f / 255.0f), (158.0f / 255.0f), (90.0f / 255.0f), fParam2);
	}
	else if (iParam1 == 4294967295)
	{
		SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, fParam2);
	}
	else if (iParam1 == GET_LOCAL_SLOT())
	{
		SET_BLIP_COLOR(bParam0, (90.0f / 255.0f), (145.0f / 255.0f), (189.0f / 255.0f), fParam2);
	}
	else if (Function_42(131072))
	{
		Function_163(iParam1);
		vVar0 = { StackVal, StackVal, Function_163(iParam1) };
		SET_BLIP_COLOR(bParam0, vVar0.x, vVar0.y, vVar0.z, fParam2);
	}
	else if (Function_149(iParam1))
	{
		if (Function_42(262144))
		{
			SET_BLIP_COLOR(bParam0, (90.0f / 255.0f), (145.0f / 255.0f), (189.0f / 255.0f), fParam2);
		}
		else if (bParam3)
		{
			SET_BLIP_COLOR(bParam0, 0.95f, 0.95f, 0.95f, 0.3f);
		}
		else
		{
			SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, fParam2);
		}
	}
	else
	{
		SET_BLIP_COLOR(bParam0, (165.0f / 255.0f), (56.0f / 255.0f), (66.0f / 255.0f), fParam2);
	}
}

bool Function_149(int iParam0) //Position: 0x4DCD / 19917
{
	return Function_150(GET_LOCAL_SLOT(), iParam0);
}

int Function_150(bool bParam0, bool bParam1) //Position: 0x4DDB / 19931
{
	if (bParam0 == bParam1)
	{
		return 1;
	}
	if (bParam0 > 0 || bParam1 > 0)
	{
		return 0;
	}
	if (Function_42(256))
	{
		return NET_GET_GAMER_POSSE_LEADER(bParam0) != NET_GET_GAMER_POSSE_LEADER(bParam1);
	}
	return 0;
}

bool Function_151(bool bParam0) //Position: 0x4E0E / 19982
{
	if (bParam0 > 0 || bParam0 <= 60)
	{
		return 0;
	}
	if (!Function_25(bParam0))
	{
		return 0;
	}
	return (&Global_78617 + 196[bParam010])->f_36 != 61;
}

int Function_152(int iParam0) //Position: 0x4E3D / 20029
{
	struct<665> Var0;
	
	if (iParam0 == 72)
	{
		return 396;
	}
	if (iParam0 == 73)
	{
		return 411;
	}
	if (iParam0 == 61)
	{
		return 551;
	}
	*(&Var0 + 76) = 36;
	if (Function_14(iParam0, &Var0))
	{
		return Var0.f_664;
	}
	return 403;
}

bool Function_153(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x4E87 / 20103
{
	bool bVar0;
	
	bVar0 = true;
	switch (iParam2)
	{
		case 0x00000004:
			bVar0 = (Function_131(iParam1) || Function_24(iParam1));
			break;
		
		case 0x00000002:
			bVar0 = Function_155(iParam1);
			break;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (Function_25(iParam1))
	{
		if (Function_151(iParam1))
		{
			if (Function_76())
			{
				return 0;
			}
			if (Function_154(iParam1))
			{
				return 0;
			}
			if (Function_42(4096) && !(iParam2 != 2 || iParam2 != 1))
			{
				return 0;
			}
		}
		if (Function_45(1) > 0)
		{
			if (StackVal == Function_45(1))
			{
				if (Function_151(iParam1))
				{
					if (bParam3)
					{
						return !Function_149(Function_45(2));
					}
					return 1;
				}
				if (Function_42(512))
				{
					return 1;
				}
				return iParam4;
			}
			if (Function_151(iParam1))
			{
				return 1;
			}
		}
	}
	return 1;
}

bool Function_154(int iParam0) //Position: 0x4F64 / 20324
{
	var uVar0;
	
	if (!Function_151(iParam0))
	{
		return 0;
	}
	uVar0 = (iParam0 - 50) + 24;
	return Function_42(Function_107(uVar0));
}

int Function_155(int iParam0) //Position: 0x4F86 / 20358
{
	return (&Global_78617 + 196[iParam010])->f_36 != 73;
}

void Function_156(int iParam0, int iParam1, int iParam2) //Position: 0x4F9B / 20379
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3[10];
	int iVar144;
	bool bVar145;
	int iVar146;
	bool bVar147;
	bool bVar148;
	bool bVar149;
	
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
	while (iVar0 > 60 && iVar144)
	{
		if (Function_25(iVar0) && Function_153(iParam0, iVar0, iParam2, 0, 1))
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
		iVar146 = 0;
		if (iVar1 <= iVar2)
		{
			if (Var3[iVar114].f_48 == (iParam0 + 504[iVar014])->f_48)
			{
				if (IS_OBJECT_VALID(Var3[iVar114].f_52))
				{
					*(iParam0 + 504[iVar014]) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var3[iVar114] };
					if (Function_153(iParam0, (iParam0 + 504[iVar014])->f_48, iParam2, 0, 0))
					{
						if (Function_151((iParam0 + 504[iVar014])->f_48))
						{
							Function_51(iParam0 + 504[iVar014]);
						}
						iVar146 = 1;
					}
					else
					{
						Function_51(iParam0 + 504[iVar014]);
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
			(iParam0 + 504[iVar014])->f_52 = Function_160(iParam0, (iParam0 + 504[iVar014])->f_48, &bVar147);
			if (IS_OBJECT_VALID((iParam0 + 504[iVar014])->f_52))
			{
				if (bVar147)
				{
					Function_159((iParam0 + 504[iVar014])->f_52, 1);
					CREATE_OBSTACLE_ON_OBJECT(StackVal, StackVal, Vector(*(&Global_78617 + 196[(iParam0 + 504[iVar014])->f_4810]), Function_158(), (iParam0 + 504[iVar014])->f_52) + Vector(0.0f, 1.0f, 0.0f), 0.0f, (&Global_78617 + 196[(iParam0 + 504[iVar014])->f_4810])->f_12, 0.0f, 1.2f, 2.0f, 0.75f);
				}
				if (Function_153(iParam0, (iParam0 + 504[iVar014])->f_48, iParam2, 0, 0))
				{
					iVar146 = 1;
				}
			}
		}
		if (iVar146 && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT((iParam0 + 504[iVar014])->f_52)))
		{
			bVar148 = ADD_BLIP_FOR_OBJECT((iParam0 + 504[iVar014])->f_52, Function_152((&Global_78617 + 196[(iParam0 + 504[iVar014])->f_4810])->f_36), 0f, 2, 0);
			UNK_0x1E98AFEC(bVar148, 1);
			if (Function_151((iParam0 + 504[iVar014])->f_48))
			{
				if (Function_45(1) == iParam1)
				{
					SET_BLIP_PRIORITY(bVar148, 3);
					SET_BLIP_MAX_DISTANCE(bVar148, 1.0f);
					bVar149 = Function_157((iParam0 + 504[iVar014])->f_52, Function_152((&Global_78617 + 196[(iParam0 + 504[iVar014])->f_4810])->f_36));
					Function_147(bVar149, iParam1, (iParam0 + 504[iVar014])->f_48);
					SET_BLIP_PRIORITY(bVar149, 4);
					SET_BLIP_MIN_DISTANCE(bVar149, 1.0f);
					UNK_0x1E98AFEC(bVar149, 1);
				}
				else
				{
					SET_BLIP_MAX_DISTANCE(bVar148, 1.0f);
					Function_52((iParam0 + 504[iVar014])->f_52);
				}
			}
			else
			{
				SET_BLIP_MAX_DISTANCE(bVar148, 1.0f);
			}
			if (Function_151((iParam0 + 504[iVar014])->f_48))
			{
				Function_147(bVar148, iParam1, (iParam0 + 504[iVar014])->f_48);
			}
			else if (Function_24((iParam0 + 504[iVar014])->f_48))
			{
				SET_BLIP_COLOR(bVar148, 1.0f, 1.0f, 1.0f, 0.4f);
			}
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

var Function_157(bool bParam0, bool bParam1) //Position: 0x5357 / 21335
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
	bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
	ITERATE_IN_LAYOUT(bVar1, bVar0);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	bVar3 = GET_BLIP_ON_OBJECT(bVar2);
	if (!IS_BLIP_VALID(bVar3))
	{
		bVar3 = ADD_BLIP_FOR_OBJECT(bVar2, bParam1, 0f, 2, 0);
	}
	DESTROY_ITERATOR(bVar1);
	return bVar3;
}

var Function_158() //Position: 0x539C / 21404
{
	int iVar0;
	
	return iVar0;
}

void Function_159(bool bParam0, int iParam1) //Position: 0x53A4 / 21412
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
		SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar2), iParam1);
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
	DESTROY_ITERATOR(bVar1);
	return;
}

var Function_160(var uParam0, int iParam1, int iParam2) //Position: 0x53F0 / 21488
{
	char* cVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = (&Global_78617 + 196[iParam110])->f_36;
	switch (iVar1)
	{
		case 0x00000048:
			cVar0 = "$/tune/refGroups/refGroups/mp_transport";
			break;
		
		case 0x00000049:
			cVar0 = "$/tune/refGroups/refGroups/mp_help";
			break;
		
		case 0x0000003D:
			cVar0 = "$/tune/refGroups/refGroups/mp_ffa";
			break;
		
		default:
			if (uParam0->f_1112 != iVar1)
			{
				iVar2 = Function_161(iVar1);
				if (!UNK_0x214AFB8C(iVar2))
				{
					*iParam2 = 0;
					return CREATE_PROP_IN_LAYOUT(uParam0->f_12, Function_158(), "$/fragments/p_crd_chipRedPoker01x", *(&Global_78617 + 196[iParam110]), 0.0f, (&Global_78617 + 196[iParam110])->f_12, 0.0f, 1);
				}
				cVar0 = GET_ASSET_NAME(iVar2, 7);
				uParam0->f_1112 = iVar1;
				uParam0->f_1116 = cVar0;
			}
			else
			{
				cVar0 = uParam0->f_1116;
			}
			break;
	}
	*iParam2 = 1;
	return CREATE_PROPSET_IN_LAYOUT(uParam0->f_12, Function_158(), cVar0, *(&Global_78617 + 196[iParam110]), 0.0f, (&Global_78617 + 196[iParam110])->f_12, 0.0f);
}

var Function_161(int iParam0) //Position: 0x5554 / 21844
{
	struct<669> Var0;
	
	*(&Var0 + 76) = 36;
	if (GET_PLAYLIST_FROM_DB(iParam0, &Var0))
	{
		return Var0.f_668;
	}
	return "";
}

var Function_162(int iParam0) //Position: 0x5576 / 21878
{
	switch (iParam0)
	{
		case 0x00000000:
			return "INITIAL";
		
		case 0x00000001:
			return "PUBLIC";
		
		case 0x00000002:
			return "PUBLIC_WAITING";
		
		case 0x00000003:
			return "PRIVATE HOST";
		
		case 0x00000004:
			return "PRIVATE CLIENT";
		
		case 0x00000005:
			return "OUT OF SESSION";
		
		case 0x00000006:
			return "SUPPRESSED";
		
		default:
	}
	return "UNKNOWN";
}

vector3 Function_163(int iParam0) //Position: 0x5620 / 22048
{
	vector3 vVar0;
	
	if (!NET_GET_GAMER_RGB_COLOR(iParam0, &vVar0, &vVar0 + 4, &vVar0 + 8))
	{
		vVar0 = { (68.0f / 255.0f), (68.0f / 255.0f), (68.0f / 255.0f) };
	}
	return StackVal, StackVal, vVar0;
}

var Function_164() //Position: 0x5662 / 22114
{
	return !Function_165();
}

bool Function_165() //Position: 0x566C / 22124
{
	if (Function_167())
	{
		return (Function_166() != 1 || Function_166() != 0);
	}
	return 0;
}

int Function_166() //Position: 0x5685 / 22149
{
	return Global_79349.f_16;
}

bool Function_167() //Position: 0x5691 / 22161
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_168() //Position: 0x569A / 22170
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_169(var uParam0, var uParam1, int iParam2) //Position: 0x56AF / 22191
{
	if (Function_30(0x4000000))
	{
		Function_197();
		Function_28(0x4000000, 0, 1);
	}
	if (Function_30(0x10000000))
	{
		Function_197();
		Function_28(0x10000000, 0, 1);
	}
	if (Function_30(2) != Function_30(0x2000000))
	{
		Function_197();
		Function_28(0x2000000, Function_30(2), 1);
	}
	if (Function_177())
	{
		Function_176(!Function_30(16));
	}
	if (Function_30(16))
	{
		Function_171(&uParam0, &uParam1, &iParam2);
		if (Function_30(8192))
		{
			if (!Function_30(4194304))
			{
				Function_28(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_30(8388608))
			{
				Function_28(8388608, 1, 1);
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
			Function_170();
		}
		Function_28(16384, 1, 1);
	}
	else if (!Function_30(32))
	{
		Function_170();
	}
	Function_28(32768, 0, 1);
	return;
}

void Function_170() //Position: 0x5848 / 22600
{
	if (Function_30(4194304))
	{
		Function_28(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_30(8388608))
	{
		Function_28(8388608, 0, 1);
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

void Function_171(var uParam0, var uParam1, int iParam2) //Position: 0x5951 / 22865
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_28(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_30(0x40000000);
	bVar3 = !Function_30(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_32(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_174(bVar1, 2048, 1))
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
				if (Function_172(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_30(4))
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
			if (Function_172(bVar1, (4294966296 - bVar1), 1))
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

bool Function_172(bool bParam0, bool bParam1, int iParam2) //Position: 0x5AC9 / 23241
{
	var uVar0;
	
	return Function_173(bParam0, bParam1, &uVar0, iParam2);
}

int Function_173(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x5ADA / 23258
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

bool Function_174(bool bParam0, int iParam1, bool bParam2) //Position: 0x5B3F / 23359
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_130(iParam1, bParam2);
	}
	if (!Function_32(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_175(iParam1), 64);
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

var Function_175(int iParam0) //Position: 0x5BC0 / 23488
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
		
		case 0x01000000:
			return "FREE_MODE_DEFENSE_ACTIVE";
			break;
		
		case 0x02000000:
			return "PLAYER_IS_GRIEFER";
			break;
		
		case 0x04000000:
			return "CANNOT_AFFORD_MINIGAME";
			break;
		
		case 0x08000000:
			return "FREE_MODE_DEFENSE_SPOONHOLDER";
			break;
	}
	return "UNKNOWN";
}

void Function_176(bool bParam0) //Position: 0x5ED9 / 24281
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_28(16384, 0, 1);
	return;
}

bool Function_177() //Position: 0x5EF3 / 24307
{
	return Function_30(32768);
}

int Function_178() //Position: 0x5F00 / 24320
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (Function_177() && Function_30(2048))
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
			iVar2 = (iVar1 - Local_69.f_80);
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

int Function_179(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5F86 / 24454
{
	bool bVar0;
	
	if (!Function_30(2048))
	{
		return Function_180(bParam0, uParam1, uParam2, uParam3);
	}
	if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_427, bParam0))
	{
		if (StackVal == 4294967295)
		{
			bVar0 = GET_LOCAL_SLOT();
			if (bParam0 == bVar0)
			{
				Function_172(bParam0, 10, 0);
			}
			else if (StackVal == bVar0)
			{
				Function_172(bParam0, 0, 0);
			}
		}
		else if (StackVal == bParam0)
		{
			Function_172(bParam0, 10, 0);
		}
		else if (StackVal == StackVal)
		{
			Function_172(bParam0, 0, 0);
		}
	}
	return 0;
}

int Function_180(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x6021 / 24609
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* cVar7[32];
	bool bVar15;
	struct<8> Var16;
	bool bVar24;
	
	Function_187(bParam1, uParam2, uParam3);
	iVar0 = Function_185(bParam0);
	iVar2 = NET_GET_GAMER_POSSE_SIZE(bParam0);
	bVar3 = NET_GET_GAMER_POSSE_LEADER(bParam0);
	bVar4 = (iVar2 < 1 && bVar3 != bParam0);
	if (bLocal_68)
	{
		bVar1 = (iVar2 * 10000000);
		iVar5 = 16;
		if (iVar2 >= 1)
		{
			iVar5 = (16 - bVar3) * 10;
			if (bVar4)
			{
				iVar5++;
			}
		}
		bVar1 = (bVar1 + iVar5 * 10000);
		bVar1 = (bVar1 + Function_182((CEIL(Function_183(1, bParam0)) / 1000), 9999));
	}
	else
	{
		bVar1 = FLOOR(Function_183(8, bParam0));
	}
	if (!bParam1)
	{
		Function_172(bParam0, bVar1, 0);
	}
	iVar6 = 0;
	if (Function_45(1) > 0)
	{
		strcpy(&cVar7, "", 32);
		if (Function_45(1) == Function_185(bParam0))
		{
			if (Function_174(bParam0, 0x8000000, 1))
			{
				strcpy(&cVar7, "<MP_DEFEND> ", 32);
			}
			else
			{
				strcpy(&cVar7, "<SPACE> ", 32);
			}
			if (Function_183(2, bParam0) > 0.0f)
			{
				stradd(&cVar7, "--:--", 32);
			}
			else
			{
				bVar15 = CEIL(Function_183(2, bParam0));
				stradd(&cVar7, I2STR((bVar15 / 60)), 32);
				stradd(&cVar7, ":", 32);
				straddi(&cVar7, ((bVar15 % 60) / 10), 32);
				straddi(&cVar7, ((bVar15 % 60) % 10), 32);
			}
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_181(&iVar6), &cVar7);
	}
	Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87(iVar0) };
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_181(&iVar6), UI_GET_STRING(&Var16));
	bVar24 = Function_183(8, bParam0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(Function_181(&iVar6), FLOOR(bVar24));
	if (bLocal_68)
	{
		if (bVar4)
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(Function_181(&iVar6), FLOOR(Function_183(9, bParam0)));
		}
		else
		{
			Function_181(&iVar6);
		}
	}
	if (Function_174(bParam0, 131072, 1))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_181(&iVar6), "<SKULL>");
	}
	return 0;
}

var Function_181(int iParam0) //Position: 0x61E2 / 25058
{
	*iParam0++;
	return (*iParam0 - 1);
}

int Function_182(int iParam0, int iParam1) //Position: 0x61F5 / 25077
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

float Function_183(int iParam0, bool bParam1) //Position: 0x6207 / 25095
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_184(iParam0);
	}
	if (!Function_32(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

var Function_184(int iParam0) //Position: 0x6270 / 25200
{
	return (*&Global_78480 + 176)[iParam0];
}

int Function_185(bool bParam0) //Position: 0x6280 / 25216
{
	if (!Function_32(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_186();
	}
	return Global_76943[bParam096];
}

var Function_186() //Position: 0x62A5 / 25253
{
	return Global_78480;
}

void Function_187(bool bParam0, int iParam1, bool bParam2) //Position: 0x62AF / 25263
{
	if (bParam0)
	{
		if (Function_177())
		{
			NET_PLAYER_LIST_ADD_ITEM(bParam2, iParam1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
		}
	}
	return;
}

int Function_188() //Position: 0x62D0 / 25296
{
	if (Function_30(2048))
	{
		if (Function_177())
		{
			Function_196(Local_69.f_92);
		}
		if (Function_177() || Function_195(&Global_76905 + 64, &Local_69 + 1264))
		{
			NET_PLAYER_LIST_SET_TITLE(&Local_69 + 1264);
		}
		if (!Function_191(0))
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
		Function_28(8192, 0, 1);
		Function_28(131072, 1, 1);
	}
	else
	{
		if (Function_177())
		{
			Function_204();
		}
		return Function_189();
	}
	return 1;
}

int Function_189() //Position: 0x63AD / 25517
{
	bool bVar0;
	int iVar1;
	
	if (!Function_191(1))
	{
		return 0;
	}
	bVar0 = false;
	bLocal_68 = false;
	while (bVar0 > 16 && !bLocal_68)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			bLocal_68 = NET_GET_GAMER_POSSE_SIZE(bVar0) < 1;
		}
		bVar0++;
	}
	NET_PLAYER_LIST_SET_TEAM_SORT(0);
	NET_PLAYER_LIST_SET_HEADER(0, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	iVar1 = 2;
	if (Function_45(1) > 0)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_181(&iVar1), "FRD_StakeHolder");
	}
	NET_PLAYER_LIST_SET_HEADER(Function_181(&iVar1), "mp_plist_region");
	NET_PLAYER_LIST_SET_HEADER(Function_181(&iVar1), "mp_plist_score_alt");
	if (bLocal_68)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_181(&iVar1), "mp_plist_posse");
	}
	NET_PLAYER_LIST_SET_HEADER(Function_181(&iVar1), "mp_plist_mw");
	Function_190();
	bVar0 = iVar1;
	while (bVar0 < 6)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_181(&iVar1), "Common_Null");
		bVar0++;
	}
	return 1;
}

void Function_190() //Position: 0x64D0 / 25808
{
	if (Function_30(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_28(8192, 1, 1);
	}
	else if (Function_30(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_28(8192, 1, 1);
	}
	else
	{
		Function_28(8192, 0, 1);
	}
	return;
}

bool Function_191(bool bParam0) //Position: 0x650D / 25869
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_177() || Function_195(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_193(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_177())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_192(Function_177());
	return 1;
}

void Function_192(bool bParam0) //Position: 0x658E / 25998
{
	if (bParam0 || Function_30(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_30(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_30(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_30(1048576) || Function_30(4)) || Function_130(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_28(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_193(var uParam0) //Position: 0x6617 / 26135
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_194(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_194(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x662B / 26155
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

bool Function_195(bool bParam0, bool bParam1) //Position: 0x6670 / 26224
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

void Function_196(char* cParam0) //Position: 0x66A4 / 26276
{
	if (Function_195(cParam0, &Global_76905))
	{
		Function_28(0x4000000, 1, 1);
	}
	strcpy(&Global_76905, cParam0, 64);
	return;
}

void Function_197() //Position: 0x66C8 / 26312
{
	Function_28(32768, 1, 0);
	return;
}

int Function_198() //Position: 0x66D7 / 26327
{
	if (StackVal == 4294967295)
	{
		return Function_35(GET_LOCAL_SLOT());
	}
	return Function_35(StackVal);
}

bool Function_199() //Position: 0x66F9 / 26361
{
	return Global_78480.f_24 == 4294967294;
}

void Function_200() //Position: 0x6709 / 26377
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
			Local_427[bVar04] = { StackVal, StackVal, StackVal, *(&Local_69 + 1416) };
		}
	}
	return;
}

void Function_201(var uParam0, int iParam1) //Position: 0x6746 / 26438
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_202(var uParam0, int iParam1) //Position: 0x6759 / 26457
{
	Function_201(uParam0, iParam1);
	return;
}

void Function_203() //Position: 0x6766 / 26470
{
	Function_27(4294967295, 0);
	return;
}

void Function_204() //Position: 0x6771 / 26481
{
	Function_196(Function_158());
	return;
}

void Function_205(int iParam0) //Position: 0x677D / 26493
{
	Function_202(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_206() //Position: 0x67B6 / 26550
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		Function_95(iVar0);
		iVar0++;
	}
	return;
}

void Function_207() //Position: 0x67D4 / 26580
{
	return;
}

void Function_208(int iParam0) //Position: 0x67DA / 26586
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
	while (iVar0 <= 60)
	{
		(*iParam0 + 16)[iVar02] = "";
		if (Function_25(iVar0))
		{
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
		}
		iVar0++;
	}
	return;
}

void Function_209(var uParam0, int iParam1) //Position: 0x68B5 / 26805
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_210(int iParam0) //Position: 0x68C4 / 26820
{
	return Function_91(Global_79336, iParam0);
}

void Function_211() //Position: 0x68D3 / 26835
{
	return;
}

int Function_212(bool bParam0) //Position: 0x68D9 / 26841
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return STRING_TO_INT(bVar0);
	}
	return 4294967295;
}

bool Function_213(bool bParam0) //Position: 0x68FC / 26876
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

bool Function_214() //Position: 0x691B / 26907
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = _GET_PARAM_VALUE("mploadgamemode", "DM_ARM");
	if (IS_STRING_VALID(bVar0))
	{
		iVar1 = Function_218(bVar0);
		if (iVar1 >= 4294967295)
		{
			Function_217(iVar1);
			return 1;
		}
	}
	bVar0 = _GET_PARAM_VALUE("mploadplaylist", "MULTI_ROTATION_FFA");
	if (IS_STRING_VALID(bVar0))
	{
		iVar2 = Function_216(bVar0);
		if (iVar2 != 0)
		{
			Function_215(iVar2);
			return 1;
		}
	}
	return 0;
}

void Function_215(int iParam0) //Position: 0x69AA / 27050
{
	Global_79961 = iParam0;
	return;
}

int Function_216(int iParam0) //Position: 0x69B6 / 27062
{
	struct<65> Var0;
	
	*(&Var0 + 76) = 36;
	if (GET_PLAYLIST_FROM_DB_BY_NAME(iParam0, &Var0))
	{
		return Var0.f_64;
	}
	return 0;
}

void Function_217(int iParam0) //Position: 0x69D6 / 27094
{
	Global_79960 = iParam0;
	return;
}

var Function_218(int iParam0) //Position: 0x69E2 / 27106
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_83589)
	{
		Function_7(iVar0, &uVar1);
		if (Function_219(&uVar1, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_219(char* cParam0, char* cParam1) //Position: 0x6A13 / 27155
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

void Function_220() //Position: 0x6A3E / 27198
{
	Function_221(&Local_69 + 4);
	return;
}

void Function_221(char* cParam0) //Position: 0x6A4B / 27211
{
	strcpy(cParam0, "FREEROAM", 16);
	cParam0->f_16 = 4294967295;
	cParam0->f_28 = 4294967295;
	cParam0->f_32 = 0;
	cParam0->f_36 = 0;
	return;
}

void Function_222() //Position: 0x6A74 / 27252
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		Local_427[iVar04] = 4294967295;
		Local_427[iVar04].f_8 = 4294967295;
		iVar0++;
	}
	return;
}

var Function_223(bool bParam0) //Position: 0x6A9F / 27295
{
	bool bVar0;
	
	bVar0 = Function_224();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_224() //Position: 0x6AB3 / 27315
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

