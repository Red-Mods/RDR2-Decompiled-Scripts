//Decompiled with MagicRDR v1.0
//Function Count : 465
//Statics Count : 374
//Natives Count : 517
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<929> Local_4 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar40;
	vector3 vVar41[6];
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	bool bVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	var uVar72;
	vector3 vVar73;
	float fVar76;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	uLocal_373 = "";
	PRINTSTRING("********************************************");
	PRINTNL();
	PRINTSTRING("                 MAIN_Z.SC");
	PRINTNL();
	PRINTSTRING("SCRIPTS ARE COMPILED WITH STANDALONE DEFINED");
	PRINTNL();
	PRINTSTRING("********************************************");
	PRINTNL();
	DLC_PRE_INIT_CONTENT();
	STREAMING_ENABLE_POI_STREAMING(0);
	Function_464(0);
	SET_ALL_DOOR_LOCKS_VISIBLE(1);
	TOGGLE_COVER_PROPS(0);
	SET_AGRESSIVE_EVENT_ON(0);
	UI_EXCLUDE("StatTab_Crimes");
	UI_EXCLUDE("StatTab_Score");
	UI_EXCLUDE("StatTab_Money");
	UI_EXCLUDE("StatTab_Missions");
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	Function_462();
	Global_30840 = 0;
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	SET_AMBIENT_ACTOR_SPEED_SCALE_RANGE(0.8f, 1.35f);
	SET_FLOCK_DEFAULT_POPULATION_MAX_PER_CELL(1);
	SET_INDIVIDUAL_DEFAULT_POPULATION_MAX_PER_CELL(15);
	Global_3365 = 1;
	Global_3366 = 0;
	Global_3391 = 1;
	if (Function_461("noDDA"))
	{
		Global_76853 = 0;
	}
	else
	{
		Global_76853 = 1;
	}
	Global_30922 = 4294967295;
	Function_455();
	Function_454();
	Function_452();
	if (IS_LAUNCH_RETAIL() && Global_3364)
	{
		bLocal_324 = true;
		Global_3365 = 1;
		Function_451();
	}
	SET_RICH_PRESENCE(2, 0, 0, 0, 0);
	UI_SET_STRING("LOCAL_PLAYER_GAMERTAG", NET_GET_LOCAL_GAMER_NAME());
	if (!Global_3363)
	{
		Global_88817 = Local_328.f_172;
	}
	if (Function_461("zombiePressDemo"))
	{
		Global_3421 = 1;
		bLocal_324 = false;
		Global_3365 = 0;
		UI_EXCLUDE("JournalTab_Challenges_Panel");
		UI_EXCLUDE("JournalTab_Quest_Panel");
	}
	RETRIEVE_GAME_STATE(&Local_328, 44, 1);
	UI_ENABLE("PM_Stats");
	Function_450();
	if (Local_328.f_68)
	{
		Global_34165.f_48++;
		Function_449(&Global_34165 + 12, &Global_34165 + 16);
		Global_34165 = { StackVal, StackVal, Function_449(&Global_34165 + 12, &Global_34165 + 16) };
		Global_34165.f_24 = Function_448();
	}
	if (Global_3364)
	{
		LOG_MESSAGE("Initializing deed array!");
		Function_447();
	}
	if (Global_34165.f_28)
	{
		if (Global_34165.f_28)
		{
			LOG_MESSAGE("Resetting from mission!");
			Global_34165.f_36 = 1;
		}
	}
	else
	{
		bLocal_321 = true;
	}
	bVar0 = 13;
	Function_445(&bVar0, "ZombiePackGringos", 12, 0);
	while (!Function_440(&bVar0))
	{
		WAIT(0);
	}
	GRINGO_SETUP_PROP_ASSOCIATION("p_gen_locatorDummy02x", "$/content/DLC/ZombiePack/Gringos/ZombiePack_HorseHitch", "horseHitch1", 1.05f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
	GRINGO_SETUP_PROP_ASSOCIATION("p_gen_locatorDummy02x", "$/content/DLC/ZombiePack/Gringos/ZombiePack_HorseHitch2", "horseHitch2", -1.05f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
	GRINGO_SETUP_PROP_ASSOCIATION("p_gen_coffin04x", "$/content/DLC/ZombiePack/Gringos/DLC_player_burn_coffin", "LootCoffin", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
	GRINGO_SETUP_PROP_ASSOCIATION("p_gen_safe02x", "$/content/scripting/gringo/SimpleGringo/horse_drinking", "Player_Lockpick_Safe", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION("rstarGringoGeneric_Type", "pickSafe", "horse_drinking", "Player_Lockpick_Safe", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION("rstarGringoGeneric_Type", "openArmoire", "horse_drinking", "stand_armoir", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION("rstarGringoGeneric_Type", "openCredenza", "horse_drinking", "open_credenza", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION("rstarGringoGeneric_Type", "nopenChest", "horse_drinking", "stand_open_chest", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
	iVar40 = Function_436(0, 1, 1);
	if (Global_3421)
	{
		Global_34165 = { -2899.875f, 19.075f, 2710.246f };
		Global_34165.f_12 = 24.269f;
	}
	else if (Local_328.f_16)
	{
		bLocal_321 = false;
		if (Global_6267 == 1)
		{
			if (!Global_34165.f_28)
			{
				Global_34165 = { -115.997f, 118.869f, 1373.4f };
				Global_63097 = 1;
				Function_435(16385);
			}
			else
			{
				Global_34165 = { -115.997f, 118.869f, 1373.4f };
			}
		}
		else
		{
			Global_34165 = { StackVal, StackVal, *(&Local_328 + 4) };
		}
	}
	else if (Global_3364 || !Global_34165.f_28)
	{
		if (IS_STARTPOS_IN_COMMANDLINE())
		{
			GET_COMMANDLINE_START_POS(&Global_34165, &Global_34165 + 12);
			Global_34165.f_24 = 4294967295;
		}
		else if (!Global_34165.f_32)
		{
			if (!bLocal_324)
			{
				if (Function_461("randomstartloc"))
				{
					iVar60 = FLOOR(TO_FLOAT((RAND_INT_RANGE(0, vVar41 * 1000) / 1000)));
					if (iVar60 <= 0)
					{
						iVar60 = 0;
					}
					else if (iVar60 > vVar41)
					{
						iVar60 = (vVar41 - 1);
					}
					vVar41[03] = { -837.534f, 92.062f, 2379.602f };
					vVar41[13] = { -2103.409f, 16.449f, 2604.172f };
					vVar41[23] = { 108.881f, 73.304f, 2322.866f };
					vVar41[33] = { -4296.771f, 22.116f, 4406.287f };
					vVar41[43] = { -2730.71f, 32.353f, 4251.411f };
					vVar41[53] = { 661.31f, 77.936f, 1214.231f };
					Global_34165 = { StackVal, StackVal, vVar41[iVar603] };
				}
				else
				{
					Global_34165 = { -115.997f, 118.869f, 1373.4f };
				}
			}
			else if (Global_3365 && !Global_34165.f_28)
			{
				if (StackVal && StackVal != 3 != 4)
				{
					Global_63097 = 1;
					Function_435(16385);
					if (!UI_ISACTIVE("nCutscenes"))
					{
						UI_ACTIVATE("nCutscenes");
					}
					Global_34165 = { -115.997f, 118.869f, 1373.4f };
				}
			}
		}
		if (!Global_3365)
		{
			Global_34165.f_12 = 176.588f;
		}
	}
	SET_START_POS(Global_34165, Global_34165.f_12, 0);
	Function_434();
	Global_13112 = { StackVal, StackVal, Function_434() };
	Global_13112.f_72 = 4294967295;
	if (!Function_433(Global_63095, 1))
	{
		Function_432(&Global_63084 + 32, 65536);
		Function_432(&Global_63084 + 32, 2);
		Function_432(&Global_63084 + 32, 1);
	}
	else
	{
		iLocal_323 = 1;
	}
	if (StackVal && Global_3365 == 3)
	{
		Function_431();
		Function_430();
	}
	Function_428();
	Function_426();
	Function_425();
	if (!Function_424(1024))
	{
		WAIT(0);
	}
	iVar61 = 1;
	LOAD_AUDIO_BANK("DLC_00", "DLC6\\ZOMBIE_MISC_1");
	while (iVar61 == 1)
	{
		iVar61 = GET_AUDIO_BANK_LOADING_STATUS("DLC_00", "DLC6\\ZOMBIE_MISC_1");
		WAIT(0);
	}
	if (iVar61 == 0)
	{
		MAKE_AUDIO_SLOT_STATIC("DLC_00");
	}
	iVar61 = 1;
	LOAD_AUDIO_BANK("DLC_01", "DLC6\\ZOMBIE_MISC_3");
	while (iVar61 == 1)
	{
		iVar61 = GET_AUDIO_BANK_LOADING_STATUS("DLC_01", "DLC6\\ZOMBIE_MISC_3");
		WAIT(0);
	}
	if (iVar61 == 0)
	{
		MAKE_AUDIO_SLOT_STATIC("DLC_01");
	}
	iVar61 = 1;
	LOAD_AUDIO_BANK("DLC_02", "DLC6\\ZOMBIE_MISC_4");
	while (iVar61 == 1)
	{
		iVar61 = GET_AUDIO_BANK_LOADING_STATUS("DLC_02", "DLC6\\ZOMBIE_MISC_4");
		WAIT(0);
	}
	if (iVar61 == 0)
	{
		MAKE_AUDIO_SLOT_STATIC("DLC_02");
	}
	iVar61 = 1;
	LOAD_AUDIO_BANK("DLC_03", "DLC6\\ZOMBIE_MISC_2");
	while (iVar61 == 1)
	{
		iVar61 = GET_AUDIO_BANK_LOADING_STATUS("DLC_03", "DLC6\\ZOMBIE_MISC_2");
		WAIT(0);
	}
	if (iVar61 == 0)
	{
		MAKE_AUDIO_SLOT_STATIC("DLC_03");
	}
	if (!REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\ranch08"))
	{
		WAIT(0);
	}
	DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_ZOMBIE", &uLocal_373);
	Function_423();
	Function_445(&bVar0, "$/content/DLC/ZombiePack/system/Player_z", 4, 0);
	Function_445(&bVar0, "$/content/init/rdr2init_each_load", 4, 0);
	Function_445(&bVar0, "$/content/DLC/ZombiePack/system/short_update_thread_z", 4, 0);
	Function_445(&bVar0, "$/content/DLC/ZombiePack/system/medium_update_thread_z", 4, 0);
	Function_445(&bVar0, "$/content/DLC/ZombiePack/system/long_update_thread_z", 4, 0);
	Function_445(&bVar0, "$/content/DLC/ZombiePack/system/DesignerDefined/UI/FuiEventMonitor_z", 4, 0);
	Function_445(&bVar0, "$/content/DLC/ZombiePack/system/Pause_z", 4, 0);
	Function_445(&bVar0, "$/content/scripting/gringo/SimpleGringo/hogtie", 1, 0);
	Function_445(&bVar0, "$/content/scripting/gringo/SimpleGringo/hogtie_pickup", 1, 0);
	Function_445(&bVar0, "$/content/scripting/gringo/SimpleGringo/Loot_Corpse", 1, 0);
	Function_445(&bVar0, "ZombiePackGringos", 12, 0);
	Function_445(&bVar0, "z_dlc_z_roar", 5, 0);
	Function_445(&bVar0, "custom/z_dlc_z_roar", 8, 0);
	while (!Function_440(&bVar0))
	{
		WAIT(0);
	}
	Function_422();
	bLocal_325 = LAUNCH_NEW_SCRIPT("DLC/ZombiePack/system/Player_z", 0);
	while (!IS_SCRIPT_VALID(bLocal_325))
	{
		WAIT(0);
	}
	while (!IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("PlayerLayout")))
	{
		WAIT(0);
	}
	while (!IS_ACTOR_VALID(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), "player")))
	{
		WAIT(0);
	}
	LAUNCH_NEW_SCRIPT("DLC/ZombiePack/system/DesignerDefined/UI/FuiEventMonitor_z", 0);
	LAUNCH_NEW_SCRIPT("init/rdr2init_each_load", 0);
	LAUNCH_NEW_SCRIPT("DLC/ZombiePack/system/short_update_thread_z", 0);
	LAUNCH_NEW_SCRIPT("DLC/ZombiePack/system/medium_update_thread_z", 0);
	LAUNCH_NEW_SCRIPT("DLC/ZombiePack/system/long_update_thread_z", 0);
	Global_3386 = 0;
	Global_3375 = 1;
	Global_3377 = 1;
	Global_3379 = 0;
	Global_3380 = 0;
	Global_3402 = 1;
	if (!IS_LAYOUTREF_VALID(Global_6287))
	{
		Global_6287 = CREATE_LAYOUT("GlobalChar");
	}
	if (!IS_LAYOUTREF_VALID(Global_6288))
	{
		Global_6288 = CREATE_LAYOUT("RegionChar");
	}
	if (!IS_LAYOUTREF_VALID(Global_6289))
	{
		Global_6289 = CREATE_LAYOUT("nLocalChar");
	}
	Function_421();
	CLEAR_REGIONS();
	Function_419();
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Merchant04"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Ranch07"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Ranch08"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Marshal"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Merchant01"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Merchant05"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Outlaw01"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Outlaw02"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Outlaw03"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Grave01"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Grave02"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Grave03"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Fort01"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Fort02"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Gun01"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Gun02"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Gun05"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexGirl"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy05"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy04"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy03"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy02"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy01"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Rebel02"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Rebel03"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Rebel04"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Rebel05"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home02Son02"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home02Son01"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home02Ranch03"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home02Ranch01"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home01"));
	DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "_MeterAndHalfTest"));
	Function_416();
	Function_415();
	Function_411();
	Global_30621[0] = Function_409("$/content/Frontier/PR_Frontier", "fro", 4294967295, 0, 1, 0, 0, 0, 1, 0);
	Global_30621[1] = Function_409("$/content/Mexico/PR_Mexico", "mex", Global_30621[0], 0, 1, 1, 0, 0, 1, 0);
	Global_30621[2] = Function_409("$/content/North/PR_North", "nor", Global_30621[1], 0, 1, 2, 0, 0, 1, 0);
	Global_30621[3] = Function_409("$/content/Homestead/PR_Homestead", "hom", Global_30621[2], 0, 1, 3, 0, 0, 1, 0);
	Global_30621[4] = Function_409("$/content/Homestead/PR_End", "end", Global_30621[3], 0, 1, 4, 0, 0, 1, 0);
	Global_30628[0] = Function_409("$/content/DLC/ZombiePack/Frontier/Cholla_Springs/ChollaSprings_z", "cho", Global_30621[0], Local_4.f_132, 2, 5, 0, 1, 1, 0);
	Global_30633[1] = Function_409("$/content/DLC/ZombiePack/Mexico/Diez_Coronas/DiezCoronas_z", "dzc", Global_30621[1], Local_4.f_404, 2, 52, 0, 1, 1, 0);
	Global_30628[1] = Function_409("$/content/DLC/ZombiePack/Frontier/Gaptooth_Ridge/GaptoothRidge_z", "gtr", Global_30621[0], Local_4.f_196, 2, 6, 0, 0, 1, 0);
	Global_30637[0] = Function_409("$/content/DLC/ZombiePack/North/Great_Plains/GreatPlains_z", "grt", Global_30621[2], Local_4.f_316, 2, 83, 0, 1, 1, 0);
	Global_30628[2] = Function_409("$/content/DLC/ZombiePack/Frontier/Hennigans_Stead/HennigansStead_z", "hgn", Global_30621[0], Local_4.f_272, 2, 8, 0, 1, 1, 0);
	Global_30633[2] = Function_409("$/content/DLC/ZombiePack/Mexico/Perdido/Perdido_z", "prd", Global_30621[1], Local_4.f_380, 2, 51, 0, 1, 1, 0);
	Global_30633[0] = Function_409("$/content/DLC/ZombiePack/Mexico/Punta_Orgullo/PuntaOrgullo_z", "pun", Global_30621[1], Local_4.f_352, 2, 50, 0, 1, 1, 0);
	Global_30628[3] = Function_409("$/content/DLC/ZombiePack/Frontier/Rio_Bravo/RioBravo_z", "rio", Global_30621[0], Local_4.f_228, 2, 7, 0, 0, 1, 0);
	Global_30637[1] = Function_409("$/content/DLC/ZombiePack/North/Tall_Trees/TallTrees_z", "tal", Global_30621[2], Local_4.f_300, 2, 82, 0, 0, 1, 0);
	Global_30693[2] = Function_409("$/content/DLC/ZombiePack/Mexico/Perdido/Agave_Viejo/AgaveViejo_z", "agv", Global_30633[2], Local_4.f_768, 4, 62, 0, 1, 0, 0);
	Global_30640[0] = Function_409("$/content/DLC/ZombiePack/Frontier/Cholla_Springs/Armadillo/Armadillo_z", "arm", Global_30628[0], Local_4.f_44, 3, 9, 0, 1, 1, 0);
	Global_30717[1] = Function_409("$/content/DLC/ZombiePack/North/Great_Plains/BeechersHope/BeechersHope_z", "beh", Global_30637[0], Local_4.f_496, 4, 95, 0, 0, 1, 0);
	Global_30658[4] = Function_409("$/content/DLC/ZombiePack/Frontier/Gaptooth_Ridge/Benedict_Point/BenedictPoint_z", "ben", Global_30628[1], Local_4.f_448, 4, 30, 0, 0, 1, 0);
	Global_30717[0] = Function_409("$/content/DLC/ZombiePack/North/Great_Plains/Blackwater/Blackwater_z", "blk", Global_30637[0], Local_4.f_884, 3, 94, 0, 0, 1, 0);
	Global_30707[2] = Function_409("$/content/DLC/ZombiePack/Mexico/Diez_Coronas/Casa_Madrugada/CasaMadrugada_z", "cas", Global_30633[1], Local_4.f_472, 4, 75, 0, 1, 1, 0);
	Global_30693[0] = Function_409("$/content/DLC/ZombiePack/Mexico/Perdido/Chuparosa/Chuparosa_z", "chu", Global_30633[2], Local_4.f_464, 3, 60, 0, 1, 1, 0);
	Global_30723[0] = Function_409("$/content/DLC/ZombiePack/North/Tall_Trees/Cochinay/Cochinay_z", "coc", Global_30637[1], Local_4.f_712, 4, 84, 0, 0, 0, 0);
	Global_30640[4] = Function_409("$/content/DLC/ZombiePack/Frontier/Cholla_Springs/Coots_Chapel/CootsChapel_z", "coo", Global_30628[0], Local_4.f_512, 5, 11, 0, 0, 0, 0);
	Global_30707[0] = Function_409("$/content/DLC/ZombiePack/Mexico/Diez_Coronas/El_Matadero_Town/ElMataderoTown_z", "emt", Global_30633[1], Local_4.f_680, 4, 73, 0, 0, 1, 0);
	Global_30707[1] = Function_409("$/content/DLC/ZombiePack/Mexico/Diez_Coronas/El_Presidio/ElPresidio_z", "fod", Global_30633[1], Local_4.f_480, 4, 74, 0, 1, 1, 0);
	Global_30685[0] = Function_409("$/content/DLC/ZombiePack/Mexico/Punta_Orgullo/Escalera/Escalera_z", "esc", Global_30633[0], Local_4.f_456, 3, 53, 0, 1, 1, 0);
	Global_30679[1] = Function_409("$/content/DLC/ZombiePack/Frontier/Rio_Bravo/Fort_Mercer/FortMercer_z", "fom", Global_30628[3], Local_4.f_48, 4, 36, 0, 0, 0, 0);
	Global_30658[3] = Function_409("$/content/DLC/ZombiePack/Frontier/Gaptooth_Ridge/Gaptooth_Breach/GaptoothBreach_z", "gap", Global_30628[1], Local_4.f_64, 4, 29, 0, 0, 0, 0);
	Global_30668[0] = Function_409("$/content/DLC/ZombiePack/Frontier/Hennigans_Stead/Hennigans_Ranch/HennigansRanch_z", "hen", Global_30628[2], Local_4.f_412, 3, 40, 0, 0, 1, 0);
	Global_30693[1] = Function_409("$/content/DLC/ZombiePack/Mexico/Perdido/Las_Hermanas/LasHermanas_z", "lsh", Global_30633[2], Local_4.f_764, 4, 61, 0, 1, 1, 0);
	Global_30723[1] = Function_409("$/content/DLC/ZombiePack/North/Tall_Trees/Manzanita_Post/ManzanitaPost_z", "mtp", Global_30637[1], Local_4.f_488, 4, 85, 0, 0, 1, 0);
	Global_30685[1] = Function_409("$/content/DLC/ZombiePack/Mexico/Punta_Orgullo/Nosalida/Nosalida_z", "nos", Global_30633[0], Local_4.f_452, 4, 54, 0, 1, 0, 0);
	Global_30640[12] = Function_409("$/content/DLC/ZombiePack/Frontier/Cholla_Springs/Odd_Fellows_Rest/OddFellowsRest_z", "odd", Global_30628[0], Local_4.f_668, 5, 21, 0, 0, 0, 0);
	Global_30723[2] = Function_409("$/content/DLC/ZombiePack/North/Tall_Trees/Pacific_Union_Railroad_Camp/PacificUnionRailroadCamp_z", "upr", Global_30637[1], Local_4.f_492, 4, 86, 0, 0, 1, 0);
	Global_30668[2] = Function_409("$/content/DLC/ZombiePack/Frontier/Hennigans_Stead/Pikes_Basin/PikesBasin_z", "pik", Global_30628[2], Local_4.f_816, 4, 42, 0, 0, 0, 0);
	Global_30679[0] = Function_409("$/content/DLC/ZombiePack/Frontier/Rio_Bravo/Plainview/Plainview_z", "pln", Global_30628[3], Local_4.f_736, 4, 35, 0, 0, 1, 0);
	Global_30658[1] = Function_409("$/content/DLC/ZombiePack/Frontier/Gaptooth_Ridge/Rathskeller_Fork/RathskellerFork_z", "rat", Global_30628[1], Local_4.f_72, 4, 27, 0, 0, 1, 0);
	Global_30640[1] = Function_409("$/content/DLC/ZombiePack/Frontier/Cholla_Springs/Ridgewood_Farm/RidgewoodFarm_z", "rwf", Global_30628[0], Local_4.f_56, 4, 10, 0, 0, 1, 0);
	Global_30693[4] = Function_409("$/content/DLC/ZombiePack/Mexico/Perdido/Sepulcro/Sepulcro_z", "sep", Global_30633[2], Local_4.f_596, 5, 64, 1, 1, 0, 0);
	Global_30658[2] = Function_409("$/content/DLC/ZombiePack/Frontier/Gaptooth_Ridge/Solomons_Folly/SolomonsFolly_z", "sol", Global_30628[1], Local_4.f_68, 4, 28, 0, 0, 0, 0);
	Global_30685[2] = Function_409("$/content/DLC/ZombiePack/Mexico/Punta_Orgullo/Tesoro_Azul/TesoroAzul_z", "tes", Global_30633[0], Local_4.f_468, 4, 55, 0, 1, 0, 0);
	Global_30668[1] = Function_409("$/content/DLC/ZombiePack/Frontier/Hennigans_Stead/Thieves_Landing/ThievesLanding_z", "thi", Global_30628[2], Local_4.f_408, 3, 41, 0, 0, 1, 0);
	Global_30707[3] = Function_409("$/content/DLC/ZombiePack/Mexico/Diez_Coronas/Torquemada/Torquemada_z", "tor", Global_30633[1], Local_4.f_476, 4, 76, 0, 0, 0, 0);
	Global_30658[0] = Function_409("$/content/DLC/ZombiePack/Frontier/Gaptooth_Ridge/Tumbleweed/Tumbleweed_z", "tum", Global_30628[1], Local_4.f_60, 5, 26, 0, 0, 0, 0);
	Global_30640[2] = Function_409("$/content/DLC/ZombiePack/Frontier/Cholla_Springs/Twin_Rocks/TwinRocks_z", "twr", Global_30628[0], Local_4.f_52, 4, 12, 0, 0, 0, 0);
	Global_30707[5] = Function_409("", "cab", Global_30633[1], Local_4.f_584, 6, 78, 0, 0, 0, 0);
	Global_30723[5] = Function_409("", "aur", Global_30637[1], Local_4.f_656, 6, 89, 1, 0, 0, 0);
	Global_30693[3] = Function_409("", "bar", Global_30633[2], Local_4.f_600, 6, 63, 1, 0, 0, 1);
	Global_30723[6] = Function_409("", "bcc", Global_30637[1], Local_4.f_720, 6, 90, 1, 0, 0, 1);
	Global_30658[8] = Function_409("", "bep", Global_30628[3], Local_4.f_732, 6, 34, 0, 0, 0, 0);
	Global_30668[3] = Function_409("", "brb", Global_30628[2], Local_4.f_564, 6, 43, 1, 0, 0, 1);
	Global_30717[2] = Function_409("", "brk", Global_30637[0], Local_4.f_644, 6, 97, 0, 0, 0, 0);
	Global_30668[4] = Function_409("", "but", Global_30628[2], Local_4.f_568, 6, 44, 0, 0, 0, 0);
	Global_30693[12] = Function_409("", "mir", Global_30633[2], Local_4.f_760, 6, 72, 0, 1, 0, 0);
	Global_30640[15] = Function_409("", "cri", Global_30628[0], Local_4.f_772, 6, 24, 0, 1, 0, 0);
	Global_30685[4] = Function_409("", "crk", Global_30633[0], Local_4.f_624, 6, 57, 0, 1, 0, 0);
	Global_30658[5] = Function_409("", "cue", Global_30628[1], Local_4.f_528, 6, 31, 0, 0, 0, 0);
	Global_30640[13] = Function_409("", "lob", Global_30628[0], Local_4.f_604, 6, 22, 1, 0, 0, 1);
	Global_30679[4] = Function_409("", "dlr", Global_30628[3], Local_4.f_728, 6, 39, 0, 0, 0, 0);
	Global_30693[5] = Function_409("", "tro", Global_30633[2], Local_4.f_612, 6, 65, 0, 0, 0, 0);
	Global_30693[7] = Function_409("", "dia", Global_30633[2], Local_4.f_616, 6, 67, 1, 0, 0, 0);
	Global_30717[4] = Function_409("", "dix", Global_30637[0], Local_4.f_792, 6, 98, 0, 0, 0, 0);
	Global_30679[2] = Function_409("", "frb", Global_30628[3], Local_4.f_552, 6, 37, 0, 0, 0, 0);
	Global_30668[5] = Function_409("", "grn", Global_30628[2], Local_4.f_560, 6, 45, 0, 0, 0, 1);
	Global_30640[9] = Function_409("", "ham", Global_30628[0], Local_4.f_524, 6, 18, 0, 0, 0, 1);
	Global_30640[6] = Function_409("", "han", Global_30628[0], Local_4.f_516, 6, 15, 1, 0, 0, 0);
	Global_30693[10] = Function_409("", "hnd", Global_30633[2], Local_4.f_756, 6, 70, 1, 1, 0, 1);
	Global_30640[8] = Function_409("", "jor", Global_30628[0], Local_4.f_500, 6, 17, 0, 0, 0, 0);
	Global_30693[8] = Function_409("", "lag", Global_30633[2], Local_4.f_752, 6, 68, 1, 1, 0, 1);
	Global_30640[5] = Function_409("", "ldj", Global_30628[0], Local_4.f_508, 6, 14, 0, 0, 0, 1);
	Global_30707[8] = Function_409("", "mnt", Global_30633[1], Local_4.f_724, 6, 81, 0, 0, 0, 0);
	Global_30723[7] = Function_409("", "msb", Global_30637[1], Local_4.f_788, 6, 91, 0, 0, 0, 0);
	Global_30640[11] = Function_409("", "mcr", Global_30628[0], Local_4.f_672, 6, 20, 1, 0, 0, 1);
	Global_30707[7] = Function_409("", "lun", Global_30633[1], Local_4.f_588, 6, 80, 0, 0, 0, 0);
	Global_30668[6] = Function_409("", "mes", Global_30628[2], Local_4.f_632, 6, 46, 1, 0, 0, 1);
	Global_30723[9] = Function_409("", "mtf", Global_30637[1], Local_4.f_804, 6, 93, 0, 0, 0, 0);
	Global_30723[3] = Function_409("", "nek", Global_30637[1], Local_4.f_664, 6, 87, 1, 0, 0, 0);
	Global_30668[8] = Function_409("", "bac", Global_30628[2], Local_4.f_572, 6, 48, 0, 0, 0, 1);
	Global_30685[5] = Function_409("", "plt", Global_30633[0], Local_4.f_620, 6, 58, 1, 0, 0, 0);
	Global_30640[10] = Function_409("", "ple", Global_30628[0], Local_4.f_676, 6, 19, 0, 0, 0, 0);
	Global_30693[9] = Function_409("", "pri", Global_30633[2], Local_4.f_740, 6, 69, 1, 1, 0, 1);
	Global_30685[6] = Function_409("", "pch", Global_30633[0], Local_4.f_796, 6, 59, 0, 0, 0, 0);
	Global_30693[6] = Function_409("", "ram", Global_30633[2], Local_4.f_556, 6, 66, 0, 1, 0, 0);
	Global_30693[11] = Function_409("", "rnp", Global_30633[2], Local_4.f_744, 6, 71, 1, 1, 0, 1);
	Global_30640[7] = Function_409("", "rtl", Global_30628[0], Local_4.f_520, 6, 16, 1, 0, 0, 0);
	Global_30679[3] = Function_409("", "rep", Global_30628[3], Local_4.f_548, 6, 38, 1, 0, 0, 0);
	Global_30640[3] = Function_409("", "bat", Global_30628[0], Local_4.f_504, 6, 13, 0, 0, 0, 1);
	Global_30707[4] = Function_409("", "roc", Global_30633[1], Local_4.f_576, 6, 77, 0, 0, 0, 0);
	Global_30658[6] = Function_409("", "scr", Global_30628[1], Local_4.f_536, 6, 32, 0, 0, 0, 1);
	Global_30685[3] = Function_409("", "sid", Global_30633[0], Local_4.f_460, 6, 56, 0, 1, 0, 0);
	Global_30658[7] = Function_409("", "sil", Global_30628[1], Local_4.f_684, 6, 33, 1, 0, 0, 1);
	Global_30707[6] = Function_409("", "sms", Global_30633[1], Local_4.f_592, 6, 79, 0, 0, 0, 0);
	Global_30668[7] = Function_409("", "stl", Global_30628[2], Local_4.f_636, 6, 47, 0, 1, 1, 1);
	Global_30723[4] = Function_409("", "tnr", Global_30637[1], Local_4.f_660, 6, 88, 1, 0, 0, 1);
	Global_30723[8] = Function_409("", "tns", Global_30637[1], Local_4.f_800, 6, 92, 0, 0, 0, 0);
	Global_30640[14] = Function_409("", "tcr", Global_30628[0], Local_4.f_716, 6, 23, 0, 0, 0, 1);
	Global_30640[16] = Function_409("", "ven", Global_30628[0], Local_4.f_780, 6, 25, 0, 1, 0, 0);
	Global_30668[9] = Function_409("", "war", Global_30628[2], Local_4.f_808, 6, 49, 0, 0, 0, 0);
	Global_30717[3] = Function_409("", "ser", Global_30637[0], Local_4.f_652, 6, 96, 0, 0, 0, 1);
	Function_408(&(Global_29008[Global_30621[0]]), 1024);
	Function_408(&(Global_29008[Global_30621[1]]), 1024);
	Function_408(&(Global_29008[Global_30621[2]]), 1024);
	Function_408(&(Global_29008[Global_30621[3]]), 1024);
	Function_407();
	Global_30734 = Function_436(1, Global_30717[0], 3);
	Global_30735 = Function_436(1, Global_30640[4], 3);
	Global_30738 = Function_436(1, Global_30640[12], 3);
	Global_30736 = Function_436(1, Global_30693[4], 3);
	Global_30737 = Function_436(1, Global_30658[0], 3);
	Function_406(Global_13172[Global_3073411].f_36);
	PRINTNL();
	Function_406(Global_13172[Global_3073511].f_36);
	PRINTNL();
	Function_406(Global_13172[Global_3073811].f_36);
	PRINTNL();
	Function_406(Global_13172[Global_3073611].f_36);
	PRINTNL();
	Function_406(Global_13172[Global_3073711].f_36);
	PRINTNL();
	if (!Global_3421)
	{
		while (!Global_3374)
		{
			WAIT(0);
		}
	}
	if (!Global_3365)
	{
		if (!Global_34165.f_28)
		{
			Function_403(Function_405(1), 0, 1, 1, 0);
		}
	}
	if (Global_3364 && Global_3365)
	{
		Function_402();
	}
	DLC_INIT_CONTENT();
	Function_382();
	Function_373();
	Function_372();
	Function_371();
	Global_30938.f_4 = 4294967295;
	Global_30938.f_8 = 4294967295;
	Global_30938 = 0;
	Function_370();
	if (Global_3365)
	{
		if (Function_369(StackVal, StackVal, Global_30938))
		{
			bLocal_321 = false;
		}
		if (!Function_368(1, 0))
		{
			bLocal_321 = false;
		}
	}
	if (Global_3364)
	{
		if (Function_461("missionStart"))
		{
			Global_30938.f_4 = Function_367("missionStart");
			PRINTINT(StackVal);
			PRINTNL();
		}
		if (Function_461("missionStartChapter"))
		{
			Global_30938.f_8 = Function_367("missionStartChapter");
			PRINTINT(StackVal);
			PRINTNL();
		}
	}
	if (StackVal && StackVal < 4294967295 < 4294967295)
	{
		if (Function_369(StackVal, StackVal, 1))
		{
			PRINTINT(StackVal);
			PRINTSTRING("-");
			PRINTINT(StackVal);
			PRINTNL();
			bLocal_321 = false;
			Global_30938 = 1;
		}
	}
	Function_365();
	ITERATE_IN_LAYOUT(Global_26118, GET_AMBIENT_LAYOUT());
	Function_363(33039);
	Function_362(1178687);
	Function_361();
	Function_360();
	if (Function_461("nnoIdleCam"))
	{
		Function_435(4096);
	}
	if (Function_461("startAmbientWorldOff"))
	{
		Function_435(128543);
		Function_359(15);
		Function_358(256);
		Function_357(&Global_28842, 1);
	}
	if (Global_3365)
	{
		Function_354();
		Function_350(1);
	}
	Function_349(&Global_62998);
	if (Global_3421)
	{
		Function_348(1);
		Function_435(1061911);
	}
	Global_3389 = 1;
	SET_PAUSE_SCRIPT("$/content/DLC/ZombiePack/system/Pause_z");
	Global_63400 = MAKE_TIME_OF_DAY(5, 0, 0);
	Global_63401 = MAKE_TIME_OF_DAY(7, 0, 0);
	Global_63402 = MAKE_TIME_OF_DAY(11, 0, 0);
	Global_63403 = MAKE_TIME_OF_DAY(14, 0, 0);
	Global_63404 = MAKE_TIME_OF_DAY(18, 0, 0);
	Global_63405 = MAKE_TIME_OF_DAY(22, 0, 0);
	Global_63398 = (30.0f * 0.8f);
	SET_TIME_ACCELERATION(Global_63398);
	LIGHTS_SET_ON_TIME(17, 30);
	LIGHTS_SET_OFF_TIME(6, 0);
	SET_DUST_LEVEL_MID(1);
	SET_DUST_LEVEL_FAR(1);
	if (Global_3421)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(true, 13, 0, 0));
		Function_346(&Global_16524, 13);
		Function_345(&Global_16517, RAND_FLOAT_GAUSSIAN(1.35f, 0.25f), RAND_FLOAT_RANGE(0.0f, 360.0f));
	}
	else if (Global_3364 && Global_3365)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(true, 6, 0, 0));
		Function_346(&Global_16524, 13);
		Function_345(&Global_16517, RAND_FLOAT_GAUSSIAN(1.35f, 0.25f), RAND_FLOAT_RANGE(0.0f, 360.0f));
	}
	else if (Global_3364)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(true, 6, 0, 0));
		iVar62 = 13;
		iVar63 = RAND_INT_RANGE(0, 10000);
		if (iVar63 >= 9000)
		{
			iVar62 = 3;
		}
		else if (iVar63 >= 8000)
		{
			iVar62 = 2;
		}
		else if (iVar63 >= 7000)
		{
			iVar62 = 17;
		}
		Function_346(&Global_16524, iVar62);
		Function_345(&Global_16517, RAND_FLOAT_GAUSSIAN(1.35f, 0.25f), RAND_FLOAT_RANGE(0.0f, 360.0f));
	}
	else
	{
		SET_TIME_OF_DAY(Global_34165.f_52);
		Function_343();
		Function_346(&Global_16524, Global_16524);
	}
	ENABLE_WEATHER_SPHERE(31, false);
	ENABLE_WEATHER_SPHERE(30, false);
	ENABLE_WEATHER_SPHERE(32, false);
	ENABLE_WEATHER_SPHERE(33, false);
	ENABLE_WEATHER_SPHERE(29, false);
	ENABLE_WEATHER_SPHERE(23, false);
	if (Function_342(Global_34165.f_24))
	{
		Global_29005 = Global_34165.f_24;
		Function_340(Global_34165.f_24, 0);
	}
	if (bLocal_321)
	{
		fLocal_320 = 0.0f;
		SET_AMBIENT_FORCE_WAIT_STATE(0);
		Function_331(&iLocal_326, &fLocal_320, 0, 1);
		WAIT(0);
		while (Global_30839 >= 0)
		{
			WAIT(0);
		}
		while (!IS_LAYOUTREF_VALID(Global_30616))
		{
			Function_331(&iLocal_326, &fLocal_320, 0, 1);
			WAIT(0);
		}
		while (StackVal && Function_330(DECOR_GET_INT(Global_30616, "regid")) != 2)
		{
			WAIT(0);
		}
		Function_329();
	}
	if (!Function_424(64))
	{
		Function_327();
	}
	if (Global_3421)
	{
		Function_326();
		SET_DISABLE_DEADEYE(0, 0);
		SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
		SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
		SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
		SET_WEAPONENUM_LOCKED(21, 1);
		SET_WEAPONENUM_LOCKED(33, 0);
		SET_WEAPONENUM_LOCKED(5, 0);
		SET_WEAPONENUM_LOCKED(9, 0);
		SET_WEAPONENUM_LOCKED(34, 0);
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 7, 60.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 6, 60.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 8, 30.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 10, 20.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 15, 5.0f, 0);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 33, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 4, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 5, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(Global_34573, false, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 8, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 9, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 16, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 34, 0.0f, 0, 1);
		ADD_ITEM(Function_325(3), Global_34573, 0);
		ADD_ITEM(Function_325(3), Global_34573, 0);
		ADD_ITEM(Function_325(3), Global_34573, 0);
		ADD_ITEM(Function_325(3), Global_34573, 0);
		ADD_ITEM(Function_325(3), Global_34573, 0);
		ADD_ITEM(Function_325(1), Global_34573, 0);
		ADD_ITEM(Function_325(1), Global_34573, 0);
		ADD_ITEM(Function_325(1), Global_34573, 0);
		ADD_ITEM(Function_325(1), Global_34573, 0);
		ADD_ITEM(Function_325(1), Global_34573, 0);
		ADD_ITEM(Function_325(20), Global_34573, 0);
		ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 6, 0);
		ACTOR_SET_NEXT_WEAPON(Global_34573, 16);
		ACTOR_PUT_WEAPON_IN_HAND(Global_34573, 16, 0);
		SET_PLAYER_ENDLESS_READYMODE(0, 1);
	}
	else if (Global_3364)
	{
		Function_326();
		if (!Global_3365)
		{
			SET_DISABLE_DEADEYE(0, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
			SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 4, 0.0f, 0, 1);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 16, 0.0f, 0, 1);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 21, 0.0f, 0, 1);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 22, 0.0f, 0, 1);
			ADD_ITEM(Function_325(3), Global_34573, 0);
			ADD_ITEM(Function_325(3), Global_34573, 0);
			ADD_ITEM(Function_325(3), Global_34573, 0);
			ADD_ITEM(Function_325(15), Global_34573, 0);
			ADD_ITEM(Function_325(19), Global_34573, 0);
			ADD_ITEM(Function_325(20), Global_34573, 0);
			Function_324();
			ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
		}
	}
	if (!Global_3364 && !Global_34165.f_32)
	{
		Function_323();
	}
	else
	{
		Global_34165.f_112 = 4294967295;
	}
	if (bLocal_321)
	{
		while (!STREAMING_IS_WORLD_LOADED() || (!Global_3374 && !Global_3421))
		{
			WAIT(0);
		}
	}
	Global_49308 = GET_CURRENT_GAME_TIME();
	Local_328 = 4294967295;
	Local_328.f_16 = 0;
	Local_328.f_20 = 0;
	Local_328.f_24 = 0;
	STORE_GAME_STATE(&Local_328, 44, 1);
	if (bLocal_321)
	{
		while (!Function_321())
		{
			WAIT(0);
		}
		iLocal_323 = iLocal_323;
		if ((*&Global_34165 + 68)[9] == 1)
		{
			RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
			SET_PLAYER_POSTURE(0, 0, 0);
			ACTOR_DRAW_ANY_WEAPON(Global_34573, 1);
		}
		(*&Global_34165 + 68)[9] = 0;
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		STREAMING_RELEASE_MAIN_POI();
		HUD_FADE_IN_NOW(2.0f, 1065353216);
		CAMERA_RESET(0);
		if (!Global_3421)
		{
			Function_313(GET_CURRENT_GAME_TIME() > 120.0f);
		}
		Global_25986[11] = 0;
	}
	Global_3391 = 0;
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_312(0));
	Function_310((15 - Function_311(90)));
	Function_309((15 - Function_311(90)));
	Function_308(2);
	Function_307((15 - Function_311(90)));
	Function_306((15 - Function_311(60)));
	Function_305((15 - Function_311(105)));
	Function_304(6);
	Function_303((15 - Function_311(200)));
	Function_302();
	if (Global_3364 || !Global_34165.f_28)
	{
		Function_464(2);
		Function_294(1);
	}
	Global_3416 = 4294967295;
	Global_3412 = 0;
	Function_293(1);
	Function_290();
	Global_3364 = 0;
	Global_3366 = 1;
	iLocal_326 = 0;
	iLocal_372 = 0;
	iVar64 = 0;
	iVar65 = 0;
	Global_26281 = GET_CURRENT_GAME_TIME();
	Global_76852 = 300;
	iVar66 = 0;
	if (!Global_3364)
	{
		if (!Function_289(Global_76846, 16384))
		{
			bVar67 = false;
			iVar69 = 0;
			iVar68 = 1;
			while (iVar68 < (28 - 1))
			{
				iVar70 = iVar68;
				if (iVar70 != 0)
				{
					iVar71 = Function_288(iVar70);
					if (iVar71 != 4294967295)
					{
						uVar72 = Global_29008[iVar71];
						if (Function_433(uVar72, 0x10000000))
						{
							if (!Function_286(iVar71))
							{
								if (iVar71 == Global_29006)
								{
									bVar67 = true;
								}
								iVar69++;
							}
						}
					}
				}
				iVar68++;
			}
			if (bVar67)
			{
				if (iVar69 >= 1)
				{
					Function_281(Global_34573, 16384, 1, 0);
				}
			}
		}
	}
	if (!IS_LAUNCH_RETAIL() && !Global_3421)
	{
		Function_280("no_autosave", 0x41200000, 1, 0, 2, 1, 0);
		WAIT(0);
	}
	if (bLocal_321 || Global_3421)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	SET_PLAYER_CONTROL_RUMBLE(0, 1);
	SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
	SCRIPT_DONE_LOADING();
	bLocal_319 = Function_367("soaktest");
	if (bLocal_319 != 4294967295 && Function_461("soaktest"))
	{
		bLocal_319 = false;
	}
	switch (bLocal_319)
	{
		case 0x00000000:
			PRINTSTRING("Launching soak test!");
			LAUNCH_NEW_SCRIPT("systemTest/SoakTests/soaktest", 0);
			break;
	}
	if (GET_USER_DEFINED_WAYPOINT(&vVar73))
	{
		vVar73.f_4 = 25.0f;
		if (!Function_279(StackVal, StackVal, vVar73, 0.0f, 0.0f, 0.0f))
		{
			Function_277(StackVal, StackVal, vVar73);
		}
	}
	while (!IS_EXITFLAG_SET())
	{
		if (bLocal_322)
		{
			PRINTSTRING("Time for Exec:");
			PRINTINT(iLocal_372);
			PRINTSTRING(":");
			fVar76 = GET_PROFILE_TIME();
		}
		switch (bLocal_372)
		{
			case 0x00000000:
				if (Function_331(&iLocal_326, &fLocal_320, 1, 0))
				{
					iLocal_326 = 0;
					bLocal_372 = true;
				}
				iVar65++;
				iVar64 = 0;
				break;
			
			case 0x00000001:
				Function_276();
				iVar65++;
				iVar64 = 0;
				bLocal_372 = 2;
				break;
			
			case 0x00000002:
				if (Global_3376)
				{
					Global_3376 = 0;
					iLocal_327 = 0;
					bLocal_372 = true;
				}
				else if (Function_273(&iLocal_327))
				{
					iLocal_327 = 0;
					bLocal_372 = 3;
				}
				iVar65++;
				iVar64 = 0;
				break;
			
			case 0x00000003:
				if (Function_272(1, 2) == 0)
				{
					if (Global_3380)
					{
						Global_3380 = 0;
						Function_271();
					}
				}
				if (Function_272(2, 2) != 0 && Function_272(2, 1) != 0)
				{
					if (Global_3382)
					{
						Global_3382 = 0;
					}
				}
				iVar65++;
				iVar64 = 0;
				bLocal_372 = 4;
				break;
			
			case 0x00000004:
				Global_63399 = Function_270();
				if (!Global_3409)
				{
					if (Global_63399 == 32)
					{
						if (Global_63398 == 30.0f)
						{
							Global_63398 = 30.0f;
							SET_TIME_ACCELERATION(Global_63398);
							SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(0.5f);
						}
					}
					else if (Global_63399 != 1 || Global_63399 != 2)
					{
						if (GET_HOUR(GET_TIME_OF_DAY()) < 5 && GET_HOUR(GET_TIME_OF_DAY()) > 9)
						{
							if (Global_63398 == 15.0f)
							{
								Global_63398 = 15.0f;
								SET_TIME_ACCELERATION(Global_63398);
								SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(0.75f);
								Global_16524.f_36++;
							}
						}
						else if (Global_63398 == (30.0f * 0.8f))
						{
							Global_63398 = (30.0f * 0.8f);
							SET_TIME_ACCELERATION(Global_63398);
							SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(1.0f);
						}
					}
					else if (Global_63399 != 8 || Global_63399 != 16)
					{
						if (GET_HOUR(GET_TIME_OF_DAY()) < 15 && GET_HOUR(GET_TIME_OF_DAY()) > 19)
						{
							if (Global_63398 == 15.0f)
							{
								Global_63398 = 15.0f;
								SET_TIME_ACCELERATION(Global_63398);
								SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(0.85f);
							}
						}
						else if (Global_63398 == (30.0f * 0.8f))
						{
							if (GET_HOUR(GET_TIME_OF_DAY()) < 15)
							{
							}
							Global_63398 = (30.0f * 0.8f);
							SET_TIME_ACCELERATION(Global_63398);
							SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(1.0f);
						}
					}
					else if (Global_63398 == (30.0f * 0.8f))
					{
						Global_63398 = (30.0f * 0.8f);
						SET_TIME_ACCELERATION(Global_63398);
						SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(1.0f);
					}
				}
				iVar65++;
				iVar64 = 0;
				bLocal_372 = 5;
				break;
			
			case 0x00000005:
				Function_28();
				Function_25();
				Function_18();
				Function_10();
				if (Global_30841)
				{
					PREVENT_DESPAWN_CLEAR();
					Global_30841 = 0;
				}
				iVar64 = (1000 - iVar65 * 33);
				iVar65 = 0;
				bLocal_372 = false;
				break;
		}
		if (bLocal_322)
		{
			PRINTFLOAT((GET_PROFILE_TIME() - fVar76));
			PRINTNL();
		}
		WAIT(iVar64);
	}
	if (!HUD_IS_FADED())
	{
		HUD_FADE_OUT(0.5f, 1065353216, 1);
	}
	DYNAMICMIXER_DETRIGGERSTATE(uLocal_373, 0);
	GRINGO_SETUP_PROP_ASSOCIATION("p_gen_locatorDummy02x", "$/content/scripting/gringo/SimpleGringo/player_dig_grave", "horseHitch1", 1.05f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
	GRINGO_SETUP_PROP_ASSOCIATION("p_gen_locatorDummy02x", "$/content/scripting/gringo/SimpleGringo/player_dig_grave", "horseHitch2", -1.05f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
	GRINGO_SETUP_PROP_ASSOCIATION("p_gen_coffin04x", "$/content/scripting/gringo/SimpleGringo/player_dig_grave", "LootCoffin", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
	Function_6(&bVar0);
	Function_5();
	Function_4();
	Function_3();
	Function_2();
	Function_1();
	RELEASE_LAYOUT_REF(FIND_NAMED_LAYOUT("Formations"));
	RELEASE_LAYOUT_REF(FIND_NAMED_LAYOUT("aispeech"));
	RELEASE_LAYOUT_REF(Global_59349);
	RELEASE_LAYOUT_REF(Global_6287);
	RELEASE_LAYOUT_REF(Global_6288);
	RELEASE_LAYOUT_REF(Global_6289);
	DESTROY_GC_OBJECTS(1, 1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x3D37 / 15671
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_2() //Position: 0x3D49 / 15689
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_3() //Position: 0x3D5E / 15710
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_9724)
	{
		if (IS_BLIP_VALID(Global_9724[iVar0]))
		{
			REMOVE_BLIP(Global_9724[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_4() //Position: 0x3D8F / 15759
{
	Function_6(&Local_4 + 4);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_5() //Position: 0x3DA1 / 15777
{
	ANIMAL_SPECIES_GRINGO_CLEAR_ALL();
	return;
}

void Function_6(int iParam0) //Position: 0x3DAA / 15786
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_7(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x3DD0 / 15824
{
	if (Function_9(uParam0[iParam13], 4))
	{
		if (Function_9(uParam0[iParam13], 1))
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
			Function_8(uParam0[iParam13], 1);
			Function_8(uParam0[iParam13], 2);
			Function_8(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x3EFE / 16126
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x3F18 / 16152
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x3F35 / 16181
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_368(4, 0))
	{
		UNK_0xBAEC56D1(4294967295);
		if (!DECOR_CHECK_EXIST(Global_34573, "zMarston"))
		{
			DECOR_SET_BOOL(Global_34573, "zMarston", true);
		}
		return;
	}
	if (!Function_17(5) || Function_12(3))
	{
		UNK_0xBAEC56D1(4294967295);
		return;
	}
	iVar0 = 180000;
	iVar1 = 60000;
	iVar2 = (iVar1 + ROUND((((100.0f - Function_11(5)) / 100.0f) * IntToFloat((iVar0 - iVar1)))));
	UNK_0xBAEC56D1(iVar2);
	return;
}

float Function_11(int iParam0) //Position: 0x3FB2 / 16306
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_12(int iParam0) //Position: 0x3FEB / 16363
{
	int iVar0;
	
	if (!Function_16(iParam0))
	{
		return 0;
	}
	iVar0 = Function_405(iParam0);
	if (!Function_13(Function_405(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_13(int iParam0) //Position: 0x4021 / 16417
{
	if (!Function_15(iParam0))
	{
		return 0;
	}
	if (!Function_14(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_14(int iParam0) //Position: 0x4045 / 16453
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_15(int iParam0) //Position: 0x405A / 16474
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_16(int iParam0) //Position: 0x4071 / 16497
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_17(int iParam0) //Position: 0x4087 / 16519
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_18() //Position: 0x409C / 16540
{
	int iVar0;
	
	if (!NET_ARE_UNLOCKS_READY())
	{
		return;
	}
	if (((((((((Global_63096 || Global_3384) || Global_3395) || Global_3396) || Global_3381) || !IS_ACTOR_ALIVE(Global_34573)) || HUD_IS_FADED()) || HUD_IS_FADING()) || Function_24()) || (Global_26281 + 5.0f) < GET_CURRENT_GAME_TIME())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 61)
	{
		if (!Global_26055[iVar0])
		{
			if (NET_IS_UNLOCKED(iVar0) && !Function_24())
			{
				Function_19(iVar0);
			}
		}
		iVar0++;
	}
	return;
}

void Function_19(int iParam0) //Position: 0x410F / 16655
{
	bool bVar0;
	struct<4> Var1;
	
	bVar0 = true;
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000004:
			bVar0 = false;
			break;
		
		case 0x00000009:
			if (!Global_26055[iParam0])
			{
				Function_22(992, 0, 1);
				Function_20(52, 1, 0);
			}
			break;
		
		case 0x0000000A:
			SET_WEAPON_GOLD(Global_34573, 4, 1);
			SET_WEAPON_GOLD(Global_34573, 8, 1);
			break;
		
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
		case 0x00000018:
		case 0x00000019:
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x0000001E:
		case 0x00000023:
		case 0x00000028:
		case 0x00000002:
		case 0x00000003:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000000:
		case 0x0000000B:
		case 0x0000000C:
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
		case 0x0000002D:
			bVar0 = false;
			break;
		
		default:
			bVar0 = false;
			LOG_ERROR("Unimplemented Net Unlock - please do!");
			break;
	}
	if (!Global_26055[iParam0])
	{
		if (bVar0)
		{
			strcpy(&Var1, "unlock_help_", 16);
			straddi(&Var1, iParam0, 16);
			Function_280(&Var1, 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	Global_26055[iParam0] = 1;
	return;
}

int Function_20(bool bParam0, bool bParam1, int iParam2) //Position: 0x42B2 / 17074
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_325(bParam0), Function_21()) == 0)
		{
			ADD_ITEM(Function_325(bParam0), Function_21(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_325(bParam0), Function_21(), iParam2);
	return 1;
}

var Function_21() //Position: 0x42FD / 17149
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_22(var uParam0, bool bParam1, bool bParam2) //Position: 0x4312 / 17170
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_23(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_23(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0x433F / 17215
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_24() //Position: 0x434E / 17230
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_25() //Position: 0x437B / 17275
{
	Function_26(7);
	Function_26(8);
	Function_26(10);
	Function_26(6);
	Function_26(9);
	Function_26(11);
	return;
}

void Function_26(bool bParam0) //Position: 0x439D / 17309
{
	float fVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		fVar0 = (1.0f - (_GET_AMMO_AMOUNT(Global_34573, bParam0, 0) / _GET_MAX_AMMO_AMOUNT(Global_34573, bParam0)));
		if (fVar0 > 0.0f)
		{
			fVar0 = 0.0f;
		}
		else if (fVar0 < 1.0f)
		{
			fVar0 = 1.0f;
		}
		if (Function_27())
		{
			fVar0 = (fVar0 * 0.5f);
		}
		SET_AMMO_DROP_BIAS(bParam0, fVar0);
	}
	return;
}

bool Function_27() //Position: 0x43F0 / 17392
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_28() //Position: 0x441B / 17435
{
	bool bVar0;
	
	bVar0 = GET_LATEST_CONSOLE_COMMAND();
	if (!IS_STRING_VALID(bVar0))
	{
		return;
	}
	if (Function_269(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_267(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_266(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_265(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_264(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_262(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_259(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_255(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_254(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_252(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_250(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_247(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_246(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_245(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_242(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_232(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_231(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_230(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_229(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_228(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_225(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_224(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
	}
	if (Function_223(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_220(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_219(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_218(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_216(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_212(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_211(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_194(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_193(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_192(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_191(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_190(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_189(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_188(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_187(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_186(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_185(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_184(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_183(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_182(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_181(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_180(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_178(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_175(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_159(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_158(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_63(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_62(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_61(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_41(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_40(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_39(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_32(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_31(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_30(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_29(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	return;
}

bool Function_29(bool bParam0) //Position: 0x46E7 / 18151
{
	if (STRING_CONTAINS_STRING(bParam0, "playermeds"))
	{
		Function_20(3, 0, 1);
		return 1;
	}
	return 0;
}

bool Function_30(bool bParam0) //Position: 0x470C / 18188
{
	var uVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "playemitteroncurve"))
	{
		uVar0 = GET_CURVE_BY_NAME("rsdEFFECTCURVE_TNTFuse", 20);
		bVar1 = CREATE_RMPTFX_EMITTER_ON_CURVE("TNTFuse", "muzzle_dynamite", uVar0, 5.0f);
		UNK_0x6745191B(bVar1, 180.0f, 0.0f, 0.0f);
		return 1;
	}
	return 0;
}

bool Function_31(bool bParam0) //Position: 0x4783 / 18307
{
	if (STRING_CONTAINS_STRING(bParam0, "makeswim"))
	{
		DECOR_SET_BOOL(Global_34573, "swimming", true);
		return 1;
	}
	return 0;
}

bool Function_32(bool bParam0) //Position: 0x47B2 / 18354
{
	if (STRING_CONTAINS_STRING(bParam0, "regions_reset"))
	{
		Function_33(1, 0, 1);
		return 1;
	}
	return 0;
}

void Function_33(var uParam0, bool bParam1, var uParam2) //Position: 0x47D9 / 18393
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
		if (Function_342(Global_29006))
		{
			Function_38(&(Global_29008[Global_29006]), 131072);
			Function_408(&(Global_29008[Global_29006]), 2097152);
			Function_36(Global_29006);
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
				if (Function_35(&(Global_29008[iVar0]), 4) || Function_35(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_408(&(Global_29008[iVar0]), 2097155);
					Function_38(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && uParam2)
		{
			if (Function_34())
			{
			}
			WAIT(0);
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

bool Function_34() //Position: 0x48E4 / 18660
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_35(var uParam0, int iParam1) //Position: 0x48ED / 18669
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_36(int iParam0) //Position: 0x4909 / 18697
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_37())
			{
				return;
			}
		}
		if (!Function_35(&(Global_29008[iParam0]), 2048))
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

bool Function_37() //Position: 0x4988 / 18824
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_35(&(Global_29008[iVar0]), 4) || Function_35(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_38(var uParam0, int iParam1) //Position: 0x49F1 / 18929
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_39(bool bParam0) //Position: 0x4A00 / 18944
{
	if (STRING_CONTAINS_STRING(bParam0, "stand_hostage"))
	{
		REQUEST_ANIM_SET("stand_hostage", 0);
		REQUEST_ACTION_TREE("custom/stand_hostage");
		while (!HAS_ANIM_SET_LOADED("stand_hostage") || !HAS_ACTION_TREE_LOADED("custom/stand_hostage"))
		{
			WAIT(0);
		}
		SET_ANIM_SET_FOR_ACTOR(Global_34573, "stand_hostage", 0);
		SET_ACTION_NODE_FOR_ACTOR(Global_34573, "stand_hostage/walk_pose");
		SET_REACT_NODE_FOR_ACTOR(Global_34573, "stand_hostage/injury/");
		return 1;
	}
	return 0;
}

bool Function_40(bool bParam0) //Position: 0x4AE2 / 19170
{
	char* cVar0[32];
	bool bVar8;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	
	if (STRING_CONTAINS_STRING(bParam0, "nghostscan"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 32);
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 32);
			stradd(&cVar0, "v_region", 32);
			bVar8 = FIND_VOLUME_IN_LAYOUT(Global_30616, &cVar0);
			vVar9 = { 0.0f, 0.0f, 0.0f };
			vVar12 = { 0.0f, 0.0f, 0.0f };
			vVar15 = { 0.0f, 0.0f, 0.0f };
			GET_VOLUME_CENTER(bVar8, &vVar9);
			FIND_GROUND_INTERSECTION(&vVar9, 10.0f, &vVar12, &vVar15);
			AMBIENT_RESET_FILTER(0);
			AMBIENT_SET_SEARCH_CENTER(vVar12);
			AMBIENT_ENABLE_OFFSCREEN_FILTER(0);
			AMBIENT_ENABLE_MATERIAL_IN_AREA_INCLUDES_FILTER(0, 0);
			AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(512, 0.0f, 0);
			UNK_0x30C67D05(0);
			AMBIENT_ENABLE_DISTANCE_FILTER(0);
			AMBIENT_ENABLE_MATERIAL_AT_POINT_FILTER(0);
			AMBIENT_SET_ELEVATION_FILTER(-1.0f, 2.0f);
			AMBIENT_ENABLE_QUADRANT_FILTER(0);
			AMBIENT_ENABLE_SLOPE_FILTER(0);
			return 1;
		}
	}
	return 0;
}

bool Function_41(bool bParam0) //Position: 0x4B8F / 19343
{
	bool bVar0;
	float fVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "addnotor"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			fVar1 = STRING_TO_FLOAT(bVar0);
			Function_42(3, fVar1);
		}
		return 1;
	}
	return 0;
}

int Function_42(int iParam0, float fParam1) //Position: 0x4BCC / 19404
{
	bool bVar0;
	int iVar1;
	
	Function_47(iParam0, fParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("STAT_INCREASE: fIncreaseValue < 0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	iVar1 = Function_46(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + fParam1);
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_43();
	Global_49199[iVar1] = fParam1;
	strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 0;
	return 1;
}

int Function_43() //Position: 0x4D58 / 19800
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
	Function_44();
	return 0;
}

void Function_44() //Position: 0x4DF7 / 19959
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
		Function_45(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_45(int iParam0) //Position: 0x4EA6 / 20134
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

var Function_46(int iParam0, int iParam1) //Position: 0x4F04 / 20228
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

int Function_47(int iParam0, float fParam1, bool bParam2) //Position: 0x4F45 / 20293
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
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + fParam1);
	Function_60(iParam0, fParam1, 1);
	Function_59(iParam0);
	if (bParam2 && fParam1 == 0.0f)
	{
		Function_48(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_48(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x514F / 20815
{
	char* cVar0;
	char* cVar1[32];
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
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
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
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
			fParam2 = (fParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_58(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_11(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_11(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_56(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_53(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_51(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_50(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_49(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

int Function_49() //Position: 0x577C / 22396
{
	int iVar0;
	
	return iVar0;
}

var Function_50(int iParam0) //Position: 0x5784 / 22404
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_51(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x5795 / 22421
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_52(char* cParam0, char* cParam1) //Position: 0x588A / 22666
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_53(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x58A3 / 22691
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_55(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_54(Function_55(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_54(int iParam0, int iParam1) //Position: 0x5908 / 22792
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_55(int iParam0, int iParam1) //Position: 0x591A / 22810
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_56(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x592C / 22828
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
	if (((Function_57(iParam0) != 19 || Function_57(iParam0) != 17) || Function_57(iParam0) != 10) || Function_57(iParam0) != 9)
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

int Function_57(int iParam0) //Position: 0x5A5C / 23132
{
	return Global_35278[iParam020].f_48;
}

float Function_58(int iParam0) //Position: 0x5A6B / 23147
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_59(int iParam0) //Position: 0x5AA8 / 23208
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

int Function_60(int iParam0, float fParam1, bool bParam2) //Position: 0x5C42 / 23618
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
			Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = fParam1;
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

bool Function_61(bool bParam0) //Position: 0x5E86 / 24198
{
	bool bVar0;
	float fVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "addhonor"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			fVar1 = STRING_TO_FLOAT(bVar0);
			Function_42(1, fVar1);
		}
		return 1;
	}
	return 0;
}

bool Function_62(bool bParam0) //Position: 0x5EBD / 24253
{
	bool bVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "killRC"))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(Global_6289);
		ITERATE_ON_OBJECT_TYPE(bVar0, 24);
		bVar1 = START_OBJECT_ITERATOR(bVar0);
		while (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_OBJECT(bVar1)))
		{
			DESTROY_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar1));
			bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
		}
		DESTROY_ITERATOR(bVar0);
		return 1;
	}
	return 0;
}

bool Function_63(bool bParam0) //Position: 0x5F0F / 24335
{
	char* cVar0[64];
	
	if (STRING_CONTAINS_STRING(cParam0, "pass_all"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (IS_STRING_VALID(bParam0))
		{
			if (STRING_LENGTH(bParam0) >= 0)
			{
				strcpy(&cVar0, bParam0, 64);
				STRING_UPPER(&cVar0);
				PRINTSTRING("PASSING ALL MISSIONS IN STRAND: ");
				PRINTSTRING(&cVar0);
				PRINTNL();
				if (STRING_CONTAINS_STRING(&cVar0, "INTRO"))
				{
					Function_64(Function_436(0, 1, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "FORT"))
				{
					Function_64(Function_436(0, 24, 1), 0, 1, 1, 0);
					Function_64(Function_436(1, 25, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "GRAVE"))
				{
					Function_64(Function_436(0, 12, 1), 0, 1, 1, 0);
					Function_64(Function_436(0, 13, 1), 0, 1, 1, 0);
					Function_64(Function_436(0, 14, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MARSHAL"))
				{
					Function_64(Function_436(0, 8, 1), 0, 1, 1, 0);
					Function_64(Function_436(0, 9, 1), 0, 1, 1, 0);
					Function_64(Function_436(0, 23, 1), 0, 1, 1, 0);
					Function_64(Function_436(0, 21, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MERCHANT"))
				{
					Function_64(Function_436(0, 10, 1), 0, 1, 1, 0);
					Function_64(Function_436(0, 11, 1), 0, 1, 1, 0);
					Function_64(Function_436(0, 17, 1), 0, 1, 1, 0);
					Function_64(Function_436(0, 15, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "OUTLAW"))
				{
					Function_64(Function_436(0, 18, 1), 0, 1, 1, 0);
					Function_64(Function_436(0, 19, 1), 0, 1, 1, 0);
					Function_64(Function_436(0, 20, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "RANCH"))
				{
					Function_64(Function_436(0, 2, 1), 0, 1, 1, 0);
					Function_64(Function_436(0, 3, 1), 0, 1, 1, 0);
					Function_64(Function_436(0, 22, 1), 0, 1, 1, 0);
					Function_64(Function_436(0, 6, 1), 0, 1, 1, 0);
					Function_64(Function_436(0, 5, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "GUN"))
				{
					Function_64(Function_436(1, 30, 1), 0, 1, 1, 0);
					Function_64(Function_436(1, 33, 1), 0, 1, 1, 0);
					Function_64(Function_436(1, 32, 1), 0, 1, 1, 0);
					Function_64(Function_436(1, 31, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MEXGIRL"))
				{
					Function_64(Function_436(1, 34, 1), 0, 1, 1, 0);
					Function_64(Function_436(1, 35, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MEXARMY"))
				{
					Function_64(Function_436(1, 27, 1), 0, 1, 1, 0);
					Function_64(Function_436(1, 26, 1), 0, 1, 1, 0);
					Function_64(Function_436(1, 28, 1), 0, 1, 1, 0);
					Function_64(Function_436(1, 29, 1), 0, 1, 1, 0);
					Function_64(Function_436(1, 36, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "REBEL"))
				{
					Function_64(Function_436(1, 39, 1), 0, 1, 1, 0);
					Function_64(Function_436(1, 37, 1), 0, 1, 1, 0);
					Function_64(Function_436(1, 38, 1), 0, 1, 1, 0);
					Function_64(Function_436(1, 41, 1), 0, 1, 1, 0);
					Function_64(Function_436(1, 40, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "ANTHRO"))
				{
					Function_64(Function_436(2, 45, 1), 0, 1, 1, 0);
					Function_64(Function_436(2, 46, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "FBI"))
				{
					Function_64(Function_436(2, 43, 1), 0, 1, 1, 0);
					Function_64(Function_436(2, 47, 1), 0, 1, 1, 0);
					Function_64(Function_436(2, 48, 1), 0, 1, 1, 0);
					Function_64(Function_436(2, 42, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "NATIVE"))
				{
					Function_64(Function_436(2, 44, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "HOME"))
				{
					Function_64(Function_436(3, 49, 1), 0, 1, 1, 0);
					Function_64(Function_436(3, 55, 1), 0, 1, 1, 0);
					Function_64(Function_436(3, 56, 1), 0, 1, 1, 0);
					Function_64(Function_436(3, 52, 1), 0, 1, 1, 0);
					Function_64(Function_436(3, 53, 1), 0, 1, 1, 0);
					Function_64(Function_436(3, 54, 1), 0, 1, 1, 0);
					Function_64(Function_436(3, 50, 1), 0, 1, 1, 0);
					Function_64(Function_436(3, 51, 1), 0, 1, 1, 0);
					Function_64(Function_436(3, 57, 1), 0, 1, 1, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_64(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x63A7 / 25511
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_304(12);
	Function_308(2);
	Function_305((15 - Function_311(105)));
	if (Function_157(bParam0) == 1)
	{
		iVar2 = Function_156(bParam0);
		Function_151(&(Global_3422[iVar240]));
		Function_435(4194304);
		if (bParam3)
		{
			Function_108(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_102(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_108(iVar2, &uVar0, 0);
		}
		bVar1 = Function_101();
		if (bParam1)
		{
			Function_89(iVar2, bParam0, bVar1);
			Function_88();
		}
	}
	Function_67(bParam0, bParam1, bParam2, bVar1);
	if (Function_157(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_66(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_157(bParam0) == 1)
		{
			iVar2 = Function_156(bParam0);
			if (iVar2 != 1)
			{
				(&Global_12976 + 36)->f_32++;
				if ((&Global_12976 + 36)->f_32 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_65();
}

void Function_65() //Position: 0x6494 / 25748
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_368(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

void Function_66(int iParam0, bool bParam1) //Position: 0x64C4 / 25796
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		return;
	}
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 1;
			break;
		
		case 0x00000018:
			iVar0 = 2;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_281(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_281(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_281(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_281(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_281(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_281(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_66(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_66(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_66(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_66(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_66(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_66(57, 0);
			}
			break;
	}
	if (iVar0 != 4294967295)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			AWARD_ACHIEVEMENT(iVar0);
		}
	}
	return;
}

void Function_67(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x67BB / 26555
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_13(bParam0))
	{
		Function_86();
		return;
	}
	iVar0 = Function_157(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
		if (Function_27())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", iVar0);
		}
	}
	else
	{
		Global_6269 = Function_156(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_85(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_84(Global_6269) };
		}
		if (Function_27())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_79();
		CLEAR_JOURNAL_ENTRY(iVar11);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(iVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(iVar11, true);
		}
	}
	if (Function_27())
	{
		Function_78();
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_75("DEED_COMPLETE", bParam0);
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
			Function_70(bParam0);
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
						switch (Function_156(bParam0))
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
			Function_294(1);
			Function_69(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_68(bParam0, &Var14);
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

void Function_68(int iParam0, int iParam1) //Position: 0x6A0F / 27151
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_69(int iParam0, int iParam1) //Position: 0x6A49 / 27209
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = iParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_34())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_70(bool bParam0) //Position: 0x6A8B / 27275
{
	int iVar0;
	int iVar1;
	
	if (!Function_15(bParam0))
	{
		return;
	}
	switch (Function_157(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_156(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_74(12, 1, 0, 0);
				Function_73(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_74(13, 1, 0, 0);
				Function_73(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_74(14, 1, 0, 0);
				Function_73(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_74(15, 1, 0, 0);
				Function_73(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_74(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_156(bParam0))
			{
				case 0x00000000:
					if (Function_72(bParam0) == 1)
					{
						iVar0 = Function_71(bParam0);
						if (Function_342(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_73(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_73(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_73(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_73(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_73(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_73(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_73(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_73(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_73(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_73(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_73(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_73(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_73(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_73(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_73(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_73(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_73(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_73(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_73(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_73(4, 19);
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
								Function_74(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_74(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_74(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_71(bParam0) == 0)
			{
				if (Function_72(bParam0) == 1)
				{
					Function_74(458, 1, 0, 0);
					iVar0 = Function_156(bParam0);
					if (Function_342(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_73(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_73(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_73(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_73(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_73(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_73(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_73(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_73(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_72(bParam0) == 1)
			{
				Function_74(400, 1, 0, 0);
			}
			switch (Function_156(bParam0))
			{
				case 0x00000001:
					Function_74(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_73(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_73(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_73(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_74(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_73(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_73(6, 9);
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

int Function_71(bool bParam0) //Position: 0x6F67 / 28519
{
	if (!Function_15(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_72(bool bParam0) //Position: 0x6F86 / 28550
{
	if (!Function_15(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_73(int iParam0, bool bParam1) //Position: 0x6FA0 / 28576
{
	int iVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	iVar0 = SHIFT_LEFT(1, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || iVar0);
	return;
	return;
}

int Function_74(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x7007 / 28679
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
	Function_60(iParam0, TO_FLOAT(bParam1), 1);
	Function_59(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_48(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_75(char* cParam0, bool bParam1) //Position: 0x7227 / 29223
{
	struct<4> Var0;
	
	if (!Function_13(bParam1))
	{
		return;
	}
	switch (Function_157(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_76(Function_156(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_157(bParam1), Function_156(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_157(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_157(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_157(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_157(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_157(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_76(int iParam0) //Position: 0x734B / 29515
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
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_77() //Position: 0x7385 / 29573
{
	if (Function_433(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_78() //Position: 0x73A0 / 29600
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_312(0));
	PLAYSTAT_INT("HC_FAME", Function_312(3));
	PLAYSTAT_INT("HC_HONOR", Function_312(1));
	return;
}

void Function_79() //Position: 0x74F8 / 29944
{
	int iVar0;
	int iVar1;
	
	if (!Function_16(Global_6269))
	{
		return;
	}
	iVar0 = Function_312(24);
	iVar1 = Function_405(Global_6269);
	if (!Function_16(iVar0) && Function_83(iVar1) < 0)
	{
		Function_82(24, Global_6269, 0);
		Function_80(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_83(Function_405(iVar0)))
	{
		Function_82(24, Global_6269, 0);
		Function_80(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_80(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x7578 / 30072
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
		Function_81(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_81(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, bool bParam10) //Position: 0x78CA / 30922
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), iParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), iParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), iParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

int Function_82(int iParam0, bool bParam1, bool bParam2) //Position: 0x794D / 31053
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
		Function_60(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_59(iParam0);
	if (bParam2)
	{
		Function_48(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_83(int iParam0) //Position: 0x7BE8 / 31720
{
	if (!Function_13(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<16> Function_84(int iParam0) //Position: 0x7C02 / 31746
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

struct<24> Function_85(char* cParam0) //Position: 0x7C41 / 31809
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

void Function_86() //Position: 0x7E97 / 32407
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
			Function_87(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_87(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x80E2 / 32994
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_88() //Position: 0x810B / 33035
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_89(int iParam0, bool bParam1, bool bParam2) //Position: 0x8139 / 33081
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	char* cVar10[16];
	int iVar14;
	int iVar15;
	struct<4> Var16;
	
	if (!Function_16(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_100(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[bParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[bParam111].f_32)
		{
			Global_13172[bParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_76(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_312(42) - Global_34165.f_116);
				bVar1 = (Function_312(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[bParam111].f_20)
				{
					Global_13172[bParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_76(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_58(49)) - Global_34165.f_124);
				bVar3 = (Function_312(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[bParam111].f_28)
				{
					Global_13172[bParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_76(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_312(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[bParam111].f_20)
				{
					Global_13172[bParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_76(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[bParam111].f_28)
				{
					Global_13172[bParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_76(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_99(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_90(50, 1, 0);
			if (iVar14 == 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
				{
					AWARD_ACHIEVEMENT(28);
				}
			}
		}
		Var16 = { StackVal, StackVal, StackVal, *(&Global_3422[iParam040] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_84(iParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_34165.f_136 = 0.0f;
	Global_34165.f_140 = 0.0f;
	Global_34165.f_116 = 0;
	Global_34165.f_120 = 0;
	Global_34165.f_124 = 0;
	Global_34165.f_128 = 0;
	return;
}

void Function_90(int iParam0, bool bParam1, bool bParam2) //Position: 0x83D5 / 33749
{
	int iVar0;
	bool bVar1;
	
	if (Function_98(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_27())
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
	iVar0 = Function_312(3);
	Function_95();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_94(3, bVar1);
		if (!bParam2)
		{
			if (!Function_289(Global_76848, 4))
			{
				Function_281(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_74(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_11(3));
	iVar0 = Function_312(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_92(4, Function_93(Global_12976.f_156), 1);
				Function_91(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_92(4, Function_93(Global_12976.f_156), 1);
				Function_91(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_92(4, Function_93(Global_12976.f_156), 1);
				Function_91(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_92(4, Function_93(Global_12976.f_156), 1);
				Function_91(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_92(4, Function_93(Global_12976.f_156), 1);
				Function_91(Global_12976.f_152, Global_12976.f_156);
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

void Function_91(int iParam0, int iParam1) //Position: 0x85A4 / 34212
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, true);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, true);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, true);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, false);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_92(int iParam0, char* cParam1, bool bParam2) //Position: 0x8802 / 34818
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
	Function_80(iParam0, cParam1, 0, 1);
	iVar1 = Function_43();
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

var Function_93(int iParam0) //Position: 0x8987 / 35207
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

int Function_94(int iParam0, bool bParam1) //Position: 0x8A16 / 35350
{
	bool bVar0;
	int iVar1;
	
	Function_74(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_46(iParam0, 4294967295);
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
	iVar1 = Function_43();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

void Function_95() //Position: 0x8BB3 / 35763
{
	Function_97(3, 0.0f);
	Function_96(3, 10000.0f);
	return;
}

int Function_96(int iParam0, int iParam1) //Position: 0x8BC9 / 35785
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_97(int iParam0, int iParam1) //Position: 0x8C09 / 35849
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_98(int iParam0) //Position: 0x8C49 / 35913
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_99(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x8C58 / 35928
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_5743[iParam09] + 12)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_5743[iParam09] + 12)[1])
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	fParam3 = (fParam3 * 100.0f);
	switch (iParam1)
	{
		case 0x00000000:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_5743[iParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			iVar2 = 3;
			iVar3 = (iVar0 + iVar1);
			if (iVar3 > 6)
			{
				return 1;
			}
			if (iVar3 > 4)
			{
				return 2;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_5743[iParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		default:
			iVar1 = 3;
			iVar2 = 3;
			if (iVar0 == 3)
			{
				return 1;
			}
			if (iVar0 == 2)
			{
				return 2;
			}
			return 3;
			break;
	}
	iVar3 = ((iVar0 + iVar1) + iVar2);
	if (iVar3 > 9)
	{
		return 1;
	}
	if (iVar3 > 6)
	{
		return 2;
	}
	return 3;
}

int Function_100(int iParam0) //Position: 0x8E20 / 36384
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

var Function_101() //Position: 0x8EB5 / 36533
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_102(int iParam0) //Position: 0x8EDA / 36570
{
	if (!Function_16(iParam0))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x0000000C:
			Function_90(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_90(25, 1, 0);
			Function_107(1, 1);
			break;
		
		case 0x00000015:
			Function_107(50, 1);
			Function_90(250, 1, 0);
			Function_103(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_90(75, 1, 0);
			Function_103(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_90(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_107(50, 1);
			Function_90(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_107(5, 1);
			Function_103(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_90(75, 1, 0);
			Function_103(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_107(5, 1);
			Function_90(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_90(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_103(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_107(25, 1);
			Function_90(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_107(10, 1);
			Function_90(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_90(50, 1, 0);
			Function_103(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_90(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_90(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_103(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_107(20, 1);
			Function_90(75, 1, 0);
			Function_103(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_107(25, 1);
			Function_90(150, 1, 0);
			Function_103(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_107(10, 1);
			Function_90(150, 1, 0);
			Function_103(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_90(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_103(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_103(100, 1, 0);
			Function_107(5, 1);
			break;
		
		case 0x0000000F:
			Function_107(3, 1);
			Function_90(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_103(125, 1, 0);
			Function_90(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_107(50, 1);
			Function_90(100, 1, 0);
			Function_103(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_107(50, 1);
			Function_90(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_107(75, 1);
			Function_90(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_90(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_90(75, 1, 0);
			Function_103(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_90(250, 1, 0);
			Function_103(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_90(75, 1, 0);
			Function_103(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_90(200, 1, 0);
			Function_103(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_90(75, 1, 0);
			Function_103(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_90(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_107(50, 1);
			Function_90(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_107(100, 1);
			Function_90(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_90(200, 1, 0);
			Function_103(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_90(300, 1, 0);
			Function_103(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_90(300, 1, 0);
			Function_103(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_90(300, 1, 0);
			Function_103(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_90(500, 1, 0);
			Function_103(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_90(150, 1, 0);
			Function_103(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_103(25, 1, 0);
			Function_107(100, 1);
			break;
		
		case 0x0000002A:
			Function_90(150, 1, 0);
			Function_103(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_103(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_103(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_103(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_103(150, 1, 0);
			Function_107(100, 1);
			break;
		
		case 0x00000035:
			Function_103(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_103(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_103(150, 1, 0);
			Function_107(100, 1);
			break;
		
		case 0x00000032:
			Function_103(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_103(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_103(int iParam0, bool bParam1, bool bParam2) //Position: 0x9395 / 37781
{
	int iVar0;
	bool bVar1;
	
	if (Function_98(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_27())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_312(1);
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
			Function_94(1, bVar1);
			if (!bParam2)
			{
				if (!Function_289(Global_76848, 1))
				{
					Function_281(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_106(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_289(Global_76848, 2))
				{
					Function_281(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_74(1, bVar1, 0, 0);
	}
	else
	{
		Function_105(1, (4294967295 * bVar1), 0);
	}
	if (Function_312(1) <= 4294962296)
	{
		Function_82(1, 4294962296, 0);
	}
	else if (Function_312(1) >= 5000)
	{
		Function_82(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_11(1));
	iVar0 = Function_312(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_92(2, Function_104(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_92(2, Function_104(Global_12976.f_152), 0);
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
				Function_92(2, Function_104(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_92(2, Function_104(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_92(2, Function_104(Global_12976.f_152), 1);
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
				Function_92(2, Function_104(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_92(2, Function_104(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_92(2, Function_104(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_92(2, Function_104(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_92(2, Function_104(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_92(2, Function_104(Global_12976.f_152), 1);
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
				Function_92(2, Function_104(Global_12976.f_152), 0);
			}
			break;
	}
	Function_91(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_104(int iParam0) //Position: 0x96B6 / 38582
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

int Function_105(int iParam0, bool bParam1, int iParam2) //Position: 0x9759 / 38745
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
	Function_59(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_48(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_106(int iParam0, bool bParam1) //Position: 0x9954 / 39252
{
	bool bVar0;
	int iVar1;
	
	Function_105(iParam0, bParam1, 0);
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
	iVar1 = Function_46(iParam0, 4294967295);
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
	iVar1 = Function_43();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_107(bool bParam0, bool bParam1) //Position: 0x9AF0 / 39664
{
	bool bVar0;
	
	bVar0 = Function_312(0);
	if ((Function_312(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_74(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_312(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_74(597, bParam0, 0, 0);
	}
	if ((Function_312(597) + Function_312(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_108(int iParam0, var uParam1, bool bParam2) //Position: 0x9BBB / 39867
{
	struct<4> Var0;
	
	if (!Function_16(iParam0))
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
			Function_149(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_147(Global_30640[0]);
			Function_147(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_145(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_147(Global_30668[0]);
			Function_137(0);
			Function_135(2, 1);
			Function_135(0, 1);
			Function_135(1, 1);
			break;
		
		case 0x00000003:
			Function_147(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_147(Global_30668[0]);
			Function_147(Global_30640[0]);
			Function_133(0, 1);
			Function_133(15, 1);
			Function_133(9, 1);
			Function_133(12, 1);
			Function_133(16, 1);
			Function_135(3, 1);
			break;
		
		case 0x00000005:
			Function_147(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_145(21, bParam2, 4);
			Function_147(Global_30668[0]);
			Function_135(39, 1);
			break;
		
		case 0x00000007:
			Function_147(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_147(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3() || Function_132())
				{
					if (!Function_131(4))
					{
						Function_123(4, 0, 0, 1, 0);
					}
				}
			}
			Function_147(Global_30640[0]);
			Function_147(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_147(Global_30640[0]);
			Function_147(Global_30668[2]);
			Function_38(&(Global_29008[Global_30668[2]]), 32768);
			Function_408(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_145(9, bParam2, 4);
			Function_147(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_147(Global_30640[0]);
			Function_147(Global_30658[0]);
			Function_38(&(Global_29008[Global_30658[0]]), 32768);
			Function_408(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_147(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_147(Global_30640[0]);
			Function_147(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_147(Global_30640[1]);
			Function_147(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_147(Global_30679[0]);
			Function_147(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_147(Global_30658[5]);
			Function_147(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_145(21, bParam2, 4);
			Function_147(Global_30640[4]);
			Function_147(Global_30658[4]);
			Function_122(&Global_76847, 0x2000000);
			Function_122(&Global_76847, 0x4000000);
			Function_122(&Global_76847, 4096);
			Function_122(&Global_76847, 8);
			Function_122(&Global_76847, 8388608);
			Function_122(&Global_76847, 524288);
			Function_122(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_147(Global_30640[4]);
			Function_147(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_408(&(Global_29008[Global_30640[4]]), 256);
			Function_147(Global_30640[4]);
			Function_147(Global_30658[0]);
			Function_38(&(Global_29008[Global_30658[0]]), 32768);
			Function_408(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_147(Global_30640[0]);
			Function_147(Global_30640[5]);
			Function_145(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_147(Global_30658[3]);
			Function_38(&(Global_29008[Global_30658[3]]), 32768);
			Function_408(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_145(9, bParam2, 4);
			Function_147(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_38(&(Global_29008[Global_30679[1]]), 32768);
			Function_147(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_145(12, bParam2, 4);
			Function_408(&(Global_29008[Global_30679[1]]), 256);
			Function_147(Global_30668[3]);
			Function_147(Global_30693[0]);
			Function_147(Global_30685[0]);
			Function_137(4);
			Function_133(13, 1);
			Function_133(1, 1);
			Function_133(18, 1);
			Function_135(34, 1);
			Function_135(44, 1);
			Function_135(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_145(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_147(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_147(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_147(Global_30693[0]);
			Function_147(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_147(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_147(Global_30685[0]);
			Function_147(Global_30693[0]);
			Function_147(Global_30693[1]);
			Function_147(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_145(23, bParam2, 3);
			Function_133(23, 1);
			Function_147(Global_30685[0]);
			Function_147(Global_30685[2]);
			Function_38(&(Global_29008[Global_30685[2]]), 32768);
			Function_408(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_145(19, bParam2, 4);
			Function_147(Global_30685[0]);
			Function_147(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_145(24, bParam2, 3);
			Function_133(24, 1);
			Function_147(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_147(Global_30685[0]);
			Function_147(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_147(Global_30693[12]);
			Function_147(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_147(Global_30693[12]);
			Function_147(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_145(25, bParam2, 10);
			Function_147(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_147(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_147(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_145(13, bParam2, 4);
			Function_147(Global_30693[2]);
			Function_147(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_131(8))
				{
					Function_123(8, 0, 0, 1, 0);
				}
			}
			Function_147(Global_30685[0]);
			Function_137(9);
			Function_133(7, 1);
			Function_133(11, 1);
			Function_133(3, 1);
			Function_133(20, 1);
			Function_135(57, 1);
			break;
		
		case 0x0000002A:
			Function_145(2, bParam2, 4);
			Function_147(Global_30717[0]);
			Function_147(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_147(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_147(Global_30717[0]);
			Function_147(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_147(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_147(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_147(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_145(17, bParam2, 4);
			Function_147(Global_30723[0]);
			Function_147(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_120(15))
				{
					Function_115(15, 0, 1);
				}
			}
			Function_73(2, 26);
			Function_408(&(Global_29008[Global_30717[1]]), 256);
			Function_137(11);
			Function_147(Global_30717[1]);
			Function_147(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_147(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_147(Global_30717[1]);
			Function_147(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_147(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_147(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_147(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_147(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_147(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_147(Global_30717[1]);
			Function_109(11);
			Function_137(12);
			Global_16537[1121].f_40 = 0;
			Function_135(56, 1);
			if (!bParam2)
			{
				if (!Function_131(9))
				{
					Function_123(9, 0, 0, 0, 0);
				}
				if (!Function_131(10))
				{
					Function_123(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_76(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_109(int iParam0) //Position: 0xA4B9 / 42169
{
	bool bVar0;
	
	if (!Function_114(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_113(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_113(Global_16537[iParam021].f_72, 0);
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
			Function_110(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_110(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xA628 / 42536
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
		Function_111(Function_112(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_111(Function_112(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_111(StackVal);
				vVar1 = { StackVal, StackVal, Function_111(StackVal) };
				if (Function_279(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

vector3 Function_111(int iParam0) //Position: 0xA72E / 42798
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

int Function_112(vector3 vParam0) //Position: 0xA785 / 42885
{
	int iVar0;
	
	iVar0 = (ROUND(FABS(vParam0.x)) & 32767 || SHIFT_LEFT(ROUND(FABS(vParam0.z)) & 32767, 15));
	if (vParam0.x < 0.0f)
	{
		iVar0 |= 1073741824;
	}
	if (vParam0.z < 0.0f)
	{
		iVar0 = (iVar0 || 2147483648);
	}
	return iVar0;
}

void Function_113(bool bParam0, bool bParam1) //Position: 0xA7D3 / 42963
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

bool Function_114(int iParam0) //Position: 0xA827 / 43047
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

void Function_115(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA83D / 43069
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_119(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_120(bParam0))
	{
		if (!Function_131(bParam0))
		{
			Function_123(bParam0, 1, 0, 0, 1);
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
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, 0, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_74(457, 1, 0, 0);
		Function_118(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_117(0, 0, 1, 1))
			{
				Function_294(1);
				Function_69(1, 0);
			}
			else
			{
				Function_116();
			}
		}
	}
	return;
}

void Function_116() //Position: 0xA9DC / 43484
{
	return;
}

bool Function_117(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xA9E2 / 43490
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

void Function_118(bool bParam0, int iParam1) //Position: 0xAA86 / 43654
{
	if (!Function_119(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_119(int iParam0) //Position: 0xAADB / 43739
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_120(int iParam0) //Position: 0xAAF1 / 43761
{
	if (!Function_119(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_121(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_121(int iParam0, int iParam1) //Position: 0xAB42 / 43842
{
	int iVar0;
	
	if (!Function_119(iParam0))
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

void Function_122(var uParam0, int iParam1) //Position: 0xAB6F / 43887
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_123(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xAB7E / 43902
{
	struct<8> Var0;
	
	if (!Function_119(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_130(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_131(bParam0))
	{
		Function_74(456, 1, 0, 0);
		Function_118(bParam0, 2);
		if (bParam2)
		{
			if (!Function_117(0, 0, 1, 1))
			{
				Function_294(1);
				Function_69(1, 5);
			}
			else
			{
				Function_116();
			}
		}
		Function_124(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_24() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_24() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_280(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_77())
		{
			if (!Function_289(Global_76846, 2))
			{
				Function_281(Global_34573, 2, 1, 0);
			}
		}
	}
}

void Function_124(bool bParam0) //Position: 0xACD3 / 44243
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
			if (Function_128(bParam0, Function_129(bVar24)))
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
			if (Function_128(bParam0, Function_129(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_127(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_126(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_125(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_125(int iParam0) //Position: 0xAE83 / 44675
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_119(iParam0))
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

void Function_126(int iParam0, bool bParam1) //Position: 0xAEDA / 44762
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(iParam0);
	REMOVE_JOURNAL_ENTRY(iParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(iParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(iParam0);
	}
	return;
}

var Function_127(int iParam0) //Position: 0xAEFF / 44799
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_119(iParam0))
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

bool Function_128(bool bParam0, int iParam1) //Position: 0xAF55 / 44885
{
	int iVar0;
	
	if (!Function_119(bParam0))
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

int Function_129(bool bParam0) //Position: 0xAFB4 / 44980
{
	return SHIFT_LEFT(1, bParam0);
}

bool Function_130(int iParam0) //Position: 0xAFC0 / 44992
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_131(int iParam0) //Position: 0xAFDC / 45020
{
	if (!Function_119(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_121(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_132() //Position: 0xB02E / 45102
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_433(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_133(int iParam0, int iParam1) //Position: 0xB05E / 45150
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_134(iParam0, iParam1);
	Function_281(Global_34573, 1, 4, 1);
	return 1;
}

int Function_134(int iParam0, int iParam1) //Position: 0xB0D1 / 45265
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_135(int iParam0, int iParam1) //Position: 0xB12D / 45357
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_136(iParam0, iParam1);
	Function_281(Global_34573, 1, 4, 1);
	return 1;
}

int Function_136(int iParam0, int iParam1) //Position: 0xB19E / 45470
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_137(int iParam0) //Position: 0xB1F8 / 45560
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_114(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_144(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_144(Global_16537[iParam021].f_72, 0);
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
			Function_74(468, 1, 0, 0);
			Function_73(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_280("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_110(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_123(14, 1, 0, 0, 0);
				Function_138(14, 1, 0, 0, 0);
			}
			if (!Function_117(0, 0, 1, 1))
			{
				Function_294(1);
				Function_69(1, 6);
			}
			else
			{
				Function_116();
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
			Function_280("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_74(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_73(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_138(bool bParam0, int iParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0xB4A5 / 46245
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_119(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_130(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_121(bParam0, 2))
	{
		Function_74(456, 1, 0, 0);
		Function_118(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_280(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_128(bParam0, iParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || iParam1);
		Function_118(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_117(0, 0, 1, 1))
			{
				Function_294(1);
				Function_69(1, 0);
			}
			else
			{
				Function_116();
			}
		}
		Function_124(bParam0);
		if (StackVal && !Function_433(((((!Function_24() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_433((((Function_24() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_77())
		{
			if (!Function_289(Global_76846, 2))
			{
				Function_281(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_140();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_139(3, iParam1);
				break;
			
			case 0x00000005:
				Function_139(3, SHIFT_LEFT(iParam1, 6));
				break;
			
			case 0x00000006:
				Function_139(3, SHIFT_LEFT(iParam1, 12));
				break;
			
			case 0x00000007:
				Function_139(3, SHIFT_LEFT(iParam1, 18));
				break;
			
			case 0x00000008:
				Function_139(3, SHIFT_LEFT(iParam1, 24));
				break;
			
			case 0x00000009:
				Function_139(2, SHIFT_LEFT(iParam1, 18));
				break;
			
			case 0x0000000A:
				Function_73(2, 24);
				break;
			
			case 0x00000003:
				Function_73(2, 25);
				break;
			
			case 0x0000000F:
				Function_73(2, 26);
				break;
			
			case 0x0000000D:
				Function_73(2, 27);
				break;
			
			case 0x0000000E:
				Function_73(2, 28);
				break;
			}
	}
}

void Function_139(int iParam0, int iParam1) //Position: 0xB73B / 46907
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (iParam1 > 0)
	{
		(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || iParam1);
	}
	return;
	return;
}

void Function_140() //Position: 0xB7A6 / 47014
{
	if (Function_119(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_143(Global_28180);
			Global_28180.f_8 = Function_141(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_143(Global_28180);
			Global_28180.f_8 = Function_141(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_141(int iParam0, int iParam1) //Position: 0xB821 / 47137
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
					if (Function_368(6, 0) || Function_368(12, 0))
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
					vVar0 = { -2177.057f, 16.426f, 2626.285f };
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
					if (Function_17(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_368(5, 0))
					{
						vVar0 = { -4120.147f, 18.356f, 3039.531f };
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
					vVar0 = { -4178.186f, 32.616f, 4582.207f };
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
					if (Function_17(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_17(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_17(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_17(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_368(26, 0))
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
					if (Function_17(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_17(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_17(27) && iVar18)
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
					if (Function_17(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_17(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_17(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_17(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_368(17, 0) && iVar15)
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
					if (Function_17(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_368(6, 0) && Function_17(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_17(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_368(9, 0) && Function_17(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_17(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_368(8, 0) && iVar19)
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
	if (Function_142(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_142(StackVal, StackVal, vVar3))
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
	if (!Function_142(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

bool Function_142(vector3 vParam0) //Position: 0xC418 / 50200
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_143(int iParam0) //Position: 0xC430 / 50224
{
	int iVar0;
	int iVar1;
	
	if (!Function_119(iParam0))
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

void Function_144(bool bParam0, bool bParam1) //Position: 0xC47F / 50303
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

void Function_145(bool bParam0, bool bParam1, int iParam2) //Position: 0xC4D0 / 50384
{
	float fVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		fVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_146(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), fVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_149(bParam0, 0, 0);
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

bool Function_146(int iParam0, int iParam1) //Position: 0xC53E / 50494
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_147(int iParam0) //Position: 0xC551 / 50513
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_35(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_38(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_74(473, 1, 0, 0);
		iVar0 = Function_148(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_74(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_74(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_74(476, 1, 0, 0);
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
		Function_73(iVar2, bVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_73(7, 30);
	}
	if (Function_11(473) <= Function_58(473))
	{
		if (!Function_34())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

int Function_148(int iParam0) //Position: 0xC650 / 50768
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_342(iParam0))
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

int Function_149(bool bParam0, bool bParam1, int iParam2) //Position: 0xC6A8 / 50856
{
	if (!Function_150(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_21(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_21(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_21(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_150(int iParam0) //Position: 0xC6FF / 50943
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_151(int iParam0) //Position: 0xC711 / 50961
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
			Function_152(4, 0, 0);
		}
	}
	return;
}

void Function_152(int iParam0, int iParam1, int iParam2) //Position: 0xC778 / 51064
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
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
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
		bVar0 = MAKE_TIME_OF_DAY(iParam0, iParam1, iParam2);
		Function_153(Global_16524, bVar0, 1);
	}
	return;
}

void Function_153(int iParam0, bool bParam1, bool bParam2) //Position: 0xC85E / 51294
{
	int iVar0;
	
	Function_155(iParam0);
	Function_406(bParam1);
	PRINTNL();
	if (StackVal == iParam0)
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
	SET_WEATHER(iParam0, bParam1);
	Function_154();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = iParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (iParam0 != 3 || iParam0 != 4)
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
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_154() //Position: 0xC9D7 / 51671
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_155(int iParam0) //Position: 0xC9E3 / 51683
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

int Function_156(bool bParam0) //Position: 0xCA29 / 51753
{
	if (!Function_15(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

int Function_157(bool bParam0) //Position: 0xCA49 / 51785
{
	if (!Function_15(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

bool Function_158(bool bParam0) //Position: 0xCA64 / 51812
{
	if (STRING_CONTAINS_STRING(bParam0, "scantest"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(bParam0, "quad"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_quadrant", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "noffscreen"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_offscreen", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "nelevation"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_elevation", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "material"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_material", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "slope"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_slope", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "range"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_distance", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "all"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_scanner", 0);
		}
		else
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_scanner", 0);
		}
		return 1;
	}
	return 0;
}

bool Function_159(bool bParam0) //Position: 0xCCD8 / 52440
{
	bool bVar0;
	char* cVar1[64];
	
	if (STRING_CONTAINS_STRING(cParam0, "save"))
	{
		bVar0 = false;
		strcpy(&cVar1, GET_CONSOLE_COMMAND_TOKEN(0), 64);
		STRING_UPPER(&cVar1);
		if (!STRINGS_ARE_EQUAL(&cVar1, "SAVE"))
		{
			return 0;
		}
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (IS_STRING_VALID(bParam0))
		{
			if (STRING_LENGTH(bParam0) >= 0)
			{
				strcpy(&cVar1, bParam0, 64);
				STRING_UPPER(&cVar1);
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE1"))
				{
					Function_174();
					SAVE_SOFT_SAVE(0);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 1 (index 0)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE2"))
				{
					Function_174();
					SAVE_SOFT_SAVE(1);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 2 (index 1)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRINGS_ARE_EQUAL(&cVar1, "MP"))
				{
					Function_69(0, 4294967295);
					PRINTSTRING("SAVED MULTIPLAYER GAME");
					PRINTNL();
					LOG_ERROR("MP GAME SAVED!");
					return 1;
				}
				bVar0 = STRING_TO_INT(&cVar1);
				if (bVar0 > 4)
				{
					LOG_ERROR("CANNOT SAVE - INVALID HARD SLOT PASSED!");
					return 0;
				}
			}
		}
		Function_174();
		if (Function_160(bVar0))
		{
			PRINTSTRING("SAVED GAME TO SLOT: ");
			PRINTINT(bVar0);
			PRINTNL();
			LOG_ERROR("GAME SAVED!");
		}
		else
		{
			LOG_ERROR("SAVE FAILED!");
		}
		return 1;
	}
	return 0;
}

bool Function_160(bool bParam0) //Position: 0xCECB / 52939
{
	struct<4> Var0;
	
	if (bParam0 != 4)
	{
		if (Function_461("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				SAVE_GAME(SS_GET_STRING(2, bParam0));
			}
		}
	}
	if (bParam0 <= 4)
	{
		if (Function_77())
		{
			Var0 = { StackVal, StackVal, StackVal, Function_173() };
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Var0);
		}
		else
		{
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Global_3422[Global_626940] + 12);
		}
	}
	if (bParam0 != 4)
	{
		Function_161();
	}
	SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, bParam0));
	return 1;
}

void Function_161() //Position: 0xCF32 / 53042
{
	Function_172();
	Function_171();
	Function_171();
	Function_170();
	Function_170();
	Function_169();
	Function_169();
	Function_168(0);
	Function_168(0);
	if (!Function_34())
	{
		Function_166();
		Function_165();
		Function_164();
		Function_163();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_162();
	return;
}

void Function_162() //Position: 0xCF84 / 53124
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

void Function_163() //Position: 0xD08A / 53386
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

void Function_164() //Position: 0xD0BD / 53437
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
					Global_76695[iVar23] = iVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_165() //Position: 0xD24B / 53835
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
					Global_76543[iVar23] = iVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_166() //Position: 0xD3FF / 54271
{
	Function_167(&Global_28260, 1, 0);
	return;
}

void Function_167(int iParam0, bool bParam1, int iParam2) //Position: 0xD40D / 54285
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	bVar0 = Function_21();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || iParam2)
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
		iVar3 = 0;
		while (iVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[bVar3] = _GET_AMMO_AMOUNT(bVar0, iVar3, 0);
			bVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			iVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, iVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = iVar8;
					iParam0->f_1120 = iVar8;
				}
			}
			iVar4++;
		}
		iParam0->f_2160 = GET_NUM_COLLECTABLES_IN_INVENTORY(bVar0);
		iVar1 = 0;
		while (iVar1 < (iParam0->f_2160 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = uVar11;
			(iParam0 + 1132[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 1132)[iVar12], bVar0);
			iVar1++;
		}
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(bVar0);
		if (iVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, iVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (iVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, iVar13);
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

struct<8> Function_168(char* cParam0) //Position: 0xD5FE / 54782
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
					iVar2 = ((Function_312((50 + iVar4)) + Function_312((183 + iVar4))) + Function_312((90 + iVar4)));
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
	Function_82(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_169() //Position: 0xD6A4 / 54948
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
		iVar2 = ((Function_312((50 + iVar3) + 15) + Function_312((183 + iVar3) + 15)) + Function_312((90 + iVar3) + 15));
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
	Function_82(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_170() //Position: 0xD72D / 55085
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
			iVar2 = ((Function_312((50 + iVar3) + 8) + Function_312((183 + iVar3) + 8)) + Function_312((90 + iVar3) + 8));
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
	Function_82(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_171() //Position: 0xD7C4 / 55236
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_312((50 + iVar3)) + Function_312((183 + iVar3))) + Function_312((90 + iVar3)));
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
	Function_82(179, iVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, iVar4, 8);
	return StackVal, cVar0;
}

void Function_172() //Position: 0xD843 / 55363
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_47(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_82(8, (GET_DAY(false) - 2), 0);
	return;
}

struct<16> Function_173() //Position: 0xD87C / 55420
{
	int iVar0;
	int iVar1;
	
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		if (Function_17(iVar0))
		{
			if (iVar1 == 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (Global_74542[iVar010].f_32 < Global_74542[iVar110].f_32)
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == 4294967295)
	{
		return StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12);
	}
	if (Global_13172[Function_405(Global_6269)11].f_32 < Global_74542[iVar110].f_32)
	{
		return StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12);
	}
	return StackVal, StackVal, StackVal, *(&Global_63541[iVar155] + 4);
}

void Function_174() //Position: 0xD918 / 55576
{
	struct<5> Var0;
	
	if (Function_34())
	{
		Global_34165 = { StackVal, StackVal, Global_76888[03] };
		Global_34165.f_12 = StackVal;
	}
	else
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var0);
		Var0.f_4 = (StackVal + 1.0f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_34165, &uVar3);
		Global_34165.f_12 = GET_HEADING(GET_PLAYER_ACTOR(0));
	}
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_24 = Global_29005;
	if (Function_342(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_175(bool bParam0) //Position: 0xD9AB / 55723
{
	bool bVar0;
	char* cVar1[64];
	
	if (STRING_CONTAINS_STRING(cParam0, "load"))
	{
		bVar0 = false;
		strcpy(&cVar1, GET_CONSOLE_COMMAND_TOKEN(0), 64);
		STRING_UPPER(&cVar1);
		if (!STRINGS_ARE_EQUAL(&cVar1, "LOAD"))
		{
			return 0;
		}
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (IS_STRING_VALID(bParam0))
		{
			if (STRING_LENGTH(bParam0) >= 0)
			{
				strcpy(&cVar1, bParam0, 64);
				STRING_UPPER(&cVar1);
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE1"))
				{
					LOAD_SOFT_SAVE(0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE2"))
				{
					LOAD_SOFT_SAVE(1);
					return 1;
				}
				if (STRINGS_ARE_EQUAL(&cVar1, "MP"))
				{
					Function_177();
					return 1;
				}
				bVar0 = STRING_TO_INT(&cVar1);
				if (bVar0 > 4)
				{
					LOG_ERROR("CANNOT LOAD - INVALID HARD SLOT PASSED!");
					return 0;
				}
			}
		}
		PRINTSTRING("LOADING GAME FROM SLOT: ");
		PRINTINT(bVar0);
		PRINTNL();
		Function_176(bVar0);
		return 1;
	}
	return 0;
}

int Function_176(bool bParam0) //Position: 0xDAC5 / 56005
{
	if (bParam0 != 4)
	{
		if (Function_461("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				if (DOES_FILE_EXIST(SS_GET_STRING(2, bParam0)))
				{
					return LOAD_GAME(SS_GET_STRING(2, bParam0));
				}
			}
		}
	}
	SAVE_MANAGER_HARD_LOAD(SS_GET_STRING(3, bParam0));
	return 1;
}

var Function_177() //Position: 0xDB08 / 56072
{
	NET_LOG(1, "SaveLoad", "Multiplayer Load Called", 0, 0, 0, 0);
	return SAVE_MANAGER_HARD_LOAD(SS_GET_STRING(3, 5));
}

bool Function_178(int iParam0) //Position: 0xDB43 / 56131
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	var uVar18;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	bool bVar25;
	vector3 vVar26;
	vector3 vVar29;
	
	iParam0 = iParam0;
	bVar0 = GET_CONSOLE_COMMAND_TOKEN(0);
	if (Function_179(bVar0, "streamanddropactorlineup"))
	{
		iVar2 = (4294967295 * (GET_NUM_CONSOLE_COMMAND_TOKENS() - 1));
		GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &vVar9);
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar12);
		VSCALE(&vVar9, -7.0f);
		vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar12, StackVal) };
		iVar1 = 1;
		while (iVar1 < (GET_NUM_CONSOLE_COMMAND_TOKENS() - 1))
		{
			bVar22 = GET_CONSOLE_COMMAND_TOKEN(iVar1);
			iVar23 = GET_ACTORENUM_FROM_STRING(bVar22);
			iVar24 = iVar23;
			if (iVar24 == 4294967295)
			{
				LOG_ERROR("Invalid actor enum given to streamanddropactorlineup");
				return 1;
			}
			STREAMING_REQUEST_ACTOR(iVar24, 1, false);
			while (!STREAMING_IS_ACTOR_LOADED(iVar24, 4294967295))
			{
				WAIT(0);
			}
			bVar25 = GET_PLAYER_ACTOR(0);
			GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar25), &Var3);
			GET_POSITION(bVar25, &uVar6);
			vVar26 = { IntToFloat((iVar2 + (2 * (iVar1 - 1)))), 0.0f, 0.0f };
			vVar29 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar26, vVar12, StackVal) };
			FIND_GROUND_INTERSECTION(&vVar29, 80.0f, &vVar15, &uVar18);
			bVar21 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_GC_LAYOUT(), Function_49(), iVar23, vVar15, (0.0f + 180.0f), 0.0f);
			TASK_STAND_STILL(bVar21, -1.0f, 0, 0);
			STREAMING_EVICT_ACTOR(iVar24, 4294967295);
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_179(char* cParam0, bool bParam1) //Position: 0xDC9A / 56474
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, cParam0, 64);
	strcpy(&cVar16, bParam1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

bool Function_180(bool bParam0) //Position: 0xDCC5 / 56517
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<5> Var4;
	vector3 vVar10;
	vector3 vVar13;
	var uVar16;
	bool bVar19;
	
	bVar0 = GET_CONSOLE_COMMAND_TOKEN(0);
	if (Function_179(bVar0, "streamanddropactor"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		iVar1 = GET_ACTORENUM_FROM_STRING(bParam0);
		iVar2 = iVar1;
		if (iVar2 == 4294967295)
		{
			LOG_ERROR("Invalid actor enum given to streamanddropactor");
			return 1;
		}
		STREAMING_REQUEST_ACTOR(iVar2, 1, false);
		while (!STREAMING_IS_ACTOR_LOADED(iVar2, 4294967295))
		{
			WAIT(0);
		}
		bVar3 = GET_PLAYER_ACTOR(0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar3), &Var4);
		GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &vVar7);
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar10);
		VSCALE(&vVar7, -7.0f);
		vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar7, vVar10, StackVal) };
		FIND_GROUND_INTERSECTION(&vVar10, 80.0f, &vVar13, &uVar16);
		bVar19 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_GC_LAYOUT(), Function_49(), iVar1, vVar13, (0.0f + 180.0f), 0.0f);
		TASK_STAND_STILL(bVar19, -1.0f, 0, 0);
		STREAMING_EVICT_ACTOR(iVar2, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_181(bool bParam0) //Position: 0xDDC8 / 56776
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "suicide"))
	{
		bVar0 = Function_21();
		if (IS_ACTOR_VALID(bVar0))
		{
			KILL_ACTOR(bVar0);
		}
		return 1;
	}
	return 0;
}

bool Function_182(bool bParam0) //Position: 0xDDF5 / 56821
{
	if (STRING_CONTAINS_STRING(bParam0, "nframetime"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(bParam0, "false") || STRING_CONTAINS_STRING(bParam0, "off"))
		{
			PRINT_FRAME_TIME(0);
		}
		else
		{
			PRINT_FRAME_TIME(1);
		}
		return 1;
	}
	return 0;
}

bool Function_183(bool bParam0) //Position: 0xDE3F / 56895
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "decor"))
	{
		bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_LENGTH(bVar0) >= 0)
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), bVar0, true);
		}
		return 1;
	}
	return 0;
}

bool Function_184(bool bParam0) //Position: 0xDE72 / 56946
{
	if (STRING_CONTAINS_STRING(bParam0, "fudgeaa"))
	{
		if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("VHC_AA_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", true);
		}
		else if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TES_AA_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", true);
		}
		else if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TUM_FTE_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", true);
		}
		return 1;
	}
	return 0;
}

bool Function_185(bool bParam0) //Position: 0xDF2D / 57133
{
	int iVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "ncockfight"))
	{
		*(&iVar0 + 64 + 20) = 1;
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Mini_Games/Cockfighting/Cockfighting", &iVar0, 51, 0);
		return 1;
	}
	return 0;
}

bool Function_186(bool bParam0) //Position: 0xDF91 / 57233
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	
	if (STRING_CONTAINS_STRING(bParam0, "pickdoor"))
	{
		bVar9 = GET_PLAYER_ACTOR(0);
		GET_ACTOR_AXIS(bVar9, &vVar6, 2);
		GET_POSITION(bVar9, &vVar0);
		vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar0, StackVal) * Vector(-3.0f, -3.0f, -3.0f), StackVal, StackVal) };
		bVar10 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(bVar10))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		Function_434();
		CREATE_GRINGO_IN_LAYOUT(bVar10, Function_49(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Door", vVar3, Function_434());
		return 1;
	}
	return 0;
}

bool Function_187(bool bParam0) //Position: 0xE048 / 57416
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	
	if (STRING_CONTAINS_STRING(bParam0, "droplocker"))
	{
		bVar9 = GET_PLAYER_ACTOR(0);
		GET_ACTOR_AXIS(bVar9, &vVar6, 2);
		GET_POSITION(bVar9, &vVar0);
		vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar0, StackVal) * Vector(-3.0f, -3.0f, -3.0f), StackVal, StackVal) };
		bVar10 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(bVar10))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		bVar11 = CREATE_PROP_IN_LAYOUT(bVar10, Function_49(), "$/fragments/p_gen_footlocker01x", vVar3, 0.0f, 0.0f, 0.0f, 1);
		DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar11, "stand_open_chest"));
		Function_434();
		CREATE_GRINGO_ON_OBJECT(bVar11, Function_49(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Footlocker", -0.3f, 0.1f, -0.3f, Function_434());
		return 1;
	}
	return 0;
}

bool Function_188(bool bParam0) //Position: 0xE161 / 57697
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	
	if (STRING_CONTAINS_STRING(bParam0, "nkillbunny"))
	{
		bVar10 = GET_PLAYER_ACTOR(0);
		GET_ACTOR_AXIS(bVar10, &vVar6, 2);
		GET_POSITION(bVar10, &vVar0);
		vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar0, StackVal) * Vector(-3.0f, -3.0f, -3.0f), StackVal, StackVal) };
		bVar11 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(bVar11))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		bVar12 = CREATE_GRINGO_IN_LAYOUT(bVar11, Function_49(), "$/content/scripting/gringo/SimpleGringo/mex_gutRabbit_link", vVar3, 0.0f, 0.0f, 0.0f);
		bVar9 = CREATE_ACTOR_IN_LAYOUT(bVar11, Function_49(), 1078, vVar3, 0.0f, 0.0f, 0.0f);
		SNAP_ACTOR_TO_GRINGO(bVar9, bVar12, "UseCase1", 1, 0, 0);
		if (!IS_ACTOR_VALID(bVar9))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

bool Function_189(bool bParam0) //Position: 0xE25C / 57948
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "bullriding"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_bullriding", &uVar0, 10, 0);
		return 1;
	}
	return 0;
}

bool Function_190(bool bParam0) //Position: 0xE2B0 / 58032
{
	char* cVar0[32];
	char* cVar8[24];
	
	if (STRING_CONTAINS_STRING(bParam0, "playsong"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 32);
			strcpy(&cVar8, GET_CONSOLE_COMMAND_TOKEN(2), 24);
			AUDIO_MUSIC_FORCE_TRACK(&cVar0, &cVar8, 0f, 4294967295, 4294967295, 3212836864, 0);
			PRINTSTRING("Playing ");
			PRINTSTRING(&cVar0);
			PRINTSTRING(" - ");
			PRINTSTRING(&cVar8);
			PRINTNL();
		}
		else
		{
			LOG_ERROR("Please use in the following format: playsong songname mood");
		}
		return 1;
	}
	return 0;
}

bool Function_191(bool bParam0) //Position: 0xE35A / 58202
{
	bool bVar0;
	
	bVar0 = false;
	if (STRING_CONTAINS_STRING(bParam0, "show_locked_weapons"))
	{
		bVar0 = false;
		while (bVar0 < 39)
		{
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar0));
			if (IS_WEAPONENUM_LOCKED(bVar0))
			{
				PRINTSTRING(" - LOCKED!");
			}
			else
			{
				PRINTSTRING("  - unlocked");
			}
			PRINTNL();
			bVar0++;
		}
		return 1;
	}
	return 0;
}

bool Function_192(bool bParam0) //Position: 0xE3CF / 58319
{
	char* cVar0[64];
	
	if (STRING_CONTAINS_STRING(bParam0, "ai_ignore_player"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 64);
			if (STRINGS_ARE_EQUAL(&cVar0, "1"))
			{
				AI_IGNORE_ACTOR(GET_PLAYER_ACTOR(0));
			}
			else if (STRINGS_ARE_EQUAL(&cVar0, "0"))
			{
				AI_STOP_IGNORING_ACTORS();
			}
			else if (STRINGS_ARE_EQUAL(&cVar0, "on"))
			{
				AI_IGNORE_ACTOR(GET_PLAYER_ACTOR(0));
			}
			else if (STRINGS_ARE_EQUAL(&cVar0, "off"))
			{
				AI_STOP_IGNORING_ACTORS();
			}
			else
			{
				LOG_ERROR("Must provide 0 or 1 to toggle off or on");
			}
		}
		else
		{
			LOG_ERROR("Must provide 0 or 1 to toggle off or on");
		}
		return 1;
	}
	return 0;
}

bool Function_193(bool bParam0) //Position: 0xE4B4 / 58548
{
	char* cVar0[64];
	bool bVar16;
	bool bVar17;
	int iVar18;
	char* cVar19[64];
	bool bVar35;
	int iVar36;
	float fVar37;
	char* cVar38[64];
	bool bVar54;
	char* cVar55[64];
	bool bVar71;
	bool bVar72;
	int iVar73;
	
	if (STRING_CONTAINS_STRING(bParam0, "remove"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 64);
			bVar16 = GET_CONSOLE_COMMAND_TOKEN(2);
			STRING_UPPER(&cVar0);
			bVar17 = false;
			if (STRING_CONTAINS_STRING(&cVar0, "WE_"))
			{
				iVar18 = 39;
				bVar35 = 4294967295;
				bVar17 = false;
				while (bVar17 < iVar18)
				{
					strcpy(&cVar19, "WE_", 64);
					stradd(&cVar19, GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar19);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar19))
					{
						bVar35 = bVar17;
						PRINTSTRING("removing from the player ");
						PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar35));
						PRINTNL();
						DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), bVar35);
					}
					bVar17++;
				}
				if (bVar35 == 4294967295)
				{
					PRINTSTRING("Could not remove from player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "AMMO_"))
			{
				iVar36 = 17;
				bVar17 = false;
				bVar54 = 4294967295;
				bVar17 = false;
				while (bVar17 < iVar36)
				{
					strcpy(&cVar38, "AMMO_", 64);
					stradd(&cVar38, GET_AMMO_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar38);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar38))
					{
						bVar54 = bVar17;
						PRINTSTRING("removing from the player ");
						PRINTSTRING(GET_AMMO_ENUM_STRING_FROM_ENUM(bVar54));
						fVar37 = STRING_TO_FLOAT(bVar16);
						fVar37 = (fVar37 * -1.0f);
						if (fVar37 < 0.0f)
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar54, fVar37, 0, 1);
							PRINTSTRING(" - x");
							PRINTFLOAT(fVar37);
						}
						else
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar54, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), bVar54), 0, 1);
						}
						PRINTNL();
					}
					bVar17++;
				}
				if (bVar54 == 4294967295)
				{
					PRINTSTRING("Could not remove from player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "ITEM_"))
			{
				bVar71 = 4294967295;
				iVar73 = 0;
				bVar17 = false;
				while (bVar17 < (79 - 1))
				{
					strcpy(&cVar55, "ITEM_", 64);
					stradd(&cVar55, Function_325(bVar17), 64);
					if (STRINGS_ARE_EQUAL(&cVar55, &cVar0))
					{
						bVar71 = bVar17;
						PRINTSTRING("removing from player ");
						PRINTSTRING(&cVar55);
						PRINTSTRING(" - x");
						bVar72 = STRING_TO_INT(bVar16);
						if (bVar72 >= 0)
						{
							iVar73 = 1;
							while (iVar73 < bVar72)
							{
								iVar73++;
							}
							PRINTINT(bVar72);
						}
						else
						{
							PRINTINT(true);
						}
						PRINTNL();
					}
					bVar17++;
				}
				if (bVar71 == 4294967295)
				{
					PRINTSTRING("Could not remove from the player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if ((STRING_CONTAINS_STRING(&cVar0, "all") || STRING_CONTAINS_STRING(&cVar0, "ALL")) || STRING_CONTAINS_STRING(&cVar0, "All"))
			{
				bVar17 = false;
				while (bVar17 < (8 - 1))
				{
					DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), GET_WEAPON_EQUIPPED(GET_PLAYER_ACTOR(0), bVar17));
					bVar17++;
				}
				DELETE_ALL_INVENTORY_FROM_ACTOR(GET_PLAYER_ACTOR(0));
				PRINTSTRING("Took all the player's stuff away");
				PRINTNL();
			}
			else
			{
				LOG_ERROR("remove must be followed by an item of type WE_ ITEM_ or AMMO_");
			}
		}
		else
		{
			LOG_ERROR("Must provide an item name to remove from the player");
		}
		return 1;
	}
	return 0;
}

bool Function_194(bool bParam0) //Position: 0xE879 / 59513
{
	char* cVar0[64];
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	char* cVar20[64];
	char* cVar36[64];
	char* cVar52[64];
	bool bVar68;
	int iVar69;
	float fVar70;
	int iVar71;
	bool bVar72;
	bool bVar73;
	int iVar74;
	bool bVar75;
	
	if (STRING_CONTAINS_STRING(bParam0, "give"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 64);
			bVar16 = GET_CONSOLE_COMMAND_TOKEN(2);
			STRING_UPPER(&cVar0);
			bVar17 = false;
			iVar18 = 17;
			if (STRING_CONTAINS_STRING(&cVar0, "WE_"))
			{
				iVar19 = 39;
				bVar68 = 4294967295;
				bVar17 = false;
				while (bVar17 < iVar19)
				{
					strcpy(&cVar20, "WE_", 64);
					stradd(&cVar20, GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar20);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar20))
					{
						bVar68 = bVar17;
						PRINTSTRING("Giving the player ");
						PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68));
						PRINTNL();
						SET_WEAPONENUM_LOCKED(bVar68, 0);
						GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), bVar68, 0f, 1, 1);
						if (STRING_CONTAINS_STRING(bParam0, "givewna"))
						{
							iVar69 = GET_AMMOENUM_FOR_WEAPONENUM(bVar68);
							if (iVar69 != 4294967295)
							{
								PRINTSTRING("Being nice and giving the player ");
								PRINTSTRING(GET_AMMO_ENUM_STRING_FROM_ENUM(iVar69));
								PRINTNL();
								_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar69, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), bVar69), 0, 1);
							}
							else
							{
								PRINTSTRING("Weapon doesn't have a valid ammo type, so not able to be nice.");
								PRINTNL();
							}
						}
					}
					bVar17++;
				}
				if (bVar68 == 4294967295)
				{
					PRINTSTRING("Could not give player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "AMMO_"))
			{
				bVar17 = false;
				iVar71 = 4294967295;
				bVar17 = false;
				while (bVar17 < iVar18)
				{
					strcpy(&cVar36, "AMMO_", 64);
					stradd(&cVar36, GET_AMMO_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar36);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar36))
					{
						iVar71 = bVar17;
						PRINTSTRING("Giving the player ");
						PRINTSTRING(GET_AMMO_ENUM_STRING_FROM_ENUM(iVar71));
						fVar70 = STRING_TO_FLOAT(bVar16);
						if (fVar70 < 0.0f)
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar71, fVar70, 0, 1);
							PRINTSTRING(" - x");
							PRINTFLOAT(fVar70);
						}
						else
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar71, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), bVar71), 0, 1);
						}
						PRINTNL();
					}
					bVar17++;
				}
				if (bVar71 == 4294967295)
				{
					PRINTSTRING("Could not give player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "ITEM_"))
			{
				bVar72 = 4294967295;
				iVar74 = 0;
				bVar17 = false;
				while (bVar17 < (79 - 1))
				{
					strcpy(&cVar52, "ITEM_", 64);
					stradd(&cVar52, Function_325(bVar17), 64);
					if (STRINGS_ARE_EQUAL(&cVar52, &cVar0))
					{
						bVar72 = bVar17;
						PRINTSTRING("Giving player ");
						PRINTSTRING(&cVar52);
						PRINTSTRING(" - x");
						if (bVar72 == 13)
						{
							Function_196(&Global_26303, Function_209(), 4294967294, 0, 0, 1);
						}
						bVar73 = STRING_TO_INT(bVar16);
						if (bVar73 >= 0)
						{
							iVar74 = 1;
							while (iVar74 < bVar73)
							{
								ADD_ITEM(Function_325(bVar72), GET_PLAYER_ACTOR(0), 1);
								iVar74++;
							}
							PRINTINT(bVar73);
						}
						else
						{
							ADD_ITEM(Function_325(bVar72), GET_PLAYER_ACTOR(0), 1);
							PRINTINT(true);
						}
						PRINTNL();
					}
					bVar17++;
				}
				if (bVar72 == 4294967295)
				{
					PRINTSTRING("Could not give the player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "LIST"))
			{
				iVar18 = 17;
				iVar19 = 39;
				PRINTSTRING("WEAPONS:");
				PRINTNL();
				bVar17 = false;
				while (bVar17 < iVar19)
				{
					strcpy(&cVar20, "WE_", 64);
					stradd(&cVar20, GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar20);
					PRINTSTRING(&cVar20);
					PRINTNL();
					bVar17++;
				}
				PRINTNL();
				PRINTSTRING("AMMO:");
				PRINTNL();
				bVar17 = false;
				while (bVar17 < iVar18)
				{
					strcpy(&cVar36, "AMMO_", 64);
					stradd(&cVar36, GET_AMMO_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar36);
					PRINTSTRING(&cVar36);
					PRINTNL();
					bVar17++;
				}
				PRINTNL();
				PRINTSTRING("ITEMS:");
				PRINTNL();
				bVar17 = false;
				while (bVar17 < (79 - 1))
				{
					strcpy(&cVar52, "ITEM_", 64);
					stradd(&cVar52, Function_325(bVar17), 64);
					PRINTSTRING(&cVar52);
					PRINTNL();
					bVar17++;
				}
			}
			else if ((STRING_CONTAINS_STRING(&cVar0, "all") || STRING_CONTAINS_STRING(&cVar0, "ALL")) || STRING_CONTAINS_STRING(&cVar0, "All"))
			{
				iVar18 = 17;
				iVar19 = 39;
				bVar17 = true;
				while (bVar17 < (iVar19 - 2))
				{
					bVar68 = bVar17;
					if ((((!STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "DEFAULT") && !STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "TURRET")) && !STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "CANNON")) && !STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "TEST")) && !STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "DUALPISTOL"))
					{
						SET_WEAPONENUM_LOCKED(bVar68, 0);
						GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), bVar68, 0f, 1, 1);
					}
					bVar17++;
				}
				bVar17 = false;
				while (bVar17 < (iVar18 - 1))
				{
					_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar17, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), bVar17), 0, 1);
					bVar17++;
				}
				bVar17 = false;
				while (bVar17 < (79 - 1))
				{
					ADD_ITEM(Function_325(bVar17), GET_PLAYER_ACTOR(0), 1);
					bVar17++;
				}
				PRINTSTRING("Gave the player friggin' everything.");
				PRINTNL();
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "$"))
			{
				bVar16 = GET_CONSOLE_COMMAND_TOKEN(1);
				STRING_CLEAR_TOKENIZER();
				SET_OWNERSHIP_STRAGGLER(bVar16, "$");
				if (STRING_NUM_TOKENS() >= 0)
				{
					bVar16 = STRING_GET_TOKEN(0);
					bVar75 = STRING_TO_INT(bVar16);
					if (bVar75 >= 0)
					{
						Function_107(ABS(bVar75), 1);
					}
					else
					{
						Function_195(ABS(bVar75), 1);
					}
				}
				else
				{
					LOG_ERROR("GIVE $ must be followed by a valid dollar amount");
				}
				STRING_CLEAR_TOKENIZER();
			}
			else
			{
				LOG_ERROR("GIVE must be followed by an item of type WE_ ITEM_ or AMMO_");
			}
		}
		else
		{
			LOG_ERROR("Must provide an item name to give to the player");
		}
		return 1;
	}
	return 0;
}

int Function_195(int iParam0, bool bParam1) //Position: 0xEF25 / 61221
{
	bool bVar0;
	
	bVar0 = Function_312(0);
	if ((Function_312(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_105(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (iParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_312(0));
	return 1;
}

int Function_196(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xEFB5 / 61365
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[45];
	int iVar50[45];
	struct<33> Var96;
	
	iVar0 = 0;
	if (Function_208())
	{
		return 0;
	}
	uParam0->f_16 = Function_207(iParam1);
	if (iParam3 == 0)
	{
		iParam3 = 0;
	}
	if (iParam1 == 4294967295)
	{
		iParam1 = Function_209();
	}
	if (iParam4 > 0 || iParam4 < 8)
	{
		iParam4 = 0;
	}
	Global_26303.f_12 = iParam1;
	iVar1 = 0;
	while (iVar1 < (45 - 1))
	{
		if (Function_206(&Var96, iVar1) == 1)
		{
			if (Function_205(Var96.f_24) == Global_30621[Global_29004])
			{
				if (Var96.f_32 == iParam3)
				{
					if (((iParam1 != 4294967295 || iParam1 <= Var96.f_12) || (iParam1 != 0 && Var96.f_12 != 3)) || (iParam1 != 0 && Var96.f_12 != 4))
					{
						if (iParam4 != 0 || iParam4 != Function_204(Var96.f_20))
						{
							iVar4[iVar2] = iVar1;
							iVar2++;
							if (iParam5 == 1)
							{
								if (!Function_203(iVar1))
								{
									iVar50[iVar3] = iVar1;
									iVar3++;
								}
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar2 >= 0)
	{
		if (iVar3 >= 0)
		{
			iVar1 = iVar50[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar3)];
		}
		else
		{
			iVar1 = iVar4[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar2)];
		}
		if (Function_206(uParam0, iVar1))
		{
			PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY found actor");
			PRINTSTRING("With ActorEnum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(uParam0->f_20));
			PRINTNL();
			uParam0->f_24 = Function_197(uParam0, iParam4, 80, 20000, uParam0->f_12);
			iVar0 = 1;
		}
		else
		{
			LOG_ERROR("There's something wrong here");
		}
	}
	else
	{
		iVar0 = 0;
		LOG_ERROR("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY did not find a valid actor");
		PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY did not find an actor");
		PRINTNL();
	}
	if (iParam2 != 4294967294)
	{
		uParam0->f_24 = iParam2;
	}
	return iVar0;
}

var Function_197(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xF21F / 61983
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0->f_24;
	uParam3 = uParam3;
	uParam2 = uParam2;
	if (StackVal || uParam0->f_24 != 4294967295 != 1)
	{
		uVar1 = Function_198(uVar0, 80.0f, 20000.0f, uParam1, 1, uParam4);
	}
	else if (StackVal != 6)
	{
		LOG_ERROR("Unhandled Bounty Hunter Landmark type");
	}
	else
	{
		uVar1 = uParam0->f_24;
	}
	return uVar1;
}

var Function_198(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0xF2AA / 62122
{
	int iVar0;
	int iVar1[146];
	bool bVar148[146];
	int iVar295;
	vector3 vVar296;
	vector3 vVar299;
	float fVar302;
	float fVar303;
	float fVar304[146];
	float fVar451[146];
	bool bVar598;
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
	bVar598 = false;
	while (bVar598 < 145)
	{
		iVar1[bVar598] = 4294967295;
		bVar148[bVar598] = 4294967295;
		bVar598++;
	}
	if (!Function_342(iParam0))
	{
		iParam0 = Global_29005;
	}
	iVar295 = Function_205(iParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar299);
	bVar598 = false;
	while (bVar598 < 145)
	{
		Function_202(StackVal);
		vVar296 = { StackVal, StackVal, Function_202(StackVal) };
		fVar302 = VDIST(vVar299, vVar296);
		if (iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(StackVal) && (iVar295 != Function_205(Global_29155[bVar59810]) || iParam0 != 4294967295)) != 1) && Function_35(&(Global_29008[bVar598]), 8192)) && bVar598 == 0)
		{
			if (bVar598 == 146)
			{
				LOG_ERROR("The bountyhunter region count is screwy. Tell Ben.");
				return 4294967294;
			}
			if (fVar302 > fVar303)
			{
				fVar303 = fVar302;
				iVar600 = bVar598;
			}
			if (fVar302 < fParam1 && fVar302 > fParam2)
			{
				iVar1[iVar601] = bVar598;
				fVar304[iVar601] = fVar302;
				iVar601++;
				if (Function_72(Function_436(bVar598, 0, 2)) == 0)
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is NOT FINISHED.");
					PRINTNL();
					bVar148[iVar602] = bVar598;
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
			bVar598 = 146;
			LOG_ERROR("Reached regCount max? Tell Ben.");
		}
		bVar598++;
	}
	if (iParam5 != 4294967295)
	{
		Function_201(&iVar1, &fVar304, iVar601);
		Function_201(&bVar148, &fVar451, iVar602);
	}
	if (iVar602 < 0 && iParam4 != 1)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_55(3, iVar602);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_55(5, iVar602);
				break;
			
			case 0x00000004:
				iVar603 = Function_55(7, iVar602);
				break;
			
			case 0x00000005:
				iVar603 = Function_55(10, iVar602);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_55(5, iVar602);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = bVar148[iVar599];
		if (Function_342(iVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_200();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_199(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_202(StackVal);
		vVar296 = { StackVal, StackVal, Function_202(StackVal) };
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
				iVar603 = Function_55(3, iVar601);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_55(5, iVar601);
				break;
			
			case 0x00000004:
				iVar603 = Function_55(7, iVar601);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar603 = Function_55(10, iVar601);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_55(5, iVar601);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = iVar1[iVar599];
		if (Function_342(iVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_200();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_199(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_202(StackVal);
		vVar296 = { StackVal, StackVal, Function_202(StackVal) };
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

struct<32> Function_199(int iParam0) //Position: 0xF953 / 63827
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_342(iParam0))
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

int Function_200() //Position: 0xFA10 / 64016
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

void Function_201(bool bParam0, float fParam1, int iParam2) //Position: 0xFA3E / 64062
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
		uVar2 = (*bParam0)[iVar0];
		iVar1 = (iVar0 - 1);
		iVar4 = 0;
		while (iVar4 == 0)
		{
			if ((*fParam1)[iVar1] < fVar3)
			{
				(*fParam1)[iVar1 + 1] = (*fParam1)[iVar1];
				(*bParam0)[iVar1 + 1] = (*bParam0)[iVar1];
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
		(*bParam0)[iVar1 + 1] = uVar2;
		(*fParam1)[iVar1 + 1] = fVar3;
		iVar0++;
	}
	return;
}

vector3 Function_202(bool bParam0) //Position: 0xFACC / 64204
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_203(bool bParam0) //Position: 0xFADD / 64221
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 1;
	if (bParam0 <= 32)
	{
		iVar1 = SHIFT_LEFT(iVar0, bParam0);
		if ((Global_26303 && iVar1) >= 0)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 0;
		}
	}
	else
	{
		iVar1 = SHIFT_LEFT(iVar0, (bParam0 - 32));
		if ((StackVal && iVar1) >= 0)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 0;
		}
	}
	return iVar2;
}

int Function_204(int iParam0) //Position: 0xFB2F / 64303
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(iParam0);
	switch (iVar0)
	{
		case 0x0000000F:
			iVar1 = 1;
			break;
		
		case 0x0000001B:
			iVar1 = 2;
			break;
		
		case 0x00000018:
			iVar1 = 3;
			break;
		
		case 0x0000000C:
			iVar1 = 4;
			break;
		
		case 0x00000019:
			iVar1 = 5;
			break;
		
		case 0x0000000E:
			iVar1 = 6;
			break;
		
		case 0x0000000D:
			iVar1 = 7;
			break;
		
		default:
			LOG_ERROR("BOUNTYHUNTER_GET_GANG_TYPE found an invalid actor faction");
			iVar1 = 7;
			break;
	}
	return iVar1;
}

int Function_205(int iParam0) //Position: 0xFBDE / 64478
{
	return Function_148(iParam0);
}

bool Function_206(var uParam0, int iParam1) //Position: 0xFBE9 / 64489
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam1)
	{
		case 0x00000000:
			uParam0->f_12 = 3;
			uParam0->f_20 = 415;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 26;
			break;
		
		case 0x00000001:
			uParam0->f_12 = 3;
			uParam0->f_20 = 416;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 27;
			break;
		
		case 0x00000002:
			uParam0->f_12 = 5;
			uParam0->f_20 = 422;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 28;
			break;
		
		case 0x00000003:
			uParam0->f_12 = 5;
			uParam0->f_20 = 423;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 29;
			break;
		
		case 0x00000004:
			uParam0->f_12 = 4;
			uParam0->f_20 = 418;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 30;
			break;
		
		case 0x00000005:
			uParam0->f_12 = 4;
			uParam0->f_20 = 419;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 31;
			break;
		
		case 0x00000006:
			uParam0->f_12 = 2;
			uParam0->f_20 = 397;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 12;
			break;
		
		case 0x00000007:
			uParam0->f_12 = 4;
			uParam0->f_20 = 398;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 32;
			break;
		
		case 0x00000008:
			uParam0->f_12 = 5;
			uParam0->f_20 = 403;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 33;
			break;
		
		case 0x00000009:
			uParam0->f_12 = 5;
			uParam0->f_20 = 404;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 34;
			break;
		
		case 0x0000000A:
			uParam0->f_12 = 4;
			uParam0->f_20 = 400;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 35;
			break;
		
		case 0x0000000B:
			uParam0->f_12 = 5;
			uParam0->f_20 = 401;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 36;
			break;
		
		case 0x0000000C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 496;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 13;
			break;
		
		case 0x0000000D:
			uParam0->f_12 = 2;
			uParam0->f_20 = 497;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 14;
			break;
		
		case 0x0000000E:
			uParam0->f_12 = 4;
			uParam0->f_20 = 502;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 17;
			break;
		
		case 0x0000000F:
			uParam0->f_12 = 4;
			uParam0->f_20 = 503;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 5;
			break;
		
		case 0x00000010:
			uParam0->f_12 = 3;
			uParam0->f_20 = 499;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 18;
			break;
		
		case 0x00000011:
			uParam0->f_12 = 3;
			uParam0->f_20 = 500;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 19;
			break;
		
		case 0x00000012:
			uParam0->f_12 = 1;
			uParam0->f_20 = 477;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 1;
			break;
		
		case 0x00000013:
			uParam0->f_12 = 1;
			uParam0->f_20 = 478;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 42;
			break;
		
		case 0x00000014:
			uParam0->f_12 = 3;
			uParam0->f_20 = 483;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 41;
			break;
		
		case 0x00000015:
			uParam0->f_12 = 3;
			uParam0->f_20 = 484;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 2;
			break;
		
		case 0x00000016:
			uParam0->f_12 = 2;
			uParam0->f_20 = 480;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 3;
			break;
		
		case 0x00000017:
			uParam0->f_12 = 2;
			uParam0->f_20 = 481;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 4;
			break;
		
		case 0x00000018:
			uParam0->f_12 = 1;
			uParam0->f_20 = 505;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 43;
			break;
		
		case 0x00000019:
			uParam0->f_12 = 1;
			uParam0->f_20 = 506;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 44;
			break;
		
		case 0x0000001A:
			uParam0->f_12 = 3;
			uParam0->f_20 = 513;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 15;
			break;
		
		case 0x0000001B:
			uParam0->f_12 = 3;
			uParam0->f_20 = 514;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 6;
			break;
		
		case 0x0000001C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 508;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 16;
			break;
		
		case 0x0000001D:
			uParam0->f_12 = 2;
			uParam0->f_20 = 509;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 7;
			break;
		
		case 0x0000001E:
			uParam0->f_12 = 1;
			uParam0->f_20 = 486;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 45;
			break;
		
		case 0x0000001F:
			uParam0->f_12 = 1;
			uParam0->f_20 = 487;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 46;
			break;
		
		case 0x00000020:
			uParam0->f_12 = 3;
			uParam0->f_20 = 492;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 8;
			break;
		
		case 0x00000021:
			uParam0->f_12 = 3;
			uParam0->f_20 = 493;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 9;
			break;
		
		case 0x00000022:
			uParam0->f_12 = 2;
			uParam0->f_20 = 489;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 10;
			break;
		
		case 0x00000023:
			uParam0->f_12 = 2;
			uParam0->f_20 = 490;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 11;
			break;
		
		case 0x00000024:
			uParam0->f_12 = 3;
			uParam0->f_20 = 467;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 47;
			break;
		
		case 0x00000025:
			uParam0->f_12 = 3;
			uParam0->f_20 = 468;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 48;
			break;
		
		case 0x00000026:
			uParam0->f_12 = 2;
			uParam0->f_20 = 406;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 20;
			break;
		
		case 0x00000027:
			uParam0->f_12 = 3;
			uParam0->f_20 = 407;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 21;
			break;
		
		case 0x00000028:
			uParam0->f_12 = 4;
			uParam0->f_20 = 412;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 22;
			break;
		
		case 0x00000029:
			uParam0->f_12 = 4;
			uParam0->f_20 = 413;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 23;
			break;
		
		case 0x0000002A:
			uParam0->f_12 = 3;
			uParam0->f_20 = 410;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 24;
			break;
		
		case 0x0000002B:
			uParam0->f_12 = 3;
			uParam0->f_20 = 411;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 25;
			break;
		
		case 0x0000002C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 787;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 60;
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

var Function_207(int iParam0) //Position: 0x1035F / 66399
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = (4 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000002:
			iVar0 = (5 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000003:
			iVar0 = (6 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000004:
			iVar0 = (7 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000005:
			iVar0 = (8 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000006:
			iVar0 = (8 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 3.0f)));
			break;
		
		case 0x00000000:
		default:
			iVar0 = (4 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 5.0f)));
			break;
	}
	return iVar0;
}

bool Function_208() //Position: 0x1042D / 66605
{
	return Function_433(StackVal, 1);
}

int Function_209() //Position: 0x1043C / 66620
{
	int iVar0;
	
	iVar0 = Function_210(0);
	return iVar0;
}

var Function_210(int iParam0) //Position: 0x1044A / 66634
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = (Function_312(358) + Function_312(359));
	if (iParam0 == 1)
	{
		iVar2 = Function_55(iVar1, 7);
		if (iVar2 == 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar2);
		}
	}
	else
	{
		if (iVar1 <= 2)
		{
			iVar0 = 1;
		}
		else if (iVar1 <= 4)
		{
			iVar0 = 2;
		}
		else
		{
			iVar0 = 3;
		}
		if (Global_29004 == 0)
		{
			iVar0 = iVar0;
		}
		else if (Global_29004 == 1)
		{
			iVar0++;
		}
		else
		{
			iVar0 += 2;
		}
	}
	return iVar0;
}

bool Function_211(bool bParam0) //Position: 0x104CE / 66766
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "horsebreaking"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_HorseBreaking", &uVar0, 10, 0);
		return 1;
	}
	return 0;
}

bool Function_212(bool bParam0) //Position: 0x10528 / 66856
{
	var uVar0;
	struct<5> Var3;
	vector3 vVar9;
	vector3 vVar12;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	if (STRING_CONTAINS_STRING(bParam0, "dropcougar"))
	{
		bVar17 = GET_PLAYER_ACTOR(0);
		GET_POSITION(bVar17, &uVar0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar17), &Var3);
		vVar6 = { 0.0f, 0.0f, -3.0f };
		vVar9 = { StackVal, StackVal, vVar6 };
		vVar12 = { StackVal, StackVal, -Vector(vVar6, StackVal, StackVal) };
		ROTATE_VECTOR_XZ(StackVal, &vVar6, 0);
		bVar18 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(bVar18))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		bVar15 = Function_213(StackVal, StackVal, StackVal, bVar18, Function_49(), 1118, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar17));
		bVar16 = Function_213(StackVal, StackVal, StackVal, bVar18, Function_49(), 1087, vVar12, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar17));
		if (!IS_ACTOR_VALID(bVar15) || !IS_ACTOR_VALID(bVar16))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

var Function_213(bool bParam0, bool bParam1, int iParam2, vector3 vParam3, vector3 vParam6, bool bParam9) //Position: 0x1060B / 67083
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	vVar0 = { StackVal, StackVal, vParam3 };
	vVar3 = { StackVal, StackVal, vParam6 };
	Function_214(bParam9, 0, &vVar0, &vVar3);
	bVar6 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, iParam2, vVar0, vVar3);
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bVar6), 50.0f, 0, 1092616192);
	return bVar6;
}

void Function_214(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x10656 / 67158
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_215(&vVar0, uParam2))
			{
				*uParam2 = { StackVal, StackVal, vVar0 };
			}
		}
		else
		{
			*uParam2 = { StackVal, StackVal, vVar0 };
		}
	}
	else
	{
		LOG_ERROR("Failed to get object relative position - perhaps the object type does not support transformations");
	}
	if (!GET_OBJECT_RELATIVE_ORIENTATION(bParam0, *uParam3, &vVar0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		*uParam3 = { StackVal, StackVal, vVar0 };
	}
}

bool Function_215(var uParam0, int iParam1) //Position: 0x1077E / 67454
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_142(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*uParam0 = (*uParam0 + 0.01f);
	uParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_142(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_216(bool bParam0) //Position: 0x107E9 / 67561
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	
	if (STRING_CONTAINS_STRING(bParam0, "nbattleset"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		REQUEST_ASSET(bParam0, 7);
		uVar0 = GET_ASSET_ID(bParam0, 7);
		STREAMING_REQUEST_PROPSET(uVar0);
		while (!STREAMING_IS_PROPSET_LOADED(uVar0))
		{
			WAIT(0);
		}
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar1);
		GET_ACTOR_AXIS(GET_PLAYER_ACTOR(0), &vVar7, 2);
		vVar10 = { StackVal, StackVal, vVar7 };
		VNORMALIZE(&vVar10);
		VSCALE(&vVar10, -20.0f);
		vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar10, vVar1, StackVal) };
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), &vVar4);
		Function_217(StackVal, StackVal, StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_49(), bParam0, vVar1, vVar4, 4294967295);
		STREAMING_EVICT_PROPSET(uVar0);
		return 1;
	}
	return 0;
}

var Function_217(var uParam0, int iParam1, char* cParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x1088F / 67727
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	
	bVar0 = CREATE_PROPSET_IN_LAYOUT(uParam0, iParam1, cParam2, vParam3, vParam6);
	bVar1 = GET_LAYOUT_FROM_OBJECT(bVar0);
	bVar2 = CREATE_OBJECT_ITERATOR(bVar1);
	ITERATE_IN_LAYOUT(bVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar3))
	{
		if (!GET_OBJECT_TYPE(bVar3) != 57)
		{
			if (!iParam9 != 4294967295)
			{
				GET_OBJECT_POSITION(bVar3, &vVar4);
				vVar4 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 4.0f, 0.0f) };
				iVar7 = GET_MATERIAL_AT_VECTOR(&vVar4);
				if (!iVar7 != 0 && (iVar7 && iParam9) < 0)
				{
					PRINTSTRING("Deleting object. Materials were above");
					PRINTNL();
					DESTROY_OBJECT(bVar3);
				}
			}
			if (IS_OBJECT_VALID(bVar3))
			{
				if (DECOR_CHECK_EXIST(bVar3, "rstarInfoSnapping_Type"))
				{
					iVar8 = DECOR_CHECK_STRING(bVar3, "rstarInfoSnapping_Type", "align");
					SNAP_OBJECT_TO_GROUND(bVar3, 10.0f, iVar8, 1092616192);
				}
				NET_OBJECT_SET_REPLICATION_MODE(bVar3, 0);
				if (Function_34())
				{
					SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar3), 1);
				}
			}
		}
		bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(bVar0));
	ADD_AI_COVERSET_FOR_PROPSET(bVar0);
	DESTROY_ITERATOR(bVar2);
	return bVar0;
}

bool Function_218(bool bParam0) //Position: 0x109D8 / 68056
{
	bool bVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "killvehicle"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		bVar0 = GET_PLAYER_ACTOR(0);
		bVar1 = GET_VEHICLE(bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			KILL_ACTOR(bVar1);
		}
		return 1;
	}
	return 0;
}

bool Function_219(bool bParam0) //Position: 0x10A17 / 68119
{
	bool bVar1;
	struct<5> Var2;
	
	if (STRING_CONTAINS_STRING(bParam0, "getmat"))
	{
		FIND_GROUND_INTERSECTION(&Global_34574, 2.0f, &Var2, &uVar5);
		Var2.f_4 = (StackVal + 1.0f);
		bVar1 = GET_MATERIAL_AT_VECTOR(&Var2);
		PRINTSTRING("Material flags ");
		PRINTINT(bVar1);
		PRINTSTRING(" found at player position: ");
		PRINTVECTOR(Global_34574);
		PRINTNL();
		if (bVar1 <= 0)
		{
			PRINTSTRING("   AIMATERIALFLAG_INVALID");
		}
		else
		{
			while (bVar1 > 0)
			{
				if (bVar1 > 512)
				{
					PRINTSTRING("   AIMATERIALFLAG_WATER");
					bVar1 = (bVar1 - 512);
				}
				else if (bVar1 > 256)
				{
					PRINTSTRING("   AIMATERIALFLAG_RESERVED");
					bVar1 = (bVar1 - 256);
				}
				else if (bVar1 > 128)
				{
					PRINTSTRING("   AIMATERIALFLAG_TRAINTRACKS");
					bVar1 = (bVar1 - 128);
				}
				else if (bVar1 > 64)
				{
					PRINTSTRING("   AIMATERIALFLAG_VEHICLEPATH");
					bVar1 = (bVar1 - 64);
				}
				else if (bVar1 > 32)
				{
					PRINTSTRING("   AIMATERIALFLAG_HORSEPATH");
					bVar1 = (bVar1 - 32);
				}
				else if (bVar1 > 16)
				{
					PRINTSTRING("   AIMATERIALFLAG_PEDPATH");
					bVar1 = (bVar1 - 16);
				}
				else if (bVar1 > 8)
				{
					PRINTSTRING("   AIMATERIALFLAG_GENERICSPAWN");
					bVar1 = (bVar1 - 8);
				}
				else if (bVar1 > 1)
				{
					PRINTSTRING("   AIMATERIALFLAG_TERRAIN");
					bVar1 = (bVar1 - 1);
				}
				else if (bVar1 == 0)
				{
					PRINTSTRING("   AIMATERIALFLAG_ANY");
					bVar1 = 4294967295;
				}
				PRINTNL();
			}
		}
		LOG_ERROR("Printed materials to output");
		return 1;
	}
	return 0;
}

bool Function_220(bool bParam0) //Position: 0x10C9D / 68765
{
	var uVar0;
	struct<5> Var3;
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;
	struct<8> Var17;
	bool bVar25;
	
	if (STRING_CONTAINS_STRING(bParam0, "dropai"))
	{
		bVar16 = GET_CONSOLE_COMMAND_TOKEN(1);
		bVar14 = GET_PLAYER_ACTOR(0);
		GET_POSITION(bVar14, &uVar0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar14), &Var3);
		vVar6 = { 0.0f, 0.0f, -3.0f };
		ROTATE_VECTOR_XZ(StackVal, &vVar6, 0);
		strcpy(&Var17, "ndroppedAI", 32);
		Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_221(&Var17) };
		bVar25 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(bVar25))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		if (STRINGS_ARE_EQUAL(bVar16, "bigfist"))
		{
			iVar15 = 375;
		}
		else
		{
			iVar15 = 397;
		}
		bVar12 = Function_213(StackVal, StackVal, StackVal, bVar25, &Var17, iVar15, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar14));
		if (!IS_ACTOR_VALID(bVar12))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		if (STRINGS_ARE_EQUAL(bVar16, "knife"))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar12);
			GIVE_WEAPON_TO_ACTOR(bVar12, 22, 0f, 1, 1);
			ACTOR_PUT_WEAPON_IN_HAND(bVar12, 22, 1);
			TASK_KILL_CHAR(bVar12, bVar14);
		}
		else if (STRINGS_ARE_EQUAL(bVar16, "bigfist"))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar12);
			TASK_MELEE_ATTACK(bVar12, bVar14, -1.0f);
		}
		else if (STRINGS_ARE_EQUAL(bVar16, "horse"))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar12);
			strcpy(&Var17, "droppedHorse", 32);
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_221(&Var17) };
			bVar13 = Function_213(StackVal, StackVal, StackVal, bVar25, &Var17, 976, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar14));
			ACTOR_MOUNT_ACTOR(bVar12, bVar13);
		}
		else
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar12);
		}
		return 1;
	}
	return 0;
}

struct<32> Function_221(bool bParam0) //Position: 0x10E36 / 69174
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_222("0", &cVar8, ""), 4);
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

struct<32> Function_222(char* cParam0, char* cParam1, char* cParam2) //Position: 0x10EA0 / 69280
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_223(int iParam0) //Position: 0x10EBF / 69311
{
	iParam0 = iParam0;
	return 0;
}

bool Function_224(bool bParam0) //Position: 0x10ECA / 69322
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "unlock"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			if (STRING_CONTAINS_STRING(bVar0, "map"))
			{
				bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
				if (STRING_CONTAINS_STRING(bVar1, "all"))
				{
					iVar2 = 0;
					while (iVar2 <= Global_29008)
					{
						Function_147(iVar2);
						iVar2++;
					}
				}
				else
				{
					iVar2 = 0;
					while (iVar2 <= Global_29008)
					{
						if (STRING_CONTAINS_STRING(&Global_29155[iVar210] + 20, bVar1))
						{
							Function_147(iVar2);
						}
						iVar2++;
					}
				}
			}
		}
		return 1;
	}
	return 0;
}

bool Function_225(bool bParam0) //Position: 0x10F59 / 69465
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (STRING_CONTAINS_STRING(bParam0, "updatestat"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar3 = STRING_TO_INT(bVar0);
			fVar4 = STRING_TO_FLOAT(bVar1);
			if (iVar3 < 4294967295 && iVar3 >= 696)
			{
				if (fVar4 < 0.0f)
				{
					iVar2 = iVar3;
					Function_42(iVar2, fVar4);
				}
				else
				{
					iVar2 = iVar3;
					Function_226(iVar2, FABS(fVar4));
				}
			}
		}
		return 1;
	}
	return 0;
}

int Function_226(int iParam0, float fParam1) //Position: 0x10FCB / 69579
{
	bool bVar0;
	int iVar1;
	
	Function_227(iParam0, fParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("STAT_DECREASE: fDecreaseValue < 0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	iVar1 = Function_46(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + fParam1);
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_43();
	Global_49199[iVar1] = fParam1;
	strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 2;
	return 1;
}

int Function_227(int iParam0, float fParam1, int iParam2) //Position: 0x11157 / 69975
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_DECREASE_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 != 2 && Global_34581[iParam0] >= 0.0f)
	{
		Global_34581[iParam0] = 0.0f;
		return 1;
	}
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_DECREASE_NOW: fDecreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - fParam1);
	Function_59(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_48(iParam0, 0, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

bool Function_228(bool bParam0) //Position: 0x11342 / 70466
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "chartest"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar2 = 0;
			while (iVar2 <= Global_29008)
			{
				if (STRINGS_ARE_EQUAL(&Global_29155[iVar210] + 20, bVar0))
				{
					Global_62481 = iVar2;
				}
				iVar2++;
			}
			Global_62483 = STRING_TO_INT(bVar1);
			if (Global_62481 <= 0)
			{
				Global_62481 = 0;
			}
			if (Global_62483 <= 0)
			{
				Global_62483 = 0;
			}
		}
		else
		{
			Global_62481 = 0;
			Global_62483 = 0;
		}
		Global_62480 = 1;
		return 1;
	}
	return 0;
}

bool Function_229(bool bParam0) //Position: 0x113C8 / 70600
{
	if (STRING_CONTAINS_STRING(bParam0, "regiontest"))
	{
		Global_62479 = 1;
		return 1;
	}
	return 0;
}

bool Function_230(bool bParam0) //Position: 0x113EA / 70634
{
	bool bVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "missiontest"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			Global_62481 = STRING_TO_INT(bVar0);
			Global_62482 = STRING_TO_INT(bVar1);
			if (Global_62481 <= 0)
			{
				Global_62481 = 0;
			}
			if (Global_62482 <= 0)
			{
				Global_62482 = 0;
			}
		}
		else
		{
			Global_62481 = 0;
			Global_62482 = 0;
		}
		Global_62478 = 1;
		return 1;
	}
	return 0;
}

bool Function_231(bool bParam0) //Position: 0x11451 / 70737
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (STRING_CONTAINS_STRING(bParam0, "ppp"))
	{
		iVar0 = GET_NUM_CONSOLE_COMMAND_TOKENS();
		iVar1 = 0;
		PRINTSTRING("Console Print: ");
		iVar1 = 1;
		while (iVar1 < iVar0)
		{
			bVar2 = GET_CONSOLE_COMMAND_TOKEN(iVar1);
			PRINTSTRING(bVar2);
			PRINTSTRING(" ");
			iVar1++;
		}
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() == 2)
		{
			bVar3 = GET_CONSOLE_COMMAND_TOKEN(1);
			RESET_ANALOG_POSITIONS(0, STRING_TO_FLOAT(bVar3));
		}
		return 1;
	}
	return 0;
}

bool Function_232(bool bParam0) //Position: 0x114C4 / 70852
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	
	if (STRING_CONTAINS_STRING(bParam0, "crime"))
	{
		bVar3 = Global_26118;
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			if (STRING_CONTAINS_STRING(bVar0, "new"))
			{
				GET_POSITION(GET_PLAYER_ACTOR(0), &vVar4);
				ITERATE_IN_SPHERE(bVar3, vVar4, 15.0f);
				ITERATE_ON_OBJECT_TYPE(bVar3, 15);
				if (GET_NUM_ITERATOR_MATCHES(bVar3) < 0 && IS_LAYOUTREF_VALID(Global_26314))
				{
					bVar7 = START_OBJECT_ITERATOR(bVar3);
					if (IS_OBJECT_VALID(bVar7))
					{
						Function_233(1, 0, GET_PLAYER_ACTOR(0), bVar7, 0);
						GET_OBJECT_POSITION(bVar7, &vVar4);
						PRINTSTRING(GET_SHORT_SCRIPT_NAME());
						PRINTSTRING(": New Console Crime!");
						PRINTVECTOR(vVar4);
						PRINTNL();
					}
				}
				else if (GET_NUM_ITERATOR_MATCHES(bVar3) == 0)
				{
				}
				else if (!IS_LAYOUTREF_VALID(Global_26314))
				{
				}
			}
			else if (STRING_CONTAINS_STRING(bVar0, "report"))
			{
				bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
				if (IS_ITERATOR_VALID(bVar1))
				{
					ITERATE_EVERYWHERE(bVar1);
					ITERATE_ON_OBJECT_TYPE(bVar1, 31);
					if (GET_NUM_ITERATOR_MATCHES(bVar1) >= 0)
					{
						bVar2 = START_OBJECT_ITERATOR(bVar1);
						while (IS_OBJECT_VALID(bVar2))
						{
							if (!GET_CRIME_WITNESSED(GET_CRIME_FROM_OBJECT(bVar2)) != 3)
							{
								SET_CRIME_WITNESSED(GET_CRIME_FROM_OBJECT(bVar2), 3);
								DESTROY_ITERATOR(bVar1);
								return 1;
							}
							bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
						}
					}
				}
				DESTROY_ITERATOR(bVar1);
			}
			else if (STRING_CONTAINS_STRING(bVar0, "upgrade"))
			{
				GET_POSITION(GET_PLAYER_ACTOR(0), &vVar4);
				ITERATE_IN_SPHERE(bVar3, vVar4, 15.0f);
				ITERATE_ON_OBJECT_TYPE(bVar3, 15);
				if (GET_NUM_ITERATOR_MATCHES(bVar3) < 0 && IS_LAYOUTREF_VALID(Global_26314))
				{
					bVar7 = START_OBJECT_ITERATOR(bVar3);
					if (IS_OBJECT_VALID(bVar7))
					{
						Function_233(2, 0, GET_PLAYER_ACTOR(0), bVar7, 0);
						GET_OBJECT_POSITION(bVar7, &vVar4);
						PRINTSTRING(GET_SHORT_SCRIPT_NAME());
						PRINTSTRING(": New Console Crime!");
						PRINTVECTOR(vVar4);
						PRINTNL();
					}
				}
				else if (GET_NUM_ITERATOR_MATCHES(bVar3) == 0)
				{
				}
				else if (!IS_LAYOUTREF_VALID(Global_26314))
				{
				}
			}
			else if (STRING_CONTAINS_STRING(bVar0, "finish"))
			{
				bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
				if (IS_ITERATOR_VALID(bVar1))
				{
					ITERATE_EVERYWHERE(bVar1);
					ITERATE_ON_OBJECT_TYPE(bVar1, 31);
					if (GET_NUM_ITERATOR_MATCHES(bVar1) >= 0)
					{
						bVar2 = START_OBJECT_ITERATOR(bVar1);
						while (IS_OBJECT_VALID(bVar2))
						{
							if (IS_CRIME_IN_PROGRESS(GET_CRIME_FROM_OBJECT(bVar2)))
							{
								SET_CRIME_IN_PROGRESS(GET_CRIME_FROM_OBJECT(bVar2), 0);
								DESTROY_ITERATOR(bVar1);
								return 1;
							}
							bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
						}
					}
				}
				DESTROY_ITERATOR(bVar1);
			}
		}
		return 1;
	}
	return 0;
}

var Function_233(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1173D / 71485
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_241(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_240(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(bParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(bParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_236(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(uVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(uVar3, iParam1);
		SET_CRIME_VICTIM(uVar3, bParam3);
		SET_CRIME_CRIMINAL(uVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(uVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(uVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(uVar3, vVar0);
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_49(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(uVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(uVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(uVar3, 3);
			Function_234();
		}
		SET_CRIME_FACTION(StackVal, uVar3);
		SET_CRIME_TALLIED(uVar3, 0);
		SET_CRIME_COUNTER(uVar3, 1);
		SET_CRIME_WORLD_REGION(uVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(uVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(uVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(uVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return uVar3;
}

void Function_234() //Position: 0x119CD / 72141
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_235(bVar0, uVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(uVar3))
		{
			SET_CRIME_WITNESSED(uVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_235(bool bParam0, bool bParam1) //Position: 0x11A30 / 72240
{
	ITERATE_EVERYWHERE(bParam0);
	ITERATE_ON_OBJECT_TYPE(bParam0, 31);
	if (!bParam1 != "")
	{
		ITERATE_IN_SET(bParam0, bParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(bParam0, GET_ITERATOR_PARENT(bParam0));
	}
	return;
}

bool Function_236(bool bParam0) //Position: 0x11A5F / 72287
{
	if (Function_239(256))
	{
		return 0;
	}
	if (Function_239(262144))
	{
		return 0;
	}
	if (Function_238())
	{
		return 0;
	}
	if (!Function_239(1))
	{
		return 0;
	}
	if (!Function_239(4096))
	{
		return 0;
	}
	if (bParam0 && Function_237(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_239(2048))
	{
		return 0;
	}
	if (Function_34() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_237(int iParam0) //Position: 0x11AD5 / 72405
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_238() //Position: 0x11AE6 / 72422
{
	if (Global_30619 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_239(int iParam0) //Position: 0x11AFF / 72447
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_240(int iParam0) //Position: 0x11B1D / 72477
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_241(int iParam0) //Position: 0x11B33 / 72499
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_242(bool bParam0) //Position: 0x11B48 / 72520
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "setweather"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar2 = 1;
			if (STRINGS_ARE_EQUAL(bVar0, "fair"))
			{
				iVar2 = 1;
			}
			else if (STRINGS_ARE_EQUAL(bVar0, "rainy"))
			{
				iVar2 = 3;
			}
			else if (STRINGS_ARE_EQUAL(bVar0, "stormy"))
			{
				iVar2 = 4;
			}
			else if (STRINGS_ARE_EQUAL(bVar0, "snowy"))
			{
				iVar2 = 5;
			}
			else if (STRINGS_ARE_EQUAL(bVar0, "clear"))
			{
				iVar2 = 0;
			}
			Function_243(iVar2, FLOOR(STRING_TO_FLOAT(bVar1)), 0, 0, 0);
		}
		return 1;
	}
	return 0;
}

void Function_243(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x11BFD / 72701
{
	int iVar0;
	bool bVar1;
	
	Function_155(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_244(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_153(StackVal, bVar1, bParam4);
		}
	}
}

void Function_244(int iParam0, bool bParam1) //Position: 0x11C6F / 72815
{
	bool bVar0;
	
	bVar0 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Function_155(iParam0);
	Function_406(bVar0);
	PRINTNL();
	Function_153(iParam0, bVar0, bParam1);
	return;
}

bool Function_245(bool bParam0) //Position: 0x11C94 / 72852
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "setwind"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			bVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			SET_WIND(STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2));
		}
		return 1;
	}
	if (STRING_CONTAINS_STRING(bParam0, "autowind"))
	{
		SET_AUTO_WIND();
		return 1;
	}
	return 0;
}

bool Function_246(bool bParam0) //Position: 0x11CF8 / 72952
{
	if (STRING_CONTAINS_STRING(bParam0, "invert_y"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(bParam0, "false"))
		{
			SET_LOOKSTICK_INVERT_Y(0);
		}
		else
		{
			SET_LOOKSTICK_INVERT_Y(1);
		}
		return 1;
	}
	return 0;
}

bool Function_247(bool bParam0) //Position: 0x11D35 / 73013
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	vector3 vVar5;
	struct<8> Var8;
	
	if (STRING_CONTAINS_STRING(bParam0, "gps"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			bVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			vVar5 = { STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2) };
			Function_249(1.0f, 0.0f, 1.0f);
			Function_277(STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2));
		}
		else if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			bVar3 = GET_CONSOLE_COMMAND_TOKEN(1);
			iVar4 = Function_248(bVar3);
			if (Function_342(iVar4))
			{
				GET_OBJECT_POSITION(StackVal, &vVar5);
				Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_199(iVar4) };
				Function_277(StackVal, StackVal, vVar5);
			}
		}
		return 1;
	}
	return 0;
}

var Function_248(bool bParam0) //Position: 0x11DD2 / 73170
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	while (iVar0 < (Global_29008 - 1))
	{
		if (STRING_CONTAINS_STRING(&Global_29155[iVar010] + 20, bParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	bVar1 = FIND_NAMED_LAYOUT("regions_layout");
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		bVar2 = CREATE_OBJECT_ITERATOR(bVar1);
		if (IS_ITERATOR_VALID(bVar2))
		{
			bVar3 = START_OBJECT_ITERATOR(bVar2);
			while (IS_OBJECT_VALID(bVar3))
			{
				if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(bVar3), bParam0))
				{
					iVar0 = 0;
					while (iVar0 < (Global_29008 - 1))
					{
						if (StackVal == GET_VOLUME_FROM_OBJECT(bVar3))
						{
							return iVar0;
						}
						iVar0++;
					}
				}
				bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
			}
			DESTROY_ITERATOR(bVar2);
		}
	}
	return 4294967295;
}

void Function_249(var uParam0, var uParam1, int iParam2) //Position: 0x11E8B / 73355
{
	Global_28185.f_60 = 5;
	Global_28185.f_64 = uParam0;
	Global_28185.f_68 = uParam1;
	Global_28185.f_72 = iParam2;
	return;
}

bool Function_250(bool bParam0) //Position: 0x11EAC / 73388
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "teleport"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			bVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			Function_251(STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2), "TELEPORTING...", "", 1, 1);
		}
		return 1;
	}
	return 0;
}

void Function_251(vector3 vParam0, char* cParam3, char* cParam4, var uParam5, var uParam6) //Position: 0x11F0C / 73484
{
	Global_13112.f_72 = 4294967295;
	Global_13112 = { StackVal, StackVal, vParam0 };
	strcpy(&Global_13112 + 24, cParam3, 24);
	strcpy(&Global_13112 + 48, cParam4, 24);
	Global_13112.f_76 = uParam5;
	Global_13112.f_80 = uParam6;
}

bool Function_252(bool bParam0) //Position: 0x11F43 / 73539
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "nvteleport"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			iVar1 = Function_248(bVar0);
			if (Function_342(iVar1))
			{
				memcpy(&uVar2, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_199(iVar1), 4);
				Function_253(iVar1, "Teleporting to %s...", &uVar2, 1, 1);
			}
		}
		return 1;
	}
	return 0;
}

void Function_253(var uParam0, char* cParam1, char* cParam2, var uParam3, var uParam4) //Position: 0x11FAA / 73642
{
	Global_13112.f_72 = uParam0;
	Global_13112 = { 0.0f, 0.0f, 0.0f };
	strcpy(&Global_13112 + 24, cParam1, 24);
	strcpy(&Global_13112 + 48, cParam2, 24);
	Global_13112.f_76 = uParam3;
	Global_13112.f_80 = uParam4;
}

bool Function_254(bool bParam0) //Position: 0x11FE1 / 73697
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "print"))
	{
		iVar1 = GET_NUM_CONSOLE_COMMAND_TOKENS();
		iVar2 = 0;
		PRINTSTRING("Console Print: ");
		iVar2 = 1;
		while (iVar2 < iVar1)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(iVar2);
			PRINTSTRING(bVar0);
			PRINTSTRING(" ");
			iVar2++;
		}
		PRINTNL();
		return 1;
	}
	return 0;
}

bool Function_255(bool bParam0) //Position: 0x12040 / 73792
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "toggle"))
	{
		bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			if (STRINGS_ARE_EQUAL(bVar0, "channel"))
			{
				return Function_258();
			}
			if (STRINGS_ARE_EQUAL(bVar0, "flag"))
			{
				return Function_256();
			}
			return 0;
		}
	}
	return 0;
}

int Function_256() //Position: 0x12099 / 73881
{
	bool bVar0;
	
	bVar0 = GET_CONSOLE_COMMAND_TOKEN(2);
	if (STRINGS_ARE_EQUAL(bVar0, "ambient"))
	{
		if (Function_257(4))
		{
			Function_435(4);
		}
		else
		{
			Function_362(4);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "missions"))
	{
		if (Global_3374 == 1)
		{
			Global_3374 = 0;
		}
		else
		{
			Global_3374 = 1;
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "ntutorials"))
	{
		if (Global_3375 == 1)
		{
			Global_3375 = 0;
		}
		else
		{
			Global_3375 = 1;
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "ambientpop"))
	{
		if (Function_257(1))
		{
			Function_435(1);
		}
		else
		{
			Function_362(1);
		}
		ENABLE_AMBIENT_SPAWNING(Function_257(1));
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "locname"))
	{
		if (Function_257(32))
		{
			Function_435(32);
		}
		else
		{
			Function_362(32);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "clock"))
	{
		if (Function_257(64))
		{
			Function_435(64);
		}
		else
		{
			Function_362(64);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "adebug"))
	{
		if (Function_257(128))
		{
			Function_435(128);
		}
		else
		{
			Function_362(128);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "law"))
	{
		if (!Function_239(256))
		{
			Function_358(256);
		}
		else
		{
			Function_359(256);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_257(int iParam0) //Position: 0x121F6 / 74230
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_258() //Position: 0x12212 / 74258
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
	if (STRINGS_ARE_EQUAL(bVar1, "ncallstack"))
	{
		iVar0 = 0;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "global"))
	{
		iVar0 = 7;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "ambient"))
	{
		iVar0 = 1;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "regional"))
	{
		iVar0 = 3;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "mission"))
	{
		iVar0 = 2;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "launcher"))
	{
		iVar0 = 5;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "gringo"))
	{
		iVar0 = 8;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "layout"))
	{
		iVar0 = 9;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "tutorial"))
	{
		iVar0 = 6;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "ncompanion"))
	{
		iVar0 = 10;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "law"))
	{
		iVar0 = 11;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "traffic"))
	{
		iVar0 = 12;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "weather"))
	{
		iVar0 = 14;
	}
	else
	{
		return 0;
	}
	if (Global_30842[iVar0])
	{
		Global_30842[iVar0] = 0;
	}
	else
	{
		Global_30842[iVar0] = 1;
	}
	return 1;
}

bool Function_259(bool bParam0) //Position: 0x1237F / 74623
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar53;
	vector3 vVar56;
	bool bVar59;
	
	if (STRING_CONTAINS_STRING(bParam0, "stamb"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		*(&iVar2 + 64 + 20) = 1;
		while (iVar1 < 6)
		{
			bVar0 = Function_261(iVar1, bParam0);
			if (DOES_SCRIPT_EXIST(bVar0))
			{
				vVar56 = { 0.0f, 0.0f, -95.0f };
				bVar59 = GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0));
				GET_OBJECT_RELATIVE_POSITION(bVar59, vVar56, &vVar53);
				if (!Function_260(&vVar53, 50.0f, &iVar2 + 8, 4294967295))
				{
					*(&iVar2 + 8) = { StackVal, StackVal, vVar53 };
				}
				*(&iVar2 + 20) = { 0.0f, 0.0f, 0.0f };
				LAUNCH_NEW_SCRIPT_WITH_ARGS(bVar0, &iVar2, 51, 0);
				iVar1 = 6;
			}
			else if (iVar1 == 6)
			{
				LOG_ERROR("ScriptConsole: The script could not be found. Try to specify a path.");
				PRINTSTRING("ScriptConsole: This script file could not be found - ");
				PRINTSTRING(bVar0);
				PRINTNL();
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_260(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x124B5 / 74933
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
	if (FIND_GROUND_INTERSECTION(uParam0, fParam1, uParam2, &uVar0))
	{
		if (!Function_142(StackVal, StackVal, *iParam2))
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
			if (!Function_142(StackVal, StackVal, *iParam2))
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

var Function_261(char* cParam0, bool bParam1) //Position: 0x125E7 / 75239
{
	char* cVar0[64];
	
	switch (cParam0)
	{
		case 0x00000000:
			strcpy(&cVar0, "AMBIENT", 64);
			break;
	}
	FILE_START_PATH(&cVar0);
	FILE_ADD_TO_PATH(bParam1);
	FILE_END_PATH();
	return FILE_GET_CURRENT_PATH();
}

bool Function_262(bool bParam0) //Position: 0x1261B / 75291
{
	bool bVar0;
	int iVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "end"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			bVar0 = Function_263(iVar1, bParam0);
			if (UNK_0x4417C9F2(bVar0))
			{
				Global_30923 = 1;
				iVar1 = 6;
			}
			else if (iVar1 == 6)
			{
				LOG_ERROR("ScriptConsole: The script could not be found. Try to specify a path.");
				PRINTSTRING("ScriptConsole: This script file could not be found - ");
				PRINTSTRING(bVar0);
				PRINTNL();
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

var Function_263(char* cParam0, bool bParam1) //Position: 0x126F5 / 75509
{
	char* cVar0[64];
	
	switch (cParam0)
	{
		case 0x00000000:
			strcpy(&cVar0, "Frontier/Missions", 64);
			break;
		
		case 0x00000001:
			strcpy(&cVar0, "Frontier/Mini_Games", 64);
			break;
		
		case 0x00000002:
			strcpy(&cVar0, "Mexico/Missions", 64);
			break;
		
		case 0x00000003:
			strcpy(&cVar0, "Mexico/Mini_Games", 64);
			break;
		
		case 0x00000004:
			strcpy(&cVar0, "North/Missions", 64);
			break;
		
		case 0x00000005:
			strcpy(&cVar0, "North/Mini_Games", 64);
			break;
		
		case 0x00000006:
			strcpy(&cVar0, "systemtest", 64);
			break;
		
		default:
			strcpy(&cVar0, "systemtest", 64);
			break;
	}
	FILE_START_PATH(&cVar0);
	FILE_ADD_TO_PATH(bParam1);
	FILE_ADD_TO_PATH(bParam1);
	FILE_END_PATH();
	return FILE_GET_CURRENT_PATH();
}

bool Function_264(bool bParam0) //Position: 0x12807 / 75783
{
	bool bVar0;
	int iVar1;
	char* cVar2[64];
	
	if (STRING_CONTAINS_STRING(bParam0, "start"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			bVar0 = Function_263(iVar1, bParam0);
			if (DOES_SCRIPT_EXIST(bVar0))
			{
				strcpy(&cVar2, "$/content/", 64);
				stradd(&cVar2, bVar0, 64);
				Global_30922 = GET_ASSET_ID(&cVar2, 4);
				if (Global_30922 == "")
				{
					Global_30922 = 4294967295;
					LOG_ERROR("Attempting to start a mission script that exists, but does not have a valid asset_ID. Please add the script to init/rdr2init_script.sc");
				}
				iVar1 = 6;
			}
			else if (iVar1 == 6)
			{
				LOG_ERROR("ScriptConsole: The script could not be found. Try to specify a path.");
				PRINTSTRING("ScriptConsole: This script file could not be found - ");
				PRINTSTRING(bVar0);
				PRINTNL();
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_265(bool bParam0) //Position: 0x12997 / 76183
{
	bool bVar0;
	int iVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "nterminate"))
	{
		if (STRING_CONTAINS_STRING(bParam0, "\\") || STRING_CONTAINS_STRING(bParam0, "/"))
		{
			if (UNK_0x4417C9F2(bParam0))
			{
				UNK_0x05719022(bParam0);
			}
			else
			{
				LOG_ERROR("ScriptConsole: This script is not running.");
				PRINTSTRING("ScriptConsole: This script is not running - ");
				PRINTSTRING(bParam0);
				PRINTNL();
				return 1;
			}
		}
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(bParam0, ".sc"))
		{
			LOG_ERROR("ScriptConsole: If terminating a mission, please do not specify .sc at the end of the script name.");
		}
		else
		{
			while (iVar1 < 6)
			{
				bVar0 = Function_263(iVar1, bParam0);
				if (UNK_0x4417C9F2(bVar0))
				{
					UNK_0x05719022(bVar0);
					iVar1 = 6;
				}
				else if (iVar1 == 6)
				{
					LOG_ERROR("ScriptConsole: The script is not running. Try to specify a path.");
				}
				iVar1++;
			}
		}
		return 1;
	}
	return 0;
}

bool Function_266(bool bParam0) //Position: 0x12B3E / 76606
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (STRING_CONTAINS_STRING(bParam0, "run"))
	{
		if (STRING_CONTAINS_STRING(bParam0, "netrun"))
		{
			iVar1 = 1;
		}
		if (STRING_CONTAINS_STRING(bParam0, "\\") || STRING_CONTAINS_STRING(bParam0, "/"))
		{
			bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
			if (DOES_SCRIPT_EXIST(bParam0))
			{
				if (iVar1 == 1)
				{
					NET_START_NEW_SCRIPT(bParam0, 0);
				}
				else
				{
					LAUNCH_NEW_SCRIPT(bParam0, 0);
				}
			}
			else
			{
				LOG_ERROR("ScriptConsole: This script file could not be found. Please check the path you typed.");
				PRINTSTRING("ScriptConsole: This script file could not be found - ");
				PRINTSTRING(bParam0);
				PRINTNL();
				return 1;
			}
		}
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(bParam0, ".sc"))
		{
			LOG_ERROR("ScriptConsole: If running a mission, please do not specify .sc at the end of the script name.");
		}
		else
		{
			FILE_START_PATH("systemtest/GeneralTest");
			FILE_ADD_TO_PATH(bParam0);
			FILE_END_PATH();
			if (DOES_SCRIPT_EXIST(FILE_GET_CURRENT_PATH()))
			{
				if (iVar1 == 1)
				{
					NET_START_NEW_SCRIPT(FILE_GET_CURRENT_PATH(), 0);
				}
				else
				{
					LAUNCH_NEW_SCRIPT(FILE_GET_CURRENT_PATH(), 0);
				}
				return 1;
			}
			while (iVar2 < 6)
			{
				bVar0 = Function_263(iVar2, bParam0);
				if (DOES_SCRIPT_EXIST(bVar0))
				{
					if (iVar1 == 1)
					{
						NET_START_NEW_SCRIPT(bVar0, 0);
					}
					else
					{
						LAUNCH_NEW_SCRIPT(bVar0, 0);
					}
					iVar2 = 6;
				}
				else if (iVar2 == 6)
				{
					LOG_ERROR("ScriptConsole: The script could not be found. Try to specify a path.");
					PRINTSTRING("ScriptConsole: This script file could not be found - ");
					PRINTSTRING(bVar0);
					PRINTNL();
				}
				iVar2++;
			}
		}
		return 1;
	}
	return 0;
}

bool Function_267(bool bParam0) //Position: 0x12DDE / 77278
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	
	if (STRING_CONTAINS_STRING(bParam0, "switchentity"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			uVar0 = GET_CONSOLE_COMMAND_TOKEN(2);
			uVar1 = GET_ACTOR_ENUM_FROM_STRING(uVar0);
			if (Function_268(uVar1))
			{
				bVar2 = 4294967295;
				if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
				{
					bVar3 = GET_CONSOLE_COMMAND_TOKEN(3);
					bVar2 = STRING_TO_INT(bVar3);
				}
				else
				{
					bVar2 = false;
				}
				if (bVar2 > GET_ACTOR_ENUM_VARIATION_COUNT(uVar1))
				{
					PRINTSTRING("variation ");
					PRINTINT(bVar2);
					PRINTSTRING("is out of range (");
					PRINTINT(GET_ACTOR_ENUM_VARIATION_COUNT(uVar1));
					PRINTSTRING(")");
					PRINTNL();
					bVar2 = 4294967295;
				}
				else
				{
					SWITCH_PLAYER_TO_ENUM(uVar1, bVar2);
				}
			}
		}
		return 1;
	}
	return 0;
}

bool Function_268(int iParam0) //Position: 0x12E8C / 77452
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

bool Function_269(bool bParam0) //Position: 0x12EA3 / 77475
{
	if (STRING_CONTAINS_STRING(bParam0, "givecontrolback"))
	{
		SET_PLAYER_CONTROL(0, 1, 1, 1);
		return 1;
	}
	return 0;
}

int Function_270() //Position: 0x12ECD / 77517
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	if (TIME_IS_IN_RANGE(bVar0, Global_63400, Global_63401))
	{
		return 1;
	}
	if (TIME_IS_IN_RANGE(bVar0, Global_63401, Global_63402))
	{
		return 2;
	}
	if (TIME_IS_IN_RANGE(bVar0, Global_63402, Global_63403))
	{
		return 4;
	}
	if (TIME_IS_IN_RANGE(bVar0, Global_63403, Global_63404))
	{
		return 8;
	}
	if (TIME_IS_IN_RANGE(bVar0, Global_63404, Global_63405))
	{
		return 16;
	}
	if (TIME_IS_IN_RANGE(bVar0, Global_63405, Global_63400))
	{
		return 32;
	}
	return 32;
}

void Function_271() //Position: 0x12F4C / 77644
{
	Function_358(512);
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

int Function_272(int iParam0, int iParam1) //Position: 0x12F88 / 77704
{
	return Global_16474[iParam18][iParam0];
}

bool Function_273(int iParam0) //Position: 0x12F99 / 77721
{
	bool bVar0;
	float fVar1;
	
	fVar1 = GET_PROFILE_TIME();
	bVar0 = *iParam0;
	while (bVar0 < (Global_13172 - 1))
	{
		if (Function_275(bVar0) == 4294967295 && Function_274(Function_157(bVar0)))
		{
			Global_16474[Function_275(bVar0)8][Function_157(bVar0)]++;
		}
		if ((GET_PROFILE_TIME() - fVar1) < 300.0f)
		{
			*iParam0 = bVar0;
			return 0;
		}
		bVar0++;
	}
	Function_86();
	return 1;
}

bool Function_274(int iParam0) //Position: 0x1300D / 77837
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

int Function_275(bool bParam0) //Position: 0x13022 / 77858
{
	if (!Function_13(bParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_276() //Position: 0x1303C / 77884
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (5 - 1))
	{
		iVar0 = 0;
		while (iVar0 < (7 - 1))
		{
			Global_16474[iVar18][iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	return;
}

void Function_277(vector3 vParam0) //Position: 0x1307C / 77948
{
	*(&Global_28210 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28210 + 36) = { StackVal, StackVal, vParam0 };
	Global_28210 = 1;
	Global_28210.f_4 = 0;
	Global_28210.f_60 = 3;
	Global_28210.f_16 = 393264;
	if (!IS_OBJECTSET_VALID(Global_28210.f_12))
	{
		Global_28210.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "UserGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28210.f_12) >= 0)
	{
		Function_278(Global_28210.f_12);
		CLEAN_OBJECTSET(Global_28210.f_12);
	}
	Global_28210.f_92 = 1;
	Global_28210.f_96 = 1;
	return;
}

void Function_278(bool bParam0) //Position: 0x13103 / 78083
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

bool Function_279(vector3 vParam0, vector3 vParam3) //Position: 0x13143 / 78147
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_280(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x13170 / 78192
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_84(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

void Function_281(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x131EB / 78315
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_283(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_282(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_282(char* cParam0, int iParam1) //Position: 0x13257 / 78423
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

bool Function_283(bool bParam0, var uParam1, int iParam2) //Position: 0x1328E / 78478
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
		if (Function_285(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_284(uVar0))
		{
			case 0x00000002:
				if (!Function_289(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_284(char* cParam0) //Position: 0x13306 / 78598
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

int Function_285(int iParam0) //Position: 0x133A7 / 78759
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_432(&iVar1, 2147483648);
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

bool Function_286(int iParam0) //Position: 0x133E4 / 78820
{
	var uVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((iParam0 != Global_30707[2] || iParam0 != Global_30707[1]) || iParam0 != Global_30679[1])
	{
		return 0;
	}
	uVar0 = Global_29008[iParam0];
	return (((Function_433(uVar0, 0x1000000) || Function_433(uVar0, 0x2000000)) || Function_433(uVar0, 0x4000000)) || Function_287(iParam0));
}

var Function_287(int iParam0) //Position: 0x13457 / 78935
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_29008[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

var Function_288(int iParam0) //Position: 0x13474 / 78964
{
	if (iParam0 == 1)
	{
		return Global_30640[0];
	}
	if (iParam0 == 2)
	{
		return Global_30640[2];
	}
	if (iParam0 == 3)
	{
		return Global_30640[1];
	}
	if (iParam0 == 4)
	{
		return Global_30658[1];
	}
	if (iParam0 == 5)
	{
		return Global_30658[3];
	}
	if (iParam0 == 8)
	{
		return Global_30668[0];
	}
	if (iParam0 == 9)
	{
		return Global_30668[1];
	}
	if (iParam0 == 11)
	{
		return Global_30679[0];
	}
	if (iParam0 == 12)
	{
		return Global_30685[0];
	}
	if (iParam0 == 13)
	{
		return Global_30685[1];
	}
	if (iParam0 == 14)
	{
		return Global_30685[2];
	}
	if (iParam0 == 15)
	{
		return Global_30693[0];
	}
	if (iParam0 == 16)
	{
		return Global_30693[1];
	}
	if (iParam0 == 17)
	{
		return Global_30693[2];
	}
	if (iParam0 == 25)
	{
		return Global_30707[2];
	}
	if (iParam0 == 18)
	{
		return Global_30707[3];
	}
	if (iParam0 == 19)
	{
		return Global_30707[0];
	}
	if (iParam0 == 21)
	{
		return Global_30717[0];
	}
	if (iParam0 == 22)
	{
		return Global_30723[2];
	}
	if (iParam0 == 23)
	{
		return Global_30723[1];
	}
	if (iParam0 == 24)
	{
		return Global_30723[0];
	}
	if (iParam0 == 26)
	{
		return Global_30679[1];
	}
	if (iParam0 == 27)
	{
		return Global_30707[1];
	}
	return 4294967295;
}

bool Function_289(int iParam0, int iParam1) //Position: 0x135FA / 79354
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_290() //Position: 0x1360D / 79373
{
	int iVar0;
	
	if (Global_3365 && !Global_34165.f_44)
	{
		PRINTSTRING("Current time is ");
		Function_406(GET_TIME_OF_DAY());
		PRINTNL();
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (iVar0 != 0 || iVar0 != 1)
			{
				PRINTSTRING("Current pursuit time for faction is ");
				Function_406((*&Global_26316 + 88)[iVar0]);
				PRINTNL();
				if (!Function_292((*&Global_26316 + 88)[iVar0]) && !Global_3364)
				{
					if (IS_EARLIER_THAN((*&Global_26316 + 88)[iVar0], false))
					{
						Function_291(iVar0, 0, 0, Function_311(RAND_INT_RANGE(30, 75)), 0);
					}
				}
			}
			iVar0++;
		}
	}
	return;
}

void Function_291(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x136CC / 79564
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, iParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_292((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

bool Function_292(bool bParam0) //Position: 0x13712 / 79634
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

void Function_293(bool bParam0) //Position: 0x13737 / 79671
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_16537)
	{
		if (Global_16537[iVar021].f_40 == 4)
		{
			Global_16537[iVar021].f_40 = 1;
			if (bParam0)
			{
				DECOR_SET_BOOL(Global_34573, "OnLoad_ForceSpawnPlayerHorse", true);
			}
		}
		iVar0++;
	}
	return;
}

void Function_294(bool bParam0) //Position: 0x13794 / 79764
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_295();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_161();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_432(&Global_63095, 1);
		Function_432(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_295() //Position: 0x137E5 / 79845
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_77())
	{
		Function_299(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_299(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_296(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_296(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_142(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0.5f);
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

vector3 Function_296(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x138A0 / 80032
{
	int iVar0;
	
	iVar0 = Function_297(uParam2, uParam3);
	if (Function_114(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_23(&Global_63095, 1);
			Function_432(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_23(&Global_63095, 2);
			Function_432(&Global_63095, 1);
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
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_23(&Global_63095, 2);
		Function_432(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_434();
	return StackVal, StackVal, Function_434();
}

int Function_297(bool bParam0, bool bParam1) //Position: 0x13987 / 80263
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
				fVar2 = Function_298(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_298(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_114(bVar0) && !bParam1)
	{
		bVar0 = Function_297(bParam0, 1);
	}
	return bVar0;
}

float Function_298(vector3 vParam0, vector3 vParam3) //Position: 0x13A4E / 80462
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_299(var uParam0, int iParam1) //Position: 0x13A6B / 80491
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	
	*uParam0 = *uParam0;
	fVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_301(Global_34573, &vVar4);
	if (!Function_300(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -130.87f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.09f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 206.26f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 0.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 106.17f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 343.64f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 165.38f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 0.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -97.3f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -6.71f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -180.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 22.55f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -104.45f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 270.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 59.3f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 20.74f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 94.65f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_300(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -39.9f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	fVar10 = VDIST(vVar4, vVar7);
	if (fVar10 > fVar0)
	{
		fVar0 = fVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_23(&Global_63095, 2);
	Function_432(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_142(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_300(int iParam0) //Position: 0x14291 / 82577
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_433(uVar0, 0x1000000) || Function_433(uVar0, 0x2000000)) || Function_433(uVar0, 0x4000000)) || !Function_433(uVar0, 0x10000000));
}

void Function_301(bool bParam0, int iParam1) //Position: 0x142CC / 82636
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_302() //Position: 0x142D9 / 82649
{
	if (UNK_0xD3FE15FB())
	{
		Global_62478 = 1;
		if (UNK_0xD34F7B3A() < 4294967295 && UNK_0x913A5CB6() < 4294967295)
		{
			Global_62481 = UNK_0x913A5CB6();
			Global_62482 = UNK_0xD34F7B3A();
		}
		else
		{
			Global_62481 = 4294967294;
			Global_62482 = 4294967295;
		}
	}
	return;
}

void Function_303(int iParam0) //Position: 0x14310 / 82704
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_311(200)), 0);
	return;
}

void Function_304(int iParam0) //Position: 0x14331 / 82737
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, iParam0, 0);
	return;
}

void Function_305(int iParam0) //Position: 0x1434C / 82764
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_311(105)), 0);
	return;
}

void Function_306(int iParam0) //Position: 0x1436D / 82797
{
	Global_12976.f_16 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 16, 0, 0, (iParam0 + Function_311(90)), 0);
	return;
}

void Function_307(int iParam0) //Position: 0x1438E / 82830
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_311(90)), 0);
	return;
}

void Function_308(int iParam0) //Position: 0x143AF / 82863
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_406(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_406(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, 0, iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_406(Global_12976.f_24);
	PRINTNL();
	Function_307(iParam0);
	return;
}

void Function_309(int iParam0) //Position: 0x1444B / 83019
{
	Global_12976 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976, 0, 0, (iParam0 + Function_311(90)), 0);
	return;
}

void Function_310(int iParam0) //Position: 0x14468 / 83048
{
	Global_12976.f_8 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 8, 0, 0, (iParam0 + Function_311(90)), 0);
	return;
}

int Function_311(int iParam0) //Position: 0x14489 / 83081
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

int Function_312(int iParam0) //Position: 0x1449F / 83103
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

void Function_313(bool bParam0) //Position: 0x144E0 / 83168
{
	bool bVar0;
	bool bVar1;
	char* cVar2[64];
	char* cVar18[24];
	char* cVar24[24];
	char* cVar30[24];
	char* cVar36[24];
	
	if (Function_368(1, 0))
	{
		Function_320("ZOMBIE_STORY_1_OBJ");
		if (!Function_17(2))
		{
			bVar0 = "ZOMBIE_STORY_1_SHORT";
		}
	}
	if (Function_17(4) && !Function_318(0))
	{
		bVar0 = "ZOMBIE_STORY_1a_SHORT";
	}
	if (Function_17(5))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_316(), "ZOMBIE_STORY_1_OBJ", 4, 0);
		Function_320("ZOMBIE_STORY_2Nigel_OBJ");
		Function_320("ZOMBIE_STORY_2Seth_OBJ");
		if (!Function_17(8) && !Function_17(6))
		{
			bVar0 = "ZOMBIE_STORY_2_SHORT";
		}
	}
	if (Function_17(6))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_316(), "ZOMBIE_STORY_2Seth_OBJ", 4, 0);
		if (!Function_17(8))
		{
			bVar0 = "ZOMBIE_STORY_2Nigel_SHORT";
		}
	}
	if (Function_17(8))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_316(), "ZOMBIE_STORY_2Nigel_OBJ", 4, 0);
		if (!Function_17(6))
		{
			bVar0 = "ZOMBIE_STORY_2Seth_SHORT";
		}
	}
	if (!Function_315(&Global_3422[240] + 128, 2) || ((((((Function_17(14) && Function_17(18)) && Function_17(37)) && Function_17(7)) && Function_17(11)) && Function_17(5)) && Function_17(21)))
	{
		Function_320("ZOMBIE_STORY_3_OBJ");
		if (!Function_368(2, 0))
		{
			bVar0 = "ZOMBIE_STORY_3_SHORT";
		}
	}
	if (Function_368(2, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_316(), "ZOMBIE_STORY_3_OBJ", 4, 0);
		Function_320("ZOMBIE_STORY_4_OBJ");
		if (!Function_17(24))
		{
			bVar0 = "ZOMBIE_STORY_4_SHORT";
		}
	}
	if (!Function_315(&Global_3422[340] + 128, 2) || ((Function_17(27) && Function_17(1)) && Function_17(23)))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_316(), "ZOMBIE_STORY_4_OBJ", 4, 0);
		Function_320("ZOMBIE_STORY_5_OBJ");
		if (!Function_368(3, 0))
		{
			bVar0 = "ZOMBIE_STORY_5_SHORT";
		}
	}
	if (Function_368(3, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_316(), "ZOMBIE_STORY_5_OBJ", 4, 0);
	}
	if (!Function_17(5))
	{
		CLEAR_JOURNAL_ENTRY(Global_63541[255].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[455].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[355].f_140);
		bVar1 = false;
		if (Function_17(2))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_63541[255] + 4);
			PRINTNL();
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[255].f_140, "blackwater1_OBJ", 0, 3, !bVar1);
			if (Function_17(4))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[455].f_140, "blackwater1_OBJ", 4, 0);
			}
		}
		if (Function_17(4))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_63541[455] + 4);
			PRINTNL();
			strcpy(&cVar2, "Blackwater graveyard deed is ", 64);
			stradd(&cVar2, I2STR(Function_72(Global_30734)), 64);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[455].f_140, "blackwater3_OBJ", 0, 3, !bVar1);
			if (Function_72(Global_30734) >= 0)
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[455].f_140, "blackwater3_OBJ", 4, 0);
			}
			if (Function_72(Global_30734) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "GY_RETURN_BLK", 0, 3, !bVar1);
				if (Function_312(658) >= 0)
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "GY_RETURN_BLK", 4, 0);
				}
			}
			if (Function_312(658) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 0, 3, !bVar1);
				if (Function_17(3))
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 4, 0);
				}
				else
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 3, 0);
				}
			}
			if (Function_17(3))
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "blackwater2_OBJ", 0, 3, !bVar1);
			}
		}
	}
	if (!Function_17(7))
	{
		CLEAR_JOURNAL_ENTRY(Global_63541[655].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[755].f_140);
		if (Function_17(6))
		{
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[655].f_140, "nseth1_OBJ", 0, 3, false);
		}
		if (((Function_17(6) && Function_72(Global_30735) < 0) && Function_72(Global_30737) < 0) && Function_72(Global_30738) < 0)
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[655].f_140, "nseth1_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[755].f_140, "Seth1_OBJ_ReturnToSeth", 0, 3, false);
		}
	}
	if (!Function_17(11))
	{
		if (Function_17(8))
		{
			CLEAR_JOURNAL_ENTRY(Global_63541[855].f_140);
			strcpy(&cVar18, "dyn_sage", 24);
			strcpy(&cVar24, "dyn_snowdrop", 24);
			strcpy(&cVar30, INT_TO_STRING((5 - Function_312(491))), 24);
			stradd(&cVar30, " ", 24);
			strcpy(&cVar36, INT_TO_STRING((5 - Function_312(497))), 24);
			stradd(&cVar36, " ", 24);
			UI_SET_STRING(&cVar18, &cVar30);
			UI_SET_STRING(&cVar24, &cVar36);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "merchant1_OBJ", 0, 3, false);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "Merchant_2_MoreSage", 0, 3, false);
			if (Function_312(491) > 5)
			{
				strcpy(&cVar30, "", 24);
				UI_SET_STRING(&cVar18, &cVar30);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "Merchant_2_MoreSage", 4, 0);
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "Merchant_2_MoreSnowdrop", 0, 3, false);
			if (Function_312(497) > 5)
			{
				strcpy(&cVar36, "", 24);
				UI_SET_STRING(&cVar24, &cVar36);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "Merchant_2_MoreSnowdrop", 4, 0);
			}
			if (Function_312(491) <= 5 && Function_312(497) <= 5)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[955].f_140, "ZOMBIE_STORY_2_ReturnNigel", 0, 3, false);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "merchant1_OBJ", 4, 0);
			}
		}
		if (Function_17(9))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "merchant1_OBJ", 4, 0);
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[955].f_140, "ZOMBIE_STORY_2_ReturnNigel", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[955].f_140, "merchant2_OBJ", 0, 3, false);
		}
		if (Function_17(10))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[955].f_140, "merchant2_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[1055].f_140, "merchant3_OBJ", 0, 3, false);
		}
	}
	if (bParam0 && IS_STRING_VALID(bVar0))
	{
		Function_314(bVar0, 0x40f00000, 1, 2, 0, 0, 0, 0);
	}
	return;
}

void Function_314(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x14DD5 / 85461
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
			Var0 = { StackVal, StackVal, StackVal, Function_84(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, iParam2, &Var0, 0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, iParam2, uVar4, iParam5, iParam6);
	}
}

bool Function_315(int iParam0, int iParam1) //Position: 0x14E5A / 85594
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_316() //Position: 0x14E76 / 85622
{
	return STRING_TO_HASH(Function_317());
}

var Function_317() //Position: 0x14E82 / 85634
{
	return "ZOMBIE_STORY";
}

bool Function_318(int iParam0) //Position: 0x14E97 / 85655
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_13172[Function_319(iParam0)11].f_12 < 0;
}

int Function_319(int iParam0) //Position: 0x14EFD / 85757
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("\HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, returning gHideoutTwinRocks!");
		return Global_30734;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_30734;
			break;
		
		case 0x00000001:
			return Global_30735;
			break;
		
		case 0x00000004:
			return Global_30736;
			break;
		
		case 0x00000003:
			return Global_30737;
			break;
		
		case 0x00000002:
			return Global_30738;
			break;
	}
	return Global_30734;
}

void Function_320(char* cParam0) //Position: 0x14FBF / 85951
{
	if (!IS_JOURNAL_ENTRY_IN_LIST(Function_316(), 0))
	{
		CREATE_JOURNAL_ENTRY(Function_317(), 2, 38, "Mission_Strangers");
		PREPEND_JOURNAL_ENTRY(Function_316(), false);
	}
	APPEND_JOURNAL_ENTRY_DETAIL(Function_316(), cParam0, 0, 3, false);
	Function_126(Function_316(), 0);
	return;
}

bool Function_321() //Position: 0x15007 / 86023
{
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (!Function_322(Global_12976.f_36, 1, 0x41700000))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_322(bool bParam0, bool bParam1, float fParam2) //Position: 0x1502D / 86061
{
	float fVar0;
	bool bVar1;
	
	if (Function_34() || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(bParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(bParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(bParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(bParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= fParam2)
		{
			DECOR_REMOVE(bParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(bParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

void Function_323() //Position: 0x150CA / 86218
{
	if (Global_34165.f_112 != 4294967295)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT_FROM_WEAPON_ENUM(GET_PLAYER_ACTOR(0), Global_34165.f_112, 0);
		ACTOR_PUT_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0), Global_34165.f_112, 0);
		PRINTSTRING("Restoring weapon: ");
		PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_34165.f_112));
		PRINTNL();
	}
	return;
}

void Function_324() //Position: 0x1511B / 86299
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = 0;
	if (Global_3365)
	{
		return;
	}
	bVar2 = Function_21();
	if (!IS_ACTOR_VALID(bVar2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 38)
	{
		bVar1 = iVar0;
		iVar3 = GET_AMMO_ENUM(bVar1);
		if (iVar3 != 4294967295)
		{
			switch (UNK_0xDB679ED9(bVar1))
			{
				case 0x00000028:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, iVar3, 30.0f, 0);
					break;
				
				case 0x00000027:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, iVar3, 30.0f, 0);
					break;
				
				case 0x0000002B:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, iVar3, 12.0f, 0);
					break;
				
				case 0x0000002A:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, iVar3, 20.0f, 0);
					break;
				
				case 0x00000029:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, iVar3, 20.0f, 0);
					break;
				
				case 0x0000002C:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, iVar3, 20.0f, 0);
					break;
				}
		}
		iVar0++;
	}
	return;
}

var Function_325(bool bParam0) //Position: 0x151EC / 86508
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

void Function_326() //Position: 0x152DD / 86749
{
	PRINTSTRING("Locking advanced weapons...");
	PRINTNL();
	SET_WEAPONENUM_LOCKED(4, 0);
	SET_WEAPONENUM_LOCKED(5, 1);
	SET_WEAPONENUM_LOCKED(6, 1);
	SET_WEAPONENUM_LOCKED(7, 1);
	SET_WEAPONENUM_LOCKED(false, 0);
	SET_WEAPONENUM_LOCKED(true, 1);
	SET_WEAPONENUM_LOCKED(2, 1);
	SET_WEAPONENUM_LOCKED(3, 1);
	SET_WEAPONENUM_LOCKED(8, 0);
	SET_WEAPONENUM_LOCKED(9, 1);
	SET_WEAPONENUM_LOCKED(10, 1);
	SET_WEAPONENUM_LOCKED(11, 1);
	SET_WEAPONENUM_LOCKED(12, 0);
	SET_WEAPONENUM_LOCKED(13, 1);
	SET_WEAPONENUM_LOCKED(14, 1);
	SET_WEAPONENUM_LOCKED(31, 1);
	SET_WEAPONENUM_LOCKED(19, 0);
	SET_WEAPONENUM_LOCKED(20, 1);
	SET_WEAPONENUM_LOCKED(16, 0);
	SET_WEAPONENUM_LOCKED(17, 1);
	SET_WEAPONENUM_LOCKED(18, 1);
	SET_WEAPONENUM_LOCKED(15, 1);
	SET_WEAPONENUM_LOCKED(23, 1);
	SET_WEAPONENUM_LOCKED(24, 1);
	SET_WEAPONENUM_LOCKED(25, 1);
	SET_WEAPONENUM_LOCKED(29, 1);
	SET_WEAPONENUM_LOCKED(22, 1);
	SET_WEAPONENUM_LOCKED(21, 0);
	SET_WEAPONENUM_LOCKED(32, 0);
	SET_WEAPONENUM_LOCKED(33, 1);
	SET_WEAPONENUM_LOCKED(34, 1);
	SET_WEAPONENUM_LOCKED(35, 1);
	SET_WEAPONENUM_LOCKED(36, 1);
	SET_WEAPONENUM_LOCKED(37, 1);
	return;
}

void Function_327() //Position: 0x153CB / 86987
{
	struct<329> Var0;
	
	Var0.f_20 = "RIFLE_Antitank";
	Var0.f_4 = 42;
	Var0.f_8 = 4294967295;
	Var0.f_12 = 80;
	Var0.f_16 = 13;
	Var0.f_28 = "rifle_buffalo01x";
	Var0.f_32 = "WEAPONS_RIFLE_BUFFALO";
	Var0.f_36 = "WEAPONS_RIFLE_BUFFALO";
	Var0.f_24 = "ANTITANK";
	Var0.f_64 = "RIF_Explosive";
	Var0.f_68 = 4000.0f;
	Var0.f_72 = "rfl";
	Var0.f_76 = "rfl_buf";
	Var0.f_80 = "Rifle_bltStrip";
	Var0.f_84 = "rifle_1892Win";
	Var0.f_88 = "rifle_1892Win";
	Var0.f_92 = 1.0f;
	Var0.f_96 = 110.0f;
	Var0.f_100 = 80.0f;
	Var0.f_104 = 0.5f;
	Var0.f_108 = 1.0f;
	Var0.f_112 = 0.6f;
	Var0.f_116 = 120.0f;
	Var0.f_120 = 1.0f;
	Var0.f_124 = 0.4f;
	Var0.f_128 = 1.2f;
	Var0.f_132 = "MUZZLE_FLASH2";
	Var0.f_136 = "RUMBLE_RIFLE_HI";
	Var0.f_140 = "wrist_r_Attachment";
	Var0.f_144 = 0.0f;
	Var0.f_148 = 0.0f;
	Var0.f_152 = 0.0f;
	Var0.f_156 = 0.0f;
	Var0.f_160 = 40.0f;
	Var0.f_164 = 100.0f;
	Var0.f_168 = 0.3f;
	Var0.f_172 = 40.0f;
	Var0.f_176 = 100.0f;
	Var0.f_180 = 0.3f;
	Var0.f_184 = 0.0f;
	Var0.f_188 = 1.0f;
	Var0.f_192 = 0.0f;
	Var0.f_196 = "AIMER_BALLISTIC";
	Var0.f_200 = 1;
	Var0.f_204 = 0;
	Var0.f_208 = 1.8f;
	Var0.f_212 = 0.2f;
	Var0.f_216 = 0.5f;
	Var0.f_220 = 1.0f;
	Var0.f_224 = 1.0f;
	Var0.f_228 = 65.0f;
	Var0.f_232 = 65.0f;
	Var0.f_236 = 65.0f;
	Var0.f_240 = 70.0f;
	Var0.f_244 = 300.0f;
	Var0.f_248 = "";
	Var0.f_252 = 0;
	Var0.f_256 = 10.0f;
	Var0.f_260 = 60.0f;
	Var0.f_264 = 70.0f;
	Var0.f_268 = 5.0f;
	Var0.f_272 = 1.0f;
	Var0.f_276 = 4.0f;
	Var0.f_280 = 50.0f;
	Var0.f_284 = 1.0f;
	Var0.f_288 = 0;
	Var0.f_292 = 20.0f;
	Var0.f_296 = "Single";
	Var0.f_300 = 0.5f;
	Var0.f_308 = 1.0f;
	Var0.f_312 = 1.0f;
	Var0.f_316 = 500.0f;
	Var0.f_320 = 1.8f;
	Var0.f_324 = 0.5f;
	Var0.f_304 = 1.0f;
	Var0.f_328 = 1.0f;
	Var0.f_40 = 4294967295;
	Var0.f_44 = 1.0f;
	Var0.f_48 = 0.7f;
	Var0.f_52 = 0.27f;
	Var0.f_56 = 0.7f;
	Var0.f_60 = 0.1f;
	Function_328(31, "base_rifle", &Var0);
	return;
}

void Function_328(var uParam0, var uParam1, var uParam2) //Position: 0x15715 / 87829
{
	INIT_NATIVE_WEAPONENUM_RIFLE(uParam0, uParam1, uParam2);
	return;
}

void Function_329() //Position: 0x15724 / 87844
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_363(16384);
	}
	return;
}

bool Function_330(int iParam0) //Position: 0x15740 / 87872
{
	if (!Function_342(iParam0))
	{
		return 1;
	}
	return Function_35(&(Global_29008[iParam0]), 4);
}

bool Function_331(int iParam0, float fParam1, bool bParam2, int iParam3) //Position: 0x1575C / 87900
{
	vector3 vVar0;
	char* cVar3[64];
	var uVar19;
	int iVar21;
	float fVar22;
	
	if (!Function_339(&vVar0))
	{
		return 1;
	}
	if (Global_34165.f_44)
	{
		if (Function_337(32))
		{
			return 1;
		}
	}
	if (Global_30618 != 4294967295)
	{
		if (!Function_77())
		{
			strcpy(&cVar3, "$/content/init/pop/", 64);
			stradd(&cVar3, &Global_29155[Global_3061810] + 20, 64);
			stradd(&cVar3, "_population", 64);
		}
		else
		{
			strcpy(&cVar3, "$/content/dlc/zombiepack/init/pop/", 64);
			stradd(&cVar3, &Global_29155[Global_3061810] + 20, 64);
			stradd(&cVar3, "_population_z", 64);
		}
		uVar19 = Global_30618;
		if (!Global_29155[Global_3061810].f_16 != 4294967295)
		{
			if (IS_SCRIPT_VALID(Global_30617))
			{
				TERMINATE_SCRIPT(Global_30617);
			}
			Global_30617 = LAUNCH_NEW_SCRIPT_WITH_ARGS(&cVar3, &uVar19, 2, 0);
		}
		Global_30618 = 4294967295;
	}
	fVar22 = GET_PROFILE_TIME();
	iVar21 = *iParam0;
	while (iVar21 < 145)
	{
		if (StackVal == 1)
		{
			if (!Function_35(&(Global_29008[iVar21]), 1) && !Function_35(&(Global_29008[iVar21]), 4))
			{
				if (!Function_35(&(Global_29008[iVar21]), 1024))
				{
					if (Global_29155[iVar2110] == 4294967295)
					{
						Function_340(iVar21, 0);
					}
					else if (Function_35(&(Global_29008[Global_29155[iVar2110]]), 1024))
					{
						Function_340(iVar21, 0);
						Function_334(Global_29155[iVar2110]);
					}
				}
			}
		}
		else if (!Global_34165.f_36)
		{
			if (IS_VOLUME_VALID(StackVal))
			{
				if (StackVal || DECOR_CHECK_EXIST(IS_POINT_IN_VOLUME(StackVal, vVar0), "nforceLoad"))
				{
					if (!Function_35(&(Global_29008[iVar21]), 4) && !Function_35(&(Global_29008[iVar21]), 1))
					{
						if (StackVal == 2)
						{
							if (StackVal && (Function_35(&(Global_29008[Global_29005]), 4) || Function_35(&(Global_29008[Global_29005]), 1)) != 2)
							{
								Function_38(&(Global_29008[Global_29005]), 2);
								Function_334(Global_29005);
							}
							Global_29005 = iVar21;
						}
						Function_340(iVar21, iParam3);
					}
					else if (StackVal == 6)
					{
						if (!Function_77())
						{
							Function_332(iVar21);
						}
					}
					Global_29155[iVar2110].f_12 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_35(&(Global_29008[iVar21]), 4) || Function_35(&(Global_29008[iVar21]), 1))
				{
					if (!StackVal != 2)
					{
						if (!Function_35(&(Global_29008[iVar21]), 2097152))
						{
							if (Global_29155[iVar2110].f_12 + 5.0f) > GET_CURRENT_GAME_TIME()
							{
								Function_334(iVar21);
							}
							else if (!Function_35(&(Global_29008[iVar21]), 2))
							{
								Function_38(&(Global_29008[iVar21]), 2);
							}
						}
					}
				}
			}
		}
		if (bParam2)
		{
			if ((GET_PROFILE_TIME() - fVar22) < 200.0f)
			{
				*iParam0 = iVar21 + 1;
				return 0;
			}
		}
		iVar21++;
	}
	return 1;
}

void Function_332(int iParam0) //Position: 0x15A5F / 88671
{
	vector3 vVar0;
	
	if (!Function_35(&(Global_29008[iParam0]), 65536))
	{
		return;
	}
	if (Function_35(&(Global_29008[iParam0]), 1048576))
	{
		return;
	}
	if (Global_13053.f_12 + 10.0f) < GET_CURRENT_GAME_TIME()
	{
		return;
	}
	if (IS_ACTOR_RIDING(Global_34573) && Function_333(Global_34573, 1) < 2.0f)
	{
		return;
	}
	if (Function_117(0, 0, 1, 1))
	{
		Function_38(&(Global_29008[iParam0]), 1048576);
		return;
	}
	if (IS_ANY_SPEECH_PLAYING(Global_34573))
	{
		return;
	}
	GET_OBJECT_POSITION(StackVal, &vVar0);
	if (Function_298(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar0) > 25.0f)
	{
		SAY_SINGLE_LINE_CONTEXT(Global_34573, 360, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		Function_38(&(Global_29008[iParam0]), 1048576);
	}
	return;
}

float Function_333(bool bParam0, bool bParam1) //Position: 0x15B17 / 88855
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_334(int iParam0) //Position: 0x15B36 / 88886
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	char* cVar5[64];
	int iVar21;
	
	if (!Function_342(iParam0))
	{
		return;
	}
	Function_408(&(Global_29008[iParam0]), 262147);
	if (StackVal == 6)
	{
		Function_408(&(Global_29008[iParam0]), 4);
		if (!Global_3380 && !Function_34())
		{
			if (Function_342(Global_29155[iParam010]))
			{
				SET_RICH_PRESENCE(2, Global_29155[Global_29155[iParam010]10].f_36, 0, 0, 0);
			}
		}
		return;
	}
	if (IS_SCRIPT_VALID(Global_29155[iParam010].f_24))
	{
		TERMINATE_SCRIPT(Global_29155[iParam010].f_24);
	}
	if (!Function_339(&vVar0))
	{
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 5) != 4)
	{
		Function_408(&(Global_29008[iParam0]), 131072);
		iVar3 = Function_336(StackVal, StackVal, Global_34574, 1);
		if (!Function_342(iVar3))
		{
			iVar3 = Global_29005;
			bVar4 = true;
		}
		else
		{
			bVar4 = IS_POINT_IN_VOLUME(StackVal, vVar0);
		}
		if (bVar4)
		{
			if (!Function_335(Global_29155[iParam010], iParam0))
			{
				if (!Function_77())
				{
					strcpy(&cVar5, "ninit/pop/", 64);
					stradd(&cVar5, &Global_29155[iVar310] + 20, 64);
					stradd(&cVar5, "_population", 64);
				}
				else
				{
					strcpy(&cVar5, "$/content/dlc/zombiepack/init/pop/", 64);
					stradd(&cVar5, &Global_29155[iVar310] + 20, 64);
					stradd(&cVar5, "_population_z", 64);
				}
				iVar21 = iVar3;
				if (Global_29155[iParam010].f_16 != 4294967295)
				{
					if (IS_SCRIPT_VALID(Global_30617))
					{
						TERMINATE_SCRIPT(Global_30617);
					}
					Global_30617 = LAUNCH_NEW_SCRIPT_WITH_ARGS(&cVar5, &iVar21, 2, 0);
				}
				Global_29007 = StackVal;
			}
		}
		else if (!bVar4)
		{
		}
	}
	return;
}

bool Function_335(int iParam0, int iParam1) //Position: 0x15D07 / 89351
{
	int iVar0;
	vector3 vVar1;
	
	if (!Function_339(&vVar1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < (Global_29008 - 1))
	{
		if (!iVar0 != iParam1)
		{
			if (Global_29155[iVar010] == iParam0)
			{
				if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
				{
					if (IS_POINT_IN_VOLUME(StackVal, vVar1))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

var Function_336(vector3 vParam0, bool bParam3) //Position: 0x15D7F / 89471
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

bool Function_337(int iParam0) //Position: 0x15DEA / 89578
{
	return Function_338(Global_78617.f_52, iParam0);
}

int Function_338(var uParam0, int iParam1) //Position: 0x15DFB / 89595
{
	return (uParam0 && iParam1) == 0;
}

bool Function_339(int iParam0) //Position: 0x15E08 / 89608
{
	bool bVar0;
	
	bVar0 = Function_21();
	if (IS_ACTOR_VALID(bVar0))
	{
		GET_POSITION(bVar0, iParam0);
	}
	else if (!GET_CAMERA_CHANNEL_POSITION(iParam0, 0))
	{
		return 0;
	}
	return 1;
}

void Function_340(int iParam0, int iParam1) //Position: 0x15E32 / 89650
{
	char* cVar0[64];
	int iVar16;
	
	if (!Function_342(iParam0))
	{
		return;
	}
	if (StackVal && !Global_63097 != 1)
	{
		return;
	}
	if (Global_3395 || Global_3396)
	{
		return;
	}
	if ((!Global_6270 != 0 && !Global_6270 != 8) && !Global_6270 != 4)
	{
		return;
	}
	Function_38(&(Global_29008[iParam0]), 1);
	if (DECOR_CHECK_EXIST(StackVal, "nforceLoad"))
	{
		DECOR_REMOVE(StackVal, "nforceLoad");
		iParam1 = 1;
	}
	if (StackVal == 6)
	{
		Function_147(iParam0);
		Function_38(&(Global_29008[iParam0]), 4);
		if (!Global_3380 && !Function_34())
		{
			SET_RICH_PRESENCE(2, Global_29155[iParam010].f_36, 0, 0, 0);
		}
		if (Global_29155[iParam010].f_12 + 60.0f) > GET_CURRENT_GAME_TIME()
		{
			if (Function_342(Global_29155[iParam010]))
			{
				Function_341(Global_29155[Global_29155[iParam010]10].f_20, Global_29155[iParam010].f_20);
			}
			Global_13053 = StackVal;
			Global_13053.f_8 = 4;
			Global_13053.f_4 = 0;
		}
		return;
	}
	if (StackVal == 2)
	{
		if ((!Global_29155[iParam010] != Global_30621[Global_29004] && Function_342(Global_29155[iParam010])) || iParam1)
		{
			strcpy(&cVar0, "init/rdr2init_gringo_", 64);
			stradd(&cVar0, &Global_29155[Global_29155[iParam010]10] + 20, 64);
			LAUNCH_NEW_SCRIPT(&cVar0, 0);
		}
	}
	iVar16 = iParam0;
	if (!Global_29155[iParam010].f_16 != 4294967295)
	{
		Global_29155[iParam010].f_24 = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(Global_29155[iParam010].f_16, 4), &iVar16, 2, 0);
	}
	Function_408(&(Global_29008[iParam0]), 131072);
	Function_36(iParam0);
	return;
}

void Function_341(var uParam0, int iParam1) //Position: 0x15FF2 / 90098
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

bool Function_342(int iParam0) //Position: 0x15FFF / 90111
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_343() //Position: 0x16015 / 90133
{
	int iVar0;
	struct<77> Var1;
	
	*(&Var1 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var1, 44, 1);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Function_344(&Var1 + 80[iVar03]);
		iVar0++;
	}
	Var1.f_76 = 0;
	STORE_GAME_STATE(&Var1, 44, 1);
	return;
}

void Function_344(int iParam0) //Position: 0x16056 / 90198
{
	bool bVar0;
	
	if (Global_30842[16])
	{
		PRINTNL();
		PRINTSTRING("COPY_BEAT_DATA_LOAD");
		PRINTNL();
	}
	if (StackVal)
	{
		if (Global_30842[16])
		{
			PRINTSTRING("beatIdx Valid: ");
			PRINTSTRING(GET_ASSET_NAME(Global_17483[StackVal75].f_96, 4));
			PRINTNL();
		}
		bVar0 = GET_TIME_OF_DAY();
		if (Global_30842[16])
		{
			PRINTNL();
			PRINTSTRING("TIME_OF_DAY: ");
			Function_406(bVar0);
		}
		ADD_TIME(&bVar0, 0, 10, 0, 0);
		Global_16876[bVar06] = StackVal;
		Global_17483[bVar075].f_264 = StackVal;
		if (Global_30842[16])
		{
			PRINTNL();
			PRINTSTRING("New Run time: ");
			Function_406(Global_16876[StackVal6]);
		}
		Global_16876[*iParam06].f_12 = StackVal;
		Global_16876[StackVal + 16].f_4 = StackVal;
		Global_16876[StackVal + 16].f_8 = StackVal;
		iParam0->f_8 = 0;
	}
	if (Global_30842[16])
	{
		PRINTNL();
		PRINTSTRING("COPY_BEAT_DATA_LOAD END");
	}
	return;
}

void Function_345(var uParam0, float fParam1, int iParam2) //Position: 0x161A7 / 90535
{
	*uParam0 = fParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_8 = -1.0f;
	uParam0->f_12 = -1.0f;
	uParam0->f_16 = 0;
	uParam0->f_20 = GET_CURRENT_GAME_TIME();
	if (*uParam0 > 0.1f)
	{
		*uParam0 = 0.1f;
	}
	SET_WIND(StackVal, *uParam0, 5.0f);
	return;
}

void Function_346(int iParam0, int iParam1) //Position: 0x161ED / 90605
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<4> Var4;
	struct<4> Var8;
	float fVar12[24];
	
	*iParam0 = iParam1;
	iParam0->f_8 = 4294967295;
	iParam0->f_4 = 4294967295;
	iParam0->f_16 = 0;
	if (Global_3364)
	{
		iParam0->f_12 = GET_TIME_OF_DAY();
		Function_406(iParam0->f_12);
		PRINTNL();
		ADD_TIME(iParam0 + 12, 0, 16, 0, 0);
		iParam0->f_44 = GET_TIME_OF_DAY();
		iParam0->f_48 = GET_TIME_OF_DAY();
		iParam0->f_40 = 4294967295;
	}
	iVar1 = GET_MINUTES_FROM_TIME_OF_DAY(iParam0->f_44);
	bVar3 = (GET_MINUTES_FROM_TIME_OF_DAY(GET_TIME_OF_DAY()) - iVar1);
	bVar2 = (GET_MINUTES_FROM_TIME_OF_DAY(iParam0->f_48) - iVar1);
	if (Global_30842[14])
	{
		Var4 = { StackVal, StackVal, StackVal, Function_347(iParam0->f_12) };
		Var8 = { StackVal, StackVal, StackVal, Function_347(iParam0->f_48) };
	}
	if ((((Global_3364 || iParam0->f_40 != 4294967295) || bVar3 >= 0) || bVar3 <= bVar2) || bVar2 >= 0)
	{
		SET_WEATHER(iParam1, bVar0);
	}
	else
	{
		fVar12[iParam0->f_40] = (1.0f - (TO_FLOAT(bVar3) / TO_FLOAT(bVar2)));
		fVar12[*iParam0] = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
		SET_WEATHER_COMPLEX(bVar0, fVar12[0], fVar12[1], fVar12[2], fVar12[3], fVar12[4], fVar12[5], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		SET_WEATHER(iParam1, MAKE_TIME_OF_DAY(0, (bVar2 - bVar3), 0));
	}
	Global_16524.f_8 = iParam1;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (iParam1 != 3 || iParam1 != 4)
		{
			if (RAND_INT_RANGE(0, 10000) <= 7500)
			{
				SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
				SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
			}
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
		}
		else if (iParam1 != 3 || iParam1 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (iParam1 != 3 || iParam1 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	PRINTSTRING("Weather Init");
	PRINTNL();
	return;
}

struct<16> Function_347(bool bParam0) //Position: 0x163EA / 91114
{
	char* cVar0[16];
	
	strcpy(&cVar0, "Day ", 16);
	straddi(&cVar0, GET_DAY(bParam0), 16);
	stradd(&cVar0, ": ", 16);
	straddi(&cVar0, GET_HOUR(bParam0), 16);
	stradd(&cVar0, ":", 16);
	straddi(&cVar0, GET_MINUTE(bParam0), 16);
	stradd(&cVar0, ":", 16);
	straddi(&cVar0, GET_SECOND(bParam0), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_348(int iParam0) //Position: 0x1643E / 91198
{
	Function_357(&Global_28842, iParam0);
	return;
}

void Function_349(int iParam0) //Position: 0x1644C / 91212
{
	int iVar0;
	
	if (*iParam0 & 1073741824 > 1073741824)
	{
		iVar0 = *iParam0 & 1073741824;
		*iParam0 = (*iParam0 - iVar0);
	}
	return;
}

void Function_350(bool bParam0) //Position: 0x16477 / 91255
{
	Function_351(bParam0);
	Function_351(bParam0);
	Function_351(bParam0);
	Function_351(bParam0);
	return;
}

int Function_351(bool bParam0) //Position: 0x16495 / 91285
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Global_3365)
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(Global_34573))
	{
		return 0;
	}
	if (!bParam0 && !Function_257(8192))
	{
		return 0;
	}
	if (!bParam0 && (((Function_24() || HUD_IS_FADED()) || HUD_IS_FADING()) || UI_ISACTIVE("SG_SaveFile")))
	{
		return 0;
	}
	if (!bParam0 && (Global_26281 + 5.0f) < GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	if (!bParam0 && ((((((((((Global_59353 || Global_3380) || Global_3382) || Global_3367) || Global_63096) || Global_3395) || Global_3394) || Global_3384) || Global_3369) || Global_3396) || !IS_ACTOR_ALIVE(Global_34573)))
	{
		return 0;
	}
	iVar0 = DECOR_GET_INT(Global_34573, "tutorial");
	iVar1 = DECOR_GET_INT(Global_34573, "ntutorial2");
	iVar2 = DECOR_GET_INT(Global_34573, "ntutorial3");
	switch (iLocal_318)
	{
		case 0x00000000:
			if (!Function_289(Global_76846, 1))
			{
				if (Function_353(iVar0, 1))
				{
					Function_122(&Global_76846, 1);
					Function_352(Global_34573, 1, 1);
					if (!bParam0)
					{
						Function_280("tut_zombie_fast", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 2))
			{
				if (Function_353(iVar0, 2))
				{
					Function_122(&Global_76846, 2);
					Function_352(Global_34573, 2, 1);
					if (!bParam0)
					{
						Function_280("tut_zombie_bruiser", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 4))
			{
				if (Function_353(iVar0, 4))
				{
					Function_122(&Global_76846, 4);
					Function_352(Global_34573, 4, 1);
					if (!bParam0)
					{
						Function_280("tut_zombie_toxic", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 8))
			{
				if (Function_353(iVar0, 8))
				{
					Function_122(&Global_76846, 8);
					Function_352(Global_34573, 8, 1);
					if (!bParam0)
					{
						Function_280("tut_weapon_torch", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 16))
			{
				if (Function_353(iVar0, 16))
				{
					Function_122(&Global_76846, 16);
					Function_352(Global_34573, 16, 1);
					if (!bParam0)
					{
						Function_280("tut_weapon_holy_water", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 32))
			{
				if (Function_353(iVar0, 32))
				{
					Function_122(&Global_76846, 32);
					Function_352(Global_34573, 32, 1);
					if (!bParam0)
					{
						Function_280("tut_weapon_phosphorus", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 64))
			{
				if (Function_353(iVar0, 64))
				{
					Function_122(&Global_76846, 64);
					Function_352(Global_34573, 64, 1);
					if (!bParam0)
					{
						Function_280("tut_weapon_blunderbuss", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 128))
			{
				if (Function_353(iVar0, 128))
				{
					Function_122(&Global_76846, 128);
					Function_352(Global_34573, 128, 1);
					if (!bParam0)
					{
						Function_280("tut_weapon_zombie_bait", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 256))
			{
				if (Function_353(iVar0, 256))
				{
					Function_122(&Global_76846, 256);
					Function_352(Global_34573, 256, 1);
					if (!bParam0)
					{
						Function_280("tut_weapon_boomie_bait", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 512))
			{
				if (Function_353(iVar0, 512))
				{
					Function_122(&Global_76846, 512);
					Function_352(Global_34573, 512, 1);
					if (!bParam0)
					{
						Function_280("tut_ambient_use_deadeye", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 1024))
			{
				if (Function_353(iVar0, 1024))
				{
					Function_122(&Global_76846, 1024);
					Function_352(Global_34573, 1024, 1);
					if (!bParam0)
					{
						Function_280("tut_ambient_conserve_ammo", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 2048))
			{
				if (Function_353(iVar0, 2048))
				{
					Function_122(&Global_76846, 2048);
					Function_352(Global_34573, 2048, 1);
					if (!bParam0)
					{
						Function_280("tut_ambient_dead_horse", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 4096))
			{
				if (Function_353(iVar0, 4096))
				{
					Function_122(&Global_76846, 4096);
					Function_352(Global_34573, 4096, 1);
					if (!bParam0)
					{
						Function_280("tut_ambient_zombie_horse", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 8192))
			{
				if (Function_353(iVar0, 8192))
				{
					Function_122(&Global_76846, 8192);
					Function_352(Global_34573, 8192, 1);
					if (!bParam0)
					{
						Function_280("tut_ambient_ruined_quest", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 16384))
			{
				if (Function_353(iVar0, 16384))
				{
					Function_122(&Global_76846, 16384);
					Function_352(Global_34573, 16384, 1);
					if (!bParam0)
					{
						Function_280("tut_ambient_fast_travel", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 32768))
			{
				if (Function_353(iVar0, 32768))
				{
					Function_122(&Global_76846, 32768);
					Function_352(Global_34573, 32768, 1);
					return 0;
				}
			}
			if (!Function_289(Global_76846, 65536))
			{
				if (Function_353(iVar0, 65536))
				{
					Function_122(&Global_76846, 65536);
					Function_352(Global_34573, 65536, 1);
					return 0;
				}
			}
			if (!Function_289(Global_76846, 131072))
			{
				if (Function_353(iVar0, 131072))
				{
					Function_122(&Global_76846, 131072);
					Function_352(Global_34573, 131072, 1);
					if (!bParam0)
					{
						Function_280("tut_firsttime_fort_mercer", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 262144))
			{
				if (Function_353(iVar0, 262144))
				{
					Function_122(&Global_76846, 262144);
					Function_352(Global_34573, 262144, 1);
					if (!bParam0)
					{
						Function_280("tut_firsttime_el_presidio", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 524288))
			{
				if (Function_353(iVar0, 524288))
				{
					Function_122(&Global_76846, 524288);
					Function_352(Global_34573, 524288, 1);
					if (!bParam0)
					{
						Function_280("tut_survivor_bullet_waste", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 1048576))
			{
				if (Function_353(iVar0, 1048576))
				{
					Function_122(&Global_76846, 1048576);
					Function_352(Global_34573, 1048576, 1);
					if (!bParam0)
					{
						Function_280("tut_survivor_loot_got_ammo", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 2097152))
			{
				if (Function_353(iVar0, 2097152))
				{
					Function_122(&Global_76846, 2097152);
					Function_352(Global_34573, 2097152, 1);
					if (!bParam0)
					{
						Function_280("tut_survivor_loot_got_parts", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 4194304))
			{
				if (Function_353(iVar0, 4194304))
				{
					Function_122(&Global_76846, 4194304);
					Function_352(Global_34573, 4194304, 1);
					if (!bParam0)
					{
						Function_280("tut_survivor_lead_no_talk", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 8388608))
			{
				if (Function_353(iVar0, 8388608))
				{
					Function_122(&Global_76846, 8388608);
					Function_352(Global_34573, 8388608, 1);
					if (!bParam0)
					{
						Function_280("tut_survivor_talk_no_save", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 0x1000000))
			{
				if (Function_353(iVar0, 0x1000000))
				{
					Function_122(&Global_76846, 0x1000000);
					Function_352(Global_34573, 0x1000000, 1);
					if (!bParam0)
					{
						Function_280("tut_survivor_save_rewarded", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 0x2000000))
			{
				if (Function_353(iVar0, 0x2000000))
				{
					Function_122(&Global_76846, 0x2000000);
					Function_352(Global_34573, 0x2000000, 1);
					if (!bParam0)
					{
						Function_280("tut_survivor_save_and_leave", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 0x4000000))
			{
				if (Function_353(iVar0, 0x4000000))
				{
					Function_122(&Global_76846, 0x4000000);
					Function_352(Global_34573, 0x4000000, 1);
					if (!bParam0)
					{
						Function_280("tut_survivor_town_check_map", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 0x8000000))
			{
				if (Function_353(iVar0, 0x8000000))
				{
					Function_122(&Global_76846, 0x8000000);
					Function_352(Global_34573, 0x8000000, 1);
					if (!bParam0)
					{
						Function_280("tut_survivor_town_reattack", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 0x10000000))
			{
				if (Function_353(iVar0, 0x10000000))
				{
					Function_122(&Global_76846, 0x10000000);
					Function_352(Global_34573, 0x10000000, 1);
					if (!bParam0)
					{
						Function_280("tut_survivor_town_taken", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 0x20000000))
			{
				if (Function_353(iVar0, 0x20000000))
				{
					Function_122(&Global_76846, 0x20000000);
					Function_352(Global_34573, 0x20000000, 1);
					if (!bParam0)
					{
						Function_280("tut_survivor_town_lost_guy", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76846, 0x40000000))
			{
				if (Function_353(iVar0, 0x40000000))
				{
					Function_122(&Global_76846, 0x40000000);
					Function_352(Global_34573, 0x40000000, 1);
					if (!bParam0)
					{
						Function_280("tut_survivor_town_lost_forever", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!Function_289(Global_76847, 2))
			{
				if (Function_353(iVar1, 2))
				{
					Function_122(&Global_76847, 2);
					Function_352(Global_34573, 2, 2);
					if (!bParam0)
					{
						Function_280("tut_zombie02_talktosurvivors", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 4))
			{
				if (Function_353(iVar1, 4))
				{
					Function_122(&Global_76847, 4);
					Function_352(Global_34573, 4, 2);
					if (!bParam0)
					{
						Function_280("tut_mother4_talktosurvivors", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 16))
			{
				if (Function_353(iVar1, 16))
				{
					Function_122(&Global_76847, 16);
					Function_352(Global_34573, 16, 2);
					if (!bParam0)
					{
						Function_280("tut_zombie_john", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 32))
			{
				if (Function_353(iVar1, 32))
				{
					Function_122(&Global_76847, 32);
					Function_352(Global_34573, 32, 2);
					if (!bParam0)
					{
						Function_280("tut_zombie_grapple", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 64))
			{
				if (Function_353(iVar1, 64))
				{
					Function_122(&Global_76847, 64);
					Function_352(Global_34573, 64, 2);
					if (!bParam0)
					{
						Function_280("tut_weapon_holy_relic", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 128))
			{
				if (Function_353(iVar1, 128))
				{
					Function_122(&Global_76847, 128);
					Function_352(Global_34573, 128, 2);
					if (!bParam0)
					{
						Function_280("tut_lowhealth_usemeds", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 256))
			{
				if (Function_353(iVar1, 256))
				{
					Function_122(&Global_76847, 256);
					Function_352(Global_34573, 256, 2);
					if (!bParam0)
					{
						Function_280("tut_hogtieonhorse", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 512))
			{
				if (Function_353(iVar1, 512))
				{
					Function_122(&Global_76847, 512);
					Function_352(Global_34573, 512, 2);
					if (!bParam0)
					{
						Function_280("tut_navigation_foot_basic", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 1024))
			{
				if (Function_353(iVar1, 1024))
				{
					Function_122(&Global_76847, 1024);
					Function_352(Global_34573, 1024, 2);
					if (!bParam0)
					{
						Function_280("tut_navigation_foot_run", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 8))
			{
				if (Function_353(iVar1, 8))
				{
					Function_122(&Global_76847, 8);
					Function_352(Global_34573, 8, 2);
					if (!bParam0)
					{
						Function_280("tut_horse_whistle", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 2048))
			{
				if (Function_353(iVar1, 2048))
				{
					Function_122(&Global_76847, 2048);
					Function_352(Global_34573, 2048, 2);
					if (!bParam0)
					{
						Function_280("tut_navigation_horse_basic", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 4096))
			{
				if (Function_353(iVar1, 4096))
				{
					Function_122(&Global_76847, 4096);
					Function_352(Global_34573, 4096, 2);
					if (!bParam0)
					{
						Function_280("tut_navigation_horse_gallop", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 8192))
			{
				if (Function_353(iVar1, 8192))
				{
					Function_122(&Global_76847, 8192);
					Function_352(Global_34573, 8192, 2);
					if (!bParam0)
					{
						Function_280("tut_navigation_horse_stamina", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 16384))
			{
				if (Function_353(iVar1, 16384))
				{
					Function_122(&Global_76847, 16384);
					Function_352(Global_34573, 16384, 2);
					if (!bParam0)
					{
						Function_280("tut_weapon_reload", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 32768))
			{
				if (Function_353(iVar1, 32768))
				{
					Function_122(&Global_76847, 32768);
					Function_352(Global_34573, 32768, 2);
					if (!bParam0)
					{
						Function_280("tut_loot_corpse", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 65536))
			{
				if (Function_353(iVar1, 65536))
				{
					Function_122(&Global_76847, 65536);
					Function_352(Global_34573, 65536, 2);
					if (!bParam0)
					{
						Function_280("tut_weapon_new", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 131072))
			{
				if (Function_353(iVar1, 131072))
				{
					Function_122(&Global_76847, 131072);
					Function_352(Global_34573, 131072, 2);
					if (!bParam0)
					{
						Function_280("tut_new_weapon_choose", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 1048576))
			{
				if (Function_353(iVar1, 1048576))
				{
					Function_122(&Global_76847, 1048576);
					Function_352(Global_34573, 1048576, 2);
					if (!bParam0)
					{
						Function_280("tut_deadeye_activation", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 2097152))
			{
				if (Function_353(iVar1, 2097152))
				{
					Function_122(&Global_76847, 2097152);
					Function_352(Global_34573, 2097152, 2);
					if (!bParam0)
					{
						Function_280("tut_deadeye_locks", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 4194304))
			{
				if (Function_353(iVar1, 4194304))
				{
					Function_122(&Global_76847, 4194304);
					Function_352(Global_34573, 4194304, 2);
					if (!bParam0)
					{
						Function_280("tut_deadeye_exit", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 8388608))
			{
				if (Function_353(iVar1, 8388608))
				{
					Function_122(&Global_76847, 8388608);
					Function_352(Global_34573, 8388608, 2);
					if (!bParam0)
					{
						Function_280("tut_thrown_arc", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 0x1000000))
			{
				if (Function_353(iVar1, 0x1000000))
				{
					Function_122(&Global_76847, 0x1000000);
					Function_352(Global_34573, 0x1000000, 2);
					if (!bParam0)
					{
						Function_280("tut_hitch_horse", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 0x2000000))
			{
				if (Function_353(iVar1, 0x2000000))
				{
					Function_122(&Global_76847, 0x2000000);
					Function_352(Global_34573, 0x2000000, 2);
					if (!bParam0)
					{
						Function_280("tut_hitch_horse_return", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 0x4000000))
			{
				if (Function_353(iVar1, 0x4000000))
				{
					Function_122(&Global_76847, 0x4000000);
					Function_352(Global_34573, 0x4000000, 2);
					if (!bParam0)
					{
						Function_280("tut_house_save", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 0x10000000))
			{
				if (Function_353(iVar1, 0x10000000))
				{
					Function_122(&Global_76847, 0x10000000);
					Function_352(Global_34573, 0x10000000, 2);
					if (!bParam0)
					{
						Function_280("tut_satchel_open", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 0x20000000))
			{
				if (Function_353(iVar1, 0x20000000))
				{
					Function_122(&Global_76847, 0x20000000);
					Function_352(Global_34573, 0x20000000, 2);
					if (!bParam0)
					{
						Function_280("tut_new_weapon_range", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76847, 0x40000000))
			{
				if (Function_353(iVar1, 0x40000000))
				{
					Function_122(&Global_76847, 0x40000000);
					Function_352(Global_34573, 0x40000000, 2);
					if (!bParam0)
					{
						Function_280("tut_melee_lockon", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!Function_289(Global_76848, 2))
			{
				if (Function_353(iVar2, 2))
				{
					Function_122(&Global_76848, 2);
					Function_352(Global_34573, 2, 3);
					if (!bParam0)
					{
						Function_280("tut_health_death", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76848, 4))
			{
				if (Function_353(iVar2, 4))
				{
					Function_122(&Global_76848, 4);
					Function_352(Global_34573, 4, 3);
					if (!bParam0)
					{
						Function_280("tut_health_regen", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76848, 8))
			{
				if (Function_353(iVar2, 8))
				{
					Function_122(&Global_76848, 8);
					Function_352(Global_34573, 8, 3);
					if (!bParam0)
					{
						Function_280("tut_horse_roads", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76848, 16))
			{
				if (Function_353(iVar2, 16))
				{
					Function_122(&Global_76848, 16);
					Function_352(Global_34573, 16, 3);
					if (!bParam0)
					{
						Function_280("tut_ledgeplay_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76848, 32))
			{
				if (Function_353(iVar2, 32))
				{
					Function_122(&Global_76848, 32);
					Function_352(Global_34573, 32, 3);
					if (!bParam0)
					{
						Function_280("tut_ledgeplay_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76848, 64))
			{
				if (Function_353(iVar2, 64))
				{
					Function_122(&Global_76848, 64);
					Function_352(Global_34573, 64, 3);
					if (!bParam0)
					{
						Function_280("tut_sniper_zoom", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76848, 256))
			{
				if (Function_353(iVar2, 256))
				{
					Function_122(&Global_76848, 256);
					Function_352(Global_34573, 256, 3);
					if (!bParam0)
					{
						if (GET_PLAYER_COMBATMODE() == 1)
						{
							Function_280("tut_weapon_aim_expert", 0x41200000, 1, 0, 2, 1, 0);
						}
						else if (GET_PLAYER_COMBATMODE() == 2)
						{
							Function_280("tut_weapon_aim_normal", 0x41200000, 1, 0, 2, 1, 0);
						}
						else
						{
							Function_280("tut_weapon_aim_casual", 0x41200000, 1, 0, 2, 1, 0);
						}
						return 0;
					}
				}
			}
			if (!Function_289(Global_76848, 2048))
			{
				if (Function_353(iVar2, 2048))
				{
					Function_122(&Global_76848, 2048);
					Function_352(Global_34573, 2048, 3);
					if (!bParam0)
					{
						Function_280("AMZFH_HLP_DEATH", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76848, 4096))
			{
				if (Function_353(iVar2, 4096))
				{
					Function_122(&Global_76848, 4096);
					Function_352(Global_34573, 4096, 3);
					if (!bParam0)
					{
						Function_280("AMZFH_HLP_DEATH_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76848, 8192))
			{
				if (Function_353(iVar2, 8192))
				{
					Function_122(&Global_76848, 8192);
					Function_352(Global_34573, 8192, 3);
					if (!bParam0)
					{
						Function_280("AMZFH_HLP_WAR", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76848, 16384))
			{
				if (Function_353(iVar2, 16384))
				{
					Function_122(&Global_76848, 16384);
					Function_352(Global_34573, 16384, 3);
					if (!bParam0)
					{
						Function_280("AMZFH_HLP_WAR_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76848, 32768))
			{
				if (Function_353(iVar2, 32768))
				{
					Function_122(&Global_76848, 32768);
					Function_352(Global_34573, 32768, 3);
					if (!bParam0)
					{
						Function_280("AMZFH_HLP_PEST", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76848, 65536))
			{
				if (Function_353(iVar2, 65536))
				{
					Function_122(&Global_76848, 65536);
					Function_352(Global_34573, 65536, 3);
					if (!bParam0)
					{
						Function_280("AMZFH_HLP_PEST_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76848, 131072))
			{
				if (Function_353(iVar2, 131072))
				{
					Function_122(&Global_76848, 131072);
					Function_352(Global_34573, 131072, 3);
					if (!bParam0)
					{
						Function_280("AMZFH_HLP_FAM", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76848, 262144))
			{
				if (Function_353(iVar2, 262144))
				{
					Function_122(&Global_76848, 262144);
					Function_352(Global_34573, 262144, 3);
					if (!bParam0)
					{
						Function_280("AMZFH_HLP_FAM_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76848, 128))
			{
				if (Function_353(iVar2, 128))
				{
					Function_122(&Global_76848, 128);
					Function_352(Global_34573, 128, 3);
					if (!bParam0)
					{
						Function_280("tut_horse_mount", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76848, 512))
			{
				if (Function_353(iVar2, 512))
				{
					Function_122(&Global_76848, 512);
					Function_352(Global_34573, 512, 3);
					if (!bParam0)
					{
						Function_280("tut_undead_nightmare", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_289(Global_76848, 1024))
			{
				if (Function_353(iVar2, 1024))
				{
					Function_122(&Global_76848, 1024);
					Function_352(Global_34573, 1024, 3);
					if (!bParam0)
					{
						Function_280("tutorial_place_waypoint", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
		
		case 0x00000003:
			break;
	}
	iLocal_318++;
	if (iLocal_318 >= 2)
	{
		iLocal_318 = 0;
	}
	return 0;
}

void Function_352(bool bParam0, int iParam1, int iParam2) //Position: 0x18077 / 98423
{
	var uVar0;
	struct<4> Var1;
	int iVar5;
	
	uVar0 = iParam1;
	strcpy(&Var1, "tutorial", 16);
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	Function_282(&Var1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &Var1))
	{
		return;
	}
	iVar5 = DECOR_GET_INT(bParam0, &Var1);
	DECOR_SET_INT(bParam0, &Var1, (iVar5 - (iVar5 && uVar0)));
	return;
}

bool Function_353(int iParam0, int iParam1) //Position: 0x180C6 / 98502
{
	var uVar0;
	
	uVar0 = iParam1;
	if ((iParam0 && uVar0) >= 0)
	{
		return 1;
	}
	return 0;
}

void Function_354() //Position: 0x180DC / 98524
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_25986)
	{
		Global_25986[iVar0] = !Global_3365;
		switch (iVar0)
		{
			case 0x00000000:
			case 0x00000002:
				Global_25986[iVar0] = 1;
				break;
			
			case 0x00000001:
				if (IS_ACTOR_VALID(Global_34573))
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					Function_96(390, 3.0f);
					Function_82(390, 3, 0);
				}
				break;
			
			case 0x00000003:
				Global_25986[iVar0] = 1;
				break;
			
			case 0x00000004:
				if (Function_17(2) || !Global_3365)
				{
					Global_25986[iVar0] = 1;
					Function_362(1);
					ENABLE_AMBIENT_SPAWNING(true);
				}
				else
				{
					Global_25986[iVar0] = 0;
					Function_435(1);
					ENABLE_AMBIENT_SPAWNING(false);
				}
				break;
			
			case 0x00000005:
				Global_25986[iVar0] = 1;
				break;
			
			case 0x00000009:
				Global_25986[iVar0] = 1;
				break;
			
			case 0x00000006:
				Global_25986[iVar0] = 1;
				break;
			
			case 0x00000007:
				Global_25986[iVar0] = 1;
				break;
			
			case 0x00000008:
				if (Function_17(4))
				{
					Global_25986[iVar0] = 1;
				}
				else
				{
					Global_25986[iVar0] = 0;
				}
				break;
			
			case 0x0000000A:
				Global_25986[iVar0] = 1;
				break;
			
			case 0x0000000B:
				if (Function_318(0) || !Global_3365)
				{
					Global_25986[iVar0] = 1;
				}
				break;
			
			case 0x0000000C:
				Function_356(1);
				Global_25986[iVar0] = 1;
				break;
			
			case 0x0000000D:
			case 0x0000000F:
			case 0x0000000E:
				Global_25986[iVar0] = 0;
				break;
			
			default:
				LOG_ERROR("Found a FeatureType that is not enabled for unlocking!");
				break;
		}
		iVar0++;
	}
	if (Global_3365)
	{
		Function_355(0);
	}
	return;
}

void Function_355(bool bParam0) //Position: 0x182B2 / 98994
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = false;
	bVar0 = false;
	while (bVar0 <= Global_25986)
	{
		if ((!Global_25986[bVar0] && (!bParam0 || !Function_24())) && !bVar1)
		{
			switch (bVar0)
			{
				case 0x00000000:
				case 0x00000002:
					Global_25986[bVar0] = 1;
					break;
				
				case 0x00000001:
					Global_25986[bVar0] = 1;
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					Function_96(390, 3.0f);
					Function_82(390, 3, 0);
					break;
				
				case 0x00000003:
					Global_25986[bVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_17(2))
					{
						Global_25986[bVar0] = 1;
						Function_362(1);
						ENABLE_AMBIENT_SPAWNING(true);
					}
					break;
				
				case 0x00000005:
					Global_25986[bVar0] = 1;
					break;
				
				case 0x00000009:
					Global_25986[bVar0] = 1;
					break;
				
				case 0x00000006:
					Global_25986[bVar0] = 1;
					break;
				
				case 0x00000007:
					Global_25986[bVar0] = 1;
					break;
				
				case 0x00000008:
					if (Function_17(4))
					{
						Global_25986[bVar0] = 1;
					}
					break;
				
				case 0x0000000A:
					Global_25986[bVar0] = 1;
					break;
				
				case 0x0000000B:
					if (Function_318(0) || !Global_3365)
					{
						Global_25986[bVar0] = 1;
					}
					break;
				
				case 0x0000000C:
					Global_25986[bVar0] = 1;
					Function_356(1);
					break;
				
				case 0x0000000F:
				case 0x0000000D:
				case 0x0000000E:
					Global_25986[bVar0] = 0;
					break;
				
				default:
					LOG_ERROR("Found a FeatureType that is not enabled for unlocking!");
					break;
				}
		}
		bVar0++;
	}
	return;
}

void Function_356(bool bParam0) //Position: 0x18467 / 99431
{
	if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
	{
		if (bParam0)
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	else if (!bParam0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_357(var uParam0, int iParam1) //Position: 0x184DB / 99547
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_358(int iParam0) //Position: 0x184FE / 99582
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_359(int iParam0) //Position: 0x18511 / 99601
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_360() //Position: 0x1852E / 99630
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_30804)
	{
		Global_30804[iVar0] = 1;
		iVar0++;
	}
	Global_30838 = 0;
	return;
}

void Function_361() //Position: 0x18554 / 99668
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_30767)
	{
		Global_30767[iVar0] = 1;
		iVar0++;
	}
	Global_30837 = 0;
	return;
}

void Function_362(int iParam0) //Position: 0x1857A / 99706
{
	if (Function_433(iParam0, 1) && !Function_433(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_363(int iParam0) //Position: 0x185A7 / 99751
{
	Function_364(&Global_28842, iParam0);
	return;
}

void Function_364(var uParam0, var uParam1) //Position: 0x185B5 / 99765
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_365() //Position: 0x185D0 / 99792
{
	bool bVar0;
	
	if (!IS_ITERATOR_VALID(Global_26118))
	{
		bVar0 = FIND_NAMED_LAYOUT("regions_layout");
		if (!IS_LAYOUTREF_VALID(bVar0))
		{
			LOG_ERROR("Attempting to create a new ambient iterator, but regions_layout is not valid. Bad things, man, bad things");
			return;
		}
		Global_26118 = CREATE_OBJECT_ITERATOR(bVar0);
	}
	Function_366(&Global_26118);
	ITERATE_IN_LAYOUT(Global_26118, GET_AMBIENT_LAYOUT());
	return;
}

int Function_366(int iParam0) //Position: 0x18687 / 99975
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_49());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_49());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

var Function_367(bool bParam0) //Position: 0x186B8 / 100024
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return STRING_TO_INT(bVar0);
	}
	return 4294967295;
}

bool Function_368(int iParam0, bool bParam1) //Position: 0x186DB / 100059
{
	int iVar0;
	
	iVar0 = Function_405(iParam0);
	if (!Function_15(iVar0))
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

bool Function_369(bool bParam0, bool bParam1, bool bParam2) //Position: 0x18718 / 100120
{
	int iVar0;
	
	iVar0 = Function_436(bParam0, bParam1, bParam2);
	return Function_13(iVar0);
}

void Function_370() //Position: 0x1872E / 100142
{
	Global_30842[0] = 0;
	Global_30842[1] = 0;
	Global_30842[2] = 0;
	Global_30842[3] = 0;
	Global_30842[5] = 0;
	Global_30842[6] = 0;
	Global_30842[7] = 0;
	Global_30842[8] = 0;
	Global_30842[9] = 0;
	Global_30842[10] = 0;
	Global_30842[11] = 0;
	Global_30842[32] = 0;
	Global_30842[19] = 0;
	Global_30842[20] = 0;
	Global_30842[50] = 0;
	Global_30842[12] = 0;
	Global_30842[23] = 0;
	Global_30842[52] = 0;
	Global_30842[43] = 0;
	Global_30842[24] = 0;
	Global_30842[46] = 0;
	Global_30842[47] = 0;
	Global_30842[14] = 0;
	Global_3377 = 1;
	Global_3379 = 0;
	Global_3380 = 0;
	Global_3386 = 0;
	return;
}

void Function_371() //Position: 0x187F5 / 100341
{
	return;
}

void Function_372() //Position: 0x187FB / 100347
{
	return;
}

void Function_373() //Position: 0x18801 / 100353
{
	Function_379(1, &Global_49310[122] + 8, &Global_49310[122] + 12);
	Function_378(0, &Global_49310[022] + 8, &Global_49310[022] + 12);
	Function_374(2, &Global_49310[222] + 8, &Global_49310[222] + 12);
	return;
}

void Function_374(bool bParam0, var uParam1, int iParam2) //Position: 0x18843 / 100419
{
	bool bVar0;
	
	switch (*uParam1)
	{
		case 0x00000004:
			bVar0 = Global_49310[bParam022].f_28;
			*iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(4));
			Function_375(bParam0, *iParam2, 0, 4294967295, 4294967295, 4294967295, 0);
			break;
	}
	return;
}

void Function_375(bool bParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6) //Position: 0x1887F / 100479
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	char* cVar20[24];
	char* cVar26[24];
	char* cVar32[24];
	char* cVar38[24];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_377(bParam0), fParam1, 1, 0);
	if (bParam2)
	{
		if (((bParam0 != 12 || bParam0 != 13) || bParam0 != 10) || bParam0 != 11)
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_376(bParam0) };
			stradd(&cVar0, "_info", 24);
			memcpy(&cVar6, StackVal, *(&Global_49399[bParam022] + 16), 6);
			stradd(&cVar6, "_num", 24);
			if (bParam3 >= 4294967295)
			{
				UI_SET_STRING(&cVar6, INT_TO_STRING(bParam3));
			}
			if (bParam4 >= 4294967295)
			{
				strcpy(&cVar12, "PVP_num2", 16);
				UI_SET_STRING(&cVar12, INT_TO_STRING(bParam4));
			}
			if (bParam5 >= 4294967295)
			{
				strcpy(&cVar16, "PVP_num3", 16);
				UI_SET_STRING(&cVar16, INT_TO_STRING(bParam5));
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Function_377(bParam0), &cVar0, 2, 2, false);
			Function_126(Function_377(bParam0), 0);
		}
		else
		{
			cVar20 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_376(bParam0) };
			if (Function_34() || Global_34165.f_44)
			{
				stradd(&cVar20, "_info_mp", 24);
			}
			else
			{
				stradd(&cVar20, "_info", 24);
			}
			if (bParam3 >= 4294967295)
			{
				strcpy(&cVar26, "AM_num", 24);
				stradd(&cVar26, INT_TO_STRING((1 + iParam6)), 24);
				UI_SET_STRING(&cVar26, INT_TO_STRING(bParam3));
			}
			if (bParam4 >= 4294967295)
			{
				strcpy(&cVar32, "AM_num", 24);
				stradd(&cVar32, INT_TO_STRING((2 + iParam6)), 24);
				UI_SET_STRING(&cVar32, INT_TO_STRING(bParam4));
			}
			if (bParam5 >= 4294967295)
			{
				strcpy(&cVar38, "AM_num", 24);
				stradd(&cVar38, INT_TO_STRING((3 + iParam6)), 24);
				UI_SET_STRING(&cVar38, INT_TO_STRING(bParam5));
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Function_377(bParam0), &cVar20, 2, 2, true);
			Function_126(Function_377(bParam0), 0);
		}
	}
}

struct<24> Function_376(bool bParam0) //Position: 0x18A0A / 100874
{
	char* cVar0[24];
	
	if (Function_34() || Global_34165.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_49399[bParam022] + 16), 6);
		stradd(&cVar0, "_", 24);
		stradd(&cVar0, INT_TO_STRING(StackVal), 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_49310[bParam022] + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_377(bool bParam0) //Position: 0x18A7C / 100988
{
	if (Function_34() || Global_34165.f_44)
	{
		return Global_49399[bParam022].f_24;
	}
	return Global_49310[bParam022].f_24;
}

void Function_378(bool bParam0, var uParam1, int iParam2) //Position: 0x18AA4 / 101028
{
	bool bVar0;
	
	switch (*uParam1)
	{
		case 0x00000000:
			bVar0 = Global_49310[bParam022].f_28;
			*iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(5));
			Function_375(bParam0, *iParam2, 1, bVar0, 4294967295, 4294967295, 22);
			break;
		
		case 0x00000001:
			bVar0 = Global_49310[bParam022].f_28;
			*iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(10));
			Function_375(bParam0, *iParam2, 1, bVar0, 4294967295, 4294967295, 22);
			break;
		
		case 0x00000002:
			bVar0 = Global_49310[bParam022].f_28;
			*iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(5));
			Function_375(bParam0, *iParam2, 0, bVar0, 4294967295, 4294967295, 22);
			break;
		
		case 0x00000003:
			bVar0 = Global_49310[bParam022].f_28;
			*iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(4));
			Function_375(bParam0, *iParam2, 0, bVar0, 4294967295, 4294967295, 22);
			break;
		
		case 0x00000004:
			Global_49310[bParam022].f_28 = 0;
			bVar0 = Global_49310[bParam022].f_28;
			*iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(5));
			Function_375(bParam0, *iParam2, 1, bVar0, 4294967295, 4294967295, 22);
			break;
	}
	return;
}

void Function_379(bool bParam0, var uParam1, int iParam2) //Position: 0x18BAD / 101293
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	switch (*uParam1)
	{
		case 0x00000000:
			bVar1 = Function_380(bParam0, 1, 1);
			bVar2 = Function_380(bParam0, 2, 1);
			Global_49310[bParam022].f_28 = (CEIL(bVar1) + CEIL(bVar2));
			bVar0 = Global_49310[bParam022].f_28;
			*iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(125));
			Function_375(bParam0, *iParam2, 1, CEIL(bVar1), CEIL(bVar2), 4294967295, 19);
			break;
		
		case 0x00000001:
			bVar1 = Function_380(bParam0, 1, 1);
			bVar2 = Function_380(bParam0, 2, 1);
			Global_49310[bParam022].f_28 = (CEIL(bVar1) + CEIL(bVar2));
			bVar0 = Global_49310[bParam022].f_28;
			*iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(40));
			Function_375(bParam0, *iParam2, 1, CEIL(bVar1), CEIL(bVar2), 4294967295, 19);
			break;
		
		case 0x00000002:
			bVar0 = Global_49310[bParam022].f_28;
			*iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(2));
			Function_375(bParam0, *iParam2, 0, bVar0, 4294967295, 4294967295, 19);
			break;
		
		case 0x00000003:
			bVar1 = Function_380(bParam0, 1, 1);
			bVar2 = Function_380(bParam0, 2, 1);
			bVar3 = Function_380(bParam0, 3, 1);
			Global_49310[bParam022].f_28 = ((CEIL(bVar1) + CEIL(bVar2)) + CEIL(bVar3));
			bVar0 = Global_49310[bParam022].f_28;
			*iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(10));
			Function_375(bParam0, *iParam2, 1, CEIL(bVar1), CEIL(bVar2), CEIL(bVar3), 19);
			break;
		
		case 0x00000004:
			bVar0 = Global_49310[bParam022].f_28;
			*iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(true));
			Function_375(bParam0, *iParam2, 0, 4294967295, 4294967295, 4294967295, 0);
			break;
	}
	return;
}

bool Function_380(bool bParam0, bool bParam1, bool bParam2) //Position: 0x18D46 / 101702
{
	char* cVar0[16];
	bool bVar4;
	
	if (bParam2)
	{
		if (Function_34() || Global_34165.f_44)
		{
			return (*&Global_49399[bParam022] + 36)[bParam1];
		}
		return (*&Global_49310[bParam022] + 36)[bParam1];
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_381();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		if (DECOR_CHECK_EXIST(bVar4, &cVar0))
		{
			return DECOR_GET_FLOAT(bVar4, &cVar0);
		}
		return -1.0f;
	}
	LOG_ERROR("AM_RETRIEVE_FLOAT: failed to retrieve float value from slot");
	return -1.0f;
}

var Function_381() //Position: 0x18E08 / 101896
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_382() //Position: 0x18E55 / 101973
{
	Function_399();
	Function_390();
	Function_383();
	return;
}

void Function_383() //Position: 0x18E64 / 101988
{
	Function_384(0);
	Function_384(1);
	Function_384(3);
	Function_384(2);
	return;
}

void Function_384(bool bParam0) //Position: 0x18E7A / 102010
{
	if (!Function_389(bParam0, 2))
	{
		Function_388(bParam0, 2);
		Function_385(bParam0, 0);
	}
	return;
}

void Function_385(bool bParam0, bool bParam1) //Position: 0x18E96 / 102038
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_377(bParam0));
	if ((bParam1 && Function_389(bParam0, 4)) || !bParam1)
	{
		PREPEND_JOURNAL_ENTRY(Function_377(bParam0), false);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_387(bParam0) };
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_376(bParam0) };
		UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_386(bParam0) };
		PREPEND_JOURNAL_ENTRY_DETAIL(Function_377(bParam0), &Var6, 0, 2, Function_389(bParam0, 4));
		if (bParam0 == 3)
		{
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_377(bParam0), "nAM_MAPHLP", 0, 2, true);
		}
		if (!bParam1)
		{
			Function_388(bParam0, 4);
		}
	}
	return;
}

struct<24> Function_386(bool bParam0) //Position: 0x18F1D / 102173
{
	char* cVar0[24];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_376(bParam0) };
	if (Global_34165.f_44 || Function_34())
	{
		stradd(&cVar0, "_mp_des", 24);
		if (!IS_STRING_VALID(UI_GET_STRING(&cVar0)))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_376(bParam0) };
			stradd(&cVar0, "_des", 24);
		}
	}
	else
	{
		stradd(&cVar0, "_des", 24);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_387(bool bParam0) //Position: 0x18F7A / 102266
{
	char* cVar0[24];
	
	if (Function_34() || Global_34165.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_49399[bParam022] + 16), 6);
		stradd(&cVar0, "_DYNAMIC_TITLE", 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_49310[bParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_388(bool bParam0, int iParam1) //Position: 0x18FE6 / 102374
{
	if (Function_34() || Global_34165.f_44)
	{
		Function_23(&Global_49399[bParam022] + 32, iParam1);
	}
	else
	{
		Function_23(&Global_49310[bParam022] + 32, iParam1);
	}
	return;
}

bool Function_389(bool bParam0, bool bParam1) //Position: 0x19017 / 102423
{
	if (Function_34() || Global_34165.f_44)
	{
		return Function_433(Global_49399[bParam022].f_32, bParam1);
	}
	return Function_433(Global_49310[bParam022].f_32, bParam1);
}

void Function_390() //Position: 0x19049 / 102473
{
	if (!Global_34165.f_44)
	{
		Function_391(0, &Global_49310, "AMZSS", 3, 0, "UN_UNDEADSHARPSHOOTER");
		Function_391(1, &Global_49310, "AMZMH", 3, 0, "UN_UNDEADHUNTER");
		Function_391(2, &Global_49310, "AMZFH", 3, 0, "UN_FOURHORSES");
		Function_391(3, &Global_49310, "AMZTH", 3, 0, "UN_UNDEADTREASUREHUNTER");
	}
	return;
}

void Function_391(bool bParam0, var uParam1, char* cParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x190F0 / 102640
{
	int iVar0;
	var uVar1;
	
	strcpy(uParam1[bParam022] + 16, cParam2, 8);
	(*uParam1)[bParam022] = bParam0;
	uParam1[bParam022]->f_84 = bParam4;
	if (Global_3364 || Global_83864.f_1276)
	{
		uParam1[bParam022]->f_8 = 0;
		if (Global_34165.f_44)
		{
			Global_49399[bParam022].f_28 = 0;
			Global_49399[bParam022].f_12 = 0.0f;
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				(*&Global_49399[bParam022] + 36)[iVar0] = 0.0f;
				iVar0++;
			}
		}
		else
		{
			Global_49310[bParam022].f_28 = 0;
			Global_49310[bParam022].f_12 = 0.0f;
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				(*&Global_49310[bParam022] + 36)[iVar0] = 0.0f;
				iVar0++;
			}
		}
	}
	if (Global_83864.f_1276)
	{
		Function_398(bParam0, 4);
		Function_398(bParam0, 2);
		Function_397(bParam0, 0);
		Function_397(bParam0, 1);
		uVar1 = Function_396(bParam0);
		Function_395(&uVar1);
		Function_394(bParam0, 1);
	}
	if (bParam4)
	{
		if (!Global_34165.f_44)
		{
			uParam1[bParam022]->f_4 = 1;
			uParam1[bParam022]->f_8 = 0;
			return;
		}
	}
	if (!IS_STRING_VALID(bParam5))
	{
		bParam5 = "challenge_04";
	}
	Function_393(bParam0, uParam3, bParam5);
	Function_385(bParam0, 1);
	if (StackVal && StackVal != 2 != 10)
	{
		Function_392(bParam0);
	}
	else
	{
		uParam1[bParam022]->f_4 = 0;
		uParam1[bParam022]->f_12 = 0.0f;
		SET_JOURNAL_ENTRY_PROGRESS(Function_377(bParam0), 0.0f, 1, 0);
	}
}

void Function_392(bool bParam0) //Position: 0x19261 / 103009
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_377(bParam0));
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_387(bParam0) };
	if (Function_34() || Global_34165.f_44)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_376(bParam0) };
	}
	else
	{
		memcpy(&Var6, StackVal, *(&Global_49310[bParam022] + 16), 6);
	}
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_386(bParam0) };
	APPEND_JOURNAL_ENTRY_DETAIL(Function_377(bParam0), &Var6, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Function_377(bParam0), true);
	SET_JOURNAL_ENTRY_PROGRESS(Function_377(bParam0), 1.0f, 0, 0);
	return;
}

var Function_393(int iParam0, int iParam1, int iParam2) //Position: 0x192D4 / 103124
{
	struct<6> Var0;
	var uVar6;
	var uVar10;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_387(iParam0) };
	if (Function_34() || Global_34165.f_44)
	{
		Global_49399[iParam022].f_24 = CREATE_JOURNAL_ENTRY(&Var0, iParam1, false, iParam2);
		memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_376(iParam0), 4);
		UI_SET_STRING(&Var0, UI_GET_STRING(&uVar6));
		return Global_49399[iParam022].f_24;
	}
	Global_49310[iParam022].f_24 = CREATE_JOURNAL_ENTRY(&Var0, iParam1, false, iParam2);
	memcpy(&uVar10, StackVal, StackVal, StackVal, StackVal, StackVal, Function_376(iParam0), 4);
	UI_SET_STRING(&Var0, UI_GET_STRING(&uVar10));
	return Global_49310[iParam022].f_24;
}

void Function_394(bool bParam0, bool bParam1) //Position: 0x19353 / 103251
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_381();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_INTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_FLOATSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			if (Function_34() || Global_34165.f_44)
			{
				(*&Global_49399[bParam022] + 36)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_49310[bParam022] + 36)[bVar0] = 0.0f;
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_TIMERSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_OBJECTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			if (Function_34() || Global_34165.f_44)
			{
				(*&Global_49399[bParam022] + 36)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_49310[bParam022] + 36)[bVar0] = 0.0f;
			}
			bVar0++;
		}
	}
	if (bParam1)
	{
		if (Function_34() || Global_34165.f_44)
		{
			Global_49399[bParam022].f_28 = 0;
		}
		else
		{
			Global_49310[bParam022].f_28 = 0;
		}
	}
	return;
}

void Function_395(int iParam0) //Position: 0x19513 / 103699
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_OBJECTSET_VALID(*iParam0))
	{
		bVar0 = false;
		if (GET_OBJECTSET_SIZE(*iParam0) >= bVar0)
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *iParam0);
			while (IS_OBJECT_VALID(bVar1))
			{
				if (DECOR_CHECK_EXIST(bVar1, "AM_NO_PURGE"))
				{
					bVar2 = DECOR_GET_INT(bVar1, "AM_NO_PURGE");
					bVar2 = (bVar2 - 1);
					DECOR_SET_INT(bVar1, "AM_NO_PURGE", bVar2);
				}
				bVar0++;
				if (GET_OBJECTSET_SIZE(*iParam0) >= bVar0)
				{
					bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *iParam0);
				}
				else
				{
					bVar1 = "";
				}
			}
		}
		DISBAND_OBJECTSET(*iParam0);
	}
	else
	{
		LOG_ERROR("AM_PURGE_COLLECTION: attempting to disband an invalid objectset");
	}
	return;
}

var Function_396(int iParam0) //Position: 0x195FC / 103932
{
	int iVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar1 = Function_381();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		strcpy(&cVar2, "nAM_OBJSET", 16);
		straddi(&cVar2, iParam0, 16);
		iVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bVar1, &cVar2));
	}
	return iVar0;
}

void Function_397(int iParam0, bool bParam1) //Position: 0x19633 / 103987
{
	if (Global_34165.f_44)
	{
		REMOVE_JOURNAL_ENTRY(Global_49399[iParam022].f_24, bParam1);
	}
	else
	{
		REMOVE_JOURNAL_ENTRY(Global_49310[iParam022].f_24, bParam1);
	}
	return;
}

void Function_398(int iParam0, int iParam1) //Position: 0x19660 / 104032
{
	if (Global_34165.f_44)
	{
		Function_432(&Global_49399[iParam022] + 32, iParam1);
	}
	else
	{
		Function_432(&Global_49310[iParam022] + 32, iParam1);
	}
	return;
}

void Function_399() //Position: 0x1968D / 104077
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	char* cVar3[16];
	char* cVar7[16];
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (Global_63000 - 1))
	{
		Function_401(bVar0);
		bVar0++;
	}
	bVar1 = Function_381();
	bVar2 = Function_400();
	if (Global_34165.f_44)
	{
		bVar0 = false;
		while (bVar0 < 35)
		{
			strcpy(&cVar3, "nAM_OBJSET", 16);
			stradd(&cVar3, INT_TO_STRING(bVar0), 16);
			CREATE_OBJECTSET_IN_LAYOUT(&cVar3, bVar1, 4294967295, 0);
			bVar0++;
		}
	}
	else
	{
		bVar0 = false;
		while (bVar0 < 3)
		{
			strcpy(&cVar7, "nAM_OBJSET", 16);
			stradd(&cVar7, INT_TO_STRING(bVar0), 16);
			if (!IS_OBJECTSET_VALID(GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bVar1, &cVar7))))
			{
				CREATE_OBJECTSET_IN_LAYOUT(&cVar7, bVar1, 4294967295, 0);
			}
			bVar0++;
		}
	}
	ITERATE_EVERYWHERE(bVar2);
	ITERATE_ON_OBJECT_TYPE(bVar2, 3);
	ITERATE_IN_LAYOUT(bVar2, bVar1);
	return;
}

var Function_400() //Position: 0x19754 / 104276
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = Function_381();
	bVar1 = GET_ITERATOR_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bVar0, "AmbientMissions_Iterator"));
	if (!IS_ITERATOR_VALID(bVar1))
	{
		bVar1 = CREATE_NAMED_OBJECT_ITERATOR(bVar0, "AmbientMissions_Iterator");
	}
	return bVar1;
}

void Function_401(int iParam0) //Position: 0x197B1 / 104369
{
	Global_63000[iParam08] = 4294967295;
	Global_63000[iParam08].f_4 = 4294967295;
	strcpy(&Global_63000[iParam08] + 8, "NHIL", 16);
	strcpy(&Global_63000[iParam08] + 24, "NHIL", 8);
	return;
}

void Function_402() //Position: 0x197ED / 104429
{
	Function_38(&(Global_29008[Global_30717[1]]), 256);
	Function_38(&(Global_29008[Global_30640[4]]), 256);
	Function_38(&(Global_29008[Global_30668[2]]), 256);
	Function_408(&(Global_29008[Global_30668[2]]), 32768);
	Function_38(&(Global_29008[Global_30658[3]]), 256);
	Function_408(&(Global_29008[Global_30658[3]]), 32768);
	Function_38(&(Global_29008[Global_30685[2]]), 256);
	Function_408(&(Global_29008[Global_30685[2]]), 32768);
	Function_38(&(Global_29008[Global_30679[1]]), 256);
	Function_408(&(Global_29008[Global_30679[1]]), 32768);
	return;
}

void Function_403(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x198A1 / 104609
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_304(12);
	Function_308(2);
	Function_305((15 - Function_311(105)));
	if (Function_157(bParam0) == 1)
	{
		iVar2 = Function_156(bParam0);
		Function_151(&(Global_3422[iVar240]));
		Function_435(4194304);
		if (bParam3)
		{
			Function_404(iVar2, &uVar0, 0);
		}
		else if (bParam4)
		{
			Function_404(iVar2, &uVar0, 0);
		}
		uVar1 = Function_101();
		if (bParam1)
		{
			Function_89(iVar2, bParam0, uVar1);
			Function_88();
		}
	}
	Global_34165.f_56 = 0;
	Global_34165.f_60 = 0;
	Global_13172[bParam011].f_32 = TO_FLOAT(GET_TIME_OF_DAY_AS_INT());
	Function_67(bParam0, bParam1, uParam2, uVar1);
	if (Function_157(bParam0) == 1)
	{
		if (bParam1)
		{
		}
	}
	Function_313(0);
	iVar2 = Function_156(bParam0);
	if (iVar2 == 1)
	{
		Function_314("ZOMBIE_STORY_1_SHORT", (7.5f + 5.0f), 1, 2, 0, 0, 0, 0);
	}
	else if (iVar2 == 2)
	{
		Function_314("ZOMBIE_STORY_4_SHORT", 7.5f, 1, 2, 0, 0, 0, 0);
	}
}

void Function_404(int iParam0, var uParam1, bool bParam2) //Position: 0x199AA / 104874
{
	struct<4> Var0;
	
	*uParam1 = *uParam1;
	if (!Function_16(iParam0))
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
			Function_149(21, bParam2, 0);
			Function_149(16, bParam2, 0);
			SET_DISABLE_DEADEYE(0, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
			SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_76(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

int Function_405(int iParam0) //Position: 0x19A48 / 105032
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_406(bool bParam0) //Position: 0x19A62 / 105058
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

void Function_407() //Position: 0x19AA8 / 105128
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	iVar0 = 3;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_87(Global_13172[iVar011], &iVar1, &iVar2, &uVar3);
			if (iVar1 == 0)
			{
				if (StackVal == 3)
				{
					iVar4 = 4294967295;
					if (iVar2 == Global_30640[2])
					{
						iVar4 = CREATE_JOURNAL_ENTRY("TwinRocksJournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_30668[2])
					{
						iVar4 = CREATE_JOURNAL_ENTRY("PBJournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_30658[0])
					{
						iVar4 = CREATE_JOURNAL_ENTRY("TumbleweedJournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_30658[2])
					{
						iVar4 = CREATE_JOURNAL_ENTRY("SOLJournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_30658[3])
					{
						iVar4 = CREATE_JOURNAL_ENTRY("GAPJournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_30679[1])
					{
						iVar4 = CREATE_JOURNAL_ENTRY("FM_JournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_30685[2])
					{
						iVar4 = CREATE_JOURNAL_ENTRY("tes_JournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_30685[1])
					{
						iVar4 = CREATE_JOURNAL_ENTRY("NOS_JournalID", 3, 4294967295, 0);
					}
					if (iVar4 != 4294967295)
					{
						APPEND_JOURNAL_ENTRY(iVar4, 1);
					}
				}
			}
		}
		iVar0++;
	}
	return;
}

void Function_408(var uParam0, bool bParam1) //Position: 0x19C37 / 105527
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

var Function_409(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0x19C4E / 105550
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	struct<9> Var5;
	
	bVar0 = Function_410(bParam1);
	if (bVar0 == 4294967295)
	{
		LOG_ERROR("Too many regions, increase the gRegions array size!!!!");
		return 4294967295;
	}
	if (Global_3364)
	{
		Global_29008[bVar0] = 0;
	}
	else
	{
		Function_408(&(Global_29008[bVar0]), 0x403ee3ff);
	}
	Global_29155[bVar010].f_8 = bParam3;
	Global_29155[bVar010] = iParam2;
	if (STRING_LENGTH(bParam0) >= 0)
	{
		Global_29155[bVar010].f_16 = GET_ASSET_ID(bParam0, 4);
	}
	else
	{
		Global_29155[bVar010].f_16 = 4294967295;
	}
	Global_29155[bVar010].f_4 = iParam4;
	strcpy(&Global_29155[bVar010] + 20, bParam1, 4);
	Global_29155[bVar010].f_24 = "";
	if (bParam6)
	{
		Function_38(&(Global_29008[bVar0]), 8192);
	}
	if (bParam7)
	{
		Function_38(&(Global_29008[bVar0]), 16384);
	}
	if (bParam8)
	{
		Function_38(&(Global_29008[bVar0]), 32768);
	}
	if (bParam9)
	{
		Function_38(&(Global_29008[bVar0]), 65536);
	}
	switch (iParam4)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			if (Function_342(iParam2))
			{
				AMBIENCE_AUDIO_VALIDATE_REGION(&Global_29155[iParam210] + 20, bParam1);
			}
			break;
		
		case 0x00000002:
			AMBIENCE_AUDIO_VALIDATE_REGION(bParam1, "");
			break;
		
		default:
			break;
	}
	if (((IS_OBJECT_VALID(bParam3) && iParam4 == 1) && iParam4 == 2) && iParam4 == 0)
	{
		switch (iParam4)
		{
			case 0x00000003:
				iVar1 = 63;
				break;
			
			case 0x00000004:
			case 0x00000005:
				iVar1 = 60;
				break;
			
			case 0x00000006:
			case 0x00000007:
				iVar1 = 48;
				break;
			
			default:
				break;
		}
		GET_OBJECT_POSITION(bParam3, &vVar2);
		if (GET_OBJECT_TYPE(bParam3) == 9)
		{
			GET_VOLUME_SCALE(bParam3, &vVar5);
		}
		else
		{
			vVar5 = { 125.0f, 125.0f, 125.0f };
		}
		if (Function_77())
		{
			if (STRINGS_ARE_EQUAL("blk", bParam1))
			{
				vVar2 = { 323.835f, 114.447f, 1252.132f };
			}
			else if (STRINGS_ARE_EQUAL("upr", bParam1))
			{
				vVar2 = { -495.718f, 144.757f, 1918.028f };
			}
			else if (STRINGS_ARE_EQUAL("thi", bParam1))
			{
				vVar2 = { 366.715f, 90.202f, 2308.272f };
			}
			else if (STRINGS_ARE_EQUAL("odd", bParam1))
			{
				vVar2 = { -2923.858f, 19.593f, 2651.791f };
			}
			else if (STRINGS_ARE_EQUAL("pln", bParam1))
			{
				vVar2 = { -3167.428f, 45.588f, 3621.723f };
			}
			else if (STRINGS_ARE_EQUAL("mtf", bParam1))
			{
				vVar2 = { -460.607f, 75.493f, 2162.597f };
			}
			else if (STRINGS_ARE_EQUAL("aur", bParam1))
			{
				vVar2 = { -969.358f, 193.02f, 1322.21f };
			}
			else if (STRINGS_ARE_EQUAL("grn", bParam1))
			{
				vVar2 = { -1130.731f, 26.515f, 3123.629f };
			}
			else if (STRINGS_ARE_EQUAL("brb", bParam1))
			{
				vVar2 = { -493.719f, 20.081f, 3021.842f };
			}
			else if (STRINGS_ARE_EQUAL("bcc", bParam1))
			{
				vVar2 = { -533.88f, 164.916f, 1809.747f };
			}
		}
		Global_29155[bVar010].f_28 = APPEND_REGION(GET_OBJECT_NAME(bParam3), &vVar2, ((vVar5.x + vVar5.z) / 2.0f), iVar1, Function_35(&(Global_29008[bVar0]), 4096), 0, 0);
	}
	else if (IS_OBJECT_VALID(bParam3) && iParam4 != 2)
	{
		if (STRINGS_ARE_EQUAL("hgn", bParam1))
		{
			vVar8 = { -1189.689f, 111.072f, 2203.254f };
		}
		else if (STRINGS_ARE_EQUAL("cho", bParam1))
		{
			vVar8 = { -2562.781f, 25.953f, 2316.282f };
		}
		else if (STRINGS_ARE_EQUAL("rio", bParam1))
		{
			vVar8 = { -2948.654f, 40.521f, 3196.021f };
		}
		else if (STRINGS_ARE_EQUAL("gtr", bParam1))
		{
			vVar8 = { -4200.715f, 22.615f, 2592.929f };
		}
		else if (STRINGS_ARE_EQUAL("pun", bParam1))
		{
			vVar8 = { -4567.712f, 14.362f, 4147.449f };
		}
		else if (STRINGS_ARE_EQUAL("prd", bParam1))
		{
			vVar8 = { -2266.155f, 9.958f, 4085.551f };
		}
		else if (STRINGS_ARE_EQUAL("dzc", bParam1))
		{
			vVar8 = { -345.969f, 22.996f, 3436.474f };
		}
		else if (STRINGS_ARE_EQUAL("grt", bParam1))
		{
			vVar8 = { 90.633f, 110.101f, 1037.087f };
		}
		else if (STRINGS_ARE_EQUAL("tal", bParam1))
		{
			vVar8 = { -842.584f, 186.831f, 1282.891f };
		}
		Global_29155[bVar010].f_28 = APPEND_REGION(GET_OBJECT_NAME(bParam3), &vVar8, 125.0f, 63, 1, 0, 0);
	}
	else
	{
		Global_29155[bVar010].f_28 = 4294967295;
	}
	Global_29155[bVar010].f_36 = iParam5;
	if (IS_VOLUME_VALID(StackVal))
	{
		DECOR_SET_INT(StackVal, "regid", bVar0);
	}
	if (!iParam4 != 1)
	{
		Function_96(473, (Function_58(473) + 1.0f));
		iVar11 = Function_148(bVar0);
		if (iVar11 == Global_30621[0])
		{
			Function_96(474, (Function_58(474) + 1.0f));
		}
		else if (iVar11 == Global_30621[1])
		{
			Function_96(475, (Function_58(475) + 1.0f));
		}
		else if (iVar11 == Global_30621[2])
		{
			Function_96(476, (Function_58(476) + 1.0f));
		}
	}
	else
	{
		Function_38(&(Global_29008[bVar0]), 4096);
	}
	return bVar0;
}

var Function_410(bool bParam0) //Position: 0x1A206 / 107014
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal == 0)
		{
			return iVar0;
		}
		if (STRINGS_ARE_EQUAL(&Global_29155[iVar010] + 20, bParam0) && !STRINGS_ARE_EQUAL(bParam0, ""))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_411() //Position: 0x1A252 / 107090
{
	Function_414(&(Global_6962[102]), 2);
	Function_412(&Global_6962, &Global_8172, 0, 268, "zombieBrains/RM_Br_Z");
	Function_412(&Global_6962, &Global_8172, 3, 269, "zombieBrains/RM_Br_Z");
	Function_412(&Global_6962, &Global_8172, 1, 276, "zombieBrains/RM_Br_Z");
	Function_412(&Global_6962, &Global_8172, 2, 283, "zombieBrains/RM_Br_Z");
	Function_412(&Global_6962, &Global_8172, 11, 289, "zombieBrains/RM_Br_Z");
	Function_412(&Global_6962, &Global_8172, 4, 391, "zombieBrains/SBrain_Z");
	Function_412(&Global_6962, &Global_8172, 5, 392, "zombieBrains/SBrain_Z");
	Function_412(&Global_6962, &Global_8172, 6, 393, "zombieBrains/SBrain_Z");
	Function_412(&Global_6962, &Global_8172, 7, 394, "zombieBrains/SBrain_Z");
	Function_412(&Global_6962, &Global_8172, 8, 395, "zombieBrains/SBrain_Z");
	Function_412(&Global_6962, &Global_8172, 9, 396, "zombieBrains/SBrain_Z");
	return;
}

void Function_412(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x1A3F8 / 107512
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = uParam2;
	(*uParam1)[iVar03] = iParam3;
	if (!STRINGS_ARE_EQUAL(cParam4, ""))
	{
		strcpy(&cVar1, "$/content/scripting/gringo/gringobrains/", 64);
		stradd(&cVar1, bParam4, 64);
		uParam1[iVar03]->f_4 = GET_ASSET_ID(&cVar1, 1);
	}
	else
	{
		uParam1[iVar03]->f_4 = "";
	}
	Function_414(uParam0[iVar02], 1);
	Function_413(uParam0[iVar02], 2);
	Function_414(uParam0[iVar02], 8);
	Function_414(uParam0[iVar02], 16);
}

void Function_413(var uParam0, int iParam1) //Position: 0x1A492 / 107666
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_414(var uParam0, int iParam1) //Position: 0x1A4A1 / 107681
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_415() //Position: 0x1A4B8 / 107704
{
	Function_412(&Global_6667, &Global_7735, 0, 15, "zombieBrains/RM_Br_Z");
	Function_412(&Global_6667, &Global_7735, 1, 24, "zombieBrains/RF_Br_Z");
	Function_412(&Global_6667, &Global_7735, 2, 420, "zombieBrains/RM_Br_Z");
	Function_412(&Global_6667, &Global_7735, 3, 36, "zombieBrains/RM_Br_Z");
	Function_412(&Global_6667, &Global_7735, 4, 38, "zombieBrains/RM_Br_Z");
	Function_412(&Global_6667, &Global_7735, 5, 39, "zombieBrains/RM_Br_Z");
	Function_412(&Global_6667, &Global_7735, 6, 54, "zombieBrains/RF_Br_Z");
	Function_412(&Global_6667, &Global_7735, 7, 55, "zombieBrains/RF_Br_Z");
	Function_412(&Global_6667, &Global_7735, 8, 56, "zombieBrains/RF_Br_Z");
	Function_412(&Global_6667, &Global_7735, 9, 404, "zombieBrains/RM_Br_Z");
	Function_412(&Global_6667, &Global_7735, 13, 400, "zombieBrains/RM_Br_Z");
	Function_412(&Global_6667, &Global_7735, 14, 372, "zombieBrains/SBrain_Z");
	Function_412(&Global_6667, &Global_7735, 15, 373, "zombieBrains/SBrain_Z");
	Function_412(&Global_6667, &Global_7735, 10, 374, "zombieBrains/SBrain_Z");
	Function_412(&Global_6667, &Global_7735, 11, 375, "zombieBrains/SBrain_Z");
	Function_412(&Global_6667, &Global_7735, 12, 376, "zombieBrains/SBrain_Z");
	return;
}

void Function_416() //Position: 0x1A702 / 108290
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 <= Global_9724)
	{
		if (StackVal != 0)
		{
			iVar4 = Function_418(StackVal);
			Function_111(StackVal);
			vVar1 = { StackVal, StackVal, Function_111(StackVal) };
			Global_9724[iVar0] = ADD_BLIP_FOR_COORD(StackVal, Function_417(&vVar1), 0.0f, 2, iVar4);
			if (StackVal == 23)
			{
				SET_BLIP_COLOR(Global_9724[iVar0], 1.0f, 1.0f, 1.0f, 0.5f);
				SET_BLIP_NAME(Global_9724[iVar0], "BLIP_CHANCE");
			}
			else if (StackVal == 11)
			{
				SET_BLIP_NAME(Global_9724[iVar0], "BLIP_HORSEBREAKING");
			}
			else if (StackVal == 24)
			{
				SET_BLIP_NAME(Global_9724[iVar0], "BLIP_CHANCE");
			}
			UNK_0xFF3DB575(Global_9724[iVar0], 1);
			SET_BLIP_PRIORITY(Global_9724[iVar0], 1);
		}
		iVar0++;
	}
	return;
}

int Function_417(int iParam0) //Position: 0x1A80A / 108554
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

int Function_418(int iParam0) //Position: 0x1A941 / 108865
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

void Function_419() //Position: 0x1A9F9 / 109049
{
	var uVar0;
	
	Function_420(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("regions_layout");
	Local_4.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chov_armadillo", 3, -2148.081f, 16.097f, 2611.195f, 0.0f, 0.0f, 0.0f, 150.0f, 154.3634f, 150.0f);
	Local_4.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_4, "riov_fortmercer", 3, -2678.089f, 67.263f, 3450.585f, 0.0f, 20.0f, 0.0f, 150.0f, 50.0f, 150.0f);
	Local_4.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chov_twinrocks", 3, -2428.0f, 24.627f, 2144f, 0.0f, 20.0f, 0.0f, 175.0f, 50.0f, 175.0f);
	Local_4.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chov_ridgewood", 3, -3260.67f, 15.999f, 2705.505f, 0.0f, 20.0f, 0.0f, 125.0f, 50.0f, 125.0f);
	Local_4.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrv_tumbleweed", 3, -3946.923f, 28.894f, 2948.856f, 0.0f, 9.238991f, 0.0f, 176.1309f, 64.53324f, 159.0415f);
	Local_4.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrv_gaptooth", 3, -4450.974f, 20.923f, 3194.357f, 0.0f, 20.0f, 0.0f, 187.8394f, 71.9055f, 196.0643f);
	Local_4.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrv_solomons", 3, -3881.611f, 8.032f, 3660.03f, 0.0f, 20.0f, 0.0f, 125.0f, 50.0f, 125.0f);
	Local_4.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrv_rathskeller", 3, -3660f, 42.235f, 2136.0f, 0.0f, 20.0f, 0.0f, 100.0f, 50.0f, 100.0f);
	Local_4.f_132 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "frov_cholla_set");
	(*&Local_4 + 76)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla01", 3, -2602.73f, 33.40513f, 2665.931f, 0.0f, 0.05652091f, 0.0f, 910.5437f, 150.0f, 450.0f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[0]);
	(*&Local_4 + 76)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla02", 3, -2199.864f, 33.40513f, 2155.363f, 0.0f, 14.90549f, 0.0f, 503.9865f, 150.0f, 326.1552f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[1]);
	(*&Local_4 + 76)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla03", 3, -3359.402f, 33.40513f, 2400.197f, 0.0f, -31.93789f, 0.0f, 239.5854f, 85.69038f, 130.7859f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[2]);
	(*&Local_4 + 76)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla04", 3, -1862.122f, 33.40513f, 2982.551f, 0.0f, -25.86499f, 0.0f, 477.1432f, 150.0f, 292.3265f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[3]);
	(*&Local_4 + 76)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla05", 3, -2057.968f, 33.40513f, 3247.92f, 0.0f, -36.65475f, 0.0f, 570.6682f, 150.0f, 176.8855f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[4]);
	(*&Local_4 + 76)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla06", 3, -3210.272f, 33.40513f, 2897.85f, 0.0f, 0.05652091f, 0.0f, 260.1258f, 80.80408f, 198.9715f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[5]);
	(*&Local_4 + 76)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla07", 3, -3371.573f, 33.40513f, 2692.565f, 0.0f, 2.758052f, 0.0f, 125.0f, 150.0f, 297.8613f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[6]);
	(*&Local_4 + 76)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla08", 3, -2389.001f, 33.40513f, 2055.168f, 0.0f, -76.20333f, 0.0f, 240.372f, 150.0f, 349.7114f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[7]);
	(*&Local_4 + 76)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla09", 3, -1878.934f, 33.40513f, 2351.455f, 0.0f, -30.36887f, 0.0f, 125.0f, 150.0f, 183.2645f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[8]);
	(*&Local_4 + 76)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla010", 3, -1767.727f, 33.40513f, 2752.065f, 0.0f, 0.05652091f, 0.0f, 157.8653f, 150.0f, 172.4045f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[9]);
	(*&Local_4 + 76)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla011", 3, -2425.848f, 33.40513f, 3055.122f, 0.0f, -24.74285f, 0.0f, 279.884f, 150.0f, 144.233f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[10]);
	(*&Local_4 + 76)[11] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla012", 3, -2790.744f, 37.32828f, 2229.882f, 0.0f, 33.13997f, 0.0f, 168.0747f, 150.0f, 111.0339f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[11]);
	(*&Local_4 + 76)[12] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla013", 3, -3224.248f, 33.40513f, 2310.521f, 0.0f, -8.591194f, 0.0f, 151.5101f, 100.2558f, 90.35665f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[12]);
	Local_4.f_196 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "frov_gaptooth_set");
	(*&Local_4 + 136)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth1", 3, -3969.955f, 40.0f, 2804.408f, 0.0f, 0.0f, 0.0f, 425.0244f, 200.0f, 532.4791f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[0]);
	(*&Local_4 + 136)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth2", 3, -4209.322f, 40.0f, 3599.196f, 0.0f, -26.05212f, 0.0f, 371.451f, 200.0f, 205.1757f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[1]);
	(*&Local_4 + 136)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth3", 3, -4026.704f, 40.0f, 3358.218f, 0.0f, -26.05212f, 0.0f, 371.451f, 200.0f, 205.1757f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[2]);
	(*&Local_4 + 136)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth4", 3, -4479.839f, 40.0f, 2492.048f, 0.0f, -106.8796f, 0.0f, 371.451f, 200.0f, 205.1757f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[3]);
	(*&Local_4 + 136)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth5", 3, -3792.116f, 40.0f, 2371.747f, 0.0f, -121.7228f, 0.0f, 371.451f, 200.0f, 125.6738f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[4]);
	(*&Local_4 + 136)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth6", 3, -3902.983f, 40.0f, 3626.558f, 0.0f, -121.7228f, 0.0f, 175.9137f, 200.0f, 168.6144f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[5]);
	(*&Local_4 + 136)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth7", 3, -4701.729f, 40.0f, 3081.416f, 0.0f, -91.91017f, 0.0f, 622.3319f, 204.2115f, 533.3927f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[6]);
	(*&Local_4 + 136)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth8", 3, -3723.264f, 12.0f, 3466.478f, 0.0f, -27.09326f, 0.0f, 105.0f, 50.0f, 130.0f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[7]);
	(*&Local_4 + 136)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth9", 3, -4706.59f, 13.051f, 3682.356f, 0.0f, 20.0f, 0.0f, 187.5346f, 84.43104f, 149.7965f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[8]);
	(*&Local_4 + 136)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth10", 3, -4472.15f, 13.051f, 3646.979f, 0.0f, 20.0f, 0.0f, 187.5346f, 84.43104f, 149.7965f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[9]);
	(*&Local_4 + 136)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth11", 3, -4360.223f, 0.4618087f, 3691.596f, 0.206538f, -12.38739f, -0.8785428f, 187.5346f, 84.43104f, 108.0804f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[10]);
	(*&Local_4 + 136)[11] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth12", 3, -4147.811f, -11.15957f, 3808.613f, -0.9516244f, -38.17848f, 1.679624f, 187.5346f, 84.43104f, 87.76409f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[11]);
	(*&Local_4 + 136)[12] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth13", 3, -3949.441f, -11.15957f, 3940.317f, -0.9516244f, -38.17848f, 1.679624f, 189.331f, 85.23979f, 107.984f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[12]);
	(*&Local_4 + 136)[13] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth14", 3, -3891.702f, -11.43176f, 3817.105f, 5.824818f, -97.39114f, -4.68537f, 100.7107f, 85.23979f, 79.91846f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[13]);
	Local_4.f_228 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "frov_riobravo_set");
	(*&Local_4 + 200)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_riobravo0", 3, -2911.346f, 63.4446f, 3486.49f, 0.0f, 0.0f, 0.0f, 648.2305f, 275.4488f, 354.9236f);
	ADD_TO_VOLUME_SET(Local_4.f_228, (*&Local_4 + 200)[0]);
	(*&Local_4 + 200)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_riobravo1", 3, -3441.621f, 63.4446f, 3718.957f, 0.0f, 48.84464f, 0.0f, 436.935f, 279.3885f, 222.3333f);
	ADD_TO_VOLUME_SET(Local_4.f_228, (*&Local_4 + 200)[1]);
	(*&Local_4 + 200)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_riobravo2", 3, -2372.235f, 63.46845f, 3677.2f, 0.0f, 30.47767f, 0.0f, 299.4622f, 261.6896f, 157.2439f);
	ADD_TO_VOLUME_SET(Local_4.f_228, (*&Local_4 + 200)[2]);
	(*&Local_4 + 200)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_riobravo3", 3, -3460.174f, 63.4446f, 3251.896f, 0.0f, 30.47767f, 0.0f, 184.1259f, 236.5031f, 156.5505f);
	ADD_TO_VOLUME_SET(Local_4.f_228, (*&Local_4 + 200)[3]);
	(*&Local_4 + 200)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_riobravo4", 3, -2517.998f, 63.4446f, 3766.027f, 0.0f, 2.464206f, 0.0f, 299.4622f, 261.6896f, 157.2439f);
	ADD_TO_VOLUME_SET(Local_4.f_228, (*&Local_4 + 200)[4]);
	(*&Local_4 + 200)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_riobravo5", 3, -3120.765f, 63.4446f, 3811.641f, 0.0f, 25.83067f, 0.0f, 144.4332f, 265.1125f, 192.7761f);
	ADD_TO_VOLUME_SET(Local_4.f_228, (*&Local_4 + 200)[5]);
	Local_4.f_272 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "frov_hen_set");
	(*&Local_4 + 232)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_hennigan0", 3, -654.6435f, -0.572317f, 2513.387f, 0.0f, 90.32787f, 0.0f, 284.3203f, 640.8917f, 1015.424f);
	ADD_TO_VOLUME_SET(Local_4.f_272, (*&Local_4 + 232)[0]);
	(*&Local_4 + 232)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_hennigan1", 3, -792.6554f, -0.572317f, 2377.834f, 0.0f, 159.6195f, 0.0f, 396.5943f, 666.2946f, 309.2861f);
	ADD_TO_VOLUME_SET(Local_4.f_272, (*&Local_4 + 232)[1]);
	(*&Local_4 + 232)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_hennigan2", 3, -1391.018f, -0.572317f, 2373.582f, 0.0f, 110.2352f, 0.0f, 463.2761f, 652.4385f, 268.773f);
	ADD_TO_VOLUME_SET(Local_4.f_272, (*&Local_4 + 232)[2]);
	(*&Local_4 + 232)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_hennigan3", 3, -706.7838f, -0.572317f, 2868.703f, 0.0f, 110.2352f, 0.0f, 268.7076f, 652.4385f, 675.9031f);
	ADD_TO_VOLUME_SET(Local_4.f_272, (*&Local_4 + 232)[3]);
	(*&Local_4 + 232)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_hennigan4", 3, -1259.285f, -0.572317f, 2758.507f, 0.0f, 110.2352f, 0.0f, 320.8498f, 652.4385f, 258.9835f);
	ADD_TO_VOLUME_SET(Local_4.f_272, (*&Local_4 + 232)[4]);
	(*&Local_4 + 232)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_hennigan5", 3, -1219.818f, -0.572317f, 3107.28f, 0.0f, 134.4942f, 0.0f, 126.499f, 688.3062f, 205.6273f);
	ADD_TO_VOLUME_SET(Local_4.f_272, (*&Local_4 + 232)[5]);
	(*&Local_4 + 232)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_hennigan6", 3, 80.50993f, -0.572317f, 2265.647f, 0.0f, 169.9944f, 0.0f, 167.0905f, 688.3062f, 214.8033f);
	ADD_TO_VOLUME_SET(Local_4.f_272, (*&Local_4 + 232)[6]);
	(*&Local_4 + 232)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_hennigan7", 3, -1278.678f, -0.572317f, 2084.858f, 0.0f, 246.3853f, 0.0f, 167.0905f, 688.3062f, 338.9639f);
	ADD_TO_VOLUME_SET(Local_4.f_272, (*&Local_4 + 232)[7]);
	(*&Local_4 + 232)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_hennigan8", 3, -1562.09f, -0.572317f, 1962.695f, 0.0f, 212.4582f, 0.0f, 89.96301f, 688.3062f, 190.3966f);
	ADD_TO_VOLUME_SET(Local_4.f_272, (*&Local_4 + 232)[8]);
	Local_4.f_300 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "norv_talltrees_set");
	(*&Local_4 + 276)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "norv_talltrees01", 3, -603.6162f, 100.0f, 1668.403f, 0.0f, 11.39583f, 0.0f, 425.5292f, 621.0958f, 405.257f);
	ADD_TO_VOLUME_SET(Local_4.f_300, (*&Local_4 + 276)[0]);
	(*&Local_4 + 276)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "norv_talltrees02", 3, -860.4616f, 100.0f, 1043.82f, 0.0f, -21.02844f, 0.0f, 506.3877f, 650.0f, 410.6267f);
	ADD_TO_VOLUME_SET(Local_4.f_300, (*&Local_4 + 276)[1]);
	(*&Local_4 + 276)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "norv_talltrees03", 3, -948.3646f, 100.0f, 1483.085f, 0.0f, 7.118113f, 0.0f, 369.6403f, 695.7256f, 413.5833f);
	ADD_TO_VOLUME_SET(Local_4.f_300, (*&Local_4 + 276)[2]);
	(*&Local_4 + 276)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "norv_talltrees04", 3, -295.1738f, 100.0f, 2009.13f, 0.0f, 7.118113f, 0.0f, 250.0f, 650.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_300, (*&Local_4 + 276)[3]);
	(*&Local_4 + 276)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "norv_talltrees09", 3, -221.3179f, 100.0f, 1842.906f, 0.0f, 21.17577f, 0.0f, 110.2175f, 650.0f, 232.1736f);
	ADD_TO_VOLUME_SET(Local_4.f_300, (*&Local_4 + 276)[4]);
	Local_4.f_316 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "norv_greatplains_set");
	(*&Local_4 + 304)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "norv_greatplains0", 3, 385.7805f, 50.0f, 1398.548f, 0.04069565f, 37.93713f, -0.07905933f, 597.0989f, 650.0f, 777.3274f);
	ADD_TO_VOLUME_SET(Local_4.f_316, (*&Local_4 + 304)[0]);
	(*&Local_4 + 304)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "norv_greatplains1", 3, -235.6304f, 50.0f, 1242.495f, 0.03415427f, -7.712558f, -0.1062401f, 117.4279f, 650.0f, 127.3956f);
	ADD_TO_VOLUME_SET(Local_4.f_316, (*&Local_4 + 304)[1]);
	Local_4.f_352 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "mexv_puntaorgullo_set");
	(*&Local_4 + 320)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_puntaorgullo3", 3, -3908.31f, 100.8937f, 4547.261f, 0.0f, 90.32787f, 0.0f, 426.758f, 640.8917f, 1015.68f);
	ADD_TO_VOLUME_SET(Local_4.f_352, (*&Local_4 + 320)[0]);
	(*&Local_4 + 320)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_puntaorgullo2", 3, -4537.572f, 100.2876f, 4007.03f, 0.0f, 90.32787f, 0.0f, 167.637f, 232.9514f, 235.1425f);
	ADD_TO_VOLUME_SET(Local_4.f_352, (*&Local_4 + 320)[1]);
	(*&Local_4 + 320)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_puntaorgullo1", 3, -4674.773f, 100.8937f, 4831.357f, 0.0f, 90.32787f, 0.0f, 289.5066f, 640.8917f, 481.8735f);
	ADD_TO_VOLUME_SET(Local_4.f_352, (*&Local_4 + 320)[2]);
	(*&Local_4 + 320)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_puntaorgullo0", 3, -3250.339f, 100.8937f, 4251.694f, 0.0f, 90.32787f, 0.0f, 214.0201f, 640.8917f, 208.7931f);
	ADD_TO_VOLUME_SET(Local_4.f_352, (*&Local_4 + 320)[3]);
	(*&Local_4 + 320)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_puntaorgullo4", 3, -4379.823f, 94.99134f, 3960.021f, -11.72191f, 79.01791f, -9.020085f, 98.07817f, 100.8917f, 230.4239f);
	ADD_TO_VOLUME_SET(Local_4.f_352, (*&Local_4 + 320)[4]);
	(*&Local_4 + 320)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_puntaorgullo5", 3, -4152.083f, 102.1011f, 4060.414f, -3.983634f, 56.14435f, -0.8168986f, 77.13268f, 100.8917f, 230.4239f);
	ADD_TO_VOLUME_SET(Local_4.f_352, (*&Local_4 + 320)[5]);
	(*&Local_4 + 320)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_puntaorgullo6", 3, -4506.897f, 100.8937f, 4130.898f, 15.41098f, 83.84049f, 15.19284f, 206.3981f, 232.9514f, 413.039f);
	ADD_TO_VOLUME_SET(Local_4.f_352, (*&Local_4 + 320)[6]);
	Local_4.f_380 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "mexv_perdido_set");
	(*&Local_4 + 356)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_perdido0", 3, -1893.859f, 54.86121f, 4684.601f, 0.0f, 90.32787f, 0.0f, 608.0305f, 640.8917f, 900.0f);
	ADD_TO_VOLUME_SET(Local_4.f_380, (*&Local_4 + 356)[0]);
	(*&Local_4 + 356)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_perdido1", 3, -2450.241f, 54.86121f, 4283.085f, 0.0f, 68.25627f, 0.0f, 278.5218f, 640.8917f, 625.5054f);
	ADD_TO_VOLUME_SET(Local_4.f_380, (*&Local_4 + 356)[1]);
	(*&Local_4 + 356)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_perdido2", 3, -1938.71f, 54.86121f, 4044.273f, 0.0f, 113.8802f, 0.0f, 278.5218f, 640.8917f, 675.4775f);
	ADD_TO_VOLUME_SET(Local_4.f_380, (*&Local_4 + 356)[2]);
	(*&Local_4 + 356)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_perdido3", 3, -2824.411f, 54.86121f, 4388.975f, 0.0f, 43.21671f, 0.0f, 75.0f, 650.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_380, (*&Local_4 + 356)[3]);
	(*&Local_4 + 356)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_perdido4", 3, -2352.672f, 54.86121f, 4003.182f, 0.0f, 15.84f, 0.0f, 129.0348f, 640.8917f, 67.42111f);
	ADD_TO_VOLUME_SET(Local_4.f_380, (*&Local_4 + 356)[4]);
	Local_4.f_404 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "mexv_diez_set");
	(*&Local_4 + 384)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_diez1", 3, -162.3152f, 40.93773f, 4314.125f, 0.0f, 90.32787f, 0.0f, 608.0305f, 640.8917f, 915.0f);
	ADD_TO_VOLUME_SET(Local_4.f_404, (*&Local_4 + 384)[0]);
	(*&Local_4 + 384)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_diez2", 3, -330.4504f, 40.93773f, 3804.267f, 0.0f, 83.96482f, 0.0f, 608.0305f, 640.8917f, 939.0677f);
	ADD_TO_VOLUME_SET(Local_4.f_404, (*&Local_4 + 384)[1]);
	(*&Local_4 + 384)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_diez3", 3, 346.4795f, 40.93773f, 3484.432f, 0.0f, 83.96482f, 0.0f, 608.0305f, 640.8917f, 939.0677f);
	ADD_TO_VOLUME_SET(Local_4.f_404, (*&Local_4 + 384)[2]);
	(*&Local_4 + 384)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_diez4", 3, 220.3329f, 40.93773f, 2921.959f, 0.0f, 115.0f, 0.0f, 200.0f, 500.0f, 400.0f);
	ADD_TO_VOLUME_SET(Local_4.f_404, (*&Local_4 + 384)[3]);
	Local_4.f_408 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnv_thieves", 3, 119.5282f, 73.31f, 2284.021f, 0.0f, 0.0f, 0.0f, 200.0f, 50.0f, 225.0f);
	Local_4.f_412 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnv_hennigan", 3, -861.2434f, 90.476f, 2421.146f, 0.0f, 38.98653f, 0.0f, 150.0f, 100.0f, 150.0f);
	Local_4.f_444 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "hgnv_pikesbasin_set");
	(*&Local_4 + 416)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnv_pikesbasin1", 2, -1582.008f, 71.79928f, 2439.541f, 0.0f, -32.21291f, 0.0f, 163.7029f, 93.59687f, 80.09351f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 416)[0]);
	(*&Local_4 + 416)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnv_pikesbasin2", 2, -1419.968f, 71.79928f, 2437.603f, 0.0f, -0.4750807f, 0.0f, 249.2493f, 93.59687f, 154.2642f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 416)[1]);
	(*&Local_4 + 416)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnv_pikesbasin3", 2, -1281.553f, 71.79928f, 2492.5f, 0.0f, -0.5973046f, 0.0f, 150.2953f, 93.59687f, 140.3786f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 416)[2]);
	(*&Local_4 + 416)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnv_pikesbasin4", 2, -1197.996f, 71.79928f, 2370.546f, 0.0f, 0.0f, 0.0f, 268.4048f, 93.59687f, 160.5412f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 416)[3]);
	(*&Local_4 + 416)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnv_pikesbasin5", 2, -1279.899f, 71.79928f, 2228.296f, 0.0f, 75.0f, 0.0f, 346.6916f, 93.59687f, 152.3171f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 416)[4]);
	(*&Local_4 + 416)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnv_pikesbasin6", 2, -1448.279f, 71.79928f, 2274.595f, 0.0f, -0.4750807f, 0.0f, 189.0762f, 93.59687f, 219.553f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 416)[5]);
	Local_4.f_448 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrv_benedict", 3, -3682.0f, 8.765f, 3472.0f, 0.0f, -27.09326f, 0.0f, 94.88051f, 50.0f, 125.0f);
	Local_4.f_452 = CREATE_VOLUME_IN_LAYOUT(Local_4, "punv_nosalida", 3, -4687.928f, 2.909f, 4022.312f, 0.0f, 31.92022f, 0.0f, 175.0f, 50.0f, 175.0f);
	Local_4.f_456 = CREATE_VOLUME_IN_LAYOUT(Local_4, "punv_escalera", 3, -4334.821f, 33.945f, 4372.996f, 0.0f, 16.41127f, 0.0f, 125.0f, 50.0f, 173.6178f);
	Local_4.f_460 = CREATE_VOLUME_IN_LAYOUT(Local_4, "punv_sidewinder", 3, -3691.0f, 20.57f, 4673.848f, 0.0f, 45.0f, 0.0f, 261.6631f, 50.0f, 198.2934f);
	Local_4.f_464 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdv_chuparosa", 3, -2695.956f, 31.296f, 4260.416f, 0.0f, 0.0f, 0.0f, 125.0f, 50.0f, 125.0f);
	Local_4.f_468 = CREATE_VOLUME_IN_LAYOUT(Local_4, "punv_tesoro", 3, -3263.0f, 38.149f, 4546.0f, 0.0f, 0.0f, 0.0f, 160.0f, 50.0f, 137.8573f);
	Local_4.f_472 = CREATE_VOLUME_IN_LAYOUT(Local_4, "dzcv_casamad", 3, -818.1281f, 13.051f, 3745.837f, 0.0f, 0.0f, 0.0f, 125.0f, 50.0f, 125.0f);
	Local_4.f_476 = CREATE_VOLUME_IN_LAYOUT(Local_4, "dzcv_torquemada", 3, 412.5369f, 35.453f, 3352.117f, 0.0f, 188.8143f, 0.0f, 126.4749f, 97.74591f, 180.2787f);
	Local_4.f_480 = CREATE_VOLUME_IN_LAYOUT(Local_4, "dzcv_elpresidio", 3, -707.7241f, 63.247f, 3303.276f, 0.0f, 0.0f, 0.0f, 109.8154f, 43.92617f, 109.8154f);
	Local_4.f_484 = CREATE_VOLUME_IN_LAYOUT(Local_4, "grtv_blackwater", 3, 732.721f, 78.306f, 1337.66f, 0.0f, 0.0f, 0.0f, 268.7039f, 100.0f, 232.677f);
	Local_4.f_488 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talv_manzanitas", 3, -439.412f, 152.371f, 1618.365f, 0.0f, 147.969f, 0.0f, 125.0f, 50.0f, 109.1198f);
	Local_4.f_492 = CREATE_VOLUME_IN_LAYOUT(Local_4, "ntalv_purc", 3, -274.131f, 84.308f, 2114.746f, 0.0f, 0.0f, 0.0f, 125.0f, 50.0f, 125.0f);
	Local_4.f_496 = CREATE_VOLUME_IN_LAYOUT(Local_4, "grtv_beecher", 3, -90.10365f, 118.448f, 1382.781f, 0.0f, 13.333f, 0.0f, 157.6699f, 50.0f, 183.9702f);
	Local_4.f_500 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_jorge", 3, -2613.24f, 26.102f, 2858.589f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_504 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_riley", 3, -2322.426f, 17.067f, 3181.13f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_508 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_donjulio", 3, -1868.701f, 16.0f, 3249.414f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_512 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chov_coots", 3, -1803.427f, 23.09f, 2796.09f, 0.0f, 20.0f, 0.0f, 125.0f, 50.0f, 175.0f);
	Local_4.f_516 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_hangingrock", 3, -1921.839f, 28.748f, 2257.471f, 0.0f, 20.0f, 0.0f, 65.86879f, 110.4106f, 65.86879f);
	Local_4.f_520 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_rattlesnake", 3, -2850.711f, 63.71f, 2191.967f, 0.0f, 32.08811f, 0.0f, 53.50481f, 49.44629f, 39.655f);
	Local_4.f_524 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_hamlins", 3, -3429.002f, 23.968f, 2496.709f, 0.0f, 162.611f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_528 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrp_cueva", 3, -4335.932f, 25.984f, 2756.106f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_532 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrp_cueva_MP", 3, -4320.846f, 25.984f, 2739.974f, 0.0f, 20.0f, 0.0f, 150.0f, 150.0f, 150.0f);
	Local_4.f_536 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrp_scratching", 3, -4313.584f, 5.097f, 3743.516f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_540 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrp_scratching_MP", 3, -4313.584f, 5.097f, 3743.516f, 0.0f, 20.0f, 0.0f, 150.0f, 50.0f, 150.0f);
	Local_4.f_544 = CREATE_VOLUME_IN_LAYOUT(Local_4, "geof_coronado", 3, -4914.604f, 85.823f, 2862.304f, 0.0f, 0.0f, 0.0f, 407.5577f, 50.0f, 1178.424f);
	Local_4.f_548 = CREATE_VOLUME_IN_LAYOUT(Local_4, "riop_repentance", 3, -3152.253f, 53.349f, 3312.079f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_552 = CREATE_VOLUME_IN_LAYOUT(Local_4, "riop_frontera", 3, -3533.55f, 9.718f, 4177.727f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_556 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdp_ramita", 3, -2357.972f, 13.942f, 3996.78f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_560 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnp_greenhollow", 3, -1235.523f, 22.219f, 3208.881f, 0.0f, 280.821f, 0.0f, 75.0f, 200.0f, 75.0f);
	Local_4.f_564 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnp_brittlebrush", 3, -493.7191f, 20.081f, 3021.845f, 0.0f, 20.0f, 0.0f, 75.0f, 200.0f, 75.0f);
	Local_4.f_568 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnp_manteca", 3, 29.748f, 94.712f, 2737.473f, 0.0f, 217.1f, 0.0f, 75.0f, 200.0f, 75.0f);
	Local_4.f_572 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnp_bacchus", 3, 121.9778f, 72.423f, 2676.006f, 0.0f, 20.0f, 0.0f, 75.0f, 200.0f, 75.0f);
	Local_4.f_576 = CREATE_VOLUME_IN_LAYOUT(Local_4, "dzcp_madera", 3, -1324.474f, 77.302f, 3635.33f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_580 = CREATE_VOLUME_IN_LAYOUT(Local_4, "dzcp_madera_MP", 3, -1291.597f, 77.302f, 3623.148f, 0.0f, 48.11329f, 0.0f, 88.47202f, 50.0f, 74.38153f);
	Local_4.f_584 = CREATE_VOLUME_IN_LAYOUT(Local_4, "dzcp_cabeza", 3, -628.843f, 22.086f, 4015.825f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_588 = CREATE_VOLUME_IN_LAYOUT(Local_4, "dzcp_laluna", 3, -644.01f, 33.693f, 3820.264f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_592 = CREATE_VOLUME_IN_LAYOUT(Local_4, "dzcp_sol", 3, -532.6394f, 43.793f, 3558.351f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_596 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdv_sepulcro", 3, -1339.889f, 13.051f, 4306.565f, 0.0f, 20.0f, 0.0f, 125.0f, 50.0f, 125.0f);
	Local_4.f_600 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdp_barranca", 3, -2240.46f, 23.09f, 4451.865f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_604 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_dellobo", 3, -1938.2f, 30.981f, 3466.862f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_608 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_dellobo_MP", 3, -1921.624f, 30.981f, 3460.829f, 0.0f, 20.0f, 0.0f, 81.17854f, 50.0f, 82.7708f);
	Local_4.f_612 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdp_deltoro", 3, -2810.675f, 16.09f, 3996.908f, 0.0f, 275.408f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_616 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdp_diablo", 3, -2734.759f, 47.677f, 4595.501f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_620 = CREATE_VOLUME_IN_LAYOUT(Local_4, "punp_plata", 3, -3378.0f, 56.0f, 4748.0f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_624 = CREATE_VOLUME_IN_LAYOUT(Local_4, "punp_crooked", 3, -3859.845f, 7.875f, 4308.219f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_628 = CREATE_VOLUME_IN_LAYOUT(Local_4, "punp_crooked_MP", 3, -3859.845f, 7.875f, 4308.219f, 0.0f, 20.0f, 0.0f, 150.0f, 50.0f, 150.0f);
	Local_4.f_632 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnp_mescalero", 3, -1288.191f, 108.424f, 2739.145f, 0.0f, 20.0f, 0.0f, 75.0f, 200.0f, 75.0f);
	Local_4.f_636 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnp_stillwater", 3, -189.05f, 73.615f, 2335.81f, 0.0f, 20.0f, 0.0f, 75.0f, 200.0f, 75.0f);
	Local_4.f_640 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talp_matchbook", 3, -313.5471f, 132.827f, 1887.214f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_644 = CREATE_VOLUME_IN_LAYOUT(Local_4, "grtp_broken", 3, 149.864f, 128.655f, 1386.829f, 0.0f, 71.373f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_648 = CREATE_VOLUME_IN_LAYOUT(Local_4, "grtp_broken_MP", 3, 173.7221f, 128.655f, 1378.211f, 0.0f, 71.373f, 0.0f, 103.6885f, 50.0f, 96.51997f);
	Local_4.f_652 = CREATE_VOLUME_IN_LAYOUT(Local_4, "grtp_wreck", 3, 342.6059f, 71.415f, 1945.118f, 0.0f, 42.9068f, 0.0f, 75.0f, 50.0f, 88.21992f);
	Local_4.f_656 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talp_aurora", 3, -1043.265f, 184.053f, 1377.212f, 0.0f, 0.543f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_660 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talp_tanner", 3, -850.223f, 189.687f, 1590.618f, 0.0f, 169.6865f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_664 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talp_nekoti", 3, -706.0563f, 208.26f, 1129.094f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_668 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_oddfellowsrest", 3, -2912.0f, 19.075f, 2694.0f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_672 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_mercerstation", 3, -2829.0f, 20.079f, 3077.0f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_676 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_pleasancehouse", 3, -2829.5f, 50.341f, 2416.0f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_680 = CREATE_VOLUME_IN_LAYOUT(Local_4, "dzcv_elmataderotown", 3, -384.5921f, 16.953f, 3944.378f, 0.0f, -12.25531f, 0.0f, 192.0324f, 105.4195f, 153.3512f);
	Local_4.f_684 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrp_silent", 3, -4015.325f, 21.468f, 2401.67f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_688 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrp_silent_MP", 3, -4011.384f, 21.468f, 2412.499f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_704 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "talv_cochinay_set");
	(*&Local_4 + 692)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "grzv_cochinay1", 3, -790.3881f, 209.8834f, 788.6389f, 0.0f, 0.0f, 0.0f, 155.4279f, 80.69572f, 126.2354f);
	ADD_TO_VOLUME_SET(Local_4.f_704, (*&Local_4 + 692)[0]);
	(*&Local_4 + 692)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "grzv_cochinay2", 3, -887.9458f, 185.5259f, 996.4893f, 0.0f, -15.98936f, 0.0f, 133.6408f, 130.9943f, 255.0045f);
	ADD_TO_VOLUME_SET(Local_4.f_704, (*&Local_4 + 692)[1]);
	Local_4.f_708 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talv_cochinayMP", 3, -857.1129f, 209.0f, 956.5495f, 0.0f, 131.3724f, 0.0f, 360.0f, 200.0f, 360.0f);
	Local_4.f_712 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talv_cochinay_z", 3, -872.5234f, 209.0f, 944.145f, 0.0f, 134.52f, 0.0f, 95.0f, 95.0f, 95.0f);
	Local_4.f_716 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_2crows", 3, -2315.766f, 23.09f, 2992.637f, 0.0f, 309.896f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_720 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talp_bearclaw", 3, -495.718f, 144.911f, 1918.029f, 0.0f, 48.557f, 0.0f, 100.0f, 50.0f, 100.0f);
	Local_4.f_724 = CREATE_VOLUME_IN_LAYOUT(Local_4, "dzcp_mantecafalls", 3, -68.74f, 68.267f, 2793.727f, 0.0f, 169.6865f, 0.0f, 75.0f, 100.0f, 75.0f);
	Local_4.f_728 = CREATE_VOLUME_IN_LAYOUT(Local_4, "riop_delloborock", 3, -2002.259f, 45.176f, 3596.785f, 0.0f, 169.6865f, 0.0f, 75.0f, 100.0f, 75.0f);
	Local_4.f_732 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrp_benedictpass", 3, -3539.92f, 9.442f, 3133.353f, 0.0f, 169.6865f, 0.0f, 75.0f, 100.0f, 75.0f);
	Local_4.f_736 = CREATE_VOLUME_IN_LAYOUT(Local_4, "riov_plainview", 3, -3191.322f, 41.131f, 3764.382f, 0.0f, 279.7464f, 0.0f, 159.5616f, 75.0f, 178.7948f);
	Local_4.f_740 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdp_primero_quebrada", 3, -1187.887f, 18.072f, 4976.144f, 0.0f, 64.308f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_744 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdp_rancho_polvo", 3, -1145.186f, 27.988f, 4817.662f, 0.0f, 248.306f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_748 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdp_rancho_polvo_MP", 3, -1175.964f, 27.988f, 4895.028f, 0.0f, 248.306f, 0.0f, 185.3346f, 60.00013f, 154.0057f);
	Local_4.f_752 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdp_laguna_borrego", 3, -1448.826f, 19.691f, 4909.078f, 0.0f, 197.284f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_756 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdp_hendidura_grande", 3, -1756.155f, 30.368f, 4819.781f, 0.0f, 167.282f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_760 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdp_campo_mirada", 3, -2149.709f, 18.074f, 4976.483f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_764 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdv_lashermanas", 3, -1700.197f, 8.071f, 4227.977f, 0.0f, 0.0f, 0.0f, 125.0f, 50.0f, 125.0f);
	Local_4.f_768 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdv_agaveviejo", 3, -1494.28f, 16.9f, 3896.205f, 0.0f, 0.0f, 0.0f, 125.0f, 50.0f, 125.0f);
	Local_4.f_772 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_Critchley", 3, -2921.532f, 13.051f, 2940.276f, 0.0f, 23.02f, 0.0f, 105.945f, 50.0f, 94.39014f);
	Local_4.f_776 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_Critchley_MP", 3, -2921.532f, 13.051f, 2940.276f, 0.0f, 23.02f, 0.0f, 150.0f, 50.0f, 150.0f);
	Local_4.f_780 = CREATE_VOLUME_IN_LAYOUT(Local_4, "Chop_Venters_Place", 3, -2015.928f, 42.041f, 3030.2f, 0.0f, 20.0f, 0.0f, 59.02263f, 67.07185f, 56.02647f);
	Local_4.f_784 = CREATE_VOLUME_IN_LAYOUT(Local_4, "Chop_Venters_Place_MP", 3, -2015.928f, 42.041f, 3030.2f, 0.0f, 20.0f, 0.0f, 150.0f, 75.0f, 150.0f);
	Local_4.f_788 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talp_Masons", 3, -147.371f, 80.369f, 2203.543f, 0.0f, 20.0f, 0.0f, 45.26587f, 80.49738f, 56.03757f);
	Local_4.f_792 = CREATE_VOLUME_IN_LAYOUT(Local_4, "grtp_Dixons", 3, 173.296f, 73.482f, 2082.252f, 0.0f, -6.194558f, 0.0f, 33.01608f, 77.15987f, 34.41447f);
	Local_4.f_796 = CREATE_VOLUME_IN_LAYOUT(Local_4, "punp_Puerto_Cuchillo", 3, -3842.145f, 2.766f, 4220.753f, 0.0f, -10.85164f, 0.0f, 15.79383f, 27.52902f, 13.09824f);
	Local_4.f_800 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talp_Tanners_Span", 3, -567.478f, 104.603f, 2082.163f, 0.0f, 20.0f, 0.0f, 26.72707f, 103.3651f, 13.55009f);
	Local_4.f_804 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talp_Montana_ford", 3, -480.7349f, 71.037f, 2186.415f, 0.0f, 20.0f, 0.0f, 12.45525f, 71.31406f, 13.03489f);
	Local_4.f_808 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnp_warthington", 3, -946.211f, 103.654f, 2735.125f, 0.0f, 20.0f, 0.0f, 54.4305f, 103.6033f, 54.15482f);
	Local_4.f_812 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnp_warthington_MP", 3, -946.211f, 103.654f, 2735.125f, 0.0f, 20.0f, 0.0f, 150.0f, 150.0f, 150.0f);
	Local_4.f_816 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnv_pikesbasin_MP", 3, -1345.505f, 111.1438f, 2314.189f, 0.0f, 0.0f, 0.0f, 325.8785f, 59.18049f, 278.2251f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Merchant04", 3, -4331.516f, 27.71106f, 2746.448f, 0.0f, 20.0f, 0.0f, 21.41067f, 9.142949f, 22.89105f);
	Local_4.f_820 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Ranch07", 2, -790.8589f, 93.863f, 2412.262f, -0.005042201f, -34.04364f, -0.3053975f, 12.11379f, 5.005472f, 14.78417f);
	Local_4.f_824 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Ranch08", 2, -845.1255f, 92.74963f, 2458.445f, 0.0f, 24.12969f, 0.0f, 28.4539f, 11.48647f, 44.94153f);
	Local_4.f_828 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Marshal", 2, -2091.528f, 16.57267f, 2606.137f, 0.0f, 24.46099f, 0.0f, 6.486022f, 5.303829f, 8.774861f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Merchant01", 3, -1696.57f, 29.634f, 3066.021f, 0.0f, 20.0f, 0.0f, 15.0f, 19.21686f, 15.0f);
	Local_4.f_832 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Merchant05", 2, -3264.162f, 17.84678f, 2728.371f, 0.0f, 69.13892f, 0.0f, 11.20773f, 9.987062f, 21.77856f);
	Local_4.f_836 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Outlaw01", 2, -2163.299f, 17.25398f, 2571.01f, 0.0f, 0.0f, 0.0f, 6.837639f, 6.845285f, 7.475767f);
	Local_4.f_840 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Outlaw02", 2, -3667.912f, 9.824644f, 3494.536f, 1.317f, 17.73706f, -1.249027f, 13.07529f, 7.034909f, 16.78192f);
	Local_4.f_844 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Outlaw03", 2, 175.5428f, 74.677f, 2222.393f, 0.0f, -30.63849f, 0.0f, 13.42699f, 3.225995f, 2.953852f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Grave01", 3, -1802.117f, 24.427f, 2865.854f, 0.0f, 13.333f, 0.0f, 4.9f, 4.9f, 4.9f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Grave02", 3, -1777.091f, 24.093f, 2849.859f, 0.0f, 13.333f, 0.0f, 16.32322f, 16.32322f, 16.32322f);
	Local_4.f_848 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Grave03", 2, -3915.643f, 32.52577f, 2900.555f, 0.0f, -36.86835f, 0.0f, 12.07889f, 10.0f, 11.04155f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Fort01", 3, -2744.267f, 79.1f, 3600.36f, 0.0f, 20.0f, 0.0f, 25.0f, 50.0f, 25.0f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Fort02", 3, -482.8044f, 22.37143f, 3039.961f, 0.0f, 20.0f, 0.0f, 10.69004f, 10.69004f, 10.69004f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Gun01", 3, -2699.101f, 31.28048f, 4255.511f, 0.0f, 0.0f, 0.0f, 60.0f, 50.0f, 45.0f);
	Local_4.f_852 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Gun02", 2, -2690.058f, 33.08378f, 4286.954f, 0.0f, -1.921356f, 0.0f, 12.07097f, 3.541116f, 5.509146f);
	Local_4.f_856 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Gun05", 2, -2698.733f, 31.217f, 4277.214f, 0.0f, 0.0f, 0.0f, 12.4142f, 7.487773f, 13.50782f);
	Local_4.f_860 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_MexGirl", 2, -2147.349f, 18.239f, 4967.502f, 0.0f, 0.0f, 0.0f, 15.61093f, 15.61093f, 16.50205f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_MexArmy05", 3, -4356.495f, 44.261f, 4342.515f, 0.0f, 13.333f, 0.0f, 20.0f, 50.0f, 20.0f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_MexArmy04", 3, -4354.919f, 41.964f, 4329.449f, 0.0f, 24.49f, 0.0f, 45.0f, 50.0f, 40.0f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_MexArmy03", 3, -4376.89f, 38.71617f, 4362.818f, 0.0f, 13.333f, 0.0f, 9.644364f, 52.77525f, 10.16607f);
	Local_4.f_864 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_MexArmy02", 2, -4379.67f, 38.7f, 4364.811f, 0.8604763f, -16.92756f, 3.638983f, 7.5f, 12.70456f, 11.49584f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_MexArmy01", 3, -4355.753f, 45.466f, 4342.309f, 0.0f, 13.333f, 0.0f, 11.0f, 50.0f, 11.0f);
	Local_4.f_868 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Rebel02", 2, -2287.178f, 22.76f, 4954.236f, 0.0f, -36.32032f, 0.0f, 15.49476f, 24.87981f, 23.93099f);
	Local_4.f_872 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Rebel03", 2, -1466.879f, 19.23789f, 3947.904f, 0.0f, 13.75014f, 0.0f, 20.10171f, 15.29672f, 21.09918f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Rebel04", 3, -2265.303f, 21.45937f, 4932.479f, 0.0f, 41.64869f, 0.0f, 60.54074f, 25.0f, 37.75085f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Rebel05", 3, -4248.815f, 22.147f, 4376.133f, 0.0f, 20.0f, 0.0f, 25.0f, 25.0f, 25.0f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Home02Son02", 3, -101.336f, 117.748f, 1404.77f, 0.0f, 52.19895f, 0.0f, 7.5f, 10.0f, 7.5f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Home02Son01", 3, -59.33513f, 121.133f, 1388.977f, 0.0f, 13.333f, 0.0f, 7.5f, 10.0f, 7.5f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Home02Ranch03", 3, -5.259f, 130.659f, 1445.75f, 0.0f, 13.333f, 0.0f, 7.5f, 10.0f, 7.5f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Home02Ranch01", 3, -76.984f, 116.861f, 1395.304f, 0.0f, 13.333f, 0.0f, 7.5f, 10.0f, 7.5f);
	Local_4.f_876 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Home01", 2, -110.6957f, 120.997f, 1367.876f, 0.0f, -33.02065f, 0.0f, 22.98656f, 13.91831f, 43.69495f);
	Local_4.f_880 = CREATE_VOLUME_IN_LAYOUT(Local_4, "_MeterAndHalfTest", 3, -1694.394f, 29.634f, 3068.558f, 0.0f, 20.0f, 0.0f, 3.0f, 3.0f, 3.0f);
	Local_4.f_884 = CREATE_VOLUME_IN_LAYOUT(Local_4, "grtv_blackwater_z", 3, 732.721f, 78.306f, 1337.66f, 0.0f, 0.0f, 0.0f, 387.4395f, 100.0f, 265.6876f);
	Local_4.f_888 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Zombie02", 3, -3861.369f, 7.974345f, 3667.904f, 0.0f, 20.0f, 0.0f, 9.936728f, 9.936728f, 9.936728f);
	Local_4.f_892 = CREATE_VOLUME_IN_LAYOUT(Local_4, "blackwater_gy_blip_vol", 3, 541.393f, 95.73611f, 1194.55f, 0.0f, 20.0f, 0.0f, 3.0f, 3.0f, 3.0f);
	Local_4.f_896 = CREATE_VOLUME_IN_LAYOUT(Local_4, "tumbleweed_gy_blip_vol", 3, -3918.393f, 31.97537f, 2911.855f, 0.0f, 20.0f, 0.0f, 3.0f, 3.0f, 3.0f);
	Local_4.f_900 = CREATE_VOLUME_IN_LAYOUT(Local_4, "sepulcro_gy_blip_vol", 3, -1363.326f, 13.07964f, 4299.217f, 0.0f, 20.0f, 0.0f, 3.0f, 3.0f, 3.0f);
	Local_4.f_904 = CREATE_VOLUME_IN_LAYOUT(Local_4, "coots_gy_blip_vol", 3, -1772.132f, 25.73093f, 2845.038f, 0.0f, 20.0f, 0.0f, 3.0f, 3.0f, 3.0f);
	Local_4.f_908 = CREATE_VOLUME_IN_LAYOUT(Local_4, "oddfellows_gy_blip_vol", 3, -2905.756f, 19.24284f, 2699.376f, 0.0f, 20.0f, 0.0f, 3.0f, 3.0f, 3.0f);
	Local_4.f_912 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Zombie03", 3, -4345.656f, 50.12865f, 4330.488f, 0.0f, 0.0f, 0.0f, 32.84954f, 26.69517f, 29.77877f);
	Local_4.f_916 = CREATE_VOLUME_IN_LAYOUT(Local_4, "blackwater_surv_blip_vol", 2, 694.919f, 84.878f, 1282.856f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_4.f_920 = CREATE_GRINGO_IN_LAYOUT(Local_4, "treasure_hunting_2", "treasure_hunting_2", -1989.681f, 32.14432f, 3617.284f, 0.0f, 96.96473f, 0.0f);
	Local_4.f_924 = CREATE_GRINGO_IN_LAYOUT(Local_4, "treasure_hunting_7", "treasure_hunting_7", -1529.021f, 61.63215f, 3708.159f, 0.0f, 94.8173f, 0.0f);
	Local_4.f_928 = CREATE_GRINGO_IN_LAYOUT(Local_4, "treasure_hunting_6", "treasure_hunting_6", -2748.208f, 54.5189f, 4654.738f, 0.0f, 1.314279f, 0.0f);
	return;
}

void Function_420(int iParam0, int iParam1) //Position: 0x1E791 / 124817
{
	switch (iParam1)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (!iParam0 != 4)
			{
			}
			break;
		
		case 0x00000002:
			if (!iParam0 != 3)
			{
			}
			break;
		
		case 0x00000003:
			if (!iParam0 != 3)
			{
			}
			break;
	}
	return;
}

int Function_421() //Position: 0x1E7DA / 124890
{
	Function_445(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/treasure_hunting_2", 1, 0);
	Function_445(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/treasure_hunting_7", 1, 0);
	Function_445(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/treasure_hunting_6", 1, 0);
	if (Function_440(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

void Function_422() //Position: 0x1E8C2 / 125122
{
	Function_415();
	Function_411();
	return;
}

void Function_423() //Position: 0x1E8CE / 125134
{
	DISABLE_GRINGO_STREAMING_CHECKS();
	ANIMAL_SPECIES_GRINGO_LOAD_ALL();
	ENABLE_GRINGO_STREAMING_CHECKS();
	return;
}

bool Function_424(int iParam0) //Position: 0x1E8DD / 125149
{
	return Function_338(Global_83864.f_1252, iParam0);
}

void Function_425() //Position: 0x1E8EF / 125167
{
	Global_63541[3155].f_132 = Global_30723[4];
	Global_63541[3255].f_132 = 4294967295;
	Global_63541[3355].f_132 = 4294967295;
	Global_63541[3455].f_132 = 4294967295;
	Global_63541[3555].f_132 = 4294967295;
	Global_63541[3655].f_132 = 4294967295;
	Global_63541[3755].f_132 = 4294967295;
	Global_63541[255].f_132 = Global_30717[0];
	Global_63541[355].f_132 = Global_30717[0];
	Global_63541[455].f_132 = Global_30717[0];
	Global_63541[555].f_132 = Global_30717[0];
	Global_63541[1255].f_132 = Global_30668[0];
	Global_63541[1355].f_132 = Global_30668[0];
	Global_63541[1455].f_132 = Global_30668[0];
	Global_63541[655].f_132 = Global_30668[8];
	Global_63541[755].f_132 = Global_30668[8];
	Global_63541[855].f_132 = Global_30679[1];
	Global_63541[955].f_132 = Global_30679[3];
	Global_63541[1055].f_132 = Global_30640[3];
	Global_63541[1155].f_132 = Global_30679[3];
	Global_63541[055].f_132 = Global_30679[0];
	Global_63541[155].f_132 = Global_30679[0];
	Global_63541[1555].f_132 = Global_30640[0];
	Global_63541[1655].f_132 = Global_30640[0];
	Global_63541[1755].f_132 = Global_30640[0];
	Global_63541[1855].f_132 = Global_30640[0];
	Global_63541[1955].f_132 = Global_30679[1];
	Global_63541[2055].f_132 = Global_30640[10];
	Global_63541[2155].f_132 = Global_30679[1];
	Global_63541[2255].f_132 = Global_30707[2];
	Global_63541[2355].f_132 = Global_30707[2];
	Global_63541[2455].f_132 = Global_30693[1];
	Global_63541[2555].f_132 = Global_30693[1];
	Global_63541[2655].f_132 = Global_30693[1];
	Global_63541[2755].f_132 = Global_30693[1];
	Global_63541[2855].f_132 = Global_30717[1];
	Global_63541[2955].f_132 = Global_30717[1];
	Global_63541[3055].f_132 = Global_30717[1];
	Global_63541[3155].f_164 = 4294967295;
	Global_63541[3255].f_164 = 4294967295;
	Global_63541[3355].f_164 = 4294967295;
	Global_63541[3455].f_164 = 4294967295;
	Global_63541[3555].f_164 = 4294967295;
	Global_63541[3655].f_164 = 4294967295;
	Global_63541[3755].f_164 = 4294967295;
	Global_63541[255].f_164 = 4294967295;
	Global_63541[355].f_164 = 4294967295;
	Global_63541[455].f_164 = 4294967295;
	Global_63541[555].f_164 = 4294967295;
	Global_63541[1255].f_164 = 4294967295;
	Global_63541[1355].f_164 = 4294967295;
	Global_63541[1455].f_164 = 4294967295;
	Global_63541[655].f_164 = 4294967295;
	Global_63541[755].f_164 = 4294967295;
	Global_63541[855].f_164 = 4294967295;
	Global_63541[955].f_164 = 4294967295;
	Global_63541[1055].f_164 = 4294967295;
	Global_63541[1155].f_164 = 4294967295;
	Global_63541[055].f_164 = 4294967295;
	Global_63541[155].f_164 = 4294967295;
	Global_63541[1555].f_164 = 4294967295;
	Global_63541[1655].f_164 = 4294967295;
	Global_63541[1755].f_164 = 4294967295;
	Global_63541[1855].f_164 = 4294967295;
	Global_63541[1955].f_164 = 4294967295;
	Global_63541[2055].f_164 = 4294967295;
	Global_63541[2155].f_164 = 4294967295;
	Global_63541[2255].f_164 = 4294967295;
	Global_63541[2355].f_164 = 4294967295;
	Global_63541[2455].f_164 = 4294967295;
	Global_63541[2555].f_164 = 4294967295;
	Global_63541[2655].f_164 = 4294967295;
	Global_63541[2755].f_164 = 4294967295;
	Global_63541[2855].f_164 = 4294967295;
	Global_63541[2955].f_164 = 4294967295;
	Global_63541[3055].f_164 = 4294967295;
	return;
}

void Function_426() //Position: 0x1EC80 / 126080
{
	int iVar0;
	
	Global_63541[3155].f_20 = 31;
	Global_63541[3155] = 3;
	strcpy(&Global_63541[3155] + 4, "nSASQUATCH", 16);
	strcpy(&Global_63541[3155] + 40, "sasquatch1_OBJ", 16);
	Global_63541[3155].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Sasquatch/RCM_Sasquatch1", 4);
	Global_63541[3155].f_168 = 5;
	Global_63541[3155].f_176 = 1;
	Global_63541[3155].f_172 = 2019;
	iVar0 = 0;
	strcpy(&Global_63541[3155] + 24, "INVALID", 16);
	Global_63541[3155].f_128 = 4294967295;
	Global_63541[3155].f_136 = 1273;
	Global_63541[3155].f_80 = 411;
	Global_63541[3155].f_92 = 3;
	Global_63541[3155].f_96 = 6.0f;
	*(&Global_63541[3155] + 100) = { -856.241f, 189.719f, 1586.376f };
	*(&Global_63541[3155] + 112) = { -856.241f, 189.719f, 1586.376f };
	Global_63541[3155].f_124 = 349.652f;
	Global_63541[3155].f_68 = GET_ASSET_ID("$/cutscene/sasquatch_1_cs/sasquatch_1_cs", 9);
	Global_63541[3155].f_148 = 1;
	Global_63541[3155].f_72 = 150.0f;
	Global_63541[3155].f_76 = 200.0f;
	Global_63541[3155].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[3155].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[3155].f_140 = STRING_TO_HASH("nSASQUATCH");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[3155]), 31, iVar0);
	}
	Global_63541[3155].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[3155].f_160 = 0;
	Global_63541[3255].f_20 = 31;
	Global_63541[3255] = 3;
	strcpy(&Global_63541[3255] + 4, "nSASQUATCH", 16);
	strcpy(&Global_63541[3255] + 40, "sasquatch2_OBJ", 16);
	Global_63541[3255].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Sasquatch/RCM_Sasquatch2", 4);
	Global_63541[3255].f_168 = 31;
	Global_63541[3255].f_176 = 1;
	Global_63541[3255].f_172 = 2019;
	iVar0 = 0;
	strcpy(&Global_63541[3255] + 24, "INVALID", 16);
	Global_63541[3255].f_128 = 4294967295;
	Global_63541[3255].f_136 = 4294967295;
	Global_63541[3255].f_80 = 4294967295;
	Global_63541[3255].f_92 = 3;
	Global_63541[3255].f_96 = 6.0f;
	*(&Global_63541[3255] + 100) = { -827.227f, 183.717f, 1311.458f };
	*(&Global_63541[3255] + 112) = { -827.227f, 183.717f, 1311.458f };
	Global_63541[3255].f_124 = 349.652f;
	Global_63541[3255].f_148 = 1;
	Global_63541[3255].f_72 = 200.0f;
	Global_63541[3255].f_76 = 250.0f;
	Global_63541[3255].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[3255].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[3255].f_140 = STRING_TO_HASH("nSASQUATCH");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[3255]), 32, iVar0);
	}
	Global_63541[3255].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[3255].f_160 = 0;
	Global_63541[3355].f_20 = 31;
	Global_63541[3355] = 3;
	strcpy(&Global_63541[3355] + 4, "nSASQUATCH", 16);
	strcpy(&Global_63541[3355] + 40, "sasquatch3_OBJ", 16);
	Global_63541[3355].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Sasquatch/RCM_Sasquatch3", 4);
	Global_63541[3355].f_168 = 32;
	Global_63541[3355].f_176 = 1;
	Global_63541[3355].f_172 = 2019;
	iVar0 = 0;
	strcpy(&Global_63541[3355] + 24, "INVALID", 16);
	Global_63541[3355].f_128 = 4294967295;
	Global_63541[3355].f_136 = 4294967295;
	Global_63541[3355].f_80 = 4294967295;
	Global_63541[3355].f_92 = 3;
	Global_63541[3355].f_96 = 3.0f;
	*(&Global_63541[3355] + 100) = { -506.035f, 150.625f, 1239.386f };
	*(&Global_63541[3355] + 112) = { -506.035f, 150.625f, 1239.386f };
	Global_63541[3355].f_124 = 349.652f;
	Global_63541[3355].f_148 = 1;
	Global_63541[3355].f_72 = 200.0f;
	Global_63541[3355].f_76 = 250.0f;
	Global_63541[3355].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[3355].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[3355].f_140 = STRING_TO_HASH("nSASQUATCH");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[3355]), 33, iVar0);
	}
	Global_63541[3355].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[3355].f_160 = 0;
	Global_63541[3455].f_20 = 31;
	Global_63541[3455] = 3;
	strcpy(&Global_63541[3455] + 4, "nSASQUATCH", 16);
	strcpy(&Global_63541[3455] + 40, "sasquatch4_OBJ", 16);
	Global_63541[3455].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Sasquatch/RCM_Sasquatch4", 4);
	Global_63541[3455].f_168 = 33;
	Global_63541[3455].f_176 = 1;
	Global_63541[3455].f_172 = 2019;
	iVar0 = 0;
	strcpy(&Global_63541[3455] + 24, "INVALID", 16);
	Global_63541[3455].f_128 = 4294967295;
	Global_63541[3455].f_136 = 4294967295;
	Global_63541[3455].f_80 = 4294967295;
	Global_63541[3455].f_92 = 3;
	Global_63541[3455].f_96 = 3.0f;
	*(&Global_63541[3455] + 100) = { -598.856f, 168.113f, 1093.197f };
	*(&Global_63541[3455] + 112) = { -598.856f, 168.113f, 1093.197f };
	Global_63541[3455].f_124 = 349.652f;
	Global_63541[3455].f_148 = 1;
	Global_63541[3455].f_72 = 200.0f;
	Global_63541[3455].f_76 = 250.0f;
	Global_63541[3455].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[3455].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[3455].f_140 = STRING_TO_HASH("nSASQUATCH");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[3455]), 34, iVar0);
	}
	Global_63541[3455].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[3455].f_160 = 0;
	Global_63541[3555].f_20 = 31;
	Global_63541[3555] = 3;
	strcpy(&Global_63541[3555] + 4, "nSASQUATCH", 16);
	strcpy(&Global_63541[3555] + 40, "sasquatch5_OBJ", 16);
	Global_63541[3555].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Sasquatch/RCM_Sasquatch5", 4);
	Global_63541[3555].f_168 = 34;
	Global_63541[3555].f_176 = 1;
	Global_63541[3555].f_172 = 2019;
	iVar0 = 0;
	strcpy(&Global_63541[3555] + 24, "INVALID", 16);
	Global_63541[3555].f_128 = 4294967295;
	Global_63541[3555].f_136 = 4294967295;
	Global_63541[3555].f_80 = 4294967295;
	Global_63541[3555].f_92 = 3;
	Global_63541[3555].f_96 = 3.0f;
	*(&Global_63541[3555] + 100) = { -687.347f, 172.025f, 748.897f };
	*(&Global_63541[3555] + 112) = { -687.347f, 172.025f, 748.897f };
	Global_63541[3555].f_124 = 349.652f;
	Global_63541[3555].f_148 = 1;
	Global_63541[3555].f_72 = 200.0f;
	Global_63541[3555].f_76 = 250.0f;
	Global_63541[3555].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[3555].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[3555].f_140 = STRING_TO_HASH("nSASQUATCH");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[3555]), 35, iVar0);
	}
	Global_63541[3555].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[3555].f_160 = 0;
	Global_63541[3655].f_20 = 31;
	Global_63541[3655] = 3;
	strcpy(&Global_63541[3655] + 4, "nSASQUATCH", 16);
	strcpy(&Global_63541[3655] + 40, "sasquatch6_OBJ", 16);
	Global_63541[3655].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Sasquatch/RCM_Sasquatch6", 4);
	Global_63541[3655].f_168 = 35;
	Global_63541[3655].f_176 = 1;
	Global_63541[3655].f_172 = 2019;
	iVar0 = 0;
	strcpy(&Global_63541[3655] + 24, "INVALID", 16);
	Global_63541[3655].f_128 = 4294967295;
	Global_63541[3655].f_136 = 4294967295;
	Global_63541[3655].f_80 = 4294967295;
	Global_63541[3655].f_92 = 3;
	Global_63541[3655].f_96 = 3.0f;
	*(&Global_63541[3655] + 100) = { -649.376f, 138.192f, 696.213f };
	*(&Global_63541[3655] + 112) = { -649.376f, 138.192f, 696.213f };
	Global_63541[3655].f_124 = 349.652f;
	Global_63541[3655].f_148 = 1;
	Global_63541[3655].f_72 = 200.0f;
	Global_63541[3655].f_76 = 250.0f;
	Global_63541[3655].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[3655].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[3655].f_140 = STRING_TO_HASH("nSASQUATCH");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[3655]), 36, iVar0);
	}
	Global_63541[3655].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[3655].f_160 = 0;
	Global_63541[3755].f_20 = 31;
	Global_63541[3755] = 3;
	strcpy(&Global_63541[3755] + 4, "nSASQUATCH", 16);
	strcpy(&Global_63541[3755] + 40, "Sasquatch_END", 16);
	Global_63541[3755].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Sasquatch/RCM_Sasquatch7", 4);
	Global_63541[3755].f_168 = 36;
	Global_63541[3755].f_176 = 1;
	Global_63541[3755].f_172 = 2019;
	iVar0 = 0;
	strcpy(&Global_63541[3755] + 24, "INVALID", 16);
	Global_63541[3755].f_128 = 4294967295;
	Global_63541[3755].f_136 = 1263;
	Global_63541[3755].f_80 = 411;
	Global_63541[3755].f_92 = 3;
	Global_63541[3755].f_96 = 20.0f;
	*(&Global_63541[3755] + 100) = { -586.023f, 128.504f, 562.594f };
	*(&Global_63541[3755] + 112) = { -586.023f, 128.504f, 562.594f };
	Global_63541[3755].f_124 = 349.652f;
	Global_63541[3755].f_68 = GET_ASSET_ID("$/cutscene/sasquatch_2_cs/sasquatch_2_cs", 9);
	Global_63541[3755].f_148 = 1;
	Global_63541[3755].f_72 = 200.0f;
	Global_63541[3755].f_76 = 250.0f;
	Global_63541[3755].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[3755].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[3755].f_140 = STRING_TO_HASH("nSASQUATCH");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[3755]), 37, iVar0);
	}
	Global_63541[3755].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[3755].f_160 = 0;
	Global_63541[255].f_20 = 2;
	Global_63541[255] = 3;
	strcpy(&Global_63541[255] + 4, "BLACKWATER", 16);
	strcpy(&Global_63541[255] + 40, "blackwater1_OBJ", 16);
	Global_63541[255].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Blackwater/RCM_Blackwater1", 4);
	Global_63541[255].f_168 = 4294967295;
	Global_63541[255].f_176 = 1;
	Global_63541[255].f_172 = 2018;
	iVar0 = 0;
	strcpy(&Global_63541[255] + 24, "INVALID", 16);
	Global_63541[255].f_128 = 4294967295;
	Global_63541[255].f_136 = 561;
	Global_63541[255].f_80 = 312;
	Global_63541[255].f_92 = 3;
	Global_63541[255].f_96 = 16.0f;
	*(&Global_63541[255] + 100) = { 742.66f, 78.425f, 1276.422f };
	*(&Global_63541[255] + 112) = { 736.29f, 78.306f, 1283.925f };
	Global_63541[255].f_124 = 349.652f;
	Global_63541[255].f_68 = GET_ASSET_ID("$/cutscene/fenway_1_cs/fenway_1_cs", 9);
	Global_63541[255].f_148 = 1;
	Global_63541[255].f_72 = 150.0f;
	Global_63541[255].f_76 = 200.0f;
	Global_63541[255].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[255].f_84 = MAKE_TIME_OF_DAY_EX(false, 1, 0, 0);
	Global_63541[255].f_140 = STRING_TO_HASH("BLACKWATER");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[255]), 2, iVar0);
	}
	Global_63541[255].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[255].f_160 = 0;
	Global_63541[355].f_20 = 2;
	Global_63541[355] = 3;
	strcpy(&Global_63541[355] + 4, "BLACKWATER", 16);
	strcpy(&Global_63541[355] + 40, "blackwater2_OBJ", 16);
	Global_63541[355].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Blackwater/RCM_Blackwater2", 4);
	Global_63541[355].f_168 = 4;
	Global_63541[355].f_176 = 1;
	Global_63541[355].f_172 = 2023;
	iVar0 = 0;
	strcpy(&Global_63541[355] + 24, "INVALID", 16);
	Global_63541[355].f_128 = 4294967295;
	Global_63541[355].f_136 = 4294967295;
	Global_63541[355].f_80 = 312;
	Global_63541[355].f_92 = 3;
	Global_63541[355].f_96 = 11.0f;
	*(&Global_63541[355] + 100) = { 696.531f, 78.466f, 1341.583f };
	*(&Global_63541[355] + 112) = { 696.531f, 78.466f, 1341.583f };
	Global_63541[355].f_124 = 349.652f;
	Global_63541[355].f_68 = GET_ASSET_ID("$/cutscene/fenway_2_cs/fenway_2_cs", 9);
	Global_63541[355].f_148 = 1;
	Global_63541[355].f_72 = 150.0f;
	Global_63541[355].f_76 = 200.0f;
	Global_63541[355].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[355].f_84 = MAKE_TIME_OF_DAY_EX(false, 1, 0, 0);
	Global_63541[355].f_140 = STRING_TO_HASH("BLACKWATER");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[355]), 3, iVar0);
	}
	Global_63541[355].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[355].f_160 = 0;
	Global_63541[455].f_20 = 2;
	Global_63541[455] = 3;
	strcpy(&Global_63541[455] + 4, "BLACKWATER", 16);
	strcpy(&Global_63541[455] + 40, "blackwater3_OBJ", 16);
	Global_63541[455].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Blackwater/RCM_Blackwater3", 4);
	Global_63541[455].f_168 = 2;
	Global_63541[455].f_176 = 1;
	Global_63541[455].f_172 = 2019;
	iVar0 = 0;
	strcpy(&Global_63541[455] + 24, "INVALID", 16);
	Global_63541[455].f_128 = 4294967295;
	Global_63541[455].f_136 = 4294967295;
	Global_63541[455].f_60 = GET_ASSET_ID("$/content/scripting/gringo/simpleGringo/cower", 1);
	Global_63541[455].f_80 = 312;
	Global_63541[455].f_92 = 3;
	Global_63541[455].f_96 = 5.0f;
	*(&Global_63541[455] + 100) = { 769.958f, 78.622f, 1295.529f };
	*(&Global_63541[455] + 112) = { 765.561f, 78.484f, 1291.115f };
	Global_63541[455].f_124 = 12.931f;
	Global_63541[455].f_68 = GET_ASSET_ID("$/cutscene/fenway_3_pt_a_cs/fenway_3_pt_a_cs", 9);
	Global_63541[455].f_148 = 1;
	Global_63541[455].f_72 = 150.0f;
	Global_63541[455].f_76 = 200.0f;
	Global_63541[455].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[455].f_84 = MAKE_TIME_OF_DAY_EX(false, 1, 0, 0);
	Global_63541[455].f_140 = STRING_TO_HASH("BLACKWATER");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[455]), 4, iVar0);
	}
	Global_63541[455].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[455].f_160 = 0;
	Global_63541[555].f_20 = 2;
	Global_63541[555] = 3;
	strcpy(&Global_63541[555] + 4, "BLACKWATER", 16);
	strcpy(&Global_63541[555] + 40, "blackwater5_OBJ", 16);
	Global_63541[555].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Blackwater/RCM_Blackwater5", 4);
	Global_63541[555].f_168 = 3;
	Global_63541[555].f_176 = 1;
	Global_63541[555].f_172 = 2019;
	iVar0 = 0;
	strcpy(&Global_63541[555] + 24, "INVALID", 16);
	Global_63541[555].f_128 = 4294967295;
	Global_63541[555].f_136 = 4294967295;
	Global_63541[555].f_80 = 312;
	Global_63541[555].f_92 = 3;
	Global_63541[555].f_96 = 15.0f;
	*(&Global_63541[555] + 100) = { 699.74f, 78.306f, 1387.809f };
	*(&Global_63541[555] + 112) = { 699.74f, 78.306f, 1387.809f };
	Global_63541[555].f_124 = 349.652f;
	Global_63541[555].f_68 = GET_ASSET_ID("$/cutscene/FENWAY_CS_SEQ/FENWAY_CS_SEQ", 9);
	Global_63541[555].f_148 = 1;
	Global_63541[555].f_72 = 150.0f;
	Global_63541[555].f_76 = 200.0f;
	Global_63541[555].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[555].f_84 = MAKE_TIME_OF_DAY_EX(false, 1, 0, 0);
	Global_63541[555].f_140 = STRING_TO_HASH("BLACKWATER");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[555]), 5, iVar0);
	}
	Global_63541[555].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[555].f_160 = 0;
	Global_63541[1255].f_20 = 12;
	Global_63541[1255] = 3;
	strcpy(&Global_63541[1255] + 4, "BONNIE", 16);
	strcpy(&Global_63541[1255] + 40, "bonnie1_OBJ", 16);
	Global_63541[1255].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Bonnie/RCM_Bonnie1", 4);
	Global_63541[1255].f_168 = 5;
	Global_63541[1255].f_176 = 1;
	Global_63541[1255].f_172 = 2023;
	iVar0 = 0;
	strcpy(&Global_63541[1255] + 24, "INVALID", 16);
	Global_63541[1255].f_128 = 4294967295;
	Global_63541[1255].f_136 = 551;
	Global_63541[1255].f_80 = 411;
	Global_63541[1255].f_92 = 3;
	Global_63541[1255].f_96 = 6.0f;
	*(&Global_63541[1255] + 100) = { -788.792f, 93.106f, 2411.903f };
	*(&Global_63541[1255] + 112) = { -788.792f, 93.106f, 2411.903f };
	Global_63541[1255].f_124 = 349.652f;
	Global_63541[1255].f_68 = GET_ASSET_ID("$/cutscene/bonnie_rcm_1_pt_a_cs/bonnie_rcm_1_pt_a_cs", 9);
	Global_63541[1255].f_148 = 1;
	Global_63541[1255].f_72 = 150.0f;
	Global_63541[1255].f_76 = 200.0f;
	Global_63541[1255].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[1255].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[1255].f_140 = STRING_TO_HASH("BONNIE");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[1255]), 12, iVar0);
	}
	Global_63541[1255].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[1255].f_160 = 0;
	Global_63541[1355].f_20 = 12;
	Global_63541[1355] = 3;
	strcpy(&Global_63541[1355] + 4, "BONNIE", 16);
	strcpy(&Global_63541[1355] + 40, "bonnie2_OBJ", 16);
	Global_63541[1355].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Bonnie/RCM_Bonnie2", 4);
	Global_63541[1355].f_168 = 12;
	Global_63541[1355].f_176 = 1;
	Global_63541[1355].f_172 = 2019;
	iVar0 = 0;
	strcpy(&Global_63541[1355] + 24, "INVALID", 16);
	Global_63541[1355].f_128 = 4294967295;
	Global_63541[1355].f_136 = 551;
	Global_63541[1355].f_80 = 300;
	Global_63541[1355].f_92 = 3;
	Global_63541[1355].f_96 = 7.373f;
	*(&Global_63541[1355] + 100) = { -843.05f, 99.418f, 2465.063f };
	*(&Global_63541[1355] + 112) = { -843.05f, 99.418f, 2465.063f };
	Global_63541[1355].f_124 = 349.652f;
	Global_63541[1355].f_68 = GET_ASSET_ID("$/cutscene/bonnie_rcm_2_cs/bonnie_rcm_2_cs", 9);
	Global_63541[1355].f_148 = 1;
	Global_63541[1355].f_72 = 150.0f;
	Global_63541[1355].f_76 = 200.0f;
	Global_63541[1355].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[1355].f_84 = MAKE_TIME_OF_DAY_EX(false, 1, 0, 0);
	Global_63541[1355].f_140 = STRING_TO_HASH("BONNIE");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[1355]), 13, iVar0);
	}
	Global_63541[1355].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[1355].f_160 = 0;
	Global_63541[1455].f_20 = 12;
	Global_63541[1455] = 1;
	strcpy(&Global_63541[1455] + 4, "BONNIE", 16);
	strcpy(&Global_63541[1455] + 40, "bonnie3_OBJ", 16);
	Global_63541[1455].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Bonnie/RCM_Bonnie3", 4);
	Global_63541[1455].f_168 = 13;
	Global_63541[1455].f_176 = 1;
	Global_63541[1455].f_172 = 2023;
	iVar0 = 0;
	strcpy(&Global_63541[1455] + 24, "INVALID", 16);
	Global_63541[1455].f_128 = 4294967295;
	Global_63541[1455].f_136 = 551;
	Global_63541[1455].f_60 = GET_ASSET_ID("$/content/DLC/ZombiePack/Gringos/DLC_Bonnie_sit_rifle", 1);
	Global_63541[1455].f_80 = 300;
	Global_63541[1455].f_92 = 3;
	Global_63541[1455].f_96 = 8.5f;
	*(&Global_63541[1455] + 100) = { -789.3f, 93.61f, 2406.08f };
	*(&Global_63541[1455] + 112) = { -791.727f, 93.345f, 2409.668f };
	Global_63541[1455].f_124 = 145.656f;
	Global_63541[1455].f_68 = GET_ASSET_ID("$/cutscene/bonnie_rcm_3_cs/bonnie_rcm_3_cs", 9);
	Global_63541[1455].f_148 = 1;
	Global_63541[1455].f_72 = 150.0f;
	Global_63541[1455].f_76 = 200.0f;
	Global_63541[1455].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[1455].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[1455].f_140 = STRING_TO_HASH("BONNIE");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[1455]), 14, iVar0);
	}
	Global_63541[1455].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[1455].f_160 = 0;
	Global_63541[655].f_20 = 6;
	Global_63541[655] = 3;
	strcpy(&Global_63541[655] + 4, "SETH", 16);
	strcpy(&Global_63541[655] + 40, "nseth1_OBJ", 16);
	Global_63541[655].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Seth/RCM_Seth1", 4);
	Global_63541[655].f_168 = 5;
	Global_63541[655].f_176 = 1;
	Global_63541[655].f_172 = 2019;
	iVar0 = 0;
	strcpy(&Global_63541[655] + 24, "INVALID", 16);
	Global_63541[655].f_128 = 4294967295;
	Global_63541[655].f_136 = 545;
	Global_63541[655].f_80 = 312;
	Global_63541[655].f_92 = 3;
	Global_63541[655].f_96 = 16.0f;
	*(&Global_63541[655] + 100) = { 127.228f, 72.476f, 2674.703f };
	*(&Global_63541[655] + 112) = { 127.228f, 72.476f, 2674.703f };
	Global_63541[655].f_124 = 349.652f;
	Global_63541[655].f_68 = GET_ASSET_ID("$/cutscene/THE_DEAD_RISE_AGAIN_1_CS_SEQ/THE_DEAD_RISE_AGAIN_1_CS_SEQ", 9);
	Global_63541[655].f_148 = 1;
	Global_63541[655].f_72 = 150.0f;
	Global_63541[655].f_76 = 200.0f;
	Global_63541[655].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[655].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[655].f_140 = STRING_TO_HASH("SETH");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[655]), 6, iVar0);
	}
	Global_63541[655].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[655].f_160 = 0;
	Global_63541[755].f_20 = 6;
	Global_63541[755] = 3;
	strcpy(&Global_63541[755] + 4, "SETH", 16);
	strcpy(&Global_63541[755] + 40, "nseth2_OBJ", 16);
	Global_63541[755].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Seth/RCM_Seth2", 4);
	Global_63541[755].f_168 = 6;
	Global_63541[755].f_176 = 1;
	Global_63541[755].f_172 = 2023;
	iVar0 = 0;
	strcpy(&Global_63541[755] + 24, "INVALID", 16);
	Global_63541[755].f_128 = 4294967295;
	Global_63541[755].f_136 = 4294967295;
	Global_63541[755].f_80 = 303;
	Global_63541[755].f_92 = 3;
	Global_63541[755].f_96 = 15.0f;
	*(&Global_63541[755] + 100) = { 117.104f, 72.283f, 2672.258f };
	*(&Global_63541[755] + 112) = { 117.104f, 72.283f, 2672.258f };
	Global_63541[755].f_124 = 349.652f;
	Global_63541[755].f_68 = GET_ASSET_ID("$/cutscene/the_dead_rise_again_2_pt_a_cs/the_dead_rise_again_2_pt_a_cs", 9);
	Global_63541[755].f_148 = 1;
	Global_63541[755].f_72 = 150.0f;
	Global_63541[755].f_76 = 200.0f;
	Global_63541[755].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[755].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[755].f_140 = STRING_TO_HASH("SETH");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[755]), 7, iVar0);
	}
	Global_63541[755].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[755].f_160 = 0;
	Global_63541[855].f_20 = 8;
	Global_63541[855] = 3;
	strcpy(&Global_63541[855] + 4, "MERCHANT", 16);
	strcpy(&Global_63541[855] + 40, "merchant1_OBJ", 16);
	Global_63541[855].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Merchant/RCM_Merchant1", 4);
	Global_63541[855].f_168 = 5;
	Global_63541[855].f_176 = 1;
	Global_63541[855].f_172 = 2019;
	iVar0 = 0;
	strcpy(&Global_63541[855] + 24, "INVALID", 16);
	Global_63541[855].f_128 = 4294967295;
	Global_63541[855].f_136 = 4294967295;
	Global_63541[855].f_60 = GET_ASSET_ID("$/content/scripting/gringo/simpleGringo/stand_announce", 1);
	Global_63541[855].f_80 = 312;
	Global_63541[855].f_92 = 3;
	Global_63541[855].f_96 = 20.0f;
	*(&Global_63541[855] + 100) = { -2647.772f, 67.263f, 3415.886f };
	*(&Global_63541[855] + 112) = { -2647.772f, 67.263f, 3415.886f };
	Global_63541[855].f_124 = 203.713f;
	Global_63541[855].f_68 = GET_ASSET_ID("$/cutscene/CURE_FOR_ALL_1_CS_SEQ/CURE_FOR_ALL_1_CS_SEQ", 9);
	Global_63541[855].f_148 = 1;
	Global_63541[855].f_72 = 150.0f;
	Global_63541[855].f_76 = 200.0f;
	Global_63541[855].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[855].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[855].f_140 = STRING_TO_HASH("MERCHANT");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[855]), 8, iVar0);
	}
	Global_63541[855].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[855].f_160 = 0;
	Global_63541[955].f_20 = 8;
	Global_63541[955] = 3;
	strcpy(&Global_63541[955] + 4, "MERCHANT", 16);
	strcpy(&Global_63541[955] + 40, "merchant2_OBJ", 16);
	Global_63541[955].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Merchant/RCM_Merchant2", 4);
	Global_63541[955].f_168 = 8;
	Global_63541[955].f_176 = 1;
	Global_63541[955].f_172 = 2023;
	iVar0 = 0;
	strcpy(&Global_63541[955] + 24, "INVALID", 16);
	Global_63541[955].f_128 = 4294967295;
	Global_63541[955].f_136 = 4294967295;
	Global_63541[955].f_80 = 311;
	Global_63541[955].f_92 = 3;
	Global_63541[955].f_96 = 12.0f;
	*(&Global_63541[955] + 100) = { -3121.211f, 48.6f, 3400.985f };
	*(&Global_63541[955] + 112) = { -3121.211f, 48.6f, 3400.985f };
	Global_63541[955].f_124 = 196.229f;
	Global_63541[955].f_68 = GET_ASSET_ID("$/cutscene/CURE_FOR_ALL_2_CS_SEQ/CURE_FOR_ALL_2_CS_SEQ", 9);
	Global_63541[955].f_148 = 1;
	Function_23(&Global_63541[955] + 144, 1024);
	Global_63541[955].f_72 = 150.0f;
	Global_63541[955].f_76 = 200.0f;
	Global_63541[955].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[955].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[955].f_140 = STRING_TO_HASH("MERCHANT");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[955]), 9, iVar0);
	}
	Global_63541[955].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[955].f_160 = 0;
	Global_63541[1055].f_20 = 8;
	Global_63541[1055] = 3;
	strcpy(&Global_63541[1055] + 4, "MERCHANT", 16);
	strcpy(&Global_63541[1055] + 40, "merchant3_OBJ", 16);
	Global_63541[1055].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Merchant/RCM_Merchant3", 4);
	Global_63541[1055].f_168 = 9;
	Global_63541[1055].f_176 = 1;
	Global_63541[1055].f_172 = 2019;
	iVar0 = 0;
	strcpy(&Global_63541[1055] + 24, "INVALID", 16);
	Global_63541[1055].f_128 = 4294967295;
	Global_63541[1055].f_136 = 4294967295;
	Global_63541[1055].f_60 = GET_ASSET_ID("$/content/scripting/gringo/simpleGringo/RCM_AztecGold_Treasure", 1);
	Global_63541[1055].f_80 = 311;
	Global_63541[1055].f_92 = 3;
	Global_63541[1055].f_96 = 10.0f;
	*(&Global_63541[1055] + 100) = { -2291.542f, 17.418f, 3157.479f };
	*(&Global_63541[1055] + 112) = { -2291.542f, 17.418f, 3157.479f };
	Global_63541[1055].f_124 = 96.474f;
	Global_63541[1055].f_148 = 1;
	Global_63541[1055].f_72 = 150.0f;
	Global_63541[1055].f_76 = 200.0f;
	Global_63541[1055].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[1055].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[1055].f_140 = STRING_TO_HASH("MERCHANT");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[1055]), 10, iVar0);
	}
	Global_63541[1055].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[1055].f_160 = 0;
	Global_63541[1155].f_20 = 8;
	Global_63541[1155] = 3;
	strcpy(&Global_63541[1155] + 4, "MERCHANT", 16);
	strcpy(&Global_63541[1155] + 40, "merchant4_OBJ", 16);
	Global_63541[1155].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Merchant/RCM_Merchant4", 4);
	Global_63541[1155].f_168 = 10;
	Global_63541[1155].f_176 = 1;
	Global_63541[1155].f_172 = 2019;
	iVar0 = 0;
	strcpy(&Global_63541[1155] + 24, "INVALID", 16);
	Global_63541[1155].f_128 = 4294967295;
	Global_63541[1155].f_136 = 4294967295;
	Global_63541[1155].f_80 = 311;
	Global_63541[1155].f_92 = 3;
	Global_63541[1155].f_96 = 10.0f;
	*(&Global_63541[1155] + 100) = { -3692.98f, 8.04f, 3513.669f };
	*(&Global_63541[1155] + 112) = { -3692.98f, 8.04f, 3513.669f };
	Global_63541[1155].f_124 = 96.474f;
	Global_63541[1155].f_68 = GET_ASSET_ID("$/cutscene/cure_for_all_3_pt_a_cs/cure_for_all_3_pt_a_cs", 9);
	Global_63541[1155].f_148 = 1;
	Global_63541[1155].f_72 = 150.0f;
	Global_63541[1155].f_76 = 200.0f;
	Global_63541[1155].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[1155].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[1155].f_140 = STRING_TO_HASH("MERCHANT");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[1155]), 11, iVar0);
	}
	Global_63541[1155].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[1155].f_160 = 0;
	Global_63541[055].f_20 = 0;
	Global_63541[055] = 3;
	strcpy(&Global_63541[055] + 4, "MACKENNA", 16);
	strcpy(&Global_63541[055] + 40, "mackenna1_OBJ", 16);
	Global_63541[055].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Mackenna/RCM_Mackenna1", 4);
	Global_63541[055].f_168 = 5;
	Global_63541[055].f_176 = 1;
	Global_63541[055].f_172 = 2023;
	iVar0 = 0;
	strcpy(&Global_63541[055] + 24, "INVALID", 16);
	Global_63541[055].f_128 = 4294967295;
	Global_63541[055].f_136 = 4294967295;
	Global_63541[055].f_60 = GET_ASSET_ID("$/content/scripting/gringo/simpleGringo/RCM_12_CS03_fix_wing", 1);
	Global_63541[055].f_80 = 411;
	Global_63541[055].f_92 = 3;
	Global_63541[055].f_96 = 10.0f;
	*(&Global_63541[055] + 100) = { -3188.574f, 40.922f, 3713.593f };
	*(&Global_63541[055] + 112) = { -3188.574f, 40.922f, 3713.593f };
	Global_63541[055].f_124 = 39.918f;
	Global_63541[055].f_68 = GET_ASSET_ID("$/cutscene/mckenna_1_pt_a_cs/mckenna_1_pt_a_cs", 9);
	Global_63541[055].f_148 = 1;
	Function_23(&Global_63541[055] + 144, 1024);
	Global_63541[055].f_72 = 150.0f;
	Global_63541[055].f_76 = 200.0f;
	Global_63541[055].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[055].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[055].f_140 = STRING_TO_HASH("MACKENNA");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[055]), 0, iVar0);
	}
	Global_63541[055].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[055].f_160 = 0;
	Global_63541[155].f_20 = 0;
	Global_63541[155] = 3;
	strcpy(&Global_63541[155] + 4, "MACKENNA", 16);
	strcpy(&Global_63541[155] + 40, "mackenna1_OBJ", 16);
	Global_63541[155].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Mackenna/RCM_Mackenna2", 4);
	Global_63541[155].f_168 = 0;
	Global_63541[155].f_176 = 1;
	Global_63541[155].f_172 = 2023;
	iVar0 = 0;
	strcpy(&Global_63541[155] + 24, "INVALID", 16);
	Global_63541[155].f_128 = 4294967295;
	Global_63541[155].f_136 = 4294967295;
	Global_63541[155].f_60 = GET_ASSET_ID("$/content/scripting/gringo/simpleGringo/RCM_12_CS03_fix_wing", 1);
	Global_63541[155].f_80 = 525;
	Global_63541[155].f_92 = 3;
	Global_63541[155].f_96 = 12.0f;
	*(&Global_63541[155] + 100) = { -3183.772f, 41.453f, 3723.894f };
	*(&Global_63541[155] + 112) = { -3183.772f, 41.453f, 3723.894f };
	Global_63541[155].f_124 = 26.926f;
	Global_63541[155].f_68 = GET_ASSET_ID("$/cutscene/mckenna_2_pt_a_cs/mckenna_2_pt_a_cs", 9);
	Global_63541[155].f_148 = 1;
	Function_23(&Global_63541[155] + 144, 1024);
	Global_63541[155].f_72 = 150.0f;
	Global_63541[155].f_76 = 200.0f;
	Global_63541[155].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[155].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[155].f_140 = STRING_TO_HASH("MACKENNA");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[155]), 1, iVar0);
	}
	Global_63541[155].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[155].f_160 = 0;
	Global_63541[1555].f_20 = 15;
	Global_63541[1555] = 1;
	strcpy(&Global_63541[1555] + 4, "MARSHAL", 16);
	strcpy(&Global_63541[1555] + 40, "marshal1_OBJ", 16);
	Global_63541[1555].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Marshal/RCM_Marshal1", 4);
	Global_63541[1555].f_168 = 5;
	Global_63541[1555].f_176 = 1;
	Global_63541[1555].f_172 = 2019;
	iVar0 = 0;
	strcpy(&Global_63541[1555] + 24, "INVALID", 16);
	Global_63541[1555].f_128 = 4294967295;
	Global_63541[1555].f_136 = 547;
	Global_63541[1555].f_80 = 411;
	Global_63541[1555].f_92 = 3;
	Global_63541[1555].f_96 = 15.0f;
	*(&Global_63541[1555] + 100) = { -2088.415f, 16.982f, 2601.308f };
	*(&Global_63541[1555] + 112) = { -2089.727f, 17.042f, 2605.469f };
	Global_63541[1555].f_124 = 349.652f;
	Global_63541[1555].f_68 = GET_ASSET_ID("$/cutscene/MARSHAL_RCM_1_CS_SEQ/MARSHAL_RCM_1_CS_SEQ", 9);
	Global_63541[1555].f_148 = 1;
	Global_63541[1555].f_72 = 150.0f;
	Global_63541[1555].f_76 = 200.0f;
	Global_63541[1555].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[1555].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[1555].f_140 = STRING_TO_HASH("MARSHAL");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[1555]), 15, iVar0);
	}
	Global_63541[1555].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[1555].f_160 = 0;
	Global_63541[1655].f_20 = 15;
	Global_63541[1655] = 1;
	strcpy(&Global_63541[1655] + 4, "MARSHAL", 16);
	strcpy(&Global_63541[1655] + 40, "marshal2_OBJ", 16);
	Global_63541[1655].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Marshal/RCM_Marshal2", 4);
	Global_63541[1655].f_168 = 15;
	Global_63541[1655].f_176 = 1;
	Global_63541[1655].f_172 = 2023;
	iVar0 = 0;
	strcpy(&Global_63541[1655] + 24, "INVALID", 16);
	Global_63541[1655].f_128 = 4294967295;
	Global_63541[1655].f_136 = 118;
	Global_63541[1655].f_80 = 304;
	Global_63541[1655].f_92 = 3;
	Global_63541[1655].f_96 = 1.572f;
	*(&Global_63541[1655] + 100) = { -2152.08f, 16.827f, 2623.437f };
	*(&Global_63541[1655] + 112) = { -2144.896f, 16.774f, 2622.544f };
	Global_63541[1655].f_124 = -87.554f;
	Global_63541[1655].f_68 = GET_ASSET_ID("$/cutscene/MARSHAL_RCM_2_CS_SEQ/MARSHAL_RCM_2_CS_SEQ", 9);
	Global_63541[1655].f_148 = 1;
	Global_63541[1655].f_72 = 150.0f;
	Global_63541[1655].f_76 = 200.0f;
	Global_63541[1655].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[1655].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[1655].f_140 = STRING_TO_HASH("MARSHAL");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[1655]), 16, iVar0);
	}
	Global_63541[1655].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[1655].f_160 = 0;
	Global_63541[1755].f_20 = 15;
	Global_63541[1755] = 1;
	strcpy(&Global_63541[1755] + 4, "MARSHAL", 16);
	strcpy(&Global_63541[1755] + 40, "marshal3_OBJ", 16);
	Global_63541[1755].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Marshal/RCM_Marshal3", 4);
	Global_63541[1755].f_168 = 16;
	Global_63541[1755].f_176 = 1;
	Global_63541[1755].f_172 = 2019;
	iVar0 = 0;
	strcpy(&Global_63541[1755] + 24, "INVALID", 16);
	Global_63541[1755].f_128 = 4294967295;
	Global_63541[1755].f_136 = 1236;
	Global_63541[1755].f_80 = 304;
	Global_63541[1755].f_92 = 3;
	Global_63541[1755].f_96 = 11.328f;
	*(&Global_63541[1755] + 100) = { -2173.109f, 16.164f, 2534.515f };
	*(&Global_63541[1755] + 112) = { -2173.109f, 16.164f, 2534.515f };
	Global_63541[1755].f_124 = 349.652f;
	Global_63541[1755].f_68 = GET_ASSET_ID("$/cutscene/marshal_rcm_3_cs/marshal_rcm_3_cs", 9);
	Global_63541[1755].f_148 = 1;
	Global_63541[1755].f_72 = 150.0f;
	Global_63541[1755].f_76 = 200.0f;
	Global_63541[1755].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[1755].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[1755].f_140 = STRING_TO_HASH("MARSHAL");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[1755]), 17, iVar0);
	}
	Global_63541[1755].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[1755].f_160 = 0;
	Global_63541[1855].f_20 = 15;
	Global_63541[1855] = 1;
	strcpy(&Global_63541[1855] + 4, "MARSHAL", 16);
	strcpy(&Global_63541[1855] + 40, "marshal4_OBJ", 16);
	Global_63541[1855].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Marshal/RCM_Marshal4", 4);
	Global_63541[1855].f_168 = 17;
	Global_63541[1855].f_176 = 1;
	Global_63541[1855].f_172 = 2019;
	iVar0 = 0;
	strcpy(&Global_63541[1855] + 24, "INVALID", 16);
	Global_63541[1855].f_128 = 4294967295;
	Global_63541[1855].f_136 = 547;
	Global_63541[1855].f_80 = 304;
	Global_63541[1855].f_92 = 3;
	Global_63541[1855].f_96 = 15.0f;
	*(&Global_63541[1855] + 100) = { -2084.073f, 16.965f, 2606.185f };
	*(&Global_63541[1855] + 112) = { -2089.727f, 17.042f, 2605.469f };
	Global_63541[1855].f_124 = 73.721f;
	Global_63541[1855].f_68 = GET_ASSET_ID("$/cutscene/marshal_rcm_4_cs/marshal_rcm_4_cs", 9);
	Global_63541[1855].f_148 = 1;
	Global_63541[1855].f_72 = 150.0f;
	Global_63541[1855].f_76 = 200.0f;
	Global_63541[1855].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[1855].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[1855].f_140 = STRING_TO_HASH("MARSHAL");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[1855]), 18, iVar0);
	}
	Global_63541[1855].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[1855].f_160 = 0;
	Global_63541[1955].f_20 = 19;
	Global_63541[1955] = 3;
	strcpy(&Global_63541[1955] + 4, "MISSING", 16);
	strcpy(&Global_63541[1955] + 40, "missing1_OBJ", 16);
	Global_63541[1955].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Missing/RCM_Missing1", 4);
	Global_63541[1955].f_168 = 9;
	Global_63541[1955].f_176 = 1;
	Global_63541[1955].f_172 = 2019;
	iVar0 = 0;
	strcpy(&Global_63541[1955] + 24, "INVALID", 16);
	Global_63541[1955].f_128 = 4294967295;
	Global_63541[1955].f_136 = 4294967295;
	Global_63541[1955].f_80 = 549;
	Global_63541[1955].f_92 = 3;
	Global_63541[1955].f_96 = 11.0f;
	*(&Global_63541[1955] + 100) = { -2648.236f, 67.263f, 3416.121f };
	*(&Global_63541[1955] + 112) = { -2648.236f, 67.263f, 3416.121f };
	Global_63541[1955].f_124 = 230.0f;
	Global_63541[1955].f_68 = GET_ASSET_ID("$/cutscene/missing_persons_1_cs/missing_persons_1_cs", 9);
	Global_63541[1955].f_148 = 1;
	Global_63541[1955].f_72 = 150.0f;
	Global_63541[1955].f_76 = 200.0f;
	Global_63541[1955].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[1955].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[1955].f_140 = STRING_TO_HASH("MISSING");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[1955]), 19, iVar0);
	}
	Global_63541[1955].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[1955].f_160 = 0;
	Global_63541[2055].f_20 = 19;
	Global_63541[2055] = 3;
	strcpy(&Global_63541[2055] + 4, "MISSING", 16);
	strcpy(&Global_63541[2055] + 40, "missing2_OBJ", 16);
	Global_63541[2055].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Missing/RCM_Missing2", 4);
	Global_63541[2055].f_168 = 19;
	Global_63541[2055].f_176 = 1;
	Global_63541[2055].f_172 = 2019;
	iVar0 = 0;
	strcpy(&Global_63541[2055] + 24, "INVALID", 16);
	Global_63541[2055].f_128 = 4294967295;
	Global_63541[2055].f_136 = 4294967295;
	Global_63541[2055].f_80 = 549;
	Global_63541[2055].f_92 = 3;
	Global_63541[2055].f_96 = 18.0f;
	*(&Global_63541[2055] + 100) = { -2831.261f, 50.332f, 2414.595f };
	*(&Global_63541[2055] + 112) = { -2831.261f, 50.332f, 2414.595f };
	Global_63541[2055].f_124 = 271.0f;
	Global_63541[2055].f_68 = GET_ASSET_ID("$/cutscene/missing_persons_2_cs/missing_persons_2_cs", 9);
	Global_63541[2055].f_148 = 1;
	Global_63541[2055].f_72 = 150.0f;
	Global_63541[2055].f_76 = 200.0f;
	Global_63541[2055].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[2055].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[2055].f_140 = STRING_TO_HASH("MISSING");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[2055]), 20, iVar0);
	}
	Global_63541[2055].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[2055].f_160 = 0;
	Global_63541[2155].f_20 = 19;
	Global_63541[2155] = 3;
	strcpy(&Global_63541[2155] + 4, "MISSING", 16);
	strcpy(&Global_63541[2155] + 40, "missing3_OBJ", 16);
	Global_63541[2155].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Missing/RCM_Missing3", 4);
	Global_63541[2155].f_168 = 19;
	Global_63541[2155].f_176 = 1;
	Global_63541[2155].f_172 = 2023;
	iVar0 = 0;
	strcpy(&Global_63541[2155] + 24, "INVALID", 16);
	Global_63541[2155].f_128 = 4294967295;
	Global_63541[2155].f_136 = 4294967295;
	Global_63541[2155].f_80 = 330;
	Global_63541[2155].f_92 = 3;
	Global_63541[2155].f_96 = 11.0f;
	*(&Global_63541[2155] + 100) = { -2648.048f, 67.263f, 3415.614f };
	*(&Global_63541[2155] + 112) = { -2648.048f, 67.263f, 3415.614f };
	Global_63541[2155].f_124 = 349.652f;
	Global_63541[2155].f_68 = GET_ASSET_ID("$/cutscene/MISSING_PERSONS_3_CS_SEQ/MISSING_PERSONS_3_CS_SEQ", 9);
	Global_63541[2155].f_148 = 1;
	Global_63541[2155].f_72 = 150.0f;
	Global_63541[2155].f_76 = 200.0f;
	Global_63541[2155].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[2155].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[2155].f_140 = STRING_TO_HASH("MISSING");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[2155]), 21, iVar0);
	}
	Global_63541[2155].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[2155].f_160 = 0;
	Global_63541[2255].f_20 = 22;
	Global_63541[2255] = 3;
	strcpy(&Global_63541[2255] + 4, "RICKETTS", 16);
	strcpy(&Global_63541[2255] + 40, "ricketts1_OBJ", 16);
	Global_63541[2255].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Ricketts/RCM_Ricketts1", 4);
	Global_63541[2255].f_168 = 4294967295;
	Global_63541[2255].f_176 = 2;
	Global_63541[2255].f_172 = 2018;
	iVar0 = 0;
	strcpy(&Global_63541[2255] + 24, "INVALID", 16);
	Global_63541[2255].f_128 = 4294967295;
	Global_63541[2255].f_136 = 4294967295;
	Global_63541[2255].f_80 = 411;
	Global_63541[2255].f_92 = 3;
	Global_63541[2255].f_96 = 9.0f;
	*(&Global_63541[2255] + 100) = { -800.82f, 14.8f, 3710.07f };
	*(&Global_63541[2255] + 112) = { -800.82f, 14.8f, 3710.07f };
	Global_63541[2255].f_124 = 349.652f;
	Global_63541[2255].f_68 = GET_ASSET_ID("$/cutscene/LANDON_RICKETTS_1_CS_SEQ/LANDON_RICKETTS_1_CS_SEQ", 9);
	Global_63541[2255].f_148 = 1;
	Global_63541[2255].f_72 = 150.0f;
	Global_63541[2255].f_76 = 200.0f;
	Global_63541[2255].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[2255].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[2255].f_140 = STRING_TO_HASH("RICKETTS");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[2255]), 22, iVar0);
	}
	Global_63541[2255].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[2255].f_160 = 0;
	Global_63541[2355].f_20 = 22;
	Global_63541[2355] = 1;
	strcpy(&Global_63541[2355] + 4, "RICKETTS", 16);
	strcpy(&Global_63541[2355] + 40, "ricketts2_OBJ", 16);
	Global_63541[2355].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Ricketts/RCM_Ricketts2", 4);
	Global_63541[2355].f_168 = 22;
	Global_63541[2355].f_176 = 2;
	Global_63541[2355].f_172 = 2019;
	iVar0 = 0;
	strcpy(&Global_63541[2355] + 24, "INVALID", 16);
	Global_63541[2355].f_128 = 4294967295;
	Global_63541[2355].f_136 = 558;
	Global_63541[2355].f_80 = 301;
	Global_63541[2355].f_92 = 3;
	Global_63541[2355].f_96 = 8.5f;
	*(&Global_63541[2355] + 100) = { -802.5f, 14.8f, 3725.68f };
	*(&Global_63541[2355] + 112) = { -802.5f, 14.8f, 3725.68f };
	Global_63541[2355].f_124 = 349.652f;
	Global_63541[2355].f_68 = GET_ASSET_ID("$/cutscene/LANDON_RICKETTS_2_CS_SEQ/LANDON_RICKETTS_2_CS_SEQ", 9);
	Global_63541[2355].f_148 = 1;
	Global_63541[2355].f_72 = 150.0f;
	Global_63541[2355].f_76 = 200.0f;
	Global_63541[2355].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[2355].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[2355].f_140 = STRING_TO_HASH("RICKETTS");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[2355]), 23, iVar0);
	}
	Global_63541[2355].f_156 = MAKE_TIME_OF_DAY_EX(false, 2, 30, 0);
	Global_63541[2355].f_160 = 1;
	Global_63541[2455].f_20 = 24;
	Global_63541[2455] = 3;
	strcpy(&Global_63541[2455] + 4, "MOTHER", 16);
	strcpy(&Global_63541[2455] + 40, "mother1_OBJ", 16);
	Global_63541[2455].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Mother/RCM_Mother1", 4);
	Global_63541[2455].f_168 = 4294967295;
	Global_63541[2455].f_176 = 2;
	Global_63541[2455].f_172 = 2018;
	iVar0 = 0;
	strcpy(&Global_63541[2455] + 24, "INVALID", 16);
	Global_63541[2455].f_128 = 4294967295;
	Global_63541[2455].f_136 = 613;
	Global_63541[2455].f_80 = 312;
	Global_63541[2455].f_92 = 3;
	Global_63541[2455].f_96 = 12.0f;
	*(&Global_63541[2455] + 100) = { -1661.962f, 8.502f, 4278.853f };
	*(&Global_63541[2455] + 112) = { -1661.962f, 8.502f, 4278.853f };
	Global_63541[2455].f_124 = 152.0f;
	Global_63541[2455].f_68 = GET_ASSET_ID("$/cutscene/MOTHER_SUPERIOR_1_CS_SEQ/MOTHER_SUPERIOR_1_CS_SEQ", 9);
	Global_63541[2455].f_148 = 1;
	Global_63541[2455].f_72 = 150.0f;
	Global_63541[2455].f_76 = 200.0f;
	Global_63541[2455].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[2455].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[2455].f_140 = STRING_TO_HASH("MOTHER");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[2455]), 24, iVar0);
	}
	Global_63541[2455].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[2455].f_160 = 0;
	Function_23(&Global_63541[2455] + 144, 65536);
	Global_63541[2555].f_20 = 24;
	Global_63541[2555] = 3;
	strcpy(&Global_63541[2555] + 4, "MOTHER", 16);
	strcpy(&Global_63541[2555] + 40, "mother2_OBJ", 16);
	Global_63541[2555].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Mother/RCM_Mother2", 4);
	Global_63541[2555].f_168 = 24;
	Global_63541[2555].f_176 = 2;
	Global_63541[2555].f_172 = 2023;
	iVar0 = 0;
	strcpy(&Global_63541[2555] + 24, "INVALID", 16);
	Global_63541[2555].f_128 = 4294967295;
	Global_63541[2555].f_136 = 613;
	Global_63541[2555].f_80 = 304;
	Global_63541[2555].f_92 = 3;
	Global_63541[2555].f_96 = 6.03f;
	*(&Global_63541[2555] + 100) = { -1663.993f, 8.501f, 4282.997f };
	*(&Global_63541[2555] + 112) = { -1663.993f, 8.501f, 4282.997f };
	Global_63541[2555].f_124 = 349.652f;
	Global_63541[2555].f_68 = GET_ASSET_ID("$/cutscene/mother_superior_has_a_gun_2_pt_a_cs/mother_superior_has_a_gun_2_pt_a_cs", 9);
	Global_63541[2555].f_148 = 1;
	Global_63541[2555].f_72 = 150.0f;
	Global_63541[2555].f_76 = 200.0f;
	Global_63541[2555].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[2555].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[2555].f_140 = STRING_TO_HASH("MOTHER");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[2555]), 25, iVar0);
	}
	Global_63541[2555].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[2555].f_160 = 0;
	Global_63541[2655].f_20 = 24;
	Global_63541[2655] = 3;
	strcpy(&Global_63541[2655] + 4, "MOTHER", 16);
	strcpy(&Global_63541[2655] + 40, "mother3_OBJ", 16);
	Global_63541[2655].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Mother/RCM_Mother3", 4);
	Global_63541[2655].f_168 = 25;
	Global_63541[2655].f_176 = 2;
	Global_63541[2655].f_172 = 2023;
	iVar0 = 0;
	strcpy(&Global_63541[2655] + 24, "INVALID", 16);
	Global_63541[2655].f_128 = 4294967295;
	Global_63541[2655].f_136 = 613;
	Global_63541[2655].f_80 = 304;
	Global_63541[2655].f_92 = 3;
	Global_63541[2655].f_96 = 4.629f;
	*(&Global_63541[2655] + 100) = { -1702.423f, 8.071f, 4255.994f };
	*(&Global_63541[2655] + 112) = { -1702.423f, 8.071f, 4255.994f };
	Global_63541[2655].f_124 = 232.0f;
	Global_63541[2655].f_68 = GET_ASSET_ID("$/cutscene/mother_superior_has_a_gun_3_pt_a_cs/mother_superior_has_a_gun_3_pt_a_cs", 9);
	Global_63541[2655].f_148 = 1;
	Global_63541[2655].f_72 = 150.0f;
	Global_63541[2655].f_76 = 200.0f;
	Global_63541[2655].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[2655].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[2655].f_140 = STRING_TO_HASH("MOTHER");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[2655]), 26, iVar0);
	}
	Global_63541[2655].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[2655].f_160 = 0;
	Global_63541[2755].f_20 = 24;
	Global_63541[2755] = 1;
	strcpy(&Global_63541[2755] + 4, "MOTHER", 16);
	strcpy(&Global_63541[2755] + 40, "mother4_OBJ", 16);
	Global_63541[2755].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Mother/RCM_Mother4", 4);
	Global_63541[2755].f_168 = 26;
	Global_63541[2755].f_176 = 2;
	Global_63541[2755].f_172 = 2023;
	iVar0 = 0;
	strcpy(&Global_63541[2755] + 24, "INVALID", 16);
	Global_63541[2755].f_128 = 4294967295;
	Global_63541[2755].f_136 = 613;
	Global_63541[2755].f_80 = 304;
	Global_63541[2755].f_92 = 3;
	Global_63541[2755].f_96 = 6.0f;
	*(&Global_63541[2755] + 100) = { -1695.865f, 8.642f, 4187.109f };
	*(&Global_63541[2755] + 112) = { -1695.865f, 8.642f, 4187.109f };
	Global_63541[2755].f_124 = 349.652f;
	Global_63541[2755].f_68 = GET_ASSET_ID("$/cutscene/MOTHER_SUPERIOR_4_CS_SEQ/MOTHER_SUPERIOR_4_CS_SEQ", 9);
	Global_63541[2755].f_148 = 1;
	Global_63541[2755].f_72 = 150.0f;
	Global_63541[2755].f_76 = 200.0f;
	Global_63541[2755].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[2755].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[2755].f_140 = STRING_TO_HASH("MOTHER");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[2755]), 27, iVar0);
	}
	Global_63541[2755].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[2755].f_160 = 0;
	Function_23(&Global_63541[2755] + 144, 65536);
	Global_63541[2855].f_20 = 28;
	Global_63541[2855] = 3;
	strcpy(&Global_63541[2855] + 4, "RETURN", 16);
	strcpy(&Global_63541[2855] + 40, "false1_OBJ", 16);
	Global_63541[2855].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/False/RCM_False1", 4);
	Global_63541[2855].f_168 = 4294967295;
	Global_63541[2855].f_176 = 3;
	Global_63541[2855].f_172 = 2022;
	iVar0 = 0;
	strcpy(&Global_63541[2855] + 24, "INVALID", 16);
	Global_63541[2855].f_128 = 4294967295;
	Global_63541[2855].f_136 = 4294967295;
	Global_63541[2855].f_80 = 314;
	Global_63541[2855].f_92 = 3;
	Global_63541[2855].f_96 = 3.0f;
	*(&Global_63541[2855] + 100) = { -115.751f, 118.869f, 1373.431f };
	*(&Global_63541[2855] + 112) = { -115.751f, 118.869f, 1373.431f };
	Global_63541[2855].f_124 = 349.652f;
	Global_63541[2855].f_148 = 1;
	Global_63541[2855].f_72 = 150.0f;
	Global_63541[2855].f_76 = 200.0f;
	Global_63541[2855].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[2855].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[2855].f_140 = STRING_TO_HASH("RETURN");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[2855]), 28, iVar0);
	}
	Global_63541[2855].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[2855].f_160 = 0;
	Global_63541[2955].f_20 = 29;
	Global_63541[2955] = 3;
	strcpy(&Global_63541[2955] + 4, "RETURN", 16);
	strcpy(&Global_63541[2955] + 40, "return1_OBJ", 16);
	Global_63541[2955].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Return/RCM_Return1", 4);
	Global_63541[2955].f_168 = 4294967295;
	Global_63541[2955].f_176 = 3;
	Global_63541[2955].f_172 = 2022;
	iVar0 = 0;
	strcpy(&Global_63541[2955] + 24, "INVALID", 16);
	Global_63541[2955].f_128 = 4294967295;
	Global_63541[2955].f_136 = 4294967295;
	Global_63541[2955].f_80 = 314;
	Global_63541[2955].f_92 = 3;
	Global_63541[2955].f_96 = 3.0f;
	*(&Global_63541[2955] + 100) = { -115.751f, 118.869f, 1373.431f };
	*(&Global_63541[2955] + 112) = { -115.751f, 118.869f, 1373.431f };
	Global_63541[2955].f_124 = 349.652f;
	Global_63541[2955].f_148 = 1;
	Global_63541[2955].f_72 = 150.0f;
	Global_63541[2955].f_76 = 200.0f;
	Global_63541[2955].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[2955].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[2955].f_140 = STRING_TO_HASH("RETURN");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[2955]), 29, iVar0);
	}
	Global_63541[2955].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[2955].f_160 = 0;
	Global_63541[3055].f_20 = 29;
	Global_63541[3055] = 3;
	strcpy(&Global_63541[3055] + 4, "RETURN", 16);
	strcpy(&Global_63541[3055] + 40, "return2_OBJ", 16);
	Global_63541[3055].f_56 = GET_ASSET_ID("$/content/DLC/ZombiePack/RCM/Return/RCM_Return2", 4);
	Global_63541[3055].f_168 = 29;
	Global_63541[3055].f_176 = 3;
	Global_63541[3055].f_172 = 2023;
	iVar0 = 0;
	strcpy(&Global_63541[3055] + 24, "INVALID", 16);
	Global_63541[3055].f_128 = 4294967295;
	Global_63541[3055].f_136 = 4294967295;
	Global_63541[3055].f_80 = 314;
	Global_63541[3055].f_92 = 3;
	Global_63541[3055].f_96 = 3.0f;
	*(&Global_63541[3055] + 100) = { -115.751f, 118.869f, 1373.431f };
	*(&Global_63541[3055] + 112) = { -115.751f, 118.869f, 1373.431f };
	Global_63541[3055].f_124 = 349.652f;
	Global_63541[3055].f_148 = 1;
	Global_63541[3055].f_72 = 150.0f;
	Global_63541[3055].f_76 = 200.0f;
	Global_63541[3055].f_88 = MAKE_TIME_OF_DAY_EX(false, 0, 0, 0);
	Global_63541[3055].f_84 = MAKE_TIME_OF_DAY_EX(false, 6, 0, 0);
	Global_63541[3055].f_140 = STRING_TO_HASH("RETURN");
	if (iVar0 != 0)
	{
		Function_427(&(Global_63541[3055]), 30, iVar0);
	}
	Global_63541[3055].f_156 = MAKE_TIME_OF_DAY_EX(99, 9, 9, 9);
	Global_63541[3055].f_160 = 0;
	return;
}

void Function_427(var uParam0, int iParam1, int iParam2) //Position: 0x23835 / 145461
{
	int iVar0;
	
	iVar0 = uParam0->f_172;
	iParam1 = iParam1;
	if (iParam2 & 2 == 0)
	{
		iVar0 |= 64;
		iVar0 = (iVar0 - 64);
	}
	if (iParam2 & 4 == 0)
	{
		iVar0 |= 128;
		iVar0 = (iVar0 - 128);
	}
	if (iParam2 & 8 == 0)
	{
		iVar0 |= 256;
		iVar0 = (iVar0 - 256);
	}
	if (iParam2 & 16 == 0)
	{
		iVar0 |= 512;
		iVar0 = (iVar0 - 512);
	}
	if (iParam2 & 32 == 0)
	{
		iVar0 |= 1024;
		iVar0 = (iVar0 - 1024);
	}
	if (iParam2 & 1 == 0)
	{
		iVar0 |= 32;
		iVar0 = (iVar0 - 32);
	}
	uParam0->f_172 = iVar0;
	return;
}

void Function_428() //Position: 0x238D8 / 145624
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 77)
	{
		Global_63541[iVar055] = 0;
		strcpy(&Global_63541[iVar055] + 4, "INVALID", 16);
		Global_63541[iVar055].f_20 = 4294967295;
		strcpy(&Global_63541[iVar055] + 24, "", 16);
		strcpy(&Global_63541[iVar055] + 40, "", 16);
		Global_63541[iVar055].f_56 = "";
		Global_63541[iVar055].f_60 = "";
		Global_63541[iVar055].f_64 = "";
		Global_63541[iVar055].f_68 = "";
		Global_63541[iVar055].f_72 = 0.0f;
		Global_63541[iVar055].f_76 = 0.0f;
		Global_63541[iVar055].f_80 = 4294967295;
		Global_63541[iVar055].f_84 = Function_429();
		Global_63541[iVar055].f_88 = Function_429();
		Global_63541[iVar055].f_92 = 4294967295;
		Global_63541[iVar055].f_96 = 0.0f;
		Function_434();
		*(&Global_63541[iVar055] + 100) = { StackVal, StackVal, Function_434() };
		Function_434();
		*(&Global_63541[iVar055] + 112) = { StackVal, StackVal, Function_434() };
		Global_63541[iVar055].f_124 = 0.0f;
		Global_63541[iVar055].f_128 = 4294967295;
		Global_63541[iVar055].f_132 = 4294967295;
		Global_63541[iVar055].f_136 = 4294967295;
		Global_63541[iVar055].f_140 = 4294967295;
		Global_63541[iVar055].f_144 = 0;
		Global_63541[iVar055].f_148 = 0;
		Global_63541[iVar055].f_152 = 0;
		Global_63541[iVar055].f_156 = Function_429();
		Global_63541[iVar055].f_160 = 0;
		Global_63541[iVar055].f_164 = 4294967295;
		Global_63541[iVar055].f_168 = 4294967295;
		Global_63541[iVar055].f_172 = 0;
		Global_63541[iVar055].f_176 = 4294967295;
		Global_63541[iVar055].f_180 = 4294967295;
		iVar0++;
	}
	return;
}

var Function_429() //Position: 0x23A5E / 146014
{
	return MAKE_TIME_OF_DAY_EX(false, 0, 0, 1);
}

void Function_430() //Position: 0x23A6B / 146027
{
	Global_74542[3110].f_12 = 1;
	Global_74542[210].f_12 = 1;
	Global_74542[310].f_12 = 1;
	Global_74542[410].f_12 = 1;
	Global_74542[1210].f_12 = 1;
	Global_74542[1410].f_12 = 1;
	Global_74542[610].f_12 = 1;
	Global_74542[710].f_12 = 1;
	Global_74542[810].f_12 = 1;
	Global_74542[010].f_12 = 1;
	Global_74542[110].f_12 = 1;
	Global_74542[1510].f_12 = 1;
	Global_74542[1810].f_12 = 1;
	Global_74542[1910].f_12 = 1;
	Global_74542[2110].f_12 = 1;
	Global_74542[2210].f_12 = 1;
	Global_74542[2310].f_12 = 1;
	Global_74542[2410].f_12 = 1;
	Global_74542[2510].f_12 = 1;
	Global_74542[2610].f_12 = 1;
	Global_74542[2710].f_12 = 1;
	Global_74542[2910].f_12 = 1;
	Global_74542[3010].f_12 = 1;
	return;
}

void Function_431() //Position: 0x23B67 / 146279
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		Global_74542[3110] = 1;
		iVar0++;
	}
	return;
}

void Function_432(int iParam0, int iParam1) //Position: 0x23B89 / 146313
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_433(bool bParam0, bool bParam1) //Position: 0x23B9C / 146332
{
	return (bParam0 && bParam1) == 0;
}

vector3 Function_434() //Position: 0x23BA9 / 146345
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_435(int iParam0) //Position: 0x23BB2 / 146354
{
	int iVar0;
	
	if (Function_433(iParam0, 1) && Function_433(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_436(bool bParam0, bool bParam1, bool bParam2) //Position: 0x23BE6 / 146406
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_439(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_437(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_437(bParam0, bParam1, bParam2, 4294967295);
}

int Function_437(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x23C44 / 146500
{
	var uVar0;
	
	if (!Function_274(bParam2))
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
	uVar0 = Function_439(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_438(uVar0);
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

int Function_438(int iParam0) //Position: 0x23D99 / 146841
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

var Function_439(int iParam0, int iParam1, int iParam2) //Position: 0x23DD7 / 146903
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_440(bool bParam0) //Position: 0x23DF7 / 146935
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_444();
	iVar1 = 0;
	if (!Function_9(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_443(bParam0[iVar03], 8);
		}
		else if (Function_442())
		{
			iVar1 = 1;
			Function_443(bParam0[iVar03], 8);
		}
		Function_443(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_9(bParam0[iVar03], 4))
		{
			if (!Function_9(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_9(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], 1, (Function_9(bParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*bParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*bParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*bParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*bParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_443(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_9(bParam0[iVar03], 4))
		{
			if (!Function_9(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_443(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_443(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*bParam0)[iVar03], 4294967295))
						{
							Function_443(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_443(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_443(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_443(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_443(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_443(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_443(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_443(bParam0[iVar03], 2);
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
	Function_441();
	return 1;
}

void Function_441() //Position: 0x241AA / 147882
{
	if (!Function_257(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_442() //Position: 0x241EA / 147946
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

void Function_443(var uParam0, int iParam1) //Position: 0x24215 / 147989
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_444() //Position: 0x24226 / 148006
{
	if (!Function_257(128))
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

var Function_445(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x24268 / 148072
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_446(iParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_443(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_446(var uParam0, int iParam1, int iParam2) //Position: 0x242A0 / 148128
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_443(uParam0[iVar03], 4);
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

void Function_447() //Position: 0x24364 / 148324
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Global_13172 - 1))
	{
		Global_13172[iVar011].f_4 = 4294967295;
		Global_13172[iVar011] = 0;
		Global_13172[iVar011].f_8 = 0;
		Global_13172[iVar011].f_12 = 0;
		Global_13172[iVar011].f_16 = 0;
		Global_13172[iVar011].f_20 = 0;
		Global_13172[iVar011].f_24 = 0;
		Global_13172[iVar011].f_28 = 0.0f;
		Global_13172[iVar011].f_32 = 0.0f;
		Global_13172[iVar011].f_36 = GET_TIME_OF_DAY();
		Global_13172[iVar011].f_40 = "";
		iVar0++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (5 - 1))
	{
		iVar0 = 0;
		while (iVar0 < (7 - 1))
		{
			Global_16474[iVar18][iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	return;
}

var Function_448() //Position: 0x24429 / 148521
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_64;
}

vector3 Function_449(var uParam0, var uParam1) //Position: 0x24444 / 148548
{
	struct<61> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	*uParam0 = Var0.f_56;
	*uParam1 = Var0.f_60;
	return StackVal, StackVal, *(&Var0 + 44);
}

void Function_450() //Position: 0x24490 / 148624
{
	struct<133> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Global_34068.f_4 = Var0.f_120;
	Global_34068.f_8 = Var0.f_124;
	Global_34068.f_12 = Var0.f_128;
	Global_34068.f_16 = Var0.f_132;
	return;
}

void Function_451() //Position: 0x244CB / 148683
{
	WRITE_TO_FILE("New Game Progression Started\n", "C:/MoneyData.csv", 1);
	return;
}

void Function_452() //Position: 0x24508 / 148744
{
	int iVar0;
	
	DISABLE_WORLD_SECTOR("dlc02x");
	DISABLE_WORLD_SECTOR("dlc05x");
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
	DISABLE_CHILD_SECTOR("mp_pik_ffa01x");
	DISABLE_CHILD_SECTOR("mp_upr_ffa01x");
	DISABLE_CHILD_SECTOR("mp_chu_platforms01x");
	DISABLE_CHILD_SECTOR("mp_mtp_base01x");
	DISABLE_CHILD_SECTOR("mp_fom_base01x");
	DISABLE_CHILD_SECTOR("mp_fom_ffa01x");
	DISABLE_CHILD_SECTOR("mp_wld_base01x");
	DISABLE_CHILD_SECTOR("mp_chu_base01x");
	ENABLE_CHILD_SECTOR("thi_gates01x");
	ENABLE_CHILD_SECTOR("thi_gates02x");
	ENABLE_CHILD_SECTOR("sep_graveCoverSingle01x");
	DISABLE_CHILD_SECTOR("sp_grave03x");
	DISABLE_CHILD_SECTOR("sp_outlaw03x");
	DISABLE_CHILD_SECTOR("sp_marshal02x");
	DISABLE_CHILD_SECTOR("sp_marshal03x");
	DISABLE_CHILD_SECTOR("sp_marshal04ax");
	DISABLE_CHILD_SECTOR("sp_marshal04bx");
	DISABLE_CHILD_SECTOR("sep_graveEva01x");
	DISABLE_CHILD_SECTOR("hen_barn03props01x");
	DISABLE_CHILD_SECTOR("hen_beamsEntity01x");
	DISABLE_CHILD_SECTOR("ram_missionProps01x");
	DISABLE_CHILD_SECTOR("gap_caveBlockades01x");
	DISABLE_CHILD_SECTOR("fom_corralBreakProps01x");
	DISABLE_CHILD_SECTOR("blk_archeologist01Props01x");
	if (!Function_461("noZombieFireArt"))
	{
		ENABLE_CHILD_SECTOR("dlc_agv_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_arm_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_blk_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_blk_zombieGraffiti01x");
		ENABLE_CHILD_SECTOR("dlc_but_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_but_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_cas_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_chu_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_cri_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_cri_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_dix_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_elm_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_esc_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_frb_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_frb_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_gap_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_hen_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_lsh_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_mtp_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_nos_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_pik_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_pln_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_ram_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_ram_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_rat_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_rwf_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_sol_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_tes_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_thi_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_tor_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_twr_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_upr_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_ven_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_ven_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_war_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_war_zombieFire01x");
	}
	else
	{
		DISABLE_CHILD_SECTOR("dlc_agv_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_arm_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_blk_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_blk_zombieGraffiti01x");
		DISABLE_CHILD_SECTOR("dlc_but_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_but_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_cas_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_chu_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_cri_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_cri_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_dix_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_elm_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_esc_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_frb_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_frb_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_gap_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_hen_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_lsh_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_mtp_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_nos_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_pik_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_pln_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_ram_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_ram_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_rat_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_rwf_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_sol_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_tes_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_thi_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_tor_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_twr_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_upr_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_ven_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_ven_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_war_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_war_zombieFire01x");
	}
	ENABLE_CHILD_SECTOR("dlc_blk_flagsTorn01x");
	ENABLE_CHILD_SECTOR("dlc_hen_flagsTorn01x");
	ENABLE_CHILD_SECTOR("dlc_arm_generalStoreProps01x");
	DISABLE_CHILD_SECTOR("arm_generalStoreProps01x");
	ENABLE_CHILD_SECTOR("dlc_arm_saloon01props01x");
	DISABLE_CHILD_SECTOR("arm_saloon01props01x");
	DISABLE_CHILD_SECTOR("dlc_beh_catacombs01x");
	DISABLE_CHILD_SECTOR("dlc_beh_catacombs01props01x");
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve361rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve427", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve366rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve404", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve394", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve104", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve454", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_cas_ram_pathdetachedCurve2", 5)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", 5)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve159rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_but_cas_path", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_but_cas_pathdetachedCurve4detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve80", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve154detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve155", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve156", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve156detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve157", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve158", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve159rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve507", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve154detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve214", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve219", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve220", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve221", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve163", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve164", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve165", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve166", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve168", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve333rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve334rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve329rebuiltCurve1detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve330rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve331rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve332rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve206rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve207", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve208", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve209rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve210", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve213", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve460", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve337rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve129", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve128rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve324rebuiltCurve1rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve377rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve325rebuiltCurve1rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve325rebuiltCurve1detachedCurve2rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve326rebuiltCurve1rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve129", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve128rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve127", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve126rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve125", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve124", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve123", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve122", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve121", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve120", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve119", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve118rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve117", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve116", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve112", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve130", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve132", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve131", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve121detachedCurve2rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve217rebuiltCurve1rebuiltCurve1detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve217rebuiltCurve1rebuiltCurve1rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve218rebuiltCurve1detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_but_mac_path", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_hen_thi_path", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_butterBridge_path", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve617", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_arm_hen_pathdetachedCurve01detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_arm_hen_pathdetachedCurve01", 18)), 30);
	iVar0 = 0;
	while (iVar0 <= Global_26003)
	{
		Global_26003[iVar0] = !Global_3365;
		switch (iVar0)
		{
			case 0x00000000:
				if (Global_3365)
				{
					ENABLE_WORLD_SECTOR("ramitaBayaBefore");
					DISABLE_WORLD_SECTOR("ramitaBayaAfter");
					ENABLE_CURVE("rsdROAD_frb_road", false);
					ENABLE_CURVE("rsdROAD_fom_frb_road", false);
					ENABLE_CURVE("rsdGPSTRAIL_curve221", false);
				}
				else
				{
					ENABLE_WORLD_SECTOR("ramitaBayaAfter");
					DISABLE_WORLD_SECTOR("ramitaBayaBefore");
					ENABLE_CURVE("rsdROAD_frb_road", true);
					ENABLE_CURVE("rsdROAD_fom_frb_road", true);
					ENABLE_CURVE("rsdGPSTRAIL_curve221", true);
				}
				break;
			
			case 0x00000001:
			case 0x00000002:
				break;
			
			case 0x00000003:
				if (Global_3365)
				{
					ENABLE_WORLD_SECTOR("butterBridgeA");
					DISABLE_WORLD_SECTOR("butterBridgeB");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					DISABLE_WORLD_SECTOR("butterBridgeD");
					ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
				}
				else
				{
					ENABLE_WORLD_SECTOR("butterBridgeB");
					DISABLE_WORLD_SECTOR("butterBridgeA");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					DISABLE_WORLD_SECTOR("butterBridgeD");
					ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
				}
				break;
			
			case 0x00000004:
				if (Global_3365)
				{
					ENABLE_WORLD_SECTOR("tannersSpanBefore");
					DISABLE_WORLD_SECTOR("tannersSpanAfter");
				}
				else
				{
					ENABLE_WORLD_SECTOR("tannersSpanAfter");
					DISABLE_WORLD_SECTOR("tannersSpanBefore");
				}
				break;
			
			case 0x00000005:
				if (Global_3365)
				{
					ENABLE_WORLD_SECTOR("dixonCrossingBefore");
					DISABLE_WORLD_SECTOR("dixonCrossingAfter");
					ENABLE_CURVE("rsdROAD_thi_blk_road", false);
					ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", false);
					ENABLE_CURVE("rsdGPSTRAIL_curve124", false);
					ENABLE_CURVE("rsdGPSTRAIL_curve132", false);
				}
				else
				{
					ENABLE_WORLD_SECTOR("dixonCrossingAfter");
					DISABLE_WORLD_SECTOR("dixonCrossingBefore");
					ENABLE_CURVE("rsdROAD_thi_blk_road", true);
					ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", true);
					ENABLE_CURVE("rsdGPSTRAIL_curve124", true);
					ENABLE_CURVE("rsdGPSTRAIL_curve132", true);
				}
				break;
			
			case 0x00000006:
				break;
			
			case 0x00000007:
				ENABLE_CHILD_SECTOR("hen_barn01x");
				ENABLE_CHILD_SECTOR("hen_barn02props01x");
				DISABLE_CHILD_SECTOR("hen_barn02x");
				DISABLE_CHILD_SECTOR("hen_barn01props01x");
				break;
			
			case 0x00000008:
				ENABLE_WORLD_SECTOR("campoMiradaAfter");
				DISABLE_WORLD_SECTOR("campoMiradaBefore");
				break;
			
			case 0x00000009:
				if (Global_3365)
				{
					ENABLE_WORLD_SECTOR("fronteraBridgeBefore");
					DISABLE_WORLD_SECTOR("fronteraBridgeAfter");
				}
				else
				{
					ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
					DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
				}
				break;
			
			case 0x0000000A:
				ENABLE_CHILD_SECTOR("fod_gates01x");
				DISABLE_CHILD_SECTOR("fod_gates02x");
				DISABLE_CHILD_SECTOR("fod_gates02Doors01x");
				break;
			
			case 0x0000000B:
				ENABLE_CHILD_SECTOR("coc_fence01bx");
				ENABLE_CHILD_SECTOR("coc_fence03bx");
				ENABLE_CHILD_SECTOR("dlc_coc_gates02x");
				DISABLE_CHILD_SECTOR("coc_fence01x");
				DISABLE_CHILD_SECTOR("coc_fence03x");
				DISABLE_CHILD_SECTOR("coc_gates01x");
				DISABLE_CHILD_SECTOR("coc_gates02x");
				break;
			
			case 0x0000000C:
				if (Global_3365)
				{
					ENABLE_WORLD_SECTOR("masonBridgeBefore");
					DISABLE_WORLD_SECTOR("masonBridgeAfter");
				}
				else
				{
					ENABLE_WORLD_SECTOR("masonBridgeAfter");
					DISABLE_WORLD_SECTOR("masonBridgeBefore");
				}
				break;
			
			case 0x0000000D:
				if (Global_3365)
				{
					ENABLE_CHILD_SECTOR("lmf_troughBefore01x");
					DISABLE_CHILD_SECTOR("lmf_troughAfter01x");
				}
				else
				{
					ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
					DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
				}
				break;
			
			case 0x0000000E:
				DISABLE_WORLD_SECTOR("morningStar");
				DISABLE_CHILD_SECTOR("blk_barge01Props01x");
				DISABLE_CHILD_SECTOR("blk_barge01x");
				ENABLE_CHILD_SECTOR("blk_theatre_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_theatre_int_01x");
				ENABLE_CHILD_SECTOR("dlc_blk_bank01_int_Props02x");
				DISABLE_CHILD_SECTOR("blk_bank01_int_Props02x");
				ENABLE_CHILD_SECTOR("blk_bank_int_02x");
				DISABLE_CHILD_SECTOR("blk_bank_int_shade_02x");
				DISABLE_CHILD_SECTOR("blk_cityHall01_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_cityHall_int_01x");
				ENABLE_CHILD_SECTOR("blk_policeStation01_int_props02x");
				ENABLE_CHILD_SECTOR("blk_policeStation_int_02x");
				ENABLE_CHILD_SECTOR("blk_policeStation01_int_props01x");
				ENABLE_CHILD_SECTOR("blk_policeStation_int_01x");
				DISABLE_CHILD_SECTOR("blk_policeStation_int_shades01x");
				ENABLE_CHILD_SECTOR("blk_blacksmith_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_blacksmith_int_01x");
				ENABLE_CHILD_SECTOR("blk_church_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_church_int_01x");
				ENABLE_CHILD_SECTOR("blk_doctorsOffice_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_doctorsOffice_int_01x");
				ENABLE_CHILD_SECTOR("blk_freightstation01_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_freightstation_int_01x");
				ENABLE_CHILD_SECTOR("blk_generalStore_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_generalStore_int_Props02x");
				ENABLE_CHILD_SECTOR("blk_generalStore_int_01x");
				ENABLE_CHILD_SECTOR("blk_tailor01_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_tailor_int_01x");
				ENABLE_CHILD_SECTOR("blk_trainstation_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_trainstation_int_01x");
				ENABLE_CHILD_SECTOR("blk_gunshop_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_gunshop_int_01x");
				DISABLE_CHILD_SECTOR("blk_theatre_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_generalStore_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_tailor_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_doctorsOffice_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_forgeMill_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_sawMill_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_freightstation_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_blacksmith_int_shade_01x");
				ENABLE_CHILD_SECTOR("blk_cityHall_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_bank_int_shade_01x");
				DISABLE_CHILD_SECTOR("mor_morningStar_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_gunshop_int_shade_01x");
				ENABLE_CHILD_SECTOR("blk_saloon_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_saloon_int_01x");
				ENABLE_CHILD_SECTOR("dlc_blk_hotel01Props01x");
				DISABLE_CHILD_SECTOR("blk_hotel01Props01x");
				ENABLE_CHILD_SECTOR("dlc_blk_tailor01_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_tailor01_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_hotel01_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_hotel_int_01x");
				DISABLE_CHILD_SECTOR("blk_hotel_int_shade_01x");
				ENABLE_CHILD_SECTOR("blk_trainstation_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_trainstation_int_01x");
				DISABLE_CHILD_SECTOR("mor_morningStar01_int_Props01x");
				DISABLE_CHILD_SECTOR("mor_morningStar_int_01x");
				DISABLE_CHILD_SECTOR("mor_morningStar_int_shade_01x");
				break;
			
			case 0x0000000F:
				ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
				ENABLE_CHILD_SECTOR("rwf_livingRoom01props01x");
				DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
				DISABLE_CHILD_SECTOR("rwf_livingRoom01props02x");
				break;
			
			case 0x00000010:
				ENABLE_CHILD_SECTOR("beh_silo01x");
				DISABLE_CHILD_SECTOR("beh_silo02x");
				break;
			
			case 0x00000011:
				ENABLE_CHILD_SECTOR("beh_house01x");
				ENABLE_CHILD_SECTOR("beh_house01props01x");
				DISABLE_CHILD_SECTOR("beh_house02x");
				DISABLE_CHILD_SECTOR("beh_house02props01x");
				break;
			
			case 0x00000012:
				ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
				DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
				DISABLE_CHILD_SECTOR("sp_mexArmy03x");
				break;
			
			case 0x00000013:
				ENABLE_CHILD_SECTOR("esc_villaWall04x");
				DISABLE_CHILD_SECTOR("esc_villaWall05x");
				DISABLE_CHILD_SECTOR("sp_rebel05x");
				ENABLE_CHILD_SECTOR("dlc_esc_bullRing02x");
				ENABLE_CHILD_SECTOR("dlc_esc_bullRing02Props01x");
				ENABLE_CHILD_SECTOR("dlc_esc_zombieCave02x");
				DISABLE_CHILD_SECTOR("esc_bullRing01x");
				DISABLE_CHILD_SECTOR("esc_bullRing01props01x");
				DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01x");
				DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props01x");
				DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props02x");
				DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props03x");
				break;
			
			case 0x00000014:
				DISABLE_CHILD_SECTOR("icarus");
				break;
			
			case 0x00000015:
				DISABLE_CHILD_SECTOR("chu_gatlingBreakables01x");
				DISABLE_CHILD_SECTOR("lsh_gatlingBreakables01x");
				if (Global_3365)
				{
					DISABLE_CHILD_SECTOR("mp_lsh_ffa01x");
				}
				else
				{
					ENABLE_CHILD_SECTOR("mp_lsh_ffa01x");
				}
				break;
			
			case 0x00000016:
				DISABLE_CHILD_SECTOR("sp_anthro01x");
				break;
			
			case 0x00000017:
				if (Global_3365)
				{
					DISABLE_CHILD_SECTOR("beh_grave01x");
					DISABLE_CHILD_SECTOR("beh_grave02x");
					DISABLE_CHILD_SECTOR("beh_grave03x");
				}
				else
				{
					ENABLE_CHILD_SECTOR("beh_grave01x");
					DISABLE_CHILD_SECTOR("beh_grave02x");
					DISABLE_CHILD_SECTOR("beh_grave03x");
				}
				break;
			
			case 0x00000018:
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_path", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve495", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve12", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve13", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_loop1", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve10", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve8", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve6", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_las_nos_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve10detachedCurve1", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve44", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve18", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_roaddetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_roaddetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdROAD_curve69", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_road", !Global_3365);
				ENABLE_CURVE("rsdROAD_frb_road", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve98", !Global_3365);
				ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve634", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve635", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve636", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve637", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve638", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve70", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop04_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve10", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve8", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path1", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve6", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_path3detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_path3", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop09_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop06__path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve6", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop07_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path1", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve16", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve12", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve14", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve163", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve297", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve71", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve72", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop05_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop08_path", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve77", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve78", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve78", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve79", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_path", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop02_path", !Global_3365);
				ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve8", !Global_3365);
				ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve6", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20", !Global_3365);
				break;
			
			case 0x00000019:
				ENABLE_CHILD_SECTOR("emt_caveDoor01x");
				DISABLE_CHILD_SECTOR("emt_caveDoor02x");
				if (Global_3365)
				{
					DISABLE_CHILD_SECTOR("dlc_fom_ladders01x");
				}
				else
				{
					ENABLE_CHILD_SECTOR("dlc_fom_ladders01x");
				}
				break;
			
			case 0x0000001A:
				ENABLE_CHILD_SECTOR("thi_window01x");
				DISABLE_CHILD_SECTOR("thi_window02x");
				break;
			
			default:
				LOG_ERROR("world state error!");
				break;
		}
		iVar0++;
	}
	if (Global_3365)
	{
		Function_453();
	}
	return;
}

void Function_453() //Position: 0x2876E / 165742
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_26003)
	{
		if (!Global_26003[iVar0])
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_368(2, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_WORLD_SECTOR("ramitaBayaAfter");
						DISABLE_WORLD_SECTOR("ramitaBayaBefore");
						ENABLE_CURVE("rsdROAD_frb_road", true);
						ENABLE_CURVE("rsdROAD_fom_frb_road", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve221", true);
					}
					break;
				
				case 0x00000001:
				case 0x00000002:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x00000003:
					if (Function_368(2, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_WORLD_SECTOR("butterBridgeB");
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
						DISABLE_CHILD_SECTOR("dlc_frb_zombie02x");
					}
					break;
				
				case 0x00000004:
					if (Function_17(5))
					{
						Global_26003[iVar0] = 1;
						ENABLE_WORLD_SECTOR("tannersSpanAfter");
						DISABLE_WORLD_SECTOR("tannersSpanBefore");
					}
					break;
				
				case 0x00000005:
					if (Function_17(5))
					{
						Global_26003[iVar0] = 1;
						ENABLE_WORLD_SECTOR("dixonCrossingAfter");
						DISABLE_WORLD_SECTOR("dixonCrossingBefore");
						ENABLE_CURVE("rsdROAD_thi_blk_road", true);
						ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve124", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve132", true);
					}
					break;
				
				case 0x00000006:
				case 0x00000007:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x00000008:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x00000009:
					if (Function_12(2) || Function_368(2, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
						DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
					}
					break;
				
				case 0x0000000A:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x0000000B:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x0000000C:
					if (Function_17(5))
					{
						Global_26003[iVar0] = 1;
						ENABLE_WORLD_SECTOR("masonBridgeAfter");
						DISABLE_WORLD_SECTOR("masonBridgeBefore");
					}
					break;
				
				case 0x0000000D:
					if (Function_17(5))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
						DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
					}
					break;
				
				case 0x0000000E:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x0000000F:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x00000010:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x00000011:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x00000012:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x00000013:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x00000014:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x00000015:
					if (Function_17(24))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("mp_lsh_ffa01x");
					}
					break;
				
				case 0x00000016:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x00000017:
					if (Function_368(4, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("beh_grave01x");
					}
					break;
				
				case 0x00000018:
					if (Function_368(2, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_path", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve495", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve12", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve13", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_loop1", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve10", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve8", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve6", true);
						ENABLE_CURVE("rsdTRAIL_las_nos_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve10detachedCurve1", true);
						ENABLE_CURVE("rsdTRAIL_curve44", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve18", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", true);
						ENABLE_CURVE("rsdROAD_las_roaddetachedCurve4", true);
						ENABLE_CURVE("rsdROAD_las_roaddetachedCurve2", true);
						ENABLE_CURVE("rsdROAD_curve69", true);
						ENABLE_CURVE("rsdROAD_las_road", true);
						ENABLE_CURVE("rsdROAD_frb_road", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve98", true);
						ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4detachedCurve2", true);
						ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve634", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve635", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve636", true);
						ENABLE_CURVE("rsdTRAIL_curve637", true);
						ENABLE_CURVE("rsdTRAIL_curve638", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_curve70", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve10", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve8", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve6", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_path3detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_path3", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop09_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop06__path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve6", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve2", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20detachedCurve2", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve16", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve12", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve14", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve163", true);
						ENABLE_CURVE("rsdTRAIL_curve297", true);
						ENABLE_CURVE("rsdTRAIL_curve71", true);
						ENABLE_CURVE("rsdTRAIL_curve72", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop08_path", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve77", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve78", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve78", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve79", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve4", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_path", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop02_path", true);
						ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve8", true);
						ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve6", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20", true);
					}
					break;
				
				case 0x00000019:
					if (Function_17(8))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("dlc_fom_ladders01x");
					}
					break;
				
				case 0x0000001A:
					Global_26003[iVar0] = 1;
					break;
				
				default:
					LOG_ERROR("World state error!");
					break;
				}
		}
		iVar0++;
	}
	return;
}

void Function_454() //Position: 0x29AD8 / 170712
{
	int iVar0;
	char* cVar1[64];
	char* cVar17[64];
	bool bVar33;
	bool bVar34;
	
	iVar0 = 0;
	while (iVar0 <= 57)
	{
		bVar33 = false;
		bVar34 = false;
		switch (iVar0)
		{
			case 0x00000000:
				strcpy(&cVar1, "HE gives strength to the weak", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000001:
				strcpy(&cVar1, "I don't understand imnfinity", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000002:
				strcpy(&cVar1, "make hay while the sun shines", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000003:
				strcpy(&cVar1, "abundance is everywhere", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000006:
				strcpy(&cVar1, "The root of all evil, we thank you!", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000008:
				strcpy(&cVar1, "Beasts and man together", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000009:
				strcpy(&cVar1, "Now who put that there?", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x0000000C:
				strcpy(&cVar1, "They sell souls cheap here", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x0000000E:
				strcpy(&cVar1, "It's my constitutional right", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x0000000F:
				strcpy(&cVar1, "I'm an American. I need guns", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000013:
				strcpy(&cVar1, "I am one of them famous fellas", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000014:
				strcpy(&cVar1, "Humility before the Lord", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000015:
				strcpy(&cVar1, "It aint pride. It's honor", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x0000001B:
				strcpy(&cVar1, "The old ways is the best ways", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000021:
				strcpy(&cVar1, "You got yourself a fine pair of eyes", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000022:
				strcpy(&cVar1, "Oh my son, my blessed son", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x0000001E:
				strcpy(&cVar1, "Don't you look fine and dandy", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x0000001F:
				strcpy(&cVar1, "I love a man in uniform", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000020:
				strcpy(&cVar1, "You think you tough, mister?", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x0000001D:
				strcpy(&cVar1, "I'm drunk as a skunk and twice as smelly", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x0000000A:
				strcpy(&cVar1, "I wish I worked for Uncle Sam", 64);
				strcpy(&cVar17, "nAllCheats", 64);
				bVar33 = true;
				break;
			
			case 0x00000019:
			case 0x00000004:
			case 0x00000007:
			case 0x0000000B:
			case 0x0000000D:
			case 0x00000010:
			case 0x00000011:
			case 0x00000012:
			case 0x00000018:
			case 0x0000001A:
			case 0x00000016:
			case 0x00000017:
			case 0x0000001C:
			case 0x00000023:
			case 0x00000024:
			case 0x00000025:
			case 0x00000026:
			case 0x00000027:
				strcpy(&cVar1, "NetCode", 64);
				straddi(&cVar1, iVar0, 64);
				strcpy(&cVar17, "AllNetCheats", 64);
				bVar33 = true;
				bVar34 = true;
				break;
			
			case 0x00000028:
			case 0x00000029:
			case 0x0000002A:
			case 0x0000002B:
				bVar33 = false;
				break;
			
			default:
				break;
		}
		if (bVar33)
		{
			if (UI_CHEAT_GET_STATE(iVar0) == 4294967295)
			{
				UI_CHEAT_SET_STATE(iVar0, 0);
			}
			if (!bVar34)
			{
				UI_CHEAT_SET_CODE(iVar0, &cVar1);
			}
			UI_CHEAT_SET_VALUE(iVar0, 0);
		}
		iVar0++;
	}
	RESET_GLOBAL_ACTOR_WEAPON_BIAS();
	HORSE_SET_INFINITE_FRESHNESS_CHEAT(0);
	FIRE_SET_GUNS_BLAZING_ACTIVE(0);
	SET_PHOSPHORUS_AMMO_ACTIVE(0);
	if (Global_74542[19910].f_16 == 1)
	{
		UI_SET_HAS_CHEATED(1);
	}
	else
	{
		UI_SET_HAS_CHEATED(0);
	}
	return;
}

void Function_455() //Position: 0x2A138 / 172344
{
	int iVar0;
	struct<2> Var1;
	int iVar3;
	
	Function_459();
	Function_458(5, 0.0f, "sn_gmpt", 7, 2, 1, 2, 3212836864, 0);
	Function_458(7, 0.0f, "sn_gmtm", 23, 2, 3, 2, 3212836864, 0);
	Function_458(8, 0.0f, "sn_days", 25, 2, 1, 2, 3212836864, 0);
	Function_458(660, 0.0f, "sn_zsur", 4, 2, 1, 2, 0.0f, 0);
	Function_458(9, 0.0f, "sn_miss", 1, 2, 1, 2, 3212836864, 0);
	Function_458(10, 0.0f, "sn_misf", 1, 2, 1, 2, 3212836864, 0);
	Function_458(11, 0.0f, "sn_misr", 1, 2, 1, 2, 3212836864, 0);
	Function_458(658, 0.0f, "sn_zuas", 4, 2, 1, 2, 0.0f, 0);
	Function_458(659, 0.0f, "sn_ztas", 4, 2, 1, 2, 0.0f, 0);
	Function_458(661, 0.0f, "sn_zsup", 4, 2, 1, 2, 0.0f, 0);
	Function_458(18, 0.0f, "sn_lmst", 15, 9, 1, 2, 3212836864, 0);
	Function_458(19, 0.0f, "sn_cutb", 15, 9, 1, 2, 3212836864, 0);
	Function_458(20, 0.0f, "sn_cutk", 15, 9, 1, 2, 3212836864, 0);
	Function_458(21, 0.0f, "sn_cute", 15, 9, 1, 2, 3212836864, 0);
	Function_458(22, 0.0f, "sn_hide", 15, 9, 1, 2, 3212836864, 0);
	Function_458(23, 0.0f, "sn_hide", 15, 9, 1, 2, 3212836864, 0);
	Function_458(24, 0.0f, "sn_mmrt", 15, 9, 1, 2, 3212836864, 0);
	Function_458(25, 0.0f, "sn_lmcn", 15, 9, 1, 2, 3212836864, 0);
	Function_458(472, TO_FLOAT(4294967295), "sn_hide", 15, 9, 1, 2, 3212836864, 0);
	Function_458(656, 0.0f, "sn_zgyc", 4, 2, 3, 2, 3212836864, 0);
	Function_458(662, 0.0f, "sn_zblk", 13, 2, 3, 2, 3212836864, 0);
	Function_458(663, 0.0f, "sn_zcoo", 13, 2, 3, 2, 3212836864, 0);
	Function_458(664, 0.0f, "sn_ztum", 13, 2, 3, 2, 3212836864, 0);
	Function_458(665, 0.0f, "sn_zodd", 13, 2, 3, 2, 3212836864, 0);
	Function_458(666, 0.0f, "sn_zsep", 13, 2, 3, 2, 3212836864, 0);
	Function_458(467, 0.0f, "sn_chst", 0, 9, 1, 2, 3212836864, 0);
	Function_458(477, 0.0f, "sn_snoi", 3, 9, 1, 2, 3212836864, 0);
	Function_458(478, 0.0f, "sn_moon", 3, 9, 1, 2, 3212836864, 0);
	Function_458(479, 0.0f, "sn_chta", 3, 9, 1, 2, 3212836864, 0);
	Function_458(480, 0.0f, "sn_medi", 3, 9, 1, 2, 3212836864, 0);
	Function_458(482, 0.0f, "sn_hopi", 3, 9, 1, 2, 3212836864, 0);
	Function_458(483, 0.0f, "sn_appl", 3, 9, 1, 2, 3212836864, 0);
	Function_458(667, 0.0f, "sn_zpho", 3, 9, 1, 2, 3212836864, 0);
	Function_458(668, 0.0f, "sn_zzbc", 3, 9, 1, 2, 3212836864, 0);
	Function_458(669, 0.0f, "sn_zbbc", 3, 9, 1, 2, 3212836864, 0);
	Function_458(670, 0.0f, "sn_zblc", 3, 9, 1, 2, 3212836864, 0);
	Function_458(405, 0.0f, "sn_horb", 0, 2, 1, 2, 3212836864, 0);
	Function_458(406, 0.0f, "sn_zrcm", 3, 2, 1, 2, 3212836864, 0);
	Function_458(407, 0.0f, "sn_zrcc", 3, 2, 1, 2, 3212836864, 0);
	Function_458(408, 0.0f, "sn_btin", 3, 2, 1, 2, 3212836864, 0);
	Function_458(409, 0.0f, "sn_btcm", 3, 2, 1, 2, 3212836864, 0);
	Function_458(26, 0.0f, "sn_kani", 1, 6, 3, 2, 3212836864, 0);
	Function_458(27, 0.0f, "sn_khum", 1, 6, 3, 2, 3212836864, 0);
	Function_458(671, 0.0f, "sn_zkud", 4, 6, 3, 2, 3212836864, 0);
	Function_458(672, 0.0f, "sn_zkfr", 4, 6, 3, 2, 3212836864, 0);
	Function_458(673, 0.0f, "sn_zkbr", 4, 6, 3, 2, 3212836864, 0);
	Function_458(674, 0.0f, "sn_zkbo", 4, 6, 3, 2, 3212836864, 0);
	Function_458(675, 0.0f, "sn_zkre", 4, 6, 3, 2, 3212836864, 0);
	Function_458(602, 0.0f, "sn_zksq", 4, 6, 3, 2, 3212836864, 0);
	Function_458(679, 0.0f, "sn_zkch", 4, 6, 3, 2, 3212836864, 0);
	iVar0 = 50;
	Function_458(49, 0.0f, "sn_hbul", 7, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0, 0.0f, "sn_hpvo", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 1, 0.0f, "sn_hpsa", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 2, 0.0f, "sn_hphp", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 3, 0.0f, "sn_hpms", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 4, 0.0f, "sn_hrca", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 5, 0.0f, "sn_hrsc", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 6, 0.0f, "sn_hrda", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 7, 0.0f, "sn_hrlm", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 8, 0.0f, "sn_hrcr", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 9, 0.0f, "sn_hrwi", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 10, 0.0f, "sn_hrhe", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 11, 0.0f, "sn_hrev", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 12, 0.0f, "sn_hrsp", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 13, 0.0f, "sn_hrbo", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 14, 0.0f, "sn_hrbu", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 15, 0.0f, "sn_hsso", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 16, 0.0f, "sn_hsdb", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 17, 0.0f, "sn_hspa", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 18, 0.0f, "sn_hssa", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 19, 0.0f, "sn_hsrb", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 20, 0.0f, "sn_hsca", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 31, 0.0f, "sn_hsat", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 21, 0.0f, "sn_hlas", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 22, 0.0f, "sn_hknf", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 23, 0.0f, "sn_hfir", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 24, 0.0f, "sn_hdyn", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 25, 0.0f, "sn_htkf", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 29, 0.0f, "sn_htmk", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 26, 0.0f, "sn_hgat", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 27, 0.0f, "sn_hbro", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 28, 0.0f, "sn_hcan", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 33, 0.0f, "sn_hsto", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 34, 0.0f, "sn_hsbl", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 35, 0.0f, "sn_hshw", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 36, 0.0f, "sn_hszb", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_458(iVar0 + 37, 0.0f, "sn_hsbb", 11, 6, 3, 7, 0.0f, 0.0f);
	iVar0 = 90;
	Function_458(89, 0.0f, "sn_sbul", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 1, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 2, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 3, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 4, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 5, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 6, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 7, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 8, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 9, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 10, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 11, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 12, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 13, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 14, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 15, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 16, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 17, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 18, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 19, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 20, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 31, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 21, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 22, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 23, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 24, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 25, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 29, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 26, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 27, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 28, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 33, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 34, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 35, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 36, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(iVar0 + 37, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_458(129, 0.0f, "sn_roal", 0, 6, 3, 2, 3212836864, 0);
	Function_458(130, 0.0f, "sn_roh", 0, 6, 3, 2, 3212836864, 0);
	Function_458(134, 0.0f, "sn_scr", 0, 6, 3, 2, 3212836864, 0);
	Function_458(135, 0.0f, "sn_sfc", 0, 6, 3, 2, 3212836864, 0);
	Function_458(136, 0.0f, "sn_sfh", 0, 6, 3, 2, 3212836864, 0);
	iVar0 = 183;
	Function_458(iVar0, 0.0f, "sn_wpvo", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 1, 0.0f, "sn_wpsa", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 2, 0.0f, "sn_wphp", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 3, 0.0f, "sn_wpms", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 4, 0.0f, "sn_wrca", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 5, 0.0f, "sn_wrsc", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 6, 0.0f, "sn_wrda", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 7, 0.0f, "sn_wrlm", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 8, 0.0f, "sn_wrcr", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 9, 0.0f, "sn_wrwi", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 10, 0.0f, "sn_wrhe", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 11, 0.0f, "sn_wrev", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 12, 0.0f, "sn_wrsp", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 13, 0.0f, "sn_wrbo", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 14, 0.0f, "sn_wrbu", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 15, 0.0f, "sn_wsso", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 16, 0.0f, "sn_wsdb", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 17, 0.0f, "sn_wspa", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 18, 0.0f, "sn_wssa", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 19, 0.0f, "sn_wsrb", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 20, 0.0f, "sn_wsca", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 31, 0.0f, "sn_wsat", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 21, 0.0f, "sn_wlas", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 22, 0.0f, "sn_wknf", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 23, 0.0f, "sn_wfir", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 24, 0.0f, "sn_wdyn", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 25, 0.0f, "sn_wtkf", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 29, 0.0f, "sn_wtmk", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 26, 0.0f, "sn_wgat", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 27, 0.0f, "sn_wbro", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 28, 0.0f, "sn_wcan", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 33, 0.0f, "sn_wsto", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 34, 0.0f, "sn_wsbl", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 35, 0.0f, "sn_wshw", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 36, 0.0f, "sn_wszb", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 37, 0.0f, "sn_wsbb", 3, 6, 3, 2, 3212836864, 0);
	iVar0 = 140;
	Function_458(iVar0, 0.0f, "sn_spvo", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 1, 0.0f, "sn_spsa", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 2, 0.0f, "sn_sphp", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 3, 0.0f, "sn_spms", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 4, 0.0f, "sn_srca", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 5, 0.0f, "sn_srsc", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 6, 0.0f, "sn_srda", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 7, 0.0f, "sn_srlm", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 8, 0.0f, "sn_srcr", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 9, 0.0f, "sn_srwi", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 10, 0.0f, "sn_srhe", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 11, 0.0f, "sn_srev", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 12, 0.0f, "sn_srsp", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 13, 0.0f, "sn_srbo", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 14, 0.0f, "sn_srbu", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 15, 0.0f, "sn_ssso", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 16, 0.0f, "sn_ssdb", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 17, 0.0f, "sn_sspa", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 18, 0.0f, "sn_sssa", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 19, 0.0f, "sn_ssrb", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 20, 0.0f, "sn_ssca", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 31, 0.0f, "sn_ssat", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 21, 0.0f, "sn_slas", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 22, 0.0f, "sn_sknf", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 23, 0.0f, "sn_sfir", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 24, 0.0f, "sn_sdyn", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 25, 0.0f, "sn_stkf", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 29, 0.0f, "sn_stmk", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 26, 0.0f, "sn_sgat", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 27, 0.0f, "sn_sbro", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 28, 0.0f, "sn_scan", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 33, 0.0f, "sn_ssto", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 34, 0.0f, "sn_ssbl", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 35, 0.0f, "sn_sshw", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 36, 0.0f, "sn_sszb", 3, 6, 3, 2, 3212836864, 0);
	Function_458(iVar0 + 37, 0.0f, "sn_ssbb", 3, 6, 3, 2, 3212836864, 0);
	Function_458(179, 0.0f, "sn_fvp", 20, 9, 3, 2, 3212836864, 0);
	Function_458(180, 0.0f, "sn_fvr", 20, 9, 3, 2, 3212836864, 0);
	Function_458(181, 0.0f, "sn_fvs", 20, 9, 3, 2, 3212836864, 0);
	Function_458(182, 0.0f, "sn_fvw", 20, 9, 3, 2, 3212836864, 0);
	Function_458(42, 0.0f, "sn_hdst", 1, 6, 3, 2, 3212836864, 0);
	Function_458(44, 0.0f, "sn_xect", 1, 6, 1, 2, 3212836864, 0);
	Function_458(47, 0.0f, "sn_hdss", 1, 6, 3, 2, 3212836864, 0);
	Function_458(676, 0.0f, "sn_zhed", 4, 6, 3, 2, 3212836864, 0);
	Function_458(677, 0.0f, "sn_zexe", 4, 6, 1, 2, 3212836864, 0);
	Function_458(273, 0.0f, "sn_h_tv", 21, 7, 3, 2, 3212836864, 0);
	Function_457(492, 265, 0.0f, "sn_h_bw", "sd_h_bw", "sn_h_bw", "sl_h_bw", 7, 3);
	Function_457(491, 264, 0.0f, "sn_h_ds", "sd_h_ds", "sn_h_ds", "sl_h_ds", 7, 3);
	Function_457(494, 267, 0.0f, "sn_h_gc", "sd_h_gc", "sn_h_gc", "sl_h_gc", 7, 3);
	Function_457(496, 269, 0.0f, "sn_h_hs", "sd_h_hs", "sn_h_hs", "sl_h_hs", 7, 3);
	Function_457(493, 266, 0.0f, "sn_h_po", "sd_h_pp", "sn_h_po", "sl_h_pp", 7, 3);
	Function_457(490, 263, 0.0f, "sn_h_pp", "sd_h_pp", "sn_h_pp", "sl_h_pp", 7, 3);
	Function_457(498, 271, 0.0f, "sn_h_rs", "sd_h_rs", "sn_h_rs", "sl_h_rs", 7, 3);
	Function_457(497, 270, 0.0f, "sn_h_vs", "sd_h_vs", "sn_h_vs", "sl_h_vs", 7, 3);
	Function_457(495, 268, 0.0f, "sn_h_wo", "sd_h_wo", "sn_h_wo", "sl_h_wo", 7, 3);
	Function_457(499, 272, 0.0f, "sn_h_wf", "sd_h_wf", "sn_h_wf", "sl_h_wf", 7, 3);
	Function_458(310, 0.0f, "sn_skv", 4, 7, 1, 4, 3212836864, 0);
	Function_458(346, 0.0f, "sn_kiv", 4, 9, 3, 2, 3212836864, 0);
	Function_457(583, 310, 0.0f, "sn_v_f", "sd_sold", "", "", 9, 1);
	Function_458(609, 0.0f, "sn_z_zl", 4, 9, 3, 2, 3212836864, 0);
	Function_458(614, 0.0f, "sn_z_zb", 4, 9, 3, 2, 3212836864, 0);
	Function_458(619, 0.0f, "sn_z_zc", 4, 9, 3, 2, 3212836864, 0);
	Function_458(624, 0.0f, "sn_z_zy", 4, 9, 3, 2, 3212836864, 0);
	Function_458(629, 0.0f, "sn_z_zw", 4, 9, 3, 2, 3212836864, 0);
	Function_458(632, 0.0f, "sn_z_zh", 4, 9, 3, 2, 3212836864, 0);
	Function_458(637, 0.0f, "sn_z_ch", 4, 9, 3, 2, 3212836864, 0);
	Function_458(641, 0.0f, "sn_z_sq", 4, 9, 3, 2, 3212836864, 0);
	Function_458(644, 0.0f, "sn_z_un", 4, 9, 3, 2, 3212836864, 0);
	Function_458(646, 0.0f, "sn_z_ba", 4, 9, 3, 2, 3212836864, 0);
	Function_458(649, 0.0f, "sn_z_d", 4, 9, 3, 2, 3212836864, 0);
	Function_458(652, 0.0f, "sn_z_bu", 4, 9, 3, 2, 3212836864, 0);
	Function_458(655, 0.0f, "sn_z_bo", 4, 9, 3, 2, 3212836864, 0);
	Function_457(604, 4294967295, 0.0f, "sn_z_t", "sd_sold", "", "", 9, 1);
	Function_457(605, 4294967295, 0.0f, "sn_z_e", "sd_sold", "", "", 9, 1);
	Function_457(606, 4294967295, 0.0f, "sn_z_to", "sd_sold", "", "", 9, 1);
	Function_457(607, 4294967295, 0.0f, "sn_z_r", "sd_sold", "", "", 9, 1);
	Function_457(608, 4294967295, 0.0f, "sn_z_ea", "sd_sold", "", "", 9, 1);
	Function_457(611, 4294967295, 0.0f, "sn_zb_t", "sd_sold", "", "", 9, 1);
	Function_457(610, 4294967295, 0.0f, "sn_zb_e", "sd_sold", "", "", 9, 1);
	Function_457(612, 4294967295, 0.0f, "sn_zb_c", "sd_sold", "", "", 9, 1);
	Function_457(613, 4294967295, 0.0f, "sn_zb_h", "sd_sold", "", "", 9, 1);
	Function_457(616, 4294967295, 0.0f, "sn_zc_t", "sd_sold", "", "", 9, 1);
	Function_457(617, 4294967295, 0.0f, "sn_zc_c", "sd_sold", "", "", 9, 1);
	Function_457(615, 4294967295, 0.0f, "sn_zc_e", "sd_sold", "", "", 9, 1);
	Function_457(618, 4294967295, 0.0f, "sn_zc_h", "sd_sold", "", "", 9, 1);
	Function_457(621, 4294967295, 0.0f, "sn_zy_t", "sd_sold", "", "", 9, 1);
	Function_457(620, 4294967295, 0.0f, "sn_zy_e", "sd_sold", "", "", 9, 1);
	Function_457(622, 4294967295, 0.0f, "sn_zy_c", "sd_sold", "", "", 9, 1);
	Function_457(623, 4294967295, 0.0f, "sn_zy_h", "sd_sold", "", "", 9, 1);
	Function_457(626, 4294967295, 0.0f, "sn_zw_t", "sd_sold", "", "", 9, 1);
	Function_457(625, 4294967295, 0.0f, "sn_zw_e", "sd_sold", "", "", 9, 1);
	Function_457(627, 4294967295, 0.0f, "sn_zw_c", "sd_sold", "", "", 9, 1);
	Function_457(628, 4294967295, 0.0f, "sn_zw_h", "sd_sold", "", "", 9, 1);
	Function_457(630, 4294967295, 0.0f, "sn_zh_e", "sd_sold", "", "", 9, 1);
	Function_457(631, 4294967295, 0.0f, "sn_zh_h", "sd_sold", "", "", 9, 1);
	Function_457(634, 4294967295, 0.0f, "sn_zchT", "sd_sold", "", "", 9, 1);
	Function_457(633, 4294967295, 0.0f, "sn_zchE", "sd_sold", "", "", 9, 1);
	Function_457(635, 4294967295, 0.0f, "sn_zchC", "sd_sold", "", "", 9, 1);
	Function_457(636, 4294967295, 0.0f, "sn_zchH", "sd_sold", "", "", 9, 1);
	Function_457(639, 4294967295, 0.0f, "sn_zsqT", "sd_sold", "", "", 9, 1);
	Function_457(638, 4294967295, 0.0f, "sn_zsqE", "sd_sold", "", "", 9, 1);
	Function_457(640, 4294967295, 0.0f, "sn_zsqH", "sd_sold", "", "", 9, 1);
	Function_457(642, 4294967295, 0.0f, "sn_zunH", "sd_sold", "", "", 9, 1);
	Function_457(643, 4294967295, 0.0f, "sn_zunR", "sd_sold", "", "", 9, 1);
	Function_457(645, 4294967295, 0.0f, "sn_zbat", "sd_sold", "", "", 9, 1);
	Function_457(647, 4294967295, 0.0f, "sn_zd_t", "sd_sold", "", "", 9, 1);
	Function_457(648, 4294967295, 0.0f, "sn_zd_e", "sd_sold", "", "", 9, 1);
	Function_457(650, 4294967295, 0.0f, "sn_zbuH", "sd_sold", "", "", 9, 1);
	Function_457(651, 4294967295, 0.0f, "sn_zbuE", "sd_sold", "", "", 9, 1);
	Function_457(653, 4294967295, 0.0f, "sn_zboT", "sd_sold", "", "", 9, 1);
	Function_457(654, 4294967295, 0.0f, "sn_zboE", "sd_sold", "", "", 9, 1);
	Function_458(357, 0.0f, "sn_trea", 4, 7, 1, 4, 3212836864, 0);
	Function_457(587, 357, 0.0f, "sn_t_1", "sd_sold", "", "", 9, 3);
	Function_457(588, 357, 0.0f, "sn_t_2", "sd_sold", "", "", 9, 3);
	Function_457(589, 357, 0.0f, "sn_t_3", "sd_sold", "", "", 9, 3);
	Function_457(590, 357, 0.0f, "sn_t_4", "sd_sold", "", "", 9, 3);
	Function_457(591, 357, 0.0f, "sn_t_5", "sd_sold", "", "", 9, 3);
	Function_458(657, 0.0f, "sn_zmsp", 4, 2, 1, 2, 3212836864, 0);
	Function_458(372, 0.0f, "sn_mtof", 24, 4, 3, 2, 3212836864, 0);
	Function_458(373, 0.0f, "sn_mtoh", 24, 4, 3, 2, 3212836864, 0);
	Function_458(374, 0.0f, "sn_mtwh", 24, 4, 1, 2, 3212836864, 0);
	Function_458(379, 0.0f, "sn_dff", 0, 4, 3, 2, 3212836864, 0);
	Function_458(380, 0.0f, "sn_hdff", 0, 4, 3, 2, 3212836864, 0);
	Function_458(385, 0.0f, "sn_rpof", 0, 4, 3, 2, 3212836864, 0);
	Function_458(387, 0.0f, "sn_bfs", 24, 4, 3, 2, 3212836864, 0);
	Function_458(388, 0.0f, "sn_bfsh", 24, 4, 3, 2, 3212836864, 0);
	Function_458(390, 0.0f, "sn_dlvl", 15, 2, 1, 2, 3.0f, 0.0f);
	Function_458(391, 0.0f, "sn_kde", 0, 6, 3, 2, 3212836864, 0);
	Function_458(392, 0.0f, "sn_kode", 0, 6, 3, 2, 3212836864, 0);
	Function_458(394, 0.0f, "sn_tdet", 23, 6, 3, 2, 3212836864, 0);
	Function_458(395, 0.0f, "sn_tode", 0, 6, 3, 2, 3212836864, 0);
	Function_458(398, 0.0f, "sn_nhog", 0, 2, 1, 2, 3212836864, 0);
	Function_458(389, 0.0f, "sn_mlas", 24, 2, 1, 2, 3212836864, 0);
	Function_458(678, 0.0f, "sn_zhog", 0, 2, 1, 2, 3212836864, 0);
	Function_458(456, 0.0f, "sn_otfd", 3, 9, 1, 2, 3212836864, 0);
	Function_458(457, 0.0f, "sn_otft", 3, 9, 1, 2, 3212836864, 0);
	Function_171();
	Var1 = { StackVal, Function_171() };
	Function_80(179, &Var1, 0, 1);
	Function_170();
	Var1 = { StackVal, Function_170() };
	Function_80(180, &Var1, 0, 1);
	Function_169();
	Var1 = { StackVal, Function_169() };
	Function_80(181, &Var1, 0, 1);
	Function_168(0);
	Var1 = { StackVal, Function_168(0) };
	Function_80(182, &Var1, 0, 1);
	iVar3 = 0;
	while (iVar3 <= 38)
	{
		Function_96((50 + iVar3), Function_11((90 + iVar3)));
		iVar3++;
	}
	Function_96(49, Function_11(89));
	Function_456();
	return;
}

void Function_456() //Position: 0x2C5B1 / 181681
{
	SET_SAGPLAYER_STAT_FLOAT(0, Global_34581[372]);
	SET_SAGPLAYER_STAT_FLOAT(1, Global_34581[373]);
	SET_SAGPLAYER_STAT_FLOAT(2, Global_34581[374]);
	SET_SAGPLAYER_STAT_FLOAT(3, Global_34581[375]);
	SET_SAGPLAYER_STAT_FLOAT(4, Global_34581[376]);
	SET_SAGPLAYER_STAT_FLOAT(5, Global_34581[377]);
	SET_SAGPLAYER_STAT_FLOAT(6, Global_34581[378]);
	SET_SAGPLAYER_STAT_FLOAT(7, Global_34581[381]);
	SET_SAGPLAYER_STAT_FLOAT(8, Global_34581[382]);
	SET_SAGPLAYER_STAT_FLOAT(9, Global_34581[383]);
	SET_SAGPLAYER_STAT_FLOAT(10, Global_34581[387]);
	SET_SAGPLAYER_STAT_FLOAT(11, Global_34581[388]);
	SET_SAGPLAYER_STAT_FLOAT(12, Global_34581[394]);
	SET_SAGPLAYER_STAT_INT(0, Global_34581[385]);
	SET_SAGPLAYER_STAT_INT(1, Global_34581[379]);
	SET_SAGPLAYER_STAT_INT(2, Global_34581[380]);
	SET_SAGPLAYER_STAT_INT(3, Global_34581[44]);
	SET_SAGPLAYER_STAT_INT(4, Global_34581[392]);
	SET_SAGPLAYER_STAT_INT(6, Global_34581[391]);
	SET_SAGPLAYER_STAT_INT(5, Global_34581[393]);
	SET_SAGPLAYER_STAT_INT(7, Global_34581[395]);
	return;
}

int Function_457(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8) //Position: 0x2C6B7 / 181943
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam1;
	if (iVar0 >= 696)
	{
		LOG_ERROR("COLLECTION_REGISTER: Attempting to register a Stat out of bounds.");
		return 0;
	}
	if (!IS_STRING_VALID(bParam3))
	{
		LOG_ERROR("COLLECTION_REGISTER: LabelForCollectionName parameter cannot be an Invalid String.");
		return 0;
	}
	if (!IS_STRING_VALID(bParam4))
	{
		LOG_ERROR("COLLECTION_REGISTER: LabelForCollectionDescription parameter cannot be an Invalid String.");
		return 0;
	}
	bVar1 = false;
	if (iParam1 != 4294967295)
	{
		if (!IS_STRING_VALID(&(Global_35278[iParam120])))
		{
			bVar1 = true;
			if (!IS_STRING_VALID(bParam5))
			{
				LOG_ERROR("COLLECTION_REGISTER: LabelForStatName parameter cannot be an Invalid String.");
				return 0;
			}
			if (STRING_LENGTH(bParam5) >= 7)
			{
				LOG_ERROR("COLLECTION_REGISTER: LabelForStatName parameter cannot be more than 7 characters.");
				return 0;
			}
			if (!IS_STRING_VALID(bParam6))
			{
				LOG_ERROR("COLLECTION_REGISTER: LabelForStatDescription parameter cannot be an Invalid String.");
				return 0;
			}
			if (STRING_LENGTH(bParam6) >= 7)
			{
				LOG_ERROR("COLLECTION_REGISTER: LabelForStatDescription parameter cannot be more than 7 characters.");
				return 0;
			}
		}
		Global_35278[iParam120].f_48 = 5;
	}
	if (IS_STRING_VALID(&(Global_35278[iParam020])))
	{
		if (STRING_LENGTH(&(Global_35278[iParam020])) >= 0)
		{
			PRINTSTRING("COLLECTION_REGISTER: You are not allowed to overwrite this already registered Collection: ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_ERROR("COLLECTION_REGISTER: You are not allowed to overwrite an already registered Collection.");
			return 0;
		}
	}
	if (Global_3364)
	{
		Global_34581[iParam0] = iParam2;
	}
	strcpy(&(Global_35278[iParam020]), bParam3, 8);
	strcpy(&Global_35278[iParam020] + 8, bParam4, 8);
	strcpy(&Global_35278[iParam020] + 16, "0", 32);
	Global_35278[iParam020].f_48 = 2;
	Global_35278[iParam020].f_52 = iParam1;
	Global_35278[iParam020].f_76 = 4;
	if (bVar1)
	{
		Function_458(iParam1, iParam2, bParam5, 5, iParam7, iParam8, 4, 3212836864, 0);
	}
	Global_62336++;
	if (Global_62336 > 107)
	{
		LOG_ERROR("COLLECTION_REGISTER: Cannot add any more COLLECTABLES, we have reached CONST_MAX_COLLECTABLES. Please increae it!");
		return 0;
	}
	Global_61639[iParam0] = Global_62336;
	Global_60461[Global_6233611] = 1.0f;
	Global_60461[Global_6233611].f_4 = STRING_TO_HASH(bParam3);
	Global_60461[Global_6233611].f_8 = STRING_TO_HASH(bParam4);
	Global_60461[Global_6233611].f_28 = GET_ASSET_ID("p_gen_package01x", 0);
	Global_60461[Global_6233611].f_32 = 0;
	Global_60461[Global_6233611].f_36 = iParam0;
	return 1;
}

int Function_458(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8) //Position: 0x2CBF6 / 183286
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_REGISTER_Z: Attempting to register a Stat out of bounds.");
		return 0;
	}
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_REGISTER_Z: eStatID parameter cannot be STAT_INVALID (-1).");
		return 0;
	}
	if (iParam3 == 2)
	{
		LOG_ERROR("STAT_REGISTER_Z: you are not allowed to register a Collectible with this command, please use COLLECTION_REGISTER.");
		return 0;
	}
	if (!IS_STRING_VALID(bParam2))
	{
		LOG_ERROR("STAT_REGISTER_Z: LabelForStatName parameter cannot be an Invalid String.");
		return 0;
	}
	if (STRING_LENGTH(bParam2) >= 7)
	{
		LOG_ERROR("STAT_REGISTER_Z: LabelForStatName parameter cannot be more than 7 characters.");
		return 0;
	}
	if (IS_STRING_VALID(&(Global_35278[iParam020])))
	{
		if (STRING_LENGTH(&(Global_35278[iParam020])) >= 0)
		{
			PRINTSTRING("STAT_REGISTER_Z: You are not allowed to overwrite this already registered Stat: ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_ERROR("STAT_REGISTER_Z: You are not allowed to overwrite an already registered Stat.");
			return 0;
		}
	}
	if (Global_3364)
	{
		Global_34581[iParam0] = iParam1;
	}
	strcpy(&(Global_35278[iParam020]), bParam2, 8);
	strcpy(&Global_35278[iParam020] + 8, bParam2, 8);
	if (iParam3 != 20)
	{
		strcpy(&Global_35278[iParam020] + 16, "0", 32);
	}
	Global_35278[iParam020].f_48 = iParam3;
	Global_35278[iParam020].f_56 = iParam4;
	if (iParam3 == 21)
	{
		Global_35278[iParam020].f_76 = 3;
	}
	else
	{
		Global_35278[iParam020].f_76 = iParam6;
	}
	Global_35278[iParam020].f_60 = iParam8;
	if (iParam3 != 7 || iParam3 != 11)
	{
		if (fParam7 != -1.0f)
		{
			Global_35278[iParam020].f_64 = 100.0f;
		}
	}
	else if (fParam7 == -1.0f)
	{
		Global_35278[iParam020].f_64 = fParam7;
	}
	if (iParam3 > 15 || iParam3 < 18)
	{
		CREATE_STAT(bParam2, "", iParam4, iParam5);
	}
	else if ((((iParam0 != 597 || iParam0 != 19) || iParam0 != 20) || iParam0 != 21) || iParam0 != 603)
	{
		CREATE_STAT(bParam2, "", iParam4, iParam5);
	}
	return 1;
}

void Function_459() //Position: 0x2CFB4 / 184244
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_34581 - 1))
	{
		if (Global_3364)
		{
			Global_34581[iVar0] = -1.0f;
		}
		strcpy(&(Global_35278[iVar020]), "", 8);
		strcpy(&Global_35278[iVar020] + 8, "", 8);
		strcpy(&Global_35278[iVar020] + 16, "", 32);
		Global_35278[iVar020].f_48 = 4294967295;
		Global_35278[iVar020].f_52 = 4294967295;
		Global_35278[iVar020].f_56 = 4294967295;
		Global_35278[iVar020].f_68 = 4294967295;
		Global_35278[iVar020].f_72 = 4294967295;
		iVar0++;
	}
	Function_460();
	return;
}

void Function_460() //Position: 0x2D03B / 184379
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_49199 - 1))
	{
		Global_49199[iVar0] = -1.0f;
		strcpy(&(Global_49205[iVar020]), "", 8);
		strcpy(&Global_49205[iVar020] + 8, "", 8);
		strcpy(&Global_49205[iVar020] + 16, "", 32);
		Global_49205[iVar020].f_48 = 4294967295;
		Global_49205[iVar020].f_56 = 4294967295;
		Global_49205[iVar020].f_68 = 4294967295;
		Global_49205[iVar020].f_72 = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_461(bool bParam0) //Position: 0x2D0AF / 184495
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(bParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_462() //Position: 0x2D0CE / 184526
{
	Global_26137[0] = Function_463("AllowedToInvestigate", 1);
	Global_26137[1] = Function_463("BumpedIntoMeJustNow", 1);
	Global_26137[2] = Function_463("CanCombatFight", 1);
	Global_26137[3] = Function_463("CanHotspotMoveTo", 0);
	Global_26137[4] = Function_463("CanHotspotUse", 0);
	Global_26137[5] = Function_463("CanInvestigateBody", 1);
	Global_26137[6] = Function_463("HasFightCapabilities", 0);
	Global_26137[7] = Function_463("ShouldInvestigateBody", 1);
	Global_26137[8] = Function_463("CanCombatTakeDownFromMount", 1);
	return;
}

var Function_463(bool bParam0, int iParam1) //Position: 0x2D1F1 / 184817
{
	int iVar0;
	
	iVar0 = AI_PREDICATE_FIND_NAMED(bParam0, iParam1);
	if (!AI_PREDICATE_IS_VALID(iVar0))
	{
		LOG_ERROR("GET_NAMED_PREDICATE did not find the given predicate: ");
		LOG_ERROR(bParam0);
	}
	return iVar0;
}

void Function_464(int iParam0) //Position: 0x2D24C / 184908
{
	switch (iParam0)
	{
		case 0x00000000:
			AUDIO_MUSIC_SET_STATE("SILENT");
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_SET_STATE("SCRIPTED");
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_STATE("UNSCRIPTED");
			break;
	}
	return;
}

