//Decompiled with MagicRDR v1.0
//Function Count : 43
//Statics Count : 0
//Natives Count : 80
//Parameters Count : 0

#region Local Var
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	Function_41();
	DISABLE_ACTOR_REFCOUNTING(GET_THIS_SCRIPT_ID());
	uVar0 = CREATE_LAYOUT("AiSpeech");
	AI_SPEECH_REGISTER_EVENT(1, "BumpedIntoMe");
	AI_SPEECH_REGISTER_EVENT(2, "CombatHitMe");
	AI_SPEECH_REGISTER_EVENT(3, "CombatKilledAlly");
	AI_SPEECH_REGISTER_EVENT(6, "CombatWeaponDrawn");
	AI_SPEECH_REGISTER_EVENT(11, "HandsUp");
	AI_SPEECH_REGISTER_EVENT(13, "MovingToCover");
	AI_SPEECH_REGISTER_EVENT(15, "NearMiss");
	AI_SPEECH_REGISTER_EVENT(16, "Random");
	AI_SPEECH_REGISTER_EVENT(18, "SawDeath");
	AI_SPEECH_REGISTER_EVENT(19, "VisionBody");
	AI_SPEECH_REGISTER_EVENT(20, "Scared");
	AI_SPEECH_REGISTER_EVENT(21, "Shooting");
	AI_SPEECH_REGISTER_EVENT(22, "Spectate");
	AI_SPEECH_REGISTER_EVENT(24, "VisionFound");
	AI_SPEECH_REGISTER_EVENT(25, "VisionLost");
	AI_SPEECH_REGISTER_TAGS_BEGIN(32);
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
	AI_SPEECH_REGISTER_TAG(4,344025E-44f, "IsZombie", 1, 0);
	AI_SPEECH_REGISTER_TAGS_END();
	uVar1 = CREATE_AI_SPEECH_PACKAGE_IN_LAYOUT(&uVar0, "Default");
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 16, 98, 1.0f, 1.0f, 1, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 3);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 29);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 19);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 24);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 16, 82, 1,25f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 14);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 3);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 29);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 19);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 1, 14, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 8);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 27);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 15, 61, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 29);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 16, 84, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 18);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 16, 84, 1,15f, 1.0f, 1, 83);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 18);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 1);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 11);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 13, 63, 0,5f, 2.0f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 29);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 13, 104, 0,5f, 2.0f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 14);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 19);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 29);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 13, 84, 1,15f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 20);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 29);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 13, 84, 1,5f, 1.0f, 1, 83);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 20);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 29);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 1);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 11);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 3, 107, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 3);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 29);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 18, 16, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 8);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 16, 22, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 3);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 25);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 28);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 24, 109, 1,25f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 3);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 29);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 24, 94, 1,25f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 3);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 29);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 25, 22, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 3);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 29);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 2, 26, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 3);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 19);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 21, 27, 1,5f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 3);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 29);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 16, 72, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 23);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 18, 60, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 1);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 18, 61, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 2);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 18, 60, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 2);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 22, 162, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 9);
	uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 19, 61, 1f, 1f, 0, 4294967295);
	AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 9);
	if (Function_39())
	{
		uVar2 = AI_SPEECH_ADD_PHRASE(&uVar1, 16, 659, 1.0f, 1,5f, 1, 4294967295);
		AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 3);
		AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 29);
		AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 19);
		AI_SPEECH_ADD_TAG_FOR_PHRASE(&uVar1, &uVar2, 31);
	}
	AI_SPEECH_SET_DEFAULT_PACKAGE(&uVar1);
	Function_36();
	Function_29();
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
	SPEECH_CONTEXT_INIT_DATA(660 + 1);
	Function_28();
	Function_27();
	Function_26();
	Function_25();
	Function_24();
	Function_23();
	Function_20(Function_22(), Function_21());
	Function_19();
	Function_18();
	Function_17();
	Function_16();
	Function_15();
	Function_14();
	Function_13();
	Function_12();
	Function_11();
	Function_10();
	if (Function_39())
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(659, true);
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(660, true);
		SPEECH_CONTEXT_ADD_CHILD(41, 660, 90.0f);
		SPEECH_CONTEXT_ADD_CHILD(23, 660, 90.0f);
	}
	else
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(659, false);
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(660, false);
	}
	SPEECH_CONTEXT_SET_TARGET_INITIAL_FACTION(659, 32);
	Function_5();
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
	Function_4();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xA23 / 2595
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (Function_3(3) == 10)
	{
		iVar0 = 2;
	}
	iVar1 = Function_2(3);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(6);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(0);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(1);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(8);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(4);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(12);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(5);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(2);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(30);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(31);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(32);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(33);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(34);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(35);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(36);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(37);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(38);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(39);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(40);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(41);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(42);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(43);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(44);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(45);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(46);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(47);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(48);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(49);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(50);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(51);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(7);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_2(9);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	return;
}

int Function_2(bool bParam0) //Position: 0xC82 / 3202
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

int Function_3(int iParam0) //Position: 0xD76 / 3446
{
	if (0 | Global_53524.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_4() //Position: 0xD9E / 3486
{
	(*&Global_9917[89] + 24)[1] = 178.0f;
	(*&Global_9917[89] + 24)[0] = 155.0f;
	Global_9917[89][1] = 80.0f;
	Global_9917[89][0] = 100.0f;
	(*&Global_9917[89] + 48)[1] = 4;
	(*&Global_9917[89] + 48)[0] = 5;
	(*&Global_9917[99] + 24)[1] = 437.0f;
	(*&Global_9917[99] + 24)[0] = 380.0f;
	Global_9917[99][1] = 80.0f;
	Global_9917[99][0] = 100.0f;
	(*&Global_9917[99] + 48)[1] = 5;
	(*&Global_9917[99] + 48)[0] = 10;
	(*&Global_9917[109] + 24)[1] = 161.0f;
	(*&Global_9917[109] + 24)[0] = 140.0f;
	Global_9917[109][1] = 80.0f;
	Global_9917[109][0] = 100.0f;
	(*&Global_9917[109] + 48)[1] = 3;
	(*&Global_9917[109] + 48)[0] = 4;
	(*&Global_9917[139] + 24)[1] = 224.0f;
	(*&Global_9917[139] + 24)[0] = 195.0f;
	Global_9917[139][1] = 90.0f;
	Global_9917[139][0] = 100.0f;
	(*&Global_9917[139] + 48)[1] = 2;
	(*&Global_9917[139] + 48)[0] = 7;
	(*&Global_9917[149] + 24)[1] = 150.0f;
	(*&Global_9917[149] + 24)[0] = 130.0f;
	Global_9917[149][1] = 17.0f;
	Global_9917[149][0] = 82.0f;
	(*&Global_9917[149] + 48)[1] = 8;
	(*&Global_9917[149] + 48)[0] = 14;
	(*&Global_9917[169] + 24)[1] = 385.0f;
	(*&Global_9917[169] + 24)[0] = 335.0f;
	Global_9917[169][1] = 78.0f;
	Global_9917[169][0] = 86.0f;
	(*&Global_9917[169] + 48)[1] = 4;
	(*&Global_9917[169] + 48)[0] = 12;
	(*&Global_9917[189] + 24)[1] = 161.0f;
	(*&Global_9917[189] + 24)[0] = 140.0f;
	Global_9917[189][1] = 80.0f;
	Global_9917[189][0] = 100.0f;
	(*&Global_9917[189] + 48)[1] = 5;
	(*&Global_9917[189] + 48)[0] = 9;
	(*&Global_9917[199] + 24)[1] = 460.0f;
	(*&Global_9917[199] + 24)[0] = 400.0f;
	Global_9917[199][1] = 34.0f;
	Global_9917[199][0] = 53.0f;
	(*&Global_9917[199] + 48)[1] = 10;
	(*&Global_9917[199] + 48)[0] = 16;
	(*&Global_9917[209] + 24)[1] = 546.0f;
	(*&Global_9917[209] + 24)[0] = 475.0f;
	Global_9917[209][1] = 77.0f;
	Global_9917[209][0] = 84.0f;
	(*&Global_9917[209] + 48)[1] = 2;
	(*&Global_9917[209] + 48)[0] = 7;
	(*&Global_9917[219] + 24)[1] = 472.0f;
	(*&Global_9917[219] + 24)[0] = 410.0f;
	Global_9917[219][1] = 33.0f;
	Global_9917[219][0] = 58.0f;
	(*&Global_9917[219] + 48)[1] = 8;
	(*&Global_9917[219] + 48)[0] = 15;
	(*&Global_9917[239] + 24)[1] = 431.0f;
	(*&Global_9917[239] + 24)[0] = 375.0f;
	Global_9917[239][1] = 54.0f;
	Global_9917[239][0] = 86.0f;
	(*&Global_9917[239] + 48)[1] = 3;
	(*&Global_9917[239] + 48)[0] = 7;
	(*&Global_9917[249] + 24)[1] = 357.0f;
	(*&Global_9917[249] + 24)[0] = 310.0f;
	Global_9917[249][1] = 13.0f;
	Global_9917[249][0] = 15.0f;
	(*&Global_9917[249] + 48)[1] = 1;
	(*&Global_9917[249] + 48)[0] = 10;
	(*&Global_9917[259] + 24)[1] = 610.0f;
	(*&Global_9917[259] + 24)[0] = 530.0f;
	Global_9917[259][1] = 55.0f;
	Global_9917[259][0] = 67.0f;
	(*&Global_9917[259] + 48)[1] = 3;
	(*&Global_9917[259] + 48)[0] = 4;
	(*&Global_9917[269] + 24)[1] = 483.0f;
	(*&Global_9917[269] + 24)[0] = 420.0f;
	Global_9917[269][1] = 80.0f;
	Global_9917[269][0] = 90.0f;
	(*&Global_9917[269] + 48)[1] = 3;
	(*&Global_9917[269] + 48)[0] = 4;
	(*&Global_9917[279] + 24)[1] = 288.0f;
	(*&Global_9917[279] + 24)[0] = 250.0f;
	Global_9917[279][1] = 50.0f;
	Global_9917[279][0] = 70.0f;
	(*&Global_9917[279] + 48)[1] = 2;
	(*&Global_9917[279] + 48)[0] = 3;
	(*&Global_9917[289] + 24)[1] = 575.0f;
	(*&Global_9917[289] + 24)[0] = 500.0f;
	Global_9917[289][1] = 75.0f;
	Global_9917[289][0] = 87.0f;
	(*&Global_9917[289] + 48)[1] = 20;
	(*&Global_9917[289] + 48)[0] = 22;
	(*&Global_9917[299] + 24)[1] = 897.0f;
	(*&Global_9917[299] + 24)[0] = 780.0f;
	Global_9917[299][1] = 20.0f;
	Global_9917[299][0] = 40.0f;
	(*&Global_9917[299] + 48)[1] = 21;
	(*&Global_9917[299] + 48)[0] = 22;
	(*&Global_9917[309] + 24)[1] = 247.0f;
	(*&Global_9917[309] + 24)[0] = 215.0f;
	Global_9917[309][1] = 69.0f;
	Global_9917[309][0] = 78.0f;
	(*&Global_9917[309] + 48)[1] = 3;
	(*&Global_9917[309] + 48)[0] = 5;
	(*&Global_9917[319] + 24)[1] = 201.0f;
	(*&Global_9917[319] + 24)[0] = 175.0f;
	Global_9917[319][1] = 83.0f;
	Global_9917[319][0] = 93.0f;
	(*&Global_9917[319] + 48)[1] = 2;
	(*&Global_9917[319] + 48)[0] = 3;
	(*&Global_9917[329] + 24)[1] = 673.0f;
	(*&Global_9917[329] + 24)[0] = 585.0f;
	Global_9917[329][1] = 68.0f;
	Global_9917[329][0] = 80.0f;
	(*&Global_9917[329] + 48)[1] = 8;
	(*&Global_9917[329] + 48)[0] = 15;
	(*&Global_9917[339] + 24)[1] = 270.0f;
	(*&Global_9917[339] + 24)[0] = 235.0f;
	Global_9917[339][1] = 85.0f;
	Global_9917[339][0] = 92.0f;
	(*&Global_9917[339] + 48)[1] = 4;
	(*&Global_9917[339] + 48)[0] = 7;
	(*&Global_9917[349] + 24)[1] = 247.0f;
	(*&Global_9917[349] + 24)[0] = 215.0f;
	Global_9917[349][1] = 67.0f;
	Global_9917[349][0] = 93.0f;
	(*&Global_9917[349] + 48)[1] = 1;
	(*&Global_9917[349] + 48)[0] = 3;
	(*&Global_9917[359] + 24)[1] = 351.0f;
	(*&Global_9917[359] + 24)[0] = 305.0f;
	Global_9917[359][1] = 70.0f;
	Global_9917[359][0] = 85.0f;
	(*&Global_9917[359] + 48)[1] = 3;
	(*&Global_9917[359] + 48)[0] = 7;
	(*&Global_9917[369] + 24)[1] = 213.0f;
	(*&Global_9917[369] + 24)[0] = 185.0f;
	Global_9917[369][1] = 80.0f;
	Global_9917[369][0] = 90.0f;
	(*&Global_9917[369] + 48)[1] = 4;
	(*&Global_9917[369] + 48)[0] = 8;
	(*&Global_9917[379] + 24)[1] = 656.0f;
	(*&Global_9917[379] + 24)[0] = 570.0f;
	Global_9917[379][1] = 30.0f;
	Global_9917[379][0] = 35.0f;
	(*&Global_9917[379] + 48)[1] = 9;
	(*&Global_9917[379] + 48)[0] = 12;
	(*&Global_9917[389] + 24)[1] = 242.0f;
	(*&Global_9917[389] + 24)[0] = 210.0f;
	Global_9917[389][1] = 60.0f;
	Global_9917[389][0] = 75.0f;
	(*&Global_9917[389] + 48)[1] = 2;
	(*&Global_9917[389] + 48)[0] = 4;
	(*&Global_9917[399] + 24)[1] = 391.0f;
	(*&Global_9917[399] + 24)[0] = 340.0f;
	Global_9917[399][1] = 60.0f;
	Global_9917[399][0] = 75.0f;
	(*&Global_9917[399] + 48)[1] = 4;
	(*&Global_9917[399] + 48)[0] = 6;
	(*&Global_9917[409] + 24)[1] = 368.0f;
	(*&Global_9917[409] + 24)[0] = 320.0f;
	Global_9917[409][1] = 30.0f;
	Global_9917[409][0] = 40.0f;
	(*&Global_9917[409] + 48)[1] = 15;
	(*&Global_9917[409] + 48)[0] = 22;
	(*&Global_9917[419] + 24)[1] = 569.0f;
	(*&Global_9917[419] + 24)[0] = 495.0f;
	Global_9917[419][1] = 25.0f;
	Global_9917[419][0] = 40.0f;
	(*&Global_9917[419] + 48)[1] = 15;
	(*&Global_9917[419] + 48)[0] = 20;
	(*&Global_9917[429] + 24)[1] = 512.0f;
	(*&Global_9917[429] + 24)[0] = 445.0f;
	Global_9917[429][1] = 50.0f;
	Global_9917[429][0] = 75.0f;
	(*&Global_9917[429] + 48)[1] = 3;
	(*&Global_9917[429] + 48)[0] = 7;
	(*&Global_9917[439] + 24)[1] = 460.0f;
	(*&Global_9917[439] + 24)[0] = 400.0f;
	Global_9917[439][1] = 60.0f;
	Global_9917[439][0] = 75.0f;
	(*&Global_9917[439] + 48)[1] = 6;
	(*&Global_9917[439] + 48)[0] = 10;
	(*&Global_9917[449] + 24)[1] = 587.0f;
	(*&Global_9917[449] + 24)[0] = 510.0f;
	Global_9917[449][1] = 60.0f;
	Global_9917[449][0] = 75.0f;
	(*&Global_9917[449] + 48)[1] = 1;
	(*&Global_9917[449] + 48)[0] = 3;
	(*&Global_9917[459] + 24)[1] = 391.0f;
	(*&Global_9917[459] + 24)[0] = 340.0f;
	Global_9917[459][1] = 75.0f;
	Global_9917[459][0] = 90.0f;
	(*&Global_9917[459] + 48)[1] = 3;
	(*&Global_9917[459] + 48)[0] = 6;
	(*&Global_9917[469] + 24)[1] = 311.0f;
	(*&Global_9917[469] + 24)[0] = 270.0f;
	Global_9917[469][1] = 65.0f;
	Global_9917[469][0] = 80.0f;
	(*&Global_9917[469] + 48)[1] = 5;
	(*&Global_9917[469] + 48)[0] = 7;
	(*&Global_9917[479] + 24)[1] = 328.0f;
	(*&Global_9917[479] + 24)[0] = 285.0f;
	Global_9917[479][1] = 12.0f;
	Global_9917[479][0] = 15.0f;
	(*&Global_9917[479] + 48)[1] = 5;
	(*&Global_9917[479] + 48)[0] = 11;
	(*&Global_9917[489] + 24)[1] = 587.0f;
	(*&Global_9917[489] + 24)[0] = 510.0f;
	Global_9917[489][1] = 35.0f;
	Global_9917[489][0] = 50.0f;
	(*&Global_9917[489] + 48)[1] = 9;
	(*&Global_9917[489] + 48)[0] = 15;
	(*&Global_9917[579] + 24)[1] = 380.0f;
	(*&Global_9917[579] + 24)[0] = 330.0f;
	Global_9917[579][1] = 65.0f;
	Global_9917[579][0] = 85.0f;
	(*&Global_9917[579] + 48)[1] = 6;
	(*&Global_9917[579] + 48)[0] = 15;
	(*&Global_9917[29] + 24)[1] = 483.0f;
	(*&Global_9917[29] + 24)[0] = 420.0f;
	Global_9917[29][1] = 75.0f;
	Global_9917[29][0] = 100.0f;
	(*&Global_9917[29] + 48)[1] = 0;
	(*&Global_9917[29] + 48)[0] = 0;
	(*&Global_9917[529] + 24)[1] = 541.0f;
	(*&Global_9917[529] + 24)[0] = 470.0f;
	Global_9917[529][1] = 40.0f;
	Global_9917[529][0] = 71.0f;
	(*&Global_9917[529] + 48)[1] = 0;
	(*&Global_9917[529] + 48)[0] = 0;
	(*&Global_9917[539] + 24)[1] = 449.0f;
	(*&Global_9917[539] + 24)[0] = 390.0f;
	Global_9917[539][1] = 88.0f;
	Global_9917[539][0] = 95.0f;
	(*&Global_9917[539] + 48)[1] = 0;
	(*&Global_9917[539] + 48)[0] = 0;
	(*&Global_9917[549] + 24)[1] = 368.0f;
	(*&Global_9917[549] + 24)[0] = 320.0f;
	Global_9917[549][1] = 75.0f;
	Global_9917[549][0] = 90.0f;
	(*&Global_9917[549] + 48)[1] = 0;
	(*&Global_9917[549] + 48)[0] = 0;
	(*&Global_9917[509] + 24)[1] = 104.0f;
	(*&Global_9917[509] + 24)[0] = 90.0f;
	Global_9917[509][1] = 50.0f;
	Global_9917[509][0] = 60.0f;
	(*&Global_9917[509] + 48)[1] = 0;
	(*&Global_9917[509] + 48)[0] = 0;
	(*&Global_9917[79] + 24)[1] = 351.0f;
	(*&Global_9917[79] + 24)[0] = 305.0f;
	Global_9917[79][1] = 75.0f;
	Global_9917[79][0] = 85.0f;
	(*&Global_9917[79] + 48)[1] = 19;
	(*&Global_9917[79] + 48)[0] = 21;
	(*&Global_9917[499] + 24)[1] = 690.0f;
	(*&Global_9917[499] + 24)[0] = 600.0f;
	Global_9917[499][1] = 75.0f;
	Global_9917[499][0] = 85.0f;
	(*&Global_9917[499] + 48)[1] = 13;
	(*&Global_9917[499] + 48)[0] = 15;
	(*&Global_9917[559] + 24)[1] = 368.0f;
	(*&Global_9917[559] + 24)[0] = 320.0f;
	Global_9917[559][1] = 75.0f;
	Global_9917[559][0] = 85.0f;
	(*&Global_9917[559] + 48)[1] = 13;
	(*&Global_9917[559] + 48)[0] = 15;
	(*&Global_9917[19] + 24)[1] = 299.0f;
	(*&Global_9917[19] + 24)[0] = 260.0f;
	Global_9917[19][1] = 0.0f;
	Global_9917[19][0] = 0.0f;
	(*&Global_9917[19] + 48)[1] = 0;
	(*&Global_9917[19] + 48)[0] = 0;
	(*&Global_9917[49] + 24)[1] = 236.0f;
	(*&Global_9917[49] + 24)[0] = 205.0f;
	Global_9917[49][1] = 0.0f;
	Global_9917[49][0] = 0.0f;
	(*&Global_9917[49] + 48)[1] = 0;
	(*&Global_9917[49] + 48)[0] = 0;
	(*&Global_9917[39] + 24)[1] = 213.0f;
	(*&Global_9917[39] + 24)[0] = 185.0f;
	Global_9917[39][1] = 0.0f;
	Global_9917[39][0] = 0.0f;
	(*&Global_9917[39] + 48)[1] = 0;
	(*&Global_9917[39] + 48)[0] = 0;
	(*&Global_9917[229] + 24)[1] = 316.0f;
	(*&Global_9917[229] + 24)[0] = 275.0f;
	Global_9917[229][1] = 0.0f;
	Global_9917[229][0] = 0.0f;
	(*&Global_9917[229] + 48)[1] = 0;
	(*&Global_9917[229] + 48)[0] = 0;
	(*&Global_9917[69] + 24)[1] = 690.0f;
	(*&Global_9917[69] + 24)[0] = 600.0f;
	Global_9917[69][1] = 0.0f;
	Global_9917[69][0] = 0.0f;
	(*&Global_9917[69] + 48)[1] = 0;
	(*&Global_9917[69] + 48)[0] = 0;
	(*&Global_9917[59] + 24)[1] = 196.0f;
	(*&Global_9917[59] + 24)[0] = 170.0f;
	Global_9917[59][1] = 0.0f;
	Global_9917[59][0] = 0.0f;
	(*&Global_9917[59] + 48)[1] = 0;
	(*&Global_9917[59] + 48)[0] = 0;
	(*&Global_9917[119] + 24)[1] = 253.0f;
	(*&Global_9917[119] + 24)[0] = 220.0f;
	Global_9917[119][1] = 0.0f;
	Global_9917[119][0] = 0.0f;
	(*&Global_9917[119] + 48)[1] = 0;
	(*&Global_9917[119] + 48)[0] = 0;
	(*&Global_9917[179] + 24)[1] = 339.0f;
	(*&Global_9917[179] + 24)[0] = 295.0f;
	Global_9917[179][1] = 0.0f;
	Global_9917[179][0] = 0.0f;
	(*&Global_9917[179] + 48)[1] = 0;
	(*&Global_9917[179] + 48)[0] = 0;
	(*&Global_9917[159] + 24)[1] = 322.0f;
	(*&Global_9917[159] + 24)[0] = 280.0f;
	Global_9917[159][1] = 0.0f;
	Global_9917[159][0] = 0.0f;
	(*&Global_9917[159] + 48)[1] = 0;
	(*&Global_9917[159] + 48)[0] = 0;
	(*&Global_9917[129] + 24)[1] = 414.0f;
	(*&Global_9917[129] + 24)[0] = 360.0f;
	Global_9917[129][1] = 0.0f;
	Global_9917[129][0] = 0.0f;
	(*&Global_9917[129] + 48)[1] = 0;
	(*&Global_9917[129] + 48)[0] = 0;
	(*&Global_9917[569] + 24)[1] = 368.0f;
	(*&Global_9917[569] + 24)[0] = 320.0f;
	Global_9917[569][1] = 0.0f;
	Global_9917[569][0] = 0.0f;
	(*&Global_9917[569] + 48)[1] = 0;
	(*&Global_9917[569] + 48)[0] = 0;
	(*&Global_9917[519] + 24)[1] = 414.0f;
	(*&Global_9917[519] + 24)[0] = 360.0f;
	Global_9917[519][1] = 0.0f;
	Global_9917[519][0] = 0.0f;
	(*&Global_9917[519] + 48)[1] = 0;
	(*&Global_9917[519] + 48)[0] = 0;
	return;
}

void Function_5() //Position: 0x2146 / 8518
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_6(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

int Function_6(var uParam0, bool bParam1) //Position: 0x2178 / 8568
{
	int iVar0;
	
	iVar0 = Function_8(uParam0);
	if (!Function_7(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_7(int iParam0) //Position: 0x21B6 / 8630
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_8(int iParam0) //Position: 0x21CD / 8653
{
	if (!Function_9(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_9(int iParam0) //Position: 0x21E7 / 8679
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_10() //Position: 0x21FD / 8701
{
	SPEECH_CONTEXT_SET_PLAYER_IDENTITY_RESTRICTION(46, 0);
	SPEECH_CONTEXT_SET_PLAYER_IDENTITY_RESTRICTION(36, 0);
	SPEECH_CONTEXT_SET_PLAYER_IDENTITY_RESTRICTION(37, 0);
	SPEECH_CONTEXT_SET_PLAYER_IDENTITY_RESTRICTION(13, 0);
	SPEECH_CONTEXT_SET_PLAYER_IDENTITY_RESTRICTION(658, 0);
	SPEECH_CONTEXT_SET_PLAYER_IDENTITY_RESTRICTION(102, 0);
	SPEECH_CONTEXT_SET_PLAYER_IDENTITY_RESTRICTION(55, 0);
	return;
}

void Function_11() //Position: 0x222E / 8750
{
	SPEECH_CONTEXT_ADD_CHILD(381, 378, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(381, 379, 90.0f);
	SPEECH_CONTEXT_SET_ETHNICITY_RESTRICTION(379, 3);
	return;
}

void Function_12() //Position: 0x2257 / 8791
{
	SPEECH_CONTEXT_ADD_CHILD(14, 12, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(14, 13, 90.0f);
	SPEECH_CONTEXT_ADD_CHILD(14, 658, 90.0f);
	return;
}

void Function_13() //Position: 0x2280 / 8832
{
	SPEECH_CONTEXT_ADD_CHILD(56, 54, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(56, 55, 90.0f);
	return;
}

void Function_14() //Position: 0x229C / 8860
{
	SPEECH_CONTEXT_ADD_CHILD(26, 24, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(26, 25, 90.0f);
	SPEECH_CONTEXT_SET_TARGET_INITIAL_FACTION(25, 27);
	return;
}

void Function_15() //Position: 0x22BE / 8894
{
	SPEECH_CONTEXT_ADD_CHILD(107, 105, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(107, 106, 90.0f);
	SPEECH_CONTEXT_SET_TARGET_INITIAL_FACTION(106, 27);
	return;
}

void Function_16() //Position: 0x22E0 / 8928
{
	SPEECH_CONTEXT_ADD_CHILD(94, 93, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(94, 92, 90.0f);
	SPEECH_CONTEXT_SET_TARGET_INITIAL_FACTION(92, 27);
	return;
}

void Function_17() //Position: 0x2302 / 8962
{
	SPEECH_CONTEXT_ADD_CHILD(98, 96, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(98, 97, 90.0f);
	SPEECH_CONTEXT_SET_TARGET_INITIAL_FACTION(97, 27);
	return;
}

void Function_18() //Position: 0x2324 / 8996
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

void Function_19() //Position: 0x2371 / 9073
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

void Function_20(int iParam0, int iParam1) //Position: 0x23EF / 9199
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
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
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

var Function_21() //Position: 0x2659 / 9817
{
	return Global_21369.f_248;
}

var Function_22() //Position: 0x2664 / 9828
{
	return Global_21369.f_244;
}

void Function_23() //Position: 0x266F / 9839
{
	SPEECH_CONTEXT_SET_ALLOW_PHRASE_REUSE(29, 1);
	return;
}

void Function_24() //Position: 0x267B / 9851
{
	SPEECH_CONTEXT_ADD_CHILD(162, 158, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(162, 159, 10.0f);
	SPEECH_CONTEXT_SET_ALLOW_PHRASE_REUSE(158, 1);
	SPEECH_CONTEXT_SET_ALLOW_PHRASE_REUSE(159, 1);
	return;
}

void Function_25() //Position: 0x26A3 / 9891
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

void Function_26() //Position: 0x292B / 10539
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

void Function_27() //Position: 0x299D / 10653
{
	SPEECH_CONTEXT_ADD_CHILD(49, 48, 5.0f);
	SPEECH_CONTEXT_ADD_CHILD(50, 49, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(50, 99, 10.0f);
	SPEECH_CONTEXT_ADD_CHILD(50, 102, 70.0f);
	return;
}

void Function_28() //Position: 0x29CB / 10699
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

void Function_29() //Position: 0x2A9B / 10907
{
	Function_34(1, "CRM_VANDAL", 3, 1, 15.0f, 1, 0);
	Function_34(2, "CRM_VANDAL_CAR", 3, 5, 15.0f, 1, 0);
	Function_34(3, "CRM_PRPDEST", 2, 5, 15.0f, 1, 0);
	Function_34(4, "CRM_PRPDEST_CAR", 2, 10, 15.0f, 1, 0);
	Function_34(5, "nCRM_ARSON", 2, 20, 15.0f, 1, 1);
	Function_34(6, "nCRM_ASSLT", 3, 20, 15.0f, 1, 1);
	Function_34(7, "CRM_ASSLT_LAW", 3, 20, 15.0f, 1, 1);
	Function_34(8, "CRM_ASSLT_HORSE", 3, 5, 15.0f, 1, 0);
	Function_34(9, "CRM_ASSLT_COW", 3, 5, 15.0f, 1, 0);
	Function_34(10, "CRM_ASSLT_ANI", 3, 5, 15.0f, 1, 0);
	Function_34(11, "nCRM_MURDR", 0, 40, 15.0f, 1, 1);
	Function_34(12, "CRM_MURDR_LAW", 0, 50, 15.0f, 1, 1);
	Function_34(13, "CRM_MURDR_HORSE", 0, 20, 15.0f, 1, 0);
	Function_34(14, "CRM_MURDR_COW", 0, 20, 15.0f, 1, 0);
	Function_34(15, "CRM_MURDR_ANI", 0, 5, 15.0f, 1, 0);
	Function_34(16, "CRM_STEAL_HORSE", 0, 20, 15.0f, 1, 1);
	Function_34(17, "CRM_STEAL_HORSE", 4, 20, 15.0f, 1, 1);
	Function_34(19, "CRM_STEAL_CAR", 0, 20, 15.0f, 1, 1);
	Function_34(20, "CRM_STEAL_CAR", 4, 20, 15.0f, 1, 1);
	Function_34(21, "CRM_KIDNAP", 0, 20, 15.0f, 1, 1);
	Function_34(22, "CRM_KIDNAP_LAW", 0, 30, 15.0f, 1, 1);
	Function_34(25, "CRM_CRACK_SAFE", 0, 50, 15.0f, 1, 1);
	Function_34(27, "CRM_ROB_COACH", 0, 100, 15.0f, 1, 1);
	Function_34(28, "CRM_TRESPASS", 0, 5, 15.0f, 1, 1);
	Function_34(30, "CRM_STEAL_BIG", 3, 10, 15.0f, 1, 1);
	Function_34(32, "nCRM_CHEAT", 0, 25, 15.0f, 1, 0);
	Function_34(35, "CRM_THREAT_LAW", 0, 5, 15.0f, 1, 1);
	Function_33(17, 15.0f);
	Function_33(20, 15.0f);
	Function_32(1, 15.0f, 30.0f);
	Function_32(2, 30.0f, 30.0f);
	Function_32(3, 15.0f, 30.0f);
	Function_32(4, 30.0f, 30.0f);
	Function_32(5, 15.0f, 30.0f);
	Function_32(6, 30.0f, 30.0f);
	Function_32(7, 30.0f, 30.0f);
	Function_32(8, 30.0f, 30.0f);
	Function_32(9, 30.0f, 30.0f);
	Function_32(10, 30.0f, 30.0f);
	Function_32(30, 15.0f, 30.0f);
	Function_30(1, 3, 10);
	Function_30(2, 4, 10);
	Function_30(6, 11, 4294967295);
	Function_30(7, 12, 4294967295);
	Function_30(8, 13, 4294967295);
	Function_30(9, 14, 4294967295);
	Function_30(10, 15, 4294967295);
	return;
}

void Function_30(int iParam0, int iParam1, int iParam2) //Position: 0x2EAE / 11950
{
	if (!Function_31(iParam0))
	{
		LOG_ERROR("Invalid CRIME_TYPE for setting up progressive crime details");
		return;
	}
	if (!Function_31(iParam1))
	{
		LOG_ERROR("Invalid CRIME_TYPE for setting up progressive crime definitions");
		return;
	}
	if (!Global_41252[iParam011].f_36 != 1 && !Global_41252[iParam011].f_36 != 3)
	{
		LOG_ERROR("Attempting to set progressive crime details for non-progressive crime");
		return;
	}
	Global_41252[iParam011].f_68 = iParam1;
	Global_41252[iParam011].f_72 = iParam2;
	return;
}

bool Function_31(int iParam0) //Position: 0x2FCC / 12236
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

void Function_32(int iParam0, float fParam1, int iParam2) //Position: 0x2FE2 / 12258
{
	if (!Function_31(iParam0))
	{
		LOG_ERROR("Invalid CRIME_TYPE for setting up accrual crime details");
		return;
	}
	if (!Global_41252[iParam011].f_36 != 2 && !Global_41252[iParam011].f_36 != 3)
	{
		LOG_ERROR("Attempting to set accrual crime details for non-accrual crime");
		return;
	}
	Global_41252[iParam011].f_80 = fParam1;
	Global_41252[iParam011].f_84 = iParam2;
	return;
}

void Function_33(int iParam0, int iParam1) //Position: 0x30A5 / 12453
{
	if (!Function_31(iParam0))
	{
		LOG_ERROR("Invalid CRIME_TYPE for setting up delayed crime details");
		return;
	}
	if (!Global_41252[iParam011].f_36 != 4)
	{
		LOG_ERROR("Attempting to set delayed crime details for non-delyaed crime");
		return;
	}
	Global_41252[iParam011].f_76 = iParam1;
	return;
}

void Function_34(int iParam0, char* cParam1, bool bParam5, int iParam6) //Position: 0x3150 / 12624
{
	if (!Function_31(iParam0))
	{
		LOG_ERROR("Invalid CRIME_TYPE for setting up crime definitions");
		return;
	}
	if (!Function_35(iParam2))
	{
		LOG_ERROR("Invalid CRIME_STYLE for setting up crime definitions");
		return;
	}
	Global_41252[iParam011] = iParam0;
	strcpy(&Global_41252[iParam011] + 4, &cParam1, 16);
	Global_41252[iParam011].f_36 = iParam2;
	Global_41252[iParam011].f_40 = iParam3;
	Global_41252[iParam011].f_48 = fParam4;
	if (bParam5)
	{
		Global_41252[iParam011].f_44 = iParam3;
	}
	Global_41252[iParam011].f_60 = &iParam6;
	Global_41252[iParam011].f_52 = 1;
	Global_41252[iParam011].f_56 = 1;
	PRINTSTRING("New Crime Defined: ");
	PRINTSTRING(&Global_41252[iParam011] + 4);
	PRINTNL();
}

bool Function_35(int iParam0) //Position: 0x3273 / 12915
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		return 0;
	}
	return 1;
}

void Function_36() //Position: 0x3288 / 12936
{
	Function_37(0, 8, 4, 223);
	Function_37(1, 10, 6, 224);
	return;
}

void Function_37(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x32A0 / 12960
{
	if (!Function_38(iParam0))
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
	(*&Global_39922 + 180)[iParam0] = iParam1;
	(*&Global_39922 + 212)[iParam0] = iParam2;
	(*&Global_40060 + 4428)[iParam0] = iParam3;
}

bool Function_38(int iParam0) //Position: 0x3394 / 13204
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

bool Function_39() //Position: 0x33A9 / 13225
{
	if (Function_40(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_40(var uParam0, bool bParam1) //Position: 0x33C4 / 13252
{
	return (uParam0 && bParam1) == 0;
}

void Function_41() //Position: 0x33D1 / 13265
{
	int iVar0;
	
	LOG_MESSAGE("Creating Formations Layout");
	Global_39557 = CREATE_LAYOUT("Formations");
	iVar0 = 0;
	while (iVar0 < 14)
	{
		Global_39559[iVar0] = Function_42(iVar0);
		iVar0++;
	}
	return;
}

int Function_42(var uParam0) //Position: 0x342B / 13355
{
	struct<2> Var0[20];
	bool bVar41;
	int iVar42;
	int iVar43;
	var uVar44;
	var uVar45;
	
	bVar41 = uParam0;
	switch (bVar41)
	{
		case 0x00000000:
			LOG_MESSAGE("Creating FORM_HORIZ_LINE");
			uVar44 = "FORM_HORIZ_LINE";
			iVar43 = 16;
			Var0[02] = 0.0f;
			Var0[12] = 1.0f;
			Var0[22] = -1.0f;
			Var0[32] = 2.0f;
			Var0[42] = -2.0f;
			Var0[52] = 3.0f;
			Var0[62] = -3.0f;
			Var0[72] = 4.0f;
			Var0[82] = -4.0f;
			Var0[92] = 5.0f;
			Var0[102] = -5.0f;
			Var0[112] = 6.0f;
			Var0[122] = -6.0f;
			Var0[132] = 7.0f;
			Var0[142] = -7.0f;
			Var0[152] = 8.0f;
			break;
		
		case 0x00000001:
			LOG_MESSAGE("Creating FORM_VERT_LINE");
			uVar44 = "FORM_VERT_LINE";
			iVar43 = 16;
			Var0[02].f_8 = 0.0f;
			Var0[12].f_8 = 1.0f;
			Var0[22].f_8 = 2.0f;
			Var0[32].f_8 = 3.0f;
			Var0[42].f_8 = 4.0f;
			Var0[52].f_8 = 5.0f;
			Var0[62].f_8 = 6.0f;
			Var0[72].f_8 = 7.0f;
			Var0[82].f_8 = 8.0f;
			Var0[92].f_8 = 9.0f;
			Var0[102].f_8 = 10.0f;
			Var0[112].f_8 = 11.0f;
			Var0[122].f_8 = 12.0f;
			Var0[132].f_8 = 13.0f;
			Var0[142].f_8 = 14.0f;
			Var0[152].f_8 = 15.0f;
			break;
		
		case 0x00000002:
			LOG_MESSAGE("Creating FORM_RING");
			uVar44 = "nFORM_RING";
			iVar43 = 16;
			Var0[02] = 1.0f;
			Var0[02].f_8 = 0.0f;
			Var0[12] = -0,75f;
			Var0[12].f_8 = 0,75f;
			Var0[22] = -0,75f;
			Var0[22].f_8 = -0,75f;
			Var0[32] = 0,75f;
			Var0[32].f_8 = 0,75f;
			Var0[42] = 0,75f;
			Var0[42].f_8 = -0,75f;
			Var0[52] = -1.0f;
			Var0[52].f_8 = 0.0f;
			Var0[62] = 0.0f;
			Var0[62].f_8 = -1.0f;
			Var0[72] = 0.0f;
			Var0[72].f_8 = 1.0f;
			Var0[82] = -0,35f;
			Var0[82].f_8 = -0,85f;
			Var0[92] = 0,85f;
			Var0[92].f_8 = 0,35f;
			Var0[102] = -0,85f;
			Var0[102].f_8 = 0,35f;
			Var0[112] = 0,35f;
			Var0[112].f_8 = -0,85f;
			Var0[122] = -0,35f;
			Var0[122].f_8 = 0,85f;
			Var0[132] = 0,85f;
			Var0[132].f_8 = -0,35f;
			Var0[142] = -0,85f;
			Var0[142].f_8 = -0,35f;
			Var0[152] = 0,35f;
			Var0[152].f_8 = 0,85f;
			break;
		
		case 0x00000003:
			LOG_MESSAGE("Creating FORM_BOX");
			uVar44 = "FORM_BOX";
			iVar43 = 16;
			Var0[02] = 1.0f;
			Var0[02].f_8 = -1.0f;
			Var0[12] = 1.0f;
			Var0[12].f_8 = 1.0f;
			Var0[22] = -1.0f;
			Var0[22].f_8 = 1.0f;
			Var0[32] = -1.0f;
			Var0[32].f_8 = -1.0f;
			Var0[42] = 0.0f;
			Var0[42].f_8 = -0,7f;
			Var0[52] = 0.0f;
			Var0[52].f_8 = 0,7f;
			Var0[62] = -0,7f;
			Var0[62].f_8 = 0.0f;
			Var0[72] = 0,7f;
			Var0[72].f_8 = 0.0f;
			Var0[82] = 0,5f;
			Var0[82].f_8 = -0,85f;
			Var0[92] = -0,5f;
			Var0[92].f_8 = 0,85f;
			Var0[102] = -0,5f;
			Var0[102].f_8 = -0,85f;
			Var0[112] = 0,5f;
			Var0[112].f_8 = 0,85f;
			Var0[122] = 0,55f;
			Var0[122].f_8 = -0,5f;
			Var0[132] = -0,85f;
			Var0[132].f_8 = 0,5f;
			Var0[142] = -0,85f;
			Var0[142].f_8 = -0,5f;
			Var0[152] = 0,85f;
			Var0[152].f_8 = 0,5f;
			break;
		
		case 0x00000004:
			LOG_MESSAGE("Creating FORM_WEDGE");
			uVar44 = "FORM_WEDGE";
			iVar43 = 16;
			Var0[02] = 0.0f;
			Var0[02].f_8 = 0.0f;
			Var0[12] = 1.0f;
			Var0[12].f_8 = -0,5f;
			Var0[22] = 1.0f;
			Var0[22].f_8 = 0,5f;
			Var0[32] = 0.0f;
			Var0[32].f_8 = 2.0f;
			Var0[42] = -1.0f;
			Var0[42].f_8 = 2.0f;
			Var0[52] = 1.0f;
			Var0[52].f_8 = 2.0f;
			Var0[62] = -0,5f;
			Var0[62].f_8 = 3.0f;
			Var0[72] = 0,5f;
			Var0[72].f_8 = 3.0f;
			Var0[82] = -1,5f;
			Var0[82].f_8 = 3.0f;
			Var0[92] = 1,5f;
			Var0[92].f_8 = 3.0f;
			Var0[102] = 0.0f;
			Var0[102].f_8 = 4.0f;
			Var0[112] = -1.0f;
			Var0[112].f_8 = 4.0f;
			Var0[122] = 1.0f;
			Var0[122].f_8 = 4.0f;
			Var0[132] = -2.0f;
			Var0[132].f_8 = 4.0f;
			Var0[142] = 2.0f;
			Var0[142].f_8 = 4.0f;
			Var0[152] = 0.0f;
			Var0[152].f_8 = 5.0f;
			break;
		
		case 0x00000005:
			LOG_MESSAGE("Creating FORM_RIGHT");
			uVar44 = "FORM_RIGHT";
			iVar43 = 16;
			Var0[02] = 0.0f;
			Var0[02].f_8 = 0.0f;
			Var0[12] = 1.0f;
			Var0[12].f_8 = 0.0f;
			Var0[22] = 1.0f;
			Var0[22].f_8 = 1.0f;
			Var0[32] = 1.0f;
			Var0[32].f_8 = -1.0f;
			Var0[42] = 2.0f;
			Var0[42].f_8 = 0,5f;
			Var0[52] = 2.0f;
			Var0[52].f_8 = -0,5f;
			Var0[62] = 0,5f;
			Var0[62].f_8 = 2.0f;
			Var0[72] = 0,5f;
			Var0[72].f_8 = -2.0f;
			Var0[82] = 3.0f;
			Var0[82].f_8 = 0.0f;
			Var0[92] = 3.0f;
			Var0[92].f_8 = 1.0f;
			Var0[102] = 3.0f;
			Var0[102].f_8 = -1.0f;
			Var0[112] = 2.0f;
			Var0[112].f_8 = 1,5f;
			Var0[122] = 2.0f;
			Var0[122].f_8 = -1,5f;
			Var0[132] = 1,5f;
			Var0[132].f_8 = 2,5f;
			Var0[142] = 2.0f;
			Var0[142].f_8 = -2,5f;
			Var0[152] = 4.0f;
			Var0[152].f_8 = 0.0f;
			break;
		
		case 0x00000006:
			LOG_MESSAGE("Creating FORM_LEFT");
			uVar44 = "nFORM_LEFT";
			iVar43 = 16;
			Var0[02] = 0.0f;
			Var0[02].f_8 = 0.0f;
			Var0[12] = -1.0f;
			Var0[12].f_8 = 0.0f;
			Var0[22] = -1.0f;
			Var0[22].f_8 = 1.0f;
			Var0[32] = -1.0f;
			Var0[32].f_8 = -1.0f;
			Var0[42] = -2.0f;
			Var0[42].f_8 = 0,5f;
			Var0[52] = -2.0f;
			Var0[52].f_8 = -0,5f;
			Var0[62] = -0,5f;
			Var0[62].f_8 = 2.0f;
			Var0[72] = -0,5f;
			Var0[72].f_8 = -2.0f;
			Var0[82] = -3.0f;
			Var0[82].f_8 = 0.0f;
			Var0[92] = -3.0f;
			Var0[92].f_8 = 1.0f;
			Var0[102] = -3.0f;
			Var0[102].f_8 = -1.0f;
			Var0[112] = -2.0f;
			Var0[112].f_8 = 1,5f;
			Var0[122] = -2.0f;
			Var0[122].f_8 = -1,5f;
			Var0[132] = -1,5f;
			Var0[132].f_8 = 2,5f;
			Var0[142] = -2.0f;
			Var0[142].f_8 = -2,5f;
			Var0[152] = -4.0f;
			Var0[152].f_8 = 0.0f;
			break;
		
		case 0x00000007:
			LOG_MESSAGE("Creating FORM_RANDOM");
			uVar44 = "FORM_RANDOM";
			iVar43 = 16;
			Var0[02] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[02].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[12] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[12].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[22] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[22].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[32] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[32].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[42] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[42].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[52] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[52].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[62] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[62].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[72] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[72].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[82] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[82].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[92] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[92].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[102] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[102].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[112] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[112].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[122] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[122].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[132] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[132].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[142] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[142].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[152] = RAND_FLOAT_RANGE(0.0f, 1.0f);
			Var0[152].f_8 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			break;
		
		case 0x0000000E:
			LOG_MESSAGE("Creating FORM_NONE");
			uVar44 = "nFORM_NONE";
			iVar43 = 16;
			Var0[02] = Vector(0.0f, 0.0f, 0.0f);
			Var0[12] = Vector(0.0f, 0.0f, 0.0f);
			Var0[22] = Vector(0.0f, 0.0f, 0.0f);
			Var0[32] = Vector(0.0f, 0.0f, 0.0f);
			Var0[42] = Vector(0.0f, 0.0f, 0.0f);
			Var0[52] = Vector(0.0f, 0.0f, 0.0f);
			Var0[62] = Vector(0.0f, 0.0f, 0.0f);
			Var0[72] = Vector(0.0f, 0.0f, 0.0f);
			Var0[82] = Vector(0.0f, 0.0f, 0.0f);
			Var0[92] = Vector(0.0f, 0.0f, 0.0f);
			Var0[102] = Vector(0.0f, 0.0f, 0.0f);
			Var0[112] = Vector(0.0f, 0.0f, 0.0f);
			Var0[122] = Vector(0.0f, 0.0f, 0.0f);
			Var0[132] = Vector(0.0f, 0.0f, 0.0f);
			Var0[142] = Vector(0.0f, 0.0f, 0.0f);
			Var0[152] = Vector(0.0f, 0.0f, 0.0f);
			break;
		
		case 0x00000009:
			LOG_MESSAGE("Creating FORM_LINE");
			uVar44 = "nFORM_LINE";
			iVar43 = 12;
			Var0[02] = Vector(0.0f, 0.0f, 0.0f);
			Var0[12] = Vector(2.0f, 0.0f, 0.0f);
			Var0[22] = Vector(-2.0f, 0.0f, 0.0f);
			Var0[32] = Vector(4.0f, 0.0f, 0.0f);
			Var0[42] = Vector(-4.0f, 0.0f, 0.0f);
			Var0[52] = Vector(6.0f, 0.0f, 0.0f);
			Var0[62] = Vector(-6.0f, 0.0f, 0.0f);
			Var0[72] = Vector(8.0f, 0.0f, 0.0f);
			Var0[82] = Vector(-8.0f, 0.0f, 0.0f);
			Var0[92] = Vector(10.0f, 0.0f, 0.0f);
			Var0[102] = Vector(-10.0f, 0.0f, 0.0f);
			Var0[112] = Vector(12.0f, 0.0f, 0.0f);
			break;
		
		case 0x00000008:
			LOG_MESSAGE("Creating FORM_COLUMN");
			uVar44 = "FORM_COLUMN";
			iVar43 = 12;
			Var0[02] = Vector(0.0f, 0.0f, 0.0f);
			Var0[12] = Vector(0.0f, 0.0f, 3.0f);
			Var0[22] = Vector(0.0f, 0.0f, 6.0f);
			Var0[32] = Vector(0.0f, 0.0f, 9.0f);
			Var0[42] = Vector(0.0f, 0.0f, 12.0f);
			Var0[52] = Vector(0.0f, 0.0f, 15.0f);
			Var0[62] = Vector(0.0f, 0.0f, 18.0f);
			Var0[72] = Vector(0.0f, 0.0f, 21.0f);
			Var0[82] = Vector(0.0f, 0.0f, 24.0f);
			Var0[92] = Vector(0.0f, 0.0f, 27.0f);
			Var0[102] = Vector(0.0f, 0.0f, 30.0f);
			Var0[112] = Vector(0.0f, 0.0f, 33.0f);
			break;
		
		case 0x0000000A:
			LOG_MESSAGE("Creating FORM_PACK");
			uVar44 = "nFORM_PACK";
			iVar43 = 12;
			Var0[02] = Vector(0.0f, 0.0f, 0.0f);
			Var0[12] = Vector(1,5f, 0.0f, 1.0f);
			Var0[22] = Vector(-1,5f, 0.0f, 1.0f);
			Var0[32] = Vector(3.0f, 0.0f, 2.0f);
			Var0[42] = Vector(-3.0f, 0.0f, 2.0f);
			Var0[52] = Vector(2,5f, 0.0f, 0,5f);
			Var0[62] = Vector(-2,5f, 0.0f, 0,5f);
			Var0[72] = Vector(0.0f, 0.0f, 1,5f);
			Var0[82] = Vector(1.0f, 0.0f, 2,5f);
			Var0[92] = Vector(-1.0f, 0.0f, 2,5f);
			Var0[102] = Vector(-1.0f, 0.0f, 6.0f);
			Var0[112] = Vector(1.0f, 0.0f, 6.0f);
			break;
		
		case 0x0000000B:
			LOG_MESSAGE("Creating FORM_REGIMENT");
			uVar44 = "FORM_REGIMENT";
			iVar43 = 20;
			Var0[02] = Vector(0.0f, 0.0f, 0.0f);
			Var0[12] = Vector(1.0f, 0.0f, 1.0f);
			Var0[22] = Vector(-1.0f, 0.0f, 1.0f);
			Var0[32] = Vector(2.0f, 0.0f, 2.0f);
			Var0[42] = Vector(0.0f, 0.0f, 2.0f);
			Var0[52] = Vector(-2.0f, 0.0f, 2.0f);
			Var0[62] = Vector(2.0f, 0.0f, 3.0f);
			Var0[72] = Vector(0.0f, 0.0f, 3.0f);
			Var0[82] = Vector(-2.0f, 0.0f, 3.0f);
			Var0[92] = Vector(2.0f, 0.0f, 4.0f);
			Var0[102] = Vector(0.0f, 0.0f, 4.0f);
			Var0[112] = Vector(-2.0f, 0.0f, 4.0f);
			Var0[122] = Vector(2.0f, 0.0f, 5.0f);
			Var0[132] = Vector(0.0f, 0.0f, 5.0f);
			Var0[142] = Vector(-2.0f, 0.0f, 5.0f);
			Var0[152] = Vector(2.0f, 0.0f, 6.0f);
			Var0[162] = Vector(0.0f, 0.0f, 6.0f);
			Var0[172] = Vector(-2.0f, 0.0f, 6.0f);
			Var0[182] = Vector(1.0f, 0.0f, 7.0f);
			Var0[192] = Vector(-1.0f, 0.0f, 7.0f);
			break;
		
		case 0x0000000C:
			LOG_MESSAGE("Creating FORM_TWO_COLUMNS");
			uVar44 = "FORM_TWO_COLUMNS";
			iVar43 = 20;
			Var0[02] = Vector(0.0f, 0.0f, 0.0f);
			Var0[12] = Vector(-1,5f, 0.0f, 0.0f);
			Var0[22] = Vector(0.0f, 0.0f, 1,5f);
			Var0[32] = Vector(-1,5f, 0.0f, 1,5f);
			Var0[42] = Vector(0.0f, 0.0f, 3.0f);
			Var0[52] = Vector(-1,5f, 0.0f, 3.0f);
			Var0[62] = Vector(0.0f, 0.0f, 4,5f);
			Var0[72] = Vector(-1,5f, 0.0f, 4,5f);
			Var0[82] = Vector(0.0f, 0.0f, 6.0f);
			Var0[92] = Vector(-1,5f, 0.0f, 6.0f);
			Var0[102] = Vector(0.0f, 0.0f, 7,5f);
			Var0[112] = Vector(-1,5f, 0.0f, 7,5f);
			Var0[122] = Vector(0.0f, 0.0f, 9.0f);
			Var0[132] = Vector(-1,5f, 0.0f, 9.0f);
			Var0[142] = Vector(0.0f, 0.0f, 10,5f);
			Var0[152] = Vector(-1,5f, 0.0f, 10,5f);
			Var0[162] = Vector(0.0f, 0.0f, 12.0f);
			Var0[172] = Vector(-1,5f, 0.0f, 12.0f);
			Var0[182] = Vector(0.0f, 0.0f, 13,5f);
			Var0[192] = Vector(-1,5f, 0.0f, 13,5f);
			break;
		
		case 0x0000000D:
			LOG_MESSAGE("Creating FORM_THREE_COLUMNS");
			uVar44 = "FORM_THREE_COLUMNS";
			iVar43 = 18;
			Var0[02] = Vector(0.0f, 0.0f, 0.0f);
			Var0[12] = Vector(-1,5f, 0.0f, 0.0f);
			Var0[22] = Vector(-3.0f, 0.0f, 0.0f);
			Var0[32] = Vector(0.0f, 0.0f, 1,5f);
			Var0[42] = Vector(-1,5f, 0.0f, 1,5f);
			Var0[52] = Vector(-3.0f, 0.0f, 1,5f);
			Var0[62] = Vector(0.0f, 0.0f, 3.0f);
			Var0[72] = Vector(-1,5f, 0.0f, 3.0f);
			Var0[82] = Vector(3.0f, 0.0f, 3.0f);
			Var0[92] = Vector(0.0f, 0.0f, 4,5f);
			Var0[102] = Vector(-1,5f, 0.0f, 4,5f);
			Var0[112] = Vector(-3.0f, 0.0f, 4,5f);
			Var0[122] = Vector(0.0f, 0.0f, 6.0f);
			Var0[132] = Vector(-1,5f, 0.0f, 6.0f);
			Var0[142] = Vector(3.0f, 0.0f, 10,6f);
			Var0[152] = Vector(0.0f, 0.0f, 7,5f);
			Var0[162] = Vector(-1,5f, 0.0f, 7,5f);
			Var0[172] = Vector(-3.0f, 0.0f, 7,5f);
			break;
		
		default:
			LOG_WARNING("Attempting to create a formation of non-standard type!");
			break;
	}
	uVar45 = CREATE_FORMATION_IN_LAYOUT(&Global_39557, &uVar44, iVar43);
	if (!IS_OBJECT_VALID(&uVar45))
	{
		LOG_ERROR("Attempting to create formation path, not valid!");
		return "";
	}
	iVar42 = 0;
	while (iVar42 < (iVar43 - 1))
	{
		ADD_FORMATION_LOCATION(&uVar45, &(Var0[iVar422]));
		iVar42++;
	}
	LOG_MESSAGE("Path Created");
	PRINTSTRING(GET_OBJECT_NAME(&uVar45));
	PRINTSTRING("");
	PRINTSTRING("Number of Points");
	PRINTINT(GET_NUM_FORMATION_LOCATIONS(&uVar45));
	PRINTNL();
	return &uVar45;
}

