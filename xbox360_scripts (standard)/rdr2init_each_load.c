//Decompiled with MagicRDR v1.0
//Function Count : 42
//Statics Count : 0
//Natives Count : 80
//Parameters Count : 0

#region Local Var
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	Function_40();
	DISABLE_ACTOR_REFCOUNTING(GET_THIS_SCRIPT_ID());
	iVar0 = CREATE_LAYOUT("AiSpeech");
	AI_SPEECH_REGISTER_EVENT(1, "BumpedIntoMe");
	AI_SPEECH_REGISTER_EVENT(2, "CombatHitMe");
	AI_SPEECH_REGISTER_EVENT(3, "CombatKilledAlly");
	AI_SPEECH_REGISTER_EVENT(4, "CombatWeaponDrawn");
	AI_SPEECH_REGISTER_EVENT(9, "HandsUp");
	AI_SPEECH_REGISTER_EVENT(11, "MovingToCover");
	AI_SPEECH_REGISTER_EVENT(13, "NearMiss");
	AI_SPEECH_REGISTER_EVENT(14, "Random");
	AI_SPEECH_REGISTER_EVENT(16, "SawDeath");
	AI_SPEECH_REGISTER_EVENT(17, "VisionBody");
	AI_SPEECH_REGISTER_EVENT(18, "Scared");
	AI_SPEECH_REGISTER_EVENT(19, "Shooting");
	AI_SPEECH_REGISTER_EVENT(20, "Spectate");
	AI_SPEECH_REGISTER_EVENT(22, "VisionFound");
	AI_SPEECH_REGISTER_EVENT(23, "VisionLost");
	AI_SPEECH_REGISTER_TAGS_BEGIN(31);
	AI_SPEECH_REGISTER_TAG(0f, "AudioActivityPatrol", 0, 0);
	AI_SPEECH_REGISTER_TAG(1,401298E-45f, "nAudioAlly", 1, 0);
	AI_SPEECH_REGISTER_TAG(2,802597E-45f, "AudioNeutral", 1, 0);
	AI_SPEECH_REGISTER_TAG(4,203895E-45f, "AudioEnemy", 1, 0);
	AI_SPEECH_REGISTER_TAG(8,407791E-45f, "CombatRangeWeaponDrawnWhenVisible", 1, 0);
	AI_SPEECH_REGISTER_TAG(9,809089E-45f, "Player", 1, 1);
	AI_SPEECH_REGISTER_TAG(1,121039E-44f, "Player", 1, 0);
	AI_SPEECH_REGISTER_TAG(1,261169E-44f, "AudioDistanceClose", 1, 0);
	AI_SPEECH_REGISTER_TAG(1,541428E-44f, "AudioDistanceSomewhatClose", 1, 0);
	AI_SPEECH_REGISTER_TAG(1,401298E-44f, "AudioDistanceFar", 1, 0);
	AI_SPEECH_REGISTER_TAG(1,681558E-44f, "AnybodyAround", 0, 1);
	AI_SPEECH_REGISTER_TAG(1,821688E-44f, "AnybodyAround", 0, 0);
	AI_SPEECH_REGISTER_TAG(1,961818E-44f, "AlliesAreAround", 0, 0);
	AI_SPEECH_REGISTER_TAG(2,101948E-44f, "AlliesAreAround", 0, 1);
	AI_SPEECH_REGISTER_TAG(2,242078E-44f, "ObjectClassGenderFemale", 1, 0);
	AI_SPEECH_REGISTER_TAG(2,382207E-44f, "ObjectClassGenderMale", 1, 0);
	AI_SPEECH_REGISTER_TAG(2,522337E-44f, "AudioHealthDying", 0, 0);
	AI_SPEECH_REGISTER_TAG(2,662467E-44f, "AudioHealthHealthy", 0, 0);
	AI_SPEECH_REGISTER_TAG(2,802597E-44f, "AudioHealthHealthy", 0, 1);
	AI_SPEECH_REGISTER_TAG(2,942727E-44f, "AudioHealthImmobilized", 0, 0);
	AI_SPEECH_REGISTER_TAG(3,082857E-44f, "AudioHitByMeleeRecently", 0, 0);
	AI_SPEECH_REGISTER_TAG(3,222986E-44f, "AudioHogtied", 0, 0);
	AI_SPEECH_REGISTER_TAG(3,363116E-44f, "CombatShooting", 0, 1);
	AI_SPEECH_REGISTER_TAG(3,503246E-44f, "WasVisibleJustNow", 1, 1);
	AI_SPEECH_REGISTER_TAG(3,643376E-44f, "WasVisibleJustNow", 1, 0);
	AI_SPEECH_REGISTER_TAG(3,783506E-44f, "AudioStateIdle", 0, 0);
	AI_SPEECH_REGISTER_TAG(3,923636E-44f, "AudioStateSearching", 0, 0);
	AI_SPEECH_REGISTER_TAG(4,063766E-44f, "AudioStateCombat", 0, 0);
	AI_SPEECH_REGISTER_TAG(4,203895E-44f, "AudioStateSurrendered", 0, 0);
	AI_SPEECH_REGISTER_TAGS_END();
	uVar1 = CREATE_AI_SPEECH_PACKAGE_IN_LAYOUT(iVar0, "Default");
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 14, 98, 1.0f, 1.0f, 1, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 3);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 29);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 19);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 24);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 14, 82, 1,25f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 14);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 3);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 29);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 19);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 1, 14, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 8);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 27);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 13, 61, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 29);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 14, 84, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 18);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 14, 84, 1,15f, 1.0f, 1, 83);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 18);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 1);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 11);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 11, 63, 0,5f, 2.0f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 29);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 11, 104, 0,5f, 2.0f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 14);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 19);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 29);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 11, 84, 1,15f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 20);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 29);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 11, 84, 1,5f, 1.0f, 1, 83);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 20);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 29);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 1);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 11);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 3, 107, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 3);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 29);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 16, 16, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 8);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 14, 22, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 3);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 25);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 28);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 22, 109, 1,25f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 3);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 29);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 22, 94, 1,25f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 3);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 29);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 23, 22, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 3);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 29);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 2, 26, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 3);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 19);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 19, 27, 1,5f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 3);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 29);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 14, 72, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 23);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 16, 60, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 1);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 16, 61, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 2);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 16, 60, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 2);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 20, 162, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 9);
	uVar2 = AI_SPEECH_ADD_PHRASE(uVar1, 17, 61, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(uVar1, uVar2, 9);
	AI_SPEECH_SET_DEFAULT_PACKAGE(uVar1);
	Function_37();
	Function_30();
	SET_GREETING_CONTEXT(48);
	SET_NON_VERBAL_GREETING_PROBABILITY(0.0f);
	SET_GREETING_LOOK_AT_ANGLE_DEFAULT(180.0f);
	SET_GREETING_PROBABILITY_NPC_DEFAULT(1.0f);
	SET_GREETING_PROBABILITY_PLAYER_DEFAULT(0,4f);
	SET_GREETING_MIN_TIME_INTERVAL(8.0f);
	SET_GREETING_MIN_TIME_INTERVAL_SAME_TARGET(40.0f);
	SET_GREETING_MAX_DISTANCE(10.0f);
	SET_GREETING_MIN_MOVEMENT_SPEED(0,1f);
	SET_GREETING_MAX_MOVEMENT_ANGLE(110.0f);
	SET_GREETING_ANIM_SIGNAL_TIMEOUT_DURATION(0,5f);
	SPEECH_CONTEXT_INIT_DATA(657 + 1);
	Function_29();
	Function_28();
	Function_27();
	Function_26();
	Function_25();
	Function_24();
	Function_21(Function_23(), Function_22());
	Function_20();
	Function_19();
	Function_18();
	Function_17();
	Function_16();
	Function_15();
	Function_14();
	Function_13();
	Function_12();
	Function_11();
	Function_6();
	UNK_0x7DA34015(47, 0);
	UNK_0x7DA34015(23, 0);
	UNK_0x7DA34015(24, 0);
	UNK_0x79EFDF7E(44, 40.0f);
	UNK_0xCA669478(39, 1.0f);
	UNK_0xCA669478(40, 1.0f);
	UNK_0xCA669478(41, 0,5f);
	UNK_0xCA669478(42, 0,5f);
	UNK_0xCA669478(43, 10.0f);
	UNK_0xCA669478(44, 10.0f);
	UNK_0xCA669478(45, 0,1f);
	UNK_0xCA669478(46, 0,1f);
	UNK_0xCA669478(47, 10.0f);
	UNK_0xCA669478(48, 10.0f);
	Function_5();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x8F1 / 2289
{
	int iVar0;
	var uVar1;
	
	iVar0 = 1;
	if (Function_3(3) == 10)
	{
		iVar0 = 2;
	}
	uVar1 = Function_2(3);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(6);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(0);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(1);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(8);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(4);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(12);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(5);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(2);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(30);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(31);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(32);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(33);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(34);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(35);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(36);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(37);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(38);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(39);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(40);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(41);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(42);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(43);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(44);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(45);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(46);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(47);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(48);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(49);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(50);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(51);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(7);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_2(9);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	return;
}

var Function_2(bool bParam0) //Position: 0xB0E / 2830
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

int Function_3(bool bParam0) //Position: 0xBFF / 3071
{
	if (Function_4() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

var Function_4() //Position: 0xC27 / 3111
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_5() //Position: 0xC30 / 3120
{
	(*&Global_5743[89] + 12)[1] = 178.0f;
	(*&Global_5743[89] + 12)[0] = 155.0f;
	Global_5743[89][1] = 80.0f;
	Global_5743[89][0] = 100.0f;
	(*&Global_5743[89] + 24)[1] = 4;
	(*&Global_5743[89] + 24)[0] = 5;
	(*&Global_5743[99] + 12)[1] = 437.0f;
	(*&Global_5743[99] + 12)[0] = 380.0f;
	Global_5743[99][1] = 80.0f;
	Global_5743[99][0] = 100.0f;
	(*&Global_5743[99] + 24)[1] = 5;
	(*&Global_5743[99] + 24)[0] = 10;
	(*&Global_5743[109] + 12)[1] = 161.0f;
	(*&Global_5743[109] + 12)[0] = 140.0f;
	Global_5743[109][1] = 80.0f;
	Global_5743[109][0] = 100.0f;
	(*&Global_5743[109] + 24)[1] = 3;
	(*&Global_5743[109] + 24)[0] = 4;
	(*&Global_5743[139] + 12)[1] = 224.0f;
	(*&Global_5743[139] + 12)[0] = 195.0f;
	Global_5743[139][1] = 90.0f;
	Global_5743[139][0] = 100.0f;
	(*&Global_5743[139] + 24)[1] = 2;
	(*&Global_5743[139] + 24)[0] = 7;
	(*&Global_5743[149] + 12)[1] = 150.0f;
	(*&Global_5743[149] + 12)[0] = 130.0f;
	Global_5743[149][1] = 17.0f;
	Global_5743[149][0] = 82.0f;
	(*&Global_5743[149] + 24)[1] = 8;
	(*&Global_5743[149] + 24)[0] = 14;
	(*&Global_5743[169] + 12)[1] = 385.0f;
	(*&Global_5743[169] + 12)[0] = 335.0f;
	Global_5743[169][1] = 78.0f;
	Global_5743[169][0] = 86.0f;
	(*&Global_5743[169] + 24)[1] = 4;
	(*&Global_5743[169] + 24)[0] = 12;
	(*&Global_5743[189] + 12)[1] = 161.0f;
	(*&Global_5743[189] + 12)[0] = 140.0f;
	Global_5743[189][1] = 80.0f;
	Global_5743[189][0] = 100.0f;
	(*&Global_5743[189] + 24)[1] = 5;
	(*&Global_5743[189] + 24)[0] = 9;
	(*&Global_5743[199] + 12)[1] = 460.0f;
	(*&Global_5743[199] + 12)[0] = 400.0f;
	Global_5743[199][1] = 34.0f;
	Global_5743[199][0] = 53.0f;
	(*&Global_5743[199] + 24)[1] = 10;
	(*&Global_5743[199] + 24)[0] = 16;
	(*&Global_5743[209] + 12)[1] = 546.0f;
	(*&Global_5743[209] + 12)[0] = 475.0f;
	Global_5743[209][1] = 77.0f;
	Global_5743[209][0] = 84.0f;
	(*&Global_5743[209] + 24)[1] = 2;
	(*&Global_5743[209] + 24)[0] = 7;
	(*&Global_5743[219] + 12)[1] = 472.0f;
	(*&Global_5743[219] + 12)[0] = 410.0f;
	Global_5743[219][1] = 33.0f;
	Global_5743[219][0] = 58.0f;
	(*&Global_5743[219] + 24)[1] = 8;
	(*&Global_5743[219] + 24)[0] = 15;
	(*&Global_5743[239] + 12)[1] = 431.0f;
	(*&Global_5743[239] + 12)[0] = 375.0f;
	Global_5743[239][1] = 54.0f;
	Global_5743[239][0] = 86.0f;
	(*&Global_5743[239] + 24)[1] = 3;
	(*&Global_5743[239] + 24)[0] = 7;
	(*&Global_5743[249] + 12)[1] = 357.0f;
	(*&Global_5743[249] + 12)[0] = 310.0f;
	Global_5743[249][1] = 13.0f;
	Global_5743[249][0] = 15.0f;
	(*&Global_5743[249] + 24)[1] = 1;
	(*&Global_5743[249] + 24)[0] = 10;
	(*&Global_5743[259] + 12)[1] = 610.0f;
	(*&Global_5743[259] + 12)[0] = 530.0f;
	Global_5743[259][1] = 55.0f;
	Global_5743[259][0] = 67.0f;
	(*&Global_5743[259] + 24)[1] = 3;
	(*&Global_5743[259] + 24)[0] = 4;
	(*&Global_5743[269] + 12)[1] = 483.0f;
	(*&Global_5743[269] + 12)[0] = 420.0f;
	Global_5743[269][1] = 80.0f;
	Global_5743[269][0] = 90.0f;
	(*&Global_5743[269] + 24)[1] = 3;
	(*&Global_5743[269] + 24)[0] = 4;
	(*&Global_5743[279] + 12)[1] = 288.0f;
	(*&Global_5743[279] + 12)[0] = 250.0f;
	Global_5743[279][1] = 50.0f;
	Global_5743[279][0] = 70.0f;
	(*&Global_5743[279] + 24)[1] = 2;
	(*&Global_5743[279] + 24)[0] = 3;
	(*&Global_5743[289] + 12)[1] = 575.0f;
	(*&Global_5743[289] + 12)[0] = 500.0f;
	Global_5743[289][1] = 75.0f;
	Global_5743[289][0] = 87.0f;
	(*&Global_5743[289] + 24)[1] = 20;
	(*&Global_5743[289] + 24)[0] = 22;
	(*&Global_5743[299] + 12)[1] = 897.0f;
	(*&Global_5743[299] + 12)[0] = 780.0f;
	Global_5743[299][1] = 20.0f;
	Global_5743[299][0] = 40.0f;
	(*&Global_5743[299] + 24)[1] = 21;
	(*&Global_5743[299] + 24)[0] = 22;
	(*&Global_5743[309] + 12)[1] = 247.0f;
	(*&Global_5743[309] + 12)[0] = 215.0f;
	Global_5743[309][1] = 69.0f;
	Global_5743[309][0] = 78.0f;
	(*&Global_5743[309] + 24)[1] = 3;
	(*&Global_5743[309] + 24)[0] = 5;
	(*&Global_5743[319] + 12)[1] = 201.0f;
	(*&Global_5743[319] + 12)[0] = 175.0f;
	Global_5743[319][1] = 83.0f;
	Global_5743[319][0] = 93.0f;
	(*&Global_5743[319] + 24)[1] = 2;
	(*&Global_5743[319] + 24)[0] = 3;
	(*&Global_5743[329] + 12)[1] = 673.0f;
	(*&Global_5743[329] + 12)[0] = 585.0f;
	Global_5743[329][1] = 68.0f;
	Global_5743[329][0] = 80.0f;
	(*&Global_5743[329] + 24)[1] = 8;
	(*&Global_5743[329] + 24)[0] = 15;
	(*&Global_5743[339] + 12)[1] = 270.0f;
	(*&Global_5743[339] + 12)[0] = 235.0f;
	Global_5743[339][1] = 85.0f;
	Global_5743[339][0] = 92.0f;
	(*&Global_5743[339] + 24)[1] = 4;
	(*&Global_5743[339] + 24)[0] = 7;
	(*&Global_5743[349] + 12)[1] = 247.0f;
	(*&Global_5743[349] + 12)[0] = 215.0f;
	Global_5743[349][1] = 67.0f;
	Global_5743[349][0] = 93.0f;
	(*&Global_5743[349] + 24)[1] = 1;
	(*&Global_5743[349] + 24)[0] = 3;
	(*&Global_5743[359] + 12)[1] = 351.0f;
	(*&Global_5743[359] + 12)[0] = 305.0f;
	Global_5743[359][1] = 70.0f;
	Global_5743[359][0] = 85.0f;
	(*&Global_5743[359] + 24)[1] = 3;
	(*&Global_5743[359] + 24)[0] = 7;
	(*&Global_5743[369] + 12)[1] = 213.0f;
	(*&Global_5743[369] + 12)[0] = 185.0f;
	Global_5743[369][1] = 80.0f;
	Global_5743[369][0] = 90.0f;
	(*&Global_5743[369] + 24)[1] = 4;
	(*&Global_5743[369] + 24)[0] = 8;
	(*&Global_5743[379] + 12)[1] = 656.0f;
	(*&Global_5743[379] + 12)[0] = 570.0f;
	Global_5743[379][1] = 30.0f;
	Global_5743[379][0] = 35.0f;
	(*&Global_5743[379] + 24)[1] = 9;
	(*&Global_5743[379] + 24)[0] = 12;
	(*&Global_5743[389] + 12)[1] = 242.0f;
	(*&Global_5743[389] + 12)[0] = 210.0f;
	Global_5743[389][1] = 60.0f;
	Global_5743[389][0] = 75.0f;
	(*&Global_5743[389] + 24)[1] = 2;
	(*&Global_5743[389] + 24)[0] = 4;
	(*&Global_5743[399] + 12)[1] = 391.0f;
	(*&Global_5743[399] + 12)[0] = 340.0f;
	Global_5743[399][1] = 60.0f;
	Global_5743[399][0] = 75.0f;
	(*&Global_5743[399] + 24)[1] = 4;
	(*&Global_5743[399] + 24)[0] = 6;
	(*&Global_5743[409] + 12)[1] = 368.0f;
	(*&Global_5743[409] + 12)[0] = 320.0f;
	Global_5743[409][1] = 30.0f;
	Global_5743[409][0] = 40.0f;
	(*&Global_5743[409] + 24)[1] = 15;
	(*&Global_5743[409] + 24)[0] = 22;
	(*&Global_5743[419] + 12)[1] = 569.0f;
	(*&Global_5743[419] + 12)[0] = 495.0f;
	Global_5743[419][1] = 25.0f;
	Global_5743[419][0] = 40.0f;
	(*&Global_5743[419] + 24)[1] = 15;
	(*&Global_5743[419] + 24)[0] = 20;
	(*&Global_5743[429] + 12)[1] = 512.0f;
	(*&Global_5743[429] + 12)[0] = 445.0f;
	Global_5743[429][1] = 50.0f;
	Global_5743[429][0] = 75.0f;
	(*&Global_5743[429] + 24)[1] = 3;
	(*&Global_5743[429] + 24)[0] = 7;
	(*&Global_5743[439] + 12)[1] = 460.0f;
	(*&Global_5743[439] + 12)[0] = 400.0f;
	Global_5743[439][1] = 60.0f;
	Global_5743[439][0] = 75.0f;
	(*&Global_5743[439] + 24)[1] = 6;
	(*&Global_5743[439] + 24)[0] = 10;
	(*&Global_5743[449] + 12)[1] = 587.0f;
	(*&Global_5743[449] + 12)[0] = 510.0f;
	Global_5743[449][1] = 60.0f;
	Global_5743[449][0] = 75.0f;
	(*&Global_5743[449] + 24)[1] = 1;
	(*&Global_5743[449] + 24)[0] = 3;
	(*&Global_5743[459] + 12)[1] = 391.0f;
	(*&Global_5743[459] + 12)[0] = 340.0f;
	Global_5743[459][1] = 75.0f;
	Global_5743[459][0] = 90.0f;
	(*&Global_5743[459] + 24)[1] = 3;
	(*&Global_5743[459] + 24)[0] = 6;
	(*&Global_5743[469] + 12)[1] = 311.0f;
	(*&Global_5743[469] + 12)[0] = 270.0f;
	Global_5743[469][1] = 65.0f;
	Global_5743[469][0] = 80.0f;
	(*&Global_5743[469] + 24)[1] = 5;
	(*&Global_5743[469] + 24)[0] = 7;
	(*&Global_5743[479] + 12)[1] = 328.0f;
	(*&Global_5743[479] + 12)[0] = 285.0f;
	Global_5743[479][1] = 12.0f;
	Global_5743[479][0] = 15.0f;
	(*&Global_5743[479] + 24)[1] = 5;
	(*&Global_5743[479] + 24)[0] = 11;
	(*&Global_5743[489] + 12)[1] = 587.0f;
	(*&Global_5743[489] + 12)[0] = 510.0f;
	Global_5743[489][1] = 35.0f;
	Global_5743[489][0] = 50.0f;
	(*&Global_5743[489] + 24)[1] = 9;
	(*&Global_5743[489] + 24)[0] = 15;
	(*&Global_5743[579] + 12)[1] = 380.0f;
	(*&Global_5743[579] + 12)[0] = 330.0f;
	Global_5743[579][1] = 65.0f;
	Global_5743[579][0] = 85.0f;
	(*&Global_5743[579] + 24)[1] = 6;
	(*&Global_5743[579] + 24)[0] = 15;
	(*&Global_5743[29] + 12)[1] = 483.0f;
	(*&Global_5743[29] + 12)[0] = 420.0f;
	Global_5743[29][1] = 75.0f;
	Global_5743[29][0] = 100.0f;
	(*&Global_5743[29] + 24)[1] = 0;
	(*&Global_5743[29] + 24)[0] = 0;
	(*&Global_5743[529] + 12)[1] = 541.0f;
	(*&Global_5743[529] + 12)[0] = 470.0f;
	Global_5743[529][1] = 40.0f;
	Global_5743[529][0] = 71.0f;
	(*&Global_5743[529] + 24)[1] = 0;
	(*&Global_5743[529] + 24)[0] = 0;
	(*&Global_5743[539] + 12)[1] = 449.0f;
	(*&Global_5743[539] + 12)[0] = 390.0f;
	Global_5743[539][1] = 88.0f;
	Global_5743[539][0] = 95.0f;
	(*&Global_5743[539] + 24)[1] = 0;
	(*&Global_5743[539] + 24)[0] = 0;
	(*&Global_5743[549] + 12)[1] = 368.0f;
	(*&Global_5743[549] + 12)[0] = 320.0f;
	Global_5743[549][1] = 75.0f;
	Global_5743[549][0] = 90.0f;
	(*&Global_5743[549] + 24)[1] = 0;
	(*&Global_5743[549] + 24)[0] = 0;
	(*&Global_5743[509] + 12)[1] = 104.0f;
	(*&Global_5743[509] + 12)[0] = 90.0f;
	Global_5743[509][1] = 50.0f;
	Global_5743[509][0] = 60.0f;
	(*&Global_5743[509] + 24)[1] = 0;
	(*&Global_5743[509] + 24)[0] = 0;
	(*&Global_5743[79] + 12)[1] = 351.0f;
	(*&Global_5743[79] + 12)[0] = 305.0f;
	Global_5743[79][1] = 75.0f;
	Global_5743[79][0] = 85.0f;
	(*&Global_5743[79] + 24)[1] = 19;
	(*&Global_5743[79] + 24)[0] = 21;
	(*&Global_5743[499] + 12)[1] = 690.0f;
	(*&Global_5743[499] + 12)[0] = 600.0f;
	Global_5743[499][1] = 75.0f;
	Global_5743[499][0] = 85.0f;
	(*&Global_5743[499] + 24)[1] = 13;
	(*&Global_5743[499] + 24)[0] = 15;
	(*&Global_5743[559] + 12)[1] = 368.0f;
	(*&Global_5743[559] + 12)[0] = 320.0f;
	Global_5743[559][1] = 75.0f;
	Global_5743[559][0] = 85.0f;
	(*&Global_5743[559] + 24)[1] = 13;
	(*&Global_5743[559] + 24)[0] = 15;
	(*&Global_5743[19] + 12)[1] = 299.0f;
	(*&Global_5743[19] + 12)[0] = 260.0f;
	Global_5743[19][1] = 0.0f;
	Global_5743[19][0] = 0.0f;
	(*&Global_5743[19] + 24)[1] = 0;
	(*&Global_5743[19] + 24)[0] = 0;
	(*&Global_5743[49] + 12)[1] = 236.0f;
	(*&Global_5743[49] + 12)[0] = 205.0f;
	Global_5743[49][1] = 0.0f;
	Global_5743[49][0] = 0.0f;
	(*&Global_5743[49] + 24)[1] = 0;
	(*&Global_5743[49] + 24)[0] = 0;
	(*&Global_5743[39] + 12)[1] = 213.0f;
	(*&Global_5743[39] + 12)[0] = 185.0f;
	Global_5743[39][1] = 0.0f;
	Global_5743[39][0] = 0.0f;
	(*&Global_5743[39] + 24)[1] = 0;
	(*&Global_5743[39] + 24)[0] = 0;
	(*&Global_5743[229] + 12)[1] = 316.0f;
	(*&Global_5743[229] + 12)[0] = 275.0f;
	Global_5743[229][1] = 0.0f;
	Global_5743[229][0] = 0.0f;
	(*&Global_5743[229] + 24)[1] = 0;
	(*&Global_5743[229] + 24)[0] = 0;
	(*&Global_5743[69] + 12)[1] = 690.0f;
	(*&Global_5743[69] + 12)[0] = 600.0f;
	Global_5743[69][1] = 0.0f;
	Global_5743[69][0] = 0.0f;
	(*&Global_5743[69] + 24)[1] = 0;
	(*&Global_5743[69] + 24)[0] = 0;
	(*&Global_5743[59] + 12)[1] = 196.0f;
	(*&Global_5743[59] + 12)[0] = 170.0f;
	Global_5743[59][1] = 0.0f;
	Global_5743[59][0] = 0.0f;
	(*&Global_5743[59] + 24)[1] = 0;
	(*&Global_5743[59] + 24)[0] = 0;
	(*&Global_5743[119] + 12)[1] = 253.0f;
	(*&Global_5743[119] + 12)[0] = 220.0f;
	Global_5743[119][1] = 0.0f;
	Global_5743[119][0] = 0.0f;
	(*&Global_5743[119] + 24)[1] = 0;
	(*&Global_5743[119] + 24)[0] = 0;
	(*&Global_5743[179] + 12)[1] = 339.0f;
	(*&Global_5743[179] + 12)[0] = 295.0f;
	Global_5743[179][1] = 0.0f;
	Global_5743[179][0] = 0.0f;
	(*&Global_5743[179] + 24)[1] = 0;
	(*&Global_5743[179] + 24)[0] = 0;
	(*&Global_5743[159] + 12)[1] = 322.0f;
	(*&Global_5743[159] + 12)[0] = 280.0f;
	Global_5743[159][1] = 0.0f;
	Global_5743[159][0] = 0.0f;
	(*&Global_5743[159] + 24)[1] = 0;
	(*&Global_5743[159] + 24)[0] = 0;
	(*&Global_5743[129] + 12)[1] = 414.0f;
	(*&Global_5743[129] + 12)[0] = 360.0f;
	Global_5743[129][1] = 0.0f;
	Global_5743[129][0] = 0.0f;
	(*&Global_5743[129] + 24)[1] = 0;
	(*&Global_5743[129] + 24)[0] = 0;
	(*&Global_5743[569] + 12)[1] = 368.0f;
	(*&Global_5743[569] + 12)[0] = 320.0f;
	Global_5743[569][1] = 0.0f;
	Global_5743[569][0] = 0.0f;
	(*&Global_5743[569] + 24)[1] = 0;
	(*&Global_5743[569] + 24)[0] = 0;
	(*&Global_5743[519] + 12)[1] = 414.0f;
	(*&Global_5743[519] + 12)[0] = 360.0f;
	Global_5743[519][1] = 0.0f;
	Global_5743[519][0] = 0.0f;
	(*&Global_5743[519] + 24)[1] = 0;
	(*&Global_5743[519] + 24)[0] = 0;
	return;
}

void Function_6() //Position: 0x1FD8 / 8152
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_7(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_7(var uParam0, bool bParam1) //Position: 0x2008 / 8200
{
	int iVar0;
	
	iVar0 = Function_9(uParam0);
	if (!Function_8(iVar0))
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

bool Function_8(int iParam0) //Position: 0x2045 / 8261
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_9(int iParam0) //Position: 0x205C / 8284
{
	if (!Function_10(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_10(int iParam0) //Position: 0x2076 / 8310
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_11() //Position: 0x208C / 8332
{
	SPEECH_CONTEXT_SET_PLAYER_IDENTITY_RESTRICTION(46, 0);
	SPEECH_CONTEXT_SET_PLAYER_IDENTITY_RESTRICTION(36, 0);
	SPEECH_CONTEXT_SET_PLAYER_IDENTITY_RESTRICTION(37, 0);
	SPEECH_CONTEXT_SET_PLAYER_IDENTITY_RESTRICTION(13, 0);
	SPEECH_CONTEXT_SET_PLAYER_IDENTITY_RESTRICTION(102, 0);
	SPEECH_CONTEXT_SET_PLAYER_IDENTITY_RESTRICTION(55, 0);
	return;
}

void Function_12() //Position: 0x20B6 / 8374
{
	SPEECH_CONTEXT_ADD_CHILD(381, 378, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(381, 379, 90.0f);
	SPEECH_CONTEXT_SET_ETHNICITY_RESTRICTION(379, 3);
	return;
}

void Function_13() //Position: 0x20DF / 8415
{
	SPEECH_CONTEXT_ADD_CHILD(14, 12, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(14, 13, 90.0f);
	return;
}

void Function_14() //Position: 0x20FB / 8443
{
	SPEECH_CONTEXT_ADD_CHILD(56, 54, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(56, 55, 90.0f);
	return;
}

void Function_15() //Position: 0x2117 / 8471
{
	SPEECH_CONTEXT_ADD_CHILD(26, 24, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(26, 25, 90.0f);
	SPEECH_CONTEXT_SET_TARGET_INITIAL_FACTION(25, 27);
	return;
}

void Function_16() //Position: 0x2139 / 8505
{
	SPEECH_CONTEXT_ADD_CHILD(107, 105, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(107, 106, 90.0f);
	SPEECH_CONTEXT_SET_TARGET_INITIAL_FACTION(106, 27);
	return;
}

void Function_17() //Position: 0x215B / 8539
{
	SPEECH_CONTEXT_ADD_CHILD(94, 93, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(94, 92, 90.0f);
	SPEECH_CONTEXT_SET_TARGET_INITIAL_FACTION(92, 27);
	return;
}

void Function_18() //Position: 0x217D / 8573
{
	SPEECH_CONTEXT_ADD_CHILD(98, 96, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(98, 97, 90.0f);
	SPEECH_CONTEXT_SET_TARGET_INITIAL_FACTION(97, 27);
	return;
}

void Function_19() //Position: 0x219F / 8607
{
	SPEECH_CONTEXT_ADD_CHILD(31, 30, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(31, 335, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(112, 111, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(112, 334, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(112, 337, 10.0f);
	AI_CONVERSE_SET_GIDDYUP_CONTEXT(31);
	AI_CONVERSE_SET_WOAH_CONTEXT(112);
	return;
}

void Function_20() //Position: 0x21EC / 8684
{
	AI_CONVERSE_SET_GREETING_CONTEXT(48);
	AI_CONVERSE_SET_GOSSIP_AMBIENT_CONTEXT(41);
	AI_CONVERSE_SET_GOSSIP_REPLY_CONTEXT(38);
	AI_CONVERSE_SET_GOODBYE_START_CONTEXT(32);
	AI_CONVERSE_SET_GOODBYE_CONTEXT(29);
	AI_CONVERSE_INIT_CAMPFIRE_CONTEXT_STORAGE();
	AI_CONVERSE_SET_CAMPFIRE_INVITE_CONTEXT(120);
	AI_CONVERSE_SET_CAMPFIRE_CONTEXT(0, 121);
	AI_CONVERSE_SET_CAMPFIRE_CONTEXT(1, 122);
	AI_CONVERSE_SET_CAMPFIRE_CONTEXT(2, 123);
	AI_CONVERSE_SET_CAMPFIRE_CONTEXT(3, 124);
	AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(0, 125);
	AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(1, 126);
	AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(2, 127);
	AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(3, 128);
	AI_CONVERSE_SET_CAMPFIRE_STORY_DONE_CONTEXT(129);
	AI_CONVERSE_SET_CAMPFIRE_STORY_LEAVE_CONTEXT(130);
	AI_CONVERSE_SET_CAMPFIRE_RESPONSE_CONTEXT(131);
	SPEECH_CONTEXT_SET_ALLOW_PHRASE_REUSE(121, 1);
	SPEECH_CONTEXT_SET_ALLOW_PHRASE_REUSE(122, 1);
	SPEECH_CONTEXT_SET_ALLOW_PHRASE_REUSE(123, 1);
	SPEECH_CONTEXT_SET_ALLOW_PHRASE_REUSE(124, 1);
	return;
}

void Function_21(int iParam0, int iParam1) //Position: 0x226A / 8810
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

var Function_22() //Position: 0x24C8 / 9416
{
	return Global_12976.f_156;
}

var Function_23() //Position: 0x24D3 / 9427
{
	return Global_12976.f_152;
}

void Function_24() //Position: 0x24DE / 9438
{
	SPEECH_CONTEXT_SET_ALLOW_PHRASE_REUSE(29, 1);
	return;
}

void Function_25() //Position: 0x24EA / 9450
{
	SPEECH_CONTEXT_ADD_CHILD(162, 158, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(162, 159, 10.0f);
	SPEECH_CONTEXT_SET_ALLOW_PHRASE_REUSE(158, 1);
	SPEECH_CONTEXT_SET_ALLOW_PHRASE_REUSE(159, 1);
	return;
}

void Function_26() //Position: 0x2512 / 9490
{
	SET_WEATHER_TYPE_GOOD(1);
	SET_WEATHER_TYPE_GOOD(0);
	SET_WEATHER_TYPE_RAINY(3);
	SET_WEATHER_TYPE_RAINY(4);
	SPEECH_CONTEXT_ADD_CHILD(41, 33, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 34, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 35, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 36, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 37, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 619, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 620, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 621, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 622, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 623, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 624, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 625, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 626, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 627, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 628, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 629, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 630, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 631, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 632, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 633, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 634, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 635, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 636, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 637, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 638, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 639, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 640, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 641, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 642, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 643, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 644, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 645, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 646, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 647, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 648, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 649, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 650, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 651, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 652, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 653, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 654, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 655, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(41, 656, 20.0f);
	SPEECH_CONTEXT_SET_WEATHER_RESTRICTION_GOOD(39);
	SPEECH_CONTEXT_SET_WEATHER_RESTRICTION_RAINY(40);
	SPEECH_CONTEXT_SET_ALLOW_PHRASE_REUSE(32, 1);
	SPEECH_CONTEXT_SET_ALLOW_PHRASE_REUSE(38, 1);
	SPEECH_CONTEXT_ADD_CHILD(23, 33, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(23, 34, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(23, 35, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(23, 36, 30.0f);
	SPEECH_CONTEXT_ADD_CHILD(23, 37, 30.0f);
	return;
}

void Function_27() //Position: 0x279A / 10138
{
	SPEECH_CONTEXT_ADD_CHILD(68, 64, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(68, 65, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(68, 66, 20.0f);
	SPEECH_CONTEXT_ADD_CHILD(68, 67, 90.0f);
	SPEECH_CONTEXT_ADD_CHILD(68, 424, 70.0f);
	SPEECH_CONTEXT_ADD_CHILD(68, 425, 70.0f);
	SPEECH_CONTEXT_SET_RESTRICTION_IS_LAW(425);
	SPEECH_CONTEXT_SET_TIME_RESTRICTION(66, 6.0f, 9,5f);
	SPEECH_CONTEXT_SET_TIME_RESTRICTION(64, 17.0f, 20.0f);
	SPEECH_CONTEXT_SET_ETHNICITY_RESTRICTION(67, 3);
	return;
}

void Function_28() //Position: 0x280C / 10252
{
	SPEECH_CONTEXT_ADD_CHILD(49, 48, 5.0f);
	SPEECH_CONTEXT_ADD_CHILD(50, 49, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(50, 99, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(50, 102, 70.0f);
	return;
}

void Function_29() //Position: 0x283A / 10298
{
	SPEECH_CONTEXT_ADD_CHILD(48, 43, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(48, 45, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(48, 42, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(48, 46, 90.0f);
	SPEECH_CONTEXT_ADD_CHILD(48, 39, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(48, 40, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(48, 47, 80.0f);
	SPEECH_CONTEXT_ADD_CHILD(48, 91, 80.0f);
	SPEECH_CONTEXT_SET_TIME_RESTRICTION(45, 6.0f, 9,5f);
	SPEECH_CONTEXT_SET_TIME_RESTRICTION(42, 17.0f, 20.0f);
	SPEECH_CONTEXT_SET_TARGET_PLAYER(46);
	SPEECH_CONTEXT_SET_OPPOSITE_GENDER_RESTRICTION(47);
	SPEECH_CONTEXT_SET_OPPOSITE_GENDER_RESTRICTION(91);
	AI_CONVERSE_SET_GREET_SAUCY_CONTEXT(47);
	AI_CONVERSE_SET_SOLICIT_CONTEXT(91);
	AI_CONVERSE_SET_REJECTION_CONTEXT(408);
	AI_CONVERSE_SET_COY_REJECTION_CONTEXT(15);
	AI_CONVERSE_SET_GREET_PLAYER_CONTEXT(44);
	SPEECH_CONTEXT_SET_TIME_RESTRICTION(39, 6.0f, 16.0f);
	SPEECH_CONTEXT_SET_ALLOW_PHRASE_REUSE(43, 1);
	SPEECH_CONTEXT_SET_ALLOW_PHRASE_REUSE(45, 1);
	SPEECH_CONTEXT_SET_ALLOW_PHRASE_REUSE(42, 1);
	SPEECH_CONTEXT_SET_ALLOW_PHRASE_REUSE(46, 1);
	SPEECH_CONTEXT_SET_ALLOW_PHRASE_REUSE(47, 1);
	SPEECH_CONTEXT_SET_ALLOW_PHRASE_REUSE(91, 1);
	return;
}

void Function_30() //Position: 0x290A / 10506
{
	Function_35(1, "CRM_VANDAL", 3, 1, 15.0f, 1, 0);
	Function_35(2, "CRM_VANDAL_CAR", 3, 5, 15.0f, 1, 0);
	Function_35(3, "CRM_PRPDEST", 2, 5, 15.0f, 1, 0);
	Function_35(4, "CRM_PRPDEST_CAR", 2, 10, 15.0f, 1, 0);
	Function_35(5, "nCRM_ARSON", 2, 20, 15.0f, 1, 1);
	Function_35(6, "nCRM_ASSLT", 3, 20, 15.0f, 1, 1);
	Function_35(7, "CRM_ASSLT_LAW", 3, 20, 15.0f, 1, 1);
	Function_35(8, "CRM_ASSLT_HORSE", 3, 5, 15.0f, 1, 0);
	Function_35(9, "CRM_ASSLT_COW", 3, 5, 15.0f, 1, 0);
	Function_35(10, "CRM_ASSLT_ANI", 3, 5, 15.0f, 1, 0);
	Function_35(11, "nCRM_MURDR", 0, 40, 15.0f, 1, 1);
	Function_35(12, "CRM_MURDR_LAW", 0, 50, 15.0f, 1, 1);
	Function_35(13, "CRM_MURDR_HORSE", 0, 20, 15.0f, 1, 0);
	Function_35(14, "CRM_MURDR_COW", 0, 20, 15.0f, 1, 0);
	Function_35(15, "CRM_MURDR_ANI", 0, 5, 15.0f, 1, 0);
	Function_35(16, "CRM_STEAL_HORSE", 0, 20, 15.0f, 1, 1);
	Function_35(17, "CRM_STEAL_HORSE", 4, 20, 15.0f, 1, 1);
	Function_35(19, "CRM_STEAL_CAR", 0, 20, 15.0f, 1, 1);
	Function_35(20, "CRM_STEAL_CAR", 4, 20, 15.0f, 1, 1);
	Function_35(21, "CRM_KIDNAP", 0, 20, 15.0f, 1, 1);
	Function_35(22, "CRM_KIDNAP_LAW", 0, 30, 15.0f, 1, 1);
	Function_35(25, "CRM_CRACK_SAFE", 0, 50, 15.0f, 1, 1);
	Function_35(27, "CRM_ROB_COACH", 0, 100, 15.0f, 1, 1);
	Function_35(28, "CRM_TRESPASS", 0, 5, 15.0f, 1, 1);
	Function_35(30, "CRM_STEAL_BIG", 3, 10, 15.0f, 1, 1);
	Function_35(32, "nCRM_CHEAT", 0, 25, 15.0f, 1, 0);
	Function_35(35, "CRM_THREAT_LAW", 0, 5, 15.0f, 1, 1);
	Function_34(17, 15.0f);
	Function_34(20, 15.0f);
	Function_33(1, 15.0f, 30.0f);
	Function_33(2, 30.0f, 30.0f);
	Function_33(3, 15.0f, 30.0f);
	Function_33(4, 30.0f, 30.0f);
	Function_33(5, 15.0f, 30.0f);
	Function_33(6, 30.0f, 30.0f);
	Function_33(7, 30.0f, 30.0f);
	Function_33(8, 30.0f, 30.0f);
	Function_33(9, 30.0f, 30.0f);
	Function_33(10, 30.0f, 30.0f);
	Function_33(30, 15.0f, 30.0f);
	Function_31(1, 3, 10);
	Function_31(2, 4, 10);
	Function_31(6, 11, 4294967295);
	Function_31(7, 12, 4294967295);
	Function_31(8, 13, 4294967295);
	Function_31(9, 14, 4294967295);
	Function_31(10, 15, 4294967295);
	return;
}

void Function_31(int iParam0, int iParam1, int iParam2) //Position: 0x2D1D / 11549
{
	if (!Function_32(iParam0))
	{
		LOG_ERROR("Invalid CRIME_TYPE for setting up progressive crime details");
		return;
	}
	if (!Function_32(iParam1))
	{
		LOG_ERROR("Invalid CRIME_TYPE for setting up progressive crime definitions");
		return;
	}
	if (!Global_26998[iParam018].f_20 != 1 && !Global_26998[iParam018].f_20 != 3)
	{
		LOG_ERROR("Attempting to set progressive crime details for non-progressive crime");
		return;
	}
	Global_26998[iParam018].f_52 = iParam1;
	Global_26998[iParam018].f_56 = iParam2;
	return;
}

bool Function_32(int iParam0) //Position: 0x2E3B / 11835
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

void Function_33(int iParam0, float fParam1, int iParam2) //Position: 0x2E51 / 11857
{
	if (!Function_32(iParam0))
	{
		LOG_ERROR("Invalid CRIME_TYPE for setting up accrual crime details");
		return;
	}
	if (!Global_26998[iParam018].f_20 != 2 && !Global_26998[iParam018].f_20 != 3)
	{
		LOG_ERROR("Attempting to set accrual crime details for non-accrual crime");
		return;
	}
	Global_26998[iParam018].f_64 = fParam1;
	Global_26998[iParam018].f_68 = iParam2;
	return;
}

void Function_34(int iParam0, int iParam1) //Position: 0x2F14 / 12052
{
	if (!Function_32(iParam0))
	{
		LOG_ERROR("Invalid CRIME_TYPE for setting up delayed crime details");
		return;
	}
	if (!Global_26998[iParam018].f_20 != 4)
	{
		LOG_ERROR("Attempting to set delayed crime details for non-delyaed crime");
		return;
	}
	Global_26998[iParam018].f_60 = iParam1;
	return;
}

void Function_35(int iParam0, char* cParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6) //Position: 0x2FBF / 12223
{
	if (!Function_32(iParam0))
	{
		LOG_ERROR("Invalid CRIME_TYPE for setting up crime definitions");
		return;
	}
	if (!Function_36(iParam2))
	{
		LOG_ERROR("Invalid CRIME_STYLE for setting up crime definitions");
		return;
	}
	Global_26998[iParam018] = iParam0;
	strcpy(&Global_26998[iParam018] + 4, cParam1, 16);
	Global_26998[iParam018].f_20 = iParam2;
	Global_26998[iParam018].f_24 = iParam3;
	Global_26998[iParam018].f_32 = fParam4;
	if (bParam5)
	{
		Global_26998[iParam018].f_28 = iParam3;
	}
	Global_26998[iParam018].f_44 = iParam6;
	Global_26998[iParam018].f_36 = 1;
	Global_26998[iParam018].f_40 = 1;
	PRINTSTRING("New Crime Defined: ");
	PRINTSTRING(&Global_26998[iParam018] + 4);
	PRINTNL();
}

bool Function_36(int iParam0) //Position: 0x30E0 / 12512
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		return 0;
	}
	return 1;
}

void Function_37() //Position: 0x30F5 / 12533
{
	Function_38(0, 8, 4, 223);
	Function_38(1, 10, 6, 224);
	return;
}

void Function_38(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x310D / 12557
{
	if (!Function_39(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	if (!IS_FACTION_VALID(iParam1))
	{
		LOG_ERROR("Invalid law faction for Setting up Law Enforcement");
		return;
	}
	if (!IS_FACTION_VALID(iParam2))
	{
		LOG_ERROR("Invalid law faction for Setting up Law Enforcement");
		return;
	}
	(*&Global_26316 + 104)[iParam0] = iParam1;
	(*&Global_26316 + 120)[iParam0] = iParam2;
	(*&Global_26401 + 2220)[iParam0] = iParam3;
}

bool Function_39(int iParam0) //Position: 0x3201 / 12801
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_40() //Position: 0x3216 / 12822
{
	int iVar0;
	
	LOG_MESSAGE("Creating Formations Layout");
	Global_26120 = CREATE_LAYOUT("Formations");
	iVar0 = 0;
	while (iVar0 < 14)
	{
		Global_26121[iVar0] = Function_41(iVar0);
		iVar0++;
	}
	return;
}

var Function_41(bool bParam0) //Position: 0x326E / 12910
{
	vector3 vVar0[20];
	bool bVar61;
	int iVar62;
	int iVar63;
	char* cVar64;
	bool bVar65;
	
	bVar61 = bParam0;
	switch (bVar61)
	{
		case 0x00000000:
			LOG_MESSAGE("Creating FORM_HORIZ_LINE");
			cVar64 = "FORM_HORIZ_LINE";
			iVar63 = 16;
			vVar0[03] = 0.0f;
			vVar0[13] = 1.0f;
			vVar0[23] = -1.0f;
			vVar0[33] = 2.0f;
			vVar0[43] = -2.0f;
			vVar0[53] = 3.0f;
			vVar0[63] = -3.0f;
			vVar0[73] = 4.0f;
			vVar0[83] = -4.0f;
			vVar0[93] = 5.0f;
			vVar0[103] = -5.0f;
			vVar0[113] = 6.0f;
			vVar0[123] = -6.0f;
			vVar0[133] = 7.0f;
			vVar0[143] = -7.0f;
			vVar0[153] = 8.0f;
			break;
		
		case 0x00000001:
			LOG_MESSAGE("Creating FORM_VERT_LINE");
			cVar64 = "FORM_VERT_LINE";
			iVar63 = 16;
			vVar0[03].f_8 = 0.0f;
			vVar0[13].f_8 = 1.0f;
			vVar0[23].f_8 = 2.0f;
			vVar0[33].f_8 = 3.0f;
			vVar0[43].f_8 = 4.0f;
			vVar0[53].f_8 = 5.0f;
			vVar0[63].f_8 = 6.0f;
			vVar0[73].f_8 = 7.0f;
			vVar0[83].f_8 = 8.0f;
			vVar0[93].f_8 = 9.0f;
			vVar0[103].f_8 = 10.0f;
			vVar0[113].f_8 = 11.0f;
			vVar0[123].f_8 = 12.0f;
			vVar0[133].f_8 = 13.0f;
			vVar0[143].f_8 = 14.0f;
			vVar0[153].f_8 = 15.0f;
			break;
		
		case 0x00000002:
			LOG_MESSAGE("Creating FORM_RING");
			cVar64 = "nFORM_RING";
			iVar63 = 16;
			vVar0[03] = 1.0f;
			vVar0[03].f_8 = 0.0f;
			vVar0[13] = -0,75f;
			vVar0[13].f_8 = 0,75f;
			vVar0[23] = -0,75f;
			vVar0[23].f_8 = -0,75f;
			vVar0[33] = 0,75f;
			vVar0[33].f_8 = 0,75f;
			vVar0[43] = 0,75f;
			vVar0[43].f_8 = -0,75f;
			vVar0[53] = -1.0f;
			vVar0[53].f_8 = 0.0f;
			vVar0[63] = 0.0f;
			vVar0[63].f_8 = -1.0f;
			vVar0[73] = 0.0f;
			vVar0[73].f_8 = 1.0f;
			vVar0[83] = -0,35f;
			vVar0[83].f_8 = -0,85f;
			vVar0[93] = 0,85f;
			vVar0[93].f_8 = 0,35f;
			vVar0[103] = -0,85f;
			vVar0[103].f_8 = 0,35f;
			vVar0[113] = 0,35f;
			vVar0[113].f_8 = -0,85f;
			vVar0[123] = -0,35f;
			vVar0[123].f_8 = 0,85f;
			vVar0[133] = 0,85f;
			vVar0[133].f_8 = -0,35f;
			vVar0[143] = -0,85f;
			vVar0[143].f_8 = -0,35f;
			vVar0[153] = 0,35f;
			vVar0[153].f_8 = 0,85f;
			break;
		
		case 0x00000003:
			LOG_MESSAGE("Creating FORM_BOX");
			cVar64 = "FORM_BOX";
			iVar63 = 16;
			vVar0[03] = 1.0f;
			vVar0[03].f_8 = -1.0f;
			vVar0[13] = 1.0f;
			vVar0[13].f_8 = 1.0f;
			vVar0[23] = -1.0f;
			vVar0[23].f_8 = 1.0f;
			vVar0[33] = -1.0f;
			vVar0[33].f_8 = -1.0f;
			vVar0[43] = 0.0f;
			vVar0[43].f_8 = -0,7f;
			vVar0[53] = 0.0f;
			vVar0[53].f_8 = 0,7f;
			vVar0[63] = -0,7f;
			vVar0[63].f_8 = 0.0f;
			vVar0[73] = 0,7f;
			vVar0[73].f_8 = 0.0f;
			vVar0[83] = 0,5f;
			vVar0[83].f_8 = -0,85f;
			vVar0[93] = -0,5f;
			vVar0[93].f_8 = 0,85f;
			vVar0[103] = -0,5f;
			vVar0[103].f_8 = -0,85f;
			vVar0[113] = 0,5f;
			vVar0[113].f_8 = 0,85f;
			vVar0[123] = 0,55f;
			vVar0[123].f_8 = -0,5f;
			vVar0[133] = -0,85f;
			vVar0[133].f_8 = 0,5f;
			vVar0[143] = -0,85f;
			vVar0[143].f_8 = -0,5f;
			vVar0[153] = 0,85f;
			vVar0[153].f_8 = 0,5f;
			break;
		
		case 0x00000004:
			LOG_MESSAGE("Creating FORM_WEDGE");
			cVar64 = "FORM_WEDGE";
			iVar63 = 16;
			vVar0[03] = 0.0f;
			vVar0[03].f_8 = 0.0f;
			vVar0[13] = 1.0f;
			vVar0[13].f_8 = -0,5f;
			vVar0[23] = 1.0f;
			vVar0[23].f_8 = 0,5f;
			vVar0[33] = 0.0f;
			vVar0[33].f_8 = 2.0f;
			vVar0[43] = -1.0f;
			vVar0[43].f_8 = 2.0f;
			vVar0[53] = 1.0f;
			vVar0[53].f_8 = 2.0f;
			vVar0[63] = -0,5f;
			vVar0[63].f_8 = 3.0f;
			vVar0[73] = 0,5f;
			vVar0[73].f_8 = 3.0f;
			vVar0[83] = -1,5f;
			vVar0[83].f_8 = 3.0f;
			vVar0[93] = 1,5f;
			vVar0[93].f_8 = 3.0f;
			vVar0[103] = 0.0f;
			vVar0[103].f_8 = 4.0f;
			vVar0[113] = -1.0f;
			vVar0[113].f_8 = 4.0f;
			vVar0[123] = 1.0f;
			vVar0[123].f_8 = 4.0f;
			vVar0[133] = -2.0f;
			vVar0[133].f_8 = 4.0f;
			vVar0[143] = 2.0f;
			vVar0[143].f_8 = 4.0f;
			vVar0[153] = 0.0f;
			vVar0[153].f_8 = 5.0f;
			break;
		
		case 0x00000005:
			LOG_MESSAGE("Creating FORM_RIGHT");
			cVar64 = "FORM_RIGHT";
			iVar63 = 16;
			vVar0[03] = 0.0f;
			vVar0[03].f_8 = 0.0f;
			vVar0[13] = 1.0f;
			vVar0[13].f_8 = 0.0f;
			vVar0[23] = 1.0f;
			vVar0[23].f_8 = 1.0f;
			vVar0[33] = 1.0f;
			vVar0[33].f_8 = -1.0f;
			vVar0[43] = 2.0f;
			vVar0[43].f_8 = 0,5f;
			vVar0[53] = 2.0f;
			vVar0[53].f_8 = -0,5f;
			vVar0[63] = 0,5f;
			vVar0[63].f_8 = 2.0f;
			vVar0[73] = 0,5f;
			vVar0[73].f_8 = -2.0f;
			vVar0[83] = 3.0f;
			vVar0[83].f_8 = 0.0f;
			vVar0[93] = 3.0f;
			vVar0[93].f_8 = 1.0f;
			vVar0[103] = 3.0f;
			vVar0[103].f_8 = -1.0f;
			vVar0[113] = 2.0f;
			vVar0[113].f_8 = 1,5f;
			vVar0[123] = 2.0f;
			vVar0[123].f_8 = -1,5f;
			vVar0[133] = 1,5f;
			vVar0[133].f_8 = 2,5f;
			vVar0[143] = 2.0f;
			vVar0[143].f_8 = -2,5f;
			vVar0[153] = 4.0f;
			vVar0[153].f_8 = 0.0f;
			break;
		
		case 0x00000006:
			LOG_MESSAGE("Creating FORM_LEFT");
			cVar64 = "nFORM_LEFT";
			iVar63 = 16;
			vVar0[03] = 0.0f;
			vVar0[03].f_8 = 0.0f;
			vVar0[13] = -1.0f;
			vVar0[13].f_8 = 0.0f;
			vVar0[23] = -1.0f;
			vVar0[23].f_8 = 1.0f;
			vVar0[33] = -1.0f;
			vVar0[33].f_8 = -1.0f;
			vVar0[43] = -2.0f;
			vVar0[43].f_8 = 0,5f;
			vVar0[53] = -2.0f;
			vVar0[53].f_8 = -0,5f;
			vVar0[63] = -0,5f;
			vVar0[63].f_8 = 2.0f;
			vVar0[73] = -0,5f;
			vVar0[73].f_8 = -2.0f;
			vVar0[83] = -3.0f;
			vVar0[83].f_8 = 0.0f;
			vVar0[93] = -3.0f;
			vVar0[93].f_8 = 1.0f;
			vVar0[103] = -3.0f;
			vVar0[103].f_8 = -1.0f;
			vVar0[113] = -2.0f;
			vVar0[113].f_8 = 1,5f;
			vVar0[123] = -2.0f;
			vVar0[123].f_8 = -1,5f;
			vVar0[133] = -1,5f;
			vVar0[133].f_8 = 2,5f;
			vVar0[143] = -2.0f;
			vVar0[143].f_8 = -2,5f;
			vVar0[153] = -4.0f;
			vVar0[153].f_8 = 0.0f;
			break;
		
		case 0x00000007:
			LOG_MESSAGE("Creating FORM_RANDOM");
			cVar64 = "FORM_RANDOM";
			iVar63 = 16;
			vVar0[03] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[03].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[13] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[13].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[23] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[23].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[33] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[33].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[43] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[43].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[53] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[53].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[63] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[63].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[73] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[73].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[83] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[83].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[93] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[93].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[103] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[103].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[113] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[113].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[123] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[123].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[133] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[133].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[143] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[143].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[153] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			vVar0[153].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			break;
		
		case 0x0000000E:
			LOG_MESSAGE("Creating FORM_NONE");
			cVar64 = "nFORM_NONE";
			iVar63 = 16;
			vVar0[03] = { 0.0f, 0.0f, 0.0f };
			vVar0[13] = { 0.0f, 0.0f, 0.0f };
			vVar0[23] = { 0.0f, 0.0f, 0.0f };
			vVar0[33] = { 0.0f, 0.0f, 0.0f };
			vVar0[43] = { 0.0f, 0.0f, 0.0f };
			vVar0[53] = { 0.0f, 0.0f, 0.0f };
			vVar0[63] = { 0.0f, 0.0f, 0.0f };
			vVar0[73] = { 0.0f, 0.0f, 0.0f };
			vVar0[83] = { 0.0f, 0.0f, 0.0f };
			vVar0[93] = { 0.0f, 0.0f, 0.0f };
			vVar0[103] = { 0.0f, 0.0f, 0.0f };
			vVar0[113] = { 0.0f, 0.0f, 0.0f };
			vVar0[123] = { 0.0f, 0.0f, 0.0f };
			vVar0[133] = { 0.0f, 0.0f, 0.0f };
			vVar0[143] = { 0.0f, 0.0f, 0.0f };
			vVar0[153] = { 0.0f, 0.0f, 0.0f };
			break;
		
		case 0x00000009:
			LOG_MESSAGE("Creating FORM_LINE");
			cVar64 = "nFORM_LINE";
			iVar63 = 12;
			vVar0[03] = { 0.0f, 0.0f, 0.0f };
			vVar0[13] = { 2.0f, 0.0f, 0.0f };
			vVar0[23] = { -2.0f, 0.0f, 0.0f };
			vVar0[33] = { 4.0f, 0.0f, 0.0f };
			vVar0[43] = { -4.0f, 0.0f, 0.0f };
			vVar0[53] = { 6.0f, 0.0f, 0.0f };
			vVar0[63] = { -6.0f, 0.0f, 0.0f };
			vVar0[73] = { 8.0f, 0.0f, 0.0f };
			vVar0[83] = { -8.0f, 0.0f, 0.0f };
			vVar0[93] = { 10.0f, 0.0f, 0.0f };
			vVar0[103] = { -10.0f, 0.0f, 0.0f };
			vVar0[113] = { 12.0f, 0.0f, 0.0f };
			break;
		
		case 0x00000008:
			LOG_MESSAGE("Creating FORM_COLUMN");
			cVar64 = "FORM_COLUMN";
			iVar63 = 12;
			vVar0[03] = { 0.0f, 0.0f, 0.0f };
			vVar0[13] = { 0.0f, 0.0f, 3.0f };
			vVar0[23] = { 0.0f, 0.0f, 6.0f };
			vVar0[33] = { 0.0f, 0.0f, 9.0f };
			vVar0[43] = { 0.0f, 0.0f, 12.0f };
			vVar0[53] = { 0.0f, 0.0f, 15.0f };
			vVar0[63] = { 0.0f, 0.0f, 18.0f };
			vVar0[73] = { 0.0f, 0.0f, 21.0f };
			vVar0[83] = { 0.0f, 0.0f, 24.0f };
			vVar0[93] = { 0.0f, 0.0f, 27.0f };
			vVar0[103] = { 0.0f, 0.0f, 30.0f };
			vVar0[113] = { 0.0f, 0.0f, 33.0f };
			break;
		
		case 0x0000000A:
			LOG_MESSAGE("Creating FORM_PACK");
			cVar64 = "nFORM_PACK";
			iVar63 = 12;
			vVar0[03] = { 0.0f, 0.0f, 0.0f };
			vVar0[13] = { 1,5f, 0.0f, 1.0f };
			vVar0[23] = { -1,5f, 0.0f, 1.0f };
			vVar0[33] = { 3.0f, 0.0f, 2.0f };
			vVar0[43] = { -3.0f, 0.0f, 2.0f };
			vVar0[53] = { 2,5f, 0.0f, 0,5f };
			vVar0[63] = { -2,5f, 0.0f, 0,5f };
			vVar0[73] = { 0.0f, 0.0f, 1,5f };
			vVar0[83] = { 1.0f, 0.0f, 2,5f };
			vVar0[93] = { -1.0f, 0.0f, 2,5f };
			vVar0[103] = { -1.0f, 0.0f, 6.0f };
			vVar0[113] = { 1.0f, 0.0f, 6.0f };
			break;
		
		case 0x0000000B:
			LOG_MESSAGE("Creating FORM_REGIMENT");
			cVar64 = "FORM_REGIMENT";
			iVar63 = 20;
			vVar0[03] = { 0.0f, 0.0f, 0.0f };
			vVar0[13] = { 1.0f, 0.0f, 1.0f };
			vVar0[23] = { -1.0f, 0.0f, 1.0f };
			vVar0[33] = { 2.0f, 0.0f, 2.0f };
			vVar0[43] = { 0.0f, 0.0f, 2.0f };
			vVar0[53] = { -2.0f, 0.0f, 2.0f };
			vVar0[63] = { 2.0f, 0.0f, 3.0f };
			vVar0[73] = { 0.0f, 0.0f, 3.0f };
			vVar0[83] = { -2.0f, 0.0f, 3.0f };
			vVar0[93] = { 2.0f, 0.0f, 4.0f };
			vVar0[103] = { 0.0f, 0.0f, 4.0f };
			vVar0[113] = { -2.0f, 0.0f, 4.0f };
			vVar0[123] = { 2.0f, 0.0f, 5.0f };
			vVar0[133] = { 0.0f, 0.0f, 5.0f };
			vVar0[143] = { -2.0f, 0.0f, 5.0f };
			vVar0[153] = { 2.0f, 0.0f, 6.0f };
			vVar0[163] = { 0.0f, 0.0f, 6.0f };
			vVar0[173] = { -2.0f, 0.0f, 6.0f };
			vVar0[183] = { 1.0f, 0.0f, 7.0f };
			vVar0[193] = { -1.0f, 0.0f, 7.0f };
			break;
		
		case 0x0000000C:
			LOG_MESSAGE("Creating FORM_TWO_COLUMNS");
			cVar64 = "FORM_TWO_COLUMNS";
			iVar63 = 20;
			vVar0[03] = { 0.0f, 0.0f, 0.0f };
			vVar0[13] = { -1,5f, 0.0f, 0.0f };
			vVar0[23] = { 0.0f, 0.0f, 1,5f };
			vVar0[33] = { -1,5f, 0.0f, 1,5f };
			vVar0[43] = { 0.0f, 0.0f, 3.0f };
			vVar0[53] = { -1,5f, 0.0f, 3.0f };
			vVar0[63] = { 0.0f, 0.0f, 4,5f };
			vVar0[73] = { -1,5f, 0.0f, 4,5f };
			vVar0[83] = { 0.0f, 0.0f, 6.0f };
			vVar0[93] = { -1,5f, 0.0f, 6.0f };
			vVar0[103] = { 0.0f, 0.0f, 7,5f };
			vVar0[113] = { -1,5f, 0.0f, 7,5f };
			vVar0[123] = { 0.0f, 0.0f, 9.0f };
			vVar0[133] = { -1,5f, 0.0f, 9.0f };
			vVar0[143] = { 0.0f, 0.0f, 10,5f };
			vVar0[153] = { -1,5f, 0.0f, 10,5f };
			vVar0[163] = { 0.0f, 0.0f, 12.0f };
			vVar0[173] = { -1,5f, 0.0f, 12.0f };
			vVar0[183] = { 0.0f, 0.0f, 13,5f };
			vVar0[193] = { -1,5f, 0.0f, 13,5f };
			break;
		
		case 0x0000000D:
			LOG_MESSAGE("Creating FORM_THREE_COLUMNS");
			cVar64 = "FORM_THREE_COLUMNS";
			iVar63 = 18;
			vVar0[03] = { 0.0f, 0.0f, 0.0f };
			vVar0[13] = { -1,5f, 0.0f, 0.0f };
			vVar0[23] = { -3.0f, 0.0f, 0.0f };
			vVar0[33] = { 0.0f, 0.0f, 1,5f };
			vVar0[43] = { -1,5f, 0.0f, 1,5f };
			vVar0[53] = { -3.0f, 0.0f, 1,5f };
			vVar0[63] = { 0.0f, 0.0f, 3.0f };
			vVar0[73] = { -1,5f, 0.0f, 3.0f };
			vVar0[83] = { 3.0f, 0.0f, 3.0f };
			vVar0[93] = { 0.0f, 0.0f, 4,5f };
			vVar0[103] = { -1,5f, 0.0f, 4,5f };
			vVar0[113] = { -3.0f, 0.0f, 4,5f };
			vVar0[123] = { 0.0f, 0.0f, 6.0f };
			vVar0[133] = { -1,5f, 0.0f, 6.0f };
			vVar0[143] = { 3.0f, 0.0f, 10,6f };
			vVar0[153] = { 0.0f, 0.0f, 7,5f };
			vVar0[163] = { -1,5f, 0.0f, 7,5f };
			vVar0[173] = { -3.0f, 0.0f, 7,5f };
			break;
		
		default:
			LOG_WARNING("Attempting to create a formation of non-standard type!");
			break;
	}
	bVar65 = CREATE_FORMATION_IN_LAYOUT(Global_26120, cVar64, iVar63);
	if (!IS_OBJECT_VALID(bVar65))
	{
		LOG_ERROR("Attempting to create formation path, not valid!");
		return "";
	}
	iVar62 = 0;
	while (iVar62 < (iVar63 - 1))
	{
		ADD_FORMATION_LOCATION(bVar65, &(vVar0[iVar623]));
		iVar62++;
	}
	LOG_MESSAGE("Path Created");
	PRINTSTRING(GET_OBJECT_NAME(bVar65));
	PRINTSTRING("");
	PRINTSTRING("Number of Points");
	PRINTINT(GET_NUM_FORMATION_LOCATIONS(bVar65));
	PRINTNL();
	return bVar65;
}

