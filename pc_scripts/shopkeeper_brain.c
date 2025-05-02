//Decompiled with MagicRDR v1.0
//Function Count : 260
//Statics Count : 2
//Natives Count : 386
//Parameters Count : 2

#region Local Var
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	struct<37> Var2;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar53;
	bool bVar54;
	var uVar55;
	var uVar56;
	int iVar57;
	int iVar58;
	var uVar59;
	var uVar60;
	var uVar61;
	bool bVar62;
	bool bVar63;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!IS_GRINGO_COMPONENT_VALID(&uScriptParam_0))
	{
		LOG_ERROR("Shopkeeper Brain: Attempting to attach a gringo brain that has no valid gringo base.");
		DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
	}
	Function_259(&uVar32);
	Var2 = false;
	*(&Var2 + 8) = &uScriptParam_0;
	iVar35 = 0;
	Var2.f_36 = 0;
	Var2.f_32 = 0;
	bVar53 = false;
	bVar54 = false;
	uVar55 = Function_258(&Var2);
	uVar56 = Function_257(&Var2);
	iVar57 = Function_256(&Var2);
	iVar58 = Function_255(&Var2);
	uVar60 = Function_254();
	if (IS_PERS_CHAR_VALID(&uVar60))
	{
		SET_PERS_CHAR_SAFE_ZONE(&uVar60, 150.0f);
	}
	while (IS_GRINGO_ACTIVE())
	{
		if (IS_PERS_CHAR_VALID(&uVar60))
		{
			Function_253(iVar35, &Var2);
			if (IS_PERS_CHAR_ALIVE(&uVar60))
			{
				if (!IS_ACTOR_VALID(&uVar59))
				{
					ACTIVATE_ACTOR_FOR_PERS_CHAR(&uVar60);
					uVar59 = Function_252();
					if (IS_ACTOR_VALID(&uVar59))
					{
						SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uVar59, 0.0f);
					}
				}
				if (!IS_VOLUME_VALID(&iVar57))
				{
					iVar57 = Function_256(&Var2);
				}
				bVar43 = Function_251(&Var2);
				bVar39 = Function_250(&iVar57, &uVar59);
				bVar48 = Function_249(&iVar57);
				if (bVar48 && bVar39)
				{
					bVar37 = true;
				}
				else
				{
					uVar61 = GET_TIME_OF_DAY();
					bVar37 = TIME_IS_IN_RANGE(&uVar61, &uVar55, &uVar56);
				}
				bVar36 = Function_248(9);
				bVar38 = Function_247(&uVar60);
				if (IS_ACTOR_VALID(&uVar59) && IS_ACTOR_VALID(&Global_54076))
				{
					if (bVar39)
					{
						if (!bVar49)
						{
							SET_ACTOR_IS_SHOPKEEPER(&uVar59, 1, &iVar57);
							AI_SET_ENABLE_DEAD_BODY_REACTIONS(&uVar59, 0);
							AI_CONVERSE_DISABLE(&uVar59);
							bVar49 = true;
							bVar51 = true;
						}
					}
					else
					{
						if (bVar49)
						{
							SET_ACTOR_IS_SHOPKEEPER(&uVar59, 0, &iVar57);
							AI_SET_ENABLE_DEAD_BODY_REACTIONS(&uVar59, 1);
							bVar49 = false;
						}
						if (!bVar37)
						{
							if (bVar51)
							{
								AI_CONVERSE_ENABLE(&uVar59);
								bVar51 = false;
							}
						}
					}
					if (bVar48)
					{
						if (!bVar47)
						{
							bVar47 = true;
							SAY_SINGLE_LINE_CONTEXT(&uVar59, 89, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							MEMORY_REPORT_POSITION_AUTO(&uVar59, &Global_54076, true);
							AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar59, &Global_54076, -1f, 0);
						}
					}
					else if (bVar47)
					{
						MEMORY_REPORT_POSITION_AUTO(&uVar59, &Global_54076, false);
						AI_GOAL_LOOK_CLEAR(&uVar59);
						bVar47 = false;
					}
					bVar50 = IS_ACTOR_HOGTIED(&uVar59);
					bVar40 = UNK_0x7A207FFE(&uVar59);
					bVar41 = ((!IS_AI_ACTOR_UNALERTED(&uVar59) || IS_AI_ACTOR_IN_COMBAT(&uVar59)) || AI_GET_IS_RETREATING(&uVar59));
					bVar46 = (IS_ACTOR_HANDSUP(&uVar59) || WAS_AI_ACTOR_PLAYER_WEAPON_THREATENED_BY(&uVar59, Function_246(), 3.0f));
					bVar42 = IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&Global_54076));
					if (bVar43)
					{
						bVar44 = Function_245(&uVar59);
					}
					else
					{
						bVar44 = false;
					}
				}
				else
				{
					bVar44 = false;
				}
				if (bVar44)
				{
					Function_238(&Var13, &Var2, &iVar57);
				}
				else if (((((((bVar36 && bVar37) && bVar39) && !Global_6646) && !bVar38) && !bVar50) && !bVar41) && !bVar46)
				{
					Function_238(&Var13, &Var2, &iVar57);
				}
				else
				{
					Function_237(&Var13);
				}
				if (iVar58 != 2 && !Function_236(Global_119937, 2))
				{
					Function_231(Function_246(), 2, 4, 0);
				}
				if (bVar43)
				{
					if (!Var13.f_16)
					{
						if (!iVar35 != 21 && !bVar44)
						{
							Function_237(&Var13);
						}
						iVar35 = 21;
						Function_204(&iVar35, &Var2, 1);
						Var2 = false;
					}
				}
				if (bVar44)
				{
					bVar45 = true;
				}
				else if ((((((((((((bVar36 && bVar37) && bVar39) && !Global_6646) && !bVar38) && IS_ACTOR_VALID(&uVar59)) && IS_ACTOR_VALID(&Global_54076)) && !bVar40) && !bVar41) && !bVar42) && !bVar43) && !bVar50) && !bVar46)
				{
					bVar45 = true;
				}
				else
				{
					bVar45 = false;
				}
				if (bVar45)
				{
					if (GRINGO_HAS_PENDING_MESSAGE())
					{
						bVar62 = false;
						bVar63 = false;
						switch (GRINGO_GET_MESSAGE_TYPE())
						{
							case 0x00000000:
								if (Function_202(&Var2, &Var13, &bVar63))
								{
									GRINGO_SET_REQUEST_STRING(Function_201(&Var2));
									bVar62 = true;
								}
								break;
							
							case 0x00000001:
								if (Function_202(&Var2, &Var13, &bVar63))
								{
									GRINGO_SET_REQUEST_STRING(Function_201(&Var2));
									bVar62 = true;
									if (bVar63)
									{
										Function_200(&Var13, &Var2, &iVar35);
										PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
									}
								}
								break;
							
							case 0x00000002:
								break;
						}
						GRINGO_SET_MESSAGE_RETURN(bVar62);
					}
				}
				if (Var13.f_16)
				{
					Var13.f_16 = Function_94(&iVar35, &Var13, &Var2, &Var23, iVar0);
					if (!Var13.f_16)
					{
						Function_17(&Var13, &Var23);
						Function_9(&Var13, &Var2, &iVar35, &uVar20);
					}
				}
				else
				{
					if (!Function_204(&iVar35, &Var2, 1))
					{
						iVar35 = 20;
					}
					if (bVar37)
					{
						if (IS_ACTOR_VALID(&uVar59))
						{
							if (!AI_HAS_ACTOR_THREATENED_RECENTLY(Function_246()))
							{
								if (!IS_ANY_SPEECH_PLAYING(&uVar59))
								{
									if (Var23.f_64)
									{
										SAY_SINGLE_LINE_CONTEXT(&uVar59, 88, Function_246(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
										bVar34 = RAND_FLOAT_RANGE(15.0f, 45.0f);
										Var23.f_64 = 0;
									}
									else if (Function_5(&uVar32, bVar34))
									{
										bVar34 = RAND_FLOAT_RANGE(15.0f, 45.0f);
										Function_259(&uVar32);
										SAY_SINGLE_LINE_CONTEXT(&uVar59, 87, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if (Var13.f_16)
				{
					Function_17(&Var13, &Var23);
					Function_9(&Var13, &Var2, &iVar35, &uVar20);
					Var13.f_16 = 0;
				}
				Function_237(&Var13);
				if (!bVar54)
				{
					bVar54 = true;
					Function_1("tutorial_kill_shop", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
		}
		else
		{
			if (!IS_PERS_CHAR_ALIVE(&uVar60))
			{
				if (!Function_236(Global_119934, 65536))
				{
					Function_231(Function_246(), 65536, 1, 0);
				}
			}
			Function_237(&Var13);
		}
		if (IS_ACTOR_VALID(&uVar59))
		{
			GRINGO_WAIT(0);
		}
		else
		{
			GRINGO_WAIT(1000);
		}
		if (bVar53)
		{
			PRINTSTRING("---SHOPKEEPER FLAGS---");
			PRINTNL();
			if (IS_PERS_CHAR_VALID(&uVar60))
			{
				PRINTSTRING(GET_OBJECT_NAME(&uVar60));
				PRINTNL();
			}
			if (bVar45)
			{
				PRINTSTRING("bCanVerifyRequest = TRUE");
			}
			else
			{
				PRINTSTRING("bCanVerifyRequest = FALSE");
			}
			PRINTNL();
			if (bVar44)
			{
				PRINTSTRING("bActiveOverride = TRUE");
			}
			else
			{
				PRINTSTRING("bActiveOverride = FALSE");
			}
			PRINTNL();
			if (bVar36)
			{
				PRINTSTRING("bShopFeatureAvailable = TRUE");
			}
			else
			{
				PRINTSTRING("bShopFeatureAvailable = FALSE");
			}
			PRINTNL();
			if (bVar37)
			{
				PRINTSTRING("bShopOpenTime = TRUE");
			}
			else
			{
				PRINTSTRING("bShopOpenTime = FALSE");
			}
			PRINTNL();
			if (bVar39)
			{
				PRINTSTRING("bShopkeeperInShop = TRUE");
			}
			else
			{
				PRINTSTRING("bShopkeeperInShop = FALSE");
			}
			PRINTNL();
			if (Global_6646)
			{
				PRINTSTRING("gbWanted = TRUE");
			}
			else
			{
				PRINTSTRING("gbWanted = FALSE");
			}
			PRINTNL();
			if (bVar38)
			{
				PRINTSTRING("bShopOutOfStock = TRUE");
			}
			else
			{
				PRINTSTRING("bShopOutOfStock = FALSE");
			}
			PRINTNL();
			if (bVar40)
			{
				PRINTSTRING("bShopkeeperKnockedOut = TRUE");
			}
			else
			{
				PRINTSTRING("bShopkeeperKnockedOut = FALSE");
			}
			PRINTNL();
			if (bVar41)
			{
				PRINTSTRING("bShopkeeperAlerted = TRUE");
			}
			else
			{
				PRINTSTRING("bShopkeeperAlerted = FALSE");
			}
			PRINTNL();
			if (bVar42)
			{
				PRINTSTRING("bPlayerCarryingHogtiedGuy = TRUE");
			}
			else
			{
				PRINTSTRING("bPlayerCarryingHogtiedGuy = FALSE");
			}
			PRINTNL();
			if (bVar43)
			{
				PRINTSTRING("bShopkeeperStolen = TRUE");
			}
			else
			{
				PRINTSTRING("bShopkeeperStolen = FALSE");
			}
			PRINTNL();
			if (bVar46)
			{
				PRINTSTRING("bShopkeeperThreatenedByPlayerRecently = TRUE");
			}
			else
			{
				PRINTSTRING("bShopkeeperThreatenedByPlayerRecently = FALSE");
			}
			PRINTNL();
		}
	}
	Function_237(&Var13);
	if (Var13.f_16)
	{
		Function_17(&Var13, &Var23);
		Function_9(&Var13, &Var2, &iVar35, &uVar20);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x94C / 2380
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_2(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_2(int iParam0) //Position: 0x9D7 / 2519
{
	char* cVar0[16];
	
	if (!Function_3())
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

bool Function_3() //Position: 0xA16 / 2582
{
	if (Function_4(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_4(bool bParam0, int iParam1) //Position: 0xA31 / 2609
{
	return (bParam0 && iParam1) == 0;
}

bool Function_5(int iParam0, float fParam1) //Position: 0xA3E / 2622
{
	if (Function_8(&iParam0))
	{
		if (Function_6(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_6(vector3 vParam0) //Position: 0xA5C / 2652
{
	if (Function_8(&vParam0))
	{
		if (Function_7(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_7(int iParam0) //Position: 0xB29 / 2857
{
	return Function_4(iParam0, 2);
}

bool Function_8(int iParam0) //Position: 0xB37 / 2871
{
	return Function_4(iParam0, 1);
}

void Function_9(struct<17> Param0) //Position: 0xB45 / 2885
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		GRINGO_ACTOR_DROP_ATTACHED_PROP(&Param0 + 24);
		GRINGO_REPORT_USE_FINISHED(&Param0 + 24, true);
		if (GRINGO_OWNS_ACTOR_ANIMS(&Param0 + 24))
		{
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&Param0 + 24);
		}
	}
	if (IS_ACTOR_VALID(Function_252()))
	{
		if (GRINGO_OWNS_ACTOR_ANIMS(Function_252()))
		{
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(Function_252());
		}
		uVar0 = GET_CURRENT_GRINGO(Function_252());
		if (IS_GRINGO_VALID(&uVar0))
		{
			GRINGO_DEACTIVATE_AND_RESET_ACTORS(&uVar0);
		}
		if (!Function_251(&bParam1))
		{
			TASK_PRIORITY_SET(Function_252(), 3);
		}
	}
	Function_16(&Param0);
	Function_12(&Param0);
	uVar1 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, &bParam1 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar1))
	{
		GRINGO_CLEAR_COMPONENT_USER(&uVar1);
	}
	Function_11(&uParam3);
	Function_10(&Param0);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	iParam2 = 1;
	Param0.f_16 = 0;
}

void Function_10(int iParam0) //Position: 0xC17 / 3095
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 32))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 32);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 40))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 40);
	}
	return;
}

void Function_11(int iParam0) //Position: 0xC47 / 3143
{
	if (IS_LAYOUTREF_VALID(&iParam0))
	{
		DESTROY_LAYOUT(&iParam0);
	}
	Global_6636 = 0;
	return;
}

void Function_12(int iParam0) //Position: 0xC62 / 3170
{
	if (!Function_8(&iParam0))
	{
		Function_13(&iParam0, 0.0f);
	}
	return;
}

void Function_13(vector3 vParam0) //Position: 0xC79 / 3193
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_15(&vParam0, 1);
	Function_14(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_14(int iParam0, int iParam1) //Position: 0xC9E / 3230
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0xCB4 / 3252
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_16(vector3 vParam0) //Position: 0xCC5 / 3269
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

int Function_17(int iParam0, struct<29> Param1) //Position: 0xCDC / 3292
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	Global_6636 = 0;
	Global_93258 = 0;
	if (DECOR_CHECK_EXIST(&Global_54076, "ShopOutfit_MerchantSave"))
	{
		DECOR_REMOVE(&Global_54076, "ShopOutfit_MerchantSave");
		Function_28(17, 2, 0, 0, 1);
	}
	STREAMING_PREVENT_SNIPER_MODE(0);
	SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(Function_254(), 0);
	Param1.f_8 = 0;
	Param1.f_12 = 4294967295;
	Function_27();
	Function_24();
	UI_POP("ShopMenu");
	Param1.f_28 = 0;
	uVar0 = Function_23();
	if (IS_VOLUME_VALID(&uVar0))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
		DESTROY_VOLUME(&uVar0);
	}
	AI_STOP_IGNORING_ACTORS();
	AI_CLEAR_DONT_HARM_ACTOR(Function_252());
	AI_CLEAR_DONT_HARM_ACTOR(&iParam0 + 24);
	if (IS_ACTOR_VALID(Function_252()))
	{
		TASK_CLEAR(Function_252());
		uVar1 = _GET_OBJECT_ATTACHMENT(GET_OBJECT_FROM_ACTOR(Function_252()));
		if (IS_ATTACHMENT_VALID(&uVar1))
		{
			uVar2 = GET_OBJECT_ATTACHED_TO(&uVar1);
			if (IS_OBJECT_VALID(&uVar2))
			{
				DESTROY_OBJECT(&uVar2);
			}
		}
	}
	if (IS_ACTOR_VALID(&iParam0 + 24))
	{
		uVar3 = _GET_OBJECT_ATTACHMENT(GET_OBJECT_FROM_ACTOR(&iParam0 + 24));
		if (IS_ATTACHMENT_VALID(&uVar3))
		{
			uVar4 = GET_OBJECT_ATTACHED_TO(&uVar3);
			if (IS_OBJECT_VALID(&uVar4))
			{
				DESTROY_OBJECT(&uVar4);
			}
		}
	}
	Function_22();
	CAMERA_RESET(0);
	Function_21(&Param1, &iParam0 + 24, Function_252());
	Function_20();
	if (HUD_IS_FADED())
	{
		if (!IS_GAME_RESETTING())
		{
			HUD_FADE_IN(0,5f, 1065353216);
		}
	}
	if (!Function_19())
	{
		LOG_ERROR("SK_SHOP_CLEANUP: Failed SK_COUNTER_CAMERA_CLEANUP - this is an exceedingly bad thing!");
		return 0;
	}
	DESTROY_LAYOUT(Function_18());
	return 1;
}

int Function_18() //Position: 0xEB4 / 3764
{
	var uVar0;
	
	uVar0 = FIND_NAMED_LAYOUT("shop_layout");
	if (!IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar0 = CREATE_LAYOUT("shop_layout");
	}
	return &uVar0;
}

bool Function_19() //Position: 0xEEF / 3823
{
	SET_HUD_MAP_DRAW_ENABLED(1);
	DOF_POP();
	CAMERA_RESET(0);
	if (HUD_IS_FADED())
	{
		if (!IS_GAME_RESETTING())
		{
			HUD_FADE_IN(0.0f, 1065353216);
		}
	}
	return 1;
}

void Function_20() //Position: 0xF17 / 3863
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_PLAYER_CONTROL(GET_PLAYER_PADINDEX(&Global_54076), 1, 0, 0);
	}
	return;
}

void Function_21(struct<21> Param0) //Position: 0xF34 / 3892
{
	if (IS_ACTOR_VALID(&uParam1))
	{
		RESET_ANIM_SET_FOR_ACTOR(&uParam1, 0);
		if (!Global_6623)
		{
			SET_ACTOR_CAN_PLAY_GESTURES(&uParam1, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&uParam1, 1);
		}
	}
	if (IS_ACTOR_VALID(&uParam2))
	{
		RESET_ANIM_SET_FOR_ACTOR(&uParam2, 0);
		SET_ACTOR_CAN_PLAY_GESTURES(&uParam2, true);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(&uParam2, 1);
	}
	if (Param0.f_16)
	{
		REMOVE_ANIM_SET("store");
		REMOVE_ACTION_TREE("store");
		Param0.f_16 = 0;
		Param0.f_20 = 0;
	}
	return;
}

void Function_22() //Position: 0xFA7 / 4007
{
	struct<2> Var0;
	var uVar2;
	float fVar4;
	bool bVar5;
	var uVar6;
	
	GET_POSITION(&Global_54076, &Var0);
	fVar4 = LOCATE_NAMED_POINT(Var0, 25.0f, "player_shop_flag", 1);
	if (IS_OBJECT_VALID(&fVar4))
	{
		GET_OBJECT_POSITION(&fVar4, &Var0);
		Var0.f_4 = (StackVal + 0,5f);
		CLEAR_AMBIENT_OBJECTS_SPHERE(Var0, 1,5f, 4294967295);
		bVar5 = GET_OBJECT_HEADING(&fVar4);
		SET_ACTOR_HEADING(&Global_54076, bVar5, 1);
		FIND_GROUND_INTERSECTION(&Var0, 15.0f, &uVar2, &Var0);
		TELEPORT_ACTOR(&Global_54076, &uVar2, 1, 0, 0);
		if (IS_ACTOR_VALID(&Global_54076))
		{
			TASK_CLEAR(&Global_54076);
		}
		uVar6 = FIND_NEAREST_DOOR(&Var0, 10.0f);
		if (IS_DOOR_VALID(&uVar6))
		{
			OPEN_DOOR(&uVar6, &Var0, 1.0f);
		}
	}
	else
	{
		LOG_ERROR("SK_SHOP_TELEPORT_PLAYER_BY_DOOR: could not find player_shop_flag within 25.0m of the shop! Please add one.");
	}
	return;
}

var Function_23() //Position: 0x10D6 / 4310
{
	return GET_VOLUME_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Function_18(), "shop_volume"));
}

void Function_24() //Position: 0x10F3 / 4339
{
	var uVar0;
	
	if (Function_26())
	{
		STREAMING_EVICT_PROP(GET_ASSET_ID("p_inv_TreasureMoneyStack01x", 0));
	}
	uVar0 = Function_25();
	if (IS_OBJECT_VALID(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	return;
}

var Function_25() //Position: 0x1139 / 4409
{
	return FIND_OBJECT_IN_LAYOUT(Function_18(), "shop_moneybag");
}

bool Function_26() //Position: 0x1155 / 4437
{
	return STREAMING_IS_PROP_LOADED(GET_ASSET_ID("p_inv_TreasureMoneyStack01x", 0));
}

void Function_27() //Position: 0x1180 / 4480
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_28(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x1195 / 4501
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_93(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_248(3) || uParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_92(bParam0, 2))
	{
		Function_90(456, 1, 0, 0);
		Function_89(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_1(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_88(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_89(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_87(0, 0, 1, 1))
			{
				Function_48(1);
				Function_47(1, 0);
			}
			else
			{
				Function_46();
			}
		}
		Function_41(bParam0);
		if (StackVal && !Function_4(((((!Function_40() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_4((((Function_40() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_3())
		{
			if (!Function_236(Global_119934, 2))
			{
				Function_231(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_31();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_30(3, bParam1);
				break;
			
			case 0x00000005:
				Function_30(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_30(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_30(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_30(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_30(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_29(2, 24);
				break;
			
			case 0x00000003:
				Function_29(2, 25);
				break;
			
			case 0x0000000F:
				Function_29(2, 26);
				break;
			
			case 0x0000000D:
				Function_29(2, 27);
				break;
			
			case 0x0000000E:
				Function_29(2, 28);
				break;
			}
	}
}

void Function_29(int iParam0, int iParam1) //Position: 0x1434 / 5172
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bVar0);
	return;
	return;
}

void Function_30(int iParam0, bool bParam1) //Position: 0x149E / 5278
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&bParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_31() //Position: 0x150D / 5389
{
	if (Function_93(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_39(Global_42827);
			(&Global_42827 + 8) = Function_32(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_39(Global_42827);
			*(&Global_42827 + 8) = Function_32(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_32(int iParam0, int iParam1) //Position: 0x158D / 5517
{
	struct<2> Var0;
	struct<9> Var2;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar13 = 1;
	iVar14 = 1;
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[2]9] + 8;
					strcpy(&cVar5, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_35(6, 0) || Function_35(12, 0))
					{
						cVar4 = &Global_44085[Global_46760[1]9] + 8;
					}
					strcpy(&cVar5, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-2177,057f, 16,426f, 2626,285f);
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46736[2]9] + 8;
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[7]9] + 8;
					strcpy(&cVar5, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_34(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_35(5, 0))
					{
						Var0 = Vector(-4120,147f, 18,356f, 3039,531f);
						vVar2 = Vector(500.0f, 500.0f, 500.0f);
						iVar14 = 0;
					}
					strcpy(&cVar5, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46796[3]9] + 8;
					strcpy(&cVar5, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46850[3]9] + 8;
					strcpy(&cVar5, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46894[2]9] + 8;
					strcpy(&cVar5, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-4178,186f, 32,616f, 4582,207f);
					vVar2 = Vector(500.0f, 500.0f, 500.0f);
					strcpy(&cVar5, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46866[4]9] + 8;
					strcpy(&cVar5, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_34(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_34(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_34(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_34(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_35(26, 0))
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_34(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_34(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_34(27) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46894[3]9] + 8;
					strcpy(&cVar5, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46850[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46926[5]9] + 8;
					strcpy(&cVar5, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46926[2]9] + 8;
					strcpy(&cVar5, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_34(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_34(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_34(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_34(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_35(17, 0) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					strcpy(&cVar5, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46760[4]9] + 8;
					strcpy(&cVar5, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46760[2]9] + 8;
					strcpy(&cVar5, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_34(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_35(6, 0) && Function_34(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_34(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_35(9, 0) && Function_34(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_34(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_35(8, 0) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					strcpy(&cVar5, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_33(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_33(StackVal, vVar2))
			{
				if (GET_OBJECT_TYPE(&cVar4) == 9)
				{
					GET_VOLUME_SCALE(&cVar4, &vVar2);
				}
				else
				{
					vVar2 = Vector(200.0f, 200.0f, 200.0f);
				}
			}
		}
	}
	if (!Function_33(StackVal, vVar2))
	{
		iVar18 = ADD_BLIP_FOR_COORD(&Var0, 440, 0, 2, 0);
		SET_BLIP_SCALE(&iVar18, ((vVar2.x + vVar2.z) / 2.0f));
		SET_BLIP_COLOR(&iVar18, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(&iVar18, 3);
		SET_BLIP_NAME(&iVar18, &cVar5);
		return &iVar18;
	}
	return "";
}

bool Function_33(char* cParam0) //Position: 0x21F0 / 8688
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

int Function_34(int iParam0) //Position: 0x2208 / 8712
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_35(int iParam0, bool bParam1) //Position: 0x221D / 8733
{
	int iVar0;
	
	iVar0 = Function_37(iParam0);
	if (!Function_36(iVar0))
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

bool Function_36(int iParam0) //Position: 0x225B / 8795
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_37(int iParam0) //Position: 0x2272 / 8818
{
	if (!Function_38(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_38(int iParam0) //Position: 0x228C / 8844
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_39(int iParam0) //Position: 0x22A2 / 8866
{
	int iVar0;
	int iVar1;
	
	if (!Function_93(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

bool Function_40() //Position: 0x22F1 / 8945
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_41(bool bParam0) //Position: 0x231E / 8990
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 1))
	{
		Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 0);
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_88(bParam0, Function_45(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_88(bParam0, Function_45(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_44(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_43(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_42(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_42(int iParam0) //Position: 0x24CE / 9422
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_93(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

void Function_43(bool bParam0, bool bParam1) //Position: 0x2525 / 9509
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

var Function_44(int iParam0) //Position: 0x254A / 9546
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_93(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

int Function_45(bool bParam0) //Position: 0x25A0 / 9632
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_46() //Position: 0x25AC / 9644
{
	return;
}

void Function_47(int iParam0, int iParam1) //Position: 0x25B2 / 9650
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = iParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_48(bool bParam0) //Position: 0x25F1 / 9713
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_78();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_49();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_14(&Global_99144, 1);
		Function_14(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_49() //Position: 0x2646 / 9798
{
	Function_76();
	Function_75();
	Function_75();
	Function_74();
	Function_74();
	Function_73();
	Function_73();
	Function_56(0);
	Function_56(0);
	Function_54();
	Function_53();
	Function_52();
	Function_51();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_50();
	return;
}

void Function_50() //Position: 0x2691 / 9873
{
	Global_54086[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_54086[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_54086[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_54086[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_54086[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_54086[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_54086[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_54086[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_54086[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_54086[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_54086[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_54086[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_54086[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_54086[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_54086[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_54086[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_54086[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_54086[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_54086[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_54086[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_54086[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_51() //Position: 0x2797 / 10135
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_39290[1])
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
	Global_131716 = fVar0;
	return;
}

void Function_52() //Position: 0x27CA / 10186
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
					Global_119632[iVar23] = bVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119632[iVar13] = 4294967295;
		*(&Global_119632[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	return;
}

void Function_53() //Position: 0x295D / 10589
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
					Global_119329[iVar23] = bVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119329[iVar13] = 4294967295;
		*(&Global_119329[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	Global_119631 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_119631 == 4294967295 && Global_119631 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_119631) != 2)
		{
			Global_119631 = 4294967295;
		}
	}
	return;
}

void Function_54() //Position: 0x2B16 / 11030
{
	Function_55(&Global_42918, 1, 0);
	return;
}

void Function_55(struct<2317> Param0) //Position: 0x2B24 / 11044
{
	var uVar0;
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
	bool bVar13;
	
	uVar0 = Function_246();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || iParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(&uVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (Param0.f_1060 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, &uVar0);
			if (iVar9 != iVar7)
			{
				(*&Param0 + 92)[iVar1] = iVar9;
				(&Param0 + 92[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 92)[iVar1], &uVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			Param0.f_88 = GET_NUM_ACCESSORIES_IN_INVENTORY(&uVar0);
			iVar2 = 0;
			while (iVar2 < (Param0.f_88 - 1))
			{
				Param0[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, &uVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[bVar3] = _GET_AMMO_AMOUNT(&uVar0, bVar3, 0);
			bVar3++;
		}
		Param0.f_1272 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, bVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*&Param0 + 1208)[iVar4] = bVar8;
					Param0.f_1272 = bVar8;
				}
			}
			iVar4++;
		}
		Param0.f_2316 = GET_NUM_COLLECTABLES_IN_INVENTORY(&uVar0);
		iVar1 = 0;
		while (iVar1 < (Param0.f_2316 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, &uVar0);
			(*&Param0 + 1284)[iVar1] = uVar11;
			(&Param0 + 1284[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 1284)[iVar1], &uVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (bVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, bVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (bVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, bVar13);
		}
		else
		{
			Param0.f_1280 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*&Param0 + 2320)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

struct<8> Function_56(int iParam0) //Position: 0x2D41 / 11585
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
				if (iVar4 == 31 || iParam0)
				{
					iVar2 = ((Function_72((50 + iVar4)) + Function_72((183 + iVar4))) + Function_72((90 + iVar4)));
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
	Function_57(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_57(int iParam0, bool bParam1, bool bParam2) //Position: 0x2DE8 / 11752
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_71(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_70(iParam0);
	if (&bParam2)
	{
		Function_58(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_58(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x3084 / 12420
{
	char* cVar0[32];
	bool bVar8;
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
	strcpy(&Global_55480[iParam016] + 32, "", 32);
	if (&bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_55480[iParam016] + 32, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_55480[iParam016].f_124 != 3 || Global_55480[iParam016].f_96 != 21)
	{
		stradd(&Global_55480[iParam016] + 32, "$", 32);
	}
	stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
	switch (Global_55480[iParam016].f_96)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_55480[iParam016] + 32, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_55480[iParam016] + 32, " days", 32);
						}
						else
						{
							stradd(&Global_55480[iParam016] + 32, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar4), 32);
						stradd(&Global_55480[iParam016] + 32, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
						stradd(&Global_55480[iParam016] + 32, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
					stradd(&Global_55480[iParam016] + 32, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_55480[iParam016] + 32, " ", 32);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
				stradd(&Global_55480[iParam016] + 32, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_55480[iParam016] + 32, " mi", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " days", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_55480[iParam016] + 32, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_69(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		iVar21 = 0;
		switch (Global_55480[iParam016].f_96)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (&bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_68(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_68(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_66(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_63(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_60(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_59(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

int Function_59() //Position: 0x36C2 / 14018
{
	int iVar0;
	
	return &iVar0;
}

var Function_60(int iParam0) //Position: 0x36CB / 14027
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_61(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x36DC / 14044
{
	char* cVar0[32];
	
	if (&bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_62(char* cParam0) //Position: 0x37D3 / 14291
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_63(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x37EE / 14318
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_65(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_64(Function_65(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_64(int iParam0, int iParam1) //Position: 0x3855 / 14421
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_65(int iParam0, bool bParam1) //Position: 0x3867 / 14439
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_66(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3879 / 14457
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
	if (Global_55480[iParam016].f_112 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_55480[iParam016].f_112;
	}
	fVar1 = Global_55480[iParam016].f_108;
	if (((Function_67(iParam0) != 19 || Function_67(iParam0) != 17) || Function_67(iParam0) != 10) || Function_67(iParam0) != 9)
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_67(int iParam0) //Position: 0x39AD / 14765
{
	return Global_55480[iParam016].f_96;
}

float Function_68(int iParam0) //Position: 0x39BC / 14780
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_69(int iParam0) //Position: 0x39F5 / 14837
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_70(int iParam0) //Position: 0x3A32 / 14898
{
	if (Global_55480[iParam016].f_112 == 0.0f)
	{
		if (Global_54086[iParam0] < Global_55480[iParam016].f_112)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_55480[iParam016].f_108 == 0.0f)
	{
		if (Global_54086[iParam0] > Global_55480[iParam016].f_108)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_71(int iParam0, bool bParam1, bool bParam2) //Position: 0x3BCC / 15308
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_55480[iParam016].f_100;
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
			Global_54086[iVar1] = (Global_54086[iVar1] + 1.0f);
		}
		else
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + bParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = bParam1;
	}
	if (Global_55480[iVar116].f_112 == 0.0f)
	{
		if (Global_54086[iVar1] < Global_55480[iVar116].f_112)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_112;
		}
	}
	if (Global_55480[iVar116].f_108 == 0.0f)
	{
		if (Global_54086[iVar1] > Global_55480[iVar116].f_108)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_108;
		}
	}
	return 1;
}

int Function_72(bool bParam0) //Position: 0x3E10 / 15888
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_73() //Position: 0x3E51 / 15953
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
		iVar2 = ((Function_72((50 + iVar3) + 15) + Function_72((183 + iVar3) + 15)) + Function_72((90 + iVar3) + 15));
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
	Function_57(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_74() //Position: 0x3EDA / 16090
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
			iVar2 = ((Function_72((50 + iVar3) + 8) + Function_72((183 + iVar3) + 8)) + Function_72((90 + iVar3) + 8));
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
	Function_57(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_75() //Position: 0x3F71 / 16241
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_72((50 + iVar3)) + Function_72((183 + iVar3))) + Function_72((90 + iVar3)));
		if (iVar2 > iVar5)
		{
			bVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_57(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_76() //Position: 0x3FF0 / 16368
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_77(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_57(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_77(int iParam0, bool bParam1, int iParam2) //Position: 0x402E / 16430
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + bParam1);
	Function_71(iParam0, bParam1, 1);
	Function_70(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_58(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_78() //Position: 0x423A / 16954
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_3())
	{
		Function_84(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_84(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_79(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_79(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_33(StackVal, Var0))
	{
		Var0 = Global_54078;
		Var0.f_4 = (StackVal + 0,5f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	}
	else
	{
		Global_53524 = Var0;
	}
	Global_53524.f_208 = Global_53524.f_12;
	*(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

struct<8> Function_79(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x42F1 / 17137
{
	int iVar0;
	
	iVar0 = Function_82(&uParam2, &fParam3);
	if (Function_81(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_15(&Global_99144, 1);
			Function_14(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_15(&Global_99144, 2);
			Function_14(&Global_99144, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				uParam1 = 0;
			}
			else
			{
				uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			uParam0 = 89,88f;
			return StackVal, Vector(-2158,348f, 19,944f, 2597,452f);
		}
		uParam0 = Global_26200[iVar014].f_12;
		return StackVal, Global_26200[iVar014];
	}
	if (Global_26651)
	{
		Function_15(&Global_99144, 2);
		Function_14(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_80();
	return StackVal, Function_80();
}

struct<8> Function_80() //Position: 0x43E9 / 17385
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_81(int iParam0) //Position: 0x43F3 / 17395
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0, bool bParam1) //Position: 0x4409 / 17417
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_26200)
	{
		if (((Global_26200[iVar314].f_40 != 3 || Global_26200[iVar314].f_40 != 4) || (iVar3 != 15 && !&bParam0)) && (Global_26200[iVar314].f_52 != Global_43787 || bParam1))
		{
			if (Global_6606 || iVar3 == 6)
			{
				fVar2 = Function_83(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_26651)
	{
		fVar2 = Function_83(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_81(iVar0) && !&bParam1)
	{
		iVar0 = Function_82(&bParam0, 1);
	}
	return iVar0;
}

float Function_83(struct<2> Param0, struct<2> Param2) //Position: 0x44D5 / 17621
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_84(float fParam0, int iParam1) //Position: 0x44F2 / 17650
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_86(&Global_54076, &Var3);
	if (!Function_85(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -130,87f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135,09f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 206,26f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 106,17f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 343,64f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 165,38f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -97,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -6,71f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -180.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 22,55f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -104,45f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 270.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 59,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 20,74f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 94,65f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -39,9f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	bVar7 = VDIST(Var3, Var5);
	if (bVar7 > bVar0)
	{
		bVar0 = bVar7;
		Var1 = Var5;
	}
	Function_15(&Global_99144, 2);
	Function_14(&Global_99144, 1);
	iParam1 = 0;
	if (Function_33(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_85(int iParam0) //Position: 0x4D1E / 19742
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_4(uVar0, 0x1000000) || Function_4(uVar0, 0x2000000)) || Function_4(uVar0, 0x4000000)) || !Function_4(uVar0, 0x10000000));
}

void Function_86(var uParam0, int iParam1) //Position: 0x4D59 / 19801
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

bool Function_87(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x4D68 / 19816
{
	iParam0 = &iParam0;
	if (Global_6623 && !&iParam1 != 1)
	{
		return 1;
	}
	if (Global_6625 && !&iParam1 != 2)
	{
		return 1;
	}
	if (Global_6635 && !&iParam1 != 6)
	{
		return 1;
	}
	if (Global_6627 && !&iParam1 != 4)
	{
		return 1;
	}
	if (Global_6636 && iParam2)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (Global_6628 && !&iParam1 != 3)
	{
		return 1;
	}
	if (Global_93258 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_88(bool bParam0, int iParam1) //Position: 0x4E17 / 19991
{
	int iVar0;
	
	if (!Function_93(bParam0))
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

void Function_89(int iParam0, int iParam1) //Position: 0x4E76 / 20086
{
	if (!Function_93(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[iParam09].f_8 = (StackVal || iParam1);
	return;
}

int Function_90(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4ECB / 20171
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + TO_FLOAT(bParam1));
	Function_71(iParam0, TO_FLOAT(bParam1), 1);
	Function_70(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_58(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	Function_91(iParam0);
	return 1;
}

void Function_91(int iParam0) //Position: 0x50F3 / 20723
{
	switch (iParam0)
	{
		case 0x00000009:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x000001C9:
		case 0x000001CA:
		case 0x0000016B:
		case 0x0000016C:
		case 0x0000016D:
		case 0x000001D5:
		case 0x00000190:
		case 0x0000019A:
		case 0x000001DA:
		case 0x000001DB:
		case 0x000001DC:
		case 0x00000197:
		case 0x000001D4:
		case 0x00000199:
		case 0x00000291:
		case 0x00000292:
		case 0x00000293:
		case 0x00000290:
			Global_6662 = 1;
			break;
	}
	return;
}

bool Function_92(int iParam0, int iParam1) //Position: 0x5191 / 20881
{
	int iVar0;
	
	if (!Function_93(iParam0))
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

bool Function_93(int iParam0) //Position: 0x51BE / 20926
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

int Function_94(var uParam0, int iParam1, bool bParam2, struct<65> Param3) //Position: 0x51D4 / 20948
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar2 = Function_252();
	if (!IS_ACTOR_VALID(&iVar2))
	{
		LOG_ERROR("SK_PERFORM_SHOPKEEPER_USE_TASK: invalid shopkeeper actor");
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1 + 24))
	{
		LOG_ERROR("SK_PERFORM_SHOPKEEPER_USE_TASK: invalid user actor");
		return 0;
	}
	uVar3 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, &bParam2 + 8);
	if (!IS_GRINGO_COMPONENT_VALID(&uVar3))
	{
		LOG_ERROR("SK_PERFORM_SHOPKEEPER_USE_TASK: invalid useCase component on shopkeeper brain");
		return 0;
	}
	Function_199(&Param3);
	switch (uParam0)
	{
		case 0x0000001C:
			Function_198();
			Function_197(&Param3);
			Function_196(&Param3);
			uParam0 = 29;
			break;
		
		case 0x0000001D:
			if (Param3.f_16)
			{
				if (HAS_ANIM_SET_LOADED("store") && HAS_ACTION_TREE_LOADED("custom/store"))
				{
					MAKE_ACTOR_READY_FOR_ACTION(&iVar2, 0);
					if (Function_184(&iParam1, &bParam2, &Param3))
					{
						if (!Global_6623)
						{
							SHOP_SET_CURRENT_TAB(0);
						}
						Function_183();
						if (SHOP_IS_SELL_SELECTED())
						{
							Function_177(&iParam1, &bParam2);
						}
						else
						{
							Function_173(&bParam2);
						}
						Function_16(&iParam1);
						Function_12(&iParam1);
						Function_172(&Param3, &iParam1 + 24, &iVar2);
						Function_171(&iVar2);
						Param3.f_20 = 0;
						uParam0 = 55;
					}
					else
					{
						LOG_ERROR("SK_SHOP_COUNTER_INIT returned FALSE!");
						return 0;
					}
				}
			}
			break;
		
		case 0x00000037:
			if (Function_172(&Param3, &iParam1 + 24, &iVar2))
			{
				Function_171(&Global_54076);
				Function_171(&iVar2);
				if (Function_26())
				{
					if (!UI_ISACTIVE("ShopMenu"))
					{
						if (!Param3.f_28)
						{
							PRINTSTRING("ShopMenu has been pushed");
							PRINTNL();
							SHOP_LOCK_INPUT(1);
							UI_PUSH("ShopMenu");
							Param3.f_28 = 1;
						}
					}
					else
					{
						PRINTSTRING("ShopMenu is ACTIVE");
						PRINTNL();
						bVar0 = SHOP_IS_SELL_SELECTED();
						if (bVar0)
						{
							iVar1 = Function_170();
						}
						else
						{
							iVar1 = Function_169(&bParam2);
						}
						Function_154(&bParam2, bVar0, iVar1, bParam4);
						SHOP_REFRESH(1);
						if (!Function_153())
						{
							LOG_ERROR("GB_SHOP_SET_COUNTER_STREAMING: failed to create money prop");
						}
						if (HUD_IS_FADED())
						{
							if (!IS_GAME_RESETTING())
							{
								HUD_FADE_IN(0,5f, 1065353216);
							}
						}
						SAY_SINGLE_LINE_CONTEXT(Function_246(), 65, &iVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						uParam0 = 61;
					}
				}
				else
				{
					LOG_WARNING("GB_SHOP_SET_COUNTER_STREAMING: waiting on SK_SHOP_IS_MONEYBAG_PROP_LOADED");
				}
			}
			else
			{
				LOG_WARNING("GB_SHOP_SET_COUNTER_STREAMING: waiting on SK_SHOP_LOADED_ANIMS");
			}
			if (Function_6(&iParam1) < 10.0f)
			{
				LOG_ERROR("SK_SHOP_LOADED_ANIMS: time out!");
				return 0;
			}
			break;
		
		case 0x0000003D:
			if (UI_ISACTIVE("ShopMenu"))
			{
				bVar0 = SHOP_IS_SELL_SELECTED();
				EVENT_TRAP_CLEAR_EVENTS(&Global_93250 + 24);
				EVENT_TRAP_CLEAR_EVENTS(&Global_93250 + 8);
				EVENT_TRAP_CLEAR_EVENTS(&Global_93250 + 16);
				SHOP_REFRESH(1);
				Function_152(&Param3);
				if (bVar0)
				{
					Param3.f_32 = 1;
					uParam0 = 63;
				}
				else
				{
					uParam0 = 62;
				}
				SHOP_LOCK_INPUT(0);
			}
			else
			{
				LOG_WARNING("GB_SHOP_SET_COUNTER_SYNCH_PREUPDATE: shop UI NOT active, returning FALSE!");
				return 0;
			}
			break;
		
		case 0x0000003E:
			if (!Param3.f_56 && !IS_ANY_SPEECH_PLAYING(&Global_54076))
			{
				Param3.f_36 = GET_CURRENT_GAME_TIME();
				Param3.f_56 = 1;
				SAY_SINGLE_LINE_CONTEXT(&iVar2, 69, Function_246(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			if (Function_151(&Param3) == 1)
			{
				EVENT_TRAP_CLEAR_EVENTS(&Global_93250 + 24);
				Function_16(&iParam1);
				Function_12(&iParam1);
				uParam0 = 53;
				return 1;
			}
			if (Function_150())
			{
				Function_24();
				if (Param3.f_48)
				{
					SAY_SINGLE_LINE_CONTEXT(Function_246(), 418, &iVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					if (!Function_87(0, 0, 1, 1))
					{
						Function_48(1);
						Function_47(1, 0);
					}
				}
				else if (Param3.f_52)
				{
					SAY_SINGLE_LINE_CONTEXT(Function_246(), 348, &iVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					if (!Function_87(0, 0, 1, 1))
					{
						Function_48(1);
						Function_47(1, 0);
					}
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(Function_246(), 366, &iVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				Function_149(&Global_54076);
				Function_16(&iParam1);
				Function_12(&iParam1);
				uParam0 = 60;
				return 1;
			}
			if (Function_148(&Param3))
			{
				Function_102(&bParam2, &Param3);
			}
			break;
		
		case 0x0000003F:
			if (!Param3.f_60 && !IS_ANY_SPEECH_PLAYING(&Global_54076))
			{
				Param3.f_36 = GET_CURRENT_GAME_TIME();
				Param3.f_60 = 1;
				SAY_SINGLE_LINE_CONTEXT(&iVar2, 70, Function_246(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			if (Function_150())
			{
				Function_24();
				if (Param3.f_48)
				{
					SAY_SINGLE_LINE_CONTEXT(Function_246(), 418, &iVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					if (!Function_87(0, 0, 1, 1))
					{
						Function_48(1);
						Function_47(1, 0);
					}
				}
				else if (Param3.f_52)
				{
					SAY_SINGLE_LINE_CONTEXT(Function_246(), 348, &iVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					if (!Function_87(0, 0, 1, 1))
					{
						Function_48(1);
						Function_47(1, 0);
					}
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(Function_246(), 366, &iVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				Function_149(&Global_54076);
				Function_16(&iParam1);
				Function_12(&iParam1);
				uParam0 = 60;
				return 1;
			}
			if (Function_151(&Param3) == 0)
			{
				EVENT_TRAP_CLEAR_EVENTS(&Global_93250 + 24);
				Function_16(&iParam1);
				Function_12(&iParam1);
				uParam0 = 53;
				return 1;
			}
			if (Function_101(&Param3))
			{
				Function_102(&bParam2, &Param3);
			}
			break;
		
		case 0x0000003C:
			if (Function_6(&iParam1) < 3,5f)
			{
				LOG_WARNING("GB_SHOP_SET_COUNTER_COMPLETE_SALE - leaving store");
				Param3.f_64 = 1;
				return 0;
			}
			break;
		
		case 0x00000035:
			Function_100();
			Function_99(&Param3);
			Function_153();
			bVar0 = SHOP_IS_SELL_SELECTED();
			if (bVar0)
			{
				Param3.f_8 = Function_95(0);
				Function_177(&iParam1, &bParam2);
			}
			else
			{
				Function_173(&bParam2);
			}
			if (bVar0)
			{
				iVar1 = Function_170();
			}
			else
			{
				iVar1 = Function_169(&bParam2);
			}
			Function_154(&bParam2, bVar0, iVar1, bParam4);
			SHOP_REFRESH(1);
			if (bVar0)
			{
				SAY_SINGLE_LINE_CONTEXT(&iVar2, 70, Function_246(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Param3.f_36 = GET_CURRENT_GAME_TIME();
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT(&iVar2, 69, Function_246(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Param3.f_36 = GET_CURRENT_GAME_TIME();
			}
			uParam0 = 61;
			break;
		
		default:
			LOG_ERROR("SK_PERFORM_SHOPKEEPER_USE_TASK: Unnown State");
			return 0;
			break;
	}
	return 1;
}

var Function_95(int iParam0) //Position: 0x5A22 / 23074
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Function_170();
	if (iParam0 <= 0)
	{
		iParam0 = 0;
	}
	if (iParam0 > iVar0)
	{
		iParam0 = 0;
	}
	iVar2 = 24;
	iVar3 = iVar2;
	while (iParam0 <= iVar0)
	{
		if (Function_97(iParam0) >= 0)
		{
			iVar3 = Function_96(iParam0);
			if (iVar3 <= iVar2)
			{
				iVar2 = iVar3;
				bVar1 = iParam0;
			}
		}
		iParam0++;
	}
	if (iVar2 <= 24)
	{
		return bVar1;
	}
	LOG_WARNING("SK_SHOP_GET_FIRST_COLLECTIBLE_AVAILABLE: Could not find a Collectable with Total Quantity > 0");
	iVar2 = 4294967295;
	return 4294967295;
}

int Function_96(int iParam0) //Position: 0x5AE8 / 23272
{
	if (iParam0 > Global_94645)
	{
		LOG_ERROR("SK_SHOP_GET_TEMPORARY_HUD_INDEX_FOR_COLLECTIBLE: iItemIndex >= COUNT_OF(gShopCollectionData)");
		iParam0 = 0;
	}
	if (iParam0 <= 0)
	{
		LOG_ERROR("SK_SHOP_GET_TEMPORARY_HUD_INDEX_FOR_COLLECTIBLE: iItemIndex < 0");
		iParam0 = 0;
	}
	return Global_94645[iParam09].f_64;
}

int Function_97(int iParam0) //Position: 0x5BB4 / 23476
{
	bool bVar0;
	int iVar1;
	
	if (iParam0 > Global_94645)
	{
		LOG_ERROR("SK_SHOP_GET_COLLECTIBLE_TOTAL_QUANTITY: iCollectibleIndex >= COUNT_OF(gShopCollectionData)");
		iParam0 = 0;
		return 0;
	}
	if (iParam0 <= 0)
	{
		LOG_ERROR("SK_SHOP_GET_COLLECTIBLE_TOTAL_QUANTITY: iCollectibleIndex < 0");
		iParam0 = 0;
		return 0;
	}
	bVar0 = Function_98(iParam0);
	if (bVar0 == 4294967295)
	{
		return 0;
	}
	iVar1 = Function_72(bVar0);
	return iVar1;
}

var Function_98(int iParam0) //Position: 0x5C8E / 23694
{
	if (iParam0 > Global_94645)
	{
		LOG_ERROR("\SK_SHOP_GET_COLLECTIBLE_STAT_FROM_INDEX: iCollectibleIndex >= COUNT_OF(gShopCollectionData)");
		return 4294967295;
	}
	if (iParam0 <= 0)
	{
		LOG_ERROR("SK_SHOP_GET_COLLECTIBLE_STAT_FROM_INDEX: iCollectibleIndex < 0");
		return 4294967295;
	}
	return Global_94645[iParam09].f_60;
}

void Function_99(struct<13> Param0) //Position: 0x5D56 / 23894
{
	Param0.f_8 = 0;
	Param0.f_12 = 4294967295;
	return;
}

int Function_100() //Position: 0x5D68 / 23912
{
	DESTROY_LAYOUT(Function_18());
	return 1;
}

bool Function_101(int iParam0) //Position: 0x5D75 / 23925
{
	bool bVar0;
	
	if (DECOR_CHECK_EXIST(&iParam0 + 40, "Index"))
	{
		bVar0 = DECOR_GET_INT(&iParam0 + 40, "Index");
		if (SHOP_GET_ITEM_SELL_PRICE(bVar0) >= 4294967295)
		{
			return 1;
		}
	}
	return 0;
}

void Function_102(int iParam0, struct<53> Param1) //Position: 0x5DAE / 23982
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	bVar0 = SHOP_IS_SELL_SELECTED();
	if (DECOR_CHECK_EXIST(&Param1 + 40, "Index"))
	{
		bVar1 = DECOR_GET_INT(&Param1 + 40, "Index");
		bVar3 = SHOP_GET_ITEM_MISC_FLAG(bVar1);
	}
	if (DECOR_CHECK_EXIST(&Param1 + 40, "Quantity"))
	{
		bVar2 = DECOR_GET_INT(&Param1 + 40, "Quantity");
	}
	if (bVar2 < 0)
	{
		LOG_ERROR("SK_SHOP_HANDLE_SALES_AND_PURCHASES: iQuantity <= 0 - cannot buy or sell anything with 0 or negative quantity!");
		return;
	}
	if (bVar0)
	{
		if (Function_146(bVar3, bVar2, SHOP_GET_ITEM_SELL_PRICE(bVar1)))
		{
			Param1.f_48 = 1;
			Param1.f_52 = 0;
			Function_139(&iParam0);
			SHOP_REFRESH(0);
			SAY_SINGLE_LINE_CONTEXT(Function_252(), 90, Function_246(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
			PLAY_SOUND_FRONTEND("PLACE_BET_MASTER");
			Param1.f_36 = GET_CURRENT_GAME_TIME();
		}
	}
	else if (Function_137(&iParam0, bVar3, bVar2))
	{
		Function_139(&iParam0);
		Param1.f_48 = 0;
		SAY_SINGLE_LINE_CONTEXT(Function_252(), 90, Function_246(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
		iVar4 = SHOP_GET_ITEM_PURCHASE_PRICE(bVar1);
		iVar4 = (iVar4 * bVar2);
		Function_135(iVar4, 0);
		SHOP_SET_PLAYER_BANK(Function_134());
		Function_127(&iParam0, bVar3, bVar1, bVar2);
		if (iVar4 >= 0)
		{
			Function_126(&Global_54076, Function_252());
			Param1.f_52 = 1;
		}
		else
		{
			Param1.f_52 = 0;
		}
		PLAY_SOUND_FRONTEND("PLACE_BET_MASTER");
		Param1.f_36 = GET_CURRENT_GAME_TIME();
		if (Function_123(&iParam0, bVar3))
		{
			if (!Function_121(Function_122(&iParam0, bVar3)))
			{
				if (SHOP_GET_ITEM_QUANTITY(bVar1) >= 0)
				{
					SHOP_SET_ITEM_PURCHASE_PRICE(bVar1, ROUND(Function_103(&iParam0, bVar3)));
					SHOP_REFRESH(0);
				}
			}
		}
	}
	EVENT_TRAP_CLEAR_EVENTS(&Global_93250 + 8);
	EVENT_TRAP_CLEAR_EVENTS(&Global_93250 + 16);
	SHOP_REFRESH(0);
	return;
}

var Function_103(int iParam0, bool bParam1) //Position: 0x5FCA / 24522
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = Function_120(&iParam0, &bParam1, "PriceModifier");
	if (bVar0 >= 0.0f)
	{
		PRINTSTRING("SK_SHOP_GET_ITEM_PRICE: This item has no price modifier: ");
		PRINTINT(bParam1);
		PRINTNL();
		LOG_ERROR("SK_SHOP_GET_ITEM_PRICE: This item has no price modifier, defaulting to 1.0!");
		bVar0 = 1.0f;
	}
	bVar1 = 1.0f;
	bVar2 = 1.0f;
	if (Function_119(&iParam0, bParam1))
	{
		iVar3 = Function_118(&iParam0, bParam1);
		bVar1 = Global_93259[iVar35];
		if (Function_255(&iParam0) != 2 && Function_117(17))
		{
			bVar1 = (bVar1 * 0,5f);
		}
	}
	else if (Function_116(&iParam0, bParam1))
	{
		iVar4 = Function_113(&iParam0, bParam1);
		bVar1 = Global_94463[iVar45];
		if (Function_255(&iParam0) != 2 && Function_117(17))
		{
			bVar1 = (bVar1 * 0,5f);
		}
		if (iVar4 != 13 && Global_21684[Function_108(10, 1, 5)7].f_20 != 10)
		{
			bVar1 = (bVar1 * 0,5f);
		}
	}
	else if (Function_123(&iParam0, bParam1))
	{
		bVar5 = Function_122(&iParam0, bParam1);
		bVar1 = Global_93661[bVar55];
		if (Function_121(bVar5))
		{
			bVar2 = TO_FLOAT(Function_106(bVar5));
		}
	}
	else
	{
		PRINTSTRING("SK_SHOP_GET_ITEM_PRICE: This item has no base price: ");
		PRINTINT(bParam1);
		PRINTNL();
		LOG_ERROR("SK_SHOP_GET_ITEM_PRICE: This item has no base price, defaulting to 1.0!");
	}
	bVar6 = 1.0f;
	if (Function_105() < 1)
	{
		PRINTNL();
		PRINTSTRING("ITEM - low honor modifier");
		PRINTNL();
		if (Function_104())
		{
			bVar6 = 0,5f;
		}
		else
		{
			bVar6 = 1,5f;
		}
	}
	else if (Function_105() > 5)
	{
		if (!Function_104())
		{
			PRINTNL();
			PRINTSTRING("ITEM - high honor modifier");
			PRINTNL();
			bVar6 = 0,5f;
		}
	}
	PRINTSTRING("fBasePrice:");
	PRINTFLOAT(bVar1);
	PRINTSTRING("fPriceMod:");
	PRINTFLOAT(bVar0);
	PRINTSTRING("fExternalMod:");
	PRINTFLOAT(bVar2);
	PRINTSTRING("fHonorMod:");
	PRINTFLOAT(bVar6);
	PRINTNL();
	return (((bVar1 * bVar0) * bVar2) * bVar6);
}

bool Function_104() //Position: 0x62DE / 25310
{
	return DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "SHOP_SET_UNLAWFUL_TOWN");
}

int Function_105() //Position: 0x6307 / 25351
{
	return Global_21369.f_244;
}

int Function_106(bool bParam0) //Position: 0x6312 / 25362
{
	char* cVar0[32];
	struct<5> Var8;
	
	strcpy(&cVar0, Function_107(bParam0), 32);
	stradd(&cVar0, "_MOD_ITEM_PRICE", 32);
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), &cVar0))
	{
		DECOR_GET_VECTOR(GET_OBJECT_FROM_ACTOR(&Global_54076), &cVar0, &Var8);
		return ROUND(StackVal);
	}
	return 1;
}

var Function_107(bool bParam0) //Position: 0x635E / 25438
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

int Function_108(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6452 / 25682
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_112(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_109(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_109(bParam0, bParam1, bParam2, 4294967295);
}

int Function_109(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x64B0 / 25776
{
	var uVar0;
	
	if (!Function_111(bParam2))
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
	uVar0 = Function_112(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_110(uVar0);
	}
	if (&iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (&iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_21684[&iParam37] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_25536[&iParam3] = 0;
		Global_21684[&iParam37].f_4 = 0;
		Global_21684[&iParam37].f_8 = 0;
		Global_21684[&iParam37].f_12 = 0;
		Global_21684[&iParam37].f_16 = 0;
		Global_21684[&iParam37] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_110(int iParam0) //Position: 0x6614 / 26132
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iParam0)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_111(int iParam0) //Position: 0x6652 / 26194
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_112(int iParam0, int iParam1, int iParam2) //Position: 0x6667 / 26215
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

var Function_113(int iParam0, bool bParam1) //Position: 0x6687 / 26247
{
	char* cVar0[64];
	char* cVar16[64];
	int iVar32;
	bool bVar33;
	bool bVar34;
	
	strcpy(&cVar0, Function_114(&iParam0, &bParam1, "ITEM_/AMMO_/WE_Enum"), 64);
	if (!STRING_CONTAINS_STRING(&cVar0, "AMMO_"))
	{
		return 4294967295;
	}
	iVar32 = 17;
	bVar33 = false;
	bVar34 = 4294967295;
	bVar33 = false;
	while (bVar33 < iVar32)
	{
		strcpy(&cVar16, "AMMO_", 64);
		stradd(&cVar16, GET_AMMO_ENUM_STRING_FROM_ENUM(bVar33), 64);
		STRING_UPPER(&cVar16);
		if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
		{
			bVar34 = bVar33;
			return bVar34;
		}
		bVar33++;
	}
	return 4294967295;
}

var Function_114(int iParam0, int iParam1, bool bParam2) //Position: 0x670C / 26380
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar1 = Function_115(&iParam0, &iParam1);
	if (IS_GRINGO_COMPONENT_VALID(&iVar1))
	{
		uVar2 = GET_GRINGO_STRING_ATTR(&bParam2, &iVar1, &iVar0);
		if (iVar0 >= 0)
		{
			return &uVar2;
		}
		PRINTSTRING("SK_SHOP_GET_INDEXED_ITEM_STRING_ATTRIBUTE: Could not find this item attribute in ShopInventory: ");
		PRINTSTRING(&bParam2);
		PRINTNL();
		LOG_ERROR("SK_SHOP_GET_INDEXED_ITEM_STRING_ATTRIBUTE: Could not find item attribute in ShopInventory");
	}
	else
	{
		LOG_ERROR("SK_SHOP_GET_INDEXED_ITEM_STRING_ATTRIBUTE: could not find ShopInventory component");
	}
	return &iVar3;
}

var Function_115(int iParam0, int iParam1) //Position: 0x686D / 26733
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = Function_169(&iParam0);
	if (iParam1 <= 0)
	{
		iParam1 = (iVar2 - 1);
	}
	if (iParam1 > iVar2)
	{
		iParam1 = 0;
	}
	iVar0 = GRINGO_GET_FIRST_NAMED_CHILD("ShopInventory", 0, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&iVar0))
	{
		iVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iParam1, &iVar0);
		if (IS_GRINGO_COMPONENT_VALID(&iVar1))
		{
			return &iVar1;
		}
		PRINTSTRING("SK_SHOP_GET_INDEXED_ITEM_COMPONENT: Could not find this Item Component in ShopInventory: ");
		PRINTINT(iParam1);
		PRINTNL();
		LOG_ERROR("SK_SHOP_GET_INDEXED_ITEM_COMPONENT: could not find an Item Component in ShopInventory");
	}
	else
	{
		LOG_ERROR("SK_SHOP_GET_INDEXED_ITEM_COMPONENT: could not find ShopInventory component");
	}
	return &iVar1;
}

bool Function_116(int iParam0, bool bParam1) //Position: 0x69F6 / 27126
{
	var uVar0;
	
	uVar0 = Function_114(&iParam0, &bParam1, "ITEM_/AMMO_/WE_Enum");
	if (STRING_CONTAINS_STRING(&uVar0, "AMMO_"))
	{
		return 1;
	}
	return 0;
}

int Function_117(int iParam0) //Position: 0x6A31 / 27185
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

var Function_118(int iParam0, bool bParam1) //Position: 0x6A42 / 27202
{
	char* cVar0[64];
	char* cVar16[64];
	int iVar32;
	bool bVar33;
	bool bVar34;
	
	strcpy(&cVar0, Function_114(&iParam0, &bParam1, "ITEM_/AMMO_/WE_Enum"), 64);
	if (!STRING_CONTAINS_STRING(&cVar0, "WE_"))
	{
		return 4294967295;
	}
	bVar33 = false;
	iVar32 = 39;
	bVar34 = 4294967295;
	bVar33 = false;
	while (bVar33 < iVar32)
	{
		strcpy(&cVar16, "WE_", 64);
		stradd(&cVar16, GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar33), 64);
		STRING_UPPER(&cVar16);
		if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
		{
			bVar34 = bVar33;
			return bVar34;
		}
		bVar33++;
	}
	return 4294967295;
}

bool Function_119(int iParam0, bool bParam1) //Position: 0x6AC3 / 27331
{
	var uVar0;
	
	uVar0 = Function_114(&iParam0, &bParam1, "ITEM_/AMMO_/WE_Enum");
	if (STRING_CONTAINS_STRING(&uVar0, "WE_"))
	{
		return 1;
	}
	return 0;
}

var Function_120(int iParam0, int iParam1, int iParam2) //Position: 0x6AFC / 27388
{
	var uVar0;
	bool bVar1;
	
	bVar1 = -1.0f;
	uVar0 = Function_115(&iParam0, &iParam1);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		if (GET_GRINGO_FLOAT_ATTR(&bVar1, &iParam2, &uVar0))
		{
			return bVar1;
		}
		PRINTSTRING("SK_SHOP_GET_INDEXED_ITEM_FLOAT_ATTRIBUTE: Could not find this item attribute in ShopInventory: ");
		PRINTSTRING(&iParam2);
		PRINTNL();
		LOG_ERROR("SK_SHOP_GET_INDEXED_ITEM_FLOAT_ATTRIBUTE: Could not find item attribute in ShopInventory");
	}
	else
	{
		LOG_ERROR("SK_SHOP_GET_INDEXED_ITEM_FLOAT_ATTRIBUTE: could not find ShopInventory component");
	}
	return bVar1;
}

bool Function_121(bool bParam0) //Position: 0x6C55 / 27733
{
	char* cVar0[32];
	float fVar8;
	
	strcpy(&cVar0, Function_107(bParam0), 32);
	stradd(&cVar0, "_MOD_ITEM_PRICE", 32);
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), &cVar0))
	{
		DECOR_GET_VECTOR(GET_OBJECT_FROM_ACTOR(&Global_54076), &cVar0, &fVar8);
		if (fVar8 != TO_FLOAT(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_122(int iParam0, bool bParam1) //Position: 0x6CA6 / 27814
{
	char* cVar0[64];
	char* cVar16[64];
	int iVar32;
	int iVar33;
	
	strcpy(&cVar0, Function_114(&iParam0, &bParam1, "ITEM_/AMMO_/WE_Enum"), 64);
	if (!STRING_CONTAINS_STRING(&cVar0, "ITEM_"))
	{
		return 4294967295;
	}
	iVar32 = 4294967295;
	iVar33 = 0;
	iVar33 = 0;
	while (iVar33 < (79 - 1))
	{
		strcpy(&cVar16, "ITEM_", 64);
		stradd(&cVar16, Function_107(iVar33), 64);
		if (STRINGS_ARE_EQUAL(&cVar16, &cVar0))
		{
			iVar32 = iVar33;
			return iVar32;
		}
		iVar33++;
	}
	return 4294967295;
}

bool Function_123(int iParam0, bool bParam1) //Position: 0x6D23 / 27939
{
	var uVar0;
	char* cVar1[24];
	int iVar7;
	
	uVar0 = Function_114(&iParam0, &bParam1, "ITEM_/AMMO_/WE_Enum");
	if (STRING_CONTAINS_STRING(&uVar0, "ITEM_"))
	{
		STRING_CLEAR_TOKENIZER();
		SET_OWNERSHIP_STRAGGLER(&uVar0, "_");
		strcpy(&cVar1, STRING_GET_TOKEN(1), 24);
		if (STRING_NUM_TOKENS() >= 2)
		{
			iVar7 = 2;
			while (iVar7 <= STRING_NUM_TOKENS())
			{
				stradd(&cVar1, "_", 24);
				stradd(&cVar1, STRING_GET_TOKEN(iVar7), 24);
				iVar7++;
			}
		}
		if (Function_125(&cVar1) == 4294967295)
		{
			PRINTSTRING("SK_SHOP_IS_INDEXED_ITEM_ITEMENUM: Found INVALID ITEM in the Shop XML: ");
			PRINTSTRING(&uVar0);
			PRINTSTRING(" - failed to look up: ");
			PRINTSTRING(&cVar1);
			PRINTNL();
			LOG_ERROR("SK_SHOP_IS_INDEXED_ITEM_ITEMENUM: Found INVALID ITEM in the Shop XML - see spew");
			Function_124(&iParam0, &bParam1, "TotalAvailableQuantity", 0);
			return 0;
		}
		return 1;
	}
	return 0;
}

int Function_124(int iParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x6E99 / 28313
{
	var uVar0;
	
	uVar0 = Function_115(&iParam0, &iParam1);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		if (SET_GRINGO_INT_ATTR(bParam3, &uParam2, &uVar0))
		{
			return 1;
		}
		PRINTSTRING("SK_SHOP_SET_INDEXED_ITEM_INT_ATTRIBUTE: Could not find this item attribute in ShopInventory: ");
		PRINTSTRING(&uParam2);
		PRINTNL();
		LOG_ERROR("SK_SHOP_SET_INDEXED_ITEM_INT_ATTRIBUTE: Could not find item attribute in ShopInventory");
	}
	else
	{
		LOG_ERROR("SK_SHOP_SET_INDEXED_ITEM_INT_ATTRIBUTE: could not find ShopInventory component");
	}
	return 0;
}

int Function_125(int iParam0) //Position: 0x6FEB / 28651
{
	return SS_GET_STRING_ID(&iParam0, 1);
}

int Function_126(var uParam0, int iParam1) //Position: 0x6FF8 / 28664
{
	var uVar0;
	
	if (IS_ACTOR_PLAYER(&uParam0))
	{
		if (IS_ACTION_NODE_PLAYING(&uParam0, "store/player/give_cash"))
		{
			return 0;
		}
		if (IS_ACTION_NODE_PLAYING(&iParam1, "store/clerk/take_cash"))
		{
			return 0;
		}
		if (SET_ACTION_NODE_FOR_ACTOR(&uParam0, "store/player/give_cash"))
		{
			uVar0 = Function_25();
			if (IS_OBJECT_VALID(&uVar0))
			{
				if (ATTACH_PROP_TO_ANIM(&uParam0, &uVar0, "wrist_l_attachment", "grab", 1, ATTACH_SLOT_FROM_STRING("A")))
				{
					return SET_ACTION_NODE_FOR_ACTOR(&iParam1, "store/clerk/take_cash");
				}
				LOG_ERROR("SK_SHOP_PLAY_PAY_MONEY_ANIM: failed to ATTACH_PROP_TO_ANIM!");
			}
			else
			{
				LOG_ERROR("SK_SHOP_PLAY_PAY_MONEY_ANIM: SK_SHOP_GET_MONEYBAG_PROP returned an invalid object!");
			}
		}
		else
		{
			LOG_ERROR("SK_SHOP_PLAY_PAY_MONEY_ANIM: SET_ACTION_NODE_FOR_ACTOR returned false on payer!");
		}
	}
	else
	{
		LOG_ERROR("SK_SHOP_PLAY_BUYER_PAYS_ANIM: Only the player is supported at the moment!");
	}
	return 0;
}

void Function_127(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x7218 / 29208
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!SHOP_IS_ITEM_BLOCKED(uParam2))
	{
		iVar0 = Function_131(&iParam0, bParam1);
		iVar1 = (iVar0 - iParam3);
		if (iVar1 <= 0)
		{
			iVar1 = 0;
		}
		SHOP_SET_ITEM_QUANTITY(uParam2, iVar1);
		Function_130(&iParam0, bParam1, iVar1);
	}
	if (Function_123(&iParam0, bParam1))
	{
		bVar2 = Function_122(&iParam0, bParam1);
		if (Function_121(bVar2))
		{
			Function_128(bVar2, 1);
		}
	}
}

void Function_128(bool bParam0, int iParam1) //Position: 0x7278 / 29304
{
	char* cVar0[32];
	struct<2> Var8;
	
	strcpy(&cVar0, Function_107(bParam0), 32);
	stradd(&cVar0, "_MOD_ITEM_PRICE", 32);
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), &cVar0))
	{
		DECOR_GET_VECTOR(GET_OBJECT_FROM_ACTOR(&Global_54076), &cVar0, &Var8);
		Var8.f_8 = (StackVal - IntToFloat(&iParam1));
		if (StackVal < 0.0f)
		{
			DECOR_SET_VECTOR(GET_OBJECT_FROM_ACTOR(&Global_54076), &cVar0, Var8);
		}
		else
		{
			Function_129(bParam0);
		}
	}
	return;
}

void Function_129(bool bParam0) //Position: 0x72EA / 29418
{
	char* cVar0[32];
	
	strcpy(&cVar0, Function_107(bParam0), 32);
	stradd(&cVar0, "_MOD_ITEM_PRICE", 32);
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), &cVar0))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), &cVar0);
	}
	return;
}

int Function_130(int iParam0, var uParam1, bool bParam2) //Position: 0x732B / 29483
{
	return Function_124(&iParam0, &uParam1, "TotalAvailableQuantity", bParam2);
}

var Function_131(int iParam0, int iParam1) //Position: 0x7354 / 29524
{
	int iVar0;
	var uVar1;
	
	iVar0 = Function_133(&iParam0, &iParam1, "TotalAvailableQuantity");
	if (Function_123(&iParam0, iParam1))
	{
		uVar1 = Function_122(&iParam0, iParam1);
		if (Function_121(uVar1))
		{
			iVar0 = Function_132(uVar1);
		}
	}
	return iVar0;
}

int Function_132(bool bParam0) //Position: 0x73A3 / 29603
{
	char* cVar0[32];
	struct<9> Var8;
	
	strcpy(&cVar0, Function_107(bParam0), 32);
	stradd(&cVar0, "_MOD_ITEM_PRICE", 32);
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), &cVar0))
	{
		DECOR_GET_VECTOR(GET_OBJECT_FROM_ACTOR(&Global_54076), &cVar0, &vVar8);
		return ROUND(vVar8.z);
	}
	return 0;
}

var Function_133(int iParam0, int iParam1, bool bParam2) //Position: 0x73EF / 29679
{
	var uVar0;
	bool bVar1;
	
	bVar1 = 4294967295;
	uVar0 = Function_115(&iParam0, &iParam1);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		if (GET_GRINGO_INT_ATTR(&bVar1, &bParam2, &uVar0))
		{
			return bVar1;
		}
		PRINTSTRING("SK_SHOP_GET_INDEXED_ITEM_INT_ATTRIBUTE: Could not find this item attribute in ShopInventory: ");
		PRINTSTRING(&bParam2);
		PRINTNL();
		LOG_ERROR("SK_SHOP_GET_INDEXED_ITEM_INT_ATTRIBUTE: Could not find item attribute in ShopInventory");
	}
	else
	{
		LOG_ERROR("SK_SHOP_GET_INDEXED_ITEM_INT_ATTRIBUTE: could not find ShopInventory component");
	}
	return bVar1;
}

int Function_134() //Position: 0x7542 / 30018
{
	return Function_72(0);
}

int Function_135(bool bParam0, bool bParam1) //Position: 0x754C / 30028
{
	bool bVar0;
	
	bVar0 = Function_72(0);
	if ((Function_72(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_136(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_72(0));
	return 1;
}

bool Function_136(int iParam0, bool bParam1, int iParam2) //Position: 0x75DD / 30173
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(bParam1));
	Function_70(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_58(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

bool Function_137(int iParam0, bool bParam1, bool bParam2) //Position: 0x77DA / 30682
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	var uVar8;
	
	iVar0 = Function_133(&iParam0, &bParam1, "QuantityPerPurchase");
	bVar1 = (bParam2 * iVar0);
	if (Function_119(&iParam0, bParam1))
	{
		bVar2 = Function_118(&iParam0, bParam1);
		if (!bVar2 != 4294967295)
		{
			if (IS_WEAPONENUM_LOCKED(bVar2))
			{
				SET_WEAPONENUM_LOCKED(bVar2, 0);
			}
			GIVE_WEAPON_TO_ACTOR(&Global_54076, bVar2, 0.0f, 0, 0);
			if (((bVar2 != 24 || bVar2 != 23) || bVar2 != 25) || bVar2 != 29)
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMO_ENUM(bVar2), TO_FLOAT(bParam2), 0, 0);
			}
			else
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMO_ENUM(bVar2), GET_WEAPON_MAX_AMMO(bVar2), 0, 0);
			}
			if ((((bVar2 != 11 || bVar2 != 3) || bVar2 != 7) || bVar2 != 18) || bVar2 != 20)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(21))
				{
					AWARD_ACHIEVEMENT(21);
				}
				Function_90(469, 1, 0, 0);
				switch (bVar2)
				{
					case 0x0000000B:
						Function_29(6, 1);
						break;
					
					case 0x00000003:
						Function_29(6, 0);
						break;
					
					case 0x00000007:
						Function_29(6, 2);
						break;
					
					case 0x00000012:
						Function_29(6, 3);
						break;
					
					case 0x00000014:
						Function_29(6, 4);
						break;
					}
			}
			iVar3 = Function_169(&iParam0);
			Function_154(&iParam0, 0, iVar3, 0);
			return 1;
		}
	}
	if (Function_116(&iParam0, bParam1))
	{
		bVar4 = Function_113(&iParam0, bParam1);
		if (!bVar4 != 4294967295)
		{
			if (bVar1 >= 0)
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, bVar4, TO_FLOAT(bVar1), 0, 0);
			}
			else
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, bVar4, _GET_MAX_AMMO_AMOUNT(&Global_54076, bVar4), 0, 0);
			}
			if (_GET_AMMO_AMOUNT(&Global_54076, bVar4, 0) <= _GET_MAX_AMMO_AMOUNT(&Global_54076, bVar4))
			{
				SHOP_SET_ITEM_BLOCKED(bParam1, 1);
			}
			return 1;
		}
	}
	if (Function_123(&iParam0, bParam1))
	{
		bVar5 = Function_122(&iParam0, bParam1);
		if (!bVar5 != 4294967295)
		{
			iVar6 = 0;
			bVar7 = bVar1;
			if (bVar7 >= 0)
			{
				iVar6 = 1;
				while (iVar6 < bVar7)
				{
					ADD_ITEM(Function_107(bVar5), &Global_54076, 0);
					iVar6++;
				}
			}
			else
			{
				ADD_ITEM(Function_107(bVar5), &Global_54076, 0);
			}
			if (bVar5 == 16)
			{
				Function_138(15, 0);
			}
			return 1;
		}
	}
	uVar8 = Function_114(&iParam0, &bParam1, "ITEM_/AMMO_/WE_Enum");
	PRINTSTRING("SK_SHOP_GIVE_PLAYER_ITEM_BOUGHT: Could not give item to player: ");
	PRINTSTRING(&uVar8);
	PRINTNL();
	LOG_ERROR("SK_SHOP_GIVE_PLAYER_ITEM_BOUGHT: Could not give item to player!");
	return 0;
}

int Function_138(bool bParam0, bool bParam1) //Position: 0x7AA4 / 31396
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_107(bParam0), Function_246()) >= 0)
		{
			DELETE_ITEM(Function_107(bParam0), Function_246(), 0);
			return 1;
		}
	}
	DELETE_ITEM(Function_107(bParam0), Function_246(), 1);
	return 1;
}

void Function_139(int iParam0) //Position: 0x7AEC / 31468
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Function_255(&iParam0) != 2)
	{
		return;
	}
	if (!Function_145(17))
	{
		return;
	}
	if (Function_144(17))
	{
		return;
	}
	if (Function_88(17, 2))
	{
		return;
	}
	iVar1 = Function_108(Global_46760[0], 3, 5);
	iVar2 = Function_108(Global_46816[1], 3, 5);
	iVar3 = Function_108(Global_46850[0], 3, 5);
	iVar4 = Function_108(Global_46914[0], 3, 5);
	if (Global_43789 == Global_46760[0])
	{
		iVar0 = iVar1;
	}
	else if (Global_43789 == Global_46816[1])
	{
		iVar0 = iVar2;
	}
	else if (Global_43789 == Global_46850[0])
	{
		iVar0 = iVar3;
	}
	else if (Global_43789 == Global_46914[0])
	{
		iVar0 = iVar4;
	}
	if (Function_142(iVar0))
	{
		LOG_ERROR("DEED FOR STORE SET!");
	}
	else
	{
		LOG_ERROR("BAD DEED FOR STORE!");
	}
	if (Function_141(iVar0) == 0)
	{
		Function_140(iVar0, 1);
	}
	if ((((Function_141(iVar1) + Function_141(iVar2)) + Function_141(iVar3)) + Function_141(iVar4)) > 4)
	{
		DECOR_SET_BOOL(&Global_54076, "ShopOutfit_MerchantSave", true);
		LOG_ERROR("ALL VALID!");
	}
	else
	{
		LOG_ERROR("NOT COMPLETE!");
	}
	return;
}

void Function_140(int iParam0, int iParam1) //Position: 0x7C47 / 31815
{
	if (!Function_142(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_12 = iParam1;
	return;
}

int Function_141(int iParam0) //Position: 0x7C62 / 31842
{
	if (!Function_36(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

bool Function_142(int iParam0) //Position: 0x7C7C / 31868
{
	if (!Function_36(iParam0))
	{
		return 0;
	}
	if (!Function_143(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_143(int iParam0) //Position: 0x7CA0 / 31904
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_144(int iParam0) //Position: 0x7CB5 / 31925
{
	if (!Function_93(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_92(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_145(int iParam0) //Position: 0x7D06 / 32006
{
	if (!Function_93(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_92(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_146(int iParam0, int iParam1, int iParam2) //Position: 0x7D58 / 32088
{
	int iVar0;
	
	if (Function_136(Function_98(iParam0), iParam1, 0))
	{
		iVar0 = (iParam2 * iParam1);
		if (Function_147(iVar0, 0, 1))
		{
			SHOP_SET_PLAYER_BANK(Function_134());
			return 1;
		}
		LOG_ERROR("SK_SHOP_SELL_COLLECTIBLE_AND_MAKE_MONEY: Failed to increase MONEY!");
	}
	else
	{
		LOG_ERROR("SK_SHOP_SELL_COLLECTIBLE_AND_MAKE_MONEY: Failed to decrease stat of collectible you are selling!");
	}
	return 0;
}

bool Function_147(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7E3A / 32314
{
	bool bVar0;
	
	bVar0 = Function_72(0);
	if ((Function_72(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_90(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_72(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_90(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_72(597) + Function_72(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

bool Function_148(int iParam0) //Position: 0x7F0C / 32524
{
	bool bVar0;
	
	if (DECOR_CHECK_EXIST(&iParam0 + 40, "Index"))
	{
		bVar0 = DECOR_GET_INT(&iParam0 + 40, "Index");
		if (SHOP_GET_ITEM_PURCHASE_PRICE(bVar0) >= 4294967295)
		{
			return 1;
		}
	}
	return 0;
}

int Function_149(int iParam0) //Position: 0x7F45 / 32581
{
	if (IS_ACTOR_PLAYER(&iParam0))
	{
		if (IS_ACTION_NODE_PLAYING(&iParam0, "store/player/exit"))
		{
			return 1;
		}
		return SET_ACTION_NODE_FOR_ACTOR(&iParam0, "store/player/exit_right");
	}
	LOG_ERROR("SK_SHOP_PLAY_LEAVE_ANIM: Only the player is supported at the moment!");
	return 0;
}

bool Function_150() //Position: 0x7FE2 / 32738
{
	if (!UI_ISACTIVE("ShopMenu"))
	{
		LOG_WARNING("SK_SHOP_IS_QUIT_SELECTED: UI went inactive - quitting");
		return 1;
	}
	return 0;
}

int Function_151(int iParam0) //Position: 0x803F / 32831
{
	bool bVar0;
	
	if (DECOR_CHECK_EXIST(&iParam0 + 40, "Type"))
	{
		bVar0 = DECOR_GET_INT(&iParam0 + 40, "Type");
		DECOR_REMOVE(&iParam0 + 40, "Type");
		return bVar0;
	}
	return 4294967295;
}

void Function_152(struct<13> Param0) //Position: 0x807F / 32895
{
	if (StackVal == 4294967295)
	{
		Param0.f_8 = 0;
	}
	if (Param0.f_12 == 4294967295)
	{
		Param0.f_12 = 0;
	}
	Param0.f_12 = StackVal;
	return;
}

bool Function_153() //Position: 0x80AD / 32941
{
	var uVar0;
	struct<2> Var1;
	
	uVar0 = FIND_OBJECT_IN_LAYOUT(Function_18(), "shop_moneybag");
	if (IS_OBJECT_VALID(&uVar0))
	{
		return 1;
	}
	if (Function_26())
	{
		GET_OBJECT_NAMED_BONE_POSITION(Function_252(), "ankle_l", &Var1);
		Var1 = (Var1 + 0,5f);
		uVar0 = CREATE_PROP_IN_LAYOUT(StackVal, Function_18(), "shop_moneybag", "p_inv_TreasureMoneyStack01x", Var1, Vector(0.0f, 0.0f, 0.0f), false);
		if (IS_OBJECT_VALID(&uVar0))
		{
			SET_PROP_COLLIDE_WITH_OBJECT(&uVar0, Function_252(), 0);
			return 1;
		}
	}
	return 0;
}

void Function_154(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x8153 / 33107
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	
	if (bParam3)
	{
		PRINTNL();
		PRINTSTRING("---STARTING SK_SHOP_HUD_POPULATE_ITEM_BAR---");
		PRINTNL();
	}
	SHOP_CLEAR();
	SHOP_SET_PLAYER_BANK(Function_134());
	iVar1 = 0;
	iVar2 = 0;
	while (bVar0 <= iParam2)
	{
		if (bParam1)
		{
			iVar3 = Function_97(bVar0);
			if (iVar3 >= 0)
			{
				Function_168(bVar0, &iVar1);
				Function_167(bVar0, &iVar2);
				bVar4 = ROUND(Function_165(&bParam0, bVar0));
				if (bVar4 >= 4294967295)
				{
					SHOP_ADD_ITEM(iVar1, iVar2, 4294967295, 4294967295, bVar4, bVar0, 0);
				}
			}
		}
		else
		{
			Function_164(&bParam0, bVar0, &iVar1);
			Function_163(&bParam0, bVar0, &iVar2);
			uVar5 = SHOP_ADD_ITEM(iVar1, iVar2, Function_131(&bParam0, bVar0), ROUND(Function_103(&bParam0, bVar0)), 4294967295, bVar0, Function_113(&bParam0, bVar0));
			if (Function_155(&bParam0, bVar0))
			{
				SHOP_SET_ITEM_BLOCKED(uVar5, 1);
			}
		}
		bVar0++;
	}
	if (bParam3)
	{
		PRINTNL();
		PRINTSTRING("---FINISHED SK_SHOP_HUD_POPULATE_ITEM_BAR---");
		PRINTNL();
	}
}

bool Function_155(int iParam0, bool bParam1) //Position: 0x8285 / 33413
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	if (Function_119(&iParam0, bParam1))
	{
		bVar0 = Function_118(&iParam0, bParam1);
		if (ACTOR_HAS_WEAPON(&Global_54076, bVar0))
		{
			if (((bVar0 != 24 || bVar0 != 23) || bVar0 != 25) || bVar0 != 29)
			{
				return 0;
			}
			return 1;
		}
		if (IS_WEAPONENUM_LOCKED(bVar0))
		{
			return !Function_162(&iParam0, bParam1);
		}
		return 0;
	}
	if (Function_116(&iParam0, bParam1))
	{
		bVar1 = Function_113(&iParam0, bParam1);
		bVar2 = GET_WEAPONENUM_FOR_AMMOENUM(&Global_54076, bVar1);
		if (IS_WEAPONENUM_LOCKED(bVar2))
		{
			return !Function_161(&iParam0, bParam1);
		}
		if (ACTOR_HAS_WEAPON(&Global_54076, bVar2))
		{
			if (_GET_AMMO_AMOUNT(&Global_54076, bVar1, 0) <= _GET_MAX_AMMO_AMOUNT(&Global_54076, bVar1))
			{
				return 1;
			}
			return 0;
		}
		return 1;
	}
	if (Function_123(&iParam0, bParam1))
	{
		iVar3 = Function_122(&iParam0, bParam1);
		switch (iVar3)
		{
			case 0x00000015:
				if (Function_157(&Global_46760))
				{
					return 1;
				}
				break;
			
			case 0x00000016:
				if (Function_157(&Global_46894))
				{
					return 1;
				}
				break;
			
			case 0x00000018:
				if (Function_157(&Global_46914))
				{
					return 1;
				}
				break;
			
			case 0x00000017:
				if (Function_157(&Global_46796))
				{
					return 1;
				}
				break;
			
			case 0x00000019:
				if (Function_157(&Global_46816))
				{
					return 1;
				}
				break;
			
			case 0x0000001A:
				if (Function_157(&Global_46866))
				{
					return 1;
				}
				break;
			
			case 0x0000001B:
				if (Function_157(&Global_46850))
				{
					return 1;
				}
				break;
			
			case 0x0000001C:
				if (Function_157(&Global_46838))
				{
					return 1;
				}
				break;
			
			case 0x0000001D:
				if (Function_157(&Global_46926))
				{
					return 1;
				}
				break;
		}
		return !Function_156(&iParam0, bParam1);
	}
	return 0;
}

bool Function_156(int iParam0, bool bParam1) //Position: 0x842C / 33836
{
	bool bVar0;
	
	bVar0 = Function_122(&iParam0, bParam1);
	if (bVar0 == 4294967295)
	{
		return 0;
	}
	if (!Global_93661[bVar05].f_32)
	{
		return 0;
	}
	if (Global_93661[bVar05].f_36)
	{
		if (HAS_ITEM(Function_107(bVar0), &Global_54076))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_157(int[] iParam0) //Position: 0x8476 / 33910
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		if (!Function_158(iParam0[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool Function_158(int iParam0) //Position: 0x84A2 / 33954
{
	if (!Function_160(iParam0))
	{
		return 0;
	}
	return Function_159(&(Global_43791[iParam0]), 4096);
}

int Function_159(var uParam0, int iParam1) //Position: 0x84C0 / 33984
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_160(int iParam0) //Position: 0x84DD / 34013
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_161(int iParam0, bool bParam1) //Position: 0x84F3 / 34035
{
	int iVar0;
	
	iVar0 = Function_113(&iParam0, bParam1);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	return Global_94463[iVar05].f_32;
}

bool Function_162(int iParam0, bool bParam1) //Position: 0x8515 / 34069
{
	bool bVar0;
	
	bVar0 = Function_118(&iParam0, bParam1);
	if (bVar0 == 4294967295)
	{
		return 0;
	}
	if (!Global_93259[bVar05].f_32)
	{
		return 0;
	}
	if (ACTOR_HAS_WEAPON(&Global_54076, bVar0))
	{
		return 0;
	}
	return 1;
}

void Function_163(int iParam0, bool bParam1, int iParam2) //Position: 0x854F / 34127
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = true;
	if (Function_119(&iParam0, bParam1))
	{
		iVar1 = Function_118(&iParam0, bParam1);
		if (bVar0)
		{
			iParam2 = StackVal;
		}
	}
	else if (Function_116(&iParam0, bParam1))
	{
		iVar2 = Function_113(&iParam0, bParam1);
		if (bVar0)
		{
			iParam2 = StackVal;
		}
	}
	else if (Function_123(&iParam0, bParam1))
	{
		iVar3 = Function_122(&iParam0, bParam1);
		if (bVar0)
		{
			iParam2 = StackVal;
		}
	}
	else
	{
		PRINTSTRING("SK_SHOP_GET_DESCRIPTION_FOR_REQUESTED_ITEM: Could not find Enum Type for this item: ");
		PRINTINT(bParam1);
		PRINTNL();
		LOG_ERROR("SK_SHOP_GET_DESCRIPTION_FOR_REQUESTED_ITEM: Could not find Enum Type for this item");
	}
	return;
}

void Function_164(var uParam0, bool bParam1, int iParam2) //Position: 0x8693 / 34451
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = true;
	if (Function_119(&uParam0, bParam1))
	{
		iVar1 = Function_118(&uParam0, bParam1);
		if (bVar0)
		{
			iParam2 = StackVal;
		}
	}
	else if (Function_116(&uParam0, bParam1))
	{
		iVar2 = Function_113(&uParam0, bParam1);
		if (bVar0)
		{
			iParam2 = StackVal;
		}
	}
	else if (Function_123(&uParam0, bParam1))
	{
		iVar3 = Function_122(&uParam0, bParam1);
		if (bVar0)
		{
			iParam2 = StackVal;
		}
	}
	else
	{
		PRINTSTRING("SK_SHOP_GET_NAME_FOR_REQUESTED_ITEM: Could not find Enum Type for this item: ");
		PRINTINT(bParam1);
		PRINTNL();
		LOG_ERROR("SK_SHOP_GET_NAME_FOR_REQUESTED_ITEM: Could not find Enum Type for this item");
	}
	return;
}

var Function_165(var uParam0, int iParam1) //Position: 0x87C9 / 34761
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	if (iParam1 > Global_94645)
	{
		LOG_ERROR("SK_SHOP_GET_COLLECTIBLE_VALUE: iCollectibleIndex >= COUNT_OF(gShopCollectionData)");
		return 0.0f;
	}
	if (iParam1 <= 0)
	{
		LOG_ERROR("SK_SHOP_GET_COLLECTIBLE_VALUE: iCollectibleIndex < 0");
		return 0.0f;
	}
	fVar0 = Global_94645[iParam19];
	fVar1 = Function_166(&uParam0, iParam1);
	if (fVar1 != -1.0f)
	{
		return -1.0f;
	}
	fVar2 = 1.0f;
	if (Function_105() < 1)
	{
		PRINTNL();
		PRINTSTRING("COLLECTIBLE - low honor modifier");
		PRINTNL();
		if (Function_104())
		{
			fVar2 = 1,5f;
		}
		else
		{
			fVar2 = 0,5f;
		}
	}
	else if (Function_105() <= 5 && !Function_104())
	{
		PRINTNL();
		PRINTSTRING("COLLECTIBLE - high honor modifier");
		PRINTNL();
		fVar2 = 1,5f;
	}
	iVar3 = ((fVar0 * fVar1) * fVar2);
	return iVar3;
}

var Function_166(int iParam0, int iParam1) //Position: 0x892D / 35117
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	iVar3 = 0;
	uVar4 = GRINGO_GET_FIRST_NAMED_CHILD("CollectibleRates", 0, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar4))
	{
		iVar0 = GRINGO_GET_CHILD_COMPONENT_COUNT(&uVar4);
		bVar1 = false;
		while (bVar1 <= iVar0)
		{
			uVar5 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, &uVar4);
			if (IS_GRINGO_COMPONENT_VALID(&uVar5))
			{
				Function_168(iParam1, &iVar3);
				iVar6 = GRINGO_GET_COMPONENT_HASH(&uVar5);
				if (iVar6 == iVar3)
				{
					if (GET_GRINGO_FLOAT_ATTR(&uVar2, "ValueModifier", &uVar5))
					{
						return uVar2;
					}
				}
			}
			bVar1++;
		}
	}
	return 1.0f;
}

void Function_167(int iParam0, int iParam1) //Position: 0x89C3 / 35267
{
	if (iParam0 > Global_94645)
	{
		LOG_ERROR("SK_SHOP_GET_DESCRIPTION_FOR_REQUESTED_COLLECTIBLE: iItemIndex >= COUNT_OF(gShopCollectionData)");
		iParam0 = 0;
	}
	if (iParam0 <= 0)
	{
		LOG_ERROR("SK_SHOP_GET_DESCRIPTION_FOR_REQUESTED_COLLECTIBLE: iItemIndex < 0");
		iParam0 = 0;
	}
	iParam1 = StackVal;
	if (iParam1 == 0)
	{
		LOG_ERROR("SK_SHOP_GET_DESCRIPTION_FOR_REQUESTED_COLLECTIBLE: Invalid sDisplayItemName");
	}
	return;
}

void Function_168(int iParam0, int iParam1) //Position: 0x8AF0 / 35568
{
	if (iParam0 > Global_94645)
	{
		LOG_ERROR("SK_SHOP_GET_NAME_FOR_REQUESTED_COLLECTIBLE: iItemIndex >= COUNT_OF(gShopCollectionData)");
		iParam0 = 0;
	}
	if (iParam0 <= 0)
	{
		LOG_ERROR("SK_SHOP_GET_NAME_FOR_REQUESTED_COLLECTIBLE: iItemIndex < 0");
		iParam0 = 0;
	}
	iParam1 = StackVal;
	if (iParam1 == 0)
	{
		LOG_ERROR("SK_SHOP_GET_NAME_FOR_REQUESTED_COLLECTIBLE: Invalid sDisplayItemName");
	}
	return;
}

var Function_169(bool bParam0) //Position: 0x8C08 / 35848
{
	var uVar0;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("ShopInventory", 0, &bParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		return GRINGO_GET_CHILD_COMPONENT_COUNT(&uVar0);
	}
	LOG_ERROR("SK_SHOP_GET_ITEMS_COUNT: could not find ShopInventory component");
	return 4294967295;
}

var Function_170() //Position: 0x8C84 / 35972
{
	return Global_97967 + 1;
}

int Function_171(int iParam0) //Position: 0x8C90 / 35984
{
	if (IS_ACTOR_PLAYER(&iParam0))
	{
		if (IS_ACTION_NODE_PLAYING(&iParam0, "store/player/idle"))
		{
			return 1;
		}
		return SET_ACTION_NODE_FOR_ACTOR(&iParam0, "store/player/idle");
	}
	if (IS_ACTION_NODE_PLAYING(&iParam0, "store/clerk/pre") || IS_ACTION_NODE_PLAYING(&iParam0, "store/clerk/idle"))
	{
		return 1;
	}
	return SET_ACTION_NODE_FOR_ACTOR(&iParam0, "store/clerk/idle");
}

bool Function_172(struct<21> Param0) //Position: 0x8D2C / 36140
{
	if (!IS_ACTOR_VALID(&iParam2))
	{
		LOG_ERROR("SK_SHOP_LOADED_ANIMS: invalid shopkeeper actor");
		return 0;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		LOG_ERROR("SK_SHOP_LOADED_ANIMS: invalid user actor");
		return 0;
	}
	if (Param0.f_16)
	{
		if (HAS_ANIM_SET_LOADED("store") && HAS_ACTION_TREE_LOADED("custom/store"))
		{
			if (!Param0.f_20)
			{
				SET_ACTOR_CAN_PLAY_GESTURES(&iParam2, false);
				SET_ACTOR_CAN_PLAY_BORED_IDLES(&iParam2, 0);
				if (!Global_6623)
				{
					SET_ACTOR_CAN_PLAY_GESTURES(&uParam1, false);
					SET_ACTOR_CAN_PLAY_BORED_IDLES(&uParam1, 0);
				}
				SET_ANIM_SET_FOR_ACTOR(&uParam1, "store", 1);
				SET_ANIM_SET_FOR_ACTOR(&iParam2, "store", 1);
				Param0.f_20 = 1;
			}
			return Param0.f_20;
		}
	}
	LOG_ERROR("SK_SHOP_LOADED_ANIMS: the store anims where never requested!");
	return 0;
}

int Function_173(bool bParam0) //Position: 0x8E73 / 36467
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	var uVar8;
	
	iVar0 = GET_OBJECT_FROM_ACTOR(Function_252());
	uVar2 = Function_18();
	uVar3 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uVar2, "shop_cam", 1, 1);
	uVar1 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uVar3, 0);
	SET_CAMERASHOT_ASPECT_RATIO(&uVar1, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&uVar1, 1);
	SET_CAMERASHOT_FOV(&uVar1, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uVar1, 0,1f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(&uVar1, 1885.0f);
	if (Function_176(&bParam0, &Var4) && Function_175(&bParam0, &Var6))
	{
		SET_CAMERASHOT_POSITION(&uVar1, Var4);
		SET_CAMERASHOT_ORIENTATION(&uVar1, Var6, 0);
	}
	else
	{
		uVar8 = FIND_OBJECT_IN_LAYOUT(Function_18(), "camera_look_at");
		if (IS_OBJECT_VALID(&uVar8))
		{
			DESTROY_OBJECT(&uVar8);
		}
		GET_OBJECT_POSITION(&iVar0, &Var4);
		GET_OBJECT_ORIENTATION(&iVar0, &Var6);
		uVar8 = CREATE_POINT_IN_LAYOUT(Function_18(), "camera_look_at", Var4, Var6);
		ATTACH_OBJECTS(StackVal, StackVal, &uVar1, &uVar8, Function_59(), Vector(-0,75f, 1,567008f, -2,8f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
		SET_CAMERASHOT_TARGET_OBJECT(&uVar1, &iVar0, 0);
		SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uVar1, Vector(-0,4f, 0,9f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	}
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uVar3, 0, 4294967295);
	PLAY_CUTSCENEOBJECT(&uVar3, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	Function_174(&uVar1, &iVar0);
	return 1;
}

void Function_174(var uParam0, int iParam1) //Position: 0x8FC5 / 36805
{
	var uVar0;
	var uVar2;
	float fVar4;
	
	DOF_PUSH();
	GET_OBJECT_POSITION(&uParam0, &uVar0);
	GET_OBJECT_POSITION(&iParam1, &uVar2);
	fVar4 = 4.0f;
	DOF_SET(fVar4, 0,65f, GET_CAMERASHOT_FAR_CLIP_PLANE(&uParam0), 0,8f);
	DOF_SET_KERNEL(1);
	return;
}

int Function_175(int iParam0, struct<2> Param1) //Position: 0x8FFC / 36860
{
	var uVar0;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("ShopSettings", 0, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		if (IS_DISPLAY_WIDESCREEN())
		{
			if (GET_GRINGO_VECTOR_ATTR(&Param1, "BuyCameraOverrideDirection", &uVar0))
			{
				if (!Function_33(StackVal, Param1))
				{
					return 1;
				}
			}
		}
		if (GET_GRINGO_VECTOR_ATTR(&Param1, "BuyCameraOverrideDirection4:3", &uVar0))
		{
			if (!Function_33(StackVal, Param1))
			{
				return 1;
			}
		}
	}
	LOG_ERROR("SK_GET_SHOP_BUY_CAMERA_DIRECTION_OVERRIDE: Missing ShopSettings in shop xml");
	return 0;
}

int Function_176(int iParam0, struct<2> Param1) //Position: 0x90F6 / 37110
{
	var uVar0;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("ShopSettings", 0, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		if (IS_DISPLAY_WIDESCREEN())
		{
			if (GET_GRINGO_VECTOR_ATTR(&Param1, "BuyCameraOverridePosition", &uVar0))
			{
				if (!Function_33(StackVal, Param1))
				{
					return 1;
				}
			}
		}
		if (GET_GRINGO_VECTOR_ATTR(&Param1, "BuyCameraOverridePosition4:3", &uVar0))
		{
			if (!Function_33(StackVal, Param1))
			{
				return 1;
			}
		}
	}
	LOG_ERROR("SK_GET_SHOP_BUY_CAMERA_POSITION_OVERRIDE: Missing ShopSettings in shop xml");
	return 0;
}

var Function_177(int iParam0, bool bParam1) //Position: 0x91ED / 37357
{
	return IS_OBJECT_VALID(Function_178(Function_18(), 0, &iParam0 + 24, &bParam1, 0, 0));
}

var Function_178(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x9208 / 37384
{
	var uVar0;
	
	if (&bParam4)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_59(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "ShopSell", 1, 1);
	}
	Function_179(&uVar0, &uParam2, &uParam3);
	if (&bParam5)
	{
		SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam5);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return &uVar0;
}

void Function_179(var uParam0, bool bParam1, int iParam2) //Position: 0x926D / 37485
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_180(&uVar0, &bParam1, &iParam2);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 0, 4294967295);
	return;
}

void Function_180(int iParam0, var uParam1, var uParam2) //Position: 0x9293 / 37523
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	
	SET_CAMERASHOT_ASPECT_RATIO(&iParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 16.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(&iParam0, 1885.0f);
	if (Function_182(&uParam2, &Var0) && Function_181(&uParam2, &Var2))
	{
		SET_CAMERASHOT_POSITION(&iParam0, Var0);
		SET_CAMERASHOT_ORIENTATION(&iParam0, Var2, 0);
		Function_174(&iParam0, &uParam1);
	}
	else
	{
		iVar4 = FIND_OBJECT_IN_LAYOUT(Function_18(), "camera_look_at");
		if (IS_OBJECT_VALID(&iVar4))
		{
			DESTROY_OBJECT(&iVar4);
		}
		GET_OBJECT_POSITION(&uParam1, &Var0);
		GET_OBJECT_ORIENTATION(&uParam1, &Var2);
		iVar4 = CREATE_POINT_IN_LAYOUT(Function_18(), "camera_look_at", Var0, Var2);
		ATTACH_OBJECTS(StackVal, StackVal, &iParam0, &iVar4, Function_59(), Vector(1,593524f, 1,5f, -3,978377f), Vector(3,054072f, 0,410364f, -3,141593f), 4294967295);
		SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iVar4, 0);
		SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,9f, 1,348268f, 0,05838f), Vector(0.0f, 0.0f, 0.0f), 0);
		Function_174(&iParam0, &iVar4);
	}
	return;
}

int Function_181(int iParam0, struct<2> Param1) //Position: 0x93C2 / 37826
{
	var uVar0;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("ShopSettings", 0, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		if (IS_DISPLAY_WIDESCREEN())
		{
			if (GET_GRINGO_VECTOR_ATTR(&Param1, "SellCameraOverrideDirection", &uVar0))
			{
				if (!Function_33(StackVal, Param1))
				{
					return 1;
				}
			}
		}
		if (GET_GRINGO_VECTOR_ATTR(&Param1, "SellCameraOverrideDirection4:3", &uVar0))
		{
			if (!Function_33(StackVal, Param1))
			{
				return 1;
			}
		}
	}
	LOG_ERROR("SK_GET_SHOP_SELL_CAMERA_DIRECTION_OVERRIDE: Missing ShopSettings in shop xml");
	return 0;
}

int Function_182(int iParam0, struct<2> Param1) //Position: 0x94BF / 38079
{
	var uVar0;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("ShopSettings", 0, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		if (IS_DISPLAY_WIDESCREEN())
		{
			if (GET_GRINGO_VECTOR_ATTR(&Param1, "SellCameraOverridePosition", &uVar0))
			{
				if (!Function_33(StackVal, Param1))
				{
					return 1;
				}
			}
		}
		if (GET_GRINGO_VECTOR_ATTR(&Param1, "SellCameraOverridePosition4:3", &uVar0))
		{
			if (!Function_33(StackVal, Param1))
			{
				return 1;
			}
		}
	}
	LOG_ERROR("SK_GET_SHOP_SELL_CAMERA_POSITION_OVERRIDE: Missing ShopSettings in shop xml");
	return 0;
}

var Function_183() //Position: 0x95B9 / 38329
{
	return STREAMING_REQUEST_PROP(GET_ASSET_ID("p_inv_TreasureMoneyStack01x", 0), true);
}

bool Function_184(bool bParam0, bool bParam1, vector3 vParam2) //Position: 0x95E5 / 38373
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	float fVar8;
	struct<2> Var10;
	bool bVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	struct<2> Var16;
	float fVar18;
	int iVar19;
	
	vParam2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, vParam2 };
	SET_HUD_MAP_DRAW_ENABLED(0);
	SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(Function_254(), 1);
	STREAMING_PREVENT_SNIPER_MODE(1);
	uVar0 = Function_195(&bParam1);
	uVar13 = Function_252();
	Function_193(Function_194());
	Var6 = Function_193(Function_194());
	uVar14 = Function_190(StackVal, &bParam1, FIND_NAMED_LAYOUT("ArtGringoLayout"), &uVar0, "UseCase1", Var6, 15.0f, 1, 1);
	if (IS_OBJECT_VALID(&uVar14))
	{
		GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&uVar14), "UseCase1", &Var2);
		uVar1 = Function_189(&bParam1);
		if (IS_STRING_VALID(&uVar1))
		{
			GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&uVar14), &uVar1, &Var4);
		}
		else
		{
			Function_188(&bParam1);
			fVar8 = Function_188(&bParam1);
			GET_ACTOR_OFFSET_WORLD_COORDS(Function_252(), &fVar8, &Var4);
			Var4.f_4 = (StackVal + 1.0f);
		}
		Var10 = Vector(StackVal, StackVal, StackVal) - Vector(Var4, Var2, StackVal);
		VSCALE(&Var10, 0,5f);
		Var10 = Vector(StackVal, StackVal, StackVal) + Vector(Var4, Var10, StackVal);
		uVar15 = Function_187(StackVal, Var10, 6.0f);
		if (IS_VOLUME_VALID(&uVar15))
		{
			Function_186(&uVar15);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar15);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar15);
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(Function_252(), 1);
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bParam0 + 24, 1);
		}
		AI_IGNORE_ACTOR(&uVar13);
		AI_IGNORE_ACTOR(&bParam0 + 24);
		AI_DONT_HARM_ACTOR(&uVar13);
		AI_DONT_HARM_ACTOR(&bParam0 + 24);
		bVar12 = GET_OBJECT_HEADING(&uVar14);
		TELEPORT_ACTOR_WITH_HEADING(&uVar13, Var2, bVar12, 0, 1, true);
		SNAP_OBJECT_TO_GROUND(&uVar13, 25.0f, false, 1092616192);
		CLEAR_AMBIENT_OBJECTS_SPHERE(Var4, 1,2f, 4294967295);
		TELEPORT_ACTOR(&bParam0 + 24, &Var4, 1, 1, 1);
		SNAP_OBJECT_TO_GROUND(&bParam0 + 24, 25.0f, false, 1092616192);
		bVar12 = (bVar12 + 180.0f);
		SET_ACTOR_HEADING(&bParam0 + 24, bVar12, 1);
		Function_185(&uVar14);
		Var16 = Function_185(&uVar14);
		fVar18 = CREATE_POINT_IN_LAYOUT(Function_18(), Function_59(), Var2, Var16);
		ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_ACTOR(Function_252()), &fVar18, Function_59(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
		Var16.f_4 = (StackVal + 180.0f);
		iVar19 = CREATE_POINT_IN_LAYOUT(Function_18(), Function_59(), Var4, Var16);
		ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_ACTOR(&bParam0 + 24), &iVar19, Function_59(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
		TASK_STAND_STILL(&uVar13, -1.0f, 0, 0);
		UI_INCLUDE("ShopTab_Sell");
		return 1;
	}
	PRINTSTRING("SK_SHOP_COUNTER_INIT: in a 50m radius I could not locate counter gringo: ");
	PRINTSTRING(&uVar0);
	PRINTNL();
	LOG_ERROR("SK_SHOP_COUNTER_INIT: could not locate counter gringo for the shopkeeper! Details in spew");
	return 0;
}

struct<8> Function_185(int iParam0) //Position: 0x98EB / 39147
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_186(int iParam0) //Position: 0x9914 / 39188
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	
	if (IS_VOLUME_VALID(&iParam0))
	{
		uVar2 = CREATE_OBJECTSET_IN_LAYOUT("TempObjectSetForActors", &Global_10994, 4294967295, 0);
		if (IS_OBJECTSET_VALID(&uVar2))
		{
			LOCATE_ACTORS_IN_VOLUME(&iParam0, &uVar2, 0, 1);
			bVar1 = false;
			while (bVar1 < (GET_OBJECTSET_SIZE(&uVar2) - 1))
			{
				iVar3 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar2);
				if (IS_OBJECT_VALID(&iVar3))
				{
					iVar0 = GET_ACTOR_FROM_OBJECT(&iVar3);
					if (IS_ACTOR_VALID(&iVar0))
					{
						if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iVar0), "bShopDontKill"))
						{
							if (&iVar0 == &Global_54076 && &iVar0 == Function_252())
							{
								DESTROY_ACTOR(&iVar0);
							}
						}
					}
				}
				bVar1++;
			}
			DESTROY_OBJECTSET(&uVar2);
		}
	}
	return;
}

var Function_187(struct<2> Param0, float fParam2) //Position: 0x99D8 / 39384
{
	return CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, Function_18(), "shop_volume", 2, Param0, Vector(0.0f, 0.0f, 0.0f), Vector(fParam2, 1.0f, fParam2));
}

struct<8> Function_188(int iParam0) //Position: 0x9A01 / 39425
{
	struct<2> Var0;
	var uVar2;
	
	uVar2 = GRINGO_GET_FIRST_NAMED_CHILD("ShopSettings", 0, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar2))
	{
		GET_GRINGO_VECTOR_ATTR(&Var0, "CounterOffset", &uVar2);
	}
	return StackVal, Var0;
}

int Function_189(bool bParam0) //Position: 0x9A49 / 39497
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	uVar2 = GRINGO_GET_FIRST_NAMED_CHILD("ShopSettings", 0, &bParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar2))
	{
		iVar1 = GET_GRINGO_STRING_ATTR("CounterPlayerUseCase", &uVar2, &iVar0);
		if (iVar0 >= 0)
		{
			if (IS_STRING_VALID(&iVar1))
			{
				if (STRING_LENGTH(&iVar1) >= 0)
				{
					return &iVar1;
				}
			}
		}
	}
	return Function_59();
}

var Function_190(int iParam0, int iParam1, bool bParam2, var uParam3, struct<2> Param4, bool bParam6, bool bParam7, bool bParam8) //Position: 0x9AB6 / 39606
{
	var uVar0;
	float fVar1;
	var uVar2;
	
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		if (Function_192(&iParam0))
		{
			LOG_ERROR("GB_GET_FIRST_USABLE_OBJECT: Invalid Layout!");
		}
		return "";
	}
	if (STRING_CONTAINS_STRING(&bParam2, "wander"))
	{
		return "";
	}
	if (STRING_CONTAINS_STRING(&bParam2, "camp,"))
	{
		return "";
	}
	if (STRING_CONTAINS_STRING(&bParam2, "nsleeptime"))
	{
		return "";
	}
}

var Function_191(float fParam0, bool bParam1, bool bParam2) //Position: 0xA271 / 41585
{
	int iVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	struct<5> Var4;
	bool bVar9;
	float fVar10;
	
	bVar9 = 1E+33.0f;
	if (!IS_ITERATOR_VALID(&fParam0))
	{
		return &iVar0;
	}
	fVar1 = START_OBJECT_ITERATOR(&fParam0);
	while (IS_OBJECT_VALID(&fVar1))
	{
		if (bParam1 || bParam2)
		{
			if (IS_ACTOR_VALID(Function_252()))
			{
				GET_OBJECT_POSITION(&fVar1, &Var4);
				GET_POSITION(Function_252(), &Var6);
				if (bParam1)
				{
					bVar8 = VDIST(Var4, Var6);
					if (bVar8 > bVar9)
					{
						if (bParam2)
						{
							fVar10 = FABS((StackVal - StackVal));
							if (fVar10 >= 1.0f)
							{
								bVar9 = bVar8;
								bVar2 = &fVar1;
							}
						}
						else
						{
							bVar9 = bVar8;
							bVar2 = &fVar1;
						}
					}
				}
				else if (bParam2)
				{
					fVar10 = FABS((StackVal - StackVal));
					if (fVar10 >= 1.0f)
					{
						iVar3 = &fVar1;
					}
				}
			}
			else
			{
				return &fVar1;
			}
		}
		return &fVar1;
		fVar1 = OBJECT_ITERATOR_NEXT(&fParam0);
	}
	if (bParam1 && IS_OBJECT_VALID(&bVar2))
	{
		return &bVar2;
	}
	if (bParam2 && IS_OBJECT_VALID(&iVar3))
	{
		return &iVar3;
	}
	return &iVar0;
}

bool Function_192(int iParam0) //Position: 0xA36B / 41835
{
	var uVar0;
	var uVar1;
	
	if (GET_DEBUG_DRAW_STATE())
	{
		return 1;
	}
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("Debug", 0, &iParam0 + 8);
	return GET_GRINGO_BOOL_ATTR("DisplayDebugIndicators", &uVar0, &uVar1);
}

struct<8> Function_193(var uParam0) //Position: 0xA3B2 / 41906
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&uParam0, &Var0);
	return StackVal, Var0;
}

var Function_194() //Position: 0xA3DB / 41947
{
	return GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
}

var Function_195(int iParam0) //Position: 0xA3E7 / 41959
{
	var uVar0;
	var uVar1;
	
	uVar1 = GRINGO_GET_FIRST_NAMED_CHILD("ShopSettings", 0, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar1))
	{
		return GET_GRINGO_STRING_ATTR("CounterGringoName", &uVar1, &uVar0);
	}
	return "";
}

void Function_196(struct<17> Param0) //Position: 0xA432 / 42034
{
	if (!Param0.f_16)
	{
		REQUEST_ACTION_TREE("custom/store");
		REQUEST_ANIM_SET("store", 1);
		Param0.f_16 = 1;
	}
	return;
}

void Function_197(struct<65> Param0) //Position: 0xA466 / 42086
{
	Global_6636 = 1;
	Global_93258 = 1;
	Param0.f_16 = 0;
	Param0.f_20 = 0;
	Param0.f_28 = 0;
	Param0.f_48 = 0;
	Param0.f_52 = 0;
	Param0.f_56 = 0;
	Param0.f_60 = 0;
	Param0.f_64 = 0;
	Function_99(&Param0);
	return;
}

void Function_198() //Position: 0xA4AB / 42155
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_PLAYER_CONTROL(GET_PLAYER_PADINDEX(&Global_54076), 0, 0, 0);
		ACTOR_HOLSTER_WEAPON(&Global_54076, 0);
	}
	return;
}

void Function_199(int iParam0) //Position: 0xA4D1 / 42193
{
	var uVar0;
	int iVar1;
	
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&Global_93250 + 8))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&Global_93250);
		ITERATE_IN_EVENT_TRAP(&uVar0, &Global_93250 + 8);
		iVar1 = START_OBJECT_ITERATOR(&uVar0);
		if (IS_OBJECT_VALID(&iVar1))
		{
			while (IS_OBJECT_VALID(&iVar1))
			{
				(&iParam0 + 40) = GET_EVENT_FROM_OBJECT(&iVar1);
				iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
			}
		}
		if (IS_ITERATOR_VALID(&uVar0))
		{
			DESTROY_ITERATOR(&uVar0);
		}
	}
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&Global_93250 + 16))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&Global_93250);
		ITERATE_IN_EVENT_TRAP(&uVar0, &Global_93250 + 16);
		iVar1 = START_OBJECT_ITERATOR(&uVar0);
		if (IS_OBJECT_VALID(&iVar1))
		{
			while (IS_OBJECT_VALID(&iVar1))
			{
				*(&iParam0 + 40) = GET_EVENT_FROM_OBJECT(&iVar1);
				iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
			}
		}
		if (IS_ITERATOR_VALID(&uVar0))
		{
			DESTROY_ITERATOR(&uVar0);
		}
	}
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&Global_93250 + 24))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&Global_93250);
		ITERATE_IN_EVENT_TRAP(&uVar0, &Global_93250 + 24);
		iVar1 = START_OBJECT_ITERATOR(&uVar0);
		if (IS_OBJECT_VALID(&iVar1))
		{
			while (IS_OBJECT_VALID(&iVar1))
			{
				*(&iParam0 + 40) = GET_EVENT_FROM_OBJECT(&iVar1);
				iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
			}
		}
		if (IS_ITERATOR_VALID(&uVar0))
		{
			DESTROY_ITERATOR(&uVar0);
		}
	}
	return;
}

void Function_200(struct<17> Param0) //Position: 0xA60C / 42508
{
	int iVar0;
	
	Function_16(&Param0);
	Function_12(&Param0);
	*(&Param0 + 24) = GRINGO_GET_REQUESTING_ACTOR();
	uParam2 = 28;
	Param0.f_16 = 1;
	iVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, &iParam1 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&iVar0))
	{
		GRINGO_SET_COMPONENT_USER(GET_OBJECT_FROM_ACTOR(&Param0 + 24), &iVar0);
	}
	iParam1 = 0;
	return;
}

var Function_201(bool bParam0) //Position: 0xA668 / 42600
{
	var uVar0;
	var uVar1;
	
	uVar1 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, &bParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar1))
	{
		return GET_GRINGO_STRING_ATTR("UseName", &uVar1, &uVar0);
	}
	return "";
}

bool Function_202(bool bParam0, struct<17> Param1) //Position: 0xA6A8 / 42664
{
	var uVar0;
	float fVar1;
	var uVar2;
	struct<2> Var3;
	float fVar5;
	struct<2> Var6;
	struct<2> Var8;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, &bParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		GET_GRINGO_FLOAT_ATTR(&fVar1, "ReuseDelay", &uVar0);
		if (!Param1.f_16)
		{
			if (IS_ACTOR_ALIVE(Function_252()))
			{
				if (Function_8(&Param1))
				{
					if (Function_6(&Param1) > fVar1)
					{
						return 0;
					}
				}
				uVar2 = GRINGO_GET_REQUESTING_ACTOR();
				if (!IS_ACTOR_PLAYER(&uVar2))
				{
					return 0;
				}
				GRINGO_GET_USE_COMPONENT_POSITION(&Var3, &uVar0);
				GET_GRINGO_FLOAT_ATTR(&fVar5, "ActivationRadius", &uVar0);
				GET_POSITION(&uVar2, &Var6);
				Var8 = Vector(StackVal, StackVal, StackVal) - Vector(Var6, Var3, StackVal);
				if (VMAG(Var8) < fVar5)
				{
					return 0;
				}
				if (&Param1 + 24 != GRINGO_GET_REQUESTING_ACTOR() && iParam2 != 0)
				{
					if (Function_6(&Param1) <= fVar1)
					{
						iParam2 = 1;
						return 1;
					}
					return 0;
				}
				iParam2 = 1;
				return 1;
			}
		}
		if (&Param1 + 24 == GRINGO_GET_REQUESTING_ACTOR())
		{
			iParam2 = 0;
			return 1;
		}
	}
	Function_203(&bParam0, "GB_VERIFY_REQUEST: GRINGO_GET_USE_COMPONENT returned an invalid component!");
	return 0;
}

void Function_203(int iParam0, int iParam1) //Position: 0xA805 / 43013
{
	if (Function_192(&iParam0))
	{
		LOG_ERROR(&iParam1);
	}
	return;
}

bool Function_204(int iParam0, struct<69> Param1) //Position: 0xA81A / 43034
{
	int iVar0;
	struct<2> Var1;
	var uVar3;
	float fVar4;
	var uVar5;
	int iVar6;
	struct<9> Var7;
	int iVar16;
	bool bVar17;
	
	uVar5 = Function_252();
	iVar6 = Function_254();
	bVar15 = false;
	if (!&bParam2)
	{
		iVar16 = Function_230();
		if (iVar16 != 3 || iVar16 != 4)
		{
			bVar15 = true;
		}
		else
		{
			bVar15 = false;
		}
	}
	if (!Function_251(&Param1))
	{
		if (IS_ACTOR_VALID(&uVar5))
		{
			if (AI_GET_IS_RETREATING(&uVar5))
			{
				TASK_PRIORITY_SET(&uVar5, 3);
				iParam0 = 18;
			}
		}
	}
	switch (iParam0)
	{
		case 0x00000000:
			Param1.f_28 = Function_229(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1);
			Function_228(&Param1, Param1.f_28);
			*(&Param1 + 56) = Function_228(&Param1, Param1.f_28);
			Param1.f_68 = Function_227(&Param1);
			*(&Param1 + 72) = Function_226(&Param1);
			Param1.f_24 = 0;
			*(&Param1 + 80) = Function_225(&Param1, &Param1 + 24, 0);
			*(&Param1 + 16) = Function_190(StackVal, &Param1, &Param1 + 72, &Param1 + 80, "UseCase1", *(&Param1 + 56), Param1.f_68, 0, 0);
			if (STRINGS_ARE_EQUAL(&Param1 + 80, "nsleeptime"))
			{
				Param1 = 0;
				Function_16(&Param1 + 40);
				Function_12(&Param1 + 40);
				if (&bParam2)
				{
					TASK_PRIORITY_SET(&uVar5, 2);
					TASK_GO_TO_COORD_AND_STAY(&uVar5, &Param1 + 56, 1, 0.0f);
				}
				else
				{
					TASK_PRIORITY_SET(&uVar5, 3);
					Function_223(StackVal, *(&Param1 + 56), Param1.f_68, -1.0f);
				}
				SET_PERS_CHAR_ENABLED(&iVar6, false);
				DEACTIVATE_ACTOR_FOR_PERS_CHAR(&iVar6);
				iParam0 = 15;
				break;
			}
			if (IS_ACTOR_VALID(&uVar5))
			{
				if (IS_OBJECT_VALID(&Param1 + 16))
				{
					switch (GET_OBJECT_TYPE(&Param1 + 16))
					{
						case 0x0000000C:
							if (IS_GRINGO_READY(&Param1 + 16))
							{
								if (!GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&Param1 + 16), "UseCase1", &Var1))
								{
									GET_OBJECT_POSITION(&Param1 + 16, &Var1);
								}
							}
							else
							{
								GET_OBJECT_POSITION(&Param1 + 16, &Var1);
							}
							if (!Function_222(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
							{
								Function_221(StackVal, Var1, &uVar5, &iVar6);
							}
							else
							{
								Function_221(StackVal, *(&Param1 + 56), &uVar5, &iVar6);
							}
							iParam0 = 1;
							break;
						
						case 0x00000010:
							GET_PATH_POINT(&Param1 + 16, false, &Var1);
							if (!Function_222(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
							{
								Function_221(StackVal, Var1, &uVar5, &iVar6);
							}
							else
							{
								Function_221(StackVal, *(&Param1 + 56), &uVar5, &iVar6);
							}
							iParam0 = 1;
							break;
						
						default:
							Function_221(StackVal, *(&Param1 + 56), &uVar5, &iVar6);
							iParam0 = 1;
							break;
					}
				}
				else
				{
					Function_221(StackVal, *(&Param1 + 56), &uVar5, &iVar6);
					iParam0 = 1;
				}
			}
			else
			{
				Param1 = 1000;
				if (IS_OBJECT_VALID(&Param1 + 16))
				{
					switch (GET_OBJECT_TYPE(&Param1 + 16))
					{
						case 0x0000000C:
							if (IS_GRINGO_READY(&Param1 + 16))
							{
								if (!GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&Param1 + 16), "UseCase1", &Var1))
								{
									GET_OBJECT_POSITION(&Param1 + 16, &Var1);
								}
							}
							else
							{
								GET_OBJECT_POSITION(&Param1 + 16, &Var1);
							}
							if (!Function_222(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
							{
								Function_220(StackVal, Var1, &uVar5, &iVar6);
							}
							else
							{
								Function_220(StackVal, *(&Param1 + 56), &uVar5, &iVar6);
							}
							iParam0 = 1;
							break;
						
						case 0x00000010:
							GET_PATH_POINT(&Param1 + 16, false, &Var1);
							if (!Function_222(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
							{
								Function_220(StackVal, Var1, &uVar5, &iVar6);
							}
							else
							{
								Function_220(StackVal, *(&Param1 + 56), &uVar5, &iVar6);
							}
							iParam0 = 1;
							break;
						
						default:
							Function_220(StackVal, *(&Param1 + 56), &uVar5, &iVar6);
							iParam0 = 1;
							break;
					}
				}
				else
				{
					Function_220(StackVal, *(&Param1 + 56), &uVar5, &iVar6);
					iParam0 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (bVar15)
			{
				iParam0 = 16;
				break;
			}
			if (Function_219(&Param1))
			{
				Param1.f_28 = Function_229(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1);
				Function_228(&Param1, Param1.f_28);
				*(&Param1 + 56) = Function_228(&Param1, Param1.f_28);
				Param1.f_68 = Function_227(&Param1);
			}
			*(&Param1 + 80) = Function_225(&Param1, &Param1 + 24, 0);
			*(&Param1 + 16) = Function_190(StackVal, &Param1, &Param1 + 72, &Param1 + 80, "UseCase1", *(&Param1 + 56), Param1.f_68, 0, 0);
			Function_218(&Param1, "GB_PERFORM_SCHEDULED_TASK", &Param1 + 80);
			if (IS_ACTOR_VALID(&uVar5))
			{
				if (IS_OBJECT_VALID(&Param1 + 16))
				{
					switch (GET_OBJECT_TYPE(&Param1 + 16))
					{
						case 0x0000000C:
							Param1 = 0;
							Function_16(&Param1 + 40);
							Function_12(&Param1 + 40);
							if (Function_217(&Param1))
							{
								iParam0 = 4;
							}
							else
							{
								TASK_PRIORITY_SET(&uVar5, 2);
								iParam0 = 2;
							}
							break;
						
						case 0x00000010:
							Param1 = 0;
							Function_16(&Param1 + 40);
							Function_12(&Param1 + 40);
							TASK_PRIORITY_SET(&uVar5, 2);
							iParam0 = 6;
							break;
						
						default:
							Function_203(&Param1, "GB_PERFORM_SCHEDULED_TASK: Unhandled object! what the hell has come through?");
							iParam0 = 20;
							break;
					}
				}
				else if (STRINGS_ARE_EQUAL(&Param1 + 80, "nsleeptime"))
				{
					Param1 = 0;
					Function_16(&Param1 + 40);
					Function_12(&Param1 + 40);
					if (&bParam2)
					{
						TASK_PRIORITY_SET(&uVar5, 2);
						TASK_GO_TO_COORD_AND_STAY(&uVar5, &Param1 + 56, 1, 0.0f);
					}
					else
					{
						TASK_PRIORITY_SET(&uVar5, 3);
						Function_223(StackVal, *(&Param1 + 56), Param1.f_68, -1.0f);
					}
					SET_PERS_CHAR_ENABLED(&iVar6, false);
					iParam0 = 15;
				}
				else if (STRINGS_ARE_EQUAL_CLAMPED(&Param1 + 80, "wander", 6))
				{
					Param1 = 0;
					Function_16(&Param1 + 40);
					Function_12(&Param1 + 40);
					TASK_PRIORITY_SET(&uVar5, 3);
					iParam0 = 8;
				}
				else
				{
					Function_203(&Param1, "WARNING! No valid TASK for this pers char");
					iParam0 = 9;
				}
			}
			else
			{
				switch (GET_OBJECT_TYPE(&Param1 + 16))
				{
					case 0x0000000C:
						if (IS_GRINGO_READY(&Param1 + 16))
						{
							if (!GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&Param1 + 16), "UseCase1", &Var1))
							{
								GET_OBJECT_POSITION(&Param1 + 16, &Var1);
							}
						}
						else
						{
							GET_OBJECT_POSITION(&Param1 + 16, &Var1);
						}
						if (!Function_222(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
						{
							Function_220(StackVal, Var1, &uVar5, &iVar6);
						}
						else
						{
							Function_220(StackVal, *(&Param1 + 56), &uVar5, &iVar6);
						}
						iParam0 = 19;
						break;
					
					case 0x00000010:
						GET_PATH_POINT(&Param1 + 16, false, &Var1);
						if (!Function_222(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
						{
							Function_220(StackVal, Var1, &uVar5, &iVar6);
						}
						else
						{
							Function_220(StackVal, *(&Param1 + 56), &uVar5, &iVar6);
						}
						iParam0 = 19;
						break;
					
					default:
						Function_220(StackVal, *(&Param1 + 56), &uVar5, &iVar6);
						if (STRINGS_ARE_EQUAL_CLAMPED(&Param1 + 80, "wander", 6))
						{
							iParam0 = 19;
						}
						else if (STRINGS_ARE_EQUAL_CLAMPED(&Param1 + 80, "nsleeptime", 9))
						{
							iParam0 = 19;
						}
						else
						{
							iParam0 = 19;
						}
						break;
					}
			}
			break;
		
		case 0x00000002:
			Param1 = 0;
			if (IS_ACTOR_VALID(&uVar5))
			{
				TASK_PRIORITY_SET(&uVar5, 2);
				TASK_STAND_STILL(&uVar5, 1.0f, 1, 1);
				iParam0 = 3;
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000003:
			Param1 = 0;
			if (IS_ACTOR_VALID(&uVar5))
			{
				iVar0 = GET_TASK_STATUS(&uVar5, 6);
				if (iVar0 != 0 || iVar0 != 4)
				{
					iParam0 = 4;
				}
				if (Function_219(&Param1))
				{
					iParam0 = 20;
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000004:
			Param1 = 500;
			if (IS_ACTOR_VALID(&uVar5))
			{
				Function_215(&uVar5);
				if (bVar15)
				{
					iParam0 = 16;
					break;
				}
				else
				{
					if (Function_214(&uVar5, &Param1 + 16, "UseCase1", Function_192(&Param1)))
					{
						if (Function_213(&uVar5, &Param1 + 16, "UseCase1", &bVar17))
						{
							Function_16(&Param1 + 40);
							Function_12(&Param1 + 40);
							iParam0 = 5;
							break;
						}
						else if (bVar17)
						{
							Function_218(&Param1, "GB_PERFORM_SCHEDULED_TASK", "GB_REACH_AND_USE_GRINGO failed - gringo is inside a restriction volume.");
							iParam0 = 9;
							break;
						}
					}
					else
					{
						iParam0 = 9;
						break;
					}
					if (Function_6(&Param1 + 40) < 20.0f)
					{
						if ((GET_TASK_STATUS(&uVar5, 1) != 4 || GET_TASK_STATUS(&uVar5, 19) != 4) || Function_219(&Param1))
						{
							iParam0 = 20;
						}
					}
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000008:
			Param1 = 0;
			if (IS_ACTOR_VALID(&uVar5))
			{
				Function_215(&uVar5);
				fVar4 = Function_212(&Param1 + 80);
				Var1 = *(&Param1 + 56);
				uVar3 = Param1.f_68;
				if (Function_210(&Param1, &vVar7, &vVar9))
				{
					iVar11 = Vector(Function_209(vVar7.x, vVar9.x), Function_209(vVar7.y, vVar9.y), Function_209(vVar7.z, vVar9.z));
					uVar13 = Vector(Function_208(vVar7.x, vVar9.x), Function_208(vVar7.y, vVar9.y), Function_208(vVar7.z, vVar9.z));
					TASK_PRIORITY_SET(&uVar5, 3);
					TASK_WANDER_IN_BOX(&uVar5, &iVar11, &uVar13, -1f);
					iParam0 = 12;
				}
				else
				{
					Function_223(StackVal, Var1, uVar3, fVar4);
					iParam0 = 11;
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000009:
			Param1 = 0;
			if (IS_ACTOR_VALID(&uVar5))
			{
				Function_215(&uVar5);
				if (&bParam2)
				{
					Function_203(&Param1, "An error has triggered GB_SCHEDULE_TASK_WANDER_FALLBACK (this is a shopkeeper) - check spew!");
					Var1 = *(&Param1 + 56);
					uVar3 = Param1.f_68;
					TASK_PRIORITY_SET(&uVar5, 2);
					TASK_GO_NEAR_COORD(&uVar5, &Var1, 2.0f, 1);
					iParam0 = 10;
				}
				else
				{
					Function_203(&Param1, "An error has triggered GB_SCHEDULE_TASK_WANDER_FALLBACK - check spew!");
					if (Function_210(&Param1, &vVar7, &vVar9))
					{
						iVar11 = Vector(Function_209(vVar7.x, vVar9.x), Function_209(vVar7.y, vVar9.y), Function_209(vVar7.z, vVar9.z));
						uVar13 = Vector(Function_208(vVar7.x, vVar9.x), Function_208(vVar7.y, vVar9.y), Function_208(vVar7.z, vVar9.z));
						TASK_PRIORITY_SET(&uVar5, 3);
						TASK_WANDER_IN_BOX(&uVar5, &iVar11, &uVar13, 20.0f);
						iParam0 = 12;
					}
					else
					{
						Var1 = *(&Param1 + 56);
						uVar3 = Param1.f_68;
						Function_223(StackVal, Var1, uVar3, 20.0f);
						iParam0 = 11;
					}
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x0000000A:
			Param1 = 0;
			if (IS_ACTOR_VALID(&uVar5))
			{
				iVar0 = GET_TASK_STATUS(&uVar5, 61);
				if (iVar0 != 0 || iVar0 != 4)
				{
					TASK_PRIORITY_SET(&uVar5, 2);
					TASK_STAND_STILL(&uVar5, 20.0f, 1, 0);
					iParam0 = 14;
				}
				if (Function_219(&Param1))
				{
					iParam0 = 20;
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x0000000E:
			Function_207(&Param1, &iVar6, "STANDING STILL FALLBACK");
			Param1 = 500;
			if (IS_ACTOR_VALID(&uVar5))
			{
				iVar0 = GET_TASK_STATUS(&uVar5, 6);
				if (iVar0 != 0 || iVar0 != 4)
				{
					iParam0 = 20;
				}
				if (Function_219(&Param1))
				{
					iParam0 = 20;
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x0000000B:
		case 0x0000000C:
			Param1 = 500;
			if (IS_ACTOR_VALID(&uVar5))
			{
				iVar0 = GET_TASK_STATUS(&uVar5, 58);
				if (iVar0 != 0 || iVar0 != 4)
				{
					iParam0 = 20;
				}
				if (Function_219(&Param1))
				{
					iParam0 = 20;
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x0000000D:
			Param1 = 500;
			if (IS_ACTOR_VALID(&uVar5))
			{
				iVar0 = GET_TASK_STATUS(&uVar5, 57);
				if ((iVar0 != 0 || iVar0 != 2) || iVar0 != 4)
				{
					iParam0 = 20;
				}
				if (Function_219(&Param1))
				{
					iParam0 = 20;
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x0000000F:
			Function_207(&Param1, &iVar6, "nSLEEPTIME");
			if (IS_ACTOR_VALID(&uVar5))
			{
				if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uVar5, 1065353216, 1117126656, 1, 1, 0))
				{
					DECOR_SET_FLOAT(&uVar5, "sleepvis", GET_CURRENT_GAME_TIME());
				}
				if (DECOR_CHECK_EXIST(&uVar5, "sleepvis"))
				{
					if (DECOR_GET_FLOAT(&uVar5, "sleepvis") + 5.0f) > GET_CURRENT_GAME_TIME()
					{
						DEACTIVATE_ACTOR_FOR_PERS_CHAR(&iVar6);
					}
				}
			}
			if (Function_219(&Param1))
			{
				if (IS_ACTOR_VALID(&uVar5))
				{
					if (DECOR_CHECK_EXIST(&uVar5, "sleepvis"))
					{
						DECOR_REMOVE(&uVar5, "sleepvis");
					}
				}
				SET_PERS_CHAR_ENABLED(&iVar6, true);
				iParam0 = 20;
			}
			break;
		
		case 0x00000005:
			Param1 = 500;
			if (IS_ACTOR_VALID(&uVar5))
			{
				if (bVar15)
				{
					iParam0 = 16;
					break;
				}
				else
				{
					iVar0 = GET_TASK_STATUS(&uVar5, 19);
					if ((iVar0 != 0 || iVar0 != 2) || iVar0 != 4)
					{
						iParam0 = 20;
					}
					if (AI_HAS_ACTOR_BUMPED_INTO_ME(&uVar5, &Global_54076, 10.0f) && Function_206(&Param1 + 16))
					{
						iParam0 = 20;
					}
					if (Function_219(&Param1))
					{
						iParam0 = 20;
					}
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000006:
			Param1 = 500;
			if (IS_ACTOR_VALID(&uVar5))
			{
				Function_215(&uVar5);
				if (bVar15)
				{
					iParam0 = 16;
					break;
				}
				else
				{
					TASK_GUARD_PATROL_PATH(&uVar5, &Param1 + 16, 3212836864, 4294967295, 0, 1, 3212836864);
					iParam0 = 7;
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000007:
			Param1 = 500;
			if (IS_ACTOR_VALID(&uVar5))
			{
				if (bVar15)
				{
					iParam0 = 16;
					break;
				}
				else if (Function_219(&Param1))
				{
					iParam0 = 20;
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000013:
			if (IS_ACTOR_VALID(&uVar5))
			{
				iParam0 = 20;
			}
			else if (Function_219(&Param1))
			{
				iParam0 = 20;
			}
			else if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iVar6)))
			{
				if (Function_205(50.0f, &iVar6))
				{
					iParam0 = 20;
				}
			}
			break;
		
		case 0x00000010:
			if (bVar15)
			{
				Param1 = 0;
				if (IS_ACTOR_VALID(&uVar5))
				{
					Function_215(&uVar5);
					Function_223(StackVal, *(&Param1 + 56), Param1.f_68, -1.0f);
				}
				iParam0 = 17;
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000011:
			Function_207(&Param1, &iVar6, "RESPONDING TO RAIN");
			Param1 = 0;
			if (!bVar15)
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000012:
			Function_207(&Param1, &iVar6, "RESPONDING TO RETREAT");
			Param1 = 0;
			if (IS_ACTOR_VALID(&uVar5))
			{
				if (!AI_GET_IS_RETREATING(&uVar5))
				{
					iParam0 = 20;
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000014:
			(&Param1 + 16) = "";
			Param1 = 0;
			if (Function_219(&Param1))
			{
				Param1.f_24 = 0;
			}
			else
			{
				Param1.f_24++;
			}
			Function_16(&Param1 + 40);
			if (IS_ACTOR_VALID(&uVar5))
			{
				TASK_PRIORITY_SET(&uVar5, 2);
			}
			iParam0 = 1;
			break;
		
		case 0x00000015:
			if (!Function_251(&Param1))
			{
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_PERS_CHAR(&iVar6), "KeepLastTask"))
				{
					Function_207(&Param1, &iVar6, "STOLEN KEEP_LAST_TASK");
					if (!IS_ACTOR_VALID(&uVar5))
					{
						DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&iVar6), "KeepLastTask");
						iParam0 = 20;
					}
				}
				else
				{
					iParam0 = 20;
				}
			}
			else
			{
				Function_207(&Param1, &iVar6, "STOLEN");
			}
			break;
		
		default:
			Function_218(&Param1, "GB_PERFORM_SCHEDULED_TASK", "UNKNOWN STATE!");
			return 0;
			break;
	}
	return 1;
}

bool Function_205(float fParam0, int iParam1) //Position: 0xB930 / 47408
{
	struct<2> Var0;
	struct<2> Var2;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
	GET_OBJECT_POSITION(&iParam1, &Var0);
	if (VDIST(Var0, Var2) >= fParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_206(int iParam0) //Position: 0xB95C / 47452
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_GRINGO_FROM_OBJECT(&iParam0);
	if (IS_GRINGO_VALID(&uVar0))
	{
		iVar1 = 0;
		GRINGO_QUERY_STRING(&uVar0, "UseCase1", "ChildFlags", &iVar1);
		if (iVar1 >= 0)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void Function_207(int iParam0, int iParam1, int iParam2) //Position: 0xB9A6 / 47526
{
	struct<5> Var0;
	
	if (Function_192(&iParam0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_PERS_CHAR(&iParam1), &Var0);
		Var0.f_4 = (StackVal + 0,25f);
	}
	return;
}

int Function_208(int iParam0, int iParam1) //Position: 0xB9CF / 47567
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_209(int iParam0, int iParam1) //Position: 0xB9E2 / 47586
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_210(int iParam0, int iParam1, var uParam2) //Position: 0xB9F5 / 47605
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	iVar0 = Function_211(&iParam0);
	switch (iVar0)
	{
		case 0x00000001:
			iVar6 = "Dawn_Tasks";
			break;
		
		case 0x00000002:
			iVar6 = "Morning_Tasks";
			break;
		
		case 0x00000004:
			iVar6 = "LunchTime_Tasks";
			break;
		
		case 0x00000008:
			iVar6 = "Afternoon_Tasks";
			break;
		
		case 0x00000010:
			iVar6 = "Evening_Tasks";
			break;
		
		case 0x00000020:
			iVar6 = "Night_Tasks";
			break;
		
		default:
			if (Function_192(&iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_SCHEDULED_WANDER_BOX_CORNERS_FROM_XML invalid time of day returned by GB_GET_MY_TIME_OF_DAY");
				PRINTNL();
			}
			iVar6 = "Dawn_Tasks";
			break;
	}
	iVar3 = GRINGO_GET_FIRST_NAMED_CHILD("TimeOfDay_Tasks", 0, &iParam0 + 8);
	uVar4 = GRINGO_GET_FIRST_NAMED_CHILD(&iVar6, 0, &iVar3);
	iVar7 = GRINGO_GET_ATTRIBUTE_COUNT(&uVar4);
	bVar8 = false;
	while (bVar8 <= iVar7)
	{
		uVar5 = GRINGO_GET_ATTRIBUTE(&uVar4, bVar8);
		if (!bVar1)
		{
			bVar1 = GRINGO_GET_VECTOR_ATTR_BY_HANDLE(&uVar5, &iParam1);
		}
		else if (!bVar2)
		{
			bVar2 = GRINGO_GET_VECTOR_ATTR_BY_HANDLE(&uVar5, &uParam2);
		}
		if (bVar1 && bVar2)
		{
			return 1;
		}
		bVar8++;
	}
	return 0;
}

int Function_211(struct<37> Param0) //Position: 0xBBCA / 48074
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	uVar0 = MAKE_TIME_OF_DAY((5 + Param0.f_36), Param0.f_32, false);
	uVar1 = MAKE_TIME_OF_DAY((7 + Param0.f_36), Param0.f_32, false);
	uVar2 = MAKE_TIME_OF_DAY((11 + Param0.f_36), Param0.f_32, false);
	iVar3 = MAKE_TIME_OF_DAY((14 + Param0.f_36), Param0.f_32, false);
	uVar4 = MAKE_TIME_OF_DAY((18 + Param0.f_36), Param0.f_32, false);
	uVar5 = MAKE_TIME_OF_DAY((22 + Param0.f_36), Param0.f_32, false);
	uVar6 = GET_TIME_OF_DAY();
	if (TIME_IS_IN_RANGE(&uVar6, &uVar0, &uVar1))
	{
		return 1;
	}
	if (TIME_IS_IN_RANGE(&uVar6, &uVar1, &uVar2))
	{
		return 2;
	}
	if (TIME_IS_IN_RANGE(&uVar6, &uVar2, &iVar3))
	{
		return 4;
	}
	if (TIME_IS_IN_RANGE(&uVar6, &iVar3, &uVar4))
	{
		return 8;
	}
	if (TIME_IS_IN_RANGE(&uVar6, &uVar4, &uVar5))
	{
		return 16;
	}
	if (TIME_IS_IN_RANGE(&uVar6, &uVar5, &uVar0))
	{
		return 32;
	}
	return 32;
}

var Function_212(int iParam0) //Position: 0xBCC6 / 48326
{
	int iVar0;
	int iVar1;
	
	STRING_CLEAR_TOKENIZER();
	iVar1 = SET_OWNERSHIP_STRAGGLER(&iParam0, ",");
	if (iVar1 >= 1)
	{
		iVar0 = STRING_TO_FLOAT(STRING_GET_TOKEN(1));
		if (iVar0 < 0.0f)
		{
			return iVar0;
		}
	}
	return -1.0f;
}

bool Function_213(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xBCF5 / 48373
{
	struct<2> Var0;
	struct<2> Var2;
	
	uParam3 = 0;
	if (IS_OBJECT_VALID(&uParam1))
	{
		if (GET_OBJECT_TYPE(&uParam1) == 12)
		{
			GET_OBJECT_POSITION(&uParam1, &Var0);
			GET_POSITION(&uParam0, &Var2);
			if (IS_POINT_IN_AMBIENT_MOVE_RESTRICTION_VOLUME(&Var0))
			{
				uParam3 = 1;
				return 0;
			}
			if (VDIST(Var0, Var2) < 8.0f)
			{
				if (GET_TASK_STATUS(&uParam0, 1) == 2)
				{
					TASK_PRIORITY_SET(&uParam0, 2);
					TASK_GO_TO_COORD(&uParam0, &Var0, 1);
				}
			}
			else
			{
				TASK_PRIORITY_SET(&uParam0, 2);
				TASK_USE_GRINGO(&uParam0, GET_GRINGO_FROM_OBJECT(&uParam1), &uParam2, true, 1);
				return 1;
			}
		}
	}
	return 0;
}

bool Function_214(int iParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xBD87 / 48519
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&uParam1))
	{
		if (GET_OBJECT_TYPE(&uParam1) == 12)
		{
			if (Function_206(&uParam1))
			{
				if (!GRINGO_ACTOR_CAN_USE(GET_GRINGO_FROM_OBJECT(&uParam1), &uParam2, &iParam0))
				{
					if (&bParam3)
					{
						PRINTSTRING("Gen_Brain: GB_CAN_USE_GRINGO: This gringo cannot be used by me!");
						PRINTNL();
					}
					return 0;
				}
			}
			iVar0 = GET_ACTOR_FROM_OBJECT(GRINGO_GET_TASKED_USER_EXTERNAL(GET_GRINGO_FROM_OBJECT(&uParam1), &uParam2));
			if (IS_ACTOR_VALID(&iVar0))
			{
				if (&iVar0 == &iParam0)
				{
					return 1;
				}
				if (&bParam3)
				{
					PRINTSTRING("Gen_Brain: GB_CAN_USE_GRINGO: This gringo has a valid TASKED_USER_EXTERNAL that is not me!");
					PRINTNL();
				}
			}
			else
			{
				iVar0 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(GET_GRINGO_FROM_OBJECT(&uParam1), &uParam2));
				if (IS_ACTOR_VALID(&iVar0))
				{
					if (&iVar0 == &iParam0)
					{
						return 1;
					}
					if (&bParam3)
					{
						PRINTSTRING("Gen_Brain: GB_CAN_USE_GRINGO: This gringo has a valid NAMED_COMPONENT_USER that is not me!");
						PRINTNL();
					}
				}
				else
				{
					return 1;
				}
			}
		}
		if (&bParam3)
		{
			PRINTSTRING("Gen_Brain: GB_CAN_USE_GRINGO: Object passed is not a GRINGO!");
			PRINTNL();
		}
	}
	else if (&bParam3)
	{
		PRINTSTRING("Gen_Brain: GB_CAN_USE_GRINGO: Invalid OBJECT passed!");
		PRINTNL();
	}
	return 0;
}

void Function_215(var uParam0) //Position: 0xBFD8 / 49112
{
	if (IS_ACTOR_RIDING(&uParam0))
	{
		Function_216(&uParam0);
		MEMORY_PREFER_WALKING(&uParam0, false);
		ACTOR_DISMOUNT_NOW(&uParam0);
	}
	return;
}

void Function_216(int iParam0) //Position: 0xC000 / 49152
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Called ACTOR_NO_LONGER_REQUIRES_HORSE_ALWAYS with invalid actor");
		return;
	}
	CLEAR_ACTORS_HORSE(&iParam0);
	if (IS_OBJECTSET_VALID(&Global_26170))
	{
		if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26170))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26170);
		}
	}
	return;
}

bool Function_217(int iParam0) //Position: 0xC083 / 49283
{
	var uVar0;
	var uVar1;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("ScriptStructure", 0, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		return GET_GRINGO_BOOL_ATTR("minigame_guy", &uVar0, &uVar1);
	}
	return 0;
}

void Function_218(int iParam0, int iParam1, int iParam2) //Position: 0xC0CD / 49357
{
	if (Function_192(&iParam0))
	{
		PRINTSTRING("Pers Char: ");
		PRINTSTRING(GET_OBJECT_NAME(Function_194()));
		PRINTSTRING(" - ");
		PRINTSTRING("Module Name: ");
		PRINTSTRING(&iParam1);
		PRINTSTRING(" - ");
		PRINTSTRING(&iParam2);
		PRINTNL();
	}
	return;
}

bool Function_219(struct<11> Param0) //Position: 0xC12A / 49450
{
	if (!StackVal != Function_229(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0.f_28, Param0))
	{
		return 1;
	}
	return 0;
}

void Function_220(struct<2> Param0, var uParam2, var uParam3) //Position: 0xC146 / 49478
{
	struct<2> Var0;
	var uVar2;
	float fVar4;
	struct<2> Var5;
	
	Var0 = Param0;
	if (IS_ACTOR_VALID(&uParam2))
	{
		if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam2, 1065353216, 1117126656, 1, 1, 0))
		{
			fVar4 = GET_ACTOR_HEIGHT(&uParam2);
			fVar4 = (fVar4 / 2.0f);
			Param0.f_4 = (StackVal + fVar4);
			if (STREAMING_ARE_BOUNDS_LOADED(Param0, 25.0f))
			{
				FIND_GROUND_INTERSECTION(&Param0, 25.0f, &Var0, &uVar2);
			}
			else
			{
				Var0 = Param0;
			}
			if (!Function_33(StackVal, Var0))
			{
				Var5 = Var0;
			}
			else
			{
				Var5 = Param0;
			}
			LOG_WARNING("GB_SET_PERS_CHAR_POSITION: calling WOULD_ACTOR_BE_VISIBLE");
			if (!WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(&uParam2), &Var5, 3212836864))
			{
				LOG_WARNING("GB_SET_PERS_CHAR_POSITION: called WOULD_ACTOR_BE_VISIBLE and succeded");
				SET_OBJECT_POSITION(&uParam3, Var5);
			}
		}
	}
	else
	{
		SET_OBJECT_POSITION(&uParam3, Var0);
	}
}

void Function_221(struct<2> Param0, var uParam2, var uParam3) //Position: 0xC28C / 49804
{
	struct<2> Var0;
	var uVar2;
	float fVar4;
	
	Var0 = Param0;
	if (IS_ACTOR_VALID(&uParam2))
	{
		if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam2, 1065353216, 1117126656, 1, 1, 0))
		{
			fVar4 = GET_ACTOR_HEIGHT(&uParam2);
			fVar4 = (fVar4 / 2.0f);
			Param0.f_4 = (StackVal + fVar4);
			if (STREAMING_ARE_BOUNDS_LOADED(Param0, 25.0f))
			{
				FIND_GROUND_INTERSECTION(&Param0, 25.0f, &Var0, &uVar2);
			}
			else
			{
				Var0 = Param0;
			}
			LOG_WARNING("GB_TELEPORT: calling WOULD_ACTOR_BE_VISIBLE");
			if (!WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(&uParam2), &Var0, 3212836864))
			{
				LOG_WARNING("GB_TELEPORT: called WOULD_ACTOR_BE_VISIBLE and succeded");
				TELEPORT_ACTOR(&uParam2, &Var0, 1, 1, 1);
			}
		}
	}
	else
	{
		SET_OBJECT_POSITION(&uParam3, Var0);
	}
}

bool Function_222(struct<2> Param0, struct<2> Param2) //Position: 0xC39A / 50074
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_223(struct<2> Param0, var uParam2, float fParam3) //Position: 0xC3C6 / 50118
{
	var uVar0;
	var uVar2;
	
	if (fParam3 >= 0.0f)
	{
		fParam3 = -1.0f;
	}
	Function_224(StackVal, Param0, uParam2, &uVar0, &uVar2);
	TASK_PRIORITY_SET(Function_252(), 3);
	TASK_WANDER_IN_BOX(Function_252(), &uVar0, &uVar2, fParam3);
}

void Function_224(vector3 vParam0) //Position: 0xC3F8 / 50168
{
	if (fParam2 >= 0.0f)
	{
		fParam2 = 1.0f;
	}
	vParam3.f_8 = (vParam0.z - (fParam2 * 0,707f));
	vParam3.f_4 = (vParam0.y - 100.0f);
	vParam3 = (vParam0.x - (fParam2 * 0,707f));
	vParam4.f_8 = (vParam0.z + (fParam2 * 0,707f));
	vParam4.f_4 = (vParam0.y + 100.0f);
	vParam4 = (vParam0.x + (fParam2 * 0,707f));
}

var Function_225(int iParam0, var uParam1, int iParam2) //Position: 0xC46A / 50282
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	
	iVar0 = Function_211(&iParam0);
	switch (iVar0)
	{
		case 0x00000001:
			uVar7 = "Dawn_Tasks";
			break;
		
		case 0x00000002:
			uVar7 = "Morning_Tasks";
			break;
		
		case 0x00000004:
			uVar7 = "LunchTime_Tasks";
			break;
		
		case 0x00000008:
			uVar7 = "Afternoon_Tasks";
			break;
		
		case 0x00000010:
			uVar7 = "Evening_Tasks";
			break;
		
		case 0x00000020:
			uVar7 = "Night_Tasks";
			break;
		
		default:
			if (Function_192(&iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_SCHEDULED_TASK_FROM_XML invalid time of day returned by GB_GET_MY_TIME_OF_DAY");
				PRINTNL();
			}
			break;
	}
	uVar4 = GRINGO_GET_FIRST_NAMED_CHILD("TimeOfDay_Tasks", 0, &iParam0 + 8);
	uVar5 = GRINGO_GET_FIRST_NAMED_CHILD(&uVar7, 0, &uVar4);
	iVar2 = GRINGO_GET_ATTRIBUTE_COUNT(&uVar5);
	if (iVar2 < 1 && iParam2)
	{
		bVar9 = RAND_INT_RANGE(false, 1000);
		bVar1 = (bVar9 % iVar2);
	}
	if (uParam1 < 0 && uParam1 > iVar2)
	{
		bVar1 = uParam1;
	}
	else
	{
		bVar1 = true;
		uParam1 = bVar1;
	}
	while (bVar1 <= iVar2)
	{
		uVar6 = GRINGO_GET_ATTRIBUTE(&uVar5, bVar1);
		iVar8 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&uVar6, &uVar3);
		if (IS_STRING_VALID(&iVar8))
		{
			return &iVar8;
		}
		bVar1++;
	}
	return "NHIL";
}

var Function_226(int iParam0) //Position: 0xC64B / 50763
{
	int iVar0;
	var uVar11;
	
	uVar11 = GRINGO_GET_FIRST_NAMED_CHILD("ScriptStructure", 0, &iParam0 + 8);
	GET_GRINGO_STRUCT_ATTR(&iVar0, 22, "Vectors_and_LayoutRef_Struct", &uVar11);
	return &iVar0 + 72;
}

var Function_227(int iParam0) //Position: 0xC69F / 50847
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	iVar0 = Function_211(&iParam0);
	switch (iVar0)
	{
		case 0x00000001:
			uVar5 = "Dawn_Tasks";
			break;
		
		case 0x00000002:
			uVar5 = "Morning_Tasks";
			break;
		
		case 0x00000004:
			uVar5 = "LunchTime_Tasks";
			break;
		
		case 0x00000008:
			uVar5 = "Afternoon_Tasks";
			break;
		
		case 0x00000010:
			uVar5 = "Evening_Tasks";
			break;
		
		case 0x00000020:
			uVar5 = "Night_Tasks";
			break;
		
		default:
			if (Function_192(&iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_SCHEDULED_SCAN_AREA_SIZE_FROM_XML invalid time of day returned by GB_GET_MY_TIME_OF_DAY");
				PRINTNL();
			}
			break;
	}
	uVar2 = GRINGO_GET_FIRST_NAMED_CHILD("TimeOfDay_Tasks", 0, &iParam0 + 8);
	uVar3 = GRINGO_GET_FIRST_NAMED_CHILD(&uVar5, 0, &uVar2);
	iVar4 = GRINGO_GET_ATTRIBUTE(&uVar3, false);
	return GRINGO_GET_FLOAT_ATTR_BY_HANDLE(&iVar4, &uVar1);
}

struct<8> Function_228(int iParam0, bool bParam1) //Position: 0xC81C / 51228
{
	struct<2> Var0;
	var uVar11;
	struct<2> Var12;
	
	uVar11 = GRINGO_GET_FIRST_NAMED_CHILD("ScriptStructure", 0, &iParam0 + 8);
	GET_GRINGO_STRUCT_ATTR(&Var0, 22, "Vectors_and_LayoutRef_Struct", &uVar11);
	if (&bParam1 == 4294967295)
	{
		LOG_ERROR("GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT: Called with an invalid Index, defaulting to 0 (Dawn)");
		bParam1 = 0;
	}
	switch (&bParam1)
	{
		case 0x00000000:
			Var12 = Var0;
			break;
		
		case 0x00000001:
			Var12 = *(&Var0 + 12);
			break;
		
		case 0x00000002:
			Var12 = *(&Var0 + 24);
			break;
		
		case 0x00000003:
			Var12 = *(&Var0 + 36);
			break;
		
		case 0x00000004:
			Var12 = *(&Var0 + 48);
			break;
		
		case 0x00000005:
			Var12 = *(&Var0 + 60);
			break;
	}
	if (Function_222(StackVal, StackVal, Var12, Vector(0.0f, 0.0f, 0.0f)))
	{
		if (Function_192(&iParam0))
		{
			PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT vector is null for time of day index: ");
			PRINTINT(&bParam1);
			PRINTNL();
		}
		if (IS_ACTOR_VALID(Function_252()))
		{
			GET_POSITION(Function_252(), &Var12);
			if (Function_192(&iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT returning actor position instead of struct vector");
				PRINTNL();
			}
		}
		else if (IS_PERS_CHAR_VALID(Function_254()))
		{
			GET_OBJECT_POSITION(Function_194(), &Var12);
			if (Function_192(&iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT returning pers char position instead of struct vector");
				PRINTNL();
			}
		}
	}
	return StackVal, Var12;
}

int Function_229(int iParam0, bool bParam1, var uParam2, bool bParam3, var uParam4, bool bParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10) //Position: 0xCAE8 / 51944
{
	bool bVar0;
	
	bVar0 = Function_211(&iParam0);
	switch (bVar0)
	{
		case 0x00000001:
			return 0;
			break;
		
		case 0x00000002:
			return 1;
			break;
		
		case 0x00000004:
			return 2;
			break;
		
		case 0x00000008:
			return 3;
			break;
		
		case 0x00000010:
			return 4;
			break;
		
		case 0x00000020:
			return 5;
			break;
		
		default:
			if (Function_192(&iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_GET_IDX_FROM_TOD invalid time of day returned by GB_GET_MY_TIME_OF_DAY");
				PRINTNL();
			}
			break;
	}
	return 0;
}

var Function_230() //Position: 0xCBB5 / 52149
{
	return StackVal;
}

void Function_231(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xCBC0 / 52160
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_233(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_232(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_232(char* cParam0) //Position: 0xCC35 / 52277
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

bool Function_233(int iParam0, var uParam1, int iParam2) //Position: 0xCC6F / 52335
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_235(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_234(uVar0))
		{
			case 0x00000002:
				if (!Function_236(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_234(char* cParam0) //Position: 0xCCEB / 52459
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

int Function_235(int iParam0) //Position: 0xCD8C / 52620
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_14(&iVar1, 2147483648);
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

bool Function_236(var uParam0, int iParam1) //Position: 0xCDC9 / 52681
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_237(int iParam0) //Position: 0xCDDC / 52700
{
	if (IS_BLIP_VALID(&iParam0 + 48))
	{
		REMOVE_BLIP(&iParam0 + 48);
		return !IS_BLIP_VALID(&iParam0 + 48);
	}
	return 1;
}

int Function_238(int iParam0, bool bParam1, int iParam2) //Position: 0xCE06 / 52742
{
	bool bVar0;
	struct<2> Var1;
	int iVar3;
	
	if (!IS_BLIP_VALID(&iParam0 + 48))
	{
		if (IS_VOLUME_VALID(&iParam2))
		{
			if ((!Global_6623 && !Global_6635) && !Global_6627)
			{
				bVar0 = Function_244(&bParam1);
				*(&iParam0 + 48) = ADD_BLIP_FOR_OBJECT(&iParam2, bVar0, 0.0f, 2, 0);
				SET_BLIP_MAX_DISTANCE(&iParam0 + 48, 1,25f);
				UNK_0x1E98AFEC(&iParam0 + 48, 1);
				GET_VOLUME_CENTER(&iParam2, &Var1);
				iVar3 = 12;
				if (bVar0 == 399)
				{
					iVar3 = 13;
				}
				else if (bVar0 == 398)
				{
					iVar3 = 14;
				}
				else if (bVar0 == 520)
				{
					iVar3 = 15;
				}
				Function_239(StackVal, Global_43789, iVar3, Var1, 30);
				return IS_BLIP_VALID(&iParam0 + 48);
			}
		}
	}
	if ((Global_6623 || Global_6635) || Global_6627)
	{
		REMOVE_BLIP(&iParam0 + 48);
		return !IS_BLIP_VALID(&iParam0 + 48);
	}
	return 0;
}

int Function_239(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0xCED9 / 52953
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	
	if (!Function_160(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_33(StackVal, Param2))
	{
		return 0;
	}
	iVar2 = Function_243(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_242(StackVal, Param2);
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal != iParam1 && Global_15863[iVar02] != iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	else
	{
		Function_241(uVar3);
		Var6 = Function_241(uVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_241(StackVal);
				Var4 = Function_241(StackVal);
				if (Function_222(StackVal, StackVal, Var4, Var6))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	if (iVar1 != 4294967295)
	{
		Global_15863[iVar12] = iParam0;
		Global_15863[iVar12].f_4 = iParam1;
		Global_15863[iVar12].f_8 = uVar3;
		Global_15863[iVar12].f_12 = &iParam4;
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_240(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(&(Global_16865[iVar1]), 1.0f, 1.0f, 1.0f, 0,5f);
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_CHANCE");
		}
		else if (iParam1 == 11)
		{
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_HORSEBREAKING");
		}
		else if (iParam1 == 24)
		{
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_CHANCE");
		}
		UNK_0xFF3DB575(&(Global_16865[iVar1]), 1);
		SET_BLIP_PRIORITY(&(Global_16865[iVar1]), true);
		return iVar1;
	}
	return 0;
}

int Function_240(int iParam0) //Position: 0xD0C2 / 53442
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

struct<8> Function_241(int iParam0) //Position: 0xD1F9 / 53753
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	
	bVar2 = iParam0 & 32767;
	bVar3 = SHIFT_RIGHT(iParam0, 15) & 32767;
	Var0 = TO_FLOAT(bVar2);
	Var0.f_8 = TO_FLOAT(bVar3);
	if (iParam0 & 1073741824 == 0)
	{
		Var0 = (Var0 * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		Var0.f_8 = (StackVal * -1.0f);
	}
	return StackVal, Var0;
}

var Function_242(vector3 vParam0) //Position: 0xD250 / 53840
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

int Function_243(int iParam0) //Position: 0xD29E / 53918
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

int Function_244(int iParam0) //Position: 0xD356 / 54102
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (IS_GRINGO_COMPONENT_VALID(&iParam0 + 8))
	{
		uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("Settings", 0, &iParam0 + 8);
		if (IS_GRINGO_COMPONENT_VALID(&uVar0))
		{
			if (GET_GRINGO_INT_ATTR(&uVar1, "blipID", &uVar0))
			{
				iVar2 = uVar1;
				if (iVar2 != 4294967295)
				{
					return iVar2;
				}
			}
		}
	}
	return 397;
}

int Function_245(bool bParam0) //Position: 0xD3AD / 54189
{
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("SK_SHOP_GET_ACTIVE_OVERRIDE: Actor not valid for SK_SHOP_GET_ACTIVE_WHEN_STOLEN, quitting.");
		return 0;
	}
	return DECOR_CHECK_EXIST(&bParam0, "ACTIVE_WHEN_STOLEN");
}

var Function_246() //Position: 0xD43A / 54330
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_247(int iParam0) //Position: 0xD44F / 54351
{
	return DECOR_CHECK_EXIST(&iParam0, "OUT_OF_STOCK");
}

bool Function_248(int iParam0) //Position: 0xD46A / 54378
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

int Function_249(int iParam0) //Position: 0xD486 / 54406
{
	if (IS_VOLUME_VALID(&iParam0))
	{
		if (IS_ACTOR_VALID(&Global_54076))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_250(var uParam0, int iParam1) //Position: 0xD4AF / 54447
{
	if (IS_VOLUME_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&iParam1))
		{
			if (IS_ACTOR_IN_VOLUME(&iParam1, &uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool Function_251(int iParam0) //Position: 0xD4D6 / 54486
{
	var uVar0;
	var uVar1;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("ScriptStructure", 0, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		return GET_GRINGO_BOOL_ATTR("stolen_flag", &uVar0, &uVar1);
	}
	return 0;
}

int Function_252() //Position: 0xD51F / 54559
{
	return GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF())));
}

void Function_253(int iParam0, struct<11> Param1) //Position: 0xD531 / 54577
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	if (Function_192(&Param1))
	{
		if (IS_ACTOR_VALID(Function_252()))
		{
			if (iParam0 == 0)
			{
				Param1 = 0;
			}
			else
			{
				Param1 = 0;
			}
			GET_POSITION(Function_252(), &Var0);
		}
		else
		{
			GET_OBJECT_POSITION(Function_194(), &Var0);
		}
		SET_DEBUG_DRAW(1);
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		Function_228(StackVal, Function_229(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Param1, Param1));
		Var0 = Function_228(StackVal, Function_229(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Param1, Param1));
		uVar4 = Function_227(&Param1);
		Var2 = Var0;
		Var2.f_4 = (StackVal + 2.0f);
		Var2.f_4 = (StackVal - 0,5f);
		Var0 = Var2;
		Var0 = (Var0 - 0,5f);
		Var2 = (Var2 + 0,5f);
	}
	return;
}

var Function_254() //Position: 0xD5D1 / 54737
{
	return GET_PERS_CHAR_FROM_OBJECT(GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF()));
}

int Function_255(int iParam0) //Position: 0xD5E0 / 54752
{
	var uVar0;
	var uVar1;
	
	uVar1 = GRINGO_GET_FIRST_NAMED_CHILD("ShopSettings", 0, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar1))
	{
		if (GET_GRINGO_INT_ATTR(&uVar0, "ShopType", &uVar1))
		{
			return uVar0;
		}
		Function_218(&iParam0, "SK_GET_SHOP_TYPE", "Missing or invalid ShopType");
	}
	else
	{
		LOG_ERROR("SK_GET_SHOP_TYPE: Missing ShopSettings in shop xml");
	}
	return 4294967295;
}

var Function_256(int iParam0) //Position: 0xD69A / 54938
{
	var uVar0;
	var uVar1;
	
	uVar1 = GRINGO_GET_FIRST_NAMED_CHILD("ShopSettings", 0, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar1))
	{
		if (GET_GRINGO_OBJECT_REF_ATTR(&uVar0, "ShopVolumeRef", &uVar1))
		{
			if (IS_OBJECT_VALID(&uVar0))
			{
				return GET_VOLUME_FROM_OBJECT(&uVar0);
			}
		}
		Function_218(&iParam0, "SK_GET_SHOP_VOLUME", "Missing or invalid ShopVolumeRef");
	}
	else
	{
		LOG_ERROR("SK_GET_SHOP_VOLUME: Missing ShopSettings in shop xml");
	}
	return "";
}

var Function_257(int iParam0) //Position: 0xD770 / 55152
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = 20.0f;
	uVar1 = GRINGO_GET_FIRST_NAMED_CHILD("ShopSettings", 0, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar1))
	{
		if (GET_GRINGO_FLOAT_ATTR(&bVar0, "ClosingTime(00:00-23:00)", &uVar1))
		{
			bVar0 = FABS(bVar0);
			if (bVar0 < 24.0f)
			{
				bVar0 = 0.0f;
				LOG_ERROR("SK_GET_CLOSING_TIME: ClosingTime(00:00-23:00) cannot be less than 0 or greater than 24!");
			}
			if (bVar0 != 24.0f)
			{
				bVar0 = 0.0f;
			}
		}
		else
		{
			Function_203(&iParam0, "SK_GET_CLOSING_TIME: Missing ClosingTime(00:00-23:00) Attribute in shop");
		}
	}
	else
	{
		LOG_ERROR("SK_GET_CLOSING_TIME: Missing ShopSettings in shop");
	}
	bVar2 = FLOOR(bVar0);
	bVar3 = FLOOR(((bVar0 - TO_FLOAT(bVar2)) * 100.0f));
	return MAKE_TIME_OF_DAY(bVar2, bVar3, false);
}

var Function_258(int iParam0) //Position: 0xD8F7 / 55543
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = 8.0f;
	uVar1 = GRINGO_GET_FIRST_NAMED_CHILD("ShopSettings", 0, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar1))
	{
		if (GET_GRINGO_FLOAT_ATTR(&bVar0, "OpeningTime(00:00-23:00)", &uVar1))
		{
			bVar0 = FABS(bVar0);
			if (bVar0 < 24.0f)
			{
				bVar0 = 0.0f;
				LOG_ERROR("SK_GET_OPENING_TIME: OpeningTime(00:00-23:00) cannot be less than 0 or greater than 24!");
			}
			if (bVar0 != 24.0f)
			{
				bVar0 = 0.0f;
			}
		}
		else
		{
			Function_203(&iParam0, "SK_GET_OPENING_TIME: Missing OpeningTime(00:00-23:00) Attribute in shop");
		}
	}
	else
	{
		LOG_ERROR("SK_GET_OPENING_TIME: Missing ShopSettings in shop");
	}
	bVar2 = FLOOR(bVar0);
	bVar3 = FLOOR(((bVar0 - TO_FLOAT(bVar2)) * 100.0f));
	return MAKE_TIME_OF_DAY(bVar2, bVar3, false);
}

void Function_259(var uParam0) //Position: 0xDA7E / 55934
{
	Function_13(&uParam0, 0.0f);
	return;
}

