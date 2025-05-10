//Decompiled with MagicRDR v1.0
//Function Count : 5
//Statics Count : 301
//Natives Count : 48
//Parameters Count : 0

#region Local Var
	struct<15> Local_0[20];
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	bVar0 = CREATE_LAYOUT(Function_4());
	bVar1 = CREATE_CAMERA_IN_LAYOUT(bVar0, Function_4(), 0);
	bVar2 = 4294967295;
	bVar3 = IS_SIMULATE_START_MULTIPLAYER();
	if (bVar3)
	{
		bVar3 = NET_AUTHENTICATE_GAMER(0, "Multiplayer Online");
	}
	ENABLE_CHILD_SECTOR("blk_saloon_int_Props01x");
	ENABLE_CHILD_SECTOR("blk_saloon_int_01x");
	DISABLE_CHILD_SECTOR("tes_wall02x");
	DISABLE_CHILD_SECTOR("mp_tes_coop01ax");
	DISABLE_CHILD_SECTOR("mp_tes_coop01bx");
	DISABLE_CHILD_SECTOR("mp_tes_coop01cx");
	DISABLE_CHILD_SECTOR("mp_tes_coop02x");
	DISABLE_CHILD_SECTOR("mp_tes_base01x");
	DISABLE_CHILD_SECTOR("mp_gap_mineLid01x");
	DISABLE_CHILD_SECTOR("mp_fom_coop01x");
	DISABLE_CHILD_SECTOR("mp_fom_burntDebris01x");
	DISABLE_CHILD_SECTOR("mp_wld_base03x");
	DISABLE_CHILD_SECTOR("mp_nos_coop01ax");
	DISABLE_CHILD_SECTOR("mp_nos_coop01bx");
	DISABLE_CHILD_SECTOR("mp_nos_coop01cx");
	DISABLE_CHILD_SECTOR("mp_nos_coop01dx");
	DISABLE_CHILD_SECTOR("mp_nos_coop01ex");
	DISABLE_CHILD_SECTOR("mp_scr_coop01x");
	DISABLE_CHILD_SECTOR("arm_flags01x");
	DISABLE_CHILD_SECTOR("chu_flags01x");
	DISABLE_CHILD_SECTOR("esc_flags01x");
	DISABLE_CHILD_SECTOR("han_flags01x");
	DISABLE_CHILD_SECTOR("hen_flags01x");
	DISABLE_CHILD_SECTOR("mtp_flags01x");
	DISABLE_CHILD_SECTOR("mp_arm_base01x");
	DISABLE_CHILD_SECTOR("mp_cas_base01x");
	DISABLE_CHILD_SECTOR("mp_pik_base01x");
	DISABLE_CHILD_SECTOR("mp_tes_base01x");
	DISABLE_CHILD_SECTOR("mp_tum_base01x");
	DISABLE_CHILD_SECTOR("mp_arm_ffa01x");
	DISABLE_CHILD_SECTOR("mp_chu_ffa01x");
	DISABLE_CHILD_SECTOR("mp_esc_ffa01x");
	DISABLE_CHILD_SECTOR("mp_hen_ffa01x");
	DISABLE_CHILD_SECTOR("mp_lsh_ffa01x");
	DISABLE_CHILD_SECTOR("mp_pik_ffa01x");
	DISABLE_CHILD_SECTOR("mp_upr_ffa01x");
	DISABLE_CHILD_SECTOR("mp_chu_platforms01x");
	DISABLE_CHILD_SECTOR("mp_mtp_base01x");
	DISABLE_CHILD_SECTOR("mp_fom_base01x");
	DISABLE_CHILD_SECTOR("mp_fom_ffa01x");
	DISABLE_CHILD_SECTOR("mp_wld_base01x");
	DISABLE_CHILD_SECTOR("mp_chu_base01x");
	PRINTSTRING("Hiding DLC leaderboards...\n");
	UI_EXCLUDE("LbCat_DLC0");
	UI_EXCLUDE("LbCat_DLC1");
	UI_EXCLUDE("LbCat_DLC2");
	UI_EXCLUDE("LbCat_DLC3");
	UI_EXCLUDE("LbCat_DLC4");
	UI_EXCLUDE("LbCat_DLC5");
	UI_EXCLUDE("LbCat_DLC6");
	UI_EXCLUDE("LbCat_DLC7");
	if (bVar3)
	{
		UI_SEND_EVENT("setupComplete");
		UI_SEND_EVENT("startScreenExit");
		UI_SEND_EVENT("select");
		UI_SEND_EVENT("net.EnterOnline");
		bVar2 = false;
	}
	else if (IS_SIMULATE_START_PRESS() && !IS_SIMULATE_START_MULTIPLAYER())
	{
		UI_SEND_EVENT("setupComplete");
		UI_SEND_EVENT("startScreenExit");
		UI_SEND_EVENT("simulateStartPress");
		bVar2 = false;
	}
	else
	{
		Function_3();
		bVar4 = RAND_INT_RANGE(false, 19);
		bVar5 = RAND_INT_RANGE(false, 2);
		if (!IS_DISK_CACHE_PRIMED())
		{
			bVar4 = RAND_INT_RANGE(false, 2);
			PRINTSTRING("PressStart.sc - Cache is NOT primed, using fewer shots.");
		}
		else
		{
			PRINTSTRING("PressStart.sc - Cache is primed, all shots available.");
		}
		PRINTNL();
		STREAMING_SET_CUTSCENE_MODE(1);
		SET_CAMERA_POSITION(bVar1, Local_0[bVar415]);
		SET_CAMERA_ORIENTATION(bVar1, *(&Local_0[bVar415] + 12), 0);
		SET_CAMERA_DIRECTION(bVar1, *(&Local_0[bVar415] + 24), 1);
		SET_CURRENT_CAMERA_ON_CHANNEL(bVar1, false, 0f, 0f, 0, 0, 0, 0, 0, 0);
		SET_WEATHER((*&Local_0[bVar415] + 36)[bVar5], Function_2());
		SET_TIME_OF_DAY(Local_0[bVar415].f_52);
		AMBIENCE_AUDIO_ENTITY_UPDATE_TERRITORY(&Local_0[bVar415] + 56);
		bVar2 = Function_1();
	}
	SET_PLAYER_PADINDEX(0, bVar2);
	PRINTSTRING("nStartpad ");
	PRINTINT(bVar2);
	PRINTNL();
	UI_SEND_EVENT("startPadSelected");
	WAIT(false);
	FLASH_INTRO_FADE_PRESS_START(1);
	FLASH_INTRO_FADE_LOGO(1);
	FLASH_INTRO_SHUTDOWN();
	MOVIE_PLAYER_STOP_MOVIE();
	UI_SEND_EVENT("startScreenExit");
	while (!HUD_IS_FADED())
	{
		WAIT(1000);
	}
	REMOVE_CAMERA_FROM_CHANNEL(bVar1, 0);
	DESTROY_LAYOUT(bVar0);
	HUD_ENABLE(true);
	PRINTSTRING("asdf");
	TERMINATE_THIS_SCRIPT();
	return;
}

int Function_1() //Position: 0x66C / 1644
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	bVar0 = 4294967295;
	SETTIMERA(0);
	WAIT(5);
	UI_SEND_EVENT("fileDoFreeSpaceCheck");
	while (!STREAMING_IS_WORLD_LOADED())
	{
		WAIT(false);
	}
	while (!FLASH_INTRO_ARE_LEGALS_COMPLETED())
	{
		WAIT(false);
	}
	while (UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
	{
		WAIT(false);
	}
	HUD_ENABLE(false);
	UI_SEND_EVENT("loadComplete");
	UI_SEND_EVENT("setupComplete");
	WAIT(false);
	SET_TIME_ACCELERATION(30.0f);
	FLASH_INTRO_FADE_PRESS_START(0);
	Global_79339 = 0;
	iVar1 = UI_GET_REBOOT_REASON(&bVar0);
	if (iVar1 == 2)
	{
		UI_SEND_EVENT("fileSignedOutPostReboot");
	}
	else if (iVar1 == 5)
	{
		UI_SEND_EVENT("dlc.reboot_content_removed");
	}
	while (bVar0 == 4294967295)
	{
		if (UI_IS_SHOWING_DIALOG())
		{
			bVar3 = false;
			if (((UI_ISFOCUSED("SSAlert_BlockedMP") || UI_ISFOCUSED("SSAlert_NotSignedIn")) || UI_ISFOCUSED("SSAlert_NotOnline")) || UI_ISFOCUSED("SSAlert_NoCable"))
			{
				if (NET_IS_ONLINE_AVAILABLE())
				{
					bVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
					Global_79339 = 1;
					UI_SEND_EVENT("net.EnterOnline");
					bVar3 = true;
				}
				else
				{
					iVar2 = 0;
					while (iVar2 <= 4)
					{
						if (IS_BUTTON_PRESSED(iVar2, 5, 1, false))
						{
							bVar3 = true;
						}
						iVar2++;
					}
				}
				if (bVar3)
				{
					UI_EXIT("SSAlert_BlockedMP");
					UI_EXIT("SSAlert_NotSignedIn");
					UI_EXIT("SSAlert_NotOnline");
					UI_EXIT("SSAlert_NoCable");
				}
			}
			else if (UI_ISFOCUSED("Dialog_PlayerHasSignedOut"))
			{
				iVar2 = 0;
				while (iVar2 <= 4)
				{
					if (IS_BUTTON_PRESSED(iVar2, 6, 1, false))
					{
						bVar3 = true;
					}
					iVar2++;
				}
				if (bVar3)
				{
					UI_EXIT("Dialog_PlayerHasSignedOut");
				}
			}
		}
		else
		{
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				if (IS_BUTTON_PRESSED(iVar2, 11, 1, false))
				{
					bVar0 = iVar2;
				}
				iVar2++;
			}
		}
		if (bVar0 == 4294967295)
		{
			bVar0 = UNK_0x03962973();
			if (bVar0 != 4294967295)
			{
				Global_79339 = 1;
				UI_SEND_EVENT("net.EnterOnlineForInvite");
			}
		}
		iVar4 = 4294967295;
		if (bVar0 != 4294967295 && UI_GET_REBOOT_REASON(&iVar4) != 4)
		{
			bVar0 = iVar4;
			PRINTSTRING("Rebooted for Content controller=");
			PRINTINT(bVar0);
			PRINTSTRING("\n");
		}
		WAIT(false);
	}
	return bVar0;
}

var Function_2() //Position: 0x99E / 2462
{
	return MAKE_TIME_OF_DAY_EX(false, false, false, true);
}

void Function_3() //Position: 0x9AB / 2475
{
	int iVar0;
	
	iVar0 = 0;
	Local_0[iVar015] = { -4481.12f, 5.946f, 3709.654f };
	*(&Local_0[iVar015] + 12) = { 8.613f, 131.857f, 0.0f };
	*(&Local_0[iVar015] + 24) = { -0.74f, 0.15f, 0.656f };
	(*&Local_0[iVar015] + 36)[0] = 2;
	(*&Local_0[iVar015] + 36)[1] = 2;
	(*&Local_0[iVar015] + 36)[2] = 2;
	Local_0[iVar015].f_52 = MAKE_TIME_OF_DAY(17, 54, 0);
	strcpy(&Local_0[iVar015] + 56, "fro", 4);
	iVar0++;
	Local_0[iVar015] = { -1422.511f, 210.743f, 1833.63f };
	*(&Local_0[iVar015] + 12) = { 8.304f, -95.444f, 0.0f };
	*(&Local_0[iVar015] + 24) = { 0.985f, 0.144f, 0.094f };
	(*&Local_0[iVar015] + 36)[0] = 5;
	(*&Local_0[iVar015] + 36)[1] = 2;
	(*&Local_0[iVar015] + 36)[2] = 3;
	Local_0[iVar015].f_52 = MAKE_TIME_OF_DAY(6, 6, 0);
	strcpy(&Local_0[iVar015] + 56, "nor", 4);
	iVar0++;
	Local_0[iVar015] = { -627.2f, 143.995f, 800.196f };
	*(&Local_0[iVar015] + 12) = { 11.534f, -94.804f, 0.0f };
	*(&Local_0[iVar015] + 24) = { 0.976f, 0.2f, 0.082f };
	(*&Local_0[iVar015] + 36)[0] = 2;
	(*&Local_0[iVar015] + 36)[1] = 2;
	(*&Local_0[iVar015] + 36)[2] = 2;
	Local_0[iVar015].f_52 = MAKE_TIME_OF_DAY(6, 0, 0);
	strcpy(&Local_0[iVar015] + 56, "nor", 4);
	iVar0++;
	Local_0[iVar015] = { -639.938f, 35.648f, 3549.802f };
	*(&Local_0[iVar015] + 12) = { 11.37f, -79.908f, 0.0f };
	*(&Local_0[iVar015] + 24) = { 0.965f, 0.197f, -0.172f };
	(*&Local_0[iVar015] + 36)[0] = 2;
	(*&Local_0[iVar015] + 36)[1] = 2;
	(*&Local_0[iVar015] + 36)[2] = 2;
	Local_0[iVar015].f_52 = MAKE_TIME_OF_DAY(6, 40, 0);
	strcpy(&Local_0[iVar015] + 56, "mex", 4);
	iVar0++;
	Local_0[iVar015] = { -330.665f, 24.499f, 3416.434f };
	*(&Local_0[iVar015] + 12) = { 13.423f, 140.379f, 0.0f };
	*(&Local_0[iVar015] + 24) = { -0.62f, 0.232f, 0.749f };
	(*&Local_0[iVar015] + 36)[0] = 0;
	(*&Local_0[iVar015] + 36)[1] = 0;
	(*&Local_0[iVar015] + 36)[2] = 0;
	Local_0[iVar015].f_52 = MAKE_TIME_OF_DAY(7, 0, 0);
	strcpy(&Local_0[iVar015] + 56, "mex", 4);
	iVar0++;
	Local_0[iVar015] = { -3200.493f, 39.453f, 4555.916f };
	*(&Local_0[iVar015] + 12) = { 7.407f, 90.383f, 0.0f };
	*(&Local_0[iVar015] + 24) = { -0.992f, 0.129f, 0.007f };
	(*&Local_0[iVar015] + 36)[0] = 2;
	(*&Local_0[iVar015] + 36)[1] = 2;
	(*&Local_0[iVar015] + 36)[2] = 2;
	Local_0[iVar015].f_52 = MAKE_TIME_OF_DAY(17, 30, 0);
	strcpy(&Local_0[iVar015] + 56, "mex", 4);
	iVar0++;
	Local_0[iVar015] = { -378.529f, 36.804f, 2888.644f };
	*(&Local_0[iVar015] + 12) = { 19.647f, -64.053f, 0.0f };
	*(&Local_0[iVar015] + 24) = { 0.847f, 0.336f, -0.412f };
	(*&Local_0[iVar015] + 36)[0] = 0;
	(*&Local_0[iVar015] + 36)[1] = 0;
	(*&Local_0[iVar015] + 36)[2] = 0;
	Local_0[iVar015].f_52 = MAKE_TIME_OF_DAY(6, 51, 0);
	strcpy(&Local_0[iVar015] + 56, "fro", 4);
	iVar0++;
	Local_0[iVar015] = { 85.627f, 129.558f, 1412.801f };
	*(&Local_0[iVar015] + 12) = { 5.309f, 123.244f, 0.0f };
	*(&Local_0[iVar015] + 24) = { -0.833f, 0.093f, 0.546f };
	(*&Local_0[iVar015] + 36)[0] = 1;
	(*&Local_0[iVar015] + 36)[1] = 0;
	(*&Local_0[iVar015] + 36)[2] = 2;
	Local_0[iVar015].f_52 = MAKE_TIME_OF_DAY(13, 0, 0);
	strcpy(&Local_0[iVar015] + 56, "nor", 4);
	iVar0++;
	Local_0[iVar015] = { -121.951f, 125.742f, 1205.495f };
	*(&Local_0[iVar015] + 12) = { 12.039f, 72.157f, 0.0f };
	*(&Local_0[iVar015] + 24) = { -0.931f, 0.209f, -0.3f };
	(*&Local_0[iVar015] + 36)[0] = 1;
	(*&Local_0[iVar015] + 36)[1] = 2;
	(*&Local_0[iVar015] + 36)[2] = 1;
	Local_0[iVar015].f_52 = MAKE_TIME_OF_DAY(13, 0, 0);
	strcpy(&Local_0[iVar015] + 56, "nor", 4);
	iVar0++;
	Local_0[iVar015] = { -839.653f, 195.536f, 886.82f };
	*(&Local_0[iVar015] + 12) = { 49.276f, 115.377f, 0.0f };
	*(&Local_0[iVar015] + 24) = { -0.589f, 0.758f, 0.28f };
	(*&Local_0[iVar015] + 36)[0] = 5;
	(*&Local_0[iVar015] + 36)[1] = 5;
	(*&Local_0[iVar015] + 36)[2] = 5;
	Local_0[iVar015].f_52 = MAKE_TIME_OF_DAY(19, 0, 0);
	strcpy(&Local_0[iVar015] + 56, "nor", 4);
	iVar0++;
	Local_0[iVar015] = { -912.198f, 199.899f, 1766.551f };
	*(&Local_0[iVar015] + 12) = { 13.889f, 41.717f, 0.0f };
	*(&Local_0[iVar015] + 24) = { -0.646f, 0.24f, -0.725f };
	(*&Local_0[iVar015] + 36)[0] = 2;
	(*&Local_0[iVar015] + 36)[1] = 2;
	(*&Local_0[iVar015] + 36)[2] = 2;
	Local_0[iVar015].f_52 = MAKE_TIME_OF_DAY(7, 0, 0);
	strcpy(&Local_0[iVar015] + 56, "nor", 4);
	iVar0++;
	Local_0[iVar015] = { -495.08f, 147.581f, 1879.051f };
	*(&Local_0[iVar015] + 12) = { 0.042f, -135.351f, 0.0f };
	*(&Local_0[iVar015] + 24) = { 0.703f, 0.001f, 0.711f };
	(*&Local_0[iVar015] + 36)[0] = 2;
	(*&Local_0[iVar015] + 36)[1] = 2;
	(*&Local_0[iVar015] + 36)[2] = 2;
	Local_0[iVar015].f_52 = MAKE_TIME_OF_DAY(7, 0, 0);
	strcpy(&Local_0[iVar015] + 56, "nor", 4);
	iVar0++;
	Local_0[iVar015] = { -3946.866f, 30.355f, 3062.77f };
	*(&Local_0[iVar015] + 12) = { 6.973f, 54.951f, 0.0f };
	*(&Local_0[iVar015] + 24) = { -0.813f, 0.121f, -0.57f };
	(*&Local_0[iVar015] + 36)[0] = 1;
	(*&Local_0[iVar015] + 36)[1] = 1;
	(*&Local_0[iVar015] + 36)[2] = 1;
	Local_0[iVar015].f_52 = MAKE_TIME_OF_DAY(7, 30, 0);
	strcpy(&Local_0[iVar015] + 56, "fro", 4);
	iVar0++;
	Local_0[iVar015] = { -3172.137f, 44.054f, 3714.56f };
	*(&Local_0[iVar015] + 12) = { 11.959f, -137.357f, 0.0f };
	*(&Local_0[iVar015] + 24) = { 0.663f, 0.207f, 0.72f };
	(*&Local_0[iVar015] + 36)[0] = 1;
	(*&Local_0[iVar015] + 36)[1] = 1;
	(*&Local_0[iVar015] + 36)[2] = 1;
	Local_0[iVar015].f_52 = MAKE_TIME_OF_DAY(17, 0, 0);
	strcpy(&Local_0[iVar015] + 56, "fro", 4);
	iVar0++;
	Local_0[iVar015] = { 414.902f, 80.721f, 3494.851f };
	*(&Local_0[iVar015] + 12) = { 3.38f, 54.313f, 0.0f };
	*(&Local_0[iVar015] + 24) = { -0.811f, 0.059f, -0.582f };
	(*&Local_0[iVar015] + 36)[0] = 0;
	(*&Local_0[iVar015] + 36)[1] = 0;
	(*&Local_0[iVar015] + 36)[2] = 0;
	Local_0[iVar015].f_52 = MAKE_TIME_OF_DAY(7, 0, 0);
	strcpy(&Local_0[iVar015] + 56, "mex", 4);
	iVar0++;
	Local_0[iVar015] = { 77.174f, 95.916f, 2928.188f };
	*(&Local_0[iVar015] + 12) = { 0.149f, 130.056f, 0.0f };
	*(&Local_0[iVar015] + 24) = { -0.765f, 0.003f, 0.644f };
	(*&Local_0[iVar015] + 36)[0] = 2;
	(*&Local_0[iVar015] + 36)[1] = 2;
	(*&Local_0[iVar015] + 36)[2] = 2;
	Local_0[iVar015].f_52 = MAKE_TIME_OF_DAY(12, 0, 0);
	strcpy(&Local_0[iVar015] + 56, "fro", 4);
	iVar0++;
	Local_0[iVar015] = { -1265.052f, 77.699f, 3610.894f };
	*(&Local_0[iVar015] + 12) = { 12.592f, 60.897f, 0.0f };
	*(&Local_0[iVar015] + 24) = { -0.853f, 0.218f, -0.475f };
	(*&Local_0[iVar015] + 36)[0] = 2;
	(*&Local_0[iVar015] + 36)[1] = 2;
	(*&Local_0[iVar015] + 36)[2] = 2;
	Local_0[iVar015].f_52 = MAKE_TIME_OF_DAY(7, 0, 0);
	strcpy(&Local_0[iVar015] + 56, "mex", 4);
	iVar0++;
	Local_0[iVar015] = { -2061.975f, 44.545f, 3113.069f };
	*(&Local_0[iVar015] + 12) = { 6.955f, -15.545f, 0.0f };
	*(&Local_0[iVar015] + 24) = { 0.266f, 0.121f, -0.956f };
	(*&Local_0[iVar015] + 36)[0] = 2;
	(*&Local_0[iVar015] + 36)[1] = 2;
	(*&Local_0[iVar015] + 36)[2] = 2;
	Local_0[iVar015].f_52 = MAKE_TIME_OF_DAY(10, 0, 0);
	strcpy(&Local_0[iVar015] + 56, "fro", 4);
	iVar0++;
	Local_0[iVar015] = { -470.088f, 21.47f, 3974.894f };
	*(&Local_0[iVar015] + 12) = { 48.507f, 98.761f, 0.0f };
	*(&Local_0[iVar015] + 24) = { -0.655f, 0.749f, 0.101f };
	(*&Local_0[iVar015] + 36)[0] = 0;
	(*&Local_0[iVar015] + 36)[1] = 0;
	(*&Local_0[iVar015] + 36)[2] = 0;
	Local_0[iVar015].f_52 = MAKE_TIME_OF_DAY(7, 0, 0);
	strcpy(&Local_0[iVar015] + 56, "mex", 4);
	iVar0++;
	Local_0[iVar015] = { -2885.432f, 20.614f, 2714.08f };
	*(&Local_0[iVar015] + 12) = { 7.073f, 72.66f, 0.0f };
	*(&Local_0[iVar015] + 24) = { -0.947f, 0.123f, -0.296f };
	(*&Local_0[iVar015] + 36)[0] = 2;
	(*&Local_0[iVar015] + 36)[1] = 2;
	(*&Local_0[iVar015] + 36)[2] = 2;
	Local_0[iVar015].f_52 = MAKE_TIME_OF_DAY(14, 30, 0);
	strcpy(&Local_0[iVar015] + 56, "fro", 4);
	iVar0++;
	return;
}

var Function_4() //Position: 0x14C4 / 5316
{
	var uVar0;
	
	return uVar0;
}

