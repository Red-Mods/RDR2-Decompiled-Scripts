//Decompiled with MagicRDR v1.0
//Function Count : 105
//Statics Count : 137
//Natives Count : 242
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	struct<9> Local_14[6];
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	int iLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	int iLocal_130 = 0;
	var uLocal_131 = 0;
	bool bLocal_132 = false;
	bool bLocal_133 = false;
	var uLocal_134 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	iLocal_11 = 1;
	iLocal_12 = 0;
	iLocal_13 = 0;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_104("STARTS");
	Function_103(&uScriptParam_0);
	iLocal_124 = 0;
	Function_101(&uScriptParam_0, &iLocal_124);
	while (IS_GRINGO_ACTIVE())
	{
		Function_100(&uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		uVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(&uVar1))
		{
			GET_OBJECT_POSITION(&uVar1, &uLocal_125);
		}
		iVar2 = 0;
		bLocal_132 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_124 - 1))
			{
				if (&vLocal_14[iVar09] + 16 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_124;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_132 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_94(&(vLocal_14[iVar39]), &bVar4))
						{
							Function_92(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_14[iVar39] + 16);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_94(&(vLocal_14[iVar39]), &bVar4))
						{
							Function_92(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_14[iVar39] + 16);
							if (bVar4)
							{
								Function_88(&(vLocal_14[iVar39]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (&vLocal_14[iVar39] + 24 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_87("eGRINGO_EndUse: Stop use by request", &vLocal_14[iVar39] + 24);
							Function_86(&vLocal_14[iVar39] + 24, 1);
							if (IS_ACTOR_VALID(&vLocal_14[iVar39] + 24))
							{
								if (IS_ACTOR_LOCAL_PLAYER(&vLocal_14[iVar39] + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&vLocal_14[iVar39] + 16))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(&vLocal_14[iVar39] + 24, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_79(&(vLocal_14[iVar39]), 0);
							}
							else if (vLocal_14[iVar39].f_68 < 8)
							{
								Function_78(&(vLocal_14[iVar39]));
								vLocal_14[iVar39].f_68 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_104("Stop use request actor mismatch!!");
						}
						break;
				}
				GRINGO_SET_MESSAGE_RETURN(bVar5);
			}
			else
			{
				GRINGO_SET_MESSAGE_RETURN(false);
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < (iLocal_124 - 1))
			{
				if (Function_77(vLocal_14[iVar09].f_64, 2))
				{
					if (!Function_18(&(vLocal_14[iVar09])))
					{
						Function_104("Quitting due to update end");
						Function_79(&(vLocal_14[iVar09]), 1);
					}
				}
				if (Function_17(&(vLocal_14[iVar09]), 0))
				{
					Function_7(&(vLocal_14[iVar09]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_124 - 1))
		{
			if (Function_77(vLocal_14[iVar09].f_64, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(&uScriptParam_0))
		{
			if (bLocal_132)
			{
				GRINGO_WAIT(0);
			}
			else if (GET_DEBUG_DRAW_STATE())
			{
				GRINGO_WAIT(0);
			}
			else
			{
				GRINGO_WAIT(Function_3());
			}
		}
		else
		{
			GRINGO_STOP();
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_133))
	{
		Function_104("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_133);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_124 - 1))
	{
		if (Function_77(vLocal_14[iVar09].f_64, 2))
		{
			Function_2("Gringo termination calls StopUse", &vLocal_14[iVar09] + 24);
			Function_79(&(vLocal_14[iVar09]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(&vLocal_14[iVar09] + 16))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &vLocal_14[iVar09] + 16);
		}
		Function_17(&(vLocal_14[iVar09]), 1);
		iVar0++;
	}
	Function_1(&uScriptParam_0);
	Function_104("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x43F / 1087
{
	iParam0 = &iParam0;
	iLocal_2 = 2000;
	DESTROY_OBJECT(&uLocal_5);
	if (IS_OBJECT_ANIMATOR_VALID(&uLocal_7))
	{
		DESTROY_OBJECT_ANIMATOR(&uLocal_7);
	}
	if (IS_OBJECT_ANIMATOR_VALID(&uLocal_9))
	{
		DESTROY_OBJECT_ANIMATOR(&uLocal_9);
	}
	return;
}

void Function_2(bool bParam0, char* cParam1) //Position: 0x474 / 1140
{
	var uVar0;
	
	uVar0 = "InvalidActor";
	if (IS_OBJECT_VALID(&cParam1))
	{
		uVar0 = GET_OBJECT_NAME(&cParam1);
	}
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), &cParam1, GET_TARGET_OBJECT(), &uVar0, ": ", &bParam0, 0);
	return;
}

var Function_3() //Position: 0x4B6 / 1206
{
	return iLocal_2;
}

int Function_4(int iParam0) //Position: 0x4BE / 1214
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<2> Var4;
	
	iVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, &iParam0);
	if (IS_GRINGO_COMPONENT_VALID(&iVar0))
	{
		if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "liftTopMidBot"))
		{
			if (Function_6(&iVar0, DECOR_GET_INT(GRINGO_GET_MY_OBJECT_REF(), "liftTopMidBot"), 0))
			{
				DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "liftTopMidBot");
			}
		}
		else if (!iLocal_12)
		{
			if (Function_6(&iVar0, 1, 0))
			{
				iLocal_12 = 1;
			}
		}
		else if (!iLocal_13)
		{
			if (!GRINGO_GET_AVAILABILITY(GRINGO_GET_MY_GRINGO_ID(), "UseCase1"))
			{
				GRINGO_SET_AVAILABILITY(&iVar0, 1);
			}
			uVar1 = GRINGO_GET_COMPONENT_USER(&iVar0);
			if (IS_OBJECT_VALID(&uVar1))
			{
				uVar2 = GRINGO_GET_FIRST_NAMED_CHILD("AttachProp", 1, &iVar0);
				if (IS_GRINGO_COMPONENT_VALID(&uVar2))
				{
					uVar3 = GRINGO_GET_PHYSINST(&uVar2);
					if (IS_PHYSINST_VALID(&uVar3))
					{
						uLocal_9 = GET_OBJECT_ANIMATOR_ON_OBJECT(&uVar3);
						if (IS_OBJECT_ANIMATOR_VALID(&uLocal_9))
						{
							if (IS_OBJECT_ANIMATOR_READY(&uLocal_9))
							{
								if (GET_OBJECT_ANIMATOR_PHASE(&uLocal_9) < 0,022f)
								{
									Function_6(&iVar0, 0, 1);
								}
							}
						}
					}
					else
					{
						LOG_ERROR("Failed to get 'Lever' physinst from prop component!");
					}
				}
				else
				{
					LOG_ERROR("Failed to get 'Lever' prop component from context component!");
				}
			}
			else if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "liftMoveDownUp"))
			{
				if (Function_6(&iVar0, 0, DECOR_GET_INT(GRINGO_GET_MY_OBJECT_REF(), "liftMoveDownUp")))
				{
					DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "liftMoveDownUp");
				}
			}
			else if (IS_OBJECT_VALID(&uLocal_5))
			{
				if (EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_5))
				{
					Function_5(&iVar0, 1);
					Function_6(&iVar0, 0, 1);
				}
			}
		}
		else
		{
			if (GRINGO_GET_AVAILABILITY(GRINGO_GET_MY_GRINGO_ID(), "UseCase1"))
			{
				GRINGO_SET_AVAILABILITY(&iVar0, 0);
			}
			if (!IS_PHYSINST_VALID(&uLocal_3))
			{
				GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &Var4);
				uLocal_3 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Var4, 1.0f, "p_cus_winch01x", 1);
			}
			if (IS_PHYSINST_VALID(&uLocal_3))
			{
				uLocal_7 = GET_OBJECT_ANIMATOR_ON_OBJECT(&uLocal_3);
				if (IS_OBJECT_ANIMATOR_VALID(&uLocal_7))
				{
					if (IS_OBJECT_ANIMATOR_READY(&uLocal_7))
					{
						if (GET_OBJECT_ANIMATOR_PHASE(&uLocal_7) != 1.0f)
						{
							iLocal_13 = 0;
							Function_5(&iVar0, 0);
							EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_5);
						}
					}
				}
				else
				{
					LOG_ERROR("Failed to create 'Winch' object animator on physinst!");
				}
			}
			else
			{
				LOG_ERROR("Failed to find 'Winch' physinst!");
			}
		}
	}
	else
	{
		LOG_ERROR("Failed to get 'UseCase1' context component from gringo!");
	}
	return 1;
}

int Function_5(int iParam0, bool bParam1) //Position: 0x818 / 2072
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("AttachProp", 1, &iParam0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		uVar1 = GRINGO_GET_FIRST_CHILD(2, &uVar0);
		if (IS_GRINGO_COMPONENT_VALID(&uVar1))
		{
			uVar2 = GRINGO_ANIM_GET_AST_FILENAME(&uVar1);
			uVar3 = GRINGO_ANIM_GET_ACT_FILENAME(&uVar1);
			uVar4 = GRINGO_ANIM_GET_ACT_ROOTNODE(&uVar1);
			iVar5 = GRINGO_GET_PHYSINST(&uVar0);
			if (IS_PHYSINST_VALID(&iVar5))
			{
				uLocal_9 = GET_OBJECT_ANIMATOR_ON_OBJECT(&iVar5);
				if (!IS_OBJECT_ANIMATOR_VALID(&uLocal_9))
				{
					uLocal_9 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(&iVar5, &uVar2, &uVar3, &uVar4);
				}
				if (IS_OBJECT_ANIMATOR_VALID(&uLocal_9))
				{
					if (IS_OBJECT_ANIMATOR_READY(&uLocal_9))
					{
						if (bParam1)
						{
							SET_OBJECT_ANIMATOR_NODE(&uLocal_9, "/global/old_winch/lever/lever");
						}
						else
						{
							DESTROY_OBJECT_ANIMATOR(&uLocal_9);
						}
						return 1;
					}
				}
				LOG_ERROR("Failed to create 'Lever' object animator on physinst!");
			}
			else
			{
				LOG_ERROR("Failed to get 'Lever' physinst from prop component!");
			}
		}
		else
		{
			LOG_ERROR("Failed to get 'Lever' anim component from prop component!");
		}
	}
	else
	{
		LOG_ERROR("Failed to get 'Lever' prop component from context component!");
	}
	return 0;
}

bool Function_6(int iParam0, int iParam1, bool bParam2) //Position: 0x9EE / 2542
{
	struct<2> Var0;
	
	if (!IS_PHYSINST_VALID(&uLocal_3))
	{
		GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &Var0);
		uLocal_3 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Var0, 1.0f, "p_cus_winch01x", 1);
	}
	if (IS_PHYSINST_VALID(&uLocal_3))
	{
		if (!IS_PHYSINST_IN_LEVEL(&uLocal_3))
		{
			return 0;
		}
		uLocal_7 = GET_OBJECT_ANIMATOR_ON_OBJECT(&uLocal_3);
		if (!IS_OBJECT_ANIMATOR_VALID(&uLocal_7))
		{
			uLocal_7 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(&uLocal_3, "", "nold_winch", "old_winch/winch");
		}
		if (IS_OBJECT_ANIMATOR_VALID(&uLocal_7))
		{
			if (IS_OBJECT_ANIMATOR_READY(&uLocal_7))
			{
				if (iParam1 == 1)
				{
					iLocal_11 = 1;
					iLocal_13 = 0;
					Function_5(&iParam0, 0);
					EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_5);
					SET_OBJECT_ANIMATOR_NODE(&uLocal_7, "/global/old_winch/winch/winch_top");
				}
				else if (iParam1 == 2)
				{
					iLocal_11 = 2;
					iLocal_13 = 0;
					Function_5(&iParam0, 0);
					EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_5);
					SET_OBJECT_ANIMATOR_NODE(&uLocal_7, "/global/old_winch/winch/winch_middle");
				}
				else if (iParam1 == 3)
				{
					iLocal_11 = 3;
					iLocal_13 = 0;
					Function_5(&iParam0, 0);
					EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_5);
					SET_OBJECT_ANIMATOR_NODE(&uLocal_7, "/global/old_winch/winch/winch_bottom");
				}
				if (bParam2 == 1)
				{
					if (iLocal_11 == 1)
					{
						iLocal_13 = 1;
						iLocal_11 = 3;
						SET_OBJECT_ANIMATOR_NODE(&uLocal_7, "/global/old_winch/winch/winch_down");
					}
					else if (iLocal_11 == 2)
					{
						iLocal_13 = 1;
						iLocal_11 = 3;
						SET_OBJECT_ANIMATOR_NODE(&uLocal_7, "/global/old_winch/winch/winch_middle_down");
					}
					else if (iLocal_11 == 3)
					{
						iLocal_13 = 1;
						iLocal_11 = 1;
						SET_OBJECT_ANIMATOR_NODE(&uLocal_7, "/global/old_winch/winch/winch_up");
					}
				}
				else if (bParam2 == 2)
				{
					if (iLocal_11 == 1)
					{
						iLocal_13 = 1;
						iLocal_11 = 3;
						SET_OBJECT_ANIMATOR_NODE(&uLocal_7, "/global/old_winch/winch/winch_down");
					}
					else if (iLocal_11 == 2)
					{
						iLocal_13 = 1;
						iLocal_11 = 3;
						SET_OBJECT_ANIMATOR_NODE(&uLocal_7, "/global/old_winch/winch/winch_middle_down");
					}
				}
				else if (bParam2 == 3)
				{
					if (iLocal_11 == 2)
					{
						iLocal_13 = 1;
						iLocal_11 = 1;
						SET_OBJECT_ANIMATOR_NODE(&uLocal_7, "/global/old_winch/winch/winch_middle_up");
					}
					else if (iLocal_11 == 3)
					{
						iLocal_13 = 1;
						iLocal_11 = 1;
						SET_OBJECT_ANIMATOR_NODE(&uLocal_7, "/global/old_winch/winch/winch_up");
					}
				}
				SET_PHYSINST_COLLIDES_AGAINST_INACTIVE(&uLocal_3, 1);
				return 1;
			}
		}
		LOG_ERROR("Failed to create 'Winch' object animator on physinst!");
	}
	else
	{
		LOG_ERROR("Failed to find 'Winch' physinst!");
	}
	return 0;
}

void Function_7(struct<69> Param0) //Position: 0xD8F / 3471
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_77(Param0.f_64, 2))
	{
		Function_86(&Param0 + 24, 0);
	}
	else if (UNK_0x0A0E660E() || Function_16(&Param0))
	{
		if (Param0.f_68 == 6)
		{
			if (Function_14(&Param0) <= Function_12(&Param0 + 16))
			{
				if (IS_ACTOR_VALID(&Param0 + 24))
				{
					if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
					{
						if (UNK_0x0A0E660E() || !Global_6663)
						{
							iVar1 = Function_10(&Param0 + 16, &bVar0);
							if (!bVar0 && UNK_0x0A0E660E())
							{
								iVar1 = "nDisengage";
								bVar0 = true;
							}
							if (bVar0)
							{
								bLocal_132 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_133))
								{
									Function_104("ManagePlayerQuit: Create quit context");
									if (Function_9(&Param0 + 16, "UseQuitBOverride", 0))
									{
										bLocal_133 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@UI.CANCEL", 0, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_133 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(&bLocal_133))
								{
									Function_2("USE CONTEXT QUIT", &Param0 + 24);
									Function_78(&Param0);
									Param0.f_68 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_133))
									{
										Function_104("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(&bLocal_133);
										iVar2 = 0;
										if (GET_GRINGO_BOOL_ATTR("DeactivateChildren", &Param0 + 16, &iVar2))
										{
											GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 0);
										}
									}
								}
								if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
								{
									if (Function_8(&Param0 + 24))
									{
										Function_78(&Param0);
										Function_2("STICK QUIT", &Param0 + 24);
										Param0.f_68 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_133))
										{
											Function_104("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(&bLocal_133);
										}
									}
								}
							}
						}
						else if (Global_6663)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_133))
							{
								Function_104("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(&bLocal_133);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_133))
		{
			Function_104("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(&bLocal_133);
		}
	}
	return;
}

bool Function_8(int iParam0) //Position: 0x10C3 / 4291
{
	bool bVar0;
	struct<2> Var1;
	bool bVar3;
	float fVar4;
	
	bVar0 = GET_CURRENT_GAME_TIME();
	Var1 = Vector(GET_ANALOGUE_ACTION("@GENERIC.MOVE_X", 1), GET_ANALOGUE_ACTION("@GENERIC.MOVE_Y", 1), 0.0f);
	bVar3 = VMAG(Var1);
	if (bVar3 >= 0,2f)
	{
		DECOR_SET_BOOL(&iParam0, "StickReset", true);
	}
	else if (bVar3 < 0,75f && DECOR_CHECK_EXIST(&iParam0, "StickReset"))
	{
		if (!DECOR_GET_FLOAT_VERBOSE(&iParam0, "DisconnectTime", &fVar4))
		{
			DECOR_SET_FLOAT(&iParam0, "DisconnectTime", bVar0);
		}
		else if ((bVar0 - fVar4) < 0,15f)
		{
			DECOR_REMOVE(&iParam0, "StickReset");
			DECOR_REMOVE(&iParam0, "DisconnectTime");
			return 1;
		}
	}
	DECOR_REMOVE(&iParam0, "DisconnectTime");
	return 0;
}

bool Function_9(bool bParam0, var uParam1, int iParam2) //Position: 0x11DC / 4572
{
	int iVar0;
	bool bVar1;
	
	bVar1 = GET_GRINGO_BOOL_ATTR(&uParam1, &bParam0, &iVar0);
	if (iVar0 >= 0)
	{
		return bVar1;
	}
	return iParam2;
}

bool Function_10(char* cParam0, int iParam1) //Position: 0x11FA / 4602
{
	return Function_11(&cParam0, "UseQuit", &iParam1);
}

bool Function_11(char* cParam0, char* cParam1, int iParam2) //Position: 0x1213 / 4627
{
	int iVar0;
	int iVar1;
	
	iVar1 = GET_GRINGO_STRING_ATTR(&cParam1, &cParam0, &iVar0);
	iParam2 = iVar0 < 0;
	if (iParam2)
	{
		if (STRING_LENGTH(&iVar1) != 0 || STRINGS_ARE_EQUAL(&iVar1, "NoString"))
		{
			iParam2 = 0;
			return &iLocal_0;
		}
		return &iVar1;
	}
	return &iLocal_0;
}

float Function_12(int iParam0) //Position: 0x1263 / 4707
{
	return Function_13(&iParam0, "MinimumUseTime", 0.0f);
}

int Function_13(float fParam0, var uParam1, int iParam2) //Position: 0x1281 / 4737
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, &uParam1, &fParam0);
	return iVar0;
}

float Function_14(vector3 vParam0) //Position: 0x1299 / 4761
{
	if (Function_16(&vParam0))
	{
		if (Function_15(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_15(int iParam0) //Position: 0x1366 / 4966
{
	return Function_77(iParam0, 2);
}

bool Function_16(int iParam0) //Position: 0x1374 / 4980
{
	return Function_77(iParam0, 1);
}

bool Function_17(int iParam0, int iParam1) //Position: 0x1382 / 4994
{
	bool bVar0;
	
	bVar0 = DECOR_CHECK_EXIST(&iParam0 + 24, "GringoNoQuit");
	if (!bVar0)
	{
		return 1;
	}
	if (iParam1 && bVar0)
	{
		DECOR_REMOVE(&iParam0 + 24, "GringoNoQuit");
		return 0;
	}
	return 0;
}

bool Function_18(struct<69> Param0) //Position: 0x13CF / 5071
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<2> Var3;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	struct<2> Var16;
	float fVar18;
	bool bVar19;
	var uVar20;
	int iVar21;
	float fVar22;
	struct<2> Var23;
	bool bVar25;
	struct<2> Var26;
	int iVar28;
	bool bVar29;
	var uVar30;
	var uVar31;
	bool bVar32;
	var uVar33;
	int iVar34;
	bool bVar35;
	bool bVar36;
	var uVar37;
	float fVar38;
	int iVar39;
	float fVar40;
	float fVar41;
	int iVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	var uVar48;
	var uVar49;
	int iVar50;
	int iVar51;
	var uVar52;
	struct<2> Var53;
	bool bVar55;
	
	bVar11 = Function_76(&Param0 + 16);
	if (!(IS_ACTOR_VALID(&Param0 + 24) && IS_ACTOR_ALIVE(&Param0 + 24)))
	{
		Function_87("UpdateUse with invalid actor", &Param0 + 24);
		return 0;
	}
	if (!Function_9(&Param0 + 16, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Param0 + 24)) >= 0,5f)
		{
			Function_87("Damage quit", &Param0 + 24);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(&Param0 + 24))
	{
		Function_87("Incapacitation quit", &Param0 + 24);
		return 0;
	}
	GET_POSITION(&Param0 + 24, &Var16);
	bVar19 = true;
	if (Param0.f_68 < 4)
	{
		iVar21 = STRING_TO_HASH("SharedPropName");
	}
	switch (Param0.f_68)
	{
		case 0x00000002:
			bLocal_132 = true;
			if (IS_ACTOR_PLAYER(&Param0 + 24))
			{
				if (Function_75(&Param0 + 16, &fVar22))
				{
					GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &Var23);
					Var23.f_4 = (StackVal + (fVar22 + 0,1f));
					if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
					{
						bVar25 = IS_AREA_OBSTRUCTED2(Var23, fVar22, GET_PHYSINST_FROM_ACTOR(&Param0 + 24), GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT()), 0);
					}
					else
					{
						bVar25 = IS_AREA_OBSTRUCTED(Var23, fVar22, &Param0 + 24, 0);
					}
					if (IS_ACTOR_ON_TRAIN(&Param0 + 24, 0) || bVar25)
					{
						DECOR_SET_BOOL(GRINGO_GET_MY_OBJECT_REF(), "Obstructed", true);
						Param0.f_68 = 7;
						Function_2("Skip to eRewarding", &Param0 + 24);
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
			{
				if (Function_70(&Param0 + 24, &Param0 + 16))
				{
					Function_2("Navigation complete (going to eStarting)", &Param0 + 24);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
					Param0.f_68 = 1;
					Function_69(&Param0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Param0.f_68 = 1;
				Function_69(&Param0);
			}
			if (!Function_68(&Param0 + 16) && Param0.f_68 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", &Param0 + 24);
				SET_ACTOR_POSTURE(&Param0 + 24, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_132 = true;
			Function_67(&Param0 + 16);
			if (((!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24)) && !Function_77(Param0.f_64, 1)) && !DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
			{
				Function_64(&Param0 + 16);
			}
			fVar18 = Function_63(&Param0 + 16);
			if (Function_14(&Param0) < fVar18)
			{
				Function_2("INTRO TIMED OUT - ABORTING", &Param0 + 24);
				return 0;
			}
			if (Function_77(Param0.f_64, 1))
			{
				Function_58(&Param0 + 16, &Var3, &uVar5);
				if (!Function_77(Param0.f_64, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
					{
						Function_2("SUSPEND MOVER", &Param0 + 24);
						SUSPEND_MOVER(&Param0 + 24);
						Function_57(&Param0 + 64, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
					{
						Function_2("nFIX MOVER", &Param0 + 24);
						SET_MOVER_FROZEN(&Param0 + 24, true);
						Function_57(&Param0 + 64, 16);
					}
				}
				Function_2("MID ACTION TELEPORT", &Param0 + 24);
				Var26.f_4 = uVar5;
				if (DECOR_CHECK_EXIST(&Param0 + 24, "NoTeleport"))
				{
					SET_OBJECT_POSITION(&Param0 + 24, Var3);
					SET_OBJECT_ORIENTATION(&Param0 + 24, Var26);
					DECOR_REMOVE(&Param0 + 24, "NoTeleport");
				}
				else
				{
					TELEPORT_ACTOR_WITH_HEADING(&Param0 + 24, Var3, uVar5, 1, 1, Function_56());
				}
				if (!Function_77(Param0.f_64, 1024))
				{
					Function_57(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_9(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			else if (Function_70(&Param0 + 24, &Param0 + 16))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Function_2("FINISHED NAVIGATION", &Param0 + 24);
				if (!Function_77(Param0.f_64, 1024))
				{
					Function_57(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_9(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			if (Param0.f_68 != 3 && !Function_77(Param0.f_64, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
				{
					Function_2("SUSPEND MOVER", &Param0 + 24);
					SUSPEND_MOVER(&Param0 + 24);
					Function_57(&Param0 + 64, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
				{
					Function_2("nFIX MOVER", &Param0 + 24);
					SET_MOVER_FROZEN(&Param0 + 24, true);
					Function_57(&Param0 + 64, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_77(Param0.f_64, 32))
			{
				bLocal_132 = true;
				if (!ACTOR_IS_HOLSTERED(&Param0 + 24))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", &Param0 + 24);
			}
			Param0.f_68 = 4;
		
		case 0x00000004:
			Function_55(&Param0 + 16);
			bLocal_132 = true;
			Function_54(&Param0);
			Function_51(&Param0, Function_53(&Param0 + 16));
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 0);
			}
			bVar29 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", &Param0 + 16, &iVar28);
			if (iVar28 == 0)
			{
				bVar29 = Function_77(Param0.f_64, 1);
			}
			bVar0 = Function_50(&Param0 + 24, &Param0 + 16, bVar29);
			if (!IS_GRINGO_COMPONENT_VALID(&bVar0))
			{
				Param0.f_68 = 5;
				if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
				{
					GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 1);
				}
			}
			else if (bVar11)
			{
				if (GRINGO_PLAY_ANIM_ON_ACTOR(&Param0 + 24, &bVar0, bVar29))
				{
					if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
					{
						GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 1);
					}
					Param0.f_68 = 5;
					bVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, 0);
					while (bVar10 >= 4294967295)
					{
						bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar10, &Param0 + 16);
						if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &bVar1, Function_11(&bVar1, "AttachBone", &bVar9), Function_11(&bVar1, "AttachLocator", &bVar9), 1))
						{
							Function_49(&bVar1, &Param0 + 24);
							if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
							{
								uVar30 = GRINGO_GET_PROP_FROM_COMPONENT(&bVar1);
								if (IS_PHYSINST_VALID(&uVar30))
								{
									ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), &uVar30, 0);
								}
							}
						}
						bVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, bVar10 + 1);
					}
					bVar12 = false;
					uVar14 = GRINGO_GET_ATTRIBUTE(&Param0 + 16, bVar12);
					while (bVar12 <= GRINGO_GET_ATTRIBUTE_COUNT(&Param0 + 16))
					{
						uVar14 = GRINGO_GET_ATTRIBUTE(&Param0 + 16, bVar12);
						if (GRINGO_IS_ATTRIBUTE_VALID(&uVar14))
						{
							if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(&uVar14) == 2)
							{
								if (iVar21 == GRINGO_GET_ATTRIBUTE_HASH(&uVar14))
								{
									uVar15 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&uVar14, &uVar13);
									bVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar15, 1, GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 0), 0);
									while (bVar10 >= 4294967295)
									{
										bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar10, GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 0));
										if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &bVar1, Function_11(&bVar1, "AttachBone", &bVar9), Function_11(&bVar1, "AttachLocator", &bVar9), 1))
										{
											if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
											{
												uVar31 = GRINGO_GET_PROP_FROM_COMPONENT(&bVar1);
												if (IS_PHYSINST_VALID(&uVar31))
												{
													ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), &uVar31, 0);
												}
											}
											Function_49(&bVar1, &Param0 + 24);
										}
										bVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar15, 1, GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 0), bVar10 + 1);
									}
								}
							}
						}
						bVar12++;
					}
				}
			}
			if (Param0.f_68 == 5)
			{
				Function_2("KICKED TO DOING START", &Param0 + 24);
				uVar7 = GET_TARGET_OBJECT();
				if (IS_OBJECT_VALID(&uVar7))
				{
					Function_40(&Param0, &uVar7, &iLocal_130, &uLocal_128);
					if (GET_OBJECT_TYPE(&uVar7) != 15)
					{
						uVar20 = GET_PHYSINST_FROM_OBJECT(&uVar7);
						if (IS_PHYSINST_VALID(&uVar20))
						{
							if (!IS_PROP_FIXED(&uVar20))
							{
								Function_57(&Param0 + 64, 256);
								SET_PROP_FIXED(&uVar20, 1);
							}
							else
							{
								Function_39(&Param0 + 64, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Param0 + 32);
				if (Function_77(Param0.f_64, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
					{
						Function_2("SCHEDULE STOP CUSTOM UNSUSPEND", &Param0 + 24);
						UNK_0x4A1D2E25(&Param0 + 24);
					}
					if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
					{
						Function_2("SCHEDULE STOP CUSTOM UNFIX", &Param0 + 24);
						UNK_0x817B6952(&Param0 + 24);
					}
				}
				GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 1);
				if (Function_38(&Param0 + 16))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(&bVar0))
				{
					if (Function_37(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_36(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&Param0 + 24, &uVar8);
							}
						}
					}
					else if (Function_35(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_36(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&uVar8, &Param0 + 24);
							}
						}
					}
					bVar9 = false;
					uVar6 = Function_34(&Param0 + 16, &bVar9);
					if (bVar9)
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_36(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uVar8, &uVar6);
							}
						}
					}
				}
				if (Function_33(&Param0 + 16))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(&Param0 + 24))
					{
						Function_57(&Param0 + 64, 8);
					}
					else
					{
						Function_39(&Param0 + 64, 8);
					}
					if (Function_77(Param0.f_64, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, true);
					}
				}
				else
				{
					Function_39(&Param0 + 64, 8);
				}
				if (Function_32(&Param0 + 16))
				{
					NET_SET_NODE_REPLICATION(&Param0 + 24, 1, 1);
					UNK_0xC17BAD12(&Param0 + 24);
				}
				uVar33 = Function_11(&Param0 + 16, "CustomReactNode", &bVar32);
				if (bVar32)
				{
					SET_REACT_NODE_FOR_ACTOR(&Param0 + 24, &uVar33);
				}
				iVar34 = 1;
				bVar35 = Function_9(&Param0 + 16, "CanAnimalsAttack", iVar34);
				if (!bVar35)
				{
					if (IS_ACTOR_VALID(&Param0 + 24))
					{
						SET_ANIMAL_CAN_ATTACK(&Param0 + 24, 0);
					}
				}
				Function_31(&Param0 + 24, &Param0 + 16);
				bVar36 = Function_9(&Param0 + 16, "AllowTalking", 1);
				if (!bVar36)
				{
					STOP_PED_SPEAKING(&Param0 + 24, 1);
				}
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				Function_30();
			}
			Param0.f_68 = 6;
			if (Function_77(Param0.f_64, 1))
			{
				if (Function_29(&Param0 + 16))
				{
					Function_2("MID ACTION NODE", &Param0 + 24);
				}
			}
		
		case 0x00000006:
			if (!Function_28(&Param0 + 24, &Param0 + 16))
			{
				Function_2("CUSTOM QUIT DURING USE", &Param0 + 24);
				Param0.f_68 = 8;
			}
			bVar0 = Function_50(&Param0 + 24, &Param0 + 16, Function_77(Param0.f_64, 1));
			if (IS_GRINGO_COMPONENT_VALID(&bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(&Param0 + 24, &bVar0))
				{
					Function_2("ANIMATION QUIT DURING USE", &Param0 + 24);
					if (GRINGO_WAS_USE_SUCCESSFUL(&Param0 + 24))
					{
						Param0.f_68 = 7;
					}
					else
					{
						Param0.f_68 = 8;
					}
				}
			}
			if (Function_14(&Param0) <= Function_12(&Param0 + 16))
			{
				GRINGO_SATISFY_MOTIVES_OF_ACTOR(&Param0 + 24, &Param0 + 16);
			}
			if (!IS_ACTOR_PLAYER(&Param0 + 24))
			{
				if (AI_SPEECH_GET_ALLOW_FOR_ACTOR(&Param0 + 24))
				{
					uVar37 = GRINGO_GET_FIRST_NAMED_CHILD("SpeechConts", 4, &Param0 + 16);
					if (IS_GRINGO_COMPONENT_VALID(&uVar37))
					{
						if (!DECOR_GET_FLOAT_VERBOSE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", &fVar38))
						{
							DECOR_SET_FLOAT(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", GET_CURRENT_GAME_TIME());
						}
						else
						{
							iVar39 = GRINGO_GET_ATTRIBUTE_COUNT(&uVar37);
							if (!GET_GRINGO_FLOAT_ATTR(&fVar41, "MinDelay", &uVar37))
							{
								fVar41 = 10.0f;
							}
							else
							{
								iVar39 = (iVar39 - 1);
							}
							if (!GET_GRINGO_FLOAT_ATTR(&fVar40, "MaxDelay", &uVar37))
							{
								fVar40 = 30.0f;
							}
							else
							{
								iVar39 = (iVar39 - 1);
							}
							bVar44 = GET_GRINGO_BOOL_ATTR("nForcePlay", &uVar37, &iVar42);
							if (iVar42 != 0)
							{
								iVar39 = (iVar39 - 1);
							}
							bVar43 = GET_GRINGO_BOOL_ATTR("AllowRepeat", &uVar37, &iVar42);
							if (iVar42 != 0)
							{
								iVar39 = (iVar39 - 1);
							}
							bVar45 = GET_GRINGO_BOOL_ATTR("SubtitlesOn", &uVar37, &iVar42);
							if (iVar42 != 0)
							{
								iVar39 = (iVar39 - 1);
							}
							bVar46 = GET_GRINGO_BOOL_ATTR("ForceThruSpeechBlock", &uVar37, &iVar42);
							if (iVar42 != 0)
							{
								iVar39 = (iVar39 - 1);
							}
							if (iVar39 >= 0)
							{
								if (GET_CURRENT_GAME_TIME() - fVar38) <= RAND_FLOAT_RANGE(fVar41, fVar40)
								{
									DECOR_SET_FLOAT(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", GET_CURRENT_GAME_TIME());
									bVar47 = RAND_INT_RANGE(false, (iVar39 - 1));
									uVar48 = GRINGO_GET_ATTRIBUTE(&uVar37, bVar47);
									uVar49 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&uVar48, &iVar42);
									iVar50 = 1;
									STRING_CLEAR_TOKENIZER();
									iVar51 = SET_OWNERSHIP_STRAGGLER(&uVar49, ",");
									if (iVar51 >= 1)
									{
										uVar52 = STRING_GET_TOKEN(1);
										if (STRINGS_ARE_EQUAL("super", &uVar52))
										{
											iVar50 = 3;
										}
										else if (STRINGS_ARE_EQUAL("shout", &uVar52))
										{
											iVar50 = 2;
										}
										else
										{
											iVar50 = 1;
										}
										uVar49 = STRING_GET_TOKEN(0);
									}
									SAY_SINGLE_LINE_STRING(&Param0 + 24, &uVar49, bVar44, bVar43, iVar50, 0, bVar45, bVar46);
								}
							}
						}
					}
				}
			}
			if (Param0.f_68 == 6)
			{
				bVar55 = Function_27(&Param0 + 16);
				if (bVar55 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Var53);
					if (VDIST(Var53, *(&Param0 + 32)) < bVar55)
					{
						Function_2("UPDATE USE TOO FAR", &Param0 + 24);
						if (Function_26())
						{
							PRINTSTRING("   Distance was: ");
							PRINTFLOAT(VDIST(Var53, *(&Param0 + 32)));
							PRINTSTRING(" [Max allowed is: ");
							PRINTFLOAT(bVar55);
							PRINTSTRING(" ] ");
							PRINTNL();
						}
						Param0.f_68 = 8;
					}
				}
			}
			if (Param0.f_68 == 6)
			{
				if (IS_TASKED_TO_USE_GRINGO_FOREVER(&Param0 + 24, GRINGO_GET_MY_GRINGO_ID()))
				{
					bVar19 = false;
				}
				if (bVar19)
				{
					if (Function_25(&Param0 + 16) <= 0.0f)
					{
						if (Function_14(&Param0) < Function_25(&Param0 + 16))
						{
							Function_2("UPDATE USE USETIME SATISFIED", &Param0 + 24);
							Param0.f_68 = 7;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_104("nRewarding");
			Function_24(&Param0 + 24, &Param0 + 16);
			Function_23(&Param0 + 24, &Param0 + 16);
			Function_22(&Param0 + 24, &Param0 + 16);
			SET_GRINGO_OBJECT_REF_ATTR(&Param0 + 24, "LastUserObject", &Param0 + 16);
			Function_57(&Param0 + 64, 64);
			Param0.f_68 = 8;
			break;
		
		case 0x00000008:
			bLocal_132 = true;
			if (!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				if (!DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
				{
					if (!Function_9(&Param0 + 16, "GringoCamNoEndCut", 0))
					{
						if (!Function_21())
						{
							Function_64(&Param0 + 16);
						}
					}
				}
				else
				{
					DECOR_REMOVE(&Param0 + 24, "NoGringoCamera");
				}
			}
			if (Function_9(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
			{
				Function_2("Use case quits - no cleapup due to DoNotCleanUpUserSettings attribute", &Param0 + 24);
				return 0;
			}
			Function_2("GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS", &Param0 + 24);
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&Param0 + 24);
			Param0.f_68 = 9;
			Function_20(&Param0 + 24, &Param0 + 16);
			break;
		
		case 0x00000009:
			if (Function_77(Param0.f_64, 1024))
			{
				Function_39(&Param0 + 64, 1024);
				if (!Function_9(&Param0 + 16, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, true);
				}
			}
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 1);
			}
			bLocal_132 = true;
			bVar0 = Function_50(&Param0 + 24, &Param0 + 16, Function_77(Param0.f_64, 1));
			if (IS_GRINGO_COMPONENT_VALID(&bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(&Param0 + 24, &bVar0))
				{
					Function_2("ANIMATION FINISHED", &Param0 + 24);
					return 0;
				}
			}
			return 0;
			break;
	}
	Function_19(&Param0 + 24, Param0.f_68);
	return 1;
}

void Function_19(var uParam0, int iParam1) //Position: 0x2704 / 9988
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		REPORT_GRINGO_USE_PHASE(&uParam0, iParam1);
	}
	return;
}

void Function_20(var uParam0, var uParam1) //Position: 0x271B / 10011
{
	uParam1 = &uParam1;
	uParam0 = &uParam0;
	return;
}

bool Function_21() //Position: 0x272D / 10029
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
	{
		bVar0 = FIND_OBJECT_IN_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera");
		if (IS_OBJECT_VALID(&bVar0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_22(var uParam0, int iParam1) //Position: 0x2760 / 10080
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(&iParam1);
	iVar2 = STRING_TO_HASH("RemoveCapability");
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		uVar3 = GRINGO_GET_ATTRIBUTE(&iParam1, bVar1);
		iVar4 = GRINGO_GET_ATTRIBUTE_HASH(&uVar3);
		if (iVar4 == iVar2)
		{
			iVar5 = 0;
			uVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&uVar3, &iVar5);
			if (iVar5 >= 0)
			{
				if (HAS_CAPABILITY(&uParam0, &uVar6))
				{
					REMOVE_CAPABILITY(&uParam0, &uVar6);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0x27DE / 10206
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(&iParam1);
	iVar2 = STRING_TO_HASH("AddCapability");
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		uVar3 = GRINGO_GET_ATTRIBUTE(&iParam1, bVar1);
		iVar4 = GRINGO_GET_ATTRIBUTE_HASH(&uVar3);
		if (iVar4 == iVar2)
		{
			iVar5 = 0;
			uVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&uVar3, &iVar5);
			if (iVar5 >= 0)
			{
				if (!HAS_CAPABILITY(&uParam0, &uVar6))
				{
					ADD_CAPABILITY(&uParam0, &uVar6);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_24(int iParam0, int iParam1) //Position: 0x285A / 10330
{
	iParam1 = &iParam1;
	iParam0 = &iParam0;
	return;
}

float Function_25(int iParam0) //Position: 0x286C / 10348
{
	return Function_13(&iParam0, "UseTime", 5.0f);
}

bool Function_26() //Position: 0x2883 / 10371
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

int Function_27(int iParam0) //Position: 0x2890 / 10384
{
	return Function_13(&iParam0, "MoveAllowance", 1,5f);
}

bool Function_28(int iParam0, bool bParam1) //Position: 0x28B1 / 10417
{
	bParam1 = &bParam1;
	iParam0 = &iParam0;
	return 1;
}

bool Function_29(bool bParam0) //Position: 0x28C4 / 10436
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, &bParam0));
}

void Function_30() //Position: 0x28E4 / 10468
{
	return;
}

void Function_31(int iParam0, bool bParam1) //Position: 0x28EA / 10474
{
	bParam1 = &bParam1;
	iParam0 = &iParam0;
	return;
}

bool Function_32(char* cParam0) //Position: 0x28FC / 10492
{
	cParam0 = &cParam0;
	return 1;
}

bool Function_33(int iParam0) //Position: 0x2909 / 10505
{
	return Function_9(&iParam0, "OneShotKill", 0);
}

bool Function_34(char* cParam0, int iParam1) //Position: 0x2924 / 10532
{
	return Function_11(&cParam0, "ParentAnimNode", &iParam1);
}

bool Function_35(int iParam0) //Position: 0x2944 / 10564
{
	return Function_9(&iParam0, "LinkToParentAnim", 0);
}

var Function_36(int iParam0) //Position: 0x2964 / 10596
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (vLocal_14 - 1))
	{
		if (&vLocal_14[iVar09] + 16 == &iParam0)
		{
			return &vLocal_14[iVar09] + 24;
		}
		iVar0++;
	}
	return &iVar1;
}

bool Function_37(int iParam0) //Position: 0x299B / 10651
{
	return Function_9(&iParam0, "LinkParentToAnim", 0);
}

bool Function_38(int iParam0) //Position: 0x29BB / 10683
{
	return Function_9(&iParam0, "SingularUse", 0);
}

void Function_39(var uParam0, int iParam1) //Position: 0x29D6 / 10710
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_40(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x29EC / 10732
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	var uVar6;
	bool bVar7;
	var uVar8;
	bool bVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	var uVar13;
	
	PRINTSTRING("CALLED ManageTargetRelation");
	PRINTNL();
	uVar2 = Function_48(&iParam0 + 16, &bVar0);
	uVar3 = Function_47(&iParam0 + 16, &bVar1);
	uVar4 = Function_46(&iParam0 + 16);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(&uVar4)))
	{
		uVar6 = Function_45(&iParam0 + 16, &bVar5);
		if (bVar5)
		{
			uVar8 = Function_44(&iParam0 + 16, &bVar7);
			if (!bVar7)
			{
				LOG_ERROR("Provided target physical attachment bone with no corresponding user attachment");
				return;
			}
			*(&iParam0 + 48) = ATTACH_OBJECTS_PHYSICAL(&iParam1, &iParam0 + 24, &uVar6, &uVar8, 0,02f);
		}
		return;
	}
	bVar9 = true;
	if (bVar0)
	{
		bVar9 = ATTACH_SLOT_FROM_STRING(&uVar2);
		if (Function_26())
		{
			Function_43();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, &uVar3, Function_42(&iParam0 + 16, &iVar10), 0, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, Function_41(), Function_42(&iParam0 + 16, &iVar10), 0, bVar9);
	}
	if (IS_GRINGO_COMPONENT_VALID(&uVar4))
	{
		PRINTSTRING("HAVE TARGET ANIM");
		PRINTNL();
		if (IS_GRINGO_COMPONENT_VALID(&bParam2))
		{
			LOG_ERROR("Cannot set a target skeleton anim while one is already playing");
			return;
		}
		if (IS_OBJECT_ANIMATOR_VALID(&bParam3))
		{
			LOG_ERROR("sTargetSkelAnimator not cleared correctly on previous anim");
			DESTROY_OBJECT_ANIMATOR(&bParam3);
		}
		uVar11 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(&uVar4, &iParam0 + 24);
		iVar12 = GRINGO_ANIM_GET_ACT_FILENAME(&uVar4);
		uVar13 = GRINGO_ANIM_GET_ACT_ROOTNODE(&uVar4);
		bParam3 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(&iParam1, &uVar11, &iVar12, &uVar13);
		if (IS_OBJECT_ANIMATOR_VALID(&bParam3))
		{
			if (Function_9(&uVar4, "LinkToUser", 0))
			{
				if (Function_26())
				{
					Function_43();
					PRINTSTRING(" - linking target at slot: ");
					PRINTINT(bVar9);
					PRINTNL();
				}
				LINK_OBJECT_ANIMATOR_TO_ACTOR(&bParam3, &iParam0 + 24, bVar9);
			}
		}
		else
		{
			LOG_ERROR("sTargetSkelAnimator not cleared correctly!");
		}
		bParam2 = &iParam0 + 16;
	}
}

var Function_41() //Position: 0x2D10 / 11536
{
	int iVar0;
	
	return &iVar0;
}

bool Function_42(char* cParam0, int iParam1) //Position: 0x2D19 / 11545
{
	return Function_11(&cParam0, "TargetLocator", &iParam1);
}

void Function_43() //Position: 0x2D38 / 11576
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_44(char* cParam0, int iParam1) //Position: 0x2D47 / 11591
{
	return Function_11(&cParam0, "UserPhysAttachBone", &iParam1);
}

bool Function_45(char* cParam0, int iParam1) //Position: 0x2D6B / 11627
{
	return Function_11(&cParam0, "TargetPhysAttachBone", &iParam1);
}

int Function_46(int iParam0) //Position: 0x2D91 / 11665
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, &iParam0);
}

bool Function_47(var uParam0, int iParam1) //Position: 0x2DAF / 11695
{
	return Function_11(&uParam0, "TargetAttachBone", &iParam1);
}

bool Function_48(var uParam0, int iParam1) //Position: 0x2DD1 / 11729
{
	return Function_11(&uParam0, "TargetAttachSlot", &iParam1);
}

void Function_49(bool bParam0, int iParam1) //Position: 0x2DF3 / 11763
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	uVar0 = GRINGO_GET_FIRST_CHILD(2, &bParam0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		uVar2 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(&uVar0, &iParam1);
		uVar3 = GRINGO_ANIM_GET_ACT_FILENAME(&uVar0);
		uVar4 = GRINGO_ANIM_GET_ACT_ROOTNODE(&uVar0);
		uVar1 = GRINGO_GET_PHYSINST(&bParam0);
		if (IS_PHYSINST_VALID(&uVar1))
		{
			uVar5 = GET_OBJECT_ANIMATOR_ON_OBJECT(&uVar1);
			if (IS_OBJECT_ANIMATOR_VALID(&uVar5))
			{
				LOG_ERROR("Previous object animator not cleared - destroying now!");
				DESTROY_OBJECT_ANIMATOR(&uVar5);
			}
			iVar6 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(&uVar1, &uVar2, &uVar3, &uVar4);
			if (IS_OBJECT_ANIMATOR_VALID(&iVar6))
			{
				LINK_OBJECT_ANIMATOR_TO_ACTOR(&iVar6, &iParam1, GRINGO_GET_PROP_ATTACH_SLOT(&bParam0));
			}
		}
	}
	return;
}

var Function_50(var uParam0, int iParam1, bool bParam2) //Position: 0x2EBB / 11963
{
	int iVar0;
	
	if (bParam2)
	{
		iVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnimMidAction", 2, &iParam1);
		if (IS_GRINGO_COMPONENT_VALID(&iVar0))
		{
			return &iVar0;
		}
	}
	if (IS_ACTOR_PLAYER(&uParam0))
	{
		iVar0 = GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, &iParam1);
		if (IS_GRINGO_COMPONENT_VALID(&iVar0))
		{
			return &iVar0;
		}
	}
	iVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnim", 2, &iParam1);
	return &iVar0;
}

void Function_51(int iParam0, float fParam1) //Position: 0x2F37 / 12087
{
	if (!Function_16(&iParam0))
	{
		Function_52(&iParam0, fParam1);
	}
	return;
}

void Function_52(vector3 vParam0) //Position: 0x2F4F / 12111
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_57(&vParam0, 1);
	Function_39(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_53(int iParam0) //Position: 0x2F74 / 12148
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_13(&iParam0, "RandUseTime", 0.0f));
}

void Function_54(vector3 vParam0) //Position: 0x2F95 / 12181
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_55(var uParam0) //Position: 0x2FAC / 12204
{
	uParam0 = &uParam0;
	return;
}

int Function_56() //Position: 0x2FB8 / 12216
{
	return 1;
}

void Function_57(var uParam0, int iParam1) //Position: 0x2FBF / 12223
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_58(int iParam0, var uParam1, int iParam2) //Position: 0x2FD0 / 12240
{
	float fVar0;
	
	Function_61(&iParam0);
	uParam1 = Function_61(&iParam0);
	iParam2 = Function_60(&iParam0);
	fVar0 = Function_59(&iParam0);
	if (fVar0 < 180.0f)
	{
		fVar0 = 180.0f;
	}
	iParam2 = (iParam2 + RAND_FLOAT_RANGE(-fVar0, fVar0));
	return;
}

int Function_59(int iParam0) //Position: 0x3015 / 12309
{
	return Function_13(&iParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_60(int iParam0) //Position: 0x3041 / 12353
{
	return GRINGO_GET_USE_COMPONENT_HEADING(&iParam0);
}

struct<8> Function_61(int iParam0) //Position: 0x304D / 12365
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	
	if (Function_62(&iParam0))
	{
		uVar2 = GRINGO_GET_PARENT_COMPONENT(&iParam0, 3);
		if (IS_GRINGO_COMPONENT_VALID(&uVar2))
		{
			uVar3 = GET_ACTOR_FROM_OBJECT(GRINGO_GET_COMPONENT_USER(&uVar2));
			if (IS_ACTOR_VALID(&uVar3))
			{
				GRINGO_GET_USE_COMPONENT_POSITION_LOCAL(&Var0, &iParam0);
				GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(&uVar3), Var0, &Var0);
			}
		}
		else
		{
			LOG_ERROR("Can only use 'UsePosActorRelative' attribute on child use cases");
		}
	}
	else if (!GET_GRINGO_RELATIVE_POSITION_ATTR(&Var0, "CentreLocator", &iParam0))
	{
		if (!GET_GRINGO_RELATIVE_POSITION_ATTR(&Var0, "UseLocator", &iParam0))
		{
			if (!GRINGO_GET_USE_COMPONENT_POSITION(&Var0, &iParam0))
			{
				LOG_ERROR("Failed to find use location!");
			}
		}
	}
	return StackVal, Var0;
}

bool Function_62(int iParam0) //Position: 0x314F / 12623
{
	return Function_9(&iParam0, "UsePosActorRelative", 0);
}

int Function_63(int iParam0) //Position: 0x3172 / 12658
{
	return Function_13(&iParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_64(int iParam0) //Position: 0x319A / 12698
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	float fVar6;
	bool bVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	struct<2> Var11;
	struct<2> Var13;
	struct<2> Var15;
	float fVar17;
	var uVar18;
	float fVar19;
	var uVar20;
	float fVar21;
	bool bVar22;
	var uVar23;
	struct<2> Var24;
	struct<2> Var26;
	struct<2> Var28;
	
	GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var4);
	fVar6 = GRINGO_GET_COMPONENT_USER(&iParam0);
	GET_OBJECT_POSITION(&fVar6, &Var0);
	Var0.f_4 = (StackVal + 1.0f);
	Var2 = Var0;
	bVar7 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &iParam0, 0);
	while (bVar7 >= 4294967295)
	{
		uVar8 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar7, &iParam0);
		if (GRINGO_IS_PROP_READY(&uVar8))
		{
			uVar9 = GRINGO_GET_PROP_FROM_COMPONENT(&uVar8);
			uVar10 = GET_OBJECT_FROM_PHYSINST(&uVar9);
			Var11 = Vector(0.0f, 0.0f, 0.0f);
			if (GET_OBJECT_POSITION(&uVar10, &Var11))
			{
				Function_66(StackVal, StackVal, Var2, Var11);
				Var2 = Function_66(StackVal, StackVal, Var2, Var11);
				Function_65(StackVal, StackVal, Var0, Var11);
				Var0 = Function_65(StackVal, StackVal, Var0, Var11);
			}
		}
		bVar7 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &iParam0, bVar7 + 1);
	}
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var0, StackVal);
	Var0 = Vector(Var0, StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f);
	Var13 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, Var2, StackVal);
	Var15 = Var13;
	Var15 = Vector(Var15, StackVal, StackVal) + Vector(2.0f, 2.0f, 2.0f);
	uVar18 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera", 1, 1);
	fVar17 = Function_13(&iParam0, "GringoCamHoldTime", -1.0f);
	if (IS_OBJECT_VALID(&uVar18))
	{
		fVar19 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uVar18, 0);
		uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, &fVar19, Function_41(), Var13, Vector(0.0f, 0.0f, 0.0f));
		ATTACH_OBJECTS_CONTINUOUS(&uVar20, &fVar6, 4294967295);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(&fVar19);
		SET_CAMERASHOT_TARGET_OBJECT(&fVar19, &uVar20, 0);
		SET_CAMERASHOT_POSITION(&fVar19, Var15);
		SET_CAMERASHOT_COLLISION_ENABLED(&fVar19, 0);
		if (fVar17 < -1.0f)
		{
			CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uVar18, 0, fVar17, 4294967295);
		}
		else
		{
			CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uVar18, 0, 4294967295);
		}
		SET_CAMERASHOT_FROM_LENS(&fVar19, 6);
		FORCE_CAMERASHOT_UPDATE(&fVar19);
		fVar21 = 2.0f;
		while (!CAMERASHOT_IS_VISIBLE_ACTOR(&fVar19, GET_ACTOR_FROM_OBJECT(&fVar6), 1065353216, 1117126656, 1, 1, 0) && fVar21 > 10.0f)
		{
			Var15 = (Var15 - fVar21);
			Var15.f_8 = (StackVal - fVar21);
			SET_CAMERASHOT_POSITION(&fVar19, Var15);
			fVar21 = (fVar21 + 1,5f);
		}
		if (!CAMERASHOT_IS_VISIBLE_ACTOR(&fVar19, GET_ACTOR_FROM_OBJECT(&fVar6), 1065353216, 1117126656, 1, 1, 0))
		{
			SET_CAMERASHOT_POSITION(&fVar19, Var4);
			SET_CAMERASHOT_FROM_LENS(&fVar19, 3);
		}
		bVar22 = false;
		uVar23 = GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
		while (IS_OBJECT_VALID(&uVar23) && !bVar22)
		{
			if (GET_OBJECT_TYPE(&uVar23) == 13)
			{
				bVar22 = true;
			}
			uVar23 = GET_OBJECT_OWNER(&uVar23);
		}
		if (bVar22)
		{
			GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &Var24);
			Var26 = Vector(StackVal, StackVal, StackVal) - Vector(Var24, Var15, StackVal);
			ATTACH_CAMERASHOT(StackVal, StackVal, &fVar19, GRINGO_GET_MY_OBJECT_REF(), Var26, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
			Var28 = Vector(StackVal, StackVal, StackVal) - Vector(Var24, Var13, StackVal);
			ATTACH_OBJECTS(StackVal, &uVar20, GRINGO_GET_MY_OBJECT_REF(), Function_41(), Var28, Vector(0.0f, 0.0f, 0.0f), 4294967295);
		}
		PLAY_CUTSCENEOBJECT(&uVar18, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		Function_104("Failed to create gringo camera");
	}
	return;
}

struct<8> Function_65(vector3 vParam0) //Position: 0x3481 / 13441
{
	struct<2> Var0;
	
	if (vParam0.x < vParam2.x)
	{
		Var0 = vParam0.x;
	}
	else
	{
		Var0 = vParam2.x;
	}
	if (vParam0.y < vParam2.y)
	{
		Var0.f_4 = vParam0.y;
	}
	else
	{
		Var0.f_4 = vParam2.y;
	}
	if (vParam0.z < vParam2.z)
	{
		Var0.f_8 = vParam0.z;
	}
	else
	{
		Var0.f_8 = vParam2.z;
	}
	return StackVal, Var0;
}

struct<8> Function_66(vector3 vParam0) //Position: 0x34DE / 13534
{
	struct<2> Var0;
	
	if (vParam0.x > vParam2.x)
	{
		Var0 = vParam0.x;
	}
	else
	{
		Var0 = vParam2.x;
	}
	if (vParam0.y > vParam2.y)
	{
		Var0.f_4 = vParam0.y;
	}
	else
	{
		Var0.f_4 = vParam2.y;
	}
	if (vParam0.z > vParam2.z)
	{
		Var0.f_8 = vParam0.z;
	}
	else
	{
		Var0.f_8 = vParam2.z;
	}
	return StackVal, Var0;
}

void Function_67(int iParam0) //Position: 0x353B / 13627
{
	iParam0 = &iParam0;
	return;
}

bool Function_68(int iParam0) //Position: 0x3547 / 13639
{
	return Function_9(&iParam0, "MaintainPosture", 0);
}

void Function_69(int iParam0) //Position: 0x3566 / 13670
{
	if (!Function_16(&iParam0))
	{
		Function_52(&iParam0, 0.0f);
	}
	return;
}

bool Function_70(var uParam0, int iParam1) //Position: 0x357D / 13693
{
	struct<2> Var0;
	bool bVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	Function_61(&iParam1);
	Var0 = Function_61(&iParam1);
	bVar2 = Function_60(&iParam1);
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_PLAYER(&uParam0))
	{
		TELEPORT_ACTOR_WITH_HEADING(&uParam0, Var0, bVar2, 0, 1, 1);
		return 1;
	}
	if (GRINGO_HANDLES_MOVEMENT(&iParam1) && DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Volume"))
	{
		return Function_74(&uParam0, &iParam1);
	}
	uVar3 = Function_73(&iParam1);
	uVar4 = Function_59(&iParam1);
	Function_71(&iParam1);
	iVar5 = Function_71(&iParam1);
	return GRINGO_ACTOR_MOVE_TO_AND_FACE_WITH_USER_OFFSET(&uParam0, &Var0, &iVar5, uVar3, 0,2f, 1, bVar2, uVar4, 0, 0);
}

struct<8> Function_71(int iParam0) //Position: 0x360E / 13838
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	Function_72(StackVal, &iParam0, "UserOffset", Var0);
	return StackVal, Function_72(StackVal, &iParam0, "UserOffset", Var0);
}

struct<8> Function_72(var uParam0, var uParam1, struct<2> Param2) //Position: 0x3632 / 13874
{
	struct<2> Var0;
	
	Var0 = Param2;
	GET_GRINGO_VECTOR_ATTR(&Var0, &uParam1, &uParam0);
	return StackVal, Var0;
}

int Function_73(int iParam0) //Position: 0x3651 / 13905
{
	return Function_13(&iParam0, "UseLocationTolerance", 0.0f);
}

int Function_74(var uParam0, int iParam1) //Position: 0x3675 / 13941
{
	bool bVar0;
	float fVar1;
	var uVar2;
	bool bVar4;
	var uVar5;
	var uVar6;
	var uVar8;
	var uVar10;
	var uVar12;
	struct<2> Var13;
	var uVar15;
	bool bVar17;
	
	bVar0 = Function_73(&iParam1);
	fVar1 = Function_59(&iParam1);
	if (!GET_GRINGO_BOOL_ATTR("RandomPointSet", &iParam1, &uVar5))
	{
		bVar4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
		uVar12 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "Volume"));
		if (IS_ACTOR_IN_VOLUME(&uParam0, &uVar12) && DECOR_CHECK_EXIST(&uParam0, "VolOnly"))
		{
			return 1;
		}
		GENERATE_RANDOM_POINT_IN_VOLUME(&uVar12, &uVar6);
		FIND_VOL_SURFACE_POINTS_FOR_POINT(&uVar12, &uVar6, &uVar8, &uVar10);
		bVar17 = false;
		bVar17 = FIND_INTERSECTION(&uVar8, &uVar10, &Var13, &uVar15, 1, 4294967295, 4194304);
		if (bVar17)
		{
			uVar2 = Var13;
			SET_GRINGO_VECTOR_ATTR(&Var13, "RandomPoint", &iParam1);
			SET_GRINGO_FLOAT_ATTR(bVar4, "RandomDirection", &iParam1);
			SET_GRINGO_BOOL_ATTR(1, "RandomPointSet", &iParam1);
		}
		else
		{
			return 0;
		}
	}
	GET_GRINGO_VECTOR_ATTR(&uVar2, "RandomPoint", &iParam1);
	return GRINGO_ACTOR_MOVE_TO_AND_FACE(&uParam0, &uVar2, bVar0, 0,2f, 1, bVar4, fVar1, 1, 0);
}

bool Function_75(var uParam0, int iParam1) //Position: 0x379D / 14237
{
	iParam1 = Function_13(&uParam0, "AreaClearCheck", -1.0f);
	if (iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_76(var uParam0) //Position: 0x37CB / 14283
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	
	uVar0 = GET_TARGET_OBJECT();
	if (IS_OBJECT_VALID(&uVar0))
	{
		if (!GRINGO_IS_TARGET_OBJECT_READY())
		{
			return 0;
		}
	}
	bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uParam0, 0);
	while (bVar1 >= 4294967295)
	{
		if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, &uParam0)))
		{
			return 0;
		}
		bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uParam0, bVar1 + 1);
	}
	bVar2 = false;
	iVar4 = GRINGO_GET_ATTRIBUTE(&uParam0, bVar2);
	iVar6 = STRING_TO_HASH("SharedPropName");
	while (bVar2 <= GRINGO_GET_ATTRIBUTE_COUNT(&uParam0))
	{
		iVar4 = GRINGO_GET_ATTRIBUTE(&uParam0, bVar2);
		if (GRINGO_IS_ATTRIBUTE_VALID(&iVar4))
		{
			if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(&iVar4) == 2)
			{
				if (iVar6 == GRINGO_GET_ATTRIBUTE_HASH(&iVar4))
				{
					uVar5 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&iVar4, &uVar3);
					bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar5, 1, GRINGO_GET_PARENT_COMPONENT(&uParam0, 0), 0);
					while (bVar1 >= 4294967295)
					{
						if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, GRINGO_GET_PARENT_COMPONENT(&uParam0, 0))))
						{
							return 0;
						}
						bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar5, 1, GRINGO_GET_PARENT_COMPONENT(&uParam0, 0), bVar1 + 1);
					}
				}
			}
		}
		bVar2++;
	}
	return 1;
}

bool Function_77(var uParam0, int iParam1) //Position: 0x38E4 / 14564
{
	return (uParam0 && iParam1) == 0;
}

void Function_78(struct<69> Param0) //Position: 0x38F1 / 14577
{
	if (Function_77(Param0.f_64, 16))
	{
		if (Param0.f_68 > 5 && Param0.f_68 < 1)
		{
			if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
			{
				Function_2("UNSUSPEND MOVER", &Param0 + 24);
				ENABLE_MOVER(&Param0 + 24);
			}
			if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
			{
				Function_2("UNFIX MOVER", &Param0 + 24);
				SET_MOVER_FROZEN(&Param0 + 24, false);
			}
		}
	}
	return;
}

void Function_79(struct<69> Param0) //Position: 0x3973 / 14707
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	bool bVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	bool bVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	
	if (bParam1)
	{
		Function_2("<<<STOP USE [delay allowed]", &Param0 + 24);
	}
	else
	{
		Function_2("<<<STOP USE [NO delay allowed]", &Param0 + 24);
	}
	Function_11(&Param0 + 16, "CustomReactNode", &bVar0);
	if (bVar0)
	{
		if (IS_ACTOR_VALID(&Param0 + 24))
		{
			RESET_REACT_NODE_FOR_ACTOR(&Param0 + 24);
		}
	}
	iVar1 = 1;
	bVar2 = Function_9(&Param0 + 16, "CanAnimalsAttack", iVar1);
	if (!bVar2)
	{
		if (IS_ACTOR_VALID(&Param0 + 24))
		{
			SET_ANIMAL_CAN_ATTACK(&Param0 + 24, 1);
		}
	}
	bVar3 = Function_9(&Param0 + 16, "AllowTalking", 1);
	if (!bVar3)
	{
		STOP_PED_SPEAKING(&Param0 + 24, 0);
	}
	if (Param0.f_68 < 8)
	{
		Function_20(&Param0 + 24, &Param0 + 16);
	}
	if ((HAS_INVENTORY_COMPONENT(&Param0 + 24) && Function_77(Param0.f_64, 32)) && Function_9(&Param0 + 16, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(&Param0 + 24, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_85(&Param0 + 24, &Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		GRINGO_REPORT_USE_FINISHED(&Param0 + 24, Function_77(Param0.f_64, 64));
		Function_19(&Param0 + 24, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
		if (!Function_9(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_77(Param0.f_64, 128) && Function_9(&Param0 + 16, "RedrawWeapon", 1))
			{
				ACTOR_END_FORCE_HOLSTER(&Param0 + 24);
			}
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&Param0 + 24);
			if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16) && IS_OBJECT_VALID(GET_TARGET_OBJECT()))
			{
				uVar4 = GET_PROP_FROM_OBJECT(GET_TARGET_OBJECT());
				if (IS_PHYSINST_VALID(&uVar4))
				{
					SUPRESS_MOVER_COLLISIONS(&Param0 + 24, &uVar4, 0);
				}
			}
			if (Function_37(&Param0 + 16))
			{
				CLEAR_LINKED_ANIM_TARGET(&Param0 + 24);
			}
			if (Function_77(Param0.f_64, 16))
			{
				Function_78(&Param0);
				Function_39(&Param0 + 64, 16);
			}
			if (Function_77(Param0.f_64, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, false);
			}
			if (Function_84(&Param0 + 16) && Function_77(Param0.f_64, 512))
			{
				Function_39(&Param0 + 64, 512);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 1);
				Function_2("Allow Bump Reactions", &Param0 + 24);
			}
		}
		if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
		{
			GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 1);
		}
	}
	bVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, 0);
	while (bVar5 >= 4294967295)
	{
		uVar6 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar5, &Param0 + 16);
		uVar7 = GRINGO_GET_PHYSINST(&uVar6);
		if (IS_PHYSINST_VALID(&uVar7))
		{
			uVar8 = GET_OBJECT_ANIMATOR_ON_OBJECT(GET_OBJECT_FROM_PHYSINST(&uVar7));
			if (IS_OBJECT_ANIMATOR_VALID(&uVar8))
			{
				RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(&uVar8));
			}
			if (!IS_ACTOR_VALID(&Param0 + 24))
			{
				RESET_PROP(&uVar7);
			}
		}
		bVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, bVar5 + 1);
	}
	if (Function_35(&Param0 + 16))
	{
		uVar9 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
		if (IS_GRINGO_COMPONENT_VALID(&uVar9))
		{
			uVar10 = Function_36(&uVar9);
			if (IS_ACTOR_VALID(&uVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(&uVar10);
			}
		}
	}
	Function_83(&Param0 + 16);
	bVar11 = Function_9(&Param0 + 16, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(&Param0 + 24))
		{
			Function_82(&Param0, GET_TARGET_OBJECT());
		}
		uVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(&uVar12))
		{
			if (Function_77(Param0.f_64, 256))
			{
				Function_39(&Param0 + 64, 256);
				SET_PROP_FIXED(&uVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(&Param0 + 56))
	{
		DESTROY_OBJECT(&Param0 + 56);
	}
	if (&Param0 + 16 == &iLocal_130)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(&uLocal_128));
		iLocal_130 = &uVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 0);
	if (Function_38(&Param0 + 16))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 1);
	}
	if (IS_ATTACHMENT_VALID(&Param0 + 48))
	{
		REMOVE_OBJECT_ATTACHMENT(&Param0 + 48);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_133))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_133);
	}
	SET_GRINGO_OBJECT_REF_ATTR(&uVar14, "UserObject", &Param0 + 16);
	Function_54(&Param0);
	Function_69(&Param0);
	GRINGO_CLEAR_COMPONENT_USER(&Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24) && bParam1)
	{
		Function_2("Setting reuse delay", &Param0 + 24);
		GRINGO_SET_REUSE_DELAY(Function_81(&Param0 + 16), &Param0 + 16);
	}
	Function_39(&Param0 + 64, 2);
	if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &Param0 + 16);
	}
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
		{
			Function_80();
		}
	}
	else
	{
		Function_80();
	}
	Param0.f_68 = 0;
	(&Param0 + 24) = "";
	return;
}

void Function_80() //Position: 0x3F1E / 16158
{
	int iVar0;
	
	if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
	{
		iVar0 = FIND_OBJECT_IN_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera");
		if (IS_OBJECT_VALID(&iVar0))
		{
			DESTROY_OBJECT(&iVar0);
			CAMERA_RESET(0);
		}
	}
	return;
}

int Function_81(int iParam0) //Position: 0x3F58 / 16216
{
	return Function_13(&iParam0, "ReuseDelay", 15.0f);
}

void Function_82(int iParam0, var uParam1) //Position: 0x3F76 / 16246
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_48(&iParam0 + 16, &uVar0);
	Function_47(&iParam0 + 16, &uVar1);
	iVar2 = Function_46(&iParam0 + 16);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(&iVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(&uParam1);
	return;
}

void Function_83(int iParam0) //Position: 0x3FB7 / 16311
{
	iParam0 = &iParam0;
	return;
}

bool Function_84(int iParam0) //Position: 0x3FC3 / 16323
{
	return Function_9(&iParam0, "BlockBumpReactions", 0);
}

void Function_85(int iParam0, int iParam1) //Position: 0x3FE5 / 16357
{
	iParam1 = &iParam1;
	iParam0 = &iParam0;
	return;
}

void Function_86(var uParam0, bool bParam1) //Position: 0x3FF7 / 16375
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (&bParam1)
		{
			Function_104("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
		{
			if (&bParam1)
			{
				Function_104("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_133))
			{
				if (&bParam1)
				{
					Function_104("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(&bLocal_133);
			}
		}
	}
	if (&bParam1)
	{
		Function_104("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_87(int iParam0, int iParam1) //Position: 0x4108 / 16648
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam1, &iParam0, 0, 0, 0);
	return;
}

void Function_88(struct<69> Param0) //Position: 0x4120 / 16672
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	*(&Param0 + 24) = GRINGO_GET_REQUESTING_ACTOR();
	if (!IS_ACTOR_VALID(&Param0 + 24))
	{
		LOG_ERROR("Invalid actor in StartDoingRequestedTask");
		return;
	}
	uVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	*(&Param0 + 16) = &uVar0;
	if (GRINGO_GET_USE_REQUIRES_OBSTACLE(&uVar0))
	{
		if (IS_ACTOR_HORSE(&Param0 + 24))
		{
			*(&Param0 + 56) = CREATE_OBSTACLE_ON_OBJECT(StackVal, StackVal, StackVal, &Param0 + 24, "ngringoObs", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1,75f, 2.0f));
		}
		else
		{
			*(&Param0 + 56) = CREATE_OBSTACLE_ON_OBJECT(StackVal, StackVal, StackVal, &Param0 + 24, "ngringoObs", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(0,5f, 1.0f, 0,5f));
		}
		ATTACH_OBJECTS(StackVal, StackVal, &Param0 + 56, &Param0 + 24, Function_41(), Vector(0.0f, 1.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	Function_54(&Param0);
	Function_2("Going to eGringoPositioning", &Param0 + 24);
	Param0.f_68 = 2;
	Function_57(&Param0 + 64, 2);
	Function_39(&Param0 + 64, 8);
	Function_39(&Param0 + 64, 16);
	Function_39(&Param0 + 64, 64);
	SET_GRINGO_OBJECT_REF_ATTR(&Param0 + 24, "UserObject", &uVar0);
	GRINGO_SET_COMPONENT_USER(&Param0 + 24, &uVar0);
	if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16) && IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		uVar1 = GET_PROP_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(&uVar1))
		{
			SUPRESS_MOVER_COLLISIONS(&Param0 + 24, &uVar1, 1);
		}
	}
	SET_GRINGO_OBJECT_REF_ATTR(&uVar2, "LastUserObject", &Param0 + 16);
	if (!Function_91(&Param0 + 16))
	{
		if (HAS_INVENTORY_COMPONENT(&Param0 + 24))
		{
			if (ACTOR_HOLSTER_WEAPON(&Param0 + 24, 1))
			{
				Function_57(&Param0 + 64, 32);
			}
			else
			{
				Function_39(&Param0 + 64, 32);
			}
		}
		else
		{
			Function_39(&Param0 + 64, 32);
		}
		if (Function_77(Param0.f_64, 32))
		{
			Function_57(&Param0 + 64, 128);
		}
		else
		{
			Function_39(&Param0 + 64, 128);
		}
	}
	else
	{
		Function_39(&Param0 + 64, 32);
	}
	if (Function_90(&Param0 + 16))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, true), 1))
			{
				Function_57(&Param0 + 64, 128);
			}
		}
		else
		{
			Function_57(&Param0 + 64, 128);
		}
	}
	if (Function_84(&Param0 + 16))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24))
		{
			Function_57(&Param0 + 64, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 0);
			Function_2("Block Bump Reactions", &Param0 + 24);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
	Function_89(&Param0 + 24, &uVar0);
	Function_2("START: ", &Param0 + 24);
	return;
}

void Function_89(int iParam0, int iParam1) //Position: 0x443C / 17468
{
	iParam1 = &iParam1;
	iParam0 = &iParam0;
	return;
}

bool Function_90(int iParam0) //Position: 0x444E / 17486
{
	return Function_9(&iParam0, "DrawWeapon", 0);
}

bool Function_91(int iParam0) //Position: 0x4468 / 17512
{
	return Function_9(&iParam0, "AllowWeapon", 0);
}

void Function_92(int iParam0, var uParam1) //Position: 0x4483 / 17539
{
	bool bVar0;
	int iVar1;
	
	iParam0 = &iParam0;
	iVar1 = Function_93(&uParam1, &bVar0);
	if (!bVar0)
	{
		if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
		{
			if (IS_ACTOR_LOCAL_PLAYER(GRINGO_GET_REQUESTING_ACTOR()))
			{
				iVar1 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
			}
		}
	}
	GRINGO_SET_REQUEST_STRING(&iVar1);
	return;
}

bool Function_93(var uParam0, int iParam1) //Position: 0x44C1 / 17601
{
	return Function_11(&uParam0, "UseName", &iParam1);
}

bool Function_94(struct<65> Param0) //Position: 0x44DA / 17626
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	bool bVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	struct<2> Var8;
	struct<2> Var10;
	float fVar12;
	bool bVar13;
	char* cVar14[64];
	bool bVar30;
	float fVar31;
	
	uVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	uVar1 = GRINGO_GET_REQUESTING_ACTOR();
	GRINGO_GET_USER_POS_WITH_OFFSET(&Var2, &uVar1, &uVar0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		bVar4 = GRINGO_IS_CHARACTER_BLEND_PAUSED(&uVar0);
		if (GET_ACTOR_GAIT_TYPE(&uVar1) != 4 && !bVar4)
		{
			return 0;
		}
		if (ACTOR_HAS_ANIM_SET(&uVar1, "stand_hostage") && !Function_9(&Param0 + 16, "CutFreeGringo", 0))
		{
			return 0;
		}
		if (IS_ACTOR_LOCAL_PLAYER(&uVar1))
		{
			if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&uVar1)))
			{
				iVar5 = 0;
				GET_GRINGO_BOOL_ATTR("IsHogtieFriendly", &uVar0, &iVar5);
				if (iVar5 == 0)
				{
					return 0;
				}
			}
		}
		if (Global_6606)
		{
			if (IS_ACTOR_LOCAL_PLAYER(&uVar1))
			{
				if (!Function_99(6))
				{
					return 0;
				}
			}
		}
		if (IS_ACTOR_LOCAL_PLAYER(&uVar1))
		{
			if (IS_PLAYER_USING_COVER(0))
			{
				return 0;
			}
		}
		if (FIRE_IS_ACTOR_ON_FIRE(&uVar1) && !bVar4)
		{
			return 0;
		}
		if (GET_ACTOR_INCAPACITATED(&uVar1))
		{
			return 0;
		}
		if (!Function_98(&uVar1, &Param0 + 16))
		{
			GRINGO_SET_REQUEST_FAILURE_REASON(1);
			return 0;
		}
		if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
		{
			if (DECOR_CHECK_EXIST(GET_TARGET_OBJECT(), "Gringo_PropInUse"))
			{
				GRINGO_SET_REQUEST_FAILURE_REASON(2);
				return 0;
			}
		}
		uVar6 = GET_TARGET_OBJECT();
		if (IS_OBJECT_VALID(&uVar6))
		{
			uVar7 = GET_PROP_FROM_OBJECT(&uVar6);
			if (IS_PHYSINST_VALID(&uVar7))
			{
				if (HAS_PHYSINST_BROKEN_APART(&uVar7))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(3);
					return 0;
				}
			}
		}
		if (!Function_77(Param0.f_64, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_57(&Param0 + 64, 1);
			}
			else
			{
				Function_39(&Param0 + 64, 1);
			}
			if (Function_77(Param0.f_64, 1))
			{
				Function_87("MIDACTION REQUEST", &uVar1);
			}
			else
			{
				Function_61(&Param0 + 16);
				Var8 = Function_61(&Param0 + 16);
				Var10 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var8, StackVal);
				fVar12 = Function_97(&Param0 + 16);
				bVar13 = VMAG(Var10);
				if (bVar13 < fVar12 && !GRINGO_HANDLES_MOVEMENT(&uVar0))
				{
					strcpy(&cVar14, "nTOO FAR (", 64);
					straddi(&cVar14, FLOOR((bVar13 * 10.0f)), 64);
					stradd(&cVar14, " > ", 64);
					straddi(&cVar14, FLOOR((fVar12 * 10.0f)), 64);
					stradd(&cVar14, ")", 64);
					GRINGO_SET_REQUEST_FAILURE_REASON(5);
					return 0;
				}
				if (!Function_96(&uVar1, &Param0 + 16))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar30 = Function_95(&Param0 + 16);
				if (!bVar30 != 0.0f)
				{
					if (bVar30 < 0.0f)
					{
						fVar31 = (UNK_0x9C40E671(&Var10) - Function_60(&Param0 + 16));
					}
					else
					{
						fVar31 = ((180.0f + UNK_0x9C40E671(&Var10)) - Function_60(&Param0 + 16));
					}
					if (fVar31 < 180.0f)
					{
						fVar31 = (fVar31 - 360.0f);
					}
					else if (fVar31 > -180.0f)
					{
						fVar31 = (fVar31 + 360.0f);
					}
					if (fVar31 < FABS(bVar30))
					{
						GRINGO_SET_REQUEST_FAILURE_REASON(7);
						return 0;
					}
				}
			}
			iParam1 = 1;
			return 1;
		}
		if (&Param0 + 24 == GRINGO_GET_REQUESTING_ACTOR())
		{
			iParam1 = 0;
			return 1;
		}
	}
	GRINGO_SET_REQUEST_FAILURE_REASON(8);
	return 0;
}

int Function_95(int iParam0) //Position: 0x47D2 / 18386
{
	return Function_13(&iParam0, "ActivationCone", 0.0f);
}

bool Function_96(var uParam0, int iParam1) //Position: 0x47F0 / 18416
{
	struct<5> Var0;
	float fVar5;
	
	fVar2 = GRINGO_GET_USE_COMPONENT_HEADING(&iParam1);
	bVar3 = GET_HEADING(&uParam0);
	fVar4 = Function_13(&iParam1, "HeadingTolerance", -1.0f);
	fVar5 = (fVar2 - bVar3);
	if (fVar4 != -1.0f)
	{
		return 1;
	}
	Function_61(&iParam1);
	Var0 = Function_61(&iParam1);
	GET_POSITION(&uParam0, &Var0);
	Var0.f_4 = (StackVal + 1,5f);
	Function_61(&iParam1);
	Var0 = Function_61(&iParam1);
	Var0.f_4 = (StackVal + 1,5f);
	if (fVar5 > 0.0f)
	{
		fVar5 = (fVar5 + 360.0f);
	}
	if (fVar5 <= (360.0f - fVar4) || fVar5 >= fVar4)
	{
		return 1;
	}
	return 0;
}

int Function_97(int iParam0) //Position: 0x4890 / 18576
{
	return Function_13(&iParam0, "ActivationRadius", 2.0f);
}

bool Function_98(int iParam0, var uParam1) //Position: 0x48B0 / 18608
{
	uParam1 = &uParam1;
	iParam0 = &iParam0;
	return 1;
}

bool Function_99(int iParam0) //Position: 0x48C3 / 18627
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_100(int iParam0) //Position: 0x48DF / 18655
{
	iParam0 = &iParam0;
	return;
}

void Function_101(var uParam0, int iParam1) //Position: 0x48EB / 18667
{
	bool bVar0;
	var uVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, &uParam0))
	{
		Function_102(&(vLocal_14[iLocal_1249]), &uParam0);
		iLocal_124++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(&uParam0) >= 0)
	{
		bVar0 = false;
		bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0);
		while (bVar0 <= 0 && iParam1 > 6)
		{
			uVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar0, &uParam0);
			Function_101(&uVar1, &iParam1);
			bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0 + 1);
		}
	}
	return;
}

void Function_102(int iParam0, int iParam1) //Position: 0x4957 / 18775
{
	*(&iParam0 + 16) = &iParam1;
	Function_39(&iParam0 + 64, 1);
	return;
}

void Function_103(int iParam0) //Position: 0x496F / 18799
{
	struct<2> Var0;
	var uVar2;
	
	iParam0 = &iParam0;
	iLocal_2 = 0;
	iLocal_12 = 0;
	iLocal_13 = 0;
	uLocal_5 = CREATE_EVENT_TRAP("WinchLeverHit", 5, GRINGO_GET_MY_OBJECT_REF());
	if (IS_OBJECT_VALID(&uLocal_5))
	{
		GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &Var0);
		uVar2 = GET_OBJECT_FROM_PHYSINST(LOCATE_PHYSINST_OF_PARTIAL_TYPE(Var0, 1.0f, "p_cus_lever01x", 1));
		if (IS_OBJECT_VALID(&uVar2))
		{
			EVENT_TRAP_ON_TARGET(&uLocal_5, &uVar2);
			EVENT_TRAP_ON_PERPETRATOR(&uLocal_5, GET_PLAYER_ACTOR(0));
		}
		else
		{
			LOG_ERROR("Failed to find event trap target for 'Lever', partial name 'p_cus_lever01x'!");
		}
	}
	else
	{
		LOG_ERROR("Failed to create event trap for 'Lever' being shot!");
	}
	return;
}

void Function_104(int iParam0) //Position: 0x4A7D / 19069
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam0, 0, 0, 0);
	return;
}

