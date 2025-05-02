//Decompiled with MagicRDR v1.0
//Function Count : 114
//Statics Count : 208
//Natives Count : 242
//Parameters Count : 2

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	struct<2> Local_2[16];
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	struct<5> Local_78 = { 0, 0, 0, 0, 0 } ;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	struct<9> Local_85[6];
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	int iLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	int iLocal_201 = 0;
	var uLocal_202 = 0;
	bool bLocal_203 = false;
	bool bLocal_204 = false;
	var uLocal_205 = 0;
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
	int iVar5;
	
	iLocal_72 = 1;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_113("STARTS");
	Function_112(&uScriptParam_0);
	iLocal_195 = 0;
	Function_110(&uScriptParam_0, &iLocal_195);
	while (IS_GRINGO_ACTIVE())
	{
		Function_109(&uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		uVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(&uVar1))
		{
			GET_OBJECT_POSITION(&uVar1, &uLocal_196);
		}
		iVar2 = 0;
		bLocal_203 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_195 - 1))
			{
				if (&vLocal_85[iVar09] + 16 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_195;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				iVar5 = 0;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_203 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_102(&(vLocal_85[iVar39]), &bVar4))
						{
							Function_100(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_85[iVar39] + 16);
							iVar5 = 1;
						}
						break;
					
					case 0x00000001:
						if (Function_102(&(vLocal_85[iVar39]), &bVar4))
						{
							Function_100(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_85[iVar39] + 16);
							if (bVar4)
							{
								Function_95(&(vLocal_85[iVar39]));
							}
							iVar5 = 1;
						}
						break;
					
					case 0x00000002:
						if (&vLocal_85[iVar39] + 24 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_94("eGRINGO_EndUse: Stop use by request", &vLocal_85[iVar39] + 24);
							Function_93(&vLocal_85[iVar39] + 24, 1);
							if (IS_ACTOR_VALID(&vLocal_85[iVar39] + 24))
							{
								if (IS_ACTOR_LOCAL_PLAYER(&vLocal_85[iVar39] + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&vLocal_85[iVar39] + 16))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(&vLocal_85[iVar39] + 24, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_85(&(vLocal_85[iVar39]), 0);
							}
							else if (vLocal_85[iVar39].f_68 < 8)
							{
								Function_84(&(vLocal_85[iVar39]));
								vLocal_85[iVar39].f_68 = 8;
							}
							iVar5 = 1;
						}
						else
						{
							Function_113("Stop use request actor mismatch!!");
						}
						break;
				}
				GRINGO_SET_MESSAGE_RETURN(iVar5);
			}
			else
			{
				GRINGO_SET_MESSAGE_RETURN(0);
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < (iLocal_195 - 1))
			{
				if (Function_83(vLocal_85[iVar09].f_64, 2))
				{
					if (!Function_16(&(vLocal_85[iVar09])))
					{
						Function_113("Quitting due to update end");
						Function_85(&(vLocal_85[iVar09]), 1);
					}
				}
				if (Function_15(&(vLocal_85[iVar09]), 0))
				{
					Function_5(&(vLocal_85[iVar09]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_195 - 1))
		{
			if (Function_83(vLocal_85[iVar09].f_64, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(&uScriptParam_0))
		{
			if (bLocal_203)
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_204))
	{
		Function_113("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_204);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_195 - 1))
	{
		if (Function_83(vLocal_85[iVar09].f_64, 2))
		{
			Function_2("Gringo termination calls StopUse", &vLocal_85[iVar09] + 24);
			Function_85(&(vLocal_85[iVar09]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(&vLocal_85[iVar09] + 16))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &vLocal_85[iVar09] + 16);
		}
		Function_15(&(vLocal_85[iVar09]), 1);
		iVar0++;
	}
	Function_1(&uScriptParam_0);
	Function_113("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x439 / 1081
{
	iParam0 = &iParam0;
	return;
}

void Function_2(bool bParam0, char* cParam1) //Position: 0x445 / 1093
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

var Function_3() //Position: 0x487 / 1159
{
	return iLocal_82;
}

int Function_4(int iParam0) //Position: 0x48F / 1167
{
	iParam0 = &iParam0;
	return 0;
}

void Function_5(struct<69> Param0) //Position: 0x49C / 1180
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_83(Param0.f_64, 2))
	{
		Function_93(&Param0 + 24, 0);
	}
	else if (UNK_0x0A0E660E() || Function_14(&Param0))
	{
		if (Param0.f_68 == 6)
		{
			if (Function_12(&Param0) <= Function_10(&Param0 + 16))
			{
				if (IS_ACTOR_VALID(&Param0 + 24))
				{
					if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
					{
						if (UNK_0x0A0E660E() || !Global_6663)
						{
							iVar1 = Function_8(&Param0 + 16, &bVar0);
							if (!bVar0 && UNK_0x0A0E660E())
							{
								iVar1 = "nDisengage";
								bVar0 = true;
							}
							if (bVar0)
							{
								bLocal_203 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_204))
								{
									Function_113("ManagePlayerQuit: Create quit context");
									if (Function_7(&Param0 + 16, "UseQuitBOverride", 0))
									{
										bLocal_204 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@UI.CANCEL", 0, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_204 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(&bLocal_204))
								{
									Function_2("USE CONTEXT QUIT", &Param0 + 24);
									Function_84(&Param0);
									Param0.f_68 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_204))
									{
										Function_113("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(&bLocal_204);
										iVar2 = 0;
										if (GET_GRINGO_BOOL_ATTR("DeactivateChildren", &Param0 + 16, &iVar2))
										{
											GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 0);
										}
									}
								}
								if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
								{
									if (Function_6(&Param0 + 24))
									{
										Function_84(&Param0);
										Function_2("STICK QUIT", &Param0 + 24);
										Param0.f_68 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_204))
										{
											Function_113("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(&bLocal_204);
										}
									}
								}
							}
						}
						else if (Global_6663)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_204))
							{
								Function_113("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(&bLocal_204);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_204))
		{
			Function_113("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(&bLocal_204);
		}
	}
	return;
}

bool Function_6(int iParam0) //Position: 0x7D0 / 2000
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
		DECOR_SET_BOOL(&iParam0, "StickReset", 1);
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

bool Function_7(bool bParam0, var uParam1, int iParam2) //Position: 0x8E9 / 2281
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

bool Function_8(char* cParam0, int iParam1) //Position: 0x907 / 2311
{
	return Function_9(&cParam0, "UseQuit", &iParam1);
}

bool Function_9(char* cParam0, char* cParam1, int iParam2) //Position: 0x920 / 2336
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
			return &iLocal_83;
		}
		return &iVar1;
	}
	return &iLocal_83;
}

float Function_10(int iParam0) //Position: 0x970 / 2416
{
	return Function_11(&iParam0, "MinimumUseTime", 0.0f);
}

int Function_11(float fParam0, var uParam1, int iParam2) //Position: 0x98E / 2446
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, &uParam1, &fParam0);
	return iVar0;
}

float Function_12(vector3 vParam0) //Position: 0x9A6 / 2470
{
	if (Function_14(&vParam0))
	{
		if (Function_13(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_13(int iParam0) //Position: 0xA73 / 2675
{
	return Function_83(iParam0, 2);
}

bool Function_14(int iParam0) //Position: 0xA81 / 2689
{
	return Function_83(iParam0, 1);
}

bool Function_15(int iParam0, int iParam1) //Position: 0xA8F / 2703
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

bool Function_16(struct<69> Param0) //Position: 0xADC / 2780
{
	bool bVar0;
	char[] cVar1[4];
	int iVar2;
	struct<2> Var3;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
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
	int iVar47;
	var uVar48;
	var uVar49;
	int iVar50;
	int iVar51;
	var uVar52;
	struct<2> Var53;
	bool bVar55;
	
	bVar11 = Function_82(&Param0 + 16);
	if (!(IS_ACTOR_VALID(&Param0 + 24) && IS_ACTOR_ALIVE(&Param0 + 24)))
	{
		Function_94("UpdateUse with invalid actor", &Param0 + 24);
		return 0;
	}
	if (!Function_7(&Param0 + 16, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Param0 + 24)) >= 0,5f)
		{
			Function_94("Damage quit", &Param0 + 24);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(&Param0 + 24))
	{
		Function_94("Incapacitation quit", &Param0 + 24);
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
			bLocal_203 = true;
			if (IS_ACTOR_PLAYER(&Param0 + 24))
			{
				if (Function_81(&Param0 + 16, &fVar22))
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
						DECOR_SET_BOOL(GRINGO_GET_MY_OBJECT_REF(), "Obstructed", 1);
						Param0.f_68 = 7;
						Function_2("Skip to eRewarding", &Param0 + 24);
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
			{
				if (Function_76(&Param0 + 24, &Param0 + 16))
				{
					Function_2("Navigation complete (going to eStarting)", &Param0 + 24);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
					Param0.f_68 = 1;
					Function_75(&Param0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Param0.f_68 = 1;
				Function_75(&Param0);
			}
			if (!Function_74(&Param0 + 16) && Param0.f_68 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", &Param0 + 24);
				SET_ACTOR_POSTURE(&Param0 + 24, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_203 = true;
			Function_73(&Param0 + 16);
			if (((!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24)) && !Function_83(Param0.f_64, 1)) && !DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
			{
				Function_70(&Param0 + 16);
			}
			fVar18 = Function_69(&Param0 + 16);
			if (Function_12(&Param0) < fVar18)
			{
				Function_2("INTRO TIMED OUT - ABORTING", &Param0 + 24);
				return 0;
			}
			if (Function_83(Param0.f_64, 1))
			{
				Function_64(&Param0 + 16, &Var3, &uVar5);
				if (!Function_83(Param0.f_64, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
					{
						Function_2("SUSPEND MOVER", &Param0 + 24);
						SUSPEND_MOVER(&Param0 + 24);
						Function_63(&Param0 + 64, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
					{
						Function_2("nFIX MOVER", &Param0 + 24);
						SET_MOVER_FROZEN(&Param0 + 24, 1);
						Function_63(&Param0 + 64, 16);
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
					TELEPORT_ACTOR_WITH_HEADING(&Param0 + 24, Var3, uVar5, 1, 1, Function_62());
				}
				if (!Function_83(Param0.f_64, 1024))
				{
					Function_63(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_7(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			else if (Function_76(&Param0 + 24, &Param0 + 16))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Function_2("FINISHED NAVIGATION", &Param0 + 24);
				if (!Function_83(Param0.f_64, 1024))
				{
					Function_63(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_7(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			if (Param0.f_68 != 3 && !Function_83(Param0.f_64, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
				{
					Function_2("SUSPEND MOVER", &Param0 + 24);
					SUSPEND_MOVER(&Param0 + 24);
					Function_63(&Param0 + 64, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
				{
					Function_2("nFIX MOVER", &Param0 + 24);
					SET_MOVER_FROZEN(&Param0 + 24, 1);
					Function_63(&Param0 + 64, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_83(Param0.f_64, 32))
			{
				bLocal_203 = true;
				if (!ACTOR_IS_HOLSTERED(&Param0 + 24))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", &Param0 + 24);
			}
			Param0.f_68 = 4;
		
		case 0x00000004:
			Function_61(&Param0 + 16);
			bLocal_203 = true;
			Function_60(&Param0);
			Function_57(&Param0, Function_59(&Param0 + 16));
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 0);
			}
			bVar29 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", &Param0 + 16, &iVar28);
			if (iVar28 == 0)
			{
				bVar29 = Function_83(Param0.f_64, 1);
			}
			bVar0 = Function_56(&Param0 + 24, &Param0 + 16, bVar29);
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
					iVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, 0);
					while (iVar10 >= 4294967295)
					{
						cVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar10, &Param0 + 16);
						if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &cVar1, Function_9(&cVar1, "AttachBone", &bVar9), Function_9(&cVar1, "AttachLocator", &bVar9), 1))
						{
							Function_55(&cVar1, &Param0 + 24);
							if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
							{
								uVar30 = GRINGO_GET_PROP_FROM_COMPONENT(&cVar1);
								if (IS_PHYSINST_VALID(&uVar30))
								{
									ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), &uVar30, 0);
								}
							}
						}
						iVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, iVar10 + 1);
					}
					iVar12 = 0;
					uVar14 = GRINGO_GET_ATTRIBUTE(&Param0 + 16, iVar12);
					while (iVar12 <= GRINGO_GET_ATTRIBUTE_COUNT(&Param0 + 16))
					{
						uVar14 = GRINGO_GET_ATTRIBUTE(&Param0 + 16, iVar12);
						if (GRINGO_IS_ATTRIBUTE_VALID(&uVar14))
						{
							if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(&uVar14) == 2)
							{
								if (iVar21 == GRINGO_GET_ATTRIBUTE_HASH(&uVar14))
								{
									uVar15 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&uVar14, &uVar13);
									iVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar15, 1, GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 0), 0);
									while (iVar10 >= 4294967295)
									{
										cVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar10, GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 0));
										if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &cVar1, Function_9(&cVar1, "AttachBone", &bVar9), Function_9(&cVar1, "AttachLocator", &bVar9), 1))
										{
											if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
											{
												uVar31 = GRINGO_GET_PROP_FROM_COMPONENT(&cVar1);
												if (IS_PHYSINST_VALID(&uVar31))
												{
													ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), &uVar31, 0);
												}
											}
											Function_55(&cVar1, &Param0 + 24);
										}
										iVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar15, 1, GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 0), iVar10 + 1);
									}
								}
							}
						}
						iVar12++;
					}
				}
			}
			if (Param0.f_68 == 5)
			{
				Function_2("KICKED TO DOING START", &Param0 + 24);
				uVar7 = GET_TARGET_OBJECT();
				if (IS_OBJECT_VALID(&uVar7))
				{
					Function_46(&Param0, &uVar7, &iLocal_201, &uLocal_199);
					if (GET_OBJECT_TYPE(&uVar7) != 15)
					{
						uVar20 = GET_PHYSINST_FROM_OBJECT(&uVar7);
						if (IS_PHYSINST_VALID(&uVar20))
						{
							if (!IS_PROP_FIXED(&uVar20))
							{
								Function_63(&Param0 + 64, 256);
								SET_PROP_FIXED(&uVar20, 1);
							}
							else
							{
								Function_45(&Param0 + 64, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Param0 + 32);
				if (Function_83(Param0.f_64, 16))
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
				if (Function_44(&Param0 + 16))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(&bVar0))
				{
					if (Function_43(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_42(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&Param0 + 24, &uVar8);
							}
						}
					}
					else if (Function_41(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_42(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&uVar8, &Param0 + 24);
							}
						}
					}
					bVar9 = false;
					uVar6 = Function_40(&Param0 + 16, &bVar9);
					if (bVar9)
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_42(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uVar8, &uVar6);
							}
						}
					}
				}
				if (Function_39(&Param0 + 16))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(&Param0 + 24))
					{
						Function_63(&Param0 + 64, 8);
					}
					else
					{
						Function_45(&Param0 + 64, 8);
					}
					if (Function_83(Param0.f_64, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, 1);
					}
				}
				else
				{
					Function_45(&Param0 + 64, 8);
				}
				if (Function_38(&Param0 + 16))
				{
					NET_SET_NODE_REPLICATION(&Param0 + 24, 1, 1);
					UNK_0xC17BAD12(&Param0 + 24);
				}
				uVar33 = Function_9(&Param0 + 16, "CustomReactNode", &bVar32);
				if (bVar32)
				{
					SET_REACT_NODE_FOR_ACTOR(&Param0 + 24, &uVar33);
				}
				iVar34 = 1;
				bVar35 = Function_7(&Param0 + 16, "CanAnimalsAttack", iVar34);
				if (!bVar35)
				{
					if (IS_ACTOR_VALID(&Param0 + 24))
					{
						SET_ANIMAL_CAN_ATTACK(&Param0 + 24, 0);
					}
				}
				Function_37(&Param0 + 24, &Param0 + 16);
				bVar36 = Function_7(&Param0 + 16, "AllowTalking", 1);
				if (!bVar36)
				{
					STOP_PED_SPEAKING(&Param0 + 24, 1);
				}
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				Function_36();
			}
			Param0.f_68 = 6;
			if (Function_83(Param0.f_64, 1))
			{
				if (Function_35(&Param0 + 16))
				{
					Function_2("MID ACTION NODE", &Param0 + 24);
				}
			}
		
		case 0x00000006:
			if (!Function_26(&Param0 + 24, &Param0 + 16))
			{
				Function_2("CUSTOM QUIT DURING USE", &Param0 + 24);
				Param0.f_68 = 8;
			}
			bVar0 = Function_56(&Param0 + 24, &Param0 + 16, Function_83(Param0.f_64, 1));
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
			if (Function_12(&Param0) <= Function_10(&Param0 + 16))
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
									iVar47 = RAND_INT_RANGE(0, (iVar39 - 1));
									uVar48 = GRINGO_GET_ATTRIBUTE(&uVar37, iVar47);
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
				bVar55 = Function_25(&Param0 + 16);
				if (bVar55 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Var53);
					if (VDIST(Var53, *(&Param0 + 32)) < bVar55)
					{
						Function_2("UPDATE USE TOO FAR", &Param0 + 24);
						if (Function_24())
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
					if (Function_23(&Param0 + 16) <= 0.0f)
					{
						if (Function_12(&Param0) < Function_23(&Param0 + 16))
						{
							Function_2("UPDATE USE USETIME SATISFIED", &Param0 + 24);
							Param0.f_68 = 7;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_113("nRewarding");
			Function_22(&Param0 + 24, &Param0 + 16);
			Function_21(&Param0 + 24, &Param0 + 16);
			Function_20(&Param0 + 24, &Param0 + 16);
			SET_GRINGO_OBJECT_REF_ATTR(&Param0 + 24, "LastUserObject", &Param0 + 16);
			Function_63(&Param0 + 64, 64);
			Param0.f_68 = 8;
			break;
		
		case 0x00000008:
			bLocal_203 = true;
			if (!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				if (!DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
				{
					if (!Function_7(&Param0 + 16, "GringoCamNoEndCut", 0))
					{
						if (!Function_19())
						{
							Function_70(&Param0 + 16);
						}
					}
				}
				else
				{
					DECOR_REMOVE(&Param0 + 24, "NoGringoCamera");
				}
			}
			if (Function_7(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
			{
				Function_2("Use case quits - no cleapup due to DoNotCleanUpUserSettings attribute", &Param0 + 24);
				return 0;
			}
			Function_2("GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS", &Param0 + 24);
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&Param0 + 24);
			Param0.f_68 = 9;
			Function_18(&Param0 + 24, &Param0 + 16);
			break;
		
		case 0x00000009:
			if (Function_83(Param0.f_64, 1024))
			{
				Function_45(&Param0 + 64, 1024);
				if (!Function_7(&Param0 + 16, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, true);
				}
			}
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 1);
			}
			bLocal_203 = true;
			bVar0 = Function_56(&Param0 + 24, &Param0 + 16, Function_83(Param0.f_64, 1));
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
	Function_17(&Param0 + 24, Param0.f_68);
	return 1;
}

void Function_17(var uParam0, int iParam1) //Position: 0x1E11 / 7697
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		REPORT_GRINGO_USE_PHASE(&uParam0, iParam1);
	}
	return;
}

void Function_18(var uParam0, var uParam1) //Position: 0x1E28 / 7720
{
	uParam1 = &uParam1;
	uParam0 = &uParam0;
	return;
}

bool Function_19() //Position: 0x1E3A / 7738
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

void Function_20(var uParam0, int iParam1) //Position: 0x1E6D / 7789
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(&iParam1);
	iVar2 = STRING_TO_HASH("RemoveCapability");
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		uVar3 = GRINGO_GET_ATTRIBUTE(&iParam1, iVar1);
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
		iVar1++;
	}
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0x1EEB / 7915
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(&iParam1);
	iVar2 = STRING_TO_HASH("AddCapability");
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		uVar3 = GRINGO_GET_ATTRIBUTE(&iParam1, iVar1);
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
		iVar1++;
	}
	return;
}

void Function_22(int iParam0, int iParam1) //Position: 0x1F67 / 8039
{
	iParam1 = &iParam1;
	iParam0 = &iParam0;
	return;
}

float Function_23(int iParam0) //Position: 0x1F79 / 8057
{
	return Function_11(&iParam0, "UseTime", 5.0f);
}

bool Function_24() //Position: 0x1F90 / 8080
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

int Function_25(int iParam0) //Position: 0x1F9D / 8093
{
	return Function_11(&iParam0, "MoveAllowance", 1,5f);
}

bool Function_26(var uParam0, int iParam1) //Position: 0x1FBE / 8126
{
	return Function_27(&uParam0, &iParam1);
}

int Function_27(var uParam0, int iParam1) //Position: 0x1FCD / 8141
{
	var uVar0;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnim", 2, &iParam1);
	if (!iLocal_74)
	{
		Function_34(&uParam0, 0);
		Function_33(&uParam0, 0);
		Function_32(&uParam0, 0);
		if (iLocal_72)
		{
			if (!Function_28(&uParam0, &uLocal_75, &Local_78))
			{
				return 1;
			}
			iLocal_72 = 0;
			return 1;
		}
		if (GRINGO_ACTOR_MOVE_TO_AND_FACE(StackVal, &uParam0, &uLocal_75, 0.0f, 0.0f, 1,401298E-45f, 0.0f, 1, 0))
		{
			DECOR_SET_STRING(&uParam0, "UseAnim", &Local_2[iLocal_702] + 8);
			uLocal_81 = DECOR_GET_STRING_HASH(&uParam0, "UseAnim");
			GRINGO_ANIM_PLAY_NODE_BY_HASH(&uParam0, &uVar0, uLocal_81);
			DECOR_REMOVE(&uParam0, "UseAnim");
			iLocal_74 = 1;
		}
	}
	else if (!GRINGO_ANIM_IS_SUBNODE_PLAYING_BY_HASH(&uParam0, &uVar0, uLocal_81))
	{
		if (!iLocal_73)
		{
			iLocal_72 = 1;
			iLocal_73 = 1;
		}
		if (iLocal_72)
		{
			if (!Function_28(&uParam0, &uLocal_75, &Local_78))
			{
				return 1;
			}
			iLocal_72 = 0;
			return 1;
		}
		if (GRINGO_ACTOR_MOVE_TO_AND_FACE(StackVal, &uParam0, &uLocal_75, 0.0f, 0.0f, 1,401298E-45f, 0.0f, 1, 0))
		{
			DECOR_SET_STRING(&uParam0, "UseAnim", &Local_2[iLocal_702] + 8);
			uLocal_81 = DECOR_GET_STRING_HASH(&uParam0, "UseAnim");
			GRINGO_ANIM_PLAY_NODE_BY_HASH(&uParam0, &uVar0, uLocal_81);
			DECOR_REMOVE(&uParam0, "UseAnim");
			iLocal_73 = 0;
		}
	}
	return 1;
}

bool Function_28(var uParam0, var uParam1, int iParam2) //Position: 0x2123 / 8483
{
	var uVar0;
	var uVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* cVar7[64];
	
	GET_POSITION(&uParam0, &uVar0);
	bVar4 = 20.0f;
	while (!bVar3 && !iVar5 != 6)
	{
		iVar6 = RAND_INT_RANGE(0, 15);
		if (STRING_LENGTH(&(Local_2[iVar62])) >= 0)
		{
			if (!STRINGS_ARE_EQUAL(&(Local_2[iVar62]), &uLocal_68))
			{
				bVar3 = true;
			}
			else
			{
				iVar5++;
			}
		}
	}
	if (iVar5 > 5)
	{
		Function_31();
		uParam1 = Function_31();
		Function_31();
		iParam2 = Function_31();
		return 0;
	}
	while (!IS_GRINGO_VALID(&uVar2) && bVar4 > 60.0f)
	{
		strcpy(&cVar7, "$/content/scripting/gringo/SimpleGringo/", 64);
		stradd(&cVar7, &(Local_2[iVar62]), 64);
		uVar2 = LOCATE_GRINGO_OF_TYPE(&cVar7, &uVar0, bVar4, 0);
		bVar4 = (bVar4 + 10.0f);
	}
	if (!IS_GRINGO_VALID(&uVar2))
	{
		Function_31();
		uParam1 = Function_31();
		Function_31();
		iParam2 = Function_31();
		return 0;
	}
	iLocal_70 = iVar6;
	Function_30(GET_OBJECT_FROM_GRINGO(&uVar2));
	uParam1 = Function_30(GET_OBJECT_FROM_GRINGO(&uVar2));
	Function_29(GET_OBJECT_FROM_GRINGO(&uVar2));
	iParam2 = Function_29(GET_OBJECT_FROM_GRINGO(&uVar2));
	return 1;
}

struct<8> Function_29(int iParam0) //Position: 0x2230 / 8752
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

struct<8> Function_30(var uParam0) //Position: 0x2259 / 8793
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

struct<8> Function_31() //Position: 0x2282 / 8834
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_32(var uParam0, bool bParam1) //Position: 0x228C / 8844
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(&uParam0, &(Global_39591[0]));
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &(Global_39591[0]), 0);
	}
	return;
}

void Function_33(var uParam0, bool bParam1) //Position: 0x22C0 / 8896
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_CONVERSE_ENABLE(&uParam0);
	}
	else
	{
		AI_CONVERSE_DISABLE(&uParam0);
	}
	return;
}

void Function_34(var uParam0, bool bParam1) //Position: 0x22E5 / 8933
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(&uParam0, &(Global_39591[1]));
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &(Global_39591[1]), 0);
	}
	return;
}

bool Function_35(bool bParam0) //Position: 0x2319 / 8985
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, &bParam0));
}

void Function_36() //Position: 0x2339 / 9017
{
	return;
}

void Function_37(int iParam0, bool bParam1) //Position: 0x233F / 9023
{
	bParam1 = &bParam1;
	iParam0 = &iParam0;
	return;
}

bool Function_38(char* cParam0) //Position: 0x2351 / 9041
{
	cParam0 = &cParam0;
	return 1;
}

bool Function_39(int iParam0) //Position: 0x235E / 9054
{
	return Function_7(&iParam0, "OneShotKill", 0);
}

bool Function_40(char* cParam0, int iParam1) //Position: 0x2379 / 9081
{
	return Function_9(&cParam0, "ParentAnimNode", &iParam1);
}

bool Function_41(int iParam0) //Position: 0x2399 / 9113
{
	return Function_7(&iParam0, "LinkToParentAnim", 0);
}

var Function_42(int iParam0) //Position: 0x23B9 / 9145
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (vLocal_85 - 1))
	{
		if (&vLocal_85[iVar09] + 16 == &iParam0)
		{
			return &vLocal_85[iVar09] + 24;
		}
		iVar0++;
	}
	return &iVar1;
}

bool Function_43(int iParam0) //Position: 0x23F0 / 9200
{
	return Function_7(&iParam0, "LinkParentToAnim", 0);
}

bool Function_44(int iParam0) //Position: 0x2410 / 9232
{
	return Function_7(&iParam0, "SingularUse", 0);
}

void Function_45(var uParam0, int iParam1) //Position: 0x242B / 9259
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_46(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2441 / 9281
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
	uVar2 = Function_54(&iParam0 + 16, &bVar0);
	uVar3 = Function_53(&iParam0 + 16, &bVar1);
	uVar4 = Function_52(&iParam0 + 16);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(&uVar4)))
	{
		uVar6 = Function_51(&iParam0 + 16, &bVar5);
		if (bVar5)
		{
			uVar8 = Function_50(&iParam0 + 16, &bVar7);
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
		if (Function_24())
		{
			Function_49();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, &uVar3, Function_48(&iParam0 + 16, &iVar10), 0, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, Function_47(), Function_48(&iParam0 + 16, &iVar10), 0, bVar9);
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
			if (Function_7(&uVar4, "LinkToUser", 0))
			{
				if (Function_24())
				{
					Function_49();
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

var Function_47() //Position: 0x2765 / 10085
{
	int iVar0;
	
	return &iVar0;
}

bool Function_48(char* cParam0, int iParam1) //Position: 0x276E / 10094
{
	return Function_9(&cParam0, "TargetLocator", &iParam1);
}

void Function_49() //Position: 0x278D / 10125
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_50(char* cParam0, int iParam1) //Position: 0x279C / 10140
{
	return Function_9(&cParam0, "UserPhysAttachBone", &iParam1);
}

bool Function_51(char* cParam0, int iParam1) //Position: 0x27C0 / 10176
{
	return Function_9(&cParam0, "TargetPhysAttachBone", &iParam1);
}

int Function_52(int iParam0) //Position: 0x27E6 / 10214
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, &iParam0);
}

bool Function_53(var uParam0, int iParam1) //Position: 0x2804 / 10244
{
	return Function_9(&uParam0, "TargetAttachBone", &iParam1);
}

bool Function_54(var uParam0, int iParam1) //Position: 0x2826 / 10278
{
	return Function_9(&uParam0, "TargetAttachSlot", &iParam1);
}

void Function_55(char* cParam0, int iParam1) //Position: 0x2848 / 10312
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	uVar0 = GRINGO_GET_FIRST_CHILD(2, &cParam0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		uVar2 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(&uVar0, &iParam1);
		uVar3 = GRINGO_ANIM_GET_ACT_FILENAME(&uVar0);
		uVar4 = GRINGO_ANIM_GET_ACT_ROOTNODE(&uVar0);
		uVar1 = GRINGO_GET_PHYSINST(&cParam0);
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
				LINK_OBJECT_ANIMATOR_TO_ACTOR(&iVar6, &iParam1, GRINGO_GET_PROP_ATTACH_SLOT(&cParam0));
			}
		}
	}
	return;
}

var Function_56(var uParam0, int iParam1, bool bParam2) //Position: 0x2910 / 10512
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

void Function_57(int iParam0, float fParam1) //Position: 0x298C / 10636
{
	if (!Function_14(&iParam0))
	{
		Function_58(&iParam0, fParam1);
	}
	return;
}

void Function_58(vector3 vParam0) //Position: 0x29A4 / 10660
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_63(&vParam0, 1);
	Function_45(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_59(int iParam0) //Position: 0x29C9 / 10697
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_11(&iParam0, "RandUseTime", 0.0f));
}

void Function_60(vector3 vParam0) //Position: 0x29EA / 10730
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_61(var uParam0) //Position: 0x2A01 / 10753
{
	uParam0 = &uParam0;
	return;
}

int Function_62() //Position: 0x2A0D / 10765
{
	return 1;
}

void Function_63(var uParam0, int iParam1) //Position: 0x2A14 / 10772
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_64(int iParam0, var uParam1, int iParam2) //Position: 0x2A25 / 10789
{
	float fVar0;
	
	Function_67(&iParam0);
	uParam1 = Function_67(&iParam0);
	iParam2 = Function_66(&iParam0);
	fVar0 = Function_65(&iParam0);
	if (fVar0 < 180.0f)
	{
		fVar0 = 180.0f;
	}
	iParam2 = (iParam2 + RAND_FLOAT_RANGE(-fVar0, fVar0));
	return;
}

int Function_65(int iParam0) //Position: 0x2A6A / 10858
{
	return Function_11(&iParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_66(int iParam0) //Position: 0x2A96 / 10902
{
	return GRINGO_GET_USE_COMPONENT_HEADING(&iParam0);
}

struct<8> Function_67(int iParam0) //Position: 0x2AA2 / 10914
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	
	if (Function_68(&iParam0))
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

bool Function_68(int iParam0) //Position: 0x2BA4 / 11172
{
	return Function_7(&iParam0, "UsePosActorRelative", 0);
}

int Function_69(int iParam0) //Position: 0x2BC7 / 11207
{
	return Function_11(&iParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_70(int iParam0) //Position: 0x2BEF / 11247
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	float fVar6;
	int iVar7;
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
	iVar7 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &iParam0, 0);
	while (iVar7 >= 4294967295)
	{
		uVar8 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar7, &iParam0);
		if (GRINGO_IS_PROP_READY(&uVar8))
		{
			uVar9 = GRINGO_GET_PROP_FROM_COMPONENT(&uVar8);
			uVar10 = GET_OBJECT_FROM_PHYSINST(&uVar9);
			Var11 = Vector(0.0f, 0.0f, 0.0f);
			if (GET_OBJECT_POSITION(&uVar10, &Var11))
			{
				Function_72(StackVal, StackVal, Var2, Var11);
				Var2 = Function_72(StackVal, StackVal, Var2, Var11);
				Function_71(StackVal, StackVal, Var0, Var11);
				Var0 = Function_71(StackVal, StackVal, Var0, Var11);
			}
		}
		iVar7 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &iParam0, iVar7 + 1);
	}
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var0, StackVal);
	Var0 = Vector(Var0, StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f);
	Var13 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, Var2, StackVal);
	Var15 = Var13;
	Var15 = Vector(Var15, StackVal, StackVal) + Vector(2.0f, 2.0f, 2.0f);
	uVar18 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera", 1, 1);
	fVar17 = Function_11(&iParam0, "GringoCamHoldTime", -1.0f);
	if (IS_OBJECT_VALID(&uVar18))
	{
		fVar19 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uVar18, 0);
		uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, &fVar19, Function_47(), Var13, Vector(0.0f, 0.0f, 0.0f));
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
			ATTACH_OBJECTS(StackVal, &uVar20, GRINGO_GET_MY_OBJECT_REF(), Function_47(), Var28, Vector(0.0f, 0.0f, 0.0f), 4294967295);
		}
		PLAY_CUTSCENEOBJECT(&uVar18, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		Function_113("Failed to create gringo camera");
	}
	return;
}

struct<8> Function_71(vector3 vParam0) //Position: 0x2ED6 / 11990
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

struct<8> Function_72(vector3 vParam0) //Position: 0x2F33 / 12083
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

void Function_73(int iParam0) //Position: 0x2F90 / 12176
{
	iParam0 = &iParam0;
	return;
}

bool Function_74(int iParam0) //Position: 0x2F9C / 12188
{
	return Function_7(&iParam0, "MaintainPosture", 0);
}

void Function_75(int iParam0) //Position: 0x2FBB / 12219
{
	if (!Function_14(&iParam0))
	{
		Function_58(&iParam0, 0.0f);
	}
	return;
}

bool Function_76(var uParam0, int iParam1) //Position: 0x2FD2 / 12242
{
	struct<2> Var0;
	float fVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	Function_67(&iParam1);
	Var0 = Function_67(&iParam1);
	fVar2 = Function_66(&iParam1);
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_PLAYER(&uParam0))
	{
		TELEPORT_ACTOR_WITH_HEADING(&uParam0, Var0, fVar2, 0, 1, 1);
		return 1;
	}
	if (GRINGO_HANDLES_MOVEMENT(&iParam1) && DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Volume"))
	{
		return Function_80(&uParam0, &iParam1);
	}
	uVar3 = Function_79(&iParam1);
	uVar4 = Function_65(&iParam1);
	Function_77(&iParam1);
	iVar5 = Function_77(&iParam1);
	return GRINGO_ACTOR_MOVE_TO_AND_FACE_WITH_USER_OFFSET(&uParam0, &Var0, &iVar5, uVar3, 0,2f, 1, fVar2, uVar4, 0, 0);
}

struct<8> Function_77(int iParam0) //Position: 0x3063 / 12387
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	Function_78(StackVal, &iParam0, "UserOffset", Var0);
	return StackVal, Function_78(StackVal, &iParam0, "UserOffset", Var0);
}

struct<8> Function_78(var uParam0, var uParam1, struct<2> Param2) //Position: 0x3087 / 12423
{
	struct<2> Var0;
	
	Var0 = Param2;
	GET_GRINGO_VECTOR_ATTR(&Var0, &uParam1, &uParam0);
	return StackVal, Var0;
}

int Function_79(int iParam0) //Position: 0x30A6 / 12454
{
	return Function_11(&iParam0, "UseLocationTolerance", 0.0f);
}

int Function_80(var uParam0, int iParam1) //Position: 0x30CA / 12490
{
	bool bVar0;
	float fVar1;
	var uVar2;
	float fVar4;
	var uVar5;
	var uVar6;
	var uVar8;
	var uVar10;
	var uVar12;
	struct<2> Var13;
	var uVar15;
	bool bVar17;
	
	bVar0 = Function_79(&iParam1);
	fVar1 = Function_65(&iParam1);
	if (!GET_GRINGO_BOOL_ATTR("RandomPointSet", &iParam1, &uVar5))
	{
		fVar4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
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
			SET_GRINGO_FLOAT_ATTR(fVar4, "RandomDirection", &iParam1);
			SET_GRINGO_BOOL_ATTR(1, "RandomPointSet", &iParam1);
		}
		else
		{
			return 0;
		}
	}
	GET_GRINGO_VECTOR_ATTR(&uVar2, "RandomPoint", &iParam1);
	return GRINGO_ACTOR_MOVE_TO_AND_FACE(&uParam0, &uVar2, bVar0, 0,2f, 1, fVar4, fVar1, 1, 0);
}

bool Function_81(var uParam0, int iParam1) //Position: 0x31F2 / 12786
{
	iParam1 = Function_11(&uParam0, "AreaClearCheck", -1.0f);
	if (iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_82(var uParam0) //Position: 0x3220 / 12832
{
	var uVar0;
	int iVar1;
	int iVar2;
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
	iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uParam0, 0);
	while (iVar1 >= 4294967295)
	{
		if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, &uParam0)))
		{
			return 0;
		}
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uParam0, iVar1 + 1);
	}
	iVar2 = 0;
	iVar4 = GRINGO_GET_ATTRIBUTE(&uParam0, iVar2);
	iVar6 = STRING_TO_HASH("SharedPropName");
	while (iVar2 <= GRINGO_GET_ATTRIBUTE_COUNT(&uParam0))
	{
		iVar4 = GRINGO_GET_ATTRIBUTE(&uParam0, iVar2);
		if (GRINGO_IS_ATTRIBUTE_VALID(&iVar4))
		{
			if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(&iVar4) == 2)
			{
				if (iVar6 == GRINGO_GET_ATTRIBUTE_HASH(&iVar4))
				{
					uVar5 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&iVar4, &uVar3);
					iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar5, 1, GRINGO_GET_PARENT_COMPONENT(&uParam0, 0), 0);
					while (iVar1 >= 4294967295)
					{
						if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, GRINGO_GET_PARENT_COMPONENT(&uParam0, 0))))
						{
							return 0;
						}
						iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar5, 1, GRINGO_GET_PARENT_COMPONENT(&uParam0, 0), iVar1 + 1);
					}
				}
			}
		}
		iVar2++;
	}
	return 1;
}

bool Function_83(var uParam0, int iParam1) //Position: 0x3339 / 13113
{
	return (uParam0 && iParam1) == 0;
}

void Function_84(struct<69> Param0) //Position: 0x3346 / 13126
{
	if (Function_83(Param0.f_64, 16))
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
				SET_MOVER_FROZEN(&Param0 + 24, 0);
			}
		}
	}
	return;
}

void Function_85(struct<69> Param0) //Position: 0x33C8 / 13256
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	int iVar5;
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
	Function_9(&Param0 + 16, "CustomReactNode", &bVar0);
	if (bVar0)
	{
		if (IS_ACTOR_VALID(&Param0 + 24))
		{
			RESET_REACT_NODE_FOR_ACTOR(&Param0 + 24);
		}
	}
	iVar1 = 1;
	bVar2 = Function_7(&Param0 + 16, "CanAnimalsAttack", iVar1);
	if (!bVar2)
	{
		if (IS_ACTOR_VALID(&Param0 + 24))
		{
			SET_ANIMAL_CAN_ATTACK(&Param0 + 24, 1);
		}
	}
	bVar3 = Function_7(&Param0 + 16, "AllowTalking", 1);
	if (!bVar3)
	{
		STOP_PED_SPEAKING(&Param0 + 24, 0);
	}
	if (Param0.f_68 < 8)
	{
		Function_18(&Param0 + 24, &Param0 + 16);
	}
	if ((HAS_INVENTORY_COMPONENT(&Param0 + 24) && Function_83(Param0.f_64, 32)) && Function_7(&Param0 + 16, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(&Param0 + 24, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_91(&Param0 + 24, &Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		GRINGO_REPORT_USE_FINISHED(&Param0 + 24, Function_83(Param0.f_64, 64));
		Function_17(&Param0 + 24, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
		if (!Function_7(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_83(Param0.f_64, 128) && Function_7(&Param0 + 16, "RedrawWeapon", 1))
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
			if (Function_43(&Param0 + 16))
			{
				CLEAR_LINKED_ANIM_TARGET(&Param0 + 24);
			}
			if (Function_83(Param0.f_64, 16))
			{
				Function_84(&Param0);
				Function_45(&Param0 + 64, 16);
			}
			if (Function_83(Param0.f_64, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, 0);
			}
			if (Function_90(&Param0 + 16) && Function_83(Param0.f_64, 512))
			{
				Function_45(&Param0 + 64, 512);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 1);
				Function_2("Allow Bump Reactions", &Param0 + 24);
			}
		}
		if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
		{
			GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 1);
		}
	}
	iVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, 0);
	while (iVar5 >= 4294967295)
	{
		uVar6 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar5, &Param0 + 16);
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
		iVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, iVar5 + 1);
	}
	if (Function_41(&Param0 + 16))
	{
		uVar9 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
		if (IS_GRINGO_COMPONENT_VALID(&uVar9))
		{
			uVar10 = Function_42(&uVar9);
			if (IS_ACTOR_VALID(&uVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(&uVar10);
			}
		}
	}
	Function_89(&Param0 + 16);
	bVar11 = Function_7(&Param0 + 16, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(&Param0 + 24))
		{
			Function_88(&Param0, GET_TARGET_OBJECT());
		}
		uVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(&uVar12))
		{
			if (Function_83(Param0.f_64, 256))
			{
				Function_45(&Param0 + 64, 256);
				SET_PROP_FIXED(&uVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(&Param0 + 56))
	{
		DESTROY_OBJECT(&Param0 + 56);
	}
	if (&Param0 + 16 == &iLocal_201)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(&uLocal_199));
		iLocal_201 = &uVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 0);
	if (Function_44(&Param0 + 16))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 1);
	}
	if (IS_ATTACHMENT_VALID(&Param0 + 48))
	{
		REMOVE_OBJECT_ATTACHMENT(&Param0 + 48);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_204))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_204);
	}
	SET_GRINGO_OBJECT_REF_ATTR(&uVar14, "UserObject", &Param0 + 16);
	Function_60(&Param0);
	Function_75(&Param0);
	GRINGO_CLEAR_COMPONENT_USER(&Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24) && bParam1)
	{
		Function_2("Setting reuse delay", &Param0 + 24);
		GRINGO_SET_REUSE_DELAY(Function_87(&Param0 + 16), &Param0 + 16);
	}
	Function_45(&Param0 + 64, 2);
	if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &Param0 + 16);
	}
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
		{
			Function_86();
		}
	}
	else
	{
		Function_86();
	}
	Param0.f_68 = 0;
	(&Param0 + 24) = "";
	return;
}

void Function_86() //Position: 0x3973 / 14707
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

int Function_87(int iParam0) //Position: 0x39AD / 14765
{
	return Function_11(&iParam0, "ReuseDelay", 15.0f);
}

void Function_88(int iParam0, var uParam1) //Position: 0x39CB / 14795
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_54(&iParam0 + 16, &uVar0);
	Function_53(&iParam0 + 16, &uVar1);
	iVar2 = Function_52(&iParam0 + 16);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(&iVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(&uParam1);
	return;
}

void Function_89(int iParam0) //Position: 0x3A0C / 14860
{
	iParam0 = &iParam0;
	return;
}

bool Function_90(int iParam0) //Position: 0x3A18 / 14872
{
	return Function_7(&iParam0, "BlockBumpReactions", 0);
}

void Function_91(var uParam0, int iParam1) //Position: 0x3A3A / 14906
{
	iParam1 = &iParam1;
	uParam0 = &uParam0;
	Function_92(&uParam0, &iParam1);
	return;
}

void Function_92(var uParam0, int iParam1) //Position: 0x3A55 / 14933
{
	var uVar0;
	
	if (GET_GRINGO_INT_ATTR(&uVar0, "StationsUsed", &iParam1))
	{
		SET_GRINGO_INT_ATTR(false, "StationsUsed", &iParam1);
	}
	if (DECOR_CHECK_EXIST(&uLocal_0, "Gringo_PropInUse"))
	{
		DECOR_REMOVE(&uLocal_0, "Gringo_PropInUse");
	}
	Function_34(&uParam0, 1);
	Function_33(&uParam0, 1);
	Function_32(&uParam0, 1);
	return;
}

void Function_93(var uParam0, bool bParam1) //Position: 0x3AD7 / 15063
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (&bParam1)
		{
			Function_113("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
		{
			if (&bParam1)
			{
				Function_113("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_204))
			{
				if (&bParam1)
				{
					Function_113("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(&bLocal_204);
			}
		}
	}
	if (&bParam1)
	{
		Function_113("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_94(int iParam0, int iParam1) //Position: 0x3BE7 / 15335
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam1, &iParam0, 0, 0, 0);
	return;
}

void Function_95(struct<69> Param0) //Position: 0x3BFF / 15359
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
		ATTACH_OBJECTS(StackVal, StackVal, &Param0 + 56, &Param0 + 24, Function_47(), Vector(0.0f, 1.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	Function_60(&Param0);
	Function_2("Going to eGringoPositioning", &Param0 + 24);
	Param0.f_68 = 2;
	Function_63(&Param0 + 64, 2);
	Function_45(&Param0 + 64, 8);
	Function_45(&Param0 + 64, 16);
	Function_45(&Param0 + 64, 64);
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
	if (!Function_99(&Param0 + 16))
	{
		if (HAS_INVENTORY_COMPONENT(&Param0 + 24))
		{
			if (ACTOR_HOLSTER_WEAPON(&Param0 + 24, 1))
			{
				Function_63(&Param0 + 64, 32);
			}
			else
			{
				Function_45(&Param0 + 64, 32);
			}
		}
		else
		{
			Function_45(&Param0 + 64, 32);
		}
		if (Function_83(Param0.f_64, 32))
		{
			Function_63(&Param0 + 64, 128);
		}
		else
		{
			Function_45(&Param0 + 64, 128);
		}
	}
	else
	{
		Function_45(&Param0 + 64, 32);
	}
	if (Function_98(&Param0 + 16))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, 1), 1))
			{
				Function_63(&Param0 + 64, 128);
			}
		}
		else
		{
			Function_63(&Param0 + 64, 128);
		}
	}
	if (Function_90(&Param0 + 16))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24))
		{
			Function_63(&Param0 + 64, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 0);
			Function_2("Block Bump Reactions", &Param0 + 24);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
	Function_96(&Param0 + 24, &uVar0);
	Function_2("START: ", &Param0 + 24);
	return;
}

void Function_96(var uParam0, int iParam1) //Position: 0x3F1B / 16155
{
	uParam0 = &uParam0;
	Function_97(&iParam1);
	return;
}

void Function_97(var uParam0) //Position: 0x3F2C / 16172
{
	int iVar0;
	
	iVar0 = GRINGO_GET_FIRST_NAMED_CHILD("AttachProp", 1, &uParam0);
	if (IS_GRINGO_COMPONENT_VALID(&iVar0))
	{
		uLocal_0 = GET_OBJECT_FROM_PHYSINST(GRINGO_GET_PROP_FROM_COMPONENT(&iVar0));
		DECOR_SET_BOOL(&uLocal_0, "Gringo_PropInUse", 1);
	}
	return;
}

bool Function_98(int iParam0) //Position: 0x3F7A / 16250
{
	return Function_7(&iParam0, "DrawWeapon", 0);
}

bool Function_99(int iParam0) //Position: 0x3F94 / 16276
{
	return Function_7(&iParam0, "AllowWeapon", 0);
}

void Function_100(int iParam0, var uParam1) //Position: 0x3FAF / 16303
{
	bool bVar0;
	int iVar1;
	
	iParam0 = &iParam0;
	iVar1 = Function_101(&uParam1, &bVar0);
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

bool Function_101(var uParam0, int iParam1) //Position: 0x3FED / 16365
{
	return Function_9(&uParam0, "UseName", &iParam1);
}

bool Function_102(struct<65> Param0) //Position: 0x4007 / 16391
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
		if (ACTOR_HAS_ANIM_SET(&uVar1, "stand_hostage") && !Function_7(&Param0 + 16, "CutFreeGringo", 0))
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
				if (!Function_108(6))
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
		if (!Function_106(&uVar1, &Param0 + 16))
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
		if (!Function_83(Param0.f_64, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_63(&Param0 + 64, 1);
			}
			else
			{
				Function_45(&Param0 + 64, 1);
			}
			if (Function_83(Param0.f_64, 1))
			{
				Function_94("MIDACTION REQUEST", &uVar1);
			}
			else
			{
				Function_67(&Param0 + 16);
				Var8 = Function_67(&Param0 + 16);
				Var10 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var8, StackVal);
				fVar12 = Function_105(&Param0 + 16);
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
				if (!Function_104(&uVar1, &Param0 + 16))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar30 = Function_103(&Param0 + 16);
				if (!bVar30 != 0.0f)
				{
					if (bVar30 < 0.0f)
					{
						fVar31 = (UNK_0x9C40E671(&Var10) - Function_66(&Param0 + 16));
					}
					else
					{
						fVar31 = ((180.0f + UNK_0x9C40E671(&Var10)) - Function_66(&Param0 + 16));
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

int Function_103(int iParam0) //Position: 0x42FF / 17151
{
	return Function_11(&iParam0, "ActivationCone", 0.0f);
}

bool Function_104(var uParam0, int iParam1) //Position: 0x431D / 17181
{
	struct<5> Var0;
	float fVar5;
	
	fVar2 = GRINGO_GET_USE_COMPONENT_HEADING(&iParam1);
	bVar3 = GET_HEADING(&uParam0);
	fVar4 = Function_11(&iParam1, "HeadingTolerance", -1.0f);
	fVar5 = (fVar2 - bVar3);
	if (fVar4 != -1.0f)
	{
		return 1;
	}
	Function_67(&iParam1);
	Var0 = Function_67(&iParam1);
	GET_POSITION(&uParam0, &Var0);
	Var0.f_4 = (StackVal + 1,5f);
	Function_67(&iParam1);
	Var0 = Function_67(&iParam1);
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

int Function_105(int iParam0) //Position: 0x43BD / 17341
{
	return Function_11(&iParam0, "ActivationRadius", 2.0f);
}

bool Function_106(int iParam0, int iParam1) //Position: 0x43DD / 17373
{
	iParam0 = &iParam0;
	return Function_107(&iParam1, &iParam0);
}

int Function_107(var uParam0, int iParam1) //Position: 0x43F2 / 17394
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	if (IS_ACTOR_PLAYER(&iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = GRINGO_GET_CHILD_COMPONENT_COUNT(&uParam0);
	iLocal_71 = 0;
	while (iLocal_71 < (iVar1 - 1))
	{
		iVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iLocal_71, &uParam0);
		if (GRINGO_GET_COMPONENT_HASH(&iVar2) == STRING_TO_HASH("Gringo"))
		{
			uVar3 = GRINGO_GET_ATTRIBUTE(&iVar2, 0);
			uVar4 = GRINGO_GET_ATTRIBUTE(&iVar2, 1);
			if (!GRINGO_IS_ATTRIBUTE_VALID(&uVar3))
			{
				LOG_WARNING("We're retreiving invalid gringo name attributes in the propGringo.  Something is wrong.");
				return 0;
			}
			iVar5 = 0;
			Local_2[iVar02] = GRINGO_GET_STRING_ATTR_BY_HANDLE(&uVar3, &iVar5);
			*(&Local_2[iVar02] + 8) = GRINGO_GET_STRING_ATTR_BY_HANDLE(&uVar4, &iVar5);
			iVar0++;
		}
		iLocal_71++;
	}
	return 1;
}

bool Function_108(int iParam0) //Position: 0x44ED / 17645
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_109(int iParam0) //Position: 0x4509 / 17673
{
	iParam0 = &iParam0;
	return;
}

void Function_110(var uParam0, int iParam1) //Position: 0x4515 / 17685
{
	int iVar0;
	var uVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, &uParam0))
	{
		Function_111(&(vLocal_85[iLocal_1959]), &uParam0);
		iLocal_195++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(&uParam0) >= 0)
	{
		iVar0 = 0;
		iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, iVar0);
		while (iVar0 <= 0 && iParam1 > 6)
		{
			uVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar0, &uParam0);
			Function_110(&uVar1, &iParam1);
			iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, iVar0 + 1);
		}
	}
	return;
}

void Function_111(int iParam0, int iParam1) //Position: 0x4581 / 17793
{
	*(&iParam0 + 16) = &iParam1;
	Function_45(&iParam0 + 64, 1);
	return;
}

void Function_112(int iParam0) //Position: 0x4599 / 17817
{
	iParam0 = &iParam0;
	return;
}

void Function_113(int iParam0) //Position: 0x45A5 / 17829
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam0, 0, 0, 0);
	return;
}

