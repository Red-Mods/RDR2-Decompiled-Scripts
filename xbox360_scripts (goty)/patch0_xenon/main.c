//Decompiled with MagicRDR v1.0
//Function Count : 559
//Statics Count : 277
//Natives Count : 541
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<929> Local_4 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<173> Var0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	fLocal_257 = 1.0f;
	iLocal_267 = 4294967295;
	iLocal_273 = 0;
	iLocal_274 = 0;
	iLocal_275 = 0;
	iLocal_276 = 0;
	PRINTSTRING("********************************************");
	PRINTNL();
	PRINTSTRING("                 MAIN.SC");
	PRINTNL();
	PRINTSTRING("SCRIPTS ARE COMPILED WITH STANDALONE DEFINED");
	PRINTNL();
	PRINTSTRING("********************************************");
	PRINTNL();
	DLC_PRE_INIT_CONTENT();
	SET_AGRESSIVE_EVENT_ON(0);
	SET_DLC_FALLBACK_AVATAR(869);
	Function_558(0);
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
	if (Function_557(&uVar44, &iVar45, &iVar46))
	{
		Function_556(2048);
		Global_27772 = uVar44;
		if (Global_27772 < 0 && Global_27772 >= 6)
		{
			Function_555(Global_27772);
			Global_34165 = { StackVal, StackVal, Function_555(Global_27772) };
			if (iVar46 == 4294967295 && iVar45 <= 0)
			{
				Global_26401.f_2216 = iVar46;
				Function_554(Global_26401.f_2216, iVar45);
			}
			Function_553(&Global_63095, 2);
			Function_552(&Global_63095, 1);
		}
		else
		{
			Global_27772 = 1;
			Function_555(1);
			Global_34165 = { StackVal, StackVal, Function_555(1) };
		}
	}
	if (!Function_551())
	{
		Function_550();
		if (Var0.f_68)
		{
			Global_34165.f_48++;
			Function_549(&Global_34165 + 12, &Global_34165 + 16);
			Global_34165 = { StackVal, StackVal, Function_549(&Global_34165 + 12, &Global_34165 + 16) };
			Global_34165.f_24 = Function_548();
		}
	}
	if ((Global_34165.f_44 || Global_79339) || _WAS_LAST_RESET_FOR_MULTIPLAYER())
	{
		Global_34165.f_44 = 1;
		bLocal_260 = false;
		Global_3365 = 0;
		SET_RICH_PRESENCE(1, 0, 0, 0, 0);
	}
	else
	{
		SET_RICH_PRESENCE(2, 0, 0, 0, 0);
		if (IS_LAUNCH_RETAIL() && Global_3364)
		{
			bLocal_260 = true;
			Global_3365 = 1;
			Function_547();
		}
	}
	if (!Global_34165.f_44)
	{
		STREAMING_ENABLE_POI_STREAMING(0);
	}
	if (Function_546("npressDemo"))
	{
		Global_3419 = 1;
	}
	if (Function_546("pressDemo3"))
	{
		Global_3420 = 1;
	}
	if (Function_546("pax"))
	{
		Global_3421 = 1;
		bLocal_260 = false;
		Global_3365 = 0;
	}
	Global_3365 = !Global_34165.f_44;
	TOGGLE_COVER_PROPS(0);
	Global_30938.f_4 = 4294967295;
	Global_30938.f_8 = 4294967295;
	Global_30938 = 0;
	Global_3366 = 0;
	Function_545();
	if (Function_546("performanceTestHen"))
	{
		iLocal_272 = 0;
		bLocal_261 = true;
	}
	else if (Function_546("performanceTestArm"))
	{
		iLocal_272 = 1;
		bLocal_261 = true;
	}
	else if (Function_546("performanceTestFire"))
	{
		iLocal_272 = 2;
		bLocal_261 = true;
	}
	else if (Function_546("performanceTestStream"))
	{
		iLocal_272 = 3;
		bLocal_261 = true;
	}
	else if (Function_546("performancetestgringo"))
	{
		iLocal_272 = 4;
		bLocal_261 = true;
	}
	iLocal_262 = Function_544("soaktest");
	if (iLocal_262 != 4294967295 && Function_546("soaktest"))
	{
		iLocal_262 = 0;
	}
	if (Function_546("noDDA"))
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
		Function_543();
	}
	iVar47 = Function_539(0, 1, 1);
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
		bLocal_259 = true;
	}
	if (Var0.f_16)
	{
		if (Global_6267 == 1)
		{
			if (!Global_34165.f_28)
			{
				Global_34165 = { 857.329f, 78.453f, 1238.027f };
				Global_63097 = 1;
				Function_538(16385);
			}
			else
			{
				Global_34165 = { -2208.91f, 16.5062f, 2605.41f };
			}
		}
		else if (Global_6267 == 2)
		{
			Global_34165 = { -839.352f, 92.547f, 2372.48f };
			Global_34165.f_12 = 170.951f;
		}
		else if (Global_6267 == 48)
		{
			Global_34165 = { -170.176f, 124.375f, 1723.22f };
			Global_34165.f_12 = 286.845f;
		}
		else
		{
			Global_34165 = { StackVal, StackVal, *(&Var0 + 4) };
		}
		bLocal_259 = false;
	}
	else if (Global_3421)
	{
		Global_34165 = { -2137.46f, 16.38f, 2605.633f };
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
			if (!bLocal_260)
			{
				if (Function_546("randomstartloc"))
				{
					iVar67 = FLOOR(TO_FLOAT((RAND_INT_RANGE(false, vVar48 * 1000) / 1000)));
					if (iVar67 <= 0)
					{
						iVar67 = 0;
					}
					else if (iVar67 > vVar48)
					{
						iVar67 = (vVar48 - 1);
					}
					vVar48[03] = { -837.534f, 92.062f, 2379.602f };
					vVar48[13] = { -2103.409f, 16.449f, 2604.172f };
					vVar48[23] = { 108.881f, 73.304f, 2322.866f };
					vVar48[33] = { -4296.771f, 22.116f, 4406.287f };
					vVar48[43] = { -2730.71f, 32.353f, 4251.411f };
					vVar48[53] = { 661.31f, 77.936f, 1214.231f };
					Global_34165 = { StackVal, StackVal, vVar48[iVar673] };
				}
				else
				{
					Global_34165 = { -837.534f, 92.062f, 2379.602f };
				}
			}
			else if ((Global_3365 && !Global_3381) && !Global_34165.f_28)
			{
				if (StackVal && StackVal != 3 != 4)
				{
					Global_63097 = 1;
					Function_538(16385);
					if (!UI_ISACTIVE("nCutscenes"))
					{
						UI_ACTIVATE("nCutscenes");
					}
					Global_34165 = { 736.489f, 90.334f, 1199.335f };
				}
			}
		}
		else if ((Global_3365 && !Global_3381) && !Global_34165.f_28)
		{
			iVar68 = Function_539(0, 2, 1);
			iVar69 = Function_539(2, 47, 1);
			iVar70 = Function_539(2, 48, 1);
			if (StackVal && StackVal != 3 != 4)
			{
				Global_34165 = { -839.352f, 92.547f, 2372.48f };
				Global_34165.f_12 = 170.951f;
			}
			else if (StackVal && (StackVal && !(StackVal || StackVal != 3 != 4) != 3) != 4)
			{
				Global_34165 = { -170.176f, 124.375f, 1723.22f };
				Global_34165.f_12 = 286.845f;
			}
		}
		if (!Global_3365 && !Global_3421)
		{
			Global_34165.f_12 = 176.588f;
		}
	}
	if (Function_537(2048))
	{
		bLocal_259 = false;
	}
	if (bLocal_261)
	{
		switch (iLocal_272)
		{
			case 0x00000000:
				Global_34165 = { -837.534f, 92.062f, 2379.602f };
				break;
			
			case 0x00000001:
				Global_34165 = { -2201.96f, 16.581f, 2614.463f };
				break;
			
			case 0x00000002:
				Global_34165 = { -703.695f, 63.002f, 3334.63f };
				break;
			
			case 0x00000004:
				Global_34165 = { -687.803f, 66.482f, 3293.021f };
				break;
			}
	}
	Function_535();
	if (!Global_34165.f_44)
	{
		SET_START_POS(Global_34165, Global_34165.f_12, 0);
	}
	Global_34165.f_40 = 0;
	Global_13112 = { 0.0f, 0.0f, 0.0f };
	Global_13112.f_72 = 4294967295;
	Function_524();
	if (Function_523(64))
	{
		if (Function_522(599) <= 0)
		{
			Function_521(599, 0, 0);
		}
	}
	Function_519();
	if (Global_3364)
	{
		Function_518();
	}
	bVar71 = 13;
	Function_516(&bVar71, "$/content/scripting/DesignerDefined/Player", 4, 0);
	Function_516(&bVar71, "$/content/init/rdr2init_each_load", 4, 0);
	Function_516(&bVar71, "$/content/scripting/DesignerDefined/short_update_thread", 4, 0);
	Function_516(&bVar71, "$/content/scripting/DesignerDefined/medium_update_thread", 4, 0);
	Function_516(&bVar71, "$/content/scripting/DesignerDefined/long_update_thread", 4, 0);
	Function_516(&bVar71, "$/content/scripting/DesignerDefined/UI/FuiEventMonitor", 4, 0);
	Function_516(&bVar71, "$/content/scripting/DesignerDefined/Pause", 4, 0);
	if (Global_34165.f_44)
	{
		Function_516(&bVar71, "$/content/multiplayer/multiplayer_update_thread", 4, 0);
	}
	else
	{
		Function_516(&bVar71, "$/content/scripting/gringo/SimpleGringo/hogtie", 1, 0);
		Function_516(&bVar71, "$/content/scripting/gringo/SimpleGringo/hogtie_pickup", 1, 0);
		Function_516(&bVar71, "$/content/scripting/gringo/SimpleGringo/Loot_Corpse", 1, 0);
		Function_516(&bVar71, "$/content/scripting/gringo/SimpleGringo/Skin_Animal", 1, 0);
		Function_516(&bVar71, "$/content/scripting/gringo/SimpleGringo/Pluck_Feather", 1, 0);
		Function_516(&bVar71, "$/content/scripting/gringo/GringoBrains/SmallBrains/Drunk", 1, 0);
	}
	if (Global_34165.f_44)
	{
		REQUEST_ASSET("$/content/Multiplayer/Action_Areas/GenericMP_AA", 4);
	}
	fLocal_266 = 0.0f;
	while (!Function_511(&bVar71))
	{
		WAIT(0);
	}
	if (!Function_510(Global_63095, 1))
	{
		Function_552(&Global_63084 + 32, 65536);
		Function_552(&Global_63084 + 32, 2);
		Function_552(&Global_63084 + 32, 1);
	}
	else
	{
		bLocal_270 = true;
	}
	uVar111 = LAUNCH_NEW_SCRIPT("scripting/DesignerDefined/Player", 0);
	fLocal_266 = 0.0f;
	while (!IS_SCRIPT_VALID(uVar111))
	{
		WAIT(0);
	}
	fLocal_266 = 0.0f;
	while (!IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("PlayerLayout")))
	{
		WAIT(0);
	}
	fLocal_266 = 0.0f;
	if (Global_34165.f_44)
	{
	}
	while (!IS_ACTOR_VALID(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), "player")) && !Global_34165.f_44)
	{
		WAIT(0);
	}
	LAUNCH_NEW_SCRIPT("scripting/DesignerDefined/UI/FuiEventMonitor", 0);
	if (bLocal_261)
	{
		switch (iLocal_272)
		{
			case 0x00000000:
				uVar112 = LAUNCH_NEW_SCRIPT("systemTest/PerformanceTests/test01_hen", 0);
				break;
			
			case 0x00000001:
				uVar112 = LAUNCH_NEW_SCRIPT("systemTest/PerformanceTests/test02_arm", 0);
				break;
			
			case 0x00000002:
				uVar112 = LAUNCH_NEW_SCRIPT("systemTest/PerformanceTests/test03_firefight", 0);
				break;
			
			case 0x00000003:
				uVar112 = LAUNCH_NEW_SCRIPT("systemTest/PerformanceTests/test04_streaming", 0);
				break;
			
			case 0x00000004:
				uVar112 = LAUNCH_NEW_SCRIPT("systemTest/PerformanceTests/test05_gringo", 0);
				break;
		}
		iVar113 = MAKE_TIME_OF_DAY(false, false, 0);
		SET_WEATHER(1, iVar113);
		while (!IS_SCRIPT_VALID(uVar112))
		{
			WAIT(0);
		}
		while (!STREAMING_IS_WORLD_LOADED())
		{
			WAIT(0);
		}
		HUD_FADE_IN(2.0f, 1065353216);
		CAMERA_RESET(0);
		STREAMING_SET_CUTSCENE_MODE(0);
		if (iLocal_272 != 3)
		{
			while (IS_SCRIPT_VALID(uVar112))
			{
				WAIT(0);
			}
			TERMINATE_THIS_SCRIPT();
		}
	}
	Function_509();
	Function_508();
	LAUNCH_NEW_SCRIPT("init/rdr2init_each_load", 0);
	LAUNCH_NEW_SCRIPT("scripting/DesignerDefined/short_update_thread", 0);
	LAUNCH_NEW_SCRIPT("scripting/DesignerDefined/medium_update_thread", 0);
	LAUNCH_NEW_SCRIPT("scripting/DesignerDefined/long_update_thread", 0);
	Function_465();
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
	Function_463();
	Function_462();
	Function_461();
	CLEAR_REGIONS();
	Function_459();
	Global_30621[0] = Function_457("$/content/Frontier/PR_Frontier", "fro", 4294967295, 0, 1, 0, 0, 0, 1, 0);
	Global_30621[1] = Function_457("$/content/Mexico/PR_Mexico", "mex", Global_30621[0], 0, 1, 1, 0, 0, 1, 0);
	Global_30621[2] = Function_457("$/content/North/PR_North", "nor", Global_30621[1], 0, 1, 2, 0, 0, 1, 0);
	Global_30621[3] = Function_457("$/content/Homestead/PR_Homestead", "hom", Global_30621[2], 0, 1, 3, 0, 0, 1, 0);
	Global_30621[4] = Function_457("$/content/Homestead/PR_End", "end", Global_30621[3], 0, 1, 4, 0, 0, 1, 0);
	Global_30628[0] = Function_457("$/content/Frontier/Cholla_Springs/ChollaSprings", "cho", Global_30621[0], Local_4.f_132, 2, 5, 0, 1, 1, 0);
	Global_30633[1] = Function_457("$/content/Mexico/Diez_Coronas/DiezCoronas", "dzc", Global_30621[1], Local_4.f_404, 2, 52, 0, 1, 1, 0);
	Global_30628[1] = Function_457("$/content/Frontier/Gaptooth_Ridge/GaptoothRidge", "gtr", Global_30621[0], Local_4.f_196, 2, 6, 0, 0, 1, 0);
	Global_30637[0] = Function_457("$/content/North/Great_Plains/GreatPlains", "grt", Global_30621[2], Local_4.f_316, 2, 83, 0, 1, 1, 0);
	Global_30628[2] = Function_457("$/content/Frontier/Hennigans_Stead/HennigansStead", "hgn", Global_30621[0], Local_4.f_272, 2, 8, 0, 1, 1, 0);
	Global_30633[2] = Function_457("$/content/Mexico/Perdido/Perdido", "prd", Global_30621[1], Local_4.f_380, 2, 51, 0, 1, 1, 0);
	Global_30633[0] = Function_457("$/content/Mexico/Punta_Orgullo/PuntaOrgullo", "pun", Global_30621[1], Local_4.f_352, 2, 50, 0, 1, 1, 0);
	Global_30628[3] = Function_457("$/content/Frontier/Rio_Bravo/RioBravo", "rio", Global_30621[0], Local_4.f_228, 2, 7, 0, 0, 1, 0);
	Global_30637[1] = Function_457("$/content/North/Tall_Trees/TallTrees", "tal", Global_30621[2], Local_4.f_300, 2, 82, 0, 0, 1, 0);
	Global_30693[2] = Function_457("$/content/Mexico/Perdido/Agave_Viejo/AgaveViejo", "agv", Global_30633[2], Local_4.f_768, 4, 62, 0, 1, 0, 0);
	Global_30640[0] = Function_457("$/content/Frontier/Cholla_Springs/Armadillo/Armadillo", "arm", Global_30628[0], Local_4.f_44, 3, 9, 0, 1, 1, 0);
	Global_30717[1] = Function_457("$/content/North/Great_Plains/BeechersHope/BeechersHope", "beh", Global_30637[0], Local_4.f_496, 4, 95, 0, 0, 1, 0);
	Global_30658[4] = Function_457("$/content/Frontier/Gaptooth_Ridge/Benedict_Point/BenedictPoint", "ben", Global_30628[1], Local_4.f_448, 4, 30, 0, 0, 1, 0);
	Global_30717[0] = Function_457("$/content/North/Great_Plains/Blackwater/Blackwater", "blk", Global_30637[0], Local_4.f_484, 3, 94, 0, 0, 1, 0);
	Global_30707[2] = Function_457("$/content/Mexico/Diez_Coronas/Casa_Madrugada/CasaMadrugada", "cas", Global_30633[1], Local_4.f_472, 4, 75, 0, 1, 1, 0);
	Global_30693[0] = Function_457("$/content/Mexico/Perdido/Chuparosa/Chuparosa", "chu", Global_30633[2], Local_4.f_464, 3, 60, 0, 1, 1, 0);
	Global_30723[0] = Function_457("$/content/North/Tall_Trees/Cochinay/Cochinay", "coc", Global_30637[1], Local_4.f_704, 4, 84, 0, 0, 0, 0);
	Global_30640[4] = Function_457("$/content/Frontier/Cholla_Springs/Coots_Chapel/CootsChapel", "coo", Global_30628[0], Local_4.f_512, 4, 11, 0, 0, 0, 0);
	Global_30707[0] = Function_457("$/content/Mexico/Diez_Coronas/El_Matadero_Town/ElMataderoTown", "emt", Global_30633[1], Local_4.f_680, 4, 73, 0, 0, 1, 0);
	Global_30707[1] = Function_457("$/content/Mexico/Diez_Coronas/El_Presidio/ElPresidio", "fod", Global_30633[1], Local_4.f_480, 4, 74, 0, 1, 1, 0);
	Global_30685[0] = Function_457("$/content/Mexico/Punta_Orgullo/Escalera/Escalera", "esc", Global_30633[0], Local_4.f_456, 3, 53, 0, 1, 1, 0);
	Global_30693[1] = Function_457("$/content/Mexico/Perdido/Las_Hermanas/LasHermanas", "lsh", Global_30633[2], Local_4.f_764, 4, 61, 0, 1, 1, 0);
	Global_30668[0] = Function_457("$/content/Frontier/Hennigans_Stead/Hennigans_Ranch/HennigansRanch", "hen", Global_30628[2], Local_4.f_412, 3, 40, 0, 0, 1, 0);
	Global_30723[1] = Function_457("$/content/North/Tall_Trees/Manzanita_Post/ManzanitaPost", "mtp", Global_30637[1], Local_4.f_488, 4, 85, 0, 0, 1, 0);
	Global_30723[2] = Function_457("$/content/North/Tall_Trees/Pacific_Union_Railroad_Camp/PacificUnionRailroadCamp", "upr", Global_30637[1], Local_4.f_492, 4, 86, 0, 0, 1, 0);
	Global_30679[0] = Function_457("$/content/Frontier/Rio_Bravo/Plainview/Plainview", "pln", Global_30628[3], Local_4.f_736, 4, 35, 0, 0, 1, 0);
	Global_30640[1] = Function_457("$/content/Frontier/Cholla_Springs/Ridgewood_Farm/RidgewoodFarm", "rwf", Global_30628[0], Local_4.f_56, 4, 10, 0, 0, 1, 0);
	Global_30658[1] = Function_457("$/content/Frontier/Gaptooth_Ridge/Rathskeller_Fork/RathskellerFork", "rat", Global_30628[1], Local_4.f_72, 4, 27, 0, 0, 1, 0);
	Global_30668[1] = Function_457("$/content/Frontier/Hennigans_Stead/Thieves_Landing/ThievesLanding", "thi", Global_30628[2], Local_4.f_408, 3, 41, 0, 0, 1, 0);
	Global_30707[3] = Function_457("$/content/Mexico/Diez_Coronas/Torquemada/Torquemada", "tor", Global_30633[1], Local_4.f_476, 4, 76, 0, 0, 0, 0);
	Global_30679[1] = Function_457("$/content/Frontier/Rio_Bravo/Fort_Mercer/FortMercer", "fom", Global_30628[3], Local_4.f_48, 5, 36, 0, 0, 0, 0);
	Global_30658[3] = Function_457("$/content/Frontier/Gaptooth_Ridge/Gaptooth_Breach/GaptoothBreach", "gap", Global_30628[1], Local_4.f_64, 5, 29, 0, 0, 0, 0);
	Global_30685[1] = Function_457("$/content/Mexico/Punta_Orgullo/Nosalida/Nosalida", "nos", Global_30633[0], Local_4.f_452, 5, 54, 0, 1, 0, 0);
	if (Global_34165.f_44)
	{
		Global_30668[2] = Function_457("$/content/Frontier/Hennigans_Stead/Pikes_Basin/PikesBasin", "pik", Global_30628[2], Local_4.f_816, 5, 42, 0, 0, 0, 0);
	}
	else
	{
		Global_30668[2] = Function_457("$/content/Frontier/Hennigans_Stead/Pikes_Basin/PikesBasin", "pik", Global_30628[2], Local_4.f_444, 5, 42, 0, 0, 0, 0);
	}
	if (IS_PS3())
	{
		Global_30658[2] = Function_457("$/content/Frontier/Gaptooth_Ridge/Solomons_Folly/SolomonsFolly", "sol", Global_30628[1], Local_4.f_68, 5, 28, 0, 0, 0, 0);
	}
	Global_30685[2] = Function_457("$/content/Mexico/Punta_Orgullo/Tesoro_Azul/TesoroAzul", "tes", Global_30633[0], Local_4.f_468, 5, 55, 0, 1, 0, 0);
	Global_30658[0] = Function_457("$/content/Frontier/Gaptooth_Ridge/Tumbleweed/Tumbleweed", "tum", Global_30628[1], Local_4.f_60, 5, 26, 0, 0, 0, 0);
	Global_30640[2] = Function_457("$/content/Frontier/Cholla_Springs/Twin_Rocks/TwinRocks", "twr", Global_30628[0], Local_4.f_52, 5, 12, 0, 0, 0, 0);
	Global_30707[5] = Function_457("", "cab", Global_30633[1], Local_4.f_584, 6, 78, 0, 0, 0, 0);
	Global_30723[5] = Function_457("", "aur", Global_30637[1], Local_4.f_656, 6, 89, 1, 0, 0, 0);
	Global_30693[3] = Function_457("", "bar", Global_30633[2], Local_4.f_600, 6, 63, 1, 0, 0, 1);
	Global_30723[6] = Function_457("", "bcc", Global_30637[1], Local_4.f_720, 6, 90, 1, 0, 0, 1);
	Global_30658[8] = Function_457("", "bep", Global_30628[3], Local_4.f_732, 6, 34, 0, 0, 0, 0);
	Global_30668[3] = Function_457("", "brb", Global_30628[2], Local_4.f_564, 6, 43, 1, 0, 0, 1);
	Global_30668[4] = Function_457("", "but", Global_30628[2], Local_4.f_568, 6, 44, 0, 0, 0, 0);
	Global_30693[12] = Function_457("", "mir", Global_30633[2], Local_4.f_760, 6, 72, 0, 1, 0, 0);
	Global_30679[4] = Function_457("", "dlr", Global_30628[3], Local_4.f_728, 6, 39, 0, 0, 0, 0);
	Global_30693[5] = Function_457("", "tro", Global_30633[2], Local_4.f_612, 6, 65, 0, 0, 0, 0);
	Global_30693[7] = Function_457("", "dia", Global_30633[2], Local_4.f_616, 6, 67, 1, 0, 0, 0);
	Global_30717[4] = Function_457("", "dix", Global_30637[0], Local_4.f_792, 6, 98, 0, 0, 0, 0);
	Global_30679[2] = Function_457("", "frb", Global_30628[3], Local_4.f_552, 6, 37, 0, 0, 0, 0);
	Global_30668[5] = Function_457("", "grn", Global_30628[2], Local_4.f_560, 6, 45, 0, 0, 0, 1);
	Global_30640[9] = Function_457("", "ham", Global_30628[0], Local_4.f_524, 6, 18, 0, 0, 0, 1);
	Global_30640[6] = Function_457("", "han", Global_30628[0], Local_4.f_516, 6, 15, 1, 0, 0, 0);
	Global_30693[10] = Function_457("", "hnd", Global_30633[2], Local_4.f_756, 6, 70, 1, 1, 0, 1);
	Global_30640[8] = Function_457("", "jor", Global_30628[0], Local_4.f_500, 6, 17, 0, 0, 0, 0);
	Global_30693[8] = Function_457("", "lag", Global_30633[2], Local_4.f_752, 6, 68, 1, 1, 0, 1);
	Global_30640[5] = Function_457("", "ldj", Global_30628[0], Local_4.f_508, 6, 14, 0, 0, 0, 1);
	Global_30707[8] = Function_457("", "mnt", Global_30633[1], Local_4.f_724, 6, 81, 0, 0, 0, 0);
	Global_30723[7] = Function_457("", "msb", Global_30637[1], Local_4.f_788, 6, 91, 0, 0, 0, 0);
	Global_30640[11] = Function_457("", "mcr", Global_30628[0], Local_4.f_672, 6, 20, 1, 0, 0, 1);
	Global_30707[7] = Function_457("", "lun", Global_30633[1], Local_4.f_588, 6, 80, 0, 0, 0, 0);
	Global_30668[6] = Function_457("", "mes", Global_30628[2], Local_4.f_632, 6, 46, 1, 0, 0, 1);
	Global_30723[9] = Function_457("", "mtf", Global_30637[1], Local_4.f_804, 6, 93, 0, 0, 0, 0);
	Global_30723[3] = Function_457("", "nek", Global_30637[1], Local_4.f_664, 6, 87, 1, 0, 0, 0);
	Global_30640[12] = Function_457("", "odd", Global_30628[0], Local_4.f_668, 6, 21, 0, 0, 0, 0);
	Global_30668[8] = Function_457("", "bac", Global_30628[2], Local_4.f_572, 6, 48, 0, 0, 0, 1);
	Global_30685[5] = Function_457("", "plt", Global_30633[0], Local_4.f_620, 6, 58, 1, 0, 0, 0);
	Global_30640[10] = Function_457("", "ple", Global_30628[0], Local_4.f_676, 6, 19, 0, 0, 0, 0);
	Global_30693[9] = Function_457("", "pri", Global_30633[2], Local_4.f_740, 6, 69, 1, 1, 0, 1);
	Global_30685[6] = Function_457("", "pch", Global_30633[0], Local_4.f_796, 6, 59, 0, 0, 0, 0);
	Global_30693[6] = Function_457("", "ram", Global_30633[2], Local_4.f_556, 6, 66, 0, 1, 0, 0);
	Global_30640[7] = Function_457("", "rtl", Global_30628[0], Local_4.f_520, 6, 16, 1, 0, 0, 0);
	Global_30679[3] = Function_457("", "rep", Global_30628[3], Local_4.f_548, 6, 38, 1, 0, 0, 0);
	Global_30640[3] = Function_457("", "bat", Global_30628[0], Local_4.f_504, 6, 13, 0, 0, 0, 1);
	Global_30693[4] = Function_457("", "sep", Global_30633[2], Local_4.f_596, 6, 64, 1, 1, 0, 0);
	Global_30685[3] = Function_457("", "sid", Global_30633[0], Local_4.f_460, 6, 56, 0, 1, 0, 0);
	Global_30707[6] = Function_457("", "sms", Global_30633[1], Local_4.f_592, 6, 79, 0, 0, 0, 0);
	if (!IS_PS3())
	{
		if (Function_456())
		{
			Global_30658[2] = Function_457("$/content/Frontier/Gaptooth_Ridge/Solomons_Folly/SolomonsFolly", "sol", Global_30628[1], Local_4.f_68, 5, 28, 0, 0, 0, 0);
		}
		else
		{
			Global_30658[2] = Function_457("", "sol", Global_30628[1], Local_4.f_68, 6, 28, 0, 0, 0, 1);
		}
	}
	Global_30668[7] = Function_457("", "stl", Global_30628[2], Local_4.f_636, 6, 47, 0, 1, 1, 1);
	Global_30723[4] = Function_457("", "tnr", Global_30637[1], Local_4.f_660, 6, 88, 1, 0, 0, 1);
	Global_30723[8] = Function_457("", "tns", Global_30637[1], Local_4.f_800, 6, 92, 0, 0, 0, 0);
	Global_30640[14] = Function_457("", "tcr", Global_30628[0], Local_4.f_716, 6, 23, 0, 0, 0, 1);
	Global_30717[3] = Function_457("", "ser", Global_30637[0], Local_4.f_652, 6, 96, 0, 0, 0, 1);
	if (Global_34165.f_44)
	{
		if (Function_523(64))
		{
			Global_30717[2] = Function_457("$/content/DLC/MPModePack/Hunting/brokenWildernessAA", "brk", Global_30637[0], Local_4.f_648, 7, 97, 0, 0, 0, 0);
			Global_30640[15] = Function_457("$/content/DLC/MPModePack/ActionAreas/CRI/CRI", "cri", Global_30628[0], Local_4.f_776, 7, 24, 0, 1, 0, 0);
			Global_30685[4] = Function_457("$/content/DLC/MPModePack/ActionAreas/CRK/CRK", "crk", Global_30633[0], Local_4.f_628, 7, 57, 0, 1, 0, 0);
			Global_30658[5] = Function_457("$/content/DLC/MPModePack/ActionAreas/CUE/CuevaSeca", "cue", Global_30628[1], Local_4.f_532, 7, 71, 1, 1, 0, 1);
			Global_30640[13] = Function_457("$/content/DLC/MPModePack/Hunting/rioWildernessAA", "lob", Global_30628[0], Local_4.f_608, 7, 22, 1, 0, 0, 1);
			Global_30707[4] = Function_457("$/content/DLC/MPModePack/Hunting/bobcatWildernessAA", "roc", Global_30633[1], Local_4.f_580, 7, 77, 0, 0, 0, 0);
			Global_30658[6] = Function_457("$/content/DLC/MPModePack/ActionAreas/SCR/SCR", "scr", Global_30628[1], Local_4.f_540, 7, 32, 0, 0, 0, 1);
			Global_30658[7] = Function_457("$/content/DLC/MPModePack/Hunting/steadWildernessAA", "sil", Global_30628[1], Local_4.f_688, 7, 33, 1, 0, 0, 1);
			Global_30640[16] = Function_457("$/content/DLC/MPModePack/ActionAreas/VEN/VEN", "ven", Global_30628[0], Local_4.f_784, 7, 25, 0, 1, 0, 0);
			Global_30693[11] = Function_457("$/content/DLC/MPModePack/ActionAreas/RNP/RanchoPolvo", "rnp", Global_30633[2], Local_4.f_748, 7, 71, 1, 1, 0, 1);
			Global_30668[9] = Function_457("$/content/DLC/MPModePack/ActionAreas/WAR/WarthingtonRanch", "war", Global_30628[2], Local_4.f_812, 7, 71, 1, 1, 0, 1);
		}
		else
		{
			Global_30717[2] = Function_457("$/content/Multiplayer/Action_Areas/GenericMP_AA", "brk", Global_30637[0], Local_4.f_648, 7, 97, 0, 0, 0, 0);
			Global_30640[15] = Function_457("$/content/Multiplayer/Action_Areas/GenericMP_AA", "cri", Global_30628[0], Local_4.f_776, 7, 24, 0, 1, 0, 0);
			Global_30685[4] = Function_457("$/content/Multiplayer/Action_Areas/GenericMP_AA", "crk", Global_30633[0], Local_4.f_628, 7, 57, 0, 1, 0, 0);
			Global_30658[5] = Function_457("$/content/Multiplayer/Action_Areas/GenericMP_AA", "cue", Global_30628[1], Local_4.f_532, 7, 71, 1, 1, 0, 1);
			Global_30640[13] = Function_457("$/content/Multiplayer/Action_Areas/GenericMP_AA", "lob", Global_30628[0], Local_4.f_608, 7, 22, 1, 0, 0, 1);
			Global_30707[4] = Function_457("$/content/Multiplayer/Action_Areas/GenericMP_AA", "roc", Global_30633[1], Local_4.f_580, 7, 77, 0, 0, 0, 0);
			Global_30658[6] = Function_457("$/content/Multiplayer/Action_Areas/GenericMP_AA", "scr", Global_30628[1], Local_4.f_540, 7, 32, 0, 0, 0, 1);
			Global_30658[7] = Function_457("$/content/Multiplayer/Action_Areas/GenericMP_AA", "sil", Global_30628[1], Local_4.f_688, 7, 33, 1, 0, 0, 1);
			Global_30640[16] = Function_457("$/content/Multiplayer/Action_Areas/GenericMP_AA", "ven", Global_30628[0], Local_4.f_784, 7, 25, 0, 1, 0, 0);
			Global_30693[11] = Function_457("$/content/Multiplayer/Action_Areas/GenericMP_AA", "rnp", Global_30633[2], Local_4.f_748, 7, 71, 1, 1, 0, 1);
			Global_30668[9] = Function_457("$/content/Multiplayer/Action_Areas/GenericMP_AA", "war", Global_30628[2], Local_4.f_812, 7, 71, 1, 1, 0, 1);
		}
	}
	else
	{
		Global_30717[2] = Function_457("", "brk", Global_30637[0], Local_4.f_644, 6, 97, 0, 0, 0, 0);
		Global_30640[15] = Function_457("", "cri", Global_30628[0], Local_4.f_772, 6, 24, 0, 1, 0, 0);
		Global_30685[4] = Function_457("", "crk", Global_30633[0], Local_4.f_624, 6, 57, 0, 1, 0, 0);
		Global_30658[5] = Function_457("", "cue", Global_30628[1], Local_4.f_528, 6, 31, 0, 0, 0, 0);
		Global_30640[13] = Function_457("", "lob", Global_30628[0], Local_4.f_604, 6, 22, 1, 0, 0, 1);
		Global_30707[4] = Function_457("", "roc", Global_30633[1], Local_4.f_576, 6, 77, 0, 0, 0, 0);
		Global_30658[6] = Function_457("", "scr", Global_30628[1], Local_4.f_536, 6, 32, 0, 0, 0, 1);
		Global_30658[7] = Function_457("", "sil", Global_30628[1], Local_4.f_684, 6, 33, 1, 0, 0, 1);
		Global_30640[16] = Function_457("", "ven", Global_30628[0], Local_4.f_780, 6, 25, 0, 1, 0, 0);
		Global_30693[11] = Function_457("", "rnp", Global_30633[2], Local_4.f_744, 6, 71, 1, 1, 0, 1);
		Global_30668[9] = Function_457("", "war", Global_30628[2], Local_4.f_808, 6, 49, 0, 0, 0, 0);
	}
	Function_455();
	SET_FLOCK_DEFAULT_POPULATION_MAX_PER_CELL(1);
	SET_INDIVIDUAL_DEFAULT_POPULATION_MAX_PER_CELL(15);
	if (!Global_34165.f_44)
	{
		Global_30734 = Function_539(0, Global_30640[2], 3);
		Global_30735 = Function_539(0, Global_30658[2], 3);
		Global_30736 = Function_539(0, Global_30668[2], 3);
		Global_30737 = Function_539(0, Global_30658[0], 3);
		Global_30738 = Function_539(0, Global_30658[3], 3);
		Global_30739 = Function_539(0, Global_30679[1], 3);
		Global_30740 = Function_539(0, Global_30685[1], 3);
		Global_30741 = Function_539(0, Global_30685[2], 3);
		Function_454(Global_13172[Global_3073411].f_36);
		PRINTNL();
		Function_454(Global_13172[Global_3073611].f_36);
		PRINTNL();
		Function_454(Global_13172[Global_3073711].f_36);
		PRINTNL();
		Function_454(Global_13172[Global_3073811].f_36);
		PRINTNL();
		Function_454(Global_13172[Global_3073911].f_36);
		PRINTNL();
		Function_454(Global_13172[Global_3074011].f_36);
		PRINTNL();
		Function_454(Global_13172[Global_3074111].f_36);
		PRINTNL();
		Function_454(Global_13172[Global_3073511].f_36);
		PRINTNL();
		Function_453();
		WAIT(0);
		Function_452();
		WAIT(0);
		Function_450(0, Global_30668[0], -819.6454f, 93.80083f, 2436.405f);
		Function_450(1, Global_30685[0], -4355.349f, 30.16f, 4384.089f);
		Function_449(&(Global_29008[Global_30621[0]]), 1024);
		Function_449(&(Global_29008[Global_30621[1]]), 1024);
		Function_449(&(Global_29008[Global_30621[2]]), 1024);
		Function_449(&(Global_29008[Global_30621[3]]), 1024);
		fLocal_266 = 0.0f;
		while (!Global_3374)
		{
			WAIT(0);
		}
		if (!Global_3365)
		{
			if (!Global_34165.f_28 && !Global_3421)
			{
				Function_427(Function_448(1), 0, 1, 1, 0);
				Function_427(Function_448(2), 0, 1, 1, 0);
				Function_426(&Global_76846, 2);
				Function_426(&Global_76846, 4);
			}
		}
		else if (Global_3364)
		{
			Global_30619 = 0;
		}
		if (Global_3364 && Global_3365)
		{
			Function_425();
		}
		if (Function_424())
		{
			if (!Function_423(11, 18))
			{
				if (!iLocal_273)
				{
					iVar115 = 0;
					while (iVar115 <= Global_29008)
					{
						if (StackVal && StackVal == 1 == 0)
						{
							bVar116 = (Global_29155[iVar11510].f_36 - 5);
							iVar117 = 8;
							while (bVar116 >= 30)
							{
								bVar116 = (bVar116 - 31);
								iVar117++;
							}
							if (iVar117 < 10)
							{
								if (Function_423(iVar117, bVar116))
								{
									if (!Function_422(&(Global_29008[iVar115]), 4096))
									{
										Function_421(&(Global_29008[iVar115]), 4096);
										iLocal_274 = 1;
									}
								}
								else if (Function_422(&(Global_29008[iVar115]), 4096))
								{
									Function_449(&(Global_29008[iVar115]), 4096);
									iLocal_274 = 1;
								}
							}
							else if (iVar115 == Global_30717[4])
							{
								if (Function_423(7, 30))
								{
									if (!Function_422(&(Global_29008[iVar115]), 4096))
									{
										Function_421(&(Global_29008[iVar115]), 4096);
										iLocal_274 = 1;
									}
								}
								else if (Function_422(&(Global_29008[iVar115]), 4096))
								{
									Function_449(&(Global_29008[iVar115]), 4096);
									iLocal_274 = 1;
								}
							}
						}
						iVar115++;
					}
					if (iLocal_274)
					{
						Global_34581[473] = 0.0f;
						Global_34581[474] = 0.0f;
						Global_34581[475] = 0.0f;
						Global_34581[476] = 0.0f;
						iVar115 = 0;
						while (iVar115 <= Global_29008)
						{
							if (StackVal && StackVal == 1 == 0)
							{
								if (Function_422(&(Global_29008[iVar115]), 4096))
								{
									Function_420(473, 1, 0, 0);
									iVar118 = Function_419(iVar115);
									if (iVar118 == Global_30621[0])
									{
										Function_420(474, 1, 0, 0);
									}
									else if (iVar118 == Global_30621[1])
									{
										Function_420(475, 1, 0, 0);
									}
									else if (iVar118 == Global_30621[2])
									{
										Function_420(476, 1, 0, 0);
									}
								}
							}
							iVar115++;
						}
					}
					iLocal_273 = 1;
				}
				if (!iLocal_275)
				{
					bVar120 = false;
					bVar121 = false;
					bVar122 = false;
					bVar119 = false;
					while (bVar119 <= 20)
					{
						iVar115 = Function_418(bVar119);
						iVar123 = Function_539(iVar115, 0, 2);
						if (Function_423(4, bVar119))
						{
							if (Function_417(iVar123) == 0)
							{
								Function_416(iVar123, 1);
								iLocal_276 = 1;
							}
							if (bVar119 <= 8)
							{
								bVar120++;
							}
							else if (bVar119 <= 16)
							{
								bVar121++;
							}
							else
							{
								bVar122++;
							}
						}
						else if (Function_417(iVar123) >= 0)
						{
							Function_416(iVar123, 0);
							iLocal_276 = 1;
						}
						bVar119++;
					}
					if (iLocal_276)
					{
						Function_521(363, bVar120, 0);
						Function_521(364, bVar121, 0);
						Function_521(365, bVar122, 0);
					}
					iLocal_275 = 1;
				}
				if (iLocal_276 || iLocal_274)
				{
					Function_407();
					iLocal_276 = 0;
					iLocal_274 = 0;
				}
				if (iLocal_273 && iLocal_275)
				{
					Function_406(11, 18);
					iLocal_273 = 0;
					iLocal_275 = 0;
				}
			}
		}
	}
	Global_30840 = 0;
	if (Global_34165.f_44)
	{
		Function_388();
	}
	UI_INCLUDE("LbCat_DLC5");
	if (UI_GET_NUM_CHILDREN("LB_DLC5_Tabs") <= 1)
	{
		UI_ADD_CHILD("LB_DLC5_Tabs", "rdrNetStatTab");
		UI_SET_DATA("", "tableID", "144");
		UI_ADD_CHILD("LB_DLC5_Tabs", "rdrNetStatTab");
		UI_SET_DATA("", "tableID", "145");
		UI_ADD_CHILD("LB_DLC5_Tabs", "rdrNetStatTab");
		UI_SET_DATA("", "tableID", "146");
		UI_ADD_CHILD("LB_DLC5_Tabs", "rdrNetStatTab");
		UI_SET_DATA("", "tableID", "147");
	}
	DLC_INIT_CONTENT();
	Function_383();
	Function_382();
	Function_381();
	Function_380();
	Function_379();
	Global_30938 = 0;
	Function_378("");
	if (!Global_34165.f_44)
	{
		Function_376(33039);
		Function_375(1178687);
		Function_556(0x4218003f);
		Function_556(258048);
		Function_374(0xc400000);
		Function_373(0);
		Function_372();
		Function_371();
		SET_ALL_DOOR_LOCKS_VISIBLE(0);
		if (Global_3419)
		{
			Function_370(256);
			Function_538(8192);
			Function_538(1048576);
		}
		if (Global_3421)
		{
			Function_370(256);
			Function_538(1056768);
		}
		if (Global_3365)
		{
			if (Function_369(StackVal, StackVal, Global_30938))
			{
				bLocal_259 = false;
			}
			if (!Function_368(1, 0) || !Function_368(2, 0))
			{
				bLocal_259 = false;
			}
			if (Function_368(47, 0) && !Function_368(48, 0))
			{
				bLocal_259 = false;
			}
		}
		if (Global_3364)
		{
			if (Function_546("missionStart"))
			{
				Global_30938.f_4 = Function_544("missionStart");
				PRINTINT(StackVal);
				PRINTNL();
			}
			if (Function_546("missionStartChapter"))
			{
				Global_30938.f_8 = Function_544("missionStartChapter");
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
				bLocal_259 = false;
				Global_30938 = 1;
			}
		}
		if (Function_546("nnoIdleCam") || Global_3419)
		{
			Function_538(4096);
		}
		SET_AMBIENT_ACTOR_SPEED_SCALE_RANGE(0.8f, 1.35f);
		SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
		ENABLE_AMBIENT_SPAWNING(Function_367(1));
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
		if (Function_546("startAmbientWorldOff"))
		{
			Function_538(128543);
			Function_374(15);
			Function_556(256);
			Function_366(&Global_28842, 1);
		}
		if (Global_3364)
		{
			Function_363(0);
		}
	}
	else
	{
		Function_359();
		Function_358();
		Function_357();
		if (Var0.f_16)
		{
			Var0 = 4294967295;
			Var0.f_16 = 0;
			Var0.f_20 = 0;
			Var0.f_24 = 0;
			STORE_GAME_STATE(&Var0, 44, 1);
		}
		Function_370(33081);
		Function_376(22);
		SET_ALL_DOOR_LOCKS_VISIBLE(1);
		Function_375(41);
		Function_538(31254);
		Function_556(139303);
		Function_556(118808);
		Function_374(524288);
		Function_374(0xc400000);
		Function_373(0);
		Function_372();
		Function_371();
		ENABLE_AMBIENT_SPAWNING(false);
		LAUNCH_NEW_SCRIPT("multiplayer/multiplayer_update_thread", 0);
	}
	Global_30922 = 4294967295;
	Global_3389 = 1;
	UI_SET_STRING("LOCAL_PLAYER_GAMERTAG", NET_GET_LOCAL_GAMER_NAME());
	fLocal_266 = 0.0f;
	Function_355();
	ITERATE_IN_LAYOUT(Global_26118, GET_AMBIENT_LAYOUT());
	Function_350();
	Function_349();
	SET_PAUSE_SCRIPT("$/content/scripting/DesignerDefined/Pause");
	Global_63400 = MAKE_TIME_OF_DAY(5, false, 0);
	Global_63401 = MAKE_TIME_OF_DAY(7, false, 0);
	Global_63402 = MAKE_TIME_OF_DAY(11, false, 0);
	Global_63403 = MAKE_TIME_OF_DAY(14, false, 0);
	Global_63404 = MAKE_TIME_OF_DAY(18, false, 0);
	Global_63405 = MAKE_TIME_OF_DAY(22, false, 0);
	Global_63398 = 30.0f;
	SET_TIME_ACCELERATION(Global_63398);
	LIGHTS_SET_ON_TIME(17, 30);
	LIGHTS_SET_OFF_TIME(6, 0);
	SET_DUST_LEVEL_MID(1);
	SET_DUST_LEVEL_FAR(1);
	if (Global_3420)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(2, 12, 0, 0));
		Function_347(&Global_16524, 0);
	}
	else if (Global_3421)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(2, 12, 0, 0));
		Function_347(&Global_16524, 0);
	}
	else if (Global_34165.f_44)
	{
		if (NET_IS_SESSION_HOST() || !NET_IS_IN_SESSION())
		{
			SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(1, 7, 0, 0));
			Function_347(&Global_16524, 0);
		}
	}
	else if (Global_3364 && Global_3365)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(1, 10, 0, 0));
		Function_347(&Global_16524, 1);
		Function_346(&Global_16517, RAND_FLOAT_GAUSSIAN(0.3f, 0.15f), RAND_FLOAT_RANGE(0.0f, 360.0f));
	}
	else if (Global_3364)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY_EX(1, 7, 0, 0));
		iVar124 = 0;
		iVar125 = RAND_INT_RANGE(false, 10000);
		if (iVar125 <= 250)
		{
			iVar124 = 4;
		}
		else if (iVar125 <= 500)
		{
			iVar124 = 3;
		}
		else if (iVar125 <= 3000)
		{
			iVar124 = 2;
		}
		else if (iVar125 <= 6000)
		{
			iVar124 = 1;
		}
		if (Global_3365)
		{
			iVar124 = 0;
		}
		Function_347(&Global_16524, iVar124);
		Function_346(&Global_16517, RAND_FLOAT_GAUSSIAN(0.3f, 0.15f), RAND_FLOAT_RANGE(0.0f, 360.0f));
	}
	else
	{
		SET_TIME_OF_DAY(Global_34165.f_52);
		Function_344();
		Function_347(&Global_16524, Global_16524);
	}
	if (Function_343(Global_34165.f_24) && !Global_34165.f_44)
	{
		Global_29005 = Global_34165.f_24;
		Function_341(Global_34165.f_24, 0);
	}
	if (Global_3365 && !Global_34165.f_44)
	{
		Function_339();
		Function_337();
		Function_335();
		Function_329();
		Function_319(1);
	}
	if (bLocal_259 && !Global_34165.f_44)
	{
		SET_AMBIENT_FORCE_WAIT_STATE(0);
		Function_310(&iLocal_263, &fLocal_266, 0, 1);
		WAIT(0);
		fLocal_266 = 0.0f;
		while (Global_30839 >= 0)
		{
			WAIT(0);
		}
		fLocal_266 = 0.0f;
		while (!IS_LAYOUTREF_VALID(Global_30616))
		{
			Function_310(&iLocal_263, &fLocal_266, 0, 1);
			WAIT(0);
		}
		fLocal_266 = 0.0f;
		while (StackVal && Function_309(DECOR_GET_INT(Global_30616, "regid")) != 2)
		{
			WAIT(0);
		}
		Function_308();
	}
	if (!Function_523(64) && !Function_523(2048))
	{
		Function_306();
	}
	if (Global_3421)
	{
		SET_WEAPONENUM_LOCKED(4, 0);
		SET_WEAPONENUM_LOCKED(5, 0);
		SET_WEAPONENUM_LOCKED(8, 0);
		SET_WEAPONENUM_LOCKED(9, 0);
		SET_WEAPONENUM_LOCKED(16, 0);
		Function_538(1163264);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 4, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 8, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 5, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 9, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 16, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 22, 0.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 21, 0.0f, 0, 1);
		ADD_ITEM(Function_305(3), Global_34573, 0);
		ADD_ITEM(Function_305(3), Global_34573, 0);
		ADD_ITEM(Function_305(3), Global_34573, 0);
		ADD_ITEM(Function_305(15), Global_34573, 0);
		ADD_ITEM(Function_305(19), Global_34573, 0);
		ADD_ITEM(Function_305(20), Global_34573, 0);
		Function_304();
		Function_303(200, 0);
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
			Function_302();
		}
		else
		{
			GIVE_WEAPON_TO_ACTOR(Global_34573, 4, 0.0f, 0, 1);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 8, 0.0f, 0, 1);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 21, 0.0f, 0, 1);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 22, 0.0f, 0, 1);
			ADD_ITEM(Function_305(3), Global_34573, 0);
			ADD_ITEM(Function_305(3), Global_34573, 0);
			ADD_ITEM(Function_305(3), Global_34573, 0);
			ADD_ITEM(Function_305(15), Global_34573, 0);
			ADD_ITEM(Function_305(19), Global_34573, 0);
			ADD_ITEM(Function_305(20), Global_34573, 0);
			Function_304();
			Function_303(200, 0);
			ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
		}
	}
	else if (Global_3381 && !Global_34165.f_44)
	{
		if (!Global_34165.f_28)
		{
			Function_302();
		}
		_ADD_AMMO_OF_TYPE(Global_34573, 7, 24.0f, 1, 0);
		ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
	}
	if (!Global_3364 && !Global_34165.f_32)
	{
		Function_301();
	}
	else
	{
		Global_34165.f_112 = 4294967295;
	}
	if (bLocal_259)
	{
		fLocal_266 = 0.0f;
		while (!STREAMING_IS_WORLD_LOADED() || (!Function_551() && !Global_3374))
		{
			WAIT(0);
		}
	}
	Global_49308 = GET_CURRENT_GAME_TIME();
	if (Var0.f_16)
	{
		bLocal_259 = false;
		Global_3381 = 1;
		Global_6267 = Var0;
		Global_3422[Var040].f_112 = 1;
		switch (Function_300(Var0))
		{
			case 0x00000001:
				if (Var0 > 36)
				{
					LAUNCH_NEW_SCRIPT("content/Ambient/MexicanRevolution/mexrev_phase1b", 0);
				}
				Function_427(Function_539(0, 24, 1), 0, 1, 1, 0);
				break;
			
			case 0x00000002:
				LAUNCH_NEW_SCRIPT("content/Ambient/MexicanRevolution/mexrev_phase3", 0);
				Function_427(Function_539(0, 24, 1), 0, 1, 1, 0);
				Function_427(Function_539(1, 41, 1), 0, 1, 1, 0);
				break;
			
			case 0x00000003:
				LAUNCH_NEW_SCRIPT("content/Ambient/MexicanRevolution/mexrev_phase3", 0);
				Function_427(Function_539(0, 24, 1), 0, 1, 1, 0);
				Function_427(Function_539(1, 41, 1), 0, 1, 1, 0);
				Function_427(Function_539(2, 48, 1), 0, 1, 1, 0);
				break;
			
			default:
				break;
		}
	}
	else
	{
		if (Function_299(Var0) && !Var0 != 4294967295)
		{
			Global_13172[StackVal + 111].f_8 = StackVal;
			if (Var0.f_24)
			{
				Global_13172[Global_13172[StackVal11].f_12 + 111].f_12 = StackVal;
				if (!Var0.f_20)
				{
					Function_292(&Var0);
					Function_291(4294967295, 0);
					Function_290();
					Function_284(1);
					Function_283(1, 4);
				}
			}
			Var0 = 4294967295;
			Var0.f_16 = 0;
			Var0.f_20 = 0;
			Var0.f_24 = 0;
			STORE_GAME_STATE(&Var0, 44, 1);
		}
		Global_3381 = 0;
	}
	if (bLocal_259)
	{
		if (Global_34165.f_44)
		{
		}
		else
		{
			fLocal_266 = 0.0f;
			while (!Function_281())
			{
				WAIT(0);
			}
			if (Global_12976.f_164 != 0)
			{
				Function_276(Global_12976.f_164, 0, 1);
				Global_12976.f_164 = 0;
			}
			if (Global_12976.f_160 != 0)
			{
				Function_267(Global_12976.f_160, 0, 1);
				Global_12976.f_160 = 0;
			}
			if (!bLocal_270)
			{
				STREAMING_RELEASE_MAIN_POI();
				HUD_FADE_IN_NOW(2.0f, 1065353216);
				CAMERA_RESET(0);
				if (Function_522(468) > 2 && Function_368(4, 0))
				{
					Global_25986[11] = 0;
				}
			}
		}
	}
	Global_3391 = 0;
	if (Function_551())
	{
		if (Function_523(64))
		{
			UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_522(599));
			UI_SET_STRING("nMPDollars", I2STR(Function_522(599)));
			if (NET_GET_PLAYMODE() == 0)
			{
				UI_SET_STRING("MPBalance2", UI_GET_STRING("nMPBalance"));
			}
		}
		else
		{
			UI_SET_STRING("Dmoney_amount", "");
		}
	}
	else
	{
		UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_522(0));
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
		Function_558(2);
		if (!Global_34165.f_44)
		{
			Function_284(1);
		}
		else
		{
			SAVE_SOFT_SAVE(2);
		}
	}
	if (GET_USER_DEFINED_WAYPOINT(&vVar126))
	{
		vVar126.f_4 = 25.0f;
		if (!Function_243(StackVal, StackVal, vVar126, 0.0f, 0.0f, 0.0f))
		{
			Function_241(StackVal, StackVal, vVar126);
		}
	}
	Global_3416 = 4294967295;
	Global_3412 = 0;
	Function_240(1);
	Function_237();
	Global_3364 = 0;
	Global_3366 = 1;
	iLocal_263 = 0;
	iLocal_265 = 0;
	iVar129 = 0;
	iVar130 = 0;
	Global_26281 = GET_CURRENT_GAME_TIME();
	Global_76852 = 300;
	iVar131 = 0;
	if (!IS_LAUNCH_RETAIL() && !Function_551())
	{
		Function_235("no_autosave", 0x41200000, 1, 0, 2, 1, 0);
	}
	WAIT(0);
	if (((StackVal || StackVal != 3 != 4) || Global_3381) && bLocal_259)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (Global_3421 && bLocal_259)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	SET_PLAYER_CONTROL_RUMBLE(0, 1);
	SCRIPT_DONE_LOADING();
	switch (iLocal_262)
	{
		case 0x00000000:
			PRINTSTRING("Launching soak test.");
			LAUNCH_NEW_SCRIPT("systemTest/SoakTests/soaktest", 0);
			break;
	}
	if (!Function_234())
	{
		Function_233(IS_GOLDEN_GUNS_ON());
	}
	while (!IS_EXITFLAG_SET())
	{
		if (bLocal_269)
		{
			PRINTSTRING("Time for Exec:");
			PRINTINT(iLocal_265);
			PRINTSTRING(":");
			fVar132 = GET_PROFILE_TIME();
		}
		switch (iLocal_265)
		{
			case 0x00000000:
				if (Function_310(&iLocal_263, &fLocal_266, 1, 0))
				{
					iLocal_263 = 0;
					iLocal_265 = 1;
				}
				iVar130++;
				iVar129 = 0;
				break;
			
			case 0x00000001:
				Function_232();
				iLocal_265 = 2;
				iVar130++;
				iVar129 = 0;
				break;
			
			case 0x00000002:
				if (Global_3376)
				{
					iLocal_264 = 0;
					iLocal_265 = 1;
					Global_3376 = 0;
				}
				else if (Function_223(&iLocal_264))
				{
					iLocal_265 = 3;
					iLocal_264 = 0;
				}
				iVar130++;
				iVar129 = 0;
				break;
			
			case 0x00000003:
				if (Function_222(1, 2) == 0)
				{
					if (Global_3380)
					{
						Global_3380 = 0;
						CLEAR_PRINTED_OBJECTIVE();
						Function_221();
					}
				}
				if (Function_222(2, 2) != 0 && Function_222(2, 1) != 0)
				{
					if (Global_3382)
					{
						CLEAR_PRINTED_OBJECTIVE();
						Global_3382 = 0;
					}
				}
				if (Function_222(4, 2) == 0)
				{
					if (Global_3384)
					{
						CLEAR_PRINTED_OBJECTIVE();
						Global_3384 = 0;
					}
				}
				if (Function_222(6, 2) == 0)
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
				if (Function_222(3, 2) == 0)
				{
					if (Global_3385)
					{
						CLEAR_PRINTED_OBJECTIVE();
						Global_3385 = 0;
					}
				}
				iVar130++;
				iVar129 = 0;
				iLocal_265 = 4;
				break;
			
			case 0x00000004:
				Global_63399 = Function_220();
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
								if (Global_29004 == 1 || Function_219())
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
								SET_UNIVERSAL_VISION_RANGE_MULTIPLIER(0.85f);
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
				iVar130++;
				iVar129 = 0;
				iLocal_265 = 5;
				break;
			
			case 0x00000005:
				Function_100();
				Function_92();
				Function_83(&iLocal_267, &uLocal_268);
				Function_80();
				Function_27();
				if (!Function_26())
				{
					if (((((!Global_3380 && !HUD_IS_FADED()) && !HUD_IS_FADING()) && !Global_3395) && !Global_3381) && !Global_3396)
					{
						if (Global_12976.f_164 != 0)
						{
							Function_276(Global_12976.f_164, 1, 1);
							Global_12976.f_164 = 0;
						}
						if (Global_12976.f_160 != 0)
						{
							Function_267(Global_12976.f_160, 1, 1);
							Global_12976.f_160 = 0;
						}
					}
					if (Global_29003 > 3)
					{
						if (!Function_510((*&Global_12976 + 168)[2], 1))
						{
							if (Function_368(48, 0))
							{
								Function_406(2, 0);
							}
						}
						if (!Function_510((*&Global_12976 + 168)[2], 2))
						{
							if (Function_368(49, 0))
							{
								Function_406(2, 1);
							}
						}
						if (!Function_510((*&Global_12976 + 168)[2], 4))
						{
							if (Function_368(50, 0))
							{
								Function_406(2, 2);
							}
						}
						if (!Function_510((*&Global_12976 + 168)[2], 8))
						{
							if (Function_368(51, 0))
							{
								Function_406(2, 3);
							}
						}
						if (!Function_510((*&Global_12976 + 168)[2], 16))
						{
							if (Function_368(52, 0))
							{
								Function_406(2, 4);
							}
						}
						if (!Function_510((*&Global_12976 + 168)[2], 32))
						{
							if (Function_368(53, 0))
							{
								Function_406(2, 5);
							}
						}
						if (!Function_510((*&Global_12976 + 168)[2], 64))
						{
							if (Function_368(54, 0))
							{
								Function_406(2, 6);
							}
						}
						if (!Function_510((*&Global_12976 + 168)[2], 128))
						{
							if (Function_368(55, 0))
							{
								Function_406(2, 7);
							}
						}
						if (!Function_510((*&Global_12976 + 168)[2], 256))
						{
							if (Function_368(56, 0))
							{
								Function_406(2, 8);
							}
						}
						if (!Function_510((*&Global_12976 + 168)[2], 512))
						{
							if (Function_368(57, 0))
							{
								Function_406(2, 9);
							}
						}
						if (!Function_510((*&Global_12976 + 168)[2], 0x1000000))
						{
							if (Function_23(10))
							{
								Function_406(2, 24);
							}
						}
						if (!Function_510((*&Global_12976 + 168)[2], 0x4000000))
						{
							if (Function_23(15))
							{
								Function_406(2, 26);
							}
						}
						if (!Function_510((*&Global_12976 + 168)[7], 0x40000000))
						{
							if (Function_22(Global_30717[4]))
							{
								Function_406(7, 30);
							}
						}
					}
					if (IntToFloat(Function_522(474)) < Function_21(474))
					{
						Function_420(476, 1, 0, 0);
						Function_8(474, 1, 0);
					}
					if (IntToFloat(Function_522(476)) < Function_21(476))
					{
						Function_420(475, 1, 0, 0);
						Function_8(476, 1, 0);
					}
					if (IntToFloat(Function_522(475)) < Function_21(475))
					{
						Function_420(474, 1, 0, 0);
						Function_8(475, 1, 0);
					}
					if (Function_522(363) >= 8)
					{
						Function_420(365, 1, 0, 0);
						Function_8(363, 1, 0);
					}
					if (Function_522(365) >= 4)
					{
						Function_420(364, 1, 0, 0);
						Function_8(365, 1, 0);
					}
					if (Function_522(364) >= 8)
					{
						Function_420(363, 1, 0, 0);
						Function_8(364, 1, 0);
					}
				}
				if (Global_30841)
				{
					PREVENT_DESPAWN_CLEAR();
					Global_30841 = 0;
				}
				if (!iLocal_271)
				{
					if (NET_ARE_UNLOCKS_READY())
					{
						if (NET_IS_UNLOCKED(11))
						{
							Global_3362 = (Global_3362 + 1.0f);
						}
						iLocal_271 = 1;
					}
				}
				iVar129 = (1000 - iVar130 * 33);
				iVar130 = 0;
				iLocal_265 = 0;
				break;
		}
		if (bLocal_269)
		{
			PRINTFLOAT((GET_PROFILE_TIME() - fVar132));
			PRINTNL();
		}
		WAIT(iVar129);
	}
	Function_4(&bVar71);
	Function_3();
	if (!HUD_IS_FADED())
	{
		HUD_FADE_OUT(0.5f, 1f, 1);
	}
	Function_2();
	Function_1();
	Function_357();
	Function_358();
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

void Function_1() //Position: 0x47F8 / 18424
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

void Function_2() //Position: 0x4829 / 18473
{
	Function_4(&Local_4 + 4);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_3() //Position: 0x483B / 18491
{
	ANIMAL_SPECIES_GRINGO_CLEAR_ALL();
	return;
}

void Function_4(int iParam0) //Position: 0x4844 / 18500
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

void Function_5(var uParam0, int iParam1) //Position: 0x486A / 18538
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

void Function_6(var uParam0, int iParam1) //Position: 0x4998 / 18840
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_7(var uParam0, int iParam1) //Position: 0x49B2 / 18866
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_8(int iParam0, bool bParam1, bool bParam2) //Position: 0x49CF / 18895
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
	Function_20(iParam0);
	if (bParam2 && bParam1 == 0)
	{
		Function_9(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

void Function_9(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x4BCA / 19402
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_21(390))), 32);
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
					fVar19 = (Function_19(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_19(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_17(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_14(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_12(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_11(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_10(), &Var9);
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

int Function_10() //Position: 0x51F7 / 20983
{
	int iVar0;
	
	return iVar0;
}

var Function_11(int iParam0) //Position: 0x51FF / 20991
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_12(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x5210 / 21008
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_13(char* cParam0, char* cParam1) //Position: 0x5305 / 21253
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_14(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x531E / 21278
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_16(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_15(Function_16(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_15(int iParam0, int iParam1) //Position: 0x5383 / 21379
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_16(int iParam0, int iParam1) //Position: 0x5395 / 21397
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_17(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x53A7 / 21415
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
	if (((Function_18(iParam0) != 19 || Function_18(iParam0) != 17) || Function_18(iParam0) != 10) || Function_18(iParam0) != 9)
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

int Function_18(int iParam0) //Position: 0x54D7 / 21719
{
	return Global_35278[iParam020].f_48;
}

float Function_19(int iParam0) //Position: 0x54E6 / 21734
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_20(int iParam0) //Position: 0x551F / 21791
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

float Function_21(int iParam0) //Position: 0x56B9 / 22201
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

bool Function_22(int iParam0) //Position: 0x56F6 / 22262
{
	if (!Function_343(iParam0))
	{
		return 0;
	}
	return Function_422(&(Global_29008[iParam0]), 4096);
}

bool Function_23(int iParam0) //Position: 0x5714 / 22292
{
	if (!Function_25(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_24(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_24(int iParam0, int iParam1) //Position: 0x5765 / 22373
{
	int iVar0;
	
	if (!Function_25(iParam0))
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

bool Function_25(int iParam0) //Position: 0x5792 / 22418
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_26() //Position: 0x57A8 / 22440
{
	return (NET_IS_CONNECTED_FOR_PLAY() && NET_IS_MANAGER_INITIALIZED());
}

void Function_27() //Position: 0x57B5 / 22453
{
	int iVar0;
	
	if (!NET_ARE_UNLOCKS_READY())
	{
		return;
	}
	if (((((((((Global_63096 || Global_3384) || Global_3395) || Global_3396) || Global_3381) || !IS_ACTOR_ALIVE(Global_34573)) || HUD_IS_FADED()) || HUD_IS_FADING()) || Function_79()) || (Global_26281 + 5.0f) < GET_CURRENT_GAME_TIME())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 61)
	{
		if (!Global_26055[iVar0])
		{
			if (NET_IS_UNLOCKED(iVar0) && !Function_79())
			{
				Function_28(iVar0);
			}
		}
		iVar0++;
	}
	return;
}

void Function_28(int iParam0) //Position: 0x5828 / 22568
{
	bool bVar0;
	struct<4> Var1;
	
	if (!Function_78(iParam0) && (NET_IS_IN_SESSION() || Function_551()))
	{
		return;
	}
	bVar0 = true;
	switch (iParam0)
	{
		case 0x00000001:
			if (Function_77(3))
			{
				if (!Function_23(1))
				{
					if (!Function_368(2, 0))
					{
						return;
					}
					Function_76(1, 0, 0);
				}
			}
			break;
		
		case 0x00000004:
			if (Function_77(3))
			{
				if (!Function_23(2) && !Function_75(2))
				{
					Function_74(2, 0, 1, 1, 1);
					Function_53(2, 1);
					bVar0 = false;
				}
			}
			break;
		
		case 0x00000009:
			if (!Global_26055[iParam0])
			{
				Function_52(992, 0, 1);
				Function_51(52, 1, 0);
			}
			break;
		
		case 0x0000000A:
			SET_WEAPON_GOLD(Global_34573, 4, 1);
			SET_WEAPON_GOLD(Global_34573, 8, 1);
			break;
		
		case 0x0000000D:
			UI_CHEAT_SET_STATE(4, 1);
			Function_33(4);
			break;
		
		case 0x0000000E:
			UI_CHEAT_SET_STATE(25, 1);
			Function_33(4);
			break;
		
		case 0x0000000F:
			UI_CHEAT_SET_STATE(7, 1);
			Function_33(4);
			break;
		
		case 0x00000010:
			UI_CHEAT_SET_STATE(11, 1);
			Function_33(4);
			break;
		
		case 0x00000011:
			UI_CHEAT_SET_STATE(13, 1);
			Function_33(4);
			break;
		
		case 0x00000012:
			UI_CHEAT_SET_STATE(16, 1);
			Function_33(4);
			break;
		
		case 0x00000013:
			UI_CHEAT_SET_STATE(17, 1);
			Function_33(4);
			break;
		
		case 0x00000014:
			UI_CHEAT_SET_STATE(18, 1);
			Function_33(4);
			break;
		
		case 0x00000015:
			UI_CHEAT_SET_STATE(24, 1);
			Function_33(4);
			break;
		
		case 0x00000016:
			UI_CHEAT_SET_STATE(26, 1);
			Function_33(4);
			break;
		
		case 0x00000017:
			UI_CHEAT_SET_STATE(22, 1);
			Function_33(4);
			break;
		
		case 0x00000018:
			UI_CHEAT_SET_STATE(28, 1);
			Function_33(4);
			break;
		
		case 0x00000019:
			UI_CHEAT_SET_STATE(35, 1);
			Function_33(4);
			break;
		
		case 0x0000001A:
			UI_CHEAT_SET_STATE(36, 1);
			Function_33(4);
			break;
		
		case 0x0000001B:
			UI_CHEAT_SET_STATE(37, 1);
			Function_33(4);
			break;
		
		case 0x0000001C:
			UI_CHEAT_SET_STATE(38, 1);
			Function_33(4);
			break;
		
		case 0x0000001D:
			UI_CHEAT_SET_STATE(39, 1);
			Function_33(4);
			break;
		
		case 0x0000001E:
			UI_CHEAT_SET_STATE(23, 1);
			Function_33(4);
			break;
		
		case 0x00000023:
			if (Function_32(0, 0, 1, 1))
			{
				return;
			}
			if (NET_IS_IN_SESSION())
			{
				Function_30(8);
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
			if (!Function_368(2, 0))
			{
				return;
			}
			Function_29(11);
			break;
		
		case 0x00000000:
			if (!Function_368(2, 0))
			{
				return;
			}
			Function_29(6);
			break;
		
		case 0x0000000B:
		case 0x0000000C:
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
		case 0x0000002D:
			return;
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
			Function_235(&Var1, 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	Global_26055[iParam0] = 1;
	return;
}

void Function_29(int iParam0) //Position: 0x5B70 / 23408
{
	if (AWARD_AVATAR(iParam0))
	{
		if (IS_PS3())
		{
			Function_235("avunlock_help", 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

void Function_30(int iParam0) //Position: 0x5BA7 / 23463
{
	Function_31(&Global_83864 + 1252, iParam0);
	return;
}

void Function_31(var uParam0, int iParam1) //Position: 0x5BB9 / 23481
{
	Function_553(uParam0, iParam1);
	return;
}

bool Function_32(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x5BC6 / 23494
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

bool Function_33(int iParam0) //Position: 0x5C6A / 23658
{
	struct<4> Var0;
	
	if (iParam0 != 4)
	{
		if (Function_546("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				SAVE_GAME(SS_GET_STRING(2, iParam0));
			}
		}
	}
	if (iParam0 <= 4)
	{
		if (Function_234())
		{
			Var0 = { StackVal, StackVal, StackVal, Function_49() };
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Var0);
		}
		else
		{
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Global_3422[Global_626940] + 12);
		}
	}
	if (iParam0 != 4)
	{
		Function_34();
	}
	SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, iParam0));
	return 1;
}

void Function_34() //Position: 0x5CD1 / 23761
{
	Function_46();
	Function_45();
	Function_45();
	Function_44();
	Function_44();
	Function_43();
	Function_43();
	Function_42(0);
	Function_42(0);
	if (!Function_551())
	{
		Function_39();
		Function_38();
		Function_37();
		Function_36();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_35();
	return;
}

void Function_35() //Position: 0x5D23 / 23843
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

void Function_36() //Position: 0x5E29 / 24105
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

void Function_37() //Position: 0x5E5C / 24156
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

void Function_38() //Position: 0x5FEA / 24554
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

void Function_39() //Position: 0x619E / 24990
{
	Function_40(&Global_28260, 1, 0);
	return;
}

void Function_40(int iParam0, bool bParam1, var uParam2) //Position: 0x61AC / 25004
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
	
	bVar0 = Function_41();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || uParam2)
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
			(*iParam0 + 1016)[iVar3] = _GET_AMMO_AMOUNT(bVar0, iVar3, 0);
			iVar3++;
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

bool Function_41() //Position: 0x639D / 25501
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_42(char* cParam0) //Position: 0x63B2 / 25522
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
					iVar2 = ((Function_522((50 + iVar4)) + Function_522((183 + iVar4))) + Function_522((90 + iVar4)));
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
	Function_521(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_43() //Position: 0x6458 / 25688
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
		iVar2 = ((Function_522((50 + iVar3) + 15) + Function_522((183 + iVar3) + 15)) + Function_522((90 + iVar3) + 15));
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
	Function_521(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_44() //Position: 0x64E1 / 25825
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
			iVar2 = ((Function_522((50 + iVar3) + 8) + Function_522((183 + iVar3) + 8)) + Function_522((90 + iVar3) + 8));
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
	Function_521(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_45() //Position: 0x6578 / 25976
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
		iVar2 = ((Function_522((50 + iVar3)) + Function_522((183 + iVar3))) + Function_522((90 + iVar3)));
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
	Function_521(179, iVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, iVar4, 8);
	return StackVal, cVar0;
}

void Function_46() //Position: 0x65F7 / 26103
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_47(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_521(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_47(int iParam0, float fParam1, int iParam2) //Position: 0x6630 / 26160
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
	Function_48(iParam0, fParam1, 1);
	Function_20(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_9(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
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

int Function_48(int iParam0, float fParam1, bool bParam2) //Position: 0x683A / 26682
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

struct<16> Function_49() //Position: 0x6A7E / 27262
{
	int iVar0;
	int iVar1;
	
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		if (Function_50(iVar0))
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
	if (Global_13172[Function_448(Global_6269)11].f_32 < Global_74542[iVar110].f_32)
	{
		return StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12);
	}
	return StackVal, StackVal, StackVal, *(&Global_63541[iVar155] + 4);
}

bool Function_50(int iParam0) //Position: 0x6B1A / 27418
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_51(bool bParam0, bool bParam1, int iParam2) //Position: 0x6B2F / 27439
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_305(bParam0), Function_41()) == 0)
		{
			ADD_ITEM(Function_305(bParam0), Function_41(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_305(bParam0), Function_41(), iParam2);
	return 1;
}

void Function_52(var uParam0, bool bParam1, bool bParam2) //Position: 0x6B7A / 27514
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_553(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_553(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_53(bool bParam0, bool bParam1) //Position: 0x6BA7 / 27559
{
	int iVar0;
	int iVar1;
	
	if (Function_50(20))
	{
		Function_54(bParam0, 16, 1, 0, bParam1);
	}
	iVar0 = Function_539(0, Global_30640[2], 3);
	iVar1 = Function_417(iVar0);
	if (iVar1 >= 0)
	{
		Function_54(bParam0, 2, 1, 0, bParam1);
	}
	return;
}

void Function_54(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x6BE4 / 27620
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_25(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_77(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_24(bParam0, 2))
	{
		Function_420(456, 1, 0, 0);
		Function_73(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_235(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_72(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_73(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_32(0, 0, 1, 1))
			{
				Function_284(1);
				Function_283(1, 0);
			}
			else
			{
				Function_71();
			}
		}
		Function_66(bParam0);
		if (StackVal && !Function_510(((((!Function_79() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_510((((Function_79() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_234())
		{
			if (!Function_65(Global_76846, 2))
			{
				Function_60(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_56();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_55(3, bParam1);
				break;
			
			case 0x00000005:
				Function_55(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_55(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_55(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_55(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_55(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_406(2, 24);
				break;
			
			case 0x00000003:
				Function_406(2, 25);
				break;
			
			case 0x0000000F:
				Function_406(2, 26);
				break;
			
			case 0x0000000D:
				Function_406(2, 27);
				break;
			
			case 0x0000000E:
				Function_406(2, 28);
				break;
			}
	}
}

void Function_55(int iParam0, bool bParam1) //Position: 0x6E7A / 28282
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (bParam1 > 0)
	{
		(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_56() //Position: 0x6EE5 / 28389
{
	if (Function_25(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_59(Global_28180);
			Global_28180.f_8 = Function_57(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_59(Global_28180);
			Global_28180.f_8 = Function_57(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_57(int iParam0, int iParam1) //Position: 0x6F60 / 28512
{
	vector3 vVar0;
	struct<9> Var3;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	
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
					if (Function_50(13) && iVar16)
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
					if (Function_50(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_50(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_50(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_50(23) && iVar17)
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
					if (Function_50(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_50(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_50(27) && iVar18)
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
					if (Function_50(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_50(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_50(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_50(49) && iVar15)
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
					if (Function_50(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_368(6, 0) && Function_50(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_50(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_368(9, 0) && Function_50(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_50(15) && iVar19)
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
	if (Function_58(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_58(StackVal, StackVal, vVar3))
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
	if (!Function_58(StackVal, StackVal, vVar3))
	{
		fVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
		SET_BLIP_SCALE(fVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(fVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(fVar20, 3);
		SET_BLIP_NAME(fVar20, &cVar7);
		return fVar20;
	}
	return "";
}

bool Function_58(vector3 vParam0) //Position: 0x7B51 / 31569
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_59(int iParam0) //Position: 0x7B69 / 31593
{
	int iVar0;
	int iVar1;
	
	if (!Function_25(iParam0))
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

void Function_60(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x7BB8 / 31672
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_62(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_61(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_61(char* cParam0, int iParam1) //Position: 0x7C24 / 31780
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

bool Function_62(bool bParam0, var uParam1, int iParam2) //Position: 0x7C5B / 31835
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
		if (Function_64(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_63(uVar0))
		{
			case 0x00000002:
				if (!Function_65(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_63(char* cParam0) //Position: 0x7CD3 / 31955
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

int Function_64(int iParam0) //Position: 0x7D74 / 32116
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_552(&iVar1, 2147483648);
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

bool Function_65(var uParam0, int iParam1) //Position: 0x7DB1 / 32177
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_66(bool bParam0) //Position: 0x7DC4 / 32196
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
			if (Function_72(bParam0, Function_70(bVar24)))
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
			if (Function_72(bParam0, Function_70(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_69(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_68(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_67(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_67(int iParam0) //Position: 0x7F74 / 32628
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_25(iParam0))
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

void Function_68(int iParam0, int iParam1) //Position: 0x7FCB / 32715
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(uParam0);
	REMOVE_JOURNAL_ENTRY(uParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(uParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(iParam0);
	}
	return;
}

var Function_69(int iParam0) //Position: 0x7FF0 / 32752
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_25(iParam0))
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

int Function_70(bool bParam0) //Position: 0x8046 / 32838
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_71() //Position: 0x8052 / 32850
{
	return;
}

bool Function_72(bool bParam0, int iParam1) //Position: 0x8058 / 32856
{
	int iVar0;
	
	if (!Function_25(bParam0))
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

void Function_73(bool bParam0, int iParam1) //Position: 0x80B7 / 32951
{
	if (!Function_25(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

void Function_74(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x810C / 33036
{
	struct<8> Var0;
	
	if (!Function_25(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_77(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_75(bParam0))
	{
		Function_420(456, 1, 0, 0);
		Function_73(bParam0, 2);
		if (bParam2)
		{
			if (!Function_32(0, 0, 1, 1))
			{
				Function_284(1);
				Function_283(1, 5);
			}
			else
			{
				Function_71();
			}
		}
		Function_66(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_79() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_79() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_235(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_234())
		{
			if (!Function_65(Global_76846, 2))
			{
				Function_60(Global_34573, 2, 1, 0);
			}
		}
	}
}

bool Function_75(int iParam0) //Position: 0x8261 / 33377
{
	if (!Function_25(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_24(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_76(bool bParam0, bool bParam1, bool bParam2) //Position: 0x82B3 / 33459
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_25(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_23(bParam0))
	{
		if (!Function_75(bParam0))
		{
			Function_74(bParam0, 1, 0, 0, 1);
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
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 1);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, 0, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_420(457, 1, 0, 0);
		Function_73(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_32(0, 0, 1, 1))
			{
				Function_284(1);
				Function_283(1, 0);
			}
			else
			{
				Function_71();
			}
		}
	}
	return;
}

bool Function_77(int iParam0) //Position: 0x8452 / 33874
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_78(int iParam0) //Position: 0x846E / 33902
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

bool Function_79() //Position: 0x8492 / 33938
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_80() //Position: 0x84BF / 33983
{
	Function_81(7);
	Function_81(8);
	Function_81(10);
	Function_81(6);
	Function_81(9);
	Function_81(11);
	return;
}

void Function_81(bool bParam0) //Position: 0x84E1 / 34017
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
		if (Function_82())
		{
			fVar0 = (fVar0 * 0.5f);
		}
		SET_AMMO_DROP_BIAS(bParam0, fVar0);
	}
	return;
}

bool Function_82() //Position: 0x8534 / 34100
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_83(var uParam0, bool bParam1) //Position: 0x855F / 34143
{
	int iVar0;
	vector3 vVar1;
	
	if (((Function_32(0, 0, 1, 1) || Function_551()) || Global_3403) || Global_3404)
	{
		if (IS_BLIP_VALID(*bParam1))
		{
			REMOVE_BLIP(*bParam1);
		}
		return;
	}
	iVar0 = Function_91(1, 0);
	if (!Function_90(iVar0) && !Global_16875)
	{
		return;
	}
	if (iVar0 == 4294967295)
	{
		vVar1 = { -2833.843f, 50.332f, 2418.003f };
	}
	else
	{
		vVar1 = { StackVal, StackVal, Global_16537[iVar021] };
	}
	if (*uParam0 != iVar0 && IS_BLIP_VALID(*bParam1))
	{
		if (Function_89(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar1) > 4.0f)
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
	if (StackVal && !Function_58(StackVal, Function_89(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar1) < 4.5f, vVar1))
	{
		*bParam1 = ADD_BLIP_FOR_COORD(&vVar1, 326, 0f, 2, 0);
		if (*uParam0 != 4294967295)
		{
			UNK_0x1E98AFEC(*bParam1, 1);
			Function_84(StackVal, StackVal, Global_16537[*uParam021].f_48, 16, vVar1, 63);
		}
	}
	return;
}

int Function_84(int iParam0, bool bParam1, vector3 vParam2, int iParam5) //Position: 0x8656 / 34390
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!Function_343(iParam0))
	{
		return 0;
	}
	if (bParam1 == 0)
	{
		return 0;
	}
	if (Function_58(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_88(bParam1);
	iVar1 = 4294967295;
	iVar3 = Function_87(StackVal, StackVal, vParam2);
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
		Function_86(iVar3);
		vVar7 = { StackVal, StackVal, Function_86(iVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == bParam1)
			{
				Function_86(StackVal);
				vVar4 = { StackVal, StackVal, Function_86(StackVal) };
				if (Function_243(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
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
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_85(bParam1), 0.0f, 2, iVar2);
		if (bParam1 == 23)
		{
			SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0.5f);
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
		SET_BLIP_PRIORITY(Global_9724[iVar1], 1);
		return iVar1;
	}
	return 0;
}

int Function_85(bool bParam0) //Position: 0x8839 / 34873
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

vector3 Function_86(int iParam0) //Position: 0x8970 / 35184
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

int Function_87(vector3 vParam0) //Position: 0x89C7 / 35271
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

int Function_88(bool bParam0) //Position: 0x8A15 / 35349
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

float Function_89(vector3 vParam0, vector3 vParam3) //Position: 0x8ACD / 35533
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_90(int iParam0) //Position: 0x8AEA / 35562
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_91(bool bParam0, bool bParam1) //Position: 0x8B00 / 35584
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
				fVar2 = Function_89(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_89(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_90(bVar0) && !bParam1)
	{
		bVar0 = Function_91(bParam0, 1);
	}
	return bVar0;
}

void Function_92() //Position: 0x8BC7 / 35783
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	char* cVar3;
	
	if ((Function_32(0, 0, 1, 1) || Function_551()) || !Global_25986[11])
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
				if (Function_309(Global_16537[iVar021].f_48))
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
									Function_99(Global_16537[iVar021].f_68, 1);
									if (IS_DOOR_VALID(Global_16537[iVar021].f_68))
									{
										Function_99(Global_16537[iVar021].f_72, 1);
									}
								}
							}
							else if (!IS_ACTOR_IN_VOLUME(Global_34573, GET_VOLUME_FROM_OBJECT(bVar1)))
							{
								Function_98(Global_16537[iVar021].f_68, 1);
								if (IS_DOOR_VALID(Global_16537[iVar021].f_68))
								{
									Function_98(Global_16537[iVar021].f_72, 1);
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
				if (Function_309(Global_16537[iVar021].f_48))
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
									Function_99(Global_16537[iVar021].f_68, 1);
									if (IS_DOOR_VALID(Global_16537[iVar021].f_68))
									{
										Function_99(Global_16537[iVar021].f_72, 1);
									}
								}
							}
							else if (!IS_ACTOR_IN_VOLUME(Global_34573, GET_VOLUME_FROM_OBJECT(bVar2)))
							{
								Function_98(Global_16537[iVar021].f_68, 1);
								if (IS_DOOR_VALID(Global_16537[iVar021].f_68))
								{
									Function_98(Global_16537[iVar021].f_72, 1);
								}
							}
						}
					}
					if (StackVal && (StackVal || Function_58(IS_OBJECT_VALID(Global_16537[iVar021].f_56), IS_OBJECT_VALID(Global_16537[iVar021].f_60), *(&Global_16537[iVar021] + 28))))
					{
						if (GATEWAY_UPDATE(Global_16537[iVar021].f_56))
						{
							DESTROY_OBJECT(Global_16537[iVar021].f_56);
							if (Global_16537[iVar021].f_40 == 2)
							{
								Global_16537[iVar021].f_64 = ADD_SCRIPT_USE_CONTEXT("house_purchase", 1, 4, I2STR(Global_16537[iVar021].f_44), 0, 0, 0, 4294967295, 0);
							}
							else
							{
								Global_16537[iVar021].f_64 = ADD_SCRIPT_USE_CONTEXT("house_rent", 1, 4, I2STR(Global_16537[iVar021].f_44), 0, 0, 0, 4294967295, 0);
							}
						}
						if (IS_OBJECT_VALID(Global_16537[iVar021].f_60))
						{
							if (GATEWAY_UPDATE(Global_16537[iVar021].f_60))
							{
								DESTROY_OBJECT(Global_16537[iVar021].f_60);
								if (Global_16537[iVar021].f_40 == 2)
								{
									Global_16537[iVar021].f_64 = ADD_SCRIPT_USE_CONTEXT("house_purchase", 1, 4, I2STR(Global_16537[iVar021].f_44), 0, 0, 0, 4294967295, 0);
								}
								else
								{
									Global_16537[iVar021].f_64 = ADD_SCRIPT_USE_CONTEXT("house_rent", 1, 4, I2STR(Global_16537[iVar021].f_44), 0, 0, 0, 4294967295, 0);
								}
							}
						}
					}
					else if (IS_SCRIPT_USE_CONTEXT_VALID(Global_16537[iVar021].f_64))
					{
						if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(Global_16537[iVar021].f_64))
						{
							if (Function_97() > Global_16537[iVar021].f_44)
							{
								Function_96(Global_16537[iVar021].f_44, 1);
								RELEASE_SCRIPT_USE_CONTEXT(Global_16537[iVar021].f_64);
								Function_94(iVar0);
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
								Function_235("house_no_cash", 0x41200000, 1, 0, 2, 1, 0);
								RELEASE_SCRIPT_USE_CONTEXT(Global_16537[iVar021].f_64);
							}
						}
						else if (StackVal && (StackVal || Function_89(StackVal, StackVal, StackVal, Function_58(StackVal, Function_89(StackVal, StackVal, StackVal, StackVal, Global_34574, *(&Global_16537[iVar021] + 16)) < 3.0f, *(&Global_16537[iVar021] + 28)), Global_34574, *(&Global_16537[iVar021] + 28)) < 3.0f))
						{
							RELEASE_SCRIPT_USE_CONTEXT(Global_16537[iVar021].f_64);
						}
					}
					else
					{
						cVar3 = Function_93();
						if (!IS_OBJECT_VALID(Global_16537[iVar021].f_56))
						{
							Global_16537[iVar021].f_56 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(cVar3, Function_10(), *(&Global_16537[iVar021] + 16), 0.0f, 0.0f, 0.0f, 2.5f, 1.5f, 2.5f, 3, Function_41(), 3, 4294967295, 0, 1, 1);
							if (Global_16537[iVar021].f_40 == 2)
							{
								ADD_BLIP_FOR_OBJECT(Global_16537[iVar021].f_56, 420, 0, 2, 0);
								UNK_0x1E98AFEC(GET_BLIP_ON_OBJECT(Global_16537[iVar021].f_56), 1);
								SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_OBJECT(Global_16537[iVar021].f_56), 1.25f);
								Function_84(StackVal, StackVal, Global_16537[iVar021].f_48, 17, Global_16537[iVar021], 63);
							}
							else
							{
								ADD_BLIP_FOR_OBJECT(Global_16537[iVar021].f_56, 421, 0, 2, 0);
								UNK_0x1E98AFEC(GET_BLIP_ON_OBJECT(Global_16537[iVar021].f_56), 1);
								Function_84(StackVal, StackVal, Global_16537[iVar021].f_48, 18, Global_16537[iVar021], 63);
								SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_OBJECT(Global_16537[iVar021].f_56), 1.25f);
							}
						}
						if (!Function_58(StackVal, StackVal, *(&Global_16537[iVar021] + 28)))
						{
							if (!IS_OBJECT_VALID(Global_16537[iVar021].f_60))
							{
								Global_16537[iVar021].f_60 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(cVar3, Function_10(), *(&Global_16537[iVar021] + 28), 0.0f, 0.0f, 0.0f, 2.5f, 1.5f, 2.5f, 3, Function_41(), 3, 4294967295, 0, 1, 1);
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

var Function_93() //Position: 0x92AB / 37547
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

void Function_94(int iParam0) //Position: 0x9317 / 37655
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_90(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_99(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_99(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), 1);
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
			Function_420(468, 1, 0, 0);
			Function_406(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_235("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_95(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_74(14, 1, 0, 0, 0);
				Function_54(14, 1, 0, 0, 0);
			}
			if (!Function_32(0, 0, 1, 1))
			{
				Function_284(1);
				Function_283(1, 6);
			}
			else
			{
				Function_71();
			}
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_REMOVE(bVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", 1);
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
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", 1);
			}
			Global_16537[iParam021].f_40 = 4;
			Function_235("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_420(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_406(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_95(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x95C4 / 38340
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
		Function_86(Function_87(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_86(Function_87(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_86(StackVal);
				vVar1 = { StackVal, StackVal, Function_86(StackVal) };
				if (Function_243(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

int Function_96(bool bParam0, bool bParam1) //Position: 0x96CA / 38602
{
	bool bVar0;
	
	bVar0 = Function_522(0);
	if ((Function_522(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_8(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_522(0));
	return 1;
}

int Function_97() //Position: 0x975A / 38746
{
	return Function_522(0);
}

void Function_98(bool bParam0, int iParam1) //Position: 0x9764 / 38756
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", iParam1);
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

void Function_99(bool bParam0, int iParam1) //Position: 0x97B8 / 38840
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", iParam1);
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

void Function_100() //Position: 0x9809 / 38921
{
	bool bVar0;
	
	bVar0 = GET_LATEST_CONSOLE_COMMAND();
	if (!IS_STRING_VALID(bVar0))
	{
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
	if (Function_215(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_214(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_213(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_211(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_208(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_205(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_204(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_202(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_200(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_197(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_196(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_195(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_189(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_180(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_179(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_178(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_177(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_176(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_173(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_171(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
	}
	if (Function_170(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_167(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_166(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_165(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_163(bVar0))
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
	if (Function_138(bVar0))
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
	if (Function_130(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_129(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_128(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_127(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_125(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_122(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_120(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_119(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_118(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_117(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_116(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_110(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_109(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_108(bVar0))
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
	if (Function_102(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_101(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	return;
}

bool Function_101(bool bParam0) //Position: 0x9AD5 / 39637
{
	if (STRING_CONTAINS_STRING(bParam0, "playermeds"))
	{
		Function_51(3, 0, 1);
		return 1;
	}
	return 0;
}

bool Function_102(bool bParam0) //Position: 0x9AFA / 39674
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

bool Function_103(bool bParam0) //Position: 0x9B71 / 39793
{
	if (STRING_CONTAINS_STRING(bParam0, "makeswim"))
	{
		DECOR_SET_BOOL(Global_34573, "swimming", 1);
		return 1;
	}
	return 0;
}

bool Function_104(bool bParam0) //Position: 0x9BA0 / 39840
{
	if (STRING_CONTAINS_STRING(bParam0, "regions_reset"))
	{
		Function_105(1, 0, 1);
		return 1;
	}
	return 0;
}

void Function_105(var uParam0, bool bParam1, int iParam2) //Position: 0x9BC7 / 39879
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
		if (Function_343(Global_29006))
		{
			Function_421(&(Global_29008[Global_29006]), 131072);
			Function_449(&(Global_29008[Global_29006]), 2097152);
			Function_106(Global_29006);
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
				if (Function_422(&(Global_29008[iVar0]), 4) || Function_422(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_449(&(Global_29008[iVar0]), 2097155);
					Function_421(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_551())
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

void Function_106(int iParam0) //Position: 0x9CD2 / 40146
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_107())
			{
				return;
			}
		}
		if (!Function_422(&(Global_29008[iParam0]), 2048))
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

bool Function_107() //Position: 0x9D51 / 40273
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_422(&(Global_29008[iVar0]), 4) || Function_422(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_108(bool bParam0) //Position: 0x9DBA / 40378
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

bool Function_109(bool bParam0) //Position: 0x9E9C / 40604
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

bool Function_110(bool bParam0) //Position: 0x9F49 / 40777
{
	char* cVar0;
	float fVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "addnotor"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			cVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			cVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			fVar1 = STRING_TO_FLOAT(cVar0);
			Function_111(3, fVar1);
		}
		return 1;
	}
	return 0;
}

int Function_111(int iParam0, float fParam1) //Position: 0x9F86 / 40838
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
	iVar1 = Function_115(iParam0, 4294967295);
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
	iVar1 = Function_112();
	Global_49199[iVar1] = fParam1;
	strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 0;
	return 1;
}

int Function_112() //Position: 0xA112 / 41234
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
	Function_113();
	return 0;
}

void Function_113() //Position: 0xA1B1 / 41393
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
		Function_114(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_114(int iParam0) //Position: 0xA260 / 41568
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

var Function_115(int iParam0, int iParam1) //Position: 0xA2BE / 41662
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

bool Function_116(bool bParam0) //Position: 0xA2FF / 41727
{
	char* cVar0;
	float fVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "addhonor"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			cVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			fVar1 = STRING_TO_FLOAT(cVar0);
			Function_111(1, fVar1);
		}
		return 1;
	}
	return 0;
}

bool Function_117(bool bParam0) //Position: 0xA336 / 41782
{
	int iVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "killRC"))
	{
		iVar0 = CREATE_OBJECT_ITERATOR(Global_6289);
		ITERATE_ON_OBJECT_TYPE(iVar0, 24);
		bVar1 = START_OBJECT_ITERATOR(iVar0);
		while (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_OBJECT(bVar1)))
		{
			DESTROY_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar1));
			bVar1 = OBJECT_ITERATOR_NEXT(iVar0);
		}
		DESTROY_ITERATOR(iVar0);
		return 1;
	}
	return 0;
}

bool Function_118(bool bParam0) //Position: 0xA388 / 41864
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
					Function_427(Function_539(0, 1, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "FORT"))
				{
					Function_427(Function_539(0, 24, 1), 0, 1, 1, 0);
					Function_427(Function_539(1, 25, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "GRAVE"))
				{
					Function_427(Function_539(0, 12, 1), 0, 1, 1, 0);
					Function_427(Function_539(0, 13, 1), 0, 1, 1, 0);
					Function_427(Function_539(0, 14, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MARSHAL"))
				{
					Function_427(Function_539(0, 8, 1), 0, 1, 1, 0);
					Function_427(Function_539(0, 9, 1), 0, 1, 1, 0);
					Function_427(Function_539(0, 23, 1), 0, 1, 1, 0);
					Function_427(Function_539(0, 21, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MERCHANT"))
				{
					Function_427(Function_539(0, 10, 1), 0, 1, 1, 0);
					Function_427(Function_539(0, 11, 1), 0, 1, 1, 0);
					Function_427(Function_539(0, 17, 1), 0, 1, 1, 0);
					Function_427(Function_539(0, 15, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "OUTLAW"))
				{
					Function_427(Function_539(0, 18, 1), 0, 1, 1, 0);
					Function_427(Function_539(0, 19, 1), 0, 1, 1, 0);
					Function_427(Function_539(0, 20, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "RANCH"))
				{
					Function_427(Function_539(0, 2, 1), 0, 1, 1, 0);
					Function_427(Function_539(0, 3, 1), 0, 1, 1, 0);
					Function_427(Function_539(0, 22, 1), 0, 1, 1, 0);
					Function_427(Function_539(0, 6, 1), 0, 1, 1, 0);
					Function_427(Function_539(0, 5, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "GUN"))
				{
					Function_427(Function_539(1, 30, 1), 0, 1, 1, 0);
					Function_427(Function_539(1, 33, 1), 0, 1, 1, 0);
					Function_427(Function_539(1, 32, 1), 0, 1, 1, 0);
					Function_427(Function_539(1, 31, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MEXGIRL"))
				{
					Function_427(Function_539(1, 34, 1), 0, 1, 1, 0);
					Function_427(Function_539(1, 35, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MEXARMY"))
				{
					Function_427(Function_539(1, 27, 1), 0, 1, 1, 0);
					Function_427(Function_539(1, 26, 1), 0, 1, 1, 0);
					Function_427(Function_539(1, 28, 1), 0, 1, 1, 0);
					Function_427(Function_539(1, 29, 1), 0, 1, 1, 0);
					Function_427(Function_539(1, 36, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "REBEL"))
				{
					Function_427(Function_539(1, 39, 1), 0, 1, 1, 0);
					Function_427(Function_539(1, 37, 1), 0, 1, 1, 0);
					Function_427(Function_539(1, 38, 1), 0, 1, 1, 0);
					Function_427(Function_539(1, 41, 1), 0, 1, 1, 0);
					Function_427(Function_539(1, 40, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "ANTHRO"))
				{
					Function_427(Function_539(2, 45, 1), 0, 1, 1, 0);
					Function_427(Function_539(2, 46, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "FBI"))
				{
					Function_427(Function_539(2, 43, 1), 0, 1, 1, 0);
					Function_427(Function_539(2, 47, 1), 0, 1, 1, 0);
					Function_427(Function_539(2, 48, 1), 0, 1, 1, 0);
					Function_427(Function_539(2, 42, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "NATIVE"))
				{
					Function_427(Function_539(2, 44, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "HOME"))
				{
					Function_427(Function_539(3, 49, 1), 0, 1, 1, 0);
					Function_427(Function_539(3, 55, 1), 0, 1, 1, 0);
					Function_427(Function_539(3, 56, 1), 0, 1, 1, 0);
					Function_427(Function_539(3, 52, 1), 0, 1, 1, 0);
					Function_427(Function_539(3, 53, 1), 0, 1, 1, 0);
					Function_427(Function_539(3, 54, 1), 0, 1, 1, 0);
					Function_427(Function_539(3, 50, 1), 0, 1, 1, 0);
					Function_427(Function_539(3, 51, 1), 0, 1, 1, 0);
					Function_427(Function_539(3, 57, 1), 0, 1, 1, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_119(bool bParam0) //Position: 0xA820 / 43040
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

bool Function_120(bool bParam0) //Position: 0xAA94 / 43668
{
	int iVar0;
	char* cVar1[64];
	
	if (STRING_CONTAINS_STRING(cParam0, "save"))
	{
		iVar0 = 0;
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
					Function_121();
					SAVE_SOFT_SAVE(0);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 1 (index 0)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE2"))
				{
					Function_121();
					SAVE_SOFT_SAVE(1);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 2 (index 1)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRINGS_ARE_EQUAL(&cVar1, "MP"))
				{
					Function_283(0, 4294967295);
					PRINTSTRING("SAVED MULTIPLAYER GAME");
					PRINTNL();
					LOG_ERROR("MP GAME SAVED!");
					return 1;
				}
				iVar0 = STRING_TO_INT(&cVar1);
				if (iVar0 > 4)
				{
					LOG_ERROR("CANNOT SAVE - INVALID HARD SLOT PASSED!");
					return 0;
				}
			}
		}
		Function_121();
		if (Function_33(iVar0))
		{
			PRINTSTRING("SAVED GAME TO SLOT: ");
			PRINTINT(iVar0);
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

void Function_121() //Position: 0xAC87 / 44167
{
	struct<5> Var0;
	
	if (Function_551())
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
	if (Function_343(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_122(bool bParam0) //Position: 0xAD1A / 44314
{
	int iVar0;
	char* cVar1[64];
	
	if (STRING_CONTAINS_STRING(cParam0, "load"))
	{
		iVar0 = 0;
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
					Function_124();
					return 1;
				}
				iVar0 = STRING_TO_INT(&cVar1);
				if (iVar0 > 4)
				{
					LOG_ERROR("CANNOT LOAD - INVALID HARD SLOT PASSED!");
					return 0;
				}
			}
		}
		PRINTSTRING("LOADING GAME FROM SLOT: ");
		PRINTINT(iVar0);
		PRINTNL();
		Function_123(iVar0);
		return 1;
	}
	return 0;
}

int Function_123(int iParam0) //Position: 0xAE34 / 44596
{
	if (iParam0 != 4)
	{
		if (Function_546("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				if (DOES_FILE_EXIST(SS_GET_STRING(2, iParam0)))
				{
					return LOAD_GAME(SS_GET_STRING(2, iParam0));
				}
			}
		}
	}
	SAVE_MANAGER_HARD_LOAD(SS_GET_STRING(3, iParam0));
	return 1;
}

var Function_124() //Position: 0xAE77 / 44663
{
	NET_LOG(true, "SaveLoad", "Multiplayer Load Called", 0, 0, 0, 0);
	return SAVE_MANAGER_HARD_LOAD(SS_GET_STRING(3, 5));
}

bool Function_125(int iParam0) //Position: 0xAEB2 / 44722
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
	float fVar23;
	int iVar24;
	bool bVar25;
	vector3 vVar26;
	vector3 vVar29;
	
	iParam0 = iParam0;
	cVar0 = GET_CONSOLE_COMMAND_TOKEN(0);
	if (Function_126(cVar0, "streamanddropactorlineup"))
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
			fVar23 = GET_ACTORENUM_FROM_STRING(cVar22);
			iVar24 = fVar23;
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
			bVar21 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_GC_LAYOUT(), Function_10(), fVar23, vVar15, (0.0f + 180.0f), 0.0f);
			TASK_STAND_STILL(bVar21, -1.0f, 0, 0);
			STREAMING_EVICT_ACTOR(iVar24, 4294967295);
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_126(char* cParam0, char* cParam1) //Position: 0xB009 / 45065
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

bool Function_127(char* cParam0) //Position: 0xB034 / 45108
{
	char* cVar0;
	float fVar1;
	int iVar2;
	bool bVar3;
	struct<5> Var4;
	vector3 vVar10;
	vector3 vVar13;
	var uVar16;
	bool bVar19;
	
	cVar0 = GET_CONSOLE_COMMAND_TOKEN(0);
	if (Function_126(cVar0, "streamanddropactor"))
	{
		cParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		fVar1 = GET_ACTORENUM_FROM_STRING(cParam0);
		iVar2 = fVar1;
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
		bVar19 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_GC_LAYOUT(), Function_10(), fVar1, vVar13, (0.0f + 180.0f), 0.0f);
		TASK_STAND_STILL(bVar19, -1.0f, 0, 0);
		STREAMING_EVICT_ACTOR(iVar2, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_128(bool bParam0) //Position: 0xB137 / 45367
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "suicide"))
	{
		bVar0 = Function_41();
		if (IS_ACTOR_VALID(bVar0))
		{
			KILL_ACTOR(bVar0);
		}
		return 1;
	}
	return 0;
}

bool Function_129(bool bParam0) //Position: 0xB164 / 45412
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

bool Function_130(bool bParam0) //Position: 0xB1AE / 45486
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "decor"))
	{
		bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_LENGTH(bVar0) >= 0)
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), bVar0, 1);
		}
		return 1;
	}
	return 0;
}

bool Function_131(bool bParam0) //Position: 0xB1E1 / 45537
{
	if (STRING_CONTAINS_STRING(bParam0, "fudgeaa"))
	{
		if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("VHC_AA_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", 1);
		}
		else if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TES_AA_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", 1);
		}
		else if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TUM_FTE_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", 1);
		}
		return 1;
	}
	return 0;
}

bool Function_132(bool bParam0) //Position: 0xB29C / 45724
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

bool Function_133(bool bParam0) //Position: 0xB300 / 45824
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
		Function_134();
		CREATE_GRINGO_IN_LAYOUT(bVar10, Function_10(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Door", vVar3, Function_134());
		return 1;
	}
	return 0;
}

vector3 Function_134() //Position: 0xB3B7 / 46007
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_135(bool bParam0) //Position: 0xB3C0 / 46016
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
		bVar11 = CREATE_PROP_IN_LAYOUT(bVar10, Function_10(), "$/fragments/p_gen_footlocker01x", vVar3, 0.0f, 0.0f, 0.0f, 1);
		DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar11, "stand_open_chest"));
		Function_134();
		CREATE_GRINGO_ON_OBJECT(bVar11, Function_10(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Footlocker", -0.3f, 0.1f, -0.3f, Function_134());
		return 1;
	}
	return 0;
}

bool Function_136(bool bParam0) //Position: 0xB4D9 / 46297
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
		bVar12 = CREATE_GRINGO_IN_LAYOUT(bVar11, Function_10(), "$/content/scripting/gringo/SimpleGringo/mex_gutRabbit_link", vVar3, 0.0f, 0.0f, 0.0f);
		bVar9 = CREATE_ACTOR_IN_LAYOUT(bVar11, Function_10(), 1078, vVar3, 0.0f, 0.0f, 0.0f);
		SNAP_ACTOR_TO_GRINGO(bVar9, bVar12, "UseCase1", 1, 0, 0);
		if (!IS_ACTOR_VALID(bVar9))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

bool Function_137(bool bParam0) //Position: 0xB5D4 / 46548
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "bullriding"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_bullriding", &uVar0, 10, 0);
		return 1;
	}
	return 0;
}

bool Function_138(bool bParam0) //Position: 0xB628 / 46632
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

bool Function_139(bool bParam0) //Position: 0xB6D2 / 46802
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

bool Function_140(bool bParam0) //Position: 0xB747 / 46919
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

bool Function_141(bool bParam0) //Position: 0xB82C / 47148
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
	int iVar72;
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
					stradd(&cVar55, Function_305(bVar17), 64);
					if (STRINGS_ARE_EQUAL(&cVar55, &cVar0))
					{
						bVar71 = bVar17;
						PRINTSTRING("removing from player ");
						PRINTSTRING(&cVar55);
						PRINTSTRING(" - x");
						iVar72 = STRING_TO_INT(bVar16);
						if (iVar72 >= 0)
						{
							iVar73 = 1;
							while (iVar73 < iVar72)
							{
								iVar73++;
							}
							PRINTINT(iVar72);
						}
						else
						{
							PRINTINT(1);
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

bool Function_142(bool bParam0) //Position: 0xBBF1 / 48113
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
	bool bVar70;
	int iVar71;
	bool bVar72;
	int iVar73;
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
					stradd(&cVar52, Function_305(bVar17), 64);
					if (STRINGS_ARE_EQUAL(&cVar52, &cVar0))
					{
						bVar72 = bVar17;
						PRINTSTRING("Giving player ");
						PRINTSTRING(&cVar52);
						PRINTSTRING(" - x");
						if (bVar72 == 13)
						{
							Function_143(&Global_26303, Function_156(), 4294967294, 0, 0, 1);
						}
						iVar73 = STRING_TO_INT(bVar16);
						if (iVar73 >= 0)
						{
							iVar74 = 1;
							while (iVar74 < iVar73)
							{
								ADD_ITEM(Function_305(bVar72), GET_PLAYER_ACTOR(0), 1);
								iVar74++;
							}
							PRINTINT(iVar73);
						}
						else
						{
							ADD_ITEM(Function_305(bVar72), GET_PLAYER_ACTOR(0), 1);
							PRINTINT(1);
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
					stradd(&cVar52, Function_305(bVar17), 64);
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
					ADD_ITEM(Function_305(bVar17), GET_PLAYER_ACTOR(0), 1);
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
						Function_303(ABS(bVar75), 1);
					}
					else
					{
						Function_96(ABS(bVar75), 1);
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

int Function_143(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xC29E / 49822
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[45];
	int iVar50[45];
	struct<33> Var96;
	
	iVar0 = 0;
	if (Function_155())
	{
		return 0;
	}
	uParam0->f_16 = Function_154(iParam1);
	if (iParam3 == 0)
	{
		iParam3 = 0;
	}
	if (iParam1 == 4294967295)
	{
		iParam1 = Function_156();
	}
	if (iParam4 > 0 || iParam4 < 8)
	{
		iParam4 = 0;
	}
	Global_26303.f_12 = iParam1;
	iVar1 = 0;
	while (iVar1 < (45 - 1))
	{
		if (Function_153(&Var96, iVar1) == 1)
		{
			if (Function_152(Var96.f_24) == Global_30621[Global_29004])
			{
				if (Var96.f_32 == iParam3)
				{
					if (((iParam1 != 4294967295 || iParam1 <= Var96.f_12) || (iParam1 != 0 && Var96.f_12 != 3)) || (iParam1 != 0 && Var96.f_12 != 4))
					{
						if (iParam4 != 0 || iParam4 != Function_151(Var96.f_20))
						{
							iVar4[iVar2] = iVar1;
							iVar2++;
							if (iParam5 == 1)
							{
								if (!Function_150(iVar1))
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
		if (Function_153(uParam0, iVar1))
		{
			PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY found actor");
			PRINTSTRING("With ActorEnum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(uParam0->f_20));
			PRINTNL();
			uParam0->f_24 = Function_144(uParam0, iParam4, 80, 20000, uParam0->f_12);
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

var Function_144(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xC508 / 50440
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0->f_24;
	uParam3 = uParam3;
	uParam2 = uParam2;
	if (StackVal || uParam0->f_24 != 4294967295 != 1)
	{
		uVar1 = Function_145(uVar0, 80.0f, 20000.0f, uParam1, 1, uParam4);
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

var Function_145(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0xC593 / 50579
{
	int iVar0;
	int iVar1[146];
	int iVar148[146];
	int iVar295;
	vector3 vVar296;
	vector3 vVar299;
	bool bVar302;
	bool bVar303;
	bool bVar304[146];
	bool bVar451[146];
	int iVar598;
	int iVar599;
	int iVar600;
	int iVar601;
	int iVar602;
	int iVar603;
	struct<8> Var604;
	
	iVar0 = 4294967295;
	bVar303 = 1.001638E+07.0f;
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
	if (!Function_343(iParam0))
	{
		iParam0 = Global_29005;
	}
	iVar295 = Function_152(iParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar299);
	iVar598 = 0;
	while (iVar598 < 145)
	{
		Function_149(StackVal);
		vVar296 = { StackVal, StackVal, Function_149(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		if (iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(StackVal) && (iVar295 != Function_152(Global_29155[iVar59810]) || iParam0 != 4294967295)) != 1) && Function_422(&(Global_29008[iVar598]), 8192)) && iVar598 == 0)
		{
			if (iVar598 == 146)
			{
				LOG_ERROR("The bountyhunter region count is screwy. Tell Ben.");
				return 4294967294;
			}
			if (bVar302 > bVar303)
			{
				bVar303 = bVar302;
				iVar600 = iVar598;
			}
			if (bVar302 < fParam1 && bVar302 > fParam2)
			{
				iVar1[iVar601] = iVar598;
				bVar304[iVar601] = bVar302;
				iVar601++;
				if (Function_417(Function_539(iVar598, 0, 2)) == 0)
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is NOT FINISHED.");
					PRINTNL();
					iVar148[iVar602] = iVar598;
					bVar451[iVar602] = bVar302;
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
		Function_148(&iVar1, &bVar304, iVar601);
		Function_148(&iVar148, &bVar451, iVar602);
	}
	if (iVar602 < 0 && iParam4 != 1)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_16(3, iVar602);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_16(5, iVar602);
				break;
			
			case 0x00000004:
				iVar603 = Function_16(7, iVar602);
				break;
			
			case 0x00000005:
				iVar603 = Function_16(10, iVar602);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_16(5, iVar602);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = iVar148[iVar599];
		if (Function_343(iVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_147();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_146(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_149(StackVal);
		vVar296 = { StackVal, StackVal, Function_149(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(bVar302);
		PRINTNL();
	}
	else if (iVar601 >= 0)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_16(3, iVar601);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_16(5, iVar601);
				break;
			
			case 0x00000004:
				iVar603 = Function_16(7, iVar601);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar603 = Function_16(10, iVar601);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_16(5, iVar601);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = iVar1[iVar599];
		if (Function_343(iVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_147();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_146(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_149(StackVal);
		vVar296 = { StackVal, StackVal, Function_149(StackVal) };
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

struct<32> Function_146(int iParam0) //Position: 0xCC3C / 52284
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_343(iParam0))
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

int Function_147() //Position: 0xCCF9 / 52473
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

void Function_148(int iParam0, bool bParam1, int iParam2) //Position: 0xCD27 / 52519
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
		uVar2 = (*iParam0)[iVar0];
		iVar1 = (iVar0 - 1);
		iVar4 = 0;
		while (iVar4 == 0)
		{
			if ((*bParam1)[iVar1] < fVar3)
			{
				(*bParam1)[iVar1 + 1] = (*bParam1)[iVar1];
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
		(*bParam1)[iVar1 + 1] = fVar3;
		iVar0++;
	}
	return;
}

vector3 Function_149(bool bParam0) //Position: 0xCDB5 / 52661
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_150(bool bParam0) //Position: 0xCDC6 / 52678
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

int Function_151(int iParam0) //Position: 0xCE18 / 52760
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

int Function_152(int iParam0) //Position: 0xCEC7 / 52935
{
	return Function_419(iParam0);
}

bool Function_153(var uParam0, int iParam1) //Position: 0xCED2 / 52946
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

var Function_154(int iParam0) //Position: 0xD645 / 54853
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

bool Function_155() //Position: 0xD713 / 55059
{
	return Function_510(StackVal, 1);
}

int Function_156() //Position: 0xD722 / 55074
{
	int iVar0;
	
	iVar0 = Function_157(0);
	return iVar0;
}

var Function_157(int iParam0) //Position: 0xD730 / 55088
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = (Function_522(358) + Function_522(359));
	if (iParam0 == 1)
	{
		iVar2 = Function_16(iVar1, 7);
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

bool Function_158(bool bParam0) //Position: 0xD7B4 / 55220
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "horsebreaking"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_HorseBreaking", &uVar0, 10, 0);
		return 1;
	}
	return 0;
}

bool Function_159(bool bParam0) //Position: 0xD80E / 55310
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
		bVar15 = Function_160(StackVal, StackVal, StackVal, bVar18, Function_10(), 1118, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar17));
		bVar16 = Function_160(StackVal, StackVal, StackVal, bVar18, Function_10(), 1087, vVar12, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar17));
		if (!IS_ACTOR_VALID(bVar15) || !IS_ACTOR_VALID(bVar16))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

var Function_160(bool bParam0, bool bParam1, int iParam2, vector3 vParam3, vector3 vParam6, bool bParam9) //Position: 0xD8F1 / 55537
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	vVar0 = { StackVal, StackVal, vParam3 };
	vVar3 = { StackVal, StackVal, vParam6 };
	Function_161(bParam9, 0, &vVar0, &vVar3);
	bVar6 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, iParam2, vVar0, vVar3);
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bVar6), 50.0f, 0, 1092616192);
	return bVar6;
}

void Function_161(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xD93C / 55612
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_162(&vVar0, uParam2))
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

bool Function_162(var uParam0, int iParam1) //Position: 0xDA64 / 55908
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_58(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*uParam0 = (*uParam0 + 0.01f);
	uParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_58(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_163(bool bParam0) //Position: 0xDACF / 56015
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
		Function_164(StackVal, StackVal, StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_10(), bParam0, vVar1, vVar4, 4294967295);
		STREAMING_EVICT_PROPSET(uVar0);
		return 1;
	}
	return 0;
}

var Function_164(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0xDB75 / 56181
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	
	bVar0 = CREATE_PROPSET_IN_LAYOUT(uParam0, uParam1, uParam2, vParam3, vParam6);
	bVar1 = GET_LAYOUT_FROM_OBJECT(bVar0);
	iVar2 = CREATE_OBJECT_ITERATOR(bVar1);
	ITERATE_IN_LAYOUT(iVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(iVar2);
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
				if (Function_551())
				{
					SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar3), 1);
				}
			}
		}
		bVar3 = OBJECT_ITERATOR_NEXT(iVar2);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(bVar0));
	ADD_AI_COVERSET_FOR_PROPSET(bVar0);
	DESTROY_ITERATOR(iVar2);
	return bVar0;
}

bool Function_165(bool bParam0) //Position: 0xDCBE / 56510
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

bool Function_166(bool bParam0) //Position: 0xDCFD / 56573
{
	int iVar1;
	struct<5> Var2;
	
	if (STRING_CONTAINS_STRING(bParam0, "getmat"))
	{
		FIND_GROUND_INTERSECTION(&Global_34574, 2.0f, &Var2, &uVar5);
		Var2.f_4 = (StackVal + 1.0f);
		iVar1 = GET_MATERIAL_AT_VECTOR(&Var2);
		PRINTSTRING("Material flags ");
		PRINTINT(iVar1);
		PRINTSTRING(" found at player position: ");
		PRINTVECTOR(Global_34574);
		PRINTNL();
		if (iVar1 <= 0)
		{
			PRINTSTRING("   AIMATERIALFLAG_INVALID");
		}
		else
		{
			while (iVar1 > 0)
			{
				if (iVar1 > 512)
				{
					PRINTSTRING("   AIMATERIALFLAG_WATER");
					iVar1 = (iVar1 - 512);
				}
				else if (iVar1 > 256)
				{
					PRINTSTRING("   AIMATERIALFLAG_RESERVED");
					iVar1 = (iVar1 - 256);
				}
				else if (iVar1 > 128)
				{
					PRINTSTRING("   AIMATERIALFLAG_TRAINTRACKS");
					iVar1 = (iVar1 - 128);
				}
				else if (iVar1 > 64)
				{
					PRINTSTRING("   AIMATERIALFLAG_VEHICLEPATH");
					iVar1 = (iVar1 - 64);
				}
				else if (iVar1 > 32)
				{
					PRINTSTRING("   AIMATERIALFLAG_HORSEPATH");
					iVar1 = (iVar1 - 32);
				}
				else if (iVar1 > 16)
				{
					PRINTSTRING("   AIMATERIALFLAG_PEDPATH");
					iVar1 = (iVar1 - 16);
				}
				else if (iVar1 > 8)
				{
					PRINTSTRING("   AIMATERIALFLAG_GENERICSPAWN");
					iVar1 = (iVar1 - 8);
				}
				else if (iVar1 > 1)
				{
					PRINTSTRING("   AIMATERIALFLAG_TERRAIN");
					iVar1 = (iVar1 - 1);
				}
				else if (iVar1 == 0)
				{
					PRINTSTRING("   AIMATERIALFLAG_ANY");
					iVar1 = 4294967295;
				}
				PRINTNL();
			}
		}
		LOG_ERROR("Printed materials to output");
		return 1;
	}
	return 0;
}

bool Function_167(bool bParam0) //Position: 0xDF83 / 57219
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
		Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_168(&Var17) };
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
		bVar12 = Function_160(StackVal, StackVal, StackVal, bVar25, &Var17, iVar15, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar14));
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
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_168(&Var17) };
			bVar13 = Function_160(StackVal, StackVal, StackVal, bVar25, &Var17, 976, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar14));
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

struct<32> Function_168(bool bParam0) //Position: 0xE11C / 57628
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_169("0", &cVar8, ""), 4);
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

struct<32> Function_169(char* cParam0, char* cParam1, char* cParam2) //Position: 0xE186 / 57734
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_170(int iParam0) //Position: 0xE1A5 / 57765
{
	iParam0 = iParam0;
	return 0;
}

bool Function_171(bool bParam0) //Position: 0xE1B0 / 57776
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
						Function_172(iVar2);
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
							Function_172(iVar2);
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

void Function_172(int iParam0) //Position: 0xE23F / 57919
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_422(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_421(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_420(473, 1, 0, 0);
		iVar0 = Function_419(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_420(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_420(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_420(476, 1, 0, 0);
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
		Function_406(iVar2, bVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_406(7, 30);
	}
	if (Function_19(473) <= Function_21(473))
	{
		if (!Function_551())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

bool Function_173(bool bParam0) //Position: 0xE33E / 58174
{
	bool bVar0;
	char* cVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (STRING_CONTAINS_STRING(bParam0, "updatestat"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			cVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar3 = STRING_TO_INT(bVar0);
			fVar4 = STRING_TO_FLOAT(cVar1);
			if (iVar3 < 4294967295 && iVar3 >= 696)
			{
				if (fVar4 < 0.0f)
				{
					iVar2 = iVar3;
					Function_111(iVar2, fVar4);
				}
				else
				{
					iVar2 = iVar3;
					Function_174(iVar2, FABS(fVar4));
				}
			}
		}
		return 1;
	}
	return 0;
}

int Function_174(int iParam0, float fParam1) //Position: 0xE3B0 / 58288
{
	bool bVar0;
	int iVar1;
	
	Function_175(iParam0, fParam1, 0);
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
	iVar1 = Function_115(iParam0, 4294967295);
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
	iVar1 = Function_112();
	Global_49199[iVar1] = fParam1;
	strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 2;
	return 1;
}

int Function_175(int iParam0, float fParam1, int iParam2) //Position: 0xE53C / 58684
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
	Function_20(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_9(iParam0, 0, fParam1, 0, 1, 0x40400000, 0, 0);
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

bool Function_176(bool bParam0) //Position: 0xE727 / 59175
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

bool Function_177(bool bParam0) //Position: 0xE7AD / 59309
{
	if (STRING_CONTAINS_STRING(bParam0, "regiontest"))
	{
		Global_62479 = 1;
		return 1;
	}
	return 0;
}

bool Function_178(bool bParam0) //Position: 0xE7CF / 59343
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

bool Function_179(bool bParam0) //Position: 0xE836 / 59446
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* cVar3;
	
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
			cVar3 = GET_CONSOLE_COMMAND_TOKEN(1);
			RESET_ANALOG_POSITIONS(0, STRING_TO_FLOAT(cVar3));
		}
		return 1;
	}
	return 0;
}

bool Function_180(bool bParam0) //Position: 0xE8A9 / 59561
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	bool bVar7;
	
	if (STRING_CONTAINS_STRING(bParam0, "crime"))
	{
		iVar3 = Global_26118;
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			if (STRING_CONTAINS_STRING(bVar0, "new"))
			{
				GET_POSITION(GET_PLAYER_ACTOR(0), &vVar4);
				ITERATE_IN_SPHERE(iVar3, vVar4, 15.0f);
				ITERATE_ON_OBJECT_TYPE(iVar3, 15);
				if (GET_NUM_ITERATOR_MATCHES(iVar3) < 0 && IS_LAYOUTREF_VALID(Global_26314))
				{
					bVar7 = START_OBJECT_ITERATOR(iVar3);
					if (IS_OBJECT_VALID(bVar7))
					{
						Function_181(1, 0, GET_PLAYER_ACTOR(0), bVar7, 0);
						GET_OBJECT_POSITION(bVar7, &vVar4);
						PRINTSTRING(GET_SHORT_SCRIPT_NAME());
						PRINTSTRING(": New Console Crime!");
						PRINTVECTOR(vVar4);
						PRINTNL();
					}
				}
				else if (GET_NUM_ITERATOR_MATCHES(iVar3) == 0)
				{
				}
				else if (!IS_LAYOUTREF_VALID(Global_26314))
				{
				}
			}
			else if (STRING_CONTAINS_STRING(bVar0, "report"))
			{
				iVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
				if (IS_ITERATOR_VALID(iVar1))
				{
					ITERATE_EVERYWHERE(iVar1);
					ITERATE_ON_OBJECT_TYPE(iVar1, 31);
					if (GET_NUM_ITERATOR_MATCHES(iVar1) >= 0)
					{
						bVar2 = START_OBJECT_ITERATOR(iVar1);
						while (IS_OBJECT_VALID(bVar2))
						{
							if (!GET_CRIME_WITNESSED(GET_CRIME_FROM_OBJECT(bVar2)) != 3)
							{
								SET_CRIME_WITNESSED(GET_CRIME_FROM_OBJECT(bVar2), 3);
								DESTROY_ITERATOR(iVar1);
								return 1;
							}
							bVar2 = OBJECT_ITERATOR_NEXT(iVar1);
						}
					}
				}
				DESTROY_ITERATOR(iVar1);
			}
			else if (STRING_CONTAINS_STRING(bVar0, "upgrade"))
			{
				GET_POSITION(GET_PLAYER_ACTOR(0), &vVar4);
				ITERATE_IN_SPHERE(iVar3, vVar4, 15.0f);
				ITERATE_ON_OBJECT_TYPE(iVar3, 15);
				if (GET_NUM_ITERATOR_MATCHES(iVar3) < 0 && IS_LAYOUTREF_VALID(Global_26314))
				{
					bVar7 = START_OBJECT_ITERATOR(iVar3);
					if (IS_OBJECT_VALID(bVar7))
					{
						Function_181(2, 0, GET_PLAYER_ACTOR(0), bVar7, 0);
						GET_OBJECT_POSITION(bVar7, &vVar4);
						PRINTSTRING(GET_SHORT_SCRIPT_NAME());
						PRINTSTRING(": New Console Crime!");
						PRINTVECTOR(vVar4);
						PRINTNL();
					}
				}
				else if (GET_NUM_ITERATOR_MATCHES(iVar3) == 0)
				{
				}
				else if (!IS_LAYOUTREF_VALID(Global_26314))
				{
				}
			}
			else if (STRING_CONTAINS_STRING(bVar0, "finish"))
			{
				iVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
				if (IS_ITERATOR_VALID(iVar1))
				{
					ITERATE_EVERYWHERE(iVar1);
					ITERATE_ON_OBJECT_TYPE(iVar1, 31);
					if (GET_NUM_ITERATOR_MATCHES(iVar1) >= 0)
					{
						bVar2 = START_OBJECT_ITERATOR(iVar1);
						while (IS_OBJECT_VALID(bVar2))
						{
							if (IS_CRIME_IN_PROGRESS(GET_CRIME_FROM_OBJECT(bVar2)))
							{
								SET_CRIME_IN_PROGRESS(GET_CRIME_FROM_OBJECT(bVar2), 0);
								DESTROY_ITERATOR(iVar1);
								return 1;
							}
							bVar2 = OBJECT_ITERATOR_NEXT(iVar1);
						}
					}
				}
				DESTROY_ITERATOR(iVar1);
			}
		}
		return 1;
	}
	return 0;
}

var Function_181(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xEB22 / 60194
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	int iVar5;
	
	if (!Function_188(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_187(iParam1))
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
	if (!Function_184(1))
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
		iVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_10(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(uVar3, iVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(uVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(uVar3, 3);
			Function_182();
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

void Function_182() //Position: 0xEDB2 / 60850
{
	int iVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	
	iVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_183(iVar0, uVar1);
	bVar2 = START_OBJECT_ITERATOR(iVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(uVar3))
		{
			SET_CRIME_WITNESSED(uVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(iVar0);
	}
	DESTROY_ITERATOR(iVar0);
	return;
}

void Function_183(int iParam0, int iParam1) //Position: 0xEE15 / 60949
{
	ITERATE_EVERYWHERE(iParam0);
	ITERATE_ON_OBJECT_TYPE(iParam0, 31);
	if (!iParam1 != "")
	{
		ITERATE_IN_SET(iParam0, iParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(iParam0, GET_ITERATOR_PARENT(iParam0));
	}
	return;
}

bool Function_184(bool bParam0) //Position: 0xEE44 / 60996
{
	if (Function_537(256))
	{
		return 0;
	}
	if (Function_537(262144))
	{
		return 0;
	}
	if (Function_186())
	{
		return 0;
	}
	if (!Function_537(1))
	{
		return 0;
	}
	if (!Function_537(4096))
	{
		return 0;
	}
	if (bParam0 && Function_185(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_537(2048))
	{
		return 0;
	}
	if (Function_551() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_185(int iParam0) //Position: 0xEEBA / 61114
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_186() //Position: 0xEECB / 61131
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

bool Function_187(int iParam0) //Position: 0xEEE4 / 61156
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_188(int iParam0) //Position: 0xEEFA / 61178
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_189(bool bParam0) //Position: 0xEF0F / 61199
{
	bool bVar0;
	char* cVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "setweather"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			cVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
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
			Function_190(iVar2, FLOOR(STRING_TO_FLOAT(cVar1)), 0, 0, 0);
		}
		return 1;
	}
	return 0;
}

void Function_190(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xEFC4 / 61380
{
	int iVar0;
	bool bVar1;
	
	Function_194(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_193(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, iParam3);
			Function_191(StackVal, bVar1, bParam4);
		}
	}
}

void Function_191(int iParam0, bool bParam1, bool bParam2) //Position: 0xF036 / 61494
{
	int iVar0;
	
	Function_194(iParam0);
	Function_454(bParam1);
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
	Function_192();
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

void Function_192() //Position: 0xF1AF / 61871
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_193(int iParam0, bool bParam1) //Position: 0xF1BB / 61883
{
	bool bVar0;
	
	bVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_194(iParam0);
	Function_454(bVar0);
	PRINTNL();
	Function_191(iParam0, bVar0, bParam1);
	return;
}

void Function_194(int iParam0) //Position: 0xF1E0 / 61920
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

bool Function_195(bool bParam0) //Position: 0xF226 / 61990
{
	char* cVar0;
	char* cVar1;
	char* cVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "setwind"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			cVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			cVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			cVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			SET_WIND(STRING_TO_FLOAT(cVar0), STRING_TO_FLOAT(cVar1), STRING_TO_FLOAT(cVar2));
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

bool Function_196(bool bParam0) //Position: 0xF28A / 62090
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

bool Function_197(bool bParam0) //Position: 0xF2C7 / 62151
{
	char* cVar0;
	char* cVar1;
	char* cVar2;
	bool bVar3;
	int iVar4;
	vector3 vVar5;
	struct<8> Var8;
	
	if (STRING_CONTAINS_STRING(bParam0, "gps"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			cVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			cVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			cVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			vVar5 = { STRING_TO_FLOAT(cVar0), STRING_TO_FLOAT(cVar1), STRING_TO_FLOAT(cVar2) };
			Function_199(1.0f, 0.0f, 1.0f);
			Function_241(STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2));
		}
		else if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			bVar3 = GET_CONSOLE_COMMAND_TOKEN(1);
			iVar4 = Function_198(bVar3);
			if (Function_343(iVar4))
			{
				GET_OBJECT_POSITION(StackVal, &vVar5);
				Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_146(iVar4) };
				Function_241(StackVal, StackVal, vVar5);
			}
		}
		return 1;
	}
	return 0;
}

var Function_198(bool bParam0) //Position: 0xF364 / 62308
{
	int iVar0;
	bool bVar1;
	int iVar2;
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
		iVar2 = CREATE_OBJECT_ITERATOR(bVar1);
		if (IS_ITERATOR_VALID(iVar2))
		{
			bVar3 = START_OBJECT_ITERATOR(iVar2);
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
				bVar3 = OBJECT_ITERATOR_NEXT(iVar2);
			}
			DESTROY_ITERATOR(iVar2);
		}
	}
	return 4294967295;
}

void Function_199(var uParam0, var uParam1, int iParam2) //Position: 0xF41D / 62493
{
	Global_28185.f_60 = 5;
	Global_28185.f_64 = uParam0;
	Global_28185.f_68 = uParam1;
	Global_28185.f_72 = iParam2;
	return;
}

bool Function_200(bool bParam0) //Position: 0xF43E / 62526
{
	char* cVar0;
	char* cVar1;
	char* cVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "teleport"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			cVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			cVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			cVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			Function_201(STRING_TO_FLOAT(cVar0), STRING_TO_FLOAT(cVar1), STRING_TO_FLOAT(cVar2), "TELEPORTING...", "", 1, 1);
		}
		return 1;
	}
	return 0;
}

void Function_201(vector3 vParam0, char* cParam3, char* cParam4, var uParam5, var uParam6) //Position: 0xF49E / 62622
{
	Global_13112.f_72 = 4294967295;
	Global_13112 = { StackVal, StackVal, vParam0 };
	strcpy(&Global_13112 + 24, cParam3, 24);
	strcpy(&Global_13112 + 48, cParam4, 24);
	Global_13112.f_76 = uParam5;
	Global_13112.f_80 = uParam6;
}

bool Function_202(bool bParam0) //Position: 0xF4D5 / 62677
{
	char* cVar0;
	int iVar1;
	var uVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "nvteleport"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			cVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			iVar1 = Function_198(cVar0);
			if (Function_343(iVar1))
			{
				memcpy(&uVar2, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_146(iVar1), 4);
				Function_203(iVar1, "Teleporting to %s...", &uVar2, 1, 1);
			}
		}
		return 1;
	}
	return 0;
}

void Function_203(var uParam0, char* cParam1, char* cParam2, var uParam3, var uParam4) //Position: 0xF53C / 62780
{
	Global_13112.f_72 = uParam0;
	Global_13112 = { 0.0f, 0.0f, 0.0f };
	strcpy(&Global_13112 + 24, cParam1, 24);
	strcpy(&Global_13112 + 48, cParam2, 24);
	Global_13112.f_76 = uParam3;
	Global_13112.f_80 = uParam4;
}

bool Function_204(bool bParam0) //Position: 0xF573 / 62835
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

bool Function_205(bool bParam0) //Position: 0xF5D2 / 62930
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "toggle"))
	{
		bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			if (STRINGS_ARE_EQUAL(bVar0, "channel"))
			{
				return Function_207();
			}
			if (STRINGS_ARE_EQUAL(bVar0, "flag"))
			{
				return Function_206();
			}
			return 0;
		}
	}
	return 0;
}

int Function_206() //Position: 0xF62B / 63019
{
	bool bVar0;
	
	bVar0 = GET_CONSOLE_COMMAND_TOKEN(2);
	if (STRINGS_ARE_EQUAL(bVar0, "ambient"))
	{
		if (Function_367(4))
		{
			Function_538(4);
		}
		else
		{
			Function_375(4);
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
		if (Function_367(1))
		{
			Function_538(1);
		}
		else
		{
			Function_375(1);
		}
		ENABLE_AMBIENT_SPAWNING(Function_367(1));
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "locname"))
	{
		if (Function_367(32))
		{
			Function_538(32);
		}
		else
		{
			Function_375(32);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "clock"))
	{
		if (Function_367(64))
		{
			Function_538(64);
		}
		else
		{
			Function_375(64);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "adebug"))
	{
		if (Function_367(128))
		{
			Function_538(128);
		}
		else
		{
			Function_375(128);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "law"))
	{
		if (!Function_537(256))
		{
			Function_556(256);
		}
		else
		{
			Function_374(256);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_207() //Position: 0xF788 / 63368
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

bool Function_208(bool bParam0) //Position: 0xF8F5 / 63733
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
			bVar0 = Function_210(iVar1, bParam0);
			if (DOES_SCRIPT_EXIST(bVar0))
			{
				vVar56 = { 0.0f, 0.0f, -95.0f };
				bVar59 = GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0));
				GET_OBJECT_RELATIVE_POSITION(bVar59, vVar56, &vVar53);
				if (!Function_209(&vVar53, 50.0f, &iVar2 + 8, 4294967295))
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

bool Function_209(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0xFA2B / 64043
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
		if (!Function_58(StackVal, StackVal, *iParam2))
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
			if (!Function_58(StackVal, StackVal, *iParam2))
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

var Function_210(char* cParam0, char* cParam1) //Position: 0xFB5D / 64349
{
	char* cVar0[64];
	
	switch (cParam0)
	{
		case 0x00000000:
			strcpy(&cVar0, "AMBIENT", 64);
			break;
	}
	FILE_START_PATH(&cVar0);
	FILE_ADD_TO_PATH(cParam1);
	FILE_END_PATH();
	return FILE_GET_CURRENT_PATH();
}

bool Function_211(bool bParam0) //Position: 0xFB91 / 64401
{
	bool bVar0;
	int iVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "end"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			bVar0 = Function_212(iVar1, bParam0);
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

var Function_212(char* cParam0, bool bParam1) //Position: 0xFC6B / 64619
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

bool Function_213(bool bParam0) //Position: 0xFD7D / 64893
{
	bool bVar0;
	int iVar1;
	char* cVar2[64];
	
	if (STRING_CONTAINS_STRING(bParam0, "start"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			bVar0 = Function_212(iVar1, bParam0);
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

bool Function_214(bool bParam0) //Position: 0xFF0D / 65293
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
				bVar0 = Function_212(iVar1, bParam0);
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

bool Function_215(bool bParam0) //Position: 0x100E5 / 65765
{
	char* cVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (STRING_CONTAINS_STRING(cParam0, "run"))
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
				cVar0 = Function_212(iVar2, bParam0);
				if (DOES_SCRIPT_EXIST(cVar0))
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

bool Function_216(bool bParam0) //Position: 0x10385 / 66437
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (STRING_CONTAINS_STRING(cParam0, "switchentity"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			uVar0 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar1 = GET_ACTOR_ENUM_FROM_STRING(uVar0);
			if (Function_217(iVar1))
			{
				iVar2 = 4294967295;
				if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
				{
					bVar3 = GET_CONSOLE_COMMAND_TOKEN(3);
					iVar2 = STRING_TO_INT(bVar3);
				}
				else
				{
					iVar2 = 0;
				}
				if (iVar2 > GET_ACTOR_ENUM_VARIATION_COUNT(iVar1))
				{
					PRINTSTRING("variation ");
					PRINTINT(iVar2);
					PRINTSTRING("is out of range (");
					PRINTINT(GET_ACTOR_ENUM_VARIATION_COUNT(iVar1));
					PRINTSTRING(")");
					PRINTNL();
					iVar2 = 4294967295;
				}
				else
				{
					SWITCH_PLAYER_TO_ENUM(iVar1, iVar2);
				}
			}
		}
		return 1;
	}
	return 0;
}

bool Function_217(int iParam0) //Position: 0x10433 / 66611
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

bool Function_218(bool bParam0) //Position: 0x1044A / 66634
{
	if (STRING_CONTAINS_STRING(cParam0, "givecontrolback"))
	{
		SET_PLAYER_CONTROL(0, 1, 1, 1);
		return 1;
	}
	return 0;
}

var Function_219() //Position: 0x10474 / 66676
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

int Function_220() //Position: 0x10487 / 66695
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

void Function_221() //Position: 0x10506 / 66822
{
	Function_556(512);
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

int Function_222(int iParam0, int iParam1) //Position: 0x10542 / 66882
{
	return Global_16474[iParam18][iParam0];
}

bool Function_223(int iParam0) //Position: 0x10553 / 66899
{
	int iVar0;
	float fVar1;
	
	fVar1 = GET_PROFILE_TIME();
	iVar0 = *iParam0;
	while (iVar0 < (Global_13172 - 1))
	{
		if (Function_229(iVar0) == 4294967295 && Function_226(Function_227(iVar0)))
		{
			Global_16474[Function_229(iVar0)8][Function_227(iVar0)]++;
		}
		if ((GET_PROFILE_TIME() - fVar1) < 300.0f)
		{
			*iParam0 = iVar0;
			return 0;
		}
		iVar0++;
	}
	Function_224();
	return 1;
}

void Function_224() //Position: 0x105C7 / 67015
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
			Function_225(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_225(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1080E / 67598
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_226(int iParam0) //Position: 0x10837 / 67639
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

int Function_227(int iParam0) //Position: 0x1084C / 67660
{
	if (!Function_228(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

bool Function_228(int iParam0) //Position: 0x10867 / 67687
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_229(int iParam0) //Position: 0x1087E / 67710
{
	if (!Function_230(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_230(int iParam0) //Position: 0x10898 / 67736
{
	if (!Function_228(iParam0))
	{
		return 0;
	}
	if (!Function_231(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_231(int iParam0) //Position: 0x108BC / 67772
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_232() //Position: 0x108D1 / 67793
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

void Function_233(int iParam0) //Position: 0x10911 / 67857
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 40)
	{
		if (iVar0 <= 21)
		{
			if (!Function_551())
			{
				SET_WEAPON_GOLD(Global_34573, iVar0, iParam0);
			}
			else
			{
				SET_WEAPON_GOLD(Global_34573, iVar0, (Global_83823[iVar0] && iParam0));
			}
		}
		iVar0++;
	}
	return;
}

bool Function_234() //Position: 0x10958 / 67928
{
	if (Function_510(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_235(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x10973 / 67955
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_236(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

struct<16> Function_236(int iParam0) //Position: 0x109EE / 68078
{
	char* cVar0[16];
	
	if (!Function_234())
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

void Function_237() //Position: 0x10A2D / 68141
{
	int iVar0;
	
	if (Global_3365 && !Global_34165.f_44)
	{
		PRINTSTRING("Current time is ");
		Function_454(GET_TIME_OF_DAY());
		PRINTNL();
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (iVar0 != 0 || iVar0 != 1)
			{
				PRINTSTRING("Current pursuit time for faction is ");
				Function_454((*&Global_26316 + 88)[iVar0]);
				PRINTNL();
				if (!Function_239((*&Global_26316 + 88)[iVar0]) && !Global_3364)
				{
					if (IS_EARLIER_THAN((*&Global_26316 + 88)[iVar0], false))
					{
						Function_238(iVar0, 0, 0, Function_265(RAND_INT_RANGE(30, 75)), 0);
					}
				}
			}
			iVar0++;
		}
	}
	return;
}

void Function_238(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x10AEC / 68332
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, iParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_239((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

bool Function_239(bool bParam0) //Position: 0x10B32 / 68402
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

void Function_240(bool bParam0) //Position: 0x10B57 / 68439
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
				DECOR_SET_BOOL(Global_34573, "OnLoad_ForceSpawnPlayerHorse", 1);
			}
		}
		iVar0++;
	}
	return;
}

void Function_241(vector3 vParam0) //Position: 0x10BB4 / 68532
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
		Function_242(Global_28210.f_12);
		CLEAN_OBJECTSET(Global_28210.f_12);
	}
	Global_28210.f_92 = 1;
	Global_28210.f_96 = 1;
	return;
}

void Function_242(bool bParam0) //Position: 0x10C3B / 68667
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

bool Function_243(vector3 vParam0, vector3 vParam3) //Position: 0x10C7B / 68731
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_244() //Position: 0x10CA8 / 68776
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

void Function_245() //Position: 0x10CDF / 68831
{
	Function_246(0, 6, Global_30668[0], 0, -839.76f, 92.55f, 2372.67f, 0);
	Function_246(1, 2, Global_30640[0], 0, -2157.0f, 20.0f, 2603.0f, 50);
	Function_246(13, 1, Global_30640[1], 0, -3217.549f, 17.83068f, 2714.036f, 5);
	Function_246(2, 2, Global_30668[1], 0, 124.9729f, 76.74391f, 2235.933f, 100);
	Function_246(3, 2, Global_30658[1], 0, -3652.31f, 42.81397f, 2086.111f, 100);
	Function_246(14, 1, Global_30679[0], 0, -3196.344f, 41.34254f, 3752.696f, 5);
	Function_246(4, 6, Global_30633[0], 1, -3837.73f, 2.734276f, 4225.234f, 0);
	Function_246(6, 2, Global_30693[0], 1, -2688.45f, 31.55404f, 4294.648f, 200);
	Function_246(7, 2, Global_30707[2], 1, -809.4502f, 16.66866f, 3705.639f, 250);
	Function_246(5, 2, Global_30685[0], 1, -4328.384f, 22.34859f, 4461.055f, 150);
	Function_246(8, 2, Global_30707[0], 1, -434.7641f, 22.53568f, 3929.63f, 150);
	Function_246(9, 6, Global_30717[0], 2, 710.5591f, 82.67567f, 1320.149f, 0);
	Function_246(10, 2, Global_30723[1], 2, -442.8723f, 153.7947f, 1669.459f, 400);
	Function_246(11, 6, Global_30717[1], 2, -100.4297f, 119.5743f, 1354.821f, 0);
	Function_246(12, 6, Global_30717[1], 2, -100.4297f, 119.5743f, 1354.821f, 0);
	return;
}

void Function_246(int iParam0, int iParam1, var uParam2, int iParam3, vector3 vParam4, int iParam7) //Position: 0x10E99 / 69273
{
	if (!Function_90(iParam0))
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

void Function_247() //Position: 0x10FB0 / 69552
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
	if (Function_523(64))
	{
		Function_254(31, 10000.0f, "ANTITANK", "ANTITANK_DES", "p_gen_buySellBox01x", 2, 1, 1);
	}
	Function_254(15, 250.0f, "nSAWED_OFF", "SAWED_OFF_DES", "p_gen_buySellBox01x", 2, Function_253(15), 1);
	Function_254(16, 150.0f, "DOUBLE_BARREL", "D_BARREL_DES", "p_gen_buySellBox01x", 2, Function_253(16), 1);
	Function_254(17, 600.0f, "PUMP_ACTION", "P_ACTION_DES", "p_gen_buySellBox01x", 2, Function_253(17), 1);
	Function_254(18, 1000.0f, "SEMI_SHOTGUN", "SEMI_SG_DES", "p_gen_buySellBox01x", 2, 1, 1);
	Function_254(19, 500.0f, "ROLLING_BLOCK", "ROLLING_B_DES", "p_gen_buySellBox01x", 2, Function_253(19), 1);
	Function_254(20, 1100.0f, "CARCANO", "CARCANO_DES", "p_gen_buySellBox01x", 2, 1, 1);
	Function_254(23, 25.0f, "FIREBOTTLE", "FIREBOTTLE_DES", "p_gen_buySellBox02x", 1, Function_253(23), 1);
	Function_254(24, 45.0f, "DYNAMITE", "DYNAMITE_DES", "p_gen_buySellBox02x", 1, Function_253(24), 1);
	Function_254(25, 20.0f, "nTRW_KNIFE", "TRW_KNIFE_DES", "p_gen_buySellBox02x", 1, Function_253(25), 1);
	if (Function_523(32))
	{
		Function_254(29, 20.0f, "TOMAHAWK", "TOMAHAWK_DES", "p_gen_buySellBox02x", 1, 1, 1);
	}
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
	if (Function_72(3, 1))
	{
		Function_252(10, 70.0f, "ELEGANT_SUIT", "ELEGANT_SUIT_DES", "p_gen_buySellBox02x", 1, 0, 1);
	}
	else
	{
		Function_252(10, 70.0f, "ELEGANT_SUIT", "ELEGANT_SUIT_DES", "p_gen_buySellBox02x", 1, 1, 1);
	}
	if (Function_72(7, 32))
	{
		Function_252(53, 50.0f, "SCRAP_BANDITO", "SCRAP_BANDITO_DES", "p_gen_buySellBox02x", 1, 0, 1);
	}
	else
	{
		Function_252(53, 50.0f, "SCRAP_BANDITO", "SCRAP_BANDITO_DES", "p_gen_buySellBox02x", 1, 1, 1);
	}
	if (Function_72(5, 32))
	{
		Function_252(54, 100.0f, "SCRAP_CATTLE", "SCRAP_CATTLE_DES", "p_gen_buySellBox02x", 1, 0, 1);
	}
	else
	{
		Function_252(54, 100.0f, "SCRAP_CATTLE", "SCRAP_CATTLE_DES", "p_gen_buySellBox02x", 1, 1, 1);
	}
	if (IS_PS3() || Function_456())
	{
		if (Function_72(4, 32))
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
	if (Function_72(9, 32))
	{
		Function_252(56, 200.0f, "SCRAP_MILITARY", "SCRAP_MILITARY_DES", "p_gen_buySellBox02x", 1, 0, 1);
	}
	else
	{
		Function_252(56, 200.0f, "SCRAP_MILITARY", "SCRAP_MILITARY_DES", "p_gen_buySellBox02x", 1, Function_251(56), 1);
	}
	if (Function_72(6, 32))
	{
		Function_252(58, 250.0f, "SCRAP_TREASURE", "SCRAP_TREASURE_DES", "p_gen_buySellBox02x", 1, 0, 1);
	}
	else
	{
		Function_252(58, 250.0f, "SCRAP_TREASURE", "SCRAP_TREASURE_DES", "p_gen_buySellBox02x", 1, 1, 1);
	}
	if (Function_72(8, 32))
	{
		Function_252(57, 100.0f, "SCRAP_REBEL", "SCRAP_REBEL_DES", "p_gen_buySellBox02x", 1, 0, 1);
	}
	else
	{
		Function_252(57, 100.0f, "SCRAP_REBEL", "SCRAP_REBEL_DES", "p_gen_buySellBox02x", 1, Function_251(57), 1);
	}
	if (Function_82())
	{
		Function_252(30, 3000.0f, "HORSE_AMERICAN", "HORSE_AMERICAN_DES", "p_gen_buySellBox02x", 0, Function_251(30), 1);
		Function_252(31, 1000.0f, "HORSE_ARDENNAIS", "HORSE_ARDENNAIS_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_252(32, 1000.0f, "HORSE_CLEVELAND", "HORSE_CLEVELAND_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_252(33, 1000.0f, "HORSE_DUTCH", "HORSE_DUTCH_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_252(34, 400.0f, "HORSE_HEDOR", "HORSE_HEDOR_DES", "p_gen_buySellBox02x", 0, Function_251(34), 1);
		Function_252(35, 1000.0f, "HORSE_HIGHLAND", "HORSE_HIGHLAND_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_252(36, 3000.0f, "HORSE_HUNGARIAN", "HORSE_HUNGARIAN_DES", "p_gen_buySellBox02x", 0, Function_251(36), 1);
		Function_252(37, 200.0f, "HORSE_INFESTED", "HORSE_INFESTED_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_252(38, 200.0f, "HORSE_JADED", "HORSE_JADED_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_252(39, 3000.0f, "HORSE_KENTUCKY", "HORSE_KENTUCKY_DES", "p_gen_buySellBox02x", 0, Function_251(39), 1);
		Function_252(40, 1000.0f, "HORSE_LUSITANO", "HORSE_LUSITANO_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_252(41, 200.0f, "nHORSE_NAG", "HORSE_NAG_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_252(42, 1000.0f, "HORSE_PAINTED", "HORSE_PAINTED_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_252(43, 1000.0f, "HORSE_PAINTSTD", "HORSE_PAINTSTD_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_252(44, 400.0f, "HORSE_PICOR", "HORSE_PICOR_DES", "p_gen_buySellBox02x", 0, Function_251(44), 1);
		Function_252(45, 1000.0f, "HORSE_PINTO", "HORSE_PINTO_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_252(46, 1000.0f, "HORSE_QUARTER", "HORSE_QUARTER_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_252(47, 400.0f, "HORSE_SENOR", "HORSE_SENOR_DES", "p_gen_buySellBox02x", 0, Function_251(47), 1);
		Function_252(48, 1000.0f, "HORSE_TERSK", "HORSE_TERSK_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_252(49, 1000.0f, "HORSE_TOBIANO", "HORSE_TOBIANO_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_252(50, 1000.0f, "HORSE_TURKMEN", "HORSE_TURKMEN_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_252(51, 1000.0f, "HORSE_WELSH", "HORSE_WELSH_DES", "p_gen_buySellBox02x", 0, 1, 1);
		Function_252(52, 10000.0f, "nHORSE_WAR", "HORSE_WAR_DES", "p_gen_buySellBox02x", 0, 1, 1);
	}
	else
	{
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
		Function_252(52, 10000.0f, "nHORSE_WAR", "HORSE_WAR_DES", "p_gen_buySellBox02x", 0, 1, 1);
	}
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
	if (Function_523(64))
	{
		Function_250(13, 20.0f, "AM_AT", "nAM_AT_DES", "p_gen_buySellBox03x", 0, 0);
	}
	Function_250(10, 30.0f, "AM_SHOT", "AM_SHOT_DES", "p_gen_buySellBox03x", 0, 0);
	Function_250(11, 40.0f, "AM_SNIPR", "AM_SNIPR_DES", "p_gen_buySellBox03x", 0, 0);
	if (Function_82())
	{
		Function_248(492, 1.0f, "sn_h_bw_des", "p_gen_package01x", "Pouch_01", 0);
		Function_248(491, 1.0f, "sn_h_ds_des", "p_gen_package01x", "Pouch_01", 0);
		Function_248(494, 2.0f, "sn_h_gc_des", "p_gen_package01x", "Pouch_01", 0);
		Function_248(496, 2.0f, "sn_h_hs_des", "p_gen_package01x", "Pouch_01", 0);
		Function_248(493, 2.0f, "sn_h_po_des", "p_gen_package01x", "Pouch_01", 0);
		Function_248(490, 1.0f, "sn_h_pp_des", "p_gen_package01x", "Pouch_01", 0);
		Function_248(498, 1.0f, "sn_h_rs_des", "p_gen_package01x", "Pouch_01", 0);
		Function_248(497, 3.0f, "sn_h_vs_des", "p_gen_package01x", "Pouch_01", 0);
		Function_248(499, 1.0f, "sn_h_wf_des", "p_gen_package01x", "Pouch_01", 0);
		Function_248(495, 2.0f, "sn_h_wo_des", "p_gen_package01x", "Pouch_01", 0);
		Function_248(500, 1.0f, "sn_a1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(501, 2.0f, "sn_a1_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(502, 2.0f, "sn_b1_w_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(503, 3.0f, "sn_b2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(504, 5.0f, "sn_b2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(505, 4.0f, "sn_b2_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(506, 3.0f, "sn_b2_t_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(507, 2.0f, "sn_b3_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(508, 5.0f, "sn_b3_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(509, 2.0f, "sn_b4_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(510, 3.0f, "sn_b4_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(511, 5.0f, "sn_b4_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(512, 2.0f, "sn_b5_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(513, 2.0f, "sn_b5_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(514, 3.0f, "sn_b5_t_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(515, 2.0f, "sn_b6_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(516, 3.0f, "sn_b6_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(517, 5.0f, "sn_b6_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(518, 2.0f, "sn_b7_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(519, 2.0f, "sn_b7_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(520, 3.0f, "sn_b7_a_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(521, 4.0f, "sn_b8_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(522, 5.0f, "sn_b8_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(523, 3.0f, "sn_b8_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(524, 1.0f, "sn_c1_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(529, 1.0f, "sn_c5_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(530, 1.0f, "sn_c5_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(525, 2.0f, "sn_c2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(526, 3.0f, "sn_c2_p_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(527, 5.0f, "sn_c2_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(528, 3.0f, "sn_c2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(531, 1.0f, "sn_c3_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(532, 2.0f, "sn_c3_p_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(533, 1.0f, "sn_c4_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(534, 2.0f, "sn_d1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(535, 2.0f, "sn_d1_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(537, 1.0f, "sn_d3_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(536, 1.0f, "sn_d3_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(538, 1.0f, "sn_d2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(539, 3.0f, "sn_e1_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(540, 3.0f, "sn_e2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(541, 4.0f, "sn_e2_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(542, 5.0f, "sn_e2_a_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(543, 2.0f, "sn_f1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(544, 5.0f, "sn_f1_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(545, 2.0f, "sn_g1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(546, 3.0f, "sn_g2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(547, 5.0f, "sn_g2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(548, 3.0f, "sn_g2_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(549, 5.0f, "sn_g2_t_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(550, 6.0f, "sn_g2_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(551, 1.0f, "sn_g3_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(552, 2.0f, "sn_h1_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(580, 1.0f, "sn_h2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(581, 1.0f, "sn_h2_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(553, 1.0f, "sn_m1_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(596, 1.0f, "sn_m1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(554, 16.0f, "sn_xw_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(555, 24.0f, "sn_xw_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(556, 22.0f, "sn_xw_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(557, 18.0f, "sn_xb_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(558, 24.0f, "sn_xb_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(559, 18.0f, "sn_xb_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(560, 16.0f, "sn_xb_c_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(561, 22.0f, "sn_xb_t_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(562, 16.0f, "sn_xc_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(563, 12.0f, "sn_xc_p_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(564, 18.0f, "sn_xc_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(565, 21.0f, "sn_xc_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(566, 16.0f, "sn_nb_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(567, 18.0f, "sn_nb_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(568, 24.0f, "sn_nb_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(569, 18.0f, "sn_nb_t_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(570, 1.0f, "sn_o1_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(571, 2.0f, "sn_p1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(572, 1.0f, "sn_r1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(573, 1.0f, "sn_r2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(574, 2.0f, "sn_r2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(575, 2.0f, "sn_s1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(576, 2.0f, "sn_s1_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(577, 1.0f, "sn_s2_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(578, 2.0f, "sn_s2_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(579, 2.0f, "sn_s3_s_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(582, 1.0f, "sn_sb_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(583, 1.0f, "sn_v_f_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(584, 3.0f, "sn_w1_m_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(585, 3.0f, "sn_w1_p_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
		Function_248(586, 5.0f, "sn_w1_h_des", "p_gen_bedRollClosed01x", "Pouch_03", 2);
	}
	else
	{
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
	}
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

int Function_248(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x1602A / 90154
{
	var uVar0;
	struct<2> Var1;
	int iVar3;
	
	if (!IS_STRING_VALID(bParam2))
	{
		LOG_ERROR("SHOP_REGISTER_COLLECTABLE: txtCollectableDescription is invalid!");
		return 0;
	}
	if (IS_STRING_VALID(bParam3))
	{
		uVar0 = GET_ASSET_ID(bParam3, 0);
		if (!UNK_0x214AFB8C(uVar0))
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
	if (Function_18(iParam0) == 2)
	{
		iVar3 = Global_61639[iParam0];
		if (iVar3 <= 107)
		{
			Function_249(iParam0);
			Var1 = { StackVal, Function_249(iParam0) };
			Global_60461[iVar311].f_4 = STRING_TO_HASH(&Var1);
			Global_60461[iVar311] = uParam1;
			Global_60461[iVar311].f_8 = STRING_TO_HASH(bParam2);
			Global_60461[iVar311].f_28 = uVar0;
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

struct<8> Function_249(int iParam0) //Position: 0x16251 / 90705
{
	struct<2> Var0;
	
	Var0 = { StackVal, Global_35278[iParam020] };
	return StackVal, Var0;
}

int Function_250(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x16268 / 90728
{
	var uVar0;
	
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
		uVar0 = GET_ASSET_ID(bParam4, 0);
		if (!UNK_0x214AFB8C(uVar0))
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
		Global_60316[iParam08].f_12 = uVar0;
		Global_60316[iParam08].f_16 = iParam5;
		Global_60316[iParam08].f_24 = iParam6;
		return 1;
	}
	return 0;
}

int Function_251(bool bParam0) //Position: 0x16397 / 91031
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_GET_SAVED_AMMO_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	return Global_62378[bParam0];
}

int Function_252(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x163F3 / 91123
{
	var uVar0;
	
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
		uVar0 = GET_ASSET_ID(bParam4, 0);
		if (!UNK_0x214AFB8C(uVar0))
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
		Global_59675[iParam08].f_12 = uVar0;
		Global_59675[iParam08].f_16 = iParam5;
		Global_59675[iParam08].f_24 = iParam6;
		Global_59675[iParam08].f_28 = iParam7;
		return 1;
	}
	return 0;
}

int Function_253(bool bParam0) //Position: 0x1652A / 91434
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_GET_SAVED_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	return Global_62337[bParam0];
}

int Function_254(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x16588 / 91528
{
	var uVar0;
	
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
		uVar0 = GET_ASSET_ID(bParam4, 0);
		if (!UNK_0x214AFB8C(uVar0))
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
		Global_59354[iParam08].f_12 = uVar0;
		Global_59354[iParam08].f_16 = iParam5;
		Global_59354[iParam08].f_24 = iParam6;
		Global_59354[iParam08].f_28 = iParam7;
		return 1;
	}
	return 0;
}

int Function_255(int iParam0, int iParam1) //Position: 0x166CC / 91852
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

int Function_256(int iParam0, int iParam1) //Position: 0x16726 / 91942
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

void Function_257(int iParam0) //Position: 0x16782 / 92034
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_265(200)), 0);
	return;
}

void Function_258(int iParam0) //Position: 0x167A3 / 92067
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, iParam0, 0);
	return;
}

void Function_259(int iParam0) //Position: 0x167BE / 92094
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_265(105)), 0);
	return;
}

void Function_260(int iParam0) //Position: 0x167DF / 92127
{
	Global_12976.f_16 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 16, 0, 0, (iParam0 + Function_265(90)), 0);
	return;
}

void Function_261(int iParam0) //Position: 0x16800 / 92160
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_265(90)), 0);
	return;
}

void Function_262(int iParam0) //Position: 0x16821 / 92193
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_454(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_454(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, 0, iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_454(Global_12976.f_24);
	PRINTNL();
	Function_261(iParam0);
	return;
}

void Function_263(int iParam0) //Position: 0x168BD / 92349
{
	Global_12976 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976, 0, 0, (iParam0 + Function_265(90)), 0);
	return;
}

void Function_264(int iParam0) //Position: 0x168DA / 92378
{
	Global_12976.f_8 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 8, 0, 0, (iParam0 + Function_265(90)), 0);
	return;
}

int Function_265(int iParam0) //Position: 0x168FB / 92411
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_266(bool bParam0) //Position: 0x16911 / 92433
{
	if (bParam0)
	{
		Function_375(512);
	}
	else
	{
		Function_538(512);
	}
	return;
}

void Function_267(int iParam0, bool bParam1, bool bParam2) //Position: 0x1692B / 92459
{
	int iVar0;
	bool bVar1;
	
	if (Function_275(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_82())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_522(1);
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
			Function_274(1, bVar1);
			if (!bParam2)
			{
				if (!Function_65(Global_76848, 1))
				{
					Function_60(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_273(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_65(Global_76848, 2))
				{
					Function_60(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_420(1, bVar1, 0, 0);
	}
	else
	{
		Function_8(1, (4294967295 * bVar1), 0);
	}
	if (Function_522(1) <= 4294962296)
	{
		Function_521(1, 4294962296, 0);
	}
	else if (Function_522(1) >= 5000)
	{
		Function_521(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_19(1));
	iVar0 = Function_522(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_269(2, Function_272(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_269(2, Function_272(Global_12976.f_152), 0);
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
				Function_269(2, Function_272(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_269(2, Function_272(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_269(2, Function_272(Global_12976.f_152), 1);
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
				Function_269(2, Function_272(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_269(2, Function_272(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_269(2, Function_272(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_269(2, Function_272(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_269(2, Function_272(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_269(2, Function_272(Global_12976.f_152), 1);
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
				Function_269(2, Function_272(Global_12976.f_152), 0);
			}
			break;
	}
	Function_268(Global_12976.f_152, Global_12976.f_156);
	return;
}

void Function_268(int iParam0, int iParam1) //Position: 0x16C4C / 93260
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

int Function_269(int iParam0, char* cParam1, bool bParam2) //Position: 0x16EAA / 93866
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
	Function_270(iParam0, cParam1, 0, 1);
	iVar1 = Function_112();
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

int Function_270(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x1702F / 94255
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
		Function_271(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_271(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, bool bParam10) //Position: 0x17381 / 95105
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

var Function_272(int iParam0) //Position: 0x17404 / 95236
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

int Function_273(int iParam0, bool bParam1) //Position: 0x174A7 / 95399
{
	bool bVar0;
	int iVar1;
	
	Function_8(iParam0, bParam1, 0);
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
	iVar1 = Function_115(iParam0, 4294967295);
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
	iVar1 = Function_112();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_274(int iParam0, bool bParam1) //Position: 0x17643 / 95811
{
	bool bVar0;
	int iVar1;
	
	Function_420(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_115(iParam0, 4294967295);
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
	iVar1 = Function_112();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_275(int iParam0) //Position: 0x177E0 / 96224
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_276(int iParam0, bool bParam1, bool bParam2) //Position: 0x177EF / 96239
{
	int iVar0;
	bool bVar1;
	
	if (Function_275(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_82())
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
	iVar0 = Function_522(3);
	Function_278();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_274(3, bVar1);
		if (!bParam2)
		{
			if (!Function_65(Global_76848, 4))
			{
				Function_60(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_420(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_19(3));
	iVar0 = Function_522(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_269(4, Function_277(Global_12976.f_156), 1);
				Function_268(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_269(4, Function_277(Global_12976.f_156), 1);
				Function_268(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_269(4, Function_277(Global_12976.f_156), 1);
				Function_268(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_269(4, Function_277(Global_12976.f_156), 1);
				Function_268(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_269(4, Function_277(Global_12976.f_156), 1);
				Function_268(Global_12976.f_152, Global_12976.f_156);
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

var Function_277(int iParam0) //Position: 0x179BE / 96702
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

void Function_278() //Position: 0x17A4D / 96845
{
	Function_280(3, 0.0f);
	Function_279(3, 10000.0f);
	return;
}

int Function_279(int iParam0, int iParam1) //Position: 0x17A63 / 96867
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_280(int iParam0, int iParam1) //Position: 0x17AA3 / 96931
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

bool Function_281() //Position: 0x17AE3 / 96995
{
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (!Function_282(Global_12976.f_36, 1, 0x41700000))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_282(bool bParam0, bool bParam1, float fParam2) //Position: 0x17B09 / 97033
{
	float fVar0;
	bool bVar1;
	
	if (Function_551() || !bParam1)
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

void Function_283(bool bParam0, int iParam1) //Position: 0x17BA6 / 97190
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_551())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_284(bool bParam0) //Position: 0x17BE8 / 97256
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_285();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_34();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_552(&Global_63095, 1);
		Function_552(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_285() //Position: 0x17C39 / 97337
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_234())
	{
		Function_287(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_287(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_286(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_286(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_58(StackVal, StackVal, vVar0))
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

vector3 Function_286(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x17CF4 / 97524
{
	int iVar0;
	
	iVar0 = Function_91(uParam2, uParam3);
	if (Function_90(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_553(&Global_63095, 1);
			Function_552(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_553(&Global_63095, 2);
			Function_552(&Global_63095, 1);
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
		Function_553(&Global_63095, 2);
		Function_552(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_134();
	return StackVal, StackVal, Function_134();
}

vector3 Function_287(var uParam0, int iParam1) //Position: 0x17DDB / 97755
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_289(Global_34573, &vVar4);
	if (!Function_288(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -130.87f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.09f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 206.26f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 106.17f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 343.64f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 165.38f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -97.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -6.71f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -180.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 22.55f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -104.45f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 270.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 59.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 20.74f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 94.65f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_288(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -39.9f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	bVar10 = VDIST(vVar4, vVar7);
	if (bVar10 > bVar0)
	{
		bVar0 = bVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_553(&Global_63095, 2);
	Function_552(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_58(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_288(int iParam0) //Position: 0x18601 / 99841
{
	bool bVar0;
	
	bVar0 = Global_29008[iParam0];
	return (((Function_510(bVar0, 0x1000000) || Function_510(bVar0, 0x2000000)) || Function_510(bVar0, 0x4000000)) || !Function_510(bVar0, 0x10000000));
}

void Function_289(bool bParam0, int iParam1) //Position: 0x1863C / 99900
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_290() //Position: 0x18649 / 99913
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

void Function_291(int iParam0, bool bParam1) //Position: 0x18677 / 99959
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
							Function_60(Global_34573, 0x1000000, 3, 0);
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
							Function_60(Global_34573, 0x1000000, 3, 0);
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
							Function_60(Global_34573, 0x1000000, 3, 0);
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
							Function_60(Global_34573, 0x1000000, 3, 0);
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
							Function_60(Global_34573, 0x1000000, 3, 0);
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
							Function_60(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_291(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_291(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_291(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_291(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_291(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_291(57, 0);
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

void Function_292(int iParam0) //Position: 0x1896E / 100718
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* cVar5[16];
	
	iVar0 = *iParam0;
	iVar1 = Function_298(*iParam0);
	iVar2 = StackVal;
	iVar4 = Function_297(iVar0, iVar1, Global_13172[iVar211].f_32, Global_13172[iVar211].f_28, Global_13172[iVar211].f_20);
	if (Global_13172[iVar211].f_32 < iParam0->f_40 || Global_13172[iVar211].f_32 > 1.0f)
	{
		Global_13172[iVar211].f_32 = iParam0->f_40;
		cVar5 = { StackVal, StackVal, StackVal, Function_296(iVar0) };
		stradd(&cVar5, "_Float2", 16);
		UPDATE_PROFILE_STAT(&cVar5, iParam0->f_40, 1);
	}
	switch (iVar1)
	{
		case 0x00000000:
			if (Global_13172[iVar211].f_20 <= iParam0->f_28)
			{
				Global_13172[iVar211].f_20 = iParam0->f_28;
				cVar5 = { StackVal, StackVal, StackVal, Function_296(iVar0) };
				stradd(&cVar5, "_Int1", 16);
				UPDATE_PROFILE_STAT(&cVar5, TO_FLOAT(iParam0->f_28), 1);
			}
			if (Global_13172[iVar211].f_24 <= iParam0->f_32)
			{
				Global_13172[iVar211].f_24 = iParam0->f_32;
			}
		
		case 0x00000001:
			if (Global_13172[iVar211].f_28 > iParam0->f_36)
			{
				Global_13172[iVar211].f_28 = iParam0->f_36;
				cVar5 = { StackVal, StackVal, StackVal, Function_296(iVar0) };
				stradd(&cVar5, "_Float1", 16);
				UPDATE_PROFILE_STAT(&cVar5, iParam0->f_36, 1);
			}
			break;
		
		case 0x00000002:
			if (Global_13172[iVar211].f_28 > iParam0->f_36)
			{
				Global_13172[iVar211].f_28 = iParam0->f_36;
				cVar5 = { StackVal, StackVal, StackVal, Function_296(iVar0) };
				stradd(&cVar5, "_Float1", 16);
				UPDATE_PROFILE_STAT(&cVar5, iParam0->f_36, 1);
			}
			if (Global_13172[iVar211].f_20 <= iParam0->f_28)
			{
				Global_13172[iVar211].f_20 = iParam0->f_28;
				cVar5 = { StackVal, StackVal, StackVal, Function_296(iVar0) };
				stradd(&cVar5, "_Int1", 16);
				UPDATE_PROFILE_STAT(&cVar5, TO_FLOAT(iParam0->f_28), 1);
			}
			break;
	}
	if (StackVal != 4 && !iParam0->f_20)
	{
		Global_13172[iVar211].f_4 = 3;
		Function_293(iVar2);
	}
	iVar3 = Function_297(iVar0, iVar1, Global_13172[iVar211].f_32, Global_13172[iVar211].f_28, Global_13172[iVar211].f_20);
	if (iVar4 == 1 && iVar3 != 1)
	{
		Function_276(50, 1, 0);
		if (!Function_234())
		{
			if (!Function_65(Global_76846, 131072))
			{
				Function_60(Function_41(), 131072, 1, 1);
			}
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

void Function_293(int iParam0) //Position: 0x18BD5 / 101333
{
	int iVar0;
	int iVar1;
	
	if (!Function_228(iParam0))
	{
		return;
	}
	switch (Function_227(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_295(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_420(12, 1, 0, 0);
				Function_406(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_420(13, 1, 0, 0);
				Function_406(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_420(14, 1, 0, 0);
				Function_406(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_420(15, 1, 0, 0);
				Function_406(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_420(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_295(iParam0))
			{
				case 0x00000000:
					if (Function_417(iParam0) == 1)
					{
						iVar0 = Function_294(iParam0);
						if (Function_343(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_406(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_406(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_406(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_406(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_406(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_406(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_406(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_406(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_406(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_406(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_406(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_406(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_406(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_406(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_406(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_406(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_406(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_406(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_406(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_406(4, 19);
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
								Function_420(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_420(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_420(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_294(iParam0) == 0)
			{
				if (Function_417(iParam0) == 1)
				{
					Function_420(458, 1, 0, 0);
					iVar0 = Function_295(iParam0);
					if (Function_343(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_406(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_406(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_406(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_406(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_406(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_406(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_406(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_406(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_417(iParam0) == 1)
			{
				Function_420(400, 1, 0, 0);
			}
			switch (Function_295(iParam0))
			{
				case 0x00000001:
					Function_420(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_406(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_406(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_406(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_420(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_406(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_406(6, 9);
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

int Function_294(int iParam0) //Position: 0x190B1 / 102577
{
	if (!Function_228(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 4) & 255;
}

int Function_295(int iParam0) //Position: 0x190D0 / 102608
{
	if (!Function_228(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 12) & 255;
}

struct<16> Function_296(int iParam0) //Position: 0x190F0 / 102640
{
	char* cVar0[16];
	
	if (!Function_234())
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

int Function_297(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x1912A / 102698
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

int Function_298(int iParam0) //Position: 0x192F2 / 103154
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

bool Function_299(int iParam0) //Position: 0x19387 / 103303
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_300(int iParam0) //Position: 0x1939D / 103325
{
	if (!Function_299(iParam0))
	{
		return 5;
	}
	return Global_3422[iParam040];
}

void Function_301() //Position: 0x193B5 / 103349
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

void Function_302() //Position: 0x19406 / 103430
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

int Function_303(bool bParam0, bool bParam1) //Position: 0x194BE / 103614
{
	bool bVar0;
	
	bVar0 = Function_522(0);
	if ((Function_522(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_420(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_522(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_420(597, bParam0, 0, 0);
	}
	if ((Function_522(597) + Function_522(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_304() //Position: 0x19589 / 103817
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
	bVar2 = Function_41();
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

var Function_305(bool bParam0) //Position: 0x1965A / 104026
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

void Function_306() //Position: 0x1974B / 104267
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
	Function_307(31, "base_rifle", &Var0);
	return;
}

void Function_307(var uParam0, var uParam1, var uParam2) //Position: 0x19A95 / 105109
{
	INIT_NATIVE_WEAPONENUM_RIFLE(uParam0, uParam1, uParam2);
	return;
}

void Function_308() //Position: 0x19AA4 / 105124
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_376(16384);
	}
	return;
}

bool Function_309(int iParam0) //Position: 0x19AC0 / 105152
{
	if (!Function_343(iParam0))
	{
		return 1;
	}
	return Function_422(&(Global_29008[iParam0]), 4);
}

bool Function_310(int iParam0, float fParam1, bool bParam2, int iParam3) //Position: 0x19ADC / 105180
{
	vector3 vVar0;
	char* cVar3[64];
	var uVar19;
	int iVar21;
	float fVar22;
	
	if (!Function_318(&vVar0))
	{
		return 1;
	}
	if (Global_34165.f_44)
	{
		if (Function_316(32))
		{
			return 1;
		}
	}
	if (Global_30618 != 4294967295)
	{
		if (!Function_234())
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
			if (!Function_422(&(Global_29008[iVar21]), 1) && !Function_422(&(Global_29008[iVar21]), 4))
			{
				if (!Function_422(&(Global_29008[iVar21]), 1024))
				{
					if (Global_29155[iVar2110] == 4294967295)
					{
						Function_341(iVar21, 0);
					}
					else if (Function_422(&(Global_29008[Global_29155[iVar2110]]), 1024))
					{
						Function_341(iVar21, 0);
						Function_313(Global_29155[iVar2110]);
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
					if (!Function_422(&(Global_29008[iVar21]), 4) && !Function_422(&(Global_29008[iVar21]), 1))
					{
						if (StackVal == 2)
						{
							if (StackVal && (Function_422(&(Global_29008[Global_29005]), 4) || Function_422(&(Global_29008[Global_29005]), 1)) != 2)
							{
								Function_421(&(Global_29008[Global_29005]), 2);
								Function_313(Global_29005);
							}
							Global_29005 = iVar21;
						}
						Function_341(iVar21, iParam3);
					}
					else if (StackVal == 6)
					{
						if (!Function_234())
						{
							Function_311(iVar21);
						}
					}
					Global_29155[iVar2110].f_12 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_422(&(Global_29008[iVar21]), 4) || Function_422(&(Global_29008[iVar21]), 1))
				{
					if (!StackVal != 2)
					{
						if (!Function_422(&(Global_29008[iVar21]), 2097152))
						{
							if (Global_29155[iVar2110].f_12 + 5.0f) > GET_CURRENT_GAME_TIME()
							{
								Function_313(iVar21);
							}
							else if (!Function_422(&(Global_29008[iVar21]), 2))
							{
								Function_421(&(Global_29008[iVar21]), 2);
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

void Function_311(int iParam0) //Position: 0x19DDF / 105951
{
	vector3 vVar0;
	
	if (!Function_422(&(Global_29008[iParam0]), 65536))
	{
		return;
	}
	if (Function_422(&(Global_29008[iParam0]), 1048576))
	{
		return;
	}
	if (Global_13053.f_12 + 10.0f) < GET_CURRENT_GAME_TIME()
	{
		return;
	}
	if (IS_ACTOR_RIDING(Global_34573) && Function_312(Global_34573, 1) < 2.0f)
	{
		return;
	}
	if (Function_32(0, 0, 1, 1))
	{
		Function_421(&(Global_29008[iParam0]), 1048576);
		return;
	}
	if (IS_ANY_SPEECH_PLAYING(Global_34573))
	{
		return;
	}
	GET_OBJECT_POSITION(StackVal, &vVar0);
	if (Function_89(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar0) > 25.0f)
	{
		SAY_SINGLE_LINE_CONTEXT(Global_34573, 360, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		Function_421(&(Global_29008[iParam0]), 1048576);
	}
	return;
}

float Function_312(bool bParam0, bool bParam1) //Position: 0x19E97 / 106135
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_313(int iParam0) //Position: 0x19EB6 / 106166
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	char* cVar5[64];
	int iVar21;
	
	if (!Function_343(iParam0))
	{
		return;
	}
	Function_449(&(Global_29008[iParam0]), 262147);
	if (StackVal == 6)
	{
		Function_449(&(Global_29008[iParam0]), 4);
		if (!Global_3380 && !Function_551())
		{
			if (Function_343(Global_29155[iParam010]))
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
	if (!Function_318(&vVar0))
	{
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 5) != 4)
	{
		Function_449(&(Global_29008[iParam0]), 131072);
		iVar3 = Function_315(StackVal, StackVal, Global_34574, 1);
		if (!Function_343(iVar3))
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
			if (!Function_314(Global_29155[iParam010], iParam0))
			{
				if (!Function_234())
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

bool Function_314(int iParam0, int iParam1) //Position: 0x1A087 / 106631
{
	int iVar0;
	vector3 vVar1;
	
	if (!Function_318(&vVar1))
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

var Function_315(vector3 vParam0, bool bParam3) //Position: 0x1A0FF / 106751
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

bool Function_316(int iParam0) //Position: 0x1A16A / 106858
{
	return Function_317(Global_78617.f_52, iParam0);
}

int Function_317(var uParam0, int iParam1) //Position: 0x1A17B / 106875
{
	return (uParam0 && iParam1) == 0;
}

bool Function_318(int iParam0) //Position: 0x1A188 / 106888
{
	bool bVar0;
	
	bVar0 = Function_41();
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

void Function_319(bool bParam0) //Position: 0x1A1B2 / 106930
{
	Function_320(bParam0);
	Function_320(bParam0);
	Function_320(bParam0);
	Function_320(bParam0);
	return;
}

int Function_320(bool bParam0) //Position: 0x1A1D0 / 106960
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	struct<8> Var6;
	struct<4> Var14;
	
	if (Function_551())
	{
		return 1;
	}
	if (!IS_OBJECT_VALID(Global_34573))
	{
		return 0;
	}
	fVar0 = 1800.0f;
	if (!bParam0 && !Function_367(8192))
	{
		return 0;
	}
	bVar1 = DECOR_GET_INT(Global_34573, "tutorial");
	bVar2 = DECOR_GET_INT(Global_34573, "ntutorial2");
	bVar3 = DECOR_GET_INT(Global_34573, "ntutorial3");
	bVar4 = DECOR_GET_INT(Global_34573, "ntutorial4");
	if (!Function_65(Global_76849, 4))
	{
		if (Function_328(bVar4, 4))
		{
			Function_426(&Global_76849, 4);
			Function_327(Global_34573, 4, 4);
			if (!bParam0)
			{
				Function_235("tutorial_camp_fast_travel", 30.0f, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if (!Function_65(Global_76846, 0x4000000) && !(((((((Global_3380 || Global_3394) || Global_3382) || Global_3369) || Global_3367) || Global_63096) || Global_3395) || Global_3396))
	{
		if (Function_328(bVar1, 0x4000000))
		{
			Function_426(&Global_76846, 0x4000000);
			if (!bParam0)
			{
				Function_235("tutorial_rare_horse", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if ((Global_3365 && !Function_65(Global_76849, 8)) && !((((Global_3369 || Global_63096) || Global_3384) || Global_3395) || Global_3396))
	{
		if (((GET_ACTOR_HEALTH(Global_34573) > (GET_ACTOR_MAX_HEALTH(Global_34573) * 0.3f) && HAS_ITEM(Function_305(3), Global_34573)) && IS_ACTOR_ALIVE(Global_34573)) && !IS_ACTOR_IN_WATER(Global_34573))
		{
			Function_426(&Global_76849, 8);
			if (!bParam0)
			{
				Function_235("tutorial_first_health", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if (!bParam0 && ((((((((((Global_59353 || Global_3380) || Global_3382) || Global_3367) || Global_63096) || Global_3395) || Global_3394) || Global_3384) || Global_3369) || Global_3396) || !IS_ACTOR_ALIVE(Global_34573)))
	{
		return 0;
	}
	if (!bParam0 && ((Function_79() || HUD_IS_FADED()) || HUD_IS_FADING()))
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
			if (Function_326(&Global_3422[iVar540] + 128, 16))
			{
				if (((Global_6269 != Global_3422[iVar540].f_132 || Global_6269 != Global_3422[iVar540].f_136) || Global_6269 != Global_3422[iVar540].f_140) || Global_6269 != Global_3422[iVar540].f_144)
				{
					if (Global_3422[iVar540].f_124)
					{
						if (IS_BLIP_VALID(Global_3422[iVar540].f_100))
						{
							SET_BLIP_BLINK(Global_3422[iVar540].f_100, 1, 0, 1084227584);
						}
						Var14 = { StackVal, StackVal, StackVal, Function_296(iVar5) };
						strcpy(&Var6, "comp_intro_", 32);
						stradd(&Var6, UI_GET_STRING(&Var14), 32);
						if (iVar5 == 49)
						{
							Function_325(&Var6, 0x40f00000, 1, 2, 0, 0, 0, 0);
						}
						else
						{
							Function_235(&Var6, 0x41200000, 1, 0, 2, 1, 0);
						}
						Function_324(&Global_3422[iVar540] + 128, 16);
						return 0;
					}
				}
			}
			iVar5++;
		}
	}
	switch (iLocal_258)
	{
		case 0x00000000:
			if (!Function_65(Global_76847, 0x10000000))
			{
				if (Function_328(bVar2, 0x10000000))
				{
					Function_426(&Global_76847, 0x10000000);
					Function_327(Global_34573, 0x10000000, 2);
					if (!bParam0)
					{
						Function_235("tutorial_aggro_ped", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76847, 1))
			{
				if (Function_328(bVar2, 1))
				{
					Function_426(&Global_76847, 1);
					Function_327(Global_34573, 1, 2);
					if (!bParam0)
					{
						Function_235("tutorial_eyewitness_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76847, 2))
			{
				if (Function_328(bVar2, 2))
				{
					Function_426(&Global_76847, 2);
					Function_327(Global_34573, 2, 2);
					if (!bParam0)
					{
						Function_235("tutorial_eyewitness_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76847, 4))
			{
				if (Function_328(bVar2, 4))
				{
					Function_426(&Global_76847, 4);
					Function_327(Global_34573, 4, 2);
					if (!bParam0)
					{
						Function_235("tutorial_eyewitness_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76847, 4194304))
			{
				if (Function_328(bVar2, 4194304))
				{
					Function_426(&Global_76847, 4194304);
					Function_327(Global_34573, 4194304, 2);
					if (!bParam0)
					{
						Function_235("tutorial_eyewitness_delayed", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76847, 0x2000000))
			{
				if (Function_328(bVar2, 0x2000000))
				{
					Function_426(&Global_76847, 0x2000000);
					Function_327(Global_34573, 0x2000000, 2);
					if (!bParam0)
					{
						Function_235("tutorial_wanted_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76847, 0x4000000))
			{
				if (Function_65(Global_76847, 0x2000000))
				{
					Function_426(&Global_76847, 0x4000000);
					if (!bParam0)
					{
						Function_235("tutorial_law_lost_awareness", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76847, 0x8000000))
			{
				if (Function_328(bVar2, 0x8000000))
				{
					Function_426(&Global_76847, 0x8000000);
					Function_327(Global_34573, 0x8000000, 2);
					if (!bParam0)
					{
						Function_235("tutorial_rcm_wanted", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_328(bVar2, 32768))
			{
				Function_426(&Global_76847, 32768);
				Function_327(Global_34573, 32768, 2);
				Function_235("tutorial_law_local_spawn", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_328(bVar2, 128))
			{
				if (Function_65(Global_76847, 65536))
				{
					Function_426(&Global_76847, 128);
					Function_327(Global_34573, 128, 2);
					Function_235("tutorial_law_posse_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_328(bVar2, 256))
			{
				if (Function_65(Global_76847, 131072))
				{
					Function_426(&Global_76847, 256);
					Function_327(Global_34573, 256, 2);
					Function_235("tutorial_law_marshal_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_328(bVar2, 512))
			{
				if (Function_65(Global_76847, 262144))
				{
					Function_426(&Global_76847, 512);
					Function_327(Global_34573, 512, 2);
					Function_235("tutorial_law_bounty_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_328(bVar2, 1024))
			{
				if (Function_65(Global_76847, 131072))
				{
					Function_426(&Global_76847, 1024);
					Function_327(Global_34573, 1024, 2);
					Function_235("tutorial_law_army_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (!Function_65(Global_76847, 64))
			{
				if (Function_328(bVar2, 64))
				{
					Function_426(&Global_76847, 64);
					Function_327(Global_34573, 64, 2);
					if (!bParam0)
					{
						Function_235("tutorial_player_arrested", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76847, 16384))
			{
				if (Function_328(bVar2, 16384))
				{
					Function_426(&Global_76847, 16384);
					Function_327(Global_34573, 16384, 2);
					if (!bParam0)
					{
						Function_235("tutorial_law_captured", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76847, 0x1000000))
			{
				if (Function_328(bVar2, 0x1000000))
				{
					Function_426(&Global_76847, 0x1000000);
					Function_327(Global_34573, 0x1000000, 2);
					if (!bParam0)
					{
						Function_235("tutorial_law_rewanted", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76847, 8))
			{
				if (Global_3403 && Global_26316.f_176)
				{
					Function_426(&Global_76847, 8);
					if (!bParam0)
					{
						Function_235("tutorial_wanted_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76847, 8388608))
			{
				if (Function_328(bVar2, 8388608))
				{
					Function_426(&Global_76847, 8388608);
					if (!bParam0)
					{
						Function_235("tutorial_law_lost_awareness2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76847, 32))
			{
				if (Function_328(bVar2, 32))
				{
					Function_426(&Global_76847, 32);
					Function_327(Global_34573, 32, 2);
					if (!bParam0)
					{
						Function_235("tutorial_law_near", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76847, 4096))
			{
				if (Function_328(bVar2, 4096))
				{
					Function_426(&Global_76847, 4096);
					Function_327(Global_34573, 4096, 2);
					if (!bParam0)
					{
						Function_235("tutorial_law_losing_track", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76847, 16) && Function_65(Global_76847, 8))
			{
				if (Function_328(bVar2, 16))
				{
					Function_426(&Global_76847, 16);
					Function_327(Global_34573, 16, 2);
					if (!bParam0)
					{
						Function_235("tutorial_civilian_awareness", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76847, 2048))
			{
				if (Function_328(bVar2, 2048))
				{
					Function_426(&Global_76847, 2048);
					Function_327(Global_34573, 2048, 2);
					if (!bParam0)
					{
						Function_235("tutorial_law_difficulty_increase", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76847, 8192))
			{
				if (Function_328(bVar2, 8192))
				{
					Function_426(&Global_76847, 8192);
					Function_327(Global_34573, 8192, 2);
					if (!bParam0)
					{
						return 0;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!Function_65(Global_76848, 16384))
			{
				if (Function_328(bVar3, 16384))
				{
					Function_426(&Global_76848, 16384);
					Function_327(Global_34573, 16384, 3);
					if (!bParam0)
					{
						Function_235("tutorial_law_bribe", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 32768))
			{
				if (Function_328(bVar3, 32768))
				{
					Function_426(&Global_76848, 32768);
					Function_327(Global_34573, 32768, 3);
					if (!bParam0)
					{
						Function_235("tutorial_law_surrender", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 65536))
			{
				if (Function_328(bVar3, 65536))
				{
					Function_426(&Global_76848, 65536);
					Function_327(Global_34573, 65536, 3);
					if (!bParam0)
					{
						Function_235("tutorial_law_extra_cops1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 131072))
			{
				if (Function_328(bVar3, 131072))
				{
					Function_426(&Global_76848, 131072);
					Function_327(Global_34573, 131072, 3);
					if (!bParam0)
					{
						Function_235("tutorial_law_extra_cops2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 262144))
			{
				if (Function_328(bVar3, 262144))
				{
					Function_426(&Global_76848, 262144);
					Function_327(Global_34573, 262144, 3);
					if (!bParam0)
					{
						Function_235("tutorial_law_less_cops", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_328(bVar2, 524288))
			{
				Function_426(&Global_76847, 524288);
				Function_327(Global_34573, 524288, 2);
				Function_235("tutorial_law_local_end1", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (!Function_65(Global_76847, 1048576))
			{
				if (Function_65(Global_76847, 524288))
				{
					Function_426(&Global_76847, 1048576);
					if (!bParam0)
					{
						return 0;
					}
				}
			}
			if (Function_328(bVar2, 2097152))
			{
				Function_426(&Global_76847, 2097152);
				Function_327(Global_34573, 2097152, 2);
				Function_235("tutorial_law_pursuit_end", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_328(bVar2, 65536))
			{
				Function_426(&Global_76847, 65536);
				Function_327(Global_34573, 65536, 2);
				Function_235("tutorial_law_posse_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_328(bVar2, 131072))
			{
				Function_426(&Global_76847, 131072);
				Function_327(Global_34573, 131072, 2);
				Function_235("tutorial_law_marshal_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_328(bVar2, 262144))
			{
				Function_426(&Global_76847, 262144);
				Function_327(Global_34573, 262144, 2);
				Function_235("tutorial_law_bounty_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (!Function_65(Global_76848, 0x2000000))
			{
				if (Function_328(bVar3, 0x2000000))
				{
					Function_426(&Global_76848, 0x2000000);
					Function_327(Global_34573, 0x2000000, 3);
					Function_235("whistle_GotEvilHorse", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			break;
		
		case 0x00000002:
			if (Global_3403 || Global_3404)
			{
				break;
			}
			if (!Function_65(Global_76846, 0x20000000))
			{
				if (Function_368(8, 0))
				{
					Function_426(&Global_76846, 0x20000000);
					if (!bParam0)
					{
						Function_235("tutorial_first_camp_M1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 0x4000000))
			{
				if (Function_368(8, 0))
				{
					Function_426(&Global_76846, 0x4000000);
					if (!bParam0)
					{
						Function_235("tutorial_loot", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 0x8000000))
			{
				if (Function_328(bVar3, 0x8000000))
				{
					Function_426(&Global_76848, 0x8000000);
					if (!bParam0)
					{
						Function_235("Old_News_Avail", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 8))
			{
				if (Function_328(bVar1, 8))
				{
					Function_426(&Global_76846, 8);
					if (!bParam0)
					{
						Function_235("tutorial_road_to_armadillo", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 1))
			{
				if (IS_ACTOR_DRIVING_VEHICLE(Global_34573) && !(Function_368(4, 0) || Function_368(10, 0)))
				{
					if (IS_ACTOR_DRAFT_VEHICLE(GET_VEHICLE(Global_34573)))
					{
						Function_426(&Global_76846, 1);
						if (!bParam0)
						{
							Function_235("tutorial_first_drive_coach", 0x41200000, 1, 0, 2, 1, 0);
							return 0;
						}
					}
				}
			}
			if (!Function_65(Global_76846, 64))
			{
				if (Function_328(bVar1, 64))
				{
					Function_426(&Global_76846, 64);
					Function_327(Global_34573, 64, 1);
					if (!bParam0)
					{
						Function_235("tutorial_first_see_coach", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 256))
			{
				if (Function_328(bVar1, 256))
				{
					Function_426(&Global_76846, 256);
					Function_327(Global_34573, 256, 1);
					if (!bParam0)
					{
						Function_235("tutorial_first_passenger_coach", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 128))
			{
				if (Function_328(bVar1, 128))
				{
					Function_323(5.0f);
					Function_426(&Global_76846, 128);
					Function_327(Global_34573, 128, 1);
					if (!bParam0)
					{
						Function_235("tutorial_first_horse_agitated", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 2097152))
			{
				if (Function_328(bVar1, 2097152))
				{
					Function_426(&Global_76846, 2097152);
					Function_327(Global_34573, 2097152, 1);
					if (!bParam0)
					{
						Function_235("tutorial_rcm_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 4194304))
			{
				if (Function_65(Global_76846, 2097152))
				{
					Function_426(&Global_76846, 4194304);
					Function_327(Global_34573, 4194304, 1);
					if (!bParam0)
					{
						Function_235("tutorial_rcm_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 8388608))
			{
				if (Function_65(Global_76846, 4194304))
				{
					Function_426(&Global_76846, 8388608);
					Function_327(Global_34573, 8388608, 1);
					if (!bParam0)
					{
						Function_235("tutorial_rcm_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 2))
			{
				if (Function_328(bVar1, 2))
				{
					Function_426(&Global_76846, 2);
					Function_327(Global_34573, 2, 1);
					if (!bParam0)
					{
						Function_235("tutorial_first_outfit1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 4))
			{
				if (Function_65(Global_76846, 2))
				{
					Function_426(&Global_76846, 4);
					if (!bParam0)
					{
						Function_235("tutorial_first_outfit2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_23(3))
			{
				if (!Function_65(Global_76846, 512))
				{
					if (Function_328(bVar1, 512))
					{
						Function_426(&Global_76846, 512);
						Function_327(Global_34573, 512, 1);
						if (!bParam0)
						{
							Function_235("tutorial_lost_cards", 0x41200000, 1, 0, 2, 1, 0);
						}
						Function_74(3, 0, 1, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 4096))
			{
				if ((Global_29007 != 2 && !Global_3388) && !Function_32(0, 0, 1, 6))
				{
					Function_426(&Global_76846, 4096);
					if (!bParam0)
					{
						Function_235("tutorial_first_camp", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 8192))
			{
				if (Function_65(Global_76846, 4096))
				{
					Function_426(&Global_76846, 8192);
					if (!bParam0)
					{
						Function_235("tutorial_first_camp2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 1024))
			{
				if (((Global_29007 != 2 && !Global_3388) && !Function_32(0, 0, 1, 1)) && Function_368(4, 0))
				{
					Function_426(&Global_76846, 1024);
					if (!bParam0)
					{
						Function_235("tutorial_first_wilderness1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 2048))
			{
				if (Function_65(Global_76846, 1024))
				{
					Function_426(&Global_76846, 2048);
					if (!bParam0)
					{
						Function_235("tutorial_first_wilderness2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 16))
			{
				if (Function_328(bVar1, 16) && !Global_3380)
				{
					Function_426(&Global_76846, 16);
					Function_327(Global_34573, 16, 1);
					if (!bParam0)
					{
						Function_235("tutorial_first_action_area1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 32))
			{
				if (Function_65(Global_76846, 16))
				{
					Function_426(&Global_76846, 32);
					if (!bParam0)
					{
						Function_235("tutorial_first_action_area2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 32768))
			{
				if (Function_328(bVar1, 32768))
				{
					Function_426(&Global_76846, 32768);
					if (!bParam0)
					{
						Function_235("tutorial_kill_job", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 65536))
			{
				if (Function_328(bVar1, 65536))
				{
					Function_327(Global_34573, 65536, 1);
					if (!bParam0)
					{
						Function_235("tutorial_kill_shop", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 131072))
			{
				if (Function_328(bVar1, 131072))
				{
					Function_426(&Global_76846, 131072);
					if (!bParam0)
					{
						Function_235("tutorial_first_headshot_bonus", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 524288))
			{
				if (Function_328(bVar1, 524288))
				{
					Function_426(&Global_76846, 524288);
					if (!bParam0)
					{
						Function_235("tutorial_first_robbery", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 1048576))
			{
				if (Function_328(bVar1, 1048576))
				{
					Function_426(&Global_76846, 1048576);
					if (!bParam0)
					{
						Function_235("tutorial_first_robbery_denial", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 0x1000000))
			{
				if (Function_328(bVar1, 0x1000000))
				{
					Function_426(&Global_76846, 0x1000000);
					if (!bParam0)
					{
						Function_235("tutorial_second_weapon1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 0x2000000))
			{
				if (Function_65(Global_76846, 0x1000000))
				{
					Function_426(&Global_76846, 0x2000000);
					if (!bParam0)
					{
						Function_235("tutorial_second_weapon2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 4194304))
			{
				if (Function_328(bVar3, 4194304))
				{
					Function_426(&Global_76848, 4194304);
					if (!bParam0)
					{
						Function_235("tutorial_random_char", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 524288))
			{
				if (Function_328(bVar3, 524288))
				{
					Function_426(&Global_76848, 524288);
					if (!bParam0)
					{
						Function_235("tutorial_skinning_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 1048576))
			{
				if (Function_65(Global_76848, 524288))
				{
					Function_426(&Global_76848, 1048576);
					if (!bParam0)
					{
						Function_235("tutorial_skinning_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 2097152))
			{
				if (Function_328(bVar3, 2097152))
				{
					Function_426(&Global_76848, 2097152);
					if (!bParam0)
					{
						Function_235("tutorial_skinning_3", 0x41200000, 1, 0, 2, 1, 0);
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
			if (!Function_65(Global_76846, 262144))
			{
				if (Function_328(bVar1, 262144))
				{
					Function_426(&Global_76846, 262144);
					if (!bParam0)
					{
						Function_235("tutorial_bounty_no_money_first", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 1))
			{
				if (Function_328(bVar3, 1))
				{
					Function_426(&Global_76848, 1);
					Function_327(Global_34573, 1, 3);
					if (!bParam0)
					{
						Function_235("tutorial_first_honor_positive", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 2))
			{
				if (Function_328(bVar3, 2))
				{
					Function_426(&Global_76848, 2);
					Function_327(Global_34573, 2, 3);
					if (!bParam0)
					{
						Function_235("tutorial_first_honor_negative", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 4))
			{
				if (Function_328(bVar3, 4))
				{
					Function_426(&Global_76848, 4);
					Function_327(Global_34573, 4, 3);
					if (!bParam0)
					{
						Function_235("tutorial_first_notoriety_positive", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 8))
			{
				if (Function_322() == 0)
				{
					Function_426(&Global_76848, 8);
					if (!bParam0)
					{
						Function_235("tutorial_very_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 16))
			{
				if (Function_322() == 1)
				{
					Function_426(&Global_76848, 16);
					if (!bParam0)
					{
						Function_235("tutorial_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 32))
			{
				if (Function_322() == 2)
				{
					Function_426(&Global_76848, 32);
					if (!bParam0)
					{
						Function_235("tutorial_medium_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 64))
			{
				if (Function_322() == 4)
				{
					Function_426(&Global_76848, 64);
					if (!bParam0)
					{
						Function_235("tutorial_medium_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 128))
			{
				if (Function_322() == 5)
				{
					Function_426(&Global_76848, 128);
					if (!bParam0)
					{
						Function_235("tutorial_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 256))
			{
				if (Function_322() == 6)
				{
					Function_426(&Global_76848, 256);
					if (!bParam0)
					{
						Function_235("tutorial_very_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 512))
			{
				if (Function_321() == 1)
				{
					Function_426(&Global_76848, 512);
					if (!bParam0)
					{
						Function_235("tutorial_low_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 1024))
			{
				if (Function_321() == 2)
				{
					Function_426(&Global_76848, 1024);
					if (!bParam0)
					{
						Function_235("tutorial_medium_low_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 2048))
			{
				if (Function_321() == 3)
				{
					Function_426(&Global_76848, 2048);
					if (!bParam0)
					{
						Function_235("tutorial_medium_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 4096))
			{
				if (Function_321() == 4)
				{
					Function_426(&Global_76848, 4096);
					if (!bParam0)
					{
						Function_235("tutorial_medium_high_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 8192))
			{
				if (Function_321() == 5)
				{
					Function_426(&Global_76848, 8192);
					if (!bParam0)
					{
						Function_235("tutorial_high_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 8388608))
			{
				if (Function_328(bVar3, 8388608))
				{
					Function_426(&Global_76848, 8388608);
					Function_327(Global_34573, 8388608, 3);
					if (!bParam0)
					{
						Function_235("tutorial_first_minigame_in_rain", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76848, 0x1000000))
			{
				if (Function_328(bVar3, 0x1000000))
				{
					Function_426(&Global_76848, 0x1000000);
					Function_327(Global_34573, 0x1000000, 3);
					if (!bParam0)
					{
						Function_235("tutorial_first_missed_achievement", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76846, 0x8000000))
			{
				if (Function_328(bVar1, 0x8000000))
				{
					Function_426(&Global_76846, 0x8000000);
					Function_327(Global_34573, 0x8000000, 1);
					if (!bParam0)
					{
						Function_235("tutorial_first_on_donkey", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_328(bVar4, 1) && Function_368(4, 0))
			{
				Function_327(Global_34573, 1, 4);
				if (!bParam0)
				{
					Function_235("tutorial_new_item_in_shops", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (!Function_65(Global_76847, 0x20000000))
			{
				if ((((((HAS_ITEM(Function_305(53), Global_34573) || HAS_ITEM(Function_305(54), Global_34573)) || HAS_ITEM(Function_305(55), Global_34573)) || HAS_ITEM(Function_305(56), Global_34573)) || HAS_ITEM(Function_305(57), Global_34573)) || HAS_ITEM(Function_305(58), Global_34573)) || HAS_ITEM(Function_305(10), Global_34573))
				{
					Function_426(&Global_76847, 0x20000000);
					if (!bParam0)
					{
						Function_235("tutorial_outfit_scrap", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_328(bVar4, 2) && Function_368(4, 0))
			{
				if (Function_65(Global_76849, 2))
				{
					if (GET_CURRENT_GAME_TIME() < Global_12976.f_132)
					{
						if (!bParam0)
						{
							Function_235("tutorial_gunsmith", 0x41200000, 1, 0, 2, 1, 0);
							Global_12976.f_132 = (GET_CURRENT_GAME_TIME() + fVar0);
							return 0;
						}
					}
				}
				if (!Function_65(Global_76849, 2))
				{
					if (!bParam0)
					{
						Function_426(&Global_76849, 2);
						Function_235("tutorial_gunsmith", 0x41200000, 1, 0, 2, 1, 0);
						Global_12976.f_132 = (GET_CURRENT_GAME_TIME() + fVar0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76849, 16))
			{
				if (Function_368(9, 0))
				{
					Function_426(&Global_76849, 16);
					if (!bParam0)
					{
						Function_235("tutorial_place_waypoint", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_65(Global_76849, 32))
			{
				if (Function_328(bVar4, 32))
				{
					Function_426(&Global_76849, 32);
					Function_327(Global_34573, 32, 4);
					if (!bParam0)
					{
						Function_235("tutorial_bait_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
	}
	iLocal_258++;
	if (iLocal_258 >= 3)
	{
		iLocal_258 = 0;
	}
	return 0;
}

int Function_321() //Position: 0x1C3FD / 115709
{
	return Global_12976.f_156;
}

int Function_322() //Position: 0x1C408 / 115720
{
	return Global_12976.f_152;
}

void Function_323(float fParam0) //Position: 0x1C413 / 115731
{
	if (fParam0 < 0.0f)
	{
		FLASH_SET_FLOAT("testInventory", "staminaBlinking", fParam0);
	}
	else
	{
		LOG_ERROR("RADAR_BLINK_HORSE_STAMINA_BAR: called with a negative or zero duration!");
	}
	return;
}

void Function_324(var uParam0, bool bParam1) //Position: 0x1C498 / 115864
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_325(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1C4AF / 115887
{
	struct<4> Var0;
	int iVar4;
	
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
			Var0 = { StackVal, StackVal, StackVal, Function_236(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

bool Function_326(var uParam0, int iParam1) //Position: 0x1C534 / 116020
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_327(bool bParam0, int iParam1, int iParam2) //Position: 0x1C550 / 116048
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
	Function_61(&Var1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &Var1))
	{
		return;
	}
	bVar5 = DECOR_GET_INT(bParam0, &Var1);
	DECOR_SET_INT(bParam0, &Var1, (bVar5 - (bVar5 && uVar0)));
	return;
}

bool Function_328(bool bParam0, int iParam1) //Position: 0x1C59F / 116127
{
	var uVar0;
	
	uVar0 = iParam1;
	if ((bParam0 && uVar0) >= 0)
	{
		return 1;
	}
	return 0;
}

void Function_329() //Position: 0x1C5B5 / 116149
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
				Function_334(1);
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
		Function_330(0);
	}
	return;
}

void Function_330(bool bParam0) //Position: 0x1C767 / 116583
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<8> Var3;
	struct<8> Var11;
	
	iVar0 = 0;
	while (iVar0 <= Global_25986)
	{
		if ((!Global_25986[iVar0] && (!bParam0 || !Function_79())) && !bVar1)
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_368(2, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, false);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_279(390, 3.0f);
						Function_521(390, 1, bParam0);
					}
					break;
				
				case 0x00000001:
					if (Function_368(11, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_279(390, 3.0f);
						Function_521(390, 2, bParam0);
					}
					break;
				
				case 0x00000002:
					if (Function_368(30, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
						Function_279(390, 3.0f);
						Function_521(390, 3, bParam0);
					}
					break;
				
				case 0x00000003:
					Global_25986[iVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_368(4, 0))
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
					if (Function_368(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&Var3, "shop_feature_1", 32);
						strcpy(&Var11, "shop_feature_2", 32);
					}
					break;
				
				case 0x00000006:
					if (Function_368(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000007:
					if (Function_368(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000008:
					if (Function_368(37, 0))
					{
						Global_25986[iVar0] = 1;
					}
					break;
				
				case 0x0000000A:
					if (Function_368(2, 0) && !Function_546("npressDemo"))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x0000000B:
					if (Function_368(4, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&Var3, "house_feature_1", 32);
						strcpy(&Var11, "house_feature_2", 32);
					}
					break;
				
				case 0x0000000C:
					if (!Function_333(1))
					{
						Function_334(1);
						Global_25986[iVar0] = 1;
					}
					else
					{
						Function_334(0);
						Global_25986[iVar0] = 0;
					}
					break;
				
				case 0x0000000D:
					if (Function_332(0) == 10)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "nAM_SS_RW2", 32);
						SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
					}
					break;
				
				case 0x0000000E:
					if (Function_332(1) > 5)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "nAM_MH_RW1", 32);
						SET_WEAPONENUM_LOCKED(14, 0);
						Function_331(14, 1);
					}
					break;
				
				case 0x0000000F:
					if (((Function_332(0) != 10 && Function_332(1) != 10) && Function_332(2) != 10) && Function_332(3) != 10)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "AM_LOTW_RW1", 32);
						SET_MAX_DEADEYE_POINTS(0, 150.0f);
						Function_76(11, 0, 1);
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
		Function_235(&Var3, 0x41200000, 1, 0, 2, 1, 0);
		if (bVar2)
		{
			stradd(&Var11, "_help", 32);
			Function_235(&Var11, 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

int Function_331(int iParam0, int iParam1) //Position: 0x1CB37 / 117559
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_256(iParam0, iParam1);
	Function_60(Global_34573, 1, 4, 1);
	return 1;
}

int Function_332(int iParam0) //Position: 0x1CBAA / 117674
{
	if (Function_551() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

bool Function_333(int iParam0) //Position: 0x1CBD2 / 117714
{
	int iVar0;
	
	if (!Function_299(iParam0))
	{
		return 0;
	}
	iVar0 = Function_448(iParam0);
	if (!Function_230(Function_448(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_334(bool bParam0) //Position: 0x1CC08 / 117768
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
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", 1);
	}
	return;
}

void Function_335() //Position: 0x1CC7C / 117884
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

void Function_336() //Position: 0x1CCCF / 117967
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
					if (Function_368(3, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000001:
					if (Function_23(1))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000002:
					if (Function_368(4, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000003:
					Global_25974[bVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_368(25, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000005:
					if (Function_368(5, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000006:
					break;
				
				case 0x00000007:
					if (Function_368(10, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000008:
					if (Function_368(3, 0))
					{
						Global_25974[bVar0] = 1;
					}
					break;
				
				case 0x00000009:
					Global_25974[bVar0] = 1;
					break;
				
				case 0x0000000A:
					if (Function_368(37, 0))
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

void Function_337() //Position: 0x1CE2F / 118319
{
	int iVar0;
	
	if (Global_3365)
	{
		Function_338();
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

void Function_338() //Position: 0x1CE5D / 118365
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
					if (Function_368(2, 0))
					{
						Global_25970[bVar0] = 1;
					}
					break;
				
				case 0x00000002:
					if (Function_368(6, 0))
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

void Function_339() //Position: 0x1CEFE / 118526
{
	int iVar0;
	int iVar1;
	
	if (Global_3365)
	{
		Function_340();
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

void Function_340() //Position: 0x1CF51 / 118609
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
					if (Function_368(8, 0))
					{
						Global_25965[bVar0] = 1;
					}
					break;
				
				case 0x00000001:
					if (Function_368(16, 0))
					{
						Global_25965[bVar0] = 1;
					}
					break;
				
				case 0x00000002:
					if (Function_368(13, 0))
					{
						Global_25965[bVar0] = 1;
					}
					break;
				
				case 0x00000003:
					if (Function_368(34, 0))
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

void Function_341(int iParam0, int iParam1) //Position: 0x1D021 / 118817
{
	char* cVar0[64];
	int iVar16;
	
	if (!Function_343(iParam0))
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
	Function_421(&(Global_29008[iParam0]), 1);
	if (DECOR_CHECK_EXIST(StackVal, "nforceLoad"))
	{
		DECOR_REMOVE(StackVal, "nforceLoad");
		iParam1 = 1;
	}
	if (StackVal == 6)
	{
		Function_172(iParam0);
		Function_421(&(Global_29008[iParam0]), 4);
		if (!Global_3380 && !Function_551())
		{
			SET_RICH_PRESENCE(2, Global_29155[iParam010].f_36, 0, 0, 0);
		}
		if (Global_29155[iParam010].f_12 + 60.0f) > GET_CURRENT_GAME_TIME()
		{
			if (Function_343(Global_29155[iParam010]))
			{
				Function_342(Global_29155[Global_29155[iParam010]10].f_20, Global_29155[iParam010].f_20);
			}
			Global_13053 = StackVal;
			Global_13053.f_8 = 4;
			Global_13053.f_4 = 0;
		}
		return;
	}
	if (StackVal == 2)
	{
		if ((!Global_29155[iParam010] != Global_30621[Global_29004] && Function_343(Global_29155[iParam010])) || iParam1)
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
	Function_449(&(Global_29008[iParam0]), 131072);
	Function_106(iParam0);
	return;
}

void Function_342(var uParam0, int iParam1) //Position: 0x1D1E1 / 119265
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

bool Function_343(int iParam0) //Position: 0x1D1EE / 119278
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_344() //Position: 0x1D204 / 119300
{
	int iVar0;
	struct<77> Var1;
	
	*(&Var1 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var1, 44, 1);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Function_345(&Var1 + 80[iVar03]);
		iVar0++;
	}
	Var1.f_76 = 0;
	STORE_GAME_STATE(&Var1, 44, 1);
	return;
}

void Function_345(int iParam0) //Position: 0x1D245 / 119365
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
			Function_454(bVar0);
		}
		ADD_TIME(&bVar0, 0, 10, 0, 0);
		Global_16876[bVar06] = StackVal;
		Global_17483[bVar075].f_264 = StackVal;
		if (Global_30842[16])
		{
			PRINTNL();
			PRINTSTRING("New Run time: ");
			Function_454(Global_16876[StackVal6]);
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

void Function_346(var uParam0, var uParam1, int iParam2) //Position: 0x1D396 / 119702
{
	*uParam0 = uParam1;
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

void Function_347(int iParam0, int iParam1) //Position: 0x1D3DC / 119772
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
		Function_454(iParam0->f_12);
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
		Var4 = { StackVal, StackVal, StackVal, Function_348(iParam0->f_12) };
		Var8 = { StackVal, StackVal, StackVal, Function_348(iParam0->f_48) };
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
		SET_WEATHER(iParam1, MAKE_TIME_OF_DAY(false, (bVar2 - bVar3), 0));
	}
	Global_16524.f_8 = iParam1;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (iParam1 != 3 || iParam1 != 4)
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

struct<16> Function_348(bool bParam0) //Position: 0x1D5D9 / 120281
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

void Function_349() //Position: 0x1D62D / 120365
{
	return;
}

void Function_350() //Position: 0x1D633 / 120371
{
	Function_354(Function_448(1), 95);
	Function_354(Function_448(24), 95);
	Function_354(Function_448(12), 95);
	Function_354(Function_448(13), 93);
	Function_354(Function_448(14), 95);
	Function_354(Function_448(8), 93);
	Function_354(Function_448(9), 98);
	Function_354(Function_448(23), 90);
	Function_354(Function_448(21), 93);
	Function_354(Function_448(10), 90);
	Function_354(Function_448(11), 85);
	Function_354(Function_448(16), 95);
	Function_354(Function_448(17), 90);
	Function_354(Function_448(15), 90);
	Function_354(Function_448(18), 95);
	Function_354(Function_448(19), 95);
	Function_354(Function_448(20), 95);
	Function_354(Function_448(2), 95);
	Function_354(Function_448(4), 93);
	Function_354(Function_448(3), 93);
	Function_354(Function_448(22), 88);
	Function_354(Function_448(6), 95);
	Function_354(Function_448(5), 95);
	Function_354(Function_448(7), 88);
	Function_354(Function_448(25), 93);
	Function_354(Function_448(30), 90);
	Function_354(Function_448(33), 80);
	Function_354(Function_448(32), 80);
	Function_354(Function_448(31), 90);
	Function_354(Function_448(34), 93);
	Function_354(Function_448(35), 90);
	Function_354(Function_448(27), 93);
	Function_354(Function_448(26), 93);
	Function_354(Function_448(28), 95);
	Function_354(Function_448(29), 90);
	Function_354(Function_448(36), 93);
	Function_354(Function_448(39), 85);
	Function_354(Function_448(37), 90);
	Function_354(Function_448(38), 93);
	Function_354(Function_448(41), 80);
	Function_354(Function_448(40), 80);
	Function_354(Function_448(45), 95);
	Function_354(Function_448(46), 95);
	Function_354(Function_448(43), 90);
	Function_354(Function_448(47), 90);
	Function_354(Function_448(48), 90);
	Function_354(Function_448(42), 90);
	Function_354(Function_448(44), 95);
	Function_354(Function_448(49), 93);
	Function_354(Function_448(55), 95);
	Function_354(Function_448(56), 95);
	Function_354(Function_448(52), 95);
	Function_354(Function_448(53), 90);
	Function_354(Function_448(54), 93);
	Function_354(Function_448(50), 90);
	Function_354(Function_448(51), 90);
	Function_354(Function_448(57), 98);
	Function_352(0, 95);
	Function_352(1, 70);
	Function_352(2, 70);
	Function_352(3, 80);
	Function_352(4, 70);
	Function_352(5, 70);
	Function_352(6, 90);
	Function_352(7, 95);
	Function_352(8, 85);
	Function_352(9, 85);
	Function_352(10, 85);
	Function_352(11, 90);
	Function_352(12, 70);
	Function_352(13, 75);
	Function_352(39, 90);
	Function_352(14, 85);
	Function_352(15, 50);
	Function_352(16, 80);
	Function_352(17, 90);
	Function_352(18, 50);
	Function_352(19, 70);
	Function_352(20, 80);
	Function_352(21, 90);
	Function_352(22, 100);
	Function_352(23, 95);
	Function_352(24, 90);
	Function_352(27, 50);
	Function_352(25, 50);
	Function_352(26, 100);
	Function_352(28, 95);
	Function_352(29, 90);
	Function_352(30, 80);
	Function_352(31, 85);
	Function_352(32, 80);
	Function_352(33, 95);
	Function_352(34, 80);
	Function_352(35, 50);
	Function_352(36, 95);
	Function_352(37, 95);
	Function_352(38, 50);
	Function_352(40, 95);
	Function_352(41, 90);
	Function_352(42, 90);
	Function_352(43, 50);
	Function_352(44, 95);
	Function_351(0, 50);
	Function_351(1, 50);
	Function_351(2, 50);
	Function_351(3, 50);
	Function_351(4, 70);
	Function_351(5, 70);
	Function_351(6, 70);
	Function_351(7, 70);
	Function_351(8, 70);
	Function_351(9, 70);
	Function_351(10, 90);
	Function_351(11, 90);
	Function_351(12, 90);
	Function_351(13, 90);
	Function_351(14, 90);
	Function_351(15, 50);
	Function_351(16, 50);
	Function_351(17, 50);
	Function_351(18, 50);
	Function_351(19, 50);
	Function_351(20, 50);
	Function_351(21, 90);
	Function_351(22, 90);
	Function_351(23, 50);
	Function_351(24, 50);
	Function_351(25, 50);
	Function_351(26, 50);
	Function_351(27, 50);
	Function_351(28, 90);
	Function_351(29, 90);
	Function_351(30, 90);
	Function_351(31, 90);
	Function_351(32, 80);
	Function_351(33, 80);
	Function_351(34, 80);
	Function_351(35, 85);
	Function_351(36, 85);
	Function_351(37, 85);
	Function_351(38, 90);
	Function_351(39, 90);
	Function_351(40, 90);
	Function_351(41, 90);
	Function_351(42, 90);
	Function_351(43, 90);
	Function_351(44, 90);
	Function_351(45, 90);
	Function_351(46, 90);
	Function_351(47, 90);
	Function_351(48, 90);
	Function_351(49, 85);
	Function_351(50, 85);
	Function_351(51, 85);
	Function_351(52, 85);
	Function_351(53, 85);
	Function_351(54, 75);
	Function_351(55, 75);
	Function_351(56, 75);
	Function_351(57, 90);
	Function_351(58, 90);
	Function_351(59, 90);
	Function_351(60, 90);
	Function_351(61, 90);
	Function_351(62, 90);
	Function_351(63, 90);
	Function_351(64, 95);
	Function_351(65, 95);
	Function_351(66, 95);
	Function_351(67, 95);
	Function_351(68, 90);
	Function_351(69, 90);
	Function_351(70, 90);
	Function_351(71, 90);
	Function_351(72, 95);
	Function_351(73, 95);
	Function_351(74, 95);
	Function_351(75, 95);
	Function_351(76, 95);
	Function_354(Function_539(0, Global_30679[1], 3), 90);
	Function_354(Function_539(0, Global_30658[3], 3), 80);
	Function_354(Function_539(0, Global_30685[1], 3), 70);
	Function_354(Function_539(0, Global_30668[2], 3), 90);
	Function_354(Function_539(0, Global_30658[2], 3), 90);
	Function_354(Function_539(0, Global_30685[2], 3), 90);
	Function_354(Function_539(0, Global_30658[0], 3), 90);
	Function_354(Function_539(0, Global_30640[2], 3), 90);
	return;
}

void Function_351(int iParam0, int iParam1) //Position: 0x1DBC8 / 121800
{
	if (iParam0 >= 4294967295 || iParam0 <= 77)
	{
		return;
	}
	Global_63541[iParam055].f_180 = iParam1;
	return;
}

void Function_352(int iParam0, int iParam1) //Position: 0x1DBE7 / 121831
{
	if (!Function_353(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_296 = iParam1;
	return;
}

bool Function_353(int iParam0) //Position: 0x1DC03 / 121859
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

void Function_354(int iParam0, int iParam1) //Position: 0x1DC19 / 121881
{
	if (!Function_230(iParam0))
	{
		return;
	}
	Global_16198[iParam0] = iParam1;
	return;
}

void Function_355() //Position: 0x1DC32 / 121906
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
	Function_356(&Global_26118);
	ITERATE_IN_LAYOUT(Global_26118, GET_AMBIENT_LAYOUT());
	return;
}

int Function_356(int iParam0) //Position: 0x1DCE9 / 122089
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_10());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_10());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_357() //Position: 0x1DD1A / 122138
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_358() //Position: 0x1DD2F / 122159
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_359() //Position: 0x1DD41 / 122177
{
	Function_362();
	Function_361();
	Function_360();
	return;
}

void Function_360() //Position: 0x1DD50 / 122192
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

void Function_361() //Position: 0x1DD7B / 122235
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

void Function_362() //Position: 0x1DDA6 / 122278
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

void Function_363(int iParam0) //Position: 0x1DDD1 / 122321
{
	Function_365(0);
	Function_364();
	Global_26303.f_12 = 4294967295;
	Global_26303.f_16 = 0;
	Global_26303.f_20 = 4294967295;
	Global_26303.f_24 = 4294967295;
	Global_26303.f_32 = 0;
	Global_26303.f_36 = 0;
	Global_26303.f_40 = 0;
	if (iParam0 == 1)
	{
		Function_552(&Global_26303 + 8, 4096);
	}
	return;
}

void Function_364() //Position: 0x1DE19 / 122393
{
	Function_552(&Global_26303 + 8, 2);
	Function_552(&Global_26303 + 8, 4);
	Function_552(&Global_26303 + 8, 8);
	Function_552(&Global_26303 + 8, 16);
	Function_552(&Global_26303 + 8, 32);
	Function_552(&Global_26303 + 8, 64);
	Function_552(&Global_26303 + 8, 128);
	Function_552(&Global_26303 + 8, 256);
	Function_552(&Global_26303 + 8, 512);
	Function_552(&Global_26303 + 8, 1024);
	Function_552(&Global_26303 + 8, 2048);
	Function_552(&Global_26303 + 8, 131072);
	Function_552(&Global_26303 + 8, 262144);
	Function_552(&Global_26303 + 8, 524288);
	return;
}

void Function_365(int iParam0) //Position: 0x1DEB3 / 122547
{
	if (iParam0 == 1)
	{
		Function_553(&Global_26303 + 8, 1);
	}
	else
	{
		Function_552(&Global_26303 + 8, 1);
	}
	return;
}

void Function_366(var uParam0, int iParam1) //Position: 0x1DED4 / 122580
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

bool Function_367(int iParam0) //Position: 0x1DEF7 / 122615
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_368(int iParam0, bool bParam1) //Position: 0x1DF13 / 122643
{
	int iVar0;
	
	iVar0 = Function_448(iParam0);
	if (!Function_228(iVar0))
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

bool Function_369(int iParam0, int iParam1, int iParam2) //Position: 0x1DF50 / 122704
{
	int iVar0;
	
	iVar0 = Function_539(iParam0, iParam1, iParam2);
	return Function_230(iVar0);
}

void Function_370(int iParam0) //Position: 0x1DF66 / 122726
{
	Function_366(&Global_28842, iParam0);
	return;
}

void Function_371() //Position: 0x1DF74 / 122740
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

void Function_372() //Position: 0x1DF9A / 122778
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

void Function_373(bool bParam0) //Position: 0x1DFC0 / 122816
{
	if (bParam0)
	{
		Function_556(0x10000000);
	}
	else
	{
		Function_374(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_374(int iParam0) //Position: 0x1DFE4 / 122852
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_375(bool bParam0) //Position: 0x1E001 / 122881
{
	if (Function_510(bParam0, 1) && !Function_510(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_376(int iParam0) //Position: 0x1E02E / 122926
{
	Function_377(&Global_28842, iParam0);
	return;
}

void Function_377(var uParam0, int iParam1) //Position: 0x1E03C / 122940
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_378(bool bParam0) //Position: 0x1E057 / 122967
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(cParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_379() //Position: 0x1E0C1 / 123073
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

void Function_380() //Position: 0x1E188 / 123272
{
	return;
}

void Function_381() //Position: 0x1E18E / 123278
{
	return;
}

void Function_382() //Position: 0x1E194 / 123284
{
	return;
}

void Function_383() //Position: 0x1E19A / 123290
{
	int iVar0;
	int iVar1;
	
	iVar1 = (Global_3361 - 1);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ADD_PLAYLIST_TO_DB(Global_0[iVar0168].f_64, &(Global_0[iVar0168])))
		{
			if (Global_0[iVar0168].f_64 == 38)
			{
				if (iVar0 >= 0)
				{
					Global_0[0168] = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_0[iVar0168] };
					Function_384(&(Global_0[iVar0168]), "MULTI_NONE", "MULTI_NONE", 0, 3, 4294967295, 4294967295, 0, 0);
				}
			}
			else
			{
				Function_384(&(Global_0[iVar0168]), "MULTI_NONE", "MULTI_NONE", 0, 3, 4294967295, 4294967295, 0, 0);
				Global_3361 = (Global_3361 - 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Global_3361 - 1))
	{
		iVar0++;
	}
	return;
}

void Function_384(int iParam0, char* cParam1, char* cParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x1E26F / 123503
{
	strcpy(iParam0, cParam1, 32);
	strcpy(iParam0 + 32, cParam2, 32);
	iParam0->f_68 = iParam5;
	iParam0->f_64 = iParam3;
	iParam0->f_664 = iParam6;
	Function_387(iParam0, 1014);
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
	iParam0->f_656 = (iParam7 || Function_386(iParam4));
	Function_385(iParam0);
}

void Function_385(int iParam0) //Position: 0x1E2D9 / 123609
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

var Function_386(bool bParam0) //Position: 0x1E308 / 123656
{
	return SHIFT_LEFT(bParam0, 20);
}

void Function_387(var uParam0, var uParam1) //Position: 0x1E315 / 123669
{
	uParam0->f_660 = uParam1;
	return;
}

void Function_388() //Position: 0x1E322 / 123682
{
	int iVar0;
	int iVar168;
	
	*(&iVar0 + 76) = 36;
	*(&iVar168 + 76) = 36;
	if (!Function_404(Function_405()))
	{
		Function_384(&iVar0, "net_name_hcfm", "", Function_403(), 0, 16, 411, 0, 0);
		Function_402(&iVar0, 1);
	}
	if (!Function_404(Function_401()))
	{
		Function_384(&iVar0, "net_name_friendlyfm", "", Function_400(), 0, 16, 411, 0, 0);
		Function_402(&iVar0, 1);
	}
	NET_SET_QUICKMATCH_PLAYLIST_RANGE(34, 36);
	Function_384(&iVar0, "MULTI_ROTATION_QUICK_MATCH", "", 33, 3, 16, 411, 0, 0);
	Function_402(&iVar0, 1);
	Function_384(&iVar0, "MULTI_ROTATION_CASUAL", "", 34, 3, 16, 449, 23562, 0);
	Function_399(&iVar0, "TDM_ARM");
	Function_399(&iVar0, "CFA_UPR");
	Function_399(&iVar0, "TDM_LSH");
	Function_399(&iVar0, "DM_CHU");
	Function_399(&iVar0, "CTF_DZC");
	Function_399(&iVar0, "DM_ARM");
	Function_399(&iVar0, "CFS_TUM");
	Function_399(&iVar0, "TDM_CHU");
	Function_399(&iVar0, "CFA_LSH");
	Function_399(&iVar0, "TDM_TUM");
	Function_399(&iVar0, "DM_HEN");
	Function_399(&iVar0, "CTF_ARM");
	Function_399(&iVar0, "DM_LSH");
	Function_399(&iVar0, "CFS_TES");
	Function_399(&iVar0, "TDM_HEN");
	Function_399(&iVar0, "CFA_CHU");
	Function_399(&iVar0, "TDM_LSH");
	Function_399(&iVar0, "DM_CHU");
	Function_399(&iVar0, "CTF_TES");
	Function_399(&iVar0, "DM_HEN");
	Function_399(&iVar0, "CFS_CHU");
	Function_399(&iVar0, "TDM_ARM");
	Function_399(&iVar0, "CFA_HEN");
	Function_399(&iVar0, "TDM_TUM");
	Function_399(&iVar0, "DM_LSH");
	Function_399(&iVar0, "CTF_CHU");
	Function_399(&iVar0, "DM_TUM");
	Function_399(&iVar0, "CFS_ARM");
	Function_399(&iVar0, "TDM_CHU");
	Function_399(&iVar0, "CFA_ARM");
	Function_399(&iVar0, "TDM_HEN");
	Function_399(&iVar0, "DM_ARM");
	Function_399(&iVar0, "CTF_LSH");
	Function_399(&iVar0, "DM_TUM");
	Function_399(&iVar0, "CFS_W2");
	Function_402(&iVar0, 1);
	Function_384(&iVar0, "MULTI_ROTATION_TEAM", "TEAM_Barker", 35, 2, 16, 445, 32770, "$/tune/refGroups/refGroups/mp_teamgames");
	Function_399(&iVar0, "TDM_ARM");
	Function_399(&iVar0, "CTF_CHU");
	Function_399(&iVar0, "TDM_LSH");
	Function_399(&iVar0, "CFS_TUM");
	Function_399(&iVar0, "TDM_CHU");
	Function_399(&iVar0, "CTF_ARM");
	Function_399(&iVar0, "TDM_TUM");
	Function_399(&iVar0, "CFS_TES");
	Function_399(&iVar0, "TDM_HEN");
	Function_399(&iVar0, "CTF_DZC");
	Function_399(&iVar0, "TDM_ARM");
	Function_399(&iVar0, "CFS_CHU");
	Function_399(&iVar0, "TDM_LSH");
	Function_399(&iVar0, "CTF_TES");
	Function_399(&iVar0, "TDM_CHU");
	Function_399(&iVar0, "CFS_ARM");
	Function_399(&iVar0, "TDM_TUM");
	Function_399(&iVar0, "CTF_LSH");
	Function_399(&iVar0, "TDM_HEN");
	Function_399(&iVar0, "CFS_W2");
	Function_402(&iVar0, 1);
	Function_384(&iVar0, "MULTI_ROTATION_FFA", "FFA_Barker", 36, 3, 16, 446, 32770, "$/tune/refGroups/refGroups/mp_ffa");
	Function_399(&iVar0, "DM_ARM");
	Function_399(&iVar0, "CFA_LSH");
	Function_399(&iVar0, "DM_HEN");
	Function_399(&iVar0, "DM_CHU");
	Function_399(&iVar0, "CFA_UPR");
	Function_399(&iVar0, "DM_TUM");
	Function_399(&iVar0, "DM_HEN");
	Function_399(&iVar0, "CFA_ARM");
	Function_399(&iVar0, "DM_CHU");
	Function_399(&iVar0, "DM_LSH");
	Function_399(&iVar0, "CFA_CHU");
	Function_399(&iVar0, "DM_ARM");
	Function_399(&iVar0, "DM_TUM");
	Function_399(&iVar0, "CFA_HEN");
	Function_399(&iVar0, "DM_LSH");
	Function_402(&iVar0, 1);
	Function_384(&iVar0, "MULTI_ROTATION_HARD_TEAM", "", 39, 2, 16, 445, 9750, 0);
	if (Function_398(35, &iVar168))
	{
		Function_397(&iVar168, &iVar0);
	}
	Function_402(&iVar0, 1);
	Function_384(&iVar0, "MULTI_ROTATION_HARD_FFA", "", 40, 3, 16, 446, 9750, 0);
	if (Function_398(36, &iVar168))
	{
		Function_397(&iVar168, &iVar0);
	}
	Function_402(&iVar0, 1);
	Function_384(&iVar0, "MULTI_ROTATION_VET_TEAM", "", 41, 2, 16, 445, 75030, 0);
	if (Function_398(35, &iVar168))
	{
		Function_397(&iVar168, &iVar0);
	}
	Function_402(&iVar0, 1);
	Function_384(&iVar0, "MULTI_ROTATION_VET_FFA", "", 42, 3, 16, 446, 75030, 0);
	if (Function_398(36, &iVar168))
	{
		Function_397(&iVar168, &iVar0);
	}
	Function_402(&iVar0, 1);
	Function_396(36, -2129.431f, 16.39f, 2605.05f, 0, 4294967295, 4294967295);
	Function_396(36, -2621.622f, 30.118f, 4261.624f, 232.5f, 4294967295, 4294967295);
	Function_396(36, -1707.78f, 8.034f, 4229.91f, 0, 4294967295, 4294967295);
	Function_396(36, -865.57f, 91.402f, 2391.45f, 45.0f, 4294967295, 4294967295);
	Function_396(36, -3300.284f, 17.5f, 2680.583f, 20.0f, Global_30658[0], 4294967295);
	Function_395(36, -277.801f, 84.34f, 2119.444f, "CFA_UPR", 187.5f, 4294967295);
	Function_396(35, -2188.603f, 16.364f, 2593.315f, 75.0f, 4294967295, 4294967295);
	Function_396(35, -2703.85f, 32.038f, 4239.5f, 37.5f, 4294967295, 4294967295);
	Function_395(35, -471.798f, 20.379f, 3887.847f, "CTF_DZC", 0, 4294967295);
	Function_396(35, -1737.93f, 7.304f, 4202.1f, 90.0f, 4294967295, 4294967295);
	Function_396(35, -889.824f, 90.353f, 2429.62f, 195.0f, 4294967295, 4294967295);
	Function_395(35, -3389.631f, 55.04f, 4743.534f, "CFS_TES", 0, 4294967295);
	Function_396(35, -3264.534f, 15.443f, 2745.565f, 142.5f, Global_30658[0], 4294967295);
	Function_395(35, -1941.536f, 26.911f, 2248.267f, "CFS_W2", 270.0f, 4294967295);
	Function_394(72, -932.201f, 90.669f, 2416.194f, 0, 4294967295);
	Function_394(72, 124.655f, 73.287f, 2298.732f, 270.0f, 4294967295);
	Function_394(72, -2173.881f, 16.449f, 2632.591f, 270.0f, 4294967295);
	Function_394(72, -191.351f, 83.425f, 2070.354f, 262.5f, 4294967295);
	Function_394(72, -74.442f, 116.861f, 1413.149f, 240.0f, 4294967295);
	Function_394(72, -416.726f, 151.086f, 1610.745f, 292.5f, 4294967295);
	Function_394(72, 681.17f, 78.31f, 1344.55f, 90.0f, 4294967295);
	Function_394(72, -3259.457f, 15.972f, 2705.493f, 0, 4294967295);
	Function_394(72, -3684.166f, 8.982f, 3489.312f, 0, 4294967295);
	Function_394(72, -3639.929f, 42.273f, 2138.375f, 150.0f, 4294967295);
	Function_394(72, -3094.139f, 45.177f, 3765.219f, 270.0f, 4294967295);
	Function_394(72, -1695.843f, 8.032f, 4263.501f, 0, 4294967295);
	Function_394(72, -2759.2f, 32.125f, 4276.01f, 232.5f, 4294967295);
	Function_394(72, -4279.463f, 18.303f, 4470.403f, 60.0f, 4294967295);
	Function_394(72, -790.971f, 13.006f, 3734.266f, 45.0f, 4294967295);
	Function_394(72, -692.579f, 63.247f, 3323.76f, 307.5f, 4294967295);
	Function_394(72, -446.919f, 21.247f, 3926.11f, 262.5f, 4294967295);
	Function_394(73, -843.511f, 92.359f, 2372.548f, 293.0f, 4294967295);
	Function_394(73, -2185.64f, 16.37f, 2618.4f, 97.5f, 4294967295);
	Function_394(73, 702.371f, 78.306f, 1344.654f, 180.0f, 4294967295);
	Function_394(73, -2691.558f, 31.122f, 4272.169f, 172.5f, 4294967295);
	Function_394(73, -1683.17f, 8.031f, 4232.5f, 270.0f, 4294967295);
	Function_394(73, -4261.85f, 18.281f, 4453.5f, 37.5f, 4294967295);
	if (Function_523(64))
	{
		Function_396(54, -789.002f, 12.715f, 3698.875f, 0, 4294967295, 4294967295);
		Function_396(54, 168.1746f, 73.29424f, 2222.892f, 0, 4294967295, 4294967295);
		Function_396(54, -4289.077f, 26.292f, 4380.94f, 0, 4294967295, 4294967295);
		Function_396(53, -2157.657f, 16.427f, 2595.523f, 0, 4294967295, 4294967295);
		Function_396(53, -138.8952f, 118.769f, 1343.499f, 0, 4294967295, 4294967295);
		Function_396(53, -795.0887f, 12.715f, 3699.661f, 0, 4294967295, 4294967295);
		Function_396(53, -800.8856f, 92.304f, 2375.189f, 0, 4294967295, 4294967295);
		Function_396(53, 163.9887f, 73.304f, 2231.428f, 0, 4294967295, 4294967295);
	}
	else
	{
		Function_393("MULTI_ROTATION_POKER", "POKER_Barker", 53, 433, 0);
		Function_393("MULTI_ROTATION_LIARSDICE", "LIARSDICE_Barker", 54, 426, 0);
		Function_392(54, "nbuy_LandC", -789.002f, 12.715f, 3698.875f, 0, 4294967295);
		Function_392(54, "nbuy_LandC", 168.1746f, 73.29424f, 2222.892f, 0, 4294967295);
		Function_392(54, "nbuy_LandC", -4289.077f, 26.292f, 4380.94f, 0, 4294967295);
		Function_392(53, "nbuy_LandC", -2157.657f, 16.427f, 2595.523f, 0, 4294967295);
		Function_392(53, "nbuy_LandC", -138.8952f, 118.769f, 1343.499f, 0, 4294967295);
		Function_392(53, "nbuy_LandC", -795.0887f, 12.715f, 3699.661f, 0, 4294967295);
		Function_392(53, "nbuy_LandC", -800.8856f, 92.304f, 2375.189f, 0, 4294967295);
		Function_392(53, "nbuy_LandC", 163.9887f, 73.304f, 2231.428f, 0, 4294967295);
	}
	Function_389(61, -2162.95f, 19.95f, 2600.85f, "FRD_ARM", 225.0f, 0 + 50);
	Function_389(61, -2665.14f, 31.387f, 4250.96f, "FRD_CHU", 262.1f, 1 + 50);
	Function_389(61, -823.25f, 96.96f, 2431.58f, "FRD_HEN", 27.5f, 2 + 50);
	Function_389(61, 139.59f, 75.43f, 2343.11f, "FRD_THI", 0.0f, 3 + 50);
	Function_389(61, 767.56f, 78.306f, 1318.513f, "FRD_BLK", -125.0f, 4 + 50);
	Function_389(61, -4298.98f, 22.044f, 4410.49f, "FRD_ESC", 127.1f, 5 + 50);
	Function_389(61, -1700.19f, 8.08f, 4220.47f, "FRD_LSH", 180.0f, 6 + 50);
	return;
}

void Function_389(var uParam0, vector3 vParam1, char* cParam4, float fParam5, int iParam6) //Position: 0x1F15D / 127325
{
	int iVar0;
	
	iVar0 = Function_390(StackVal, StackVal, uParam0, vParam1, fParam5, iParam6);
	if (iVar0 >= 4294967295)
	{
		(&Global_78617 + 196[iVar010])->f_16 = 146;
		strcpy(&Global_78617 + 196[iVar010] + 20, cParam4, 16);
	}
}

var Function_390(var uParam0, vector3 vParam1, var uParam4, int iParam5) //Position: 0x1F198 / 127384
{
	if (iParam5 == 4294967295)
	{
		iParam5 = (&Global_78617 + 196)->f_2404;
		if (Function_391(iParam5))
		{
			return 4294967295;
		}
		(&Global_78617 + 196)->f_2404++;
	}
	else if (Function_391(iParam5))
	{
		return 4294967295;
	}
	*(&Global_78617 + 196[iParam510]) = { StackVal, StackVal, vParam1 };
	(&Global_78617 + 196[iParam510])->f_12 = uParam4;
	(&Global_78617 + 196[iParam510])->f_36 = uParam0;
	return iParam5;
}

bool Function_391(int iParam0) //Position: 0x1F20E / 127502
{
	return (&Global_78617 + 196[iParam010])->f_36 == 0;
}

void Function_392(var uParam0, char* cParam1, vector3 vParam2, int iParam5, int iParam6) //Position: 0x1F222 / 127522
{
	int iVar0;
	
	iVar0 = Function_390(StackVal, StackVal, uParam0, vParam2, iParam5, iParam6);
	if (iVar0 >= 4294967295)
	{
		(&Global_78617 + 196[iVar010])->f_16 = 4294967293;
		strcpy(&Global_78617 + 196[iVar010] + 20, cParam1, 16);
	}
}

void Function_393(char* cParam0, char* cParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x1F25E / 127582
{
	struct<669> Var0;
	
	*(&Var0 + 76) = 36;
	strcpy(&Var0, cParam0, 32);
	strcpy(&Var0 + 32, cParam1, 32);
	Var0.f_64 = iParam2;
	Var0.f_664 = iParam3;
	if (IS_STRING_VALID(bParam4))
	{
		if (!_IS_TYPE_ID_VALID_BY_STRING(bParam4, 7))
		{
		}
		Var0.f_668 = GET_ASSET_ID(bParam4, 7);
	}
	else
	{
		Var0.f_668 = "";
	}
	Function_385(&Var0);
	Function_402(&Var0, 0);
}

void Function_394(int iParam0, vector3 vParam1, float fParam4, int iParam5) //Position: 0x1F2BE / 127678
{
	int iVar0;
	
	iVar0 = Function_390(StackVal, StackVal, iParam0, vParam1, fParam4, iParam5);
	if (iVar0 >= 4294967295)
	{
		(&Global_78617 + 196[iVar010])->f_16 = 146;
		strcpy(&Global_78617 + 196[iVar010] + 20, "", 16);
	}
}

void Function_395(var uParam0, vector3 vParam1, char* cParam4, int iParam5, int iParam6) //Position: 0x1F2FA / 127738
{
	int iVar0;
	
	iVar0 = Function_390(StackVal, StackVal, uParam0, vParam1, iParam5, iParam6);
	if (iVar0 >= 4294967295)
	{
		(&Global_78617 + 196[iVar010])->f_16 = 4294967294;
		strcpy(&Global_78617 + 196[iVar010] + 20, cParam4, 16);
	}
}

void Function_396(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6) //Position: 0x1F336 / 127798
{
	int iVar0;
	
	iVar0 = Function_390(StackVal, StackVal, iParam0, vParam1, fParam4, iParam6);
	if (iVar0 >= 4294967295)
	{
		(&Global_78617 + 196[iVar010])->f_16 = iParam5;
		strcpy(&Global_78617 + 196[iVar010] + 20, "", 16);
	}
}

void Function_397(int iParam0, char* cParam1) //Position: 0x1F372 / 127858
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (iParam0->f_72 - 1))
	{
		Function_399(cParam1, iParam0 + 76[iVar04]);
		iVar0++;
	}
	return;
}

bool Function_398(int iParam0, int iParam1) //Position: 0x1F39D / 127901
{
	if (GET_PLAYLIST_FROM_DB(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int Function_399(char* cParam0, char* cParam1) //Position: 0x1F3B0 / 127920
{
	var uVar0;
	char* cVar29[64];
	char* cVar45[64];
	
	if (!UNK_0xFAD5A270(cParam1, &uVar0))
	{
		strcpy(&cVar29, "Can't add nonexistent "", 64);
		stradd(&cVar29, cParam1, 64);
		stradd(&cVar29, "" to playlist", 64);
	}
	if (cParam0->f_72 <= 36)
	{
		strcpy(cParam0 + 76[cParam0->f_724], cParam1, 16);
		cParam0->f_72++;
		return 1;
	}
	strcpy(&cVar45, """, 64);
	stradd(&cVar45, cParam1, 64);
	stradd(&cVar45, "" puts playlist "", 64);
	stradd(&cVar45, cParam0, 64);
	stradd(&cVar45, "" over the limit", 64);
	return 0;
}

int Function_400() //Position: 0x1F460 / 128096
{
	return 31;
}

int Function_401() //Position: 0x1F468 / 128104
{
	return 31;
}

int Function_402(int iParam0, bool bParam1) //Position: 0x1F470 / 128112
{
	if (ADD_PLAYLIST_TO_DB(iParam0->f_64, iParam0))
	{
		if (bParam1)
		{
			NET_REGISTER_PLAYLIST_TYPE(iParam0, iParam0->f_64, iParam0->f_68);
			if (Function_510(iParam0->f_656, 4))
			{
				NET_SET_PLAYLIST_LOCKED(iParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int Function_403() //Position: 0x1F4AC / 128172
{
	return 32;
}

bool Function_404(int iParam0) //Position: 0x1F4B4 / 128180
{
	struct<73> Var0;
	
	*(&Var0 + 76) = 36;
	if (Function_398(iParam0, &Var0))
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

int Function_405() //Position: 0x1F4EF / 128239
{
	return 32;
}

void Function_406(int iParam0, bool bParam1) //Position: 0x1F4F7 / 128247
{
	int iVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	iVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || iVar0);
	return;
	return;
}

void Function_407() //Position: 0x1F55E / 128350
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0.0f;
	iVar1 = Function_415();
	iVar2 = Function_414();
	iVar3 = Function_413();
	fVar0 = (fVar0 + (24.0f * Function_412(1.0f, (IntToFloat(Function_522(12)) / 24.0f))));
	fVar0 = (fVar0 + (17.0f * Function_412(1.0f, (IntToFloat(Function_522(13)) / 17.0f))));
	fVar0 = (fVar0 + (7.0f * Function_412(1.0f, (IntToFloat(Function_522(14)) / 7.0f))));
	fVar0 = (fVar0 + (9.0f * Function_412(1.0f, (IntToFloat(Function_522(15)) / 9.0f))));
	fVar0 = (fVar0 + (4.5f * Function_412(1.0f, (IntToFloat(iVar1) / 9.0f))));
	fVar0 = (fVar0 + (3.5f * Function_412(1.0f, (IntToFloat(iVar3) / 7.0f))));
	fVar0 = (fVar0 + (2.0f * Function_412(1.0f, (IntToFloat(((Function_522(363) + Function_522(364)) + Function_522(365))) / 20.0f))));
	fVar0 = (fVar0 + (2.5f * Function_412(1.0f, (IntToFloat(Function_522(469)) / 5.0f))));
	fVar0 = (fVar0 + (2.5f * Function_412(1.0f, (IntToFloat(Function_522(400)) / 5.0f))));
	fVar0 = (fVar0 + (3.0f * Function_412(1.0f, (IntToFloat(Function_522(410)) / 6.0f))));
	fVar0 = (fVar0 + (3.0f * Function_412(1.0f, (Function_19(474) / Function_21(474)))));
	fVar0 = (fVar0 + (2.0f * Function_412(1.0f, (Function_19(475) / Function_21(475)))));
	fVar0 = (fVar0 + (1.0f * Function_412(1.0f, (Function_19(476) / Function_21(476)))));
	fVar0 = (fVar0 + (9.0f * Function_412(1.0f, (IntToFloat(iVar2) / 18.0f))));
	fVar0 = (fVar0 + (2.0f * Function_412(1.0f, (Function_19(468) / 13.0f))));
	if (Function_332(3) > 10)
	{
		fVar0 = (fVar0 + 2.0f);
	}
	else if (Function_332(3) > 5)
	{
		fVar0 = (fVar0 + 1.0f);
	}
	if (Function_332(0) > 10)
	{
		fVar0 = (fVar0 + 2.0f);
	}
	else if (Function_332(0) > 5)
	{
		fVar0 = (fVar0 + 1.0f);
	}
	if (Function_332(2) > 10)
	{
		fVar0 = (fVar0 + 2.0f);
	}
	else if (Function_332(2) > 5)
	{
		fVar0 = (fVar0 + 1.0f);
	}
	if (Function_332(1) > 10)
	{
		fVar0 = (fVar0 + 2.0f);
	}
	else if (Function_332(1) > 5)
	{
		fVar0 = (fVar0 + 1.0f);
	}
	Function_410();
	Function_409(5, fVar0, 0);
	Function_408(iVar1, iVar2, iVar3);
	if (fVar0 <= 100.0f)
	{
		if (!Function_23(12))
		{
			Function_76(12, 0, 1);
		}
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(32))
		{
			AWARD_ACHIEVEMENT(32);
		}
	}
	else if (fVar0 <= 75.0f)
	{
		if (!Function_75(12))
		{
			Function_74(12, 0, 1, 1, 0);
		}
	}
	return;
}

void Function_408(var uParam0, var uParam1, int iParam2) //Position: 0x1F7C5 / 128965
{
	if (Function_332(3) > 10)
	{
	}
	else if (Function_332(3) > 5)
	{
	}
	if (Function_332(0) > 10)
	{
	}
	else if (Function_332(0) > 5)
	{
	}
	if (Function_332(2) > 10)
	{
	}
	else if (Function_332(2) > 5)
	{
	}
	if (Function_332(1) > 10)
	{
	}
	else if (Function_332(1) > 5)
	{
	}
	return;
}

int Function_409(int iParam0, float fParam1, bool bParam2) //Position: 0x1F81B / 129051
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
	if (Global_34581[iParam0] > fParam1)
	{
		Function_48(iParam0, fParam1, 0);
	}
	Global_34581[iParam0] = fParam1;
	Function_20(iParam0);
	if (bParam2)
	{
		Function_9(iParam0, 1, fParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_410() //Position: 0x1FA87 / 129671
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = (Function_411(2, Function_332(1)) - 1);
	bVar1 = SHIFT_LEFT((Function_411(2, Function_332(0)) - 1), 10);
	bVar2 = SHIFT_LEFT((Function_411(2, Function_332(2)) - 1), 20);
	bVar3 = SHIFT_LEFT((Function_411(2, Function_332(3)) - 1), 20);
	Function_55(5, ((iVar0 || bVar1) || bVar2));
	Function_55(4, bVar3);
	return;
}

int Function_411(int iParam0, int iParam1) //Position: 0x1FADE / 129758
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 1;
	while (iVar1 < iParam1)
	{
		iVar0 = (iVar0 * iParam0);
		iVar1++;
	}
	return iVar0;
}

float Function_412(float fParam0, float fParam1) //Position: 0x1FB0B / 129803
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

var Function_413() //Position: 0x1FB1E / 129822
{
	int iVar0;
	
	if (Function_417(Global_30734) >= 0)
	{
		iVar0++;
	}
	if (Function_417(Global_30736) >= 0)
	{
		iVar0++;
	}
	if (Function_417(Global_30738) >= 0)
	{
		iVar0++;
	}
	if (Function_417(Global_30737) >= 0)
	{
		iVar0++;
	}
	if (Function_417(Global_30739) >= 0)
	{
		iVar0++;
	}
	if (Function_417(Global_30741) >= 0)
	{
		iVar0++;
	}
	if (Function_417(Global_30740) >= 0)
	{
		iVar0++;
	}
	return iVar0;
}

var Function_414() //Position: 0x1FB96 / 129942
{
	int iVar0;
	bool bVar1;
	
	if (Function_50(3))
	{
		bVar1 = (bVar1 || 1);
		iVar0++;
	}
	if (Function_50(9))
	{
		bVar1 = (bVar1 || 2);
		iVar0++;
	}
	if (Function_50(14))
	{
		bVar1 = (bVar1 || 4);
		iVar0++;
	}
	if (Function_50(20))
	{
		bVar1 = (bVar1 || 8);
		iVar0++;
	}
	if (Function_50(22))
	{
		bVar1 = (bVar1 || 16);
		iVar0++;
	}
	if (Function_50(27))
	{
		bVar1 = (bVar1 || 32);
		iVar0++;
	}
	if (Function_50(31))
	{
		bVar1 = (bVar1 || 64);
		iVar0++;
	}
	if (Function_50(34))
	{
		bVar1 = (bVar1 || 128);
		iVar0++;
	}
	if (Function_50(37))
	{
		bVar1 = (bVar1 || 256);
		iVar0++;
	}
	if (Function_50(44))
	{
		bVar1 = (bVar1 || 512);
		iVar0++;
	}
	if (Function_50(48))
	{
		bVar1 = (bVar1 || 1024);
		iVar0++;
	}
	if (Function_50(53))
	{
		bVar1 = (bVar1 || 2048);
		iVar0++;
	}
	if (Function_50(56))
	{
		bVar1 = (bVar1 || 4096);
		iVar0++;
	}
	if (Function_50(59))
	{
		bVar1 = (bVar1 || 8192);
		iVar0++;
	}
	if (Function_50(63))
	{
		bVar1 = (bVar1 || 16384);
		iVar0++;
	}
	if (Function_50(67))
	{
		bVar1 = (bVar1 || 32768);
		iVar0++;
	}
	if (Function_50(71))
	{
		bVar1 = (bVar1 || 65536);
		iVar0++;
	}
	if (Function_50(76))
	{
		bVar1 = (bVar1 || 131072);
		iVar0++;
	}
	Function_55(7, bVar1);
	return iVar0;
}

var Function_415() //Position: 0x1FD27 / 130343
{
	int iVar0;
	
	if (Function_23(9))
	{
		iVar0++;
	}
	if (Function_23(10))
	{
		iVar0++;
	}
	if (Function_23(3))
	{
		iVar0++;
	}
	if (Function_23(15))
	{
		iVar0++;
	}
	if (Function_23(14))
	{
		iVar0++;
	}
	if (Function_23(5))
	{
		iVar0++;
	}
	if (Function_23(6))
	{
		iVar0++;
	}
	if (Function_23(7))
	{
		iVar0++;
	}
	if (Function_23(8))
	{
		iVar0++;
	}
	return iVar0;
}

void Function_416(int iParam0, int iParam1) //Position: 0x1FDA9 / 130473
{
	if (!Function_230(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_12 = iParam1;
	return;
}

int Function_417(int iParam0) //Position: 0x1FDC4 / 130500
{
	if (!Function_228(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

int Function_418(int iParam0) //Position: 0x1FDDE / 130526
{
	switch (iParam0)
	{
		case 0x00000000:
			return Global_30640[6];
			break;
		
		case 0x00000001:
			return Global_30640[7];
			break;
		
		case 0x00000002:
			return Global_30640[11];
			break;
		
		case 0x00000003:
			return Global_30640[13];
			break;
		
		case 0x00000004:
			return Global_30658[7];
			break;
		
		case 0x00000005:
			return Global_30679[3];
			break;
		
		case 0x00000006:
			return Global_30668[3];
			break;
		
		case 0x00000007:
			return Global_30668[6];
			break;
		
		case 0x00000008:
			return Global_30685[5];
			break;
		
		case 0x00000009:
			return Global_30693[4];
			break;
		
		case 0x0000000A:
			return Global_30693[3];
			break;
		
		case 0x0000000B:
			return Global_30693[7];
			break;
		
		case 0x0000000C:
			return Global_30693[11];
			break;
		
		case 0x0000000D:
			return Global_30693[9];
			break;
		
		case 0x0000000E:
			return Global_30693[8];
			break;
		
		case 0x0000000F:
			return Global_30693[10];
			break;
		
		case 0x00000010:
			return Global_30723[6];
			break;
		
		case 0x00000011:
			return Global_30723[3];
			break;
		
		case 0x00000012:
			return Global_30723[5];
			break;
		
		case 0x00000013:
			return Global_30723[4];
			break;
	}
	return Global_30640[6];
}

int Function_419(int iParam0) //Position: 0x1FF37 / 130871
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_343(iParam0))
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

int Function_420(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1FF8F / 130959
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
	Function_48(iParam0, TO_FLOAT(bParam1), 1);
	Function_20(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_9(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_421(var uParam0, int iParam1) //Position: 0x201BA / 131514
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_422(var uParam0, int iParam1) //Position: 0x201C9 / 131529
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_423(int iParam0, bool bParam1) //Position: 0x201E5 / 131557
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	if (((*&Global_12976 + 168)[iParam0] && bVar0) != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_424() //Position: 0x2024A / 131658
{
	return HAS_STRING_TABLE_LOADED("jp");
}

void Function_425() //Position: 0x20258 / 131672
{
	Function_421(&(Global_29008[Global_30717[1]]), 256);
	Function_421(&(Global_29008[Global_30640[4]]), 256);
	Function_421(&(Global_29008[Global_30668[2]]), 256);
	Function_449(&(Global_29008[Global_30668[2]]), 32768);
	Function_421(&(Global_29008[Global_30658[3]]), 256);
	Function_449(&(Global_29008[Global_30658[3]]), 32768);
	Function_421(&(Global_29008[Global_30685[2]]), 256);
	Function_449(&(Global_29008[Global_30685[2]]), 32768);
	Function_421(&(Global_29008[Global_30679[1]]), 256);
	Function_449(&(Global_29008[Global_30679[1]]), 32768);
	return;
}

void Function_426(var uParam0, int iParam1) //Position: 0x2030C / 131852
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_427(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x2031B / 131867
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_258(12);
	Function_262(2);
	Function_259((15 - Function_265(105)));
	if (Function_227(iParam0) == 1)
	{
		iVar2 = Function_295(iParam0);
		Function_446(&(Global_3422[iVar240]));
		Function_538(4194304);
		if (bParam3)
		{
			Function_439(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_438(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_439(iVar2, &uVar0, 0);
		}
		bVar1 = Function_437();
		if (bParam1)
		{
			Function_436(iVar2, iParam0, bVar1);
			Function_290();
		}
	}
	Function_429(iParam0, bParam1, iParam2, bVar1);
	if (Function_227(iParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_291(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_227(iParam0) == 1)
		{
			iVar2 = Function_295(iParam0);
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
	Function_428();
}

void Function_428() //Position: 0x20408 / 132104
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

void Function_429(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x20438 / 132152
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_230(iParam0))
	{
		Function_224();
		return;
	}
	iVar0 = Function_227(iParam0);
	if (!iVar0 != 1)
	{
		Global_13172[iParam011].f_12++;
		if (Function_82())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", iVar0);
		}
	}
	else
	{
		Global_6269 = Function_295(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_435(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_236(Global_6269) };
		}
		if (Function_82())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_433();
		CLEAR_JOURNAL_ENTRY(iVar11);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(iVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(iVar11, 1);
		}
	}
	if (Function_82())
	{
		Function_432();
	}
	Global_13172[iParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_431("DEED_COMPLETE", iParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[iParam011].f_4 = 4;
		}
		else
		{
			Global_13172[iParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[iParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_293(iParam0);
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
						switch (Function_295(iParam0))
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
			Function_284(1);
			Function_283(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_430(iParam0, &Var14);
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

void Function_430(int iParam0, int iParam1) //Position: 0x2068C / 132748
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_431(char* cParam0, int iParam1) //Position: 0x206C6 / 132806
{
	struct<4> Var0;
	
	if (!Function_230(iParam1))
	{
		return;
	}
	switch (Function_227(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_296(Function_295(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_227(iParam1), Function_295(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_227(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_227(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_227(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_227(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_227(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

void Function_432() //Position: 0x207EA / 133098
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
	PLAYSTAT_INT("HC_MONEY", Function_522(0));
	PLAYSTAT_INT("HC_FAME", Function_522(3));
	PLAYSTAT_INT("HC_HONOR", Function_522(1));
	return;
}

void Function_433() //Position: 0x20942 / 133442
{
	int iVar0;
	int iVar1;
	
	if (!Function_299(Global_6269))
	{
		return;
	}
	iVar0 = Function_522(24);
	iVar1 = Function_448(Global_6269);
	if (!Function_299(iVar0) && Function_434(iVar1) < 0)
	{
		Function_521(24, Global_6269, 0);
		Function_270(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_434(Function_448(iVar0)))
	{
		Function_521(24, Global_6269, 0);
		Function_270(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_434(int iParam0) //Position: 0x209C2 / 133570
{
	if (!Function_230(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<24> Function_435(char* cParam0) //Position: 0x209DC / 133596
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

void Function_436(int iParam0, int iParam1, bool bParam2) //Position: 0x20C32 / 134194
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	char* cVar10[16];
	int iVar14;
	int iVar15;
	struct<4> Var16;
	
	if (!Function_299(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_298(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_296(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_522(42) - Global_34165.f_116);
				bVar1 = (Function_522(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_296(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_21(49)) - Global_34165.f_124);
				bVar3 = (Function_522(49) - Global_34165.f_128);
				fVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (fVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = fVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_296(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, fVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_522(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				fVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_296(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (fVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = fVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_296(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, fVar9, 1);
				}
				fVar8 = fVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_297(iParam0, iVar14, Global_34165.f_140, fVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_276(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_236(iParam0) };
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

var Function_437() //Position: 0x20ECE / 134862
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_438(int iParam0) //Position: 0x20EF3 / 134899
{
	if (!Function_299(iParam0))
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
			Function_276(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_276(25, 1, 0);
			Function_303(1, 1);
			break;
		
		case 0x00000015:
			Function_303(50, 1);
			Function_276(250, 1, 0);
			Function_267(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_276(75, 1, 0);
			Function_267(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_276(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_303(50, 1);
			Function_276(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_303(5, 1);
			Function_267(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_276(75, 1, 0);
			Function_267(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_303(5, 1);
			Function_276(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_276(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_267(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_303(25, 1);
			Function_276(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_303(10, 1);
			Function_276(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_276(50, 1, 0);
			Function_267(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_276(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_276(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_267(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_303(20, 1);
			Function_276(75, 1, 0);
			Function_267(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_303(25, 1);
			Function_276(150, 1, 0);
			Function_267(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_303(10, 1);
			Function_276(150, 1, 0);
			Function_267(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_276(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_267(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_267(100, 1, 0);
			Function_303(5, 1);
			break;
		
		case 0x0000000F:
			Function_303(3, 1);
			Function_276(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_267(125, 1, 0);
			Function_276(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_303(50, 1);
			Function_276(100, 1, 0);
			Function_267(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_303(50, 1);
			Function_276(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_303(75, 1);
			Function_276(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_276(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_276(75, 1, 0);
			Function_267(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_276(250, 1, 0);
			Function_267(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_276(75, 1, 0);
			Function_267(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_276(200, 1, 0);
			Function_267(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_276(75, 1, 0);
			Function_267(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_276(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_303(50, 1);
			Function_276(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_303(100, 1);
			Function_276(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_276(200, 1, 0);
			Function_267(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_276(300, 1, 0);
			Function_267(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_276(300, 1, 0);
			Function_267(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_276(300, 1, 0);
			Function_267(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_276(500, 1, 0);
			Function_267(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_276(150, 1, 0);
			Function_267(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_267(25, 1, 0);
			Function_303(100, 1);
			break;
		
		case 0x0000002A:
			Function_276(150, 1, 0);
			Function_267(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_267(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_267(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_267(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_267(150, 1, 0);
			Function_303(100, 1);
			break;
		
		case 0x00000035:
			Function_267(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_267(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_267(150, 1, 0);
			Function_303(100, 1);
			break;
		
		case 0x00000032:
			Function_267(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_267(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_439(int iParam0, var uParam1, bool bParam2) //Position: 0x213AE / 136110
{
	struct<4> Var0;
	
	if (!Function_299(iParam0))
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
			Function_444(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_172(Global_30640[0]);
			Function_172(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_442(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_172(Global_30668[0]);
			Function_94(0);
			Function_441(2, 1);
			Function_441(0, 1);
			Function_441(1, 1);
			break;
		
		case 0x00000003:
			Function_172(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_172(Global_30668[0]);
			Function_172(Global_30640[0]);
			Function_331(0, 1);
			Function_331(15, 1);
			Function_331(9, 1);
			Function_331(12, 1);
			Function_331(16, 1);
			Function_441(3, 1);
			break;
		
		case 0x00000005:
			Function_172(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_442(21, bParam2, 4);
			Function_172(Global_30668[0]);
			Function_441(39, 1);
			break;
		
		case 0x00000007:
			Function_172(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_172(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3() || Function_456())
				{
					if (!Function_75(4))
					{
						Function_74(4, 0, 0, 1, 0);
					}
				}
			}
			Function_172(Global_30640[0]);
			Function_172(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_172(Global_30640[0]);
			Function_172(Global_30668[2]);
			Function_421(&(Global_29008[Global_30668[2]]), 32768);
			Function_449(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_442(9, bParam2, 4);
			Function_172(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_172(Global_30640[0]);
			Function_172(Global_30658[0]);
			Function_421(&(Global_29008[Global_30658[0]]), 32768);
			Function_449(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_172(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_172(Global_30640[0]);
			Function_172(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_172(Global_30640[1]);
			Function_172(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_172(Global_30679[0]);
			Function_172(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_172(Global_30658[5]);
			Function_172(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_442(21, bParam2, 4);
			Function_172(Global_30640[4]);
			Function_172(Global_30658[4]);
			Function_426(&Global_76847, 0x2000000);
			Function_426(&Global_76847, 0x4000000);
			Function_426(&Global_76847, 4096);
			Function_426(&Global_76847, 8);
			Function_426(&Global_76847, 8388608);
			Function_426(&Global_76847, 524288);
			Function_426(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_172(Global_30640[4]);
			Function_172(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_449(&(Global_29008[Global_30640[4]]), 256);
			Function_172(Global_30640[4]);
			Function_172(Global_30658[0]);
			Function_421(&(Global_29008[Global_30658[0]]), 32768);
			Function_449(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_172(Global_30640[0]);
			Function_172(Global_30640[5]);
			Function_442(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_172(Global_30658[3]);
			Function_421(&(Global_29008[Global_30658[3]]), 32768);
			Function_449(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_442(9, bParam2, 4);
			Function_172(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_421(&(Global_29008[Global_30679[1]]), 32768);
			Function_172(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_442(12, bParam2, 4);
			Function_449(&(Global_29008[Global_30679[1]]), 256);
			Function_172(Global_30668[3]);
			Function_172(Global_30693[0]);
			Function_172(Global_30685[0]);
			Function_94(4);
			Function_331(13, 1);
			Function_331(1, 1);
			Function_331(18, 1);
			Function_441(34, 1);
			Function_441(44, 1);
			Function_441(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_442(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_172(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_172(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_172(Global_30693[0]);
			Function_172(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_172(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_172(Global_30685[0]);
			Function_172(Global_30693[0]);
			Function_172(Global_30693[1]);
			Function_172(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_442(23, bParam2, 3);
			Function_331(23, 1);
			Function_172(Global_30685[0]);
			Function_172(Global_30685[2]);
			Function_421(&(Global_29008[Global_30685[2]]), 32768);
			Function_449(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_442(19, bParam2, 4);
			Function_172(Global_30685[0]);
			Function_172(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_442(24, bParam2, 3);
			Function_331(24, 1);
			Function_172(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_172(Global_30685[0]);
			Function_172(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_172(Global_30693[12]);
			Function_172(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_172(Global_30693[12]);
			Function_172(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_442(25, bParam2, 10);
			Function_172(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_172(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_172(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_442(13, bParam2, 4);
			Function_172(Global_30693[2]);
			Function_172(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_75(8))
				{
					Function_74(8, 0, 0, 1, 0);
				}
			}
			Function_172(Global_30685[0]);
			Function_94(9);
			Function_331(7, 1);
			Function_331(11, 1);
			Function_331(3, 1);
			Function_331(20, 1);
			Function_441(57, 1);
			break;
		
		case 0x0000002A:
			Function_442(2, bParam2, 4);
			Function_172(Global_30717[0]);
			Function_172(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_172(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_172(Global_30717[0]);
			Function_172(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_172(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_172(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_172(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_442(17, bParam2, 4);
			Function_172(Global_30723[0]);
			Function_172(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_23(15))
				{
					Function_76(15, 0, 1);
				}
			}
			Function_406(2, 26);
			Function_449(&(Global_29008[Global_30717[1]]), 256);
			Function_94(11);
			Function_172(Global_30717[1]);
			Function_172(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_172(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_172(Global_30717[1]);
			Function_172(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_172(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_172(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_172(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_172(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_172(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_172(Global_30717[1]);
			Function_440(11);
			Function_94(12);
			Global_16537[1121].f_40 = 0;
			Function_441(56, 1);
			if (!bParam2)
			{
				if (!Function_75(9))
				{
					Function_74(9, 0, 0, 0, 0);
				}
				if (!Function_75(10))
				{
					Function_74(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_296(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_440(int iParam0) //Position: 0x21CAC / 138412
{
	bool bVar0;
	
	if (!Function_90(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_98(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_98(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (!DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse", 1);
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Global_16537[iParam021].f_40 = 6;
			Function_95(Global_16537[iParam021].f_48, 16, 0, 0);
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_SET_BOOL(bVar0, "PlayerHouse_NoHorse", 1);
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

int Function_441(int iParam0, int iParam1) //Position: 0x21E1B / 138779
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_255(iParam0, iParam1);
	Function_60(Global_34573, 1, 4, 1);
	return 1;
}

void Function_442(bool bParam0, bool bParam1, int iParam2) //Position: 0x21E8C / 138892
{
	float fVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		fVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_443(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), fVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_444(bParam0, 0, 0);
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

bool Function_443(int iParam0, int iParam1) //Position: 0x21EFA / 139002
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

int Function_444(bool bParam0, bool bParam1, int iParam2) //Position: 0x21F0D / 139021
{
	if (!Function_445(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_41(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_41(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_41(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_445(int iParam0) //Position: 0x21F64 / 139108
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_446(int iParam0) //Position: 0x21F76 / 139126
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, 0);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, 0);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_447(4, 0, 0);
		}
	}
	return;
}

void Function_447(bool bParam0, bool bParam1, int iParam2) //Position: 0x21FDD / 139229
{
	var uVar0;
	
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
		uVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, iParam2);
		Function_191(Global_16524, uVar0, 1);
	}
	return;
}

int Function_448(int iParam0) //Position: 0x220C3 / 139459
{
	if (!Function_299(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_449(var uParam0, int iParam1) //Position: 0x220DD / 139485
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_450(int iParam0, var uParam1, vector3 vParam2) //Position: 0x220F4 / 139508
{
	if (!Function_451(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_26316[iParam0] = uParam1;
	*(&Global_26316 + 16[iParam03]) = { StackVal, StackVal, vParam2 };
}

bool Function_451(int iParam0) //Position: 0x22156 / 139606
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_452() //Position: 0x2216B / 139627
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

void Function_453() //Position: 0x228BE / 141502
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 <= Global_9724)
	{
		if (StackVal != 0)
		{
			iVar4 = Function_88(StackVal);
			Function_86(StackVal);
			vVar1 = { StackVal, StackVal, Function_86(StackVal) };
			Global_9724[iVar0] = ADD_BLIP_FOR_COORD(StackVal, Function_85(&vVar1), 0.0f, 2, iVar4);
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

void Function_454(bool bParam0) //Position: 0x229C6 / 141766
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

void Function_455() //Position: 0x22A0C / 141836
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
			Function_225(Global_13172[iVar011], &iVar1, &iVar2, &uVar3);
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

bool Function_456() //Position: 0x22B9B / 142235
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_510(GET_GAME_EDITION(), 16);
	}
	return 0;
}

var Function_457(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0x22BCB / 142283
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	struct<9> Var5;
	
	bVar0 = Function_458(bParam1);
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
		Function_449(&(Global_29008[bVar0]), 0x403ee3ff);
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
		Function_421(&(Global_29008[bVar0]), 8192);
	}
	if (bParam7)
	{
		Function_421(&(Global_29008[bVar0]), 16384);
	}
	if (bParam8)
	{
		Function_421(&(Global_29008[bVar0]), 32768);
	}
	if (bParam9)
	{
		Function_421(&(Global_29008[bVar0]), 65536);
	}
	switch (iParam4)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			if (Function_343(iParam2))
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
		if (Function_234())
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
		Global_29155[bVar010].f_28 = APPEND_REGION(GET_OBJECT_NAME(bParam3), &vVar2, ((vVar5.x + vVar5.z) / 2.0f), iVar1, Function_422(&(Global_29008[bVar0]), 4096), 0, 0);
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
		Function_279(473, (Function_21(473) + 1.0f));
		iVar11 = Function_419(bVar0);
		if (iVar11 == Global_30621[0])
		{
			Function_279(474, (Function_21(474) + 1.0f));
		}
		else if (iVar11 == Global_30621[1])
		{
			Function_279(475, (Function_21(475) + 1.0f));
		}
		else if (iVar11 == Global_30621[2])
		{
			Function_279(476, (Function_21(476) + 1.0f));
		}
	}
	else
	{
		Function_421(&(Global_29008[bVar0]), 4096);
	}
	return bVar0;
}

var Function_458(bool bParam0) //Position: 0x23183 / 143747
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

void Function_459() //Position: 0x231CF / 143823
{
	var uVar0;
	
	Function_460(4, 1);
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

void Function_460(int iParam0, int iParam1) //Position: 0x26F73 / 159603
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

void Function_461() //Position: 0x26FBC / 159676
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

int Function_462() //Position: 0x27023 / 159779
{
	Function_516(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/treasure_hunting_2", 1, 0);
	Function_516(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/treasure_hunting_7", 1, 0);
	Function_516(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/treasure_hunting_6", 1, 0);
	if (Function_511(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

void Function_463() //Position: 0x2710B / 160011
{
	Global_26137[0] = Function_464("AllowedToInvestigate", 1);
	Global_26137[1] = Function_464("BumpedIntoMeJustNow", 1);
	Global_26137[2] = Function_464("CanCombatFight", 1);
	Global_26137[3] = Function_464("CanHotspotMoveTo", 0);
	Global_26137[4] = Function_464("CanHotspotUse", 0);
	Global_26137[5] = Function_464("CanInvestigateBody", 1);
	Global_26137[6] = Function_464("HasFightCapabilities", 0);
	Global_26137[7] = Function_464("ShouldInvestigateBody", 1);
	Global_26137[8] = Function_464("CanCombatTakeDownFromMount", 1);
	return;
}

var Function_464(bool bParam0, int iParam1) //Position: 0x2722E / 160302
{
	var uVar0;
	
	uVar0 = AI_PREDICATE_FIND_NAMED(bParam0, iParam1);
	if (!AI_PREDICATE_IS_VALID(uVar0))
	{
		LOG_ERROR("GET_NAMED_PREDICATE did not find the given predicate: ");
		LOG_ERROR(bParam0);
	}
	return uVar0;
}

void Function_465() //Position: 0x27289 / 160393
{
	Function_507();
	Function_506();
	Function_505();
	Function_504();
	Function_503();
	Function_502();
	Function_501();
	Function_500();
	Function_499();
	Function_498();
	Function_497();
	Function_496();
	Function_495();
	Function_494();
	Function_493();
	Function_492();
	Function_491();
	Function_490();
	Function_489();
	Function_488();
	Function_487();
	Function_486();
	Function_485();
	Function_484();
	Function_483();
	Function_482();
	Function_481();
	Function_480();
	Function_479();
	Function_478();
	Function_477();
	Function_476();
	Function_475();
	Function_474();
	Function_473();
	Function_472();
	Function_471();
	Function_467();
	Function_466();
	return;
}

void Function_466() //Position: 0x27304 / 160516
{
	return;
}

void Function_467() //Position: 0x2730A / 160522
{
	Function_468(&Global_7171, &Global_8481, 0, 7, "tb/gen_brain");
	return;
}

void Function_468(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x2732A / 160554
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
	Function_470(uParam0[iVar02], 1);
	Function_469(uParam0[iVar02], 2);
	Function_470(uParam0[iVar02], 8);
	Function_470(uParam0[iVar02], 16);
}

void Function_469(var uParam0, int iParam1) //Position: 0x273C4 / 160708
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_470(var uParam0, int iParam1) //Position: 0x273D3 / 160723
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_471() //Position: 0x273EA / 160746
{
	Function_468(&Global_7113, &Global_8395, 0, 325, "upr/upr_Worker1.xml");
	Function_468(&Global_7113, &Global_8395, 1, 201, "upr/upr_Worker2.xml");
	Function_468(&Global_7113, &Global_8395, 2, 176, "upr/upr_Worker3.xml");
	Function_468(&Global_7113, &Global_8395, 3, 177, "upr/upr_Worker4.xml");
	Function_468(&Global_7113, &Global_8395, 4, 40, "upr/upr_Worker5.xml");
	Function_468(&Global_7113, &Global_8395, 5, 41, "upr/upr_Worker6.xml");
	Function_468(&Global_7113, &Global_8395, 6, 27, "upr/upr_Worker7.xml");
	Function_468(&Global_7113, &Global_8395, 7, 177, "upr/upr_Worker8.xml");
	Function_468(&Global_7113, &Global_8395, 8, 197, "upr/upr_Worker9.xml");
	Function_468(&Global_7113, &Global_8395, 9, 175, "upr/upr_Worker10.xml");
	Function_468(&Global_7113, &Global_8395, 10, 132, "upr/upr_Worker11.xml");
	Function_468(&Global_7113, &Global_8395, 11, 174, "upr/upr_Worker12.xml");
	Function_468(&Global_7113, &Global_8395, 12, 43, "upr/upr_Worker13.xml");
	Function_468(&Global_7113, &Global_8395, 13, 10, "upr/upr_Worker14.xml");
	Function_468(&Global_7113, &Global_8395, 14, 42, "upr/upr_Worker15.xml");
	Function_468(&Global_7113, &Global_8395, 15, 9, "upr/upr_Worker16.xml");
	Function_468(&Global_7113, &Global_8395, 16, 173, "upr/upr_Worker17.xml");
	return;
}

void Function_472() //Position: 0x2763B / 161339
{
	Function_468(&Global_7148, &Global_8447, 0, 198, "mtp/Husband_Br_MTP");
	Function_468(&Global_7148, &Global_8447, 1, 52, "mtp/Wife_Br_MTP");
	Function_468(&Global_7148, &Global_8447, 2, 236, "mtp/GrandPa_Br_MTP");
	Function_468(&Global_7148, &Global_8447, 3, 86, "mtp/MTP_Br_Smith");
	Function_468(&Global_7148, &Global_8447, 4, 168, "mtp/Worker01_Br_MTP");
	Function_468(&Global_7148, &Global_8447, 5, 198, "mtp/Worker02_Br_MTP");
	Function_468(&Global_7148, &Global_8447, 6, 36, "mtp/Worker03_Br_MTP");
	Function_468(&Global_7148, &Global_8447, 7, 204, "mtp/Traveler_Br_MTP");
	Function_468(&Global_7148, &Global_8447, 8, 149, "mtp/Worker04_Br_MTP");
	Function_468(&Global_7148, &Global_8447, 9, 203, "mtp/Traveler_Br_2MTP");
	Function_468(&Global_7148, &Global_8447, 10, 166, "mtp/Worker05_Br_MTP");
	return;
}

void Function_473() //Position: 0x277AF / 161711
{
	return;
}

void Function_474() //Position: 0x277B5 / 161717
{
	return;
}

void Function_475() //Position: 0x277BB / 161723
{
	Function_468(&Global_7035, &Global_8279, 11, 25, "blk/blkSmith_br_BLK");
	Function_468(&Global_7035, &Global_8279, 12, 189, "blk/pastor_br_BLK");
	Function_468(&Global_7035, &Global_8279, 13, 452, "blk/fbiDir_br_BLK");
	Function_468(&Global_7035, &Global_8279, 14, 449, "blk/fbiAgent_br_BLK");
	Function_468(&Global_7035, &Global_8279, 15, 91, "blk/theatreMgr_br_BLK");
	Function_468(&Global_7035, &Global_8279, 16, 166, "blk/theatreWkr_br_BLK");
	Function_468(&Global_7035, &Global_8279, 17, 105, "blk/doctor_br_BLK");
	Function_468(&Global_7035, &Global_8279, 18, 82, "blk/bartender_br_BLK");
	Function_468(&Global_7035, &Global_8279, 19, 58, "blk/waitress_br_BLK");
	Function_468(&Global_7035, &Global_8279, 20, 193, "blk/trainStn_br_BLK");
	Function_468(&Global_7035, &Global_8279, 21, 192, "blk/freightStn_br_BLK");
	Function_468(&Global_7035, &Global_8279, 22, 90, "blk/photographer_br_BLK");
	Function_468(&Global_7035, &Global_8279, 23, 96, "blk/ferryWkr_br_BLK");
	Function_468(&Global_7035, &Global_8279, 24, 219, "blk/hotelOwnr_br_BLK");
	Function_468(&Global_7035, &Global_8279, 25, 18, "blk/bankWkr_br_BLK");
	Function_468(&Global_7035, &Global_8279, 26, 89, "blk/bankWkr_br_BLK");
	Function_468(&Global_7035, &Global_8279, 27, 119, "blk/genStoreMgr_br_BLK");
	Function_468(&Global_7035, &Global_8279, 31, 146, "blk/gunShop_br_BLK");
	Function_468(&Global_7035, &Global_8279, 32, 220, "blk/tailor_br_BLK");
	Function_468(&Global_7035, &Global_8279, 33, 257, "blk/blkSmith_br_BLK");
	Function_468(&Global_7035, &Global_8279, 34, 6, "blk/bjdealer_br_BLK");
	return;
}

void Function_476() //Position: 0x27A95 / 162453
{
	return;
}

void Function_477() //Position: 0x27A9B / 162459
{
	Function_468(&Global_7002, &Global_8231, 1, 392, "emt/MexGuard1");
	Function_468(&Global_7002, &Global_8231, 2, 396, "emt/MexGuard2");
	Function_468(&Global_7002, &Global_8231, 3, 393, "emt/MexGuard3");
	Function_468(&Global_7002, &Global_8231, 4, 391, "emt/MexGuard4");
	Function_468(&Global_7002, &Global_8231, 0, 395, "emt/emt_Lead.xml");
	Function_468(&Global_7002, &Global_8231, 5, 9, "emt/emt_Wrk1.xml");
	Function_468(&Global_7002, &Global_8231, 6, 10, "emt/emt_Wrk2.xml");
	Function_468(&Global_7002, &Global_8231, 7, 17, "emt/emt_Wrk3.xml");
	Function_468(&Global_7002, &Global_8231, 8, 11, "emt/emt_Wrk4.xml");
	Function_468(&Global_7002, &Global_8231, 9, 13, "emt/emt_Wrk5.xml");
	Function_468(&Global_7002, &Global_8231, 10, 14, "emt/emt_Wrk6.xml");
	Function_468(&Global_7002, &Global_8231, 11, 15, "emt/emt_Wrk7.xml");
	return;
}

void Function_478() //Position: 0x27C0E / 162830
{
	Function_468(&Global_6987, &Global_8209, 0, 393, "tor/officer_Br_TOR");
	Function_468(&Global_6987, &Global_8209, 1, 379, "tor/sentry_early_Br_TOR");
	Function_468(&Global_6987, &Global_8209, 2, 380, "tor/sentry_late_Br_TOR");
	Function_468(&Global_6987, &Global_8209, 3, 391, "tor/tor_grunt");
	Function_468(&Global_6987, &Global_8209, 4, 393, "tor/tor_grunt1");
	Function_468(&Global_6987, &Global_8209, 5, 379, "tor/tor_grunt2");
	Function_468(&Global_6987, &Global_8209, 6, 379, "tor/tor_grunt3");
	return;
}

void Function_479() //Position: 0x27CFA / 163066
{
	Function_468(&Global_6962, &Global_8172, 0, 395, "elp/elp_Gen");
	Function_468(&Global_6962, &Global_8172, 3, 391, "elp/Guard_Brain_elp");
	Function_468(&Global_6962, &Global_8172, 1, 394, "elp/elp_Major");
	Function_468(&Global_6962, &Global_8172, 2, 379, "elp/elp_Cmder");
	Function_468(&Global_6962, &Global_8172, 10, 320, "elp/elp_prisoner");
	Function_468(&Global_6962, &Global_8172, 11, 260, "elp/elp_Blacksmt");
	Function_468(&Global_6962, &Global_8172, 4, 392, "elp/Guard_Brain_elp1");
	Function_468(&Global_6962, &Global_8172, 5, 393, "elp/Guard_Brain_elp2");
	Function_468(&Global_6962, &Global_8172, 6, 396, "elp/Guard_Brain_elp3");
	Function_468(&Global_6962, &Global_8172, 7, 380, "elp/Guard_Brain_elp4");
	Function_468(&Global_6962, &Global_8172, 8, 381, "elp/Guard_Brain_elp5");
	Function_468(&Global_6962, &Global_8172, 9, 391, "elp/Guard_Brain_elp6");
	return;
}

void Function_480() //Position: 0x27E94 / 163476
{
	Function_468(&Global_6933, &Global_8129, 0, 254, "cas/cas_barTend.xml");
	Function_468(&Global_6933, &Global_8129, 1, 258, "cas/cas_Blacksmth.xml");
	Function_468(&Global_6933, &Global_8129, 2, 308, "cas/cas_Train.xml");
	Function_468(&Global_6933, &Global_8129, 3, 245, "cas/cas_Whore.xml");
	Function_468(&Global_6933, &Global_8129, 4, 246, "cas/cas_Whore1.xml");
	Function_468(&Global_6933, &Global_8129, 5, 247, "cas/cas_Whore2.xml");
	Function_468(&Global_6933, &Global_8129, 6, 315, "cas/cas_Whore3.xml");
	Function_468(&Global_6933, &Global_8129, 7, 250, "cas/cas_Whore4.xml");
	Function_468(&Global_6933, &Global_8129, 8, 248, "cas/cas_Whore5.xml");
	Function_468(&Global_6933, &Global_8129, 9, 249, "cas/cas_Whore6.xml");
	Function_468(&Global_6933, &Global_8129, 10, 133, "cas/cas_Scott.xml");
	Function_468(&Global_6933, &Global_8129, 11, 280, "cas/cas_BdyGrd.xml");
	Function_468(&Global_6933, &Global_8129, 12, 281, "cas/cas_BdyGrd1.xml");
	Function_468(&Global_6933, &Global_8129, 13, 282, "cas/cas_BdyGrd2.xml");
	return;
}

void Function_481() //Position: 0x28083 / 163971
{
	Function_468(&Global_7027, &Global_8268, 0, 305, "cas/cas_Preacher");
	return;
}

void Function_482() //Position: 0x280A9 / 164009
{
	Function_468(&Global_6907, &Global_8091, 0, 321, "agv/RanchOwnr");
	Function_468(&Global_6907, &Global_8091, 1, 237, "agv/LydiaBrain");
	Function_468(&Global_6907, &Global_8091, 2, 268, "agv/LeadRanchHand");
	Function_468(&Global_6907, &Global_8091, 3, 286, "agv/WorkRanchHand");
	Function_468(&Global_6907, &Global_8091, 4, 287, "agv/WorkRanchHand1");
	Function_468(&Global_6907, &Global_8091, 5, 288, "agv/RanchHand");
	Function_468(&Global_6907, &Global_8091, 6, 289, "agv/RanchHand1");
	Function_468(&Global_6907, &Global_8091, 7, 290, "agv/BlcksmthHand");
	Function_468(&Global_6907, &Global_8091, 8, 529, "agv/BodyGrdBrain");
	Function_468(&Global_6907, &Global_8091, 9, 530, "agv/BodyGrdBrain1");
	return;
}

void Function_483() //Position: 0x281EB / 164331
{
	Function_468(&Global_6866, &Global_8030, 0, 613, "lsh/lsh_Head_nun");
	Function_468(&Global_6866, &Global_8030, 1, 294, "lsh/lsh_LeadWrk");
	Function_468(&Global_6866, &Global_8030, 2, 260, "lsh/lsh_blksmth");
	Function_468(&Global_6866, &Global_8030, 4, 295, "lsh/lsh_GenWrk");
	Function_468(&Global_6866, &Global_8030, 5, 296, "lsh/lsh_GenWrk1");
	Function_468(&Global_6866, &Global_8030, 6, 297, "lsh/lsh_GenWrk2");
	Function_468(&Global_6866, &Global_8030, 7, 298, "lsh/lsh_GenWrk3");
	Function_468(&Global_6866, &Global_8030, 8, 309, "lsh/lsh_RailWrk");
	Function_468(&Global_6866, &Global_8030, 9, 62, "lsh/lsh_Nun");
	Function_468(&Global_6866, &Global_8030, 10, 242, "lsh/lsh_Nun1");
	Function_468(&Global_6866, &Global_8030, 11, 62, "lsh/lsh_Nun2");
	Function_468(&Global_6866, &Global_8030, 12, 243, "lsh/lsh_Nun3");
	Function_468(&Global_6866, &Global_8030, 13, 62, "lsh/lsh_Nun4");
	Function_468(&Global_6866, &Global_8030, 14, 61, "lsh/lsh_Nun5");
	Function_468(&Global_6866, &Global_8030, 15, 63, "lsh/lsh_WrkNun");
	Function_468(&Global_6866, &Global_8030, 16, 62, "lsh/lsh_WrkNun1");
	Function_468(&Global_6866, &Global_8030, 17, 243, "lsh/lsh_WrkNun2");
	Function_468(&Global_6866, &Global_8030, 18, 242, "lsh/lsh_WrkNun3");
	Function_468(&Global_6866, &Global_8030, 19, 244, "lsh/lsh_WrkNun4");
	return;
}

void Function_484() //Position: 0x28420 / 164896
{
	Function_468(&Global_6815, &Global_7954, 0, 255, "chu/Bartender_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 1, 259, "chu/CHU_Br_Smith");
	Function_468(&Global_6815, &Global_7954, 2, 239, "chu/Maid_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 3, 273, "chu/Merchant_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 4, 264, "chu/Old_Woman_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 5, 247, "chu/Waitress_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 6, 300, "chu/Musician_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 7, 307, "chu/TrainStation_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 8, 267, "chu/Doctor_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 9, 290, "chu/NewsPaper_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 10, 460, "chu/Deputy_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 12, 268, "chu/MerchGrain_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 13, 237, "chu/MerchCorn_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 14, 283, "chu/MerchAxe_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 15, 290, "chu/MerchMeat_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 16, 276, "chu/MerchGen01_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 17, 238, "chu/MerchGen02_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 19, 269, "chu/MerchGen04_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 21, 294, "chu/MerchCrate_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 22, 245, "chu/Whore01_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 23, 246, "chu/Whore01_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 24, 250, "chu/Whore01_Br_CHU");
	Function_468(&Global_6815, &Global_7954, 11, 265, "chu/BlackJack_Br_CHU");
	return;
}

void Function_485() //Position: 0x28753 / 165715
{
	return;
}

void Function_486() //Position: 0x28759 / 165721
{
	Function_468(&Global_6785, &Global_7910, 0, 411, "actionarea/AA_Brain");
	Function_468(&Global_6785, &Global_7910, 1, 410, "actionarea/AA_Brain");
	Function_468(&Global_6785, &Global_7910, 2, 414, "actionarea/AA_Brain");
	Function_468(&Global_6785, &Global_7910, 3, 408, "actionarea/AA_Brain");
	Function_468(&Global_6785, &Global_7910, 4, 409, "actionarea/AA_Brain");
	Function_468(&Global_6785, &Global_7910, 5, 413, "actionarea/AA_Brain");
	Function_468(&Global_6785, &Global_7910, 6, 406, "actionarea/AA_Brain");
	Function_468(&Global_6785, &Global_7910, 7, 407, "actionarea/AA_Brain");
	Function_468(&Global_6785, &Global_7910, 8, 413, "actionarea/AA_Brain");
	Function_468(&Global_6785, &Global_7910, 9, 410, "actionarea/AA_Brain");
	return;
}

void Function_487() //Position: 0x288BF / 166079
{
	Function_468(&Global_6764, &Global_7879, 0, 516, "actionarea/AA_Brain");
	Function_468(&Global_6764, &Global_7879, 1, 517, "actionarea/AA_Brain");
	Function_468(&Global_6764, &Global_7879, 3, 522, "actionarea/AA_Brain");
	Function_468(&Global_6764, &Global_7879, 5, 530, "actionarea/AA_Brain");
	Function_468(&Global_6764, &Global_7879, 6, 521, "actionarea/AA_Brain");
	Function_468(&Global_6764, &Global_7879, 7, 531, "actionarea/AA_Brain");
	Function_468(&Global_6764, &Global_7879, 9, 518, "actionarea/AA_Brain");
	return;
}

void Function_488() //Position: 0x289BB / 166331
{
	Function_468(&Global_6709, &Global_7797, 0, 261, "esc/ESC_Br_Smith");
	Function_468(&Global_6709, &Global_7797, 1, 274, "esc/Merchant_br_ESC");
	Function_468(&Global_6709, &Global_7797, 2, 319, "esc/Vendor02_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 3, 275, "esc/Vendor03_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 4, 277, "esc/Vendor04_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 5, 299, "esc/StableBoy_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 6, 256, "esc/Bartender_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 7, 250, "esc/Whore01_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 8, 248, "esc/Whore02_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 9, 283, "esc/Gunsmith_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 10, 266, "esc/Doctor_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 11, 313, "esc/Old_Woman_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 12, 382, "esc/Soldier01_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 13, 380, "esc/Soldier02_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 14, 383, "esc/Soldier01_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 15, 384, "esc/Soldier02_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 16, 392, "esc/Soldier01_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 17, 379, "esc/Officer01_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 18, 380, "esc/Officer01_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 19, 381, "esc/Officer01_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 20, 394, "esc/Officer03_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 21, 240, "esc/Maid01_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 22, 241, "esc/Maid02_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 23, 304, "esc/Musician_Br_ESC");
	Function_468(&Global_6709, &Global_7797, 24, 239, "esc/Cook_Br_ESC");
	return;
}

void Function_489() //Position: 0x28D31 / 167217
{
	return;
}

void Function_490() //Position: 0x28D37 / 167223
{
	Function_468(&Global_6537, &Global_7543, 0, 194, "ben/ben_CabeOwnr");
	Function_468(&Global_6537, &Global_7543, 1, 196, "ben/ben_TrainMstr");
	Function_468(&Global_6537, &Global_7543, 2, 85, "ben/ben_Traveler_Brain");
	Function_468(&Global_6537, &Global_7543, 3, 204, "ben/ben_Traveler_Brain1");
	Function_468(&Global_6537, &Global_7543, 4, 311, "ben/ben_Traveler_Brain2");
	Function_468(&Global_6537, &Global_7543, 5, 166, "ben/ben_Traveler_Brain3");
	return;
}

void Function_491() //Position: 0x28E14 / 167444
{
	Function_468(&Global_6667, &Global_7735, 0, 496, "actionarea/AA_Brain");
	Function_468(&Global_6667, &Global_7735, 1, 499, "actionarea/AA_Brain");
	Function_468(&Global_6667, &Global_7735, 2, 497, "actionarea/AA_Brain");
	Function_468(&Global_6667, &Global_7735, 3, 498, "actionarea/AA_Brain");
	Function_468(&Global_6667, &Global_7735, 4, 500, "actionarea/AA_Brain");
	Function_468(&Global_6667, &Global_7735, 5, 496, "actionarea/AA_Brain");
	Function_468(&Global_6667, &Global_7735, 6, 499, "actionarea/AA_Brain");
	Function_468(&Global_6667, &Global_7735, 7, 499, "actionarea/AA_Brain");
	Function_468(&Global_6667, &Global_7735, 8, 500, "actionarea/AA_Brain");
	Function_468(&Global_6667, &Global_7735, 9, 497, "actionarea/AA_Brain");
	Function_468(&Global_6667, &Global_7735, 13, 496, "actionarea/AA_Brain");
	Function_468(&Global_6667, &Global_7735, 14, 501, "actionarea/AA_Brain");
	Function_468(&Global_6667, &Global_7735, 15, 497, "actionarea/AA_Brain");
	Function_468(&Global_6667, &Global_7735, 10, 496, "actionarea/AA_Brain");
	Function_468(&Global_6667, &Global_7735, 11, 500, "actionarea/AA_Brain");
	Function_468(&Global_6667, &Global_7735, 12, 498, "actionarea/AA_Brain");
	return;
}

void Function_492() //Position: 0x29052 / 168018
{
	Function_468(&Global_6654, &Global_7716, 0, 178, "pln/pln_lead");
	Function_468(&Global_6654, &Global_7716, 1, 10, "pln/pln_worker1");
	Function_468(&Global_6654, &Global_7716, 2, 36, "pln/pln_worker2");
	Function_468(&Global_6654, &Global_7716, 3, 168, "pln/pln_worker3");
	Function_468(&Global_6654, &Global_7716, 4, 169, "pln/pln_worker4");
	Function_468(&Global_6654, &Global_7716, 5, 286, "pln/pln_worker5");
	return;
}

void Function_493() //Position: 0x2910A / 168202
{
	return;
}

void Function_494() //Position: 0x29110 / 168208
{
	Function_468(&Global_6643, &Global_7700, 0, 477, "actionarea/aa_brain");
	Function_468(&Global_6643, &Global_7700, 1, 478, "actionarea/aa_brain");
	Function_468(&Global_6643, &Global_7700, 2, 482, "actionarea/aa_brain");
	Function_468(&Global_6643, &Global_7700, 3, 481, "actionarea/aa_brain");
	Function_468(&Global_6643, &Global_7700, 4, 483, "actionarea/aa_brain");
	return;
}

void Function_495() //Position: 0x291C5 / 168389
{
	Function_468(&Global_6614, &Global_7657, 0, 147, "thi/gunsmith_br_THI");
	Function_468(&Global_6614, &Global_7657, 1, 83, "thi/bartender_br_THI");
	Function_468(&Global_6614, &Global_7657, 2, 26, "thi/THI_Br_Smith");
	Function_468(&Global_6614, &Global_7657, 3, 139, "tb/nightwatch_brain01");
	Function_468(&Global_6614, &Global_7657, 4, 97, "thi/Harbormaster_br_THI");
	Function_468(&Global_6614, &Global_7657, 5, 129, "thi/genstore_br_THI");
	Function_468(&Global_6614, &Global_7657, 6, 106, "thi/doctor_br_THI");
	Function_468(&Global_6614, &Global_7657, 7, 138, "thi/Butcher_Br_THI");
	Function_468(&Global_6614, &Global_7657, 8, 140, "thi/TicketShop_Br_THI");
	Function_468(&Global_6614, &Global_7657, 9, 137, "thi/dealer_br_THI");
	if (IS_PS3() || Function_456())
	{
		Function_468(&Global_6614, &Global_7657, 10, 93, "thi/TailorShopBr_THIPS3");
	}
	else
	{
		Function_468(&Global_6614, &Global_7657, 10, 93, "thi/TailorShopBr_THIXBX");
	}
	Function_468(&Global_6614, &Global_7657, 11, 163, "thi/NewsPaper_Br_THI");
	Function_468(&Global_6614, &Global_7657, 13, 60, "thi/Madam_Br_THI");
	Function_468(&Global_6614, &Global_7657, 12, 94, "thi/BlackJack_Br_THI");
	return;
}

void Function_496() //Position: 0x293DE / 168926
{
	Function_468(&Global_6563, &Global_7581, 0, 153, "hen/RanchWkr_Br_HEN");
	Function_468(&Global_6563, &Global_7581, 1, 154, "hen/RanchForeman_Brain");
	Function_468(&Global_6563, &Global_7581, 2, 155, "hen/RanchWkr_Br_HEN");
	Function_468(&Global_6563, &Global_7581, 3, 156, "hen/RanchWkr_Br_HEN");
	Function_468(&Global_6563, &Global_7581, 4, 288, "hen/RanchWkr_Br_HEN");
	Function_468(&Global_6563, &Global_7581, 5, 33, "hen/RanchWkr_Br_HEN");
	Function_468(&Global_6563, &Global_7581, 6, 34, "hen/RanchWkr_Br_HEN");
	Function_468(&Global_6563, &Global_7581, 7, 161, "hen/FieldWkr_Br_HEN");
	Function_468(&Global_6563, &Global_7581, 8, 162, "hen/RanchWkr_Br_HEN");
	Function_468(&Global_6563, &Global_7581, 9, 107, "hen/Doctor_Br_HEN");
	Function_468(&Global_6563, &Global_7581, 10, 164, "hen/RanchWkr_Br_HEN");
	Function_468(&Global_6563, &Global_7581, 11, 157, "hen/Newspaper_Br_HEN");
	Function_468(&Global_6563, &Global_7581, 12, 175, "hen/PL_JG_Br_HEN");
	Function_468(&Global_6563, &Global_7581, 13, 160, "hen/Lazy_Br_HEN");
	Function_468(&Global_6563, &Global_7581, 14, 85, "hen/HEN_br_Smith");
	Function_468(&Global_6563, &Global_7581, 15, 289, "hen/Nightwatch_Br_HEN");
	Function_468(&Global_6563, &Global_7581, 16, 159, "hen/Nightwatch01_Br_HEN");
	Function_468(&Global_6563, &Global_7581, 17, 35, "hen/NW_JG_Br_HEN");
	Function_468(&Global_6563, &Global_7581, 18, 195, "hen/TE_JG_Br_HEN");
	Function_468(&Global_6563, &Global_7581, 22, 127, "hen/StoreOwner_Brain");
	Function_468(&Global_6563, &Global_7581, 23, 53, "hen/Maid_Br_HEN");
	Function_468(&Global_6563, &Global_7581, 24, 54, "hen/Maid_Br_HEN");
	Function_468(&Global_6563, &Global_7581, 21, 550, "hen/RanchForeman_Brain");
	return;
}

void Function_497() //Position: 0x296EB / 169707
{
	Function_468(&Global_6550, &Global_7562, 0, 174, "war/warbrain1");
	Function_468(&Global_6550, &Global_7562, 1, 215, "war/warbrain1");
	Function_468(&Global_6550, &Global_7562, 2, 48, "hgn/bac_husband");
	Function_468(&Global_6550, &Global_7562, 3, 56, "hgn/bac_wife");
	return;
}

void Function_498() //Position: 0x29762 / 169826
{
	Function_468(&Global_6490, &Global_7474, 0, 486, "actionarea/AA_Brain");
	Function_468(&Global_6490, &Global_7474, 1, 487, "actionarea/AA_Brain");
	Function_468(&Global_6490, &Global_7474, 2, 489, "actionarea/AA_Brain");
	Function_468(&Global_6490, &Global_7474, 3, 490, "actionarea/AA_Brain");
	Function_468(&Global_6490, &Global_7474, 4, 493, "actionarea/AA_Brain");
	return;
}

void Function_499() //Position: 0x29817 / 170007
{
	Function_468(&Global_6433, &Global_7389, 0, 508, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 1, 506, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 2, 507, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 3, 505, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 4, 507, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 5, 508, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 6, 505, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 7, 510, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 8, 505, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 9, 506, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 10, 508, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 11, 510, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 12, 505, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 13, 506, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 14, 508, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 15, 509, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 16, 507, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 17, 509, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 18, 506, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 19, 505, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 20, 506, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 21, 510, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 22, 511, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 23, 506, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 24, 507, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 25, 505, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 26, 508, "actionarea/AA_Brain");
	Function_468(&Global_6433, &Global_7389, 27, 509, "actionarea/AA_Brain");
	return;
}

void Function_500() //Position: 0x29C05 / 171013
{
	Function_468(&Global_6501, &Global_7490, 0, 400, "actionarea/AA_Brain");
	Function_468(&Global_6501, &Global_7490, 1, 398, "actionarea/AA_Brain");
	Function_468(&Global_6501, &Global_7490, 2, 399, "actionarea/AA_Brain");
	Function_468(&Global_6501, &Global_7490, 3, 402, "actionarea/AA_Brain");
	Function_468(&Global_6501, &Global_7490, 4, 401, "actionarea/AA_Brain");
	Function_468(&Global_6501, &Global_7490, 5, 397, "actionarea/AA_Brain");
	Function_468(&Global_6501, &Global_7490, 6, 405, "actionarea/AA_Brain");
	Function_468(&Global_6501, &Global_7490, 7, 404, "actionarea/AA_Brain");
	Function_468(&Global_6501, &Global_7490, 8, 404, "actionarea/AA_Brain");
	Function_468(&Global_6501, &Global_7490, 9, 402, "actionarea/AA_Brain");
	Function_468(&Global_6501, &Global_7490, 10, 419, "actionarea/AA_Brain");
	Function_468(&Global_6501, &Global_7490, 11, 398, "actionarea/AA_Brain");
	Function_468(&Global_6501, &Global_7490, 12, 399, "actionarea/AA_Brain");
	Function_468(&Global_6501, &Global_7490, 13, 403, "actionarea/AA_Brain");
	Function_468(&Global_6501, &Global_7490, 14, 397, "actionarea/AA_Brain");
	return;
}

void Function_501() //Position: 0x29E1F / 171551
{
	Function_468(&Global_6402, &Global_7343, 0, 229, "rat/Judge.xml");
	Function_468(&Global_6402, &Global_7343, 1, 179, "rat/kid.xml");
	Function_468(&Global_6402, &Global_7343, 2, 155, "rat/kid1.xml");
	Function_468(&Global_6402, &Global_7343, 3, 152, "rat/kid2.xml");
	Function_468(&Global_6402, &Global_7343, 4, 150, "rat/kid3.xml");
	Function_468(&Global_6402, &Global_7343, 5, 142, "rat/kid4.xml");
	Function_468(&Global_6402, &Global_7343, 6, 155, "rat/kid5.xml");
	Function_468(&Global_6402, &Global_7343, 7, 142, "rat/kid6.xml");
	Function_468(&Global_6402, &Global_7343, 8, 133, "rat/kid7.xml");
	Function_468(&Global_6402, &Global_7343, 9, 178, "rat/kid8.xml");
	Function_468(&Global_6402, &Global_7343, 10, 159, "rat/kid9.xml");
	Function_468(&Global_6402, &Global_7343, 11, 158, "rat/kid10.xml");
	Function_468(&Global_6402, &Global_7343, 12, 154, "rat/kid11.xml");
	Function_468(&Global_6402, &Global_7343, 13, 143, "rat/kid12.xml");
	Function_468(&Global_6402, &Global_7343, 14, 179, "rat/bjdealer.xml");
	return;
}

void Function_502() //Position: 0x29FC1 / 171969
{
	return;
}

void Function_503() //Position: 0x29FC7 / 171975
{
	Function_468(&Global_6291, &Global_7179, 2, 112, "coo/Pat_Brain");
	Function_468(&Global_6291, &Global_7179, 0, 231, "coo/Dick_Brain");
	Function_468(&Global_6291, &Global_7179, 1, 111, "coo/DickJR_Brain");
	return;
}

void Function_504() //Position: 0x2A025 / 172069
{
	Function_468(&Global_6364, &Global_7287, 0, 234, "rwf/Lead_Br_RWF");
	Function_468(&Global_6364, &Global_7287, 1, 173, "rwf/Farmer1");
	Function_468(&Global_6364, &Global_7287, 2, 37, "rwf/JobGiver_Br_RWF");
	Function_468(&Global_6364, &Global_7287, 3, 38, "rwf/Farmer3");
	Function_468(&Global_6364, &Global_7287, 4, 175, "rwf/Farmer4");
	Function_468(&Global_6364, &Global_7287, 5, 174, "rwf/Farmer5");
	Function_468(&Global_6364, &Global_7287, 6, 39, "rwf/Farmer6");
	Function_468(&Global_6364, &Global_7287, 7, 170, "rwf/Farmer7");
	Function_468(&Global_6364, &Global_7287, 8, 171, "rwf/Farmer8");
	Function_468(&Global_6364, &Global_7287, 9, 172, "rwf/Farmer2");
	Function_468(&Global_6364, &Global_7287, 10, 55, "nrwf/Maid1");
	Function_468(&Global_6364, &Global_7287, 11, 56, "nrwf/Maid2");
	Function_468(&Global_6364, &Global_7287, 12, 51, "rwf/HouseKeep");
	return;
}

void Function_505() //Position: 0x2A187 / 172423
{
	Function_468(&Global_6351, &Global_7268, 0, 486, "tb/Lazy_Bandit_Brain");
	Function_468(&Global_6351, &Global_7268, 1, 487, "tb/Lazy_Bandit_Brain");
	Function_468(&Global_6351, &Global_7268, 2, 489, "tb/Lazy_Bandit_Brain");
	Function_468(&Global_6351, &Global_7268, 3, 493, "tb/Lazy_Bandit_Brain");
	Function_468(&Global_6351, &Global_7268, 4, 491, "tb/Lazy_Bandit_Brain");
	Function_468(&Global_6351, &Global_7268, 5, 490, "tb/Lazy_Bandit_Brain");
	return;
}

void Function_506() //Position: 0x2A265 / 172645
{
	Function_468(&Global_6298, &Global_7189, 0, 103, "arm/doctor_brain");
	Function_468(&Global_6298, &Global_7189, 1, 145, "arm/gunsmith_brain");
	Function_468(&Global_6298, &Global_7189, 2, 81, "arm/bartender_brain_ARM");
	Function_468(&Global_6298, &Global_7189, 3, 84, "arm/ARM_Br_Smith");
	Function_468(&Global_6298, &Global_7189, 4, 80, "arm/banker_brain");
	Function_468(&Global_6298, &Global_7189, 5, 190, "arm/preacher_brain");
	Function_468(&Global_6298, &Global_7189, 6, 428, "arm/deputy_brain");
	Function_468(&Global_6298, &Global_7189, 7, 429, "arm/deputy_brain01");
	Function_468(&Global_6298, &Global_7189, 8, 116, "arm/saloonowner_brain");
	Function_468(&Global_6298, &Global_7189, 9, 492, "arm/gangleader_brain");
	Function_468(&Global_6298, &Global_7189, 10, 488, "arm/gangmember1_brain");
	Function_468(&Global_6298, &Global_7189, 11, 209, "arm/undertaker_brain");
	Function_468(&Global_6298, &Global_7189, 12, 191, "arm/trainguy_brain");
	Function_468(&Global_6298, &Global_7189, 13, 118, "arm/genstore_brain");
	Function_468(&Global_6298, &Global_7189, 14, 114, "arm/freightguy_brain");
	Function_468(&Global_6298, &Global_7189, 15, 104, "arm/barberdentist_brain");
	Function_468(&Global_6298, &Global_7189, 16, 70, "arm/Whore_Brain_ARM");
	Function_468(&Global_6298, &Global_7189, 17, 68, "arm/Whore_Brain2_ARM");
	Function_468(&Global_6298, &Global_7189, 18, 180, "arm/pianoplayer_brain");
	Function_468(&Global_6298, &Global_7189, 19, 183, "arm/fiddleplayer_brain");
	Function_468(&Global_6298, &Global_7189, 20, 199, "arm/liveryworker_brain");
	Function_468(&Global_6298, &Global_7189, 21, 144, "arm/docholiday_brain");
	Function_468(&Global_6298, &Global_7189, 22, 165, "arm/NewsPaper_Brain");
	Function_468(&Global_6298, &Global_7189, 23, 164, "arm/TrainWorker_Brain");
	Function_468(&Global_6298, &Global_7189, 24, 47, "arm/CarryCorn_Brain");
	Function_468(&Global_6298, &Global_7189, 25, 231, "arm/ARM_old_farmer");
	return;
}

void Function_507() //Position: 0x2A5EE / 173550
{
	Function_468(&Global_6391, &Global_7327, 0, 232, "cho/cri_husband");
	Function_468(&Global_6391, &Global_7327, 1, 213, "cho/cri_wife");
	Function_468(&Global_6391, &Global_7327, 2, 172, "war/warbrain1");
	return;
}

void Function_508() //Position: 0x2A649 / 173641
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

void Function_509() //Position: 0x2A7E0 / 174048
{
	DISABLE_GRINGO_STREAMING_CHECKS();
	ANIMAL_SPECIES_GRINGO_LOAD_ALL();
	ENABLE_GRINGO_STREAMING_CHECKS();
	return;
}

bool Function_510(bool bParam0, int iParam1) //Position: 0x2A7EF / 174063
{
	return (bParam0 && iParam1) == 0;
}

bool Function_511(int iParam0) //Position: 0x2A7FC / 174076
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_515();
	iVar1 = 0;
	if (!Function_7(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_514(iParam0[iVar03], 8);
		}
		else if (Function_513())
		{
			iVar1 = 1;
			Function_514(iParam0[iVar03], 8);
		}
		Function_514(iParam0[iVar03], 16);
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
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_7(iParam0[03], 8) || iVar1));
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
				Function_514(iParam0[iVar03], 1);
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
							Function_514(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_514(iParam0[iVar03], 2);
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
							Function_514(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_514(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_514(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_514(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_514(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_514(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_514(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_514(iParam0[iVar03], 2);
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
	Function_512();
	return 1;
}

void Function_512() //Position: 0x2AB77 / 174967
{
	if (!Function_367(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_513() //Position: 0x2ABB7 / 175031
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

void Function_514(var uParam0, int iParam1) //Position: 0x2ABE2 / 175074
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_515() //Position: 0x2ABF3 / 175091
{
	if (!Function_367(128))
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

var Function_516(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x2AC35 / 175157
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_517(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_514(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_517(var uParam0, int iParam1, int iParam2) //Position: 0x2AC6D / 175213
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_7(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_514(uParam0[iVar03], 4);
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

void Function_518() //Position: 0x2AD31 / 175409
{
	return;
}

void Function_519() //Position: 0x2AD37 / 175415
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
				Function_520(iVar0);
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

void Function_520(int iParam0) //Position: 0x2B398 / 177048
{
	if (UI_CHEAT_GET_STATE(iParam0) != 1)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000019:
			Function_406(11, 19);
			break;
		
		case 0x00000004:
			Function_406(11, 20);
			break;
		
		case 0x0000000D:
			Function_406(11, 21);
			break;
		
		case 0x00000010:
			Function_406(11, 22);
			break;
		
		case 0x00000011:
			Function_406(11, 23);
			break;
		
		case 0x00000012:
			Function_406(11, 24);
			break;
		
		case 0x0000001C:
			Function_406(11, 25);
			break;
		
		case 0x00000023:
			Function_406(11, 26);
			break;
		
		case 0x00000024:
			Function_406(11, 27);
			break;
		
		case 0x00000027:
			Function_406(11, 28);
			break;
	}
	return;
}

int Function_521(int iParam0, bool bParam1, bool bParam2) //Position: 0x2B445 / 177221
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
		Function_48(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_20(iParam0);
	if (bParam2)
	{
		Function_9(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_522(int iParam0) //Position: 0x2B6E0 / 177888
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

bool Function_523(int iParam0) //Position: 0x2B721 / 177953
{
	return Function_317(Global_83864.f_1252, iParam0);
}

void Function_524() //Position: 0x2B733 / 177971
{
	int iVar0;
	struct<2> Var1;
	int iVar3;
	
	Function_533();
	Function_532();
	Function_531();
	Function_530(0, 0.0f, "sn_mny", 21, 5, 1, 3, 3212836864, 0);
	Function_530(597, 0.0f, "sn_cmny", 15, 2, 1, 3, 3212836864, 0);
	Function_530(1, 0.0f, "sn_hnrr", 9, 2, 1, 0, 1000.0f, -1000.0f);
	Function_530(2, 0.0f, "sn_hnr", 20, 2, 1, 0, 3212836864, 0);
	Function_530(3, 0.0f, "sn_ntrr", 10, 2, 1, 1, 1000.0f, 0.0f);
	Function_530(4, 0.0f, "sn_ntr", 20, 2, 1, 1, 3212836864, 0);
	Function_530(5, 0.0f, "sn_gmpt", 7, 2, 1, 2, 3212836864, 0);
	Function_530(6, 0.0f, "sn_gmpd", 15, 2, 1, 2, 329.0f, 0);
	Function_530(7, 0.0f, "sn_gmtm", 23, 2, 3, 2, 3212836864, 0);
	Function_530(8, 0.0f, "sn_days", 25, 2, 1, 2, 3212836864, 0);
	Function_530(9, 0.0f, "sn_miss", 1, 2, 1, 2, 3212836864, 0);
	Function_530(10, 0.0f, "sn_misf", 1, 2, 1, 2, 3212836864, 0);
	Function_530(11, 0.0f, "sn_misr", 1, 2, 1, 2, 3212836864, 0);
	Function_530(12, 0.0f, "sn_frms", 4, 2, 1, 2, 3212836864, 0);
	Function_530(13, 0.0f, "sn_mxms", 4, 2, 1, 2, 3212836864, 0);
	Function_530(14, 0.0f, "sn_nrms", 4, 2, 1, 2, 3212836864, 0);
	Function_530(15, 0.0f, "sn_hmms", 4, 2, 1, 2, 3212836864, 0);
	Function_530(16, 0.0f, "sn_ambs", 4, 2, 1, 2, 3212836864, 0);
	Function_530(17, 0.0f, "sn_skps", 4, 2, 1, 2, 3212836864, 0);
	Function_530(473, 0.0f, "sn_regd", 14, 2, 1, 2, 0.0f, 0);
	Function_530(474, 0.0f, "sn_frgd", 14, 2, 1, 2, 0.0f, 0);
	Function_530(475, 0.0f, "sn_mrgd", 14, 2, 1, 2, 0.0f, 0);
	Function_530(476, 0.0f, "sn_nrgd", 14, 2, 1, 2, 0.0f, 0);
	Function_530(18, 0.0f, "sn_lmst", 15, 9, 1, 2, 3212836864, 0);
	Function_530(19, 0.0f, "sn_cutb", 15, 9, 1, 2, 3212836864, 0);
	Function_530(20, 0.0f, "sn_cutk", 15, 9, 1, 2, 3212836864, 0);
	Function_530(21, 0.0f, "sn_cute", 15, 9, 1, 2, 3212836864, 0);
	Function_530(22, 0.0f, "sn_hide", 15, 9, 1, 2, 3212836864, 0);
	Function_530(23, 0.0f, "sn_hide", 15, 9, 1, 2, 3212836864, 0);
	Function_530(24, 0.0f, "sn_mmrt", 15, 9, 1, 2, 3212836864, 0);
	Function_530(25, 0.0f, "sn_lmcn", 15, 9, 1, 2, 3212836864, 0);
	Function_530(472, TO_FLOAT(4294967295), "sn_hide", 15, 9, 1, 2, 3212836864, 0);
	Function_530(458, 0.0f, "sn_aacm", 0, 2, 3, 2, 3212836864, 0);
	Function_530(459, 0.0f, "sn_aatr", 13, 2, 3, 2, 3212836864, 0);
	Function_530(460, 0.0f, "sn_aasf", 13, 2, 3, 2, 3212836864, 0);
	Function_530(461, 0.0f, "sn_aatw", 13, 2, 3, 2, 3212836864, 0);
	Function_530(462, 0.0f, "sn_aapb", 13, 2, 3, 2, 3212836864, 0);
	Function_530(463, 0.0f, "sn_aagb", 13, 2, 3, 2, 3212836864, 0);
	Function_530(464, 0.0f, "sn_aafm", 13, 2, 3, 2, 3212836864, 0);
	Function_530(465, 0.0f, "sn_aata", 13, 2, 3, 2, 3212836864, 0);
	Function_530(466, 0.0f, "sn_aano", 13, 2, 3, 2, 3212836864, 0);
	Function_530(467, 0.0f, "sn_chst", 0, 9, 1, 2, 3212836864, 0);
	Function_530(468, 0.0f, "sn_hous", 3, 2, 1, 2, 3212836864, 0);
	Function_530(469, 0.0f, "sn_rwep", 3, 2, 3, 2, 3212836864, 0);
	Function_530(470, 0.0f, "sn_chea", 15, 9, 1, 2, 3212836864, 0);
	Function_530(471, 0.0f, "sn_bino", 23, 9, 1, 2, 3212836864, 0);
	Function_530(477, 0.0f, "sn_snoi", 3, 9, 1, 2, 3212836864, 0);
	Function_530(478, 0.0f, "sn_moon", 3, 9, 1, 2, 3212836864, 0);
	Function_530(479, 0.0f, "sn_chta", 3, 9, 1, 2, 3212836864, 0);
	Function_530(480, 0.0f, "sn_medi", 3, 9, 1, 2, 3212836864, 0);
	Function_530(481, 0.0f, "sn_bait", 3, 9, 1, 2, 3212836864, 0);
	Function_530(482, 0.0f, "sn_hopi", 3, 9, 1, 2, 3212836864, 0);
	Function_530(483, 0.0f, "sn_appl", 3, 9, 1, 2, 3212836864, 0);
	Function_530(484, 0.0f, "sn_pale", 3, 9, 1, 2, 3212836864, 0);
	Function_530(485, 0.0f, "sn_vitl", 3, 9, 1, 2, 3212836864, 0);
	Function_530(486, 0.0f, "sn_tonc", 3, 9, 1, 2, 3212836864, 0);
	Function_530(400, 0.0f, "sn_jobs", 0, 2, 1, 2, 3212836864, 0);
	Function_530(401, 0.0f, "sn_favj", 20, 2, 1, 2, 3212836864, 0);
	Function_530(402, 0.0f, "sn_nwj", 0, 2, 1, 2, 3212836864, 0);
	Function_530(403, 0.0f, "sn_hbj", 0, 2, 1, 2, 3212836864, 0);
	Function_530(404, 0.0f, "sn_fvjl", 20, 2, 1, 2, 3212836864, 0);
	Function_530(405, 0.0f, "sn_horb", 0, 2, 1, 2, 3212836864, 0);
	Function_530(406, 0.0f, "sn_rcmm", 3, 2, 1, 2, 3212836864, 0);
	Function_530(407, 0.0f, "sn_rcmc", 3, 2, 1, 2, 3212836864, 0);
	Function_530(408, 0.0f, "sn_btin", 3, 2, 1, 2, 3212836864, 0);
	Function_530(409, 0.0f, "sn_btcm", 3, 2, 1, 2, 3212836864, 0);
	Function_530(410, 0.0f, "sn_mini", 3, 8, 1, 2, 3212836864, 0);
	Function_530(412, 0.0f, "sn_mlap", 0, 8, 1, 2, 3212836864, 0);
	Function_530(413, 0.0f, "sn_bpwp", 21, 8, 1, 2, 3212836864, 0);
	Function_530(411, 0.0f, "sn_mwap", 21, 5, 1, 2, 3212836864, 0);
	Function_530(428, 0.0f, "sn_pwpc", 7, 8, 1, 2, 0.0f, 0.0f);
	Function_530(414, 0.0f, "sn_phc", 0, 8, 1, 2, 3212836864, 0);
	Function_530(415, 0.0f, "sn_ppai", 0, 8, 1, 2, 3212836864, 0);
	Function_530(416, 0.0f, "sn_ptp", 0, 8, 1, 2, 3212836864, 0);
	Function_530(417, 0.0f, "sn_ptok", 0, 8, 1, 2, 3212836864, 0);
	Function_530(418, 0.0f, "sn_pstr", 0, 8, 1, 2, 3212836864, 0);
	Function_530(419, 0.0f, "sn_pfh", 0, 8, 1, 2, 3212836864, 0);
	Function_530(420, 0.0f, "sn_pflu", 0, 8, 1, 2, 3212836864, 0);
	Function_530(421, 0.0f, "sn_pfok", 0, 8, 1, 2, 3212836864, 0);
	Function_530(422, 0.0f, "sn_pstf", 0, 8, 1, 2, 3212836864, 0);
	Function_530(423, 0.0f, "sn_prf", 0, 8, 1, 2, 3212836864, 0);
	Function_530(424, 0.0f, "sn_phwb", 0, 8, 1, 2, 3212836864, 0);
	Function_530(426, 0.0f, "sn_tcc", 0, 8, 1, 2, 3212836864, 0);
	Function_530(427, 0.0f, "sn_tcnc", 0, 8, 1, 2, 3212836864, 0);
	Function_530(425, 0.0f, "sn_tspp", 23, 8, 1, 2, 3212836864, 0);
	Function_530(429, 0.0f, "sn_twld", 21, 5, 1, 2, 3212836864, 0);
	Function_530(430, 0.0f, "sn_mlld", 0, 8, 1, 2, 3212836864, 0);
	Function_530(431, 0.0f, "sn_ldwz", 0, 8, 1, 2, 3212836864, 0);
	Function_530(432, 0.0f, "sn_tsld", 23, 8, 1, 2, 3212836864, 0);
	Function_530(433, 0.0f, "sn_mwah", 21, 5, 1, 2, 3212836864, 0);
	Function_530(434, 0.0f, "sn_ring", 0, 8, 1, 2, 3212836864, 0);
	Function_530(435, 0.0f, "sn_orin", 0, 8, 1, 2, 3212836864, 0);
	Function_530(436, 0.0f, "sn_tsph", 23, 8, 1, 2, 3212836864, 0);
	Function_530(437, 0.0f, "sn_mwaf", 21, 5, 1, 2, 3212836864, 0);
	Function_530(438, 0.0f, "sn_ffgl", 0, 8, 1, 2, 3212836864, 0);
	Function_530(439, 0.0f, "sn_ffws", 0, 8, 1, 2, 3212836864, 0);
	Function_530(440, 0.0f, "sn_tsff", 23, 8, 1, 2, 3212836864, 0);
	Function_530(441, 0.0f, "sn_mwaa", 21, 5, 1, 2, 3212836864, 0);
	Function_530(443, 0.0f, "sn_awl", 0, 8, 1, 2, 3212836864, 0);
	Function_530(444, 0.0f, "sn_lawm", 23, 8, 1, 2, 3212836864, 0);
	Function_530(442, 0.0f, "sn_tsaw", 23, 8, 1, 2, 3212836864, 0);
	Function_530(445, 0.0f, "sn_mwab", 21, 5, 1, 2, 3212836864, 0);
	Function_530(447, 0.0f, "sn_hlab", 0, 8, 1, 2, 3212836864, 0);
	Function_530(446, 0.0f, "sn_mwbj", 21, 8, 1, 2, 3212836864, 0);
	Function_530(448, 0.0f, "sn_bjh", 0, 8, 1, 2, 3212836864, 0);
	Function_530(449, 0.0f, "sn_drin", 0, 8, 1, 2, 3212836864, 0);
	Function_530(450, 0.0f, "sn_tmwg", 21, 5, 1, 2, 3212836864, 0);
	Function_530(451, 0.0f, "sn_duew", 0, 6, 1, 2, 3212836864, 0);
	Function_530(452, 0.0f, "sn_duec", 15, 6, 1, 2, 3212836864, 0);
	Function_530(453, 0.0f, "sn_duet", 0, 6, 1, 2, 3212836864, 0);
	Function_530(454, 0.0f, "sn_dued", 0, 6, 1, 2, 3212836864, 0);
	Function_530(455, 0.0f, "sn_dueh", 0, 6, 1, 2, 3212836864, 0);
	Function_530(26, 0.0f, "sn_kani", 1, 6, 3, 2, 3212836864, 0);
	Function_530(27, 0.0f, "sn_khum", 1, 6, 3, 2, 3212836864, 0);
	Function_530(28, 0.0f, "sn_kciv", 1, 6, 1, 2, 3212836864, 0);
	Function_530(29, 0.0f, "sn_klaw", 4, 6, 1, 2, 3212836864, 0);
	Function_530(30, 0.0f, "sn_kmar", 4, 6, 1, 2, 3212836864, 0);
	Function_530(31, 0.0f, "sn_karm", 4, 6, 1, 2, 3212836864, 0);
	Function_530(32, 0.0f, "sn_kmlw", 4, 6, 1, 2, 3212836864, 0);
	Function_530(33, 0.0f, "sn_kmxr", 4, 6, 1, 2, 3212836864, 0);
	Function_530(34, 0.0f, "sn_kcri", 1, 6, 3, 2, 3212836864, 0);
	Function_530(35, 0.0f, "sn_kcat", 4, 6, 3, 2, 3212836864, 0);
	Function_530(36, 0.0f, "sn_kdnd", 4, 6, 3, 2, 3212836864, 0);
	Function_530(37, 0.0f, "sn_ktre", 4, 6, 3, 2, 3212836864, 0);
	Function_530(38, 0.0f, "sn_kban", 4, 6, 3, 2, 3212836864, 0);
	Function_530(39, 0.0f, "sn_kreb", 4, 6, 3, 2, 3212836864, 0);
	Function_530(40, 0.0f, "sn_kdut", 4, 6, 3, 2, 3212836864, 0);
	Function_530(41, 0.0f, "sn_keh", 1, 6, 3, 2, 3212836864, 0);
	iVar0 = 50;
	Function_530(49, 0.0f, "sn_hbul", 7, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0, 0.0f, "sn_hpvo", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 1, 0.0f, "sn_hpsa", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 2, 0.0f, "sn_hphp", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 3, 0.0f, "sn_hpms", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 4, 0.0f, "sn_hrca", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 5, 0.0f, "sn_hrsc", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 6, 0.0f, "sn_hrda", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 7, 0.0f, "sn_hrlm", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 8, 0.0f, "sn_hrcr", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 9, 0.0f, "sn_hrwi", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 10, 0.0f, "sn_hrhe", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 11, 0.0f, "sn_hrev", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 12, 0.0f, "sn_hrsp", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 13, 0.0f, "sn_hrbo", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 14, 0.0f, "sn_hrbu", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 15, 0.0f, "sn_hsso", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 16, 0.0f, "sn_hsdb", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 17, 0.0f, "sn_hspa", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 18, 0.0f, "sn_hssa", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 19, 0.0f, "sn_hsrb", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 20, 0.0f, "sn_hsca", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 31, 0.0f, "sn_hsat", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 21, 0.0f, "sn_hlas", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 22, 0.0f, "sn_hknf", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 23, 0.0f, "sn_hfir", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 24, 0.0f, "sn_hdyn", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 25, 0.0f, "sn_htkf", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 29, 0.0f, "sn_htmk", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 26, 0.0f, "sn_hgat", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 27, 0.0f, "sn_hbro", 11, 6, 3, 7, 0.0f, 0.0f);
	Function_530(iVar0 + 28, 0.0f, "sn_hcan", 11, 6, 3, 7, 0.0f, 0.0f);
	if (Function_523(1024))
	{
		Function_530(iVar0 + 33, 0.0f, "sn_hsto", 11, 6, 2, 7, 0.0f, 0.0f);
		Function_530(iVar0 + 34, 0.0f, "sn_hsbl", 11, 6, 2, 7, 0.0f, 0.0f);
		Function_530(iVar0 + 35, 0.0f, "sn_hshw", 11, 6, 2, 7, 0.0f, 0.0f);
		Function_530(iVar0 + 36, 0.0f, "sn_hszb", 11, 6, 2, 7, 0.0f, 0.0f);
		Function_530(iVar0 + 37, 0.0f, "sn_hsbb", 11, 6, 2, 7, 0.0f, 0.0f);
	}
	iVar0 = 90;
	Function_530(89, 0.0f, "sn_sbul", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 1, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 2, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 3, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 4, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 5, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 6, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 7, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 8, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 9, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 10, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 11, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 12, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 13, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 14, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 15, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 16, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 17, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 18, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 19, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 20, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 31, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 21, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 22, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 23, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 24, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 25, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 29, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 26, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 27, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	Function_530(iVar0 + 28, 0.0f, "sn_hide", 15, 6, 3, 7, 3212836864, 0);
	if (Function_523(1024))
	{
		Function_530(iVar0 + 33, 0.0f, "sn_hide", 15, 6, 2, 7, 3212836864, 0);
		Function_530(iVar0 + 34, 0.0f, "sn_hide", 15, 6, 2, 7, 3212836864, 0);
		Function_530(iVar0 + 35, 0.0f, "sn_hide", 15, 6, 2, 7, 3212836864, 0);
		Function_530(iVar0 + 36, 0.0f, "sn_hide", 15, 6, 2, 7, 3212836864, 0);
		Function_530(iVar0 + 37, 0.0f, "sn_hide", 15, 6, 2, 7, 3212836864, 0);
	}
	Function_530(129, 0.0f, "sn_roal", 0, 6, 3, 2, 3212836864, 0);
	Function_530(130, 0.0f, "sn_roh", 0, 6, 3, 2, 3212836864, 0);
	Function_530(131, 0.0f, "sn_roc", 0, 6, 3, 2, 3212836864, 0);
	Function_530(132, 0.0f, "sn_row", 0, 6, 3, 2, 3212836864, 0);
	Function_530(133, 0.0f, "sn_ros", 0, 6, 3, 2, 3212836864, 0);
	Function_530(134, 0.0f, "sn_scr", 0, 6, 3, 2, 3212836864, 0);
	Function_530(135, 0.0f, "sn_sfc", 0, 6, 3, 2, 3212836864, 0);
	Function_530(136, 0.0f, "sn_sfh", 0, 6, 3, 2, 3212836864, 0);
	Function_530(137, 0.0f, "sn_sfv", 0, 6, 3, 2, 3212836864, 0);
	Function_530(138, 0.0f, "sn_akft", 0, 6, 1, 2, 3212836864, 0);
	Function_530(139, 0.0f, "sn_pkft", 0, 6, 1, 2, 3212836864, 0);
	iVar0 = 183;
	Function_530(iVar0, 0.0f, "sn_wpvo", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 1, 0.0f, "sn_wpsa", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 2, 0.0f, "sn_wphp", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 3, 0.0f, "sn_wpms", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 4, 0.0f, "sn_wrca", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 5, 0.0f, "sn_wrsc", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 6, 0.0f, "sn_wrda", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 7, 0.0f, "sn_wrlm", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 8, 0.0f, "sn_wrcr", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 9, 0.0f, "sn_wrwi", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 10, 0.0f, "sn_wrhe", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 11, 0.0f, "sn_wrev", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 12, 0.0f, "sn_wrsp", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 13, 0.0f, "sn_wrbo", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 14, 0.0f, "sn_wrbu", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 15, 0.0f, "sn_wsso", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 16, 0.0f, "sn_wsdb", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 17, 0.0f, "sn_wspa", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 18, 0.0f, "sn_wssa", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 19, 0.0f, "sn_wsrb", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 20, 0.0f, "sn_wsca", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 31, 0.0f, "sn_wsat", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 21, 0.0f, "sn_wlas", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 22, 0.0f, "sn_wknf", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 23, 0.0f, "sn_wfir", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 24, 0.0f, "sn_wdyn", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 25, 0.0f, "sn_wtkf", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 29, 0.0f, "sn_wtmk", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 26, 0.0f, "sn_wgat", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 27, 0.0f, "sn_wbro", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 28, 0.0f, "sn_wcan", 3, 6, 3, 2, 3212836864, 0);
	if (Function_523(1024))
	{
		Function_530(iVar0 + 33, 0.0f, "sn_wsto", 3, 6, 2, 2, 3212836864, 0);
		Function_530(iVar0 + 34, 0.0f, "sn_wsbl", 3, 6, 2, 2, 3212836864, 0);
		Function_530(iVar0 + 35, 0.0f, "sn_wshw", 3, 6, 2, 2, 3212836864, 0);
		Function_530(iVar0 + 36, 0.0f, "sn_wszb", 3, 6, 2, 2, 3212836864, 0);
		Function_530(iVar0 + 37, 0.0f, "sn_wsbb", 3, 6, 2, 2, 3212836864, 0);
	}
	iVar0 = 140;
	Function_530(iVar0, 0.0f, "sn_spvo", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 1, 0.0f, "sn_spsa", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 2, 0.0f, "sn_sphp", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 3, 0.0f, "sn_spms", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 4, 0.0f, "sn_srca", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 5, 0.0f, "sn_srsc", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 6, 0.0f, "sn_srda", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 7, 0.0f, "sn_srlm", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 8, 0.0f, "sn_srcr", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 9, 0.0f, "sn_srwi", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 10, 0.0f, "sn_srhe", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 11, 0.0f, "sn_srev", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 12, 0.0f, "sn_srsp", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 13, 0.0f, "sn_srbo", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 14, 0.0f, "sn_srbu", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 15, 0.0f, "sn_ssso", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 16, 0.0f, "sn_ssdb", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 17, 0.0f, "sn_sspa", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 18, 0.0f, "sn_sssa", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 19, 0.0f, "sn_ssrb", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 20, 0.0f, "sn_ssca", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 31, 0.0f, "sn_ssat", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 21, 0.0f, "sn_slas", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 22, 0.0f, "sn_sknf", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 23, 0.0f, "sn_sfir", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 24, 0.0f, "sn_sdyn", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 25, 0.0f, "sn_stkf", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 29, 0.0f, "sn_stmk", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 26, 0.0f, "sn_sgat", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 27, 0.0f, "sn_sbro", 3, 6, 3, 2, 3212836864, 0);
	Function_530(iVar0 + 28, 0.0f, "sn_scan", 3, 6, 3, 2, 3212836864, 0);
	if (Function_523(1024))
	{
		Function_530(iVar0 + 33, 0.0f, "sn_ssto", 3, 6, 2, 2, 3212836864, 0);
		Function_530(iVar0 + 34, 0.0f, "sn_ssbl", 3, 6, 2, 2, 3212836864, 0);
		Function_530(iVar0 + 35, 0.0f, "sn_sshw", 3, 6, 2, 2, 3212836864, 0);
		Function_530(iVar0 + 36, 0.0f, "sn_sszb", 3, 6, 2, 2, 3212836864, 0);
		Function_530(iVar0 + 37, 0.0f, "sn_ssbb", 3, 6, 2, 2, 3212836864, 0);
	}
	Function_530(179, 0.0f, "sn_fvp", 20, 9, 3, 2, 3212836864, 0);
	Function_530(180, 0.0f, "sn_fvr", 20, 9, 3, 2, 3212836864, 0);
	Function_530(181, 0.0f, "sn_fvs", 20, 9, 3, 2, 3212836864, 0);
	Function_530(182, 0.0f, "sn_fvw", 20, 9, 3, 2, 3212836864, 0);
	Function_530(43, 0.0f, "sn_knck", 1, 6, 3, 2, 3212836864, 0);
	Function_530(42, 0.0f, "sn_hdst", 1, 6, 3, 2, 3212836864, 0);
	Function_530(44, 0.0f, "sn_xect", 1, 6, 1, 2, 3212836864, 0);
	Function_530(45, 0.0f, "sn_htst", 1, 6, 3, 2, 3212836864, 0);
	Function_530(46, 0.0f, "sn_darm", 1, 6, 3, 2, 3212836864, 0);
	Function_530(47, 0.0f, "sn_hdss", 1, 6, 3, 2, 3212836864, 0);
	Function_530(48, 0.0f, "sn_dars", 1, 6, 3, 2, 3212836864, 0);
	Function_530(222, 0.0f, "sn_bttl", 21, 3, 1, 5, 3212836864, 0);
	Function_530(223, 0.0f, "sn_btus", 21, 3, 1, 5, 3212836864, 0);
	Function_530(224, 0.0f, "sn_btmx", 21, 3, 1, 5, 3212836864, 0);
	Function_530(225, 0.0f, "sn_tijl", 25, 3, 1, 5, 3212836864, 0);
	Function_530(226, 0.0f, "sn_cvnd", 1, 3, 1, 5, 3212836864, 0);
	Function_530(227, 0.0f, "sn_cvnv", 1, 3, 1, 5, 3212836864, 0);
	Function_530(228, 0.0f, "sn_cpde", 1, 3, 1, 5, 3212836864, 0);
	Function_530(229, 0.0f, "sn_cpdv", 1, 3, 1, 5, 3212836864, 0);
	Function_530(230, 0.0f, "sn_cars", 1, 3, 3, 5, 3212836864, 0);
	Function_530(231, 0.0f, "sn_cass", 1, 3, 3, 5, 3212836864, 0);
	Function_530(232, 0.0f, "sn_casl", 1, 3, 3, 5, 3212836864, 0);
	Function_530(233, 0.0f, "sn_cash", 1, 3, 3, 5, 3212836864, 0);
	Function_530(234, 0.0f, "sn_casc", 1, 3, 3, 5, 3212836864, 0);
	Function_530(235, 0.0f, "sn_casa", 1, 3, 3, 5, 3212836864, 0);
	Function_530(236, 0.0f, "sn_cmrd", 1, 3, 3, 5, 3212836864, 0);
	Function_530(237, 0.0f, "sn_cmrl", 1, 3, 3, 5, 3212836864, 0);
	Function_530(238, 0.0f, "sn_cmrh", 1, 3, 3, 5, 3212836864, 0);
	Function_530(239, 0.0f, "sn_cmrc", 1, 3, 3, 5, 3212836864, 0);
	Function_530(240, 0.0f, "sn_cmra", 1, 3, 3, 5, 3212836864, 0);
	Function_530(241, 0.0f, "sn_cthh", 1, 3, 3, 5, 3212836864, 0);
	Function_530(242, 0.0f, "sn_cthv", 1, 3, 3, 5, 3212836864, 0);
	Function_530(243, 0.0f, "sn_ckid", 1, 3, 1, 5, 3212836864, 0);
	Function_530(244, 0.0f, "sn_ckdl", 1, 3, 1, 5, 3212836864, 0);
	Function_530(245, 0.0f, "sn_csaf", 1, 3, 1, 5, 3212836864, 0);
	Function_530(251, 0.0f, "sn_fsc", 23, 8, 1, 5, 3212836864, 0);
	Function_530(246, 0.0f, "sn_csrb", 15, 3, 1, 5, 3212836864, 0);
	Function_530(247, 0.0f, "sn_ctrs", 1, 3, 1, 5, 3212836864, 0);
	Function_530(248, 0.0f, "sn_cprb", 1, 3, 1, 5, 3212836864, 0);
	Function_530(249, 0.0f, "sn_ccht", 15, 3, 1, 5, 3212836864, 0);
	Function_530(250, 0.0f, "sn_ctht", 1, 3, 1, 5, 3212836864, 0);
	Function_530(252, 0.0f, "sn_bbo", 21, 3, 3, 5, 3212836864, 0);
	Function_530(253, 0.0f, "sn_bpd", 1, 3, 1, 5, 3212836864, 0);
	Function_530(254, 0.0f, "sn_bbop", 21, 3, 1, 5, 3212836864, 0);
	Function_530(255, 0.0f, "sn_bbrp", 21, 3, 1, 5, 3212836864, 0);
	Function_530(256, 0.0f, "sn_bboa", 21, 3, 1, 5, 3212836864, 0);
	Function_530(257, 0.0f, "sn_psen", 1, 3, 1, 5, 3212836864, 0);
	Function_530(258, 0.0f, "sn_lpls", 23, 3, 1, 5, 3212836864, 0);
	Function_530(259, 0.0f, "sn_lpm", 23, 3, 1, 5, 3212836864, 0);
	Function_530(260, 0.0f, "sn_tmw", 1, 3, 1, 5, 3212836864, 0);
	Function_530(386, 0.0f, "sn_mwmp", 1, 3, 2, 5, 3212836864, 0);
	Function_530(261, 0.0f, "sn_cpm", 1, 3, 1, 5, 3212836864, 0);
	Function_530(262, 0.0f, "sn_kdns", 1, 3, 1, 5, 3212836864, 0);
	Function_530(273, 0.0f, "sn_h_tv", 21, 7, 3, 2, 3212836864, 0);
	Function_530(348, 0.0f, "sn_mlbs", 1, 7, 1, 2, 3212836864, 0);
	Function_529(492, 265, 0.0f, "sn_h_bw", "sd_h_bw", "sn_h_bw", "sl_h_bw", 7, 3);
	Function_529(491, 264, 0.0f, "sn_h_ds", "sd_h_ds", "sn_h_ds", "sl_h_ds", 7, 3);
	Function_529(494, 267, 0.0f, "sn_h_gc", "sd_h_gc", "sn_h_gc", "sl_h_gc", 7, 3);
	Function_529(496, 269, 0.0f, "sn_h_hs", "sd_h_hs", "sn_h_hs", "sl_h_hs", 7, 3);
	Function_529(493, 266, 0.0f, "sn_h_po", "sd_h_pp", "sn_h_po", "sl_h_pp", 7, 3);
	Function_529(490, 263, 0.0f, "sn_h_pp", "sd_h_pp", "sn_h_pp", "sl_h_pp", 7, 3);
	Function_529(498, 271, 0.0f, "sn_h_rs", "sd_h_rs", "sn_h_rs", "sl_h_rs", 7, 3);
	Function_529(497, 270, 0.0f, "sn_h_vs", "sd_h_vs", "sn_h_vs", "sl_h_vs", 7, 3);
	Function_529(495, 268, 0.0f, "sn_h_wo", "sd_h_wo", "sn_h_wo", "sl_h_wo", 7, 3);
	Function_529(499, 272, 0.0f, "sn_h_wf", "sd_h_wf", "sn_h_wf", "sl_h_wf", 7, 3);
	Function_530(274, 0.0f, "sn_skar", 4, 7, 1, 4, 3212836864, 0);
	Function_530(275, 0.0f, "sn_skbw", 4, 7, 1, 4, 3212836864, 0);
	Function_530(276, 0.0f, "sn_skbe", 4, 7, 1, 4, 3212836864, 0);
	Function_530(277, 0.0f, "sn_skbv", 4, 7, 1, 4, 3212836864, 0);
	Function_530(278, 0.0f, "sn_skbi", 4, 7, 1, 4, 3212836864, 0);
	Function_530(279, 0.0f, "sn_skbo", 4, 7, 1, 4, 3212836864, 0);
	Function_530(280, 0.0f, "sn_skbb", 4, 7, 1, 4, 3212836864, 0);
	Function_530(281, 0.0f, "sn_skbk", 4, 7, 1, 4, 3212836864, 0);
	Function_530(282, 0.0f, "sn_skbu", 4, 7, 1, 4, 3212836864, 0);
	Function_530(283, 0.0f, "sn_skch", 4, 7, 1, 4, 3212836864, 0);
	Function_530(284, 0.0f, "sn_skco", 4, 7, 1, 4, 3212836864, 0);
	Function_530(286, 0.0f, "sn_skcy", 4, 7, 1, 4, 3212836864, 0);
	Function_530(285, 0.0f, "sn_skcw", 4, 7, 1, 4, 3212836864, 0);
	Function_530(287, 0.0f, "sn_skcr", 4, 7, 1, 4, 3212836864, 0);
	Function_530(288, 0.0f, "sn_skde", 4, 7, 1, 4, 3212836864, 0);
	Function_530(289, 0.0f, "sn_skdo", 4, 7, 1, 4, 3212836864, 0);
	Function_530(290, 0.0f, "sn_skdu", 4, 7, 1, 4, 3212836864, 0);
	Function_530(291, 0.0f, "sn_skea", 4, 7, 1, 4, 3212836864, 0);
	Function_530(292, 0.0f, "sn_skel", 4, 7, 1, 4, 3212836864, 0);
	Function_530(293, 0.0f, "sn_skfo", 4, 7, 1, 4, 3212836864, 0);
	Function_530(299, 0.0f, "sn_skxr", 15, 7, 1, 4, 3212836864, 0);
	Function_530(301, 0.0f, "sn_skxb", 15, 7, 1, 4, 3212836864, 0);
	Function_530(300, 0.0f, "sn_skxc", 15, 7, 1, 4, 3212836864, 0);
	Function_530(298, 0.0f, "sn_skxw", 15, 7, 1, 4, 3212836864, 0);
	Function_530(294, 0.0f, "sn_skgo", 4, 7, 1, 4, 3212836864, 0);
	Function_530(296, 0.0f, "sn_skha", 4, 7, 1, 4, 3212836864, 0);
	Function_530(312, 0.0f, "sn_skho", 4, 7, 1, 4, 3212836864, 0);
	Function_530(297, 0.0f, "sn_skmu", 4, 7, 1, 4, 3212836864, 0);
	Function_530(302, 0.0f, "sn_skow", 4, 7, 1, 4, 3212836864, 0);
	Function_530(303, 0.0f, "sn_skpi", 4, 7, 1, 4, 3212836864, 0);
	Function_530(304, 0.0f, "sn_skrb", 4, 7, 1, 4, 3212836864, 0);
	Function_530(305, 0.0f, "sn_skra", 4, 7, 1, 4, 3212836864, 0);
	Function_530(295, 0.0f, "sn_skgu", 4, 7, 1, 4, 3212836864, 0);
	Function_530(306, 0.0f, "sn_sksh", 4, 7, 1, 4, 3212836864, 0);
	Function_530(307, 0.0f, "sn_sksk", 4, 7, 1, 4, 3212836864, 0);
	Function_530(308, 0.0f, "sn_sksn", 4, 7, 1, 4, 3212836864, 0);
	Function_530(309, 0.0f, "sn_skso", 4, 7, 1, 4, 3212836864, 0);
	Function_530(310, 0.0f, "sn_skv", 4, 7, 1, 4, 3212836864, 0);
	Function_530(311, 0.0f, "sn_skw", 4, 7, 1, 4, 3212836864, 0);
	Function_530(598, 0.0f, "sn_skjk", 4, 7, 1, 4, 3212836864, 0);
	Function_530(313, 0.0f, "sn_kiar", 4, 9, 3, 2, 3212836864, 0);
	Function_530(314, 0.0f, "sn_kibw", 4, 9, 3, 2, 3212836864, 0);
	Function_530(315, 0.0f, "sn_kibe", 4, 9, 3, 2, 3212836864, 0);
	Function_530(316, 0.0f, "sn_kibv", 4, 9, 3, 2, 3212836864, 0);
	Function_530(317, 0.0f, "sn_kibi", 4, 9, 3, 2, 3212836864, 0);
	Function_530(318, 0.0f, "sn_kibo", 4, 9, 3, 2, 3212836864, 0);
	Function_530(319, 0.0f, "sn_kibb", 4, 9, 3, 2, 3212836864, 0);
	Function_530(320, 0.0f, "sn_kibu", 4, 9, 3, 2, 3212836864, 0);
	Function_530(321, 0.0f, "sn_kich", 4, 9, 3, 2, 3212836864, 0);
	Function_530(322, 0.0f, "sn_kico", 4, 9, 3, 2, 3212836864, 0);
	Function_530(323, 0.0f, "sn_kicw", 4, 9, 3, 2, 3212836864, 0);
	Function_530(324, 0.0f, "sn_kicy", 4, 9, 3, 2, 3212836864, 0);
	Function_530(325, 0.0f, "sn_kicr", 4, 9, 3, 2, 3212836864, 0);
	Function_530(326, 0.0f, "sn_kide", 4, 9, 3, 2, 3212836864, 0);
	Function_530(327, 0.0f, "sn_kido", 4, 9, 3, 2, 3212836864, 0);
	Function_530(328, 0.0f, "sn_kidu", 4, 9, 3, 2, 3212836864, 0);
	Function_530(329, 0.0f, "sn_kiea", 4, 9, 3, 2, 3212836864, 0);
	Function_530(330, 0.0f, "sn_kiel", 4, 9, 3, 2, 3212836864, 0);
	Function_530(331, 0.0f, "sn_kifo", 4, 9, 3, 2, 3212836864, 0);
	Function_530(332, 0.0f, "sn_kigo", 4, 9, 3, 2, 3212836864, 0);
	Function_530(333, 0.0f, "sn_kiha", 4, 9, 3, 2, 3212836864, 0);
	Function_530(334, 0.0f, "sn_kiho", 4, 9, 3, 2, 3212836864, 0);
	Function_530(335, 0.0f, "sn_kiwh", 4, 9, 3, 2, 3212836864, 0);
	Function_530(336, 0.0f, "sn_kimu", 4, 9, 3, 2, 3212836864, 0);
	Function_530(337, 0.0f, "sn_kiow", 4, 9, 3, 2, 3212836864, 0);
	Function_530(338, 0.0f, "sn_kipi", 4, 9, 3, 2, 3212836864, 0);
	Function_530(339, 0.0f, "sn_kirb", 4, 9, 3, 2, 3212836864, 0);
	Function_530(340, 0.0f, "sn_kira", 4, 9, 3, 2, 3212836864, 0);
	Function_530(341, 0.0f, "sn_kise", 4, 9, 3, 2, 3212836864, 0);
	Function_530(342, 0.0f, "sn_kish", 4, 9, 3, 2, 3212836864, 0);
	Function_530(343, 0.0f, "sn_kisk", 4, 9, 3, 2, 3212836864, 0);
	Function_530(344, 0.0f, "sn_kisn", 4, 9, 3, 2, 3212836864, 0);
	Function_530(345, 0.0f, "sn_kiso", 4, 9, 3, 2, 3212836864, 0);
	Function_530(346, 0.0f, "sn_kiv", 4, 9, 3, 2, 3212836864, 0);
	Function_530(347, 0.0f, "sn_kiw", 4, 9, 3, 2, 3212836864, 0);
	Function_530(349, 0.0f, "sn_sca1", 4, 9, 3, 2, 3212836864, 0);
	Function_530(350, 0.0f, "sn_sca2", 4, 9, 3, 2, 3212836864, 0);
	Function_530(351, 0.0f, "sn_sca3", 4, 9, 3, 2, 3212836864, 0);
	Function_530(352, 0.0f, "sn_sca4", 4, 9, 3, 2, 3212836864, 0);
	Function_530(353, 0.0f, "sn_sca5", 4, 9, 3, 2, 3212836864, 0);
	Function_530(354, 0.0f, "sn_spek", 1, 9, 3, 2, 3212836864, 0);
	Function_529(500, 274, 0.0f, "sn_a1_m", "sd_sold", "", "", 9, 1);
	Function_529(501, 4294967295, 0.0f, "sn_a1_c", "sd_sold", "", "", 9, 1);
	Function_529(502, 275, 0.0f, "sn_b1_w", "sd_sold", "", "", 9, 1);
	Function_529(503, 276, 0.0f, "sn_b2_m", "sd_sold", "", "", 9, 1);
	Function_529(505, 4294967295, 0.0f, "sn_b2_c", "sd_sold", "", "", 9, 1);
	Function_529(504, 4294967295, 0.0f, "sn_b2_f", "sd_sold", "", "", 9, 1);
	Function_529(506, 4294967295, 0.0f, "sn_b2_t", "sd_sold", "", "", 9, 1);
	Function_529(507, 277, 0.0f, "sn_b3_m", "sd_sold", "", "", 9, 1);
	Function_529(508, 4294967295, 0.0f, "sn_b3_f", "sd_sold", "", "", 9, 1);
	Function_529(509, 278, 0.0f, "sn_b4_m", "sd_sold", "", "", 9, 1);
	Function_529(511, 4294967295, 0.0f, "sn_b4_h", "sd_sold", "", "", 9, 1);
	Function_529(510, 4294967295, 0.0f, "sn_b4_s", "sd_sold", "", "", 9, 1);
	Function_529(512, 279, 0.0f, "sn_b5_m", "sd_sold", "", "", 9, 1);
	Function_529(513, 4294967295, 0.0f, "sn_b5_s", "sd_sold", "", "", 9, 1);
	Function_529(514, 4294967295, 0.0f, "sn_b5_t", "sd_sold", "", "", 9, 1);
	Function_529(515, 280, 0.0f, "sn_b6_m", "sd_sold", "", "", 9, 1);
	Function_529(517, 4294967295, 0.0f, "sn_b6_c", "sd_sold", "", "", 9, 1);
	Function_529(516, 4294967295, 0.0f, "sn_b6_f", "sd_sold", "", "", 9, 1);
	Function_529(518, 281, 0.0f, "sn_b7_m", "sd_sold", "", "", 9, 1);
	Function_529(520, 4294967295, 0.0f, "sn_b7_a", "sd_sold", "", "", 9, 1);
	Function_529(519, 4294967295, 0.0f, "sn_b7_s", "sd_sold", "", "", 9, 1);
	Function_529(521, 282, 0.0f, "sn_b8_m", "sd_sold", "", "", 9, 1);
	Function_529(523, 4294967295, 0.0f, "sn_b8_h", "sd_sold", "", "", 9, 1);
	Function_529(522, 4294967295, 0.0f, "sn_b8_s", "sd_sold", "", "", 9, 1);
	Function_529(524, 283, 0.0f, "sn_c1_f", "sd_sold", "", "", 9, 1);
	Function_529(529, 285, 0.0f, "sn_c5_m", "sd_sold", "", "", 9, 1);
	Function_529(530, 4294967295, 0.0f, "sn_c5_h", "sd_sold", "", "", 9, 1);
	Function_529(525, 284, 0.0f, "sn_c2_m", "sd_sold", "", "", 9, 1);
	Function_529(527, 4294967295, 0.0f, "sn_c2_c", "sd_sold", "", "", 9, 1);
	Function_529(528, 4294967295, 0.0f, "sn_c2_f", "sd_sold", "", "", 9, 1);
	Function_529(526, 4294967295, 0.0f, "sn_c2_p", "sd_sold", "", "", 9, 1);
	Function_529(531, 286, 0.0f, "sn_c3_m", "sd_sold", "", "", 9, 1);
	Function_529(532, 4294967295, 0.0f, "sn_c3_p", "sd_sold", "", "", 9, 1);
	Function_529(533, 287, 0.0f, "sn_c4_f", "sd_sold", "", "", 9, 1);
	Function_529(534, 288, 0.0f, "sn_d1_m", "sd_sold", "", "", 9, 1);
	Function_529(535, 4294967295, 0.0f, "sn_d1_s", "sd_sold", "", "", 9, 1);
	Function_529(536, 289, 0.0f, "sn_d3_m", "sd_sold", "", "", 9, 1);
	Function_529(537, 4294967295, 0.0f, "sn_d3_f", "sd_sold", "", "", 9, 1);
	Function_529(538, 290, 0.0f, "sn_d2_f", "sd_sold", "", "", 9, 1);
	Function_529(539, 291, 0.0f, "sn_e1_f", "sd_sold", "", "", 9, 1);
	Function_529(540, 292, 0.0f, "sn_e2_m", "sd_sold", "", "", 9, 1);
	Function_529(542, 4294967295, 0.0f, "sn_e2_a", "sd_sold", "", "", 9, 1);
	Function_529(541, 4294967295, 0.0f, "sn_e2_s", "sd_sold", "", "", 9, 1);
	Function_529(543, 293, 0.0f, "sn_f1_m", "sd_sold", "", "", 9, 1);
	Function_529(544, 4294967295, 0.0f, "sn_f1_f", "sd_sold", "", "", 9, 1);
	Function_529(545, 294, 0.0f, "sn_g1_m", "sd_sold", "", "", 9, 1);
	Function_529(546, 276, 0.0f, "sn_g2_m", "sd_sold", "", "", 9, 1);
	Function_529(548, 4294967295, 0.0f, "sn_g2_c", "sd_sold", "", "", 9, 1);
	Function_529(549, 4294967295, 0.0f, "sn_g2_t", "sd_sold", "", "", 9, 1);
	Function_529(547, 4294967295, 0.0f, "sn_g2_f", "sd_sold", "", "", 9, 1);
	Function_529(550, 4294967295, 0.0f, "sn_g2_h", "sd_sold", "", "", 9, 1);
	Function_529(551, 295, 0.0f, "sn_g3_f", "sd_sold", "", "", 9, 1);
	Function_529(552, 296, 0.0f, "sn_h1_f", "sd_sold", "", "", 9, 1);
	Function_529(553, 297, 0.0f, "sn_m1_h", "sd_sold", "", "", 9, 1);
	Function_529(596, 4294967295, 0.0f, "sn_m1_m", "sd_sold", "", "", 9, 1);
	Function_529(554, 298, 0.0f, "sn_xw_m", "sd_sold", "", "", 9, 1);
	Function_529(556, 311, 0.0f, "sn_xw_h", "sd_sold", "", "", 9, 1);
	Function_529(555, 4294967295, 0.0f, "sn_xw_f", "sd_sold", "", "", 9, 1);
	Function_529(557, 299, 0.0f, "sn_xb_m", "sd_sold", "", "", 9, 1);
	Function_529(561, 4294967295, 0.0f, "sn_xb_t", "sd_sold", "", "", 9, 1);
	Function_529(560, 4294967295, 0.0f, "sn_xb_c", "sd_sold", "", "", 9, 1);
	Function_529(559, 4294967295, 0.0f, "sn_xb_h", "sd_sold", "", "", 9, 1);
	Function_529(558, 276, 0.0f, "sn_xb_f", "sd_sold", "", "", 9, 1);
	Function_529(562, 300, 0.0f, "sn_xc_m", "sd_sold", "", "", 9, 1);
	Function_529(563, 284, 0.0f, "sn_xc_p", "sd_sold", "", "", 9, 1);
	Function_529(565, 4294967295, 0.0f, "sn_xc_f", "sd_sold", "", "", 9, 1);
	Function_529(564, 4294967295, 0.0f, "sn_xc_h", "sd_sold", "", "", 9, 1);
	Function_529(566, 301, 0.0f, "sn_nb_m", "sd_sold", "", "", 9, 1);
	Function_529(569, 279, 0.0f, "sn_nb_t", "sd_sold", "", "", 9, 1);
	Function_529(567, 4294967295, 0.0f, "sn_nb_s", "sd_sold", "", "", 9, 1);
	Function_529(568, 4294967295, 0.0f, "sn_nb_h", "sd_sold", "", "", 9, 1);
	Function_529(570, 302, 0.0f, "sn_o1_f", "sd_sold", "", "", 9, 1);
	Function_529(571, 303, 0.0f, "sn_p1_m", "sd_sold", "", "", 9, 1);
	Function_529(572, 304, 0.0f, "sn_r1_m", "sd_sold", "", "", 9, 1);
	Function_529(573, 305, 0.0f, "sn_r2_m", "sd_sold", "", "", 9, 1);
	Function_529(574, 4294967295, 0.0f, "sn_r2_f", "sd_sold", "", "", 9, 1);
	Function_529(575, 306, 0.0f, "sn_s1_m", "sd_sold", "", "", 9, 1);
	Function_529(576, 4294967295, 0.0f, "sn_s1_s", "sd_sold", "", "", 9, 1);
	Function_529(577, 307, 0.0f, "sn_s2_m", "sd_sold", "", "", 9, 1);
	Function_529(578, 4294967295, 0.0f, "sn_s2_f", "sd_sold", "", "", 9, 1);
	Function_529(579, 308, 0.0f, "sn_s3_s", "sd_sold", "", "", 9, 1);
	Function_529(582, 309, 0.0f, "sn_sb_f", "sd_sold", "", "", 9, 1);
	Function_529(583, 310, 0.0f, "sn_v_f", "sd_sold", "", "", 9, 1);
	Function_529(584, 311, 0.0f, "sn_w1_m", "sd_sold", "", "", 9, 1);
	Function_529(585, 4294967295, 0.0f, "sn_w1_p", "sd_sold", "", "", 9, 1);
	Function_529(586, 4294967295, 0.0f, "sn_w1_h", "sd_sold", "", "", 9, 1);
	Function_529(580, 312, 0.0f, "sn_h2_m", "sd_sold", "", "", 9, 1);
	Function_529(581, 4294967295, 0.0f, "sn_h2_s", "sd_sold", "", "", 9, 1);
	Function_530(357, 0.0f, "sn_trea", 4, 7, 1, 4, 3212836864, 0);
	Function_529(587, 357, 0.0f, "sn_t_1", "sd_sold", "", "", 9, 3);
	Function_529(588, 357, 0.0f, "sn_t_2", "sd_sold", "", "", 9, 3);
	Function_529(589, 357, 0.0f, "sn_t_3", "sd_sold", "", "", 9, 3);
	Function_529(590, 357, 0.0f, "sn_t_4", "sd_sold", "", "", 9, 3);
	Function_529(591, 357, 0.0f, "sn_t_5", "sd_sold", "", "", 9, 3);
	Function_529(592, 357, 0.0f, "sn_t_6", "sd_sold", "", "", 9, 3);
	Function_529(593, 357, 0.0f, "sn_t_7", "sd_sold", "", "", 9, 3);
	Function_529(594, 357, 0.0f, "sn_t_8", "sd_sold", "", "", 9, 3);
	Function_529(595, 357, 0.0f, "sn_t_9", "sd_sold", "", "", 9, 3);
	Function_530(355, 0.0f, "sn_hdc", 4, 8, 1, 2, 3212836864, 0);
	Function_530(356, 0.0f, "sn_hdh", 4, 8, 1, 2, 3212836864, 0);
	Function_530(359, 0.0f, "sn_bha", 3, 8, 1, 2, 3212836864, 0);
	Function_530(358, 0.0f, "sn_bhd", 3, 8, 1, 2, 3212836864, 0);
	Function_530(360, 0.0f, "sn_bhf", 3, 8, 1, 2, 3212836864, 0);
	Function_530(361, 0.0f, "sn_bhm", 3, 8, 1, 2, 3212836864, 0);
	Function_530(362, 0.0f, "sn_bhn", 3, 8, 1, 2, 3212836864, 0);
	Function_530(363, 0.0f, "sn_blf", 3, 8, 1, 2, 3212836864, 0);
	Function_530(364, 0.0f, "sn_blm", 3, 8, 1, 2, 3212836864, 0);
	Function_530(365, 0.0f, "sn_bln", 3, 8, 1, 2, 3212836864, 0);
	Function_530(367, 0.0f, "sn_mat", 3, 6, 1, 2, 3212836864, 0);
	Function_530(368, 0.0f, "sn_mdf", 3, 6, 1, 2, 3212836864, 0);
	Function_530(370, 0.0f, "sn_swb", 7, 3, 1, 2, 0.0f, 0.0f);
	Function_530(371, 0.0f, "sn_nwb", 15, 6, 1, 2, 3212836864, 0);
	Function_530(372, 0.0f, "sn_mtof", 24, 4, 3, 2, 3212836864, 0);
	Function_530(373, 0.0f, "sn_mtoh", 24, 4, 3, 2, 3212836864, 0);
	Function_530(374, 0.0f, "sn_mtwh", 24, 4, 1, 2, 3212836864, 0);
	Function_530(375, 0.0f, "sn_mtoc", 24, 4, 1, 2, 3212836864, 0);
	Function_530(376, 0.0f, "sn_mtos", 24, 4, 3, 2, 3212836864, 0);
	Function_530(377, 0.0f, "sn_mcar", 24, 4, 1, 2, 3212836864, 0);
	Function_530(378, 0.0f, "sn_mtot", 24, 4, 1, 2, 3212836864, 0);
	Function_530(381, 0.0f, "sn_mtrp", 24, 4, 3, 2, 3212836864, 0);
	Function_530(382, 0.0f, "sn_mtrs", 24, 4, 3, 2, 3212836864, 0);
	Function_530(383, 0.0f, "sn_mtap", 24, 4, 3, 2, 3212836864, 0);
	Function_530(379, 0.0f, "sn_dff", 0, 4, 3, 2, 3212836864, 0);
	Function_530(380, 0.0f, "sn_hdff", 0, 4, 3, 2, 3212836864, 0);
	Function_530(384, 0.0f, "sn_tpfs", 21, 4, 1, 2, 3212836864, 0);
	Function_530(385, 0.0f, "sn_rpof", 0, 4, 3, 2, 3212836864, 0);
	Function_530(387, 0.0f, "sn_bfs", 24, 4, 3, 2, 3212836864, 0);
	Function_530(388, 0.0f, "sn_bfsh", 24, 4, 3, 2, 3212836864, 0);
	Function_530(369, 0.0f, "sn_esc", 3, 4, 1, 2, 3212836864, 0);
	Function_530(366, 0.0f, "sn_trn", 3, 4, 1, 2, 3212836864, 0);
	Function_530(390, 0.0f, "sn_dlvl", 15, 2, 1, 2, 3.0f, 0.0f);
	Function_530(391, 0.0f, "sn_kde", 0, 6, 3, 2, 3212836864, 0);
	Function_530(392, 0.0f, "sn_kode", 0, 6, 3, 2, 3212836864, 0);
	Function_530(393, 0.0f, "sn_dode", 0, 6, 3, 2, 3212836864, 0);
	Function_530(394, 0.0f, "sn_tdet", 23, 6, 3, 2, 3212836864, 0);
	Function_530(395, 0.0f, "sn_tode", 0, 6, 3, 2, 3212836864, 0);
	Function_530(396, 0.0f, "sn_plas", 15, 2, 1, 2, 3212836864, 0);
	Function_530(397, 0.0f, "sn_phog", 15, 2, 1, 2, 3212836864, 0);
	Function_530(398, 0.0f, "sn_nhog", 0, 2, 1, 2, 3212836864, 0);
	Function_530(399, 0.0f, "sn_fhog", 0, 2, 1, 2, 3212836864, 0);
	Function_530(389, 0.0f, "sn_mlas", 24, 2, 1, 2, 3212836864, 0);
	Function_530(487, 0.0f, "sn_mpex", 6, 9, 2, 2, 3212836864, 0);
	Function_530(488, 0.0f, "sn_KC", 1, 9, 2, 2, 3212836864, 0);
	if (Function_523(64))
	{
		Function_530(599, 0.0f, "sn_dlcm", 15, 2, 2, 3, 3212836864, 0);
		Function_530(600, 0.0f, "sn_hide", 15, 9, 2, 2, 3212836864, 0);
		Function_530(601, 0.0f, "sn_hide", 15, 9, 2, 2, 3212836864, 0);
		Function_530(603, 0.0f, "sn_dlcw", 15, 2, 2, 3, 3212836864, 0);
	}
	Function_530(456, 0.0f, "sn_otfd", 3, 9, 1, 2, 3212836864, 0);
	Function_530(457, 0.0f, "sn_otft", 3, 9, 1, 2, 3212836864, 0);
	Function_270(4, Function_277(Global_12976.f_156), 0, 1);
	Function_270(2, Function_272(Global_12976.f_152), 0, 1);
	Function_270(401, Function_528(0), 0, 1);
	Function_270(404, Function_527(0), 0, 1);
	Function_45();
	Var1 = { StackVal, Function_45() };
	Function_270(179, &Var1, 0, 1);
	Function_44();
	Var1 = { StackVal, Function_44() };
	Function_270(180, &Var1, 0, 1);
	Function_43();
	Var1 = { StackVal, Function_43() };
	Function_270(181, &Var1, 0, 1);
	Function_42(0);
	Var1 = { StackVal, Function_42(0) };
	Function_270(182, &Var1, 0, 1);
	iVar3 = 0;
	while (iVar3 <= 38)
	{
		Function_279((50 + iVar3), Function_19((90 + iVar3)));
		iVar3++;
	}
	Function_279(49, Function_19(89));
	Function_279(370, Function_19(371));
	Function_278();
	Function_526();
	if (Function_522(598) <= 0)
	{
		Function_521(598, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_19(3));
	SET_PLAYER_CURRENT_HONOR(0, Function_19(1));
	Function_525();
	return;
}

void Function_525() //Position: 0x2FD42 / 195906
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

void Function_526() //Position: 0x2FE48 / 196168
{
	Function_280(1, -5000.0f);
	Function_279(1, 5000.0f);
	return;
}

var Function_527(bool bParam0) //Position: 0x2FE62 / 196194
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
			Function_225(Global_13172[iVar911], &iVar0, &iVar1, &iVar2);
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

var Function_528(bool bParam0) //Position: 0x2FFA1 / 196513
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
			Function_225(Global_13172[iVar911], &uVar0, &iVar1, &iVar2);
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

int Function_529(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8) //Position: 0x3009C / 196764
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
		Function_530(iParam1, iParam2, bParam5, 5, iParam7, iParam8, 4, 3212836864, 0);
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

int Function_530(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8) //Position: 0x305DB / 198107
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
	else if ((((iParam0 != 597 || iParam0 != 19) || iParam0 != 20) || iParam0 != 21) || iParam0 != 603)
	{
		CREATE_STAT(bParam2, "", iParam4, iParam5);
	}
	return 1;
}

void Function_531() //Position: 0x3098B / 199051
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

void Function_532() //Position: 0x309E5 / 199141
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

void Function_533() //Position: 0x30A09 / 199177
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
	Function_534();
	return;
}

void Function_534() //Position: 0x30A90 / 199312
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

void Function_535() //Position: 0x30B04 / 199428
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
	ENABLE_CHILD_SECTOR("thi_gates01x");
	ENABLE_CHILD_SECTOR("thi_gates02x");
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
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20", !Global_3365);
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
		Function_536();
	}
	return;
}

void Function_536() //Position: 0x33F82 / 212866
{
	int iVar0;
	
	if (Function_551())
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
					if (Function_368(25, 0))
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
					if (Function_368(25, 0) && !Function_368(26, 0))
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
					if ((Function_368(25, 0) && Function_368(26, 0)) && !Function_368(29, 0))
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
					if ((Function_368(25, 0) && Function_368(26, 0)) && Function_368(29, 0))
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
					if (Function_368(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("tannersSpanBefore");
						ENABLE_WORLD_SECTOR("tannersSpanAfter");
					}
					break;
				
				case 0x00000005:
					if (Function_368(41, 0))
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
					if (Function_368(22, 0) && !Function_368(41, 0))
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
					if (Function_368(22, 0) && Function_368(41, 0))
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
					if (Function_368(34, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("campoMiradaBefore");
						ENABLE_WORLD_SECTOR("campoMiradaAfter");
					}
					break;
				
				case 0x00000009:
					if (Function_368(26, 0) || Function_368(30, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
						ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
					}
					break;
				
				case 0x0000000A:
					if (Function_368(40, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("fod_gates01x");
						ENABLE_CHILD_SECTOR("fod_gates02x");
						ENABLE_CHILD_SECTOR("fod_gates02Doors01x");
					}
					break;
				
				case 0x0000000B:
					if (Function_368(48, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("coc_fence01x");
						ENABLE_CHILD_SECTOR("coc_fence01bx");
						ENABLE_CHILD_SECTOR("coc_gates02x");
						DISABLE_CHILD_SECTOR("coc_gates01x");
					}
					break;
				
				case 0x0000000C:
					if (Function_368(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("masonBridgeBefore");
						ENABLE_WORLD_SECTOR("masonBridgeAfter");
					}
					break;
				
				case 0x0000000D:
					if (Function_368(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
						ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
					}
					break;
				
				case 0x0000000E:
					break;
				
				case 0x0000000F:
					if (Function_368(21, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
						ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
					}
					break;
				
				case 0x00000010:
					if (Function_368(57, 0) || Function_333(57))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_silo02x");
						ENABLE_CHILD_SECTOR("beh_silo01x");
					}
					break;
				
				case 0x00000011:
					if (Function_368(48, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_house02x");
						DISABLE_CHILD_SECTOR("beh_house02props01x");
						ENABLE_CHILD_SECTOR("beh_house01x");
						ENABLE_CHILD_SECTOR("beh_house01props01x");
					}
					break;
				
				case 0x00000012:
					if (Function_368(28, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
						ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
					}
					break;
				
				case 0x00000013:
					if (Function_368(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("esc_villaWall04x");
						ENABLE_CHILD_SECTOR("esc_villaWall05x");
					}
					break;
				
				case 0x00000014:
					if (Function_50(37))
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
					if (Function_368(57, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("beh_grave02x");
						ENABLE_CHILD_SECTOR("beh_grave03x");
						DISABLE_CHILD_SECTOR("beh_grave01x");
					}
					break;
				
				case 0x00000018:
					if (Function_368(25, 0))
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
					if (Function_368(32, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("emt_caveDoor02x");
						DISABLE_CHILD_SECTOR("emt_caveDoor01x");
					}
					break;
				
				case 0x0000001A:
					if (Function_368(20, 0))
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

bool Function_537(int iParam0) //Position: 0x357B8 / 219064
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_538(int iParam0) //Position: 0x357D6 / 219094
{
	int iVar0;
	
	if (Function_510(iParam0, 1) && Function_510(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

int Function_539(int iParam0, int iParam1, int iParam2) //Position: 0x3580A / 219146
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_542(iParam0, iParam1, iParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_540(iParam0, iParam1, iParam2, iVar0);
		}
		iVar0++;
	}
	return Function_540(iParam0, iParam1, iParam2, 4294967295);
}

int Function_540(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x35868 / 219240
{
	var uVar0;
	
	if (!Function_226(iParam2))
	{
		return 4294967295;
	}
	if (iParam0 > 0 || iParam0 < 255)
	{
		return 4294967295;
	}
	if (iParam1 > 0 || iParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_542(iParam0, iParam1, iParam2);
	if (iParam3 != 4294967295 || iParam3 <= 275)
	{
		iParam3 = Function_541(uVar0);
	}
	if (iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[iParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(iParam3);
		PRINTSTRING(" ");
		PRINTINT(iParam0);
		PRINTSTRING(" ");
		PRINTINT(iParam1);
		PRINTSTRING(" ");
		PRINTINT(iParam2);
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

int Function_541(int iParam0) //Position: 0x359BD / 219581
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

var Function_542(int iParam0, int iParam1, var uParam2) //Position: 0x359FB / 219643
{
	return ((uParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_543() //Position: 0x35A1B / 219675
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

var Function_544(char* cParam0) //Position: 0x35AE0 / 219872
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return STRING_TO_INT(bVar0);
	}
	return 4294967295;
}

void Function_545() //Position: 0x35B03 / 219907
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		Function_384(&(Global_0[iVar0168]), "MULTI_NONE", "MULTI_NONE", 0, 3, 4294967295, 4294967295, 0, 0);
		iVar0++;
	}
	Global_3361 = 0;
	return;
}

bool Function_546(bool bParam0) //Position: 0x35B4A / 219978
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(bParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_547() //Position: 0x35B69 / 220009
{
	WRITE_TO_FILE("New Game Progression Started\n", "C:/MoneyData.csv", 1);
	return;
}

var Function_548() //Position: 0x35BA6 / 220070
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_64;
}

vector3 Function_549(var uParam0, var uParam1) //Position: 0x35BC1 / 220097
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

void Function_550() //Position: 0x35C0D / 220173
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

bool Function_551() //Position: 0x35C48 / 220232
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_552(int iParam0, int iParam1) //Position: 0x35C51 / 220241
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_553(var uParam0, int iParam1) //Position: 0x35C64 / 220260
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_554(int iParam0, bool bParam1) //Position: 0x35C73 / 220275
{
	if (!Function_451(iParam0))
	{
		return;
	}
	Global_26401[iParam0] = bParam1;
	Function_409((*&Global_26401 + 2220)[iParam0], TO_FLOAT(bParam1), 0);
	Function_409(222, TO_FLOAT((Function_522(223) + Function_522(224))), 0);
	return;
}

vector3 Function_555(int iParam0) //Position: 0x35CB4 / 220340
{
	switch (iParam0)
	{
		case 0x00000001:
			return -819.6454f, 93.80083f, 2436.405f;
			break;
		
		case 0x00000002:
			return -2080.289f, 16.962f, 2603.609f;
			break;
		
		case 0x00000003:
			return 772.1412f, 79.45659f, 1241.604f;
			break;
		
		case 0x00000004:
			return -2647.498f, 31.386f, 4247.398f;
			break;
		
		case 0x00000005:
			return -724.92f, 63.349f, 3297.469f;
			break;
		
		case 0x00000006:
			return -4355.349f, 30.16f, 4384.089f;
			break;
	}
	Function_134();
	return StackVal, StackVal, Function_134();
}

void Function_556(int iParam0) //Position: 0x35D5A / 220506
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_557(var uParam0, var uParam1, int iParam2) //Position: 0x35D6D / 220525
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

void Function_558(int iParam0) //Position: 0x35DC1 / 220609
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

