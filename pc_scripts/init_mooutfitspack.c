//Decompiled with MagicRDR v1.0
//Function Count : 26
//Statics Count : 13
//Natives Count : 26
//Parameters Count : 1

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
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uScriptParam_0 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = uScriptParam_0 & 1 == false;
	bVar1 = uScriptParam_0 & 2 == false;
	bVar2 = uScriptParam_0 & 16 == false;
	if (Global_53524.f_44)
	{
	}
	if (uScriptParam_0 & 8 != 0 || (Function_25() && !bVar2))
	{
		if (bVar0 && bVar1)
		{
			Function_24();
			PRINTSTRING("Displaying DLC Requires TU Message...");
			PRINTNL();
			UI_MESSAGEBOX_SET_DESCRIPTION("NetConf_BarkerLocked", "DLC_Requires_TU");
			UI_ACTIVATE("NetConf_BarkerLocked");
		}
	}
	else if (bVar1)
	{
		Function_12(bVar0);
	}
	else
	{
		Function_1(bVar0, bVar2);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0, bool bParam1) //Position: 0xD8 / 216
{
	if (bParam0)
	{
		Function_11();
		if (!Function_9(32))
		{
			LOAD_AUDIO_SPEECH_DATA("dlc3_map_speech.dat");
			Function_8();
		}
		if (!Function_9(64))
		{
			LOAD_AUDIO_SPEECH_DATA("dlc3_mode_speech.dat");
			Function_7();
			Function_4();
		}
		if (!Function_9(1024))
		{
			LOAD_AUDIO_SPEECH_DATA("dlc3_zombie_speech.dat");
			LOAD_AUDIO_METADATA("sounds", "dlc3_zombie_sounds.dat", "DLC3_ZOMBIE");
			LOAD_AUDIO_METADATA("gameobjects", "dlc3_zombie_game.dat", "DLC3_ZOMBIE");
			Function_2();
			if (bParam1)
			{
				AUDIO_INIT_ZOMBIE_MP_PLAYER_AE_RANGE(964, 971);
				AUDIO_INIT_ZOMBIE_MP_FEMALE_VALUE(970);
			}
		}
	}
	if (Function_25() && UI_GET_NUM_CHILDREN("LB_DLC5_Tabs") > 5)
	{
		UI_ADD_CHILD("LB_DLC5_Tabs", "rdrNetStatTab");
		UI_SET_DATA("", "tableID", "152");
		UI_ADD_CHILD("LB_DLC5_Tabs", "rdrNetStatTab");
		UI_SET_DATA("", "tableID", "153");
	}
	return;
}

void Function_2() //Position: 0x279 / 633
{
	struct<45> Var0;
	
	*(&Var0 + 8) = "MPPLAYER_DLC25";
	*(&Var0 + 16) = "zombie_fastDrunk_n_dirty_01";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "";
	Function_3(964, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC26";
	*(&Var0 + 16) = "zombie_blackGunslinger_01";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "";
	Function_3(965, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC27";
	*(&Var0 + 16) = "zombie_caucasianGunslinger_01";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "";
	Function_3(966, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC28";
	*(&Var0 + 16) = "zombie_abnashSamra";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "";
	Function_3(967, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC29";
	*(&Var0 + 16) = "player_defaultZombieMP";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "";
	Function_3(968, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC30";
	*(&Var0 + 16) = "zombie_caucasianMaleOld_01";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "";
	Function_3(969, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC31";
	*(&Var0 + 16) = "zombie_hispanicFemaleProstitute_01";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Female";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "";
	Function_3(970, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC32";
	*(&Var0 + 16) = "zombie_hispanicMalePosse_01";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "";
	Function_3(971, "template_mplayer", &Var0);
	return;
}

void Function_3(var uParam0, int iParam1, int iParam2) //Position: 0x769 / 1897
{
	INIT_NATIVE_ACTORENUM_DLC_PLAYER(uParam0, &iParam1, &iParam2, 20);
	return;
}

void Function_4() //Position: 0x77C / 1916
{
	struct<413> Var0;
	
	*(&Var0 + 24) = "RIFLE_Antitank";
	Var0.f_8 = 42;
	Var0.f_12 = 4294967295;
	Var0.f_16 = 80;
	Var0.f_20 = 13;
	*(&Var0 + 40) = "rifle_explosive01x";
	*(&Var0 + 48) = "WEAPONS_RIFLE_ANTITANK";
	*(&Var0 + 56) = "WEAPONS_RIFLE_ANTITANK";
	*(&Var0 + 32) = "ANTITANK";
	*(&Var0 + 88) = "RIF_Explosive";
	Var0.f_96 = 4000.0f;
	*(&Var0 + 104) = "rfl";
	*(&Var0 + 112) = "rfl_buf";
	*(&Var0 + 120) = "Rifle_bltStrip";
	*(&Var0 + 128) = "rifle_1892Win";
	*(&Var0 + 136) = "rifle_1892Win";
	Var0.f_144 = 1.0f;
	Var0.f_148 = 110.0f;
	Var0.f_152 = 80.0f;
	Var0.f_156 = 0,5f;
	Var0.f_160 = 1.0f;
	Var0.f_164 = 0,6f;
	Var0.f_168 = 120.0f;
	Var0.f_172 = 1.0f;
	Var0.f_176 = 0,4f;
	Var0.f_180 = 1,2f;
	*(&Var0 + 184) = "MUZZLE_FLASH2";
	*(&Var0 + 192) = "RUMBLE_RIFLE_HI";
	*(&Var0 + 200) = "wrist_r_Attachment";
	Var0.f_208 = 0.0f;
	Var0.f_212 = 0.0f;
	Var0.f_216 = 0.0f;
	Var0.f_220 = 0.0f;
	Var0.f_224 = 40.0f;
	Var0.f_228 = 100.0f;
	Var0.f_232 = 0,3f;
	Var0.f_236 = 40.0f;
	Var0.f_240 = 100.0f;
	Var0.f_244 = 0,3f;
	Var0.f_248 = 0.0f;
	Var0.f_252 = 1.0f;
	Var0.f_256 = 0.0f;
	*(&Var0 + 264) = "AIMER_BALLISTIC";
	Var0.f_272 = 1;
	Var0.f_276 = 0;
	Var0.f_280 = 1,8f;
	Var0.f_284 = 0,2f;
	Var0.f_288 = 0,5f;
	Var0.f_292 = 1.0f;
	Var0.f_296 = 1.0f;
	Var0.f_300 = 65.0f;
	Var0.f_304 = 65.0f;
	Var0.f_308 = 65.0f;
	Var0.f_312 = 70.0f;
	Var0.f_316 = 300.0f;
	*(&Var0 + 320) = "";
	Var0.f_328 = 0;
	Var0.f_332 = 10.0f;
	Var0.f_336 = 60.0f;
	Var0.f_340 = 70.0f;
	Var0.f_344 = 5.0f;
	Var0.f_348 = 1.0f;
	Var0.f_352 = 4.0f;
	Var0.f_356 = 50.0f;
	Var0.f_360 = 1.0f;
	Var0.f_364 = 0;
	Var0.f_368 = 20.0f;
	*(&Var0 + 376) = "Single";
	Var0.f_384 = 0,5f;
	Var0.f_392 = 1.0f;
	Var0.f_396 = 1.0f;
	Var0.f_400 = 500.0f;
	Var0.f_404 = 1,8f;
	Var0.f_408 = 0,5f;
	Var0.f_388 = 1.0f;
	Var0.f_412 = 1.0f;
	Var0.f_64 = 4294967295;
	Var0.f_68 = 1.0f;
	Var0.f_72 = 0,7f;
	Var0.f_76 = 0,27f;
	Var0.f_80 = 0,7f;
	Var0.f_84 = 0,1f;
	Function_6(31, "base_rifle", &Var0);
	Var52 = "ANTITANK";
	*(&Var52 + 8) = "ammo_antitank";
	*(&Var52 + 16) = "ammo_antiTank";
	Var52.f_24 = 30.0f;
	Var52.f_28 = 1.0f;
	Var52.f_32 = 0;
	Var52.f_36 = 0,5f;
	Var52.f_40 = 1;
	Var52.f_44 = 1;
	Function_5(13, &Var52);
	return;
}

void Function_5(int iParam0, int iParam1) //Position: 0xB50 / 2896
{
	INIT_NATIVE_WEAPONENUM_AMMO(iParam0, &iParam1);
	return;
}

void Function_6(var uParam0, var uParam1, var uParam2) //Position: 0xB5E / 2910
{
	INIT_NATIVE_WEAPONENUM_RIFLE(uParam0, &uParam1, &uParam2);
	return;
}

void Function_7() //Position: 0xB6F / 2927
{
	struct<45> Var0;
	
	*(&Var0 + 8) = "MPPLAYER_DLC09";
	*(&Var0 + 16) = "player_defaultMp";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC09";
	Function_3(949, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC11";
	*(&Var0 + 16) = "player_jack_defaultMp";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC11";
	Function_3(950, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC12";
	*(&Var0 + 16) = "com_wifeMp";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Female";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC12";
	Function_3(951, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC13";
	*(&Var0 + 16) = "com_ranchersDaughterMp";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Female";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC13";
	Function_3(952, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC14";
	*(&Var0 + 16) = "com_marshalMp";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC14";
	Function_3(953, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC15";
	*(&Var0 + 16) = "com_snakeOilMerchantMP";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC15";
	Function_3(954, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC16";
	*(&Var0 + 16) = "com_mexicanGirlMp";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Female";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC16";
	Function_3(955, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC24";
	*(&Var0 + 16) = "com_graveRobberMp";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC24";
	Function_3(963, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC17";
	*(&Var0 + 16) = "com_outlawMp";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC17";
	Function_3(956, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC18";
	*(&Var0 + 16) = "com_firstFbiAgentMp";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC18";
	Function_3(957, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC19";
	*(&Var0 + 16) = "anc_nemesis";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC19";
	Function_3(958, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC20";
	*(&Var0 + 16) = "anc_firstOldFriendMp";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC20";
	Function_3(959, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC21";
	*(&Var0 + 16) = "anc_mexicanTyrant";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC21";
	Function_3(960, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC22";
	*(&Var0 + 16) = "com_mexicanRebelLeaderMp";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "fat";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC22";
	Function_3(961, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC23";
	*(&Var0 + 16) = "com_anthropologistMp";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC23";
	Function_3(962, "template_mplayer", &Var0);
	return;
}

void Function_8() //Position: 0x14FE / 5374
{
	struct<45> Var0;
	
	*(&Var0 + 8) = "MPPLAYER_DLC01";
	*(&Var0 + 16) = "rdr1_redHarlow";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1,15f, 1,02f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC01";
	Function_3(941, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC02";
	*(&Var0 + 16) = "rdr1_jackSwift";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1,15f, 1,02f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC02";
	Function_3(942, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC03";
	*(&Var0 + 16) = "rdr1_buffaloSoldier";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1,15f, 1,04f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC03";
	Function_3(943, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC04";
	*(&Var0 + 16) = "rdr1_shadowWolf";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1,1f, 1,04f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC04";
	Function_3(944, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC05";
	*(&Var0 + 16) = "rdr1_pigJosh";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1,1f, 1,02f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "fat";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC05";
	Function_3(945, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC06";
	*(&Var0 + 16) = "rdr1_annieStokes";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1,1f, 1,02f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Female";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC06";
	Function_3(946, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC07";
	*(&Var0 + 16) = "rdr1_uglyChris";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1,15f, 1,04f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "fat";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC07";
	Function_3(947, "template_mplayer", &Var0);
	*(&Var0 + 8) = "MPPLAYER_DLC08";
	*(&Var0 + 16) = "rdr1_mrKelly";
	*(&Var0 + 24) = "";
	Var0 = 1;
	*(&Var0 + 32) = Vector(1,15f, 1,04f, 1.0f);
	Var0.f_44 = 1;
	*(&Var0 + 48) = "Male";
	*(&Var0 + 56) = "gped";
	*(&Var0 + 64) = "nCaucasian";
	*(&Var0 + 72) = "MPPLAYER_DLC08";
	Function_3(948, "template_mplayer", &Var0);
	return;
}

bool Function_9(int iParam0) //Position: 0x1A40 / 6720
{
	return Function_10(Global_131807.f_1304, iParam0);
}

int Function_10(var uParam0, bool bParam1) //Position: 0x1A52 / 6738
{
	return (uParam0 && bParam1) == 0;
}

void Function_11() //Position: 0x1A5F / 6751
{
	int iVar0;
	
	iVar0 = "$/strings/DLC/MoOutfitsPack/stringtable/mooutfitspack.strtbl";
	if (IS_PS3())
	{
		iVar0 = "$/strings/DLC/MoOutfitsPack/stringtable/mooutfitspack_ps3.strtbl";
	}
	if (IS_PS4())
	{
		iVar0 = "$/strings/DLC/MoOutfitsPack/stringtable/mooutfitspack_ps4.strtbl";
	}
	if (IS_SWITCH())
	{
		iVar0 = "$/strings/DLC/MoOutfitsPack/stringtable/mooutfitspack_switch.strtbl";
	}
	if (IS_PC())
	{
		iVar0 = "$/strings/DLC/MoOutfitsPack/stringtable/mooutfitspack_win32.strtbl";
	}
	STRINGTABLE_APPEND_TABLE(&iVar0);
	return;
}

void Function_12(bool bParam0) //Position: 0x1BE2 / 7138
{
	int iVar0;
	int iVar10;
	int iVar20;
	
	if (bParam0)
	{
		REQUEST_ASSET("$/content/DLC/MoOutfitsPack/event_jackalope", 4);
		_DLC_FRAGMENT("$/fragments/MoOutfitsPack/fragmentsList.bin");
		if (GET_ACTOR_ENUM_VARIATION_COUNT(0) <= 20)
		{
			*(&iVar0 + 8) = "PLAYER";
			*(&iVar0 + 16) = "player_default player_elegantSuit player_mexicanRebel  player_treasureHunter player_drunkDirty player_cattleRustler player_bandito    player_fbi player_usLaw player_usArmy player_rancher player_legend";
			*(&iVar0 + 24) = "player_default_intro player_social player_default_wounded01 player_default_wounded02 player_oldDuster player_oldPoncho player_oneEye player_mountainMan player_dockWorker";
			iVar0 = 0;
			*(&iVar0 + 32) = Vector(1.0f, 1.0f, 1.0f);
			*(&iVar0 + 48) = "Male";
			*(&iVar0 + 64) = "nCaucasian";
			Function_23(0, "template_player", &iVar0);
			*(&iVar10 + 8) = "nPLAYER_cs";
			*(&iVar10 + 16) = "player_default_cs player_elegantSuit_cs player_mexicanRebel_cs  player_treasureHunter_cs player_drunkDirty_cs player_cattleRustler_cs player_bandito_cs  player_fbi_cs player_usLaw_cs  player_usArmy_cs player_rancher_cs player_legend_cs";
			*(&iVar10 + 24) = "player_default_intro_cs player_social_cs player_default_wounded01_cs player_default_wounded02_cs player_oldDuster_cs player_oldPoncho_cs player_oneEye_cs player_mountainMan_cs player_dockWorker_cs";
			iVar10 = 0;
			*(&iVar10 + 32) = Vector(1.0f, 1.0f, 1.0f);
			*(&iVar10 + 48) = "Male";
			*(&iVar10 + 64) = "nCaucasian";
			Function_23(2, "template_player_cs", &iVar10);
		}
		*(&iVar20 + 8) = "PLAYER_JACK";
		*(&iVar20 + 16) = "player_jack_default player_jack_elegantSuit player_jack_mexicanRebel  player_jack_treasureHunter player_jack_drunkDirty player_jack_cattleRustler player_jack_bandito    player_jack_fbi player_jack_usLaw player_jack_usArmy player_jack_rancher";
		*(&iVar20 + 24) = "player_jack_legend player_default_intro player_jack_social player_default_wounded01 player_default_wounded02 player_jack_oldDuster player_jack_oldPoncho player_jack_oneEye player_jack_mountainMan player_jack_dockWorker";
		iVar20 = 0;
		*(&iVar20 + 32) = Vector(1.0f, 1.0f, 1.0f);
		*(&iVar20 + 48) = "Male";
		*(&iVar20 + 64) = "nCaucasian";
		Function_22(1, "template_player_jack", &iVar20);
	}
	Function_19(2048);
	Function_19(512);
	Function_13(950);
	Function_13(954);
	Function_13(955);
	Function_13(959);
	Function_13(960);
	Function_13(961);
	Function_13(962);
	return;
}

void Function_13(int iParam0) //Position: 0x22A8 / 8872
{
	Function_14(&Global_131807 + 2720[Function_18(iParam0)], Function_15(iParam0));
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x22C4 / 8900
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

int Function_15(int iParam0) //Position: 0x22DA / 8922
{
	return Function_16((Function_17(iParam0) % 32));
}

int Function_16(bool bParam0) //Position: 0x22EB / 8939
{
	return SHIFT_LEFT(true, bParam0);
}

int Function_17(int iParam0) //Position: 0x22F7 / 8951
{
	if (iParam0 > 1287)
	{
		return (iParam0 - 1287) + 134 + 1;
	}
	return (iParam0 - 837);
}

int Function_18(int iParam0) //Position: 0x2316 / 8982
{
	return (Function_17(iParam0) / 32);
}

void Function_19(int iParam0) //Position: 0x2324 / 8996
{
	Function_20(&Global_131807 + 1304, iParam0);
	return;
}

void Function_20(var uParam0, int iParam1) //Position: 0x2336 / 9014
{
	Function_21(&uParam0, iParam1);
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0x2344 / 9028
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_22(var uParam0, var uParam1, int iParam2) //Position: 0x2355 / 9045
{
	INIT_NATIVE_ACTORENUM_PLAYER(uParam0, &uParam1, &iParam2, 20);
	return;
}

void Function_23(var uParam0, int iParam1, int iParam2) //Position: 0x2368 / 9064
{
	INIT_NATIVE_ACTORENUM_PLAYER(uParam0, &iParam1, &iParam2, 20);
	return;
}

void Function_24() //Position: 0x237B / 9083
{
	var uVar0;
	
	uVar0 = "$/strings/DLC/MoOutfitsPack/stringtable/DlcTuErrorMsg.strtbl";
	if (IS_PS3())
	{
		uVar0 = "$/strings/DLC/MoOutfitsPack/stringtable/DlcTuErrorMsg_ps3.strtbl";
	}
	if (IS_PS4())
	{
		uVar0 = "$/strings/DLC/MoOutfitsPack/stringtable/DlcTuErrorMsg_ps4.strtbl";
	}
	if (IS_SWITCH())
	{
		uVar0 = "$/strings/DLC/MoOutfitsPack/stringtable/DlcTuErrorMsg_switch.strtbl";
	}
	if (IS_PC())
	{
		uVar0 = "$/strings/DLC/MoOutfitsPack/stringtable/DlcTuErrorMsg_win32.strtbl";
	}
	STRINGTABLE_APPEND_TABLE(&uVar0);
	return;
}

var Function_25() //Position: 0x24FE / 9470
{
	return HAS_STRING_TABLE_LOADED("jp");
}

