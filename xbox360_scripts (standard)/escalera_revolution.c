//Decompiled with MagicRDR v1.0
//Function Count : 60
//Statics Count : 512
//Natives Count : 174
//Parameters Count : 0

#region Local Var
	struct<1249> Local_0 = { 0, 1, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 2, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	bLocal_313 = false;
	bLocal_335 = false;
	iLocal_336 = 0;
	iLocal_337 = 0;
	if (Function_59(41, 0) || Function_53(41))
	{
		TERMINATE_THIS_SCRIPT();
	}
	iLocal_396 = 0;
	SET_FACTIONS_STATUS_TWO_WAY(2, 10, 2);
	SET_FACTIONS_STATUS_TWO_WAY(2, 16, 2);
	AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_03", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
	ENABLE_AMBIENT_SPAWNING(false);
	Function_52(1049109);
	Function_50(&bLocal_397, "dead_ground_male", 5, 0);
	Function_50(&bLocal_397, "custom/dead_ground_male", 8, 0);
	Function_50(&bLocal_397, "$/fragments/p_gen_noose02x", 0, 0);
	Function_50(&bLocal_397, "mourn_loop", 1, 0);
	Function_50(&bLocal_397, "dealer_and_customer", 1, 0);
	Function_50(&bLocal_397, "mex_sitGround_tlkPsnt_link", 1, 0);
	Function_50(&bLocal_397, "mex_leanWall_tlkPsnt_link", 1, 0);
	Function_50(&bLocal_397, "mex_leanRail_tlkPsnt", 1, 0);
	Function_49(&bLocal_397, 266, 3, 0);
	Function_49(&bLocal_397, 285, 3, 0);
	Function_49(&bLocal_397, 299, 3, 0);
	Function_49(&bLocal_397, 291, 3, 0);
	Function_49(&bLocal_397, 293, 3, 0);
	Function_49(&bLocal_397, 521, 3, 0);
	Function_49(&bLocal_397, 522, 3, 0);
	Function_49(&bLocal_397, 523, 3, 0);
	Function_49(&bLocal_397, 261, 3, 0);
	Function_49(&bLocal_397, 275, 3, 0);
	Function_49(&bLocal_397, 250, 3, 0);
	Function_49(&bLocal_397, 240, 3, 0);
	Function_49(&bLocal_397, 241, 3, 0);
	Function_49(&bLocal_397, 313, 3, 0);
	Function_49(&bLocal_397, 239, 3, 0);
	Function_49(&bLocal_397, 299, 3, 0);
	Function_49(&bLocal_397, 274, 3, 0);
	Function_49(&bLocal_397, 321, 3, 0);
	Function_49(&bLocal_397, 320, 3, 0);
	Function_49(&bLocal_397, 277, 3, 0);
	Function_49(&bLocal_397, 256, 3, 0);
	Function_49(&bLocal_397, 283, 3, 0);
	Function_49(&bLocal_397, 304, 3, 0);
	Function_49(&bLocal_397, 382, 3, 0);
	Function_49(&bLocal_397, 380, 3, 0);
	Function_49(&bLocal_397, 393, 3, 0);
	Function_49(&bLocal_397, 379, 3, 0);
	Function_49(&bLocal_397, 381, 3, 0);
	Function_49(&bLocal_397, 391, 3, 0);
	Function_49(&bLocal_397, 392, 3, 0);
	while (!IS_EXITFLAG_SET())
	{
		if (DECOR_CHECK_EXIST(Global_34573, "KillEscaleraRevolution"))
		{
			DECOR_REMOVE(Global_34573, "KillEscaleraRevolution");
			iLocal_396 = 14;
			TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
		}
		if (Function_59(41, 0) || Function_53(41))
		{
			iLocal_396 = 14;
			TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
		}
		switch (iLocal_396)
		{
			case 0x00000000:
				if (Function_48() && Function_42(&bLocal_397))
				{
					iLocal_396 = 1;
				}
				break;
			
			case 0x00000001:
				Function_41();
				iLocal_396 = 2;
				break;
			
			case 0x00000002:
				Function_37(&bLocal_359, &uLocal_360);
				Function_36(&uLocal_393);
				bLocal_313 = 50;
				iLocal_396 = 3;
				break;
			
			case 0x00000003:
				Function_35(&uLocal_364);
				bLocal_313 = 50;
				iLocal_396 = 4;
				break;
			
			case 0x00000004:
				Function_34(&uLocal_379);
				bLocal_313 = 50;
				iLocal_396 = 5;
				break;
			
			case 0x00000005:
				Function_33(&uLocal_387);
				bLocal_313 = 50;
				iLocal_396 = 6;
				break;
			
			case 0x00000006:
				Function_32(&uLocal_387);
				bLocal_313 = 50;
				iLocal_396 = 7;
				break;
			
			case 0x00000007:
				Function_31(&uLocal_387);
				bLocal_313 = 50;
				iLocal_396 = 8;
				break;
			
			case 0x00000008:
				Function_30(&uLocal_387);
				bLocal_313 = 50;
				iLocal_396 = 9;
				break;
			
			case 0x00000009:
				Function_29(&uLocal_387);
				bLocal_313 = 50;
				iLocal_396 = 10;
				break;
			
			case 0x0000000A:
				Function_27(&uLocal_386);
				bLocal_313 = 50;
				iLocal_396 = 11;
				break;
			
			case 0x0000000B:
				if (!bLocal_335)
				{
					Function_26(&uLocal_314, &uLocal_338);
				}
				bLocal_313 = 100;
				iLocal_396 = 12;
				break;
			
			case 0x0000000C:
				if (IS_PLAYER_IN_COMBAT(0) && !bLocal_335)
				{
					bLocal_335 = true;
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
					iLocal_396 = 13;
					break;
				}
				if (!bLocal_335)
				{
					Function_11(&uLocal_314, &uLocal_338, &iLocal_336, &iLocal_337, &uLocal_364);
				}
				bLocal_313 = 100;
				iLocal_396 = 11;
				break;
			
			case 0x0000000D:
				Function_10(&uLocal_314, &uLocal_338);
				iLocal_396 = 14;
				break;
		}
		WAIT(bLocal_313);
	}
	if (IS_OBJECT_VALID(bLocal_359))
	{
		UNK_0xE18028C1(bLocal_359);
		DESTROY_OBJECT(bLocal_359);
		UNK_0xE18028C1(uLocal_360[0]);
		DESTROY_OBJECT(uLocal_360[0]);
		UNK_0xE18028C1(uLocal_360[1]);
		DESTROY_OBJECT(uLocal_360[1]);
		UNK_0xE18028C1(uLocal_360[2]);
		DESTROY_OBJECT(uLocal_360[2]);
	}
	if (IS_VOLUME_VALID(Local_0.f_20))
	{
		RESET_RMPTFX_IN_VOLUME(Local_0.f_20);
	}
	FIRE_RELEASE_HANDLE(uLocal_393[0], 1);
	FIRE_RELEASE_HANDLE(uLocal_393[1], 1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		DEREFERENCE_OBJECT(uLocal_387[iVar0]);
		iVar0++;
	}
	Function_8(&uLocal_314, &uLocal_338, &uLocal_364, &uLocal_386);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (IS_OBJECT_VALID((*&Local_0 + 56)[iVar0]))
		{
			REMOVE_CORPSE_RETAINMENT_VOLUME_OBJ((*&Local_0 + 56)[iVar0]);
			REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ((*&Local_0 + 56)[iVar0]);
		}
		iVar0++;
	}
	Function_4(&bLocal_397);
	Function_3();
	Function_1(1049109);
	ENABLE_AMBIENT_SPAWNING(true);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	RESET_FACTIONS_STATUS_TWO_WAY(2, 10);
	RESET_FACTIONS_STATUS_TWO_WAY(2, 16);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x5F7 / 1527
{
	if (Function_2(iParam0, 1) && !Function_2(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_2(var uParam0, bool bParam1) //Position: 0x624 / 1572
{
	return (uParam0 && bParam1) == 0;
}

void Function_3() //Position: 0x631 / 1585
{
	Function_4(&Local_0 + 4);
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_4(int iParam0) //Position: 0x643 / 1603
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

void Function_5(var uParam0, int iParam1) //Position: 0x669 / 1641
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

void Function_6(var uParam0, int iParam1) //Position: 0x797 / 1943
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_7(var uParam0, int iParam1) //Position: 0x7B1 / 1969
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7CE / 1998
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if ((*uParam0)[iVar0])
		{
			if (DECOR_CHECK_EXIST((*uParam1)[iVar0], "Mourner"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT((*uParam1)[iVar0], "Mourner"));
				DECOR_REMOVE((*uParam1)[iVar0], "Mourner");
			}
			if (DECOR_CHECK_EXIST((*uParam1)[iVar0], "Corpse"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT((*uParam1)[iVar0], "Corpse"));
				DECOR_REMOVE((*uParam1)[iVar0], "Corpse");
			}
			if (DECOR_CHECK_EXIST((*uParam1)[iVar0], "WhisperActor2"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT((*uParam1)[iVar0], "WhisperActor2"));
				DECOR_REMOVE((*uParam1)[iVar0], "WhisperActor2");
			}
			if (DECOR_CHECK_EXIST((*uParam1)[iVar0], "WhisperActor1"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT((*uParam1)[iVar0], "WhisperActor1"));
				DECOR_REMOVE((*uParam1)[iVar0], "WhisperActor1");
			}
			if (DECOR_CHECK_EXIST((*uParam1)[iVar0], "LeanActor2"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT((*uParam1)[iVar0], "LeanActor2"));
				DECOR_REMOVE((*uParam1)[iVar0], "LeanActor2");
			}
			if (DECOR_CHECK_EXIST((*uParam1)[iVar0], "LeanActor1"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT((*uParam1)[iVar0], "LeanActor1"));
				DECOR_REMOVE((*uParam1)[iVar0], "LeanActor1");
			}
			if (DECOR_CHECK_EXIST((*uParam1)[iVar0], "LeanRailActor2"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT((*uParam1)[iVar0], "LeanRailActor2"));
				DECOR_REMOVE((*uParam1)[iVar0], "LeanRailActor2");
			}
			if (DECOR_CHECK_EXIST((*uParam1)[iVar0], "LeanRailActor1"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT((*uParam1)[iVar0], "LeanRailActor1"));
				DECOR_REMOVE((*uParam1)[iVar0], "LeanRailActor1");
			}
			if (DECOR_CHECK_EXIST((*uParam1)[iVar0], "IllicitActor2"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT((*uParam1)[iVar0], "IllicitActor2"));
				DECOR_REMOVE((*uParam1)[iVar0], "IllicitActor2");
			}
			if (DECOR_CHECK_EXIST((*uParam1)[iVar0], "IllicitActor1"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT((*uParam1)[iVar0], "IllicitActor1"));
				DECOR_REMOVE((*uParam1)[iVar0], "IllicitActor1");
			}
			if (DECOR_CHECK_EXIST((*uParam1)[iVar0], "Gringo"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT((*uParam1)[iVar0], "Gringo"));
				DECOR_REMOVE((*uParam1)[iVar0], "Gringo");
			}
			if (DECOR_CHECK_EXIST((*uParam1)[iVar0], "Volume"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT((*uParam1)[iVar0], "Volume"));
				DECOR_REMOVE((*uParam1)[iVar0], "Volume");
			}
			if (DECOR_CHECK_EXIST((*uParam1)[iVar0], "TimeStarted"))
			{
				DECOR_REMOVE((*uParam1)[iVar0], "TimeStarted");
			}
			if (DECOR_CHECK_EXIST((*uParam1)[iVar0], "Gringo"))
			{
				DECOR_REMOVE((*uParam1)[iVar0], "Gringo");
			}
			(*uParam0)[iVar0] = 0;
			(*uParam1)[iVar0] = "";
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 13)
	{
		DESTROY_ACTOR((*uParam2)[iVar0]);
		iVar0++;
	}
	Function_9(uParam3);
}

void Function_9(int iParam0) //Position: 0xBF7 / 3063
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*iParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			DESTROY_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0xC3E / 3134
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if ((*uParam0)[iVar0])
		{
			if (DECOR_CHECK_EXIST((*iParam1)[iVar0], "Mourner"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT((*iParam1)[iVar0], "Mourner"));
				TASK_CLEAR(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT((*iParam1)[iVar0], "Mourner")));
				DECOR_REMOVE((*iParam1)[iVar0], "Mourner");
			}
			if (DECOR_CHECK_EXIST((*iParam1)[iVar0], "Corpse"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT((*iParam1)[iVar0], "Corpse"));
				DECOR_REMOVE((*iParam1)[iVar0], "Corpse");
			}
			if (DECOR_CHECK_EXIST((*iParam1)[iVar0], "WhisperActor2"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT((*iParam1)[iVar0], "WhisperActor2"));
				TASK_CLEAR(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT((*iParam1)[iVar0], "WhisperActor2")));
				DECOR_REMOVE((*iParam1)[iVar0], "WhisperActor2");
			}
			if (DECOR_CHECK_EXIST((*iParam1)[iVar0], "WhisperActor1"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT((*iParam1)[iVar0], "WhisperActor1"));
				TASK_CLEAR(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT((*iParam1)[iVar0], "WhisperActor1")));
				DECOR_REMOVE((*iParam1)[iVar0], "WhisperActor1");
			}
			if (DECOR_CHECK_EXIST((*iParam1)[iVar0], "IllicitActor2"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT((*iParam1)[iVar0], "IllicitActor2"));
				TASK_CLEAR(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT((*iParam1)[iVar0], "IllicitActor2")));
				DECOR_REMOVE((*iParam1)[iVar0], "IllicitActor2");
			}
			if (DECOR_CHECK_EXIST((*iParam1)[iVar0], "IllicitActor1"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT((*iParam1)[iVar0], "IllicitActor1"));
				TASK_CLEAR(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT((*iParam1)[iVar0], "IllicitActor1")));
				DECOR_REMOVE((*iParam1)[iVar0], "IllicitActor1");
			}
			if (DECOR_CHECK_EXIST((*iParam1)[iVar0], "LeanActor2"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT((*iParam1)[iVar0], "LeanActor2"));
				TASK_CLEAR(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT((*iParam1)[iVar0], "LeanActor2")));
				DECOR_REMOVE((*iParam1)[iVar0], "LeanActor2");
			}
			if (DECOR_CHECK_EXIST((*iParam1)[iVar0], "LeanActor1"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT((*iParam1)[iVar0], "LeanActor1"));
				TASK_CLEAR(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT((*iParam1)[iVar0], "LeanActor1")));
				DECOR_REMOVE((*iParam1)[iVar0], "LeanActor1");
			}
			if (DECOR_CHECK_EXIST((*iParam1)[iVar0], "LeanRailActor2"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT((*iParam1)[iVar0], "LeanRailActor2"));
				TASK_CLEAR(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT((*iParam1)[iVar0], "LeanRailActor2")));
				DECOR_REMOVE((*iParam1)[iVar0], "LeanRailActor2");
			}
			if (DECOR_CHECK_EXIST((*iParam1)[iVar0], "LeanRailActor1"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT((*iParam1)[iVar0], "LeanRailActor1"));
				TASK_CLEAR(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT((*iParam1)[iVar0], "LeanRailActor1")));
				DECOR_REMOVE((*iParam1)[iVar0], "LeanRailActor1");
			}
			if (DECOR_CHECK_EXIST((*iParam1)[iVar0], "Gringo"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT((*iParam1)[iVar0], "Gringo"));
				DECOR_REMOVE((*iParam1)[iVar0], "Gringo");
			}
			if (DECOR_CHECK_EXIST((*iParam1)[iVar0], "Volume"))
			{
				RELEASE_OBJECT_REF(DECOR_GET_OBJECT((*iParam1)[iVar0], "Volume"));
				DECOR_REMOVE((*iParam1)[iVar0], "Volume");
			}
			if (DECOR_CHECK_EXIST((*iParam1)[iVar0], "TimeStarted"))
			{
				DECOR_REMOVE((*iParam1)[iVar0], "TimeStarted");
			}
			if (DECOR_CHECK_EXIST((*iParam1)[iVar0], "Gringo"))
			{
				DECOR_REMOVE((*iParam1)[iVar0], "Gringo");
			}
			(*uParam0)[iVar0] = 0;
			(*iParam1)[iVar0] = "";
		}
		iVar0++;
	}
	return;
}

int Function_11(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1151 / 4433
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	vector3 vVar10;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	vector3 vVar16;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	vector3 vVar22;
	bool bVar25;
	bool bVar26;
	
	if ((IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_0 + 40)[0]) && !*uParam2) && !*uParam3)
	{
		*uParam2 = 1;
		if (IS_ACTOR_VALID((*uParam4)[11]))
		{
			SAY_SINGLE_LINE_CONTEXT((*uParam4)[11], 61, Global_34573, 1, 1, 2, 4294967295, 4294967295, 0, 1);
		}
		else if (IS_ACTOR_VALID((*uParam4)[12]))
		{
			SAY_SINGLE_LINE_CONTEXT((*uParam4)[12], 61, Global_34573, 1, 1, 2, 4294967295, 4294967295, 0, 1);
		}
		else if (IS_ACTOR_VALID((*uParam4)[13]))
		{
			SAY_SINGLE_LINE_CONTEXT((*uParam4)[13], 61, Global_34573, 1, 1, 2, 4294967295, 4294967295, 0, 1);
		}
		iVar0 = 11;
		while (iVar0 < 13)
		{
			if (IS_ACTOR_VALID((*uParam4)[iVar0]))
			{
				TASK_POINT_GUN_AT_OBJECT((*uParam4)[iVar0], Global_34573, 10.0f, 1);
			}
			iVar0++;
		}
	}
	else if ((IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_0 + 40)[1]) && *uParam2) && !*uParam3)
	{
		*uParam3 = 1;
		if (IS_ACTOR_VALID((*uParam4)[11]))
		{
			SAY_SINGLE_LINE_CONTEXT((*uParam4)[11], 60, Global_34573, 1, 1, 2, 4294967295, 4294967295, 0, 1);
		}
		else if (IS_ACTOR_VALID((*uParam4)[12]))
		{
			SAY_SINGLE_LINE_CONTEXT((*uParam4)[12], 60, Global_34573, 1, 1, 2, 4294967295, 4294967295, 0, 1);
		}
		else if (IS_ACTOR_VALID((*uParam4)[13]))
		{
			SAY_SINGLE_LINE_CONTEXT((*uParam4)[13], 60, Global_34573, 1, 1, 2, 4294967295, 4294967295, 0, 1);
		}
		Function_16(4, 28, Global_34573, (*&Local_0 + 40)[1], 1);
		return 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if ((*uParam0)[iVar1])
		{
			if (!CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), (*uParam1)[iVar1], 1f, 1117126656, 1, 1, 0))
			{
				fVar2 = Function_14(Global_34573, (*uParam1)[iVar1]);
				if (fVar2 > 300.0f)
				{
					if (fVar2 < 3.0f)
					{
						if (DECOR_CHECK_EXIST((*uParam1)[iVar1], "IllicitActor1"))
						{
							if (!DECOR_CHECK_EXIST((*uParam1)[iVar1], "IllicitActor2"))
							{
								bVar3 = DECOR_GET_OBJECT((*uParam1)[iVar1], "Gringo");
								vVar4 = { 0.0f, 0.0f, 0.0f };
								if ((iVar1 % 6) == 0)
								{
									bVar7 = 299;
								}
								else if ((iVar1 % 6) == 1)
								{
									bVar7 = 274;
								}
								else if ((iVar1 % 6) == 2)
								{
									bVar7 = 240;
								}
								else if ((iVar1 % 6) == 3)
								{
									bVar7 = 320;
								}
								else if ((iVar1 % 6) == 4)
								{
									bVar7 = 256;
								}
								else if ((iVar1 % 6) == 5)
								{
									bVar7 = 283;
								}
								GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bVar3), "Customer", &vVar4);
								bVar8 = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), bVar7, vVar4, 0.0f, 0.0f, 0.0f);
								SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar8, true);
								SNAP_ACTOR_TO_GRINGO(bVar8, bVar3, "Customer", false, 0, 0);
								TASK_PRIORITY_SET(bVar8, 2);
								TASK_USE_GRINGO(bVar8, GET_GRINGO_FROM_OBJECT(bVar3), "Customer", 4294967295, 1);
								DECOR_SET_OBJECT((*uParam1)[iVar1], "IllicitActor2", bVar8);
							}
						}
						else if (DECOR_CHECK_EXIST((*uParam1)[iVar1], "LeanActor1"))
						{
							if (!DECOR_CHECK_EXIST((*uParam1)[iVar1], "LeanActor2"))
							{
								bVar9 = DECOR_GET_OBJECT((*uParam1)[iVar1], "Gringo");
								vVar10 = { 0.0f, 0.0f, 0.0f };
								if ((iVar1 % 6) == 0)
								{
									bVar13 = 299;
								}
								else if ((iVar1 % 6) == 1)
								{
									bVar13 = 274;
								}
								else if ((iVar1 % 6) == 2)
								{
									bVar13 = 240;
								}
								else if ((iVar1 % 6) == 3)
								{
									bVar13 = 320;
								}
								else if ((iVar1 % 6) == 4)
								{
									bVar13 = 256;
								}
								else if ((iVar1 % 6) == 5)
								{
									bVar13 = 283;
								}
								GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bVar9), "Peasant", &vVar10);
								bVar14 = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), bVar13, vVar10, 0.0f, 0.0f, 0.0f);
								SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar14, true);
								DEEQUIP_ACCESSORY(bVar14, 0);
								SNAP_ACTOR_TO_GRINGO(bVar14, bVar9, "Peasant", false, 0, 0);
								TASK_PRIORITY_SET(bVar14, 2);
								TASK_USE_GRINGO(bVar14, GET_GRINGO_FROM_OBJECT(bVar9), "Peasant", 4294967295, 1);
								DECOR_SET_OBJECT((*uParam1)[iVar1], "LeanActor2", bVar14);
							}
						}
						else if (DECOR_CHECK_EXIST((*uParam1)[iVar1], "LeanRailActor1") && !DECOR_CHECK_EXIST((*uParam1)[iVar1], "No2ndGuy"))
						{
							if (!DECOR_CHECK_EXIST((*uParam1)[iVar1], "LeanRailActor2"))
							{
								bVar15 = DECOR_GET_OBJECT((*uParam1)[iVar1], "Gringo");
								vVar16 = { 0.0f, 0.0f, 0.0f };
								if ((iVar1 % 6) == 0)
								{
									bVar19 = 381;
								}
								else if ((iVar1 % 6) == 1)
								{
									bVar19 = 379;
								}
								else if ((iVar1 % 6) == 2)
								{
									bVar19 = 380;
								}
								else if ((iVar1 % 6) == 3)
								{
									bVar19 = 393;
								}
								else if ((iVar1 % 6) == 4)
								{
									bVar19 = 392;
								}
								else if ((iVar1 % 6) == 5)
								{
									bVar19 = 391;
								}
								GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "Peasant", &vVar16);
								bVar20 = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), bVar19, vVar16, 0.0f, 0.0f, 0.0f);
								SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar20, true);
								Function_12(bVar20, 0);
								SNAP_ACTOR_TO_GRINGO(bVar20, bVar15, "Peasant", false, 0, 0);
								TASK_PRIORITY_SET(bVar20, 2);
								TASK_USE_GRINGO(bVar20, GET_GRINGO_FROM_OBJECT(bVar15), "Peasant", 4294967295, 1);
								DECOR_SET_OBJECT((*uParam1)[iVar1], "LeanRailActor2", bVar20);
							}
						}
						else if (DECOR_CHECK_EXIST((*uParam1)[iVar1], "WhisperActor1"))
						{
							if (!DECOR_CHECK_EXIST((*uParam1)[iVar1], "WhisperActor2"))
							{
								bVar21 = DECOR_GET_OBJECT((*uParam1)[iVar1], "Gringo");
								vVar22 = { 0.0f, 0.0f, 0.0f };
								if ((iVar1 % 6) == 0)
								{
									bVar25 = 299;
								}
								else if ((iVar1 % 6) == 1)
								{
									bVar25 = 274;
								}
								else if ((iVar1 % 6) == 2)
								{
									bVar25 = 240;
								}
								else if ((iVar1 % 6) == 3)
								{
									bVar25 = 320;
								}
								else if ((iVar1 % 6) == 4)
								{
									bVar25 = 256;
								}
								else if ((iVar1 % 6) == 5)
								{
									bVar25 = 283;
								}
								GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bVar21), "Peasant", &vVar22);
								bVar26 = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), bVar25, vVar22, 0.0f, 0.0f, 0.0f);
								SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar26, true);
								SNAP_ACTOR_TO_GRINGO(bVar26, bVar21, "Peasant", false, 0, 0);
								TASK_PRIORITY_SET(bVar26, 2);
								TASK_USE_GRINGO(bVar26, GET_GRINGO_FROM_OBJECT(bVar21), "Peasant", 4294967295, 1);
								DECOR_SET_OBJECT((*uParam1)[iVar1], "WhisperActor2", bVar26);
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 1;
}

int Function_12(bool bParam0, bool bParam1) //Position: 0x17E4 / 6116
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
		ITERATE_EVERYWHERE(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 2);
		ITERATE_ON_PARTIAL_NAME(bVar1, "nSharedLaw");
		bVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(bVar1));
		DESTROY_ITERATOR(bVar1);
	}
	else
	{
		bVar0 = bParam1;
	}
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(bParam0, bVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(bParam0, bVar0);
	CLEAN_OBJECTSET(bVar0);
	return 1;
}

var Function_13() //Position: 0x185D / 6237
{
	int iVar0;
	
	return iVar0;
}

float Function_14(bool bParam0, bool bParam1) //Position: 0x1865 / 6245
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_15(bParam0);
			vVar0 = { StackVal, StackVal, Function_15(bParam0) };
			Function_15(bParam1);
			vVar3 = { StackVal, StackVal, Function_15(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_15(bool bParam0) //Position: 0x1900 / 6400
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

var Function_16(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x196C / 6508
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_25(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_24(iParam1))
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
	if (!Function_19(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	iVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(iVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(iVar3, iParam1);
		SET_CRIME_VICTIM(iVar3, bParam3);
		SET_CRIME_CRIMINAL(iVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(iVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(iVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(iVar3, vVar0);
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_13(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(iVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(iVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(iVar3, 3);
			Function_17();
		}
		SET_CRIME_FACTION(StackVal, iVar3);
		SET_CRIME_TALLIED(iVar3, 0);
		SET_CRIME_COUNTER(iVar3, 1);
		SET_CRIME_WORLD_REGION(iVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(iVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(iVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(iVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return iVar3;
}

void Function_17() //Position: 0x1BFC / 7164
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_18(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		iVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(iVar3))
		{
			SET_CRIME_WITNESSED(iVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_18(bool bParam0, bool bParam1) //Position: 0x1C5F / 7263
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

bool Function_19(bool bParam0) //Position: 0x1C8E / 7310
{
	if (Function_23(256))
	{
		return 0;
	}
	if (Function_23(262144))
	{
		return 0;
	}
	if (Function_22())
	{
		return 0;
	}
	if (!Function_23(1))
	{
		return 0;
	}
	if (!Function_23(4096))
	{
		return 0;
	}
	if (bParam0 && Function_21(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_23(2048))
	{
		return 0;
	}
	if (Function_20() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

var Function_20() //Position: 0x1D04 / 7428
{
	return NET_IS_MANAGER_INITIALIZED();
}

int Function_21(int iParam0) //Position: 0x1D0D / 7437
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_22() //Position: 0x1D1E / 7454
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

bool Function_23(int iParam0) //Position: 0x1D37 / 7479
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_24(int iParam0) //Position: 0x1D55 / 7509
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_25(int iParam0) //Position: 0x1D6B / 7531
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_26(var uParam0, int iParam1) //Position: 0x1D80 / 7552
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	vector3 vVar14;
	vector3 vVar17;
	bool bVar20;
	bool bVar21;
	vector3 vVar22;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	vector3 vVar28;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	vector3 vVar34;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	vector3 vVar40;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (!(*uParam0)[iVar0])
		{
			bVar1 = false;
			bVar1 = false;
			while (bVar1 < (GET_OBJECTSET_SIZE(Local_0.f_324) - 1))
			{
				if (!(*uParam0)[iVar0])
				{
					bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, Local_0.f_324);
					if (!DECOR_CHECK_EXIST(bVar2, "TimeStarted"))
					{
						if (!CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), bVar2, 1f, 1117126656, 1, 1, 0))
						{
							if (Function_14(bVar2, Global_34573) > 300.0f)
							{
								bVar3 = GET_OBJECT_NAME(bVar2);
								vVar4 = { 0.0f, 0.0f, 0.0f };
								GET_OBJECT_POSITION(bVar2, &vVar4);
								if (STRING_CONTAINS_STRING(bVar3, "mourn"))
								{
									vVar7 = { 0.0f, 0.0f, 0.0f };
									GET_OBJECT_ORIENTATION(bVar2, &vVar7);
									bVar10 = CREATE_GRINGO_IN_LAYOUT(Local_0, Function_13(), "mourn_loop", vVar4, vVar7);
									if ((iVar0 % 6) == 0)
									{
										bVar11 = 239;
										bVar12 = 299;
									}
									else if ((iVar0 % 6) == 1)
									{
										bVar11 = 274;
										bVar12 = 313;
									}
									else if ((iVar0 % 6) == 2)
									{
										bVar11 = 321;
										bVar12 = 240;
									}
									else if ((iVar0 % 6) == 3)
									{
										bVar11 = 320;
										bVar12 = 241;
									}
									else if ((iVar0 % 6) == 4)
									{
										bVar11 = 277;
										bVar12 = 256;
									}
									else if ((iVar0 % 6) == 5)
									{
										bVar11 = 283;
										bVar12 = 304;
									}
									bVar13 = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), bVar12, vVar4, 0.0f, 0.0f, 0.0f);
									SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar13, true);
									TASK_PRIORITY_SET(bVar13, 2);
									TASK_USE_GRINGO(bVar13, GET_GRINGO_FROM_OBJECT(bVar10), "UseCase1", 4294967295, 1);
									vVar14 = { 0.0f, 0.0f, 0.0f };
									GET_OBJECT_AXIS(bVar2, &vVar14, 2);
									vVar17 = { 0.0f, 0.0f, 0.0f };
									vVar17 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar14, vVar4, StackVal) * Vector(-1,75f, -1,75f, -1,75f), StackVal, StackVal) };
									bVar20 = CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_0, Function_13(), bVar11, vVar17, 0.0f, IntToFloat(RAND_INT_RANGE(false, 360)), 0.0f, "dead_ground_male");
									CLEAR_AREA_OF_GRASS(vVar17, 1,5f);
									bVar21 = CREATE_VOLUME_IN_LAYOUT(Local_0, Function_13(), 3, vVar4, 0.0f, 0.0f, 0.0f, 4.0f, 4.0f, 4.0f);
									ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(bVar21);
									DECOR_SET_OBJECT(bVar2, "Gringo", bVar10);
									DECOR_SET_OBJECT(bVar2, "Mourner", bVar13);
									DECOR_SET_OBJECT(bVar2, "Corpse", bVar20);
									DECOR_SET_OBJECT(bVar2, "Volume", bVar21);
									DECOR_SET_FLOAT(bVar2, "TimeStarted", GET_CURRENT_GAME_TIME());
									(*uParam0)[iVar0] = 1;
									(*iParam1)[iVar0] = bVar2;
									iVar0 = 999;
									bVar1 = 999;
								}
								else if (STRING_CONTAINS_STRING(bVar3, "illicit"))
								{
									vVar22 = { 0.0f, 0.0f, 0.0f };
									GET_OBJECT_ORIENTATION(bVar2, &vVar22);
									bVar25 = CREATE_GRINGO_IN_LAYOUT(Local_0, Function_13(), "dealer_and_customer", vVar4, vVar22);
									if ((iVar0 % 6) == 0)
									{
										bVar26 = 239;
									}
									else if ((iVar0 % 6) == 1)
									{
										bVar26 = 313;
									}
									else if ((iVar0 % 6) == 2)
									{
										bVar26 = 321;
									}
									else if ((iVar0 % 6) == 3)
									{
										bVar26 = 266;
									}
									else if ((iVar0 % 6) == 4)
									{
										bVar26 = 277;
									}
									else if ((iVar0 % 6) == 5)
									{
										bVar26 = 304;
									}
									bVar27 = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), bVar26, vVar4, 0.0f, 0.0f, 0.0f);
									SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar27, true);
									SNAP_ACTOR_TO_GRINGO(bVar27, bVar25, "UseCase1", true, 0, 0);
									TASK_PRIORITY_SET(bVar27, 2);
									TASK_USE_GRINGO(bVar27, GET_GRINGO_FROM_OBJECT(bVar25), "UseCase1", 4294967295, 1);
									DECOR_SET_OBJECT(bVar2, "Gringo", bVar25);
									DECOR_SET_OBJECT(bVar2, "IllicitActor1", bVar27);
									DECOR_SET_FLOAT(bVar2, "TimeStarted", GET_CURRENT_GAME_TIME());
									(*uParam0)[iVar0] = 1;
									(*iParam1)[iVar0] = bVar2;
									iVar0 = 999;
									bVar1 = 999;
								}
								else if (STRING_CONTAINS_STRING(bVar3, "sitwhisper"))
								{
									vVar28 = { 0.0f, 0.0f, 0.0f };
									GET_OBJECT_ORIENTATION(bVar2, &vVar28);
									bVar31 = CREATE_GRINGO_IN_LAYOUT(Local_0, Function_13(), "mex_sitGround_tlkPsnt_link", vVar4, vVar28);
									if ((iVar0 % 6) == 0)
									{
										bVar32 = 239;
									}
									else if ((iVar0 % 6) == 1)
									{
										bVar32 = 313;
									}
									else if ((iVar0 % 6) == 2)
									{
										bVar32 = 321;
									}
									else if ((iVar0 % 6) == 3)
									{
										bVar32 = 266;
									}
									else if ((iVar0 % 6) == 4)
									{
										bVar32 = 277;
									}
									else if ((iVar0 % 6) == 5)
									{
										bVar32 = 304;
									}
									bVar33 = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), bVar32, vVar4, 0.0f, 0.0f, 0.0f);
									SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar33, true);
									SNAP_ACTOR_TO_GRINGO(bVar33, bVar31, "UseCase1", true, 0, 0);
									TASK_PRIORITY_SET(bVar33, 2);
									TASK_USE_GRINGO(bVar33, GET_GRINGO_FROM_OBJECT(bVar31), "UseCase1", 4294967295, 1);
									DECOR_SET_OBJECT(bVar2, "Gringo", bVar31);
									DECOR_SET_OBJECT(bVar2, "WhisperActor1", bVar33);
									DECOR_SET_FLOAT(bVar2, "TimeStarted", GET_CURRENT_GAME_TIME());
									(*uParam0)[iVar0] = 1;
									(*iParam1)[iVar0] = bVar2;
									iVar0 = 999;
									bVar1 = 999;
								}
								else if (STRING_CONTAINS_STRING(bVar3, "leanWall"))
								{
									vVar34 = { 0.0f, 0.0f, 0.0f };
									GET_OBJECT_ORIENTATION(bVar2, &vVar34);
									bVar37 = CREATE_GRINGO_IN_LAYOUT(Local_0, Function_13(), "mex_leanWall_tlkPsnt_link", vVar4, vVar34);
									if ((iVar0 % 6) == 0)
									{
										bVar38 = 239;
									}
									else if ((iVar0 % 6) == 1)
									{
										bVar38 = 313;
									}
									else if ((iVar0 % 6) == 2)
									{
										bVar38 = 321;
									}
									else if ((iVar0 % 6) == 3)
									{
										bVar38 = 266;
									}
									else if ((iVar0 % 6) == 4)
									{
										bVar38 = 277;
									}
									else if ((iVar0 % 6) == 5)
									{
										bVar38 = 304;
									}
									bVar39 = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), bVar38, vVar4, 0.0f, 0.0f, 0.0f);
									SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar39, true);
									DEEQUIP_ACCESSORY(bVar39, 0);
									SNAP_ACTOR_TO_GRINGO(bVar39, bVar37, "UseCase1", true, 0, 0);
									TASK_PRIORITY_SET(bVar39, 2);
									TASK_USE_GRINGO(bVar39, GET_GRINGO_FROM_OBJECT(bVar37), "UseCase1", 4294967295, 1);
									DECOR_SET_OBJECT(bVar2, "Gringo", bVar37);
									DECOR_SET_OBJECT(bVar2, "LeanActor1", bVar39);
									DECOR_SET_FLOAT(bVar2, "TimeStarted", GET_CURRENT_GAME_TIME());
									(*uParam0)[iVar0] = 1;
									(*iParam1)[iVar0] = bVar2;
									iVar0 = 999;
									bVar1 = 999;
								}
								else if (STRING_CONTAINS_STRING(bVar3, "leanRail"))
								{
									vVar40 = { 0.0f, 0.0f, 0.0f };
									GET_OBJECT_ORIENTATION(bVar2, &vVar40);
									bVar43 = CREATE_GRINGO_IN_LAYOUT(Local_0, Function_13(), "mex_leanRail_tlkPsnt", vVar4, vVar40);
									if ((iVar0 % 6) == 0)
									{
										bVar44 = 391;
									}
									else if ((iVar0 % 6) == 1)
									{
										bVar44 = 392;
									}
									else if ((iVar0 % 6) == 2)
									{
										bVar44 = 393;
									}
									else if ((iVar0 % 6) == 3)
									{
										bVar44 = 379;
									}
									else if ((iVar0 % 6) == 4)
									{
										bVar44 = 380;
									}
									else if ((iVar0 % 6) == 5)
									{
										bVar44 = 382;
									}
									bVar45 = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), bVar44, vVar4, 0.0f, 0.0f, 0.0f);
									SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar45, true);
									Function_12(bVar45, 0);
									SNAP_ACTOR_TO_GRINGO(bVar45, bVar43, "UseCase1", true, 0, 0);
									TASK_PRIORITY_SET(bVar45, 2);
									TASK_USE_GRINGO(bVar45, GET_GRINGO_FROM_OBJECT(bVar43), "UseCase1", 4294967295, 1);
									DECOR_SET_OBJECT(bVar2, "Gringo", bVar43);
									DECOR_SET_OBJECT(bVar2, "LeanRailActor1", bVar45);
									DECOR_SET_FLOAT(bVar2, "TimeStarted", GET_CURRENT_GAME_TIME());
									(*uParam0)[iVar0] = 1;
									(*iParam1)[iVar0] = bVar2;
									iVar0 = 999;
									bVar1 = 999;
								}
							}
						}
					}
				}
				bVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_27(int iParam0) //Position: 0x2565 / 9573
{
	bool bVar0;
	bool bVar1;
	
	*iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_0, "MarketPatSquad"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 381, *(&Local_0 + 672[06]), *(&Local_0 + 672[06] + 12));
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	SQUAD_JOIN(bVar0, *iParam0);
	bVar1 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH(false, Local_0.f_1236, 1, 1, 0, 0, 0.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM_REPEATEDLY(bVar0, bVar1, 4294967295);
	Function_12(bVar0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 379, *(&Local_0 + 672[16]), *(&Local_0 + 672[16] + 12));
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	SQUAD_JOIN(bVar0, *iParam0);
	bVar1 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH(false, Local_0.f_1236, 1, 1, 0, 0, -0,75f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM_REPEATEDLY(bVar0, bVar1, 4294967295);
	Function_12(bVar0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 379, *(&Local_0 + 672[26]), *(&Local_0 + 672[26] + 12));
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
	SQUAD_JOIN(bVar0, *iParam0);
	bVar1 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH(false, Local_0.f_1236, 1, 1, 0, 0, 0,85f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM_REPEATEDLY(bVar0, bVar1, 4294967295);
	Function_12(bVar0, 0);
	Function_28(*iParam0, 0);
	return;
}

void Function_28(bool bParam0, int iParam1) //Position: 0x2698 / 9880
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_29(int iParam0) //Position: 0x26CF / 9935
{
	(*iParam0)[4] = CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_0, Function_13(), 250, *(&Local_0 + 144[46]), *(&Local_0 + 144[46] + 12), "dead_ground_male");
	REFERENCE_OBJECT((*iParam0)[4]);
	CREATE_DECAL(3, *(&Local_0 + 144[46]), 1,2f, 1, 0);
	return;
}

void Function_30(int iParam0) //Position: 0x2727 / 10023
{
	(*iParam0)[3] = CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_0, Function_13(), 275, *(&Local_0 + 144[36]), *(&Local_0 + 144[36] + 12), "dead_ground_male");
	REFERENCE_OBJECT((*iParam0)[3]);
	CREATE_DECAL(3, *(&Local_0 + 144[36]), 0,8f, 1, 0);
	return;
}

void Function_31(int iParam0) //Position: 0x2780 / 10112
{
	(*iParam0)[2] = CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_0, Function_13(), 261, *(&Local_0 + 144[26]), *(&Local_0 + 144[26] + 12), "dead_ground_male");
	REFERENCE_OBJECT((*iParam0)[2]);
	CREATE_DECAL(3, *(&Local_0 + 144[26]), 1.0f, 1, 0);
	return;
}

void Function_32(int iParam0) //Position: 0x27D5 / 10197
{
	(*iParam0)[1] = CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_0, Function_13(), 250, *(&Local_0 + 144[16]), *(&Local_0 + 144[16] + 12), "dead_ground_male");
	REFERENCE_OBJECT((*iParam0)[1]);
	CREATE_DECAL(3, *(&Local_0 + 144[16]), 1,2f, 1, 0);
	return;
}

void Function_33(int iParam0) //Position: 0x282D / 10285
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		ADD_CORPSE_RETAINMENT_VOLUME_OBJ((*&Local_0 + 56)[iVar0]);
		ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ((*&Local_0 + 56)[iVar0]);
		vVar1 = { 0.0f, 0.0f, 0.0f };
		GET_VOLUME_CENTER((*&Local_0 + 56)[iVar0], &vVar1);
		CLEAR_AREA_OF_GRASS(vVar1, 2.0f);
		iVar0++;
	}
	(*iParam0)[0] = CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_0, Function_13(), 275, *(&Local_0 + 144[06]), *(&Local_0 + 144[06] + 12), "dead_ground_male");
	REFERENCE_OBJECT((*iParam0)[0]);
	CREATE_DECAL(3, *(&Local_0 + 144[06]), 0,8f, 1, 0);
	return;
}

void Function_34(int iParam0) //Position: 0x28CB / 10443
{
	int iVar0;
	
	(*iParam0)[0] = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 291, *(&Local_0 + 1088[06]), 0.0f, 0.0f, 0.0f);
	(*iParam0)[1] = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 285, *(&Local_0 + 1088[16]), 0.0f, 0.0f, 0.0f);
	(*iParam0)[2] = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 522, *(&Local_0 + 1088[26]), 0.0f, 0.0f, 0.0f);
	(*iParam0)[3] = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 521, *(&Local_0 + 1088[36]), 0.0f, 0.0f, 0.0f);
	(*iParam0)[4] = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 523, *(&Local_0 + 1088[46]), 0.0f, 0.0f, 0.0f);
	(*iParam0)[5] = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 293, *(&Local_0 + 1088[56]), 0.0f, 0.0f, 0.0f);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		SET_ACTOR_ALLOW_WEAPON_REACTIONS((*iParam0)[iVar0], true);
		DELETE_ALL_WEAPONS_FROM_ACTOR((*iParam0)[iVar0]);
		iVar0++;
	}
	return;
}

void Function_35(int iParam0) //Position: 0x29A4 / 10660
{
	int iVar0;
	
	(*iParam0)[0] = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 379, *(&Local_0 + 672[36]), *(&Local_0 + 672[36] + 12));
	TASK_PRIORITY_SET((*iParam0)[0], 2);
	TASK_STAND_STILL((*iParam0)[0], -1.0f, 1, 0);
	(*iParam0)[1] = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 391, *(&Local_0 + 672[46]), *(&Local_0 + 672[46] + 12));
	TASK_PRIORITY_SET((*iParam0)[1], 2);
	TASK_STAND_STILL((*iParam0)[1], -1.0f, 1, 0);
	(*iParam0)[2] = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 392, *(&Local_0 + 672[56]), *(&Local_0 + 672[56] + 12));
	TASK_PRIORITY_SET((*iParam0)[2], 2);
	TASK_STAND_STILL((*iParam0)[2], -1.0f, 1, 0);
	(*iParam0)[3] = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 380, *(&Local_0 + 672[96]), *(&Local_0 + 672[96] + 12));
	TASK_PRIORITY_SET((*iParam0)[3], 2);
	TASK_STAND_STILL((*iParam0)[3], -1.0f, 1, 0);
	(*iParam0)[4] = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 381, *(&Local_0 + 672[106]), *(&Local_0 + 672[106] + 12));
	TASK_PRIORITY_SET((*iParam0)[4], 2);
	TASK_STAND_STILL((*iParam0)[4], -1.0f, 1, 0);
	(*iParam0)[5] = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 382, *(&Local_0 + 672[66]), *(&Local_0 + 672[66] + 12));
	TASK_PRIORITY_SET((*iParam0)[5], 2);
	TASK_STAND_STILL((*iParam0)[5], -1.0f, 1, 0);
	(*iParam0)[6] = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 393, *(&Local_0 + 672[76]), *(&Local_0 + 672[76] + 12));
	TASK_PRIORITY_SET((*iParam0)[6], 2);
	TASK_STAND_STILL((*iParam0)[6], -1.0f, 1, 0);
	(*iParam0)[7] = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 392, *(&Local_0 + 672[86]), *(&Local_0 + 672[86] + 12));
	TASK_PRIORITY_SET((*iParam0)[7], 2);
	TASK_STAND_STILL((*iParam0)[7], -1.0f, 1, 0);
	(*iParam0)[8] = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 379, *(&Local_0 + 672[116]), *(&Local_0 + 672[116] + 12));
	TASK_PRIORITY_SET((*iParam0)[8], 2);
	TASK_STAND_STILL((*iParam0)[8], -1.0f, 1, 0);
	(*iParam0)[9] = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 380, *(&Local_0 + 672[126]), *(&Local_0 + 672[126] + 12));
	TASK_PRIORITY_SET((*iParam0)[9], 2);
	TASK_STAND_STILL((*iParam0)[9], -1.0f, 1, 0);
	(*iParam0)[10] = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 382, *(&Local_0 + 672[136]), *(&Local_0 + 672[136] + 12));
	TASK_PRIORITY_SET((*iParam0)[10], 2);
	TASK_STAND_STILL((*iParam0)[10], -1.0f, 1, 0);
	(*iParam0)[11] = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 381, *(&Local_0 + 672[146]), *(&Local_0 + 672[146] + 12));
	TASK_PRIORITY_SET((*iParam0)[11], 2);
	TASK_STAND_STILL((*iParam0)[11], -1.0f, 1, 0);
	(*iParam0)[12] = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 393, *(&Local_0 + 672[156]), *(&Local_0 + 672[156] + 12));
	TASK_PRIORITY_SET((*iParam0)[12], 2);
	TASK_STAND_STILL((*iParam0)[12], -1.0f, 1, 0);
	(*iParam0)[13] = CREATE_ACTOR_IN_LAYOUT(Local_0, Function_13(), 391, *(&Local_0 + 672[166]), *(&Local_0 + 672[166] + 12));
	TASK_PRIORITY_SET((*iParam0)[13], 2);
	TASK_STAND_STILL((*iParam0)[13], -1.0f, 1, 0);
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (IS_ACTOR_VALID((*iParam0)[iVar0]))
		{
			Function_12((*iParam0)[iVar0], 0);
			DELETE_ALL_WEAPONS_FROM_ACTOR((*iParam0)[iVar0]);
			if (RAND_INT_RANGE(false, 10000) > 7500)
			{
				GIVE_WEAPON_TO_ACTOR((*iParam0)[iVar0], 43, false, 1, 1);
			}
			else if (RAND_INT_RANGE(false, 10000) > 5000)
			{
				GIVE_WEAPON_TO_ACTOR((*iParam0)[iVar0], 42, false, 1, 1);
			}
			else
			{
				GIVE_WEAPON_TO_ACTOR((*iParam0)[iVar0], 41, false, 1, 1);
			}
			SET_ACTOR_ALLOW_WEAPON_REACTIONS((*iParam0)[iVar0], true);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE((*iParam0)[iVar0], 0);
			if (GET_TASK_STATUS((*iParam0)[iVar0], 16) != 2 && GET_TASK_STATUS((*iParam0)[iVar0], 6) != 2)
			{
				TASK_PRIORITY_SET((*iParam0)[iVar0], 3);
				TASK_WANDER((*iParam0)[iVar0], -1.0f);
			}
			Function_12((*iParam0)[iVar0], 0);
		}
		iVar0++;
	}
	return;
}

void Function_36(int iParam0) //Position: 0x2DC7 / 11719
{
	struct<9> Var0;
	
	(*iParam0)[0] = FIRE_CREATE_HANDLE();
	GET_VOLUME_SCALE((*&Local_0 + 24)[0], &vVar0);
	bVar3 = ((vVar0.x + vVar0.z) / 2.0f);
	FIRE_CREATE_IN_VOLUME((*iParam0)[0], (*&Local_0 + 24)[0], FLOOR(bVar3), 1);
	FIRE_SET_DAMAGE_ALLOWED((*iParam0)[0], 0);
	(*iParam0)[1] = FIRE_CREATE_HANDLE();
	GET_VOLUME_SCALE((*&Local_0 + 24)[1], &vVar0);
	bVar3 = ((vVar0.x + vVar0.z) / 2.0f);
	FIRE_CREATE_IN_VOLUME((*iParam0)[1], (*&Local_0 + 24)[1], FLOOR(bVar3), 1);
	FIRE_SET_DAMAGE_ALLOWED((*iParam0)[1], 0);
	return;
}

void Function_37(var uParam0, int iParam1) //Position: 0x2E49 / 11849
{
	bool bVar0;
	
	*uParam0 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_0, "burnAHouse1", "script_fire_rebel05", *(&Local_0 + 92));
	UNK_0x6745191B(*uParam0, 0.0f, 0.0f, 0.0f);
	(*iParam1)[0] = CREATE_RMPTFX_EMITTER_ON_OBJECT(Function_13(), "fire_comp_beams", Local_0.f_1240, 0,6f, 0.0f, 0.0f, true, 0);
	UNK_0x6745191B((*iParam1)[0], 0.0f, 0.0f, 0.0f);
	(*iParam1)[1] = CREATE_RMPTFX_EMITTER_ON_OBJECT(Function_13(), "fire_comp_beams", Local_0.f_1244, 0,6f, 0.0f, 0.0f, true, 0);
	UNK_0x6745191B((*iParam1)[1], 0.0f, 0.0f, 0.0f);
	(*iParam1)[2] = CREATE_RMPTFX_EMITTER_ON_OBJECT(Function_13(), "fire_comp_beams", Local_0.f_1248, 0,6f, 0.0f, 0.0f, true, 0);
	UNK_0x6745191B((*iParam1)[2], 0.0f, 0.0f, 0.0f);
	OPEN_DOOR_DIRECTION(Function_38("escalara", "generalHouse04", 1), true);
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(*(&Local_0 + 116), 1.0f, "pot", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	return;
}

int Function_38(var uParam0, var uParam1, int iParam2) //Position: 0x2F74 / 12148
{
	return Function_39(Global_29006, uParam0, uParam1, iParam2);
}

int Function_39(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x2F86 / 12166
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_40(iParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(Global_29155[iParam010].f_32))
	{
		return "";
	}
	uParam1 = uParam1;
	strcpy(&cVar0, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, iParam3, 8);
	memcpy(&cVar2, Global_29155[iParam010].f_20, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, cParam2, 32);
	stradd(&cVar2, "*", 32);
	bVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(Global_29155[iParam010].f_32, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(bVar10);
}

bool Function_40(int iParam0) //Position: 0x3022 / 12322
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

vector3 Function_41() //Position: 0x3038 / 12344
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_0 = CREATE_LAYOUT("ESC_Revolution_layout");
	Local_0.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_burningHouseKillFX", 2, -4354,347f, 29,69187f, 4404,93f, 0.0f, 0.0f, 0.0f, 17,40064f, 19,38565f, 13,70503f);
	Local_0.f_36 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "FireSpawn_set");
	(*&Local_0 + 24)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_MarketFire", 2, -4260,887f, 18,25354f, 4422,752f, 0.0f, 5,354695f, 0.0f, 18,05478f, 6,831714f, 7,202285f);
	ADD_TO_VOLUME_SET(Local_0.f_36, (*&Local_0 + 24)[0]);
	(*&Local_0 + 24)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nv_BlkFire", 2, -4291,041f, 20,52724f, 4452,198f, 0.0f, -5,791025f, 0.0f, 3,262385f, 6,041996f, 3,262385f);
	ADD_TO_VOLUME_SET(Local_0.f_36, (*&Local_0 + 24)[1]);
	Local_0.f_52 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "ArmyVols_set");
	(*&Local_0 + 40)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_GatesWarn", 2, -4382,663f, 38,6398f, 4366,109f, 0.0f, 20,82043f, 0.0f, 19,59856f, 9,414167f, 13,72286f);
	ADD_TO_VOLUME_SET(Local_0.f_52, (*&Local_0 + 40)[0]);
	(*&Local_0 + 40)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_GatesCrime", 2, -4378,137f, 38,67825f, 4364,218f, 0.0f, 20,43596f, 0.0f, 9,237086f, 6,270405f, 8,935928f);
	ADD_TO_VOLUME_SET(Local_0.f_52, (*&Local_0 + 40)[1]);
	Local_0.f_88 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "DeadGuyRetain_set");
	(*&Local_0 + 56)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nv_retain1", 3, -4345,692f, 29,79711f, 4369,671f, 0.0f, 20.0f, 0.0f, 3,575107f, 3,575107f, 3,575107f);
	ADD_TO_VOLUME_SET(Local_0.f_88, (*&Local_0 + 56)[0]);
	(*&Local_0 + 56)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nv_retain2", 3, -4343,329f, 29,60184f, 4369,259f, 0.0f, 20.0f, 0.0f, 3,895025f, 3,895025f, 3,895025f);
	ADD_TO_VOLUME_SET(Local_0.f_88, (*&Local_0 + 56)[1]);
	(*&Local_0 + 56)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nv_retain3", 3, -4341,266f, 26,92565f, 4419,565f, 0.0f, 20.0f, 0.0f, 3,979709f, 3,979709f, 3,979709f);
	ADD_TO_VOLUME_SET(Local_0.f_88, (*&Local_0 + 56)[2]);
	(*&Local_0 + 56)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nv_retain4", 3, -4280.0f, 22,06027f, 4404.0f, 0.0f, 20.0f, 0.0f, 3,422232f, 3,422232f, 3,422232f);
	ADD_TO_VOLUME_SET(Local_0.f_88, (*&Local_0 + 56)[3]);
	(*&Local_0 + 56)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nv_retain5", 3, -4248,108f, 22,01111f, 4375,941f, 0.0f, 20.0f, 0.0f, 4,867959f, 4,867959f, 4,867959f);
	ADD_TO_VOLUME_SET(Local_0.f_88, (*&Local_0 + 56)[4]);
	(*&Local_0 + 56)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nv_retain6", 3, -4330,085f, 23,30758f, 4437,358f, 0.0f, 20.0f, 0.0f, 3,814618f, 3,814618f, 3,814618f);
	ADD_TO_VOLUME_SET(Local_0.f_88, (*&Local_0 + 56)[5]);
	(*&Local_0 + 56)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nv_retain7", 3, -4320.0f, 22,08628f, 4452f, 0.0f, 20.0f, 0.0f, 4,354775f, 4,354775f, 4,354775f);
	ADD_TO_VOLUME_SET(Local_0.f_88, (*&Local_0 + 56)[6]);
	*(&Local_0 + 92) = { -4349,924f, 32,588f, 4405,306f };
	*(&Local_0 + 92 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_0 + 116) = { -4349,537f, 29,29091f, 4405,546f };
	*(&Local_0 + 116 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_140 = CREATE_OBJECTSET_IN_LAYOUT("DeadPeopleSet", Local_0, 8, 0);
	*(&Local_0 + 144[06]) = { -4345,692f, 29,79711f, 4369,671f };
	*(&Local_0 + 144[06] + 12) = { 0.0f, -131,9727f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_0, "f_DeadGuy_Shot2", -4345,692f, 29,79711f, 4369,671f, 0.0f, -131,9727f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_0.f_140);
	*(&Local_0 + 144[16]) = { -4343,329f, 29,60184f, 4369,259f };
	*(&Local_0 + 144[16] + 12) = { 0.0f, -170,0992f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_0, "f_DeadGuy_Shot3", -4343,329f, 29,60184f, 4369,259f, 0.0f, -170,0992f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_0.f_140);
	*(&Local_0 + 144[26]) = { -4341,266f, 26,8896f, 4419,565f };
	*(&Local_0 + 144[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_0, "f_DeadGuy_Shot4", -4341,266f, 26,8896f, 4419,565f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_0.f_140);
	*(&Local_0 + 144[36]) = { -4320.0f, 22,08628f, 4452f };
	*(&Local_0 + 144[36] + 12) = { 0.0f, -90,09464f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_0, "f_DeadGuy_Shot5", -4320.0f, 22,08628f, 4452f, 0.0f, -90,09464f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_0.f_140);
	*(&Local_0 + 144[46]) = { -4248,016f, 22,14687f, 4375,824f };
	*(&Local_0 + 144[46] + 12) = { 0.0f, 50,0588f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_0, "f_DeadGuy_Shot9", -4248,016f, 22,14687f, 4375,824f, 0.0f, 50,0588f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_0.f_140);
	Local_0.f_268 = CREATE_OBJECTSET_IN_LAYOUT("HangingSet", Local_0, 8, 0);
	*(&Local_0 + 272[06]) = { -4289,735f, 18,17274f, 4427,229f };
	*(&Local_0 + 272[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_0, "f_HangingGround", -4289,735f, 18,17274f, 4427,229f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_0.f_268);
	*(&Local_0 + 272[16]) = { -4289,735f, 22,22264f, 4427,229f };
	*(&Local_0 + 272[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_0, "f_HangingTop", -4289,735f, 22,22264f, 4427,229f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_0.f_268);
	Local_0.f_324 = CREATE_OBJECTSET_IN_LAYOUT("SpawnableEventsSet", Local_0, 8, 0);
	*(&Local_0 + 328[06]) = { -4330,085f, 23,30758f, 4437,358f };
	*(&Local_0 + 328[06] + 12) = { 0.0f, 162,257f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_0, "f_mourn1", -4330,085f, 23,30758f, 4437,358f, 0.0f, 162,257f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_0.f_324);
	*(&Local_0 + 328[16]) = { -4280.0f, 22,06027f, 4404.0f };
	*(&Local_0 + 328[16] + 12) = { 0.0f, -108,7101f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_0, "f_mourn4", -4280.0f, 22,06027f, 4404.0f, 0.0f, -108,7101f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_0.f_324);
	*(&Local_0 + 328[26]) = { -4283,866f, 22,70337f, 4393,762f };
	*(&Local_0 + 328[26] + 12) = { 0.0f, -65,24591f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Illicit1", -4283,866f, 22,70337f, 4393,762f, 0.0f, -65,24591f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_0.f_324);
	*(&Local_0 + 328[36]) = { -4280,904f, 26,74273f, 4385,656f };
	*(&Local_0 + 328[36] + 12) = { 0.0f, -139,8945f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Illicit2", -4280,904f, 26,74273f, 4385,656f, 0.0f, -139,8945f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_0.f_324);
	*(&Local_0 + 328[46]) = { -4320,336f, 22,82858f, 4406,641f };
	*(&Local_0 + 328[46] + 12) = { 0.0f, -23,30747f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Illicit3", -4320,336f, 22,82858f, 4406,641f, 0.0f, -23,30747f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_0.f_324);
	*(&Local_0 + 328[56]) = { -4348,12f, 25,41882f, 4433,625f };
	*(&Local_0 + 328[56] + 12) = { 0.0f, -127,6161f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Illicit4", -4348,12f, 25,41882f, 4433,625f, 0.0f, -127,6161f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_0.f_324);
	*(&Local_0 + 328[66]) = { -4298,139f, 23,11464f, 4398,215f };
	*(&Local_0 + 328[66] + 12) = { 0,03796446f, 33,49698f, -0,6712919f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_0, "f_sitWhisper1", -4298,139f, 23,11464f, 4398,215f, 0,03796446f, 33,49698f, -0,6712919f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_0.f_324);
	*(&Local_0 + 328[76]) = { -4244,182f, 22,13372f, 4372,163f };
	*(&Local_0 + 328[76] + 12) = { 0.0f, 161,9269f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_0, "f_sitWhisper2", -4244,182f, 22,13372f, 4372,163f, 0.0f, 161,9269f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_0.f_324);
	*(&Local_0 + 328[86]) = { -4348,534f, 25,51694f, 4438,344f };
	*(&Local_0 + 328[86] + 12) = { 0.0f, -10,15285f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_0, "f_sitWhisper3", -4348,534f, 25,51694f, 4438,344f, 0.0f, -10,15285f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_0.f_324);
	*(&Local_0 + 328[96]) = { -4281,87f, 22,51319f, 4390,187f };
	*(&Local_0 + 328[96] + 12) = { 0.0f, 34,47406f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_0, "f_sitWhisper4", -4281,87f, 22,51319f, 4390,187f, 0.0f, 34,47406f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_0.f_324);
	*(&Local_0 + 328[106]) = { -4294,103f, 22,92861f, 4400,884f };
	*(&Local_0 + 328[106] + 12) = { 0.0f, 31,24819f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_0, "f_LeanWall1", -4294,103f, 22,92861f, 4400,884f, 0.0f, 31,24819f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_0.f_324);
	*(&Local_0 + 328[116]) = { -4281,579f, 22,67204f, 4385,995f };
	*(&Local_0 + 328[116] + 12) = { 0.0f, 111,8633f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_0, "f_LeanWall2", -4281,579f, 22,67204f, 4385,995f, 0.0f, 111,8633f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_0.f_324);
	*(&Local_0 + 328[126]) = { -4309,272f, 29,7553f, 4393,054f };
	*(&Local_0 + 328[126] + 12) = { 0.0f, 209,8055f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_0, "f_LeanRail1", -4309,272f, 29,7553f, 4393,054f, 0.0f, 209,8055f, 0.0f);
	DECOR_SET_BOOL(bVar20, "No2ndGuy", true);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_0.f_324);
	*(&Local_0 + 328[136]) = { -4313,022f, 26,87502f, 4408,517f };
	*(&Local_0 + 328[136] + 12) = { 0.0f, 226,3538f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_0, "f_LeanRail2", -4313,022f, 26,87502f, 4408,517f, 0.0f, 226,3538f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_0.f_324);
	Local_0.f_668 = CREATE_OBJECTSET_IN_LAYOUT("ArmySpawnsSet", Local_0, 8, 0);
	*(&Local_0 + 672[06]) = { -4280,034f, 18,07059f, 4451,833f };
	*(&Local_0 + 672[06] + 12) = { 0.0f, -78,65404f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_0, "f_ArmySpawn_Market1", -4280,034f, 18,07059f, 4451,833f, 0.0f, -78,65404f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_0.f_668);
	*(&Local_0 + 672[16]) = { -4280,286f, 18,07059f, 4453,558f };
	*(&Local_0 + 672[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_0, "f_ArmySpawn_Market2", -4280,286f, 18,07059f, 4453,558f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_0.f_668);
	*(&Local_0 + 672[26]) = { -4278,01f, 18,07059f, 4451,799f };
	*(&Local_0 + 672[26] + 12) = { 0.0f, -82,36483f, 0.0f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_0, "f_ArmySpawn_Market3", -4278,01f, 18,07059f, 4451,799f, 0.0f, -82,36483f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_0.f_668);
	*(&Local_0 + 672[36]) = { -4343,534f, 22,25142f, 4454,376f };
	*(&Local_0 + 672[36] + 12) = { 0.0f, 146,7909f, 0.0f };
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_0, "f_ArmySpawn_PHouse1", -4343,534f, 22,25142f, 4454,376f, 0.0f, 146,7909f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_0.f_668);
	*(&Local_0 + 672[46]) = { -4344,929f, 22,04174f, 4455,461f };
	*(&Local_0 + 672[46] + 12) = { 0.0f, -72,11633f, 0.0f };
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_0, "f_ArmySpawn_PHouse2", -4344,929f, 22,04174f, 4455,461f, 0.0f, -72,11633f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_0.f_668);
	*(&Local_0 + 672[56]) = { -4340,331f, 21,8104f, 4458,709f };
	*(&Local_0 + 672[56] + 12) = { 0.0f, 50,60968f, 0.0f };
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_0, "f_ArmySpawn_PHouse3", -4340,331f, 21,8104f, 4458,709f, 0.0f, 50,60968f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_0.f_668);
	*(&Local_0 + 672[66]) = { -4315,305f, 22,01973f, 4424,717f };
	*(&Local_0 + 672[66] + 12) = { 0.0f, -113,6209f, 0.0f };
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_0, "f_ArmySpawn_Fount1", -4315,305f, 22,01973f, 4424,717f, 0.0f, -113,6209f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_0.f_668);
	*(&Local_0 + 672[76]) = { -4313,543f, 21,97895f, 4424,892f };
	*(&Local_0 + 672[76] + 12) = { 0.0f, 92,49562f, 0.0f };
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_0, "f_ArmySpawn_Fount2", -4313,543f, 21,97895f, 4424,892f, 0.0f, 92,49562f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_0.f_668);
	*(&Local_0 + 672[86]) = { -4296,433f, 22,00521f, 4414,997f };
	*(&Local_0 + 672[86] + 12) = { 0.0f, -197,5029f, 0.0f };
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_0, "f_ArmySpawn_Fount3", -4296,433f, 22,00521f, 4414,997f, 0.0f, -197,5029f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_0.f_668);
	*(&Local_0 + 672[96]) = { -4334,677f, 26,32789f, 4419,263f };
	*(&Local_0 + 672[96] + 12) = { 0.0f, -236,6034f, 0.0f };
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_0, "f_ArmySpawn_Church1", -4334,677f, 26,32789f, 4419,263f, 0.0f, -236,6034f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_0.f_668);
	*(&Local_0 + 672[106]) = { -4332,959f, 26,32789f, 4420,268f };
	*(&Local_0 + 672[106] + 12) = { 0.0f, 180,243f, 0.0f };
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_0, "f_ArmySpawn_Church2", -4332,959f, 26,32789f, 4420,268f, 0.0f, 180,243f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_0.f_668);
	*(&Local_0 + 672[116]) = { -4343,749f, 30,11825f, 4381,919f };
	*(&Local_0 + 672[116] + 12) = { 0.0f, -159,3938f, 0.0f };
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_0, "f_ArmySpawn_Gallery1", -4343,749f, 30,11825f, 4381,919f, 0.0f, -159,3938f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_0.f_668);
	*(&Local_0 + 672[126]) = { -4342,061f, 30,08615f, 4382,198f };
	*(&Local_0 + 672[126] + 12) = { 0.0f, 125,3282f, 0.0f };
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_0, "f_ArmySpawn_Gallery2", -4342,061f, 30,08615f, 4382,198f, 0.0f, 125,3282f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_0.f_668);
	*(&Local_0 + 672[136]) = { -4342,951f, 30,10941f, 4383,746f };
	*(&Local_0 + 672[136] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_0, "f_ArmySpawn_Gallery3", -4342,951f, 30,10941f, 4383,746f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_0.f_668);
	*(&Local_0 + 672[146]) = { -4376,353f, 38,70368f, 4361,798f };
	*(&Local_0 + 672[146] + 12) = { 0.0f, 115,8763f, 0.0f };
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_0, "f_ArmyGate1", -4376,353f, 38,70368f, 4361,798f, 0.0f, 115,8763f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_0.f_668);
	*(&Local_0 + 672[156]) = { -4375,399f, 38,70368f, 4365,394f };
	*(&Local_0 + 672[156] + 12) = { 0.0f, 102,5001f, 0.0f };
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_0, "f_ArmyGate2", -4375,399f, 38,70368f, 4365,394f, 0.0f, 102,5001f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_0.f_668);
	*(&Local_0 + 672[166]) = { -4377,025f, 38,65844f, 4363,878f };
	*(&Local_0 + 672[166] + 12) = { 0,4253767f, 111,1136f, 0,6688941f };
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_0, "f_ArmyGate3", -4377,025f, 38,65844f, 4363,878f, 0,4253767f, 111,1136f, 0,6688941f);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_0.f_668);
	Local_0.f_1084 = CREATE_OBJECTSET_IN_LAYOUT("JailSpawnsSet", Local_0, 8, 0);
	*(&Local_0 + 1088[06]) = { -4354,323f, 30,07391f, 4383,296f };
	*(&Local_0 + 1088[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Jail1", -4354,323f, 30,07391f, 4383,296f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_0.f_1084);
	*(&Local_0 + 1088[16]) = { -4357,083f, 30,07391f, 4383,173f };
	*(&Local_0 + 1088[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Jail2", -4357,083f, 30,07391f, 4383,173f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_0.f_1084);
	*(&Local_0 + 1088[26]) = { -4356,064f, 30,07391f, 4383,389f };
	*(&Local_0 + 1088[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Jail3", -4356,064f, 30,07391f, 4383,389f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_0.f_1084);
	*(&Local_0 + 1088[36]) = { -4357,566f, 30,07158f, 4379,486f };
	*(&Local_0 + 1088[36] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Jail4", -4357,566f, 30,07158f, 4379,486f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_0.f_1084);
	*(&Local_0 + 1088[46]) = { -4357,838f, 30,07158f, 4374,739f };
	*(&Local_0 + 1088[46] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Jail5", -4357,838f, 30,07158f, 4374,739f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_0.f_1084);
	*(&Local_0 + 1088[56]) = { -4357,838f, 30,07158f, 4375,912f };
	*(&Local_0 + 1088[56] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Jail6", -4357,838f, 30,07158f, 4375,912f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_0.f_1084);
}

bool Function_42(bool bParam0) //Position: 0x4B70 / 19312
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_47();
	iVar1 = 0;
	if (!Function_7(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_46(bParam0[iVar03], 8);
		}
		else if (Function_45())
		{
			iVar1 = 1;
			Function_46(bParam0[iVar03], 8);
		}
		Function_46(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_7(bParam0[iVar03], 4))
		{
			if (!Function_7(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_7(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_7(bParam0[03], 8) || iVar1));
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
				Function_46(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_7(bParam0[iVar03], 4))
		{
			if (!Function_7(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_46(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_46(bParam0[iVar03], 2);
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
							Function_46(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_46(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_46(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_46(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_46(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_46(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_46(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_46(bParam0[iVar03], 2);
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
	Function_43();
	return 1;
}

void Function_43() //Position: 0x4EEB / 20203
{
	if (!Function_44(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_44(int iParam0) //Position: 0x4F2B / 20267
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_45() //Position: 0x4F47 / 20295
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

void Function_46(var uParam0, int iParam1) //Position: 0x4F72 / 20338
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_47() //Position: 0x4F83 / 20355
{
	if (!Function_44(128))
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

int Function_48() //Position: 0x4FC5 / 20421
{
	Function_50(&Local_0 + 4, "p_gen_debrisBoard07x", 0, 0);
	if (Function_42(&Local_0 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_49(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4FF9 / 20473
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_7(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_46(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_46(bParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*bParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_50(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x50C9 / 20681
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_51(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_46(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_51(var uParam0, int iParam1, int iParam2) //Position: 0x5101 / 20737
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_7(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_46(uParam0[iVar03], 4);
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

void Function_52(int iParam0) //Position: 0x51C5 / 20933
{
	int iVar0;
	
	if (Function_2(iParam0, 1) && Function_2(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

int Function_53(int iParam0) //Position: 0x51F9 / 20985
{
	int iVar0;
	
	if (!Function_58(iParam0))
	{
		return 0;
	}
	iVar0 = Function_57(iParam0);
	if (!Function_54(Function_57(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_54(int iParam0) //Position: 0x522F / 21039
{
	if (!Function_56(iParam0))
	{
		return 0;
	}
	if (!Function_55(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_55(int iParam0) //Position: 0x5253 / 21075
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_56(int iParam0) //Position: 0x5268 / 21096
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_57(int iParam0) //Position: 0x527F / 21119
{
	if (!Function_58(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_58(int iParam0) //Position: 0x5299 / 21145
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_59(int iParam0, bool bParam1) //Position: 0x52AF / 21167
{
	int iVar0;
	
	iVar0 = Function_57(iParam0);
	if (!Function_56(iVar0))
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

