//Decompiled with MagicRDR v1.0
//Function Count : 522
//Statics Count : 251
//Natives Count : 524
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<845> Local_4 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<173> Var0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	fLocal_236 = 1.0f;
	iLocal_246 = 4294967295;
	DLC_PRE_INIT_CONTENT();
	SET_AGRESSIVE_EVENT_ON(0);
	Function_521(0);
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (!Global_3363)
	{
		Global_88817 = Var0.f_172;
	}
	if (Var0.f_16)
	{
		Global_6267 = Var0;
		Global_3381 = 1;
		Global_3365 = 1;
		UI_DISABLE("PM_Stats");
		UI_EXCLUDE("JournalTab_Complete");
	}
	else
	{
		UI_ENABLE("PM_Stats");
		UI_INCLUDE("JournalTab_Complete");
	}
	if (Function_520(&uVar44, &iVar45, &iVar46))
	{
		Function_519(2048);
		Global_27772 = uVar44;
		if (Global_27772 < 0 && Global_27772 >= 6)
		{
			Function_518(Global_27772);
			Global_34165 = { StackVal, StackVal, Function_518(Global_27772) };
			if (iVar46 == 4294967295 && iVar45 <= 0)
			{
				Global_26401.f_2216 = iVar46;
				Function_516(Global_26401.f_2216, iVar45);
			}
			Function_515(&Global_63095, 2);
			Function_514(&Global_63095, 1);
		}
		else
		{
			Global_27772 = 1;
			Function_518(1);
			Global_34165 = { StackVal, StackVal, Function_518(1) };
		}
	}
	if (!Function_513())
	{
		Function_512();
		if (Var0.f_68)
		{
			Global_34165.f_48++;
			Function_511(&Global_34165 + 12, &Global_34165 + 16);
			Global_34165 = { StackVal, StackVal, Function_511(&Global_34165 + 12, &Global_34165 + 16) };
			Global_34165.f_24 = Function_510();
		}
	}
	if ((Global_34165.f_44 || Global_79339) || _WAS_LAST_RESET_FOR_MULTIPLAYER())
	{
		Global_34165.f_44 = 1;
		bLocal_239 = false;
		Global_3365 = 0;
		SET_RICH_PRESENCE(1, 0, 0, 0, 0);
	}
	else
	{
		SET_RICH_PRESENCE(2, 0, 0, 0, 0);
		if (IS_LAUNCH_RETAIL() && Global_3364)
		{
			bLocal_239 = true;
			Global_3365 = 1;
			Function_509();
		}
	}
	if (!Global_34165.f_44)
	{
		STREAMING_ENABLE_POI_STREAMING(0);
	}
	if (Function_508("npressDemo"))
	{
		Global_3419 = 1;
	}
	if (Function_508("pressDemo3"))
	{
		Global_3420 = 1;
	}
	if (Function_508("pax"))
	{
		Global_3421 = 1;
		bLocal_239 = false;
		Global_3365 = 0;
	}
	Global_3365 = !Global_34165.f_44;
	TOGGLE_COVER_PROPS(0);
	Global_30938.f_4 = 4294967295;
	Global_30938.f_8 = 4294967295;
	Global_30938 = 0;
	Global_3366 = 0;
	Function_507();
	if (Function_508("performanceTestHen"))
	{
		bLocal_250 = false;
		bLocal_240 = true;
	}
	else if (Function_508("performanceTestArm"))
	{
		bLocal_250 = true;
		bLocal_240 = true;
	}
	else if (Function_508("performanceTestFire"))
	{
		bLocal_250 = 2;
		bLocal_240 = true;
	}
	else if (Function_508("performanceTestStream"))
	{
		bLocal_250 = 3;
		bLocal_240 = true;
	}
	else if (Function_508("performancetestgringo"))
	{
		bLocal_250 = 4;
		bLocal_240 = true;
	}
	bLocal_241 = Function_506("soaktest");
	if (bLocal_241 != 4294967295 && Function_508("soaktest"))
	{
		bLocal_241 = false;
	}
	if (Function_508("noDDA"))
	{
		Global_76853 = 0;
	}
	else
	{
		Global_76853 = 1;
	}
	Global_3391 = 1;
	if (Global_3364)
	{
		LOG_MESSAGE("Initializing deed array");
		Function_505();
	}
	iVar47 = Function_501(0, 1, 1);
	if (Global_34165.f_28)
	{
		if (Global_34165.f_28)
		{
			LOG_MESSAGE("Resetting from mission");
			Global_34165.f_36 = 1;
		}
	}
	else
	{
		bLocal_238 = true;
	}
	if (Var0.f_16)
	{
		if (Global_6267 == 1)
		{
			if (!Global_34165.f_28)
			{
				Global_34165 = { 857,329f, 78,453f, 1238,027f };
			}
			else
			{
				Global_34165 = { -2208,91f, 16,5062f, 2605,41f };
			}
		}
		else if (Global_6267 == 2)
		{
			Global_34165 = { -839,352f, 92,547f, 2372,48f };
			Global_34165.f_12 = 170,951f;
		}
		else if (Global_6267 == 48)
		{
			Global_34165 = { -170,176f, 124,375f, 1723,22f };
			Global_34165.f_12 = 286,845f;
		}
		else
		{
			Global_34165 = { StackVal, StackVal, *(&Var0 + 4) };
		}
		bLocal_238 = false;
	}
	else if (Global_3421)
	{
		Global_34165 = { -2137,46f, 16,38f, 2605,633f };
		Global_34165.f_12 = 265.0f;
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
			if (!bLocal_239)
			{
				if (Function_508("randomstartloc"))
				{
					bVar67 = FLOOR(TO_FLOAT((RAND_INT_RANGE(false, vVar48 * 1000) / 1000)));
					if (bVar67 <= 0)
					{
						bVar67 = false;
					}
					else if (bVar67 > vVar48)
					{
						bVar67 = (vVar48 - 1);
					}
					vVar48[03] = { -837,534f, 92,062f, 2379,602f };
					vVar48[13] = { -2103,409f, 16,449f, 2604,172f };
					vVar48[23] = { 108,881f, 73,304f, 2322,866f };
					vVar48[33] = { -4296,771f, 22,116f, 4406,287f };
					vVar48[43] = { -2730,71f, 32,353f, 4251,411f };
					vVar48[53] = { 661,31f, 77,936f, 1214,231f };
					Global_34165 = { StackVal, StackVal, vVar48[bVar673] };
				}
				else
				{
					Global_34165 = { -837,534f, 92,062f, 2379,602f };
				}
			}
			else if ((Global_3365 && !Global_3381) && !Global_34165.f_28)
			{
				if (StackVal && StackVal != 3 != 4)
				{
					Global_63097 = 1;
					Function_500(16385);
					if (!UI_ISACTIVE("nCutscenes"))
					{
						UI_ACTIVATE("nCutscenes");
					}
					Global_34165 = { 736,489f, 90,334f, 1199,335f };
				}
			}
		}
		else if ((Global_3365 && !Global_3381) && !Global_34165.f_28)
		{
			iVar68 = Function_501(0, 2, 1);
			iVar69 = Function_501(2, 47, 1);
			iVar70 = Function_501(2, 48, 1);
			if (StackVal && StackVal != 3 != 4)
			{
				Global_34165 = { -839,352f, 92,547f, 2372,48f };
				Global_34165.f_12 = 170,951f;
			}
			else if (StackVal && (StackVal && !(StackVal || StackVal != 3 != 4) != 3) != 4)
			{
				Global_34165 = { -170,176f, 124,375f, 1723,22f };
				Global_34165.f_12 = 286,845f;
			}
		}
		if (!Global_3365 && !Global_3421)
		{
			Global_34165.f_12 = 176,588f;
		}
	}
	if (Function_499(2048))
	{
		bLocal_238 = false;
	}
	if (bLocal_240)
	{
		switch (bLocal_250)
		{
			case 0x00000000:
				Global_34165 = { -837,534f, 92,062f, 2379,602f };
				break;
			
			case 0x00000001:
				Global_34165 = { -2201,96f, 16,581f, 2614,463f };
				break;
			
			case 0x00000002:
				Global_34165 = { -703,695f, 63,002f, 3334,63f };
				break;
			
			case 0x00000004:
				Global_34165 = { -687,803f, 66,482f, 3293,021f };
				break;
			}
	}
	Function_497();
	if (!Global_34165.f_44)
	{
		SET_START_POS(Global_34165, Global_34165.f_12, 0);
	}
	Global_34165.f_40 = 0;
	Global_13112 = { 0.0f, 0.0f, 0.0f };
	Global_13112.f_72 = 4294967295;
	Function_486();
	Function_485();
	if (Global_3364)
	{
		Function_484();
	}
	bVar71 = 13;
	Function_482(&bVar71, "$/content/scripting/DesignerDefined/Player", 4, 0);
	Function_482(&bVar71, "$/content/init/rdr2init_each_load", 4, 0);
	Function_482(&bVar71, "$/content/scripting/DesignerDefined/short_update_thread", 4, 0);
	Function_482(&bVar71, "$/content/scripting/DesignerDefined/medium_update_thread", 4, 0);
	Function_482(&bVar71, "$/content/scripting/DesignerDefined/long_update_thread", 4, 0);
	Function_482(&bVar71, "$/content/scripting/DesignerDefined/UI/FuiEventMonitor", 4, 0);
	Function_482(&bVar71, "$/content/scripting/DesignerDefined/Pause", 4, 0);
	if (Global_34165.f_44)
	{
		Function_482(&bVar71, "$/content/multiplayer/multiplayer_update_thread", 4, 0);
	}
	else
	{
		Function_482(&bVar71, "$/content/scripting/gringo/SimpleGringo/hogtie", 1, 0);
		Function_482(&bVar71, "$/content/scripting/gringo/SimpleGringo/hogtie_pickup", 1, 0);
		Function_482(&bVar71, "$/content/scripting/gringo/SimpleGringo/Loot_Corpse", 1, 0);
		Function_482(&bVar71, "$/content/scripting/gringo/SimpleGringo/Skin_Animal", 1, 0);
		Function_482(&bVar71, "$/content/scripting/gringo/SimpleGringo/Pluck_Feather", 1, 0);
		Function_482(&bVar71, "$/content/scripting/gringo/GringoBrains/SmallBrains/Drunk", 1, 0);
	}
	fLocal_245 = 0.0f;
	while (!Function_477(&bVar71))
	{
		WAIT(false);
	}
	if (!Function_476(Global_63095, 1))
	{
		Function_514(&Global_63084 + 32, 65536);
		Function_514(&Global_63084 + 32, 2);
		Function_514(&Global_63084 + 32, 1);
	}
	else
	{
		bLocal_249 = true;
	}
	bVar111 = LAUNCH_NEW_SCRIPT("scripting/DesignerDefined/Player", 0);
	fLocal_245 = 0.0f;
	while (!IS_SCRIPT_VALID(bVar111))
	{
		WAIT(false);
	}
	fLocal_245 = 0.0f;
	while (!IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("PlayerLayout")))
	{
		WAIT(false);
	}
	fLocal_245 = 0.0f;
	if (Global_34165.f_44)
	{
	}
	while (!IS_ACTOR_VALID(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), "player")) && !Global_34165.f_44)
	{
		WAIT(false);
	}
	LAUNCH_NEW_SCRIPT("scripting/DesignerDefined/UI/FuiEventMonitor", 0);
	if (bLocal_240)
	{
		switch (bLocal_250)
		{
			case 0x00000000:
				bVar112 = LAUNCH_NEW_SCRIPT("systemTest/PerformanceTests/test01_hen", 0);
				break;
			
			case 0x00000001:
				bVar112 = LAUNCH_NEW_SCRIPT("systemTest/PerformanceTests/test02_arm", 0);
				break;
			
			case 0x00000002:
				bVar112 = LAUNCH_NEW_SCRIPT("systemTest/PerformanceTests/test03_firefight", 0);
				break;
			
			case 0x00000003:
				bVar112 = LAUNCH_NEW_SCRIPT("systemTest/PerformanceTests/test04_streaming", 0);
				break;
			
			case 0x00000004:
				bVar112 = LAUNCH_NEW_SCRIPT("systemTest/PerformanceTests/test05_gringo", 0);
				break;
		}
		bVar113 = MAKE_TIME_OF_DAY(false, false, false);
		SET_WEATHER(true, bVar113);
		while (!IS_SCRIPT_VALID(bVar112))
		{
			WAIT(false);
		}
		while (!STREAMING_IS_WORLD_LOADED())
		{
			WAIT(false);
		}
		HUD_FADE_IN(2.0f, 1065353216);
		CAMERA_RESET(0);
		STREAMING_SET_CUTSCENE_MODE(0);
		if (bLocal_250 != 3)
		{
			while (IS_SCRIPT_VALID(bVar112))
			{
				WAIT(false);
			}
			TERMINATE_THIS_SCRIPT();
		}
	}
	Function_475();
	Function_474();
	LAUNCH_NEW_SCRIPT("init/rdr2init_each_load", 0);
	LAUNCH_NEW_SCRIPT("scripting/DesignerDefined/short_update_thread", 0);
	LAUNCH_NEW_SCRIPT("scripting/DesignerDefined/medium_update_thread", 0);
	LAUNCH_NEW_SCRIPT("scripting/DesignerDefined/long_update_thread", 0);
	Function_431();
	Global_3375 = 1;
	Global_3377 = 1;
	Global_3379 = 0;
	Global_3380 = 0;
	Global_3386 = 0;
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
	Function_429();
	Function_428();
	Function_427();
	CLEAR_REGIONS();
	Function_425();
	Global_30621[0] = Function_423("$/content/Frontier/PR_Frontier", "fro", 4294967295, 0, 1, 0, 0, 0, 1, 0);
	Global_30621[1] = Function_423("$/content/Mexico/PR_Mexico", "mex", Global_30621[0], 0, 1, 1, 0, 0, 1, 0);
	Global_30621[2] = Function_423("$/content/North/PR_North", "nor", Global_30621[1], 0, 1, 2, 0, 0, 1, 0);
	Global_30621[3] = Function_423("$/content/Homestead/PR_Homestead", "hom", Global_30621[2], 0, 1, 3, 0, 0, 1, 0);
	Global_30621[4] = Function_423("$/content/Homestead/PR_End", "end", Global_30621[3], 0, 1, 4, 0, 0, 1, 0);
	Global_30628[0] = Function_423("$/content/Frontier/Cholla_Springs/ChollaSprings", "cho", Global_30621[0], Local_4.f_132, 2, 5, 0, 1, 1, 0);
	Global_30633[1] = Function_423("$/content/Mexico/Diez_Coronas/DiezCoronas", "dzc", Global_30621[1], Local_4.f_404, 2, 52, 0, 1, 1, 0);
	Global_30628[1] = Function_423("$/content/Frontier/Gaptooth_Ridge/GaptoothRidge", "gtr", Global_30621[0], Local_4.f_196, 2, 6, 0, 0, 1, 0);
	Global_30637[0] = Function_423("$/content/North/Great_Plains/GreatPlains", "grt", Global_30621[2], Local_4.f_316, 2, 83, 0, 1, 1, 0);
	Global_30628[2] = Function_423("$/content/Frontier/Hennigans_Stead/HennigansStead", "hgn", Global_30621[0], Local_4.f_272, 2, 8, 0, 1, 1, 0);
	Global_30633[2] = Function_423("$/content/Mexico/Perdido/Perdido", "prd", Global_30621[1], Local_4.f_380, 2, 51, 0, 1, 1, 0);
	Global_30633[0] = Function_423("$/content/Mexico/Punta_Orgullo/PuntaOrgullo", "pun", Global_30621[1], Local_4.f_352, 2, 50, 0, 1, 1, 0);
	Global_30628[3] = Function_423("$/content/Frontier/Rio_Bravo/RioBravo", "rio", Global_30621[0], Local_4.f_228, 2, 7, 0, 0, 1, 0);
	Global_30637[1] = Function_423("$/content/North/Tall_Trees/TallTrees", "tal", Global_30621[2], Local_4.f_300, 2, 82, 0, 0, 1, 0);
	Global_30693[2] = Function_423("$/content/Mexico/Perdido/Agave_Viejo/AgaveViejo", "agv", Global_30633[2], Local_4.f_732, 4, 62, 0, 1, 0, 0);
	Global_30640[0] = Function_423("$/content/Frontier/Cholla_Springs/Armadillo/Armadillo", "arm", Global_30628[0], Local_4.f_44, 3, 9, 0, 1, 1, 0);
	Global_30717[1] = Function_423("$/content/North/Great_Plains/BeechersHope/BeechersHope", "beh", Global_30637[0], Local_4.f_496, 4, 95, 0, 0, 1, 0);
	Global_30658[4] = Function_423("$/content/Frontier/Gaptooth_Ridge/Benedict_Point/BenedictPoint", "ben", Global_30628[1], Local_4.f_448, 4, 30, 0, 0, 1, 0);
	Global_30717[0] = Function_423("$/content/North/Great_Plains/Blackwater/Blackwater", "blk", Global_30637[0], Local_4.f_484, 3, 94, 0, 0, 1, 0);
	Global_30707[2] = Function_423("$/content/Mexico/Diez_Coronas/Casa_Madrugada/CasaMadrugada", "cas", Global_30633[1], Local_4.f_472, 4, 75, 0, 1, 1, 0);
	Global_30693[0] = Function_423("$/content/Mexico/Perdido/Chuparosa/Chuparosa", "chu", Global_30633[2], Local_4.f_464, 3, 60, 0, 1, 1, 0);
	Global_30723[0] = Function_423("$/content/North/Tall_Trees/Cochinay/Cochinay", "coc", Global_30637[1], Local_4.f_676, 4, 84, 0, 0, 0, 0);
	Global_30640[4] = Function_423("$/content/Frontier/Cholla_Springs/Coots_Chapel/CootsChapel", "coo", Global_30628[0], Local_4.f_512, 4, 11, 0, 0, 0, 0);
	Global_30707[0] = Function_423("$/content/Mexico/Diez_Coronas/El_Matadero_Town/ElMataderoTown", "emt", Global_30633[1], Local_4.f_656, 4, 73, 0, 0, 1, 0);
	Global_30707[1] = Function_423("$/content/Mexico/Diez_Coronas/El_Presidio/ElPresidio", "fod", Global_30633[1], Local_4.f_480, 4, 74, 0, 1, 1, 0);
	Global_30685[0] = Function_423("$/content/Mexico/Punta_Orgullo/Escalera/Escalera", "esc", Global_30633[0], Local_4.f_456, 3, 53, 0, 1, 1, 0);
	Global_30693[1] = Function_423("$/content/Mexico/Perdido/Las_Hermanas/LasHermanas", "lsh", Global_30633[2], Local_4.f_728, 4, 61, 0, 1, 1, 0);
	Global_30668[0] = Function_423("$/content/Frontier/Hennigans_Stead/Hennigans_Ranch/HennigansRanch", "hen", Global_30628[2], Local_4.f_412, 3, 40, 0, 0, 1, 0);
	Global_30723[1] = Function_423("$/content/North/Tall_Trees/Manzanita_Post/ManzanitaPost", "mtp", Global_30637[1], Local_4.f_488, 4, 85, 0, 0, 1, 0);
	Global_30723[2] = Function_423("$/content/North/Tall_Trees/Pacific_Union_Railroad_Camp/PacificUnionRailroadCamp", "upr", Global_30637[1], Local_4.f_492, 4, 86, 0, 0, 1, 0);
	Global_30679[0] = Function_423("$/content/Frontier/Rio_Bravo/Plainview/Plainview", "pln", Global_30628[3], Local_4.f_704, 4, 35, 0, 0, 1, 0);
	Global_30640[1] = Function_423("$/content/Frontier/Cholla_Springs/Ridgewood_Farm/RidgewoodFarm", "rwf", Global_30628[0], Local_4.f_56, 4, 10, 0, 0, 1, 0);
	Global_30658[1] = Function_423("$/content/Frontier/Gaptooth_Ridge/Rathskeller_Fork/RathskellerFork", "rat", Global_30628[1], Local_4.f_72, 4, 27, 0, 0, 1, 0);
	Global_30668[1] = Function_423("$/content/Frontier/Hennigans_Stead/Thieves_Landing/ThievesLanding", "thi", Global_30628[2], Local_4.f_408, 3, 41, 0, 0, 1, 0);
	Global_30707[3] = Function_423("$/content/Mexico/Diez_Coronas/Torquemada/Torquemada", "tor", Global_30633[1], Local_4.f_476, 4, 76, 0, 0, 0, 0);
	Global_30679[1] = Function_423("$/content/Frontier/Rio_Bravo/Fort_Mercer/FortMercer", "fom", Global_30628[3], Local_4.f_48, 5, 36, 0, 0, 0, 0);
	Global_30658[3] = Function_423("$/content/Frontier/Gaptooth_Ridge/Gaptooth_Breach/GaptoothBreach", "gap", Global_30628[1], Local_4.f_64, 5, 29, 0, 0, 0, 0);
	Global_30685[1] = Function_423("$/content/Mexico/Punta_Orgullo/Nosalida/Nosalida", "nos", Global_30633[0], Local_4.f_452, 5, 54, 0, 1, 0, 0);
	if (Global_34165.f_44)
	{
		Global_30668[2] = Function_423("$/content/Frontier/Hennigans_Stead/Pikes_Basin/PikesBasin", "pik", Global_30628[2], Local_4.f_768, 5, 42, 0, 0, 0, 0);
	}
	else
	{
		Global_30668[2] = Function_423("$/content/Frontier/Hennigans_Stead/Pikes_Basin/PikesBasin", "pik", Global_30628[2], Local_4.f_444, 5, 42, 0, 0, 0, 0);
	}
	if (IS_PS3())
	{
		Global_30658[2] = Function_423("$/content/Frontier/Gaptooth_Ridge/Solomons_Folly/SolomonsFolly", "sol", Global_30628[1], Local_4.f_68, 5, 28, 0, 0, 0, 0);
	}
	Global_30685[2] = Function_423("$/content/Mexico/Punta_Orgullo/Tesoro_Azul/TesoroAzul", "tes", Global_30633[0], Local_4.f_468, 5, 55, 0, 1, 0, 0);
	Global_30658[0] = Function_423("$/content/Frontier/Gaptooth_Ridge/Tumbleweed/Tumbleweed", "tum", Global_30628[1], Local_4.f_60, 5, 26, 0, 0, 0, 0);
	Global_30640[2] = Function_423("$/content/Frontier/Cholla_Springs/Twin_Rocks/TwinRocks", "twr", Global_30628[0], Local_4.f_52, 5, 12, 0, 0, 0, 0);
	Global_30707[5] = Function_423("", "cab", Global_30633[1], Local_4.f_572, 6, 78, 0, 0, 0, 0);
	Global_30723[5] = Function_423("", "aur", Global_30637[1], Local_4.f_632, 6, 89, 1, 0, 0, 0);
	Global_30693[3] = Function_423("", "bar", Global_30633[2], Local_4.f_588, 6, 63, 1, 0, 0, 1);
	Global_30723[6] = Function_423("", "bcc", Global_30637[1], Local_4.f_688, 6, 90, 1, 0, 0, 1);
	Global_30658[8] = Function_423("", "bep", Global_30628[3], Local_4.f_700, 6, 34, 0, 0, 0, 0);
	Global_30668[3] = Function_423("", "brb", Global_30628[2], Local_4.f_556, 6, 43, 1, 0, 0, 1);
	Global_30717[2] = Function_423("", "brk", Global_30637[0], Local_4.f_624, 6, 97, 0, 0, 0, 0);
	Global_30668[4] = Function_423("", "but", Global_30628[2], Local_4.f_560, 6, 44, 0, 0, 0, 0);
	Global_30693[12] = Function_423("", "mir", Global_30633[2], Local_4.f_724, 6, 72, 0, 1, 0, 0);
	Global_30640[15] = Function_423("", "cri", Global_30628[0], Local_4.f_736, 6, 24, 0, 1, 0, 0);
	Global_30685[4] = Function_423("", "crk", Global_30633[0], Local_4.f_608, 6, 57, 0, 1, 0, 0);
	Global_30658[5] = Function_423("", "cue", Global_30628[1], Local_4.f_528, 6, 31, 0, 0, 0, 0);
	Global_30640[13] = Function_423("", "lob", Global_30628[0], Local_4.f_592, 6, 22, 1, 0, 0, 1);
	Global_30679[4] = Function_423("", "dlr", Global_30628[3], Local_4.f_696, 6, 39, 0, 0, 0, 0);
	Global_30693[5] = Function_423("", "tro", Global_30633[2], Local_4.f_596, 6, 65, 0, 0, 0, 0);
	Global_30693[7] = Function_423("", "dia", Global_30633[2], Local_4.f_600, 6, 67, 1, 0, 0, 0);
	Global_30717[4] = Function_423("", "dix", Global_30637[0], Local_4.f_748, 6, 98, 0, 0, 0, 0);
	Global_30679[2] = Function_423("", "frb", Global_30628[3], Local_4.f_544, 6, 37, 0, 0, 0, 0);
	Global_30668[5] = Function_423("", "grn", Global_30628[2], Local_4.f_552, 6, 45, 0, 0, 0, 1);
	Global_30640[9] = Function_423("", "ham", Global_30628[0], Local_4.f_524, 6, 18, 0, 0, 0, 1);
	Global_30640[6] = Function_423("", "han", Global_30628[0], Local_4.f_516, 6, 15, 1, 0, 0, 0);
	Global_30693[10] = Function_423("", "hnd", Global_30633[2], Local_4.f_720, 6, 70, 1, 1, 0, 1);
	Global_30640[8] = Function_423("", "jor", Global_30628[0], Local_4.f_500, 6, 17, 0, 0, 0, 0);
	Global_30693[8] = Function_423("", "lag", Global_30633[2], Local_4.f_716, 6, 68, 1, 1, 0, 1);
	Global_30640[5] = Function_423("", "ldj", Global_30628[0], Local_4.f_508, 6, 14, 0, 0, 0, 1);
	Global_30707[8] = Function_423("", "mnt", Global_30633[1], Local_4.f_692, 6, 81, 0, 0, 0, 0);
	Global_30723[7] = Function_423("", "msb", Global_30637[1], Local_4.f_744, 6, 91, 0, 0, 0, 0);
	Global_30640[11] = Function_423("", "mcr", Global_30628[0], Local_4.f_648, 6, 20, 1, 0, 0, 1);
	Global_30707[7] = Function_423("", "lun", Global_30633[1], Local_4.f_576, 6, 80, 0, 0, 0, 0);
	Global_30668[6] = Function_423("", "mes", Global_30628[2], Local_4.f_612, 6, 46, 1, 0, 0, 1);
	Global_30723[9] = Function_423("", "mtf", Global_30637[1], Local_4.f_760, 6, 93, 0, 0, 0, 0);
	Global_30723[3] = Function_423("", "nek", Global_30637[1], Local_4.f_640, 6, 87, 1, 0, 0, 0);
	Global_30640[12] = Function_423("", "odd", Global_30628[0], Local_4.f_644, 6, 21, 0, 0, 0, 0);
	Global_30668[8] = Function_423("", "bac", Global_30628[2], Local_4.f_564, 6, 48, 0, 0, 0, 1);
	Global_30685[5] = Function_423("", "plt", Global_30633[0], Local_4.f_604, 6, 58, 1, 0, 0, 0);
	Global_30640[10] = Function_423("", "ple", Global_30628[0], Local_4.f_652, 6, 19, 0, 0, 0, 0);
	Global_30693[9] = Function_423("", "pri", Global_30633[2], Local_4.f_708, 6, 69, 1, 1, 0, 1);
	Global_30685[6] = Function_423("", "pch", Global_30633[0], Local_4.f_752, 6, 59, 0, 0, 0, 0);
	Global_30693[6] = Function_423("", "ram", Global_30633[2], Local_4.f_548, 6, 66, 0, 1, 0, 0);
	Global_30693[11] = Function_423("", "rnp", Global_30633[2], Local_4.f_712, 6, 71, 1, 1, 0, 1);
	Global_30640[7] = Function_423("", "rtl", Global_30628[0], Local_4.f_520, 6, 16, 1, 0, 0, 0);
	Global_30679[3] = Function_423("", "rep", Global_30628[3], Local_4.f_540, 6, 38, 1, 0, 0, 0);
	Global_30640[3] = Function_423("", "bat", Global_30628[0], Local_4.f_504, 6, 13, 0, 0, 0, 1);
	Global_30707[4] = Function_423("", "roc", Global_30633[1], Local_4.f_568, 6, 77, 0, 0, 0, 0);
	Global_30658[6] = Function_423("", "scr", Global_30628[1], Local_4.f_532, 6, 32, 0, 0, 0, 1);
	Global_30693[4] = Function_423("", "sep", Global_30633[2], Local_4.f_584, 6, 64, 1, 1, 0, 0);
	Global_30685[3] = Function_423("", "sid", Global_30633[0], Local_4.f_460, 6, 56, 0, 1, 0, 0);
	Global_30658[7] = Function_423("", "sil", Global_30628[1], Local_4.f_660, 6, 33, 1, 0, 0, 1);
	Global_30707[6] = Function_423("", "sms", Global_30633[1], Local_4.f_580, 6, 79, 0, 0, 0, 0);
	if (!IS_PS3())
	{
		Global_30658[2] = Function_423("", "sol", Global_30628[1], Local_4.f_68, 6, 28, 0, 0, 0, 1);
	}
	Global_30668[7] = Function_423("", "stl", Global_30628[2], Local_4.f_616, 6, 47, 0, 1, 1, 1);
	Global_30723[4] = Function_423("", "tnr", Global_30637[1], Local_4.f_636, 6, 88, 1, 0, 0, 1);
	Global_30723[8] = Function_423("", "tns", Global_30637[1], Local_4.f_756, 6, 92, 0, 0, 0, 0);
	Global_30640[14] = Function_423("", "tcr", Global_30628[0], Local_4.f_684, 6, 23, 0, 0, 0, 1);
	Global_30640[16] = Function_423("", "ven", Global_30628[0], Local_4.f_740, 6, 25, 0, 1, 0, 0);
	Global_30668[9] = Function_423("", "war", Global_30628[2], Local_4.f_764, 6, 49, 0, 0, 0, 0);
	Global_30717[3] = Function_423("", "ser", Global_30637[0], Local_4.f_628, 6, 96, 0, 0, 0, 1);
	Function_422();
	SET_FLOCK_DEFAULT_POPULATION_MAX_PER_CELL(1);
	SET_INDIVIDUAL_DEFAULT_POPULATION_MAX_PER_CELL(15);
	if (!Global_34165.f_44)
	{
		Global_30734 = Function_501(0, Global_30640[2], 3);
		Global_30735 = Function_501(0, Global_30658[2], 3);
		Global_30736 = Function_501(0, Global_30668[2], 3);
		Global_30737 = Function_501(0, Global_30658[0], 3);
		Global_30738 = Function_501(0, Global_30658[3], 3);
		Global_30739 = Function_501(0, Global_30679[1], 3);
		Global_30740 = Function_501(0, Global_30685[1], 3);
		Global_30741 = Function_501(0, Global_30685[2], 3);
		Function_421(Global_13172[Global_3073411].f_36);
		PRINTNL();
		Function_421(Global_13172[Global_3073611].f_36);
		PRINTNL();
		Function_421(Global_13172[Global_3073711].f_36);
		PRINTNL();
		Function_421(Global_13172[Global_3073811].f_36);
		PRINTNL();
		Function_421(Global_13172[Global_3073911].f_36);
		PRINTNL();
		Function_421(Global_13172[Global_3074011].f_36);
		PRINTNL();
		Function_421(Global_13172[Global_3074111].f_36);
		PRINTNL();
		Function_421(Global_13172[Global_3073511].f_36);
		PRINTNL();
		Function_420();
		WAIT(false);
		Function_419();
		WAIT(false);
		Function_417(0, Global_30668[0], -819,6454f, 93,80083f, 2436,405f);
		Function_417(1, Global_30685[0], -4355,349f, 30,16f, 4384,089f);
		Function_416(&(Global_29008[Global_30621[0]]), 1024);
		Function_416(&(Global_29008[Global_30621[1]]), 1024);
		Function_416(&(Global_29008[Global_30621[2]]), 1024);
		Function_416(&(Global_29008[Global_30621[3]]), 1024);
		fLocal_245 = 0.0f;
		while (!Global_3374)
		{
			WAIT(false);
		}
		if (!Global_3365)
		{
			if (!Global_34165.f_28 && !Global_3421)
			{
				Function_394(Function_415(1), 0, 1, 1, 0);
				Function_394(Function_415(2), 0, 1, 1, 0);
				Function_393(&Global_76846, 2);
				Function_393(&Global_76846, 4);
			}
		}
		else if (Global_3364)
		{
			Global_30619 = 0;
		}
		if (Global_3364 && Global_3365)
		{
			Function_392();
		}
	}
	Global_30840 = 0;
	if (Global_34165.f_44)
	{
		Function_379();
	}
	DLC_INIT_CONTENT();
	Function_378();
	Function_377();
	Function_376();
	Function_375();
	Global_30938 = 0;
	Function_374("");
	if (!Global_34165.f_44)
	{
		Function_372(33039);
		Function_371(1178687);
		Function_519(0x4218003f);
		Function_519(258048);
		Function_370(0xc400000);
		Function_369(0);
		Function_368();
		Function_367();
		SET_ALL_DOOR_LOCKS_VISIBLE(0);
		if (Global_3419)
		{
			Function_366(256);
			Function_500(8192);
			Function_500(1048576);
		}
		if (Global_3421)
		{
			Function_366(256);
			Function_500(1056768);
		}
		if (Global_3365)
		{
			if (Function_365(StackVal, StackVal, Global_30938))
			{
				bLocal_238 = false;
			}
			if (!Function_364(1, 0) || !Function_364(2, 0))
			{
				bLocal_238 = false;
			}
			if (Function_364(47, 0) && !Function_364(48, 0))
			{
				bLocal_238 = false;
			}
		}
		if (Global_3364)
		{
			if (Function_508("missionStart"))
			{
				Global_30938.f_4 = Function_506("missionStart");
				PRINTINT(StackVal);
				PRINTNL();
			}
			if (Function_508("missionStartChapter"))
			{
				Global_30938.f_8 = Function_506("missionStartChapter");
				PRINTINT(StackVal);
				PRINTNL();
			}
		}
		if (StackVal && StackVal < 4294967295 < 4294967295)
		{
			if (Function_365(StackVal, StackVal, 1))
			{
				PRINTINT(StackVal);
				PRINTSTRING("-");
				PRINTINT(StackVal);
				PRINTNL();
				bLocal_238 = false;
				Global_30938 = 1;
			}
		}
		if (Function_508("nnoIdleCam") || Global_3419)
		{
			Function_500(4096);
		}
		SET_AMBIENT_ACTOR_SPEED_SCALE_RANGE(0,8f, 1,35f);
		SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
		ENABLE_AMBIENT_SPAWNING(Function_363(1));
		switch (Global_30619)
		{
			case 0x00000001:
				LAUNCH_NEW_SCRIPT("content/Ambient/MexicanRevolution/mexrev_phase1b", 0);
				break;
			
			case 0x00000002:
				LAUNCH_NEW_SCRIPT("content/Ambient/MexicanRevolution/mexrev_phase2", 0);
				break;
			
			case 0x00000003:
				LAUNCH_NEW_SCRIPT("content/Ambient/MexicanRevolution/mexrev_phase3", 0);
				break;
		}
		if (Function_508("startAmbientWorldOff"))
		{
			Function_500(128543);
			Function_370(15);
			Function_519(256);
			Function_362(&Global_28842, 1);
		}
		if (Global_3364)
		{
			Function_359(0);
		}
	}
	else
	{
		Function_355();
		Function_354();
		Function_353();
		if (Var0.f_16)
		{
			Var0 = 4294967295;
			Var0.f_16 = 0;
			Var0.f_20 = 0;
			Var0.f_24 = 0;
			STORE_GAME_STATE(&Var0, 44, 1);
		}
		Function_366(33081);
		Function_372(22);
		SET_ALL_DOOR_LOCKS_VISIBLE(1);
		Function_371(41);
		Function_500(31254);
		Function_519(139303);
		Function_519(118808);
		Function_370(524288);
		Function_370(0xc400000);
		Function_369(0);
		Function_368();
		Function_367();
		ENABLE_AMBIENT_SPAWNING(false);
		LAUNCH_NEW_SCRIPT("multiplayer/multiplayer_update_thread", 0);
	}
	Global_30922 = 4294967295;
	Global_3389 = 1;
	UI_SET_STRING("LOCAL_PLAYER_GAMERTAG", NET_GET_LOCAL_GAMER_NAME());
	fLocal_245 = 0.0f;
	Function_351();
	ITERATE_IN_LAYOUT(Global_26118, GET_AMBIENT_LAYOUT());
	Function_346();
	Function_345();
	SET_PAUSE_SCRIPT("$/content/scripting/DesignerDefined/Pause");
	Global_63400 = MAKE_TIME_OF_DAY(5, false, false);
	Global_63401 = MAKE_TIME_OF_DAY(7, false, false);
	Global_63402 = MAKE_TIME_OF_DAY(11, false, false);
	Global_63403 = MAKE_TIME_OF_DAY(14, false, false);
	Global_63404 = MAKE_TIME_OF_DAY(18, false, false);
	Global_63405 = MAKE_TIME_OF_DAY(22, false, false);
	Global_63398 = 30.0f;
	SET_TIME_ACCELERATION(Global_63398);
	LIGHTS_SET_ON_TIME(17, 30);
	LIGHTS_SET_OFF_TIME(6, 0);
	SET_DUST_LEVEL_MID(1);
	SET_DUST_LEVEL_FAR(1);
	if (Global_3420)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(2, 12, 0, 0));
		Function_343(&Global_16524, 0);
	}
	else if (Global_3421)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(2, 12, 0, 0));
		Function_343(&Global_16524, 0);
	}
	else if (Global_34165.f_44)
	{
		if (NET_IS_SESSION_HOST() || !NET_IS_IN_SESSION())
		{
			SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(true, 7, 0, 0));
			Function_343(&Global_16524, 0);
		}
	}
	else if (Global_3364 && Global_3365)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(true, 10, 0, 0));
		Function_343(&Global_16524, 1);
		Function_342(&Global_16517, RAND_FLOAT_GAUSSIAN(0,3f, 0,15f), RAND_FLOAT_RANGE(0.0f, 360.0f));
	}
	else if (Global_3364)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(true, 7, 0, 0));
		bVar115 = false;
		bVar116 = RAND_INT_RANGE(false, 10000);
		if (bVar116 <= 250)
		{
			bVar115 = 4;
		}
		else if (bVar116 <= 500)
		{
			bVar115 = 3;
		}
		else if (bVar116 <= 3000)
		{
			bVar115 = 2;
		}
		else if (bVar116 <= 6000)
		{
			bVar115 = true;
		}
		if (Global_3365)
		{
			bVar115 = false;
		}
		Function_343(&Global_16524, bVar115);
		Function_342(&Global_16517, RAND_FLOAT_GAUSSIAN(0,3f, 0,15f), RAND_FLOAT_RANGE(0.0f, 360.0f));
	}
	else
	{
		SET_TIME_OF_DAY(Global_34165.f_52);
		Function_340();
		Function_343(&Global_16524, Global_16524);
	}
	if (Function_339(Global_34165.f_24) && !Global_34165.f_44)
	{
		Global_29005 = Global_34165.f_24;
		Function_337(Global_34165.f_24, 0);
	}
	if (Global_3365 && !Global_34165.f_44)
	{
		Function_335();
		Function_333();
		Function_331();
		Function_325();
		Function_315(1);
	}
	if (bLocal_238 && !Global_34165.f_44)
	{
		SET_AMBIENT_FORCE_WAIT_STATE(0);
		Function_306(&iLocal_242, &fLocal_245, 0, 1);
		WAIT(false);
		fLocal_245 = 0.0f;
		while (Global_30839 >= 0)
		{
			WAIT(false);
		}
		fLocal_245 = 0.0f;
		while (!IS_LAYOUTREF_VALID(Global_30616))
		{
			Function_306(&iLocal_242, &fLocal_245, 0, 1);
			WAIT(false);
		}
		fLocal_245 = 0.0f;
		while (StackVal && Function_305(DECOR_GET_INT(Global_30616, "regid")) != 2)
		{
			WAIT(false);
		}
		Function_304();
	}
	if (Global_3421)
	{
		SET_WEAPONENUM_LOCKED(4, 0);
		SET_WEAPONENUM_LOCKED(5, 0);
		SET_WEAPONENUM_LOCKED(8, 0);
		SET_WEAPONENUM_LOCKED(9, 0);
		SET_WEAPONENUM_LOCKED(16, 0);
		Function_500(1163264);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 4, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 8, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 5, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 9, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 16, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 22, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 21, 0.0f, 0, 1);
		ADD_ITEM(Function_303(3), Global_34573, 0);
		ADD_ITEM(Function_303(3), Global_34573, 0);
		ADD_ITEM(Function_303(3), Global_34573, 0);
		ADD_ITEM(Function_303(15), Global_34573, 0);
		ADD_ITEM(Function_303(19), Global_34573, 0);
		ADD_ITEM(Function_303(20), Global_34573, 0);
		Function_302();
		Function_301(200, 0);
		SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
		SET_DISABLE_DEADEYE(0, 0);
		SET_DEADEYE_MULTILOCK_ENABLE(0, true);
		SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
	}
	else if (Global_3364 && !Global_34165.f_44)
	{
		if (Global_3365)
		{
			if (Global_3381)
			{
				DELETE_WEAPON_FROM_ACTOR(Global_34573, 4);
				_ADD_AMMO_OF_TYPE(Global_34573, 7, 24.0f, 1, 0);
				GIVE_WEAPON_TO_ACTOR(Global_34573, 4, 0.0f, 0, 1);
				ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
				SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
			}
			else
			{
				ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 0, 0);
			}
			GIVE_WEAPON_TO_ACTOR(Global_34573, 22, 0.0f, 0, 1);
			Function_300();
		}
		else
		{
			GIVE_WEAPON_TO_ACTOR(Global_34573, 4, 0.0f, 0, 1);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 8, 0.0f, 0, 1);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 21, 0.0f, 0, 1);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 22, 0.0f, 0, 1);
			ADD_ITEM(Function_303(3), Global_34573, 0);
			ADD_ITEM(Function_303(3), Global_34573, 0);
			ADD_ITEM(Function_303(3), Global_34573, 0);
			ADD_ITEM(Function_303(15), Global_34573, 0);
			ADD_ITEM(Function_303(19), Global_34573, 0);
			ADD_ITEM(Function_303(20), Global_34573, 0);
			Function_302();
			Function_301(200, 0);
			ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
		}
	}
	else if (Global_3381 && !Global_34165.f_44)
	{
		if (!Global_34165.f_28)
		{
			Function_300();
		}
		_ADD_AMMO_OF_TYPE(Global_34573, 7, 24.0f, 1, 0);
		ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
	}
	if (!Global_3364 && !Global_34165.f_32)
	{
		Function_299();
	}
	else
	{
		Global_34165.f_112 = 4294967295;
	}
	if (bLocal_238)
	{
		fLocal_245 = 0.0f;
		while (!STREAMING_IS_WORLD_LOADED() || (!Function_513() && !Global_3374))
		{
			WAIT(false);
		}
	}
	Global_49308 = GET_CURRENT_GAME_TIME();
	if (Var0.f_16)
	{
		bLocal_238 = false;
		Global_3381 = 1;
		Global_6267 = Var0;
		Global_3422[Var040].f_112 = 1;
		switch (Function_298(Var0))
		{
			case 0x00000001:
				if (Var0 > 36)
				{
					LAUNCH_NEW_SCRIPT("content/Ambient/MexicanRevolution/mexrev_phase1b", 0);
				}
				Function_394(Function_501(0, 24, 1), 0, 1, 1, 0);
				break;
			
			case 0x00000002:
				LAUNCH_NEW_SCRIPT("content/Ambient/MexicanRevolution/mexrev_phase3", 0);
				Function_394(Function_501(0, 24, 1), 0, 1, 1, 0);
				Function_394(Function_501(1, 41, 1), 0, 1, 1, 0);
				break;
			
			case 0x00000003:
				LAUNCH_NEW_SCRIPT("content/Ambient/MexicanRevolution/mexrev_phase3", 0);
				Function_394(Function_501(0, 24, 1), 0, 1, 1, 0);
				Function_394(Function_501(1, 41, 1), 0, 1, 1, 0);
				Function_394(Function_501(2, 48, 1), 0, 1, 1, 0);
				break;
			
			default:
				break;
		}
	}
	else
	{
		if (Function_297(Var0) && !Var0 != 4294967295)
		{
			Global_13172[StackVal + 111].f_8 = StackVal;
			if (Var0.f_24)
			{
				Global_13172[Global_13172[StackVal11].f_12 + 111].f_12 = StackVal;
				if (!Var0.f_20)
				{
					Function_290(&Var0);
					Function_289(4294967295, 0);
					Function_288();
					Function_285(1);
					Function_284(1, 4);
				}
				Var0 = 4294967295;
				Var0.f_16 = 0;
				Var0.f_20 = 0;
				Var0.f_24 = 0;
				STORE_GAME_STATE(&Var0, 44, 1);
			}
		}
		Global_3381 = 0;
	}
	if (bLocal_238)
	{
		if (Global_34165.f_44)
		{
		}
		else
		{
			fLocal_245 = 0.0f;
			while (!Function_282())
			{
				WAIT(false);
			}
			if (Global_12976.f_164 != 0)
			{
				Function_277(Global_12976.f_164, 0, 1);
				Global_12976.f_164 = 0;
			}
			if (Global_12976.f_160 != 0)
			{
				Function_268(Global_12976.f_160, 0, 1);
				Global_12976.f_160 = 0;
			}
			if (!bLocal_249)
			{
				STREAMING_RELEASE_MAIN_POI();
				HUD_FADE_IN_NOW(2.0f, 1065353216);
				CAMERA_RESET(0);
				if (Function_267(468) > 2 && Function_364(4, 0))
				{
					Global_25986[11] = 0;
				}
			}
		}
	}
	Global_3391 = 0;
	if (Function_513())
	{
		UI_SET_STRING("Dmoney_amount", "");
	}
	else
	{
		UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_267(0));
	}
	if (!Global_34165.f_44)
	{
		Function_266(1);
		Function_264((15 - Function_265(90)));
		Function_263((15 - Function_265(90)));
		Function_262(2);
		Function_261((15 - Function_265(90)));
		Function_260((15 - Function_265(60)));
		Function_259((15 - Function_265(105)));
		Function_258(6);
		Function_257((15 - Function_265(200)));
		Function_247();
		if (Global_3364)
		{
			Function_245();
		}
	}
	Function_244();
	if (Global_3364 || !Global_34165.f_28)
	{
		Function_521(2);
		if (!Global_34165.f_44)
		{
			Function_285(1);
		}
		else
		{
			SAVE_SOFT_SAVE(2);
		}
	}
	Global_3416 = 4294967295;
	Global_3412 = 0;
	Function_243(1);
	Function_240();
	Global_3364 = 0;
	Global_3366 = 1;
	iLocal_242 = 0;
	iLocal_244 = 0;
	bVar117 = false;
	iVar118 = 0;
	Global_26281 = GET_CURRENT_GAME_TIME();
	Global_76852 = 300;
	iVar119 = 0;
	if (!IS_LAUNCH_RETAIL() && !Function_513())
	{
		Function_239("no_autosave", 0x41200000, 1, 0, 2, 1, 0);
	}
	WAIT(false);
	if (((StackVal || StackVal != 3 != 4) || Global_3381) && bLocal_238)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (Global_3421 && bLocal_238)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	SET_PLAYER_CONTROL_RUMBLE(0, 1);
	SCRIPT_DONE_LOADING();
	switch (bLocal_241)
	{
		case 0x00000000:
			PRINTSTRING("Launching soak test.");
			LAUNCH_NEW_SCRIPT("systemTest/SoakTests/soaktest", 0);
			break;
	}
	while (!IS_EXITFLAG_SET())
	{
		if (bLocal_248)
		{
			PRINTSTRING("Time for Exec:");
			PRINTINT(iLocal_244);
			PRINTSTRING(":");
			fVar120 = GET_PROFILE_TIME();
		}
		switch (bLocal_244)
		{
			case 0x00000000:
				if (Function_306(&iLocal_242, &fLocal_245, 1, 0))
				{
					iLocal_242 = 0;
					bLocal_244 = true;
				}
				iVar118++;
				bVar117 = false;
				break;
			
			case 0x00000001:
				Function_238();
				bLocal_244 = 2;
				iVar118++;
				bVar117 = false;
				break;
			
			case 0x00000002:
				if (Global_3376)
				{
					iLocal_243 = 0;
					bLocal_244 = true;
					Global_3376 = 0;
				}
				else if (Function_230(&iLocal_243))
				{
					bLocal_244 = 3;
					iLocal_243 = 0;
				}
				iVar118++;
				bVar117 = false;
				break;
			
			case 0x00000003:
				if (Function_229(1, 2) == 0)
				{
					if (Global_3380)
					{
						Global_3380 = 0;
						CLEAR_PRINTED_OBJECTIVE();
						Function_228();
					}
				}
				if (Function_229(2, 2) != 0 && Function_229(2, 1) != 0)
				{
					if (Global_3382)
					{
						CLEAR_PRINTED_OBJECTIVE();
						Global_3382 = 0;
					}
				}
				if (Function_229(4, 2) == 0)
				{
					if (Global_3384)
					{
						CLEAR_PRINTED_OBJECTIVE();
						Global_3384 = 0;
					}
				}
				if (Function_229(6, 2) == 0)
				{
					if (Global_3392)
					{
						CLEAR_PRINTED_OBJECTIVE();
						Global_3392 = 0;
					}
				}
				else
				{
					Global_3392 = 1;
				}
				if (Function_229(3, 2) == 0)
				{
					if (Global_3385)
					{
						CLEAR_PRINTED_OBJECTIVE();
						Global_3385 = 0;
					}
				}
				iVar118++;
				bVar117 = false;
				bLocal_244 = 4;
				break;
			
			case 0x00000004:
				Global_63399 = Function_227();
				if (!Global_3409)
				{
					if (Global_63399 == 32)
					{
						if (Global_63398 == 30.0f)
						{
							Global_63398 = 30.0f;
							SET_TIME_ACCELERATION(Global_63398);
							SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(0,5f);
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
								SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(0,75f);
								if (Global_29004 == 1 || Function_226())
								{
									Global_16524.f_36++;
								}
							}
						}
						else if (Global_63398 == 30.0f)
						{
							Global_63398 = 30.0f;
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
								SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(0,85f);
							}
						}
						else if (Global_63398 == 30.0f)
						{
							Global_63398 = 30.0f;
							SET_TIME_ACCELERATION(Global_63398);
							SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(1.0f);
						}
					}
					else if (Global_63398 == 30.0f)
					{
						Global_63398 = 30.0f;
						SET_TIME_ACCELERATION(Global_63398);
						SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(1.0f);
					}
				}
				iVar118++;
				bVar117 = false;
				bLocal_244 = 5;
				break;
			
			case 0x00000005:
				if (Global_3421)
				{
					Function_366(256);
					Function_500(1171968);
				}
				Function_102();
				Function_94();
				Function_84(&iLocal_246, &uLocal_247);
				Function_82();
				Function_9();
				if (((((!Global_3380 && !HUD_IS_FADED()) && !HUD_IS_FADING()) && !Global_3395) && !Global_3381) && !Global_3396)
				{
					if (Global_12976.f_164 != 0)
					{
						Function_277(Global_12976.f_164, 1, 1);
						Global_12976.f_164 = 0;
					}
					if (Global_12976.f_160 != 0)
					{
						Function_268(Global_12976.f_160, 1, 1);
						Global_12976.f_160 = 0;
					}
				}
				if (Global_30841)
				{
					PREVENT_DESPAWN_CLEAR();
					Global_30841 = 0;
				}
				if (Global_76851)
				{
					Global_76852 = (Global_76852 - 1);
					if (Function_8() >= iVar119)
					{
						Global_76852 = (Global_76852 + (Function_8() - iVar119) * 5);
						iVar119 = Function_8();
					}
				}
				bVar117 = (1000 - iVar118 * 33);
				iVar118 = 0;
				bLocal_244 = false;
				break;
		}
		if (bLocal_248)
		{
			PRINTFLOAT((GET_PROFILE_TIME() - fVar120));
			PRINTNL();
		}
		WAIT(bVar117);
	}
	Function_4(&bVar71);
	Function_3();
	if (!HUD_IS_FADED())
	{
		HUD_FADE_OUT(0,5f, 1f, 1);
	}
	Function_2();
	Function_1();
	Function_353();
	Function_354();
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

void Function_1() //Position: 0x37DE / 14302
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

void Function_2() //Position: 0x380F / 14351
{
	Function_4(&Local_4 + 4);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_3() //Position: 0x3821 / 14369
{
	ANIMAL_SPECIES_GRINGO_CLEAR_ALL();
	return;
}

void Function_4(int iParam0) //Position: 0x382A / 14378
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_5(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0x3850 / 14416
{
	if (Function_7(uParam0[iParam13], 4))
	{
		if (Function_7(uParam0[iParam13], 1))
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
			Function_6(uParam0[iParam13], 1);
			Function_6(uParam0[iParam13], 2);
			Function_6(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x397E / 14718
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_7(int iParam0, int iParam1) //Position: 0x3998 / 14744
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_8() //Position: 0x39B5 / 14773
{
	return Function_267(0);
}

void Function_9() //Position: 0x39BF / 14783
{
	int iVar0;
	
	if (!NET_ARE_UNLOCKS_READY())
	{
		return;
	}
	if (((((((((Global_63096 || Global_3384) || Global_3395) || Global_3396) || Global_3381) || !IS_ACTOR_ALIVE(Global_34573)) || HUD_IS_FADED()) || HUD_IS_FADING()) || Function_81()) || (Global_26281 + 5.0f) < GET_CURRENT_GAME_TIME())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 61)
	{
		if (!Global_26055[iVar0])
		{
			if (NET_IS_UNLOCKED(iVar0) && !Function_81())
			{
				Function_10(iVar0);
			}
		}
		iVar0++;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x3A32 / 14898
{
	bool bVar0;
	struct<4> Var1;
	
	if (!Function_80(iParam0) && NET_IS_IN_SESSION())
	{
		return;
	}
	bVar0 = true;
	switch (iParam0)
	{
		case 0x00000001:
			if (Function_79(3))
			{
				if (!Function_78(1))
				{
					if (!Function_364(2, 0))
					{
						return;
					}
					Function_77(1, 0, 0);
				}
			}
			break;
		
		case 0x00000004:
			if (Function_79(3))
			{
				if (!Function_78(2) && !Function_76(2))
				{
					Function_75(2, 0, 1, 1);
					Function_47(2);
					bVar0 = false;
				}
			}
			break;
		
		case 0x00000009:
			if (!Global_26055[iParam0])
			{
				Function_46(992, 0, 1);
				Function_45(52, 1, 0);
			}
			break;
		
		case 0x0000000A:
			SET_WEAPON_GOLD(Global_34573, 4, true);
			SET_WEAPON_GOLD(Global_34573, 8, true);
			break;
		
		case 0x0000000D:
			UI_CHEAT_SET_STATE(4, 1);
			Function_15(4);
			break;
		
		case 0x0000000E:
			UI_CHEAT_SET_STATE(25, 1);
			Function_15(4);
			break;
		
		case 0x0000000F:
			UI_CHEAT_SET_STATE(7, 1);
			Function_15(4);
			break;
		
		case 0x00000010:
			UI_CHEAT_SET_STATE(11, 1);
			Function_15(4);
			break;
		
		case 0x00000011:
			UI_CHEAT_SET_STATE(13, 1);
			Function_15(4);
			break;
		
		case 0x00000012:
			UI_CHEAT_SET_STATE(16, 1);
			Function_15(4);
			break;
		
		case 0x00000013:
			UI_CHEAT_SET_STATE(17, 1);
			Function_15(4);
			break;
		
		case 0x00000014:
			UI_CHEAT_SET_STATE(18, 1);
			Function_15(4);
			break;
		
		case 0x00000015:
			UI_CHEAT_SET_STATE(24, 1);
			Function_15(4);
			break;
		
		case 0x00000016:
			UI_CHEAT_SET_STATE(26, 1);
			Function_15(4);
			break;
		
		case 0x00000017:
			UI_CHEAT_SET_STATE(22, 1);
			Function_15(4);
			break;
		
		case 0x00000018:
			UI_CHEAT_SET_STATE(28, 1);
			Function_15(4);
			break;
		
		case 0x00000019:
			UI_CHEAT_SET_STATE(35, 1);
			Function_15(4);
			break;
		
		case 0x0000001A:
			UI_CHEAT_SET_STATE(36, 1);
			Function_15(4);
			break;
		
		case 0x0000001B:
			UI_CHEAT_SET_STATE(37, 1);
			Function_15(4);
			break;
		
		case 0x0000001C:
			UI_CHEAT_SET_STATE(38, 1);
			Function_15(4);
			break;
		
		case 0x0000001D:
			UI_CHEAT_SET_STATE(39, 1);
			Function_15(4);
			break;
		
		case 0x0000001E:
			UI_CHEAT_SET_STATE(23, 1);
			Function_15(4);
			break;
		
		case 0x00000023:
			if (Function_14(0, 0, 1, 1))
			{
				return;
			}
			if (NET_IS_IN_SESSION())
			{
				Function_12(8);
				bVar0 = false;
			}
			break;
		
		case 0x00000028:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(48))
			{
				AWARD_ACHIEVEMENT(48);
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			bVar0 = false;
			break;
		
		case 0x00000008:
			if (!Function_364(2, 0))
			{
				return;
			}
			Function_11(11);
			break;
		
		case 0x00000000:
			if (!Function_364(2, 0))
			{
				return;
			}
			Function_11(6);
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
			Function_239(&Var1, 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	Global_26055[iParam0] = 1;
	return;
}

void Function_11(int iParam0) //Position: 0x3D46 / 15686
{
	if (AWARD_AVATAR(iParam0))
	{
		if (IS_PS3())
		{
			Function_239("avunlock_help", 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

void Function_12(int iParam0) //Position: 0x3D7D / 15741
{
	Function_13(&Global_83864 + 1252, iParam0);
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x3D8F / 15759
{
	Function_515(uParam0, iParam1);
	return;
}

bool Function_14(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x3D9C / 15772
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

bool Function_15(bool bParam0) //Position: 0x3E40 / 15936
{
	if (bParam0 != 4)
	{
		if (Function_508("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				SAVE_GAME(SS_GET_STRING(2, bParam0));
			}
		}
	}
	if (bParam0 <= 4)
	{
		SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Global_3422[Global_626940] + 12);
	}
	Function_16();
	SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, bParam0));
	return 1;
}

void Function_16() //Position: 0x3E8C / 16012
{
	Function_43();
	Function_42();
	Function_42();
	Function_41();
	Function_41();
	Function_40();
	Function_40();
	Function_24();
	Function_24();
	if (!Function_513())
	{
		Function_21();
		Function_20();
		Function_19();
		Function_18();
	}
	Function_17();
	return;
}

void Function_17() //Position: 0x3EBF / 16063
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

void Function_18() //Position: 0x3FC5 / 16325
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

void Function_19() //Position: 0x3FF8 / 16376
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

void Function_20() //Position: 0x4188 / 16776
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

void Function_21() //Position: 0x433C / 17212
{
	Function_22(&Global_28260, 1, 0);
	return;
}

void Function_22(int iParam0, bool bParam1, var uParam2) //Position: 0x434A / 17226
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
	var uVar11;
	bool bVar12;
	void fVar13;
	
	bVar0 = Function_23();
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
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = uVar11;
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

bool Function_23() //Position: 0x453B / 17723
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_24() //Position: 0x4550 / 17744
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
				iVar2 = ((Function_267((50 + iVar4)) + Function_267((183 + iVar4))) + Function_267((90 + iVar4)));
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
	Function_25(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_25(int iParam0, bool bParam1, bool bParam2) //Position: 0x45EB / 17899
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
		Function_39(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_38(iParam0);
	if (bParam2)
	{
		Function_26(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_26(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x4886 / 18566
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_37(390))), 32);
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
					bVar19 = (Function_36(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_36(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_34(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_31(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_28(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_27(), &Var9);
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

bool Function_27() //Position: 0x4EB3 / 20147
{
	int iVar0;
	
	return iVar0;
}

var Function_28(int iParam0) //Position: 0x4EBB / 20155
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_29(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x4ECC / 20172
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_30("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_30("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_30("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_30(char* cParam0, char* cParam1) //Position: 0x4FC1 / 20417
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_31(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x4FDA / 20442
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_33(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_32(Function_33(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_32(int iParam0, int iParam1) //Position: 0x503F / 20543
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_33(int iParam0, bool bParam1) //Position: 0x5051 / 20561
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_34(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x5063 / 20579
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
	if (((Function_35(iParam0) != 19 || Function_35(iParam0) != 17) || Function_35(iParam0) != 10) || Function_35(iParam0) != 9)
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

int Function_35(int iParam0) //Position: 0x5193 / 20883
{
	return Global_35278[iParam020].f_48;
}

float Function_36(int iParam0) //Position: 0x51A2 / 20898
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_37(int iParam0) //Position: 0x51DB / 20955
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_38(int iParam0) //Position: 0x5218 / 21016
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

int Function_39(int iParam0, bool bParam1, bool bParam2) //Position: 0x53B2 / 21426
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

struct<8> Function_40() //Position: 0x55CC / 21964
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
		iVar2 = ((Function_267((50 + iVar3) + 15) + Function_267((183 + iVar3) + 15)) + Function_267((90 + iVar3) + 15));
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
	Function_25(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_41() //Position: 0x5655 / 22101
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
			iVar2 = ((Function_267((50 + iVar3) + 8) + Function_267((183 + iVar3) + 8)) + Function_267((90 + iVar3) + 8));
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
	Function_25(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_42() //Position: 0x56EC / 22252
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
		iVar2 = ((Function_267((50 + iVar3)) + Function_267((183 + iVar3))) + Function_267((90 + iVar3)));
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
	Function_25(179, iVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, iVar4, 8);
	return StackVal, cVar0;
}

void Function_43() //Position: 0x576B / 22379
{
	Function_44(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_25(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_44(int iParam0, bool bParam1, int iParam2) //Position: 0x5791 / 22417
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
	Function_39(iParam0, bParam1, 1);
	Function_38(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_26(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

int Function_45(bool bParam0, bool bParam1, int iParam2) //Position: 0x599B / 22939
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_303(bParam0), Function_23()) == 0)
		{
			ADD_ITEM(Function_303(bParam0), Function_23(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_303(bParam0), Function_23(), iParam2);
	return 1;
}

void Function_46(var uParam0, bool bParam1, bool bParam2) //Position: 0x59E6 / 23014
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_515(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_515(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_47(bool bParam0) //Position: 0x5A13 / 23059
{
	bool bVar0;
	int iVar1;
	
	if (Function_74(20))
	{
		Function_50(bParam0, 16, 1, 0, 1);
	}
	bVar0 = Function_501(0, Global_30640[2], 3);
	iVar1 = Function_48(bVar0);
	if (iVar1 >= 0)
	{
		Function_50(bParam0, 2, 1, 0, 1);
	}
	return;
}

int Function_48(bool bParam0) //Position: 0x5A4E / 23118
{
	if (!Function_49(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

bool Function_49(int iParam0) //Position: 0x5A68 / 23144
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_50(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x5A7F / 23167
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_73(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_79(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_72(bParam0, 2))
	{
		Function_71(456, 1, 0, 0);
		Function_70(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_239(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_69(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_70(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_14(0, 0, 1, 1))
			{
				Function_285(1);
				Function_284(1, 0);
			}
			else
			{
				Function_68();
			}
		}
		Function_63(bParam0);
		if (StackVal && !Function_476(((((!Function_81() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_476((((Function_81() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_62(Global_76846, 2))
		{
			Function_57(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_53();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_52(3, bParam1);
				break;
			
			case 0x00000005:
				Function_52(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_52(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_52(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_52(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_52(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_51(2, 24);
				break;
			
			case 0x00000003:
				Function_51(2, 25);
				break;
			
			case 0x0000000F:
				Function_51(2, 26);
				break;
			
			case 0x0000000D:
				Function_51(2, 27);
				break;
			
			case 0x0000000E:
				Function_51(2, 28);
				break;
			}
	}
}

void Function_51(int iParam0, bool bParam1) //Position: 0x5D0E / 23822
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

void Function_52(int iParam0, bool bParam1) //Position: 0x5D75 / 23925
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

void Function_53() //Position: 0x5DD4 / 24020
{
	if (Function_73(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_56(Global_28180);
			Global_28180.f_8 = Function_54(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_56(Global_28180);
			Global_28180.f_8 = Function_54(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_54(int iParam0, int iParam1) //Position: 0x5E4F / 24143
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
					if (Function_364(6, 0) || Function_364(12, 0))
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
					if (Function_74(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_364(5, 0))
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
					if (Function_74(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_74(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_74(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_74(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_364(26, 0))
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
					if (Function_74(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_74(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_74(27) && iVar18)
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
					if (Function_74(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_74(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_74(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_74(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_364(17, 0) && iVar15)
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
					if (Function_74(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_364(6, 0) && Function_74(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_74(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_364(9, 0) && Function_74(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_74(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_364(8, 0) && iVar19)
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
	if (Function_55(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_55(StackVal, StackVal, vVar3))
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
	if (!Function_55(StackVal, StackVal, vVar3))
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

bool Function_55(vector3 vParam0) //Position: 0x6A40 / 27200
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_56(int iParam0) //Position: 0x6A58 / 27224
{
	int iVar0;
	int iVar1;
	
	if (!Function_73(iParam0))
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

void Function_57(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x6AA7 / 27303
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

void Function_58(char* cParam0, int iParam1) //Position: 0x6B13 / 27411
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

bool Function_59(bool bParam0, var uParam1, int iParam2) //Position: 0x6B4A / 27466
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
				if (!Function_62(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_60(char* cParam0) //Position: 0x6BC2 / 27586
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

int Function_61(int iParam0) //Position: 0x6C63 / 27747
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_514(&iVar1, 2147483648);
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

bool Function_62(var uParam0, int iParam1) //Position: 0x6CA0 / 27808
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_63(bool bParam0) //Position: 0x6CB3 / 27827
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
			if (Function_69(bParam0, Function_67(bVar24)))
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
			if (Function_69(bParam0, Function_67(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_66(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_65(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_64(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_64(int iParam0) //Position: 0x6E63 / 28259
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_73(iParam0))
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

void Function_65(bool bParam0, bool bParam1) //Position: 0x6EBA / 28346
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

var Function_66(int iParam0) //Position: 0x6EDF / 28383
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_73(iParam0))
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

int Function_67(bool bParam0) //Position: 0x6F35 / 28469
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_68() //Position: 0x6F41 / 28481
{
	return;
}

bool Function_69(bool bParam0, int iParam1) //Position: 0x6F47 / 28487
{
	int iVar0;
	
	if (!Function_73(bParam0))
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

void Function_70(bool bParam0, int iParam1) //Position: 0x6FA6 / 28582
{
	if (!Function_73(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x6FFB / 28667
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
	Function_39(iParam0, TO_FLOAT(bParam1), 1);
	Function_38(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_26(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

bool Function_72(int iParam0, int iParam1) //Position: 0x721B / 29211
{
	int iVar0;
	
	if (!Function_73(iParam0))
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

bool Function_73(int iParam0) //Position: 0x7248 / 29256
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_74(int iParam0) //Position: 0x725E / 29278
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_75(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7273 / 29299
{
	struct<8> Var0;
	
	if (!Function_73(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_79(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_76(bParam0))
	{
		Function_71(456, 1, 0, 0);
		Function_70(bParam0, 2);
		if (bParam2)
		{
			if (!Function_14(0, 0, 1, 1))
			{
				Function_285(1);
				Function_284(1, 5);
			}
			else
			{
				Function_68();
			}
		}
		Function_63(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_81() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_81() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_239(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_62(Global_76846, 2))
		{
			Function_57(Global_34573, 2, 1, 0);
		}
	}
}

bool Function_76(int iParam0) //Position: 0x73BD / 29629
{
	if (!Function_73(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_72(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_77(bool bParam0, bool bParam1, bool bParam2) //Position: 0x740F / 29711
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_73(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_78(bParam0))
	{
		if (!Function_76(bParam0))
		{
			Function_75(bParam0, 1, 0, 0);
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
		Function_71(457, 1, 0, 0);
		Function_70(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_14(0, 0, 1, 1))
			{
				Function_285(1);
				Function_284(1, 0);
			}
			else
			{
				Function_68();
			}
		}
	}
	return;
}

bool Function_78(int iParam0) //Position: 0x75AD / 30125
{
	if (!Function_73(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_72(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_79(int iParam0) //Position: 0x75FE / 30206
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_80(int iParam0) //Position: 0x761A / 30234
{
	switch (iParam0)
	{
		case 0x00000028:
			return 1;
			break;
		
		case 0x00000023:
			return 1;
			break;
	}
	return 0;
}

bool Function_81() //Position: 0x763E / 30270
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_82() //Position: 0x766B / 30315
{
	Function_83(7);
	Function_83(8);
	Function_83(10);
	Function_83(6);
	Function_83(9);
	Function_83(11);
	return;
}

void Function_83(bool bParam0) //Position: 0x768D / 30349
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
		SET_AMMO_DROP_BIAS(bParam0, fVar0);
	}
	return;
}

void Function_84(var uParam0, bool bParam1) //Position: 0x76D0 / 30416
{
	int iVar0;
	vector3 vVar1;
	
	if (((Function_14(0, 0, 1, 1) || Function_513()) || Global_3403) || Global_3404)
	{
		if (IS_BLIP_VALID(*bParam1))
		{
			REMOVE_BLIP(*bParam1);
		}
		return;
	}
	iVar0 = Function_93(1, 0);
	if (!Function_92(iVar0) && !Global_16875)
	{
		return;
	}
	if (iVar0 == 4294967295)
	{
		vVar1 = { -2833,843f, 50,332f, 2418,003f };
	}
	else
	{
		vVar1 = { StackVal, StackVal, Global_16537[iVar021] };
	}
	if (*uParam0 != iVar0 && IS_BLIP_VALID(*bParam1))
	{
		if (Function_91(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar1) > 4.0f)
		{
			REMOVE_BLIP(*bParam1);
		}
		return;
	}
	if (IS_BLIP_VALID(*bParam1))
	{
		REMOVE_BLIP(*bParam1);
	}
	*uParam0 = iVar0;
	if (StackVal && !Function_55(StackVal, Function_91(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar1) < 4,5f, vVar1))
	{
		*bParam1 = ADD_BLIP_FOR_COORD(&vVar1, 326, 0, 2, 0);
		if (*uParam0 != 4294967295)
		{
			UNK_0x1E98AFEC(*bParam1, 1);
			Function_85(StackVal, StackVal, Global_16537[*uParam021].f_48, 16, vVar1, 63);
		}
	}
	return;
}

int Function_85(int iParam0, bool bParam1, vector3 vParam2, int iParam5) //Position: 0x77C7 / 30663
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!Function_339(iParam0))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (Function_55(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_90(bParam1);
	iVar1 = 4294967295;
	iVar3 = Function_89(StackVal, StackVal, vParam2);
	if (bParam1 == 23 && bParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal != bParam1 && Global_8723[iVar04] != iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	else
	{
		Function_88(iVar3);
		vVar7 = { StackVal, StackVal, Function_88(iVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == bParam1)
			{
				Function_88(StackVal);
				vVar4 = { StackVal, StackVal, Function_88(StackVal) };
				if (Function_87(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
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
		Global_8723[iVar14].f_4 = bParam1;
		Global_8723[iVar14].f_8 = iVar3;
		Global_8723[iVar14].f_12 = iParam5;
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_86(bParam1), 0.0f, 2, iVar2);
		if (bParam1 == 23)
		{
			SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0,5f);
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_CHANCE");
		}
		else if (bParam1 == 11)
		{
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_HORSEBREAKING");
		}
		else if (bParam1 == 24)
		{
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_CHANCE");
		}
		UNK_0xFF3DB575(Global_9724[iVar1], 1);
		SET_BLIP_PRIORITY(Global_9724[iVar1], true);
		return iVar1;
	}
	return 0;
}

int Function_86(bool bParam0) //Position: 0x79AA / 31146
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

bool Function_87(vector3 vParam0, vector3 vParam3) //Position: 0x7AE1 / 31457
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_88(int iParam0) //Position: 0x7B0E / 31502
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

int Function_89(vector3 vParam0) //Position: 0x7B65 / 31589
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

int Function_90(bool bParam0) //Position: 0x7BB3 / 31667
{
	switch (bParam0)
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

float Function_91(vector3 vParam0, vector3 vParam3) //Position: 0x7C6B / 31851
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_92(int iParam0) //Position: 0x7C88 / 31880
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_93(bool bParam0, bool bParam1) //Position: 0x7C9E / 31902
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
				fVar2 = Function_91(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_91(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_92(bVar0) && !bParam1)
	{
		bVar0 = Function_93(bParam0, 1);
	}
	return bVar0;
}

void Function_94() //Position: 0x7D65 / 32101
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if ((Function_14(0, 0, 1, 1) || Function_513()) || !Global_25986[11])
	{
		iVar0 = 0;
		while (iVar0 <= Global_16537)
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(Global_16537[iVar021].f_64))
			{
				RELEASE_SCRIPT_USE_CONTEXT(Global_16537[iVar021].f_64);
			}
			if (IS_OBJECT_VALID(Global_16537[iVar021].f_56))
			{
				DESTROY_OBJECT(Global_16537[iVar021].f_56);
			}
			if (IS_OBJECT_VALID(Global_16537[iVar021].f_60))
			{
				DESTROY_OBJECT(Global_16537[iVar021].f_60);
			}
			if (!Global_25986[11])
			{
				if (Function_305(Global_16537[iVar021].f_48))
				{
					if (IS_DOOR_VALID(Global_16537[iVar021].f_68))
					{
						bVar1 = DECOR_GET_OBJECT(Global_16537[iVar021].f_68, "roomvol");
						if (IS_OBJECT_VALID(bVar1))
						{
							if (IS_DOOR_LOCKED(Global_16537[iVar021].f_68))
							{
								if (IS_ACTOR_IN_VOLUME(Global_34573, GET_VOLUME_FROM_OBJECT(bVar1)))
								{
									Function_101(Global_16537[iVar021].f_68, 1);
									if (IS_DOOR_VALID(Global_16537[iVar021].f_68))
									{
										Function_101(Global_16537[iVar021].f_72, 1);
									}
								}
							}
							else if (!IS_ACTOR_IN_VOLUME(Global_34573, GET_VOLUME_FROM_OBJECT(bVar1)))
							{
								Function_100(Global_16537[iVar021].f_68, 1);
								if (IS_DOOR_VALID(Global_16537[iVar021].f_68))
								{
									Function_100(Global_16537[iVar021].f_72, 1);
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Global_16537)
	{
		if (Global_16537[iVar021].f_40 != 2 || Global_16537[iVar021].f_40 != 1)
		{
			if (Global_16537[iVar021].f_52 == Global_29004)
			{
				if (Function_305(Global_16537[iVar021].f_48))
				{
					if (IS_DOOR_VALID(Global_16537[iVar021].f_68))
					{
						bVar2 = DECOR_GET_OBJECT(Global_16537[iVar021].f_68, "roomvol");
						if (IS_OBJECT_VALID(bVar2))
						{
							if (IS_DOOR_LOCKED(Global_16537[iVar021].f_68))
							{
								if (IS_ACTOR_IN_VOLUME(Global_34573, GET_VOLUME_FROM_OBJECT(bVar2)))
								{
									Function_101(Global_16537[iVar021].f_68, 1);
									if (IS_DOOR_VALID(Global_16537[iVar021].f_68))
									{
										Function_101(Global_16537[iVar021].f_72, 1);
									}
								}
							}
							else if (!IS_ACTOR_IN_VOLUME(Global_34573, GET_VOLUME_FROM_OBJECT(bVar2)))
							{
								Function_100(Global_16537[iVar021].f_68, 1);
								if (IS_DOOR_VALID(Global_16537[iVar021].f_68))
								{
									Function_100(Global_16537[iVar021].f_72, 1);
								}
							}
						}
					}
					if (StackVal && (StackVal || Function_55(IS_OBJECT_VALID(Global_16537[iVar021].f_56), IS_OBJECT_VALID(Global_16537[iVar021].f_60), *(&Global_16537[iVar021] + 28))))
					{
						if (GATEWAY_UPDATE(Global_16537[iVar021].f_56))
						{
							DESTROY_OBJECT(Global_16537[iVar021].f_56);
							if (Global_16537[iVar021].f_40 == 2)
							{
								Global_16537[iVar021].f_64 = ADD_SCRIPT_USE_CONTEXT("house_purchase", true, 4, I2STR(Global_16537[iVar021].f_44), 0, 0, 0, 4294967295, 0);
							}
							else
							{
								Global_16537[iVar021].f_64 = ADD_SCRIPT_USE_CONTEXT("house_rent", true, 4, I2STR(Global_16537[iVar021].f_44), 0, 0, 0, 4294967295, 0);
							}
						}
						if (IS_OBJECT_VALID(Global_16537[iVar021].f_60))
						{
							if (GATEWAY_UPDATE(Global_16537[iVar021].f_60))
							{
								DESTROY_OBJECT(Global_16537[iVar021].f_60);
								if (Global_16537[iVar021].f_40 == 2)
								{
									Global_16537[iVar021].f_64 = ADD_SCRIPT_USE_CONTEXT("house_purchase", true, 4, I2STR(Global_16537[iVar021].f_44), 0, 0, 0, 4294967295, 0);
								}
								else
								{
									Global_16537[iVar021].f_64 = ADD_SCRIPT_USE_CONTEXT("house_rent", true, 4, I2STR(Global_16537[iVar021].f_44), 0, 0, 0, 4294967295, 0);
								}
							}
						}
					}
					else if (IS_SCRIPT_USE_CONTEXT_VALID(Global_16537[iVar021].f_64))
					{
						if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(Global_16537[iVar021].f_64))
						{
							if (Function_8() > Global_16537[iVar021].f_44)
							{
								Function_98(Global_16537[iVar021].f_44, 1);
								RELEASE_SCRIPT_USE_CONTEXT(Global_16537[iVar021].f_64);
								Function_96(iVar0);
								if (IS_OBJECT_VALID(Global_16537[iVar021].f_56))
								{
									DESTROY_OBJECT(Global_16537[iVar021].f_56);
								}
								if (IS_OBJECT_VALID(Global_16537[iVar021].f_60))
								{
									DESTROY_OBJECT(Global_16537[iVar021].f_60);
								}
							}
							else
							{
								Function_239("house_no_cash", 0x41200000, 1, 0, 2, 1, 0);
								RELEASE_SCRIPT_USE_CONTEXT(Global_16537[iVar021].f_64);
							}
						}
						else if (StackVal && (StackVal || Function_91(StackVal, StackVal, StackVal, Function_55(StackVal, Function_91(StackVal, StackVal, StackVal, StackVal, Global_34574, *(&Global_16537[iVar021] + 16)) < 3.0f, *(&Global_16537[iVar021] + 28)), Global_34574, *(&Global_16537[iVar021] + 28)) < 3.0f))
						{
							RELEASE_SCRIPT_USE_CONTEXT(Global_16537[iVar021].f_64);
						}
					}
					else
					{
						bVar3 = Function_95();
						if (!IS_OBJECT_VALID(Global_16537[iVar021].f_56))
						{
							Global_16537[iVar021].f_56 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bVar3, Function_27(), *(&Global_16537[iVar021] + 16), 0.0f, 0.0f, 0.0f, 2,5f, 1,5f, 2,5f, 3, Function_23(), 3, 4294967295, 0, 1, 1);
							if (Global_16537[iVar021].f_40 == 2)
							{
								ADD_BLIP_FOR_OBJECT(Global_16537[iVar021].f_56, 420, 0f, 2, 0);
								UNK_0x1E98AFEC(GET_BLIP_ON_OBJECT(Global_16537[iVar021].f_56), 1);
								SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_OBJECT(Global_16537[iVar021].f_56), 1,25f);
								Function_85(StackVal, StackVal, Global_16537[iVar021].f_48, 17, Global_16537[iVar021], 63);
							}
							else
							{
								ADD_BLIP_FOR_OBJECT(Global_16537[iVar021].f_56, 421, 0f, 2, 0);
								UNK_0x1E98AFEC(GET_BLIP_ON_OBJECT(Global_16537[iVar021].f_56), 1);
								Function_85(StackVal, StackVal, Global_16537[iVar021].f_48, 18, Global_16537[iVar021], 63);
								SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_OBJECT(Global_16537[iVar021].f_56), 1,25f);
							}
						}
						if (!Function_55(StackVal, StackVal, *(&Global_16537[iVar021] + 28)))
						{
							if (!IS_OBJECT_VALID(Global_16537[iVar021].f_60))
							{
								Global_16537[iVar021].f_60 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bVar3, Function_27(), *(&Global_16537[iVar021] + 28), 0.0f, 0.0f, 0.0f, 2,5f, 1,5f, 2,5f, 3, Function_23(), 3, 4294967295, 0, 1, 1);
							}
						}
					}
				}
				else
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(Global_16537[iVar021].f_64))
					{
						RELEASE_SCRIPT_USE_CONTEXT(Global_16537[iVar021].f_64);
					}
					if (IS_OBJECT_VALID(Global_16537[iVar021].f_56))
					{
						DESTROY_OBJECT(Global_16537[iVar021].f_56);
					}
					if (IS_OBJECT_VALID(Global_16537[iVar021].f_60))
					{
						DESTROY_OBJECT(Global_16537[iVar021].f_60);
					}
				}
			}
			else
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(Global_16537[iVar021].f_64))
				{
					RELEASE_SCRIPT_USE_CONTEXT(Global_16537[iVar021].f_64);
				}
				if (IS_OBJECT_VALID(Global_16537[iVar021].f_56))
				{
					DESTROY_OBJECT(Global_16537[iVar021].f_56);
				}
				if (IS_OBJECT_VALID(Global_16537[iVar021].f_60))
				{
					DESTROY_OBJECT(Global_16537[iVar021].f_60);
				}
			}
		}
		else
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(Global_16537[iVar021].f_64))
			{
				RELEASE_SCRIPT_USE_CONTEXT(Global_16537[iVar021].f_64);
			}
			if (IS_OBJECT_VALID(Global_16537[iVar021].f_56))
			{
				DESTROY_OBJECT(Global_16537[iVar021].f_56);
			}
			if (IS_OBJECT_VALID(Global_16537[iVar021].f_60))
			{
				DESTROY_OBJECT(Global_16537[iVar021].f_60);
			}
		}
		iVar0++;
	}
	return;
}

var Function_95() //Position: 0x8452 / 33874
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("PlayerLayout");
		if (!IS_LAYOUTREF_VALID(bVar0))
		{
			LOG_WARNING("I created an INVALID PlayerLayout!!!");
		}
	}
	return bVar0;
}

void Function_96(int iParam0) //Position: 0x84BE / 33982
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_92(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_101(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_101(Global_16537[iParam021].f_72, 0);
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
			Function_71(468, 1, 0, 0);
			Function_51(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_239("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_97(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_75(14, 1, 0, 0);
				Function_50(14, 1, 0, 0, 0);
			}
			if (!Function_14(0, 0, 1, 1))
			{
				Function_285(1);
				Function_284(1, 6);
			}
			else
			{
				Function_68();
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
			Function_239("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_71(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_51(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_97(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x876A / 34666
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
				if (Function_87(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

int Function_98(bool bParam0, bool bParam1) //Position: 0x8870 / 34928
{
	bool bVar0;
	
	bVar0 = Function_267(0);
	if ((Function_267(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_99(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_267(0));
	return 1;
}

int Function_99(int iParam0, bool bParam1, int iParam2) //Position: 0x8900 / 35072
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
	Function_38(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_26(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

void Function_100(bool bParam0, bool bParam1) //Position: 0x8AFB / 35579
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

void Function_101(bool bParam0, bool bParam1) //Position: 0x8B4F / 35663
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

void Function_102() //Position: 0x8BA0 / 35744
{
	bool bVar0;
	
	bVar0 = GET_LATEST_CONSOLE_COMMAND();
	if (!IS_STRING_VALID(bVar0))
	{
		return;
	}
	if (Function_225(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_223(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_222(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_221(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_220(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_218(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_215(bVar0))
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
	if (Function_209(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_207(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_202(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_201(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_200(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_194(bVar0))
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
	if (Function_178(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_176(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
	}
	if (Function_175(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_172(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_171(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_170(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_168(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_164(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_163(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_146(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_145(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_144(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_143(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_142(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_141(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_140(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_139(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_137(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_136(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_135(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_134(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_133(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_132(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_131(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_129(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_126(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_124(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_123(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_122(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_121(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_120(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_114(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_113(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_112(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_106(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_105(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_104(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_103(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	return;
}

bool Function_103(bool bParam0) //Position: 0x8E6C / 36460
{
	if (STRING_CONTAINS_STRING(bParam0, "playermeds"))
	{
		Function_45(3, 0, 1);
		return 1;
	}
	return 0;
}

bool Function_104(bool bParam0) //Position: 0x8E91 / 36497
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

bool Function_105(bool bParam0) //Position: 0x8F08 / 36616
{
	if (STRING_CONTAINS_STRING(bParam0, "makeswim"))
	{
		DECOR_SET_BOOL(Global_34573, "swimming", true);
		return 1;
	}
	return 0;
}

bool Function_106(bool bParam0) //Position: 0x8F37 / 36663
{
	if (STRING_CONTAINS_STRING(bParam0, "regions_reset"))
	{
		Function_107(1, 0, 1);
		return 1;
	}
	return 0;
}

void Function_107(var uParam0, bool bParam1, int iParam2) //Position: 0x8F5E / 36702
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
		if (Function_339(Global_29006))
		{
			Function_111(&(Global_29008[Global_29006]), 131072);
			Function_416(&(Global_29008[Global_29006]), 2097152);
			Function_109(Global_29006);
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
				if (Function_108(&(Global_29008[iVar0]), 4) || Function_108(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_416(&(Global_29008[iVar0]), 2097155);
					Function_111(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_513())
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

bool Function_108(var uParam0, int iParam1) //Position: 0x9069 / 36969
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_109(int iParam0) //Position: 0x9085 / 36997
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_110())
			{
				return;
			}
		}
		if (!Function_108(&(Global_29008[iParam0]), 2048))
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

bool Function_110() //Position: 0x9104 / 37124
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_108(&(Global_29008[iVar0]), 4) || Function_108(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_111(var uParam0, int iParam1) //Position: 0x9161 / 37217
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_112(bool bParam0) //Position: 0x9170 / 37232
{
	if (STRING_CONTAINS_STRING(bParam0, "stand_hostage"))
	{
		REQUEST_ANIM_SET("stand_hostage", 0);
		REQUEST_ACTION_TREE("custom/stand_hostage");
		while (!HAS_ANIM_SET_LOADED("stand_hostage") || !HAS_ACTION_TREE_LOADED("custom/stand_hostage"))
		{
			WAIT(false);
		}
		SET_ANIM_SET_FOR_ACTOR(Global_34573, "stand_hostage", 0);
		SET_ACTION_NODE_FOR_ACTOR(Global_34573, "stand_hostage/walk_pose");
		SET_REACT_NODE_FOR_ACTOR(Global_34573, "stand_hostage/injury/");
		return 1;
	}
	return 0;
}

bool Function_113(bool bParam0) //Position: 0x9252 / 37458
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

bool Function_114(bool bParam0) //Position: 0x92FF / 37631
{
	bool bVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "addnotor"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = STRING_TO_FLOAT(bVar0);
			Function_115(3, bVar1);
		}
		return 1;
	}
	return 0;
}

int Function_115(int iParam0, bool bParam1) //Position: 0x933C / 37692
{
	bool bVar0;
	int iVar1;
	
	Function_44(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("STAT_INCREASE: fIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	iVar1 = Function_119(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + bParam1);
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_116();
	Global_49199[iVar1] = bParam1;
	strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 0;
	return 1;
}

int Function_116() //Position: 0x94C8 / 38088
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
	Function_117();
	return 0;
}

void Function_117() //Position: 0x9567 / 38247
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
		Function_118(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_118(int iParam0) //Position: 0x9616 / 38422
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

var Function_119(int iParam0, int iParam1) //Position: 0x9674 / 38516
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

bool Function_120(bool bParam0) //Position: 0x96B5 / 38581
{
	bool bVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "addhonor"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = STRING_TO_FLOAT(bVar0);
			Function_115(1, bVar1);
		}
		return 1;
	}
	return 0;
}

bool Function_121(bool bParam0) //Position: 0x96EC / 38636
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

bool Function_122(bool bParam0) //Position: 0x973E / 38718
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
					Function_394(Function_501(0, 1, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "FORT"))
				{
					Function_394(Function_501(0, 24, 1), 0, 1, 1, 0);
					Function_394(Function_501(1, 25, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "GRAVE"))
				{
					Function_394(Function_501(0, 12, 1), 0, 1, 1, 0);
					Function_394(Function_501(0, 13, 1), 0, 1, 1, 0);
					Function_394(Function_501(0, 14, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MARSHAL"))
				{
					Function_394(Function_501(0, 8, 1), 0, 1, 1, 0);
					Function_394(Function_501(0, 9, 1), 0, 1, 1, 0);
					Function_394(Function_501(0, 23, 1), 0, 1, 1, 0);
					Function_394(Function_501(0, 21, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MERCHANT"))
				{
					Function_394(Function_501(0, 10, 1), 0, 1, 1, 0);
					Function_394(Function_501(0, 11, 1), 0, 1, 1, 0);
					Function_394(Function_501(0, 17, 1), 0, 1, 1, 0);
					Function_394(Function_501(0, 15, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "OUTLAW"))
				{
					Function_394(Function_501(0, 18, 1), 0, 1, 1, 0);
					Function_394(Function_501(0, 19, 1), 0, 1, 1, 0);
					Function_394(Function_501(0, 20, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "RANCH"))
				{
					Function_394(Function_501(0, 2, 1), 0, 1, 1, 0);
					Function_394(Function_501(0, 3, 1), 0, 1, 1, 0);
					Function_394(Function_501(0, 22, 1), 0, 1, 1, 0);
					Function_394(Function_501(0, 6, 1), 0, 1, 1, 0);
					Function_394(Function_501(0, 5, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "GUN"))
				{
					Function_394(Function_501(1, 30, 1), 0, 1, 1, 0);
					Function_394(Function_501(1, 33, 1), 0, 1, 1, 0);
					Function_394(Function_501(1, 32, 1), 0, 1, 1, 0);
					Function_394(Function_501(1, 31, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MEXGIRL"))
				{
					Function_394(Function_501(1, 34, 1), 0, 1, 1, 0);
					Function_394(Function_501(1, 35, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MEXARMY"))
				{
					Function_394(Function_501(1, 27, 1), 0, 1, 1, 0);
					Function_394(Function_501(1, 26, 1), 0, 1, 1, 0);
					Function_394(Function_501(1, 28, 1), 0, 1, 1, 0);
					Function_394(Function_501(1, 29, 1), 0, 1, 1, 0);
					Function_394(Function_501(1, 36, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "REBEL"))
				{
					Function_394(Function_501(1, 39, 1), 0, 1, 1, 0);
					Function_394(Function_501(1, 37, 1), 0, 1, 1, 0);
					Function_394(Function_501(1, 38, 1), 0, 1, 1, 0);
					Function_394(Function_501(1, 41, 1), 0, 1, 1, 0);
					Function_394(Function_501(1, 40, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "ANTHRO"))
				{
					Function_394(Function_501(2, 45, 1), 0, 1, 1, 0);
					Function_394(Function_501(2, 46, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "FBI"))
				{
					Function_394(Function_501(2, 43, 1), 0, 1, 1, 0);
					Function_394(Function_501(2, 47, 1), 0, 1, 1, 0);
					Function_394(Function_501(2, 48, 1), 0, 1, 1, 0);
					Function_394(Function_501(2, 42, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "NATIVE"))
				{
					Function_394(Function_501(2, 44, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "HOME"))
				{
					Function_394(Function_501(3, 49, 1), 0, 1, 1, 0);
					Function_394(Function_501(3, 55, 1), 0, 1, 1, 0);
					Function_394(Function_501(3, 56, 1), 0, 1, 1, 0);
					Function_394(Function_501(3, 52, 1), 0, 1, 1, 0);
					Function_394(Function_501(3, 53, 1), 0, 1, 1, 0);
					Function_394(Function_501(3, 54, 1), 0, 1, 1, 0);
					Function_394(Function_501(3, 50, 1), 0, 1, 1, 0);
					Function_394(Function_501(3, 51, 1), 0, 1, 1, 0);
					Function_394(Function_501(3, 57, 1), 0, 1, 1, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_123(bool bParam0) //Position: 0x9BD6 / 39894
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

bool Function_124(bool bParam0) //Position: 0x9E4A / 40522
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
					Function_125();
					SAVE_SOFT_SAVE(0);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 1 (index 0)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE2"))
				{
					Function_125();
					SAVE_SOFT_SAVE(1);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 2 (index 1)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRINGS_ARE_EQUAL(&cVar1, "MP"))
				{
					Function_284(0, 4294967295);
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
		Function_125();
		if (Function_15(bVar0))
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

void Function_125() //Position: 0xA03D / 41021
{
	struct<5> Var0;
	
	if (Function_513())
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
	if (Function_339(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_126(bool bParam0) //Position: 0xA0D0 / 41168
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
					Function_128();
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
		Function_127(bVar0);
		return 1;
	}
	return 0;
}

int Function_127(bool bParam0) //Position: 0xA1EA / 41450
{
	if (bParam0 != 4)
	{
		if (Function_508("xmlsave"))
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

var Function_128() //Position: 0xA22D / 41517
{
	NET_LOG(true, "SaveLoad", "Multiplayer Load Called", 0, 0, false, 0);
	return SAVE_MANAGER_HARD_LOAD(SS_GET_STRING(3, 5));
}

bool Function_129(int iParam0) //Position: 0xA268 / 41576
{
	char* cVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	var uVar18;
	bool bVar21;
	char* cVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	vector3 vVar26;
	vector3 vVar29;
	
	iParam0 = iParam0;
	cVar0 = GET_CONSOLE_COMMAND_TOKEN(0);
	if (Function_130(cVar0, "streamanddropactorlineup"))
	{
		iVar2 = (4294967295 * (GET_NUM_CONSOLE_COMMAND_TOKENS() - 1));
		GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &vVar9);
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar12);
		VSCALE(&vVar9, -7.0f);
		vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar12, StackVal) };
		iVar1 = 1;
		while (iVar1 < (GET_NUM_CONSOLE_COMMAND_TOKENS() - 1))
		{
			cVar22 = GET_CONSOLE_COMMAND_TOKEN(iVar1);
			bVar23 = GET_ACTORENUM_FROM_STRING(cVar22);
			bVar24 = bVar23;
			if (bVar24 == 4294967295)
			{
				LOG_ERROR("Invalid actor enum given to streamanddropactorlineup");
				return 1;
			}
			STREAMING_REQUEST_ACTOR(bVar24, true, false);
			while (!STREAMING_IS_ACTOR_LOADED(bVar24, 4294967295))
			{
				WAIT(false);
			}
			bVar25 = GET_PLAYER_ACTOR(0);
			GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar25), &Var3);
			GET_POSITION(bVar25, &uVar6);
			vVar26 = { IntToFloat((iVar2 + (2 * (iVar1 - 1)))), 0.0f, 0.0f };
			vVar29 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar26, vVar12, StackVal) };
			FIND_GROUND_INTERSECTION(&vVar29, 80.0f, &vVar15, &uVar18);
			bVar21 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_GC_LAYOUT(), Function_27(), bVar23, vVar15, (0.0f + 180.0f), 0.0f);
			TASK_STAND_STILL(bVar21, -1.0f, 0, 0);
			STREAMING_EVICT_ACTOR(bVar24, 4294967295);
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_130(char* cParam0, char* cParam1) //Position: 0xA3BF / 41919
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

bool Function_131(char* cParam0) //Position: 0xA3EA / 41962
{
	char* cVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<5> Var4;
	vector3 vVar10;
	vector3 vVar13;
	var uVar16;
	bool bVar19;
	
	cVar0 = GET_CONSOLE_COMMAND_TOKEN(0);
	if (Function_130(cVar0, "streamanddropactor"))
	{
		cParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		bVar1 = GET_ACTORENUM_FROM_STRING(cParam0);
		bVar2 = bVar1;
		if (bVar2 == 4294967295)
		{
			LOG_ERROR("Invalid actor enum given to streamanddropactor");
			return 1;
		}
		STREAMING_REQUEST_ACTOR(bVar2, true, false);
		while (!STREAMING_IS_ACTOR_LOADED(bVar2, 4294967295))
		{
			WAIT(false);
		}
		bVar3 = GET_PLAYER_ACTOR(0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar3), &Var4);
		GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &vVar7);
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar10);
		VSCALE(&vVar7, -7.0f);
		vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar7, vVar10, StackVal) };
		FIND_GROUND_INTERSECTION(&vVar10, 80.0f, &vVar13, &uVar16);
		bVar19 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_GC_LAYOUT(), Function_27(), bVar1, vVar13, (0.0f + 180.0f), 0.0f);
		TASK_STAND_STILL(bVar19, -1.0f, 0, 0);
		STREAMING_EVICT_ACTOR(bVar2, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_132(bool bParam0) //Position: 0xA4ED / 42221
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "suicide"))
	{
		bVar0 = Function_23();
		if (IS_ACTOR_VALID(bVar0))
		{
			KILL_ACTOR(bVar0);
		}
		return 1;
	}
	return 0;
}

bool Function_133(bool bParam0) //Position: 0xA51A / 42266
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

bool Function_134(bool bParam0) //Position: 0xA564 / 42340
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

bool Function_135(bool bParam0) //Position: 0xA597 / 42391
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

bool Function_136(bool bParam0) //Position: 0xA652 / 42578
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

bool Function_137(bool bParam0) //Position: 0xA6B6 / 42678
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
		Function_138();
		CREATE_GRINGO_IN_LAYOUT(bVar10, Function_27(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Door", vVar3, Function_138());
		return 1;
	}
	return 0;
}

vector3 Function_138() //Position: 0xA76D / 42861
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_139(bool bParam0) //Position: 0xA776 / 42870
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
		bVar11 = CREATE_PROP_IN_LAYOUT(bVar10, Function_27(), "$/fragments/p_gen_footlocker01x", vVar3, 0.0f, 0.0f, 0.0f, 1);
		DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar11, "stand_open_chest"));
		Function_138();
		CREATE_GRINGO_ON_OBJECT(bVar11, Function_27(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Footlocker", -0,3f, 0,1f, -0,3f, Function_138());
		return 1;
	}
	return 0;
}

bool Function_140(bool bParam0) //Position: 0xA88F / 43151
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
		bVar12 = CREATE_GRINGO_IN_LAYOUT(bVar11, Function_27(), "$/content/scripting/gringo/SimpleGringo/mex_gutRabbit_link", vVar3, 0.0f, 0.0f, 0.0f);
		bVar9 = CREATE_ACTOR_IN_LAYOUT(bVar11, Function_27(), 1078, vVar3, 0.0f, 0.0f, 0.0f);
		SNAP_ACTOR_TO_GRINGO(bVar9, bVar12, "UseCase1", true, 0, 0);
		if (!IS_ACTOR_VALID(bVar9))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

bool Function_141(bool bParam0) //Position: 0xA98A / 43402
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "bullriding"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_bullriding", &uVar0, 10, 0);
		return 1;
	}
	return 0;
}

bool Function_142(bool bParam0) //Position: 0xA9DE / 43486
{
	char* cVar0[32];
	char* cVar8[24];
	
	if (STRING_CONTAINS_STRING(bParam0, "playsong"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 32);
			strcpy(&cVar8, GET_CONSOLE_COMMAND_TOKEN(2), 24);
			AUDIO_MUSIC_FORCE_TRACK(&cVar0, &cVar8, 0, 4294967295, 4294967295, 3212836864, 0);
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

bool Function_143(bool bParam0) //Position: 0xAA88 / 43656
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

bool Function_144(bool bParam0) //Position: 0xAAFD / 43773
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

bool Function_145(bool bParam0) //Position: 0xABE2 / 44002
{
	char* cVar0[64];
	bool bVar16;
	bool bVar17;
	int iVar18;
	char* cVar19[64];
	bool bVar35;
	int iVar36;
	bool bVar37;
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
						bVar37 = STRING_TO_FLOAT(bVar16);
						bVar37 = (bVar37 * -1.0f);
						if (bVar37 < 0.0f)
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar54, bVar37, 0, 1);
							PRINTSTRING(" - x");
							PRINTFLOAT(bVar37);
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
					stradd(&cVar55, Function_303(bVar17), 64);
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

bool Function_146(bool bParam0) //Position: 0xAFA7 / 44967
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
	bool bVar69;
	bool bVar70;
	bool bVar71;
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
						GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), bVar68, false, 1, 1);
						if (STRING_CONTAINS_STRING(bParam0, "givewna"))
						{
							bVar69 = GET_AMMOENUM_FOR_WEAPONENUM(bVar68);
							if (bVar69 != 4294967295)
							{
								PRINTSTRING("Being nice and giving the player ");
								PRINTSTRING(GET_AMMO_ENUM_STRING_FROM_ENUM(bVar69));
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
				bVar71 = 4294967295;
				bVar17 = false;
				while (bVar17 < iVar18)
				{
					strcpy(&cVar36, "AMMO_", 64);
					stradd(&cVar36, GET_AMMO_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar36);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar36))
					{
						bVar71 = bVar17;
						PRINTSTRING("Giving the player ");
						PRINTSTRING(GET_AMMO_ENUM_STRING_FROM_ENUM(bVar71));
						bVar70 = STRING_TO_FLOAT(bVar16);
						if (bVar70 < 0.0f)
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar71, bVar70, 0, 1);
							PRINTSTRING(" - x");
							PRINTFLOAT(bVar70);
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
					stradd(&cVar52, Function_303(bVar17), 64);
					if (STRINGS_ARE_EQUAL(&cVar52, &cVar0))
					{
						bVar72 = bVar17;
						PRINTSTRING("Giving player ");
						PRINTSTRING(&cVar52);
						PRINTSTRING(" - x");
						if (bVar72 == 13)
						{
							Function_147(&Global_26303, Function_161(), 4294967294, 0, 0, 1);
						}
						bVar73 = STRING_TO_INT(bVar16);
						if (bVar73 >= 0)
						{
							iVar74 = 1;
							while (iVar74 < bVar73)
							{
								ADD_ITEM(Function_303(bVar72), GET_PLAYER_ACTOR(0), 1);
								iVar74++;
							}
							PRINTINT(bVar73);
						}
						else
						{
							ADD_ITEM(Function_303(bVar72), GET_PLAYER_ACTOR(0), 1);
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
					stradd(&cVar52, Function_303(bVar17), 64);
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
						GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), bVar68, false, 1, 1);
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
					ADD_ITEM(Function_303(bVar17), GET_PLAYER_ACTOR(0), 1);
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
						Function_301(ABS(bVar75), 1);
					}
					else
					{
						Function_98(ABS(bVar75), 1);
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

int Function_147(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xB653 / 46675
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[45];
	int iVar50[45];
	struct<33> Var96;
	
	iVar0 = 0;
	if (Function_160())
	{
		return 0;
	}
	uParam0->f_16 = Function_159(iParam1);
	if (iParam3 == 0)
	{
		iParam3 = 0;
	}
	if (iParam1 == 4294967295)
	{
		iParam1 = Function_161();
	}
	if (iParam4 > 0 || iParam4 < 8)
	{
		iParam4 = 0;
	}
	Global_26303.f_12 = iParam1;
	iVar1 = 0;
	while (iVar1 < (45 - 1))
	{
		if (Function_158(&Var96, iVar1) == 1)
		{
			if (Function_156(Var96.f_24) == Global_30621[Global_29004])
			{
				if (Var96.f_32 == iParam3)
				{
					if (((iParam1 != 4294967295 || iParam1 >= Var96.f_12) || (iParam1 != 0 && Var96.f_12 != 3)) || (iParam1 != 0 && Var96.f_12 != 4))
					{
						if (iParam4 != 0 || iParam4 != Function_155(Var96.f_20))
						{
							iVar4[iVar2] = iVar1;
							iVar2++;
							if (iParam5 == 1)
							{
								if (!Function_154(iVar1))
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
		if (Function_158(uParam0, iVar1))
		{
			PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY found actor");
			PRINTSTRING("With ActorEnum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(uParam0->f_20));
			PRINTNL();
			uParam0->f_24 = Function_148(uParam0, iParam4, 80, 20000, uParam0->f_12);
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

var Function_148(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB8BD / 47293
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0->f_24;
	uParam3 = uParam3;
	uParam2 = uParam2;
	if (StackVal || uParam0->f_24 != 4294967295 != 1)
	{
		uVar1 = Function_149(uVar0, 80.0f, 20000.0f, uParam1, 1, uParam4);
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

var Function_149(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0xB948 / 47432
{
	int iVar0;
	int iVar1[146];
	bool bVar148[146];
	int iVar295;
	vector3 vVar296;
	vector3 vVar299;
	bool bVar302;
	bool bVar303;
	bool bVar304[146];
	bool bVar451[146];
	bool bVar598;
	int iVar599;
	int iVar600;
	bool bVar601;
	bool bVar602;
	int iVar603;
	struct<8> Var604;
	
	iVar0 = 4294967295;
	bVar303 = 1,001638E+07.0f;
	bVar601 = false;
	bVar602 = false;
	iVar603 = 0;
	bVar598 = false;
	while (bVar598 < 145)
	{
		iVar1[bVar598] = 4294967295;
		bVar148[bVar598] = 4294967295;
		bVar598++;
	}
	if (!Function_339(iParam0))
	{
		iParam0 = Global_29005;
	}
	iVar295 = Function_156(iParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar299);
	bVar598 = false;
	while (bVar598 < 145)
	{
		Function_153(StackVal);
		vVar296 = { StackVal, StackVal, Function_153(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		if (iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(StackVal) && (iVar295 != Function_156(Global_29155[bVar59810]) || iParam0 != 4294967295)) != 1) && Function_108(&(Global_29008[bVar598]), 8192)) && bVar598 == 0)
		{
			if (bVar598 == 146)
			{
				LOG_ERROR("The bountyhunter region count is screwy. Tell Ben.");
				return 4294967294;
			}
			if (bVar302 > bVar303)
			{
				bVar303 = bVar302;
				iVar600 = bVar598;
			}
			if (bVar302 < fParam1 && bVar302 > fParam2)
			{
				iVar1[bVar601] = bVar598;
				bVar304[bVar601] = bVar302;
				bVar601++;
				if (Function_48(Function_501(bVar598, 0, 2)) == 0)
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is NOT FINISHED.");
					PRINTNL();
					bVar148[bVar602] = bVar598;
					bVar451[bVar602] = bVar302;
					bVar602++;
				}
				else
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is FINISHED. ");
					PRINTNL();
				}
			}
		}
		if (bVar601 == iVar1)
		{
			bVar598 = 146;
			LOG_ERROR("Reached regCount max? Tell Ben.");
		}
		bVar598++;
	}
	if (iParam5 != 4294967295)
	{
		Function_152(&iVar1, &bVar304, bVar601);
		Function_152(&bVar148, &bVar451, bVar602);
	}
	if (bVar602 < 0 && iParam4 != 1)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_33(3, bVar602);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_33(5, bVar602);
				break;
			
			case 0x00000004:
				iVar603 = Function_33(7, bVar602);
				break;
			
			case 0x00000005:
				iVar603 = Function_33(10, bVar602);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_33(5, bVar602);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = bVar148[iVar599];
		if (Function_339(iVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_151();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_150(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_153(StackVal);
		vVar296 = { StackVal, StackVal, Function_153(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(bVar302);
		PRINTNL();
	}
	else if (bVar601 >= 0)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_33(3, bVar601);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_33(5, bVar601);
				break;
			
			case 0x00000004:
				iVar603 = Function_33(7, bVar601);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar603 = Function_33(10, bVar601);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_33(5, bVar601);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = iVar1[iVar599];
		if (Function_339(iVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_151();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_150(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_153(StackVal);
		vVar296 = { StackVal, StackVal, Function_153(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(bVar302);
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

struct<32> Function_150(int iParam0) //Position: 0xBFF1 / 49137
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_339(iParam0))
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

int Function_151() //Position: 0xC0B8 / 49336
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

void Function_152(bool bParam0, bool bParam1, int iParam2) //Position: 0xC0E6 / 49382
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = 1;
	while (iVar0 < (iParam2 - 1))
	{
		fVar3 = (*bParam1)[iVar0];
		uVar2 = (*bParam0)[iVar0];
		iVar1 = (iVar0 - 1);
		iVar4 = 0;
		while (iVar4 == 0)
		{
			if ((*bParam1)[iVar1] < fVar3)
			{
				(*bParam1)[iVar1 + 1] = (*bParam1)[iVar1];
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
		(*bParam1)[iVar1 + 1] = fVar3;
		iVar0++;
	}
	return;
}

vector3 Function_153(bool bParam0) //Position: 0xC174 / 49524
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_154(bool bParam0) //Position: 0xC185 / 49541
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = true;
	if (bParam0 <= 32)
	{
		bVar1 = SHIFT_LEFT(bVar0, bParam0);
		if ((Global_26303 && bVar1) >= 0)
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
		bVar1 = SHIFT_LEFT(bVar0, (bParam0 - 32));
		if ((StackVal && bVar1) >= 0)
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

int Function_155(bool bParam0) //Position: 0xC1D7 / 49623
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(bParam0);
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

int Function_156(int iParam0) //Position: 0xC286 / 49798
{
	return Function_157(iParam0);
}

int Function_157(int iParam0) //Position: 0xC291 / 49809
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_339(iParam0))
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

bool Function_158(var uParam0, int iParam1) //Position: 0xC2E9 / 49897
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

var Function_159(int iParam0) //Position: 0xCA5C / 51804
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

bool Function_160() //Position: 0xCB2A / 52010
{
	return Function_476(StackVal, 1);
}

int Function_161() //Position: 0xCB39 / 52025
{
	int iVar0;
	
	iVar0 = Function_162(0);
	return iVar0;
}

var Function_162(int iParam0) //Position: 0xCB47 / 52039
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = (Function_267(358) + Function_267(359));
	if (iParam0 == 1)
	{
		iVar2 = Function_33(iVar1, 7);
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

bool Function_163(bool bParam0) //Position: 0xCBCB / 52171
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "horsebreaking"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_HorseBreaking", &uVar0, 10, 0);
		return 1;
	}
	return 0;
}

bool Function_164(bool bParam0) //Position: 0xCC25 / 52261
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
		bVar15 = Function_165(StackVal, StackVal, StackVal, bVar18, Function_27(), 1118, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar17));
		bVar16 = Function_165(StackVal, StackVal, StackVal, bVar18, Function_27(), 1087, vVar12, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar17));
		if (!IS_ACTOR_VALID(bVar15) || !IS_ACTOR_VALID(bVar16))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

var Function_165(bool bParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, bool bParam9) //Position: 0xCD08 / 52488
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	vVar0 = { StackVal, StackVal, vParam3 };
	vVar3 = { StackVal, StackVal, vParam6 };
	Function_166(bParam9, 0, &vVar0, &vVar3);
	bVar6 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vVar0, vVar3);
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bVar6), 50.0f, false, 1092616192);
	return bVar6;
}

void Function_166(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xCD53 / 52563
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_167(&vVar0, uParam2))
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

bool Function_167(int iParam0, int iParam1) //Position: 0xCE7B / 52859
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_55(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0,01f);
	iParam0->f_8 = (StackVal + 0,01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_55(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_168(bool bParam0) //Position: 0xCEE6 / 52966
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	
	if (STRING_CONTAINS_STRING(bParam0, "nbattleset"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		REQUEST_ASSET(bParam0, 7);
		bVar0 = GET_ASSET_ID(bParam0, 7);
		STREAMING_REQUEST_PROPSET(bVar0);
		while (!STREAMING_IS_PROPSET_LOADED(bVar0))
		{
			WAIT(false);
		}
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar1);
		GET_ACTOR_AXIS(GET_PLAYER_ACTOR(0), &vVar7, 2);
		vVar10 = { StackVal, StackVal, vVar7 };
		VNORMALIZE(&vVar10);
		VSCALE(&vVar10, -20.0f);
		vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar10, vVar1, StackVal) };
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), &vVar4);
		Function_169(StackVal, StackVal, StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_27(), bParam0, vVar1, vVar4, 4294967295);
		STREAMING_EVICT_PROPSET(bVar0);
		return 1;
	}
	return 0;
}

var Function_169(var uParam0, bool bParam1, char* cParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0xCF8C / 53132
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	bool bVar8;
	
	bVar0 = CREATE_PROPSET_IN_LAYOUT(uParam0, bParam1, cParam2, vParam3, vParam6);
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
					bVar8 = DECOR_CHECK_STRING(bVar3, "rstarInfoSnapping_Type", "align");
					SNAP_OBJECT_TO_GROUND(bVar3, 10.0f, bVar8, 1092616192);
				}
				NET_OBJECT_SET_REPLICATION_MODE(bVar3, 0);
				if (Function_513())
				{
					SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar3), true);
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

bool Function_170(bool bParam0) //Position: 0xD0D5 / 53461
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

bool Function_171(bool bParam0) //Position: 0xD114 / 53524
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

bool Function_172(bool bParam0) //Position: 0xD39A / 54170
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
		Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_173(&Var17) };
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
		bVar12 = Function_165(StackVal, StackVal, StackVal, bVar25, &Var17, iVar15, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar14));
		if (!IS_ACTOR_VALID(bVar12))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		if (STRINGS_ARE_EQUAL(bVar16, "knife"))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar12);
			GIVE_WEAPON_TO_ACTOR(bVar12, 22, false, 1, 1);
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
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_173(&Var17) };
			bVar13 = Function_165(StackVal, StackVal, StackVal, bVar25, &Var17, 976, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar14));
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

struct<32> Function_173(bool bParam0) //Position: 0xD533 / 54579
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_174("0", &cVar8, ""), 4);
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

struct<32> Function_174(char* cParam0, char* cParam1, char* cParam2) //Position: 0xD59D / 54685
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_175(int iParam0) //Position: 0xD5BC / 54716
{
	iParam0 = iParam0;
	return 0;
}

bool Function_176(bool bParam0) //Position: 0xD5C7 / 54727
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
						Function_177(iVar2);
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
							Function_177(iVar2);
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

void Function_177(int iParam0) //Position: 0xD656 / 54870
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_108(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_111(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_71(473, 1, 0, 0);
		iVar0 = Function_157(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_71(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_71(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_71(476, 1, 0, 0);
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
		Function_51(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_51(7, 30);
	}
	if (Function_36(473) <= Function_37(473))
	{
		if (!Function_513())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

bool Function_178(bool bParam0) //Position: 0xD755 / 55125
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	if (STRING_CONTAINS_STRING(bParam0, "updatestat"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar3 = STRING_TO_INT(bVar0);
			bVar4 = STRING_TO_FLOAT(bVar1);
			if (iVar3 < 4294967295 && iVar3 >= 696)
			{
				if (bVar4 < 0.0f)
				{
					iVar2 = iVar3;
					Function_115(iVar2, bVar4);
				}
				else
				{
					iVar2 = iVar3;
					Function_179(iVar2, FABS(bVar4));
				}
			}
		}
		return 1;
	}
	return 0;
}

int Function_179(int iParam0, bool bParam1) //Position: 0xD7C7 / 55239
{
	bool bVar0;
	int iVar1;
	
	Function_180(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("STAT_DECREASE: fDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	iVar1 = Function_119(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + bParam1);
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_116();
	Global_49199[iVar1] = bParam1;
	strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 2;
	return 1;
}

int Function_180(int iParam0, bool bParam1, int iParam2) //Position: 0xD953 / 55635
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
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_DECREASE_NOW: fDecreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - bParam1);
	Function_38(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_26(iParam0, 0, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

bool Function_181(bool bParam0) //Position: 0xDB3E / 56126
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

bool Function_182(bool bParam0) //Position: 0xDBC4 / 56260
{
	if (STRING_CONTAINS_STRING(bParam0, "regiontest"))
	{
		Global_62479 = 1;
		return 1;
	}
	return 0;
}

bool Function_183(bool bParam0) //Position: 0xDBE6 / 56294
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

bool Function_184(bool bParam0) //Position: 0xDC4D / 56397
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

bool Function_185(bool bParam0) //Position: 0xDCC0 / 56512
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
						Function_186(1, 0, GET_PLAYER_ACTOR(0), bVar7, 0);
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
						Function_186(2, 0, GET_PLAYER_ACTOR(0), bVar7, 0);
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

var Function_186(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xDF39 / 57145
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_193(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_192(iParam1))
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
	if (!Function_189(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	bVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(bVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(bVar3, iParam1);
		SET_CRIME_VICTIM(bVar3, bParam3);
		SET_CRIME_CRIMINAL(bVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(bVar3, vVar0);
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_27(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_187();
		}
		SET_CRIME_FACTION(StackVal, bVar3);
		SET_CRIME_TALLIED(bVar3, 0);
		SET_CRIME_COUNTER(bVar3, 1);
		SET_CRIME_WORLD_REGION(bVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(bVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(bVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(bVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return bVar3;
}

void Function_187() //Position: 0xE1C9 / 57801
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_188(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(bVar3))
		{
			SET_CRIME_WITNESSED(bVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_188(bool bParam0, bool bParam1) //Position: 0xE22C / 57900
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

bool Function_189(bool bParam0) //Position: 0xE25B / 57947
{
	if (Function_499(256))
	{
		return 0;
	}
	if (Function_499(262144))
	{
		return 0;
	}
	if (Function_191())
	{
		return 0;
	}
	if (!Function_499(1))
	{
		return 0;
	}
	if (!Function_499(4096))
	{
		return 0;
	}
	if (bParam0 && Function_190(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_499(2048))
	{
		return 0;
	}
	if (Function_513() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_190(int iParam0) //Position: 0xE2D1 / 58065
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_191() //Position: 0xE2E2 / 58082
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

bool Function_192(int iParam0) //Position: 0xE2FB / 58107
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_193(int iParam0) //Position: 0xE311 / 58129
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_194(bool bParam0) //Position: 0xE326 / 58150
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
			Function_195(iVar2, FLOOR(STRING_TO_FLOAT(bVar1)), 0, 0, 0);
		}
		return 1;
	}
	return 0;
}

void Function_195(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xE3DB / 58331
{
	int iVar0;
	bool bVar1;
	
	Function_199(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_198(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, bParam3);
			Function_196(StackVal, bVar1, bParam4);
		}
	}
}

void Function_196(bool bParam0, bool bParam1, bool bParam2) //Position: 0xE44D / 58445
{
	int iVar0;
	
	Function_199(bParam0);
	Function_421(bParam1);
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
	Function_197();
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

void Function_197() //Position: 0xE5C6 / 58822
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_198(bool bParam0, bool bParam1) //Position: 0xE5D2 / 58834
{
	bool bVar0;
	
	bVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_199(bParam0);
	Function_421(bVar0);
	PRINTNL();
	Function_196(bParam0, bVar0, bParam1);
	return;
}

void Function_199(int iParam0) //Position: 0xE5F7 / 58871
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

bool Function_200(bool bParam0) //Position: 0xE63D / 58941
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

bool Function_201(bool bParam0) //Position: 0xE6A1 / 59041
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

bool Function_202(bool bParam0) //Position: 0xE6DE / 59102
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
			Function_206(1.0f, 0.0f, 1.0f);
			Function_204(STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2));
		}
		else if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			bVar3 = GET_CONSOLE_COMMAND_TOKEN(1);
			iVar4 = Function_203(bVar3);
			if (Function_339(iVar4))
			{
				GET_OBJECT_POSITION(StackVal, &vVar5);
				Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_150(iVar4) };
				Function_204(StackVal, StackVal, vVar5);
			}
		}
		return 1;
	}
	return 0;
}

var Function_203(bool bParam0) //Position: 0xE77B / 59259
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

void Function_204(vector3 vParam0) //Position: 0xE834 / 59444
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
		Function_205(Global_28210.f_12);
		CLEAN_OBJECTSET(Global_28210.f_12);
	}
	Global_28210.f_92 = 1;
	Global_28210.f_96 = 1;
	return;
}

void Function_205(bool bParam0) //Position: 0xE8BB / 59579
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

void Function_206(var uParam0, var uParam1, int iParam2) //Position: 0xE8FB / 59643
{
	Global_28185.f_60 = 5;
	Global_28185.f_64 = uParam0;
	Global_28185.f_68 = uParam1;
	Global_28185.f_72 = iParam2;
	return;
}

bool Function_207(bool bParam0) //Position: 0xE91C / 59676
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
			Function_208(STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2), "TELEPORTING...", "", 1, 1);
		}
		return 1;
	}
	return 0;
}

void Function_208(vector3 vParam0, char* cParam3, char* cParam4, var uParam5, var uParam6) //Position: 0xE97C / 59772
{
	Global_13112.f_72 = 4294967295;
	Global_13112 = { StackVal, StackVal, vParam0 };
	strcpy(&Global_13112 + 24, cParam3, 24);
	strcpy(&Global_13112 + 48, cParam4, 24);
	Global_13112.f_76 = uParam5;
	Global_13112.f_80 = uParam6;
}

bool Function_209(bool bParam0) //Position: 0xE9B3 / 59827
{
	char* cVar0;
	int iVar1;
	var uVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "nvteleport"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			cVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			iVar1 = Function_203(cVar0);
			if (Function_339(iVar1))
			{
				memcpy(&uVar2, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_150(iVar1), 4);
				Function_210(iVar1, "Teleporting to %s...", &uVar2, 1, 1);
			}
		}
		return 1;
	}
	return 0;
}

void Function_210(var uParam0, char* cParam1, char* cParam2, var uParam3, var uParam4) //Position: 0xEA1A / 59930
{
	Global_13112.f_72 = uParam0;
	Global_13112 = { 0.0f, 0.0f, 0.0f };
	strcpy(&Global_13112 + 24, cParam1, 24);
	strcpy(&Global_13112 + 48, cParam2, 24);
	Global_13112.f_76 = uParam3;
	Global_13112.f_80 = uParam4;
}

bool Function_211(bool bParam0) //Position: 0xEA51 / 59985
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

bool Function_212(bool bParam0) //Position: 0xEAB0 / 60080
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "toggle"))
	{
		bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			if (STRINGS_ARE_EQUAL(bVar0, "channel"))
			{
				return Function_214();
			}
			if (STRINGS_ARE_EQUAL(bVar0, "flag"))
			{
				return Function_213();
			}
			return 0;
		}
	}
	return 0;
}

int Function_213() //Position: 0xEB09 / 60169
{
	bool bVar0;
	
	bVar0 = GET_CONSOLE_COMMAND_TOKEN(2);
	if (STRINGS_ARE_EQUAL(bVar0, "ambient"))
	{
		if (Function_363(4))
		{
			Function_500(4);
		}
		else
		{
			Function_371(4);
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
		if (Function_363(1))
		{
			Function_500(1);
		}
		else
		{
			Function_371(1);
		}
		ENABLE_AMBIENT_SPAWNING(Function_363(1));
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "locname"))
	{
		if (Function_363(32))
		{
			Function_500(32);
		}
		else
		{
			Function_371(32);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "clock"))
	{
		if (Function_363(64))
		{
			Function_500(64);
		}
		else
		{
			Function_371(64);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "adebug"))
	{
		if (Function_363(128))
		{
			Function_500(128);
		}
		else
		{
			Function_371(128);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "law"))
	{
		if (!Function_499(256))
		{
			Function_519(256);
		}
		else
		{
			Function_370(256);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_214() //Position: 0xEC66 / 60518
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

bool Function_215(bool bParam0) //Position: 0xEDD3 / 60883
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
			bVar0 = Function_217(iVar1, bParam0);
			if (DOES_SCRIPT_EXIST(bVar0))
			{
				vVar56 = { 0.0f, 0.0f, -95.0f };
				bVar59 = GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0));
				GET_OBJECT_RELATIVE_POSITION(bVar59, vVar56, &vVar53);
				if (!Function_216(&vVar53, 50.0f, &iVar2 + 8, 4294967295))
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

bool Function_216(int iParam0, float fParam1, int iParam2, int iParam3) //Position: 0xEF09 / 61193
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
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar4);
		if (VDIST(*iParam0, vVar4) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(vVar4);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(*iParam0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(*iParam0, vVar4));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
	{
		if (!Function_55(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*iParam0 = (*iParam0 + 0,01f);
		iParam0->f_8 = (StackVal + 0,01f);
		if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_55(StackVal, StackVal, *iParam2))
			{
				return 1;
			}
		}
		*iParam2 = { StackVal, StackVal, *iParam0 };
		iParam2->f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar3++;
		}
		WAIT(false);
	}
	return 0;
}

var Function_217(char* cParam0, bool bParam1) //Position: 0xF03B / 61499
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

bool Function_218(bool bParam0) //Position: 0xF06F / 61551
{
	bool bVar0;
	int iVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "end"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			bVar0 = Function_219(iVar1, bParam0);
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

var Function_219(char* cParam0, bool bParam1) //Position: 0xF149 / 61769
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

bool Function_220(bool bParam0) //Position: 0xF25B / 62043
{
	bool bVar0;
	int iVar1;
	char* cVar2[64];
	
	if (STRING_CONTAINS_STRING(bParam0, "start"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			bVar0 = Function_219(iVar1, bParam0);
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

bool Function_221(bool bParam0) //Position: 0xF3EB / 62443
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
				bVar0 = Function_219(iVar1, bParam0);
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

bool Function_222(bool bParam0) //Position: 0xF592 / 62866
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
				bVar0 = Function_219(iVar2, bParam0);
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

bool Function_223(bool bParam0) //Position: 0xF832 / 63538
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (STRING_CONTAINS_STRING(bParam0, "switchentity"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(2);
			bVar1 = GET_ACTOR_ENUM_FROM_STRING(bVar0);
			if (Function_224(bVar1))
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
				if (bVar2 > GET_ACTOR_ENUM_VARIATION_COUNT(bVar1))
				{
					PRINTSTRING("variation ");
					PRINTINT(bVar2);
					PRINTSTRING("is out of range (");
					PRINTINT(GET_ACTOR_ENUM_VARIATION_COUNT(bVar1));
					PRINTSTRING(")");
					PRINTNL();
					bVar2 = 4294967295;
				}
				else
				{
					SWITCH_PLAYER_TO_ENUM(bVar1, bVar2);
				}
			}
		}
		return 1;
	}
	return 0;
}

bool Function_224(int iParam0) //Position: 0xF8E0 / 63712
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_225(bool bParam0) //Position: 0xF8F7 / 63735
{
	if (STRING_CONTAINS_STRING(bParam0, "givecontrolback"))
	{
		SET_PLAYER_CONTROL(0, 1, 1, 1);
		return 1;
	}
	return 0;
}

var Function_226() //Position: 0xF921 / 63777
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

int Function_227() //Position: 0xF934 / 63796
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

void Function_228() //Position: 0xF9B3 / 63923
{
	Function_519(512);
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

int Function_229(int iParam0, int iParam1) //Position: 0xF9EF / 63983
{
	return Global_16474[iParam18][iParam0];
}

bool Function_230(int iParam0) //Position: 0xFA00 / 64000
{
	bool bVar0;
	float fVar1;
	
	fVar1 = GET_PROFILE_TIME();
	bVar0 = *iParam0;
	while (bVar0 < (Global_13172 - 1))
	{
		if (Function_235(bVar0) == 4294967295 && Function_233(Function_234(bVar0)))
		{
			Global_16474[Function_235(bVar0)8][Function_234(bVar0)]++;
		}
		if ((GET_PROFILE_TIME() - fVar1) < 300.0f)
		{
			*iParam0 = bVar0;
			return 0;
		}
		bVar0++;
	}
	Function_231();
	return 1;
}

void Function_231() //Position: 0xFA74 / 64116
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
			Function_232(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_232(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xFCBB / 64699
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_233(int iParam0) //Position: 0xFCE4 / 64740
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

int Function_234(bool bParam0) //Position: 0xFCF9 / 64761
{
	if (!Function_49(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

int Function_235(bool bParam0) //Position: 0xFD14 / 64788
{
	if (!Function_236(bParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_236(int iParam0) //Position: 0xFD2E / 64814
{
	if (!Function_49(iParam0))
	{
		return 0;
	}
	if (!Function_237(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_237(int iParam0) //Position: 0xFD52 / 64850
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_238() //Position: 0xFD67 / 64871
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

void Function_239(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xFDA7 / 64935
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

void Function_240() //Position: 0xFDF2 / 65010
{
	int iVar0;
	
	if (Global_3365 && !Global_34165.f_44)
	{
		PRINTSTRING("Current time is ");
		Function_421(GET_TIME_OF_DAY());
		PRINTNL();
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (iVar0 != 0 || iVar0 != 1)
			{
				PRINTSTRING("Current pursuit time for faction is ");
				Function_421((*&Global_26316 + 88)[iVar0]);
				PRINTNL();
				if (!Function_242((*&Global_26316 + 88)[iVar0]) && !Global_3364)
				{
					if (IS_EARLIER_THAN((*&Global_26316 + 88)[iVar0], false))
					{
						Function_241(iVar0, 0, 0, Function_265(RAND_INT_RANGE(30, 75)), 0);
					}
				}
			}
			iVar0++;
		}
	}
	return;
}

void Function_241(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xFEB1 / 65201
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_242((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

bool Function_242(bool bParam0) //Position: 0xFEF7 / 65271
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

void Function_243(bool bParam0) //Position: 0xFF1C / 65308
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

void Function_244() //Position: 0xFF79 / 65401
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

void Function_245() //Position: 0xFFB0 / 65456
{
	Function_246(0, 6, Global_30668[0], 0, -839,76f, 92,55f, 2372,67f, 0);
	Function_246(1, 2, Global_30640[0], 0, -2157.0f, 20.0f, 2603.0f, 50);
	Function_246(13, 1, Global_30640[1], 0, -3217,549f, 17,83068f, 2714,036f, 5);
	Function_246(2, 2, Global_30668[1], 0, 124,9729f, 76,74391f, 2235,933f, 100);
	Function_246(3, 2, Global_30658[1], 0, -3652,31f, 42,81397f, 2086,111f, 100);
	Function_246(14, 1, Global_30679[0], 0, -3196,344f, 41,34254f, 3752,696f, 5);
	Function_246(4, 6, Global_30633[0], 1, -3837,73f, 2,734276f, 4225,234f, 0);
	Function_246(6, 2, Global_30693[0], 1, -2688,45f, 31,55404f, 4294,648f, 200);
	Function_246(7, 2, Global_30707[2], 1, -809,4502f, 16,66866f, 3705,639f, 250);
	Function_246(5, 2, Global_30685[0], 1, -4328,384f, 22,34859f, 4461,055f, 150);
	Function_246(8, 2, Global_30707[0], 1, -434,7641f, 22,53568f, 3929,63f, 150);
	Function_246(9, 6, Global_30717[0], 2, 710,5591f, 82,67567f, 1320,149f, 0);
	Function_246(10, 2, Global_30723[1], 2, -442,8723f, 153,7947f, 1669,459f, 400);
	Function_246(11, 6, Global_30717[1], 2, -100,4297f, 119,5743f, 1354,821f, 0);
	Function_246(12, 6, Global_30717[1], 2, -100,4297f, 119,5743f, 1354,821f, 0);
	return;
}

void Function_246(int iParam0, int iParam1, var uParam2, int iParam3, vector3 vParam4, int iParam7) //Position: 0x1016D / 65901
{
	if (!Function_92(iParam0))
	{
		return;
	}
	if (Global_3365)
	{
		Global_16537[iParam021].f_40 = iParam1;
	}
	else if (iParam1 != 2 || iParam1 != 6)
	{
		Global_16537[iParam021].f_40 = 3;
		if (DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse");
		}
	}
	else
	{
		Global_16537[iParam021].f_40 = iParam1;
		if (Global_16537[iParam021].f_40 == 3)
		{
			if (DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
			{
				DECOR_REMOVE(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse");
			}
		}
	}
	Global_16537[iParam021] = { StackVal, StackVal, vParam4 };
	Global_16537[iParam021].f_48 = uParam2;
	Global_16537[iParam021].f_44 = iParam7;
	Global_16537[iParam021].f_52 = iParam3;
}

void Function_247() //Position: 0x10284 / 66180
{
	if (Global_3364)
	{
		Function_256(0, 0);
		Function_256(1, 0);
		Function_256(2, 0);
		Function_256(4, 0);
		Function_256(5, 0);
		Function_256(6, 0);
		Function_256(7, 0);
		Function_256(12, 0);
		Function_256(14, 0);
		Function_256(13, 0);
		Function_256(19, 0);
		Function_256(9, 0);
		Function_256(10, 0);
		Function_256(16, 0);
		Function_256(15, 0);
		Function_256(17, 0);
		Function_256(25, 0);
		Function_256(23, 0);
		Function_256(24, 0);
		Function_255(3, 0);
		Function_255(1, 0);
		Function_255(0, 0);
		Function_255(2, 0);
		Function_255(57, 0);
		Function_255(56, 0);
		Function_255(34, 0);
		Function_255(44, 0);
		Function_255(47, 0);
		Function_255(30, 0);
		Function_255(36, 0);
		Function_255(39, 0);
	}
	Function_254(22, 50.0f, "KNIFE", "nKNIFE_DES", "p_gen_buySellBox02x", 1, 1, 1);
	Function_254(0, 100.0f, "VOLCANIC", "VOLCANIC_DES", "p_gen_buySellBox02x", 1, Function_253(0), 1);
	Function_254(1, 300.0f, "nSEMI_AUTO", "SEMI_AUTO_DES", "p_gen_buySellBox02x", 1, Function_253(1), 1);
	Function_254(2, 400.0f, "HIGH_POWER", "HIGH_P_DES", "p_gen_buySellBox02x", 1, Function_253(2), 1);
	Function_254(3, 800.0f, "MAUSER", "MAUSER_DES", "p_gen_buySellBox02x", 1, 1, 1);
	Function_254(8, 50.0f, "CARBINE", "CARBINE_DES", "p_gen_buySellBox01x", 2, 1, 1);
	Function_254(9, 350.0f, "WINCHESTER", "WIN_DES", "p_gen_buySellBox01x", 2, Function_253(9), 1);
	Function_254(10, 600.0f, "HENRY", "nHENRY_DES", "p_gen_buySellBox01x", 2, Function_253(10), 1);
	Function_254(11, 1000.0f, "EVANS", "nEVANS_DES", "p_gen_buySellBox01x", 2, 1, 1);
	Function_254(4, 35.0f, "nCATTLEMAN", "CATTLEMAN_DES", "p_gen_buySellBox02x", 1, Function_253(4), 1);
	Function_254(5, 250.0f, "nSCHOFIELD", "SCHOFIELD_DES", "p_gen_buySellBox02x", 1, Function_253(5), 1);
	Function_254(6, 375.0f, "DOUBLEACTION", "DOUBLEACT_DES", "p_gen_buySellBox02x", 1, Function_253(6), 1);
	Function_254(7, 1250.0f, "LAMAT", "nLEMAT_DES", "p_gen_buySellBox02x", 1, Function_253(7), 1);
	Function_254(14, 475.0f, "BUFFALO", "BUFFALO_DES", "p_gen_buySellBox01x", 2, Function_253(14), 1);
	Function_254(12, 300.0f, "SPRINGFIELD", "SPRINGF_DES", "p_gen_buySellBox01x", 2, Function_253(12), 1);
	Function_254(13, 750.0f, "BOLTACTION", "BOLTACTION_DES", "p_gen_buySellBox01x", 2, Function_253(13), 1);
	Function_254(15, 250.0f, "nSAWED_OFF", "SAWED_OFF_DES", "p_gen_buySellBox01x", 2, Function_253(15), 1);
	Function_254(16, 150.0f, "DOUBLE_BARREL", "D_BARREL_DES", "p_gen_buySellBox01x", 2, Function_253(16), 1);
	Function_254(17, 600.0f, "PUMP_ACTION", "P_ACTION_DES", "p_gen_buySellBox01x", 2, Function_253(17), 1);
	Function_254(18, 1000.0f, "SEMI_SHOTGUN", "SEMI_SG_DES", "p_gen_buySellBox01x", 2, 1, 1);
	Function_254(19, 500.0f, "ROLLING_BLOCK", "ROLLING_B_DES", "p_gen_buySellBox01x", 2, Function_253(19), 1);
	Function_254(20, 1100.0f, "CARCANO", "CARCANO_DES", "p_gen_buySellBox01x", 2, 1, 1);
	Function_254(23, 25.0f, "FIREBOTTLE", "FIREBOTTLE_DES", "p_gen_buySellBox02x", 1, Function_253(23), 1);
	Function_254(24, 45.0f, "DYNAMITE", "DYNAMITE_DES", "p_gen_buySellBox02x", 1, Function_253(24), 1);
	Function_254(25, 20.0f, "nTRW_KNIFE", "TRW_KNIFE_DES", "p_gen_buySellBox02x", 1, Function_253(25), 1);
	Function_252(16, 175.0f, "nCAMP_LVL1", "CAMP_LVL1_DES", "p_gen_buySellBox01x", 2, 1, 0);
	Function_252(0, 30.0f, "nSNAKE_OIL", "SNAKE_OIL_DES", "p_gen_bottleBeer01x", 3, Function_251(0), 0);
	Function_252(1, 60.0f, "nMOONSHINE", "MOONSHINE_DES", "p_gen_bottleBeer01x", 3, Function_251(1), 0);
	Function_252(2, 35.0f, "CHEWING_TOBACCO", "CHEWING_TOBACCO_DES", "p_gen_bottleBeer01x", 3, Function_251(2), 0);
	Function_252(3, 25.0f, "nMEDS_LVL1", "MEDS_LVL1_DES", "p_gen_bottleBeer01x", 3, Function_251(3), 0);
	Function_252(8, 20.0f, "HORSE_PILLS", "HORSE_PILLS_DES", "p_gen_buySellBox02x", 1, 1, 0);
	Function_252(7, 1.0f, "APPLE", "nAPPLE_DES", "p_gen_buySellBox02x", 0, 1, 0);
	Function_252(9, 200.0f, "PARDON_LETTER", "PARDON_LETTER_DES", "p_gen_buySellBox01x", 0, 1, 0);
	Function_252(17, 25.0f, "RABBITS_FOOT", "RABBITS_FOOT_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_252(6, 15.0f, "BAIT", "BAIT_DES", "p_gen_buySellBox03x", 0, 1, 0);
	Function_252(13, 15.0f, "WANTED_POSTER", "WANTED_POSTER_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_252(19, 20.0f, "BANDANA", "BANDANA_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_252(20, 125.0f, "nBANDOLIER", "BANDOLIER_DES", "p_gen_buySellBox03x", 0, 1, 1);
	if (Function_69(3, 1))
	{
		Function_252(10, 70.0f, "ELEGANT_SUIT", "ELEGANT_SUIT_DES", "p_gen_buySellBox02x", 1, 0, 1);
	}
	else
	{
		Function_252(10, 70.0f, "ELEGANT_SUIT", "ELEGANT_SUIT_DES", "p_gen_buySellBox02x", 1, 1, 1);
	}
	if (Function_69(7, 32))
	{
		Function_252(53, 50.0f, "SCRAP_BANDITO", "SCRAP_BANDITO_DES", "p_gen_buySellBox02x", 1, 0, 1);
	}
	else
	{
		Function_252(53, 50.0f, "SCRAP_BANDITO", "SCRAP_BANDITO_DES", "p_gen_buySellBox02x", 1, 1, 1);
	}
	if (Function_69(5, 32))
	{
		Function_252(54, 100.0f, "SCRAP_CATTLE", "SCRAP_CATTLE_DES", "p_gen_buySellBox02x", 1, 0, 1);
	}
	else
	{
		Function_252(54, 100.0f, "SCRAP_CATTLE", "SCRAP_CATTLE_DES", "p_gen_buySellBox02x", 1, 1, 1);
	}
	if (IS_PS3())
	{
		if (Function_69(4, 32))
		{
			Function_252(55, 150.0f, "SCRAP_DRUNK", "SCRAP_DRUNK_DES", "p_gen_buySellBox02x", 1, 0, 1);
		}
		else
		{
			Function_252(55, 150.0f, "SCRAP_DRUNK", "SCRAP_DRUNK_DES", "p_gen_buySellBox02x", 1, 1, 1);
		}
	}
	else
	{
		Function_252(55, 150.0f, "SCRAP_DRUNK", "SCRAP_DRUNK_DES", "p_gen_buySellBox02x", 1, 0, 1);
	}
	if (Function_69(9, 32))
	{
		Function_252(56, 200.0f, "SCRAP_MILITARY", "SCRAP_MILITARY_DES", "p_gen_buySellBox02x", 1, 0, 1);
	}
	else
	{
		Function_252(56, 200.0f, "SCRAP_MILITARY", "SCRAP_MILITARY_DES", "p_gen_buySellBox02x", 1, Function_251(56), 1);
	}
	if (Function_69(6, 32))
	{
		Function_252(58, 250.0f, "SCRAP_TREASURE", "SCRAP_TREASURE_DES", "p_gen_buySellBox02x", 1, 0, 1);
	}
	else
	{
		Function_252(58, 250.0f, "SCRAP_TREASURE", "SCRAP_TREASURE_DES", "p_gen_buySellBox02x", 1, 1, 1);
	}
	if (Function_69(8, 32))
	{
		Function_252(57, 100.0f, "SCRAP_REBEL", "SCRAP_REBEL_DES", "p_gen_buySellBox02x", 1, 0, 1);
	}
	else
	{
		Function_252(57, 100.0f, "SCRAP_REBEL", "SCRAP_REBEL_DES", "p_gen_buySellBox02x", 1, Function_251(57), 1);
	}
	Function_252(30, 1500.0f, "HORSE_AMERICAN", "HORSE_AMERICAN_DES", "p_gen_buySellBox02x", 0, Function_251(30), 1);
	Function_252(31, 500.0f, "HORSE_ARDENNAIS", "HORSE_ARDENNAIS_DES", "p_gen_buySellBox02x", 0, 1, 1);
	Function_252(32, 500.0f, "HORSE_CLEVELAND", "HORSE_CLEVELAND_DES", "p_gen_buySellBox02x", 0, 1, 1);
	Function_252(33, 500.0f, "HORSE_DUTCH", "HORSE_DUTCH_DES", "p_gen_buySellBox02x", 0, 1, 1);
	Function_252(34, 200.0f, "HORSE_HEDOR", "HORSE_HEDOR_DES", "p_gen_buySellBox02x", 0, Function_251(34), 1);
	Function_252(35, 500.0f, "HORSE_HIGHLAND", "HORSE_HIGHLAND_DES", "p_gen_buySellBox02x", 0, 1, 1);
	Function_252(36, 1500.0f, "HORSE_HUNGARIAN", "HORSE_HUNGARIAN_DES", "p_gen_buySellBox02x", 0, Function_251(36), 1);
	Function_252(37, 100.0f, "HORSE_INFESTED", "HORSE_INFESTED_DES", "p_gen_buySellBox02x", 0, 1, 1);
	Function_252(38, 100.0f, "HORSE_JADED", "HORSE_JADED_DES", "p_gen_buySellBox02x", 0, 1, 1);
	Function_252(39, 1500.0f, "HORSE_KENTUCKY", "HORSE_KENTUCKY_DES", "p_gen_buySellBox02x", 0, Function_251(39), 1);
	Function_252(40, 500.0f, "HORSE_LUSITANO", "HORSE_LUSITANO_DES", "p_gen_buySellBox02x", 0, 1, 1);
	Function_252(41, 100.0f, "nHORSE_NAG", "HORSE_NAG_DES", "p_gen_buySellBox02x", 0, 1, 1);
	Function_252(42, 500.0f, "HORSE_PAINTED", "HORSE_PAINTED_DES", "p_gen_buySellBox02x", 0, 1, 1);
	Function_252(43, 500.0f, "HORSE_PAINTSTD", "HORSE_PAINTSTD_DES", "p_gen_buySellBox02x", 0, 1, 1);
	Function_252(44, 200.0f, "HORSE_PICOR", "HORSE_PICOR_DES", "p_gen_buySellBox02x", 0, Function_251(44), 1);
	Function_252(45, 500.0f, "HORSE_PINTO", "HORSE_PINTO_DES", "p_gen_buySellBox02x", 0, 1, 1);
	Function_252(46, 500.0f, "HORSE_QUARTER", "HORSE_QUARTER_DES", "p_gen_buySellBox02x", 0, 1, 1);
	Function_252(47, 200.0f, "HORSE_SENOR", "HORSE_SENOR_DES", "p_gen_buySellBox02x", 0, Function_251(47), 1);
	Function_252(48, 500.0f, "HORSE_TERSK", "HORSE_TERSK_DES", "p_gen_buySellBox02x", 0, 1, 1);
	Function_252(49, 500.0f, "HORSE_TOBIANO", "HORSE_TOBIANO_DES", "p_gen_buySellBox02x", 0, 1, 1);
	Function_252(50, 500.0f, "HORSE_TURKMEN", "HORSE_TURKMEN_DES", "p_gen_buySellBox02x", 0, 1, 1);
	Function_252(51, 500.0f, "HORSE_WELSH", "HORSE_WELSH_DES", "p_gen_buySellBox02x", 0, 1, 1);
	Function_252(12, 25.0f, "SURVIVALIST_MAP", "SURVIVALIST_MAP_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_252(25, 25.0f, "nE_MAP_HGN", "E_MAP_HGN_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_252(21, 30.0f, "nE_MAP_CHO", "E_MAP_CHO_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_252(28, 35.0f, "nE_MAP_RIO", "E_MAP_RIO_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_252(23, 40.0f, "nE_MAP_GTR", "E_MAP_GTR_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_252(27, 45.0f, "nE_MAP_PUN", "E_MAP_PUN_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_252(26, 50.0f, "nE_MAP_PRD", "E_MAP_PRD_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_252(22, 55.0f, "nE_MAP_DZC", "E_MAP_DZC_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_252(24, 60.0f, "nE_MAP_GRT", "E_MAP_GRT_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_252(29, 65.0f, "nE_MAP_TAL", "E_MAP_TAL_DES", "p_gen_buySellBox03x", 0, 1, 1);
	Function_250(6, 15.0f, "AM_PIST", "AM_PIST_DES", "p_gen_buySellBox03x", 0, 0);
	Function_250(8, 25.0f, "nAM_REPEAT", "AM_REPEAT_DES", "p_gen_buySellBox03x", 0, 0);
	Function_250(7, 12.0f, "AM_REVOL", "AM_REVOL_DES", "p_gen_buySellBox03x", 0, 0);
	Function_250(9, 20.0f, "AM_RIFLE", "AM_RIFLE_DES", "p_gen_buySellBox03x", 0, 0);
	Function_250(10, 30.0f, "AM_SHOT", "AM_SHOT_DES", "p_gen_buySellBox03x", 0, 0);
	Function_250(11, 40.0f, "AM_SNIPR", "AM_SNIPR_DES", "p_gen_buySellBox03x", 0, 0);
	Function_248(492, 2.0f, "sn_h_bw_des", "p_gen_package01x", "Pouch_01", 0);
	Function_248(491, 1.0f, "sn_h_ds_des", "p_gen_package01x", "Pouch_01", 0);
	Function_248(494, 4.0f, "sn_h_gc_des", "p_gen_package01x", "Pouch_01", 0);
	Function_248(496, 5.0f, "sn_h_hs_des", "p_gen_package01x", "Pouch_01", 0);
	Function_248(493, 4.0f, "sn_h_po_des", "p_gen_package01x", "Pouch_01", 0);
	Function_248(490, 2.0f, "sn_h_pp_des", "p_gen_package01x", "Pouch_01", 0);
	Function_248(498, 2.0f, "sn_h_rs_des", "p_gen_package01x", "Pouch_01", 0);
	Function_248(497, 6.0f, "sn_h_vs_des", "p_gen_package01x", "Pouch_01", 0);
	Function_248(499, 1.0f, "sn_h_wf_des", "p_gen_package01x", "Pouch_01", 0);
	Function_248(495, 3.0f, "sn_h_wo_des", "p_gen_package01x", "Pouch_01", 0);
	Function_248(500, 3.0f, "sn_a1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(501, 5.0f, "sn_a1_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(502, 5.0f, "sn_b1_w_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(503, 8.0f, "sn_b2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(504, 12.0f, "sn_b2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(505, 8.0f, "sn_b2_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(506, 8.0f, "sn_b2_t_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(507, 5.0f, "sn_b3_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(508, 12.0f, "sn_b3_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(509, 5.0f, "sn_b4_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(510, 8.0f, "sn_b4_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(511, 12.0f, "sn_b4_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(512, 5.0f, "sn_b5_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(513, 3.0f, "sn_b5_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(514, 8.0f, "sn_b5_t_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(515, 5.0f, "sn_b6_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(516, 8.0f, "sn_b6_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(517, 12.0f, "sn_b6_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(518, 5.0f, "sn_b7_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(519, 6.0f, "sn_b7_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(520, 8.0f, "sn_b7_a_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(521, 10.0f, "sn_b8_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(522, 12.0f, "sn_b8_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(523, 8.0f, "sn_b8_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(524, 1.0f, "sn_c1_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(529, 4.0f, "sn_c5_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(530, 4.0f, "sn_c5_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(525, 5.0f, "sn_c2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(526, 8.0f, "sn_c2_p_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(527, 12.0f, "sn_c2_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(528, 8.0f, "sn_c2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(531, 3.0f, "sn_c3_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(532, 5.0f, "sn_c3_p_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(533, 3.0f, "sn_c4_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(534, 4.0f, "sn_d1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(535, 6.0f, "sn_d1_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(537, 2.0f, "sn_d3_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(536, 1.0f, "sn_d3_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(538, 2.0f, "sn_d2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(539, 8.0f, "sn_e1_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(540, 8.0f, "sn_e2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(541, 9.0f, "sn_e2_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(542, 12.0f, "sn_e2_a_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(543, 5.0f, "sn_f1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(544, 12.0f, "sn_f1_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(545, 5.0f, "sn_g1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(546, 8.0f, "sn_g2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(547, 12.0f, "sn_g2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(548, 8.0f, "sn_g2_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(549, 12.0f, "sn_g2_t_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(550, 16.0f, "sn_g2_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(551, 2.0f, "sn_g3_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(552, 6.0f, "sn_h1_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(580, 2.0f, "sn_h2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(581, 2.0f, "sn_h2_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(553, 1.0f, "sn_m1_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(596, 1.0f, "sn_m1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(554, 32.0f, "sn_xw_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(555, 48.0f, "sn_xw_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(556, 44.0f, "sn_xw_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(557, 36.0f, "sn_xb_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(558, 48.0f, "sn_xb_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(559, 36.0f, "sn_xb_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(560, 32.0f, "sn_xb_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(561, 44.0f, "sn_xb_t_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(562, 32.0f, "sn_xc_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(563, 24.0f, "sn_xc_p_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(564, 36.0f, "sn_xc_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(565, 42.0f, "sn_xc_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(566, 32.0f, "sn_nb_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(567, 36.0f, "sn_nb_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(568, 48.0f, "sn_nb_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(569, 36.0f, "sn_nb_t_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(570, 4.0f, "sn_o1_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(571, 5.0f, "sn_p1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(572, 3.0f, "sn_r1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(573, 3.0f, "sn_r2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(574, 5.0f, "sn_r2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(575, 5.0f, "sn_s1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(576, 6.0f, "sn_s1_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(577, 3.0f, "sn_s2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(578, 5.0f, "sn_s2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(579, 6.0f, "sn_s3_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(582, 5.0f, "sn_sb_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(583, 3.0f, "sn_v_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(584, 8.0f, "sn_w1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(585, 10.0f, "sn_w1_p_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(586, 12.0f, "sn_w1_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	Function_248(587, 100.0f, "sn_t_1_DES", "p_gen_package01x", "Pouch_01", 0);
	Function_248(588, 125.0f, "sn_t_2_DES", "p_gen_package01x", "Pouch_01", 0);
	Function_248(589, 150.0f, "sn_t_3_DES", "p_gen_package01x", "Pouch_01", 0);
	Function_248(590, 175.0f, "sn_t_4_DES", "p_gen_package01x", "Pouch_01", 0);
	Function_248(591, 200.0f, "sn_t_5_DES", "p_gen_package01x", "Pouch_01", 0);
	Function_248(592, 225.0f, "sn_t_6_DES", "p_gen_package01x", "Pouch_01", 0);
	Function_248(593, 300.0f, "sn_t_7_DES", "p_gen_package01x", "Pouch_01", 0);
	Function_248(594, 400.0f, "sn_t_8_DES", "p_gen_package01x", "Pouch_01", 0);
	Function_248(595, 500.0f, "sn_t_9_DES", "p_gen_package01x", "Pouch_01", 0);
	return;
}

int Function_248(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x134BF / 79039
{
	bool bVar0;
	struct<2> Var1;
	int iVar3;
	
	if (!IS_STRING_VALID(bParam2))
	{
		LOG_ERROR("SHOP_REGISTER_COLLECTABLE: txtCollectableDescription is invalid!");
		return 0;
	}
	if (IS_STRING_VALID(bParam3))
	{
		bVar0 = GET_ASSET_ID(bParam3, 0);
		if (!UNK_0x214AFB8C(bVar0))
		{
			LOG_ERROR("SHOP_REGISTER_COLLECTABLE: txtPropName is invalid!");
			return 0;
		}
	}
	if (!IS_STRING_VALID(cParam4))
	{
		LOG_ERROR("SHOP_REGISTER_COLLECTABLE: txtCollectibleIconName is invalid!");
		return 0;
	}
	if (Function_35(iParam0) == 2)
	{
		iVar3 = Global_61639[iParam0];
		if (iVar3 <= 107)
		{
			Function_249(iParam0);
			Var1 = { StackVal, Function_249(iParam0) };
			Global_60461[iVar311].f_4 = STRING_TO_HASH(&Var1);
			Global_60461[iVar311] = uParam1;
			Global_60461[iVar311].f_8 = STRING_TO_HASH(bParam2);
			Global_60461[iVar311].f_28 = bVar0;
			Global_60461[iVar311].f_32 = iParam5;
			Global_60461[iVar311].f_36 = iParam0;
			strcpy(&Global_60461[iVar311] + 12, bParam4, 16);
			return 1;
		}
		LOG_ERROR("SHOP_REGISTER_COLLECTABLE: Reached CONST_MAX_COLLECTABLES limit, ask Christian to increase it!");
		return 0;
	}
	LOG_ERROR("SHOP_REGISTER_COLLECTABLE: theCollectable is invalid!");
	return 0;
	return 0;
}

struct<8> Function_249(int iParam0) //Position: 0x136E6 / 79590
{
	struct<2> Var0;
	
	Var0 = { StackVal, Global_35278[iParam020] };
	return StackVal, Var0;
}

int Function_250(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x136FD / 79613
{
	bool bVar0;
	
	if (!IS_STRING_VALID(bParam2))
	{
		LOG_ERROR("SHOP_REGISTER_AMMO: txtAmmoName is invalid!");
		return 0;
	}
	if (!IS_STRING_VALID(bParam3))
	{
		LOG_ERROR("SHOP_REGISTER_AMMO: txtAmmoDescription is invalid!");
		return 0;
	}
	if (IS_STRING_VALID(bParam4))
	{
		bVar0 = GET_ASSET_ID(bParam4, 0);
		if (!UNK_0x214AFB8C(bVar0))
		{
			LOG_ERROR("SHOP_REGISTER_AMMO: txtPropName is invalid!");
			return 0;
		}
	}
	if (!iParam0 != 4294967295)
	{
		Global_60316[iParam08] = uParam1;
		Global_60316[iParam08].f_4 = STRING_TO_HASH(GET_AMMO_ENUM_ICON_NAME(iParam0));
		Global_60316[iParam08].f_8 = STRING_TO_HASH(bParam3);
		Global_60316[iParam08].f_12 = bVar0;
		Global_60316[iParam08].f_16 = iParam5;
		Global_60316[iParam08].f_24 = iParam6;
		return 1;
	}
	return 0;
}

int Function_251(bool bParam0) //Position: 0x1382C / 79916
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_GET_SAVED_AMMO_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	return Global_62378[bParam0];
}

int Function_252(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x13888 / 80008
{
	bool bVar0;
	
	if (!IS_STRING_VALID(bParam2))
	{
		LOG_ERROR("SHOP_REGISTER_ITEM: txtItemName is invalid!");
		return 0;
	}
	if (!IS_STRING_VALID(bParam3))
	{
		LOG_ERROR("SHOP_REGISTER_ITEM: txtItemDescription is invalid!");
		return 0;
	}
	if (IS_STRING_VALID(bParam4))
	{
		bVar0 = GET_ASSET_ID(bParam4, 0);
		if (!UNK_0x214AFB8C(bVar0))
		{
			LOG_ERROR("SHOP_REGISTER_ITEM: txtPropName is invalid!");
			return 0;
		}
	}
	if (!iParam0 != 4294967295)
	{
		Global_59675[iParam08] = uParam1;
		Global_59675[iParam08].f_4 = STRING_TO_HASH(bParam2);
		Global_59675[iParam08].f_8 = STRING_TO_HASH(bParam3);
		Global_59675[iParam08].f_12 = bVar0;
		Global_59675[iParam08].f_16 = iParam5;
		Global_59675[iParam08].f_24 = iParam6;
		Global_59675[iParam08].f_28 = iParam7;
		return 1;
	}
	return 0;
}

int Function_253(bool bParam0) //Position: 0x139BF / 80319
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_GET_SAVED_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	return Global_62337[bParam0];
}

int Function_254(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x13A1D / 80413
{
	bool bVar0;
	
	if (!IS_STRING_VALID(bParam2))
	{
		LOG_ERROR("SHOP_REGISTER_WEAPON: txtWeaponName is invalid!");
		return 0;
	}
	if (!IS_STRING_VALID(bParam3))
	{
		LOG_ERROR("SHOP_REGISTER_WEAPON: txtWeaponDescription is invalid!");
		return 0;
	}
	if (IS_STRING_VALID(bParam4))
	{
		bVar0 = GET_ASSET_ID(bParam4, 0);
		if (!UNK_0x214AFB8C(bVar0))
		{
			LOG_ERROR("SHOP_REGISTER_WEAPON: txtPropName is invalid!");
			return 0;
		}
	}
	if (!iParam0 != 4294967295)
	{
		Global_59354[iParam08] = uParam1;
		Global_59354[iParam08].f_4 = STRING_TO_HASH(GET_WEAPON_INTERNAL_NAME(iParam0));
		Global_59354[iParam08].f_8 = STRING_TO_HASH(bParam3);
		Global_59354[iParam08].f_12 = bVar0;
		Global_59354[iParam08].f_16 = iParam5;
		Global_59354[iParam08].f_24 = iParam6;
		Global_59354[iParam08].f_28 = iParam7;
		return 1;
	}
	return 0;
}

int Function_255(int iParam0, int iParam1) //Position: 0x13B61 / 80737
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

int Function_256(int iParam0, int iParam1) //Position: 0x13BBB / 80827
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

void Function_257(int iParam0) //Position: 0x13C17 / 80919
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, (iParam0 + Function_265(200)), 0);
	return;
}

void Function_258(bool bParam0) //Position: 0x13C38 / 80952
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_259(int iParam0) //Position: 0x13C53 / 80979
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_265(105)), 0);
	return;
}

void Function_260(int iParam0) //Position: 0x13C74 / 81012
{
	Global_12976.f_16 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 16, 0, false, (iParam0 + Function_265(90)), 0);
	return;
}

void Function_261(int iParam0) //Position: 0x13C95 / 81045
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_265(90)), 0);
	return;
}

void Function_262(bool bParam0) //Position: 0x13CB6 / 81078
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_421(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_421(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, false, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_421(Global_12976.f_24);
	PRINTNL();
	Function_261(bParam0);
	return;
}

void Function_263(int iParam0) //Position: 0x13D52 / 81234
{
	Global_12976 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976, 0, false, (iParam0 + Function_265(90)), 0);
	return;
}

void Function_264(int iParam0) //Position: 0x13D6F / 81263
{
	Global_12976.f_8 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 8, 0, false, (iParam0 + Function_265(90)), 0);
	return;
}

int Function_265(bool bParam0) //Position: 0x13D90 / 81296
{
	return CEIL(((IntToFloat(bParam0) * Global_63398) / 60.0f));
}

void Function_266(bool bParam0) //Position: 0x13DA6 / 81318
{
	if (bParam0)
	{
		Function_371(512);
	}
	else
	{
		Function_500(512);
	}
	return;
}

bool Function_267(int iParam0) //Position: 0x13DC0 / 81344
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

void Function_268(int iParam0, bool bParam1, bool bParam2) //Position: 0x13E01 / 81409
{
	int iVar0;
	bool bVar1;
	
	if (Function_276(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_267(1);
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
			Function_275(1, bVar1);
			if (!bParam2)
			{
				if (!Function_62(Global_76848, 1))
				{
					Function_57(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_274(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_62(Global_76848, 2))
				{
					Function_57(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_71(1, bVar1, 0, 0);
	}
	else
	{
		Function_99(1, (4294967295 * bVar1), 0);
	}
	if (Function_267(1) <= 4294962296)
	{
		Function_25(1, 4294962296, 0);
	}
	else if (Function_267(1) >= 5000)
	{
		Function_25(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_36(1));
	iVar0 = Function_267(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_270(2, Function_273(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_270(2, Function_273(Global_12976.f_152), 0);
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
				Function_270(2, Function_273(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_270(2, Function_273(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_270(2, Function_273(Global_12976.f_152), 1);
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
				Function_270(2, Function_273(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_270(2, Function_273(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_270(2, Function_273(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_270(2, Function_273(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_270(2, Function_273(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_270(2, Function_273(Global_12976.f_152), 1);
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
				Function_270(2, Function_273(Global_12976.f_152), 0);
			}
			break;
	}
	Function_269(Global_12976.f_152, Global_12976.f_156);
	return;
}

void Function_269(int iParam0, int iParam1) //Position: 0x14118 / 82200
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,2f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,3f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,4f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,5f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,8f);
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

int Function_270(int iParam0, char* cParam1, bool bParam2) //Position: 0x14376 / 82806
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
	Function_271(iParam0, cParam1, 0, 1);
	iVar1 = Function_116();
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

int Function_271(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x144FB / 83195
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
		Function_272(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_272(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x1484D / 84045
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

var Function_273(int iParam0) //Position: 0x148D0 / 84176
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

int Function_274(int iParam0, bool bParam1) //Position: 0x14973 / 84339
{
	bool bVar0;
	int iVar1;
	
	Function_99(iParam0, bParam1, 0);
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
	iVar1 = Function_119(iParam0, 4294967295);
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
	iVar1 = Function_116();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_275(int iParam0, bool bParam1) //Position: 0x14B0F / 84751
{
	bool bVar0;
	int iVar1;
	
	Function_71(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_119(iParam0, 4294967295);
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
	iVar1 = Function_116();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_276(int iParam0) //Position: 0x14CAC / 85164
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_277(int iParam0, bool bParam1, bool bParam2) //Position: 0x14CBB / 85179
{
	int iVar0;
	bool bVar1;
	
	if (Function_276(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_267(3);
	Function_279();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_275(3, bVar1);
		if (!bParam2)
		{
			if (!Function_62(Global_76848, 4))
			{
				Function_57(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_71(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_36(3));
	iVar0 = Function_267(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_270(4, Function_278(Global_12976.f_156), 1);
				Function_269(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_270(4, Function_278(Global_12976.f_156), 1);
				Function_269(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_270(4, Function_278(Global_12976.f_156), 1);
				Function_269(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_270(4, Function_278(Global_12976.f_156), 1);
				Function_269(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_270(4, Function_278(Global_12976.f_156), 1);
				Function_269(Global_12976.f_152, Global_12976.f_156);
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

var Function_278(int iParam0) //Position: 0x14E7E / 85630
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

void Function_279() //Position: 0x14F0D / 85773
{
	Function_281(3, 0.0f);
	Function_280(3, 10000.0f);
	return;
}

int Function_280(int iParam0, int iParam1) //Position: 0x14F23 / 85795
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_281(int iParam0, int iParam1) //Position: 0x14F63 / 85859
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

bool Function_282() //Position: 0x14FA3 / 85923
{
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (!Function_283(Global_12976.f_36, 1, 0x41700000))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_283(bool bParam0, bool bParam1, float fParam2) //Position: 0x14FC9 / 85961
{
	float fVar0;
	bool bVar1;
	
	if (Function_513() || !bParam1)
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

void Function_284(bool bParam0, int iParam1) //Position: 0x15066 / 86118
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_513())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_285(bool bParam0) //Position: 0x150A8 / 86184
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_286();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_16();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_514(&Global_63095, 1);
		Function_514(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_286() //Position: 0x150F9 / 86265
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_287(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_287(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_55(StackVal, StackVal, vVar0))
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

vector3 Function_287(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1519A / 86426
{
	int iVar0;
	
	iVar0 = Function_93(uParam2, uParam3);
	if (Function_92(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_515(&Global_63095, 1);
			Function_514(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_515(&Global_63095, 2);
			Function_514(&Global_63095, 1);
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
		Function_515(&Global_63095, 2);
		Function_514(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_138();
	return StackVal, StackVal, Function_138();
}

void Function_288() //Position: 0x15281 / 86657
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

void Function_289(int iParam0, bool bParam1) //Position: 0x152AF / 86703
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
							Function_57(Global_34573, 0x1000000, 3, 0);
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
							Function_57(Global_34573, 0x1000000, 3, 0);
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
							Function_57(Global_34573, 0x1000000, 3, 0);
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
							Function_57(Global_34573, 0x1000000, 3, 0);
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
							Function_57(Global_34573, 0x1000000, 3, 0);
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
							Function_57(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_289(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_289(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_289(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_289(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_289(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_289(57, 0);
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

void Function_290(int iParam0) //Position: 0x155A6 / 87462
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	char* cVar5[16];
	
	iVar0 = *iParam0;
	iVar1 = Function_296(*iParam0);
	bVar2 = StackVal;
	iVar4 = Function_295(iVar0, iVar1, Global_13172[bVar211].f_32, Global_13172[bVar211].f_28, Global_13172[bVar211].f_20);
	if (Global_13172[bVar211].f_32 < iParam0->f_40)
	{
		Global_13172[bVar211].f_32 = iParam0->f_40;
		cVar5 = { StackVal, StackVal, StackVal, Function_294(iVar0) };
		stradd(&cVar5, "_Float2", 16);
		UPDATE_PROFILE_STAT(&cVar5, iParam0->f_40, 1);
	}
	switch (iVar1)
	{
		case 0x00000000:
			if (Global_13172[bVar211].f_20 <= iParam0->f_28)
			{
				Global_13172[bVar211].f_20 = iParam0->f_28;
				cVar5 = { StackVal, StackVal, StackVal, Function_294(iVar0) };
				stradd(&cVar5, "_Int1", 16);
				UPDATE_PROFILE_STAT(&cVar5, TO_FLOAT(iParam0->f_28), 1);
			}
			if (Global_13172[bVar211].f_24 <= iParam0->f_32)
			{
				Global_13172[bVar211].f_24 = iParam0->f_32;
			}
		
		case 0x00000001:
			if (Global_13172[bVar211].f_28 > iParam0->f_36)
			{
				Global_13172[bVar211].f_28 = iParam0->f_36;
				cVar5 = { StackVal, StackVal, StackVal, Function_294(iVar0) };
				stradd(&cVar5, "_Float1", 16);
				UPDATE_PROFILE_STAT(&cVar5, iParam0->f_36, 1);
			}
			break;
		
		case 0x00000002:
			if (Global_13172[bVar211].f_28 > iParam0->f_36)
			{
				Global_13172[bVar211].f_28 = iParam0->f_36;
				cVar5 = { StackVal, StackVal, StackVal, Function_294(iVar0) };
				stradd(&cVar5, "_Float1", 16);
				UPDATE_PROFILE_STAT(&cVar5, iParam0->f_36, 1);
			}
			if (Global_13172[bVar211].f_20 <= iParam0->f_28)
			{
				Global_13172[bVar211].f_20 = iParam0->f_28;
				cVar5 = { StackVal, StackVal, StackVal, Function_294(iVar0) };
				stradd(&cVar5, "_Int1", 16);
				UPDATE_PROFILE_STAT(&cVar5, TO_FLOAT(iParam0->f_28), 1);
			}
			break;
	}
	if (StackVal != 4 && !iParam0->f_20)
	{
		Global_13172[bVar211].f_4 = 3;
		Function_291(bVar2);
	}
	iVar3 = Function_295(iVar0, iVar1, Global_13172[bVar211].f_32, Global_13172[bVar211].f_28, Global_13172[bVar211].f_20);
	if (iVar4 == 1 && iVar3 != 1)
	{
		Function_277(50, 1, 0);
		if (!Function_62(Global_76846, 131072))
		{
			Function_57(Function_23(), 131072, 1, 1);
		}
		if (iVar1 == 0)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
			{
				AWARD_ACHIEVEMENT(28);
			}
		}
	}
	SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Global_3422[iVar040] + 12), iVar3);
	return;
}

void Function_291(bool bParam0) //Position: 0x157FA / 88058
{
	int iVar0;
	int iVar1;
	
	if (!Function_49(bParam0))
	{
		return;
	}
	switch (Function_234(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_293(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_71(12, 1, 0, 0);
				Function_51(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_71(13, 1, 0, 0);
				Function_51(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_71(14, 1, 0, 0);
				Function_51(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_71(15, 1, 0, 0);
				Function_51(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_71(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_293(bParam0))
			{
				case 0x00000000:
					if (Function_48(bParam0) == 1)
					{
						iVar0 = Function_292(bParam0);
						if (Function_339(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_51(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_51(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_51(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_51(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_51(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_51(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_51(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_51(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_51(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_51(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_51(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_51(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_51(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_51(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_51(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_51(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_51(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_51(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_51(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_51(4, 19);
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
								Function_71(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_71(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_71(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_292(bParam0) == 0)
			{
				if (Function_48(bParam0) == 1)
				{
					Function_71(458, 1, 0, 0);
					iVar0 = Function_293(bParam0);
					if (Function_339(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_51(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_51(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_51(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_51(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_51(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_51(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_51(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_51(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_48(bParam0) == 1)
			{
				Function_71(400, 1, 0, 0);
			}
			switch (Function_293(bParam0))
			{
				case 0x00000001:
					Function_71(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_51(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_51(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_51(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_71(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_51(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_51(6, 9);
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

int Function_292(bool bParam0) //Position: 0x15CD6 / 89302
{
	if (!Function_49(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_293(bool bParam0) //Position: 0x15CF5 / 89333
{
	if (!Function_49(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

struct<16> Function_294(int iParam0) //Position: 0x15D15 / 89365
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_295(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x15D3A / 89402
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

int Function_296(int iParam0) //Position: 0x15F02 / 89858
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

bool Function_297(int iParam0) //Position: 0x15F97 / 90007
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_298(int iParam0) //Position: 0x15FAD / 90029
{
	if (!Function_297(iParam0))
	{
		return 5;
	}
	return Global_3422[iParam040];
}

void Function_299() //Position: 0x15FC5 / 90053
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

void Function_300() //Position: 0x16016 / 90134
{
	PRINTSTRING("Locking advanced weapons...");
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
	SET_WEAPONENUM_LOCKED(8, 1);
	SET_WEAPONENUM_LOCKED(9, 1);
	SET_WEAPONENUM_LOCKED(10, 1);
	SET_WEAPONENUM_LOCKED(11, 1);
	SET_WEAPONENUM_LOCKED(16, 1);
	SET_WEAPONENUM_LOCKED(17, 1);
	SET_WEAPONENUM_LOCKED(18, 1);
	SET_WEAPONENUM_LOCKED(15, 1);
	SET_WEAPONENUM_LOCKED(22, 0);
	SET_WEAPONENUM_LOCKED(23, 1);
	SET_WEAPONENUM_LOCKED(24, 1);
	SET_WEAPONENUM_LOCKED(25, 1);
	return;
}

int Function_301(bool bParam0, bool bParam1) //Position: 0x160CE / 90318
{
	bool bVar0;
	
	bVar0 = Function_267(0);
	if ((Function_267(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_71(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_267(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_71(597, bParam0, 0, 0);
	}
	if ((Function_267(597) + Function_267(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_302() //Position: 0x16199 / 90521
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
	bVar2 = Function_23();
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

var Function_303(bool bParam0) //Position: 0x1626A / 90730
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

void Function_304() //Position: 0x1635B / 90971
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_372(16384);
	}
	return;
}

bool Function_305(int iParam0) //Position: 0x16377 / 90999
{
	if (!Function_339(iParam0))
	{
		return 1;
	}
	return Function_108(&(Global_29008[iParam0]), 4);
}

bool Function_306(int iParam0, float fParam1, bool bParam2, int iParam3) //Position: 0x16393 / 91027
{
	vector3 vVar0;
	char* cVar3[64];
	var uVar19;
	int iVar21;
	float fVar22;
	
	if (!Function_314(&vVar0))
	{
		return 1;
	}
	if (Global_34165.f_44)
	{
		if (Function_312(32))
		{
			return 1;
		}
	}
	if (Global_30618 != 4294967295)
	{
		strcpy(&cVar3, "$/content/init/pop/", 64);
		stradd(&cVar3, &Global_29155[Global_3061810] + 20, 64);
		stradd(&cVar3, "_population", 64);
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
			if (!Function_108(&(Global_29008[iVar21]), 1) && !Function_108(&(Global_29008[iVar21]), 4))
			{
				if (!Function_108(&(Global_29008[iVar21]), 1024))
				{
					if (Global_29155[iVar2110] == 4294967295)
					{
						Function_337(iVar21, 0);
					}
					else if (Function_108(&(Global_29008[Global_29155[iVar2110]]), 1024))
					{
						Function_337(iVar21, 0);
						Function_309(Global_29155[iVar2110]);
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
					if (!Function_108(&(Global_29008[iVar21]), 4) && !Function_108(&(Global_29008[iVar21]), 1))
					{
						if (StackVal == 2)
						{
							if (StackVal && (Function_108(&(Global_29008[Global_29005]), 4) || Function_108(&(Global_29008[Global_29005]), 1)) != 2)
							{
								Function_111(&(Global_29008[Global_29005]), 2);
								Function_309(Global_29005);
							}
							Global_29005 = iVar21;
						}
						Function_337(iVar21, iParam3);
					}
					else if (StackVal == 6)
					{
						Function_307(iVar21);
					}
					Global_29155[iVar2110].f_12 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_108(&(Global_29008[iVar21]), 4) || Function_108(&(Global_29008[iVar21]), 1))
				{
					if (!StackVal != 2)
					{
						if (!Function_108(&(Global_29008[iVar21]), 2097152))
						{
							if (Global_29155[iVar2110].f_12 + 5.0f) > GET_CURRENT_GAME_TIME()
							{
								Function_309(iVar21);
							}
							else if (!Function_108(&(Global_29008[iVar21]), 2))
							{
								Function_111(&(Global_29008[iVar21]), 2);
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

void Function_307(int iParam0) //Position: 0x1663A / 91706
{
	vector3 vVar0;
	
	if (!Function_108(&(Global_29008[iParam0]), 65536))
	{
		return;
	}
	if (Function_108(&(Global_29008[iParam0]), 1048576))
	{
		return;
	}
	if (Global_13053.f_12 + 10.0f) < GET_CURRENT_GAME_TIME()
	{
		return;
	}
	if (IS_ACTOR_RIDING(Global_34573) && Function_308(Global_34573, 1) < 2.0f)
	{
		return;
	}
	if (Function_14(0, 0, 1, 1))
	{
		Function_111(&(Global_29008[iParam0]), 1048576);
		return;
	}
	if (IS_ANY_SPEECH_PLAYING(Global_34573))
	{
		return;
	}
	GET_OBJECT_POSITION(StackVal, &vVar0);
	if (Function_91(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar0) > 25.0f)
	{
		SAY_SINGLE_LINE_CONTEXT(Global_34573, 360, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		Function_111(&(Global_29008[iParam0]), 1048576);
	}
	return;
}

float Function_308(bool bParam0, bool bParam1) //Position: 0x166F2 / 91890
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_309(int iParam0) //Position: 0x16711 / 91921
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	int iVar5;
	char* cVar7[64];
	
	if (!Function_339(iParam0))
	{
		return;
	}
	Function_416(&(Global_29008[iParam0]), 262147);
	if (StackVal == 6)
	{
		Function_416(&(Global_29008[iParam0]), 4);
		if (!Global_3380 && !Function_513())
		{
			if (Function_339(Global_29155[iParam010]))
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
	if (!Function_314(&vVar0))
	{
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 5) != 4)
	{
		Function_416(&(Global_29008[iParam0]), 131072);
		iVar3 = Function_311(StackVal, StackVal, Global_34574, 1);
		if (!Function_339(iVar3))
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
			if (!Function_310(Global_29155[iParam010], iParam0))
			{
				iVar5 = iVar3;
				strcpy(&cVar7, "ninit/pop/", 64);
				stradd(&cVar7, &Global_29155[iVar310] + 20, 64);
				stradd(&cVar7, "_population", 64);
				if (Global_29155[iParam010].f_16 != 4294967295)
				{
					if (IS_SCRIPT_VALID(Global_30617))
					{
						TERMINATE_SCRIPT(Global_30617);
					}
					Global_30617 = LAUNCH_NEW_SCRIPT_WITH_ARGS(&cVar7, &iVar5, 2, 0);
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

bool Function_310(int iParam0, int iParam1) //Position: 0x1688E / 92302
{
	int iVar0;
	vector3 vVar1;
	
	if (!Function_314(&vVar1))
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

var Function_311(vector3 vParam0, bool bParam3) //Position: 0x16906 / 92422
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

bool Function_312(int iParam0) //Position: 0x16971 / 92529
{
	return Function_313(Global_78617.f_52, iParam0);
}

int Function_313(var uParam0, int iParam1) //Position: 0x16982 / 92546
{
	return (uParam0 && iParam1) == 0;
}

bool Function_314(bool bParam0) //Position: 0x1698F / 92559
{
	bool bVar0;
	
	bVar0 = Function_23();
	if (IS_ACTOR_VALID(bVar0))
	{
		GET_POSITION(bVar0, bParam0);
	}
	else if (!GET_CAMERA_CHANNEL_POSITION(bParam0, 0))
	{
		return 0;
	}
	return 1;
}

void Function_315(bool bParam0) //Position: 0x169B9 / 92601
{
	Function_316(bParam0);
	Function_316(bParam0);
	Function_316(bParam0);
	Function_316(bParam0);
	return;
}

int Function_316(bool bParam0) //Position: 0x169D7 / 92631
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	struct<8> Var6;
	struct<4> Var14;
	
	if (Function_513())
	{
		return 1;
	}
	if (!IS_OBJECT_VALID(Global_34573))
	{
		return 0;
	}
	fVar0 = 1800.0f;
	if (!bParam0 && !Function_363(8192))
	{
		return 0;
	}
	bVar1 = DECOR_GET_INT(Global_34573, "tutorial");
	bVar2 = DECOR_GET_INT(Global_34573, "ntutorial2");
	bVar3 = DECOR_GET_INT(Global_34573, "ntutorial3");
	bVar4 = DECOR_GET_INT(Global_34573, "ntutorial4");
	if (!Function_62(Global_76849, 4))
	{
		if (Function_324(bVar4, 4))
		{
			Function_393(&Global_76849, 4);
			Function_323(Global_34573, 4, 4);
			if (!bParam0)
			{
				Function_239("tutorial_camp_fast_travel", 30.0f, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if (!Function_62(Global_76846, 0x4000000) && !(((((((Global_3380 || Global_3394) || Global_3382) || Global_3369) || Global_3367) || Global_63096) || Global_3395) || Global_3396))
	{
		if (Function_324(bVar1, 0x4000000))
		{
			Function_393(&Global_76846, 0x4000000);
			if (!bParam0)
			{
				Function_239("tutorial_rare_horse", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if ((Global_3365 && !Function_62(Global_76849, 8)) && !((((Global_3369 || Global_63096) || Global_3384) || Global_3395) || Global_3396))
	{
		if (((GET_ACTOR_HEALTH(Global_34573) > (GET_ACTOR_MAX_HEALTH(Global_34573) * 0,3f) && HAS_ITEM(Function_303(3), Global_34573)) && IS_ACTOR_ALIVE(Global_34573)) && !IS_ACTOR_IN_WATER(Global_34573))
		{
			Function_393(&Global_76849, 8);
			if (!bParam0)
			{
				Function_239("tutorial_first_health", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if (!bParam0 && ((((((((((Global_59353 || Global_3380) || Global_3382) || Global_3367) || Global_63096) || Global_3395) || Global_3394) || Global_3384) || Global_3369) || Global_3396) || !IS_ACTOR_ALIVE(Global_34573)))
	{
		return 0;
	}
	if (!bParam0 && ((Function_81() || HUD_IS_FADED()) || HUD_IS_FADING()))
	{
		return 0;
	}
	if (!bParam0 && (Global_26281 + 5.0f) < GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	if (!bParam0)
	{
		iVar5 = 0;
		while (iVar5 <= Global_3422)
		{
			if (Function_322(&Global_3422[iVar540] + 128, 16))
			{
				if (((Global_6269 != Global_3422[iVar540].f_132 || Global_6269 != Global_3422[iVar540].f_136) || Global_6269 != Global_3422[iVar540].f_140) || Global_6269 != Global_3422[iVar540].f_144)
				{
					if (Global_3422[iVar540].f_124)
					{
						if (IS_BLIP_VALID(Global_3422[iVar540].f_100))
						{
							SET_BLIP_BLINK(Global_3422[iVar540].f_100, 1, 0, 5f);
						}
						Var14 = { StackVal, StackVal, StackVal, Function_294(iVar5) };
						strcpy(&Var6, "comp_intro_", 32);
						stradd(&Var6, UI_GET_STRING(&Var14), 32);
						if (iVar5 == 49)
						{
							Function_321(&Var6, 0x40f00000, 1, 2, 0, 0, 0);
						}
						else
						{
							Function_239(&Var6, 0x41200000, 1, 0, 2, 1, 0);
						}
						Function_320(&Global_3422[iVar540] + 128, 16);
						return 0;
					}
				}
			}
			iVar5++;
		}
	}
	switch (iLocal_237)
	{
		case 0x00000000:
			if (!Function_62(Global_76847, 0x10000000))
			{
				if (Function_324(bVar2, 0x10000000))
				{
					Function_393(&Global_76847, 0x10000000);
					Function_323(Global_34573, 0x10000000, 2);
					if (!bParam0)
					{
						Function_239("tutorial_aggro_ped", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76847, 1))
			{
				if (Function_324(bVar2, 1))
				{
					Function_393(&Global_76847, 1);
					Function_323(Global_34573, 1, 2);
					if (!bParam0)
					{
						Function_239("tutorial_eyewitness_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76847, 2))
			{
				if (Function_324(bVar2, 2))
				{
					Function_393(&Global_76847, 2);
					Function_323(Global_34573, 2, 2);
					if (!bParam0)
					{
						Function_239("tutorial_eyewitness_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76847, 4))
			{
				if (Function_324(bVar2, 4))
				{
					Function_393(&Global_76847, 4);
					Function_323(Global_34573, 4, 2);
					if (!bParam0)
					{
						Function_239("tutorial_eyewitness_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76847, 4194304))
			{
				if (Function_324(bVar2, 4194304))
				{
					Function_393(&Global_76847, 4194304);
					Function_323(Global_34573, 4194304, 2);
					if (!bParam0)
					{
						Function_239("tutorial_eyewitness_delayed", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76847, 0x2000000))
			{
				if (Function_324(bVar2, 0x2000000))
				{
					Function_393(&Global_76847, 0x2000000);
					Function_323(Global_34573, 0x2000000, 2);
					if (!bParam0)
					{
						Function_239("tutorial_wanted_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76847, 0x4000000))
			{
				if (Function_62(Global_76847, 0x2000000))
				{
					Function_393(&Global_76847, 0x4000000);
					if (!bParam0)
					{
						Function_239("tutorial_law_lost_awareness", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76847, 0x8000000))
			{
				if (Function_324(bVar2, 0x8000000))
				{
					Function_393(&Global_76847, 0x8000000);
					Function_323(Global_34573, 0x8000000, 2);
					if (!bParam0)
					{
						Function_239("tutorial_rcm_wanted", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_324(bVar2, 32768))
			{
				Function_393(&Global_76847, 32768);
				Function_323(Global_34573, 32768, 2);
				Function_239("tutorial_law_local_spawn", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_324(bVar2, 128))
			{
				if (Function_62(Global_76847, 65536))
				{
					Function_393(&Global_76847, 128);
					Function_323(Global_34573, 128, 2);
					Function_239("tutorial_law_posse_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_324(bVar2, 256))
			{
				if (Function_62(Global_76847, 131072))
				{
					Function_393(&Global_76847, 256);
					Function_323(Global_34573, 256, 2);
					Function_239("tutorial_law_marshal_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_324(bVar2, 512))
			{
				if (Function_62(Global_76847, 262144))
				{
					Function_393(&Global_76847, 512);
					Function_323(Global_34573, 512, 2);
					Function_239("tutorial_law_bounty_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_324(bVar2, 1024))
			{
				if (Function_62(Global_76847, 131072))
				{
					Function_393(&Global_76847, 1024);
					Function_323(Global_34573, 1024, 2);
					Function_239("tutorial_law_army_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (!Function_62(Global_76847, 64))
			{
				if (Function_324(bVar2, 64))
				{
					Function_393(&Global_76847, 64);
					Function_323(Global_34573, 64, 2);
					if (!bParam0)
					{
						Function_239("tutorial_player_arrested", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76847, 16384))
			{
				if (Function_324(bVar2, 16384))
				{
					Function_393(&Global_76847, 16384);
					Function_323(Global_34573, 16384, 2);
					if (!bParam0)
					{
						Function_239("tutorial_law_captured", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76847, 0x1000000))
			{
				if (Function_324(bVar2, 0x1000000))
				{
					Function_393(&Global_76847, 0x1000000);
					Function_323(Global_34573, 0x1000000, 2);
					if (!bParam0)
					{
						Function_239("tutorial_law_rewanted", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76847, 8))
			{
				if (Global_3403 && Global_26316.f_176)
				{
					Function_393(&Global_76847, 8);
					if (!bParam0)
					{
						Function_239("tutorial_wanted_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76847, 8388608))
			{
				if (Function_324(bVar2, 8388608))
				{
					Function_393(&Global_76847, 8388608);
					if (!bParam0)
					{
						Function_239("tutorial_law_lost_awareness2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76847, 32))
			{
				if (Function_324(bVar2, 32))
				{
					Function_393(&Global_76847, 32);
					Function_323(Global_34573, 32, 2);
					if (!bParam0)
					{
						Function_239("tutorial_law_near", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76847, 4096))
			{
				if (Function_324(bVar2, 4096))
				{
					Function_393(&Global_76847, 4096);
					Function_323(Global_34573, 4096, 2);
					if (!bParam0)
					{
						Function_239("tutorial_law_losing_track", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76847, 16) && Function_62(Global_76847, 8))
			{
				if (Function_324(bVar2, 16))
				{
					Function_393(&Global_76847, 16);
					Function_323(Global_34573, 16, 2);
					if (!bParam0)
					{
						Function_239("tutorial_civilian_awareness", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76847, 2048))
			{
				if (Function_324(bVar2, 2048))
				{
					Function_393(&Global_76847, 2048);
					Function_323(Global_34573, 2048, 2);
					if (!bParam0)
					{
						Function_239("tutorial_law_difficulty_increase", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76847, 8192))
			{
				if (Function_324(bVar2, 8192))
				{
					Function_393(&Global_76847, 8192);
					Function_323(Global_34573, 8192, 2);
					if (!bParam0)
					{
						return 0;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!Function_62(Global_76848, 16384))
			{
				if (Function_324(bVar3, 16384))
				{
					Function_393(&Global_76848, 16384);
					Function_323(Global_34573, 16384, 3);
					if (!bParam0)
					{
						Function_239("tutorial_law_bribe", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 32768))
			{
				if (Function_324(bVar3, 32768))
				{
					Function_393(&Global_76848, 32768);
					Function_323(Global_34573, 32768, 3);
					if (!bParam0)
					{
						Function_239("tutorial_law_surrender", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 65536))
			{
				if (Function_324(bVar3, 65536))
				{
					Function_393(&Global_76848, 65536);
					Function_323(Global_34573, 65536, 3);
					if (!bParam0)
					{
						Function_239("tutorial_law_extra_cops1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 131072))
			{
				if (Function_324(bVar3, 131072))
				{
					Function_393(&Global_76848, 131072);
					Function_323(Global_34573, 131072, 3);
					if (!bParam0)
					{
						Function_239("tutorial_law_extra_cops2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 262144))
			{
				if (Function_324(bVar3, 262144))
				{
					Function_393(&Global_76848, 262144);
					Function_323(Global_34573, 262144, 3);
					if (!bParam0)
					{
						Function_239("tutorial_law_less_cops", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_324(bVar2, 524288))
			{
				Function_393(&Global_76847, 524288);
				Function_323(Global_34573, 524288, 2);
				Function_239("tutorial_law_local_end1", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (!Function_62(Global_76847, 1048576))
			{
				if (Function_62(Global_76847, 524288))
				{
					Function_393(&Global_76847, 1048576);
					if (!bParam0)
					{
						return 0;
					}
				}
			}
			if (Function_324(bVar2, 2097152))
			{
				Function_393(&Global_76847, 2097152);
				Function_323(Global_34573, 2097152, 2);
				Function_239("tutorial_law_pursuit_end", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_324(bVar2, 65536))
			{
				Function_393(&Global_76847, 65536);
				Function_323(Global_34573, 65536, 2);
				Function_239("tutorial_law_posse_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_324(bVar2, 131072))
			{
				Function_393(&Global_76847, 131072);
				Function_323(Global_34573, 131072, 2);
				Function_239("tutorial_law_marshal_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_324(bVar2, 262144))
			{
				Function_393(&Global_76847, 262144);
				Function_323(Global_34573, 262144, 2);
				Function_239("tutorial_law_bounty_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (!Function_62(Global_76848, 0x2000000))
			{
				if (Function_324(bVar3, 0x2000000))
				{
					Function_393(&Global_76848, 0x2000000);
					Function_323(Global_34573, 0x2000000, 3);
					Function_239("whistle_GotEvilHorse", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			break;
		
		case 0x00000002:
			if (Global_3403 || Global_3404)
			{
				break;
			}
			if (!Function_62(Global_76846, 0x20000000))
			{
				if (Function_364(8, 0))
				{
					Function_393(&Global_76846, 0x20000000);
					if (!bParam0)
					{
						Function_239("tutorial_first_camp_M1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 0x4000000))
			{
				if (Function_364(8, 0))
				{
					Function_393(&Global_76846, 0x4000000);
					if (!bParam0)
					{
						Function_239("tutorial_loot", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 0x8000000))
			{
				if (Function_324(bVar3, 0x8000000))
				{
					Function_393(&Global_76848, 0x8000000);
					if (!bParam0)
					{
						Function_239("Old_News_Avail", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 8))
			{
				if (Function_324(bVar1, 8))
				{
					Function_393(&Global_76846, 8);
					if (!bParam0)
					{
						Function_239("tutorial_road_to_armadillo", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 1))
			{
				if (IS_ACTOR_DRIVING_VEHICLE(Global_34573) && !(Function_364(4, 0) || Function_364(10, 0)))
				{
					if (IS_ACTOR_DRAFT_VEHICLE(GET_VEHICLE(Global_34573)))
					{
						Function_393(&Global_76846, 1);
						if (!bParam0)
						{
							Function_239("tutorial_first_drive_coach", 0x41200000, 1, 0, 2, 1, 0);
							return 0;
						}
					}
				}
			}
			if (!Function_62(Global_76846, 64))
			{
				if (Function_324(bVar1, 64))
				{
					Function_393(&Global_76846, 64);
					Function_323(Global_34573, 64, 1);
					if (!bParam0)
					{
						Function_239("tutorial_first_see_coach", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 256))
			{
				if (Function_324(bVar1, 256))
				{
					Function_393(&Global_76846, 256);
					Function_323(Global_34573, 256, 1);
					if (!bParam0)
					{
						Function_239("tutorial_first_passenger_coach", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 128))
			{
				if (Function_324(bVar1, 128))
				{
					Function_319(5.0f);
					Function_393(&Global_76846, 128);
					Function_323(Global_34573, 128, 1);
					if (!bParam0)
					{
						Function_239("tutorial_first_horse_agitated", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 2097152))
			{
				if (Function_324(bVar1, 2097152))
				{
					Function_393(&Global_76846, 2097152);
					Function_323(Global_34573, 2097152, 1);
					if (!bParam0)
					{
						Function_239("tutorial_rcm_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 4194304))
			{
				if (Function_62(Global_76846, 2097152))
				{
					Function_393(&Global_76846, 4194304);
					Function_323(Global_34573, 4194304, 1);
					if (!bParam0)
					{
						Function_239("tutorial_rcm_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 8388608))
			{
				if (Function_62(Global_76846, 4194304))
				{
					Function_393(&Global_76846, 8388608);
					Function_323(Global_34573, 8388608, 1);
					if (!bParam0)
					{
						Function_239("tutorial_rcm_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 2))
			{
				if (Function_324(bVar1, 2))
				{
					Function_393(&Global_76846, 2);
					Function_323(Global_34573, 2, 1);
					if (!bParam0)
					{
						Function_239("tutorial_first_outfit1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 4))
			{
				if (Function_62(Global_76846, 2))
				{
					Function_393(&Global_76846, 4);
					if (!bParam0)
					{
						Function_239("tutorial_first_outfit2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_78(3))
			{
				if (!Function_62(Global_76846, 512))
				{
					if (Function_324(bVar1, 512))
					{
						Function_393(&Global_76846, 512);
						Function_323(Global_34573, 512, 1);
						if (!bParam0)
						{
							Function_239("tutorial_lost_cards", 0x41200000, 1, 0, 2, 1, 0);
						}
						Function_75(3, 0, 1, 1);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 4096))
			{
				if ((Global_29007 != 2 && !Global_3388) && !Function_14(0, 0, 1, 6))
				{
					Function_393(&Global_76846, 4096);
					if (!bParam0)
					{
						Function_239("tutorial_first_camp", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 8192))
			{
				if (Function_62(Global_76846, 4096))
				{
					Function_393(&Global_76846, 8192);
					if (!bParam0)
					{
						Function_239("tutorial_first_camp2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 1024))
			{
				if (((Global_29007 != 2 && !Global_3388) && !Function_14(0, 0, 1, 1)) && Function_364(4, 0))
				{
					Function_393(&Global_76846, 1024);
					if (!bParam0)
					{
						Function_239("tutorial_first_wilderness1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 2048))
			{
				if (Function_62(Global_76846, 1024))
				{
					Function_393(&Global_76846, 2048);
					if (!bParam0)
					{
						Function_239("tutorial_first_wilderness2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 16))
			{
				if (Function_324(bVar1, 16) && !Global_3380)
				{
					Function_393(&Global_76846, 16);
					Function_323(Global_34573, 16, 1);
					if (!bParam0)
					{
						Function_239("tutorial_first_action_area1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 32))
			{
				if (Function_62(Global_76846, 16))
				{
					Function_393(&Global_76846, 32);
					if (!bParam0)
					{
						Function_239("tutorial_first_action_area2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 32768))
			{
				if (Function_324(bVar1, 32768))
				{
					Function_393(&Global_76846, 32768);
					if (!bParam0)
					{
						Function_239("tutorial_kill_job", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 65536))
			{
				if (Function_324(bVar1, 65536))
				{
					Function_323(Global_34573, 65536, 1);
					if (!bParam0)
					{
						Function_239("tutorial_kill_shop", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 131072))
			{
				if (Function_324(bVar1, 131072))
				{
					Function_393(&Global_76846, 131072);
					if (!bParam0)
					{
						Function_239("tutorial_first_headshot_bonus", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 524288))
			{
				if (Function_324(bVar1, 524288))
				{
					Function_393(&Global_76846, 524288);
					if (!bParam0)
					{
						Function_239("tutorial_first_robbery", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 1048576))
			{
				if (Function_324(bVar1, 1048576))
				{
					Function_393(&Global_76846, 1048576);
					if (!bParam0)
					{
						Function_239("tutorial_first_robbery_denial", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 0x1000000))
			{
				if (Function_324(bVar1, 0x1000000))
				{
					Function_393(&Global_76846, 0x1000000);
					if (!bParam0)
					{
						Function_239("tutorial_second_weapon1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 0x2000000))
			{
				if (Function_62(Global_76846, 0x1000000))
				{
					Function_393(&Global_76846, 0x2000000);
					if (!bParam0)
					{
						Function_239("tutorial_second_weapon2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 4194304))
			{
				if (Function_324(bVar3, 4194304))
				{
					Function_393(&Global_76848, 4194304);
					if (!bParam0)
					{
						Function_239("tutorial_random_char", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 524288))
			{
				if (Function_324(bVar3, 524288))
				{
					Function_393(&Global_76848, 524288);
					if (!bParam0)
					{
						Function_239("tutorial_skinning_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 1048576))
			{
				if (Function_62(Global_76848, 524288))
				{
					Function_393(&Global_76848, 1048576);
					if (!bParam0)
					{
						Function_239("tutorial_skinning_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 2097152))
			{
				if (Function_324(bVar3, 2097152))
				{
					Function_393(&Global_76848, 2097152);
					if (!bParam0)
					{
						Function_239("tutorial_skinning_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
		
		case 0x00000003:
			if (Global_3403 || Global_3404)
			{
				break;
			}
			if (!Function_62(Global_76846, 262144))
			{
				if (Function_324(bVar1, 262144))
				{
					Function_393(&Global_76846, 262144);
					if (!bParam0)
					{
						Function_239("tutorial_bounty_no_money_first", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 1))
			{
				if (Function_324(bVar3, 1))
				{
					Function_393(&Global_76848, 1);
					Function_323(Global_34573, 1, 3);
					if (!bParam0)
					{
						Function_239("tutorial_first_honor_positive", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 2))
			{
				if (Function_324(bVar3, 2))
				{
					Function_393(&Global_76848, 2);
					Function_323(Global_34573, 2, 3);
					if (!bParam0)
					{
						Function_239("tutorial_first_honor_negative", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 4))
			{
				if (Function_324(bVar3, 4))
				{
					Function_393(&Global_76848, 4);
					Function_323(Global_34573, 4, 3);
					if (!bParam0)
					{
						Function_239("tutorial_first_notoriety_positive", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 8))
			{
				if (Function_318() == 0)
				{
					Function_393(&Global_76848, 8);
					if (!bParam0)
					{
						Function_239("tutorial_very_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 16))
			{
				if (Function_318() == 1)
				{
					Function_393(&Global_76848, 16);
					if (!bParam0)
					{
						Function_239("tutorial_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 32))
			{
				if (Function_318() == 2)
				{
					Function_393(&Global_76848, 32);
					if (!bParam0)
					{
						Function_239("tutorial_medium_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 64))
			{
				if (Function_318() == 4)
				{
					Function_393(&Global_76848, 64);
					if (!bParam0)
					{
						Function_239("tutorial_medium_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 128))
			{
				if (Function_318() == 5)
				{
					Function_393(&Global_76848, 128);
					if (!bParam0)
					{
						Function_239("tutorial_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 256))
			{
				if (Function_318() == 6)
				{
					Function_393(&Global_76848, 256);
					if (!bParam0)
					{
						Function_239("tutorial_very_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 512))
			{
				if (Function_317() == 1)
				{
					Function_393(&Global_76848, 512);
					if (!bParam0)
					{
						Function_239("tutorial_low_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 1024))
			{
				if (Function_317() == 2)
				{
					Function_393(&Global_76848, 1024);
					if (!bParam0)
					{
						Function_239("tutorial_medium_low_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 2048))
			{
				if (Function_317() == 3)
				{
					Function_393(&Global_76848, 2048);
					if (!bParam0)
					{
						Function_239("tutorial_medium_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 4096))
			{
				if (Function_317() == 4)
				{
					Function_393(&Global_76848, 4096);
					if (!bParam0)
					{
						Function_239("tutorial_medium_high_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 8192))
			{
				if (Function_317() == 5)
				{
					Function_393(&Global_76848, 8192);
					if (!bParam0)
					{
						Function_239("tutorial_high_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 8388608))
			{
				if (Function_324(bVar3, 8388608))
				{
					Function_393(&Global_76848, 8388608);
					Function_323(Global_34573, 8388608, 3);
					if (!bParam0)
					{
						Function_239("tutorial_first_minigame_in_rain", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76848, 0x1000000))
			{
				if (Function_324(bVar3, 0x1000000))
				{
					Function_393(&Global_76848, 0x1000000);
					Function_323(Global_34573, 0x1000000, 3);
					if (!bParam0)
					{
						Function_239("tutorial_first_missed_achievement", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76846, 0x8000000))
			{
				if (Function_324(bVar1, 0x8000000))
				{
					Function_393(&Global_76846, 0x8000000);
					Function_323(Global_34573, 0x8000000, 1);
					if (!bParam0)
					{
						Function_239("tutorial_first_on_donkey", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_324(bVar4, 1) && Function_364(4, 0))
			{
				Function_323(Global_34573, 1, 4);
				if (!bParam0)
				{
					Function_239("tutorial_new_item_in_shops", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (!Function_62(Global_76847, 0x20000000))
			{
				if ((((((HAS_ITEM(Function_303(53), Global_34573) || HAS_ITEM(Function_303(54), Global_34573)) || HAS_ITEM(Function_303(55), Global_34573)) || HAS_ITEM(Function_303(56), Global_34573)) || HAS_ITEM(Function_303(57), Global_34573)) || HAS_ITEM(Function_303(58), Global_34573)) || HAS_ITEM(Function_303(10), Global_34573))
				{
					Function_393(&Global_76847, 0x20000000);
					if (!bParam0)
					{
						Function_239("tutorial_outfit_scrap", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_324(bVar4, 2) && Function_364(4, 0))
			{
				if (Function_62(Global_76849, 2))
				{
					if (GET_CURRENT_GAME_TIME() < Global_12976.f_132)
					{
						if (!bParam0)
						{
							Function_239("tutorial_gunsmith", 0x41200000, 1, 0, 2, 1, 0);
							Global_12976.f_132 = (GET_CURRENT_GAME_TIME() + fVar0);
							return 0;
						}
					}
				}
				if (!Function_62(Global_76849, 2))
				{
					if (!bParam0)
					{
						Function_393(&Global_76849, 2);
						Function_239("tutorial_gunsmith", 0x41200000, 1, 0, 2, 1, 0);
						Global_12976.f_132 = (GET_CURRENT_GAME_TIME() + fVar0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76849, 16))
			{
				if (Function_364(9, 0))
				{
					Function_393(&Global_76849, 16);
					if (!bParam0)
					{
						Function_239("tutorial_place_waypoint", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_62(Global_76849, 32))
			{
				if (Function_324(bVar4, 32))
				{
					Function_393(&Global_76849, 32);
					Function_323(Global_34573, 32, 4);
					if (!bParam0)
					{
						Function_239("tutorial_bait_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
	}
	iLocal_237++;
	if (iLocal_237 >= 3)
	{
		iLocal_237 = 0;
	}
	return 0;
}

int Function_317() //Position: 0x18BE7 / 101351
{
	return Global_12976.f_156;
}

int Function_318() //Position: 0x18BF2 / 101362
{
	return Global_12976.f_152;
}

void Function_319(bool bParam0) //Position: 0x18BFD / 101373
{
	if (bParam0 < 0.0f)
	{
		FLASH_SET_FLOAT("testInventory", "staminaBlinking", bParam0);
	}
	else
	{
		LOG_ERROR("RADAR_BLINK_HORSE_STAMINA_BAR: called with a negative or zero duration!");
	}
	return;
}

void Function_320(var uParam0, int iParam1) //Position: 0x18C82 / 101506
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_321(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x18C99 / 101529
{
	int iVar0;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, &Global_3422[Global_626940] + 12, 0, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, iVar0, iParam5, iParam6);
	}
}

bool Function_322(var uParam0, int iParam1) //Position: 0x18CEC / 101612
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_323(bool bParam0, int iParam1, int iParam2) //Position: 0x18D08 / 101640
{
	var uVar0;
	struct<4> Var1;
	bool bVar5;
	
	uVar0 = iParam1;
	strcpy(&Var1, "tutorial", 16);
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	Function_58(&Var1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &Var1))
	{
		return;
	}
	bVar5 = DECOR_GET_INT(bParam0, &Var1);
	DECOR_SET_INT(bParam0, &Var1, (bVar5 - (bVar5 && uVar0)));
	return;
}

bool Function_324(bool bParam0, int iParam1) //Position: 0x18D57 / 101719
{
	var uVar0;
	
	uVar0 = iParam1;
	if ((bParam0 && uVar0) >= 0)
	{
		return 1;
	}
	return 0;
}

void Function_325() //Position: 0x18D6D / 101741
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_25986)
	{
		Global_25986[iVar0] = !Global_3365;
		switch (iVar0)
		{
			case 0x00000000:
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (Global_3365)
					{
					}
					SET_DISABLE_DEADEYE(0, Global_3365);
					SET_DEADEYE_MULTILOCK_ENABLE(0, !Global_3365);
				}
				break;
			
			case 0x00000001:
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (Global_3365)
					{
					}
					SET_DISABLE_DEADEYE(0, Global_3365);
					SET_DEADEYE_MULTILOCK_ENABLE(0, !Global_3365);
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (Global_3365)
					{
					}
					SET_DISABLE_DEADEYE(0, Global_3365);
					SET_DEADEYE_MULTILOCK_ENABLE(0, !Global_3365);
				}
				break;
			
			case 0x00000003:
			case 0x00000005:
			case 0x00000004:
			case 0x00000006:
			case 0x00000007:
			case 0x00000008:
				break;
			
			case 0x0000000B:
			case 0x00000009:
				if (Global_3421)
				{
					Global_25986[iVar0] = 0;
				}
				break;
			
			case 0x0000000C:
				Function_330(1);
				break;
			
			case 0x0000000A:
				if (Global_3419 || Global_3421)
				{
					Global_25986[iVar0] = 0;
				}
				break;
			
			case 0x0000000D:
				if (Global_3364)
				{
					Global_25986[iVar0] = 0;
				}
				break;
			
			case 0x0000000E:
				if (Global_3364)
				{
					Global_25986[iVar0] = 0;
					SET_WEAPONENUM_LOCKED(14, 0);
				}
				break;
			
			case 0x0000000F:
				if (Global_3364)
				{
					Global_25986[iVar0] = 0;
				}
				break;
			
			default:
				LOG_ERROR("Found a FeatureType that is not enabled for unlocking");
				break;
		}
		iVar0++;
	}
	if (Global_3365)
	{
		Function_326(0);
	}
	return;
}

void Function_326(bool bParam0) //Position: 0x18F1F / 102175
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<8> Var3;
	struct<8> Var11;
	
	iVar0 = 0;
	while (iVar0 <= Global_25986)
	{
		if ((!Global_25986[iVar0] && (!bParam0 || !Function_81())) && !bVar1)
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_364(2, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, false);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_280(390, 3.0f);
						Function_25(390, 1, bParam0);
					}
					break;
				
				case 0x00000001:
					if (Function_364(11, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_280(390, 3.0f);
						Function_25(390, 2, bParam0);
					}
					break;
				
				case 0x00000002:
					if (Function_364(30, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
						Function_280(390, 3.0f);
						Function_25(390, 3, bParam0);
					}
					break;
				
				case 0x00000003:
					Global_25986[iVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_364(4, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "taxi_coach", 32);
					}
					break;
				
				case 0x00000005:
					Global_25986[iVar0] = 1;
					break;
				
				case 0x00000009:
					if (Function_364(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&Var3, "shop_feature_1", 32);
						strcpy(&Var11, "shop_feature_2", 32);
					}
					break;
				
				case 0x00000006:
					if (Function_364(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000007:
					if (Function_364(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000008:
					if (Function_364(37, 0))
					{
						Global_25986[iVar0] = 1;
					}
					break;
				
				case 0x0000000A:
					if (Function_364(2, 0) && !Function_508("npressDemo"))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x0000000B:
					if (Function_364(4, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&Var3, "house_feature_1", 32);
						strcpy(&Var11, "house_feature_2", 32);
					}
					break;
				
				case 0x0000000C:
					if (!Function_329(1))
					{
						Function_330(1);
						Global_25986[iVar0] = 1;
					}
					else
					{
						Function_330(0);
						Global_25986[iVar0] = 0;
					}
					break;
				
				case 0x0000000D:
					if (Function_328(0) == 10)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "nAM_SS_RW2", 32);
						SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
					}
					break;
				
				case 0x0000000E:
					if (Function_328(1) > 5)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "nAM_MH_RW1", 32);
						SET_WEAPONENUM_LOCKED(14, 0);
						Function_327(14, 1);
					}
					break;
				
				case 0x0000000F:
					if (((Function_328(0) != 10 && Function_328(1) != 10) && Function_328(2) != 10) && Function_328(3) != 10)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "AM_LOTW_RW1", 32);
						SET_MAX_DEADEYE_POINTS(0, 150.0f);
						Function_77(11, 0, 1);
					}
					break;
				
				default:
					LOG_ERROR("Found a FeatureType that is not enabled for unlocking");
					break;
			}
			if (bVar1 && !bParam0)
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (bVar1 && bParam0)
	{
		stradd(&Var3, "_help", 32);
		Function_239(&Var3, 0x41200000, 1, 0, 2, 1, 0);
		if (bVar2)
		{
			stradd(&Var11, "_help", 32);
			Function_239(&Var11, 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

int Function_327(int iParam0, int iParam1) //Position: 0x192EF / 103151
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_256(iParam0, iParam1);
	Function_57(Global_34573, 1, 4, 1);
	return 1;
}

int Function_328(int iParam0) //Position: 0x19362 / 103266
{
	if (Function_513() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

bool Function_329(int iParam0) //Position: 0x1938A / 103306
{
	int iVar0;
	
	if (!Function_297(iParam0))
	{
		return 0;
	}
	iVar0 = Function_415(iParam0);
	if (!Function_236(Function_415(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_330(bool bParam0) //Position: 0x193C0 / 103360
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

void Function_331() //Position: 0x19434 / 103476
{
	int iVar0;
	int iVar1;
	
	if (Global_3365)
	{
		Function_332();
	}
	else if (Global_3421)
	{
		iVar0 = 0;
		while (iVar0 <= Global_25974)
		{
			Global_25974[iVar0] = 0;
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Global_25974)
		{
			Global_25974[iVar1] = 1;
			iVar1++;
		}
	}
	return;
}

void Function_332() //Position: 0x19487 / 103559
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= Global_25974)
	{
		if (!Global_25974[bVar0])
		{
			switch (bVar0)
			{
				case 0x00000000:
					if (Function_364(3, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000001:
					if (Function_78(1))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000002:
					if (Function_364(4, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000003:
					Global_25974[bVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_364(25, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000005:
					if (Function_364(5, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000006:
					break;
				
				case 0x00000007:
					if (Function_364(10, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000008:
					if (Function_364(3, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000009:
					Global_25974[bVar0] = 1;
					break;
				
				case 0x0000000A:
					if (Function_364(37, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				default:
					LOG_ERROR("Found a MinigameType that is not enabled for unlocking");
					break;
				}
		}
		bVar0++;
	}
	return;
}

void Function_333() //Position: 0x195E7 / 103911
{
	int iVar0;
	
	if (Global_3365)
	{
		Function_334();
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= Global_25970)
		{
			Global_25970[iVar0] = 1;
			iVar0++;
		}
	}
	return;
}

void Function_334() //Position: 0x19615 / 103957
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= Global_25970)
	{
		if (!Global_25970[bVar0])
		{
			switch (bVar0)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					if (Function_364(2, 0))
					{
						Global_25970[bVar0] = 1;
					}
					break;
				
				case 0x00000002:
					if (Function_364(6, 0))
					{
						Global_25970[bVar0] = 1;
					}
					break;
				
				default:
					LOG_ERROR("Found a JobType that is not enabled for unlocking");
					break;
				}
		}
		bVar0++;
	}
	return;
}

void Function_335() //Position: 0x196B6 / 104118
{
	int iVar0;
	int iVar1;
	
	if (Global_3365)
	{
		Function_336();
	}
	else if (Global_3421)
	{
		iVar0 = 0;
		while (iVar0 <= Global_25965)
		{
			Global_25965[iVar0] = 0;
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Global_25965)
		{
			Global_25965[iVar1] = 1;
			iVar1++;
		}
	}
	return;
}

void Function_336() //Position: 0x19709 / 104201
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= Global_25965)
	{
		if (!Global_25965[bVar0])
		{
			switch (bVar0)
			{
				case 0x00000000:
					if (Function_364(8, 0))
					{
						Global_25965[bVar0] = 1;
					}
					break;
				
				case 0x00000001:
					if (Function_364(16, 0))
					{
						Global_25965[bVar0] = 1;
					}
					break;
				
				case 0x00000002:
					if (Function_364(13, 0))
					{
						Global_25965[bVar0] = 1;
					}
					break;
				
				case 0x00000003:
					if (Function_364(34, 0))
					{
						Global_25965[bVar0] = 1;
					}
					break;
				
				default:
					LOG_ERROR("Found a ProcTheme that is not enabled for unlocking");
					break;
				}
		}
		bVar0++;
	}
	return;
}

void Function_337(int iParam0, int iParam1) //Position: 0x197D9 / 104409
{
	char* cVar0[64];
	int iVar16;
	
	if (!Function_339(iParam0))
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
	Function_111(&(Global_29008[iParam0]), 1);
	if (DECOR_CHECK_EXIST(StackVal, "nforceLoad"))
	{
		DECOR_REMOVE(StackVal, "nforceLoad");
		iParam1 = 1;
	}
	if (StackVal == 6)
	{
		Function_177(iParam0);
		Function_111(&(Global_29008[iParam0]), 4);
		if (!Global_3380 && !Function_513())
		{
			SET_RICH_PRESENCE(2, Global_29155[iParam010].f_36, 0, 0, 0);
		}
		if (Global_29155[iParam010].f_12 + 60.0f) > GET_CURRENT_GAME_TIME()
		{
			if (Function_339(Global_29155[iParam010]))
			{
				Function_338(Global_29155[Global_29155[iParam010]10].f_20, Global_29155[iParam010].f_20);
			}
			Global_13053 = StackVal;
			Global_13053.f_8 = 4;
			Global_13053.f_4 = 0;
		}
		return;
	}
	if (StackVal == 2)
	{
		if ((!Global_29155[iParam010] != Global_30621[Global_29004] && Function_339(Global_29155[iParam010])) || iParam1)
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
	Function_416(&(Global_29008[iParam0]), 131072);
	Function_109(iParam0);
	return;
}

void Function_338(var uParam0, int iParam1) //Position: 0x19999 / 104857
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

bool Function_339(int iParam0) //Position: 0x199A6 / 104870
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_340() //Position: 0x199BC / 104892
{
	int iVar0;
	struct<77> Var1;
	
	*(&Var1 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var1, 44, 1);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Function_341(&Var1 + 80[iVar03]);
		iVar0++;
	}
	Var1.f_76 = 0;
	STORE_GAME_STATE(&Var1, 44, 1);
	return;
}

void Function_341(int iParam0) //Position: 0x199FD / 104957
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
			Function_421(bVar0);
		}
		ADD_TIME(&bVar0, 0, 10, false, 0);
		Global_16876[bVar06] = StackVal;
		Global_17483[bVar075].f_264 = StackVal;
		if (Global_30842[16])
		{
			PRINTNL();
			PRINTSTRING("New Run time: ");
			Function_421(Global_16876[StackVal6]);
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

void Function_342(var uParam0, bool bParam1, bool bParam2) //Position: 0x19B4E / 105294
{
	*uParam0 = bParam1;
	uParam0->f_4 = bParam2;
	uParam0->f_8 = -1.0f;
	uParam0->f_12 = -1.0f;
	uParam0->f_16 = 0;
	uParam0->f_20 = GET_CURRENT_GAME_TIME();
	if (*uParam0 > 0,1f)
	{
		*uParam0 = 0,1f;
	}
	SET_WIND(StackVal, *uParam0, 5.0f);
	return;
}

void Function_343(int iParam0, bool bParam1) //Position: 0x19B94 / 105364
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<4> Var4;
	struct<4> Var8;
	float fVar12[24];
	
	*iParam0 = bParam1;
	iParam0->f_8 = 4294967295;
	iParam0->f_4 = 4294967295;
	iParam0->f_16 = 0;
	if (Global_3364)
	{
		iParam0->f_12 = GET_TIME_OF_DAY();
		Function_421(iParam0->f_12);
		PRINTNL();
		ADD_TIME(iParam0 + 12, 0, 16, false, 0);
		iParam0->f_44 = GET_TIME_OF_DAY();
		iParam0->f_48 = GET_TIME_OF_DAY();
		iParam0->f_40 = 4294967295;
	}
	iVar1 = GET_MINUTES_FROM_TIME_OF_DAY(iParam0->f_44);
	bVar3 = (GET_MINUTES_FROM_TIME_OF_DAY(GET_TIME_OF_DAY()) - iVar1);
	bVar2 = (GET_MINUTES_FROM_TIME_OF_DAY(iParam0->f_48) - iVar1);
	if (Global_30842[14])
	{
		Var4 = { StackVal, StackVal, StackVal, Function_344(iParam0->f_12) };
		Var8 = { StackVal, StackVal, StackVal, Function_344(iParam0->f_48) };
	}
	if ((((Global_3364 || iParam0->f_40 != 4294967295) || bVar3 >= 0) || bVar3 <= bVar2) || bVar2 >= 0)
	{
		SET_WEATHER(bParam1, bVar0);
	}
	else
	{
		fVar12[iParam0->f_40] = (1.0f - (TO_FLOAT(bVar3) / TO_FLOAT(bVar2)));
		fVar12[*iParam0] = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
		SET_WEATHER_COMPLEX(bVar0, fVar12[0], fVar12[1], fVar12[2], fVar12[3], fVar12[4], fVar12[5], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		SET_WEATHER(bParam1, MAKE_TIME_OF_DAY(false, (bVar2 - bVar3), false));
	}
	Global_16524.f_8 = bParam1;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (bParam1 != 3 || bParam1 != 4)
		{
			if (RAND_INT_RANGE(false, 10000) <= 7500)
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
		else if (bParam1 != 3 || bParam1 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (bParam1 != 3 || bParam1 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	PRINTSTRING("Weather Init");
	PRINTNL();
	return;
}

struct<16> Function_344(bool bParam0) //Position: 0x19D91 / 105873
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

void Function_345() //Position: 0x19DE5 / 105957
{
	return;
}

void Function_346() //Position: 0x19DEB / 105963
{
	Function_350(Function_415(1), 95);
	Function_350(Function_415(24), 95);
	Function_350(Function_415(12), 95);
	Function_350(Function_415(13), 93);
	Function_350(Function_415(14), 95);
	Function_350(Function_415(8), 93);
	Function_350(Function_415(9), 98);
	Function_350(Function_415(23), 90);
	Function_350(Function_415(21), 93);
	Function_350(Function_415(10), 90);
	Function_350(Function_415(11), 85);
	Function_350(Function_415(16), 95);
	Function_350(Function_415(17), 90);
	Function_350(Function_415(15), 90);
	Function_350(Function_415(18), 95);
	Function_350(Function_415(19), 95);
	Function_350(Function_415(20), 95);
	Function_350(Function_415(2), 95);
	Function_350(Function_415(4), 93);
	Function_350(Function_415(3), 93);
	Function_350(Function_415(22), 88);
	Function_350(Function_415(6), 95);
	Function_350(Function_415(5), 95);
	Function_350(Function_415(7), 88);
	Function_350(Function_415(25), 93);
	Function_350(Function_415(30), 90);
	Function_350(Function_415(33), 80);
	Function_350(Function_415(32), 80);
	Function_350(Function_415(31), 90);
	Function_350(Function_415(34), 93);
	Function_350(Function_415(35), 90);
	Function_350(Function_415(27), 93);
	Function_350(Function_415(26), 93);
	Function_350(Function_415(28), 95);
	Function_350(Function_415(29), 90);
	Function_350(Function_415(36), 93);
	Function_350(Function_415(39), 85);
	Function_350(Function_415(37), 90);
	Function_350(Function_415(38), 93);
	Function_350(Function_415(41), 80);
	Function_350(Function_415(40), 80);
	Function_350(Function_415(45), 95);
	Function_350(Function_415(46), 95);
	Function_350(Function_415(43), 90);
	Function_350(Function_415(47), 90);
	Function_350(Function_415(48), 90);
	Function_350(Function_415(42), 90);
	Function_350(Function_415(44), 95);
	Function_350(Function_415(49), 93);
	Function_350(Function_415(55), 95);
	Function_350(Function_415(56), 95);
	Function_350(Function_415(52), 95);
	Function_350(Function_415(53), 90);
	Function_350(Function_415(54), 93);
	Function_350(Function_415(50), 90);
	Function_350(Function_415(51), 90);
	Function_350(Function_415(57), 98);
	Function_348(0, 95);
	Function_348(1, 70);
	Function_348(2, 70);
	Function_348(3, 80);
	Function_348(4, 70);
	Function_348(5, 70);
	Function_348(6, 90);
	Function_348(7, 95);
	Function_348(8, 85);
	Function_348(9, 85);
	Function_348(10, 85);
	Function_348(11, 90);
	Function_348(12, 70);
	Function_348(13, 75);
	Function_348(39, 90);
	Function_348(14, 85);
	Function_348(15, 50);
	Function_348(16, 80);
	Function_348(17, 90);
	Function_348(18, 50);
	Function_348(19, 70);
	Function_348(20, 80);
	Function_348(21, 90);
	Function_348(22, 100);
	Function_348(23, 95);
	Function_348(24, 90);
	Function_348(27, 50);
	Function_348(25, 50);
	Function_348(26, 100);
	Function_348(28, 95);
	Function_348(29, 90);
	Function_348(30, 80);
	Function_348(31, 85);
	Function_348(32, 80);
	Function_348(33, 95);
	Function_348(34, 80);
	Function_348(35, 50);
	Function_348(36, 95);
	Function_348(37, 95);
	Function_348(38, 50);
	Function_348(40, 95);
	Function_348(41, 90);
	Function_348(42, 90);
	Function_348(43, 50);
	Function_348(44, 95);
	Function_347(0, 50);
	Function_347(1, 50);
	Function_347(2, 50);
	Function_347(3, 50);
	Function_347(4, 70);
	Function_347(5, 70);
	Function_347(6, 70);
	Function_347(7, 70);
	Function_347(8, 70);
	Function_347(9, 70);
	Function_347(10, 90);
	Function_347(11, 90);
	Function_347(12, 90);
	Function_347(13, 90);
	Function_347(14, 90);
	Function_347(15, 50);
	Function_347(16, 50);
	Function_347(17, 50);
	Function_347(18, 50);
	Function_347(19, 50);
	Function_347(20, 50);
	Function_347(21, 90);
	Function_347(22, 90);
	Function_347(23, 50);
	Function_347(24, 50);
	Function_347(25, 50);
	Function_347(26, 50);
	Function_347(27, 50);
	Function_347(28, 90);
	Function_347(29, 90);
	Function_347(30, 90);
	Function_347(31, 90);
	Function_347(32, 80);
	Function_347(33, 80);
	Function_347(34, 80);
	Function_347(35, 85);
	Function_347(36, 85);
	Function_347(37, 85);
	Function_347(38, 90);
	Function_347(39, 90);
	Function_347(40, 90);
	Function_347(41, 90);
	Function_347(42, 90);
	Function_347(43, 90);
	Function_347(44, 90);
	Function_347(45, 90);
	Function_347(46, 90);
	Function_347(47, 90);
	Function_347(48, 90);
	Function_347(49, 85);
	Function_347(50, 85);
	Function_347(51, 85);
	Function_347(52, 85);
	Function_347(53, 85);
	Function_347(54, 75);
	Function_347(55, 75);
	Function_347(56, 75);
	Function_347(57, 90);
	Function_347(58, 90);
	Function_347(59, 90);
	Function_347(60, 90);
	Function_347(61, 90);
	Function_347(62, 90);
	Function_347(63, 90);
	Function_347(64, 95);
	Function_347(65, 95);
	Function_347(66, 95);
	Function_347(67, 95);
	Function_347(68, 90);
	Function_347(69, 90);
	Function_347(70, 90);
	Function_347(71, 90);
	Function_347(72, 95);
	Function_347(73, 95);
	Function_347(74, 95);
	Function_347(75, 95);
	Function_347(76, 95);
	Function_350(Function_501(0, Global_30679[1], 3), 90);
	Function_350(Function_501(0, Global_30658[3], 3), 80);
	Function_350(Function_501(0, Global_30685[1], 3), 70);
	Function_350(Function_501(0, Global_30668[2], 3), 90);
	Function_350(Function_501(0, Global_30658[2], 3), 90);
	Function_350(Function_501(0, Global_30685[2], 3), 90);
	Function_350(Function_501(0, Global_30658[0], 3), 90);
	Function_350(Function_501(0, Global_30640[2], 3), 90);
	return;
}

void Function_347(int iParam0, int iParam1) //Position: 0x1A380 / 107392
{
	if (iParam0 >= 4294967295 || iParam0 <= 77)
	{
		return;
	}
	Global_63541[iParam055].f_180 = iParam1;
	return;
}

void Function_348(int iParam0, int iParam1) //Position: 0x1A39F / 107423
{
	if (!Function_349(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_296 = iParam1;
	return;
}

bool Function_349(int iParam0) //Position: 0x1A3BB / 107451
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

void Function_350(bool bParam0, int iParam1) //Position: 0x1A3D1 / 107473
{
	if (!Function_236(bParam0))
	{
		return;
	}
	Global_16198[bParam0] = iParam1;
	return;
}

void Function_351() //Position: 0x1A3EA / 107498
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
	Function_352(&Global_26118);
	ITERATE_IN_LAYOUT(Global_26118, GET_AMBIENT_LAYOUT());
	return;
}

int Function_352(int iParam0) //Position: 0x1A4A1 / 107681
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_27());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_27());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_353() //Position: 0x1A4D2 / 107730
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_354() //Position: 0x1A4E7 / 107751
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_355() //Position: 0x1A4F9 / 107769
{
	Function_358();
	Function_357();
	Function_356();
	return;
}

void Function_356() //Position: 0x1A508 / 107784
{
	if (Global_28235 == 3)
	{
		Global_28235.f_4 = 3;
	}
	*(&Global_28235 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28235 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(2);
	return;
}

void Function_357() //Position: 0x1A533 / 107827
{
	if (Global_28210 == 1)
	{
		Global_28210.f_4 = 3;
	}
	*(&Global_28210 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28210 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(0);
	return;
}

void Function_358() //Position: 0x1A55E / 107870
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

void Function_359(int iParam0) //Position: 0x1A589 / 107913
{
	Function_361(0);
	Function_360();
	Global_26303.f_12 = 4294967295;
	Global_26303.f_16 = 0;
	Global_26303.f_20 = 4294967295;
	Global_26303.f_24 = 4294967295;
	Global_26303.f_32 = 0;
	Global_26303.f_36 = 0;
	Global_26303.f_40 = 0;
	if (iParam0 == 1)
	{
		Function_514(&Global_26303 + 8, 4096);
	}
	return;
}

void Function_360() //Position: 0x1A5D1 / 107985
{
	Function_514(&Global_26303 + 8, 2);
	Function_514(&Global_26303 + 8, 4);
	Function_514(&Global_26303 + 8, 8);
	Function_514(&Global_26303 + 8, 16);
	Function_514(&Global_26303 + 8, 32);
	Function_514(&Global_26303 + 8, 64);
	Function_514(&Global_26303 + 8, 128);
	Function_514(&Global_26303 + 8, 256);
	Function_514(&Global_26303 + 8, 512);
	Function_514(&Global_26303 + 8, 1024);
	Function_514(&Global_26303 + 8, 2048);
	Function_514(&Global_26303 + 8, 131072);
	Function_514(&Global_26303 + 8, 262144);
	Function_514(&Global_26303 + 8, 524288);
	return;
}

void Function_361(int iParam0) //Position: 0x1A66B / 108139
{
	if (iParam0 == 1)
	{
		Function_515(&Global_26303 + 8, 1);
	}
	else
	{
		Function_514(&Global_26303 + 8, 1);
	}
	return;
}

void Function_362(var uParam0, int iParam1) //Position: 0x1A68C / 108172
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

bool Function_363(int iParam0) //Position: 0x1A6AF / 108207
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_364(int iParam0, bool bParam1) //Position: 0x1A6CB / 108235
{
	int iVar0;
	
	iVar0 = Function_415(iParam0);
	if (!Function_49(iVar0))
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

bool Function_365(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1A708 / 108296
{
	int iVar0;
	
	iVar0 = Function_501(bParam0, bParam1, bParam2);
	return Function_236(iVar0);
}

void Function_366(int iParam0) //Position: 0x1A71E / 108318
{
	Function_362(&Global_28842, iParam0);
	return;
}

void Function_367() //Position: 0x1A72C / 108332
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

void Function_368() //Position: 0x1A752 / 108370
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

void Function_369(bool bParam0) //Position: 0x1A778 / 108408
{
	if (bParam0)
	{
		Function_519(0x10000000);
	}
	else
	{
		Function_370(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_370(int iParam0) //Position: 0x1A79C / 108444
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_371(bool bParam0) //Position: 0x1A7B9 / 108473
{
	if (Function_476(bParam0, 1) && !Function_476(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_372(int iParam0) //Position: 0x1A7E6 / 108518
{
	Function_373(&Global_28842, iParam0);
	return;
}

void Function_373(var uParam0, int iParam1) //Position: 0x1A7F4 / 108532
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_374(bool bParam0) //Position: 0x1A80F / 108559
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(cParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_375() //Position: 0x1A879 / 108665
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

void Function_376() //Position: 0x1A940 / 108864
{
	return;
}

void Function_377() //Position: 0x1A946 / 108870
{
	return;
}

void Function_378() //Position: 0x1A94C / 108876
{
	return;
}

void Function_379() //Position: 0x1A952 / 108882
{
	bool bVar0;
	int iVar168;
	
	*(&bVar0 + 76) = 36;
	*(&iVar168 + 76) = 36;
	NET_SET_QUICKMATCH_PLAYLIST_RANGE(34, 36);
	Function_388(&bVar0, "MULTI_ROTATION_QUICK_MATCH", "", 33, 3, 16, 411, 0, 0);
	Function_387(&bVar0);
	Function_388(&bVar0, "MULTI_ROTATION_CASUAL", "", 34, 3, 16, 449, 23562, 0);
	Function_386(&bVar0, "TDM_ARM");
	Function_386(&bVar0, "CFA_UPR");
	Function_386(&bVar0, "TDM_LSH");
	Function_386(&bVar0, "DM_CHU");
	Function_386(&bVar0, "CTF_DZC");
	Function_386(&bVar0, "DM_ARM");
	Function_386(&bVar0, "CFS_TUM");
	Function_386(&bVar0, "TDM_CHU");
	Function_386(&bVar0, "CFA_LSH");
	Function_386(&bVar0, "TDM_TUM");
	Function_386(&bVar0, "DM_HEN");
	Function_386(&bVar0, "CTF_ARM");
	Function_386(&bVar0, "DM_LSH");
	Function_386(&bVar0, "CFS_TES");
	Function_386(&bVar0, "TDM_HEN");
	Function_386(&bVar0, "CFA_CHU");
	Function_386(&bVar0, "TDM_LSH");
	Function_386(&bVar0, "DM_CHU");
	Function_386(&bVar0, "CTF_TES");
	Function_386(&bVar0, "DM_HEN");
	Function_386(&bVar0, "CFS_CHU");
	Function_386(&bVar0, "TDM_ARM");
	Function_386(&bVar0, "CFA_HEN");
	Function_386(&bVar0, "TDM_TUM");
	Function_386(&bVar0, "DM_LSH");
	Function_386(&bVar0, "CTF_CHU");
	Function_386(&bVar0, "DM_TUM");
	Function_386(&bVar0, "CFS_ARM");
	Function_386(&bVar0, "TDM_CHU");
	Function_386(&bVar0, "CFA_ARM");
	Function_386(&bVar0, "TDM_HEN");
	Function_386(&bVar0, "DM_ARM");
	Function_386(&bVar0, "CTF_LSH");
	Function_386(&bVar0, "DM_TUM");
	Function_386(&bVar0, "CFS_W2");
	Function_387(&bVar0);
	Function_388(&bVar0, "MULTI_ROTATION_TEAM", "TEAM_Barker", 35, 2, 16, 445, 32770, "$/tune/refGroups/refGroups/mp_teamgames");
	Function_386(&bVar0, "TDM_ARM");
	Function_386(&bVar0, "CTF_CHU");
	Function_386(&bVar0, "TDM_LSH");
	Function_386(&bVar0, "CFS_TUM");
	Function_386(&bVar0, "TDM_CHU");
	Function_386(&bVar0, "CTF_ARM");
	Function_386(&bVar0, "TDM_TUM");
	Function_386(&bVar0, "CFS_TES");
	Function_386(&bVar0, "TDM_HEN");
	Function_386(&bVar0, "CTF_DZC");
	Function_386(&bVar0, "TDM_ARM");
	Function_386(&bVar0, "CFS_CHU");
	Function_386(&bVar0, "TDM_LSH");
	Function_386(&bVar0, "CTF_TES");
	Function_386(&bVar0, "TDM_CHU");
	Function_386(&bVar0, "CFS_ARM");
	Function_386(&bVar0, "TDM_TUM");
	Function_386(&bVar0, "CTF_LSH");
	Function_386(&bVar0, "TDM_HEN");
	Function_386(&bVar0, "CFS_W2");
	Function_387(&bVar0);
	Function_388(&bVar0, "MULTI_ROTATION_FFA", "FFA_Barker", 36, 3, 16, 446, 32770, "$/tune/refGroups/refGroups/mp_ffa");
	Function_386(&bVar0, "DM_ARM");
	Function_386(&bVar0, "CFA_LSH");
	Function_386(&bVar0, "DM_HEN");
	Function_386(&bVar0, "DM_CHU");
	Function_386(&bVar0, "CFA_UPR");
	Function_386(&bVar0, "DM_TUM");
	Function_386(&bVar0, "DM_HEN");
	Function_386(&bVar0, "CFA_ARM");
	Function_386(&bVar0, "DM_CHU");
	Function_386(&bVar0, "DM_LSH");
	Function_386(&bVar0, "CFA_CHU");
	Function_386(&bVar0, "DM_ARM");
	Function_386(&bVar0, "DM_TUM");
	Function_386(&bVar0, "CFA_HEN");
	Function_386(&bVar0, "DM_LSH");
	Function_387(&bVar0);
	Function_388(&bVar0, "MULTI_ROTATION_HARD_TEAM", "", 39, 2, 16, 445, 9750, 0);
	if (Function_385(35, &iVar168))
	{
		Function_384(&iVar168, &bVar0);
	}
	Function_387(&bVar0);
	Function_388(&bVar0, "MULTI_ROTATION_HARD_FFA", "", 40, 3, 16, 446, 9750, 0);
	if (Function_385(36, &iVar168))
	{
		Function_384(&iVar168, &bVar0);
	}
	Function_387(&bVar0);
	Function_388(&bVar0, "MULTI_ROTATION_VET_TEAM", "", 41, 2, 16, 445, 75030, 0);
	if (Function_385(35, &iVar168))
	{
		Function_384(&iVar168, &bVar0);
	}
	Function_387(&bVar0);
	Function_388(&bVar0, "MULTI_ROTATION_VET_FFA", "", 42, 3, 16, 446, 75030, 0);
	if (Function_385(36, &iVar168))
	{
		Function_384(&iVar168, &bVar0);
	}
	Function_387(&bVar0);
	Function_383(36, -2129,431f, 16,39f, 2605,05f, 0, 4294967295);
	Function_383(36, -2621,622f, 30,118f, 4261,624f, 232,5f, 4294967295);
	Function_383(36, -1707,78f, 8,034f, 4229,91f, 0, 4294967295);
	Function_383(36, -865,57f, 91,402f, 2391,45f, 45.0f, 4294967295);
	Function_383(36, -3300,284f, 17,5f, 2680,583f, 20.0f, Global_30658[0]);
	Function_382(36, -277,801f, 84,34f, 2119,444f, "CFA_UPR", 187,5f);
	Function_383(35, -2188,603f, 16,364f, 2593,315f, 75.0f, 4294967295);
	Function_383(35, -2703,85f, 32,038f, 4239,5f, 37,5f, 4294967295);
	Function_382(35, -471,798f, 20,379f, 3887,847f, "CTF_DZC", 0);
	Function_383(35, -1737,93f, 7,304f, 4202,1f, 90.0f, 4294967295);
	Function_383(35, -889,824f, 90,41f, 2429,62f, 195.0f, 4294967295);
	Function_382(35, -3389,631f, 55,04f, 4743,534f, "CFS_TES", 0);
	Function_383(35, -3264,534f, 15,443f, 2745,565f, 142,5f, Global_30658[0]);
	Function_382(35, -1941,536f, 26,911f, 2248,267f, "CFS_W2", 270.0f);
	Function_380(72, -932,201f, 90,669f, 2416,194f, 0);
	Function_380(72, 124,655f, 73,287f, 2298,732f, 270.0f);
	Function_380(72, -2173,881f, 16,449f, 2632,591f, 270.0f);
	Function_380(72, -191,351f, 83,425f, 2070,354f, 262,5f);
	Function_380(72, -74,442f, 116,861f, 1413,149f, 240.0f);
	Function_380(72, -416,726f, 151,086f, 1610,745f, 292,5f);
	Function_380(72, 681,17f, 78,31f, 1344,55f, 90.0f);
	Function_380(72, -3259,457f, 15,972f, 2705,493f, 0);
	Function_380(72, -3684,166f, 8,982f, 3489,312f, 0);
	Function_380(72, -3639,929f, 42,273f, 2138,375f, 150.0f);
	Function_380(72, -3094,139f, 45,177f, 3765,219f, 270.0f);
	Function_380(72, 373,918f, 76,298f, 3456,32f, 0);
	Function_380(72, -1695,843f, 8,032f, 4263,501f, 0);
	Function_380(72, -2759,2f, 32,125f, 4276,01f, 232,5f);
	Function_380(72, -4279,463f, 18,303f, 4470,403f, 60.0f);
	Function_380(72, -790,971f, 13,006f, 3734,266f, 45.0f);
	Function_380(72, -692,579f, 63,247f, 3323,76f, 307,5f);
	Function_380(72, -446,919f, 21,247f, 3926,11f, 262,5f);
	Function_380(73, -816,154f, 93,359f, 2424,29f, 165.0f);
	Function_380(73, -2185,64f, 16,37f, 2618,4f, 97,5f);
	Function_380(73, 702,371f, 78,306f, 1344,654f, 180.0f);
	Function_380(73, -2659,4f, 31,147f, 4246,15f, 172,5f);
	Function_380(73, -1695,572f, 8,031f, 4216,498f, 180.0f);
	Function_380(73, -4261,85f, 18,281f, 4453,5f, 37,5f);
	return;
}

void Function_380(int iParam0, vector3 vParam1, float fParam4) //Position: 0x1B3C8 / 111560
{
	int iVar0;
	
	iVar0 = Function_381(StackVal, StackVal, iParam0, vParam1, fParam4);
	if (iVar0 >= 4294967295)
	{
		(&Global_78617 + 196[iVar010])->f_16 = 146;
		strcpy(&Global_78617 + 196[iVar010] + 20, "", 16);
	}
}

var Function_381(var uParam0, vector3 vParam1, var uParam4) //Position: 0x1B402 / 111618
{
	if ((&Global_78617 + 196)->f_2404 > 60)
	{
		return 4294967295;
	}
	*(&Global_78617 + 196[(&Global_78617 + 196)->f_240410]) = { StackVal, StackVal, vParam1 };
	(&Global_78617 + 196[(&Global_78617 + 196)->f_240410])->f_12 = uParam4;
	(&Global_78617 + 196[(&Global_78617 + 196)->f_240410])->f_36 = uParam0;
	(&Global_78617 + 196)->f_2404++;
	return ((&Global_78617 + 196)->f_2404 - 1);
}

void Function_382(var uParam0, vector3 vParam1, char* cParam4, int iParam5) //Position: 0x1B47C / 111740
{
	int iVar0;
	
	iVar0 = Function_381(StackVal, StackVal, uParam0, vParam1, iParam5);
	if (iVar0 >= 4294967295)
	{
		(&Global_78617 + 196[iVar010])->f_16 = 4294967294;
		strcpy(&Global_78617 + 196[iVar010] + 20, cParam4, 16);
	}
}

void Function_383(int iParam0, vector3 vParam1, float fParam4, int iParam5) //Position: 0x1B4B6 / 111798
{
	int iVar0;
	
	iVar0 = Function_381(StackVal, StackVal, iParam0, vParam1, fParam4);
	if (iVar0 >= 4294967295)
	{
		(&Global_78617 + 196[iVar010])->f_16 = iParam5;
		strcpy(&Global_78617 + 196[iVar010] + 20, "", 16);
	}
}

void Function_384(int iParam0, bool bParam1) //Position: 0x1B4F0 / 111856
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (iParam0->f_72 - 1))
	{
		Function_386(bParam1, iParam0 + 76[iVar04]);
		iVar0++;
	}
	return;
}

bool Function_385(int iParam0, int iParam1) //Position: 0x1B51B / 111899
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

int Function_386(char* cParam0, bool bParam1) //Position: 0x1B554 / 111956
{
	var uVar0;
	char* cVar29[64];
	char* cVar45[64];
	
	if (!UNK_0xFAD5A270(bParam1, &uVar0))
	{
		strcpy(&cVar29, "Can't add nonexistent "", 64);
		stradd(&cVar29, bParam1, 64);
		stradd(&cVar29, "" to playlist", 64);
	}
	if (cParam0->f_72 <= 36)
	{
		strcpy(cParam0 + 76[cParam0->f_724], bParam1, 16);
		cParam0->f_72++;
		return 1;
	}
	strcpy(&cVar45, """, 64);
	stradd(&cVar45, bParam1, 64);
	stradd(&cVar45, "" puts playlist "", 64);
	stradd(&cVar45, cParam0, 64);
	stradd(&cVar45, "" over the limit", 64);
	return 0;
}

int Function_387(bool bParam0) //Position: 0x1B604 / 112132
{
	if (Global_3361 <= 20)
	{
		Global_0[Global_3361168] = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam0 };
		Global_3361++;
		NET_REGISTER_PLAYLIST_TYPE(bParam0, bParam0->f_64, bParam0->f_68);
		if (Function_476(bParam0->f_656, 4))
		{
			NET_SET_PLAYLIST_LOCKED(bParam0, 1);
		}
		return 1;
	}
	return 0;
}

void Function_388(int iParam0, char* cParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x1B64F / 112207
{
	strcpy(iParam0, cParam1, 32);
	strcpy(iParam0 + 32, bParam2, 32);
	iParam0->f_68 = iParam5;
	iParam0->f_64 = bParam3;
	iParam0->f_664 = iParam6;
	Function_391(iParam0, 1014);
	if (IS_STRING_VALID(bParam8))
	{
		if (!_IS_TYPE_ID_VALID_BY_STRING(bParam8, 7))
		{
		}
		iParam0->f_668 = GET_ASSET_ID(bParam8, 7);
	}
	else
	{
		iParam0->f_668 = "";
	}
	iParam0->f_656 = (iParam7 || Function_390(iParam4));
	Function_389(iParam0);
}

void Function_389(int iParam0) //Position: 0x1B6B9 / 112313
{
	int iVar0;
	
	iParam0->f_72 = 0;
	iVar0 = 0;
	while (iVar0 <= 36)
	{
		strcpy(iParam0 + 76[iVar04], "NONE", 16);
		iVar0++;
	}
	return;
}

var Function_390(bool bParam0) //Position: 0x1B6E8 / 112360
{
	return SHIFT_LEFT(bParam0, 20);
}

void Function_391(var uParam0, var uParam1) //Position: 0x1B6F5 / 112373
{
	uParam0->f_660 = uParam1;
	return;
}

void Function_392() //Position: 0x1B702 / 112386
{
	Function_111(&(Global_29008[Global_30717[1]]), 256);
	Function_111(&(Global_29008[Global_30640[4]]), 256);
	Function_111(&(Global_29008[Global_30668[2]]), 256);
	Function_416(&(Global_29008[Global_30668[2]]), 32768);
	Function_111(&(Global_29008[Global_30658[3]]), 256);
	Function_416(&(Global_29008[Global_30658[3]]), 32768);
	Function_111(&(Global_29008[Global_30685[2]]), 256);
	Function_416(&(Global_29008[Global_30685[2]]), 32768);
	Function_111(&(Global_29008[Global_30679[1]]), 256);
	Function_416(&(Global_29008[Global_30679[1]]), 32768);
	return;
}

void Function_393(var uParam0, int iParam1) //Position: 0x1B7B6 / 112566
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_394(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x1B7C5 / 112581
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_258(12);
	Function_262(2);
	Function_259((15 - Function_265(105)));
	if (Function_234(bParam0) == 1)
	{
		iVar2 = Function_293(bParam0);
		Function_413(&(Global_3422[iVar240]));
		Function_500(4194304);
		if (bParam3)
		{
			Function_406(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_405(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_406(iVar2, &uVar0, 0);
		}
		bVar1 = Function_404();
		if (bParam1)
		{
			Function_403(iVar2, bParam0, bVar1);
			Function_288();
		}
	}
	Function_396(bParam0, bParam1, iParam2, bVar1);
	if (Function_234(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_289(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_234(bParam0) == 1)
		{
			iVar2 = Function_293(bParam0);
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
	Function_395();
}

void Function_395() //Position: 0x1B8B2 / 112818
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_364(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

void Function_396(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1B8E2 / 112866
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_236(bParam0))
	{
		Function_231();
		return;
	}
	iVar0 = Function_234(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_293(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_402(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_401(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_399();
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
		Function_398("DEED_COMPLETE", bParam0);
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
			Function_291(bParam0);
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
						switch (Function_293(bParam0))
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
			Function_285(1);
			Function_284(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_397(bParam0, &Var14);
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

void Function_397(int iParam0, int iParam1) //Position: 0x1BAF4 / 113396
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_398(char* cParam0, bool bParam1) //Position: 0x1BB2E / 113454
{
	struct<4> Var0;
	
	if (!Function_236(bParam1))
	{
		return;
	}
	switch (Function_234(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_294(Function_293(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_234(bParam1), Function_293(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_234(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_234(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_234(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_234(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_234(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

void Function_399() //Position: 0x1BC52 / 113746
{
	int iVar0;
	int iVar1;
	
	if (!Function_297(Global_6269))
	{
		return;
	}
	iVar0 = Function_267(24);
	iVar1 = Function_415(Global_6269);
	if (!Function_297(iVar0) && Function_400(iVar1) < 0)
	{
		Function_25(24, Global_6269, 0);
		Function_271(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_400(Function_415(iVar0)))
	{
		Function_25(24, Global_6269, 0);
		Function_271(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_400(int iParam0) //Position: 0x1BCD2 / 113874
{
	if (!Function_236(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<16> Function_401(int iParam0) //Position: 0x1BCEC / 113900
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_402(char* cParam0) //Position: 0x1BD16 / 113942
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

void Function_403(int iParam0, int iParam1, bool bParam2) //Position: 0x1BF6C / 114540
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
	
	if (!Function_297(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_296(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_294(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_267(42) - Global_34165.f_116);
				bVar1 = (Function_267(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_294(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_37(49)) - Global_34165.f_124);
				bVar3 = (Function_267(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_294(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_267(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_294(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_294(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_295(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_277(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_401(iParam0) };
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

var Function_404() //Position: 0x1C208 / 115208
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_405(int iParam0) //Position: 0x1C22D / 115245
{
	if (!Function_297(iParam0))
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
			Function_277(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_277(25, 1, 0);
			Function_301(1, 1);
			break;
		
		case 0x00000015:
			Function_301(50, 1);
			Function_277(250, 1, 0);
			Function_268(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_277(75, 1, 0);
			Function_268(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_277(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_301(50, 1);
			Function_277(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_301(5, 1);
			Function_268(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_277(75, 1, 0);
			Function_268(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_301(5, 1);
			Function_277(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_277(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_268(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_301(25, 1);
			Function_277(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_301(10, 1);
			Function_277(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_277(50, 1, 0);
			Function_268(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_277(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_277(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_268(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_301(20, 1);
			Function_277(75, 1, 0);
			Function_268(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_301(25, 1);
			Function_277(150, 1, 0);
			Function_268(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_301(10, 1);
			Function_277(150, 1, 0);
			Function_268(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_277(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_268(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_268(100, 1, 0);
			Function_301(5, 1);
			break;
		
		case 0x0000000F:
			Function_301(3, 1);
			Function_277(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_268(125, 1, 0);
			Function_277(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_301(50, 1);
			Function_277(100, 1, 0);
			Function_268(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_301(50, 1);
			Function_277(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_301(75, 1);
			Function_277(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_277(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_277(75, 1, 0);
			Function_268(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_277(250, 1, 0);
			Function_268(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_277(75, 1, 0);
			Function_268(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_277(200, 1, 0);
			Function_268(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_277(75, 1, 0);
			Function_268(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_277(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_301(50, 1);
			Function_277(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_301(100, 1);
			Function_277(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_277(200, 1, 0);
			Function_268(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_277(300, 1, 0);
			Function_268(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_277(300, 1, 0);
			Function_268(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_277(300, 1, 0);
			Function_268(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_277(500, 1, 0);
			Function_268(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_277(150, 1, 0);
			Function_268(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_268(25, 1, 0);
			Function_301(100, 1);
			break;
		
		case 0x0000002A:
			Function_277(150, 1, 0);
			Function_268(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_268(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_268(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_268(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_268(150, 1, 0);
			Function_301(100, 1);
			break;
		
		case 0x00000035:
			Function_268(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_268(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_268(150, 1, 0);
			Function_301(100, 1);
			break;
		
		case 0x00000032:
			Function_268(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_268(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_406(int iParam0, var uParam1, bool bParam2) //Position: 0x1C6E8 / 116456
{
	struct<4> Var0;
	
	if (!Function_297(iParam0))
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
			Function_411(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_177(Global_30640[0]);
			Function_177(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_409(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_177(Global_30668[0]);
			Function_96(0);
			Function_408(2, 1);
			Function_408(0, 1);
			Function_408(1, 1);
			break;
		
		case 0x00000003:
			Function_177(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_177(Global_30668[0]);
			Function_177(Global_30640[0]);
			Function_327(0, 1);
			Function_327(15, 1);
			Function_327(9, 1);
			Function_327(12, 1);
			Function_327(16, 1);
			Function_408(3, 1);
			break;
		
		case 0x00000005:
			Function_177(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_409(21, bParam2, 4);
			Function_177(Global_30668[0]);
			Function_408(39, 1);
			break;
		
		case 0x00000007:
			Function_177(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_177(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_76(4))
					{
						Function_75(4, 0, 0, 1);
					}
				}
			}
			Function_177(Global_30640[0]);
			Function_177(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_177(Global_30640[0]);
			Function_177(Global_30668[2]);
			Function_111(&(Global_29008[Global_30668[2]]), 32768);
			Function_416(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_409(9, bParam2, 4);
			Function_177(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_177(Global_30640[0]);
			Function_177(Global_30658[0]);
			Function_111(&(Global_29008[Global_30658[0]]), 32768);
			Function_416(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_177(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_177(Global_30640[0]);
			Function_177(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_177(Global_30640[1]);
			Function_177(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_177(Global_30679[0]);
			Function_177(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_177(Global_30658[5]);
			Function_177(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_409(21, bParam2, 4);
			Function_177(Global_30640[4]);
			Function_177(Global_30658[4]);
			Function_393(&Global_76847, 0x2000000);
			Function_393(&Global_76847, 0x4000000);
			Function_393(&Global_76847, 4096);
			Function_393(&Global_76847, 8);
			Function_393(&Global_76847, 8388608);
			Function_393(&Global_76847, 524288);
			Function_393(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_177(Global_30640[4]);
			Function_177(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_416(&(Global_29008[Global_30640[4]]), 256);
			Function_177(Global_30640[4]);
			Function_177(Global_30658[0]);
			Function_111(&(Global_29008[Global_30658[0]]), 32768);
			Function_416(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_177(Global_30640[0]);
			Function_177(Global_30640[5]);
			Function_409(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_177(Global_30658[3]);
			Function_111(&(Global_29008[Global_30658[3]]), 32768);
			Function_416(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_409(9, bParam2, 4);
			Function_177(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_111(&(Global_29008[Global_30679[1]]), 32768);
			Function_177(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_409(12, bParam2, 4);
			Function_416(&(Global_29008[Global_30679[1]]), 256);
			Function_177(Global_30668[3]);
			Function_177(Global_30693[0]);
			Function_177(Global_30685[0]);
			Function_96(4);
			Function_327(13, 1);
			Function_327(1, 1);
			Function_327(18, 1);
			Function_408(34, 1);
			Function_408(44, 1);
			Function_408(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_409(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_177(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_177(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_177(Global_30693[0]);
			Function_177(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_177(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_177(Global_30685[0]);
			Function_177(Global_30693[0]);
			Function_177(Global_30693[1]);
			Function_177(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_409(23, bParam2, 3);
			Function_327(23, 1);
			Function_177(Global_30685[0]);
			Function_177(Global_30685[2]);
			Function_111(&(Global_29008[Global_30685[2]]), 32768);
			Function_416(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_409(19, bParam2, 4);
			Function_177(Global_30685[0]);
			Function_177(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_409(24, bParam2, 3);
			Function_327(24, 1);
			Function_177(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_177(Global_30685[0]);
			Function_177(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_177(Global_30693[12]);
			Function_177(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_177(Global_30693[12]);
			Function_177(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_409(25, bParam2, 10);
			Function_177(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_177(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_177(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_409(13, bParam2, 4);
			Function_177(Global_30693[2]);
			Function_177(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_76(8))
				{
					Function_75(8, 0, 0, 1);
				}
			}
			Function_177(Global_30685[0]);
			Function_96(9);
			Function_327(7, 1);
			Function_327(11, 1);
			Function_327(3, 1);
			Function_327(20, 1);
			Function_408(57, 1);
			break;
		
		case 0x0000002A:
			Function_409(2, bParam2, 4);
			Function_177(Global_30717[0]);
			Function_177(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_177(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_177(Global_30717[0]);
			Function_177(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_177(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_177(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_177(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_409(17, bParam2, 4);
			Function_177(Global_30723[0]);
			Function_177(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_78(15))
				{
					Function_77(15, 0, 1);
				}
			}
			Function_416(&(Global_29008[Global_30717[1]]), 256);
			Function_96(11);
			Function_177(Global_30717[1]);
			Function_177(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_177(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_177(Global_30717[1]);
			Function_177(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_177(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_177(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_177(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_177(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_177(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_177(Global_30717[1]);
			Function_407(11);
			Function_96(12);
			Global_16537[1121].f_40 = 0;
			Function_408(56, 1);
			if (!bParam2)
			{
				if (!Function_76(9))
				{
					Function_75(9, 0, 0, 0);
				}
				if (!Function_76(10))
				{
					Function_75(10, 0, 0, 1);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_294(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_407(int iParam0) //Position: 0x1CFD8 / 118744
{
	bool bVar0;
	
	if (!Function_92(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_100(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_100(Global_16537[iParam021].f_72, 0);
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
			Function_97(Global_16537[iParam021].f_48, 16, 0, 0);
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

int Function_408(int iParam0, int iParam1) //Position: 0x1D147 / 119111
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_255(iParam0, iParam1);
	Function_57(Global_34573, 1, 4, 1);
	return 1;
}

void Function_409(bool bParam0, bool bParam1, int iParam2) //Position: 0x1D1B8 / 119224
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_410(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_411(bParam0, 0, 0);
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

bool Function_410(int iParam0, int iParam1) //Position: 0x1D226 / 119334
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

int Function_411(bool bParam0, bool bParam1, int iParam2) //Position: 0x1D239 / 119353
{
	if (!Function_412(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_23(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_23(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_23(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_412(int iParam0) //Position: 0x1D290 / 119440
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_413(int iParam0) //Position: 0x1D2A2 / 119458
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
			Function_414(4, 0, 0);
		}
	}
	return;
}

void Function_414(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1D309 / 119561
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
		Function_196(Global_16524, bVar0, 1);
	}
	return;
}

bool Function_415(int iParam0) //Position: 0x1D3E6 / 119782
{
	if (!Function_297(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_416(var uParam0, int iParam1) //Position: 0x1D400 / 119808
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_417(int iParam0, var uParam1, vector3 vParam2) //Position: 0x1D417 / 119831
{
	if (!Function_418(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_26316[iParam0] = uParam1;
	*(&Global_26316 + 16[iParam03]) = { StackVal, StackVal, vParam2 };
}

bool Function_418(int iParam0) //Position: 0x1D479 / 119929
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_419() //Position: 0x1D48E / 119950
{
	Global_63541[055].f_132 = 4294967295;
	Global_63541[155].f_132 = Global_30640[0];
	Global_63541[255].f_132 = Global_30640[0];
	Global_63541[355].f_132 = Global_30628[0];
	Global_63541[455].f_132 = Global_30633[0];
	Global_63541[555].f_132 = Global_30633[0];
	Global_63541[655].f_132 = Global_30633[2];
	Global_63541[755].f_132 = Global_30633[1];
	Global_63541[855].f_132 = Global_30707[0];
	Global_63541[955].f_132 = Global_30707[0];
	Global_63541[1055].f_132 = Global_30628[1];
	Global_63541[1155].f_132 = Global_30628[1];
	Global_63541[1255].f_132 = Global_30628[1];
	Global_63541[1355].f_132 = Global_30628[1];
	Global_63541[1455].f_132 = Global_30640[0];
	Global_63541[1555].f_132 = Global_30640[0];
	Global_63541[1655].f_132 = 4294967295;
	Global_63541[1755].f_132 = Global_30640[0];
	Global_63541[1855].f_132 = 4294967295;
	Global_63541[1955].f_132 = Global_30640[0];
	Global_63541[2055].f_132 = 4294967295;
	Global_63541[2155].f_132 = Global_30628[2];
	Global_63541[2255].f_132 = Global_30628[2];
	Global_63541[2355].f_132 = Global_30693[0];
	Global_63541[2455].f_132 = Global_30685[1];
	Global_63541[2555].f_132 = Global_30707[0];
	Global_63541[2655].f_132 = Global_30693[0];
	Global_63541[2755].f_132 = Global_30693[0];
	Global_63541[2855].f_132 = Global_30658[4];
	Global_63541[2955].f_132 = Global_30658[3];
	Global_63541[3055].f_132 = Global_30668[2];
	Global_63541[3155].f_132 = Global_30685[2];
	Global_63541[3255].f_132 = Global_30658[1];
	Global_63541[3355].f_132 = 4294967295;
	Global_63541[3455].f_132 = Global_30658[1];
	Global_63541[3555].f_132 = Global_30633[1];
	Global_63541[3655].f_132 = Global_30633[1];
	Global_63541[3755].f_132 = Global_30633[1];
	Global_63541[3855].f_132 = Global_30628[2];
	Global_63541[3955].f_132 = Global_30668[1];
	Global_63541[4055].f_132 = Global_30633[1];
	Global_63541[4155].f_132 = Global_30693[1];
	Global_63541[4255].f_132 = Global_30717[1];
	Global_63541[4355].f_132 = Global_30628[0];
	Global_63541[4455].f_132 = Global_30628[0];
	Global_63541[4555].f_132 = Global_30707[2];
	Global_63541[4655].f_132 = Global_30707[2];
	Global_63541[4755].f_132 = Global_30693[1];
	Global_63541[4855].f_132 = Global_30633[2];
	Global_63541[4955].f_132 = 4294967295;
	Global_63541[5055].f_132 = Global_30668[1];
	Global_63541[5155].f_132 = Global_30658[4];
	Global_63541[5255].f_132 = 4294967295;
	Global_63541[5355].f_132 = Global_30723[2];
	Global_63541[5455].f_132 = Global_30707[0];
	Global_63541[5555].f_132 = Global_30707[0];
	Global_63541[5655].f_132 = Global_30693[0];
	Global_63541[5755].f_132 = Global_30717[0];
	Global_63541[5855].f_132 = Global_30717[0];
	Global_63541[5955].f_132 = Global_30717[0];
	Global_63541[6055].f_132 = Global_30717[0];
	Global_63541[6155].f_132 = Global_30717[0];
	Global_63541[6255].f_132 = Global_30717[0];
	Global_63541[6355].f_132 = Global_30717[0];
	Global_63541[6455].f_132 = Global_30717[0];
	Global_63541[6555].f_132 = Global_30628[0];
	Global_63541[6655].f_132 = Global_30633[2];
	Global_63541[6755].f_132 = 4294967295;
	Global_63541[6855].f_132 = Global_30628[2];
	Global_63541[6955].f_132 = Global_30628[0];
	Global_63541[7055].f_132 = Global_30628[0];
	Global_63541[7155].f_132 = Global_30628[2];
	Global_63541[7255].f_132 = Global_30717[0];
	Global_63541[7355].f_132 = Global_30717[0];
	Global_63541[7455].f_132 = Global_30717[0];
	Global_63541[7555].f_132 = Global_30717[0];
	Global_63541[7655].f_132 = Global_30717[0];
	Global_63541[055].f_164 = 4294967295;
	Global_63541[155].f_164 = 4294967295;
	Global_63541[255].f_164 = 4294967295;
	Global_63541[355].f_164 = 4294967295;
	Global_63541[455].f_164 = 4294967295;
	Global_63541[555].f_164 = 4294967295;
	Global_63541[655].f_164 = 4294967295;
	Global_63541[755].f_164 = 4294967295;
	Global_63541[855].f_164 = 4294967295;
	Global_63541[955].f_164 = 4294967295;
	Global_63541[1055].f_164 = 4294967295;
	Global_63541[1155].f_164 = 4294967295;
	Global_63541[1255].f_164 = 4294967295;
	Global_63541[1355].f_164 = 4294967295;
	Global_63541[1455].f_164 = 4294967295;
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
	Global_63541[3155].f_164 = 4294967295;
	Global_63541[3255].f_164 = 4294967295;
	Global_63541[3355].f_164 = 4294967295;
	Global_63541[3455].f_164 = 4294967295;
	Global_63541[3555].f_164 = 4294967295;
	Global_63541[3655].f_164 = 4294967295;
	Global_63541[3755].f_164 = 4294967295;
	Global_63541[3855].f_164 = 4294967295;
	Global_63541[3955].f_164 = 4294967295;
	Global_63541[4055].f_164 = 4294967295;
	Global_63541[4155].f_164 = 4294967295;
	Global_63541[4255].f_164 = 4294967295;
	Global_63541[4355].f_164 = 4294967295;
	Global_63541[4455].f_164 = 4294967295;
	Global_63541[4555].f_164 = 4294967295;
	Global_63541[4655].f_164 = 4294967295;
	Global_63541[4755].f_164 = 4294967295;
	Global_63541[4855].f_164 = 4294967295;
	Global_63541[4955].f_164 = 4294967295;
	Global_63541[5055].f_164 = 4294967295;
	Global_63541[5155].f_164 = 4294967295;
	Global_63541[5255].f_164 = 4294967295;
	Global_63541[5355].f_164 = 4294967295;
	Global_63541[5455].f_164 = 4294967295;
	Global_63541[5555].f_164 = 4294967295;
	Global_63541[5655].f_164 = 4294967295;
	Global_63541[5755].f_164 = 4294967295;
	Global_63541[5855].f_164 = 4294967295;
	Global_63541[5955].f_164 = 4294967295;
	Global_63541[6055].f_164 = 4294967295;
	Global_63541[6155].f_164 = 4294967295;
	Global_63541[6255].f_164 = 4294967295;
	Global_63541[6355].f_164 = 4294967295;
	Global_63541[6455].f_164 = 4294967295;
	Global_63541[6555].f_164 = 4294967295;
	Global_63541[6655].f_164 = 4294967295;
	Global_63541[6755].f_164 = 4294967295;
	Global_63541[6855].f_164 = 4294967295;
	Global_63541[6955].f_164 = 4294967295;
	Global_63541[7055].f_164 = 4294967295;
	Global_63541[7155].f_164 = 4294967295;
	Global_63541[7255].f_164 = 4294967295;
	Global_63541[7355].f_164 = 4294967295;
	Global_63541[7455].f_164 = 4294967295;
	Global_63541[7555].f_164 = 4294967295;
	Global_63541[7655].f_164 = 4294967295;
	return;
}

void Function_420() //Position: 0x1DBE1 / 121825
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 <= Global_9724)
	{
		if (StackVal != 0)
		{
			iVar4 = Function_90(StackVal);
			Function_88(StackVal);
			vVar1 = { StackVal, StackVal, Function_88(StackVal) };
			Global_9724[iVar0] = ADD_BLIP_FOR_COORD(StackVal, Function_86(&vVar1), 0.0f, 2, iVar4);
			if (StackVal == 23)
			{
				SET_BLIP_COLOR(Global_9724[iVar0], 1.0f, 1.0f, 1.0f, 0,5f);
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
			SET_BLIP_PRIORITY(Global_9724[iVar0], true);
		}
		iVar0++;
	}
	return;
}

void Function_421(bool bParam0) //Position: 0x1DCE9 / 122089
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

void Function_422() //Position: 0x1DD2F / 122159
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 3;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_232(Global_13172[iVar011], &iVar1, &iVar2, &uVar3);
			if (iVar1 == 0)
			{
				if (StackVal == 3)
				{
					bVar4 = 4294967295;
					if (iVar2 == Global_30640[2])
					{
						bVar4 = CREATE_JOURNAL_ENTRY("TwinRocksJournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_30668[2])
					{
						bVar4 = CREATE_JOURNAL_ENTRY("PBJournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_30658[0])
					{
						bVar4 = CREATE_JOURNAL_ENTRY("TumbleweedJournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_30658[2])
					{
						bVar4 = CREATE_JOURNAL_ENTRY("SOLJournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_30658[3])
					{
						bVar4 = CREATE_JOURNAL_ENTRY("GAPJournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_30679[1])
					{
						bVar4 = CREATE_JOURNAL_ENTRY("FM_JournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_30685[2])
					{
						bVar4 = CREATE_JOURNAL_ENTRY("tes_JournalID", 3, 4294967295, 0);
					}
					else if (iVar2 == Global_30685[1])
					{
						bVar4 = CREATE_JOURNAL_ENTRY("NOS_JournalID", 3, 4294967295, 0);
					}
					if (bVar4 != 4294967295)
					{
						APPEND_JOURNAL_ENTRY(bVar4, 1);
					}
				}
			}
		}
		iVar0++;
	}
	return;
}

var Function_423(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0x1DEBE / 122558
{
	bool bVar0;
	int iVar1;
	float fVar2;
	struct<9> Var5;
	
	bVar0 = Function_424(bParam1);
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
		Function_416(&(Global_29008[bVar0]), 0x403ee3ff);
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
		Function_111(&(Global_29008[bVar0]), 8192);
	}
	if (bParam7)
	{
		Function_111(&(Global_29008[bVar0]), 16384);
	}
	if (bParam8)
	{
		Function_111(&(Global_29008[bVar0]), 32768);
	}
	if (bParam9)
	{
		Function_111(&(Global_29008[bVar0]), 65536);
	}
	switch (iParam4)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			if (Function_339(iParam2))
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
				iVar1 = 48;
				break;
			
			default:
				break;
		}
		GET_OBJECT_POSITION(bParam3, &fVar2);
		if (GET_OBJECT_TYPE(bParam3) == 9)
		{
			GET_VOLUME_SCALE(bParam3, &vVar5);
		}
		else
		{
			vVar5 = { 125.0f, 125.0f, 125.0f };
		}
		Global_29155[bVar010].f_28 = APPEND_REGION(GET_OBJECT_NAME(bParam3), &fVar2, ((vVar5.x + vVar5.z) / 2.0f), iVar1, Function_108(&(Global_29008[bVar0]), 4096), 0, 0);
	}
	else if (IS_OBJECT_VALID(bParam3) && iParam4 != 2)
	{
		if (STRINGS_ARE_EQUAL("hgn", bParam1))
		{
			vVar8 = { -1189,689f, 111,072f, 2203,254f };
		}
		else if (STRINGS_ARE_EQUAL("cho", bParam1))
		{
			vVar8 = { -2562,781f, 25,953f, 2316,282f };
		}
		else if (STRINGS_ARE_EQUAL("rio", bParam1))
		{
			vVar8 = { -2948,654f, 40,521f, 3196,021f };
		}
		else if (STRINGS_ARE_EQUAL("gtr", bParam1))
		{
			vVar8 = { -4200,715f, 22,615f, 2592,929f };
		}
		else if (STRINGS_ARE_EQUAL("pun", bParam1))
		{
			vVar8 = { -4567,712f, 14,362f, 4147,449f };
		}
		else if (STRINGS_ARE_EQUAL("prd", bParam1))
		{
			vVar8 = { -2266,155f, 9,958f, 4085,551f };
		}
		else if (STRINGS_ARE_EQUAL("dzc", bParam1))
		{
			vVar8 = { -345,969f, 22,996f, 3436,474f };
		}
		else if (STRINGS_ARE_EQUAL("grt", bParam1))
		{
			vVar8 = { 90,633f, 110,101f, 1037,087f };
		}
		else if (STRINGS_ARE_EQUAL("tal", bParam1))
		{
			vVar8 = { -842,584f, 186,831f, 1282,891f };
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
		Function_280(473, (Function_37(473) + 1.0f));
		iVar11 = Function_157(bVar0);
		if (iVar11 == Global_30621[0])
		{
			Function_280(474, (Function_37(474) + 1.0f));
		}
		else if (iVar11 == Global_30621[1])
		{
			Function_280(475, (Function_37(475) + 1.0f));
		}
		else if (iVar11 == Global_30621[2])
		{
			Function_280(476, (Function_37(476) + 1.0f));
		}
	}
	else
	{
		Function_111(&(Global_29008[bVar0]), 4096);
	}
	return bVar0;
}

var Function_424(bool bParam0) //Position: 0x1E2FF / 123647
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

void Function_425() //Position: 0x1E34B / 123723
{
	var uVar0;
	
	Function_426(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("regions_layout");
	Local_4.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chov_armadillo", 3, -2148,081f, 16,097f, 2611,195f, 0.0f, 0.0f, 0.0f, 150.0f, 154,3634f, 150.0f);
	Local_4.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_4, "riov_fortmercer", 3, -2678,089f, 67,263f, 3450,585f, 0.0f, 20.0f, 0.0f, 150.0f, 50.0f, 150.0f);
	Local_4.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chov_twinrocks", 3, -2428.0f, 24,627f, 2144f, 0.0f, 20.0f, 0.0f, 175.0f, 50.0f, 175.0f);
	Local_4.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chov_ridgewood", 3, -3260,67f, 15,999f, 2705,505f, 0.0f, 20.0f, 0.0f, 125.0f, 50.0f, 125.0f);
	Local_4.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrv_tumbleweed", 3, -3946,923f, 28,894f, 2948,856f, 0.0f, 9,238991f, 0.0f, 176,1309f, 64,53324f, 159,0415f);
	Local_4.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrv_gaptooth", 3, -4450,974f, 20,923f, 3194,357f, 0.0f, 20.0f, 0.0f, 187,8394f, 71,9055f, 196,0643f);
	Local_4.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrv_solomons", 3, -3881,611f, 8,032f, 3660,03f, 0.0f, 20.0f, 0.0f, 125.0f, 50.0f, 125.0f);
	Local_4.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrv_rathskeller", 3, -3660f, 42,235f, 2136.0f, 0.0f, 20.0f, 0.0f, 100.0f, 50.0f, 100.0f);
	Local_4.f_132 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "frov_cholla_set");
	(*&Local_4 + 76)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla01", 3, -2602,73f, 33,40513f, 2665,931f, 0.0f, 0,05652091f, 0.0f, 910,5437f, 150.0f, 450.0f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[0]);
	(*&Local_4 + 76)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla02", 3, -2199,864f, 33,40513f, 2155,363f, 0.0f, 14,90549f, 0.0f, 503,9865f, 150.0f, 326,1552f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[1]);
	(*&Local_4 + 76)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla03", 3, -3359,402f, 33,40513f, 2400,197f, 0.0f, -31,93789f, 0.0f, 239,5854f, 85,69038f, 130,7859f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[2]);
	(*&Local_4 + 76)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla04", 3, -1862,122f, 33,40513f, 2982,551f, 0.0f, -25,86499f, 0.0f, 477,1432f, 150.0f, 292,3265f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[3]);
	(*&Local_4 + 76)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla05", 3, -2057,968f, 33,40513f, 3247,92f, 0.0f, -36,65475f, 0.0f, 570,6682f, 150.0f, 176,8855f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[4]);
	(*&Local_4 + 76)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla06", 3, -3210,272f, 33,40513f, 2897,85f, 0.0f, 0,05652091f, 0.0f, 260,1258f, 80,80408f, 198,9715f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[5]);
	(*&Local_4 + 76)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla07", 3, -3371,573f, 33,40513f, 2692,565f, 0.0f, 2,758052f, 0.0f, 125.0f, 150.0f, 297,8613f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[6]);
	(*&Local_4 + 76)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla08", 3, -2389,001f, 33,40513f, 2055,168f, 0.0f, -76,20333f, 0.0f, 240,372f, 150.0f, 349,7114f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[7]);
	(*&Local_4 + 76)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla09", 3, -1878,934f, 33,40513f, 2351,455f, 0.0f, -30,36887f, 0.0f, 125.0f, 150.0f, 183,2645f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[8]);
	(*&Local_4 + 76)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla010", 3, -1767,727f, 33,40513f, 2752,065f, 0.0f, 0,05652091f, 0.0f, 157,8653f, 150.0f, 172,4045f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[9]);
	(*&Local_4 + 76)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla011", 3, -2425,848f, 33,40513f, 3055,122f, 0.0f, -24,74285f, 0.0f, 279,884f, 150.0f, 144,233f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[10]);
	(*&Local_4 + 76)[11] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla012", 3, -2790,744f, 37,32828f, 2229,882f, 0.0f, 33,13997f, 0.0f, 168,0747f, 150.0f, 111,0339f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[11]);
	(*&Local_4 + 76)[12] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_cholla013", 3, -3224,248f, 33,40513f, 2310,521f, 0.0f, -8,591194f, 0.0f, 151,5101f, 100,2558f, 90,35665f);
	ADD_TO_VOLUME_SET(Local_4.f_132, (*&Local_4 + 76)[12]);
	Local_4.f_196 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "frov_gaptooth_set");
	(*&Local_4 + 136)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth1", 3, -3969,955f, 40.0f, 2804,408f, 0.0f, 0.0f, 0.0f, 425,0244f, 200.0f, 532,4791f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[0]);
	(*&Local_4 + 136)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth2", 3, -4209,322f, 40.0f, 3599,196f, 0.0f, -26,05212f, 0.0f, 371,451f, 200.0f, 205,1757f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[1]);
	(*&Local_4 + 136)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth3", 3, -4026,704f, 40.0f, 3358,218f, 0.0f, -26,05212f, 0.0f, 371,451f, 200.0f, 205,1757f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[2]);
	(*&Local_4 + 136)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth4", 3, -4479,839f, 40.0f, 2492,048f, 0.0f, -106,8796f, 0.0f, 371,451f, 200.0f, 205,1757f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[3]);
	(*&Local_4 + 136)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth5", 3, -3792,116f, 40.0f, 2371,747f, 0.0f, -121,7228f, 0.0f, 371,451f, 200.0f, 125,6738f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[4]);
	(*&Local_4 + 136)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth6", 3, -3902,983f, 40.0f, 3626,558f, 0.0f, -121,7228f, 0.0f, 175,9137f, 200.0f, 168,6144f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[5]);
	(*&Local_4 + 136)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth7", 3, -4701,729f, 40.0f, 3081,416f, 0.0f, -91,91017f, 0.0f, 622,3319f, 204,2115f, 533,3927f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[6]);
	(*&Local_4 + 136)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth8", 3, -3723,264f, 12.0f, 3466,478f, 0.0f, -27,09326f, 0.0f, 105.0f, 50.0f, 130.0f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[7]);
	(*&Local_4 + 136)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth9", 3, -4706,59f, 13,051f, 3682,356f, 0.0f, 20.0f, 0.0f, 187,5346f, 84,43104f, 149,7965f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[8]);
	(*&Local_4 + 136)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth10", 3, -4472,15f, 13,051f, 3646,979f, 0.0f, 20.0f, 0.0f, 187,5346f, 84,43104f, 149,7965f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[9]);
	(*&Local_4 + 136)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth11", 3, -4360,223f, 0,4618087f, 3691,596f, 0,206538f, -12,38739f, -0,8785428f, 187,5346f, 84,43104f, 108,0804f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[10]);
	(*&Local_4 + 136)[11] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth12", 3, -4147,811f, -11,15957f, 3808,613f, -0,9516244f, -38,17848f, 1,679624f, 187,5346f, 84,43104f, 87,76409f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[11]);
	(*&Local_4 + 136)[12] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth13", 3, -3949,441f, -11,15957f, 3940,317f, -0,9516244f, -38,17848f, 1,679624f, 189,331f, 85,23979f, 107,984f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[12]);
	(*&Local_4 + 136)[13] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_gaptooth14", 3, -3891,702f, -11,43176f, 3817,105f, 5,824818f, -97,39114f, -4,68537f, 100,7107f, 85,23979f, 79,91846f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 136)[13]);
	Local_4.f_228 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "frov_riobravo_set");
	(*&Local_4 + 200)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_riobravo0", 3, -2911,346f, 63,4446f, 3486,49f, 0.0f, 0.0f, 0.0f, 648,2305f, 275,4488f, 354,9236f);
	ADD_TO_VOLUME_SET(Local_4.f_228, (*&Local_4 + 200)[0]);
	(*&Local_4 + 200)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_riobravo1", 3, -3441,621f, 63,4446f, 3718,957f, 0.0f, 48,84464f, 0.0f, 436,935f, 279,3885f, 222,3333f);
	ADD_TO_VOLUME_SET(Local_4.f_228, (*&Local_4 + 200)[1]);
	(*&Local_4 + 200)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_riobravo2", 3, -2372,235f, 63,46845f, 3677,2f, 0.0f, 30,47767f, 0.0f, 299,4622f, 261,6896f, 157,2439f);
	ADD_TO_VOLUME_SET(Local_4.f_228, (*&Local_4 + 200)[2]);
	(*&Local_4 + 200)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_riobravo3", 3, -3460,174f, 63,4446f, 3251,896f, 0.0f, 30,47767f, 0.0f, 184,1259f, 236,5031f, 156,5505f);
	ADD_TO_VOLUME_SET(Local_4.f_228, (*&Local_4 + 200)[3]);
	(*&Local_4 + 200)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_riobravo4", 3, -2517,998f, 63,4446f, 3766,027f, 0.0f, 2,464206f, 0.0f, 299,4622f, 261,6896f, 157,2439f);
	ADD_TO_VOLUME_SET(Local_4.f_228, (*&Local_4 + 200)[4]);
	(*&Local_4 + 200)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_riobravo5", 3, -3120,765f, 63,4446f, 3811,641f, 0.0f, 25,83067f, 0.0f, 144,4332f, 265,1125f, 192,7761f);
	ADD_TO_VOLUME_SET(Local_4.f_228, (*&Local_4 + 200)[5]);
	Local_4.f_272 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "frov_hen_set");
	(*&Local_4 + 232)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_hennigan0", 3, -654,6435f, -0,572317f, 2513,387f, 0.0f, 90,32787f, 0.0f, 284,3203f, 640,8917f, 1015,424f);
	ADD_TO_VOLUME_SET(Local_4.f_272, (*&Local_4 + 232)[0]);
	(*&Local_4 + 232)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_hennigan1", 3, -792,6554f, -0,572317f, 2377,834f, 0.0f, 159,6195f, 0.0f, 396,5943f, 666,2946f, 309,2861f);
	ADD_TO_VOLUME_SET(Local_4.f_272, (*&Local_4 + 232)[1]);
	(*&Local_4 + 232)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_hennigan2", 3, -1391,018f, -0,572317f, 2373,582f, 0.0f, 110,2352f, 0.0f, 463,2761f, 652,4385f, 268,773f);
	ADD_TO_VOLUME_SET(Local_4.f_272, (*&Local_4 + 232)[2]);
	(*&Local_4 + 232)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_hennigan3", 3, -706,7838f, -0,572317f, 2868,703f, 0.0f, 110,2352f, 0.0f, 268,7076f, 652,4385f, 675,9031f);
	ADD_TO_VOLUME_SET(Local_4.f_272, (*&Local_4 + 232)[3]);
	(*&Local_4 + 232)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_hennigan4", 3, -1259,285f, -0,572317f, 2758,507f, 0.0f, 110,2352f, 0.0f, 320,8498f, 652,4385f, 258,9835f);
	ADD_TO_VOLUME_SET(Local_4.f_272, (*&Local_4 + 232)[4]);
	(*&Local_4 + 232)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_hennigan5", 3, -1219,818f, -0,572317f, 3107,28f, 0.0f, 134,4942f, 0.0f, 126,499f, 688,3062f, 205,6273f);
	ADD_TO_VOLUME_SET(Local_4.f_272, (*&Local_4 + 232)[5]);
	(*&Local_4 + 232)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_hennigan6", 3, 80,50993f, -0,572317f, 2265,647f, 0.0f, 169,9944f, 0.0f, 167,0905f, 688,3062f, 214,8033f);
	ADD_TO_VOLUME_SET(Local_4.f_272, (*&Local_4 + 232)[6]);
	(*&Local_4 + 232)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_hennigan7", 3, -1278,678f, -0,572317f, 2084,858f, 0.0f, 246,3853f, 0.0f, 167,0905f, 688,3062f, 338,9639f);
	ADD_TO_VOLUME_SET(Local_4.f_272, (*&Local_4 + 232)[7]);
	(*&Local_4 + 232)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "frov_hennigan8", 3, -1562,09f, -0,572317f, 1962,695f, 0.0f, 212,4582f, 0.0f, 89,96301f, 688,3062f, 190,3966f);
	ADD_TO_VOLUME_SET(Local_4.f_272, (*&Local_4 + 232)[8]);
	Local_4.f_300 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "norv_talltrees_set");
	(*&Local_4 + 276)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "norv_talltrees01", 3, -664,218f, 100.0f, 1633,067f, 0.0f, 3,63951f, 0.0f, 425,5292f, 621,0958f, 405,257f);
	ADD_TO_VOLUME_SET(Local_4.f_300, (*&Local_4 + 276)[0]);
	(*&Local_4 + 276)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "norv_talltrees02", 3, -860,4616f, 100.0f, 1043,82f, 0.0f, -21,02844f, 0.0f, 506,3877f, 650.0f, 410,6267f);
	ADD_TO_VOLUME_SET(Local_4.f_300, (*&Local_4 + 276)[1]);
	(*&Local_4 + 276)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "norv_talltrees03", 3, -948,3646f, 100.0f, 1483,085f, 0.0f, 7,118113f, 0.0f, 369,6403f, 695,7256f, 413,5833f);
	ADD_TO_VOLUME_SET(Local_4.f_300, (*&Local_4 + 276)[2]);
	(*&Local_4 + 276)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "norv_talltrees04", 3, -295,1738f, 100.0f, 2009,13f, 0.0f, 7,118113f, 0.0f, 250.0f, 650.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_300, (*&Local_4 + 276)[3]);
	(*&Local_4 + 276)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "norv_talltrees09", 3, -215,8781f, 100.0f, 1844,72f, 0.0f, 21,17577f, 0.0f, 110,2175f, 650.0f, 232,1736f);
	ADD_TO_VOLUME_SET(Local_4.f_300, (*&Local_4 + 276)[4]);
	Local_4.f_316 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "norv_greatplains_set");
	(*&Local_4 + 304)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "norv_greatplains0", 3, 385,7805f, 50.0f, 1398,548f, 0,04069565f, 37,93713f, -0,07905933f, 597,0989f, 650.0f, 777,3274f);
	ADD_TO_VOLUME_SET(Local_4.f_316, (*&Local_4 + 304)[0]);
	(*&Local_4 + 304)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "norv_greatplains1", 3, -235,6304f, 50.0f, 1242,495f, 0,03415427f, -7,712558f, -0,1062401f, 117,4279f, 650.0f, 127,3956f);
	ADD_TO_VOLUME_SET(Local_4.f_316, (*&Local_4 + 304)[1]);
	Local_4.f_352 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "mexv_puntaorgullo_set");
	(*&Local_4 + 320)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_puntaorgullo3", 3, -3908,31f, 100,8937f, 4547,261f, 0.0f, 90,32787f, 0.0f, 426,758f, 640,8917f, 1015,68f);
	ADD_TO_VOLUME_SET(Local_4.f_352, (*&Local_4 + 320)[0]);
	(*&Local_4 + 320)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_puntaorgullo2", 3, -4537,572f, 100,2876f, 4007,03f, 0.0f, 90,32787f, 0.0f, 167,637f, 232,9514f, 235,1425f);
	ADD_TO_VOLUME_SET(Local_4.f_352, (*&Local_4 + 320)[1]);
	(*&Local_4 + 320)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_puntaorgullo1", 3, -4674,773f, 100,8937f, 4831,357f, 0.0f, 90,32787f, 0.0f, 289,5066f, 640,8917f, 481,8735f);
	ADD_TO_VOLUME_SET(Local_4.f_352, (*&Local_4 + 320)[2]);
	(*&Local_4 + 320)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_puntaorgullo0", 3, -3250,339f, 100,8937f, 4251,694f, 0.0f, 90,32787f, 0.0f, 214,0201f, 640,8917f, 208,7931f);
	ADD_TO_VOLUME_SET(Local_4.f_352, (*&Local_4 + 320)[3]);
	(*&Local_4 + 320)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_puntaorgullo4", 3, -4379,823f, 94,99134f, 3960,021f, -11,72191f, 79,01791f, -9,020085f, 98,07817f, 100,8917f, 230,4239f);
	ADD_TO_VOLUME_SET(Local_4.f_352, (*&Local_4 + 320)[4]);
	(*&Local_4 + 320)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_puntaorgullo5", 3, -4152,083f, 102,1011f, 4060,414f, -3,983634f, 56,14435f, -0,8168986f, 77,13268f, 100,8917f, 230,4239f);
	ADD_TO_VOLUME_SET(Local_4.f_352, (*&Local_4 + 320)[5]);
	(*&Local_4 + 320)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_puntaorgullo6", 3, -4506,897f, 100,8937f, 4130,898f, 15,41098f, 83,84049f, 15,19284f, 206,3981f, 232,9514f, 413,039f);
	ADD_TO_VOLUME_SET(Local_4.f_352, (*&Local_4 + 320)[6]);
	Local_4.f_380 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "mexv_perdido_set");
	(*&Local_4 + 356)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_perdido0", 3, -1893,859f, 54,86121f, 4684,601f, 0.0f, 90,32787f, 0.0f, 608,0305f, 640,8917f, 900.0f);
	ADD_TO_VOLUME_SET(Local_4.f_380, (*&Local_4 + 356)[0]);
	(*&Local_4 + 356)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_perdido1", 3, -2450,241f, 54,86121f, 4283,085f, 0.0f, 68,25627f, 0.0f, 278,5218f, 640,8917f, 625,5054f);
	ADD_TO_VOLUME_SET(Local_4.f_380, (*&Local_4 + 356)[1]);
	(*&Local_4 + 356)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_perdido2", 3, -1938,71f, 54,86121f, 4044,273f, 0.0f, 113,8802f, 0.0f, 278,5218f, 640,8917f, 675,4775f);
	ADD_TO_VOLUME_SET(Local_4.f_380, (*&Local_4 + 356)[2]);
	(*&Local_4 + 356)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_perdido3", 3, -2824,411f, 54,86121f, 4388,975f, 0.0f, 43,21671f, 0.0f, 75.0f, 650.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_380, (*&Local_4 + 356)[3]);
	(*&Local_4 + 356)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_perdido4", 3, -2352,672f, 54,86121f, 4003,182f, 0.0f, 15,84f, 0.0f, 129,0348f, 640,8917f, 67,42111f);
	ADD_TO_VOLUME_SET(Local_4.f_380, (*&Local_4 + 356)[4]);
	Local_4.f_404 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "mexv_diez_set");
	(*&Local_4 + 384)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_diez1", 3, -162,3152f, 40,93773f, 4314,125f, 0.0f, 90,32787f, 0.0f, 608,0305f, 640,8917f, 915.0f);
	ADD_TO_VOLUME_SET(Local_4.f_404, (*&Local_4 + 384)[0]);
	(*&Local_4 + 384)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_diez2", 3, -330,4504f, 40,93773f, 3804,267f, 0.0f, 83,96482f, 0.0f, 608,0305f, 640,8917f, 939,0677f);
	ADD_TO_VOLUME_SET(Local_4.f_404, (*&Local_4 + 384)[1]);
	(*&Local_4 + 384)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_diez3", 3, 346,4795f, 40,93773f, 3484,432f, 0.0f, 83,96482f, 0.0f, 608,0305f, 640,8917f, 939,0677f);
	ADD_TO_VOLUME_SET(Local_4.f_404, (*&Local_4 + 384)[2]);
	(*&Local_4 + 384)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "mexv_diez4", 3, 220,3329f, 40,93773f, 2921,959f, 0.0f, 115.0f, 0.0f, 200.0f, 500.0f, 400.0f);
	ADD_TO_VOLUME_SET(Local_4.f_404, (*&Local_4 + 384)[3]);
	Local_4.f_408 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnv_thieves", 3, 119,5282f, 73,31f, 2284,021f, 0.0f, 0.0f, 0.0f, 200.0f, 50.0f, 225.0f);
	Local_4.f_412 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnv_hennigan", 3, -861,2434f, 90,476f, 2421,146f, 0.0f, 38,98653f, 0.0f, 150.0f, 100.0f, 150.0f);
	Local_4.f_444 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "hgnv_pikesbasin_set");
	(*&Local_4 + 416)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnv_pikesbasin1", 2, -1582,008f, 71,79928f, 2439,541f, 0.0f, -32,21291f, 0.0f, 163,7029f, 93,59687f, 80,09351f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 416)[0]);
	(*&Local_4 + 416)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnv_pikesbasin2", 2, -1419,968f, 71,79928f, 2437,603f, 0.0f, -0,4750807f, 0.0f, 249,2493f, 93,59687f, 154,2642f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 416)[1]);
	(*&Local_4 + 416)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnv_pikesbasin3", 2, -1281,553f, 71,79928f, 2492,5f, 0.0f, -0,5973046f, 0.0f, 150,2953f, 93,59687f, 140,3786f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 416)[2]);
	(*&Local_4 + 416)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnv_pikesbasin4", 2, -1197,996f, 71,79928f, 2370,546f, 0.0f, 0.0f, 0.0f, 268,4048f, 93,59687f, 160,5412f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 416)[3]);
	(*&Local_4 + 416)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnv_pikesbasin5", 2, -1279,899f, 71,79928f, 2228,296f, 0.0f, 75.0f, 0.0f, 346,6916f, 93,59687f, 152,3171f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 416)[4]);
	(*&Local_4 + 416)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnv_pikesbasin6", 2, -1448,279f, 71,79928f, 2274,595f, 0.0f, -0,4750807f, 0.0f, 189,0762f, 93,59687f, 219,553f);
	ADD_TO_VOLUME_SET(Local_4.f_444, (*&Local_4 + 416)[5]);
	Local_4.f_448 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrv_benedict", 3, -3682.0f, 8,765f, 3472.0f, 0.0f, -27,09326f, 0.0f, 94,88051f, 50.0f, 125.0f);
	Local_4.f_452 = CREATE_VOLUME_IN_LAYOUT(Local_4, "punv_nosalida", 3, -4687,928f, 2,909f, 4022,312f, 0.0f, 31,92022f, 0.0f, 175.0f, 50.0f, 175.0f);
	Local_4.f_456 = CREATE_VOLUME_IN_LAYOUT(Local_4, "punv_escalera", 3, -4334,821f, 33,945f, 4372,996f, 0.0f, 16,41127f, 0.0f, 125.0f, 50.0f, 173,6178f);
	Local_4.f_460 = CREATE_VOLUME_IN_LAYOUT(Local_4, "punv_sidewinder", 3, -3691.0f, 20,57f, 4673,848f, 0.0f, 45.0f, 0.0f, 261,6631f, 50.0f, 198,2934f);
	Local_4.f_464 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdv_chuparosa", 3, -2695,956f, 31,296f, 4260,416f, 0.0f, 0.0f, 0.0f, 125.0f, 50.0f, 125.0f);
	Local_4.f_468 = CREATE_VOLUME_IN_LAYOUT(Local_4, "punv_tesoro", 3, -3263.0f, 38,149f, 4546.0f, 0.0f, 0.0f, 0.0f, 160.0f, 50.0f, 137,8573f);
	Local_4.f_472 = CREATE_VOLUME_IN_LAYOUT(Local_4, "dzcv_casamad", 3, -818,1281f, 13,051f, 3745,837f, 0.0f, 0.0f, 0.0f, 125.0f, 50.0f, 125.0f);
	Local_4.f_476 = CREATE_VOLUME_IN_LAYOUT(Local_4, "dzcv_torquemada", 3, 412,5369f, 35,453f, 3352,117f, 0.0f, 188,8143f, 0.0f, 126,4749f, 97,74591f, 180,2787f);
	Local_4.f_480 = CREATE_VOLUME_IN_LAYOUT(Local_4, "dzcv_elpresidio", 3, -707,7241f, 63,247f, 3303,276f, 0.0f, 0.0f, 0.0f, 109,8154f, 43,92617f, 109,8154f);
	Local_4.f_484 = CREATE_VOLUME_IN_LAYOUT(Local_4, "grtv_blackwater", 3, 732,721f, 78,306f, 1337,66f, 0.0f, 0.0f, 0.0f, 268,7039f, 100.0f, 232,677f);
	Local_4.f_488 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talv_manzanitas", 3, -439,412f, 152,371f, 1618,365f, 0.0f, 147,969f, 0.0f, 125.0f, 50.0f, 109,1198f);
	Local_4.f_492 = CREATE_VOLUME_IN_LAYOUT(Local_4, "ntalv_purc", 3, -274,131f, 84,308f, 2114,746f, 0.0f, 0.0f, 0.0f, 125.0f, 50.0f, 125.0f);
	Local_4.f_496 = CREATE_VOLUME_IN_LAYOUT(Local_4, "grtv_beecher", 3, -104,0136f, 118,448f, 1386,078f, 0.0f, 13,333f, 0.0f, 157,6699f, 50.0f, 183,9702f);
	Local_4.f_500 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_jorge", 3, -2613,24f, 26,102f, 2858,589f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_504 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_riley", 3, -2322,426f, 17,067f, 3181,13f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_508 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_donjulio", 3, -1868,701f, 16.0f, 3249,414f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_512 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chov_coots", 3, -1803,427f, 23,09f, 2796,09f, 0.0f, 20.0f, 0.0f, 125.0f, 50.0f, 175.0f);
	Local_4.f_516 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_hangingrock", 3, -1921,839f, 28,748f, 2257,471f, 0.0f, 20.0f, 0.0f, 65,86879f, 110,4106f, 65,86879f);
	Local_4.f_520 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_rattlesnake", 3, -2850,711f, 63,71f, 2191,967f, 0.0f, 32,08811f, 0.0f, 53,50481f, 49,44629f, 39,655f);
	Local_4.f_524 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_hamlins", 3, -3429,002f, 23,968f, 2496,709f, 0.0f, 162,611f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_528 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrp_cueva", 3, -4335,932f, 25,984f, 2756,106f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_532 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrp_scratching", 3, -4313,584f, 5,097f, 3743,516f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_536 = CREATE_VOLUME_IN_LAYOUT(Local_4, "geof_coronado", 3, -4914,604f, 85,823f, 2862,304f, 0.0f, 0.0f, 0.0f, 407,5577f, 50.0f, 1178,424f);
	Local_4.f_540 = CREATE_VOLUME_IN_LAYOUT(Local_4, "riop_repentance", 3, -3152,253f, 53,349f, 3312,079f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_544 = CREATE_VOLUME_IN_LAYOUT(Local_4, "riop_frontera", 3, -3533,55f, 9,718f, 4177,727f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_548 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdp_ramita", 3, -2357,972f, 13,942f, 3996,78f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_552 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnp_greenhollow", 3, -1235,523f, 22,219f, 3208,881f, 0.0f, 280,821f, 0.0f, 75.0f, 200.0f, 75.0f);
	Local_4.f_556 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnp_brittlebrush", 3, -493,7191f, 20,081f, 3021,845f, 0.0f, 20.0f, 0.0f, 75.0f, 200.0f, 75.0f);
	Local_4.f_560 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnp_manteca", 3, 29,748f, 94,712f, 2737,473f, 0.0f, 217,1f, 0.0f, 75.0f, 200.0f, 75.0f);
	Local_4.f_564 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnp_bacchus", 3, 121,9778f, 72,423f, 2676,006f, 0.0f, 20.0f, 0.0f, 75.0f, 200.0f, 75.0f);
	Local_4.f_568 = CREATE_VOLUME_IN_LAYOUT(Local_4, "dzcp_madera", 3, -1324,474f, 77,302f, 3635,33f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_572 = CREATE_VOLUME_IN_LAYOUT(Local_4, "dzcp_cabeza", 3, -628,843f, 22,086f, 4015,825f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_576 = CREATE_VOLUME_IN_LAYOUT(Local_4, "dzcp_laluna", 3, -644,01f, 33,693f, 3820,264f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_580 = CREATE_VOLUME_IN_LAYOUT(Local_4, "dzcp_sol", 3, -532,6394f, 43,793f, 3558,351f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_584 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdv_sepulcro", 3, -1339,889f, 13,051f, 4306,565f, 0.0f, 20.0f, 0.0f, 125.0f, 50.0f, 125.0f);
	Local_4.f_588 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdp_barranca", 3, -2240,46f, 23,09f, 4451,865f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_592 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_dellobo", 3, -1938,2f, 30,981f, 3466,862f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_596 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdp_deltoro", 3, -2810,675f, 16,09f, 3996,908f, 0.0f, 275,408f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_600 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdp_diablo", 3, -2734,759f, 47,677f, 4595,501f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_604 = CREATE_VOLUME_IN_LAYOUT(Local_4, "punp_plata", 3, -3378.0f, 56.0f, 4748.0f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_608 = CREATE_VOLUME_IN_LAYOUT(Local_4, "punp_crooked", 3, -3859,845f, 7,875f, 4308,219f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_612 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnp_mescalero", 3, -1288,191f, 108,424f, 2739,145f, 0.0f, 20.0f, 0.0f, 75.0f, 200.0f, 75.0f);
	Local_4.f_616 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnp_stillwater", 3, -189,05f, 73,615f, 2335,81f, 0.0f, 20.0f, 0.0f, 75.0f, 200.0f, 75.0f);
	Local_4.f_620 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talp_matchbook", 3, -313,5471f, 132,827f, 1887,214f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_624 = CREATE_VOLUME_IN_LAYOUT(Local_4, "grtp_broken", 3, 149,864f, 128,655f, 1386,829f, 0.0f, 71,373f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_628 = CREATE_VOLUME_IN_LAYOUT(Local_4, "grtp_wreck", 3, 342,6059f, 71,415f, 1945,118f, 0.0f, 42,9068f, 0.0f, 75.0f, 50.0f, 88,21992f);
	Local_4.f_632 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talp_aurora", 3, -1043,265f, 184,053f, 1377,212f, 0.0f, 0,543f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_636 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talp_tanner", 3, -850,223f, 189,687f, 1590,618f, 0.0f, 169,6865f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_640 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talp_nekoti", 3, -706,0563f, 208,26f, 1129,094f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_644 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_oddfellowsrest", 3, -2912.0f, 19,075f, 2694.0f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_648 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_mercerstation", 3, -2829.0f, 20,079f, 3077.0f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_652 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_pleasancehouse", 3, -2829,5f, 50,341f, 2416.0f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_656 = CREATE_VOLUME_IN_LAYOUT(Local_4, "dzcv_elmataderotown", 3, -366,7026f, 16,953f, 3941,29f, 0.0f, 0.0f, 0.0f, 163,908f, 105,4195f, 110.0f);
	Local_4.f_660 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrp_silent", 3, -4015,325f, 21,468f, 2401,67f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_676 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "talv_cochinay_set");
	(*&Local_4 + 664)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "grzv_cochinay1", 3, -790,3881f, 209,8834f, 788,6389f, 0.0f, 0.0f, 0.0f, 155,4279f, 80,69572f, 126,2354f);
	ADD_TO_VOLUME_SET(Local_4.f_676, (*&Local_4 + 664)[0]);
	(*&Local_4 + 664)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "grzv_cochinay2", 3, -887,9458f, 185,5259f, 996,4893f, 0.0f, -15,98936f, 0.0f, 133,6408f, 130,9943f, 255,0045f);
	ADD_TO_VOLUME_SET(Local_4.f_676, (*&Local_4 + 664)[1]);
	Local_4.f_680 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talv_cochinayMP", 3, -857,1129f, 209.0f, 956,5495f, 0.0f, 131,3724f, 0.0f, 360.0f, 200.0f, 360.0f);
	Local_4.f_684 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_2crows", 3, -2315,766f, 23,09f, 2992,637f, 0.0f, 309,896f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_688 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talp_bearclaw", 3, -495,718f, 144,911f, 1918,029f, 0.0f, 48,557f, 0.0f, 100.0f, 50.0f, 100.0f);
	Local_4.f_692 = CREATE_VOLUME_IN_LAYOUT(Local_4, "dzcp_mantecafalls", 3, -68,74f, 68,267f, 2793,727f, 0.0f, 169,6865f, 0.0f, 75.0f, 100.0f, 75.0f);
	Local_4.f_696 = CREATE_VOLUME_IN_LAYOUT(Local_4, "riop_delloborock", 3, -2002,259f, 45,176f, 3596,785f, 0.0f, 169,6865f, 0.0f, 75.0f, 100.0f, 75.0f);
	Local_4.f_700 = CREATE_VOLUME_IN_LAYOUT(Local_4, "gtrp_benedictpass", 3, -3539,92f, 9,442f, 3133,353f, 0.0f, 169,6865f, 0.0f, 75.0f, 100.0f, 75.0f);
	Local_4.f_704 = CREATE_VOLUME_IN_LAYOUT(Local_4, "riov_plainview", 3, -3191,322f, 41,131f, 3764,382f, 0.0f, 279,7464f, 0.0f, 159,5616f, 75.0f, 178,7948f);
	Local_4.f_708 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdp_primero_quebrada", 3, -1187,887f, 18,072f, 4976,144f, 0.0f, 64,308f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_712 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdp_rancho_polvo", 3, -1145,186f, 27,988f, 4817,662f, 0.0f, 248,306f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_716 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdp_laguna_borrego", 3, -1448,826f, 19,691f, 4909,078f, 0.0f, 197,284f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_720 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdp_hendidura_grande", 3, -1756,155f, 30,368f, 4819,781f, 0.0f, 167,282f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_724 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdp_campo_mirada", 3, -2149,709f, 18,074f, 4976,483f, 0.0f, 20.0f, 0.0f, 75.0f, 50.0f, 75.0f);
	Local_4.f_728 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdv_lashermanas", 3, -1700,197f, 8,071f, 4227,977f, 0.0f, 0.0f, 0.0f, 125.0f, 50.0f, 125.0f);
	Local_4.f_732 = CREATE_VOLUME_IN_LAYOUT(Local_4, "prdv_agaveviejo", 3, -1494,28f, 16,9f, 3896,205f, 0.0f, 0.0f, 0.0f, 125.0f, 50.0f, 125.0f);
	Local_4.f_736 = CREATE_VOLUME_IN_LAYOUT(Local_4, "chop_Critchley", 3, -2921,532f, 13,051f, 2940,276f, 0.0f, 23,02f, 0.0f, 105,945f, 50.0f, 94,39014f);
	Local_4.f_740 = CREATE_VOLUME_IN_LAYOUT(Local_4, "Chop_Venters_Place", 3, -2015,928f, 42,041f, 3030,2f, 0.0f, 20.0f, 0.0f, 59,02263f, 67,07185f, 56,02647f);
	Local_4.f_744 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talp_Masons", 3, -147,371f, 80,369f, 2203,543f, 0.0f, 20.0f, 0.0f, 45,26587f, 80,49738f, 56,03757f);
	Local_4.f_748 = CREATE_VOLUME_IN_LAYOUT(Local_4, "grtp_Dixons", 3, 173,296f, 73,482f, 2082,252f, 0.0f, -6,194558f, 0.0f, 33,01608f, 77,15987f, 34,41447f);
	Local_4.f_752 = CREATE_VOLUME_IN_LAYOUT(Local_4, "punp_Puerto_Cuchillo", 3, -3842,145f, 2,766f, 4220,753f, 0.0f, -10,85164f, 0.0f, 15,79383f, 27,52902f, 13,09824f);
	Local_4.f_756 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talp_Tanners_Span", 3, -567,478f, 104,603f, 2082,163f, 0.0f, 20.0f, 0.0f, 26,72707f, 103,3651f, 13,55009f);
	Local_4.f_760 = CREATE_VOLUME_IN_LAYOUT(Local_4, "talp_Montana_ford", 3, -480,7349f, 71,037f, 2186,415f, 0.0f, 20.0f, 0.0f, 12,45525f, 71,31406f, 13,03489f);
	Local_4.f_764 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnp_warthington", 3, -946,211f, 103,654f, 2735,125f, 0.0f, 20.0f, 0.0f, 54,4305f, 103,6033f, 54,15482f);
	Local_4.f_768 = CREATE_VOLUME_IN_LAYOUT(Local_4, "hgnv_pikesbasin_MP", 3, -1345,505f, 111,1438f, 2314,189f, 0.0f, 0.0f, 0.0f, 325,8785f, 59,18049f, 278,2251f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Merchant04", 3, -4331,516f, 27,71106f, 2746,448f, 0.0f, 20.0f, 0.0f, 21,41067f, 9,142949f, 22,89105f);
	Local_4.f_772 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Ranch07", 2, -790,8589f, 93,863f, 2412,262f, -0,005042201f, -34,04364f, -0,3053975f, 12,11379f, 5,005472f, 14,78417f);
	Local_4.f_776 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Ranch08", 2, -845,1255f, 92,74963f, 2458,445f, 0.0f, 24,12969f, 0.0f, 28,4539f, 11,48647f, 44,94153f);
	Local_4.f_780 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Marshal", 2, -2091,528f, 16,57267f, 2606,137f, 0.0f, 24,46099f, 0.0f, 6,486022f, 5,303829f, 8,774861f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Merchant01", 3, -1696,57f, 29,634f, 3066,021f, 0.0f, 20.0f, 0.0f, 15.0f, 19,21686f, 15.0f);
	Local_4.f_784 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Merchant05", 2, -3264,162f, 17,84678f, 2728,371f, 0.0f, 69,13892f, 0.0f, 11,20773f, 9,987062f, 21,77856f);
	Local_4.f_788 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Outlaw01", 2, -2163,299f, 17,25398f, 2571,01f, 0.0f, 0.0f, 0.0f, 6,837639f, 6,845285f, 7,475767f);
	Local_4.f_792 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Outlaw02", 2, -3667,912f, 9,824644f, 3494,536f, 1,317f, 17,73706f, -1,249027f, 13,07529f, 7,034909f, 16,78192f);
	Local_4.f_796 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Outlaw03", 2, 175,5428f, 74,677f, 2222,393f, 0.0f, -30,63849f, 0.0f, 13,42699f, 3,225995f, 2,953852f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Grave01", 3, -1802,117f, 24,427f, 2865,854f, 0.0f, 13,333f, 0.0f, 4,9f, 4,9f, 4,9f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Grave02", 3, -1777,091f, 24,093f, 2849,859f, 0.0f, 13,333f, 0.0f, 16,32322f, 16,32322f, 16,32322f);
	Local_4.f_800 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Grave03", 2, -3915,643f, 32,52577f, 2900,555f, 0.0f, -36,86835f, 0.0f, 12,07889f, 10.0f, 11,04155f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Fort01", 3, -2744,267f, 79,1f, 3600,36f, 0.0f, 20.0f, 0.0f, 25.0f, 50.0f, 25.0f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Fort02", 3, -482,8044f, 22,37143f, 3039,961f, 0.0f, 20.0f, 0.0f, 10,69004f, 10,69004f, 10,69004f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Gun01", 3, -2699,101f, 31,28048f, 4255,511f, 0.0f, 0.0f, 0.0f, 60.0f, 50.0f, 45.0f);
	Local_4.f_804 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Gun02", 2, -2690,058f, 33,08378f, 4286,954f, 0.0f, -1,921356f, 0.0f, 12,07097f, 3,541116f, 5,509146f);
	Local_4.f_808 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Gun05", 2, -2698,733f, 31,217f, 4277,214f, 0.0f, 0.0f, 0.0f, 12,4142f, 7,487773f, 13,50782f);
	Local_4.f_812 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_MexGirl", 2, -2147,349f, 18,239f, 4967,502f, 0.0f, 0.0f, 0.0f, 15,61093f, 15,61093f, 16,50205f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_MexArmy05", 3, -4356,495f, 44,261f, 4342,515f, 0.0f, 13,333f, 0.0f, 20.0f, 50.0f, 20.0f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_MexArmy04", 3, -4354,919f, 41,964f, 4329,449f, 0.0f, 24,49f, 0.0f, 45.0f, 50.0f, 40.0f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_MexArmy03", 3, -4376,89f, 38,71617f, 4362,818f, 0.0f, 13,333f, 0.0f, 9,644364f, 52,77525f, 10,16607f);
	Local_4.f_816 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_MexArmy02", 2, -4379,67f, 38,7f, 4364,811f, 0,8604763f, -16,92756f, 3,638983f, 7,5f, 12,70456f, 11,49584f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_MexArmy01", 3, -4355,753f, 45,466f, 4342,309f, 0.0f, 13,333f, 0.0f, 11.0f, 50.0f, 11.0f);
	Local_4.f_820 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Rebel02", 2, -2287,178f, 22,76f, 4954,236f, 0.0f, -36,32032f, 0.0f, 15,49476f, 24,87981f, 23,93099f);
	Local_4.f_824 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Rebel03", 2, -1466,879f, 19,23789f, 3947,904f, 0.0f, 13,75014f, 0.0f, 20,10171f, 15,29672f, 21,09918f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Rebel04", 3, -2265,303f, 21,45937f, 4932,479f, 0.0f, 41,64869f, 0.0f, 60,54074f, 25.0f, 37,75085f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Rebel05", 3, -4248,815f, 22,147f, 4376,133f, 0.0f, 20.0f, 0.0f, 25.0f, 25.0f, 25.0f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Home02Son02", 3, -101,336f, 117,748f, 1404,77f, 0.0f, 52,19895f, 0.0f, 7,5f, 10.0f, 7,5f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Home02Son01", 3, -59,33513f, 121,133f, 1388,977f, 0.0f, 13,333f, 0.0f, 7,5f, 10.0f, 7,5f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Home02Ranch03", 3, -5,259f, 130,659f, 1445,75f, 0.0f, 13,333f, 0.0f, 7,5f, 10.0f, 7,5f);
	CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Home02Ranch01", 3, -76,984f, 116,861f, 1395,304f, 0.0f, 13,333f, 0.0f, 7,5f, 10.0f, 7,5f);
	Local_4.f_828 = CREATE_VOLUME_IN_LAYOUT(Local_4, "launch_Home01", 2, -110,6957f, 120,997f, 1367,876f, 0.0f, -33,02065f, 0.0f, 22,98656f, 13,91831f, 43,69495f);
	Local_4.f_832 = CREATE_VOLUME_IN_LAYOUT(Local_4, "_MeterAndHalfTest", 3, -1694,394f, 29,634f, 3068,558f, 0.0f, 20.0f, 0.0f, 3.0f, 3.0f, 3.0f);
	Local_4.f_836 = CREATE_GRINGO_IN_LAYOUT(Local_4, "treasure_hunting_2", "treasure_hunting_2", -1989,681f, 32,14432f, 3617,284f, 0.0f, 96,96473f, 0.0f);
	Local_4.f_840 = CREATE_GRINGO_IN_LAYOUT(Local_4, "treasure_hunting_7", "treasure_hunting_7", -1529,021f, 61,63215f, 3708,159f, 0.0f, 94,8173f, 0.0f);
	Local_4.f_844 = CREATE_GRINGO_IN_LAYOUT(Local_4, "treasure_hunting_6", "treasure_hunting_6", -2748,208f, 54,5189f, 4654,738f, 0.0f, 1,314279f, 0.0f);
	return;
}

void Function_426(int iParam0, int iParam1) //Position: 0x21B96 / 138134
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

void Function_427() //Position: 0x21BDF / 138207
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_16537)
	{
		Global_16537[iVar021].f_56 = "";
		Global_16537[iVar021].f_60 = "";
		Global_16537[iVar021].f_64 = "";
		Global_16537[iVar021].f_68 = "";
		Global_16537[iVar021].f_72 = "";
		Global_16537[iVar021].f_76 = "";
		Global_16537[iVar021].f_80 = "";
		iVar0++;
	}
	return;
}

int Function_428() //Position: 0x21C46 / 138310
{
	Function_482(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/treasure_hunting_2", 1, 0);
	Function_482(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/treasure_hunting_7", 1, 0);
	Function_482(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/treasure_hunting_6", 1, 0);
	if (Function_477(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

void Function_429() //Position: 0x21D2E / 138542
{
	Global_26137[0] = Function_430("AllowedToInvestigate", 1);
	Global_26137[1] = Function_430("BumpedIntoMeJustNow", 1);
	Global_26137[2] = Function_430("CanCombatFight", 1);
	Global_26137[3] = Function_430("CanHotspotMoveTo", 0);
	Global_26137[4] = Function_430("CanHotspotUse", 0);
	Global_26137[5] = Function_430("CanInvestigateBody", 1);
	Global_26137[6] = Function_430("HasFightCapabilities", 0);
	Global_26137[7] = Function_430("ShouldInvestigateBody", 1);
	Global_26137[8] = Function_430("CanCombatTakeDownFromMount", 1);
	return;
}

var Function_430(bool bParam0, int iParam1) //Position: 0x21E51 / 138833
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

void Function_431() //Position: 0x21EAC / 138924
{
	Function_473();
	Function_472();
	Function_471();
	Function_470();
	Function_469();
	Function_468();
	Function_467();
	Function_466();
	Function_465();
	Function_464();
	Function_463();
	Function_462();
	Function_461();
	Function_460();
	Function_459();
	Function_458();
	Function_457();
	Function_456();
	Function_455();
	Function_454();
	Function_453();
	Function_452();
	Function_451();
	Function_450();
	Function_449();
	Function_448();
	Function_447();
	Function_446();
	Function_445();
	Function_444();
	Function_443();
	Function_442();
	Function_441();
	Function_440();
	Function_439();
	Function_438();
	Function_437();
	Function_433();
	Function_432();
	return;
}

void Function_432() //Position: 0x21F27 / 139047
{
	return;
}

void Function_433() //Position: 0x21F2D / 139053
{
	Function_434(&Global_7171, &Global_8481, 0, 7, "tb/gen_brain");
	return;
}

void Function_434(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x21F4D / 139085
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
	Function_436(uParam0[iVar02], 1);
	Function_435(uParam0[iVar02], 2);
	Function_436(uParam0[iVar02], 8);
	Function_436(uParam0[iVar02], 16);
}

void Function_435(var uParam0, int iParam1) //Position: 0x21FE7 / 139239
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_436(var uParam0, int iParam1) //Position: 0x21FF6 / 139254
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_437() //Position: 0x2200D / 139277
{
	Function_434(&Global_7113, &Global_8395, 0, 325, "upr/upr_Worker1.xml");
	Function_434(&Global_7113, &Global_8395, 1, 201, "upr/upr_Worker2.xml");
	Function_434(&Global_7113, &Global_8395, 2, 176, "upr/upr_Worker3.xml");
	Function_434(&Global_7113, &Global_8395, 3, 177, "upr/upr_Worker4.xml");
	Function_434(&Global_7113, &Global_8395, 4, 40, "upr/upr_Worker5.xml");
	Function_434(&Global_7113, &Global_8395, 5, 41, "upr/upr_Worker6.xml");
	Function_434(&Global_7113, &Global_8395, 6, 27, "upr/upr_Worker7.xml");
	Function_434(&Global_7113, &Global_8395, 7, 177, "upr/upr_Worker8.xml");
	Function_434(&Global_7113, &Global_8395, 8, 197, "upr/upr_Worker9.xml");
	Function_434(&Global_7113, &Global_8395, 9, 175, "upr/upr_Worker10.xml");
	Function_434(&Global_7113, &Global_8395, 10, 132, "upr/upr_Worker11.xml");
	Function_434(&Global_7113, &Global_8395, 11, 174, "upr/upr_Worker12.xml");
	Function_434(&Global_7113, &Global_8395, 12, 43, "upr/upr_Worker13.xml");
	Function_434(&Global_7113, &Global_8395, 13, 10, "upr/upr_Worker14.xml");
	Function_434(&Global_7113, &Global_8395, 14, 42, "upr/upr_Worker15.xml");
	Function_434(&Global_7113, &Global_8395, 15, 9, "upr/upr_Worker16.xml");
	Function_434(&Global_7113, &Global_8395, 16, 173, "upr/upr_Worker17.xml");
	return;
}

void Function_438() //Position: 0x2225E / 139870
{
	Function_434(&Global_7148, &Global_8447, 0, 198, "mtp/Husband_Br_MTP");
	Function_434(&Global_7148, &Global_8447, 1, 52, "mtp/Wife_Br_MTP");
	Function_434(&Global_7148, &Global_8447, 2, 236, "mtp/GrandPa_Br_MTP");
	Function_434(&Global_7148, &Global_8447, 3, 86, "mtp/MTP_Br_Smith");
	Function_434(&Global_7148, &Global_8447, 4, 168, "mtp/Worker01_Br_MTP");
	Function_434(&Global_7148, &Global_8447, 5, 198, "mtp/Worker02_Br_MTP");
	Function_434(&Global_7148, &Global_8447, 6, 36, "mtp/Worker03_Br_MTP");
	Function_434(&Global_7148, &Global_8447, 7, 204, "mtp/Traveler_Br_MTP");
	Function_434(&Global_7148, &Global_8447, 8, 149, "mtp/Worker04_Br_MTP");
	Function_434(&Global_7148, &Global_8447, 9, 203, "mtp/Traveler_Br_2MTP");
	Function_434(&Global_7148, &Global_8447, 10, 166, "mtp/Worker05_Br_MTP");
	return;
}

void Function_439() //Position: 0x223D2 / 140242
{
	return;
}

void Function_440() //Position: 0x223D8 / 140248
{
	return;
}

void Function_441() //Position: 0x223DE / 140254
{
	Function_434(&Global_7035, &Global_8279, 11, 25, "blk/blkSmith_br_BLK");
	Function_434(&Global_7035, &Global_8279, 12, 189, "blk/pastor_br_BLK");
	Function_434(&Global_7035, &Global_8279, 13, 452, "blk/fbiDir_br_BLK");
	Function_434(&Global_7035, &Global_8279, 14, 449, "blk/fbiAgent_br_BLK");
	Function_434(&Global_7035, &Global_8279, 15, 91, "blk/theatreMgr_br_BLK");
	Function_434(&Global_7035, &Global_8279, 16, 166, "blk/theatreWkr_br_BLK");
	Function_434(&Global_7035, &Global_8279, 17, 105, "blk/doctor_br_BLK");
	Function_434(&Global_7035, &Global_8279, 18, 82, "blk/bartender_br_BLK");
	Function_434(&Global_7035, &Global_8279, 19, 58, "blk/waitress_br_BLK");
	Function_434(&Global_7035, &Global_8279, 20, 193, "blk/trainStn_br_BLK");
	Function_434(&Global_7035, &Global_8279, 21, 192, "blk/freightStn_br_BLK");
	Function_434(&Global_7035, &Global_8279, 22, 90, "blk/photographer_br_BLK");
	Function_434(&Global_7035, &Global_8279, 23, 96, "blk/ferryWkr_br_BLK");
	Function_434(&Global_7035, &Global_8279, 24, 219, "blk/hotelOwnr_br_BLK");
	Function_434(&Global_7035, &Global_8279, 25, 18, "blk/bankWkr_br_BLK");
	Function_434(&Global_7035, &Global_8279, 26, 89, "blk/bankWkr_br_BLK");
	Function_434(&Global_7035, &Global_8279, 27, 119, "blk/genStoreMgr_br_BLK");
	Function_434(&Global_7035, &Global_8279, 31, 146, "blk/gunShop_br_BLK");
	Function_434(&Global_7035, &Global_8279, 32, 220, "blk/tailor_br_BLK");
	Function_434(&Global_7035, &Global_8279, 33, 257, "blk/blkSmith_br_BLK");
	Function_434(&Global_7035, &Global_8279, 34, 6, "blk/bjdealer_br_BLK");
	return;
}

void Function_442() //Position: 0x226B8 / 140984
{
	return;
}

void Function_443() //Position: 0x226BE / 140990
{
	Function_434(&Global_7002, &Global_8231, 1, 392, "emt/MexGuard1");
	Function_434(&Global_7002, &Global_8231, 2, 396, "emt/MexGuard2");
	Function_434(&Global_7002, &Global_8231, 3, 393, "emt/MexGuard3");
	Function_434(&Global_7002, &Global_8231, 4, 391, "emt/MexGuard4");
	Function_434(&Global_7002, &Global_8231, 0, 395, "emt/emt_Lead.xml");
	Function_434(&Global_7002, &Global_8231, 5, 9, "emt/emt_Wrk1.xml");
	Function_434(&Global_7002, &Global_8231, 6, 10, "emt/emt_Wrk2.xml");
	Function_434(&Global_7002, &Global_8231, 7, 17, "emt/emt_Wrk3.xml");
	Function_434(&Global_7002, &Global_8231, 8, 11, "emt/emt_Wrk4.xml");
	Function_434(&Global_7002, &Global_8231, 9, 13, "emt/emt_Wrk5.xml");
	Function_434(&Global_7002, &Global_8231, 10, 14, "emt/emt_Wrk6.xml");
	Function_434(&Global_7002, &Global_8231, 11, 15, "emt/emt_Wrk7.xml");
	return;
}

void Function_444() //Position: 0x22831 / 141361
{
	Function_434(&Global_6987, &Global_8209, 0, 393, "tor/officer_Br_TOR");
	Function_434(&Global_6987, &Global_8209, 1, 379, "tor/sentry_early_Br_TOR");
	Function_434(&Global_6987, &Global_8209, 2, 380, "tor/sentry_late_Br_TOR");
	Function_434(&Global_6987, &Global_8209, 3, 391, "tor/tor_grunt");
	Function_434(&Global_6987, &Global_8209, 4, 393, "tor/tor_grunt1");
	Function_434(&Global_6987, &Global_8209, 5, 379, "tor/tor_grunt2");
	Function_434(&Global_6987, &Global_8209, 6, 379, "tor/tor_grunt3");
	return;
}

void Function_445() //Position: 0x2291D / 141597
{
	Function_434(&Global_6962, &Global_8172, 0, 395, "elp/elp_Gen");
	Function_434(&Global_6962, &Global_8172, 3, 391, "elp/Guard_Brain_elp");
	Function_434(&Global_6962, &Global_8172, 1, 394, "elp/elp_Major");
	Function_434(&Global_6962, &Global_8172, 2, 379, "elp/elp_Cmder");
	Function_434(&Global_6962, &Global_8172, 10, 320, "elp/elp_prisoner");
	Function_434(&Global_6962, &Global_8172, 11, 260, "elp/elp_Blacksmt");
	Function_434(&Global_6962, &Global_8172, 4, 392, "elp/Guard_Brain_elp1");
	Function_434(&Global_6962, &Global_8172, 5, 393, "elp/Guard_Brain_elp2");
	Function_434(&Global_6962, &Global_8172, 6, 396, "elp/Guard_Brain_elp3");
	Function_434(&Global_6962, &Global_8172, 7, 380, "elp/Guard_Brain_elp4");
	Function_434(&Global_6962, &Global_8172, 8, 381, "elp/Guard_Brain_elp5");
	Function_434(&Global_6962, &Global_8172, 9, 391, "elp/Guard_Brain_elp6");
	return;
}

void Function_446() //Position: 0x22AB7 / 142007
{
	Function_434(&Global_6933, &Global_8129, 0, 254, "cas/cas_barTend.xml");
	Function_434(&Global_6933, &Global_8129, 1, 258, "cas/cas_Blacksmth.xml");
	Function_434(&Global_6933, &Global_8129, 2, 308, "cas/cas_Train.xml");
	Function_434(&Global_6933, &Global_8129, 3, 245, "cas/cas_Whore.xml");
	Function_434(&Global_6933, &Global_8129, 4, 246, "cas/cas_Whore1.xml");
	Function_434(&Global_6933, &Global_8129, 5, 247, "cas/cas_Whore2.xml");
	Function_434(&Global_6933, &Global_8129, 6, 315, "cas/cas_Whore3.xml");
	Function_434(&Global_6933, &Global_8129, 7, 250, "cas/cas_Whore4.xml");
	Function_434(&Global_6933, &Global_8129, 8, 248, "cas/cas_Whore5.xml");
	Function_434(&Global_6933, &Global_8129, 9, 249, "cas/cas_Whore6.xml");
	Function_434(&Global_6933, &Global_8129, 10, 133, "cas/cas_Scott.xml");
	Function_434(&Global_6933, &Global_8129, 11, 280, "cas/cas_BdyGrd.xml");
	Function_434(&Global_6933, &Global_8129, 12, 281, "cas/cas_BdyGrd1.xml");
	Function_434(&Global_6933, &Global_8129, 13, 282, "cas/cas_BdyGrd2.xml");
	return;
}

void Function_447() //Position: 0x22C97 / 142487
{
	Function_434(&Global_7027, &Global_8268, 0, 305, "cas/cas_Preacher");
	return;
}

void Function_448() //Position: 0x22CBD / 142525
{
	Function_434(&Global_6907, &Global_8091, 0, 321, "agv/RanchOwnr");
	Function_434(&Global_6907, &Global_8091, 1, 237, "agv/LydiaBrain");
	Function_434(&Global_6907, &Global_8091, 2, 268, "agv/LeadRanchHand");
	Function_434(&Global_6907, &Global_8091, 3, 286, "agv/WorkRanchHand");
	Function_434(&Global_6907, &Global_8091, 4, 287, "agv/WorkRanchHand1");
	Function_434(&Global_6907, &Global_8091, 5, 288, "agv/RanchHand");
	Function_434(&Global_6907, &Global_8091, 6, 289, "agv/RanchHand1");
	Function_434(&Global_6907, &Global_8091, 7, 290, "agv/BlcksmthHand");
	Function_434(&Global_6907, &Global_8091, 8, 529, "agv/BodyGrdBrain");
	Function_434(&Global_6907, &Global_8091, 9, 530, "agv/BodyGrdBrain1");
	return;
}

void Function_449() //Position: 0x22DFF / 142847
{
	Function_434(&Global_6866, &Global_8030, 0, 613, "lsh/lsh_Head_nun");
	Function_434(&Global_6866, &Global_8030, 1, 294, "lsh/lsh_LeadWrk");
	Function_434(&Global_6866, &Global_8030, 2, 260, "lsh/lsh_blksmth");
	Function_434(&Global_6866, &Global_8030, 4, 295, "lsh/lsh_GenWrk");
	Function_434(&Global_6866, &Global_8030, 5, 296, "lsh/lsh_GenWrk1");
	Function_434(&Global_6866, &Global_8030, 6, 297, "lsh/lsh_GenWrk2");
	Function_434(&Global_6866, &Global_8030, 7, 298, "lsh/lsh_GenWrk3");
	Function_434(&Global_6866, &Global_8030, 8, 309, "lsh/lsh_RailWrk");
	Function_434(&Global_6866, &Global_8030, 9, 62, "lsh/lsh_Nun");
	Function_434(&Global_6866, &Global_8030, 10, 242, "lsh/lsh_Nun1");
	Function_434(&Global_6866, &Global_8030, 11, 62, "lsh/lsh_Nun2");
	Function_434(&Global_6866, &Global_8030, 12, 243, "lsh/lsh_Nun3");
	Function_434(&Global_6866, &Global_8030, 13, 62, "lsh/lsh_Nun4");
	Function_434(&Global_6866, &Global_8030, 14, 61, "lsh/lsh_Nun5");
	Function_434(&Global_6866, &Global_8030, 15, 63, "lsh/lsh_WrkNun");
	Function_434(&Global_6866, &Global_8030, 16, 62, "lsh/lsh_WrkNun1");
	Function_434(&Global_6866, &Global_8030, 17, 243, "lsh/lsh_WrkNun2");
	Function_434(&Global_6866, &Global_8030, 18, 242, "lsh/lsh_WrkNun3");
	Function_434(&Global_6866, &Global_8030, 19, 244, "lsh/lsh_WrkNun4");
	return;
}

void Function_450() //Position: 0x23034 / 143412
{
	Function_434(&Global_6815, &Global_7954, 0, 255, "chu/Bartender_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 1, 259, "chu/CHU_Br_Smith");
	Function_434(&Global_6815, &Global_7954, 2, 239, "chu/Maid_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 3, 273, "chu/Merchant_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 4, 264, "chu/Old_Woman_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 5, 247, "chu/Waitress_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 6, 300, "chu/Musician_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 7, 307, "chu/TrainStation_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 8, 267, "chu/Doctor_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 9, 290, "chu/NewsPaper_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 10, 460, "chu/Deputy_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 12, 268, "chu/MerchGrain_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 13, 237, "chu/MerchCorn_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 14, 283, "chu/MerchAxe_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 15, 290, "chu/MerchMeat_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 16, 276, "chu/MerchGen01_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 17, 238, "chu/MerchGen02_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 19, 269, "chu/MerchGen04_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 21, 294, "chu/MerchCrate_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 22, 245, "chu/Whore01_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 23, 246, "chu/Whore01_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 24, 250, "chu/Whore01_Br_CHU");
	Function_434(&Global_6815, &Global_7954, 11, 265, "chu/BlackJack_Br_CHU");
	return;
}

void Function_451() //Position: 0x23367 / 144231
{
	return;
}

void Function_452() //Position: 0x2336D / 144237
{
	Function_434(&Global_6785, &Global_7910, 0, 411, "actionarea/AA_Brain");
	Function_434(&Global_6785, &Global_7910, 1, 410, "actionarea/AA_Brain");
	Function_434(&Global_6785, &Global_7910, 2, 414, "actionarea/AA_Brain");
	Function_434(&Global_6785, &Global_7910, 3, 408, "actionarea/AA_Brain");
	Function_434(&Global_6785, &Global_7910, 4, 409, "actionarea/AA_Brain");
	Function_434(&Global_6785, &Global_7910, 5, 413, "actionarea/AA_Brain");
	Function_434(&Global_6785, &Global_7910, 6, 406, "actionarea/AA_Brain");
	Function_434(&Global_6785, &Global_7910, 7, 407, "actionarea/AA_Brain");
	Function_434(&Global_6785, &Global_7910, 8, 413, "actionarea/AA_Brain");
	Function_434(&Global_6785, &Global_7910, 9, 410, "actionarea/AA_Brain");
	return;
}

void Function_453() //Position: 0x234D3 / 144595
{
	Function_434(&Global_6764, &Global_7879, 0, 516, "actionarea/AA_Brain");
	Function_434(&Global_6764, &Global_7879, 1, 517, "actionarea/AA_Brain");
	Function_434(&Global_6764, &Global_7879, 3, 522, "actionarea/AA_Brain");
	Function_434(&Global_6764, &Global_7879, 5, 530, "actionarea/AA_Brain");
	Function_434(&Global_6764, &Global_7879, 6, 521, "actionarea/AA_Brain");
	Function_434(&Global_6764, &Global_7879, 7, 531, "actionarea/AA_Brain");
	Function_434(&Global_6764, &Global_7879, 9, 518, "actionarea/AA_Brain");
	return;
}

void Function_454() //Position: 0x235CF / 144847
{
	Function_434(&Global_6709, &Global_7797, 0, 261, "esc/ESC_Br_Smith");
	Function_434(&Global_6709, &Global_7797, 1, 274, "esc/Merchant_br_ESC");
	Function_434(&Global_6709, &Global_7797, 2, 319, "esc/Vendor02_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 3, 275, "esc/Vendor03_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 4, 277, "esc/Vendor04_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 5, 299, "esc/StableBoy_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 6, 256, "esc/Bartender_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 7, 250, "esc/Whore01_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 8, 248, "esc/Whore02_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 9, 283, "esc/Gunsmith_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 10, 266, "esc/Doctor_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 11, 313, "esc/Old_Woman_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 12, 382, "esc/Soldier01_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 13, 380, "esc/Soldier02_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 14, 383, "esc/Soldier01_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 15, 384, "esc/Soldier02_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 16, 392, "esc/Soldier01_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 17, 379, "esc/Officer01_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 18, 380, "esc/Officer01_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 19, 381, "esc/Officer01_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 20, 394, "esc/Officer03_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 21, 240, "esc/Maid01_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 22, 241, "esc/Maid02_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 23, 304, "esc/Musician_Br_ESC");
	Function_434(&Global_6709, &Global_7797, 24, 239, "esc/Cook_Br_ESC");
	return;
}

void Function_455() //Position: 0x23945 / 145733
{
	return;
}

void Function_456() //Position: 0x2394B / 145739
{
	Function_434(&Global_6537, &Global_7543, 0, 194, "ben/ben_CabeOwnr");
	Function_434(&Global_6537, &Global_7543, 1, 196, "ben/ben_TrainMstr");
	Function_434(&Global_6537, &Global_7543, 2, 85, "ben/ben_Traveler_Brain");
	Function_434(&Global_6537, &Global_7543, 3, 204, "ben/ben_Traveler_Brain1");
	Function_434(&Global_6537, &Global_7543, 4, 311, "ben/ben_Traveler_Brain2");
	Function_434(&Global_6537, &Global_7543, 5, 166, "ben/ben_Traveler_Brain3");
	return;
}

void Function_457() //Position: 0x23A28 / 145960
{
	Function_434(&Global_6667, &Global_7735, 0, 496, "actionarea/AA_Brain");
	Function_434(&Global_6667, &Global_7735, 1, 499, "actionarea/AA_Brain");
	Function_434(&Global_6667, &Global_7735, 2, 497, "actionarea/AA_Brain");
	Function_434(&Global_6667, &Global_7735, 3, 498, "actionarea/AA_Brain");
	Function_434(&Global_6667, &Global_7735, 4, 500, "actionarea/AA_Brain");
	Function_434(&Global_6667, &Global_7735, 5, 496, "actionarea/AA_Brain");
	Function_434(&Global_6667, &Global_7735, 6, 499, "actionarea/AA_Brain");
	Function_434(&Global_6667, &Global_7735, 7, 499, "actionarea/AA_Brain");
	Function_434(&Global_6667, &Global_7735, 8, 500, "actionarea/AA_Brain");
	Function_434(&Global_6667, &Global_7735, 9, 497, "actionarea/AA_Brain");
	Function_434(&Global_6667, &Global_7735, 13, 496, "actionarea/AA_Brain");
	Function_434(&Global_6667, &Global_7735, 14, 501, "actionarea/AA_Brain");
	Function_434(&Global_6667, &Global_7735, 15, 497, "actionarea/AA_Brain");
	Function_434(&Global_6667, &Global_7735, 10, 496, "actionarea/AA_Brain");
	Function_434(&Global_6667, &Global_7735, 11, 500, "actionarea/AA_Brain");
	Function_434(&Global_6667, &Global_7735, 12, 498, "actionarea/AA_Brain");
	return;
}

void Function_458() //Position: 0x23C66 / 146534
{
	Function_434(&Global_6654, &Global_7716, 0, 178, "pln/pln_lead");
	Function_434(&Global_6654, &Global_7716, 1, 10, "pln/pln_worker1");
	Function_434(&Global_6654, &Global_7716, 2, 36, "pln/pln_worker2");
	Function_434(&Global_6654, &Global_7716, 3, 168, "pln/pln_worker3");
	Function_434(&Global_6654, &Global_7716, 4, 169, "pln/pln_worker4");
	Function_434(&Global_6654, &Global_7716, 5, 286, "pln/pln_worker5");
	return;
}

void Function_459() //Position: 0x23D1E / 146718
{
	return;
}

void Function_460() //Position: 0x23D24 / 146724
{
	Function_434(&Global_6643, &Global_7700, 0, 477, "actionarea/aa_brain");
	Function_434(&Global_6643, &Global_7700, 1, 478, "actionarea/aa_brain");
	Function_434(&Global_6643, &Global_7700, 2, 482, "actionarea/aa_brain");
	Function_434(&Global_6643, &Global_7700, 3, 481, "actionarea/aa_brain");
	Function_434(&Global_6643, &Global_7700, 4, 483, "actionarea/aa_brain");
	return;
}

void Function_461() //Position: 0x23DD9 / 146905
{
	Function_434(&Global_6614, &Global_7657, 0, 147, "thi/gunsmith_br_THI");
	Function_434(&Global_6614, &Global_7657, 1, 83, "thi/bartender_br_THI");
	Function_434(&Global_6614, &Global_7657, 2, 26, "thi/THI_Br_Smith");
	Function_434(&Global_6614, &Global_7657, 3, 139, "tb/nightwatch_brain01");
	Function_434(&Global_6614, &Global_7657, 4, 97, "thi/Harbormaster_br_THI");
	Function_434(&Global_6614, &Global_7657, 5, 129, "thi/genstore_br_THI");
	Function_434(&Global_6614, &Global_7657, 6, 106, "thi/doctor_br_THI");
	Function_434(&Global_6614, &Global_7657, 7, 138, "thi/Butcher_Br_THI");
	Function_434(&Global_6614, &Global_7657, 8, 140, "thi/TicketShop_Br_THI");
	Function_434(&Global_6614, &Global_7657, 9, 137, "thi/dealer_br_THI");
	if (IS_PS3())
	{
		Function_434(&Global_6614, &Global_7657, 10, 93, "thi/TailorShopBr_THIPS3");
	}
	else
	{
		Function_434(&Global_6614, &Global_7657, 10, 93, "thi/TailorShopBr_THIXBX");
	}
	Function_434(&Global_6614, &Global_7657, 11, 163, "thi/NewsPaper_Br_THI");
	Function_434(&Global_6614, &Global_7657, 13, 60, "thi/Madam_Br_THI");
	Function_434(&Global_6614, &Global_7657, 12, 94, "thi/BlackJack_Br_THI");
	return;
}

void Function_462() //Position: 0x23FEE / 147438
{
	Function_434(&Global_6563, &Global_7581, 0, 153, "hen/RanchWkr_Br_HEN");
	Function_434(&Global_6563, &Global_7581, 1, 154, "hen/RanchForeman_Brain");
	Function_434(&Global_6563, &Global_7581, 2, 155, "hen/RanchWkr_Br_HEN");
	Function_434(&Global_6563, &Global_7581, 3, 156, "hen/RanchWkr_Br_HEN");
	Function_434(&Global_6563, &Global_7581, 4, 288, "hen/RanchWkr_Br_HEN");
	Function_434(&Global_6563, &Global_7581, 5, 33, "hen/RanchWkr_Br_HEN");
	Function_434(&Global_6563, &Global_7581, 6, 34, "hen/RanchWkr_Br_HEN");
	Function_434(&Global_6563, &Global_7581, 7, 161, "hen/FieldWkr_Br_HEN");
	Function_434(&Global_6563, &Global_7581, 8, 162, "hen/RanchWkr_Br_HEN");
	Function_434(&Global_6563, &Global_7581, 9, 107, "hen/Doctor_Br_HEN");
	Function_434(&Global_6563, &Global_7581, 10, 164, "hen/RanchWkr_Br_HEN");
	Function_434(&Global_6563, &Global_7581, 11, 157, "hen/Newspaper_Br_HEN");
	Function_434(&Global_6563, &Global_7581, 12, 175, "hen/PL_JG_Br_HEN");
	Function_434(&Global_6563, &Global_7581, 13, 160, "hen/Lazy_Br_HEN");
	Function_434(&Global_6563, &Global_7581, 14, 85, "hen/HEN_br_Smith");
	Function_434(&Global_6563, &Global_7581, 15, 289, "hen/Nightwatch_Br_HEN");
	Function_434(&Global_6563, &Global_7581, 16, 159, "hen/Nightwatch01_Br_HEN");
	Function_434(&Global_6563, &Global_7581, 17, 35, "hen/NW_JG_Br_HEN");
	Function_434(&Global_6563, &Global_7581, 18, 195, "hen/TE_JG_Br_HEN");
	Function_434(&Global_6563, &Global_7581, 22, 127, "hen/StoreOwner_Brain");
	Function_434(&Global_6563, &Global_7581, 23, 53, "hen/Maid_Br_HEN");
	Function_434(&Global_6563, &Global_7581, 24, 54, "hen/Maid_Br_HEN");
	Function_434(&Global_6563, &Global_7581, 21, 550, "hen/RanchForeman_Brain");
	return;
}

void Function_463() //Position: 0x242FF / 148223
{
	Function_434(&Global_6550, &Global_7562, 0, 174, "war/warbrain1");
	Function_434(&Global_6550, &Global_7562, 1, 215, "war/warbrain1");
	Function_434(&Global_6550, &Global_7562, 2, 48, "hgn/bac_husband");
	Function_434(&Global_6550, &Global_7562, 3, 56, "hgn/bac_wife");
	return;
}

void Function_464() //Position: 0x24376 / 148342
{
	Function_434(&Global_6490, &Global_7474, 0, 486, "actionarea/AA_Brain");
	Function_434(&Global_6490, &Global_7474, 1, 487, "actionarea/AA_Brain");
	Function_434(&Global_6490, &Global_7474, 2, 489, "actionarea/AA_Brain");
	Function_434(&Global_6490, &Global_7474, 3, 490, "actionarea/AA_Brain");
	Function_434(&Global_6490, &Global_7474, 4, 493, "actionarea/AA_Brain");
	return;
}

void Function_465() //Position: 0x2442B / 148523
{
	Function_434(&Global_6433, &Global_7389, 0, 508, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 1, 506, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 2, 507, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 3, 505, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 4, 507, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 5, 508, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 6, 505, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 7, 510, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 8, 505, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 9, 506, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 10, 508, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 11, 510, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 12, 505, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 13, 506, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 14, 508, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 15, 509, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 16, 507, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 17, 509, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 18, 506, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 19, 505, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 20, 506, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 21, 510, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 22, 511, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 23, 506, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 24, 507, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 25, 505, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 26, 508, "actionarea/AA_Brain");
	Function_434(&Global_6433, &Global_7389, 27, 509, "actionarea/AA_Brain");
	return;
}

void Function_466() //Position: 0x24819 / 149529
{
	Function_434(&Global_6501, &Global_7490, 0, 400, "actionarea/AA_Brain");
	Function_434(&Global_6501, &Global_7490, 1, 398, "actionarea/AA_Brain");
	Function_434(&Global_6501, &Global_7490, 2, 399, "actionarea/AA_Brain");
	Function_434(&Global_6501, &Global_7490, 3, 402, "actionarea/AA_Brain");
	Function_434(&Global_6501, &Global_7490, 4, 401, "actionarea/AA_Brain");
	Function_434(&Global_6501, &Global_7490, 5, 397, "actionarea/AA_Brain");
	Function_434(&Global_6501, &Global_7490, 6, 405, "actionarea/AA_Brain");
	Function_434(&Global_6501, &Global_7490, 7, 404, "actionarea/AA_Brain");
	Function_434(&Global_6501, &Global_7490, 8, 404, "actionarea/AA_Brain");
	Function_434(&Global_6501, &Global_7490, 9, 402, "actionarea/AA_Brain");
	Function_434(&Global_6501, &Global_7490, 10, 419, "actionarea/AA_Brain");
	Function_434(&Global_6501, &Global_7490, 11, 398, "actionarea/AA_Brain");
	Function_434(&Global_6501, &Global_7490, 12, 399, "actionarea/AA_Brain");
	Function_434(&Global_6501, &Global_7490, 13, 403, "actionarea/AA_Brain");
	Function_434(&Global_6501, &Global_7490, 14, 397, "actionarea/AA_Brain");
	return;
}

void Function_467() //Position: 0x24A33 / 150067
{
	Function_434(&Global_6402, &Global_7343, 0, 229, "rat/Judge.xml");
	Function_434(&Global_6402, &Global_7343, 1, 179, "rat/kid.xml");
	Function_434(&Global_6402, &Global_7343, 2, 155, "rat/kid1.xml");
	Function_434(&Global_6402, &Global_7343, 3, 152, "rat/kid2.xml");
	Function_434(&Global_6402, &Global_7343, 4, 150, "rat/kid3.xml");
	Function_434(&Global_6402, &Global_7343, 5, 142, "rat/kid4.xml");
	Function_434(&Global_6402, &Global_7343, 6, 155, "rat/kid5.xml");
	Function_434(&Global_6402, &Global_7343, 7, 142, "rat/kid6.xml");
	Function_434(&Global_6402, &Global_7343, 8, 133, "rat/kid7.xml");
	Function_434(&Global_6402, &Global_7343, 9, 178, "rat/kid8.xml");
	Function_434(&Global_6402, &Global_7343, 10, 159, "rat/kid9.xml");
	Function_434(&Global_6402, &Global_7343, 11, 158, "rat/kid10.xml");
	Function_434(&Global_6402, &Global_7343, 12, 154, "rat/kid11.xml");
	Function_434(&Global_6402, &Global_7343, 13, 143, "rat/kid12.xml");
	Function_434(&Global_6402, &Global_7343, 14, 179, "rat/bjdealer.xml");
	return;
}

void Function_468() //Position: 0x24BD5 / 150485
{
	return;
}

void Function_469() //Position: 0x24BDB / 150491
{
	Function_434(&Global_6291, &Global_7179, 2, 112, "coo/Pat_Brain");
	Function_434(&Global_6291, &Global_7179, 0, 231, "coo/Dick_Brain");
	Function_434(&Global_6291, &Global_7179, 1, 111, "coo/DickJR_Brain");
	return;
}

void Function_470() //Position: 0x24C39 / 150585
{
	Function_434(&Global_6364, &Global_7287, 0, 234, "rwf/Lead_Br_RWF");
	Function_434(&Global_6364, &Global_7287, 1, 173, "rwf/Farmer1");
	Function_434(&Global_6364, &Global_7287, 2, 37, "rwf/JobGiver_Br_RWF");
	Function_434(&Global_6364, &Global_7287, 3, 38, "rwf/Farmer3");
	Function_434(&Global_6364, &Global_7287, 4, 175, "rwf/Farmer4");
	Function_434(&Global_6364, &Global_7287, 5, 174, "rwf/Farmer5");
	Function_434(&Global_6364, &Global_7287, 6, 39, "rwf/Farmer6");
	Function_434(&Global_6364, &Global_7287, 7, 170, "rwf/Farmer7");
	Function_434(&Global_6364, &Global_7287, 8, 171, "rwf/Farmer8");
	Function_434(&Global_6364, &Global_7287, 9, 172, "rwf/Farmer2");
	Function_434(&Global_6364, &Global_7287, 10, 55, "nrwf/Maid1");
	Function_434(&Global_6364, &Global_7287, 11, 56, "nrwf/Maid2");
	Function_434(&Global_6364, &Global_7287, 12, 51, "rwf/HouseKeep");
	return;
}

void Function_471() //Position: 0x24D9B / 150939
{
	Function_434(&Global_6351, &Global_7268, 0, 486, "tb/Lazy_Bandit_Brain");
	Function_434(&Global_6351, &Global_7268, 1, 487, "tb/Lazy_Bandit_Brain");
	Function_434(&Global_6351, &Global_7268, 2, 489, "tb/Lazy_Bandit_Brain");
	Function_434(&Global_6351, &Global_7268, 3, 493, "tb/Lazy_Bandit_Brain");
	Function_434(&Global_6351, &Global_7268, 4, 491, "tb/Lazy_Bandit_Brain");
	Function_434(&Global_6351, &Global_7268, 5, 490, "tb/Lazy_Bandit_Brain");
	return;
}

void Function_472() //Position: 0x24E79 / 151161
{
	Function_434(&Global_6298, &Global_7189, 0, 103, "arm/doctor_brain");
	Function_434(&Global_6298, &Global_7189, 1, 145, "arm/gunsmith_brain");
	Function_434(&Global_6298, &Global_7189, 2, 81, "arm/bartender_brain_ARM");
	Function_434(&Global_6298, &Global_7189, 3, 84, "arm/ARM_Br_Smith");
	Function_434(&Global_6298, &Global_7189, 4, 80, "arm/banker_brain");
	Function_434(&Global_6298, &Global_7189, 5, 190, "arm/preacher_brain");
	Function_434(&Global_6298, &Global_7189, 6, 428, "arm/deputy_brain");
	Function_434(&Global_6298, &Global_7189, 7, 429, "arm/deputy_brain01");
	Function_434(&Global_6298, &Global_7189, 8, 116, "arm/saloonowner_brain");
	Function_434(&Global_6298, &Global_7189, 9, 492, "arm/gangleader_brain");
	Function_434(&Global_6298, &Global_7189, 10, 488, "arm/gangmember1_brain");
	Function_434(&Global_6298, &Global_7189, 11, 209, "arm/undertaker_brain");
	Function_434(&Global_6298, &Global_7189, 12, 191, "arm/trainguy_brain");
	Function_434(&Global_6298, &Global_7189, 13, 118, "arm/genstore_brain");
	Function_434(&Global_6298, &Global_7189, 14, 114, "arm/freightguy_brain");
	Function_434(&Global_6298, &Global_7189, 15, 104, "arm/barberdentist_brain");
	Function_434(&Global_6298, &Global_7189, 16, 70, "arm/Whore_Brain_ARM");
	Function_434(&Global_6298, &Global_7189, 17, 68, "arm/Whore_Brain2_ARM");
	Function_434(&Global_6298, &Global_7189, 18, 180, "arm/pianoplayer_brain");
	Function_434(&Global_6298, &Global_7189, 19, 183, "arm/fiddleplayer_brain");
	Function_434(&Global_6298, &Global_7189, 20, 199, "arm/liveryworker_brain");
	Function_434(&Global_6298, &Global_7189, 21, 144, "arm/docholiday_brain");
	Function_434(&Global_6298, &Global_7189, 22, 165, "arm/NewsPaper_Brain");
	Function_434(&Global_6298, &Global_7189, 23, 164, "arm/TrainWorker_Brain");
	Function_434(&Global_6298, &Global_7189, 24, 47, "arm/CarryCorn_Brain");
	Function_434(&Global_6298, &Global_7189, 25, 231, "arm/ARM_old_farmer");
	return;
}

void Function_473() //Position: 0x25202 / 152066
{
	Function_434(&Global_6391, &Global_7327, 0, 232, "cho/cri_husband");
	Function_434(&Global_6391, &Global_7327, 1, 213, "cho/cri_wife");
	Function_434(&Global_6391, &Global_7327, 2, 172, "war/warbrain1");
	return;
}

void Function_474() //Position: 0x2525D / 152157
{
	int iVar0;
	
	Global_59349 = CREATE_LAYOUT("Shop");
	Global_59349.f_4 = CREATE_EVENT_TRAP("shopItemPurchase", 96, Global_59349);
	EVENT_TRAP_STORE_EVENTS(StackVal, 1);
	Global_59349.f_8 = CREATE_EVENT_TRAP("shopSellPurchase", 97, Global_59349);
	EVENT_TRAP_STORE_EVENTS(StackVal, 1);
	Global_59349.f_12 = CREATE_EVENT_TRAP("shopTabChanged", 98, Global_59349);
	EVENT_TRAP_STORE_EVENTS(Global_59349.f_12, 1);
	iVar0 = 0;
	while (iVar0 <= Global_59354)
	{
		Global_59354[iVar08] = 0.0f;
		Global_59354[iVar08].f_4 = 0;
		Global_59354[iVar08].f_8 = 0;
		Global_59354[iVar08].f_12 = "";
		Global_59354[iVar08].f_16 = 4294967295;
		Global_59354[iVar08].f_24 = 0;
		Global_59354[iVar08].f_28 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= Global_60316)
	{
		Global_60316[iVar08] = 0.0f;
		Global_60316[iVar08].f_4 = 0;
		Global_60316[iVar08].f_8 = 0;
		Global_60316[iVar08].f_12 = "";
		Global_60316[iVar08].f_16 = 4294967295;
		Global_60316[iVar08].f_24 = 0;
		Global_60316[iVar08].f_28 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= Global_59675)
	{
		Global_59675[iVar08] = 0.0f;
		Global_59675[iVar08].f_4 = 0;
		Global_59675[iVar08].f_8 = 0;
		Global_59675[iVar08].f_12 = "";
		Global_59675[iVar08].f_16 = 4294967295;
		Global_59675[iVar08].f_24 = 0;
		Global_59675[iVar08].f_28 = 0;
		iVar0++;
	}
	return;
}

void Function_475() //Position: 0x253F4 / 152564
{
	DISABLE_GRINGO_STREAMING_CHECKS();
	ANIMAL_SPECIES_GRINGO_LOAD_ALL();
	ENABLE_GRINGO_STREAMING_CHECKS();
	return;
}

bool Function_476(bool bParam0, int iParam1) //Position: 0x25403 / 152579
{
	return (bParam0 && iParam1) == 0;
}

bool Function_477(int iParam0) //Position: 0x25410 / 152592
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_481();
	iVar1 = 0;
	if (!Function_7(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_480(iParam0[iVar03], 8);
		}
		else if (Function_479())
		{
			iVar1 = 1;
			Function_480(iParam0[iVar03], 8);
		}
		Function_480(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_7(iParam0[iVar03], 4))
		{
			if (!Function_7(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_7(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_7(iParam0[03], 8) || iVar1));
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
				Function_480(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_7(iParam0[iVar03], 4))
		{
			if (!Function_7(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_480(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_480(iParam0[iVar03], 2);
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
							Function_480(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_480(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_480(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_480(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_480(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_480(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_480(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_480(iParam0[iVar03], 2);
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
	Function_478();
	return 1;
}

void Function_478() //Position: 0x2578B / 153483
{
	if (!Function_363(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_479() //Position: 0x257CB / 153547
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

void Function_480(var uParam0, int iParam1) //Position: 0x257F6 / 153590
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_481() //Position: 0x25807 / 153607
{
	if (!Function_363(128))
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

var Function_482(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x25849 / 153673
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_483(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_480(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_483(var uParam0, int iParam1, int iParam2) //Position: 0x25881 / 153729
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_7(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_480(uParam0[iVar03], 4);
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

void Function_484() //Position: 0x25945 / 153925
{
	return;
}

void Function_485() //Position: 0x2594B / 153931
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
	UI_SET_HAS_CHEATED(0);
	return;
}

void Function_486() //Position: 0x25F92 / 155538
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	struct<2> Var5;
	
	Function_495();
	Function_494();
	Function_493();
	Function_492(0, 0.0f, "sn_mny", 21, 5, 1, 3, 3212836864, 0);
	Function_492(597, 0.0f, "sn_cmny", 15, 2, 1, 3, 3212836864, 0);
	Function_492(1, 0.0f, "sn_hnrr", 9, 2, 1, 0, 1000.0f, -1000.0f);
	Function_492(2, 0.0f, "sn_hnr", 20, 2, 1, 0, 3212836864, 0);
	Function_492(3, 0.0f, "sn_ntrr", 10, 2, 1, 1, 1000.0f, 0.0f);
	Function_492(4, 0.0f, "sn_ntr", 20, 2, 1, 1, 3212836864, 0);
	Function_492(5, 0.0f, "sn_gmpt", 7, 2, 1, 2, 3212836864, 0);
	Function_492(6, 0.0f, "sn_gmpd", 15, 2, 1, 2, 329.0f, 0);
	Function_492(7, 0.0f, "sn_gmtm", 23, 2, 3, 2, 3212836864, 0);
	Function_492(8, 0.0f, "sn_days", 25, 2, 1, 2, 3212836864, 0);
	Function_492(9, 0.0f, "sn_miss", 1, 2, 1, 2, 3212836864, 0);
	Function_492(10, 0.0f, "sn_misf", 1, 2, 1, 2, 3212836864, 0);
	Function_492(11, 0.0f, "sn_misr", 1, 2, 1, 2, 3212836864, 0);
	Function_492(12, 0.0f, "sn_frms", 4, 2, 1, 2, 3212836864, 0);
	Function_492(13, 0.0f, "sn_mxms", 4, 2, 1, 2, 3212836864, 0);
	Function_492(14, 0.0f, "sn_nrms", 4, 2, 1, 2, 3212836864, 0);
	Function_492(15, 0.0f, "sn_hmms", 4, 2, 1, 2, 3212836864, 0);
	Function_492(16, 0.0f, "sn_ambs", 4, 2, 1, 2, 3212836864, 0);
	Function_492(17, 0.0f, "sn_skps", 4, 2, 1, 2, 3212836864, 0);
	Function_492(473, 0.0f, "sn_regd", 14, 2, 1, 2, 0.0f, 0);
	Function_492(474, 0.0f, "sn_frgd", 14, 2, 1, 2, 0.0f, 0);
	Function_492(475, 0.0f, "sn_mrgd", 14, 2, 1, 2, 0.0f, 0);
	Function_492(476, 0.0f, "sn_nrgd", 14, 2, 1, 2, 0.0f, 0);
	Function_492(18, 0.0f, "sn_lmst", 15, 9, 1, 2, 3212836864, 0);
	Function_492(19, 0.0f, "sn_hide", 15, 9, 1, 2, 3212836864, 0);
	Function_492(20, 0.0f, "sn_hide", 15, 9, 1, 2, 3212836864, 0);
	Function_492(21, 0.0f, "sn_hide", 15, 9, 1, 2, 3212836864, 0);
	Function_492(22, 0.0f, "sn_hide", 15, 9, 1, 2, 3212836864, 0);
	Function_492(23, 0.0f, "sn_hide", 15, 9, 1, 2, 3212836864, 0);
	Function_492(24, 0.0f, "sn_mmrt", 15, 9, 1, 2, 3212836864, 0);
	Function_492(25, 0.0f, "sn_lmcn", 15, 9, 1, 2, 3212836864, 0);
	Function_492(472, TO_FLOAT(4294967295), "sn_hide", 15, 9, 1, 2, 3212836864, 0);
	Function_492(458, 0.0f, "sn_aacm", 0, 2, 3, 2, 3212836864, 0);
	Function_492(459, 0.0f, "sn_aatr", 13, 2, 3, 2, 3212836864, 0);
	Function_492(460, 0.0f, "sn_aasf", 13, 2, 3, 2, 3212836864, 0);
	Function_492(461, 0.0f, "sn_aatw", 13, 2, 3, 2, 3212836864, 0);
	Function_492(462, 0.0f, "sn_aapb", 13, 2, 3, 2, 3212836864, 0);
	Function_492(463, 0.0f, "sn_aagb", 13, 2, 3, 2, 3212836864, 0);
	Function_492(464, 0.0f, "sn_aafm", 13, 2, 3, 2, 3212836864, 0);
	Function_492(465, 0.0f, "sn_aata", 13, 2, 3, 2, 3212836864, 0);
	Function_492(466, 0.0f, "sn_aano", 13, 2, 3, 2, 3212836864, 0);
	Function_492(467, 0.0f, "sn_chst", 0, 9, 1, 2, 3212836864, 0);
	Function_492(468, 0.0f, "sn_hous", 3, 2, 1, 2, 3212836864, 0);
	Function_492(469, 0.0f, "sn_rwep", 3, 2, 3, 2, 3212836864, 0);
	Function_492(470, 0.0f, "sn_chea", 15, 9, 1, 2, 3212836864, 0);
	Function_492(471, 0.0f, "sn_bino", 23, 9, 1, 2, 3212836864, 0);
	Function_492(477, 0.0f, "sn_snoi", 3, 9, 1, 2, 3212836864, 0);
	Function_492(478, 0.0f, "sn_moon", 3, 9, 1, 2, 3212836864, 0);
	Function_492(479, 0.0f, "sn_chta", 3, 9, 1, 2, 3212836864, 0);
	Function_492(480, 0.0f, "sn_medi", 3, 9, 1, 2, 3212836864, 0);
	Function_492(481, 0.0f, "sn_bait", 3, 9, 1, 2, 3212836864, 0);
	Function_492(482, 0.0f, "sn_hopi", 3, 9, 1, 2, 3212836864, 0);
	Function_492(483, 0.0f, "sn_appl", 3, 9, 1, 2, 3212836864, 0);
	Function_492(484, 0.0f, "sn_pale", 3, 9, 1, 2, 3212836864, 0);
	Function_492(485, 0.0f, "sn_vitl", 3, 9, 1, 2, 3212836864, 0);
	Function_492(486, 0.0f, "sn_tonc", 3, 9, 1, 2, 3212836864, 0);
	Function_492(400, 0.0f, "sn_jobs", 0, 2, 1, 2, 3212836864, 0);
	Function_492(401, 0.0f, "sn_favj", 20, 2, 1, 2, 3212836864, 0);
	Function_492(402, 0.0f, "sn_nwj", 0, 2, 1, 2, 3212836864, 0);
	Function_492(403, 0.0f, "sn_hbj", 0, 2, 1, 2, 3212836864, 0);
	Function_492(404, 0.0f, "sn_fvjl", 20, 2, 1, 2, 3212836864, 0);
	Function_492(405, 0.0f, "sn_horb", 0, 2, 1, 2, 3212836864, 0);
	Function_492(406, 0.0f, "sn_rcmm", 3, 2, 1, 2, 3212836864, 0);
	Function_492(407, 0.0f, "sn_rcmc", 3, 2, 1, 2, 3212836864, 0);
	Function_492(408, 0.0f, "sn_btin", 3, 2, 1, 2, 3212836864, 0);
	Function_492(409, 0.0f, "sn_btcm", 3, 2, 1, 2, 3212836864, 0);
	Function_492(410, 0.0f, "sn_mini", 3, 8, 1, 2, 3212836864, 0);
	Function_492(412, 0.0f, "sn_mlap", 0, 8, 1, 2, 3212836864, 0);
	Function_492(413, 0.0f, "sn_bpwp", 21, 8, 1, 2, 3212836864, 0);
	Function_492(411, 0.0f, "sn_mwap", 21, 5, 1, 2, 3212836864, 0);
	Function_492(428, 0.0f, "sn_pwpc", 7, 8, 1, 2, 0.0f, 0.0f);
	Function_492(414, 0.0f, "sn_phc", 0, 8, 1, 2, 3212836864, 0);
	Function_492(415, 0.0f, "sn_ppai", 0, 8, 1, 2, 3212836864, 0);
	Function_492(416, 0.0f, "sn_ptp", 0, 8, 1, 2, 3212836864, 0);
	Function_492(417, 0.0f, "sn_ptok", 0, 8, 1, 2, 3212836864, 0);
	Function_492(418, 0.0f, "sn_pstr", 0, 8, 1, 2, 3212836864, 0);
	Function_492(419, 0.0f, "sn_pfh", 0, 8, 1, 2, 3212836864, 0);
	Function_492(420, 0.0f, "sn_pflu", 0, 8, 1, 2, 3212836864, 0);
	Function_492(421, 0.0f, "sn_pfok", 0, 8, 1, 2, 3212836864, 0);
	Function_492(422, 0.0f, "sn_pstf", 0, 8, 1, 2, 3212836864, 0);
	Function_492(423, 0.0f, "sn_prf", 0, 8, 1, 2, 3212836864, 0);
	Function_492(424, 0.0f, "sn_phwb", 0, 8, 1, 2, 3212836864, 0);
	Function_492(426, 0.0f, "sn_tcc", 0, 8, 1, 2, 3212836864, 0);
	Function_492(427, 0.0f, "sn_tcnc", 0, 8, 1, 2, 3212836864, 0);
	Function_492(425, 0.0f, "sn_tspp", 23, 8, 1, 2, 3212836864, 0);
	Function_492(429, 0.0f, "sn_twld", 21, 5, 1, 2, 3212836864, 0);
	Function_492(430, 0.0f, "sn_mlld", 0, 8, 1, 2, 3212836864, 0);
	Function_492(431, 0.0f, "sn_ldwz", 0, 8, 1, 2, 3212836864, 0);
	Function_492(432, 0.0f, "sn_tsld", 23, 8, 1, 2, 3212836864, 0);
	Function_492(433, 0.0f, "sn_mwah", 21, 5, 1, 2, 3212836864, 0);
	Function_492(434, 0.0f, "sn_ring", 0, 8, 1, 2, 3212836864, 0);
	Function_492(435, 0.0f, "sn_orin", 0, 8, 1, 2, 3212836864, 0);
	Function_492(436, 0.0f, "sn_tsph", 23, 8, 1, 2, 3212836864, 0);
	Function_492(437, 0.0f, "sn_mwaf", 21, 5, 1, 2, 3212836864, 0);
	Function_492(438, 0.0f, "sn_ffgl", 0, 8, 1, 2, 3212836864, 0);
	Function_492(439, 0.0f, "sn_ffws", 0, 8, 1, 2, 3212836864, 0);
	Function_492(440, 0.0f, "sn_tsff", 23, 8, 1, 2, 3212836864, 0);
	Function_492(441, 0.0f, "sn_mwaa", 21, 5, 1, 2, 3212836864, 0);
	Function_492(443, 0.0f, "sn_awl", 0, 8, 1, 2, 3212836864, 0);
	Function_492(444, 0.0f, "sn_lawm", 23, 8, 1, 2, 3212836864, 0);
	Function_492(442, 0.0f, "sn_tsaw", 23, 8, 1, 2, 3212836864, 0);
	Function_492(445, 0.0f, "sn_mwab", 21, 5, 1, 2, 3212836864, 0);
	Function_492(447, 0.0f, "sn_hlab", 0, 8, 1, 2, 3212836864, 0);
	Function_492(446, 0.0f, "sn_mwbj", 21, 8, 1, 2, 3212836864, 0);
	Function_492(448, 0.0f, "sn_bjh", 0, 8, 1, 2, 3212836864, 0);
	Function_492(449, 0.0f, "sn_drin", 0, 8, 1, 2, 3212836864, 0);
	Function_492(450, 0.0f, "sn_tmwg", 21, 5, 1, 2, 3212836864, 0);
	Function_492(451, 0.0f, "sn_duew", 0, 6, 1, 2, 3212836864, 0);
	Function_492(452, 0.0f, "sn_duec", 15, 6, 1, 2, 3212836864, 0);
	Function_492(453, 0.0f, "sn_duet", 0, 6, 1, 2, 3212836864, 0);
	Function_492(454, 0.0f, "sn_dued", 0, 6, 1, 2, 3212836864, 0);
	Function_492(455, 0.0f, "sn_dueh", 0, 6, 1, 2, 3212836864, 0);
	Function_492(26, 0.0f, "sn_kani", 1, 6, 3, 2, 3212836864, 0);
	Function_492(27, 0.0f, "sn_khum", 1, 6, 3, 2, 3212836864, 0);
	Function_492(28, 0.0f, "sn_kciv", 1, 6, 1, 2, 3212836864, 0);
	Function_492(29, 0.0f, "sn_klaw", 4, 6, 1, 2, 3212836864, 0);
	Function_492(30, 0.0f, "sn_kmar", 4, 6, 1, 2, 3212836864, 0);
	Function_492(31, 0.0f, "sn_karm", 4, 6, 1, 2, 3212836864, 0);
	Function_492(32, 0.0f, "sn_kmlw", 4, 6, 1, 2, 3212836864, 0);
	Function_492(33, 0.0f, "sn_kmxr", 4, 6, 1, 2, 3212836864, 0);
	Function_492(34, 0.0f, "sn_kcri", 1, 6, 3, 2, 3212836864, 0);
	Function_492(35, 0.0f, "sn_kcat", 4, 6, 3, 2, 3212836864, 0);
	Function_492(36, 0.0f, "sn_kdnd", 4, 6, 3, 2, 3212836864, 0);
	Function_492(37, 0.0f, "sn_ktre", 4, 6, 3, 2, 3212836864, 0);
	Function_492(38, 0.0f, "sn_kban", 4, 6, 3, 2, 3212836864, 0);
	Function_492(39, 0.0f, "sn_kreb", 4, 6, 3, 2, 3212836864, 0);
	Function_492(40, 0.0f, "sn_kdut", 4, 6, 3, 2, 3212836864, 0);
	Function_492(41, 0.0f, "sn_keh", 1, 6, 3, 2, 3212836864, 0);
	iVar0 = 50;
	Function_492(49, 0.0f, "sn_hbul", 7, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0, 0.0f, "sn_hpvo", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 1, 0.0f, "sn_hpsa", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 2, 0.0f, "sn_hphp", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 3, 0.0f, "sn_hpms", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 4, 0.0f, "sn_hrca", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 5, 0.0f, "sn_hrsc", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 6, 0.0f, "sn_hrda", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 7, 0.0f, "sn_hrlm", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 8, 0.0f, "sn_hrcr", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 9, 0.0f, "sn_hrwi", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 10, 0.0f, "sn_hrhe", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 11, 0.0f, "sn_hrev", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 12, 0.0f, "sn_hrsp", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 13, 0.0f, "sn_hrbo", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 14, 0.0f, "sn_hrbu", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 15, 0.0f, "sn_hsso", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 16, 0.0f, "sn_hsdb", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 17, 0.0f, "sn_hspa", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 18, 0.0f, "sn_hssa", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 19, 0.0f, "sn_hsrb", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 20, 0.0f, "sn_hsca", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 31, 0.0f, "sn_hsat", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 21, 0.0f, "sn_hlas", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 22, 0.0f, "sn_hknf", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 23, 0.0f, "sn_hfir", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 24, 0.0f, "sn_hdyn", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 25, 0.0f, "sn_htkf", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 29, 0.0f, "sn_htmk", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 26, 0.0f, "sn_hgat", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 27, 0.0f, "sn_hbro", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_492(iVar0 + 28, 0.0f, "sn_hcan", 11, 6, 3, 7, 0.0f, 0.0f);
	iVar1 = 32;
	while (iVar1 < 38)
	{
		strcpy(&Var3, "sn_dh", 8);
		straddi(&Var3, iVar2, 8);
		Function_492((iVar0 + iVar1), 0.0f, &Var3, 11, 6, 3, 7, 0.0f, 0.0f);
		iVar2++;
		iVar1++;
	}
	iVar0 = 90;
	Function_492(89, 0.0f, "sn_sbul", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 1, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 2, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 3, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 4, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 5, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 6, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 7, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 8, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 9, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 10, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 11, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 12, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 13, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 14, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 15, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 16, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 17, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 18, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 19, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 20, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 31, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 21, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 22, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 23, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 24, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 25, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 29, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 26, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 27, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_492(iVar0 + 28, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	iVar2 = 0;
	strcpy(&Var3, "sn_hide", 8);
	iVar1 = 32;
	while (iVar1 < 38)
	{
		Function_492((iVar0 + iVar1), 0.0f, &Var3, 15, 6, 3, 7, 3212836864, 0);
		iVar2++;
		iVar1++;
	}
	Function_492(129, 0.0f, "sn_roal", 0, 6, 3, 2, 3212836864, 0);
	Function_492(130, 0.0f, "sn_roh", 0, 6, 3, 2, 3212836864, 0);
	Function_492(131, 0.0f, "sn_roc", 0, 6, 3, 2, 3212836864, 0);
	Function_492(132, 0.0f, "sn_row", 0, 6, 3, 2, 3212836864, 0);
	Function_492(133, 0.0f, "sn_ros", 0, 6, 3, 2, 3212836864, 0);
	Function_492(134, 0.0f, "sn_scr", 0, 6, 3, 2, 3212836864, 0);
	Function_492(135, 0.0f, "sn_sfc", 0, 6, 3, 2, 3212836864, 0);
	Function_492(136, 0.0f, "sn_sfh", 0, 6, 3, 2, 3212836864, 0);
	Function_492(137, 0.0f, "sn_sfv", 0, 6, 3, 2, 3212836864, 0);
	Function_492(138, 0.0f, "sn_akft", 0, 6, 1, 2, 3212836864, 0);
	Function_492(139, 0.0f, "sn_pkft", 0, 6, 1, 2, 3212836864, 0);
	iVar0 = 183;
	Function_492(iVar0, 0.0f, "sn_wpvo", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 1, 0.0f, "sn_wpsa", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 2, 0.0f, "sn_wphp", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 3, 0.0f, "sn_wpms", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 4, 0.0f, "sn_wrca", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 5, 0.0f, "sn_wrsc", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 6, 0.0f, "sn_wrda", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 7, 0.0f, "sn_wrlm", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 8, 0.0f, "sn_wrcr", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 9, 0.0f, "sn_wrwi", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 10, 0.0f, "sn_wrhe", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 11, 0.0f, "sn_wrev", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 12, 0.0f, "sn_wrsp", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 13, 0.0f, "sn_wrbo", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 14, 0.0f, "sn_wrbu", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 15, 0.0f, "sn_wsso", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 16, 0.0f, "sn_wsdb", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 17, 0.0f, "sn_wspa", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 18, 0.0f, "sn_wssa", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 19, 0.0f, "sn_wsrb", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 20, 0.0f, "sn_wsca", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 31, 0.0f, "sn_wsat", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 21, 0.0f, "sn_wlas", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 22, 0.0f, "sn_wknf", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 23, 0.0f, "sn_wfir", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 24, 0.0f, "sn_wdyn", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 25, 0.0f, "sn_wtkf", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 29, 0.0f, "sn_wtmk", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 26, 0.0f, "sn_wgat", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 27, 0.0f, "sn_wbro", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 28, 0.0f, "sn_wcan", 3, 6, 3, 2, 3212836864, 0);
	iVar2 = 0;
	iVar1 = 32;
	while (iVar1 < 38)
	{
		strcpy(&Var3, "sn_dl", 8);
		straddi(&Var3, iVar2, 8);
		Function_492((iVar0 + iVar1), 0.0f, &Var3, 3, 6, 3, 2, 3212836864, 0);
		iVar2++;
		iVar1++;
	}
	iVar0 = 140;
	Function_492(iVar0, 0.0f, "sn_spvo", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 1, 0.0f, "sn_spsa", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 2, 0.0f, "sn_sphp", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 3, 0.0f, "sn_spms", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 4, 0.0f, "sn_srca", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 5, 0.0f, "sn_srsc", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 6, 0.0f, "sn_srda", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 7, 0.0f, "sn_srlm", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 8, 0.0f, "sn_srcr", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 9, 0.0f, "sn_srwi", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 10, 0.0f, "sn_srhe", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 11, 0.0f, "sn_srev", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 12, 0.0f, "sn_srsp", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 13, 0.0f, "sn_srbo", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 14, 0.0f, "sn_srbu", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 15, 0.0f, "sn_ssso", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 16, 0.0f, "sn_ssdb", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 17, 0.0f, "sn_sspa", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 18, 0.0f, "sn_sssa", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 19, 0.0f, "sn_ssrb", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 20, 0.0f, "sn_ssca", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 31, 0.0f, "sn_ssat", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 21, 0.0f, "sn_slas", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 22, 0.0f, "sn_sknf", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 23, 0.0f, "sn_sfir", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 24, 0.0f, "sn_sdyn", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 25, 0.0f, "sn_stkf", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 29, 0.0f, "sn_stmk", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 26, 0.0f, "sn_sgat", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 27, 0.0f, "sn_sbro", 3, 6, 3, 2, 3212836864, 0);
	Function_492(iVar0 + 28, 0.0f, "sn_scan", 3, 6, 3, 2, 3212836864, 0);
	iVar2 = 0;
	iVar1 = 32;
	while (iVar1 < 38)
	{
		strcpy(&Var3, "sn_ds", 8);
		straddi(&Var3, iVar2, 8);
		Function_492((iVar0 + iVar1), 0.0f, &Var3, 3, 6, 3, 2, 3212836864, 0);
		iVar2++;
		iVar1++;
	}
	Function_492(179, 0.0f, "sn_fvp", 20, 9, 3, 2, 3212836864, 0);
	Function_492(180, 0.0f, "sn_fvr", 20, 9, 3, 2, 3212836864, 0);
	Function_492(181, 0.0f, "sn_fvs", 20, 9, 3, 2, 3212836864, 0);
	Function_492(182, 0.0f, "sn_fvw", 20, 9, 3, 2, 3212836864, 0);
	Function_492(43, 0.0f, "sn_knck", 1, 6, 3, 2, 3212836864, 0);
	Function_492(42, 0.0f, "sn_hdst", 1, 6, 3, 2, 3212836864, 0);
	Function_492(44, 0.0f, "sn_xect", 1, 6, 1, 2, 3212836864, 0);
	Function_492(45, 0.0f, "sn_htst", 1, 6, 3, 2, 3212836864, 0);
	Function_492(46, 0.0f, "sn_darm", 1, 6, 3, 2, 3212836864, 0);
	Function_492(47, 0.0f, "sn_hdss", 1, 6, 3, 2, 3212836864, 0);
	Function_492(48, 0.0f, "sn_dars", 1, 6, 3, 2, 3212836864, 0);
	Function_492(222, 0.0f, "sn_bttl", 21, 3, 1, 5, 3212836864, 0);
	Function_492(223, 0.0f, "sn_btus", 21, 3, 1, 5, 3212836864, 0);
	Function_492(224, 0.0f, "sn_btmx", 21, 3, 1, 5, 3212836864, 0);
	Function_492(225, 0.0f, "sn_tijl", 25, 3, 1, 5, 3212836864, 0);
	Function_492(226, 0.0f, "sn_cvnd", 1, 3, 1, 5, 3212836864, 0);
	Function_492(227, 0.0f, "sn_cvnv", 1, 3, 1, 5, 3212836864, 0);
	Function_492(228, 0.0f, "sn_cpde", 1, 3, 1, 5, 3212836864, 0);
	Function_492(229, 0.0f, "sn_cpdv", 1, 3, 1, 5, 3212836864, 0);
	Function_492(230, 0.0f, "sn_cars", 1, 3, 3, 5, 3212836864, 0);
	Function_492(231, 0.0f, "sn_cass", 1, 3, 3, 5, 3212836864, 0);
	Function_492(232, 0.0f, "sn_casl", 1, 3, 3, 5, 3212836864, 0);
	Function_492(233, 0.0f, "sn_cash", 1, 3, 3, 5, 3212836864, 0);
	Function_492(234, 0.0f, "sn_casc", 1, 3, 3, 5, 3212836864, 0);
	Function_492(235, 0.0f, "sn_casa", 1, 3, 3, 5, 3212836864, 0);
	Function_492(236, 0.0f, "sn_cmrd", 1, 3, 3, 5, 3212836864, 0);
	Function_492(237, 0.0f, "sn_cmrl", 1, 3, 3, 5, 3212836864, 0);
	Function_492(238, 0.0f, "sn_cmrh", 1, 3, 3, 5, 3212836864, 0);
	Function_492(239, 0.0f, "sn_cmrc", 1, 3, 3, 5, 3212836864, 0);
	Function_492(240, 0.0f, "sn_cmra", 1, 3, 3, 5, 3212836864, 0);
	Function_492(241, 0.0f, "sn_cthh", 1, 3, 3, 5, 3212836864, 0);
	Function_492(242, 0.0f, "sn_cthv", 1, 3, 3, 5, 3212836864, 0);
	Function_492(243, 0.0f, "sn_ckid", 1, 3, 1, 5, 3212836864, 0);
	Function_492(244, 0.0f, "sn_ckdl", 1, 3, 1, 5, 3212836864, 0);
	Function_492(245, 0.0f, "sn_csaf", 1, 3, 1, 5, 3212836864, 0);
	Function_492(251, 0.0f, "sn_fsc", 23, 8, 1, 5, 3212836864, 0);
	Function_492(246, 0.0f, "sn_csrb", 15, 3, 1, 5, 3212836864, 0);
	Function_492(247, 0.0f, "sn_ctrs", 1, 3, 1, 5, 3212836864, 0);
	Function_492(248, 0.0f, "sn_cprb", 1, 3, 1, 5, 3212836864, 0);
	Function_492(249, 0.0f, "sn_ccht", 1, 3, 1, 5, 3212836864, 0);
	Function_492(250, 0.0f, "sn_ctht", 1, 3, 1, 5, 3212836864, 0);
	Function_492(252, 0.0f, "sn_bbo", 21, 3, 3, 5, 3212836864, 0);
	Function_492(253, 0.0f, "sn_bpd", 1, 3, 1, 5, 3212836864, 0);
	Function_492(254, 0.0f, "sn_bbop", 21, 3, 1, 5, 3212836864, 0);
	Function_492(255, 0.0f, "sn_bbrp", 21, 3, 1, 5, 3212836864, 0);
	Function_492(256, 0.0f, "sn_bboa", 21, 3, 1, 5, 3212836864, 0);
	Function_492(257, 0.0f, "sn_psen", 1, 3, 1, 5, 3212836864, 0);
	Function_492(258, 0.0f, "sn_lpls", 23, 3, 1, 5, 3212836864, 0);
	Function_492(259, 0.0f, "sn_lpm", 23, 3, 1, 5, 3212836864, 0);
	Function_492(260, 0.0f, "sn_tmw", 1, 3, 1, 5, 3212836864, 0);
	Function_492(386, 0.0f, "sn_mwmp", 1, 3, 2, 5, 3212836864, 0);
	Function_492(261, 0.0f, "sn_cpm", 1, 3, 1, 5, 3212836864, 0);
	Function_492(262, 0.0f, "sn_kdns", 1, 3, 1, 5, 3212836864, 0);
	Function_492(273, 0.0f, "sn_h_tv", 21, 7, 3, 2, 3212836864, 0);
	Function_492(348, 0.0f, "sn_mlbs", 1, 7, 1, 2, 3212836864, 0);
	Function_491(492, 265, 0.0f, "sn_h_bw", "sd_h_bw", "sn_h_bw", "sl_h_bw", 7, 3);
	Function_491(491, 264, 0.0f, "sn_h_ds", "sd_h_ds", "sn_h_ds", "sl_h_ds", 7, 3);
	Function_491(494, 267, 0.0f, "sn_h_gc", "sd_h_gc", "sn_h_gc", "sl_h_gc", 7, 3);
	Function_491(496, 269, 0.0f, "sn_h_hs", "sd_h_hs", "sn_h_hs", "sl_h_hs", 7, 3);
	Function_491(493, 266, 0.0f, "sn_h_po", "sd_h_pp", "sn_h_po", "sl_h_pp", 7, 3);
	Function_491(490, 263, 0.0f, "sn_h_pp", "sd_h_pp", "sn_h_pp", "sl_h_pp", 7, 3);
	Function_491(498, 271, 0.0f, "sn_h_rs", "sd_h_rs", "sn_h_rs", "sl_h_rs", 7, 3);
	Function_491(497, 270, 0.0f, "sn_h_vs", "sd_h_vs", "sn_h_vs", "sl_h_vs", 7, 3);
	Function_491(495, 268, 0.0f, "sn_h_wo", "sd_h_wo", "sn_h_wo", "sl_h_wo", 7, 3);
	Function_491(499, 272, 0.0f, "sn_h_wf", "sd_h_wf", "sn_h_wf", "sl_h_wf", 7, 3);
	Function_492(274, 0.0f, "sn_skar", 4, 7, 1, 4, 3212836864, 0);
	Function_492(275, 0.0f, "sn_skbw", 4, 7, 1, 4, 3212836864, 0);
	Function_492(276, 0.0f, "sn_skbe", 4, 7, 1, 4, 3212836864, 0);
	Function_492(277, 0.0f, "sn_skbv", 4, 7, 1, 4, 3212836864, 0);
	Function_492(278, 0.0f, "sn_skbi", 4, 7, 1, 4, 3212836864, 0);
	Function_492(279, 0.0f, "sn_skbo", 4, 7, 1, 4, 3212836864, 0);
	Function_492(280, 0.0f, "sn_skbb", 4, 7, 1, 4, 3212836864, 0);
	Function_492(281, 0.0f, "sn_skbk", 4, 7, 1, 4, 3212836864, 0);
	Function_492(282, 0.0f, "sn_skbu", 4, 7, 1, 4, 3212836864, 0);
	Function_492(283, 0.0f, "sn_skch", 4, 7, 1, 4, 3212836864, 0);
	Function_492(284, 0.0f, "sn_skco", 4, 7, 1, 4, 3212836864, 0);
	Function_492(286, 0.0f, "sn_skcy", 4, 7, 1, 4, 3212836864, 0);
	Function_492(285, 0.0f, "sn_skcw", 4, 7, 1, 4, 3212836864, 0);
	Function_492(287, 0.0f, "sn_skcr", 4, 7, 1, 4, 3212836864, 0);
	Function_492(288, 0.0f, "sn_skde", 4, 7, 1, 4, 3212836864, 0);
	Function_492(289, 0.0f, "sn_skdo", 4, 7, 1, 4, 3212836864, 0);
	Function_492(290, 0.0f, "sn_skdu", 4, 7, 1, 4, 3212836864, 0);
	Function_492(291, 0.0f, "sn_skea", 4, 7, 1, 4, 3212836864, 0);
	Function_492(292, 0.0f, "sn_skel", 4, 7, 1, 4, 3212836864, 0);
	Function_492(293, 0.0f, "sn_skfo", 4, 7, 1, 4, 3212836864, 0);
	Function_492(299, 0.0f, "sn_skxr", 15, 7, 1, 4, 3212836864, 0);
	Function_492(301, 0.0f, "sn_skxb", 15, 7, 1, 4, 3212836864, 0);
	Function_492(300, 0.0f, "sn_skxc", 15, 7, 1, 4, 3212836864, 0);
	Function_492(298, 0.0f, "sn_skxw", 15, 7, 1, 4, 3212836864, 0);
	Function_492(294, 0.0f, "sn_skgo", 4, 7, 1, 4, 3212836864, 0);
	Function_492(296, 0.0f, "sn_skha", 4, 7, 1, 4, 3212836864, 0);
	Function_492(312, 0.0f, "sn_skho", 4, 7, 1, 4, 3212836864, 0);
	Function_492(297, 0.0f, "sn_skmu", 4, 7, 1, 4, 3212836864, 0);
	Function_492(302, 0.0f, "sn_skow", 4, 7, 1, 4, 3212836864, 0);
	Function_492(303, 0.0f, "sn_skpi", 4, 7, 1, 4, 3212836864, 0);
	Function_492(304, 0.0f, "sn_skrb", 4, 7, 1, 4, 3212836864, 0);
	Function_492(305, 0.0f, "sn_skra", 4, 7, 1, 4, 3212836864, 0);
	Function_492(295, 0.0f, "sn_skgu", 4, 7, 1, 4, 3212836864, 0);
	Function_492(306, 0.0f, "sn_sksh", 4, 7, 1, 4, 3212836864, 0);
	Function_492(307, 0.0f, "sn_sksk", 4, 7, 1, 4, 3212836864, 0);
	Function_492(308, 0.0f, "sn_sksn", 4, 7, 1, 4, 3212836864, 0);
	Function_492(309, 0.0f, "sn_skso", 4, 7, 1, 4, 3212836864, 0);
	Function_492(310, 0.0f, "sn_skv", 4, 7, 1, 4, 3212836864, 0);
	Function_492(311, 0.0f, "sn_skw", 4, 7, 1, 4, 3212836864, 0);
	Function_492(313, 0.0f, "sn_kiar", 4, 9, 3, 2, 3212836864, 0);
	Function_492(314, 0.0f, "sn_kibw", 4, 9, 3, 2, 3212836864, 0);
	Function_492(315, 0.0f, "sn_kibe", 4, 9, 3, 2, 3212836864, 0);
	Function_492(316, 0.0f, "sn_kibv", 4, 9, 3, 2, 3212836864, 0);
	Function_492(317, 0.0f, "sn_kibi", 4, 9, 3, 2, 3212836864, 0);
	Function_492(318, 0.0f, "sn_kibo", 4, 9, 3, 2, 3212836864, 0);
	Function_492(319, 0.0f, "sn_kibb", 4, 9, 3, 2, 3212836864, 0);
	Function_492(320, 0.0f, "sn_kibu", 4, 9, 3, 2, 3212836864, 0);
	Function_492(321, 0.0f, "sn_kich", 4, 9, 3, 2, 3212836864, 0);
	Function_492(322, 0.0f, "sn_kico", 4, 9, 3, 2, 3212836864, 0);
	Function_492(323, 0.0f, "sn_kicw", 4, 9, 3, 2, 3212836864, 0);
	Function_492(324, 0.0f, "sn_kicy", 4, 9, 3, 2, 3212836864, 0);
	Function_492(325, 0.0f, "sn_kicr", 4, 9, 3, 2, 3212836864, 0);
	Function_492(326, 0.0f, "sn_kide", 4, 9, 3, 2, 3212836864, 0);
	Function_492(327, 0.0f, "sn_kido", 4, 9, 3, 2, 3212836864, 0);
	Function_492(328, 0.0f, "sn_kidu", 4, 9, 3, 2, 3212836864, 0);
	Function_492(329, 0.0f, "sn_kiea", 4, 9, 3, 2, 3212836864, 0);
	Function_492(330, 0.0f, "sn_kiel", 4, 9, 3, 2, 3212836864, 0);
	Function_492(331, 0.0f, "sn_kifo", 4, 9, 3, 2, 3212836864, 0);
	Function_492(332, 0.0f, "sn_kigo", 4, 9, 3, 2, 3212836864, 0);
	Function_492(333, 0.0f, "sn_kiha", 4, 9, 3, 2, 3212836864, 0);
	Function_492(334, 0.0f, "sn_kiho", 4, 9, 3, 2, 3212836864, 0);
	Function_492(335, 0.0f, "sn_kiwh", 4, 9, 3, 2, 3212836864, 0);
	Function_492(336, 0.0f, "sn_kimu", 4, 9, 3, 2, 3212836864, 0);
	Function_492(337, 0.0f, "sn_kiow", 4, 9, 3, 2, 3212836864, 0);
	Function_492(338, 0.0f, "sn_kipi", 4, 9, 3, 2, 3212836864, 0);
	Function_492(339, 0.0f, "sn_kirb", 4, 9, 3, 2, 3212836864, 0);
	Function_492(340, 0.0f, "sn_kira", 4, 9, 3, 2, 3212836864, 0);
	Function_492(341, 0.0f, "sn_kise", 4, 9, 3, 2, 3212836864, 0);
	Function_492(342, 0.0f, "sn_kish", 4, 9, 3, 2, 3212836864, 0);
	Function_492(343, 0.0f, "sn_kisk", 4, 9, 3, 2, 3212836864, 0);
	Function_492(344, 0.0f, "sn_kisn", 4, 9, 3, 2, 3212836864, 0);
	Function_492(345, 0.0f, "sn_kiso", 4, 9, 3, 2, 3212836864, 0);
	Function_492(346, 0.0f, "sn_kiv", 4, 9, 3, 2, 3212836864, 0);
	Function_492(347, 0.0f, "sn_kiw", 4, 9, 3, 2, 3212836864, 0);
	Function_492(349, 0.0f, "sn_sca1", 4, 9, 3, 2, 3212836864, 0);
	Function_492(350, 0.0f, "sn_sca2", 4, 9, 3, 2, 3212836864, 0);
	Function_492(351, 0.0f, "sn_sca3", 4, 9, 3, 2, 3212836864, 0);
	Function_492(352, 0.0f, "sn_sca4", 4, 9, 3, 2, 3212836864, 0);
	Function_492(353, 0.0f, "sn_sca5", 4, 9, 3, 2, 3212836864, 0);
	Function_492(354, 0.0f, "sn_spek", 1, 9, 3, 2, 3212836864, 0);
	Function_491(500, 274, 0.0f, "sn_a1_m", "sd_sold", "", "", 9, 1);
	Function_491(501, 4294967295, 0.0f, "sn_a1_c", "sd_sold", "", "", 9, 1);
	Function_491(502, 275, 0.0f, "sn_b1_w", "sd_sold", "", "", 9, 1);
	Function_491(503, 276, 0.0f, "sn_b2_m", "sd_sold", "", "", 9, 1);
	Function_491(505, 4294967295, 0.0f, "sn_b2_c", "sd_sold", "", "", 9, 1);
	Function_491(504, 4294967295, 0.0f, "sn_b2_f", "sd_sold", "", "", 9, 1);
	Function_491(506, 4294967295, 0.0f, "sn_b2_t", "sd_sold", "", "", 9, 1);
	Function_491(507, 277, 0.0f, "sn_b3_m", "sd_sold", "", "", 9, 1);
	Function_491(508, 4294967295, 0.0f, "sn_b3_f", "sd_sold", "", "", 9, 1);
	Function_491(509, 278, 0.0f, "sn_b4_m", "sd_sold", "", "", 9, 1);
	Function_491(511, 4294967295, 0.0f, "sn_b4_h", "sd_sold", "", "", 9, 1);
	Function_491(510, 4294967295, 0.0f, "sn_b4_s", "sd_sold", "", "", 9, 1);
	Function_491(512, 279, 0.0f, "sn_b5_m", "sd_sold", "", "", 9, 1);
	Function_491(513, 4294967295, 0.0f, "sn_b5_s", "sd_sold", "", "", 9, 1);
	Function_491(514, 4294967295, 0.0f, "sn_b5_t", "sd_sold", "", "", 9, 1);
	Function_491(515, 280, 0.0f, "sn_b6_m", "sd_sold", "", "", 9, 1);
	Function_491(517, 4294967295, 0.0f, "sn_b6_c", "sd_sold", "", "", 9, 1);
	Function_491(516, 4294967295, 0.0f, "sn_b6_f", "sd_sold", "", "", 9, 1);
	Function_491(518, 281, 0.0f, "sn_b7_m", "sd_sold", "", "", 9, 1);
	Function_491(520, 4294967295, 0.0f, "sn_b7_a", "sd_sold", "", "", 9, 1);
	Function_491(519, 4294967295, 0.0f, "sn_b7_s", "sd_sold", "", "", 9, 1);
	Function_491(521, 282, 0.0f, "sn_b8_m", "sd_sold", "", "", 9, 1);
	Function_491(523, 4294967295, 0.0f, "sn_b8_h", "sd_sold", "", "", 9, 1);
	Function_491(522, 4294967295, 0.0f, "sn_b8_s", "sd_sold", "", "", 9, 1);
	Function_491(524, 283, 0.0f, "sn_c1_f", "sd_sold", "", "", 9, 1);
	Function_491(529, 285, 0.0f, "sn_c5_m", "sd_sold", "", "", 9, 1);
	Function_491(530, 4294967295, 0.0f, "sn_c5_h", "sd_sold", "", "", 9, 1);
	Function_491(525, 284, 0.0f, "sn_c2_m", "sd_sold", "", "", 9, 1);
	Function_491(527, 4294967295, 0.0f, "sn_c2_c", "sd_sold", "", "", 9, 1);
	Function_491(528, 4294967295, 0.0f, "sn_c2_f", "sd_sold", "", "", 9, 1);
	Function_491(526, 4294967295, 0.0f, "sn_c2_p", "sd_sold", "", "", 9, 1);
	Function_491(531, 286, 0.0f, "sn_c3_m", "sd_sold", "", "", 9, 1);
	Function_491(532, 4294967295, 0.0f, "sn_c3_p", "sd_sold", "", "", 9, 1);
	Function_491(533, 287, 0.0f, "sn_c4_f", "sd_sold", "", "", 9, 1);
	Function_491(534, 288, 0.0f, "sn_d1_m", "sd_sold", "", "", 9, 1);
	Function_491(535, 4294967295, 0.0f, "sn_d1_s", "sd_sold", "", "", 9, 1);
	Function_491(536, 289, 0.0f, "sn_d3_m", "sd_sold", "", "", 9, 1);
	Function_491(537, 4294967295, 0.0f, "sn_d3_f", "sd_sold", "", "", 9, 1);
	Function_491(538, 290, 0.0f, "sn_d2_f", "sd_sold", "", "", 9, 1);
	Function_491(539, 291, 0.0f, "sn_e1_f", "sd_sold", "", "", 9, 1);
	Function_491(540, 292, 0.0f, "sn_e2_m", "sd_sold", "", "", 9, 1);
	Function_491(542, 4294967295, 0.0f, "sn_e2_a", "sd_sold", "", "", 9, 1);
	Function_491(541, 4294967295, 0.0f, "sn_e2_s", "sd_sold", "", "", 9, 1);
	Function_491(543, 293, 0.0f, "sn_f1_m", "sd_sold", "", "", 9, 1);
	Function_491(544, 4294967295, 0.0f, "sn_f1_f", "sd_sold", "", "", 9, 1);
	Function_491(545, 294, 0.0f, "sn_g1_m", "sd_sold", "", "", 9, 1);
	Function_491(546, 276, 0.0f, "sn_g2_m", "sd_sold", "", "", 9, 1);
	Function_491(548, 4294967295, 0.0f, "sn_g2_c", "sd_sold", "", "", 9, 1);
	Function_491(549, 4294967295, 0.0f, "sn_g2_t", "sd_sold", "", "", 9, 1);
	Function_491(547, 4294967295, 0.0f, "sn_g2_f", "sd_sold", "", "", 9, 1);
	Function_491(550, 4294967295, 0.0f, "sn_g2_h", "sd_sold", "", "", 9, 1);
	Function_491(551, 295, 0.0f, "sn_g3_f", "sd_sold", "", "", 9, 1);
	Function_491(552, 296, 0.0f, "sn_h1_f", "sd_sold", "", "", 9, 1);
	Function_491(553, 297, 0.0f, "sn_m1_h", "sd_sold", "", "", 9, 1);
	Function_491(596, 4294967295, 0.0f, "sn_m1_m", "sd_sold", "", "", 9, 1);
	Function_491(554, 298, 0.0f, "sn_xw_m", "sd_sold", "", "", 9, 1);
	Function_491(556, 311, 0.0f, "sn_xw_h", "sd_sold", "", "", 9, 1);
	Function_491(555, 4294967295, 0.0f, "sn_xw_f", "sd_sold", "", "", 9, 1);
	Function_491(557, 299, 0.0f, "sn_xb_m", "sd_sold", "", "", 9, 1);
	Function_491(561, 4294967295, 0.0f, "sn_xb_t", "sd_sold", "", "", 9, 1);
	Function_491(560, 4294967295, 0.0f, "sn_xb_c", "sd_sold", "", "", 9, 1);
	Function_491(559, 4294967295, 0.0f, "sn_xb_h", "sd_sold", "", "", 9, 1);
	Function_491(558, 276, 0.0f, "sn_xb_f", "sd_sold", "", "", 9, 1);
	Function_491(562, 300, 0.0f, "sn_xc_m", "sd_sold", "", "", 9, 1);
	Function_491(563, 284, 0.0f, "sn_xc_p", "sd_sold", "", "", 9, 1);
	Function_491(565, 4294967295, 0.0f, "sn_xc_f", "sd_sold", "", "", 9, 1);
	Function_491(564, 4294967295, 0.0f, "sn_xc_h", "sd_sold", "", "", 9, 1);
	Function_491(566, 301, 0.0f, "sn_nb_m", "sd_sold", "", "", 9, 1);
	Function_491(569, 279, 0.0f, "sn_nb_t", "sd_sold", "", "", 9, 1);
	Function_491(567, 4294967295, 0.0f, "sn_nb_s", "sd_sold", "", "", 9, 1);
	Function_491(568, 4294967295, 0.0f, "sn_nb_h", "sd_sold", "", "", 9, 1);
	Function_491(570, 302, 0.0f, "sn_o1_f", "sd_sold", "", "", 9, 1);
	Function_491(571, 303, 0.0f, "sn_p1_m", "sd_sold", "", "", 9, 1);
	Function_491(572, 304, 0.0f, "sn_r1_m", "sd_sold", "", "", 9, 1);
	Function_491(573, 305, 0.0f, "sn_r2_m", "sd_sold", "", "", 9, 1);
	Function_491(574, 4294967295, 0.0f, "sn_r2_f", "sd_sold", "", "", 9, 1);
	Function_491(575, 306, 0.0f, "sn_s1_m", "sd_sold", "", "", 9, 1);
	Function_491(576, 4294967295, 0.0f, "sn_s1_s", "sd_sold", "", "", 9, 1);
	Function_491(577, 307, 0.0f, "sn_s2_m", "sd_sold", "", "", 9, 1);
	Function_491(578, 4294967295, 0.0f, "sn_s2_f", "sd_sold", "", "", 9, 1);
	Function_491(579, 308, 0.0f, "sn_s3_s", "sd_sold", "", "", 9, 1);
	Function_491(582, 309, 0.0f, "sn_sb_f", "sd_sold", "", "", 9, 1);
	Function_491(583, 310, 0.0f, "sn_v_f", "sd_sold", "", "", 9, 1);
	Function_491(584, 311, 0.0f, "sn_w1_m", "sd_sold", "", "", 9, 1);
	Function_491(585, 4294967295, 0.0f, "sn_w1_p", "sd_sold", "", "", 9, 1);
	Function_491(586, 4294967295, 0.0f, "sn_w1_h", "sd_sold", "", "", 9, 1);
	Function_491(580, 312, 0.0f, "sn_h2_m", "sd_sold", "", "", 9, 1);
	Function_491(581, 4294967295, 0.0f, "sn_h2_s", "sd_sold", "", "", 9, 1);
	Function_492(357, 0.0f, "sn_trea", 4, 7, 1, 4, 3212836864, 0);
	Function_491(587, 357, 0.0f, "sn_t_1", "sd_sold", "", "", 9, 3);
	Function_491(588, 357, 0.0f, "sn_t_2", "sd_sold", "", "", 9, 3);
	Function_491(589, 357, 0.0f, "sn_t_3", "sd_sold", "", "", 9, 3);
	Function_491(590, 357, 0.0f, "sn_t_4", "sd_sold", "", "", 9, 3);
	Function_491(591, 357, 0.0f, "sn_t_5", "sd_sold", "", "", 9, 3);
	Function_491(592, 357, 0.0f, "sn_t_6", "sd_sold", "", "", 9, 3);
	Function_491(593, 357, 0.0f, "sn_t_7", "sd_sold", "", "", 9, 3);
	Function_491(594, 357, 0.0f, "sn_t_8", "sd_sold", "", "", 9, 3);
	Function_491(595, 357, 0.0f, "sn_t_9", "sd_sold", "", "", 9, 3);
	Function_492(355, 0.0f, "sn_hdc", 4, 8, 1, 2, 3212836864, 0);
	Function_492(356, 0.0f, "sn_hdh", 4, 8, 1, 2, 3212836864, 0);
	Function_492(359, 0.0f, "sn_bha", 3, 8, 1, 2, 3212836864, 0);
	Function_492(358, 0.0f, "sn_bhd", 3, 8, 1, 2, 3212836864, 0);
	Function_492(360, 0.0f, "sn_bhf", 3, 8, 1, 2, 3212836864, 0);
	Function_492(361, 0.0f, "sn_bhm", 3, 8, 1, 2, 3212836864, 0);
	Function_492(362, 0.0f, "sn_bhn", 3, 8, 1, 2, 3212836864, 0);
	Function_492(363, 0.0f, "sn_blf", 3, 8, 1, 2, 3212836864, 0);
	Function_492(364, 0.0f, "sn_blm", 3, 8, 1, 2, 3212836864, 0);
	Function_492(365, 0.0f, "sn_bln", 3, 8, 1, 2, 3212836864, 0);
	Function_492(367, 0.0f, "sn_mat", 3, 6, 1, 2, 3212836864, 0);
	Function_492(368, 0.0f, "sn_mdf", 3, 6, 1, 2, 3212836864, 0);
	Function_492(370, 0.0f, "sn_swb", 7, 3, 1, 2, 0.0f, 0.0f);
	Function_492(371, 0.0f, "sn_nwb", 15, 6, 1, 2, 3212836864, 0);
	Function_492(372, 0.0f, "sn_mtof", 24, 4, 3, 2, 3212836864, 0);
	Function_492(373, 0.0f, "sn_mtoh", 24, 4, 3, 2, 3212836864, 0);
	Function_492(374, 0.0f, "sn_mtwh", 24, 4, 1, 2, 3212836864, 0);
	Function_492(375, 0.0f, "sn_mtoc", 24, 4, 1, 2, 3212836864, 0);
	Function_492(376, 0.0f, "sn_mtos", 24, 4, 3, 2, 3212836864, 0);
	Function_492(377, 0.0f, "sn_mcar", 24, 4, 1, 2, 3212836864, 0);
	Function_492(378, 0.0f, "sn_mtot", 24, 4, 1, 2, 3212836864, 0);
	Function_492(381, 0.0f, "sn_mtrp", 24, 4, 3, 2, 3212836864, 0);
	Function_492(382, 0.0f, "sn_mtrs", 24, 4, 3, 2, 3212836864, 0);
	Function_492(383, 0.0f, "sn_mtap", 24, 4, 3, 2, 3212836864, 0);
	Function_492(379, 0.0f, "sn_dff", 0, 4, 3, 2, 3212836864, 0);
	Function_492(380, 0.0f, "sn_hdff", 0, 4, 3, 2, 3212836864, 0);
	Function_492(384, 0.0f, "sn_tpfs", 21, 4, 1, 2, 3212836864, 0);
	Function_492(385, 0.0f, "sn_rpof", 0, 4, 3, 2, 3212836864, 0);
	Function_492(387, 0.0f, "sn_bfs", 24, 4, 3, 2, 3212836864, 0);
	Function_492(388, 0.0f, "sn_bfsh", 24, 4, 3, 2, 3212836864, 0);
	Function_492(369, 0.0f, "sn_esc", 3, 4, 1, 2, 3212836864, 0);
	Function_492(366, 0.0f, "sn_trn", 3, 4, 1, 2, 3212836864, 0);
	Function_492(390, 0.0f, "sn_dlvl", 15, 2, 1, 2, 3.0f, 0.0f);
	Function_492(391, 0.0f, "sn_kde", 0, 6, 3, 2, 3212836864, 0);
	Function_492(392, 0.0f, "sn_kode", 0, 6, 3, 2, 3212836864, 0);
	Function_492(393, 0.0f, "sn_dode", 0, 6, 3, 2, 3212836864, 0);
	Function_492(394, 0.0f, "sn_tdet", 23, 6, 3, 2, 3212836864, 0);
	Function_492(395, 0.0f, "sn_tode", 0, 6, 3, 2, 3212836864, 0);
	Function_492(396, 0.0f, "sn_plas", 15, 2, 1, 2, 3212836864, 0);
	Function_492(397, 0.0f, "sn_phog", 15, 2, 1, 2, 3212836864, 0);
	Function_492(398, 0.0f, "sn_nhog", 0, 2, 1, 2, 3212836864, 0);
	Function_492(399, 0.0f, "sn_fhog", 0, 2, 1, 2, 3212836864, 0);
	Function_492(389, 0.0f, "sn_mlas", 24, 2, 1, 2, 3212836864, 0);
	Function_492(487, 0.0f, "sn_mpex", 6, 9, 2, 2, 3212836864, 0);
	Function_492(488, 0.0f, "sn_KC", 1, 9, 2, 2, 3212836864, 0);
	Function_492(456, 0.0f, "sn_otfd", 3, 9, 1, 2, 3212836864, 0);
	Function_492(457, 0.0f, "sn_otft", 3, 9, 1, 2, 3212836864, 0);
	Function_271(4, Function_278(Global_12976.f_156), 0, 1);
	Function_271(2, Function_273(Global_12976.f_152), 0, 1);
	Function_271(401, Function_490(0), 0, 1);
	Function_271(404, Function_489(0), 0, 1);
	Function_42();
	Var5 = { StackVal, Function_42() };
	Function_271(179, &Var5, 0, 1);
	Function_41();
	Var5 = { StackVal, Function_41() };
	Function_271(180, &Var5, 0, 1);
	Function_40();
	Var5 = { StackVal, Function_40() };
	Function_271(181, &Var5, 0, 1);
	Function_24();
	Var5 = { StackVal, Function_24() };
	Function_271(182, &Var5, 0, 1);
	iVar1 = 0;
	while (iVar1 <= 38)
	{
		Function_280((50 + iVar1), Function_36((90 + iVar1)));
		iVar1++;
	}
	Function_280(49, Function_36(89));
	Function_280(370, Function_36(371));
	Function_279();
	Function_488();
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_36(3));
	SET_PLAYER_CURRENT_HONOR(0, Function_36(1));
	Function_487();
	return;
}

void Function_487() //Position: 0x2A39E / 172958
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

void Function_488() //Position: 0x2A4A4 / 173220
{
	Function_281(1, -5000.0f);
	Function_280(1, 5000.0f);
	return;
}

var Function_489(bool bParam0) //Position: 0x2A4BE / 173246
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar3 = 0;
	iVar8 = "fav_non";
	if (bParam0)
	{
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 <= 275)
		{
			Function_232(Global_13172[iVar911], &iVar0, &iVar1, &iVar2);
			if (iVar2 == 6)
			{
				if (iVar1 != 0)
				{
					if (iVar0 == Global_30717[0])
					{
						iVar4 = (StackVal + (iVar4 + Global_13172[iVar911].f_12));
					}
					else if (iVar0 == Global_30693[0])
					{
						iVar5 = (StackVal + (iVar5 + Global_13172[iVar911].f_12));
					}
					else if (iVar0 == Global_30668[0])
					{
						iVar6 = (StackVal + (iVar6 + Global_13172[iVar911].f_12));
					}
					else if (iVar0 == Global_30640[1])
					{
						iVar7 = (StackVal + (iVar7 + Global_13172[iVar911].f_12));
					}
				}
			}
			iVar9++;
		}
		if (iVar4 >= 0)
		{
			iVar8 = "fav_blk";
			iVar3 = iVar4;
		}
		if (iVar5 >= iVar3)
		{
			iVar8 = "fav_chu";
			iVar3 = iVar5;
		}
		if (iVar6 >= iVar3)
		{
			iVar8 = "fav_hen";
			iVar3 = iVar6;
		}
		if (iVar7 >= iVar3)
		{
			iVar8 = "fav_rwf";
			iVar3 = iVar7;
		}
	}
	return iVar8;
}

var Function_490(bool bParam0) //Position: 0x2A5FD / 173565
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[3];
	int iVar8;
	int iVar9;
	
	iVar3 = 0;
	iVar8 = "fav_non";
	if (bParam0)
	{
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 <= 275)
		{
			Function_232(Global_13172[iVar911], &uVar0, &iVar1, &iVar2);
			if (iVar2 == 6)
			{
				if (iVar1 > 0 || iVar1 < 3)
				{
					LOG_ERROR("GET_FAVORITE_JOB_LABEL: minorIdent out of bounds");
				}
				else
				{
					iVar4[iVar1] = (StackVal + (iVar4[iVar1] + Global_13172[iVar911].f_12));
				}
			}
			iVar9++;
		}
		if (iVar4[1] >= 0)
		{
			iVar8 = "fjob_1";
			iVar3 = iVar4[1];
		}
		if (iVar4[2] >= iVar3)
		{
			iVar8 = "fjob_2";
			iVar3 = iVar4[2];
		}
	}
	return iVar8;
}

int Function_491(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8) //Position: 0x2A6E7 / 173799
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
		Function_492(iParam1, iParam2, bParam5, 5, iParam7, iParam8, 4, 3212836864, 0);
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

int Function_492(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8) //Position: 0x2AC26 / 175142
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_REGISTER: Attempting to register a Stat out of bounds.");
		return 0;
	}
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_REGISTER: eStatID parameter cannot be STAT_INVALID (-1).");
		return 0;
	}
	if (iParam3 == 2)
	{
		LOG_ERROR("STAT_REGISTER: you are not allowed to register a Collectible with this command, please use COLLECTION_REGISTER.");
		return 0;
	}
	if (!IS_STRING_VALID(bParam2))
	{
		LOG_ERROR("STAT_REGISTER: LabelForStatName parameter cannot be an Invalid String.");
		return 0;
	}
	if (STRING_LENGTH(bParam2) >= 7)
	{
		LOG_ERROR("STAT_REGISTER: LabelForStatName parameter cannot be more than 7 characters.");
		return 0;
	}
	if (IS_STRING_VALID(&(Global_35278[iParam020])))
	{
		if (STRING_LENGTH(&(Global_35278[iParam020])) >= 0)
		{
			PRINTSTRING("STAT_REGISTER: You are not allowed to overwrite this already registered Stat: ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_ERROR("STAT_REGISTER: You are not allowed to overwrite an already registered Stat.");
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
	return 1;
}

void Function_493() //Position: 0x2AFA5 / 176037
{
	int iVar0;
	
	Global_62336 = 4294967295;
	iVar0 = 0;
	while (iVar0 < (Global_60461 - 1))
	{
		Global_60461[iVar011] = -1.0f;
		Global_60461[iVar011].f_4 = 0;
		Global_60461[iVar011].f_8 = 0;
		Global_60461[iVar011].f_28 = 4294967295;
		Global_60461[iVar011].f_32 = 4294967295;
		Global_60461[iVar011].f_36 = 4294967295;
		iVar0++;
	}
	return;
}

void Function_494() //Position: 0x2AFFF / 176127
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_61639 - 1))
	{
		Global_61639[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

void Function_495() //Position: 0x2B023 / 176163
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
	Function_496();
	return;
}

void Function_496() //Position: 0x2B0AA / 176298
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

void Function_497() //Position: 0x2B11E / 176414
{
	int iVar0;
	
	DISABLE_CHILD_SECTOR("blk_archeologist01Props01x");
	DISABLE_CHILD_SECTOR("ram_missionProps01x");
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
	DISABLE_CHILD_SECTOR("hen_barn03props01x");
	DISABLE_CHILD_SECTOR("hen_beamsEntity01x");
	DISABLE_CHILD_SECTOR("sp_outlaw03x");
	DISABLE_CHILD_SECTOR("sp_grave03x");
	DISABLE_CHILD_SECTOR("sp_marshal02x");
	DISABLE_CHILD_SECTOR("sep_graveEva01x");
	ENABLE_CHILD_SECTOR("sep_graveCoverSingle01x");
	DISABLE_CHILD_SECTOR("sp_marshal03x");
	DISABLE_CHILD_SECTOR("sp_marshal04ax");
	DISABLE_CHILD_SECTOR("sp_marshal04bx");
	DISABLE_CHILD_SECTOR("coc_fence01bx");
	ENABLE_CHILD_SECTOR("coc_fence01x");
	ENABLE_CHILD_SECTOR("coc_gates01x");
	DISABLE_CHILD_SECTOR("coc_gates02x");
	DISABLE_CHILD_SECTOR("coc_fence03x");
	ENABLE_CHILD_SECTOR("coc_fence03bx");
	DISABLE_CHILD_SECTOR("fom_corralBreakProps01x");
	DISABLE_CHILD_SECTOR("gap_caveBlockades01x");
	ENABLE_CHILD_SECTOR("blk_saloon_int_Props01x");
	ENABLE_CHILD_SECTOR("blk_saloon_int_01x");
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
					DISABLE_WORLD_SECTOR("ramitaBayaAfter");
					ENABLE_WORLD_SECTOR("ramitaBayaBefore");
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
				if (Global_3365)
				{
					DISABLE_WORLD_SECTOR("butterBridgeB");
					DISABLE_WORLD_SECTOR("butterBridgeD");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					ENABLE_WORLD_SECTOR("butterBridgeA");
					ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
				}
				else
				{
					ENABLE_WORLD_SECTOR("butterBridgeB");
					DISABLE_WORLD_SECTOR("butterBridgeA");
					DISABLE_WORLD_SECTOR("butterBridgeD");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
				}
				break;
			
			case 0x00000002:
				if (Global_3365)
				{
					DISABLE_WORLD_SECTOR("butterBridgeA");
					DISABLE_WORLD_SECTOR("butterBridgeD");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					ENABLE_WORLD_SECTOR("butterBridgeB");
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
			
			case 0x00000003:
				if (Global_3365)
				{
					DISABLE_WORLD_SECTOR("butterBridgeB");
					DISABLE_WORLD_SECTOR("butterBridgeD");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					ENABLE_WORLD_SECTOR("butterBridgeA");
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
					DISABLE_WORLD_SECTOR("tannersSpanAfter");
					ENABLE_WORLD_SECTOR("tannersSpanBefore");
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
					DISABLE_WORLD_SECTOR("dixonCrossingAfter");
					ENABLE_WORLD_SECTOR("dixonCrossingBefore");
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
				DISABLE_CHILD_SECTOR("hen_barn02x");
				DISABLE_CHILD_SECTOR("hen_barn02props01x");
				ENABLE_CHILD_SECTOR("hen_barn01x");
				ENABLE_CHILD_SECTOR("hen_barn01props01x");
				break;
			
			case 0x00000007:
				break;
			
			case 0x00000008:
				DISABLE_WORLD_SECTOR("campoMiradaAfter");
				ENABLE_WORLD_SECTOR("campoMiradaBefore");
				break;
			
			case 0x00000009:
				if (Global_3365)
				{
					DISABLE_WORLD_SECTOR("fronteraBridgeAfter");
					ENABLE_WORLD_SECTOR("fronteraBridgeBefore");
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
				break;
			
			case 0x0000000C:
				if (Global_3365)
				{
					DISABLE_WORLD_SECTOR("masonBridgeAfter");
					ENABLE_WORLD_SECTOR("masonBridgeBefore");
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
					DISABLE_CHILD_SECTOR("lmf_troughAfter01x");
					ENABLE_CHILD_SECTOR("lmf_troughBefore01x");
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
				DISABLE_CHILD_SECTOR("blk_theatre_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_theatre_int_01x");
				DISABLE_CHILD_SECTOR("blk_bank01_int_Props02x");
				DISABLE_CHILD_SECTOR("blk_bank_int_02x");
				ENABLE_CHILD_SECTOR("blk_bank_int_shade_02x");
				DISABLE_CHILD_SECTOR("blk_cityHall01_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_cityHall_int_01x");
				DISABLE_CHILD_SECTOR("blk_policeStation01_int_props02x");
				DISABLE_CHILD_SECTOR("blk_policeStation_int_02x");
				ENABLE_CHILD_SECTOR("blk_policeStation01_int_props01x");
				ENABLE_CHILD_SECTOR("blk_policeStation_int_01x");
				ENABLE_CHILD_SECTOR("blk_policeStation_int_shades01x");
				DISABLE_CHILD_SECTOR("blk_blacksmith_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_blacksmith_int_01x");
				DISABLE_CHILD_SECTOR("blk_church_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_church_int_01x");
				DISABLE_CHILD_SECTOR("blk_doctorsOffice_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_doctorsOffice_int_01x");
				DISABLE_CHILD_SECTOR("blk_freightstation01_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_freightstation_int_01x");
				DISABLE_CHILD_SECTOR("blk_generalStore_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_generalStore_int_Props02x");
				DISABLE_CHILD_SECTOR("blk_generalStore_int_01x");
				DISABLE_CHILD_SECTOR("blk_tailor01_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_tailor_int_01x");
				DISABLE_CHILD_SECTOR("blk_trainstation_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_trainstation_int_01x");
				DISABLE_CHILD_SECTOR("blk_gunshop_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_gunshop_int_01x");
				DISABLE_CHILD_SECTOR("blk_theatre_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_generalStore_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_tailor_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_doctorsOffice_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_forgeMill_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_sawMill_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_freightstation_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_blacksmith_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_cityHall_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_bank_int_shade_01x");
				DISABLE_CHILD_SECTOR("mor_morningStar_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_gunshop_int_shade_01x");
				ENABLE_CHILD_SECTOR("blk_saloon_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_saloon_int_01x");
				ENABLE_CHILD_SECTOR("blk_hotel01_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_hotel_int_01x");
				DISABLE_CHILD_SECTOR("blk_hotel_int_shade_01x");
				ENABLE_CHILD_SECTOR("blk_trainstation_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_trainstation_int_01x");
				ENABLE_CHILD_SECTOR("mor_morningStar01_int_Props01x");
				ENABLE_CHILD_SECTOR("mor_morningStar_int_01x");
				DISABLE_CHILD_SECTOR("mor_morningStar_int_shade_01x");
				break;
			
			case 0x0000000F:
				ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
				DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
				ENABLE_CHILD_SECTOR("rwf_livingRoom01props01x");
				DISABLE_CHILD_SECTOR("rwf_livingRoom01props02x");
				break;
			
			case 0x00000010:
				DISABLE_CHILD_SECTOR("beh_silo01x");
				ENABLE_CHILD_SECTOR("beh_silo02x");
				break;
			
			case 0x00000011:
				if (Global_3365)
				{
					ENABLE_CHILD_SECTOR("beh_house02x");
					ENABLE_CHILD_SECTOR("beh_house02props01x");
					DISABLE_CHILD_SECTOR("beh_house01x");
					DISABLE_CHILD_SECTOR("beh_house01props01x");
				}
				else
				{
					DISABLE_CHILD_SECTOR("beh_house02x");
					DISABLE_CHILD_SECTOR("beh_house02props01x");
					ENABLE_CHILD_SECTOR("beh_house01x");
					ENABLE_CHILD_SECTOR("beh_house01props01x");
				}
				break;
			
			case 0x00000012:
				DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
				ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
				DISABLE_CHILD_SECTOR("sp_mexArmy03x");
				break;
			
			case 0x00000013:
				DISABLE_CHILD_SECTOR("esc_villaWall05x");
				ENABLE_CHILD_SECTOR("esc_villaWall04x");
				DISABLE_CHILD_SECTOR("sp_rebel05x");
				break;
			
			case 0x00000014:
				DISABLE_CHILD_SECTOR("icarus");
				break;
			
			case 0x00000015:
				DISABLE_CHILD_SECTOR("chu_gatlingBreakables01x");
				DISABLE_CHILD_SECTOR("lsh_gatlingBreakables01x");
				break;
			
			case 0x00000016:
				DISABLE_CHILD_SECTOR("sp_anthro01x");
				break;
			
			case 0x00000017:
				DISABLE_CHILD_SECTOR("beh_grave01x");
				DISABLE_CHILD_SECTOR("beh_grave02x");
				DISABLE_CHILD_SECTOR("beh_grave03x");
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
				break;
			
			case 0x00000019:
				if (Global_3365)
				{
					ENABLE_CHILD_SECTOR("emt_caveDoor01x");
					DISABLE_CHILD_SECTOR("emt_caveDoor02x");
				}
				break;
			
			case 0x0000001A:
				if (Global_3365)
				{
					ENABLE_CHILD_SECTOR("thi_window01x");
					DISABLE_CHILD_SECTOR("thi_window02x");
				}
				break;
			
			default:
				LOG_ERROR("world state error!");
				break;
		}
		iVar0++;
	}
	if (Global_3365)
	{
		Function_498();
	}
	return;
}

void Function_498() //Position: 0x2E54D / 189773
{
	int iVar0;
	
	if (Function_513())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Global_26003)
	{
		if (!Global_26003[iVar0])
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_364(25, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("ramitaBayaBefore");
						ENABLE_WORLD_SECTOR("ramitaBayaAfter");
						ENABLE_CURVE("rsdROAD_frb_road", true);
						ENABLE_CURVE("rsdROAD_fom_frb_road", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve221", true);
					}
					break;
				
				case 0x00000001:
					if (Function_364(25, 0) && !Function_364(26, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						ENABLE_WORLD_SECTOR("butterBridgeB");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
					}
					break;
				
				case 0x00000002:
					if ((Function_364(25, 0) && Function_364(26, 0)) && !Function_364(29, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeB");
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_WORLD_SECTOR("butterBridgeD");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
					}
					break;
				
				case 0x00000003:
					if ((Function_364(25, 0) && Function_364(26, 0)) && Function_364(29, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_WORLD_SECTOR("butterBridgeB");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
					}
					break;
				
				case 0x00000004:
					if (Function_364(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("tannersSpanBefore");
						ENABLE_WORLD_SECTOR("tannersSpanAfter");
					}
					break;
				
				case 0x00000005:
					if (Function_364(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("dixonCrossingBefore");
						ENABLE_WORLD_SECTOR("dixonCrossingAfter");
						ENABLE_CURVE("rsdROAD_thi_blk_road", true);
						ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve124", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve132", true);
					}
					break;
				
				case 0x00000006:
					if (Function_364(22, 0) && !Function_364(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("hen_barn01x");
						DISABLE_CHILD_SECTOR("hen_barn01props01x");
						DISABLE_CHILD_SECTOR("hen_barn01props02x");
						ENABLE_CHILD_SECTOR("hen_barn02x");
						ENABLE_CHILD_SECTOR("hen_barn02props01x");
					}
					break;
				
				case 0x00000007:
					if (Function_364(22, 0) && Function_364(41, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("hen_barn01x");
						ENABLE_CHILD_SECTOR("hen_barn01props01x");
						ENABLE_CHILD_SECTOR("hen_barn01props02x");
						DISABLE_CHILD_SECTOR("hen_barn02x");
						DISABLE_CHILD_SECTOR("hen_barn02props01x");
					}
					break;
				
				case 0x00000008:
					if (Function_364(34, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("campoMiradaBefore");
						ENABLE_WORLD_SECTOR("campoMiradaAfter");
					}
					break;
				
				case 0x00000009:
					if (Function_364(26, 0) || Function_364(30, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
						ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
					}
					break;
				
				case 0x0000000A:
					if (Function_364(40, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("fod_gates01x");
						ENABLE_CHILD_SECTOR("fod_gates02x");
						ENABLE_CHILD_SECTOR("fod_gates02Doors01x");
					}
					break;
				
				case 0x0000000B:
					if (Function_364(48, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("coc_fence01x");
						ENABLE_CHILD_SECTOR("coc_fence01bx");
						ENABLE_CHILD_SECTOR("coc_gates02x");
						DISABLE_CHILD_SECTOR("coc_gates01x");
					}
					break;
				
				case 0x0000000C:
					if (Function_364(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("masonBridgeBefore");
						ENABLE_WORLD_SECTOR("masonBridgeAfter");
					}
					break;
				
				case 0x0000000D:
					if (Function_364(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
						ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
					}
					break;
				
				case 0x0000000E:
					break;
				
				case 0x0000000F:
					if (Function_364(21, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
						ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
					}
					break;
				
				case 0x00000010:
					if (Function_364(57, 0) || Function_329(57))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_silo02x");
						ENABLE_CHILD_SECTOR("beh_silo01x");
					}
					break;
				
				case 0x00000011:
					if (Function_364(48, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_house02x");
						DISABLE_CHILD_SECTOR("beh_house02props01x");
						ENABLE_CHILD_SECTOR("beh_house01x");
						ENABLE_CHILD_SECTOR("beh_house01props01x");
					}
					break;
				
				case 0x00000012:
					if (Function_364(28, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
						ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
					}
					break;
				
				case 0x00000013:
					if (Function_364(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("esc_villaWall04x");
						ENABLE_CHILD_SECTOR("esc_villaWall05x");
					}
					break;
				
				case 0x00000014:
					if (Function_74(37))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("icarus");
					}
					break;
				
				case 0x00000015:
					break;
				
				case 0x00000016:
					break;
				
				case 0x00000017:
					if (Function_364(57, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("beh_grave02x");
						ENABLE_CHILD_SECTOR("beh_grave03x");
						DISABLE_CHILD_SECTOR("beh_grave01x");
					}
					break;
				
				case 0x00000018:
					if (Function_364(25, 0))
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
					}
					break;
				
				case 0x00000019:
					if (Function_364(32, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("emt_caveDoor02x");
						DISABLE_CHILD_SECTOR("emt_caveDoor01x");
					}
					break;
				
				case 0x0000001A:
					if (Function_364(20, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("thi_window02x");
						DISABLE_CHILD_SECTOR("thi_window01x");
					}
					break;
				
				default:
					LOG_ERROR("world state error");
					break;
				}
		}
		iVar0++;
	}
	return;
}

bool Function_499(int iParam0) //Position: 0x2FCFE / 195838
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_500(int iParam0) //Position: 0x2FD1C / 195868
{
	int iVar0;
	
	if (Function_476(iParam0, 1) && Function_476(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_501(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2FD50 / 195920
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_504(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_502(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_502(bParam0, bParam1, bParam2, 4294967295);
}

int Function_502(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2FDAE / 196014
{
	var uVar0;
	
	if (!Function_233(bParam2))
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
	uVar0 = Function_504(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_503(uVar0);
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

int Function_503(int iParam0) //Position: 0x2FF03 / 196355
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

var Function_504(int iParam0, int iParam1, bool bParam2) //Position: 0x2FF41 / 196417
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_505() //Position: 0x2FF61 / 196449
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

var Function_506(bool bParam0) //Position: 0x30027 / 196647
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return STRING_TO_INT(bVar0);
	}
	return 4294967295;
}

void Function_507() //Position: 0x3004A / 196682
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		Function_388(&(Global_0[iVar0168]), "MULTI_NONE", "MULTI_NONE", 0, 3, 4294967295, 4294967295, 0, 0);
		iVar0++;
	}
	Global_3361 = 0;
	return;
}

bool Function_508(bool bParam0) //Position: 0x30091 / 196753
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(bParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_509() //Position: 0x300B0 / 196784
{
	WRITE_TO_FILE("New Game Progression Started\n", "C:/MoneyData.csv", 1);
	return;
}

var Function_510() //Position: 0x300ED / 196845
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_64;
}

vector3 Function_511(var uParam0, var uParam1) //Position: 0x30108 / 196872
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

void Function_512() //Position: 0x30154 / 196948
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

bool Function_513() //Position: 0x3018F / 197007
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_514(int iParam0, int iParam1) //Position: 0x30198 / 197016
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_515(var uParam0, int iParam1) //Position: 0x301AB / 197035
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_516(int iParam0, bool bParam1) //Position: 0x301BA / 197050
{
	if (!Function_418(iParam0))
	{
		return;
	}
	Global_26401[iParam0] = bParam1;
	Function_517((*&Global_26401 + 2220)[iParam0], TO_FLOAT(bParam1), 0);
	Function_517(222, TO_FLOAT((Function_267(223) + Function_267(224))), 0);
	return;
}

int Function_517(int iParam0, bool bParam1, bool bParam2) //Position: 0x301FB / 197115
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > bParam1)
	{
		Function_39(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_38(iParam0);
	if (bParam2)
	{
		Function_26(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

vector3 Function_518(int iParam0) //Position: 0x30467 / 197735
{
	switch (iParam0)
	{
		case 0x00000001:
			return -819,6454f, 93,80083f, 2436,405f;
			break;
		
		case 0x00000002:
			return -2080,289f, 16,962f, 2603,609f;
			break;
		
		case 0x00000003:
			return 772,1412f, 79,45659f, 1241,604f;
			break;
		
		case 0x00000004:
			return -2647,498f, 31,386f, 4247,398f;
			break;
		
		case 0x00000005:
			return -724,92f, 63,349f, 3297,469f;
			break;
		
		case 0x00000006:
			return -4355,349f, 30,16f, 4384,089f;
			break;
	}
	Function_138();
	return StackVal, StackVal, Function_138();
}

void Function_519(int iParam0) //Position: 0x3050D / 197901
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_520(var uParam0, var uParam1, int iParam2) //Position: 0x30520 / 197920
{
	struct<169> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_168)
	{
		iVar44 = 1;
		*uParam0 = Var0.f_156;
		*uParam1 = Var0.f_160;
		*iParam2 = Var0.f_164;
	}
	Var0.f_156 = 0;
	Var0.f_160 = 0;
	Var0.f_164 = 0;
	Var0.f_168 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return iVar44;
}

void Function_521(int iParam0) //Position: 0x30574 / 198004
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

