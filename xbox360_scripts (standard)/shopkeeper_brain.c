//Decompiled with MagicRDR v1.0
//Function Count : 221
//Statics Count : 1
//Natives Count : 366
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
	Function_220(&uVar46);
	Var2 = false;
	Var2.f_4 = bScriptParam_0;
	iVar50 = 0;
	Var2.f_24 = 0;
	Var2.f_20 = 0;
	bVar68 = false;
	bVar69 = false;
	bVar70 = Function_219(&Var2);
	bVar71 = Function_218(&Var2);
	bVar72 = Function_217(&Var2);
	iVar73 = Function_216(&Var2);
	bVar75 = Function_215();
	if (IS_PERS_CHAR_VALID(bVar75))
	{
		SET_PERS_CHAR_SAFE_ZONE(bVar75, 150.0f);
	}
	while (IS_GRINGO_ACTIVE())
	{
		if (IS_PERS_CHAR_VALID(bVar75))
		{
			Function_214(iVar50, &Var2);
			if (IS_PERS_CHAR_ALIVE(bVar75))
			{
				if (!IS_ACTOR_VALID(bVar74))
				{
					ACTIVATE_ACTOR_FOR_PERS_CHAR(bVar75);
					bVar74 = Function_213();
					if (IS_ACTOR_VALID(bVar74))
					{
						SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar74, 0.0f);
					}
				}
				if (!IS_VOLUME_VALID(bVar72))
				{
					bVar72 = Function_217(&Var2);
				}
				bVar58 = Function_212(&Var2);
				bVar54 = Function_211(bVar72, bVar74);
				bVar63 = Function_210(bVar72);
				if (bVar63 && bVar54)
				{
					bVar52 = true;
				}
				else
				{
					bVar76 = GET_TIME_OF_DAY();
					bVar52 = TIME_IS_IN_RANGE(bVar76, bVar70, bVar71);
				}
				bVar51 = Function_209(9);
				bVar53 = Function_208(bVar75);
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
							MEMORY_REPORT_POSITION_AUTO(bVar74, Global_34573, true);
							AI_GOAL_LOOK_AT_ACTOR_NEW(bVar74, Global_34573, -1f, 0);
						}
					}
					else if (bVar62)
					{
						MEMORY_REPORT_POSITION_AUTO(bVar74, Global_34573, false);
						AI_GOAL_LOOK_CLEAR(bVar74);
						bVar62 = false;
					}
					bVar65 = IS_ACTOR_HOGTIED(bVar74);
					bVar55 = UNK_0x7A207FFE(bVar74);
					bVar56 = ((!IS_AI_ACTOR_UNALERTED(bVar74) || IS_AI_ACTOR_IN_COMBAT(bVar74)) || AI_GET_IS_RETREATING(bVar74));
					bVar61 = (IS_ACTOR_HANDSUP(bVar74) || WAS_AI_ACTOR_PLAYER_WEAPON_THREATENED_BY(bVar74, Function_207(), 3.0f));
					bVar57 = IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(Global_34573));
					if (bVar58)
					{
						bVar59 = Function_206(bVar74);
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
					Function_199(&Var18, &Var2, bVar72);
				}
				else if (((((((bVar51 && bVar52) && bVar54) && !Global_3403) && !bVar53) && !bVar65) && !bVar56) && !bVar61)
				{
					Function_199(&Var18, &Var2, bVar72);
				}
				else
				{
					Function_198(&Var18);
				}
				if (iVar73 != 2 && !Function_197(Global_76849, 2))
				{
					Function_192(Function_207(), 2, 4, 0);
				}
				if (bVar58)
				{
					if (!Var18.f_12)
					{
						if (!iVar50 != 21 && !bVar59)
						{
							Function_198(&Var18);
						}
						iVar50 = 21;
						Function_165(&iVar50, &Var2, 1);
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
								if (Function_163(&Var2, &Var18, &bVar78))
								{
									GRINGO_SET_REQUEST_STRING(Function_162(&Var2));
									bVar77 = true;
								}
								break;
							
							case 0x00000001:
								if (Function_163(&Var2, &Var18, &bVar78))
								{
									GRINGO_SET_REQUEST_STRING(Function_162(&Var2));
									bVar77 = true;
									if (bVar78)
									{
										Function_161(&Var18, &Var2, &iVar50);
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
					Var18.f_12 = Function_26(&iVar50, &Var18, &Var2, &Var30, iVar0);
					if (!Var18.f_12)
					{
						Function_15(&Var18, &Var30);
						Function_7(&Var18, &Var2, &iVar50, &uVar27);
					}
				}
				else
				{
					if (!Function_165(&iVar50, &Var2, 1))
					{
						iVar50 = 20;
					}
					if (bVar52)
					{
						if (IS_ACTOR_VALID(bVar74))
						{
							if (!AI_HAS_ACTOR_THREATENED_RECENTLY(Function_207()))
							{
								if (!IS_ANY_SPEECH_PLAYING(bVar74))
								{
									if (Var30.f_56)
									{
										SAY_SINGLE_LINE_CONTEXT(bVar74, 88, Function_207(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
										bVar49 = RAND_FLOAT_RANGE(15.0f, 45.0f);
										Var30.f_56 = 0;
									}
									else if (Function_2(&uVar46, bVar49))
									{
										bVar49 = RAND_FLOAT_RANGE(15.0f, 45.0f);
										Function_220(&uVar46);
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
					Function_15(&Var18, &Var30);
					Function_7(&Var18, &Var2, &iVar50, &uVar27);
					Var18.f_12 = 0;
				}
				Function_198(&Var18);
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
				if (!Function_197(Global_76846, 65536))
				{
					Function_192(Function_207(), 65536, 1, 0);
				}
			}
			Function_198(&Var18);
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
	Function_198(&Var18);
	if (Var18.f_12)
	{
		Function_15(&Var18, &Var30);
		Function_7(&Var18, &Var2, &iVar50, &uVar27);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x90A / 2314
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

bool Function_2(int iParam0, float fParam1) //Position: 0x955 / 2389
{
	if (Function_6(iParam0))
	{
		if (Function_3(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_3(int iParam0) //Position: 0x971 / 2417
{
	if (Function_6(iParam0))
	{
		if (Function_4(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_4(int iParam0) //Position: 0xA39 / 2617
{
	return Function_5(*iParam0, 2);
}

int Function_5(var uParam0, int iParam1) //Position: 0xA46 / 2630
{
	return (uParam0 && iParam1) == 0;
}

bool Function_6(int iParam0) //Position: 0xA53 / 2643
{
	return Function_5(*iParam0, 1);
}

void Function_7(int iParam0, bool bParam1, int iParam2, var uParam3) //Position: 0xA60 / 2656
{
	void fVar0;
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
	if (IS_ACTOR_VALID(Function_213()))
	{
		if (GRINGO_OWNS_ACTOR_ANIMS(Function_213()))
		{
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(Function_213());
		}
		fVar0 = GET_CURRENT_GRINGO(Function_213());
		if (IS_GRINGO_VALID(fVar0))
		{
			GRINGO_DEACTIVATE_AND_RESET_ACTORS(fVar0);
		}
		if (!Function_212(bParam1))
		{
			TASK_PRIORITY_SET(Function_213(), 3);
		}
	}
	Function_14(iParam0);
	Function_10(iParam0);
	bVar1 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "UseCase1", 3);
	if (IS_GRINGO_COMPONENT_VALID(bVar1))
	{
		GRINGO_CLEAR_COMPONENT_USER(bVar1);
	}
	Function_9(uParam3);
	Function_8(iParam0);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	*iParam2 = 1;
	iParam0->f_12 = 0;
}

void Function_8(int iParam0) //Position: 0xB19 / 2841
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

void Function_9(int iParam0) //Position: 0xB41 / 2881
{
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		DESTROY_LAYOUT(*iParam0);
	}
	Global_3393 = 0;
	return;
}

void Function_10(int iParam0) //Position: 0xB5A / 2906
{
	if (!Function_6(iParam0))
	{
		Function_11(iParam0, 0.0f);
	}
	return;
}

void Function_11(var uParam0, float fParam1) //Position: 0xB6F / 2927
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_13(uParam0, 1);
	Function_12(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_12(int iParam0, int iParam1) //Position: 0xB90 / 2960
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0xBA3 / 2979
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_14(int iParam0) //Position: 0xBB2 / 2994
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

int Function_15(int iParam0, int iParam1) //Position: 0xBC6 / 3014
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	Global_3393 = 0;
	Global_59353 = 0;
	STREAMING_PREVENT_SNIPER_MODE(0);
	SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(Function_215(), 0);
	iParam1->f_4 = 0;
	iParam1->f_8 = 4294967295;
	Function_25();
	Function_22();
	UI_POP("ShopMenu");
	iParam1->f_24 = 0;
	bVar0 = Function_21();
	if (IS_VOLUME_VALID(bVar0))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
		DESTROY_VOLUME(bVar0);
	}
	AI_STOP_IGNORING_ACTORS();
	AI_CLEAR_DONT_HARM_ACTOR(Function_213());
	AI_CLEAR_DONT_HARM_ACTOR(iParam0->f_20);
	if (IS_ACTOR_VALID(Function_213()))
	{
		TASK_CLEAR(Function_213());
		bVar1 = _GET_OBJECT_ATTACHMENT(GET_OBJECT_FROM_ACTOR(Function_213()));
		if (IS_ATTACHMENT_VALID(bVar1))
		{
			bVar2 = GET_OBJECT_ATTACHED_TO(bVar1);
			if (IS_OBJECT_VALID(bVar2))
			{
				DESTROY_OBJECT(bVar2);
			}
		}
	}
	if (IS_ACTOR_VALID(iParam0->f_20))
	{
		bVar3 = _GET_OBJECT_ATTACHMENT(GET_OBJECT_FROM_ACTOR(iParam0->f_20));
		if (IS_ATTACHMENT_VALID(bVar3))
		{
			bVar4 = GET_OBJECT_ATTACHED_TO(bVar3);
			if (IS_OBJECT_VALID(bVar4))
			{
				DESTROY_OBJECT(bVar4);
			}
		}
	}
	Function_20();
	CAMERA_RESET(0);
	Function_19(iParam1, iParam0->f_20, Function_213());
	Function_18();
	if (HUD_IS_FADED())
	{
		if (!IS_GAME_RESETTING())
		{
			HUD_FADE_IN(0,5f, 1065353216);
		}
	}
	if (!Function_17())
	{
		LOG_ERROR("SK_SHOP_CLEANUP: Failed SK_COUNTER_CAMERA_CLEANUP - this is an exceedingly bad thing!");
		return 0;
	}
	DESTROY_LAYOUT(Function_16());
	return 1;
}

var Function_16() //Position: 0xD31 / 3377
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("shop_layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("shop_layout");
	}
	return bVar0;
}

bool Function_17() //Position: 0xD68 / 3432
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

void Function_18() //Position: 0xD90 / 3472
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_PLAYER_CONTROL(GET_PLAYER_PADINDEX(Global_34573), 1, 0, 0);
	}
	return;
}

void Function_19(var uParam0, bool bParam1, bool bParam2) //Position: 0xDAB / 3499
{
	if (IS_ACTOR_VALID(bParam1))
	{
		RESET_ANIM_SET_FOR_ACTOR(bParam1, false);
		if (!Global_3380)
		{
			SET_ACTOR_CAN_PLAY_GESTURES(bParam1, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(bParam1, true);
		}
	}
	if (IS_ACTOR_VALID(bParam2))
	{
		RESET_ANIM_SET_FOR_ACTOR(bParam2, false);
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

void Function_20() //Position: 0xE13 / 3603
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
		vVar0.f_4 = (vVar0.y + 0,5f);
		CLEAR_AMBIENT_OBJECTS_SPHERE(vVar0, 1,5f, 4294967295);
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

var Function_21() //Position: 0xF36 / 3894
{
	return GET_VOLUME_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Function_16(), "shop_volume"));
}

void Function_22() //Position: 0xF53 / 3923
{
	bool bVar0;
	
	if (Function_24())
	{
		STREAMING_EVICT_PROP(GET_ASSET_ID("p_inv_TreasureMoneyStack01x", 0));
	}
	bVar0 = Function_23();
	if (IS_OBJECT_VALID(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	return;
}

var Function_23() //Position: 0xF96 / 3990
{
	return FIND_OBJECT_IN_LAYOUT(Function_16(), "shop_moneybag");
}

bool Function_24() //Position: 0xFB2 / 4018
{
	return STREAMING_IS_PROP_LOADED(GET_ASSET_ID("p_inv_TreasureMoneyStack01x", 0));
}

void Function_25() //Position: 0xFDD / 4061
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_26(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xFF2 / 4082
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar2 = Function_213();
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
	Function_160(iParam3);
	switch (*uParam0)
	{
		case 0x0000001C:
			Function_159();
			Function_158(iParam3);
			Function_157(iParam3);
			*uParam0 = 29;
			break;
		
		case 0x0000001D:
			if (iParam3->f_12)
			{
				if (HAS_ANIM_SET_LOADED("store") && HAS_ACTION_TREE_LOADED("custom/store"))
				{
					MAKE_ACTOR_READY_FOR_ACTION(bVar2, 0);
					if (Function_145(iParam1, bParam2, iParam3))
					{
						if (!Global_3380)
						{
							SHOP_SET_CURRENT_TAB(0);
						}
						Function_144();
						if (SHOP_IS_SELL_SELECTED())
						{
							Function_138(iParam1, bParam2);
						}
						else
						{
							Function_134(bParam2);
						}
						Function_14(iParam1);
						Function_10(iParam1);
						Function_133(iParam3, iParam1->f_20, bVar2);
						Function_132(bVar2);
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
			if (Function_133(iParam3, iParam1->f_20, bVar2))
			{
				Function_132(Global_34573);
				Function_132(bVar2);
				if (Function_24())
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
							iVar1 = Function_131();
						}
						else
						{
							iVar1 = Function_130(bParam2);
						}
						Function_115(bParam2, bVar0, iVar1, bParam4);
						SHOP_REFRESH(1);
						if (!Function_114())
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
						SAY_SINGLE_LINE_CONTEXT(Function_207(), 65, bVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
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
			if (Function_3(iParam1) < 10.0f)
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
				Function_113(iParam3);
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
				SAY_SINGLE_LINE_CONTEXT(bVar2, 69, Function_207(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			if (Function_112(iParam3) == 1)
			{
				EVENT_TRAP_CLEAR_EVENTS(Global_59349.f_12);
				Function_14(iParam1);
				Function_10(iParam1);
				*uParam0 = 53;
				return 1;
			}
			if (Function_111())
			{
				Function_22();
				if (iParam3->f_40)
				{
					SAY_SINGLE_LINE_CONTEXT(Function_207(), 418, bVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					if (!Function_110(0, 0, 1, 1))
					{
						Function_88(1);
						Function_86(1, 0);
					}
				}
				else if (iParam3->f_44)
				{
					SAY_SINGLE_LINE_CONTEXT(Function_207(), 348, bVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					if (!Function_110(0, 0, 1, 1))
					{
						Function_88(1);
						Function_86(1, 0);
					}
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(Function_207(), 366, bVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				Function_85(Global_34573);
				Function_14(iParam1);
				Function_10(iParam1);
				*uParam0 = 60;
				return 1;
			}
			if (Function_84(iParam3))
			{
				Function_35(bParam2, iParam3);
			}
			break;
		
		case 0x0000003F:
			if (!iParam3->f_52 && !IS_ANY_SPEECH_PLAYING(Global_34573))
			{
				iParam3->f_32 = GET_CURRENT_GAME_TIME();
				iParam3->f_52 = 1;
				SAY_SINGLE_LINE_CONTEXT(bVar2, 70, Function_207(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			if (Function_111())
			{
				Function_22();
				if (iParam3->f_40)
				{
					SAY_SINGLE_LINE_CONTEXT(Function_207(), 418, bVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					if (!Function_110(0, 0, 1, 1))
					{
						Function_88(1);
						Function_86(1, 0);
					}
				}
				else if (iParam3->f_44)
				{
					SAY_SINGLE_LINE_CONTEXT(Function_207(), 348, bVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					if (!Function_110(0, 0, 1, 1))
					{
						Function_88(1);
						Function_86(1, 0);
					}
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(Function_207(), 366, bVar2, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				Function_85(Global_34573);
				Function_14(iParam1);
				Function_10(iParam1);
				*uParam0 = 60;
				return 1;
			}
			if (Function_112(iParam3) == 0)
			{
				EVENT_TRAP_CLEAR_EVENTS(Global_59349.f_12);
				Function_14(iParam1);
				Function_10(iParam1);
				*uParam0 = 53;
				return 1;
			}
			if (Function_34(iParam3))
			{
				Function_35(bParam2, iParam3);
			}
			break;
		
		case 0x0000003C:
			if (Function_3(iParam1) < 3,5f)
			{
				LOG_WARNING("GB_SHOP_SET_COUNTER_COMPLETE_SALE - leaving store");
				iParam3->f_56 = 1;
				return 0;
			}
			break;
		
		case 0x00000035:
			Function_33();
			Function_32(iParam3);
			Function_114();
			bVar0 = SHOP_IS_SELL_SELECTED();
			if (bVar0)
			{
				iParam3->f_4 = Function_27(0);
				Function_138(iParam1, bParam2);
			}
			else
			{
				Function_134(bParam2);
			}
			if (bVar0)
			{
				iVar1 = Function_131();
			}
			else
			{
				iVar1 = Function_130(bParam2);
			}
			Function_115(bParam2, bVar0, iVar1, bParam4);
			SHOP_REFRESH(1);
			if (bVar0)
			{
				SAY_SINGLE_LINE_CONTEXT(bVar2, 70, Function_207(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
				iParam3->f_32 = GET_CURRENT_GAME_TIME();
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT(bVar2, 69, Function_207(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
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

var Function_27(int iParam0) //Position: 0x17CF / 6095
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Function_131();
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
		if (Function_29(iParam0) >= 0)
		{
			iVar3 = Function_28(iParam0);
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

int Function_28(int iParam0) //Position: 0x1895 / 6293
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

int Function_29(int iParam0) //Position: 0x195F / 6495
{
	int iVar0;
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
	iVar0 = Function_31(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	iVar1 = Function_30(iVar0);
	return iVar1;
}

int Function_30(int iParam0) //Position: 0x1A38 / 6712
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

var Function_31(int iParam0) //Position: 0x1A79 / 6777
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

void Function_32(int iParam0) //Position: 0x1B3F / 6975
{
	iParam0->f_4 = 0;
	iParam0->f_8 = 4294967295;
	return;
}

int Function_33() //Position: 0x1B4F / 6991
{
	DESTROY_LAYOUT(Function_16());
	return 1;
}

bool Function_34(int iParam0) //Position: 0x1B5C / 7004
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

void Function_35(int iParam0, int iParam1) //Position: 0x1B91 / 7057
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
		if (Function_82(bVar3, bVar2, SHOP_GET_ITEM_SELL_PRICE(bVar1)))
		{
			iParam1->f_40 = 1;
			iParam1->f_44 = 0;
			SHOP_REFRESH(0);
			SAY_SINGLE_LINE_CONTEXT(Function_213(), 90, Function_207(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
			PLAY_SOUND_FRONTEND("PLACE_BET_MASTER");
			iParam1->f_32 = GET_CURRENT_GAME_TIME();
		}
	}
	else if (Function_77(iParam0, bVar3, bVar2))
	{
		iParam1->f_40 = 0;
		SAY_SINGLE_LINE_CONTEXT(Function_213(), 90, Function_207(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
		iVar4 = SHOP_GET_ITEM_PURCHASE_PRICE(bVar1);
		iVar4 = (iVar4 * bVar2);
		Function_62(iVar4, 0);
		SHOP_SET_PLAYER_BANK(Function_61());
		Function_54(iParam0, bVar3, bVar1, bVar2);
		if (iVar4 >= 0)
		{
			Function_53(Global_34573, Function_213());
			iParam1->f_44 = 1;
		}
		else
		{
			iParam1->f_44 = 0;
		}
		PLAY_SOUND_FRONTEND("PLACE_BET_MASTER");
		iParam1->f_32 = GET_CURRENT_GAME_TIME();
		if (Function_50(iParam0, bVar3))
		{
			if (!Function_48(Function_49(iParam0, bVar3)))
			{
				if (SHOP_GET_ITEM_QUANTITY(bVar1) >= 0)
				{
					SHOP_SET_ITEM_PURCHASE_PRICE(bVar1, ROUND(Function_36(iParam0, bVar3)));
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

var Function_36(int iParam0, bool bParam1) //Position: 0x1D88 / 7560
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = Function_47(iParam0, &bParam1, "PriceModifier");
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
	if (Function_46(iParam0, bParam1))
	{
		iVar3 = Function_45(iParam0, bParam1);
		bVar1 = Global_59354[iVar38];
	}
	else if (Function_44(iParam0, bParam1))
	{
		iVar4 = Function_41(iParam0, bParam1);
		bVar1 = Global_60316[iVar48];
	}
	else if (Function_50(iParam0, bParam1))
	{
		bVar5 = Function_49(iParam0, bParam1);
		bVar1 = Global_59675[bVar58];
		if (Function_48(bVar5))
		{
			bVar2 = TO_FLOAT(Function_39(bVar5));
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
	if (Function_38() < 1)
	{
		PRINTNL();
		PRINTSTRING("ITEM - low honor modifier");
		PRINTNL();
		if (Function_37())
		{
			bVar6 = 0,5f;
		}
		else
		{
			bVar6 = 1,5f;
		}
	}
	else if (Function_38() > 5)
	{
		if (!Function_37())
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

bool Function_37() //Position: 0x2038 / 8248
{
	return DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "SHOP_SET_UNLAWFUL_TOWN");
}

int Function_38() //Position: 0x2060 / 8288
{
	return Global_12976.f_152;
}

int Function_39(bool bParam0) //Position: 0x206B / 8299
{
	char* cVar0[32];
	struct<5> Var8;
	
	strcpy(&cVar0, Function_40(bParam0), 32);
	stradd(&cVar0, "_MOD_ITEM_PRICE", 32);
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), &cVar0))
	{
		DECOR_GET_VECTOR(GET_OBJECT_FROM_ACTOR(Global_34573), &cVar0, &Var8);
		return ROUND(StackVal);
	}
	return 1;
}

var Function_40(bool bParam0) //Position: 0x20B5 / 8373
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

var Function_41(int iParam0, bool bParam1) //Position: 0x21A6 / 8614
{
	char* cVar0[64];
	char* cVar16[64];
	int iVar32;
	bool bVar33;
	bool bVar34;
	
	strcpy(&cVar0, Function_42(iParam0, &bParam1, "ITEM_/AMMO_/WE_Enum"), 64);
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

var Function_42(int iParam0, int iParam1, bool bParam2) //Position: 0x222A / 8746
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar1 = Function_43(iParam0, iParam1);
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

var Function_43(int iParam0, int iParam1) //Position: 0x2381 / 9089
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = Function_130(iParam0);
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

bool Function_44(int iParam0, bool bParam1) //Position: 0x24FA / 9466
{
	bool bVar0;
	
	bVar0 = Function_42(iParam0, &bParam1, "ITEM_/AMMO_/WE_Enum");
	if (STRING_CONTAINS_STRING(bVar0, "AMMO_"))
	{
		return 1;
	}
	return 0;
}

var Function_45(int iParam0, bool bParam1) //Position: 0x2532 / 9522
{
	char* cVar0[64];
	char* cVar16[64];
	int iVar32;
	bool bVar33;
	bool bVar34;
	
	strcpy(&cVar0, Function_42(iParam0, &bParam1, "ITEM_/AMMO_/WE_Enum"), 64);
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

bool Function_46(int iParam0, bool bParam1) //Position: 0x25B2 / 9650
{
	bool bVar0;
	
	bVar0 = Function_42(iParam0, &bParam1, "ITEM_/AMMO_/WE_Enum");
	if (STRING_CONTAINS_STRING(bVar0, "WE_"))
	{
		return 1;
	}
	return 0;
}

var Function_47(int iParam0, int iParam1, bool bParam2) //Position: 0x25E8 / 9704
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = -1.0f;
	bVar0 = Function_43(iParam0, iParam1);
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

bool Function_48(bool bParam0) //Position: 0x273A / 10042
{
	char* cVar0[32];
	float fVar8;
	
	strcpy(&cVar0, Function_40(bParam0), 32);
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

bool Function_49(int iParam0, bool bParam1) //Position: 0x2789 / 10121
{
	char* cVar0[64];
	char* cVar16[64];
	int iVar32;
	int iVar33;
	
	strcpy(&cVar0, Function_42(iParam0, &bParam1, "ITEM_/AMMO_/WE_Enum"), 64);
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
		stradd(&cVar16, Function_40(iVar33), 64);
		if (STRINGS_ARE_EQUAL(&cVar16, &cVar0))
		{
			iVar32 = iVar33;
			return iVar32;
		}
		iVar33++;
	}
	return 4294967295;
}

bool Function_50(int iParam0, bool bParam1) //Position: 0x2805 / 10245
{
	bool bVar0;
	char* cVar1[24];
	int iVar7;
	
	bVar0 = Function_42(iParam0, &bParam1, "ITEM_/AMMO_/WE_Enum");
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
		if (Function_52(&cVar1) == 4294967295)
		{
			PRINTSTRING("SK_SHOP_IS_INDEXED_ITEM_ITEMENUM: Found INVALID ITEM in the Shop XML: ");
			PRINTSTRING(bVar0);
			PRINTSTRING(" - failed to look up: ");
			PRINTSTRING(&cVar1);
			PRINTNL();
			LOG_ERROR("SK_SHOP_IS_INDEXED_ITEM_ITEMENUM: Found INVALID ITEM in the Shop XML - see spew");
			Function_51(iParam0, &bParam1, "TotalAvailableQuantity", 0);
			return 0;
		}
		return 1;
	}
	return 0;
}

int Function_51(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2975 / 10613
{
	bool bVar0;
	
	bVar0 = Function_43(iParam0, iParam1);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		if (SET_GRINGO_INT_ATTR(bParam3, bParam2, bVar0))
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

int Function_52(int iParam0) //Position: 0x2AC0 / 10944
{
	return SS_GET_STRING_ID(iParam0, 1);
}

int Function_53(bool bParam0, bool bParam1) //Position: 0x2ACC / 10956
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
			bVar0 = Function_23();
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

void Function_54(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x2CE3 / 11491
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!SHOP_IS_ITEM_BLOCKED(uParam2))
	{
		iVar0 = Function_58(iParam0, bParam1);
		iVar1 = (iVar0 - iParam3);
		if (iVar1 <= 0)
		{
			iVar1 = 0;
		}
		SHOP_SET_ITEM_QUANTITY(uParam2, iVar1);
		Function_57(iParam0, bParam1, iVar1);
	}
	if (Function_50(iParam0, bParam1))
	{
		bVar2 = Function_49(iParam0, bParam1);
		if (Function_48(bVar2))
		{
			Function_55(bVar2, 1);
		}
	}
}

void Function_55(bool bParam0, int iParam1) //Position: 0x2D3F / 11583
{
	char* cVar0[32];
	vector3 vVar8;
	
	strcpy(&cVar0, Function_40(bParam0), 32);
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
			Function_56(bParam0);
		}
	}
	return;
}

void Function_56(bool bParam0) //Position: 0x2DAD / 11693
{
	char* cVar0[32];
	
	strcpy(&cVar0, Function_40(bParam0), 32);
	stradd(&cVar0, "_MOD_ITEM_PRICE", 32);
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), &cVar0))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), &cVar0);
	}
	return;
}

int Function_57(int iParam0, bool bParam1, bool bParam2) //Position: 0x2DEC / 11756
{
	return Function_51(iParam0, &bParam1, "TotalAvailableQuantity", bParam2);
}

var Function_58(int iParam0, bool bParam1) //Position: 0x2E14 / 11796
{
	int iVar0;
	var uVar1;
	
	iVar0 = Function_60(iParam0, &bParam1, "TotalAvailableQuantity");
	if (Function_50(iParam0, bParam1))
	{
		uVar1 = Function_49(iParam0, bParam1);
		if (Function_48(uVar1))
		{
			iVar0 = Function_59(uVar1);
		}
	}
	return iVar0;
}

int Function_59(bool bParam0) //Position: 0x2E60 / 11872
{
	char* cVar0[32];
	struct<9> Var8;
	
	strcpy(&cVar0, Function_40(bParam0), 32);
	stradd(&cVar0, "_MOD_ITEM_PRICE", 32);
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), &cVar0))
	{
		DECOR_GET_VECTOR(GET_OBJECT_FROM_ACTOR(Global_34573), &cVar0, &vVar8);
		return ROUND(vVar8.z);
	}
	return 0;
}

var Function_60(int iParam0, int iParam1, bool bParam2) //Position: 0x2EAA / 11946
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = 4294967295;
	bVar0 = Function_43(iParam0, iParam1);
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

int Function_61() //Position: 0x2FF6 / 12278
{
	return Function_30(0);
}

int Function_62(bool bParam0, bool bParam1) //Position: 0x3000 / 12288
{
	bool bVar0;
	
	bVar0 = Function_30(0);
	if ((Function_30(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_63(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_30(0));
	return 1;
}

bool Function_63(int iParam0, bool bParam1, bool bParam2) //Position: 0x3090 / 12432
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
	Function_76(iParam0);
	if (bParam2 && bParam1 == 0)
	{
		Function_64(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

void Function_64(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x328B / 12939
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_75(390))), 32);
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
					bVar19 = (Function_74(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_74(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_72(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_69(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_66(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_65(), &Var9);
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

int Function_65() //Position: 0x38B8 / 14520
{
	int iVar0;
	
	return iVar0;
}

var Function_66(int iParam0) //Position: 0x38C0 / 14528
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_67(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x38D1 / 14545
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_68(char* cParam0, char* cParam1) //Position: 0x39C6 / 14790
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_69(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x39DF / 14815
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_71(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_70(Function_71(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_70(int iParam0, int iParam1) //Position: 0x3A44 / 14916
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_71(int iParam0, bool bParam1) //Position: 0x3A56 / 14934
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_72(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3A68 / 14952
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
	if (((Function_73(iParam0) != 19 || Function_73(iParam0) != 17) || Function_73(iParam0) != 10) || Function_73(iParam0) != 9)
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

int Function_73(int iParam0) //Position: 0x3B98 / 15256
{
	return Global_35278[iParam020].f_48;
}

float Function_74(int iParam0) //Position: 0x3BA7 / 15271
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_75(int iParam0) //Position: 0x3BE0 / 15328
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_76(int iParam0) //Position: 0x3C1D / 15389
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

bool Function_77(int iParam0, bool bParam1, bool bParam2) //Position: 0x3DB7 / 15799
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
	
	iVar0 = Function_60(iParam0, &bParam1, "QuantityPerPurchase");
	bVar1 = (bParam2 * iVar0);
	if (Function_46(iParam0, bParam1))
	{
		bVar2 = Function_45(iParam0, bParam1);
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
				Function_80(469, 1, 0, 0);
				switch (bVar2)
				{
					case 0x0000000B:
						Function_79(6, 1);
						break;
					
					case 0x00000003:
						Function_79(6, 0);
						break;
					
					case 0x00000007:
						Function_79(6, 2);
						break;
					
					case 0x00000012:
						Function_79(6, 3);
						break;
					
					case 0x00000014:
						Function_79(6, 4);
						break;
					}
			}
			iVar3 = Function_130(iParam0);
			Function_115(iParam0, 0, iVar3, 0);
			return 1;
		}
	}
	if (Function_44(iParam0, bParam1))
	{
		bVar4 = Function_41(iParam0, bParam1);
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
	if (Function_50(iParam0, bParam1))
	{
		bVar5 = Function_49(iParam0, bParam1);
		if (!bVar5 != 4294967295)
		{
			iVar6 = 0;
			bVar7 = bVar1;
			if (bVar7 >= 0)
			{
				iVar6 = 1;
				while (iVar6 < bVar7)
				{
					ADD_ITEM(Function_40(bVar5), Global_34573, false);
					iVar6++;
				}
			}
			else
			{
				ADD_ITEM(Function_40(bVar5), Global_34573, false);
			}
			if (bVar5 == 16)
			{
				Function_78(15, 0);
			}
			return 1;
		}
	}
	bVar8 = Function_42(iParam0, &bParam1, "ITEM_/AMMO_/WE_Enum");
	PRINTSTRING("SK_SHOP_GIVE_PLAYER_ITEM_BOUGHT: Could not give item to player: ");
	PRINTSTRING(bVar8);
	PRINTNL();
	LOG_ERROR("SK_SHOP_GIVE_PLAYER_ITEM_BOUGHT: Could not give item to player!");
	return 0;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x4095 / 16533
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_40(bParam0), Function_207()) >= 0)
		{
			DELETE_ITEM(Function_40(bParam0), Function_207(), 0);
			return 1;
		}
	}
	DELETE_ITEM(Function_40(bParam0), Function_207(), 1);
	return 1;
}

void Function_79(int iParam0, bool bParam1) //Position: 0x40DC / 16604
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

int Function_80(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x4143 / 16707
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
	Function_81(iParam0, TO_FLOAT(bParam1), 1);
	Function_76(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_64(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

int Function_81(int iParam0, bool bParam1, bool bParam2) //Position: 0x4363 / 17251
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

bool Function_82(int iParam0, int iParam1, int iParam2) //Position: 0x457D / 17789
{
	int iVar0;
	
	if (Function_63(Function_31(iParam0), iParam1, 0))
	{
		iVar0 = (iParam2 * iParam1);
		if (Function_83(iVar0, 0))
		{
			SHOP_SET_PLAYER_BANK(Function_61());
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

bool Function_83(bool bParam0, bool bParam1) //Position: 0x465E / 18014
{
	bool bVar0;
	
	bVar0 = Function_30(0);
	if ((Function_30(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_80(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_30(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_80(597, bParam0, 0, 0);
	}
	if ((Function_30(597) + Function_30(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

bool Function_84(int iParam0) //Position: 0x4729 / 18217
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

int Function_85(bool bParam0) //Position: 0x475E / 18270
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

void Function_86(int iParam0, int iParam1) //Position: 0x47F8 / 18424
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = iParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_87())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_87() //Position: 0x483A / 18490
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_88(bool bParam0) //Position: 0x4843 / 18499
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_103();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_89();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_12(&Global_63095, 1);
		Function_12(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_89() //Position: 0x4894 / 18580
{
	Function_101();
	Function_100();
	Function_100();
	Function_99();
	Function_99();
	Function_98();
	Function_98();
	Function_96();
	Function_96();
	if (!Function_87())
	{
		Function_94();
		Function_93();
		Function_92();
		Function_91();
	}
	Function_90();
	return;
}

void Function_90() //Position: 0x48C7 / 18631
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

void Function_91() //Position: 0x49CD / 18893
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

void Function_92() //Position: 0x4A00 / 18944
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

void Function_93() //Position: 0x4B8E / 19342
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

void Function_94() //Position: 0x4D42 / 19778
{
	Function_95(&Global_28260, 1, 0);
	return;
}

void Function_95(int iParam0, bool bParam1, var uParam2) //Position: 0x4D50 / 19792
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
	void fVar11;
	bool bVar12;
	void fVar13;
	
	bVar0 = Function_207();
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
			fVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = fVar11;
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

struct<8> Function_96() //Position: 0x4F41 / 20289
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
				iVar2 = ((Function_30((50 + iVar4)) + Function_30((183 + iVar4))) + Function_30((90 + iVar4)));
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
	Function_97(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_97(int iParam0, bool bParam1, bool bParam2) //Position: 0x4FDC / 20444
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
		Function_81(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_76(iParam0);
	if (bParam2)
	{
		Function_64(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

struct<8> Function_98() //Position: 0x5277 / 21111
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
		iVar2 = ((Function_30((50 + iVar3) + 15) + Function_30((183 + iVar3) + 15)) + Function_30((90 + iVar3) + 15));
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
	Function_97(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_99() //Position: 0x5300 / 21248
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
			iVar2 = ((Function_30((50 + iVar3) + 8) + Function_30((183 + iVar3) + 8)) + Function_30((90 + iVar3) + 8));
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
	Function_97(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_100() //Position: 0x5397 / 21399
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
		iVar2 = ((Function_30((50 + iVar3)) + Function_30((183 + iVar3))) + Function_30((90 + iVar3)));
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
	Function_97(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_101() //Position: 0x5416 / 21526
{
	Function_102(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_97(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_102(int iParam0, bool bParam1, int iParam2) //Position: 0x543C / 21564
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
	Function_81(iParam0, bParam1, 1);
	Function_76(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_64(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_103() //Position: 0x5646 / 22086
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_105(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_105(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_104(StackVal, StackVal, vVar0))
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

bool Function_104(char* cParam0) //Position: 0x56E7 / 22247
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

vector3 Function_105(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x56FF / 22271
{
	int iVar0;
	
	iVar0 = Function_108(uParam2, uParam3);
	if (Function_107(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_13(&Global_63095, 1);
			Function_12(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_13(&Global_63095, 2);
			Function_12(&Global_63095, 1);
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
		Function_13(&Global_63095, 2);
		Function_12(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_106();
	return StackVal, StackVal, Function_106();
}

vector3 Function_106() //Position: 0x57E6 / 22502
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_107(int iParam0) //Position: 0x57EF / 22511
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_108(bool bParam0, bool bParam1) //Position: 0x5805 / 22533
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
				fVar2 = Function_109(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_109(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_107(bVar0) && !bParam1)
	{
		bVar0 = Function_108(bParam0, 1);
	}
	return bVar0;
}

float Function_109(vector3 vParam0, vector3 vParam3) //Position: 0x58CC / 22732
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_110(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x58E9 / 22761
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

bool Function_111() //Position: 0x598D / 22925
{
	if (!UI_ISACTIVE("ShopMenu"))
	{
		LOG_WARNING("SK_SHOP_IS_QUIT_SELECTED: UI went inactive - quitting");
		return 1;
	}
	return 0;
}

int Function_112(int iParam0) //Position: 0x59E3 / 23011
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

void Function_113(var uParam0) //Position: 0x5A1D / 23069
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

bool Function_114() //Position: 0x5A45 / 23109
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = FIND_OBJECT_IN_LAYOUT(Function_16(), "shop_moneybag");
	if (IS_OBJECT_VALID(bVar0))
	{
		return 1;
	}
	if (Function_24())
	{
		GET_OBJECT_NAMED_BONE_POSITION(Function_213(), "ankle_l", &vVar1);
		vVar1.x = (vVar1.x + 0,5f);
		bVar0 = CREATE_PROP_IN_LAYOUT(Function_16(), "shop_moneybag", "p_inv_TreasureMoneyStack01x", vVar1, 0.0f, 0.0f, 0.0f, 0);
		if (IS_OBJECT_VALID(bVar0))
		{
			SET_PROP_COLLIDE_WITH_OBJECT(bVar0, Function_213(), 0);
			return 1;
		}
	}
	return 0;
}

void Function_115(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x5AE5 / 23269
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (bParam3)
	{
		PRINTNL();
		PRINTSTRING("---STARTING SK_SHOP_HUD_POPULATE_ITEM_BAR---");
		PRINTNL();
	}
	SHOP_CLEAR();
	SHOP_SET_PLAYER_BANK(Function_61());
	iVar1 = 0;
	iVar2 = 0;
	while (bVar0 <= iParam2)
	{
		if (bParam1)
		{
			iVar3 = Function_29(bVar0);
			if (iVar3 >= 0)
			{
				Function_129(bVar0, &iVar1);
				Function_128(bVar0, &iVar2);
				bVar4 = ROUND(Function_126(bParam0, bVar0));
				if (bVar4 >= 4294967295)
				{
					SHOP_ADD_ITEM(iVar1, iVar2, 4294967295, 4294967295, bVar4, bVar0, 0);
				}
			}
		}
		else
		{
			Function_125(bParam0, bVar0, &iVar1);
			Function_124(bParam0, bVar0, &iVar2);
			bVar5 = SHOP_ADD_ITEM(iVar1, iVar2, Function_58(bParam0, bVar0), ROUND(Function_36(bParam0, bVar0)), 4294967295, bVar0, Function_41(bParam0, bVar0));
			if (Function_116(bParam0, bVar0))
			{
				SHOP_SET_ITEM_BLOCKED(bVar5, 1);
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

bool Function_116(int iParam0, bool bParam1) //Position: 0x5C10 / 23568
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	if (Function_46(iParam0, bParam1))
	{
		bVar0 = Function_45(iParam0, bParam1);
		if (ACTOR_HAS_WEAPON(Global_34573, bVar0))
		{
			if ((bVar0 != 24 || bVar0 != 23) || bVar0 != 25)
			{
				return 0;
			}
			return 1;
		}
		if (IS_WEAPONENUM_LOCKED(bVar0))
		{
			return !Function_123(iParam0, bParam1);
		}
		return 0;
	}
	if (Function_44(iParam0, bParam1))
	{
		bVar1 = Function_41(iParam0, bParam1);
		bVar2 = GET_WEAPONENUM_FOR_AMMOENUM(Global_34573, bVar1);
		if (IS_WEAPONENUM_LOCKED(bVar2))
		{
			return !Function_122(iParam0, bParam1);
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
	if (Function_50(iParam0, bParam1))
	{
		iVar3 = Function_49(iParam0, bParam1);
		switch (iVar3)
		{
			case 0x00000015:
				if (Function_118(&Global_30640))
				{
					return 1;
				}
				break;
			
			case 0x00000016:
				if (Function_118(&Global_30707))
				{
					return 1;
				}
				break;
			
			case 0x00000018:
				if (Function_118(&Global_30717))
				{
					return 1;
				}
				break;
			
			case 0x00000017:
				if (Function_118(&Global_30658))
				{
					return 1;
				}
				break;
			
			case 0x00000019:
				if (Function_118(&Global_30668))
				{
					return 1;
				}
				break;
			
			case 0x0000001A:
				if (Function_118(&Global_30693))
				{
					return 1;
				}
				break;
			
			case 0x0000001B:
				if (Function_118(&Global_30685))
				{
					return 1;
				}
				break;
			
			case 0x0000001C:
				if (Function_118(&Global_30679))
				{
					return 1;
				}
				break;
			
			case 0x0000001D:
				if (Function_118(&Global_30723))
				{
					return 1;
				}
				break;
		}
		return !Function_117(iParam0, bParam1);
	}
	return 0;
}

bool Function_117(int iParam0, bool bParam1) //Position: 0x5DA3 / 23971
{
	bool bVar0;
	
	bVar0 = Function_49(iParam0, bParam1);
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
		if (HAS_ITEM(Function_40(bVar0), Global_34573))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_118(int iParam0) //Position: 0x5DE9 / 24041
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (!Function_119((*iParam0)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool Function_119(int iParam0) //Position: 0x5E13 / 24083
{
	if (!Function_121(iParam0))
	{
		return 0;
	}
	return Function_120(&(Global_29008[iParam0]), 4096);
}

int Function_120(var uParam0, int iParam1) //Position: 0x5E31 / 24113
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_121(int iParam0) //Position: 0x5E4D / 24141
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_122(var uParam0, bool bParam1) //Position: 0x5E63 / 24163
{
	int iVar0;
	
	iVar0 = Function_41(uParam0, bParam1);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	return Global_60316[iVar08].f_24;
}

bool Function_123(int iParam0, bool bParam1) //Position: 0x5E83 / 24195
{
	bool bVar0;
	
	bVar0 = Function_45(iParam0, bParam1);
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

void Function_124(int iParam0, bool bParam1, int iParam2) //Position: 0x5EBA / 24250
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = true;
	if (Function_46(iParam0, bParam1))
	{
		iVar1 = Function_45(iParam0, bParam1);
		if (bVar0)
		{
			*iParam2 = StackVal;
		}
	}
	else if (Function_44(iParam0, bParam1))
	{
		iVar2 = Function_41(iParam0, bParam1);
		if (bVar0)
		{
			*iParam2 = StackVal;
		}
	}
	else if (Function_50(iParam0, bParam1))
	{
		iVar3 = Function_49(iParam0, bParam1);
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

void Function_125(var uParam0, bool bParam1, int iParam2) //Position: 0x5FF2 / 24562
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = true;
	if (Function_46(uParam0, bParam1))
	{
		iVar1 = Function_45(uParam0, bParam1);
		if (bVar0)
		{
			*iParam2 = StackVal;
		}
	}
	else if (Function_44(uParam0, bParam1))
	{
		iVar2 = Function_41(uParam0, bParam1);
		if (bVar0)
		{
			*iParam2 = StackVal;
		}
	}
	else if (Function_50(uParam0, bParam1))
	{
		iVar3 = Function_49(uParam0, bParam1);
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

var Function_126(var uParam0, int iParam1) //Position: 0x611C / 24860
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
	fVar1 = Function_127(uParam0, iParam1);
	if (fVar1 != -1.0f)
	{
		return -1.0f;
	}
	fVar2 = 1.0f;
	if (Function_38() < 1)
	{
		PRINTNL();
		PRINTSTRING("COLLECTIBLE - low honor modifier");
		PRINTNL();
		if (Function_37())
		{
			fVar2 = 1,5f;
		}
		else
		{
			fVar2 = 0,5f;
		}
	}
	else if (Function_38() <= 5 && !Function_37())
	{
		PRINTNL();
		PRINTSTRING("COLLECTIBLE - high honor modifier");
		PRINTNL();
		fVar2 = 1,5f;
	}
	iVar3 = ((fVar0 * fVar1) * fVar2);
	return iVar3;
}

var Function_127(var uParam0, int iParam1) //Position: 0x627D / 25213
{
	int iVar0;
	bool bVar1;
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
		bVar1 = false;
		while (bVar1 <= iVar0)
		{
			bVar5 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, bVar4);
			if (IS_GRINGO_COMPONENT_VALID(bVar5))
			{
				Function_129(iParam1, &iVar3);
				iVar6 = GRINGO_GET_COMPONENT_HASH(bVar5);
				if (iVar6 == iVar3)
				{
					if (GET_GRINGO_FLOAT_ATTR(&uVar2, "ValueModifier", bVar5))
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

void Function_128(int iParam0, int iParam1) //Position: 0x6309 / 25353
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

void Function_129(int iParam0, int iParam1) //Position: 0x6432 / 25650
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

var Function_130(bool bParam0) //Position: 0x6546 / 25926
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

var Function_131() //Position: 0x65BD / 26045
{
	return Global_62336 + 1;
}

int Function_132(bool bParam0) //Position: 0x65C8 / 26056
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

bool Function_133(var uParam0, bool bParam1, bool bParam2) //Position: 0x665E / 26206
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

int Function_134(bool bParam0) //Position: 0x6799 / 26521
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	bVar0 = GET_OBJECT_FROM_ACTOR(Function_213());
	bVar2 = Function_16();
	bVar3 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bVar2, "shop_cam", 1, 1);
	bVar1 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar3, 0);
	SET_CAMERASHOT_ASPECT_RATIO(bVar1, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(bVar1, 1);
	SET_CAMERASHOT_FOV(bVar1, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(bVar1, 0,1f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(bVar1, 1885.0f);
	if (Function_137(bParam0, &vVar4) && Function_136(bParam0, &vVar7))
	{
		SET_CAMERASHOT_POSITION(bVar1, vVar4);
		SET_CAMERASHOT_ORIENTATION(bVar1, vVar7, 0);
	}
	else
	{
		bVar10 = FIND_OBJECT_IN_LAYOUT(Function_16(), "camera_look_at");
		if (IS_OBJECT_VALID(bVar10))
		{
			DESTROY_OBJECT(bVar10);
		}
		GET_OBJECT_POSITION(bVar0, &vVar4);
		GET_OBJECT_ORIENTATION(bVar0, &vVar7);
		bVar10 = CREATE_POINT_IN_LAYOUT(Function_16(), "camera_look_at", vVar4, vVar7);
		ATTACH_OBJECTS(bVar1, bVar10, Function_65(), -0,75f, 1,567008f, -2,8f, 0.0f, 0.0f, 0.0f, 4294967295);
		SET_CAMERASHOT_TARGET_OBJECT(bVar1, bVar0, 0);
		SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(bVar1, -0,4f, 0,9f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	}
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(bVar3, 0, 4294967295);
	PLAY_CUTSCENEOBJECT(bVar3, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	Function_135(bVar1, bVar0);
	return 1;
}

void Function_135(bool bParam0, bool bParam1) //Position: 0x68C9 / 26825
{
	var uVar0;
	var uVar3;
	float fVar6;
	
	DOF_PUSH();
	GET_OBJECT_POSITION(bParam0, &uVar0);
	GET_OBJECT_POSITION(bParam1, &uVar3);
	fVar6 = 4.0f;
	DOF_SET(fVar6, 0,65f, GET_CAMERASHOT_FAR_CLIP_PLANE(bParam0), 0,8f);
	DOF_SET_KERNEL(1);
	return;
}

int Function_136(var uParam0, char* cParam1) //Position: 0x68FD / 26877
{
	bool bVar0;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ShopSettings", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		if (IS_DISPLAY_WIDESCREEN())
		{
			if (GET_GRINGO_VECTOR_ATTR(cParam1, "BuyCameraOverrideDirection", bVar0))
			{
				if (!Function_104(StackVal, StackVal, *cParam1))
				{
					return 1;
				}
			}
		}
		if (GET_GRINGO_VECTOR_ATTR(cParam1, "BuyCameraOverrideDirection4:3", bVar0))
		{
			if (!Function_104(StackVal, StackVal, *cParam1))
			{
				return 1;
			}
		}
	}
	LOG_ERROR("SK_GET_SHOP_BUY_CAMERA_DIRECTION_OVERRIDE: Missing ShopSettings in shop xml");
	return 0;
}

int Function_137(var uParam0, char* cParam1) //Position: 0x69ED / 27117
{
	bool bVar0;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ShopSettings", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		if (IS_DISPLAY_WIDESCREEN())
		{
			if (GET_GRINGO_VECTOR_ATTR(cParam1, "BuyCameraOverridePosition", bVar0))
			{
				if (!Function_104(StackVal, StackVal, *cParam1))
				{
					return 1;
				}
			}
		}
		if (GET_GRINGO_VECTOR_ATTR(cParam1, "BuyCameraOverridePosition4:3", bVar0))
		{
			if (!Function_104(StackVal, StackVal, *cParam1))
			{
				return 1;
			}
		}
	}
	LOG_ERROR("SK_GET_SHOP_BUY_CAMERA_POSITION_OVERRIDE: Missing ShopSettings in shop xml");
	return 0;
}

var Function_138(int iParam0, bool bParam1) //Position: 0x6ADA / 27354
{
	return IS_OBJECT_VALID(Function_139(Function_16(), 0, iParam0->f_20, bParam1, 0, 0));
}

var Function_139(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x6AF2 / 27378
{
	bool bVar0;
	
	if (bParam4)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_65(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "ShopSell", 1, 1);
	}
	Function_140(&bVar0, uParam2, uParam3);
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

void Function_140(var uParam0, var uParam1, int iParam2) //Position: 0x6B4B / 27467
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_141(&bVar0, uParam1, iParam2);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 4294967295);
	return;
}

void Function_141(var uParam0, bool bParam1, int iParam2) //Position: 0x6B6C / 27500
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 16.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	if (Function_143(iParam2, &vVar0) && Function_142(iParam2, &vVar3))
	{
		SET_CAMERASHOT_POSITION(*uParam0, vVar0);
		SET_CAMERASHOT_ORIENTATION(*uParam0, vVar3, 0);
		Function_135(*uParam0, bParam1);
	}
	else
	{
		bVar6 = FIND_OBJECT_IN_LAYOUT(Function_16(), "camera_look_at");
		if (IS_OBJECT_VALID(bVar6))
		{
			DESTROY_OBJECT(bVar6);
		}
		GET_OBJECT_POSITION(bParam1, &vVar0);
		GET_OBJECT_ORIENTATION(bParam1, &vVar3);
		bVar6 = CREATE_POINT_IN_LAYOUT(Function_16(), "camera_look_at", vVar0, vVar3);
		ATTACH_OBJECTS(*uParam0, bVar6, Function_65(), 1,593524f, 1,5f, -3,978377f, 3,054072f, 0,410364f, -3,141593f, 4294967295);
		SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bVar6, 0);
		SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,9f, 1,348268f, 0,05838f, 0.0f, 0.0f, 0.0f, 0);
		Function_135(*uParam0, bVar6);
	}
	return;
}

int Function_142(var uParam0, char* cParam1) //Position: 0x6C7F / 27775
{
	bool bVar0;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ShopSettings", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		if (IS_DISPLAY_WIDESCREEN())
		{
			if (GET_GRINGO_VECTOR_ATTR(cParam1, "SellCameraOverrideDirection", bVar0))
			{
				if (!Function_104(StackVal, StackVal, *cParam1))
				{
					return 1;
				}
			}
		}
		if (GET_GRINGO_VECTOR_ATTR(cParam1, "SellCameraOverrideDirection4:3", bVar0))
		{
			if (!Function_104(StackVal, StackVal, *cParam1))
			{
				return 1;
			}
		}
	}
	LOG_ERROR("SK_GET_SHOP_SELL_CAMERA_DIRECTION_OVERRIDE: Missing ShopSettings in shop xml");
	return 0;
}

int Function_143(var uParam0, char* cParam1) //Position: 0x6D72 / 28018
{
	bool bVar0;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ShopSettings", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		if (IS_DISPLAY_WIDESCREEN())
		{
			if (GET_GRINGO_VECTOR_ATTR(cParam1, "SellCameraOverridePosition", bVar0))
			{
				if (!Function_104(StackVal, StackVal, *cParam1))
				{
					return 1;
				}
			}
		}
		if (GET_GRINGO_VECTOR_ATTR(cParam1, "SellCameraOverridePosition4:3", bVar0))
		{
			if (!Function_104(StackVal, StackVal, *cParam1))
			{
				return 1;
			}
		}
	}
	LOG_ERROR("SK_GET_SHOP_SELL_CAMERA_POSITION_OVERRIDE: Missing ShopSettings in shop xml");
	return 0;
}

var Function_144() //Position: 0x6E62 / 28258
{
	return STREAMING_REQUEST_PROP(GET_ASSET_ID("p_inv_TreasureMoneyStack01x", 0), true);
}

bool Function_145(var uParam0, bool bParam1, int iParam2) //Position: 0x6E8E / 28302
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
	SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(Function_215(), 1);
	STREAMING_PREVENT_SNIPER_MODE(1);
	bVar0 = Function_156(bParam1);
	bVar18 = Function_213();
	Function_154(Function_155());
	vVar8 = { StackVal, StackVal, Function_154(Function_155()) };
	bVar19 = Function_151(StackVal, StackVal, bParam1, FIND_NAMED_LAYOUT("ArtGringoLayout"), bVar0, "UseCase1", vVar8, 15.0f, 1, 1);
	if (IS_OBJECT_VALID(bVar19))
	{
		GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bVar19), "UseCase1", &vVar2);
		bVar1 = Function_150(bParam1);
		if (IS_STRING_VALID(bVar1))
		{
			GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bVar19), bVar1, &vVar5);
		}
		else
		{
			Function_149(bParam1);
			vVar11 = { StackVal, StackVal, Function_149(bParam1) };
			GET_ACTOR_OFFSET_WORLD_COORDS(Function_213(), &vVar11, &vVar5);
			vVar5.f_4 = (vVar5.y + 1.0f);
		}
		vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar5, vVar2, StackVal) };
		VSCALE(&vVar14, 0,5f);
		vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar5, vVar14, StackVal) };
		bVar20 = Function_148(StackVal, StackVal, vVar14, 6.0f);
		if (IS_VOLUME_VALID(bVar20))
		{
			Function_147(bVar20);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar20);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar20);
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(Function_213(), 1);
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(uParam0->f_20, 1);
		}
		AI_IGNORE_ACTOR(bVar18);
		AI_IGNORE_ACTOR(uParam0->f_20);
		AI_DONT_HARM_ACTOR(bVar18);
		AI_DONT_HARM_ACTOR(uParam0->f_20);
		bVar17 = GET_OBJECT_HEADING(bVar19);
		TELEPORT_ACTOR_WITH_HEADING(bVar18, vVar2, bVar17, 0, true, 1);
		SNAP_OBJECT_TO_GROUND(bVar18, 25.0f, false, 1092616192);
		CLEAR_AMBIENT_OBJECTS_SPHERE(vVar5, 1,2f, 4294967295);
		TELEPORT_ACTOR(uParam0->f_20, &vVar5, 1, 1, 1);
		SNAP_OBJECT_TO_GROUND(uParam0->f_20, 25.0f, false, 1092616192);
		bVar17 = (bVar17 + 180.0f);
		SET_ACTOR_HEADING(uParam0->f_20, bVar17, 1);
		Function_146(bVar19);
		vVar21 = { StackVal, StackVal, Function_146(bVar19) };
		bVar24 = CREATE_POINT_IN_LAYOUT(Function_16(), Function_65(), vVar2, vVar21);
		ATTACH_OBJECTS(GET_OBJECT_FROM_ACTOR(Function_213()), bVar24, Function_65(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
		vVar21.f_4 = (vVar21.y + 180.0f);
		bVar25 = CREATE_POINT_IN_LAYOUT(Function_16(), Function_65(), vVar5, vVar21);
		ATTACH_OBJECTS(GET_OBJECT_FROM_ACTOR(uParam0->f_20), bVar25, Function_65(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
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

vector3 Function_146(bool bParam0) //Position: 0x7166 / 29030
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

void Function_147(bool bParam0) //Position: 0x718D / 29069
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
							if (bVar0 == Global_34573 && bVar0 == Function_213())
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

var Function_148(vector3 vParam0, var uParam3) //Position: 0x723E / 29246
{
	return CREATE_VOLUME_IN_LAYOUT(Function_16(), "shop_volume", 2, vParam0, 0.0f, 0.0f, 0.0f, uParam3, 1.0f, uParam3);
}

vector3 Function_149(int iParam0) //Position: 0x7267 / 29287
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

int Function_150(bool bParam0) //Position: 0x72AA / 29354
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
	return Function_65();
}

var Function_151(int iParam0, bool bParam1, bool bParam2, bool bParam3, vector3 vParam4, bool bParam7, bool bParam8, bool bParam9) //Position: 0x730E / 29454
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		if (Function_153(iParam0))
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
		bVar2 = CREATE_OBJECTSET_IN_LAYOUT(Function_65(), bParam1, 4294967295, 0);
		bVar1 = CREATE_OBJECT_ITERATOR(bParam1);
		ITERATE_IN_SET(bVar1, bVar2);
		if (LOCATE_GRINGOS_OF_TYPE(bVar2, bParam2, &vParam4, bParam7, 1) >= 0)
		{
			bVar0 = Function_152(bVar1, bParam8, bParam9);
			if (!IS_OBJECT_VALID(bVar0))
			{
				LOG_ERROR("Iteration failed");
			}
		}
		else if (LOCATE_GRINGOS_OF_NAME(bVar2, bParam2, &vParam4, bParam7, 1) >= 0)
		{
			bVar0 = Function_152(bVar1, bParam8, bParam9);
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
				if (Function_153(iParam0))
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
					if (Function_153(iParam0))
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
				if (Function_153(iParam0))
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
					if (Function_153(iParam0))
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
		if (Function_153(iParam0))
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

bool Function_152(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7A8B / 31371
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
			if (IS_ACTOR_VALID(Function_213()))
			{
				GET_OBJECT_POSITION(bVar1, &Var4);
				GET_POSITION(Function_213(), &Var7);
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

bool Function_153(bool bParam0) //Position: 0x7B70 / 31600
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

vector3 Function_154(bool bParam0) //Position: 0x7BB3 / 31667
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

var Function_155() //Position: 0x7BDA / 31706
{
	return GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
}

var Function_156(int iParam0) //Position: 0x7BE6 / 31718
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

void Function_157(int iParam0) //Position: 0x7C2C / 31788
{
	if (!iParam0->f_12)
	{
		REQUEST_ACTION_TREE("custom/store");
		REQUEST_ANIM_SET("store", 1);
		iParam0->f_12 = 1;
	}
	return;
}

void Function_158(var uParam0) //Position: 0x7C5E / 31838
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
	Function_32(uParam0);
	return;
}

void Function_159() //Position: 0x7C99 / 31897
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_PLAYER_CONTROL(GET_PLAYER_PADINDEX(Global_34573), 0, 0, 0);
		ACTOR_HOLSTER_WEAPON(Global_34573, 0);
	}
	return;
}

void Function_160(int iParam0) //Position: 0x7CBC / 31932
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

void Function_161(int iParam0, var uParam1, int iParam2) //Position: 0x7DBE / 32190
{
	bool bVar0;
	
	Function_14(iParam0);
	Function_10(iParam0);
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

var Function_162(bool bParam0) //Position: 0x7E0C / 32268
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

bool Function_163(bool bParam0, int iParam1, int iParam2) //Position: 0x7E47 / 32327
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
			if (IS_ACTOR_ALIVE(Function_213()))
			{
				if (Function_6(iParam1))
				{
					if (Function_3(iParam1) > fVar1)
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
					if (Function_3(iParam1) <= fVar1)
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
	Function_164(bParam0, "GB_VERIFY_REQUEST: GRINGO_GET_USE_COMPONENT returned an invalid component!");
	return 0;
}

void Function_164(int iParam0, bool bParam1) //Position: 0x7F8E / 32654
{
	if (Function_153(iParam0))
	{
		LOG_ERROR(bParam1);
	}
	return;
}

bool Function_165(int iParam0, bool bParam1, bool bParam2) //Position: 0x7FA1 / 32673
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
	
	bVar6 = Function_213();
	bVar7 = Function_215();
	bVar20 = false;
	if (!bParam2)
	{
		iVar21 = Function_191();
		if (iVar21 != 3 || iVar21 != 4)
		{
			bVar20 = true;
		}
		else
		{
			bVar20 = false;
		}
	}
	if (!Function_212(bParam1))
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
			bParam1->f_16 = Function_190(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam1);
			Function_189(bParam1, bParam1->f_16);
			*(bParam1 + 40) = { StackVal, StackVal, Function_189(bParam1, bParam1->f_16) };
			bParam1->f_52 = Function_188(bParam1);
			bParam1->f_56 = Function_187(bParam1);
			bParam1->f_12 = 0;
			bParam1->f_60 = Function_186(bParam1, bParam1 + 12, 0);
			bParam1->f_8 = Function_151(StackVal, StackVal, bParam1, bParam1->f_56, bParam1->f_60, "UseCase1", *(bParam1 + 40), bParam1->f_52, 0, 0);
			if (STRINGS_ARE_EQUAL(bParam1->f_60, "nsleeptime"))
			{
				*bParam1 = 0;
				Function_14(bParam1 + 28);
				Function_10(bParam1 + 28);
				if (bParam2)
				{
					TASK_PRIORITY_SET(bVar6, 2);
					TASK_GO_TO_COORD_AND_STAY(bVar6, bParam1 + 40, true, 0.0f);
				}
				else
				{
					TASK_PRIORITY_SET(bVar6, 3);
					Function_184(StackVal, StackVal, *(bParam1 + 40), bParam1->f_52, -1.0f);
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
							if (!Function_183(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
							{
								Function_182(StackVal, StackVal, vVar1, bVar6, bVar7);
							}
							else
							{
								Function_182(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							}
							*iParam0 = 1;
							break;
						
						case 0x00000010:
							GET_PATH_POINT(StackVal, false, &vVar1);
							if (!Function_183(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
							{
								Function_182(StackVal, StackVal, vVar1, bVar6, bVar7);
							}
							else
							{
								Function_182(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							}
							*iParam0 = 1;
							break;
						
						default:
							Function_182(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							*iParam0 = 1;
							break;
					}
				}
				else
				{
					Function_182(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
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
							if (!Function_183(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
							{
								Function_181(StackVal, StackVal, vVar1, bVar6, bVar7);
							}
							else
							{
								Function_181(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							}
							*iParam0 = 1;
							break;
						
						case 0x00000010:
							GET_PATH_POINT(StackVal, false, &vVar1);
							if (!Function_183(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
							{
								Function_181(StackVal, StackVal, vVar1, bVar6, bVar7);
							}
							else
							{
								Function_181(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							}
							*iParam0 = 1;
							break;
						
						default:
							Function_181(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							*iParam0 = 1;
							break;
					}
				}
				else
				{
					Function_181(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
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
			if (Function_180(bParam1))
			{
				bParam1->f_16 = Function_190(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam1);
				Function_189(bParam1, bParam1->f_16);
				*(bParam1 + 40) = { StackVal, StackVal, Function_189(bParam1, bParam1->f_16) };
				bParam1->f_52 = Function_188(bParam1);
			}
			bParam1->f_60 = Function_186(bParam1, bParam1 + 12, 0);
			bParam1->f_8 = Function_151(StackVal, StackVal, bParam1, bParam1->f_56, bParam1->f_60, "UseCase1", *(bParam1 + 40), bParam1->f_52, 0, 0);
			Function_179(bParam1, "GB_PERFORM_SCHEDULED_TASK", bParam1->f_60);
			if (IS_ACTOR_VALID(bVar6))
			{
				if (IS_OBJECT_VALID(StackVal))
				{
					switch (GET_OBJECT_TYPE(StackVal))
					{
						case 0x0000000C:
							*bParam1 = 0;
							Function_14(bParam1 + 28);
							Function_10(bParam1 + 28);
							if (Function_178(bParam1))
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
							Function_14(bParam1 + 28);
							Function_10(bParam1 + 28);
							TASK_PRIORITY_SET(bVar6, 2);
							*iParam0 = 6;
							break;
						
						default:
							Function_164(bParam1, "GB_PERFORM_SCHEDULED_TASK: Unhandled object! what the hell has come through?");
							*iParam0 = 20;
							break;
					}
				}
				else if (STRINGS_ARE_EQUAL(bParam1->f_60, "nsleeptime"))
				{
					*bParam1 = 0;
					Function_14(bParam1 + 28);
					Function_10(bParam1 + 28);
					if (bParam2)
					{
						TASK_PRIORITY_SET(bVar6, 2);
						TASK_GO_TO_COORD_AND_STAY(bVar6, bParam1 + 40, true, 0.0f);
					}
					else
					{
						TASK_PRIORITY_SET(bVar6, 3);
						Function_184(StackVal, StackVal, *(bParam1 + 40), bParam1->f_52, -1.0f);
					}
					SET_PERS_CHAR_ENABLED(bVar7, false);
					*iParam0 = 15;
				}
				else if (STRINGS_ARE_EQUAL_CLAMPED(bParam1->f_60, "wander", 6))
				{
					*bParam1 = 0;
					Function_14(bParam1 + 28);
					Function_10(bParam1 + 28);
					TASK_PRIORITY_SET(bVar6, 3);
					*iParam0 = 8;
				}
				else
				{
					Function_164(bParam1, "WARNING! No valid TASK for this pers char");
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
						if (!Function_183(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
						{
							Function_181(StackVal, StackVal, vVar1, bVar6, bVar7);
						}
						else
						{
							Function_181(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
						}
						*iParam0 = 19;
						break;
					
					case 0x00000010:
						GET_PATH_POINT(StackVal, false, &vVar1);
						if (!Function_183(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
						{
							Function_181(StackVal, StackVal, vVar1, bVar6, bVar7);
						}
						else
						{
							Function_181(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
						}
						*iParam0 = 19;
						break;
					
					default:
						Function_181(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
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
				if (Function_180(bParam1))
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
				Function_176(&bVar6);
				if (bVar20)
				{
					*iParam0 = 16;
					break;
				}
				else
				{
					if (Function_175(StackVal, bVar6, "UseCase1", Function_153(bParam1)))
					{
						if (Function_174(StackVal, bVar6, "UseCase1", &bVar22))
						{
							Function_14(bParam1 + 28);
							Function_10(bParam1 + 28);
							*iParam0 = 5;
							break;
						}
						else if (bVar22)
						{
							Function_179(bParam1, "GB_PERFORM_SCHEDULED_TASK", "GB_REACH_AND_USE_GRINGO failed - gringo is inside a restriction volume.");
							*iParam0 = 9;
							break;
						}
					}
					else
					{
						*iParam0 = 9;
						break;
					}
					if (Function_3(bParam1 + 28) < 20.0f)
					{
						if ((GET_TASK_STATUS(bVar6, 1) != 4 || GET_TASK_STATUS(bVar6, 19) != 4) || Function_180(bParam1))
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
				Function_176(&bVar6);
				fVar5 = Function_173(bParam1->f_60);
				vVar1 = { StackVal, StackVal, *(bParam1 + 40) };
				uVar4 = bParam1->f_52;
				if (Function_171(bParam1, &vVar8, &vVar11))
				{
					vVar14 = { Function_170(vVar8.x, vVar11.x), Function_170(vVar8.y, vVar11.y), Function_170(vVar8.z, vVar11.z) };
					vVar17 = { Function_169(vVar8.x, vVar11.x), Function_169(vVar8.y, vVar11.y), Function_169(vVar8.z, vVar11.z) };
					TASK_PRIORITY_SET(bVar6, 3);
					TASK_WANDER_IN_BOX(bVar6, &vVar14, &vVar17, -1f);
					*iParam0 = 12;
				}
				else
				{
					Function_184(StackVal, StackVal, vVar1, uVar4, fVar5);
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
				Function_176(&bVar6);
				if (bParam2)
				{
					Function_164(bParam1, "An error has triggered GB_SCHEDULE_TASK_WANDER_FALLBACK (this is a shopkeeper) - check spew!");
					vVar1 = { StackVal, StackVal, *(bParam1 + 40) };
					uVar4 = bParam1->f_52;
					TASK_PRIORITY_SET(bVar6, 2);
					TASK_GO_NEAR_COORD(bVar6, &vVar1, 2.0f, true);
					*iParam0 = 10;
				}
				else
				{
					Function_164(bParam1, "An error has triggered GB_SCHEDULE_TASK_WANDER_FALLBACK - check spew!");
					if (Function_171(bParam1, &vVar8, &vVar11))
					{
						vVar14 = { Function_170(vVar8.x, vVar11.x), Function_170(vVar8.y, vVar11.y), Function_170(vVar8.z, vVar11.z) };
						vVar17 = { Function_169(vVar8.x, vVar11.x), Function_169(vVar8.y, vVar11.y), Function_169(vVar8.z, vVar11.z) };
						TASK_PRIORITY_SET(bVar6, 3);
						TASK_WANDER_IN_BOX(bVar6, &vVar14, &vVar17, 20.0f);
						*iParam0 = 12;
					}
					else
					{
						vVar1 = { StackVal, StackVal, *(bParam1 + 40) };
						uVar4 = bParam1->f_52;
						Function_184(StackVal, StackVal, vVar1, uVar4, 20.0f);
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
				if (Function_180(bParam1))
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
			Function_168(bParam1, bVar7, "STANDING STILL FALLBACK");
			*bParam1 = 500;
			if (IS_ACTOR_VALID(bVar6))
			{
				iVar0 = GET_TASK_STATUS(bVar6, 6);
				if (iVar0 != 0 || iVar0 != 4)
				{
					*iParam0 = 20;
				}
				if (Function_180(bParam1))
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
				if (Function_180(bParam1))
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
				if (Function_180(bParam1))
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
			Function_168(bParam1, bVar7, "nSLEEPTIME");
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
			if (Function_180(bParam1))
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
					if (StackVal && Function_167(AI_HAS_ACTOR_BUMPED_INTO_ME(bVar6, Global_34573, 10.0f)))
					{
						*iParam0 = 20;
					}
					if (Function_180(bParam1))
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
				Function_176(&bVar6);
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
				else if (Function_180(bParam1))
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
			else if (Function_180(bParam1))
			{
				*iParam0 = 20;
			}
			else if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bVar7)))
			{
				if (Function_166(50.0f, bVar7))
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
					Function_176(&bVar6);
					Function_184(StackVal, StackVal, *(bParam1 + 40), bParam1->f_52, -1.0f);
				}
				*iParam0 = 17;
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000011:
			Function_168(bParam1, bVar7, "RESPONDING TO RAIN");
			*bParam1 = 0;
			if (!bVar20)
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000012:
			Function_168(bParam1, bVar7, "RESPONDING TO RETREAT");
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
			if (Function_180(bParam1))
			{
				bParam1->f_12 = 0;
			}
			else
			{
				bParam1->f_12++;
			}
			Function_14(bParam1 + 28);
			if (IS_ACTOR_VALID(bVar6))
			{
				TASK_PRIORITY_SET(bVar6, 2);
			}
			*iParam0 = 1;
			break;
		
		case 0x00000015:
			if (!Function_212(bParam1))
			{
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_PERS_CHAR(bVar7), "KeepLastTask"))
				{
					Function_168(bParam1, bVar7, "STOLEN KEEP_LAST_TASK");
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
				Function_168(bParam1, bVar7, "STOLEN");
			}
			break;
		
		default:
			Function_179(bParam1, "GB_PERFORM_SCHEDULED_TASK", "UNKNOWN STATE!");
			return 0;
			break;
	}
	return 1;
}

bool Function_166(float fParam0, bool bParam1) //Position: 0x8F29 / 36649
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

bool Function_167(bool bParam0) //Position: 0x8F54 / 36692
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

void Function_168(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8F9A / 36762
{
	struct<5> Var0;
	
	if (Function_153(bParam0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_PERS_CHAR(bParam1), &Var0);
		Var0.f_4 = (StackVal + 0,25f);
	}
	return;
}

int Function_169(int iParam0, int iParam1) //Position: 0x8FC1 / 36801
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_170(int iParam0, int iParam1) //Position: 0x8FD4 / 36820
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_171(bool bParam0, int iParam1, int iParam2) //Position: 0x8FE7 / 36839
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	
	iVar0 = Function_172(bParam0);
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
			if (Function_153(bParam0))
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
		bVar5 = GRINGO_GET_ATTRIBUTE(bVar4, bVar8);
		if (!bVar1)
		{
			bVar1 = GRINGO_GET_VECTOR_ATTR_BY_HANDLE(bVar5, iParam1);
		}
		else if (!bVar2)
		{
			bVar2 = GRINGO_GET_VECTOR_ATTR_BY_HANDLE(bVar5, iParam2);
		}
		if (bVar1 && bVar2)
		{
			return 1;
		}
		bVar8++;
	}
	return 0;
}

int Function_172(int iParam0) //Position: 0x91A6 / 37286
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = MAKE_TIME_OF_DAY((5 + iParam0->f_24), iParam0->f_20, false);
	bVar1 = MAKE_TIME_OF_DAY((7 + iParam0->f_24), iParam0->f_20, false);
	bVar2 = MAKE_TIME_OF_DAY((11 + iParam0->f_24), iParam0->f_20, false);
	bVar3 = MAKE_TIME_OF_DAY((14 + iParam0->f_24), iParam0->f_20, false);
	bVar4 = MAKE_TIME_OF_DAY((18 + iParam0->f_24), iParam0->f_20, false);
	bVar5 = MAKE_TIME_OF_DAY((22 + iParam0->f_24), iParam0->f_20, false);
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

var Function_173(bool bParam0) //Position: 0x927D / 37501
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

bool Function_174(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x92AB / 37547
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
					TASK_GO_TO_COORD(bParam0, &vVar0, true);
				}
			}
			else
			{
				TASK_PRIORITY_SET(bParam0, 2);
				TASK_USE_GRINGO(bParam0, GET_GRINGO_FROM_OBJECT(bParam1), bParam2, true, 1);
				return 1;
			}
		}
	}
	return 0;
}

bool Function_175(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x9330 / 37680
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam1))
	{
		if (GET_OBJECT_TYPE(bParam1) == 12)
		{
			if (Function_167(bParam1))
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

void Function_176(bool bParam0) //Position: 0x956A / 38250
{
	if (IS_ACTOR_RIDING(*bParam0))
	{
		Function_177(*bParam0);
		MEMORY_PREFER_WALKING(*bParam0, false);
		ACTOR_DISMOUNT_NOW(*bParam0);
	}
	return;
}

void Function_177(bool bParam0) //Position: 0x958C / 38284
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

bool Function_178(int iParam0) //Position: 0x9608 / 38408
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

void Function_179(int iParam0, bool bParam1, bool bParam2) //Position: 0x964D / 38477
{
	if (Function_153(iParam0))
	{
		PRINTSTRING("Pers Char: ");
		PRINTSTRING(GET_OBJECT_NAME(Function_155()));
		PRINTSTRING(" - ");
		PRINTSTRING("Module Name: ");
		PRINTSTRING(bParam1);
		PRINTSTRING(" - ");
		PRINTSTRING(bParam2);
		PRINTNL();
	}
	return;
}

bool Function_180(bool bParam0) //Position: 0x96A7 / 38567
{
	if (!StackVal != Function_190(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam0->f_16, *bParam0))
	{
		return 1;
	}
	return 0;
}

void Function_181(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0x96C1 / 38593
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
			if (!Function_104(StackVal, StackVal, vVar0))
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

void Function_182(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0x9805 / 38917
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

bool Function_183(vector3 vParam0, vector3 vParam3) //Position: 0x990F / 39183
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_184(vector3 vParam0, var uParam3, float fParam4) //Position: 0x993C / 39228
{
	var uVar0;
	var uVar3;
	
	if (fParam4 >= 0.0f)
	{
		fParam4 = -1.0f;
	}
	Function_185(StackVal, StackVal, vParam0, uParam3, &uVar0, &uVar3);
	TASK_PRIORITY_SET(Function_213(), 3);
	TASK_WANDER_IN_BOX(Function_213(), &uVar0, &uVar3, fParam4);
}

void Function_185(vector3 vParam0) //Position: 0x996E / 39278
{
	if (fParam3 >= 0.0f)
	{
		fParam3 = 1.0f;
	}
	uParam4->f_8 = (vParam0.z - (fParam3 * 0,707f));
	uParam4->f_4 = (vParam0.y - 100.0f);
	*uParam4 = (vParam0.x - (fParam3 * 0,707f));
	uParam5->f_8 = (vParam0.z + (fParam3 * 0,707f));
	uParam5->f_4 = (vParam0.y + 100.0f);
	*uParam5 = (vParam0.x + (fParam3 * 0,707f));
}

var Function_186(int iParam0, var uParam1, int iParam2) //Position: 0x99DA / 39386
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	iVar0 = Function_172(iParam0);
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
			if (Function_153(iParam0))
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
		bVar6 = GRINGO_GET_ATTRIBUTE(bVar5, bVar1);
		bVar8 = GRINGO_GET_STRING_ATTR_BY_HANDLE(bVar6, &uVar3);
		if (IS_STRING_VALID(bVar8))
		{
			return bVar8;
		}
		bVar1++;
	}
	return "NHIL";
}

var Function_187(int iParam0) //Position: 0x9BA1 / 39841
{
	struct<73> Var0;
	
	iVar20 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ScriptStructure", false);
	GET_GRINGO_STRUCT_ATTR(&Var0, 20, "Vectors_and_LayoutRef_Struct", iVar20);
	return Var0.f_72;
}

var Function_188(int iParam0) //Position: 0x9BF0 / 39920
{
	int iVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	iVar0 = Function_172(iParam0);
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
			if (Function_153(iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_SCHEDULED_SCAN_AREA_SIZE_FROM_XML invalid time of day returned by GB_GET_MY_TIME_OF_DAY");
				PRINTNL();
			}
			break;
	}
	bVar2 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "TimeOfDay_Tasks", false);
	bVar3 = GRINGO_GET_FIRST_NAMED_CHILD(bVar5, 0, bVar2);
	bVar4 = GRINGO_GET_ATTRIBUTE(bVar3, false);
	return GRINGO_GET_FLOAT_ATTR_BY_HANDLE(bVar4, &uVar1);
}

vector3 Function_189(int iParam0, bool bParam1) //Position: 0x9D5C / 40284
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
	if (Function_183(StackVal, StackVal, vVar21, 0.0f, 0.0f, 0.0f))
	{
		if (Function_153(iParam0))
		{
			PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT vector is null for time of day index: ");
			PRINTINT(bParam1);
			PRINTNL();
		}
		if (IS_ACTOR_VALID(Function_213()))
		{
			GET_POSITION(Function_213(), &vVar21);
			if (Function_153(iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT returning actor position instead of struct vector");
				PRINTNL();
			}
		}
		else if (IS_PERS_CHAR_VALID(Function_215()))
		{
			GET_OBJECT_POSITION(Function_155(), &vVar21);
			if (Function_153(iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT returning pers char position instead of struct vector");
				PRINTNL();
			}
		}
	}
	return StackVal, StackVal, vVar21;
}

int Function_190(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, int iParam15) //Position: 0xA022 / 40994
{
	bool bVar0;
	
	bVar0 = Function_172(&iParam0);
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
			if (Function_153(&iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_GET_IDX_FROM_TOD invalid time of day returned by GB_GET_MY_TIME_OF_DAY");
				PRINTNL();
			}
			break;
	}
	return 0;
}

var Function_191() //Position: 0xA0EF / 41199
{
	return StackVal;
}

void Function_192(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xA0FA / 41210
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_194(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_193(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_193(char* cParam0, int iParam1) //Position: 0xA166 / 41318
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

bool Function_194(bool bParam0, var uParam1, int iParam2) //Position: 0xA19D / 41373
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
		if (Function_196(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_195(uVar0))
		{
			case 0x00000002:
				if (!Function_197(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_195(char* cParam0) //Position: 0xA215 / 41493
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

int Function_196(int iParam0) //Position: 0xA2B6 / 41654
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_12(&iVar1, 2147483648);
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

bool Function_197(var uParam0, int iParam1) //Position: 0xA2F3 / 41715
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_198(int iParam0) //Position: 0xA306 / 41734
{
	if (IS_BLIP_VALID(iParam0->f_32))
	{
		REMOVE_BLIP(iParam0->f_32);
		return !IS_BLIP_VALID(iParam0->f_32);
	}
	return 1;
}

int Function_199(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA32A / 41770
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
				bVar0 = Function_205(bParam1);
				bParam0->f_32 = ADD_BLIP_FOR_OBJECT(bParam2, bVar0, 0.0f, 2, 0);
				SET_BLIP_MAX_DISTANCE(bParam0->f_32, 1,25f);
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
				Function_200(StackVal, StackVal, Global_29006, iVar4, vVar1, 30);
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

int Function_200(int iParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0xA3EB / 41963
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!Function_121(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_104(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_204(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_203(StackVal, StackVal, vParam2);
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
		Function_202(uVar3);
		vVar7 = { StackVal, StackVal, Function_202(uVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_202(StackVal);
				vVar4 = { StackVal, StackVal, Function_202(StackVal) };
				if (Function_183(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
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
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_201(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0,5f);
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
		SET_BLIP_PRIORITY(Global_9724[iVar1], true);
		return iVar1;
	}
	return 0;
}

int Function_201(int iParam0) //Position: 0xA5CE / 42446
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

vector3 Function_202(bool bParam0) //Position: 0xA705 / 42757
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = (bParam0 && 32767);
	bVar4 = SHIFT_RIGHT(bParam0, 15) & 32767;
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

var Function_203(vector3 vParam0) //Position: 0xA75C / 42844
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

int Function_204(int iParam0) //Position: 0xA7AA / 42922
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

int Function_205(int iParam0) //Position: 0xA862 / 43106
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

int Function_206(bool bParam0) //Position: 0xA8B2 / 43186
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("SK_SHOP_GET_ACTIVE_OVERRIDE: Actor not valid for SK_SHOP_GET_ACTIVE_WHEN_STOLEN, quitting.");
		return 0;
	}
	return DECOR_CHECK_EXIST(bParam0, "ACTIVE_WHEN_STOLEN");
}

bool Function_207() //Position: 0xA93D / 43325
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_208(bool bParam0) //Position: 0xA952 / 43346
{
	return DECOR_CHECK_EXIST(bParam0, "OUT_OF_STOCK");
}

int Function_209(int iParam0) //Position: 0xA96C / 43372
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

int Function_210(bool bParam0) //Position: 0xA988 / 43400
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

int Function_211(bool bParam0, bool bParam1) //Position: 0xA9AD / 43437
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

bool Function_212(bool bParam0) //Position: 0xA9D0 / 43472
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

bool Function_213() //Position: 0xAA14 / 43540
{
	return GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF())));
}

void Function_214(int iParam0, int iParam1) //Position: 0xAA26 / 43558
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	
	if (Function_153(iParam1))
	{
		if (IS_ACTOR_VALID(Function_213()))
		{
			if (iParam0 == 0)
			{
				*iParam1 = 0;
			}
			else
			{
				*iParam1 = 0;
			}
			GET_POSITION(Function_213(), &vVar0);
		}
		else
		{
			GET_OBJECT_POSITION(Function_155(), &vVar0);
		}
		SET_DEBUG_DRAW(1);
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar3);
		Function_189(StackVal, Function_190(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam1, *iParam1));
		vVar0 = { StackVal, StackVal, Function_189(StackVal, Function_190(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam1, *iParam1)) };
		uVar6 = Function_188(iParam1);
		vVar3 = { StackVal, StackVal, vVar0 };
		vVar3.f_4 = (vVar3.y + 2.0f);
		vVar3.f_4 = (vVar3.y - 0,5f);
		vVar0 = { StackVal, StackVal, vVar3 };
		vVar0.x = (vVar0.x - 0,5f);
		vVar3.x = (vVar3.x + 0,5f);
	}
	return;
}

var Function_215() //Position: 0xAAC3 / 43715
{
	return GET_PERS_CHAR_FROM_OBJECT(GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF()));
}

var Function_216(bool bParam0) //Position: 0xAAD2 / 43730
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
		Function_179(bParam0, "SK_GET_SHOP_TYPE", "Missing or invalid ShopType");
	}
	else
	{
		LOG_ERROR("SK_GET_SHOP_TYPE: Missing ShopSettings in shop xml");
	}
	return 4294967295;
}

bool Function_217(int iParam0) //Position: 0xAB86 / 43910
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
		Function_179(iParam0, "SK_GET_SHOP_VOLUME", "Missing or invalid ShopVolumeRef");
	}
	else
	{
		LOG_ERROR("SK_GET_SHOP_VOLUME: Missing ShopSettings in shop xml");
	}
	return "";
}

var Function_218(bool bParam0) //Position: 0xAC54 / 44116
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
			Function_164(bParam0, "SK_GET_CLOSING_TIME: Missing ClosingTime(00:00-23:00) Attribute in shop");
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

var Function_219(int iParam0) //Position: 0xADD5 / 44501
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
			Function_164(iParam0, "SK_GET_OPENING_TIME: Missing OpeningTime(00:00-23:00) Attribute in shop");
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

void Function_220(var uParam0) //Position: 0xAF56 / 44886
{
	Function_11(uParam0, 0.0f);
	return;
}

