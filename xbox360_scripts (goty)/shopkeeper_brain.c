//Decompiled with MagicRDR v1.0
//Function Count : 260
//Statics Count : 1
//Natives Count : 387
//Parameters Count : 1

#region Local Var
	bool bScriptParam_0 = false;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	struct<25> Var2;
	var uVar27;
	struct<57> Var30;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!IS_GRINGO_COMPONENT_VALID(bScriptParam_0))
	{
		LOG_ERROR("Shopkeeper Brain: Attempting to attach a gringo brain that has no valid gringo base.");
		DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
	}
	Function_259(&uVar46);
	Var2 = false;
	Var2.f_4 = bScriptParam_0;
	iVar50 = 0;
	Var2.f_24 = 0;
	Var2.f_20 = 0;
	bVar68 = false;
	bVar69 = false;
	bVar70 = Function_258(&Var2);
	bVar71 = Function_257(&Var2);
	bVar72 = Function_256(&Var2);
	iVar73 = Function_255(&Var2);
	bVar75 = Function_254();
	if (IS_PERS_CHAR_VALID(bVar75))
	{
		SET_PERS_CHAR_SAFE_ZONE(bVar75, 150.0f);
	}
	while (IS_GRINGO_ACTIVE())
	{
		if (IS_PERS_CHAR_VALID(bVar75))
		{
			Function_253(iVar50, &Var2);
			if (IS_PERS_CHAR_ALIVE(bVar75))
			{
				if (!IS_ACTOR_VALID(bVar74))
				{
					ACTIVATE_ACTOR_FOR_PERS_CHAR(bVar75);
					bVar74 = Function_252();
					if (IS_ACTOR_VALID(bVar74))
					{
						SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar74, 0.0f);
					}
				}
				if (!IS_VOLUME_VALID(bVar72))
				{
					bVar72 = Function_256(&Var2);
				}
				bVar58 = Function_251(&Var2);
				bVar54 = Function_250(bVar72, bVar74);
				bVar63 = Function_249(bVar72);
				if (bVar63 && bVar54)
				{
					bVar52 = true;
				}
				else
				{
					bVar76 = GET_TIME_OF_DAY();
					bVar52 = TIME_IS_IN_RANGE(bVar76, bVar70, bVar71);
				}
				bVar51 = Function_248(9);
				bVar53 = Function_247(bVar75);
				if (IS_ACTOR_VALID(bVar74) && IS_ACTOR_VALID(Global_34573))
				{
					if (bVar54)
					{
						if (!bVar64)
						{
							SET_ACTOR_IS_SHOPKEEPER(bVar74, 1, bVar72);
							AI_SET_ENABLE_DEAD_BODY_REACTIONS(bVar74, 0);
							AI_CONVERSE_DISABLE(bVar74);
							bVar64 = true;
							bVar66 = true;
						}
					}
					else
					{
						if (bVar64)
						{
							SET_ACTOR_IS_SHOPKEEPER(bVar74, 0, bVar72);
							AI_SET_ENABLE_DEAD_BODY_REACTIONS(bVar74, 1);
							bVar64 = false;
						}
						if (!bVar52)
						{
							if (bVar66)
							{
								AI_CONVERSE_ENABLE(bVar74);
								bVar66 = false;
							}
						}
					}
					if (bVar63)
					{
						if (!bVar62)
						{
							bVar62 = true;
							SAY_SINGLE_LINE_CONTEXT(bVar74, 89, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							MEMORY_REPORT_POSITION_AUTO(bVar74, Global_34573, 1);
							AI_GOAL_LOOK_AT_ACTOR_NEW(bVar74, Global_34573, -1f, 0);
						}
					}
					else if (bVar62)
					{
						MEMORY_REPORT_POSITION_AUTO(bVar74, Global_34573, 0);
						AI_GOAL_LOOK_CLEAR(bVar74);
						bVar62 = false;
					}
					bVar65 = IS_ACTOR_HOGTIED(bVar74);
					bVar55 = UNK_0x7A207FFE(bVar74);
					bVar56 = ((!IS_AI_ACTOR_UNALERTED(bVar74) || IS_AI_ACTOR_IN_COMBAT(bVar74)) || AI_GET_IS_RETREATING(bVar74));
					bVar61 = (IS_ACTOR_HANDSUP(bVar74) || WAS_AI_ACTOR_PLAYER_WEAPON_THREATENED_BY(bVar74, Function_246(), 3.0f));
					bVar57 = IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(Global_34573));
					if (bVar58)
					{
						bVar59 = Function_245(bVar74);
					}
					else
					{
						bVar59 = false;
					}
				}
				else
				{
					bVar59 = false;
				}
				if (bVar59)
				{
					Function_238(&Var18, &Var2, bVar72);
				}
				else if (((((((bVar51 && bVar52) && bVar54) && !Global_3403) && !bVar53) && !bVar65) && !bVar56) && !bVar61)
				{
					Function_238(&Var18, &Var2, bVar72);
				}
				else
				{
					Function_237(&Var18);
				}
				if (iVar73 != 2 && !Function_236(Global_76849, 2))
				{
					Function_231(Function_246(), 2, 4, 0);
				}
				if (bVar58)
				{
					if (!Var18.f_12)
					{
						if (!iVar50 != 21 && !bVar59)
						{
							Function_237(&Var18);
						}
						iVar50 = 21;
						Function_204(&iVar50, &Var2, 1);
						Var2 = false;
					}
				}
				if (bVar59)
				{
					bVar60 = true;
				}
				else if ((((((((((((bVar51 && bVar52) && bVar54) && !Global_3403) && !bVar53) && IS_ACTOR_VALID(bVar74)) && IS_ACTOR_VALID(Global_34573)) && !bVar55) && !bVar56) && !bVar57) && !bVar58) && !bVar65) && !bVar61)
				{
					bVar60 = true;
				}
				else
				{
					bVar60 = false;
				}
				if (bVar60)
				{
					if (GRINGO_HAS_PENDING_MESSAGE())
					{
						bVar77 = false;
						bVar78 = false;
						switch (GRINGO_GET_MESSAGE_TYPE())
						{
							case 0x00000000:
								if (Function_202(&Var2, &Var18, &bVar78))
								{
									GRINGO_SET_REQUEST_STRING(Function_201(&Var2));
									bVar77 = true;
								}
								break;
							
							case 0x00000001:
								if (Function_202(&Var2, &Var18, &bVar78))
								{
									GRINGO_SET_REQUEST_STRING(Function_201(&Var2));
									bVar77 = true;
									if (bVar78)
									{
										Function_200(&Var18, &Var2, &iVar50);
										PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
									}
								}
								break;
							
							case 0x00000002:
								break;
						}
						GRINGO_SET_MESSAGE_RETURN(bVar77);
					}
				}
				if (Var18.f_12)
				{
					Var18.f_12 = Function_94(&iVar50, &Var18, &Var2, &Var30, iVar0);
					if (!Var18.f_12)
					{
						Function_17(&Var18, &Var30);
						Function_9(&Var18, &Var2, &iVar50, &uVar27);
					}
				}
				else
				{
					if (!Function_204(&iVar50, &Var2, 1))
					{
						iVar50 = 20;
					}
					if (bVar52)
					{
						if (IS_ACTOR_VALID(bVar74))
						{
							if (!AI_HAS_ACTOR_THREATENED_RECENTLY(Function_246()))
							{
								if (!IS_ANY_SPEECH_PLAYING(bVar74))
								{
									if (Var30.f_56)
									{
										SAY_SINGLE_LINE_CONTEXT(bVar74, 88, Function_246(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
										bVar49 = RAND_FLOAT_RANGE(15.0f, 45.0f);
										Var30.f_56 = 0;
									}
									else if (Function_5(&uVar46, bVar49))
									{
										bVar49 = RAND_FLOAT_RANGE(15.0f, 45.0f);
										Function_259(&uVar46);
										SAY_SINGLE_LINE_CONTEXT(bVar74, 87, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if (Var18.f_12)
				{
					Function_17(&Var18, &Var30);
					Function_9(&Var18, &Var2, &iVar50, &uVar27);
					Var18.f_12 = 0;
				}
				Function_237(&Var18);
				if (!bVar69)
				{
					bVar69 = true;
					Function_1("tutorial_kill_shop", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
		}
		else
		{
			if (!IS_PERS_CHAR_ALIVE(bVar75))
			{
				if (!Function_236(Global_76846, 65536))
				{
					Function_231(Function_246(), 65536, 1, 0);
				}
			}
			Function_237(&Var18);
		}
		if (IS_ACTOR_VALID(bVar74))
		{
			GRINGO_WAIT(false);
		}
		else
		{
			GRINGO_WAIT(1000);
		}
		if (bVar68)
		{
			PRINTSTRING("---SHOPKEEPER FLAGS---");
			PRINTNL();
			if (IS_PERS_CHAR_VALID(bVar75))
			{
				PRINTSTRING(GET_OBJECT_NAME(bVar75));
				PRINTNL();
			}
			if (bVar60)
			{
				PRINTSTRING("bCanVerifyRequest = TRUE");
			}
			else
			{
				PRINTSTRING("bCanVerifyRequest = FALSE");
			}
			PRINTNL();
			if (bVar59)
			{
				PRINTSTRING("bActiveOverride = TRUE");
			}
			else
			{
				PRINTSTRING("bActiveOverride = FALSE");
			}
			PRINTNL();
			if (bVar51)
			{
				PRINTSTRING("bShopFeatureAvailable = TRUE");
			}
			else
			{
				PRINTSTRING("bShopFeatureAvailable = FALSE");
			}
			PRINTNL();
			if (bVar52)
			{
				PRINTSTRING("bShopOpenTime = TRUE");
			}
			else
			{
				PRINTSTRING("bShopOpenTime = FALSE");
			}
			PRINTNL();
			if (bVar54)
			{
				PRINTSTRING("bShopkeeperInShop = TRUE");
			}
			else
			{
				PRINTSTRING("bShopkeeperInShop = FALSE");
			}
			PRINTNL();
			if (Global_3403)
			{
				PRINTSTRING("gbWanted = TRUE");
			}
			else
			{
				PRINTSTRING("gbWanted = FALSE");
			}
			PRINTNL();
			if (bVar53)
			{
				PRINTSTRING("bShopOutOfStock = TRUE");
			}
			else
			{
				PRINTSTRING("bShopOutOfStock = FALSE");
			}
			PRINTNL();
			if (bVar55)
			{
				PRINTSTRING("bShopkeeperKnockedOut = TRUE");
			}
			else
			{
				PRINTSTRING("bShopkeeperKnockedOut = FALSE");
			}
			PRINTNL();
			if (bVar56)
			{
				PRINTSTRING("bShopkeeperAlerted = TRUE");
			}
			else
			{
				PRINTSTRING("bShopkeeperAlerted = FALSE");
			}
			PRINTNL();
			if (bVar57)
			{
				PRINTSTRING("bPlayerCarryingHogtiedGuy = TRUE");
			}
			else
			{
				PRINTSTRING("bPlayerCarryingHogtiedGuy = FALSE");
			}
			PRINTNL();
			if (bVar58)
			{
				PRINTSTRING("bShopkeeperStolen = TRUE");
			}
			else
			{
				PRINTSTRING("bShopkeeperStolen = FALSE");
			}
			PRINTNL();
			if (bVar61)
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
	Function_237(&Var18);
	if (Var18.f_12)
	{
		Function_17(&Var18, &Var30);
		Function_9(&Var18, &Var2, &iVar50, &uVar27);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x90A / 2314
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_2(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_2(int iParam0) //Position: 0x985 / 2437
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

bool Function_3() //Position: 0x9C4 / 2500
{
	if (Function_4(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_4(bool bParam0, int iParam1) //Position: 0x9DF / 2527
{
	return (bParam0 && iParam1) == 0;
}

bool Function_5(int iParam0, float fParam1) //Position: 0x9EC / 2540
{
	if (Function_8(iParam0))
	{
		if (Function_6(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_6(int iParam0) //Position: 0xA08 / 2568
{
	if (Function_8(iParam0))
	{
		if (Function_7(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_7(int iParam0) //Position: 0xAD0 / 2768
{
	return Function_4(*iParam0, 2);
}

bool Function_8(int iParam0) //Position: 0xADD / 2781
{
	return Function_4(*iParam0, 1);
}

void Function_9(int iParam0, bool bParam1, int iParam2, var uParam3) //Position: 0xAEA / 2794
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(iParam0->f_20))
	{
		GRINGO_ACTOR_DROP_ATTACHED_PROP(iParam0->f_20);
		GRINGO_REPORT_USE_FINISHED(iParam0->f_20, true);
		if (GRINGO_OWNS_ACTOR_ANIMS(iParam0->f_20))
		{
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_20);
		}
	}
	if (IS_ACTOR_VALID(Function_252()))
	{
		if (GRINGO_OWNS_ACTOR_ANIMS(Function_252()))
		{
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(Function_252());
		}
		bVar0 = GET_CURRENT_GRINGO(Function_252());
		if (IS_GRINGO_VALID(bVar0))
		{
			GRINGO_DEACTIVATE_AND_RESET_ACTORS(bVar0);
		}
		if (!Function_251(bParam1))
		{
			TASK_PRIORITY_SET(Function_252(), 3);
		}
	}
	Function_16(iParam0);
	Function_12(iParam0);
	bVar1 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "UseCase1", 3);
	if (IS_GRINGO_COMPONENT_VALID(bVar1))
	{
		GRINGO_CLEAR_COMPONENT_USER(bVar1);
	}
	Function_11(uParam3);
	Function_10(iParam0);
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	*iParam2 = 1;
	iParam0->f_12 = 0;
}

void Function_10(int iParam0) //Position: 0xBA3 / 2979
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_24))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_24);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_28))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_28);
	}
	return;
}

void Function_11(int iParam0) //Position: 0xBCB / 3019
{
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		DESTROY_LAYOUT(*iParam0);
	}
	Global_3393 = 0;
	return;
}

void Function_12(int iParam0) //Position: 0xBE4 / 3044
{
	if (!Function_8(iParam0))
	{
		Function_13(iParam0, 0.0f);
	}
	return;
}

void Function_13(var uParam0, float fParam1) //Position: 0xBF9 / 3065
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_15(uParam0, 1);
	Function_14(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_14(int iParam0, int iParam1) //Position: 0xC1A / 3098
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0xC2D / 3117
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_16(int iParam0) //Position: 0xC3C / 3132
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

int Function_17(int iParam0, int iParam1) //Position: 0xC50 / 3152
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	Global_3393 = 0;
	Global_59353 = 0;
	if (DECOR_CHECK_EXIST(Global_34573, "ShopOutfit_MerchantSave"))
	{
		DECOR_REMOVE(Global_34573, "ShopOutfit_MerchantSave");
		Function_28(17, 2, 0, 0, 1);
	}
	STREAMING_PREVENT_SNIPER_MODE(0);
	SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(Function_254(), 0);
	iParam1->f_4 = 0;
	iParam1->f_8 = 4294967295;
	Function_27();
	Function_24();
	UI_POP("ShopMenu");
	iParam1->f_24 = 0;
	bVar0 = Function_23();
	if (IS_VOLUME_VALID(bVar0))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
		DESTROY_VOLUME(bVar0);
	}
	AI_STOP_IGNORING_ACTORS();
	AI_CLEAR_DONT_HARM_ACTOR(Function_252());
	AI_CLEAR_DONT_HARM_ACTOR(iParam0->f_20);
	if (IS_ACTOR_VALID(Function_252()))
	{
		TASK_CLEAR(Function_252());
		iVar1 = _GET_OBJECT_ATTACHMENT(GET_OBJECT_FROM_ACTOR(Function_252()));
		if (IS_ATTACHMENT_VALID(iVar1))
		{
			bVar2 = GET_OBJECT_ATTACHED_TO(iVar1);
			if (IS_OBJECT_VALID(bVar2))
			{
				DESTROY_OBJECT(bVar2);
			}
		}
	}
	if (IS_ACTOR_VALID(iParam0->f_20))
	{
		iVar3 = _GET_OBJECT_ATTACHMENT(GET_OBJECT_FROM_ACTOR(iParam0->f_20));
		if (IS_ATTACHMENT_VALID(iVar3))
		{
			bVar4 = GET_OBJECT_ATTACHED_TO(iVar3);
			if (IS_OBJECT_VALID(bVar4))
			{
				DESTROY_OBJECT(bVar4);
			}
		}
	}
	Function_22();
	CAMERA_RESET(0);
	Function_21(iParam1, iParam0->f_20, Function_252());
	Function_20();
	if (HUD_IS_FADED())
	{
		if (!IS_GAME_RESETTING())
		{
			HUD_FADE_IN(0.5f, 1065353216);
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

var Function_18() //Position: 0xE08 / 3592
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("shop_layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("shop_layout");
	}
	return bVar0;
}

bool Function_19() //Position: 0xE3F / 3647
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

void Function_20() //Position: 0xE67 / 3687
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_PLAYER_CONTROL(GET_PLAYER_PADINDEX(Global_34573), 1, 0, 0);
	}
	return;
}

void Function_21(var uParam0, bool bParam1, bool bParam2) //Position: 0xE82 / 3714
{
	if (IS_ACTOR_VALID(bParam1))
	{
		RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
		if (!Global_3380)
		{
			SET_ACTOR_CAN_PLAY_GESTURES(bParam1, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(bParam1, true);
		}
	}
	if (IS_ACTOR_VALID(bParam2))
	{
		RESET_ANIM_SET_FOR_ACTOR(bParam2, 0);
		SET_ACTOR_CAN_PLAY_GESTURES(bParam2, true);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(bParam2, true);
	}
	if (uParam0->f_12)
	{
		REMOVE_ANIM_SET("store");
		REMOVE_ACTION_TREE("store");
		uParam0->f_12 = 0;
		uParam0->f_16 = 0;
	}
	return;
}

void Function_22() //Position: 0xEEA / 3818
{
	vector3 vVar0;
	var uVar3;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	GET_POSITION(Global_34573, &vVar0);
	bVar6 = LOCATE_NAMED_POINT(vVar0, 25.0f, "player_shop_flag", 1);
	if (IS_OBJECT_VALID(bVar6))
	{
		GET_OBJECT_POSITION(bVar6, &vVar0);
		vVar0.f_4 = (vVar0.y + 0.5f);
		CLEAR_AMBIENT_OBJECTS_SPHERE(vVar0, 1.5f, 4294967295);
		bVar7 = GET_OBJECT_HEADING(bVar6);
		SET_ACTOR_HEADING(Global_34573, bVar7, 1);
		FIND_GROUND_INTERSECTION(&vVar0, 15.0f, &uVar3, &vVar0);
		TELEPORT_ACTOR(Global_34573, &uVar3, 1, 0, 0);
		if (IS_ACTOR_VALID(Global_34573))
		{
			TASK_CLEAR(Global_34573);
		}
		bVar8 = FIND_NEAREST_DOOR(&vVar0, 10.0f);
		if (IS_DOOR_VALID(bVar8))
		{
			OPEN_DOOR(bVar8, &vVar0, 1.0f);
		}
	}
	else
	{
		LOG_ERROR("SK_SHOP_TELEPORT_PLAYER_BY_DOOR: could not find player_shop_flag within 25.0m of the shop! Please add one.");
	}
	return;
}

var Function_23() //Position: 0x100D / 4109
{
	return GET_VOLUME_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Function_18(), "shop_volume"));
}

void Function_24() //Position: 0x102A / 4138
{
	bool bVar0;
	
	if (Function_26())
	{
		STREAMING_EVICT_PROP(GET_ASSET_ID("p_inv_TreasureMoneyStack01x", 0));
	}
	bVar0 = Function_25();
	if (IS_OBJECT_VALID(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	return;
}

var Function_25() //Position: 0x106D / 4205
{
	return FIND_OBJECT_IN_LAYOUT(Function_18(), "shop_moneybag");
}

bool Function_26() //Position: 0x1089 / 4233
{
	return STREAMING_IS_PROP_LOADED(GET_ASSET_ID("p_inv_TreasureMoneyStack01x", 0));
}

void Function_27() //Position: 0x10B4 / 4276
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_28(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x10C9 / 4297
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_93(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_248(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_92(bParam0, 2))
	{
		Function_91(456, 1, 0, 0);
		Function_90(bParam0, 2);
		if (!bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_1(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_89(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_90(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_88(0, 0, 1, 1))
			{
				Function_49(1);
				Function_47(1, 0);
			}
			else
			{
				Function_46();
			}
		}
		Function_41(bParam0);
		if (StackVal && !Function_4(((((!Function_40() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_4((((Function_40() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_3())
		{
			if (!Function_236(Global_76846, 2))
			{
				Function_231(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_31();
		}
		Global_28180.f_12 = 1;
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

void Function_29(int iParam0, bool bParam1) //Position: 0x135F / 4959
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

void Function_30(int iParam0, bool bParam1) //Position: 0x13C6 / 5062
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

void Function_31() //Position: 0x1431 / 5169
{
	if (Function_93(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_39(Global_28180);
			Global_28180.f_8 = Function_32(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_39(Global_28180);
			Global_28180.f_8 = Function_32(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_32(int iParam0, int iParam1) //Position: 0x14AC / 5292
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
					if (Function_35(6, 0) || Function_35(12, 0))
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
					if (Function_34(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_35(5, 0))
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
					if (Function_34(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_34(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_34(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_34(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_35(26, 0))
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
					if (Function_34(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_34(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_34(27) && iVar18)
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
					if (Function_34(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_34(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_34(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_34(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_35(17, 0) && iVar15)
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
					if (Function_34(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_35(6, 0) && Function_34(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_34(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_35(9, 0) && Function_34(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_34(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_35(8, 0) && iVar19)
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
	if (Function_33(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_33(StackVal, StackVal, vVar3))
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
	if (!Function_33(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

bool Function_33(char* cParam0) //Position: 0x209D / 8349
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

int Function_34(int iParam0) //Position: 0x20B5 / 8373
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_35(int iParam0, bool bParam1) //Position: 0x20CA / 8394
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
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_36(int iParam0) //Position: 0x2107 / 8455
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_37(int iParam0) //Position: 0x211E / 8478
{
	if (!Function_38(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_38(int iParam0) //Position: 0x2138 / 8504
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_39(int iParam0) //Position: 0x214E / 8526
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

bool Function_40() //Position: 0x219D / 8605
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_41(bool bParam0) //Position: 0x21CA / 8650
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
			if (Function_89(bParam0, Function_45(bVar24)))
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
			if (Function_89(bParam0, Function_45(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_44(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_43(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_42(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_42(int iParam0) //Position: 0x237A / 9082
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

void Function_43(bool bParam0, bool bParam1) //Position: 0x23D1 / 9169
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

var Function_44(int iParam0) //Position: 0x23F6 / 9206
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

int Function_45(bool bParam0) //Position: 0x244C / 9292
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_46() //Position: 0x2458 / 9304
{
	return;
}

void Function_47(int iParam0, int iParam1) //Position: 0x245E / 9310
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = iParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_48())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_48() //Position: 0x24A0 / 9376
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_49(bool bParam0) //Position: 0x24A9 / 9385
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_79();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_50();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_14(&Global_63095, 1);
		Function_14(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_50() //Position: 0x24FA / 9466
{
	Function_77();
	Function_76();
	Function_76();
	Function_75();
	Function_75();
	Function_74();
	Function_74();
	Function_57(0);
	Function_57(0);
	if (!Function_48())
	{
		Function_55();
		Function_54();
		Function_53();
		Function_52();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_51();
	return;
}

void Function_51() //Position: 0x254C / 9548
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

void Function_52() //Position: 0x2652 / 9810
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

void Function_53() //Position: 0x2685 / 9861
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

void Function_54() //Position: 0x2813 / 10259
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

void Function_55() //Position: 0x29C7 / 10695
{
	Function_56(&Global_28260, 1, 0);
	return;
}

void Function_56(int iParam0, bool bParam1, int iParam2) //Position: 0x29D5 / 10709
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
	bool bVar13;
	
	bVar0 = Function_246();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || iParam2)
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
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (bVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, bVar13);
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

struct<8> Function_57(int iParam0) //Position: 0x2BC6 / 11206
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
					iVar2 = ((Function_73((50 + iVar4)) + Function_73((183 + iVar4))) + Function_73((90 + iVar4)));
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
	Function_58(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_58(int iParam0, bool bParam1, bool bParam2) //Position: 0x2C6C / 11372
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
		Function_72(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_71(iParam0);
	if (bParam2)
	{
		Function_59(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_59(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x2F07 / 12039
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
			bParam2 = (bParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_70(390))), 32);
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
					bVar19 = (Function_69(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_69(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_67(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_64(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_61(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_60(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

int Function_60() //Position: 0x3534 / 13620
{
	int iVar0;
	
	return iVar0;
}

var Function_61(int iParam0) //Position: 0x353C / 13628
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_62(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x354D / 13645
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_63(char* cParam0, bool bParam1) //Position: 0x3642 / 13890
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_64(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x365B / 13915
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_66(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_65(Function_66(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_65(int iParam0, int iParam1) //Position: 0x36C0 / 14016
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_66(int iParam0, bool bParam1) //Position: 0x36D2 / 14034
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_67(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x36E4 / 14052
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
	if (((Function_68(iParam0) != 19 || Function_68(iParam0) != 17) || Function_68(iParam0) != 10) || Function_68(iParam0) != 9)
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

int Function_68(int iParam0) //Position: 0x3814 / 14356
{
	return Global_35278[iParam020].f_48;
}

float Function_69(int iParam0) //Position: 0x3823 / 14371
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_70(int iParam0) //Position: 0x385C / 14428
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_71(int iParam0) //Position: 0x3899 / 14489
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

int Function_72(int iParam0, bool bParam1, bool bParam2) //Position: 0x3A33 / 14899
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
			Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
		}
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

int Function_73(bool bParam0) //Position: 0x3C77 / 15479
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_74() //Position: 0x3CB8 / 15544
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
		iVar2 = ((Function_73((50 + iVar3) + 15) + Function_73((183 + iVar3) + 15)) + Function_73((90 + iVar3) + 15));
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
	Function_58(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_75() //Position: 0x3D41 / 15681
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
			iVar2 = ((Function_73((50 + iVar3) + 8) + Function_73((183 + iVar3) + 8)) + Function_73((90 + iVar3) + 8));
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
	Function_58(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_76() //Position: 0x3DD8 / 15832
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
		iVar2 = ((Function_73((50 + iVar3)) + Function_73((183 + iVar3))) + Function_73((90 + iVar3)));
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
	Function_58(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_77() //Position: 0x3E57 / 15959
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_78(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_58(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_78(int iParam0, bool bParam1, int iParam2) //Position: 0x3E90 / 16016
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
	Function_72(iParam0, bParam1, 1);
	Function_71(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_59(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_79() //Position: 0x40D6 / 16598
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_3())
	{
		Function_85(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_85(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_80(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_80(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_33(StackVal, StackVal, vVar0))
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

vector3 Function_80(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4191 / 16785
{
	int iVar0;
	
	iVar0 = Function_83(uParam2, uParam3);
	if (Function_82(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_15(&Global_63095, 1);
			Function_14(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_15(&Global_63095, 2);
			Function_14(&Global_63095, 1);
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
		Function_15(&Global_63095, 2);
		Function_14(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_81();
	return StackVal, StackVal, Function_81();
}

vector3 Function_81() //Position: 0x4278 / 17016
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_82(int iParam0) //Position: 0x4281 / 17025
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_83(bool bParam0, bool bParam1) //Position: 0x4297 / 17047
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
				fVar2 = Function_84(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_84(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_82(bVar0) && !bParam1)
	{
		bVar0 = Function_83(bParam0, 1);
	}
	return bVar0;
}

float Function_84(vector3 vParam0, vector3 vParam3) //Position: 0x435E / 17246
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_85(var uParam0, int iParam1) //Position: 0x437B / 17275
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_87(Global_34573, &vVar4);
	if (!Function_86(Global_30640[0]))
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
	if (!Function_86(Global_30640[2]))
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
	if (!Function_86(Global_30640[1]))
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
	if (!Function_86(Global_30658[1]))
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
	if (!Function_86(Global_30658[3]))
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
	if (!Function_86(Global_30658[2]))
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
	if (!Function_86(Global_30658[4]))
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
	if (!Function_86(Global_30668[0]))
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
	if (!Function_86(Global_30668[1]))
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
	if (!Function_86(Global_30668[2]))
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
	if (!Function_86(Global_30679[0]))
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
	if (!Function_86(Global_30685[0]))
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
	if (!Function_86(Global_30685[1]))
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
	if (!Function_86(Global_30685[2]))
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
	if (!Function_86(Global_30693[0]))
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
	if (!Function_86(Global_30693[1]))
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
	if (!Function_86(Global_30693[2]))
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
	if (!Function_86(Global_30707[2]))
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
	if (!Function_86(Global_30707[3]))
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
	if (!Function_86(Global_30707[0]))
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
	if (!Function_86(Global_30717[0]))
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
	if (!Function_86(Global_30723[2]))
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
	if (!Function_86(Global_30723[1]))
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
	if (!Function_86(Global_30723[0]))
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
	if (!Function_86(Global_30679[1]))
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
	if (!Function_86(Global_30707[1]))
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
	Function_15(&Global_63095, 2);
	Function_14(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_33(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_86(int iParam0) //Position: 0x4BA0 / 19360
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_4(uVar0, 0x1000000) || Function_4(uVar0, 0x2000000)) || Function_4(uVar0, 0x4000000)) || !Function_4(uVar0, 0x10000000));
}

void Function_87(bool bParam0, bool bParam1) //Position: 0x4BDB / 19419
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_88(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x4BE8 / 19432
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

bool Function_89(bool bParam0, int iParam1) //Position: 0x4C8C / 19596
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

void Function_90(int iParam0, int iParam1) //Position: 0x4CEB / 19691
{
	if (!Function_93(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[iParam013].f_8 = (StackVal || iParam1);
	return;
}

int Function_91(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x4D40 / 19776
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
	Function_72(iParam0, TO_FLOAT(bParam1), 1);
	Function_71(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_59(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

bool Function_92(int iParam0, int iParam1) //Position: 0x4F60 / 20320
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

bool Function_93(int iParam0) //Position: 0x4F8D / 20365
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

int Function_94(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x4FA3 / 20387
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar2 = Function_252();
	if (!IS_ACTOR_VALID(bVar2))
	{
		LOG_ERROR("SK_PERFORM_SHOPKEEPER_USE_TASK: invalid shopkeeper actor");
		return 0;
	}
	if (!IS_ACTOR_VALID(iParam1->f_20))
	{
		LOG_ERROR("SK_PERFORM_SHOPKEEPER_USE_TASK: invalid user actor");
		return 0;
	}
	bVar3 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "UseCase1", 3);
	if (!IS_GRINGO_COMPONENT_VALID(bVar3))
	{
		LOG_ERROR("SK_PERFORM_SHOPKEEPER_USE_TASK: invalid useCase component on shopkeeper brain");
		return 0;
	}
	Function_199(iParam3);
	switch (*uParam0)
	{
		case 0x0000001C:
			Function_198();
			Function_197(iParam3);
			Function_196(iParam3);
			*uParam0 = 29;
			break;
		
		case 0x0000001D:
			if (iParam3->f_12)
			{
				if (HAS_ANIM_SET_LOADED("store") && HAS_ACTION_TREE_LOADED("custom/store"))
				{
					MAKE_ACTOR_READY_FOR_ACTION(bVar2, 0);
					if (Function_184(iParam1, bParam2, iParam3))
					{
						if (!Global_3380)
						{
							SHOP_SET_CURRENT_TAB(0);
						}
						Function_183();
						if (SHOP_IS_SELL_SELECTED())
						{
							Function_177(iParam1, bParam2);
						}
						else
						{
							Function_173(bParam2);
						}
						Function_16(iParam1);
						Function_12(iParam1);
						Function_172(iParam3, iParam1->f_20, bVar2);
						Function_171(bVar2);
						iParam3->f_16 = 0;
						*uParam0 = 55;
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
			if (Function_172(iParam3, iParam1->f_20, bVar2))
			{
				Function_171(Global_34573);
				Function_171(bVar2);
				if (Function_26())
				{
					if (!UI_ISACTIVE("ShopMenu"))
					{
						if (!iParam3->f_24)
						{
							PRINTSTRING("ShopMenu has been pushed");
							PRINTNL();
							SHOP_LOCK_INPUT(1);
							UI_PUSH("ShopMenu");
							iParam3->f_24 = 1;
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
							iVar1 = Function_169(bParam2);
						}
						Function_154(bParam2, bVar0, iVar1, bParam4);
						SHOP_REFRESH(1);
						if (!Function_153())
						{
							LOG_ERROR("GB_SHOP_SET_COUNTER_STREAMING: failed to create money prop");
						}
						if (HUD_IS_FADED())
						{
							if (!IS_GAME_RESETTING())
							{
								HUD_FADE_IN(0.5f, 1065353216);
							}
						}
						SAY_SINGLE_LINE_CONTEXT(Function_246(), 65, bVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						*uParam0 = 61;
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
			if (Function_6(iParam1) < 10.0f)
			{
				LOG_ERROR("SK_SHOP_LOADED_ANIMS: time out!");
				return 0;
			}
			break;
		
		case 0x0000003D:
			if (UI_ISACTIVE("ShopMenu"))
			{
				bVar0 = SHOP_IS_SELL_SELECTED();
				EVENT_TRAP_CLEAR_EVENTS(Global_59349.f_12);
				EVENT_TRAP_CLEAR_EVENTS(StackVal);
				EVENT_TRAP_CLEAR_EVENTS(StackVal);
				SHOP_REFRESH(1);
				Function_152(iParam3);
				if (bVar0)
				{
					iParam3->f_28 = 1;
					*uParam0 = 63;
				}
				else
				{
					*uParam0 = 62;
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
			if (!iParam3->f_48 && !IS_ANY_SPEECH_PLAYING(Global_34573))
			{
				iParam3->f_32 = GET_CURRENT_GAME_TIME();
				iParam3->f_48 = 1;
				SAY_SINGLE_LINE_CONTEXT(bVar2, 69, Function_246(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			if (Function_151(iParam3) == 1)
			{
				EVENT_TRAP_CLEAR_EVENTS(Global_59349.f_12);
				Function_16(iParam1);
				Function_12(iParam1);
				*uParam0 = 53;
				return 1;
			}
			if (Function_150())
			{
				Function_24();
				if (iParam3->f_40)
				{
					SAY_SINGLE_LINE_CONTEXT(Function_246(), 418, bVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					if (!Function_88(0, 0, 1, 1))
					{
						Function_49(1);
						Function_47(1, 0);
					}
				}
				else if (iParam3->f_44)
				{
					SAY_SINGLE_LINE_CONTEXT(Function_246(), 348, bVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					if (!Function_88(0, 0, 1, 1))
					{
						Function_49(1);
						Function_47(1, 0);
					}
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(Function_246(), 366, bVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				Function_149(Global_34573);
				Function_16(iParam1);
				Function_12(iParam1);
				*uParam0 = 60;
				return 1;
			}
			if (Function_148(iParam3))
			{
				Function_102(bParam2, iParam3);
			}
			break;
		
		case 0x0000003F:
			if (!iParam3->f_52 && !IS_ANY_SPEECH_PLAYING(Global_34573))
			{
				iParam3->f_32 = GET_CURRENT_GAME_TIME();
				iParam3->f_52 = 1;
				SAY_SINGLE_LINE_CONTEXT(bVar2, 70, Function_246(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			if (Function_150())
			{
				Function_24();
				if (iParam3->f_40)
				{
					SAY_SINGLE_LINE_CONTEXT(Function_246(), 418, bVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					if (!Function_88(0, 0, 1, 1))
					{
						Function_49(1);
						Function_47(1, 0);
					}
				}
				else if (iParam3->f_44)
				{
					SAY_SINGLE_LINE_CONTEXT(Function_246(), 348, bVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					if (!Function_88(0, 0, 1, 1))
					{
						Function_49(1);
						Function_47(1, 0);
					}
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(Function_246(), 366, bVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				Function_149(Global_34573);
				Function_16(iParam1);
				Function_12(iParam1);
				*uParam0 = 60;
				return 1;
			}
			if (Function_151(iParam3) == 0)
			{
				EVENT_TRAP_CLEAR_EVENTS(Global_59349.f_12);
				Function_16(iParam1);
				Function_12(iParam1);
				*uParam0 = 53;
				return 1;
			}
			if (Function_101(iParam3))
			{
				Function_102(bParam2, iParam3);
			}
			break;
		
		case 0x0000003C:
			if (Function_6(iParam1) < 3.5f)
			{
				LOG_WARNING("GB_SHOP_SET_COUNTER_COMPLETE_SALE - leaving store");
				iParam3->f_56 = 1;
				return 0;
			}
			break;
		
		case 0x00000035:
			Function_100();
			Function_99(iParam3);
			Function_153();
			bVar0 = SHOP_IS_SELL_SELECTED();
			if (bVar0)
			{
				iParam3->f_4 = Function_95(0);
				Function_177(iParam1, bParam2);
			}
			else
			{
				Function_173(bParam2);
			}
			if (bVar0)
			{
				iVar1 = Function_170();
			}
			else
			{
				iVar1 = Function_169(bParam2);
			}
			Function_154(bParam2, bVar0, iVar1, bParam4);
			SHOP_REFRESH(1);
			if (bVar0)
			{
				SAY_SINGLE_LINE_CONTEXT(bVar2, 70, Function_246(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
				iParam3->f_32 = GET_CURRENT_GAME_TIME();
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT(bVar2, 69, Function_246(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
				iParam3->f_32 = GET_CURRENT_GAME_TIME();
			}
			*uParam0 = 61;
			break;
		
		default:
			LOG_ERROR("SK_PERFORM_SHOPKEEPER_USE_TASK: Unnown State");
			return 0;
			break;
	}
	return 1;
}

var Function_95(int iParam0) //Position: 0x5780 / 22400
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

int Function_96(int iParam0) //Position: 0x5846 / 22598
{
	if (iParam0 > Global_60461)
	{
		LOG_ERROR("SK_SHOP_GET_TEMPORARY_HUD_INDEX_FOR_COLLECTIBLE: iItemIndex >= COUNT_OF(gShopCollectionData)");
		iParam0 = 0;
	}
	if (iParam0 <= 0)
	{
		LOG_ERROR("SK_SHOP_GET_TEMPORARY_HUD_INDEX_FOR_COLLECTIBLE: iItemIndex < 0");
		iParam0 = 0;
	}
	return Global_60461[iParam011].f_40;
}

int Function_97(int iParam0) //Position: 0x5910 / 22800
{
	bool bVar0;
	int iVar1;
	
	if (iParam0 > Global_60461)
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
	iVar1 = Function_73(bVar0);
	return iVar1;
}

var Function_98(int iParam0) //Position: 0x59E9 / 23017
{
	if (iParam0 > Global_60461)
	{
		LOG_ERROR("\SK_SHOP_GET_COLLECTIBLE_STAT_FROM_INDEX: iCollectibleIndex >= COUNT_OF(gShopCollectionData)");
		return 4294967295;
	}
	if (iParam0 <= 0)
	{
		LOG_ERROR("SK_SHOP_GET_COLLECTIBLE_STAT_FROM_INDEX: iCollectibleIndex < 0");
		return 4294967295;
	}
	return Global_60461[iParam011].f_36;
}

void Function_99(int iParam0) //Position: 0x5AAF / 23215
{
	iParam0->f_4 = 0;
	iParam0->f_8 = 4294967295;
	return;
}

int Function_100() //Position: 0x5ABF / 23231
{
	DESTROY_LAYOUT(Function_18());
	return 1;
}

bool Function_101(int iParam0) //Position: 0x5ACC / 23244
{
	bool bVar0;
	
	if (DECOR_CHECK_EXIST(iParam0->f_36, "Index"))
	{
		bVar0 = DECOR_GET_INT(iParam0->f_36, "Index");
		if (SHOP_GET_ITEM_SELL_PRICE(bVar0) >= 4294967295)
		{
			return 1;
		}
	}
	return 0;
}

void Function_102(bool bParam0, int iParam1) //Position: 0x5B01 / 23297
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	bVar0 = SHOP_IS_SELL_SELECTED();
	if (DECOR_CHECK_EXIST(iParam1->f_36, "Index"))
	{
		bVar1 = DECOR_GET_INT(iParam1->f_36, "Index");
		bVar3 = SHOP_GET_ITEM_MISC_FLAG(bVar1);
	}
	if (DECOR_CHECK_EXIST(iParam1->f_36, "Quantity"))
	{
		bVar2 = DECOR_GET_INT(iParam1->f_36, "Quantity");
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
			iParam1->f_40 = 1;
			iParam1->f_44 = 0;
			Function_139(bParam0);
			SHOP_REFRESH(0);
			SAY_SINGLE_LINE_CONTEXT(Function_252(), 90, Function_246(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
			PLAY_SOUND_FRONTEND("PLACE_BET_MASTER");
			iParam1->f_32 = GET_CURRENT_GAME_TIME();
		}
	}
	else if (Function_137(bParam0, bVar3, bVar2))
	{
		Function_139(bParam0);
		iParam1->f_40 = 0;
		SAY_SINGLE_LINE_CONTEXT(Function_252(), 90, Function_246(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
		iVar4 = SHOP_GET_ITEM_PURCHASE_PRICE(bVar1);
		iVar4 = (iVar4 * bVar2);
		Function_135(iVar4, 0);
		SHOP_SET_PLAYER_BANK(Function_134());
		Function_127(bParam0, bVar3, bVar1, bVar2);
		if (iVar4 >= 0)
		{
			Function_126(Global_34573, Function_252());
			iParam1->f_44 = 1;
		}
		else
		{
			iParam1->f_44 = 0;
		}
		PLAY_SOUND_FRONTEND("PLACE_BET_MASTER");
		iParam1->f_32 = GET_CURRENT_GAME_TIME();
		if (Function_123(bParam0, bVar3))
		{
			if (!Function_121(Function_122(bParam0, bVar3)))
			{
				if (SHOP_GET_ITEM_QUANTITY(bVar1) >= 0)
				{
					SHOP_SET_ITEM_PURCHASE_PRICE(bVar1, ROUND(Function_103(bParam0, bVar3)));
					SHOP_REFRESH(0);
				}
			}
		}
	}
	EVENT_TRAP_CLEAR_EVENTS(StackVal);
	EVENT_TRAP_CLEAR_EVENTS(StackVal);
	SHOP_REFRESH(0);
	return;
}

var Function_103(bool bParam0, bool bParam1) //Position: 0x5D02 / 23810
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = Function_120(bParam0, &bParam1, "PriceModifier");
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
	if (Function_119(bParam0, bParam1))
	{
		iVar3 = Function_118(bParam0, bParam1);
		bVar1 = Global_59354[iVar38];
		if (Function_255(bParam0) != 2 && Function_117(17))
		{
			bVar1 = (bVar1 * 0.5f);
		}
	}
	else if (Function_116(bParam0, bParam1))
	{
		iVar4 = Function_113(bParam0, bParam1);
		bVar1 = Global_60316[iVar48];
		if (Function_255(bParam0) != 2 && Function_117(17))
		{
			bVar1 = (bVar1 * 0.5f);
		}
		if (iVar4 != 13 && Global_13172[Function_108(10, 1, 5)11].f_20 != 10)
		{
			bVar1 = (bVar1 * 0.5f);
		}
	}
	else if (Function_123(bParam0, bParam1))
	{
		bVar5 = Function_122(bParam0, bParam1);
		bVar1 = Global_59675[bVar58];
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
			bVar6 = 0.5f;
		}
		else
		{
			bVar6 = 1.5f;
		}
	}
	else if (Function_105() > 5)
	{
		if (!Function_104())
		{
			PRINTNL();
			PRINTSTRING("ITEM - high honor modifier");
			PRINTNL();
			bVar6 = 0.5f;
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

bool Function_104() //Position: 0x600A / 24586
{
	return DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "SHOP_SET_UNLAWFUL_TOWN");
}

int Function_105() //Position: 0x6032 / 24626
{
	return Global_12976.f_152;
}

int Function_106(bool bParam0) //Position: 0x603D / 24637
{
	char* cVar0[32];
	struct<5> Var8;
	
	strcpy(&cVar0, Function_107(bParam0), 32);
	stradd(&cVar0, "_MOD_ITEM_PRICE", 32);
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), &cVar0))
	{
		DECOR_GET_VECTOR(GET_OBJECT_FROM_ACTOR(Global_34573), &cVar0, &Var8);
		return ROUND(StackVal);
	}
	return 1;
}

var Function_107(bool bParam0) //Position: 0x6087 / 24711
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

int Function_108(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6178 / 24952
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_112(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_109(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_109(bParam0, bParam1, bParam2, 4294967295);
}

int Function_109(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x61D6 / 25046
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
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_110(uVar0);
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

int Function_110(int iParam0) //Position: 0x632B / 25387
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

bool Function_111(int iParam0) //Position: 0x6369 / 25449
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_112(int iParam0, int iParam1, int iParam2) //Position: 0x637E / 25470
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

var Function_113(bool bParam0, bool bParam1) //Position: 0x639E / 25502
{
	char* cVar0[64];
	char* cVar16[64];
	int iVar32;
	bool bVar33;
	bool bVar34;
	
	strcpy(&cVar0, Function_114(bParam0, &bParam1, "ITEM_/AMMO_/WE_Enum"), 64);
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

var Function_114(int iParam0, bool bParam1, bool bParam2) //Position: 0x6422 / 25634
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar1 = Function_115(iParam0, bParam1);
	if (IS_GRINGO_COMPONENT_VALID(bVar1))
	{
		bVar2 = GET_GRINGO_STRING_ATTR(bParam2, bVar1, &iVar0);
		if (iVar0 >= 0)
		{
			return bVar2;
		}
		PRINTSTRING("SK_SHOP_GET_INDEXED_ITEM_STRING_ATTRIBUTE: Could not find this item attribute in ShopInventory: ");
		PRINTSTRING(bParam2);
		PRINTNL();
		LOG_ERROR("SK_SHOP_GET_INDEXED_ITEM_STRING_ATTRIBUTE: Could not find item attribute in ShopInventory");
	}
	else
	{
		LOG_ERROR("SK_SHOP_GET_INDEXED_ITEM_STRING_ATTRIBUTE: could not find ShopInventory component");
	}
	return iVar3;
}

var Function_115(int iParam0, int iParam1) //Position: 0x6579 / 25977
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = Function_169(iParam0);
	if (*iParam1 <= 0)
	{
		*iParam1 = (iVar2 - 1);
	}
	if (*iParam1 > iVar2)
	{
		*iParam1 = 0;
	}
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ShopInventory", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(*iParam1, bVar0);
		if (IS_GRINGO_COMPONENT_VALID(bVar1))
		{
			return bVar1;
		}
		PRINTSTRING("SK_SHOP_GET_INDEXED_ITEM_COMPONENT: Could not find this Item Component in ShopInventory: ");
		PRINTINT(*iParam1);
		PRINTNL();
		LOG_ERROR("SK_SHOP_GET_INDEXED_ITEM_COMPONENT: could not find an Item Component in ShopInventory");
	}
	else
	{
		LOG_ERROR("SK_SHOP_GET_INDEXED_ITEM_COMPONENT: could not find ShopInventory component");
	}
	return bVar1;
}

bool Function_116(bool bParam0, bool bParam1) //Position: 0x66F2 / 26354
{
	bool bVar0;
	
	bVar0 = Function_114(bParam0, &bParam1, "ITEM_/AMMO_/WE_Enum");
	if (STRING_CONTAINS_STRING(bVar0, "AMMO_"))
	{
		return 1;
	}
	return 0;
}

int Function_117(int iParam0) //Position: 0x672A / 26410
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

var Function_118(int iParam0, bool bParam1) //Position: 0x673B / 26427
{
	char* cVar0[64];
	char* cVar16[64];
	int iVar32;
	bool bVar33;
	bool bVar34;
	
	strcpy(&cVar0, Function_114(iParam0, &bParam1, "ITEM_/AMMO_/WE_Enum"), 64);
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

bool Function_119(int iParam0, bool bParam1) //Position: 0x67BB / 26555
{
	bool bVar0;
	
	bVar0 = Function_114(iParam0, &bParam1, "ITEM_/AMMO_/WE_Enum");
	if (STRING_CONTAINS_STRING(bVar0, "WE_"))
	{
		return 1;
	}
	return 0;
}

var Function_120(int iParam0, int iParam1, bool bParam2) //Position: 0x67F1 / 26609
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = -1.0f;
	bVar0 = Function_115(iParam0, iParam1);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		if (GET_GRINGO_FLOAT_ATTR(&bVar1, bParam2, bVar0))
		{
			return bVar1;
		}
		PRINTSTRING("SK_SHOP_GET_INDEXED_ITEM_FLOAT_ATTRIBUTE: Could not find this item attribute in ShopInventory: ");
		PRINTSTRING(bParam2);
		PRINTNL();
		LOG_ERROR("SK_SHOP_GET_INDEXED_ITEM_FLOAT_ATTRIBUTE: Could not find item attribute in ShopInventory");
	}
	else
	{
		LOG_ERROR("SK_SHOP_GET_INDEXED_ITEM_FLOAT_ATTRIBUTE: could not find ShopInventory component");
	}
	return bVar1;
}

bool Function_121(bool bParam0) //Position: 0x6943 / 26947
{
	char* cVar0[32];
	float fVar8;
	
	strcpy(&cVar0, Function_107(bParam0), 32);
	stradd(&cVar0, "_MOD_ITEM_PRICE", 32);
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), &cVar0))
	{
		DECOR_GET_VECTOR(GET_OBJECT_FROM_ACTOR(Global_34573), &cVar0, &fVar8);
		if (fVar8 != TO_FLOAT(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_122(bool bParam0, bool bParam1) //Position: 0x6992 / 27026
{
	char* cVar0[64];
	char* cVar16[64];
	int iVar32;
	int iVar33;
	
	strcpy(&cVar0, Function_114(bParam0, &bParam1, "ITEM_/AMMO_/WE_Enum"), 64);
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

bool Function_123(bool bParam0, bool bParam1) //Position: 0x6A0E / 27150
{
	bool bVar0;
	char* cVar1[24];
	int iVar7;
	
	bVar0 = Function_114(bParam0, &bParam1, "ITEM_/AMMO_/WE_Enum");
	if (STRING_CONTAINS_STRING(bVar0, "ITEM_"))
	{
		STRING_CLEAR_TOKENIZER();
		SET_OWNERSHIP_STRAGGLER(bVar0, "_");
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
			PRINTSTRING(bVar0);
			PRINTSTRING(" - failed to look up: ");
			PRINTSTRING(&cVar1);
			PRINTNL();
			LOG_ERROR("SK_SHOP_IS_INDEXED_ITEM_ITEMENUM: Found INVALID ITEM in the Shop XML - see spew");
			Function_124(bParam0, &bParam1, "TotalAvailableQuantity", 0);
			return 0;
		}
		return 1;
	}
	return 0;
}

int Function_124(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x6B7E / 27518
{
	bool bVar0;
	
	bVar0 = Function_115(iParam0, iParam1);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		if (SET_GRINGO_INT_ATTR(iParam3, bParam2, bVar0))
		{
			return 1;
		}
		PRINTSTRING("SK_SHOP_SET_INDEXED_ITEM_INT_ATTRIBUTE: Could not find this item attribute in ShopInventory: ");
		PRINTSTRING(bParam2);
		PRINTNL();
		LOG_ERROR("SK_SHOP_SET_INDEXED_ITEM_INT_ATTRIBUTE: Could not find item attribute in ShopInventory");
	}
	else
	{
		LOG_ERROR("SK_SHOP_SET_INDEXED_ITEM_INT_ATTRIBUTE: could not find ShopInventory component");
	}
	return 0;
}

int Function_125(int iParam0) //Position: 0x6CC9 / 27849
{
	return SS_GET_STRING_ID(iParam0, 1);
}

int Function_126(bool bParam0, bool bParam1) //Position: 0x6CD5 / 27861
{
	bool bVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		if (IS_ACTION_NODE_PLAYING(bParam0, "store/player/give_cash"))
		{
			return 0;
		}
		if (IS_ACTION_NODE_PLAYING(bParam1, "store/clerk/take_cash"))
		{
			return 0;
		}
		if (SET_ACTION_NODE_FOR_ACTOR(bParam0, "store/player/give_cash"))
		{
			bVar0 = Function_25();
			if (IS_OBJECT_VALID(bVar0))
			{
				if (ATTACH_PROP_TO_ANIM(bParam0, bVar0, "wrist_l_attachment", "grab", true, ATTACH_SLOT_FROM_STRING("A")))
				{
					return SET_ACTION_NODE_FOR_ACTOR(bParam1, "store/clerk/take_cash");
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

void Function_127(bool bParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x6EEC / 28396
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!SHOP_IS_ITEM_BLOCKED(uParam2))
	{
		iVar0 = Function_131(bParam0, bParam1);
		iVar1 = (iVar0 - iParam3);
		if (iVar1 <= 0)
		{
			iVar1 = 0;
		}
		SHOP_SET_ITEM_QUANTITY(uParam2, iVar1);
		Function_130(bParam0, bParam1, iVar1);
	}
	if (Function_123(bParam0, bParam1))
	{
		bVar2 = Function_122(bParam0, bParam1);
		if (Function_121(bVar2))
		{
			Function_128(bVar2, 1);
		}
	}
}

void Function_128(bool bParam0, int iParam1) //Position: 0x6F48 / 28488
{
	char* cVar0[32];
	vector3 vVar8;
	
	strcpy(&cVar0, Function_107(bParam0), 32);
	stradd(&cVar0, "_MOD_ITEM_PRICE", 32);
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), &cVar0))
	{
		DECOR_GET_VECTOR(GET_OBJECT_FROM_ACTOR(Global_34573), &cVar0, &vVar8);
		vVar8.f_8 = (vVar8.z - IntToFloat(iParam1));
		if (vVar8.z < 0.0f)
		{
			DECOR_SET_VECTOR(GET_OBJECT_FROM_ACTOR(Global_34573), &cVar0, vVar8);
		}
		else
		{
			Function_129(bParam0);
		}
	}
	return;
}

void Function_129(bool bParam0) //Position: 0x6FB6 / 28598
{
	char* cVar0[32];
	
	strcpy(&cVar0, Function_107(bParam0), 32);
	stradd(&cVar0, "_MOD_ITEM_PRICE", 32);
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), &cVar0))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), &cVar0);
	}
	return;
}

int Function_130(int iParam0, bool bParam1, int iParam2) //Position: 0x6FF5 / 28661
{
	return Function_124(iParam0, &bParam1, "TotalAvailableQuantity", iParam2);
}

var Function_131(int iParam0, bool bParam1) //Position: 0x701D / 28701
{
	int iVar0;
	var uVar1;
	
	iVar0 = Function_133(iParam0, &bParam1, "TotalAvailableQuantity");
	if (Function_123(iParam0, bParam1))
	{
		uVar1 = Function_122(iParam0, bParam1);
		if (Function_121(uVar1))
		{
			iVar0 = Function_132(uVar1);
		}
	}
	return iVar0;
}

int Function_132(bool bParam0) //Position: 0x7069 / 28777
{
	char* cVar0[32];
	struct<9> Var8;
	
	strcpy(&cVar0, Function_107(bParam0), 32);
	stradd(&cVar0, "_MOD_ITEM_PRICE", 32);
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), &cVar0))
	{
		DECOR_GET_VECTOR(GET_OBJECT_FROM_ACTOR(Global_34573), &cVar0, &vVar8);
		return ROUND(vVar8.z);
	}
	return 0;
}

var Function_133(int iParam0, int iParam1, bool bParam2) //Position: 0x70B3 / 28851
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = 4294967295;
	bVar0 = Function_115(iParam0, iParam1);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		if (GET_GRINGO_INT_ATTR(&bVar1, bParam2, bVar0))
		{
			return bVar1;
		}
		PRINTSTRING("SK_SHOP_GET_INDEXED_ITEM_INT_ATTRIBUTE: Could not find this item attribute in ShopInventory: ");
		PRINTSTRING(bParam2);
		PRINTNL();
		LOG_ERROR("SK_SHOP_GET_INDEXED_ITEM_INT_ATTRIBUTE: Could not find item attribute in ShopInventory");
	}
	else
	{
		LOG_ERROR("SK_SHOP_GET_INDEXED_ITEM_INT_ATTRIBUTE: could not find ShopInventory component");
	}
	return bVar1;
}

int Function_134() //Position: 0x71FF / 29183
{
	return Function_73(0);
}

int Function_135(bool bParam0, bool bParam1) //Position: 0x7209 / 29193
{
	bool bVar0;
	
	bVar0 = Function_73(0);
	if ((Function_73(0) - bParam0) <= 0)
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
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_73(0));
	return 1;
}

bool Function_136(int iParam0, bool bParam1, int iParam2) //Position: 0x7299 / 29337
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
	Function_71(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_59(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

bool Function_137(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7494 / 29844
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	
	iVar0 = Function_133(bParam0, &bParam1, "QuantityPerPurchase");
	bVar1 = (bParam2 * iVar0);
	if (Function_119(bParam0, bParam1))
	{
		bVar2 = Function_118(bParam0, bParam1);
		if (!bVar2 != 4294967295)
		{
			if (IS_WEAPONENUM_LOCKED(bVar2))
			{
				SET_WEAPONENUM_LOCKED(bVar2, 0);
			}
			GIVE_WEAPON_TO_ACTOR(Global_34573, bVar2, 0.0f, 0, 0);
			if (((bVar2 != 24 || bVar2 != 23) || bVar2 != 25) || bVar2 != 29)
			{
				_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMO_ENUM(bVar2), TO_FLOAT(bParam2), 0, 0);
			}
			else
			{
				_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMO_ENUM(bVar2), GET_WEAPON_MAX_AMMO(bVar2), 0, 0);
			}
			if ((((bVar2 != 11 || bVar2 != 3) || bVar2 != 7) || bVar2 != 18) || bVar2 != 20)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(21))
				{
					AWARD_ACHIEVEMENT(21);
				}
				Function_91(469, 1, 0, 0);
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
			iVar3 = Function_169(bParam0);
			Function_154(bParam0, 0, iVar3, 0);
			return 1;
		}
	}
	if (Function_116(bParam0, bParam1))
	{
		bVar4 = Function_113(bParam0, bParam1);
		if (!bVar4 != 4294967295)
		{
			if (bVar1 >= 0)
			{
				_ADD_AMMO_OF_TYPE(Global_34573, bVar4, TO_FLOAT(bVar1), 0, 0);
			}
			else
			{
				_ADD_AMMO_OF_TYPE(Global_34573, bVar4, _GET_MAX_AMMO_AMOUNT(Global_34573, bVar4), 0, 0);
			}
			if (_GET_AMMO_AMOUNT(Global_34573, bVar4, 0) <= _GET_MAX_AMMO_AMOUNT(Global_34573, bVar4))
			{
				SHOP_SET_ITEM_BLOCKED(bParam1, 1);
			}
			return 1;
		}
	}
	if (Function_123(bParam0, bParam1))
	{
		bVar5 = Function_122(bParam0, bParam1);
		if (!bVar5 != 4294967295)
		{
			iVar6 = 0;
			bVar7 = bVar1;
			if (bVar7 >= 0)
			{
				iVar6 = 1;
				while (iVar6 < bVar7)
				{
					ADD_ITEM(Function_107(bVar5), Global_34573, 0);
					iVar6++;
				}
			}
			else
			{
				ADD_ITEM(Function_107(bVar5), Global_34573, 0);
			}
			if (bVar5 == 16)
			{
				Function_138(15, 0);
			}
			return 1;
		}
	}
	bVar8 = Function_114(bParam0, &bParam1, "ITEM_/AMMO_/WE_Enum");
	PRINTSTRING("SK_SHOP_GIVE_PLAYER_ITEM_BOUGHT: Could not give item to player: ");
	PRINTSTRING(bVar8);
	PRINTNL();
	LOG_ERROR("SK_SHOP_GIVE_PLAYER_ITEM_BOUGHT: Could not give item to player!");
	return 0;
}

int Function_138(bool bParam0, bool bParam1) //Position: 0x7748 / 30536
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
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

void Function_139(bool bParam0) //Position: 0x778F / 30607
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Function_255(bParam0) != 2)
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
	if (Function_89(17, 2))
	{
		return;
	}
	iVar1 = Function_108(Global_30640[0], 3, 5);
	iVar2 = Function_108(Global_30668[1], 3, 5);
	iVar3 = Function_108(Global_30685[0], 3, 5);
	iVar4 = Function_108(Global_30717[0], 3, 5);
	if (Global_29006 == Global_30640[0])
	{
		iVar0 = iVar1;
	}
	else if (Global_29006 == Global_30668[1])
	{
		iVar0 = iVar2;
	}
	else if (Global_29006 == Global_30685[0])
	{
		iVar0 = iVar3;
	}
	else if (Global_29006 == Global_30717[0])
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
		DECOR_SET_BOOL(Global_34573, "ShopOutfit_MerchantSave", true);
		LOG_ERROR("ALL VALID!");
	}
	else
	{
		LOG_ERROR("NOT COMPLETE!");
	}
	return;
}

void Function_140(int iParam0, int iParam1) //Position: 0x78E8 / 30952
{
	if (!Function_142(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_12 = iParam1;
	return;
}

int Function_141(int iParam0) //Position: 0x7903 / 30979
{
	if (!Function_36(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

bool Function_142(int iParam0) //Position: 0x791D / 31005
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

bool Function_143(int iParam0) //Position: 0x7941 / 31041
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_144(int iParam0) //Position: 0x7956 / 31062
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

bool Function_145(int iParam0) //Position: 0x79A7 / 31143
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

bool Function_146(int iParam0, int iParam1, int iParam2) //Position: 0x79F9 / 31225
{
	int iVar0;
	
	if (Function_136(Function_98(iParam0), iParam1, 0))
	{
		iVar0 = (iParam2 * iParam1);
		if (Function_147(iVar0, 0))
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

bool Function_147(bool bParam0, bool bParam1) //Position: 0x7ADA / 31450
{
	bool bVar0;
	
	bVar0 = Function_73(0);
	if ((Function_73(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_91(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_73(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_91(597, bParam0, 0, 0);
	}
	if ((Function_73(597) + Function_73(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

bool Function_148(int iParam0) //Position: 0x7BA5 / 31653
{
	bool bVar0;
	
	if (DECOR_CHECK_EXIST(iParam0->f_36, "Index"))
	{
		bVar0 = DECOR_GET_INT(iParam0->f_36, "Index");
		if (SHOP_GET_ITEM_PURCHASE_PRICE(bVar0) >= 4294967295)
		{
			return 1;
		}
	}
	return 0;
}

int Function_149(bool bParam0) //Position: 0x7BDA / 31706
{
	if (IS_ACTOR_PLAYER(bParam0))
	{
		if (IS_ACTION_NODE_PLAYING(bParam0, "store/player/exit"))
		{
			return 1;
		}
		return SET_ACTION_NODE_FOR_ACTOR(bParam0, "store/player/exit_right");
	}
	LOG_ERROR("SK_SHOP_PLAY_LEAVE_ANIM: Only the player is supported at the moment!");
	return 0;
}

bool Function_150() //Position: 0x7C74 / 31860
{
	if (!UI_ISACTIVE("ShopMenu"))
	{
		LOG_WARNING("SK_SHOP_IS_QUIT_SELECTED: UI went inactive - quitting");
		return 1;
	}
	return 0;
}

int Function_151(int iParam0) //Position: 0x7CCA / 31946
{
	bool bVar0;
	
	if (DECOR_CHECK_EXIST(iParam0->f_36, "Type"))
	{
		bVar0 = DECOR_GET_INT(iParam0->f_36, "Type");
		DECOR_REMOVE(iParam0->f_36, "Type");
		return bVar0;
	}
	return 4294967295;
}

void Function_152(var uParam0) //Position: 0x7D04 / 32004
{
	if (StackVal == 4294967295)
	{
		uParam0->f_4 = 0;
	}
	if (StackVal == 4294967295)
	{
		uParam0->f_8 = 0;
	}
	uParam0->f_8 = StackVal;
	return;
}

bool Function_153() //Position: 0x7D2C / 32044
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = FIND_OBJECT_IN_LAYOUT(Function_18(), "shop_moneybag");
	if (IS_OBJECT_VALID(bVar0))
	{
		return 1;
	}
	if (Function_26())
	{
		GET_OBJECT_NAMED_BONE_POSITION(Function_252(), "ankle_l", &vVar1);
		vVar1.x = (vVar1.x + 0.5f);
		bVar0 = CREATE_PROP_IN_LAYOUT(Function_18(), "shop_moneybag", "p_inv_TreasureMoneyStack01x", vVar1, 0.0f, 0.0f, 0.0f, 0);
		if (IS_OBJECT_VALID(bVar0))
		{
			SET_PROP_COLLIDE_WITH_OBJECT(bVar0, Function_252(), 0);
			return 1;
		}
	}
	return 0;
}

void Function_154(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x7DCC / 32204
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
				bVar4 = ROUND(Function_165(bParam0, bVar0));
				if (bVar4 >= 4294967295)
				{
					SHOP_ADD_ITEM(iVar1, iVar2, 4294967295, 4294967295, bVar4, bVar0, 0);
				}
			}
		}
		else
		{
			Function_164(bParam0, bVar0, &iVar1);
			Function_163(bParam0, bVar0, &iVar2);
			uVar5 = SHOP_ADD_ITEM(iVar1, iVar2, Function_131(bParam0, bVar0), ROUND(Function_103(bParam0, bVar0)), 4294967295, bVar0, Function_113(bParam0, bVar0));
			if (Function_155(bParam0, bVar0))
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

bool Function_155(bool bParam0, bool bParam1) //Position: 0x7EF7 / 32503
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	if (Function_119(bParam0, bParam1))
	{
		bVar0 = Function_118(bParam0, bParam1);
		if (ACTOR_HAS_WEAPON(Global_34573, bVar0))
		{
			if (((bVar0 != 24 || bVar0 != 23) || bVar0 != 25) || bVar0 != 29)
			{
				return 0;
			}
			return 1;
		}
		if (IS_WEAPONENUM_LOCKED(bVar0))
		{
			return !Function_162(bParam0, bParam1);
		}
		return 0;
	}
	if (Function_116(bParam0, bParam1))
	{
		bVar1 = Function_113(bParam0, bParam1);
		bVar2 = GET_WEAPONENUM_FOR_AMMOENUM(Global_34573, bVar1);
		if (IS_WEAPONENUM_LOCKED(bVar2))
		{
			return !Function_161(bParam0, bParam1);
		}
		if (ACTOR_HAS_WEAPON(Global_34573, bVar2))
		{
			if (_GET_AMMO_AMOUNT(Global_34573, bVar1, 0) <= _GET_MAX_AMMO_AMOUNT(Global_34573, bVar1))
			{
				return 1;
			}
			return 0;
		}
		return 1;
	}
	if (Function_123(bParam0, bParam1))
	{
		iVar3 = Function_122(bParam0, bParam1);
		switch (iVar3)
		{
			case 0x00000015:
				if (Function_157(&Global_30640))
				{
					return 1;
				}
				break;
			
			case 0x00000016:
				if (Function_157(&Global_30707))
				{
					return 1;
				}
				break;
			
			case 0x00000018:
				if (Function_157(&Global_30717))
				{
					return 1;
				}
				break;
			
			case 0x00000017:
				if (Function_157(&Global_30658))
				{
					return 1;
				}
				break;
			
			case 0x00000019:
				if (Function_157(&Global_30668))
				{
					return 1;
				}
				break;
			
			case 0x0000001A:
				if (Function_157(&Global_30693))
				{
					return 1;
				}
				break;
			
			case 0x0000001B:
				if (Function_157(&Global_30685))
				{
					return 1;
				}
				break;
			
			case 0x0000001C:
				if (Function_157(&Global_30679))
				{
					return 1;
				}
				break;
			
			case 0x0000001D:
				if (Function_157(&Global_30723))
				{
					return 1;
				}
				break;
		}
		return !Function_156(bParam0, bParam1);
	}
	return 0;
}

bool Function_156(bool bParam0, bool bParam1) //Position: 0x80C4 / 32964
{
	bool bVar0;
	
	bVar0 = Function_122(bParam0, bParam1);
	if (bVar0 == 4294967295)
	{
		return 0;
	}
	if (!Global_59675[bVar08].f_24)
	{
		return 0;
	}
	if (Global_59675[bVar08].f_28)
	{
		if (HAS_ITEM(Function_107(bVar0), Global_34573))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_157(int iParam0) //Position: 0x810A / 33034
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (!Function_158((*iParam0)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool Function_158(int iParam0) //Position: 0x8134 / 33076
{
	if (!Function_160(iParam0))
	{
		return 0;
	}
	return Function_159(&(Global_29008[iParam0]), 4096);
}

int Function_159(var uParam0, int iParam1) //Position: 0x8152 / 33106
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_160(int iParam0) //Position: 0x816E / 33134
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_161(bool bParam0, bool bParam1) //Position: 0x8184 / 33156
{
	int iVar0;
	
	iVar0 = Function_113(bParam0, bParam1);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	return Global_60316[iVar08].f_24;
}

bool Function_162(int iParam0, bool bParam1) //Position: 0x81A4 / 33188
{
	bool bVar0;
	
	bVar0 = Function_118(iParam0, bParam1);
	if (bVar0 == 4294967295)
	{
		return 0;
	}
	if (!Global_59354[bVar08].f_24)
	{
		return 0;
	}
	if (ACTOR_HAS_WEAPON(Global_34573, bVar0))
	{
		return 0;
	}
	return 1;
}

void Function_163(int iParam0, bool bParam1, int iParam2) //Position: 0x81DB / 33243
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = true;
	if (Function_119(iParam0, bParam1))
	{
		iVar1 = Function_118(iParam0, bParam1);
		if (bVar0)
		{
			*iParam2 = StackVal;
		}
	}
	else if (Function_116(iParam0, bParam1))
	{
		iVar2 = Function_113(iParam0, bParam1);
		if (bVar0)
		{
			*iParam2 = StackVal;
		}
	}
	else if (Function_123(iParam0, bParam1))
	{
		iVar3 = Function_122(iParam0, bParam1);
		if (bVar0)
		{
			*iParam2 = StackVal;
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

void Function_164(var uParam0, bool bParam1, int iParam2) //Position: 0x8313 / 33555
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = true;
	if (Function_119(uParam0, bParam1))
	{
		iVar1 = Function_118(uParam0, bParam1);
		if (bVar0)
		{
			*iParam2 = StackVal;
		}
	}
	else if (Function_116(uParam0, bParam1))
	{
		iVar2 = Function_113(uParam0, bParam1);
		if (bVar0)
		{
			*iParam2 = StackVal;
		}
	}
	else if (Function_123(uParam0, bParam1))
	{
		iVar3 = Function_122(uParam0, bParam1);
		if (bVar0)
		{
			*iParam2 = StackVal;
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

var Function_165(var uParam0, int iParam1) //Position: 0x843D / 33853
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	if (iParam1 > Global_60461)
	{
		LOG_ERROR("SK_SHOP_GET_COLLECTIBLE_VALUE: iCollectibleIndex >= COUNT_OF(gShopCollectionData)");
		return 0.0f;
	}
	if (iParam1 <= 0)
	{
		LOG_ERROR("SK_SHOP_GET_COLLECTIBLE_VALUE: iCollectibleIndex < 0");
		return 0.0f;
	}
	fVar0 = Global_60461[iParam111];
	fVar1 = Function_166(uParam0, iParam1);
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
			fVar2 = 1.5f;
		}
		else
		{
			fVar2 = 0.5f;
		}
	}
	else if (Function_105() <= 5 && !Function_104())
	{
		PRINTNL();
		PRINTSTRING("COLLECTIBLE - high honor modifier");
		PRINTNL();
		fVar2 = 1.5f;
	}
	iVar3 = ((fVar0 * fVar1) * fVar2);
	return iVar3;
}

var Function_166(var uParam0, int iParam1) //Position: 0x859E / 34206
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	iVar3 = 0;
	bVar4 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "CollectibleRates", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar4))
	{
		iVar0 = GRINGO_GET_CHILD_COMPONENT_COUNT(bVar4);
		iVar1 = 0;
		while (iVar1 <= iVar0)
		{
			bVar5 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, bVar4);
			if (IS_GRINGO_COMPONENT_VALID(bVar5))
			{
				Function_168(iParam1, &iVar3);
				iVar6 = GRINGO_GET_COMPONENT_HASH(bVar5);
				if (iVar6 == iVar3)
				{
					if (GET_GRINGO_FLOAT_ATTR(&uVar2, "ValueModifier", bVar5))
					{
						return uVar2;
					}
				}
			}
			iVar1++;
		}
	}
	return 1.0f;
}

void Function_167(int iParam0, int iParam1) //Position: 0x862A / 34346
{
	if (iParam0 > Global_60461)
	{
		LOG_ERROR("SK_SHOP_GET_DESCRIPTION_FOR_REQUESTED_COLLECTIBLE: iItemIndex >= COUNT_OF(gShopCollectionData)");
		iParam0 = 0;
	}
	if (iParam0 <= 0)
	{
		LOG_ERROR("SK_SHOP_GET_DESCRIPTION_FOR_REQUESTED_COLLECTIBLE: iItemIndex < 0");
		iParam0 = 0;
	}
	*iParam1 = StackVal;
	if (*iParam1 == 0)
	{
		LOG_ERROR("SK_SHOP_GET_DESCRIPTION_FOR_REQUESTED_COLLECTIBLE: Invalid sDisplayItemName");
	}
	return;
}

void Function_168(int iParam0, int iParam1) //Position: 0x8753 / 34643
{
	if (iParam0 > Global_60461)
	{
		LOG_ERROR("SK_SHOP_GET_NAME_FOR_REQUESTED_COLLECTIBLE: iItemIndex >= COUNT_OF(gShopCollectionData)");
		iParam0 = 0;
	}
	if (iParam0 <= 0)
	{
		LOG_ERROR("SK_SHOP_GET_NAME_FOR_REQUESTED_COLLECTIBLE: iItemIndex < 0");
		iParam0 = 0;
	}
	*iParam1 = StackVal;
	if (*iParam1 == 0)
	{
		LOG_ERROR("SK_SHOP_GET_NAME_FOR_REQUESTED_COLLECTIBLE: Invalid sDisplayItemName");
	}
	return;
}

var Function_169(bool bParam0) //Position: 0x8867 / 34919
{
	bool bVar0;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ShopInventory", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		return GRINGO_GET_CHILD_COMPONENT_COUNT(bVar0);
	}
	LOG_ERROR("SK_SHOP_GET_ITEMS_COUNT: could not find ShopInventory component");
	return 4294967295;
}

var Function_170() //Position: 0x88DE / 35038
{
	return Global_62336 + 1;
}

int Function_171(bool bParam0) //Position: 0x88E9 / 35049
{
	if (IS_ACTOR_PLAYER(bParam0))
	{
		if (IS_ACTION_NODE_PLAYING(bParam0, "store/player/idle"))
		{
			return 1;
		}
		return SET_ACTION_NODE_FOR_ACTOR(bParam0, "store/player/idle");
	}
	if (IS_ACTION_NODE_PLAYING(bParam0, "store/clerk/pre") || IS_ACTION_NODE_PLAYING(bParam0, "store/clerk/idle"))
	{
		return 1;
	}
	return SET_ACTION_NODE_FOR_ACTOR(bParam0, "store/clerk/idle");
}

bool Function_172(var uParam0, bool bParam1, bool bParam2) //Position: 0x897F / 35199
{
	if (!IS_ACTOR_VALID(bParam2))
	{
		LOG_ERROR("SK_SHOP_LOADED_ANIMS: invalid shopkeeper actor");
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("SK_SHOP_LOADED_ANIMS: invalid user actor");
		return 0;
	}
	if (uParam0->f_12)
	{
		if (HAS_ANIM_SET_LOADED("store") && HAS_ACTION_TREE_LOADED("custom/store"))
		{
			if (!uParam0->f_16)
			{
				SET_ACTOR_CAN_PLAY_GESTURES(bParam2, false);
				SET_ACTOR_CAN_PLAY_BORED_IDLES(bParam2, false);
				if (!Global_3380)
				{
					SET_ACTOR_CAN_PLAY_GESTURES(bParam1, false);
					SET_ACTOR_CAN_PLAY_BORED_IDLES(bParam1, false);
				}
				SET_ANIM_SET_FOR_ACTOR(bParam1, "store", 1);
				SET_ANIM_SET_FOR_ACTOR(bParam2, "store", 1);
				uParam0->f_16 = 1;
			}
			return uParam0->f_16;
		}
	}
	LOG_ERROR("SK_SHOP_LOADED_ANIMS: the store anims where never requested!");
	return 0;
}

int Function_173(bool bParam0) //Position: 0x8ABA / 35514
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	bVar0 = GET_OBJECT_FROM_ACTOR(Function_252());
	bVar2 = Function_18();
	bVar3 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bVar2, "shop_cam", 1, 1);
	bVar1 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar3, 0);
	SET_CAMERASHOT_ASPECT_RATIO(bVar1, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(bVar1, 1);
	SET_CAMERASHOT_FOV(bVar1, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(bVar1, 0.1f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(bVar1, 1885.0f);
	if (Function_176(bParam0, &vVar4) && Function_175(bParam0, &vVar7))
	{
		SET_CAMERASHOT_POSITION(bVar1, vVar4);
		SET_CAMERASHOT_ORIENTATION(bVar1, vVar7, 0);
	}
	else
	{
		bVar10 = FIND_OBJECT_IN_LAYOUT(Function_18(), "camera_look_at");
		if (IS_OBJECT_VALID(bVar10))
		{
			DESTROY_OBJECT(bVar10);
		}
		GET_OBJECT_POSITION(bVar0, &vVar4);
		GET_OBJECT_ORIENTATION(bVar0, &vVar7);
		bVar10 = CREATE_POINT_IN_LAYOUT(Function_18(), "camera_look_at", vVar4, vVar7);
		ATTACH_OBJECTS(bVar1, bVar10, Function_60(), -0.75f, 1.567008f, -2.8f, 0.0f, 0.0f, 0.0f, 4294967295);
		SET_CAMERASHOT_TARGET_OBJECT(bVar1, bVar0, 0);
		SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(bVar1, -0.4f, 0.9f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	}
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(bVar3, 0, 4294967295);
	PLAY_CUTSCENEOBJECT(bVar3, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	Function_174(bVar1, bVar0);
	return 1;
}

void Function_174(bool bParam0, bool bParam1) //Position: 0x8BEA / 35818
{
	var uVar0;
	var uVar3;
	float fVar6;
	
	DOF_PUSH();
	GET_OBJECT_POSITION(bParam0, &uVar0);
	GET_OBJECT_POSITION(bParam1, &uVar3);
	fVar6 = 4.0f;
	DOF_SET(fVar6, 0.65f, GET_CAMERASHOT_FAR_CLIP_PLANE(bParam0), 0.8f);
	DOF_SET_KERNEL(1);
	return;
}

int Function_175(var uParam0, char* cParam1) //Position: 0x8C1E / 35870
{
	bool bVar0;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ShopSettings", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		if (IS_DISPLAY_WIDESCREEN())
		{
			if (GET_GRINGO_VECTOR_ATTR(cParam1, "BuyCameraOverrideDirection", bVar0))
			{
				if (!Function_33(StackVal, StackVal, *cParam1))
				{
					return 1;
				}
			}
		}
		if (GET_GRINGO_VECTOR_ATTR(cParam1, "BuyCameraOverrideDirection4:3", bVar0))
		{
			if (!Function_33(StackVal, StackVal, *cParam1))
			{
				return 1;
			}
		}
	}
	LOG_ERROR("SK_GET_SHOP_BUY_CAMERA_DIRECTION_OVERRIDE: Missing ShopSettings in shop xml");
	return 0;
}

int Function_176(var uParam0, char* cParam1) //Position: 0x8D0E / 36110
{
	bool bVar0;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ShopSettings", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		if (IS_DISPLAY_WIDESCREEN())
		{
			if (GET_GRINGO_VECTOR_ATTR(cParam1, "BuyCameraOverridePosition", bVar0))
			{
				if (!Function_33(StackVal, StackVal, *cParam1))
				{
					return 1;
				}
			}
		}
		if (GET_GRINGO_VECTOR_ATTR(cParam1, "BuyCameraOverridePosition4:3", bVar0))
		{
			if (!Function_33(StackVal, StackVal, *cParam1))
			{
				return 1;
			}
		}
	}
	LOG_ERROR("SK_GET_SHOP_BUY_CAMERA_POSITION_OVERRIDE: Missing ShopSettings in shop xml");
	return 0;
}

var Function_177(int iParam0, bool bParam1) //Position: 0x8DFB / 36347
{
	return IS_OBJECT_VALID(Function_178(Function_18(), 0, iParam0->f_20, bParam1, 0, 0));
}

var Function_178(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x8E13 / 36371
{
	bool bVar0;
	
	if (bParam4)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_60(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "ShopSell", 1, 1);
	}
	Function_179(&bVar0, uParam2, uParam3);
	if (bParam5)
	{
		SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam5);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return bVar0;
}

void Function_179(var uParam0, var uParam1, int iParam2) //Position: 0x8E6C / 36460
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_180(&bVar0, uParam1, iParam2);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 4294967295);
	return;
}

void Function_180(var uParam0, bool bParam1, int iParam2) //Position: 0x8E8D / 36493
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 16.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	if (Function_182(iParam2, &vVar0) && Function_181(iParam2, &vVar3))
	{
		SET_CAMERASHOT_POSITION(*uParam0, vVar0);
		SET_CAMERASHOT_ORIENTATION(*uParam0, vVar3, 0);
		Function_174(*uParam0, bParam1);
	}
	else
	{
		bVar6 = FIND_OBJECT_IN_LAYOUT(Function_18(), "camera_look_at");
		if (IS_OBJECT_VALID(bVar6))
		{
			DESTROY_OBJECT(bVar6);
		}
		GET_OBJECT_POSITION(bParam1, &vVar0);
		GET_OBJECT_ORIENTATION(bParam1, &vVar3);
		bVar6 = CREATE_POINT_IN_LAYOUT(Function_18(), "camera_look_at", vVar0, vVar3);
		ATTACH_OBJECTS(*uParam0, bVar6, Function_60(), 1.593524f, 1.5f, -3.978377f, 3.054072f, 0.410364f, -3.141593f, 4294967295);
		SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bVar6, 0);
		SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.9f, 1.348268f, 0.05838f, 0.0f, 0.0f, 0.0f, 0);
		Function_174(*uParam0, bVar6);
	}
	return;
}

int Function_181(var uParam0, char* cParam1) //Position: 0x8FA0 / 36768
{
	bool bVar0;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ShopSettings", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		if (IS_DISPLAY_WIDESCREEN())
		{
			if (GET_GRINGO_VECTOR_ATTR(cParam1, "SellCameraOverrideDirection", bVar0))
			{
				if (!Function_33(StackVal, StackVal, *cParam1))
				{
					return 1;
				}
			}
		}
		if (GET_GRINGO_VECTOR_ATTR(cParam1, "SellCameraOverrideDirection4:3", bVar0))
		{
			if (!Function_33(StackVal, StackVal, *cParam1))
			{
				return 1;
			}
		}
	}
	LOG_ERROR("SK_GET_SHOP_SELL_CAMERA_DIRECTION_OVERRIDE: Missing ShopSettings in shop xml");
	return 0;
}

int Function_182(var uParam0, char* cParam1) //Position: 0x9093 / 37011
{
	bool bVar0;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ShopSettings", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		if (IS_DISPLAY_WIDESCREEN())
		{
			if (GET_GRINGO_VECTOR_ATTR(cParam1, "SellCameraOverridePosition", bVar0))
			{
				if (!Function_33(StackVal, StackVal, *cParam1))
				{
					return 1;
				}
			}
		}
		if (GET_GRINGO_VECTOR_ATTR(cParam1, "SellCameraOverridePosition4:3", bVar0))
		{
			if (!Function_33(StackVal, StackVal, *cParam1))
			{
				return 1;
			}
		}
	}
	LOG_ERROR("SK_GET_SHOP_SELL_CAMERA_POSITION_OVERRIDE: Missing ShopSettings in shop xml");
	return 0;
}

var Function_183() //Position: 0x9183 / 37251
{
	return STREAMING_REQUEST_PROP(GET_ASSET_ID("p_inv_TreasureMoneyStack01x", 0), true);
}

bool Function_184(var uParam0, bool bParam1, int iParam2) //Position: 0x91AF / 37295
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	vector3 vVar21;
	bool bVar24;
	bool bVar25;
	
	*iParam2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam2 };
	SET_HUD_MAP_DRAW_ENABLED(0);
	SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(Function_254(), 1);
	STREAMING_PREVENT_SNIPER_MODE(1);
	bVar0 = Function_195(bParam1);
	bVar18 = Function_252();
	Function_193(Function_194());
	vVar8 = { StackVal, StackVal, Function_193(Function_194()) };
	bVar19 = Function_190(StackVal, StackVal, bParam1, FIND_NAMED_LAYOUT("ArtGringoLayout"), bVar0, "UseCase1", vVar8, 15.0f, 1, 1);
	if (IS_OBJECT_VALID(bVar19))
	{
		GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bVar19), "UseCase1", &vVar2);
		bVar1 = Function_189(bParam1);
		if (IS_STRING_VALID(bVar1))
		{
			GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bVar19), bVar1, &vVar5);
		}
		else
		{
			Function_188(bParam1);
			vVar11 = { StackVal, StackVal, Function_188(bParam1) };
			GET_ACTOR_OFFSET_WORLD_COORDS(Function_252(), &vVar11, &vVar5);
			vVar5.f_4 = (vVar5.y + 1.0f);
		}
		vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar5, vVar2, StackVal) };
		VSCALE(&vVar14, 0.5f);
		vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar5, vVar14, StackVal) };
		bVar20 = Function_187(StackVal, StackVal, vVar14, 6.0f);
		if (IS_VOLUME_VALID(bVar20))
		{
			Function_186(bVar20);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar20);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar20);
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(Function_252(), 1);
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(uParam0->f_20, 1);
		}
		AI_IGNORE_ACTOR(bVar18);
		AI_IGNORE_ACTOR(uParam0->f_20);
		AI_DONT_HARM_ACTOR(bVar18);
		AI_DONT_HARM_ACTOR(uParam0->f_20);
		bVar17 = GET_OBJECT_HEADING(bVar19);
		TELEPORT_ACTOR_WITH_HEADING(bVar18, vVar2, bVar17, 0, true, 1);
		SNAP_OBJECT_TO_GROUND(bVar18, 25.0f, false, 1092616192);
		CLEAR_AMBIENT_OBJECTS_SPHERE(vVar5, 1.2f, 4294967295);
		TELEPORT_ACTOR(uParam0->f_20, &vVar5, 1, 1, 1);
		SNAP_OBJECT_TO_GROUND(uParam0->f_20, 25.0f, false, 1092616192);
		bVar17 = (bVar17 + 180.0f);
		SET_ACTOR_HEADING(uParam0->f_20, bVar17, 1);
		Function_185(bVar19);
		vVar21 = { StackVal, StackVal, Function_185(bVar19) };
		bVar24 = CREATE_POINT_IN_LAYOUT(Function_18(), Function_60(), vVar2, vVar21);
		ATTACH_OBJECTS(GET_OBJECT_FROM_ACTOR(Function_252()), bVar24, Function_60(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
		vVar21.f_4 = (vVar21.y + 180.0f);
		bVar25 = CREATE_POINT_IN_LAYOUT(Function_18(), Function_60(), vVar5, vVar21);
		ATTACH_OBJECTS(GET_OBJECT_FROM_ACTOR(uParam0->f_20), bVar25, Function_60(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
		TASK_STAND_STILL(bVar18, -1.0f, 0, 0);
		UI_INCLUDE("ShopTab_Sell");
		return 1;
	}
	PRINTSTRING("SK_SHOP_COUNTER_INIT: in a 50m radius I could not locate counter gringo: ");
	PRINTSTRING(bVar0);
	PRINTNL();
	LOG_ERROR("SK_SHOP_COUNTER_INIT: could not locate counter gringo for the shopkeeper! Details in spew");
	return 0;
}

vector3 Function_185(bool bParam0) //Position: 0x9487 / 38023
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_186(bool bParam0) //Position: 0x94AE / 38062
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (IS_VOLUME_VALID(bParam0))
	{
		bVar2 = CREATE_OBJECTSET_IN_LAYOUT("TempObjectSetForActors", Global_6288, 4294967295, 0);
		if (IS_OBJECTSET_VALID(bVar2))
		{
			LOCATE_ACTORS_IN_VOLUME(bParam0, bVar2, 0, 1);
			bVar1 = false;
			while (bVar1 < (GET_OBJECTSET_SIZE(bVar2) - 1))
			{
				bVar3 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar2);
				if (IS_OBJECT_VALID(bVar3))
				{
					bVar0 = GET_ACTOR_FROM_OBJECT(bVar3);
					if (IS_ACTOR_VALID(bVar0))
					{
						if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bVar0), "bShopDontKill"))
						{
							if (bVar0 == Global_34573 && bVar0 == Function_252())
							{
								DESTROY_ACTOR(bVar0);
							}
						}
					}
				}
				bVar1++;
			}
			DESTROY_OBJECTSET(bVar2);
		}
	}
	return;
}

var Function_187(vector3 vParam0, float fParam3) //Position: 0x955F / 38239
{
	return CREATE_VOLUME_IN_LAYOUT(Function_18(), "shop_volume", 2, vParam0, 0.0f, 0.0f, 0.0f, fParam3, 1.0f, fParam3);
}

vector3 Function_188(int iParam0) //Position: 0x9588 / 38280
{
	vector3 vVar0;
	bool bVar3;
	
	bVar3 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ShopSettings", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar3))
	{
		GET_GRINGO_VECTOR_ATTR(&vVar0, "CounterOffset", bVar3);
	}
	return StackVal, StackVal, vVar0;
}

int Function_189(bool bParam0) //Position: 0x95CB / 38347
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ShopSettings", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar2))
	{
		bVar1 = GET_GRINGO_STRING_ATTR("CounterPlayerUseCase", bVar2, &iVar0);
		if (iVar0 >= 0)
		{
			if (IS_STRING_VALID(bVar1))
			{
				if (STRING_LENGTH(bVar1) >= 0)
				{
					return bVar1;
				}
			}
		}
	}
	return Function_60();
}

var Function_190(int iParam0, bool bParam1, bool bParam2, bool bParam3, vector3 vParam4, bool bParam7, bool bParam8, bool bParam9) //Position: 0x962F / 38447
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		if (Function_192(iParam0))
		{
			LOG_ERROR("GB_GET_FIRST_USABLE_OBJECT: Invalid Layout!");
		}
		return "";
	}
	if (STRING_CONTAINS_STRING(bParam2, "wander"))
	{
		return "";
	}
	if (STRING_CONTAINS_STRING(bParam2, "camp,"))
	{
		return "";
	}
	if (STRING_CONTAINS_STRING(bParam2, "nsleeptime"))
	{
		return "";
	}
	if (bParam8 || bParam9)
	{
		bVar2 = CREATE_OBJECTSET_IN_LAYOUT(Function_60(), bParam1, 4294967295, 0);
		bVar1 = CREATE_OBJECT_ITERATOR(bParam1);
		ITERATE_IN_SET(bVar1, bVar2);
		if (LOCATE_GRINGOS_OF_TYPE(bVar2, bParam2, &vParam4, bParam7, 1) >= 0)
		{
			bVar0 = Function_191(bVar1, bParam8, bParam9);
			if (!IS_OBJECT_VALID(bVar0))
			{
				LOG_ERROR("Iteration failed");
			}
		}
		else if (LOCATE_GRINGOS_OF_NAME(bVar2, bParam2, &vParam4, bParam7, 1) >= 0)
		{
			bVar0 = Function_191(bVar1, bParam8, bParam9);
			if (!IS_OBJECT_VALID(bVar0))
			{
				LOG_ERROR("Iteration failed");
			}
		}
		DESTROY_OBJECT(bVar2);
		DESTROY_OBJECT(bVar1);
	}
	else
	{
		bVar0 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE(bParam2, &vParam4, bParam7, 1));
		if (IS_OBJECT_VALID(bVar0))
		{
			if (GET_OBJECT_TYPE(GET_OBJECT_OWNER(bVar0)) == 24)
			{
				if (Function_192(iParam0))
				{
					PRINTSTRING("Gen_Brain: GB_GET_FIRST_USABLE_OBJECT: this pers char brain is given a gringo in its schedule that has the same partial name as a brain. Trying to match name exactly now, might fail. Details: ");
					PRINTSTRING(bParam2);
					PRINTNL();
					PRINTSTRING(" - Use component name: ");
					PRINTSTRING(bParam3);
					PRINTSTRING(" - Looking at vector: ");
					PRINTVECTOR(vParam4);
					PRINTSTRING(" - With scan radius: ");
					PRINTFLOAT(bParam7);
					PRINTNL();
				}
				bVar0 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE(bParam2, &vParam4, bParam7, 0));
				if (IS_OBJECT_VALID(bVar0))
				{
					if (Function_192(iParam0))
					{
						PRINTSTRING("Gen_Brain: GB_GET_FIRST_USABLE_OBJECT: Found exact gringo of type (due to name matching the pers char brain).");
						PRINTNL();
					}
					return bVar0;
				}
				LOG_ERROR("Gen_Brain: GB_GET_FIRST_USABLE_OBJECT: Failed to find exact name gringo (due to name matching the pers char brain).");
			}
			else
			{
				return bVar0;
			}
		}
		bVar0 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_NAME(bParam2, &vParam4, bParam7, 1));
		if (IS_OBJECT_VALID(bVar0))
		{
			if (GET_OBJECT_TYPE(GET_OBJECT_OWNER(bVar0)) == 24)
			{
				if (Function_192(iParam0))
				{
					PRINTSTRING("Gen_Brain: GB_GET_FIRST_USABLE_OBJECT: this pers char brain is given a gringo in its schedule that has the same partial name as a brain. Trying to match name exactly now, might fail. Details: ");
					PRINTSTRING(bParam2);
					PRINTNL();
					PRINTSTRING(" - Use component name: ");
					PRINTSTRING(bParam3);
					PRINTSTRING(" - Looking at vector: ");
					PRINTVECTOR(vParam4);
					PRINTSTRING(" - With scan radius: ");
					PRINTFLOAT(bParam7);
					PRINTNL();
				}
				bVar0 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_NAME(bParam2, &vParam4, bParam7, 0));
				if (IS_OBJECT_VALID(bVar0))
				{
					if (Function_192(iParam0))
					{
						PRINTSTRING("Gen_Brain: GB_GET_FIRST_USABLE_OBJECT: Found exact gringo of name (due to name matching the pers char brain).");
						PRINTNL();
					}
					return bVar0;
				}
				LOG_ERROR("Gen_Brain: GB_GET_FIRST_USABLE_OBJECT: Failed to find exact name gringo (due to name matching the pers char brain).");
			}
			else
			{
				return bVar0;
			}
		}
	}
	if (!IS_OBJECT_VALID(bVar0))
	{
		if (Function_192(iParam0))
		{
			PRINTSTRING("Gen_Brain: GB_GET_FIRST_USABLE_OBJECT failed to find any usable object of name: ");
			PRINTSTRING(bParam2);
			PRINTNL();
			PRINTSTRING(" - Use component name: ");
			PRINTSTRING(bParam3);
			PRINTSTRING(" - Looking at vector: ");
			PRINTVECTOR(vParam4);
			PRINTSTRING(" - With scan radius: ");
			PRINTFLOAT(bParam7);
			PRINTNL();
			LOG_ERROR("Gen_Brain: GB_GET_FIRST_USABLE_OBJECT failed to find any usable object! Check the spew!!");
		}
	}
	if (IS_ITERATOR_VALID(bVar1))
	{
		DESTROY_ITERATOR(bVar1);
	}
	return bVar0;
}

bool Function_191(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9DAC / 40364
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<5> Var4;
	bool bVar10;
	bool bVar11;
	float fVar12;
	
	bVar11 = 1E+33.0f;
	if (!IS_ITERATOR_VALID(bParam0))
	{
		return iVar0;
	}
	bVar1 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (bParam1 || bParam2)
		{
			if (IS_ACTOR_VALID(Function_252()))
			{
				GET_OBJECT_POSITION(bVar1, &Var4);
				GET_POSITION(Function_252(), &Var7);
				if (bParam1)
				{
					bVar10 = VDIST(Var4, Var7);
					if (bVar10 > bVar11)
					{
						if (bParam2)
						{
							fVar12 = FABS((StackVal - StackVal));
							if (fVar12 >= 1.0f)
							{
								bVar11 = bVar10;
								bVar2 = bVar1;
							}
						}
						else
						{
							bVar11 = bVar10;
							bVar2 = bVar1;
						}
					}
				}
				else if (bParam2)
				{
					fVar12 = FABS((StackVal - StackVal));
					if (fVar12 >= 1.0f)
					{
						bVar3 = bVar1;
					}
				}
			}
			else
			{
				return bVar1;
			}
		}
		return bVar1;
		bVar1 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	if (bParam1 && IS_OBJECT_VALID(bVar2))
	{
		return bVar2;
	}
	if (bParam2 && IS_OBJECT_VALID(bVar3))
	{
		return bVar3;
	}
	return iVar0;
}

bool Function_192(bool bParam0) //Position: 0x9E91 / 40593
{
	bool bVar0;
	var uVar1;
	
	if (GET_DEBUG_DRAW_STATE())
	{
		return 1;
	}
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "Debug", false);
	return GET_GRINGO_BOOL_ATTR("DisplayDebugIndicators", bVar0, &uVar1);
}

vector3 Function_193(bool bParam0) //Position: 0x9ED4 / 40660
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_194() //Position: 0x9EFB / 40699
{
	return GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
}

var Function_195(int iParam0) //Position: 0x9F07 / 40711
{
	var uVar0;
	bool bVar1;
	
	bVar1 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ShopSettings", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar1))
	{
		return GET_GRINGO_STRING_ATTR("CounterGringoName", bVar1, &uVar0);
	}
	return "";
}

void Function_196(int iParam0) //Position: 0x9F4D / 40781
{
	if (!iParam0->f_12)
	{
		REQUEST_ACTION_TREE("custom/store");
		REQUEST_ANIM_SET("store", 1);
		iParam0->f_12 = 1;
	}
	return;
}

void Function_197(var uParam0) //Position: 0x9F7F / 40831
{
	Global_3393 = 1;
	Global_59353 = 1;
	uParam0->f_12 = 0;
	uParam0->f_16 = 0;
	uParam0->f_24 = 0;
	uParam0->f_40 = 0;
	uParam0->f_44 = 0;
	uParam0->f_48 = 0;
	uParam0->f_52 = 0;
	uParam0->f_56 = 0;
	Function_99(uParam0);
	return;
}

void Function_198() //Position: 0x9FBA / 40890
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_PLAYER_CONTROL(GET_PLAYER_PADINDEX(Global_34573), 0, 0, 0);
		ACTOR_HOLSTER_WEAPON(Global_34573, 0);
	}
	return;
}

void Function_199(int iParam0) //Position: 0x9FDD / 40925
{
	bool bVar0;
	bool bVar1;
	
	if (EVENT_TRAP_SUCCESSFUL_TRAP(StackVal))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(Global_59349);
		ITERATE_IN_EVENT_TRAP(StackVal, bVar0);
		bVar1 = START_OBJECT_ITERATOR(bVar0);
		if (IS_OBJECT_VALID(bVar1))
		{
			while (IS_OBJECT_VALID(bVar1))
			{
				iParam0->f_36 = GET_EVENT_FROM_OBJECT(bVar1);
				bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
			}
		}
		if (IS_ITERATOR_VALID(bVar0))
		{
			DESTROY_ITERATOR(bVar0);
		}
	}
	if (EVENT_TRAP_SUCCESSFUL_TRAP(StackVal))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(Global_59349);
		ITERATE_IN_EVENT_TRAP(StackVal, bVar0);
		bVar1 = START_OBJECT_ITERATOR(bVar0);
		if (IS_OBJECT_VALID(bVar1))
		{
			while (IS_OBJECT_VALID(bVar1))
			{
				iParam0->f_36 = GET_EVENT_FROM_OBJECT(bVar1);
				bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
			}
		}
		if (IS_ITERATOR_VALID(bVar0))
		{
			DESTROY_ITERATOR(bVar0);
		}
	}
	if (EVENT_TRAP_SUCCESSFUL_TRAP(Global_59349.f_12))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(Global_59349);
		ITERATE_IN_EVENT_TRAP(bVar0, Global_59349.f_12);
		bVar1 = START_OBJECT_ITERATOR(bVar0);
		if (IS_OBJECT_VALID(bVar1))
		{
			while (IS_OBJECT_VALID(bVar1))
			{
				iParam0->f_36 = GET_EVENT_FROM_OBJECT(bVar1);
				bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
			}
		}
		if (IS_ITERATOR_VALID(bVar0))
		{
			DESTROY_ITERATOR(bVar0);
		}
	}
	return;
}

void Function_200(int iParam0, var uParam1, int iParam2) //Position: 0xA0DF / 41183
{
	bool bVar0;
	
	Function_16(iParam0);
	Function_12(iParam0);
	iParam0->f_20 = GRINGO_GET_REQUESTING_ACTOR();
	*iParam2 = 28;
	iParam0->f_12 = 1;
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "UseCase1", 3);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		GRINGO_SET_COMPONENT_USER(GET_OBJECT_FROM_ACTOR(iParam0->f_20), bVar0);
	}
	*uParam1 = 0;
	return;
}

var Function_201(bool bParam0) //Position: 0xA12D / 41261
{
	var uVar0;
	bool bVar1;
	
	bVar1 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "UseCase1", 3);
	if (IS_GRINGO_COMPONENT_VALID(bVar1))
	{
		return GET_GRINGO_STRING_ATTR("UseName", bVar1, &uVar0);
	}
	return "";
}

bool Function_202(bool bParam0, int iParam1, int iParam2) //Position: 0xA168 / 41320
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "UseCase1", 3);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		GET_GRINGO_FLOAT_ATTR(&fVar1, "ReuseDelay", bVar0);
		if (!iParam1->f_12)
		{
			if (IS_ACTOR_ALIVE(Function_252()))
			{
				if (Function_8(iParam1))
				{
					if (Function_6(iParam1) > fVar1)
					{
						return 0;
					}
				}
				bVar2 = GRINGO_GET_REQUESTING_ACTOR();
				if (!IS_ACTOR_PLAYER(bVar2))
				{
					return 0;
				}
				GRINGO_GET_USE_COMPONENT_POSITION(&vVar3, bVar0);
				GET_GRINGO_FLOAT_ATTR(&fVar6, "ActivationRadius", bVar0);
				GET_POSITION(bVar2, &vVar7);
				vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar7, vVar3, StackVal) };
				if (VMAG(vVar10) < fVar6)
				{
					return 0;
				}
				if (iParam1->f_20 != GRINGO_GET_REQUESTING_ACTOR() && *iParam2 != 0)
				{
					if (Function_6(iParam1) <= fVar1)
					{
						*iParam2 = 1;
						return 1;
					}
					return 0;
				}
				*iParam2 = 1;
				return 1;
			}
		}
		if (iParam1->f_20 == GRINGO_GET_REQUESTING_ACTOR())
		{
			*iParam2 = 0;
			return 1;
		}
	}
	Function_203(bParam0, "GB_VERIFY_REQUEST: GRINGO_GET_USE_COMPONENT returned an invalid component!");
	return 0;
}

void Function_203(int iParam0, bool bParam1) //Position: 0xA2AF / 41647
{
	if (Function_192(iParam0))
	{
		LOG_ERROR(bParam1);
	}
	return;
}

bool Function_204(int iParam0, bool bParam1, bool bParam2) //Position: 0xA2C2 / 41666
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	float fVar5;
	bool bVar6;
	bool bVar7;
	struct<9> Var8;
	vector3 vVar17;
	bool bVar20;
	int iVar21;
	bool bVar22;
	
	bVar6 = Function_252();
	bVar7 = Function_254();
	bVar20 = false;
	if (!bParam2)
	{
		iVar21 = Function_230();
		if (iVar21 != 3 || iVar21 != 4)
		{
			bVar20 = true;
		}
		else
		{
			bVar20 = false;
		}
	}
	if (!Function_251(bParam1))
	{
		if (IS_ACTOR_VALID(bVar6))
		{
			if (AI_GET_IS_RETREATING(bVar6))
			{
				TASK_PRIORITY_SET(bVar6, 3);
				*iParam0 = 18;
			}
		}
	}
	switch (*iParam0)
	{
		case 0x00000000:
			bParam1->f_16 = Function_229(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam1);
			Function_228(bParam1, bParam1->f_16);
			*(bParam1 + 40) = { StackVal, StackVal, Function_228(bParam1, bParam1->f_16) };
			bParam1->f_52 = Function_227(bParam1);
			bParam1->f_56 = Function_226(bParam1);
			bParam1->f_12 = 0;
			bParam1->f_60 = Function_225(bParam1, bParam1 + 12, 0);
			bParam1->f_8 = Function_190(StackVal, StackVal, bParam1, bParam1->f_56, bParam1->f_60, "UseCase1", *(bParam1 + 40), bParam1->f_52, 0, 0);
			if (STRINGS_ARE_EQUAL(bParam1->f_60, "nsleeptime"))
			{
				*bParam1 = 0;
				Function_16(bParam1 + 28);
				Function_12(bParam1 + 28);
				if (bParam2)
				{
					TASK_PRIORITY_SET(bVar6, 2);
					TASK_GO_TO_COORD_AND_STAY(bVar6, bParam1 + 40, 1, 0.0f);
				}
				else
				{
					TASK_PRIORITY_SET(bVar6, 3);
					Function_223(StackVal, StackVal, *(bParam1 + 40), bParam1->f_52, -1.0f);
				}
				SET_PERS_CHAR_ENABLED(bVar7, false);
				DEACTIVATE_ACTOR_FOR_PERS_CHAR(bVar7);
				*iParam0 = 15;
				break;
			}
			if (IS_ACTOR_VALID(bVar6))
			{
				if (IS_OBJECT_VALID(StackVal))
				{
					switch (GET_OBJECT_TYPE(StackVal))
					{
						case 0x0000000C:
							if (IS_GRINGO_READY(StackVal))
							{
								if (!GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(StackVal), "UseCase1", &vVar1))
								{
									GET_OBJECT_POSITION(StackVal, &vVar1);
								}
							}
							else
							{
								GET_OBJECT_POSITION(StackVal, &vVar1);
							}
							if (!Function_222(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
							{
								Function_221(StackVal, StackVal, vVar1, bVar6, bVar7);
							}
							else
							{
								Function_221(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							}
							*iParam0 = 1;
							break;
						
						case 0x00000010:
							GET_PATH_POINT(StackVal, 0, &vVar1);
							if (!Function_222(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
							{
								Function_221(StackVal, StackVal, vVar1, bVar6, bVar7);
							}
							else
							{
								Function_221(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							}
							*iParam0 = 1;
							break;
						
						default:
							Function_221(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							*iParam0 = 1;
							break;
					}
				}
				else
				{
					Function_221(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
					*iParam0 = 1;
				}
			}
			else
			{
				*bParam1 = 1000;
				if (IS_OBJECT_VALID(StackVal))
				{
					switch (GET_OBJECT_TYPE(StackVal))
					{
						case 0x0000000C:
							if (IS_GRINGO_READY(StackVal))
							{
								if (!GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(StackVal), "UseCase1", &vVar1))
								{
									GET_OBJECT_POSITION(StackVal, &vVar1);
								}
							}
							else
							{
								GET_OBJECT_POSITION(StackVal, &vVar1);
							}
							if (!Function_222(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
							{
								Function_220(StackVal, StackVal, vVar1, bVar6, bVar7);
							}
							else
							{
								Function_220(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							}
							*iParam0 = 1;
							break;
						
						case 0x00000010:
							GET_PATH_POINT(StackVal, 0, &vVar1);
							if (!Function_222(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
							{
								Function_220(StackVal, StackVal, vVar1, bVar6, bVar7);
							}
							else
							{
								Function_220(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							}
							*iParam0 = 1;
							break;
						
						default:
							Function_220(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							*iParam0 = 1;
							break;
					}
				}
				else
				{
					Function_220(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
					*iParam0 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (bVar20)
			{
				*iParam0 = 16;
				break;
			}
			if (Function_219(bParam1))
			{
				bParam1->f_16 = Function_229(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam1);
				Function_228(bParam1, bParam1->f_16);
				*(bParam1 + 40) = { StackVal, StackVal, Function_228(bParam1, bParam1->f_16) };
				bParam1->f_52 = Function_227(bParam1);
			}
			bParam1->f_60 = Function_225(bParam1, bParam1 + 12, 0);
			bParam1->f_8 = Function_190(StackVal, StackVal, bParam1, bParam1->f_56, bParam1->f_60, "UseCase1", *(bParam1 + 40), bParam1->f_52, 0, 0);
			Function_218(bParam1, "GB_PERFORM_SCHEDULED_TASK", bParam1->f_60);
			if (IS_ACTOR_VALID(bVar6))
			{
				if (IS_OBJECT_VALID(StackVal))
				{
					switch (GET_OBJECT_TYPE(StackVal))
					{
						case 0x0000000C:
							*bParam1 = 0;
							Function_16(bParam1 + 28);
							Function_12(bParam1 + 28);
							if (Function_217(bParam1))
							{
								*iParam0 = 4;
							}
							else
							{
								TASK_PRIORITY_SET(bVar6, 2);
								*iParam0 = 2;
							}
							break;
						
						case 0x00000010:
							*bParam1 = 0;
							Function_16(bParam1 + 28);
							Function_12(bParam1 + 28);
							TASK_PRIORITY_SET(bVar6, 2);
							*iParam0 = 6;
							break;
						
						default:
							Function_203(bParam1, "GB_PERFORM_SCHEDULED_TASK: Unhandled object! what the hell has come through?");
							*iParam0 = 20;
							break;
					}
				}
				else if (STRINGS_ARE_EQUAL(bParam1->f_60, "nsleeptime"))
				{
					*bParam1 = 0;
					Function_16(bParam1 + 28);
					Function_12(bParam1 + 28);
					if (bParam2)
					{
						TASK_PRIORITY_SET(bVar6, 2);
						TASK_GO_TO_COORD_AND_STAY(bVar6, bParam1 + 40, 1, 0.0f);
					}
					else
					{
						TASK_PRIORITY_SET(bVar6, 3);
						Function_223(StackVal, StackVal, *(bParam1 + 40), bParam1->f_52, -1.0f);
					}
					SET_PERS_CHAR_ENABLED(bVar7, false);
					*iParam0 = 15;
				}
				else if (STRINGS_ARE_EQUAL_CLAMPED(bParam1->f_60, "wander", 6))
				{
					*bParam1 = 0;
					Function_16(bParam1 + 28);
					Function_12(bParam1 + 28);
					TASK_PRIORITY_SET(bVar6, 3);
					*iParam0 = 8;
				}
				else
				{
					Function_203(bParam1, "WARNING! No valid TASK for this pers char");
					*iParam0 = 9;
				}
			}
			else
			{
				switch (GET_OBJECT_TYPE(StackVal))
				{
					case 0x0000000C:
						if (IS_GRINGO_READY(StackVal))
						{
							if (!GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(StackVal), "UseCase1", &vVar1))
							{
								GET_OBJECT_POSITION(StackVal, &vVar1);
							}
						}
						else
						{
							GET_OBJECT_POSITION(StackVal, &vVar1);
						}
						if (!Function_222(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
						{
							Function_220(StackVal, StackVal, vVar1, bVar6, bVar7);
						}
						else
						{
							Function_220(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
						}
						*iParam0 = 19;
						break;
					
					case 0x00000010:
						GET_PATH_POINT(StackVal, 0, &vVar1);
						if (!Function_222(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
						{
							Function_220(StackVal, StackVal, vVar1, bVar6, bVar7);
						}
						else
						{
							Function_220(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
						}
						*iParam0 = 19;
						break;
					
					default:
						Function_220(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
						if (STRINGS_ARE_EQUAL_CLAMPED(bParam1->f_60, "wander", 6))
						{
							*iParam0 = 19;
						}
						else if (STRINGS_ARE_EQUAL_CLAMPED(bParam1->f_60, "nsleeptime", 9))
						{
							*iParam0 = 19;
						}
						else
						{
							*iParam0 = 19;
						}
						break;
					}
			}
			break;
		
		case 0x00000002:
			*bParam1 = 0;
			if (IS_ACTOR_VALID(bVar6))
			{
				TASK_PRIORITY_SET(bVar6, 2);
				TASK_STAND_STILL(bVar6, 1.0f, 1, 1);
				*iParam0 = 3;
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000003:
			*bParam1 = 0;
			if (IS_ACTOR_VALID(bVar6))
			{
				iVar0 = GET_TASK_STATUS(bVar6, 6);
				if (iVar0 != 0 || iVar0 != 4)
				{
					*iParam0 = 4;
				}
				if (Function_219(bParam1))
				{
					*iParam0 = 20;
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000004:
			*bParam1 = 500;
			if (IS_ACTOR_VALID(bVar6))
			{
				Function_215(&bVar6);
				if (bVar20)
				{
					*iParam0 = 16;
					break;
				}
				else
				{
					if (Function_214(StackVal, bVar6, "UseCase1", Function_192(bParam1)))
					{
						if (Function_213(StackVal, bVar6, "UseCase1", &bVar22))
						{
							Function_16(bParam1 + 28);
							Function_12(bParam1 + 28);
							*iParam0 = 5;
							break;
						}
						else if (bVar22)
						{
							Function_218(bParam1, "GB_PERFORM_SCHEDULED_TASK", "GB_REACH_AND_USE_GRINGO failed - gringo is inside a restriction volume.");
							*iParam0 = 9;
							break;
						}
					}
					else
					{
						*iParam0 = 9;
						break;
					}
					if (Function_6(bParam1 + 28) < 20.0f)
					{
						if ((GET_TASK_STATUS(bVar6, 1) != 4 || GET_TASK_STATUS(bVar6, 19) != 4) || Function_219(bParam1))
						{
							*iParam0 = 20;
						}
					}
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000008:
			*bParam1 = 0;
			if (IS_ACTOR_VALID(bVar6))
			{
				Function_215(&bVar6);
				fVar5 = Function_212(bParam1->f_60);
				vVar1 = { StackVal, StackVal, *(bParam1 + 40) };
				uVar4 = bParam1->f_52;
				if (Function_210(bParam1, &vVar8, &vVar11))
				{
					vVar14 = { Function_209(vVar8.x, vVar11.x), Function_209(vVar8.y, vVar11.y), Function_209(vVar8.z, vVar11.z) };
					vVar17 = { Function_208(vVar8.x, vVar11.x), Function_208(vVar8.y, vVar11.y), Function_208(vVar8.z, vVar11.z) };
					TASK_PRIORITY_SET(bVar6, 3);
					TASK_WANDER_IN_BOX(bVar6, &vVar14, &vVar17, -1f);
					*iParam0 = 12;
				}
				else
				{
					Function_223(StackVal, StackVal, vVar1, uVar4, fVar5);
					*iParam0 = 11;
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000009:
			*bParam1 = 0;
			if (IS_ACTOR_VALID(bVar6))
			{
				Function_215(&bVar6);
				if (bParam2)
				{
					Function_203(bParam1, "An error has triggered GB_SCHEDULE_TASK_WANDER_FALLBACK (this is a shopkeeper) - check spew!");
					vVar1 = { StackVal, StackVal, *(bParam1 + 40) };
					uVar4 = bParam1->f_52;
					TASK_PRIORITY_SET(bVar6, 2);
					TASK_GO_NEAR_COORD(bVar6, &vVar1, 2.0f, 1);
					*iParam0 = 10;
				}
				else
				{
					Function_203(bParam1, "An error has triggered GB_SCHEDULE_TASK_WANDER_FALLBACK - check spew!");
					if (Function_210(bParam1, &vVar8, &vVar11))
					{
						vVar14 = { Function_209(vVar8.x, vVar11.x), Function_209(vVar8.y, vVar11.y), Function_209(vVar8.z, vVar11.z) };
						vVar17 = { Function_208(vVar8.x, vVar11.x), Function_208(vVar8.y, vVar11.y), Function_208(vVar8.z, vVar11.z) };
						TASK_PRIORITY_SET(bVar6, 3);
						TASK_WANDER_IN_BOX(bVar6, &vVar14, &vVar17, 20.0f);
						*iParam0 = 12;
					}
					else
					{
						vVar1 = { StackVal, StackVal, *(bParam1 + 40) };
						uVar4 = bParam1->f_52;
						Function_223(StackVal, StackVal, vVar1, uVar4, 20.0f);
						*iParam0 = 11;
					}
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x0000000A:
			*bParam1 = 0;
			if (IS_ACTOR_VALID(bVar6))
			{
				iVar0 = GET_TASK_STATUS(bVar6, 61);
				if (iVar0 != 0 || iVar0 != 4)
				{
					TASK_PRIORITY_SET(bVar6, 2);
					TASK_STAND_STILL(bVar6, 20.0f, 1, 0);
					*iParam0 = 14;
				}
				if (Function_219(bParam1))
				{
					*iParam0 = 20;
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x0000000E:
			Function_207(bParam1, bVar7, "STANDING STILL FALLBACK");
			*bParam1 = 500;
			if (IS_ACTOR_VALID(bVar6))
			{
				iVar0 = GET_TASK_STATUS(bVar6, 6);
				if (iVar0 != 0 || iVar0 != 4)
				{
					*iParam0 = 20;
				}
				if (Function_219(bParam1))
				{
					*iParam0 = 20;
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x0000000B:
		case 0x0000000C:
			*bParam1 = 500;
			if (IS_ACTOR_VALID(bVar6))
			{
				iVar0 = GET_TASK_STATUS(bVar6, 58);
				if (iVar0 != 0 || iVar0 != 4)
				{
					*iParam0 = 20;
				}
				if (Function_219(bParam1))
				{
					*iParam0 = 20;
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x0000000D:
			*bParam1 = 500;
			if (IS_ACTOR_VALID(bVar6))
			{
				iVar0 = GET_TASK_STATUS(bVar6, 57);
				if ((iVar0 != 0 || iVar0 != 2) || iVar0 != 4)
				{
					*iParam0 = 20;
				}
				if (Function_219(bParam1))
				{
					*iParam0 = 20;
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x0000000F:
			Function_207(bParam1, bVar7, "nSLEEPTIME");
			if (IS_ACTOR_VALID(bVar6))
			{
				if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bVar6, 1065353216, 1117126656, 1, 1, 0))
				{
					DECOR_SET_FLOAT(bVar6, "sleepvis", GET_CURRENT_GAME_TIME());
				}
				if (DECOR_CHECK_EXIST(bVar6, "sleepvis"))
				{
					if (DECOR_GET_FLOAT(bVar6, "sleepvis") + 5.0f) > GET_CURRENT_GAME_TIME()
					{
						DEACTIVATE_ACTOR_FOR_PERS_CHAR(bVar7);
					}
				}
			}
			if (Function_219(bParam1))
			{
				if (IS_ACTOR_VALID(bVar6))
				{
					if (DECOR_CHECK_EXIST(bVar6, "sleepvis"))
					{
						DECOR_REMOVE(bVar6, "sleepvis");
					}
				}
				SET_PERS_CHAR_ENABLED(bVar7, true);
				*iParam0 = 20;
			}
			break;
		
		case 0x00000005:
			*bParam1 = 500;
			if (IS_ACTOR_VALID(bVar6))
			{
				if (bVar20)
				{
					*iParam0 = 16;
					break;
				}
				else
				{
					iVar0 = GET_TASK_STATUS(bVar6, 19);
					if ((iVar0 != 0 || iVar0 != 2) || iVar0 != 4)
					{
						*iParam0 = 20;
					}
					if (StackVal && Function_206(AI_HAS_ACTOR_BUMPED_INTO_ME(bVar6, Global_34573, 10.0f)))
					{
						*iParam0 = 20;
					}
					if (Function_219(bParam1))
					{
						*iParam0 = 20;
					}
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000006:
			*bParam1 = 500;
			if (IS_ACTOR_VALID(bVar6))
			{
				Function_215(&bVar6);
				if (bVar20)
				{
					*iParam0 = 16;
					break;
				}
				else
				{
					TASK_GUARD_PATROL_PATH(StackVal, bVar6, 3212836864, 4294967295, 0, 1, 3212836864);
					*iParam0 = 7;
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000007:
			*bParam1 = 500;
			if (IS_ACTOR_VALID(bVar6))
			{
				if (bVar20)
				{
					*iParam0 = 16;
					break;
				}
				else if (Function_219(bParam1))
				{
					*iParam0 = 20;
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000013:
			if (IS_ACTOR_VALID(bVar6))
			{
				*iParam0 = 20;
			}
			else if (Function_219(bParam1))
			{
				*iParam0 = 20;
			}
			else if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bVar7)))
			{
				if (Function_205(50.0f, bVar7))
				{
					*iParam0 = 20;
				}
			}
			break;
		
		case 0x00000010:
			if (bVar20)
			{
				*bParam1 = 0;
				if (IS_ACTOR_VALID(bVar6))
				{
					Function_215(&bVar6);
					Function_223(StackVal, StackVal, *(bParam1 + 40), bParam1->f_52, -1.0f);
				}
				*iParam0 = 17;
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000011:
			Function_207(bParam1, bVar7, "RESPONDING TO RAIN");
			*bParam1 = 0;
			if (!bVar20)
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000012:
			Function_207(bParam1, bVar7, "RESPONDING TO RETREAT");
			*bParam1 = 0;
			if (IS_ACTOR_VALID(bVar6))
			{
				if (!AI_GET_IS_RETREATING(bVar6))
				{
					*iParam0 = 20;
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000014:
			bParam1->f_8 = "";
			*bParam1 = 0;
			if (Function_219(bParam1))
			{
				bParam1->f_12 = 0;
			}
			else
			{
				bParam1->f_12++;
			}
			Function_16(bParam1 + 28);
			if (IS_ACTOR_VALID(bVar6))
			{
				TASK_PRIORITY_SET(bVar6, 2);
			}
			*iParam0 = 1;
			break;
		
		case 0x00000015:
			if (!Function_251(bParam1))
			{
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_PERS_CHAR(bVar7), "KeepLastTask"))
				{
					Function_207(bParam1, bVar7, "STOLEN KEEP_LAST_TASK");
					if (!IS_ACTOR_VALID(bVar6))
					{
						DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(bVar7), "KeepLastTask");
						*iParam0 = 20;
					}
				}
				else
				{
					*iParam0 = 20;
				}
			}
			else
			{
				Function_207(bParam1, bVar7, "STOLEN");
			}
			break;
		
		default:
			Function_218(bParam1, "GB_PERFORM_SCHEDULED_TASK", "UNKNOWN STATE!");
			return 0;
			break;
	}
	return 1;
}

bool Function_205(float fParam0, bool bParam1) //Position: 0xB244 / 45636
{
	vector3 vVar0;
	vector3 vVar3;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar3);
	GET_OBJECT_POSITION(bParam1, &vVar0);
	if (VDIST(vVar0, vVar3) >= fParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_206(bool bParam0) //Position: 0xB26F / 45679
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_GRINGO_FROM_OBJECT(bParam0);
	if (IS_GRINGO_VALID(bVar0))
	{
		iVar1 = 0;
		GRINGO_QUERY_STRING(bVar0, "UseCase1", "ChildFlags", &iVar1);
		if (iVar1 >= 0)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void Function_207(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB2B5 / 45749
{
	struct<5> Var0;
	
	if (Function_192(bParam0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_PERS_CHAR(bParam1), &Var0);
		Var0.f_4 = (StackVal + 0.25f);
	}
	return;
}

int Function_208(int iParam0, int iParam1) //Position: 0xB2DC / 45788
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_209(int iParam0, int iParam1) //Position: 0xB2EF / 45807
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_210(bool bParam0, int iParam1, int iParam2) //Position: 0xB302 / 45826
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	
	iVar0 = Function_211(bParam0);
	switch (iVar0)
	{
		case 0x00000001:
			bVar6 = "Dawn_Tasks";
			break;
		
		case 0x00000002:
			bVar6 = "Morning_Tasks";
			break;
		
		case 0x00000004:
			bVar6 = "LunchTime_Tasks";
			break;
		
		case 0x00000008:
			bVar6 = "Afternoon_Tasks";
			break;
		
		case 0x00000010:
			bVar6 = "Evening_Tasks";
			break;
		
		case 0x00000020:
			bVar6 = "Night_Tasks";
			break;
		
		default:
			if (Function_192(bParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_SCHEDULED_WANDER_BOX_CORNERS_FROM_XML invalid time of day returned by GB_GET_MY_TIME_OF_DAY");
				PRINTNL();
			}
			bVar6 = "Dawn_Tasks";
			break;
	}
	bVar3 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "TimeOfDay_Tasks", false);
	bVar4 = GRINGO_GET_FIRST_NAMED_CHILD(bVar6, 0, bVar3);
	iVar7 = GRINGO_GET_ATTRIBUTE_COUNT(bVar4);
	bVar8 = false;
	while (bVar8 <= iVar7)
	{
		uVar5 = GRINGO_GET_ATTRIBUTE(bVar4, bVar8);
		if (!bVar1)
		{
			bVar1 = GRINGO_GET_VECTOR_ATTR_BY_HANDLE(uVar5, iParam1);
		}
		else if (!bVar2)
		{
			bVar2 = GRINGO_GET_VECTOR_ATTR_BY_HANDLE(uVar5, iParam2);
		}
		if (bVar1 && bVar2)
		{
			return 1;
		}
		bVar8++;
	}
	return 0;
}

int Function_211(int iParam0) //Position: 0xB4C1 / 46273
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = MAKE_TIME_OF_DAY((5 + iParam0->f_24), iParam0->f_20, 0);
	bVar1 = MAKE_TIME_OF_DAY((7 + iParam0->f_24), iParam0->f_20, 0);
	bVar2 = MAKE_TIME_OF_DAY((11 + iParam0->f_24), iParam0->f_20, 0);
	bVar3 = MAKE_TIME_OF_DAY((14 + iParam0->f_24), iParam0->f_20, 0);
	bVar4 = MAKE_TIME_OF_DAY((18 + iParam0->f_24), iParam0->f_20, 0);
	bVar5 = MAKE_TIME_OF_DAY((22 + iParam0->f_24), iParam0->f_20, 0);
	bVar6 = GET_TIME_OF_DAY();
	if (TIME_IS_IN_RANGE(bVar6, bVar0, bVar1))
	{
		return 1;
	}
	if (TIME_IS_IN_RANGE(bVar6, bVar1, bVar2))
	{
		return 2;
	}
	if (TIME_IS_IN_RANGE(bVar6, bVar2, bVar3))
	{
		return 4;
	}
	if (TIME_IS_IN_RANGE(bVar6, bVar3, bVar4))
	{
		return 8;
	}
	if (TIME_IS_IN_RANGE(bVar6, bVar4, bVar5))
	{
		return 16;
	}
	if (TIME_IS_IN_RANGE(bVar6, bVar5, bVar0))
	{
		return 32;
	}
	return 32;
}

var Function_212(bool bParam0) //Position: 0xB598 / 46488
{
	int iVar0;
	int iVar1;
	
	STRING_CLEAR_TOKENIZER();
	iVar1 = SET_OWNERSHIP_STRAGGLER(bParam0, ",");
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

bool Function_213(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0xB5C6 / 46534
{
	vector3 vVar0;
	vector3 vVar3;
	
	*uParam3 = 0;
	if (IS_OBJECT_VALID(bParam1))
	{
		if (GET_OBJECT_TYPE(bParam1) == 12)
		{
			GET_OBJECT_POSITION(bParam1, &vVar0);
			GET_POSITION(bParam0, &vVar3);
			if (IS_POINT_IN_AMBIENT_MOVE_RESTRICTION_VOLUME(&vVar0))
			{
				*uParam3 = 1;
				return 0;
			}
			if (VDIST(vVar0, vVar3) < 8.0f)
			{
				if (GET_TASK_STATUS(bParam0, 1) == 2)
				{
					TASK_PRIORITY_SET(bParam0, 2);
					TASK_GO_TO_COORD(bParam0, &vVar0, 1);
				}
			}
			else
			{
				TASK_PRIORITY_SET(bParam0, 2);
				TASK_USE_GRINGO(bParam0, GET_GRINGO_FROM_OBJECT(bParam1), bParam2, 1, 1);
				return 1;
			}
		}
	}
	return 0;
}

bool Function_214(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xB64B / 46667
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam1))
	{
		if (GET_OBJECT_TYPE(bParam1) == 12)
		{
			if (Function_206(bParam1))
			{
				if (!GRINGO_ACTOR_CAN_USE(GET_GRINGO_FROM_OBJECT(bParam1), bParam2, bParam0))
				{
					if (bParam3)
					{
						PRINTSTRING("Gen_Brain: GB_CAN_USE_GRINGO: This gringo cannot be used by me!");
						PRINTNL();
					}
					return 0;
				}
			}
			bVar0 = GET_ACTOR_FROM_OBJECT(GRINGO_GET_TASKED_USER_EXTERNAL(GET_GRINGO_FROM_OBJECT(bParam1), bParam2));
			if (IS_ACTOR_VALID(bVar0))
			{
				if (bVar0 == bParam0)
				{
					return 1;
				}
				if (bParam3)
				{
					PRINTSTRING("Gen_Brain: GB_CAN_USE_GRINGO: This gringo has a valid TASKED_USER_EXTERNAL that is not me!");
					PRINTNL();
				}
			}
			else
			{
				bVar0 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(GET_GRINGO_FROM_OBJECT(bParam1), bParam2));
				if (IS_ACTOR_VALID(bVar0))
				{
					if (bVar0 == bParam0)
					{
						return 1;
					}
					if (bParam3)
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
		if (bParam3)
		{
			PRINTSTRING("Gen_Brain: GB_CAN_USE_GRINGO: Object passed is not a GRINGO!");
			PRINTNL();
		}
	}
	else if (bParam3)
	{
		PRINTSTRING("Gen_Brain: GB_CAN_USE_GRINGO: Invalid OBJECT passed!");
		PRINTNL();
	}
	return 0;
}

void Function_215(bool bParam0) //Position: 0xB885 / 47237
{
	if (IS_ACTOR_RIDING(*bParam0))
	{
		Function_216(*bParam0);
		MEMORY_PREFER_WALKING(*bParam0, 0);
		ACTOR_DISMOUNT_NOW(*bParam0);
	}
	return;
}

void Function_216(bool bParam0) //Position: 0xB8A7 / 47271
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Called ACTOR_NO_LONGER_REQUIRES_HORSE_ALWAYS with invalid actor");
		return;
	}
	CLEAR_ACTORS_HORSE(bParam0);
	if (IS_OBJECTSET_VALID(Global_16515))
	{
		if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16515))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16515);
		}
	}
	return;
}

bool Function_217(int iParam0) //Position: 0xB923 / 47395
{
	bool bVar0;
	var uVar1;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ScriptStructure", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		return GET_GRINGO_BOOL_ATTR("minigame_guy", bVar0, &uVar1);
	}
	return 0;
}

void Function_218(int iParam0, bool bParam1, bool bParam2) //Position: 0xB968 / 47464
{
	if (Function_192(iParam0))
	{
		PRINTSTRING("Pers Char: ");
		PRINTSTRING(GET_OBJECT_NAME(Function_194()));
		PRINTSTRING(" - ");
		PRINTSTRING("Module Name: ");
		PRINTSTRING(bParam1);
		PRINTSTRING(" - ");
		PRINTSTRING(bParam2);
		PRINTNL();
	}
	return;
}

bool Function_219(bool bParam0) //Position: 0xB9C2 / 47554
{
	if (!StackVal != Function_229(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam0->f_16, *bParam0))
	{
		return 1;
	}
	return 0;
}

void Function_220(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0xB9DC / 47580
{
	vector3 vVar0;
	var uVar3;
	float fVar6;
	vector3 vVar7;
	
	vVar0 = { StackVal, StackVal, vParam0 };
	if (IS_ACTOR_VALID(bParam3))
	{
		if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam3, 1065353216, 1117126656, 1, 1, 0))
		{
			fVar6 = GET_ACTOR_HEIGHT(bParam3);
			fVar6 = (fVar6 / 2.0f);
			vParam0.f_4 = (vParam0.y + fVar6);
			if (STREAMING_ARE_BOUNDS_LOADED(vParam0, 25.0f))
			{
				FIND_GROUND_INTERSECTION(&vParam0, 25.0f, &vVar0, &uVar3);
			}
			else
			{
				vVar0 = { StackVal, StackVal, vParam0 };
			}
			if (!Function_33(StackVal, StackVal, vVar0))
			{
				vVar7 = { StackVal, StackVal, vVar0 };
			}
			else
			{
				vVar7 = { StackVal, StackVal, vParam0 };
			}
			LOG_WARNING("GB_SET_PERS_CHAR_POSITION: calling WOULD_ACTOR_BE_VISIBLE");
			if (!WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(bParam3), &vVar7, 3212836864))
			{
				LOG_WARNING("GB_SET_PERS_CHAR_POSITION: called WOULD_ACTOR_BE_VISIBLE and succeded");
				SET_OBJECT_POSITION(bParam4, vVar7);
			}
		}
	}
	else
	{
		SET_OBJECT_POSITION(bParam4, vVar0);
	}
}

void Function_221(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0xBB20 / 47904
{
	vector3 vVar0;
	var uVar3;
	float fVar6;
	
	vVar0 = { StackVal, StackVal, vParam0 };
	if (IS_ACTOR_VALID(bParam3))
	{
		if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam3, 1065353216, 1117126656, 1, 1, 0))
		{
			fVar6 = GET_ACTOR_HEIGHT(bParam3);
			fVar6 = (fVar6 / 2.0f);
			vParam0.f_4 = (vParam0.y + fVar6);
			if (STREAMING_ARE_BOUNDS_LOADED(vParam0, 25.0f))
			{
				FIND_GROUND_INTERSECTION(&vParam0, 25.0f, &vVar0, &uVar3);
			}
			else
			{
				vVar0 = { StackVal, StackVal, vParam0 };
			}
			LOG_WARNING("GB_TELEPORT: calling WOULD_ACTOR_BE_VISIBLE");
			if (!WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(bParam3), &vVar0, 3212836864))
			{
				LOG_WARNING("GB_TELEPORT: called WOULD_ACTOR_BE_VISIBLE and succeded");
				TELEPORT_ACTOR(bParam3, &vVar0, 1, 1, 1);
			}
		}
	}
	else
	{
		SET_OBJECT_POSITION(bParam4, vVar0);
	}
}

bool Function_222(vector3 vParam0, vector3 vParam3) //Position: 0xBC2A / 48170
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_223(vector3 vParam0, var uParam3, float fParam4) //Position: 0xBC57 / 48215
{
	var uVar0;
	var uVar3;
	
	if (fParam4 >= 0.0f)
	{
		fParam4 = -1.0f;
	}
	Function_224(StackVal, StackVal, vParam0, uParam3, &uVar0, &uVar3);
	TASK_PRIORITY_SET(Function_252(), 3);
	TASK_WANDER_IN_BOX(Function_252(), &uVar0, &uVar3, fParam4);
}

void Function_224(vector3 vParam0) //Position: 0xBC89 / 48265
{
	if (fParam3 >= 0.0f)
	{
		fParam3 = 1.0f;
	}
	uParam4->f_8 = (vParam0.z - (fParam3 * 0.707f));
	uParam4->f_4 = (vParam0.y - 100.0f);
	*uParam4 = (vParam0.x - (fParam3 * 0.707f));
	uParam5->f_8 = (vParam0.z + (fParam3 * 0.707f));
	uParam5->f_4 = (vParam0.y + 100.0f);
	*uParam5 = (vParam0.x + (fParam3 * 0.707f));
}

var Function_225(int iParam0, var uParam1, int iParam2) //Position: 0xBCF5 / 48373
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	iVar0 = Function_211(iParam0);
	switch (iVar0)
	{
		case 0x00000001:
			bVar7 = "Dawn_Tasks";
			break;
		
		case 0x00000002:
			bVar7 = "Morning_Tasks";
			break;
		
		case 0x00000004:
			bVar7 = "LunchTime_Tasks";
			break;
		
		case 0x00000008:
			bVar7 = "Afternoon_Tasks";
			break;
		
		case 0x00000010:
			bVar7 = "Evening_Tasks";
			break;
		
		case 0x00000020:
			bVar7 = "Night_Tasks";
			break;
		
		default:
			if (Function_192(iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_SCHEDULED_TASK_FROM_XML invalid time of day returned by GB_GET_MY_TIME_OF_DAY");
				PRINTNL();
			}
			break;
	}
	bVar4 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "TimeOfDay_Tasks", false);
	bVar5 = GRINGO_GET_FIRST_NAMED_CHILD(bVar7, 0, bVar4);
	iVar2 = GRINGO_GET_ATTRIBUTE_COUNT(bVar5);
	if (iVar2 < 1 && iParam2)
	{
		bVar9 = RAND_INT_RANGE(false, 1000);
		bVar1 = (bVar9 % iVar2);
	}
	if (*uParam1 < 0 && *uParam1 > iVar2)
	{
		bVar1 = *uParam1;
	}
	else
	{
		bVar1 = true;
		*uParam1 = bVar1;
	}
	while (bVar1 <= iVar2)
	{
		uVar6 = GRINGO_GET_ATTRIBUTE(bVar5, bVar1);
		bVar8 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar6, &uVar3);
		if (IS_STRING_VALID(bVar8))
		{
			return bVar8;
		}
		bVar1++;
	}
	return "NHIL";
}

var Function_226(int iParam0) //Position: 0xBEBC / 48828
{
	struct<73> Var0;
	
	iVar20 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ScriptStructure", false);
	GET_GRINGO_STRUCT_ATTR(&Var0, 20, "Vectors_and_LayoutRef_Struct", iVar20);
	return Var0.f_72;
}

var Function_227(int iParam0) //Position: 0xBF0B / 48907
{
	int iVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	bool bVar5;
	
	iVar0 = Function_211(iParam0);
	switch (iVar0)
	{
		case 0x00000001:
			bVar5 = "Dawn_Tasks";
			break;
		
		case 0x00000002:
			bVar5 = "Morning_Tasks";
			break;
		
		case 0x00000004:
			bVar5 = "LunchTime_Tasks";
			break;
		
		case 0x00000008:
			bVar5 = "Afternoon_Tasks";
			break;
		
		case 0x00000010:
			bVar5 = "Evening_Tasks";
			break;
		
		case 0x00000020:
			bVar5 = "Night_Tasks";
			break;
		
		default:
			if (Function_192(iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_SCHEDULED_SCAN_AREA_SIZE_FROM_XML invalid time of day returned by GB_GET_MY_TIME_OF_DAY");
				PRINTNL();
			}
			break;
	}
	bVar2 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "TimeOfDay_Tasks", false);
	bVar3 = GRINGO_GET_FIRST_NAMED_CHILD(bVar5, 0, bVar2);
	uVar4 = GRINGO_GET_ATTRIBUTE(bVar3, false);
	return GRINGO_GET_FLOAT_ATTR_BY_HANDLE(uVar4, &uVar1);
}

vector3 Function_228(int iParam0, bool bParam1) //Position: 0xC0B0 / 49328
{
	vector3 vVar0;
	int iVar20;
	vector3 vVar21;
	
	iVar20 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ScriptStructure", false);
	GET_GRINGO_STRUCT_ATTR(&vVar0, 20, "Vectors_and_LayoutRef_Struct", iVar20);
	if (bParam1 == 4294967295)
	{
		LOG_ERROR("GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT: Called with an invalid Index, defaulting to 0 (Dawn)");
		bParam1 = false;
	}
	switch (bParam1)
	{
		case 0x00000000:
			vVar21 = { StackVal, StackVal, vVar0 };
			break;
		
		case 0x00000001:
			vVar21 = { StackVal, StackVal, *(&vVar0 + 12) };
			break;
		
		case 0x00000002:
			vVar21 = { StackVal, StackVal, *(&vVar0 + 24) };
			break;
		
		case 0x00000003:
			vVar21 = { StackVal, StackVal, *(&vVar0 + 36) };
			break;
		
		case 0x00000004:
			vVar21 = { StackVal, StackVal, *(&vVar0 + 48) };
			break;
		
		case 0x00000005:
			vVar21 = { StackVal, StackVal, *(&vVar0 + 60) };
			break;
	}
	if (Function_222(StackVal, StackVal, vVar21, 0.0f, 0.0f, 0.0f))
	{
		if (Function_192(iParam0))
		{
			PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT vector is null for time of day index: ");
			PRINTINT(bParam1);
			PRINTNL();
		}
		if (IS_ACTOR_VALID(Function_252()))
		{
			GET_POSITION(Function_252(), &vVar21);
			if (Function_192(iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT returning actor position instead of struct vector");
				PRINTNL();
			}
		}
		else if (IS_PERS_CHAR_VALID(Function_254()))
		{
			GET_OBJECT_POSITION(Function_194(), &vVar21);
			if (Function_192(iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT returning pers char position instead of struct vector");
				PRINTNL();
			}
		}
	}
	return StackVal, StackVal, vVar21;
}

int Function_229(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, int iParam15) //Position: 0xC376 / 50038
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

var Function_230() //Position: 0xC443 / 50243
{
	return StackVal;
}

void Function_231(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xC44E / 50254
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_233(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_232(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_232(char* cParam0, int iParam1) //Position: 0xC4BA / 50362
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

bool Function_233(bool bParam0, var uParam1, int iParam2) //Position: 0xC4F1 / 50417
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
		if (Function_235(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_234(uVar0))
		{
			case 0x00000002:
				if (!Function_236(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_234(char* cParam0) //Position: 0xC569 / 50537
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

int Function_235(int iParam0) //Position: 0xC60A / 50698
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

bool Function_236(var uParam0, int iParam1) //Position: 0xC647 / 50759
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_237(int iParam0) //Position: 0xC65A / 50778
{
	if (IS_BLIP_VALID(iParam0->f_32))
	{
		REMOVE_BLIP(iParam0->f_32);
		return !IS_BLIP_VALID(iParam0->f_32);
	}
	return 1;
}

int Function_238(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC67E / 50814
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	
	if (!IS_BLIP_VALID(bParam0->f_32))
	{
		if (IS_VOLUME_VALID(bParam2))
		{
			if ((!Global_3380 && !Global_3392) && !Global_3384)
			{
				bVar0 = Function_244(bParam1);
				bParam0->f_32 = ADD_BLIP_FOR_OBJECT(bParam2, bVar0, 0.0f, 2, 0);
				SET_BLIP_MAX_DISTANCE(bParam0->f_32, 1.25f);
				UNK_0x1E98AFEC(bParam0->f_32, 1);
				GET_VOLUME_CENTER(bParam2, &vVar1);
				iVar4 = 12;
				if (bVar0 == 399)
				{
					iVar4 = 13;
				}
				else if (bVar0 == 398)
				{
					iVar4 = 14;
				}
				else if (bVar0 == 520)
				{
					iVar4 = 15;
				}
				Function_239(StackVal, StackVal, Global_29006, iVar4, vVar1, 30);
				return IS_BLIP_VALID(bParam0->f_32);
			}
		}
	}
	if ((Global_3380 || Global_3392) || Global_3384)
	{
		REMOVE_BLIP(bParam0->f_32);
		return !IS_BLIP_VALID(bParam0->f_32);
	}
	return 0;
}

int Function_239(int iParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0xC73F / 51007
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!Function_160(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_33(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_243(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_242(StackVal, StackVal, vParam2);
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal != iParam1 && Global_8723[iVar04] != iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	else
	{
		Function_241(uVar3);
		vVar7 = { StackVal, StackVal, Function_241(uVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_241(StackVal);
				vVar4 = { StackVal, StackVal, Function_241(StackVal) };
				if (Function_222(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
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
		Global_8723[iVar14].f_4 = iParam1;
		Global_8723[iVar14].f_8 = uVar3;
		Global_8723[iVar14].f_12 = iParam5;
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_240(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0.5f);
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_CHANCE");
		}
		else if (iParam1 == 11)
		{
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_HORSEBREAKING");
		}
		else if (iParam1 == 24)
		{
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_CHANCE");
		}
		UNK_0xFF3DB575(Global_9724[iVar1], 1);
		SET_BLIP_PRIORITY(Global_9724[iVar1], 1);
		return iVar1;
	}
	return 0;
}

int Function_240(int iParam0) //Position: 0xC922 / 51490
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

vector3 Function_241(bool bParam0) //Position: 0xCA59 / 51801
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = (bParam0 && 32767);
	bVar4 = (SHIFT_RIGHT(bParam0, 15) && 32767);
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if ((bParam0 && 1073741824) == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((bParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_242(vector3 vParam0) //Position: 0xCAB0 / 51888
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

int Function_243(int iParam0) //Position: 0xCAFE / 51966
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

int Function_244(int iParam0) //Position: 0xCBB6 / 52150
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	if (IS_GRINGO_COMPONENT_VALID(StackVal))
	{
		bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "Settings", false);
		if (IS_GRINGO_COMPONENT_VALID(bVar0))
		{
			if (GET_GRINGO_INT_ATTR(&uVar1, "blipID", bVar0))
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

int Function_245(bool bParam0) //Position: 0xCC06 / 52230
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("SK_SHOP_GET_ACTIVE_OVERRIDE: Actor not valid for SK_SHOP_GET_ACTIVE_WHEN_STOLEN, quitting.");
		return 0;
	}
	return DECOR_CHECK_EXIST(bParam0, "ACTIVE_WHEN_STOLEN");
}

bool Function_246() //Position: 0xCC91 / 52369
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_247(bool bParam0) //Position: 0xCCA6 / 52390
{
	return DECOR_CHECK_EXIST(bParam0, "OUT_OF_STOCK");
}

bool Function_248(int iParam0) //Position: 0xCCC0 / 52416
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

int Function_249(bool bParam0) //Position: 0xCCDC / 52444
{
	if (IS_VOLUME_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(Global_34573))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_250(bool bParam0, bool bParam1) //Position: 0xCD01 / 52481
{
	if (IS_VOLUME_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (IS_ACTOR_IN_VOLUME(bParam1, bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool Function_251(bool bParam0) //Position: 0xCD24 / 52516
{
	bool bVar0;
	var uVar1;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ScriptStructure", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		return GET_GRINGO_BOOL_ATTR("stolen_flag", bVar0, &uVar1);
	}
	return 0;
}

bool Function_252() //Position: 0xCD68 / 52584
{
	return GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF())));
}

void Function_253(int iParam0, int iParam1) //Position: 0xCD7A / 52602
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	
	if (Function_192(iParam1))
	{
		if (IS_ACTOR_VALID(Function_252()))
		{
			if (iParam0 == 0)
			{
				*iParam1 = 0;
			}
			else
			{
				*iParam1 = 0;
			}
			GET_POSITION(Function_252(), &vVar0);
		}
		else
		{
			GET_OBJECT_POSITION(Function_194(), &vVar0);
		}
		SET_DEBUG_DRAW(1);
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar3);
		Function_228(StackVal, Function_229(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam1, *iParam1));
		vVar0 = { StackVal, StackVal, Function_228(StackVal, Function_229(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam1, *iParam1)) };
		uVar6 = Function_227(iParam1);
		vVar3 = { StackVal, StackVal, vVar0 };
		vVar3.f_4 = (vVar3.y + 2.0f);
		vVar3.f_4 = (vVar3.y - 0.5f);
		vVar0 = { StackVal, StackVal, vVar3 };
		vVar0.x = (vVar0.x - 0.5f);
		vVar3.x = (vVar3.x + 0.5f);
	}
	return;
}

var Function_254() //Position: 0xCE17 / 52759
{
	return GET_PERS_CHAR_FROM_OBJECT(GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF()));
}

int Function_255(bool bParam0) //Position: 0xCE26 / 52774
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ShopSettings", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar1))
	{
		if (GET_GRINGO_INT_ATTR(&bVar0, "ShopType", bVar1))
		{
			return bVar0;
		}
		Function_218(bParam0, "SK_GET_SHOP_TYPE", "Missing or invalid ShopType");
	}
	else
	{
		LOG_ERROR("SK_GET_SHOP_TYPE: Missing ShopSettings in shop xml");
	}
	return 4294967295;
}

bool Function_256(int iParam0) //Position: 0xCEDA / 52954
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ShopSettings", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar1))
	{
		if (GET_GRINGO_OBJECT_REF_ATTR(&bVar0, "ShopVolumeRef", bVar1))
		{
			if (IS_OBJECT_VALID(bVar0))
			{
				return GET_VOLUME_FROM_OBJECT(bVar0);
			}
		}
		Function_218(iParam0, "SK_GET_SHOP_VOLUME", "Missing or invalid ShopVolumeRef");
	}
	else
	{
		LOG_ERROR("SK_GET_SHOP_VOLUME: Missing ShopSettings in shop xml");
	}
	return "";
}

var Function_257(bool bParam0) //Position: 0xCFA8 / 53160
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = 20.0f;
	bVar1 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ShopSettings", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar1))
	{
		if (GET_GRINGO_FLOAT_ATTR(&bVar0, "ClosingTime(00:00-23:00)", bVar1))
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
			Function_203(bParam0, "SK_GET_CLOSING_TIME: Missing ClosingTime(00:00-23:00) Attribute in shop");
		}
	}
	else
	{
		LOG_ERROR("SK_GET_CLOSING_TIME: Missing ShopSettings in shop");
	}
	bVar2 = FLOOR(bVar0);
	bVar3 = FLOOR(((bVar0 - TO_FLOAT(bVar2)) * 100.0f));
	return MAKE_TIME_OF_DAY(bVar2, bVar3, 0);
}

var Function_258(int iParam0) //Position: 0xD129 / 53545
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = 8.0f;
	bVar1 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ShopSettings", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar1))
	{
		if (GET_GRINGO_FLOAT_ATTR(&bVar0, "OpeningTime(00:00-23:00)", bVar1))
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
			Function_203(iParam0, "SK_GET_OPENING_TIME: Missing OpeningTime(00:00-23:00) Attribute in shop");
		}
	}
	else
	{
		LOG_ERROR("SK_GET_OPENING_TIME: Missing ShopSettings in shop");
	}
	bVar2 = FLOOR(bVar0);
	bVar3 = FLOOR(((bVar0 - TO_FLOAT(bVar2)) * 100.0f));
	return MAKE_TIME_OF_DAY(bVar2, bVar3, 0);
}

void Function_259(var uParam0) //Position: 0xD2AA / 53930
{
	Function_13(uParam0, 0.0f);
	return;
}

