//Decompiled with MagicRDR v1.0
//Function Count : 153
//Statics Count : 150
//Natives Count : 308
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	int iLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	int iLocal_10 = 0;
	bool bLocal_11 = false;
	int iLocal_12 = 0;
	bool bLocal_13 = false;
	int iLocal_14 = 0;
	bool bLocal_15 = false;
	int iLocal_16 = 0;
	struct<25> Local_17 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	int iLocal_143 = 0;
	var uLocal_144 = 0;
	bool bLocal_145 = false;
	bool bLocal_146 = false;
	var uLocal_147 = 0;
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
	
	iLocal_10 = 0;
	bLocal_11 = false;
	iLocal_12 = 0;
	bLocal_13 = false;
	iLocal_14 = 0;
	bLocal_15 = false;
	iLocal_16 = 0;
	bLocal_25 = 4294967295;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_152("STARTS");
	Function_151(&uScriptParam_0);
	iLocal_137 = 0;
	Function_149(&uScriptParam_0, &iLocal_137);
	while (IS_GRINGO_ACTIVE())
	{
		Function_148(&uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		uVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(&uVar1))
		{
			GET_OBJECT_POSITION(&uVar1, &uLocal_138);
		}
		iVar2 = 0;
		bLocal_145 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_137 - 1))
			{
				if (&vLocal_27[iVar09] + 16 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_137;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_145 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_139(&(vLocal_27[iVar39]), &bVar4))
						{
							Function_137(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_27[iVar39] + 16);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_139(&(vLocal_27[iVar39]), &bVar4))
						{
							Function_137(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_27[iVar39] + 16);
							if (bVar4)
							{
								Function_133(&(vLocal_27[iVar39]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (&vLocal_27[iVar39] + 24 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_132("eGRINGO_EndUse: Stop use by request", &vLocal_27[iVar39] + 24);
							Function_131(&vLocal_27[iVar39] + 24, 1);
							if (IS_ACTOR_VALID(&vLocal_27[iVar39] + 24))
							{
								if (IS_ACTOR_LOCAL_PLAYER(&vLocal_27[iVar39] + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&vLocal_27[iVar39] + 16))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(&vLocal_27[iVar39] + 24, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_109(&(vLocal_27[iVar39]), 0);
							}
							else if (vLocal_27[iVar39].f_68 < 8)
							{
								Function_108(&(vLocal_27[iVar39]));
								vLocal_27[iVar39].f_68 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_152("Stop use request actor mismatch!!");
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
			while (iVar0 < (iLocal_137 - 1))
			{
				if (Function_107(vLocal_27[iVar09].f_64, 2))
				{
					if (!Function_31(&(vLocal_27[iVar09])))
					{
						Function_152("Quitting due to update end");
						Function_109(&(vLocal_27[iVar09]), 1);
					}
				}
				if (Function_30(&(vLocal_27[iVar09]), 0))
				{
					Function_20(&(vLocal_27[iVar09]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_137 - 1))
		{
			if (Function_107(vLocal_27[iVar09].f_64, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(&uScriptParam_0))
		{
			if (bLocal_145)
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_146))
	{
		Function_152("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_146);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_137 - 1))
	{
		if (Function_107(vLocal_27[iVar09].f_64, 2))
		{
			Function_2("Gringo termination calls StopUse", &vLocal_27[iVar09] + 24);
			Function_109(&(vLocal_27[iVar09]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(&vLocal_27[iVar09] + 16))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &vLocal_27[iVar09] + 16);
		}
		Function_30(&(vLocal_27[iVar09]), 1);
		iVar0++;
	}
	Function_1(&uScriptParam_0);
	Function_152("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x44E / 1102
{
	iParam0 = &iParam0;
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_2))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_2);
	}
	return;
}

void Function_2(bool bParam0, char* cParam1) //Position: 0x469 / 1129
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

int Function_3() //Position: 0x4AB / 1195
{
	return 0;
}

int Function_4(bool bParam0) //Position: 0x4B2 / 1202
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	struct<2> Var9;
	bool bVar11;
	var uVar12;
	
	bParam0 = &bParam0;
	uVar0 = GRINGO_GET_MY_OBJECT_REF();
	iVar1 = GET_TARGET_ACTOR();
	if (!IS_OBJECT_VALID(&uVar0))
	{
		return 0;
	}
	uVar2 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, &bParam0);
	GET_GRINGO_OBJECT_REF_ATTR(&iVar3, "Owner", &uVar2);
	if (IS_GRINGO_COMPONENT_VALID(&uVar2))
	{
		uVar4 = Function_19(&uVar2, "CurrentState", 4294967295);
	}
	iVar5 = uVar4;
	if (iVar5 == 0)
	{
		bLocal_11 = true;
		if (FIRE_IS_ACTOR_ON_FIRE(&iVar1))
		{
			bLocal_11 = false;
		}
		if (IS_HOGTIE_CUTFREE_OBSTRUCTED(&iVar1, &Global_54076) && !DECOR_CHECK_EXIST(&iVar1, "CutFree_IgnoreObstruction"))
		{
			bLocal_11 = false;
		}
		if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&Global_54076)))
		{
			bLocal_11 = false;
		}
		if (GET_TASK_STATUS(&Global_54076, 19) != 2)
		{
			bLocal_11 = false;
		}
		if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
		{
			bLocal_11 = false;
		}
		if (Function_18())
		{
			bLocal_11 = false;
		}
		if (((!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_2) && !DECOR_CHECK_EXIST(&iVar1, "bDisableCutFree")) && bLocal_11) && !iLocal_10)
		{
			fVar6 = Function_15(&Global_54076, &uVar0);
			if (fVar6 >= 1,5f)
			{
				uLocal_2 = ADD_SCRIPT_USE_CONTEXT("Cut_Free", 36, "@GENERIC.USE2", false, 0, 0, 0, 4294967295, 0);
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_2))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_2);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_2))
		{
			fVar7 = Function_15(&Global_54076, &uVar0);
			if ((fVar7 < 1,5f || IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&Global_54076))) || !bLocal_11)
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_2))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_2);
				}
				return 0;
			}
			if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_2))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_2);
				bLocal_25 = GET_WEAPON_IN_HAND(&Global_54076);
				Function_13(&Global_54076, 0);
				iVar8 = GRINGO_GET_USE_COMPONENT_EXT(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), "Cut_Free");
				GET_OBJECT_RELATIVE_POSITION(StackVal, GRINGO_GET_MY_OBJECT_REF(), Vector(-0,4823f, 0.0f, 0,597f), &Var9);
				bVar11 = Function_12(&iVar8);
				TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Var9, bVar11, 0, 1, 1);
				TASK_USE_GRINGO(&Global_54076, GET_GRINGO_FROM_OBJECT(&uVar0), "Cut_Free", true, 1);
				HUD_ENABLE(0);
				if (IS_ACTOR_VALID(&iVar1))
				{
					if (DECOR_CHECK_EXIST(&iVar1, "NoBleedOut"))
					{
						DECOR_REMOVE(&iVar1, "NoBleedOut");
					}
				}
				Function_11(&iVar1);
				Local_17 = Function_11(&iVar1);
				Function_10(&iVar1);
				*(&Local_17 + 12) = Function_10(&iVar1);
				Local_17.f_24 = 0;
				uLocal_4 = CREATE_LAYOUT("Hogtied_Gringo_Layout");
				uVar12 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_4, Function_9(), 4,203895E-45f, *(&Local_17 + 12), Vector(0.0f, 0.0f, 0.0f), Vector(3.0f, 7.0f, 3.0f));
				ADD_CORPSE_REMOVAL_VOLUME_OBJ(&uVar12);
				DESTROY_VOLUME(&uVar12);
				Function_5(&uLocal_4, 0, &Local_17, &Global_54076, &iVar1, 1, 0, 1);
				iLocal_14 = 1;
				iLocal_10 = 1;
			}
			return 0;
		}
	}
	if (!bLocal_15)
	{
		GET_GRINGO_OBJECT_REF_ATTR(&iVar3, "Owner", &uVar2);
		if (!IS_OBJECT_VALID(&iVar3) && (iVar5 != 2 || iVar5 != 1))
		{
			SET_GRINGO_INT_ATTR(false, "CurrentState", &uVar2);
			DEREFERENCE_ACTOR(&iVar1);
		}
		else if (IS_OBJECT_VALID(&iVar3))
		{
			if (iVar5 != 2 || iVar5 != 1)
			{
				if ((Function_15(&iVar1, &iVar3) < 3.0f || GET_OBJECT_FROM_ACTOR(GET_LASSO_TARGET(&Global_54076)) != &iVar3) || (&iVar3 != GET_OBJECT_FROM_ACTOR(&Global_54076) && IS_ACTION_NODE_PLAYING_PARTIAL(GET_ACTOR_FROM_OBJECT(&iVar3), "defaultgait")))
				{
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(GET_ACTOR_FROM_OBJECT(&iVar3), "whistle"))
					{
						SET_GRINGO_INT_ATTR(false, "CurrentState", &uVar2);
						DEREFERENCE_ACTOR(&iVar1);
					}
				}
			}
		}
	}
	return 0;
}

var Function_5(float fParam0, bool bParam1, var uParam2, Vector3 vParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x86E / 2158
{
	var uVar0;
	
	if (&bParam5)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&fParam0, Function_9(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&fParam0, "Hogtie_CutFree", 2, 1);
	}
	Function_6(&uVar0, &uParam2, &vParam3, &uParam4);
	if (bParam7 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_6(int iParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x8FF / 2303
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_8(&uVar0, &uParam1, &bParam2, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_7(&uVar0, &uParam1, &bParam2, &uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 1,25f, 0);
	SET_TRANSITION_COLLISION_PARAMS(&uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 2,8f, 1, 1);
	SET_TRANSITION_COLLISION_PARAMS(&uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 2);
	SET_TRANSITION_COLLISION_PARAMS(&uVar1, 1, 0);
}

void Function_7(float fParam0, struct<25> Param1) //Position: 0x98E / 2446
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 46,19386f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	Var0 = Vector(0,659502f, 0,635448f, 1,235128f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 0.0f), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(0,641761f, -0,140743f, 0,753879f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&fParam0, Var0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &fParam3, 52);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(&fParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,5f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
}

void Function_8(float fParam0, struct<25> Param1) //Position: 0xA8C / 2700
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 46,19386f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	Var0 = Vector(0,653081f, 0,718918f, -0,295721f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 0.0f), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(0,998293f, -0,037694f, 0,044617f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&fParam0, Var0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &fParam3, 52);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(&fParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,5f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
}

var Function_9() //Position: 0xB8A / 2954
{
	int iVar0;
	
	return &iVar0;
}

struct<8> Function_10(int iParam0) //Position: 0xB93 / 2963
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

struct<8> Function_11(int iParam0) //Position: 0xBBC / 3004
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

float Function_12(int iParam0) //Position: 0xBE5 / 3045
{
	return GRINGO_GET_USE_COMPONENT_HEADING(&iParam0);
}

void Function_13(var uParam0, bool bParam1) //Position: 0xBF1 / 3057
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_RIDING(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&uParam0))
	{
		uVar1 = GET_VEHICLE(&uParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			STOP_VEHICLE(&uVar1);
		}
	}
	else if (!&bParam1 || Function_14(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

float Function_14(var uParam0, bool bParam1) //Position: 0xC5B / 3163
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

float Function_15(int iParam0, var uParam1) //Position: 0xC7C / 3196
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_17(&iParam0);
			Var0 = Function_17(&iParam0);
			Function_16(&uParam1);
			Var2 = Function_16(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_16(int iParam0) //Position: 0xD1E / 3358
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		GET_OBJECT_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

struct<8> Function_17(var uParam0) //Position: 0xD8C / 3468
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

bool Function_18() //Position: 0xDF8 / 3576
{
	if (Function_107(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_19(int iParam0, var uParam1, int iParam2) //Position: 0xE13 / 3603
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_INT_ATTR(&iVar0, &uParam1, &iParam0);
	return iVar0;
}

void Function_20(struct<69> Param0) //Position: 0xE2B / 3627
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_107(Param0.f_64, 2))
	{
		Function_131(&Param0 + 24, 0);
	}
	else if (UNK_0x0A0E660E() || Function_29(&Param0))
	{
		if (Param0.f_68 == 6)
		{
			if (Function_27(&Param0) <= Function_25(&Param0 + 16))
			{
				if (IS_ACTOR_VALID(&Param0 + 24))
				{
					if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
					{
						if (UNK_0x0A0E660E() || !Global_6663)
						{
							iVar1 = Function_23(&Param0 + 16, &bVar0);
							if (!bVar0 && UNK_0x0A0E660E())
							{
								iVar1 = "nDisengage";
								bVar0 = true;
							}
							if (bVar0)
							{
								bLocal_145 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_146))
								{
									Function_152("ManagePlayerQuit: Create quit context");
									if (Function_22(&Param0 + 16, "UseQuitBOverride", 0))
									{
										bLocal_146 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@UI.CANCEL", false, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_146 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@GENERIC.USE", false, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(&bLocal_146))
								{
									Function_2("USE CONTEXT QUIT", &Param0 + 24);
									Function_108(&Param0);
									Param0.f_68 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_146))
									{
										Function_152("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(&bLocal_146);
										iVar2 = 0;
										if (GET_GRINGO_BOOL_ATTR("DeactivateChildren", &Param0 + 16, &iVar2))
										{
											GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 0);
										}
									}
								}
								if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
								{
									if (Function_21(&Param0 + 24))
									{
										Function_108(&Param0);
										Function_2("STICK QUIT", &Param0 + 24);
										Param0.f_68 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_146))
										{
											Function_152("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(&bLocal_146);
										}
									}
								}
							}
						}
						else if (Global_6663)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_146))
							{
								Function_152("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(&bLocal_146);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_146))
		{
			Function_152("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(&bLocal_146);
		}
	}
	return;
}

bool Function_21(int iParam0) //Position: 0x115F / 4447
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

bool Function_22(bool bParam0, var uParam1, int iParam2) //Position: 0x1278 / 4728
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

bool Function_23(char* cParam0, int iParam1) //Position: 0x1296 / 4758
{
	return Function_24(&cParam0, "UseQuit", &iParam1);
}

bool Function_24(char* cParam0, char* cParam1, int iParam2) //Position: 0x12AF / 4783
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

float Function_25(int iParam0) //Position: 0x12FF / 4863
{
	return Function_26(&iParam0, "MinimumUseTime", 0.0f);
}

int Function_26(float fParam0, var uParam1, int iParam2) //Position: 0x131D / 4893
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, &uParam1, &fParam0);
	return iVar0;
}

float Function_27(vector3 vParam0) //Position: 0x1335 / 4917
{
	if (Function_29(&vParam0))
	{
		if (Function_28(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_28(int iParam0) //Position: 0x1402 / 5122
{
	return Function_107(iParam0, 2);
}

bool Function_29(int iParam0) //Position: 0x1410 / 5136
{
	return Function_107(iParam0, 1);
}

bool Function_30(int iParam0, int iParam1) //Position: 0x141E / 5150
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

bool Function_31(struct<69> Param0) //Position: 0x146B / 5227
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
	bool bVar14;
	var uVar15;
	struct<2> Var16;
	float fVar18;
	bool bVar19;
	bool bVar20;
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
	
	bVar11 = Function_106(&Param0 + 16);
	if (!(IS_ACTOR_VALID(&Param0 + 24) && IS_ACTOR_ALIVE(&Param0 + 24)))
	{
		Function_132("UpdateUse with invalid actor", &Param0 + 24);
		return 0;
	}
	if (!Function_22(&Param0 + 16, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Param0 + 24)) >= 0,5f)
		{
			Function_132("Damage quit", &Param0 + 24);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(&Param0 + 24))
	{
		Function_132("Incapacitation quit", &Param0 + 24);
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
			bLocal_145 = true;
			if (IS_ACTOR_PLAYER(&Param0 + 24))
			{
				if (Function_105(&Param0 + 16, &fVar22))
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
				if (Function_103(&Param0 + 24, &Param0 + 16))
				{
					Function_2("Navigation complete (going to eStarting)", &Param0 + 24);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
					Param0.f_68 = 1;
					Function_102(&Param0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Param0.f_68 = 1;
				Function_102(&Param0);
			}
			if (!Function_101(&Param0 + 16) && Param0.f_68 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", &Param0 + 24);
				SET_ACTOR_POSTURE(&Param0 + 24, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_145 = true;
			Function_100(&Param0 + 16);
			if (((!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24)) && !Function_107(Param0.f_64, 1)) && !DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
			{
				Function_87(&Param0 + 16);
			}
			fVar18 = Function_86(&Param0 + 16);
			if (Function_27(&Param0) < fVar18)
			{
				Function_2("INTRO TIMED OUT - ABORTING", &Param0 + 24);
				return 0;
			}
			if (Function_107(Param0.f_64, 1))
			{
				Function_82(&Param0 + 16, &Var3, &uVar5);
				if (!Function_107(Param0.f_64, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
					{
						Function_2("SUSPEND MOVER", &Param0 + 24);
						SUSPEND_MOVER(&Param0 + 24);
						Function_81(&Param0 + 64, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
					{
						Function_2("nFIX MOVER", &Param0 + 24);
						SET_MOVER_FROZEN(&Param0 + 24, true);
						Function_81(&Param0 + 64, 16);
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
					TELEPORT_ACTOR_WITH_HEADING(&Param0 + 24, Var3, uVar5, 1, 1, Function_80());
				}
				if (!Function_107(Param0.f_64, 1024))
				{
					Function_81(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_22(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			else if (Function_103(&Param0 + 24, &Param0 + 16))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Function_2("FINISHED NAVIGATION", &Param0 + 24);
				if (!Function_107(Param0.f_64, 1024))
				{
					Function_81(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_22(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			if (Param0.f_68 != 3 && !Function_107(Param0.f_64, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
				{
					Function_2("SUSPEND MOVER", &Param0 + 24);
					SUSPEND_MOVER(&Param0 + 24);
					Function_81(&Param0 + 64, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
				{
					Function_2("nFIX MOVER", &Param0 + 24);
					SET_MOVER_FROZEN(&Param0 + 24, true);
					Function_81(&Param0 + 64, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_107(Param0.f_64, 32))
			{
				bLocal_145 = true;
				if (!ACTOR_IS_HOLSTERED(&Param0 + 24))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", &Param0 + 24);
			}
			Param0.f_68 = 4;
		
		case 0x00000004:
			Function_67(&Param0 + 16);
			bLocal_145 = true;
			Function_66(&Param0);
			Function_63(&Param0, Function_65(&Param0 + 16));
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 0);
			}
			bVar29 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", &Param0 + 16, &iVar28);
			if (iVar28 == 0)
			{
				bVar29 = Function_107(Param0.f_64, 1);
			}
			bVar0 = Function_62(&Param0 + 24, &Param0 + 16, bVar29);
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
						if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &bVar1, Function_24(&bVar1, "AttachBone", &bVar9), Function_24(&bVar1, "AttachLocator", &bVar9), 1))
						{
							Function_61(&bVar1, &Param0 + 24);
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
					bVar14 = GRINGO_GET_ATTRIBUTE(&Param0 + 16, bVar12);
					while (bVar12 <= GRINGO_GET_ATTRIBUTE_COUNT(&Param0 + 16))
					{
						bVar14 = GRINGO_GET_ATTRIBUTE(&Param0 + 16, bVar12);
						if (GRINGO_IS_ATTRIBUTE_VALID(&bVar14))
						{
							if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(&bVar14) == 2)
							{
								if (iVar21 == GRINGO_GET_ATTRIBUTE_HASH(&bVar14))
								{
									uVar15 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&bVar14, &uVar13);
									bVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar15, 1, GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 0), 0);
									while (bVar10 >= 4294967295)
									{
										bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar10, GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 0));
										if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &bVar1, Function_24(&bVar1, "AttachBone", &bVar9), Function_24(&bVar1, "AttachLocator", &bVar9), 1))
										{
											if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
											{
												uVar31 = GRINGO_GET_PROP_FROM_COMPONENT(&bVar1);
												if (IS_PHYSINST_VALID(&uVar31))
												{
													ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), &uVar31, 0);
												}
											}
											Function_61(&bVar1, &Param0 + 24);
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
					Function_53(&Param0, &uVar7, &iLocal_143, &uLocal_141);
					if (GET_OBJECT_TYPE(&uVar7) != 15)
					{
						bVar20 = GET_PHYSINST_FROM_OBJECT(&uVar7);
						if (IS_PHYSINST_VALID(&bVar20))
						{
							if (!IS_PROP_FIXED(&bVar20))
							{
								Function_81(&Param0 + 64, 256);
								SET_PROP_FIXED(&bVar20, 1);
							}
							else
							{
								Function_52(&Param0 + 64, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Param0 + 32);
				if (Function_107(Param0.f_64, 16))
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
				if (Function_51(&Param0 + 16))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(&bVar0))
				{
					if (Function_50(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_49(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&Param0 + 24, &uVar8);
							}
						}
					}
					else if (Function_48(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_49(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&uVar8, &Param0 + 24);
							}
						}
					}
					bVar9 = false;
					uVar6 = Function_47(&Param0 + 16, &bVar9);
					if (bVar9)
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_49(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uVar8, &uVar6);
							}
						}
					}
				}
				if (Function_46(&Param0 + 16))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(&Param0 + 24))
					{
						Function_81(&Param0 + 64, 8);
					}
					else
					{
						Function_52(&Param0 + 64, 8);
					}
					if (Function_107(Param0.f_64, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, true);
					}
				}
				else
				{
					Function_52(&Param0 + 64, 8);
				}
				if (Function_45(&Param0 + 16))
				{
					NET_SET_NODE_REPLICATION(&Param0 + 24, 1, 1);
					UNK_0xC17BAD12(&Param0 + 24);
				}
				uVar33 = Function_24(&Param0 + 16, "CustomReactNode", &bVar32);
				if (bVar32)
				{
					SET_REACT_NODE_FOR_ACTOR(&Param0 + 24, &uVar33);
				}
				iVar34 = 1;
				bVar35 = Function_22(&Param0 + 16, "CanAnimalsAttack", iVar34);
				if (!bVar35)
				{
					if (IS_ACTOR_VALID(&Param0 + 24))
					{
						SET_ANIMAL_CAN_ATTACK(&Param0 + 24, 0);
					}
				}
				Function_44(&Param0 + 24, &Param0 + 16);
				bVar36 = Function_22(&Param0 + 16, "AllowTalking", 1);
				if (!bVar36)
				{
					STOP_PED_SPEAKING(&Param0 + 24, 1);
				}
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				Function_43();
			}
			Param0.f_68 = 6;
			if (Function_107(Param0.f_64, 1))
			{
				if (Function_42(&Param0 + 16))
				{
					Function_2("MID ACTION NODE", &Param0 + 24);
				}
			}
		
		case 0x00000006:
			if (!Function_41(&Param0 + 24, &Param0 + 16))
			{
				Function_2("CUSTOM QUIT DURING USE", &Param0 + 24);
				Param0.f_68 = 8;
			}
			bVar0 = Function_62(&Param0 + 24, &Param0 + 16, Function_107(Param0.f_64, 1));
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
			if (Function_27(&Param0) <= Function_25(&Param0 + 16))
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
				bVar55 = Function_40(&Param0 + 16);
				if (bVar55 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Var53);
					if (VDIST(Var53, *(&Param0 + 32)) < bVar55)
					{
						Function_2("UPDATE USE TOO FAR", &Param0 + 24);
						if (Function_39())
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
					if (Function_38(&Param0 + 16) <= 0.0f)
					{
						if (Function_27(&Param0) < Function_38(&Param0 + 16))
						{
							Function_2("UPDATE USE USETIME SATISFIED", &Param0 + 24);
							Param0.f_68 = 7;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_152("nRewarding");
			Function_37(&Param0 + 24, &Param0 + 16);
			Function_36(&Param0 + 24, &Param0 + 16);
			Function_35(&Param0 + 24, &Param0 + 16);
			SET_GRINGO_OBJECT_REF_ATTR(&Param0 + 24, "LastUserObject", &Param0 + 16);
			Function_81(&Param0 + 64, 64);
			Param0.f_68 = 8;
			break;
		
		case 0x00000008:
			bLocal_145 = true;
			if (!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				if (!DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
				{
					if (!Function_22(&Param0 + 16, "GringoCamNoEndCut", 0))
					{
						if (!Function_34())
						{
							Function_87(&Param0 + 16);
						}
					}
				}
				else
				{
					DECOR_REMOVE(&Param0 + 24, "NoGringoCamera");
				}
			}
			if (Function_22(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
			{
				Function_2("Use case quits - no cleapup due to DoNotCleanUpUserSettings attribute", &Param0 + 24);
				return 0;
			}
			Function_2("GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS", &Param0 + 24);
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&Param0 + 24);
			Param0.f_68 = 9;
			Function_33(&Param0 + 24, &Param0 + 16);
			break;
		
		case 0x00000009:
			if (Function_107(Param0.f_64, 1024))
			{
				Function_52(&Param0 + 64, 1024);
				if (!Function_22(&Param0 + 16, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, true);
				}
			}
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 1);
			}
			bLocal_145 = true;
			bVar0 = Function_62(&Param0 + 24, &Param0 + 16, Function_107(Param0.f_64, 1));
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
	Function_32(&Param0 + 24, Param0.f_68);
	return 1;
}

void Function_32(var uParam0, int iParam1) //Position: 0x27A0 / 10144
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		REPORT_GRINGO_USE_PHASE(&uParam0, iParam1);
	}
	return;
}

void Function_33(var uParam0, var uParam1) //Position: 0x27B7 / 10167
{
	uParam1 = &uParam1;
	uParam0 = &uParam0;
	return;
}

bool Function_34() //Position: 0x27C9 / 10185
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

void Function_35(var uParam0, int iParam1) //Position: 0x27FC / 10236
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

void Function_36(var uParam0, int iParam1) //Position: 0x287A / 10362
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

void Function_37(int iParam0, int iParam1) //Position: 0x28F6 / 10486
{
	iParam1 = &iParam1;
	iParam0 = &iParam0;
	return;
}

float Function_38(int iParam0) //Position: 0x2908 / 10504
{
	return Function_26(&iParam0, "UseTime", 5.0f);
}

bool Function_39() //Position: 0x291F / 10527
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

int Function_40(int iParam0) //Position: 0x292C / 10540
{
	return Function_26(&iParam0, "MoveAllowance", 1,5f);
}

bool Function_41(int iParam0, bool bParam1) //Position: 0x294D / 10573
{
	bParam1 = &bParam1;
	iParam0 = &iParam0;
	if (iLocal_16)
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		iLocal_16 = 0;
	}
	return 1;
}

bool Function_42(bool bParam0) //Position: 0x296F / 10607
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, &bParam0));
}

void Function_43() //Position: 0x298F / 10639
{
	return;
}

void Function_44(int iParam0, bool bParam1) //Position: 0x2995 / 10645
{
	bParam1 = &bParam1;
	iParam0 = &iParam0;
	if (IS_ACTOR_LOCAL_PLAYER(&iParam0))
	{
		HUD_ENABLE(0);
	}
	return;
}

bool Function_45(char* cParam0) //Position: 0x29B4 / 10676
{
	cParam0 = &cParam0;
	return 0;
}

bool Function_46(int iParam0) //Position: 0x29C1 / 10689
{
	return Function_22(&iParam0, "OneShotKill", 0);
}

bool Function_47(char* cParam0, int iParam1) //Position: 0x29DC / 10716
{
	return Function_24(&cParam0, "ParentAnimNode", &iParam1);
}

bool Function_48(int iParam0) //Position: 0x29FC / 10748
{
	return Function_22(&iParam0, "LinkToParentAnim", 0);
}

var Function_49(int iParam0) //Position: 0x2A1C / 10780
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (vLocal_27 - 1))
	{
		if (&vLocal_27[iVar09] + 16 == &iParam0)
		{
			return &vLocal_27[iVar09] + 24;
		}
		iVar0++;
	}
	return &iVar1;
}

bool Function_50(int iParam0) //Position: 0x2A53 / 10835
{
	return Function_22(&iParam0, "LinkParentToAnim", 0);
}

bool Function_51(int iParam0) //Position: 0x2A73 / 10867
{
	return Function_22(&iParam0, "SingularUse", 0);
}

void Function_52(var uParam0, int iParam1) //Position: 0x2A8E / 10894
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_53(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2AA4 / 10916
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
	uVar2 = Function_60(&iParam0 + 16, &bVar0);
	uVar3 = Function_59(&iParam0 + 16, &bVar1);
	uVar4 = Function_58(&iParam0 + 16);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(&uVar4)))
	{
		uVar6 = Function_57(&iParam0 + 16, &bVar5);
		if (bVar5)
		{
			uVar8 = Function_56(&iParam0 + 16, &bVar7);
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
		if (Function_39())
		{
			Function_55();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, &uVar3, Function_54(&iParam0 + 16, &iVar10), 0, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, Function_9(), Function_54(&iParam0 + 16, &iVar10), 0, bVar9);
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
			if (Function_22(&uVar4, "LinkToUser", 0))
			{
				if (Function_39())
				{
					Function_55();
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

bool Function_54(char* cParam0, int iParam1) //Position: 0x2DC8 / 11720
{
	return Function_24(&cParam0, "TargetLocator", &iParam1);
}

void Function_55() //Position: 0x2DE7 / 11751
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_56(char* cParam0, int iParam1) //Position: 0x2DF6 / 11766
{
	return Function_24(&cParam0, "UserPhysAttachBone", &iParam1);
}

bool Function_57(char* cParam0, int iParam1) //Position: 0x2E1A / 11802
{
	return Function_24(&cParam0, "TargetPhysAttachBone", &iParam1);
}

int Function_58(int iParam0) //Position: 0x2E40 / 11840
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, &iParam0);
}

bool Function_59(var uParam0, int iParam1) //Position: 0x2E5E / 11870
{
	return Function_24(&uParam0, "TargetAttachBone", &iParam1);
}

bool Function_60(var uParam0, int iParam1) //Position: 0x2E80 / 11904
{
	return Function_24(&uParam0, "TargetAttachSlot", &iParam1);
}

void Function_61(bool bParam0, int iParam1) //Position: 0x2EA2 / 11938
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

var Function_62(var uParam0, int iParam1, bool bParam2) //Position: 0x2F6A / 12138
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

void Function_63(int iParam0, float fParam1) //Position: 0x2FE6 / 12262
{
	if (!Function_29(&iParam0))
	{
		Function_64(&iParam0, fParam1);
	}
	return;
}

void Function_64(vector3 vParam0) //Position: 0x2FFE / 12286
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_81(&vParam0, 1);
	Function_52(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_65(int iParam0) //Position: 0x3023 / 12323
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_26(&iParam0, "RandUseTime", 0.0f));
}

void Function_66(vector3 vParam0) //Position: 0x3044 / 12356
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_67(bool bParam0) //Position: 0x305B / 12379
{
	bParam0 = &bParam0;
	if (iLocal_12 && !iLocal_14)
	{
		if (GRINGO_COMPONENT_CHECK_NAME("PutOn_Horse", &bParam0))
		{
			uLocal_4 = CREATE_LAYOUT("Hogtied_Gringo_Layout");
			Function_10(&iLocal_6);
			*(&Local_17 + 12) = Function_10(&iLocal_6);
			Function_11(&iLocal_6);
			Local_17 = Function_11(&iLocal_6);
			Local_17.f_24 = 0;
			iLocal_14 = 1;
			if (DECOR_CHECK_EXIST(&Global_54076, "Hogtie_PutOnHorse_L"))
			{
				Function_76(&uLocal_4, 0, &Local_17, &Global_54076, &iLocal_6, GET_TARGET_ACTOR(), 1, 0, 1);
			}
			else
			{
				Function_72(&uLocal_4, 0, &Local_17, &Global_54076, &iLocal_6, GET_TARGET_ACTOR(), 1, 0, 1);
			}
		}
		else if (GRINGO_COMPONENT_CHECK_NAME("nDrop_Body", &bParam0) && !DECOR_CHECK_EXIST(&Global_54076, "NoPutDownCam"))
		{
			iLocal_14 = 1;
			uLocal_4 = CREATE_LAYOUT("Hogtied_Gringo_Layout");
			Function_10(&Global_54076);
			*(&Local_17 + 12) = Function_10(&Global_54076);
			Function_11(&Global_54076);
			Local_17 = Function_11(&Global_54076);
			Local_17.f_24 = 0;
			Function_68(&uLocal_4, 0, &Local_17, &Global_54076, GET_TARGET_ACTOR(), 1, 0, 1);
		}
	}
	return;
}

var Function_68(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x3192 / 12690
{
	var uVar0;
	
	if (&bParam5)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Hogtie_PutDown", 2, 1);
	}
	Function_69(&uVar0, &uParam2, &uParam3, &uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_69(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x3223 / 12835
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_71(&uVar0, &uParam1, &bParam2, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_70(&uVar0, &bParam2, &uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(&uParam0, 0, 1, 1,25f, 0, 0);
	SET_TRANSITION_COLLISION_PARAMS(&uVar1, 1, 1);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 0,333f, 1);
	SET_TRANSITION_COLLISION_PARAMS(&uVar1, 1, 1);
}

void Function_70(int iParam0, int iParam1, int iParam2) //Position: 0x3296 / 12950
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(1,436189f, 0,492736f, 0,233008f), Vector(22,81943f, 60,71665f, -1,7E-05f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&iParam0, &iParam1, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&iParam0, &iParam2, 52);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_71(float fParam0, struct<25> Param1) //Position: 0x334B / 13131
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 1);
	Var0 = Vector(1,273693f, 0,489523f, 0,395424f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(0,77584f, -0,102225f, 0,622592f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&fParam0, Var0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &fParam3, 52);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(&fParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
}

var Function_72(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, float fParam8) //Position: 0x3439 / 13369
{
	var uVar0;
	
	if (&bParam6)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Hogtie_PutOnHorse_R", 2, 1);
	}
	Function_73(&uVar0, &uParam2, &uParam3, &uParam4, &uParam5);
	if (fParam8 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam7)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam7);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_73(Vector3 vParam0, var uParam1, float fParam2, int iParam3, var uParam4) //Position: 0x34D2 / 13522
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&vParam0, 0);
	Function_75(&uVar0, &uParam1, &fParam2, &iParam3, &uParam4);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&vParam0, 1);
	Function_74(&uVar0, &uParam1, &fParam2, &iParam3, &uParam4);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&vParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&vParam0, 0, 1, 5.0f, 0, 1);
	SET_TRANSITION_COLLISION_PARAMS(&uVar1, 1, 0);
}

void Function_74(float fParam0, struct<25> Param1) //Position: 0x3531 / 13617
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 43,9107f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	Var0 = Vector(0,944168f, 1,523165f, -0,734789f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 0.0f), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(0,692662f, 0,031325f, -0,720582f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&fParam0, Var0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &fParam4, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam3, 119);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(&fParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,5f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
}

void Function_75(float fParam0, struct<25> Param1) //Position: 0x363B / 13883
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 43,9107f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	Var0 = Vector(1,179794f, 1,489099f, -1,514868f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 0.0f), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(0,48271f, 0,061713f, -0,873603f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&fParam0, Var0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &fParam4, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam3, 119);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(&fParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,5f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
}

var Function_76(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, float fParam8) //Position: 0x3745 / 14149
{
	var uVar0;
	
	if (&bParam6)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Hogtie_PutOnHorse", 2, 1);
	}
	Function_77(&uVar0, &uParam2, &uParam3, &uParam4, &uParam5);
	if (fParam8 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam7)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam7);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_77(Vector3 vParam0, var uParam1, float fParam2, int iParam3, var uParam4) //Position: 0x37DC / 14300
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&vParam0, 0);
	Function_79(&uVar0, &uParam1, &fParam2, &iParam3, &uParam4);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&vParam0, 1);
	Function_78(&uVar0, &uParam1, &fParam2, &iParam3, &uParam4);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&vParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&vParam0, 0, 1, 4.0f, 0, 1);
	SET_TRANSITION_COLLISION_PARAMS(&uVar1, 1, 0);
}

void Function_78(float fParam0, struct<25> Param1) //Position: 0x383B / 14395
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 48,98911f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	Var0 = Vector(-1,140573f, 1,581926f, -0,367888f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 0.0f), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(-0,725698f, 0,047662f, -0,686361f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&fParam0, Var0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &fParam4, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam3, 119);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(&fParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,5f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
}

void Function_79(float fParam0, struct<25> Param1) //Position: 0x3945 / 14661
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 42,74031f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	Var0 = Vector(-0,852804f, 1,684564f, -1,548106f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 0.0f), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(-0,25955f, 0,033027f, -0,965165f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&fParam0, Var0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &fParam4, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam3, 119);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(&fParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,5f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
}

int Function_80() //Position: 0x3A4F / 14927
{
	return 1;
}

void Function_81(var uParam0, int iParam1) //Position: 0x3A56 / 14934
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_82(int iParam0, var uParam1, int iParam2) //Position: 0x3A67 / 14951
{
	float fVar0;
	
	Function_84(&iParam0);
	uParam1 = Function_84(&iParam0);
	iParam2 = Function_12(&iParam0);
	fVar0 = Function_83(&iParam0);
	if (fVar0 < 180.0f)
	{
		fVar0 = 180.0f;
	}
	iParam2 = (iParam2 + RAND_FLOAT_RANGE(-fVar0, fVar0));
	return;
}

float Function_83(int iParam0) //Position: 0x3AAC / 15020
{
	return Function_26(&iParam0, "UseDirectionToleranceDegrees", 0.0f);
}

struct<8> Function_84(int iParam0) //Position: 0x3AD8 / 15064
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	
	if (Function_85(&iParam0))
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

bool Function_85(int iParam0) //Position: 0x3BDA / 15322
{
	return Function_22(&iParam0, "UsePosActorRelative", 0);
}

int Function_86(int iParam0) //Position: 0x3BFD / 15357
{
	return Function_26(&iParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_87(bool bParam0) //Position: 0x3C25 / 15397
{
	if (iLocal_12 && !iLocal_14)
	{
		if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Horse", &bParam0))
		{
			uLocal_4 = CREATE_LAYOUT("Hogtied_Gringo_Layout");
			Function_10(&iLocal_6);
			*(&Local_17 + 12) = Function_10(&iLocal_6);
			Function_11(&iLocal_6);
			Local_17 = Function_11(&iLocal_6);
			Local_17.f_24 = 0;
			iLocal_14 = 1;
			if (DECOR_GET_BOOL(&Global_54076, "Hogtie_PickupHorse_L"))
			{
				Function_96(&uLocal_4, 0, &Local_17, &Global_54076, &iLocal_6, GET_TARGET_ACTOR(), 1, 0, 1);
			}
			else
			{
				Function_92(&uLocal_4, 0, &Local_17, &Global_54076, &iLocal_6, GET_TARGET_ACTOR(), 1, 0, 1);
			}
		}
		else if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Ground", &bParam0))
		{
			uLocal_4 = CREATE_LAYOUT("Hogtied_Gringo_Layout");
			Function_10(GET_TARGET_ACTOR());
			*(&Local_17 + 12) = Function_10(GET_TARGET_ACTOR());
			Function_11(GET_TARGET_ACTOR());
			Local_17 = Function_11(GET_TARGET_ACTOR());
			Local_17.f_24 = 0;
			iLocal_14 = 1;
			if (!DECOR_CHECK_EXIST(&Global_54076, "Pickup_ALT"))
			{
				Function_88(&uLocal_4, 0, &Local_17, &Global_54076, GET_TARGET_ACTOR(), 1, 0, 1);
			}
		}
	}
	return;
}

var Function_88(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x3D5A / 15706
{
	var uVar0;
	
	if (&bParam5)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Hogtie_PickUp", 2, 1);
	}
	Function_89(&uVar0, &uParam2, &uParam3, &uParam4);
	if (bParam7 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_89(int iParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x3DEA / 15850
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_91(&uVar0, &uParam1, &bParam2, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_90(&uVar0, &bParam2, &uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 1.0f, 0);
	SET_TRANSITION_COLLISION_PARAMS(&uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 4.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(&uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 1,675f, 2);
	SET_TRANSITION_COLLISION_PARAMS(&uVar1, 1, 0);
}

void Function_90(bool bParam0, int iParam1, int iParam2) //Position: 0x3E6E / 15982
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 53,62094f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &bParam0, &iParam1, Vector(-0,830532f, 1,265587f, 0,663826f), Vector(11,75119f, -59,63327f, 6,783992f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&bParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&bParam0, &iParam1, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&bParam0, &iParam2, 52);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(&bParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&bParam0, &iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &bParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,5f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

void Function_91(float fParam0, struct<25> Param1) //Position: 0x3F27 / 16167
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 42,71016f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	Var0 = Vector(-1,425053f, 0,715797f, -0,168659f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(-0,887724f, 0,059831f, 0,456472f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&fParam0, Var0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &fParam3, 52);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(&fParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,5f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
}

var Function_92(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, float fParam8) //Position: 0x401A / 16410
{
	var uVar0;
	
	if (&bParam6)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Hogtie_PickupHorse_R", 2, 1);
	}
	Function_93(&uVar0, &uParam2, &uParam3, &uParam4, &uParam5);
	if (fParam8 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam7)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam7);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_93(Vector3 vParam0, var uParam1, float fParam2, int iParam3, var uParam4) //Position: 0x40B4 / 16564
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&vParam0, 0);
	Function_95(&uVar0, &uParam1, &fParam2, &iParam3, &uParam4);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&vParam0, 1);
	Function_94(&uVar0, &uParam1, &fParam2, &iParam3, &uParam4);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&vParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&vParam0, 0, 1, 5,1f, 0, 1);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&uVar1, 5.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(&uVar1, 1, 0);
}

void Function_94(float fParam0, struct<25> Param1) //Position: 0x4120 / 16672
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 51,02201f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	Var0 = Vector(1,218257f, 1,440567f, -1,345491f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 0.0f), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(0,224632f, 0,111187f, -0,96808f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&fParam0, Var0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &fParam4, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam3, 119);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(&fParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,5f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
}

void Function_95(float fParam0, struct<25> Param1) //Position: 0x422A / 16938
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 51,02201f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	Var0 = Vector(1,124511f, 1,509215f, -0,246571f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 0.0f), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(0,796731f, 0,093124f, -0,597116f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&fParam0, Var0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &fParam4, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam3, 119);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(&fParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,5f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
}

var Function_96(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, float fParam8) //Position: 0x4334 / 17204
{
	var uVar0;
	
	if (&bParam6)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Hogtie_PickupHorse", 2, 1);
	}
	Function_97(&uVar0, &uParam2, &uParam3, &uParam4, &uParam5);
	if (fParam8 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam7)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam7);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_97(Vector3 vParam0, var uParam1, float fParam2, int iParam3, var uParam4) //Position: 0x43CC / 17356
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&vParam0, 0);
	Function_99(&uVar0, &uParam1, &fParam2, &iParam3, &uParam4);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&vParam0, 1);
	Function_98(&uVar0, &uParam1, &fParam2, &iParam3, &uParam4);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&vParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&vParam0, 0, 1, 4.0f, 0, 1);
	SET_TRANSITION_COLLISION_PARAMS(&uVar1, 1, 0);
}

void Function_98(float fParam0, struct<25> Param1) //Position: 0x442B / 17451
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 38,54322f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	Var0 = Vector(-0,434786f, 1,085596f, -0,644915f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 0.0f), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(0,60267f, -0,300194f, -0,739373f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&fParam0, Var0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &fParam4, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam3, 119);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(&fParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,5f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
}

void Function_99(float fParam0, struct<25> Param1) //Position: 0x4535 / 17717
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 38,54322f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	Var0 = Vector(-1,610833f, 1,118547f, -0,550768f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 0.0f), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(-0,695042f, -0,215548f, -0,685898f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&fParam0, Var0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &fParam4, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam3, 119);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(&fParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,5f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
}

void Function_100(int iParam0) //Position: 0x463F / 17983
{
	iParam0 = &iParam0;
	return;
}

bool Function_101(int iParam0) //Position: 0x464B / 17995
{
	return Function_22(&iParam0, "MaintainPosture", 0);
}

void Function_102(int iParam0) //Position: 0x466A / 18026
{
	if (!Function_29(&iParam0))
	{
		Function_64(&iParam0, 0.0f);
	}
	return;
}

bool Function_103(bool bParam0, int iParam1) //Position: 0x4681 / 18049
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	var uVar6;
	var uVar8;
	
	if (IS_ACTOR_LOCAL_PLAYER(&bParam0))
	{
		if (GRINGO_COMPONENT_CHECK_NAME("PutOn_Horse", &iParam1))
		{
			return 1;
		}
		if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Horse", &iParam1))
		{
			return 1;
		}
		if (GRINGO_COMPONENT_CHECK_NAME("Cut_Free", &iParam1))
		{
			return 1;
		}
		if (GRINGO_COMPONENT_CHECK_NAME("nDrop_Body", &iParam1))
		{
			return 1;
		}
		if (DECOR_CHECK_EXIST(&bParam0, "Pickup_ALT"))
		{
			Function_10(GRINGO_GET_MY_OBJECT_REF());
			Var0 = Function_10(GRINGO_GET_MY_OBJECT_REF());
		}
		else
		{
			GET_OBJECT_RELATIVE_POSITION(StackVal, GRINGO_GET_MY_OBJECT_REF(), Vector(0.0f, 0.0f, 0,9f), &Var0);
		}
		bVar2 = Function_12(&iParam1);
		TELEPORT_ACTOR_WITH_HEADING(&bParam0, Var0, bVar2, 0, 1, 1);
		return 1;
	}
	if (GRINGO_COMPONENT_CHECK_NAME("PutOn_Horse", &iParam1))
	{
		return 1;
	}
	if (GRINGO_COMPONENT_CHECK_NAME("nDrop_Body", &iParam1))
	{
		return 1;
	}
	bVar3 = Function_12(&iParam1);
	bVar4 = (Function_104(&iParam1) + 0,8f);
	fVar5 = (Function_83(&iParam1) + 1.0f);
	if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Ground", &iParam1))
	{
		GET_OBJECT_RELATIVE_POSITION(StackVal, GRINGO_GET_MY_OBJECT_REF(), Vector(-0,9f, 0.0f, 0.0f), &uVar6);
		return GRINGO_ACTOR_MOVE_TO_AND_FACE(&bParam0, &uVar6, bVar4, 0,2f, 1, bVar3, fVar5, 0, 0);
	}
	if (GRINGO_COMPONENT_CHECK_NAME("Cut_Free", &iParam1))
	{
		GET_OBJECT_RELATIVE_POSITION(StackVal, GRINGO_GET_MY_OBJECT_REF(), Vector(-0,4823f, 0.0f, -0,597f), &uVar8);
		return GRINGO_ACTOR_MOVE_TO_AND_FACE(&bParam0, &uVar8, bVar4, 0,2f, 1, bVar3, fVar5, 0, 0);
	}
	return 0;
}

float Function_104(int iParam0) //Position: 0x4823 / 18467
{
	return Function_26(&iParam0, "UseLocationTolerance", 0.0f);
}

bool Function_105(var uParam0, int iParam1) //Position: 0x4847 / 18503
{
	iParam1 = Function_26(&uParam0, "AreaClearCheck", -1.0f);
	if (iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_106(var uParam0) //Position: 0x4875 / 18549
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

bool Function_107(var uParam0, int iParam1) //Position: 0x498E / 18830
{
	return (uParam0 && iParam1) == 0;
}

void Function_108(struct<69> Param0) //Position: 0x499B / 18843
{
	if (Function_107(Param0.f_64, 16))
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

void Function_109(struct<69> Param0) //Position: 0x4A1D / 18973
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
	Function_24(&Param0 + 16, "CustomReactNode", &bVar0);
	if (bVar0)
	{
		if (IS_ACTOR_VALID(&Param0 + 24))
		{
			RESET_REACT_NODE_FOR_ACTOR(&Param0 + 24);
		}
	}
	iVar1 = 1;
	bVar2 = Function_22(&Param0 + 16, "CanAnimalsAttack", iVar1);
	if (!bVar2)
	{
		if (IS_ACTOR_VALID(&Param0 + 24))
		{
			SET_ANIMAL_CAN_ATTACK(&Param0 + 24, 1);
		}
	}
	bVar3 = Function_22(&Param0 + 16, "AllowTalking", 1);
	if (!bVar3)
	{
		STOP_PED_SPEAKING(&Param0 + 24, 0);
	}
	if (Param0.f_68 < 8)
	{
		Function_33(&Param0 + 24, &Param0 + 16);
	}
	if ((HAS_INVENTORY_COMPONENT(&Param0 + 24) && Function_107(Param0.f_64, 32)) && Function_22(&Param0 + 16, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(&Param0 + 24, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_115(&Param0 + 24, &Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		GRINGO_REPORT_USE_FINISHED(&Param0 + 24, Function_107(Param0.f_64, 64));
		Function_32(&Param0 + 24, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
		if (!Function_22(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_107(Param0.f_64, 128) && Function_22(&Param0 + 16, "RedrawWeapon", 1))
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
			if (Function_50(&Param0 + 16))
			{
				CLEAR_LINKED_ANIM_TARGET(&Param0 + 24);
			}
			if (Function_107(Param0.f_64, 16))
			{
				Function_108(&Param0);
				Function_52(&Param0 + 64, 16);
			}
			if (Function_107(Param0.f_64, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, false);
			}
			if (Function_114(&Param0 + 16) && Function_107(Param0.f_64, 512))
			{
				Function_52(&Param0 + 64, 512);
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
	if (Function_48(&Param0 + 16))
	{
		uVar9 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
		if (IS_GRINGO_COMPONENT_VALID(&uVar9))
		{
			uVar10 = Function_49(&uVar9);
			if (IS_ACTOR_VALID(&uVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(&uVar10);
			}
		}
	}
	Function_113(&Param0 + 16);
	bVar11 = Function_22(&Param0 + 16, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(&Param0 + 24))
		{
			Function_112(&Param0, GET_TARGET_OBJECT());
		}
		uVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(&uVar12))
		{
			if (Function_107(Param0.f_64, 256))
			{
				Function_52(&Param0 + 64, 256);
				SET_PROP_FIXED(&uVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(&Param0 + 56))
	{
		DESTROY_OBJECT(&Param0 + 56);
	}
	if (&Param0 + 16 == &iLocal_143)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(&uLocal_141));
		iLocal_143 = &uVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 0);
	if (Function_51(&Param0 + 16))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 1);
	}
	if (IS_ATTACHMENT_VALID(&Param0 + 48))
	{
		REMOVE_OBJECT_ATTACHMENT(&Param0 + 48);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_146))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_146);
	}
	SET_GRINGO_OBJECT_REF_ATTR(&uVar14, "UserObject", &Param0 + 16);
	Function_66(&Param0);
	Function_102(&Param0);
	GRINGO_CLEAR_COMPONENT_USER(&Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24) && bParam1)
	{
		Function_2("Setting reuse delay", &Param0 + 24);
		GRINGO_SET_REUSE_DELAY(Function_111(&Param0 + 16), &Param0 + 16);
	}
	Function_52(&Param0 + 64, 2);
	if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &Param0 + 16);
	}
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
		{
			Function_110();
		}
	}
	else
	{
		Function_110();
	}
	Param0.f_68 = 0;
	(&Param0 + 24) = "";
	return;
}

void Function_110() //Position: 0x4FC8 / 20424
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

int Function_111(int iParam0) //Position: 0x5002 / 20482
{
	return Function_26(&iParam0, "ReuseDelay", 15.0f);
}

void Function_112(int iParam0, var uParam1) //Position: 0x5020 / 20512
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_60(&iParam0 + 16, &uVar0);
	Function_59(&iParam0 + 16, &uVar1);
	iVar2 = Function_58(&iParam0 + 16);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(&iVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(&uParam1);
	return;
}

void Function_113(int iParam0) //Position: 0x5061 / 20577
{
	iParam0 = &iParam0;
	return;
}

bool Function_114(int iParam0) //Position: 0x506D / 20589
{
	return Function_22(&iParam0, "BlockBumpReactions", 0);
}

void Function_115(var uParam0, int iParam1) //Position: 0x508F / 20623
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	bLocal_15 = false;
	uVar0 = GET_TARGET_ACTOR();
	if (IS_ACTOR_PLAYER(&uParam0))
	{
		TASK_CLEAR(&uParam0);
		if (!Global_99146)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		if (!GRINGO_COMPONENT_CHECK_NAME("Cut_Free", &iParam1))
		{
			ENABLE_USE_CONTEXTS(1);
		}
		HUD_ENABLE(1);
	}
	if (IS_LAYOUTREF_VALID(&uLocal_4))
	{
		DESTROY_LAYOUT_OBJECTS(&uLocal_4);
		DESTROY_LAYOUT(&uLocal_4);
	}
	if (DECOR_CHECK_EXIST(&uParam0, "Hogtie_PutOnHorse_L"))
	{
		DECOR_REMOVE(&uParam0, "Hogtie_PutOnHorse_L");
	}
	if (DECOR_CHECK_EXIST(&uParam0, "Hogtie_PickupHorse_L"))
	{
		DECOR_REMOVE(&uParam0, "Hogtie_PickupHorse_L");
	}
	uVar1 = GRINGO_GET_PARENT_COMPONENT(&iParam1, 0);
	uVar2 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, &uVar1);
	GET_GRINGO_OBJECT_REF_ATTR(&uVar3, "Owner", &uVar2);
	if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Ground", &iParam1))
	{
		SET_GRINGO_INT_ATTR(true, "CurrentState", &uVar2);
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("nDrop_Body", &iParam1))
	{
		CLEAR_LINKED_ANIM_TARGET(&uParam0);
		SET_GRINGO_INT_ATTR(false, "CurrentState", &uVar2);
		if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
		{
			DECOR_SET_BOOL(&uVar0, "LastCarrierPlayer", true);
		}
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Horse", &iParam1))
	{
		SET_GRINGO_INT_ATTR(true, "CurrentState", &uVar2);
		if (IS_ACTOR_VALID(&uLocal_8))
		{
			SET_ACTOR_INVULNERABILITY(&uLocal_8, false);
		}
		uLocal_8 = "";
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("Cut_Free", &iParam1))
	{
		CLEAR_LINKED_ANIM_TARGET(&uParam0);
		FREE_FROM_HOGTIE(&uVar0);
		SET_ACTOR_CAN_PLAY_GESTURES(&uVar0, true);
		if (DECOR_CHECK_EXIST(&uVar0, "NoTalk_CutFree"))
		{
			AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
		}
		Function_116(399, 1, 0, 0);
		if (DECOR_CHECK_EXIST(&uVar0, "HogtiedGringoAttached"))
		{
			DECOR_REMOVE(&uVar0, "HogtiedGringoAttached");
		}
		if (DECOR_CHECK_EXIST(&uVar0, "LastCarrierPlayer"))
		{
			DECOR_REMOVE(&uVar0, "LastCarrierPlayer");
		}
		if (DECOR_CHECK_EXIST(&uVar0, "CanBeLasso"))
		{
			DECOR_REMOVE(&uVar0, "CanBeLasso");
		}
		if (bLocal_25 != 4294967295)
		{
			ACTOR_PUT_WEAPON_IN_HAND(&uParam0, bLocal_25, 1);
		}
		if (IS_ACTOR_PLAYER(&uParam0))
		{
			TASK_CLEAR(&uParam0);
			if (!DECOR_CHECK_EXIST(&uVar0, "DontReenableControl"))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
			}
			else
			{
				DECOR_REMOVE(&uVar0, "DontReenableControl");
			}
			HUD_ENABLE(1);
		}
		DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("PutOn_Horse", &iParam1))
	{
		CLEAR_LINKED_ANIM_TARGET(&uParam0);
		SET_GRINGO_INT_ATTR(2, "CurrentState", &uVar2);
		if (IS_ACTOR_VALID(&uLocal_8))
		{
			SET_ACTOR_INVULNERABILITY(&uLocal_8, false);
		}
		uLocal_8 = "";
	}
	CLEAR_HOGTIE_ATTACH_VICTIM(&uParam0);
	DECOR_REMOVE(&uParam0, "Pickup_ALT");
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
	{
		SET_ACTOR_INVULNERABILITY(&uParam0, false);
	}
	SET_ACTOR_INVULNERABILITY(&uVar0, false);
	iLocal_16 = 0;
	iLocal_14 = 0;
	return;
}

int Function_116(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x545B / 21595
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
	Function_130(iParam0, TO_FLOAT(bParam1), 1);
	Function_129(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_118(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &uParam3);
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
	Function_117(iParam0);
	return 1;
}

void Function_117(bool bParam0) //Position: 0x5683 / 22147
{
	switch (bParam0)
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

void Function_118(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x5721 / 22305
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_128(390))), 32);
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
					bVar19 = (Function_127(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_127(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_125(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_122(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_119(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_9(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_119(int iParam0) //Position: 0x5D5F / 23903
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_120(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x5D70 / 23920
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_121(char* cParam0) //Position: 0x5E67 / 24167
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_122(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x5E82 / 24194
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_124(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_123(Function_124(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_123(int iParam0, int iParam1) //Position: 0x5EE9 / 24297
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_124(int iParam0, bool bParam1) //Position: 0x5EFB / 24315
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_125(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x5F0D / 24333
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
	if (((Function_126(iParam0) != 19 || Function_126(iParam0) != 17) || Function_126(iParam0) != 10) || Function_126(iParam0) != 9)
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

int Function_126(int iParam0) //Position: 0x6041 / 24641
{
	return Global_55480[iParam016].f_96;
}

float Function_127(int iParam0) //Position: 0x6050 / 24656
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_128(int iParam0) //Position: 0x6089 / 24713
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_129(int iParam0) //Position: 0x60C6 / 24774
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

int Function_130(int iParam0, float fParam1, bool bParam2) //Position: 0x6260 / 25184
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
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
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

void Function_131(var uParam0, bool bParam1) //Position: 0x64A4 / 25764
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (&bParam1)
		{
			Function_152("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
		{
			if (&bParam1)
			{
				Function_152("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_146))
			{
				if (&bParam1)
				{
					Function_152("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(&bLocal_146);
			}
		}
	}
	if (&bParam1)
	{
		Function_152("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_132(int iParam0, int iParam1) //Position: 0x65B4 / 26036
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam1, &iParam0, 0, 0, 0);
	return;
}

void Function_133(struct<69> Param0) //Position: 0x65CC / 26060
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	(&Param0 + 24) = GRINGO_GET_REQUESTING_ACTOR();
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
		ATTACH_OBJECTS(StackVal, StackVal, &Param0 + 56, &Param0 + 24, Function_9(), Vector(0.0f, 1.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	Function_66(&Param0);
	Function_2("Going to eGringoPositioning", &Param0 + 24);
	Param0.f_68 = 2;
	Function_81(&Param0 + 64, 2);
	Function_52(&Param0 + 64, 8);
	Function_52(&Param0 + 64, 16);
	Function_52(&Param0 + 64, 64);
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
	if (!Function_136(&Param0 + 16))
	{
		if (HAS_INVENTORY_COMPONENT(&Param0 + 24))
		{
			if (ACTOR_HOLSTER_WEAPON(&Param0 + 24, 1))
			{
				Function_81(&Param0 + 64, 32);
			}
			else
			{
				Function_52(&Param0 + 64, 32);
			}
		}
		else
		{
			Function_52(&Param0 + 64, 32);
		}
		if (Function_107(Param0.f_64, 32))
		{
			Function_81(&Param0 + 64, 128);
		}
		else
		{
			Function_52(&Param0 + 64, 128);
		}
	}
	else
	{
		Function_52(&Param0 + 64, 32);
	}
	if (Function_135(&Param0 + 16))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, true), 1))
			{
				Function_81(&Param0 + 64, 128);
			}
		}
		else
		{
			Function_81(&Param0 + 64, 128);
		}
	}
	if (Function_114(&Param0 + 16))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24))
		{
			Function_81(&Param0 + 64, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 0);
			Function_2("Block Bump Reactions", &Param0 + 24);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
	Function_134(&Param0 + 24, &uVar0);
	Function_2("START: ", &Param0 + 24);
	return;
}

void Function_134(var uParam0, int iParam1) //Position: 0x68E8 / 26856
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	uVar0 = GET_TARGET_ACTOR();
	if (IS_ACTOR_LOCAL_PLAYER(&uParam0) && !Function_18())
	{
		SET_ACTOR_INVULNERABILITY(&uParam0, true);
	}
	SET_ACTOR_INVULNERABILITY(&uVar0, true);
	uVar1 = GRINGO_GET_PARENT_COMPONENT(&iParam1, 0);
	uVar2 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, &uVar1);
	GET_GRINGO_OBJECT_REF_ATTR(&uVar3, "Owner", &uVar2);
	if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Ground", &iParam1))
	{
		SET_GRINGO_INT_ATTR(true, "CurrentState", &uVar2);
		SET_LINKED_ANIM_TARGET(&uParam0, &uVar0);
		SET_GRINGO_OBJECT_REF_ATTR(&uParam0, "Owner", &uVar2);
		REFERENCE_ACTOR(&uVar0);
		if (IS_HOGTIE_PICKUP_OBSTRUCTED(&uVar0, &uParam0))
		{
			DECOR_SET_BOOL(&uParam0, "Pickup_ALT", true);
		}
		ENABLE_USE_CONTEXTS(0);
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("nDrop_Body", &iParam1))
	{
		SET_LINKED_ANIM_TARGET(&uParam0, &uVar0);
		SET_GRINGO_OBJECT_REF_ATTR(false, "Owner", &uVar2);
		bLocal_15 = true;
		DEREFERENCE_ACTOR(&uVar0);
		ENABLE_USE_CONTEXTS(0);
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Horse", &iParam1))
	{
		iLocal_6 = GET_ACTOR_FROM_OBJECT(&uVar3);
		SET_LINKED_ANIM_TARGET(&uParam0, &iLocal_6);
		uVar0 = GET_ATTACHED_HOGTIE_VICTIM(&iLocal_6);
		if (IS_ACTOR_VALID(&uVar0))
		{
			SET_HOGTIE_ATTACH_VICTIM(&uParam0, &uVar0);
		}
		SET_INTENDED_HOGTIE_MASTER(GET_ACTOR_FROM_OBJECT(&uVar3), &uParam0);
		SET_GRINGO_OBJECT_REF_ATTR(&uParam0, "Owner", &uVar2);
		iLocal_16 = 1;
		REFERENCE_ACTOR(&uVar0);
		ENABLE_USE_CONTEXTS(0);
		SET_ACTOR_INVULNERABILITY(&iLocal_6, true);
		uLocal_8 = &iLocal_6;
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("Cut_Free", &iParam1))
	{
		SET_LINKED_ANIM_TARGET(&uParam0, &uVar0);
		iVar4 = GET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(2, &uVar0);
		if (DECOR_CHECK_EXIST(&uVar0, "NoTalk_CutFree") || iVar4 != 0)
		{
			AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_UNTIES");
		}
		ACTOR_HOLSTER_WEAPON(&uParam0, 0);
		ACTOR_SET_NEXT_WEAPON(&uParam0, 22);
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("PutOn_Horse", &iParam1))
	{
		SET_LINKED_ANIM_TARGET(&uParam0, &uVar0);
		SET_INTENDED_HOGTIE_MASTER(&uParam0, &iLocal_6);
		if (GET_TASK_STATUS(&iLocal_6, 4294967295) == 2)
		{
			TASK_STAND_STILL(&iLocal_6, 25.0f, 1, 0);
		}
		SET_GRINGO_OBJECT_REF_ATTR(&iLocal_6, "Owner", &uVar2);
		iLocal_16 = 1;
		DEREFERENCE_ACTOR(&uVar0);
		ENABLE_USE_CONTEXTS(0);
		SET_ACTOR_INVULNERABILITY(&iLocal_6, true);
		uLocal_8 = &iLocal_6;
	}
	bLocal_11 = false;
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_2))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_2);
	}
	if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
	{
		iLocal_12 = 1;
	}
	else
	{
		iLocal_12 = 0;
	}
	iLocal_14 = 0;
	if (DECOR_CHECK_EXIST(&uVar0, "LastCarrierPlayer"))
	{
		DECOR_REMOVE(&uVar0, "LastCarrierPlayer");
	}
	return;
}

bool Function_135(int iParam0) //Position: 0x6BBB / 27579
{
	return Function_22(&iParam0, "DrawWeapon", 0);
}

bool Function_136(int iParam0) //Position: 0x6BD5 / 27605
{
	return Function_22(&iParam0, "AllowWeapon", 0);
}

void Function_137(int iParam0, var uParam1) //Position: 0x6BF0 / 27632
{
	bool bVar0;
	int iVar1;
	
	iParam0 = &iParam0;
	iVar1 = Function_138(&uParam1, &bVar0);
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

bool Function_138(var uParam0, int iParam1) //Position: 0x6C2E / 27694
{
	return Function_24(&uParam0, "UseName", &iParam1);
}

bool Function_139(struct<65> Param0) //Position: 0x6C47 / 27719
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
		if (ACTOR_HAS_ANIM_SET(&uVar1, "stand_hostage") && !Function_22(&Param0 + 16, "CutFreeGringo", 0))
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
				if (!Function_147(6))
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
		if (!Function_143(&uVar1, &Param0 + 16))
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
		if (!Function_107(Param0.f_64, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_81(&Param0 + 64, 1);
			}
			else
			{
				Function_52(&Param0 + 64, 1);
			}
			if (Function_107(Param0.f_64, 1))
			{
				Function_132("MIDACTION REQUEST", &uVar1);
			}
			else
			{
				Function_84(&Param0 + 16);
				Var8 = Function_84(&Param0 + 16);
				Var10 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var8, StackVal);
				fVar12 = Function_142(&Param0 + 16);
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
				if (!Function_141(&uVar1, &Param0 + 16))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar30 = Function_140(&Param0 + 16);
				if (!bVar30 != 0.0f)
				{
					if (bVar30 < 0.0f)
					{
						fVar31 = (UNK_0x9C40E671(&Var10) - Function_12(&Param0 + 16));
					}
					else
					{
						fVar31 = ((180.0f + UNK_0x9C40E671(&Var10)) - Function_12(&Param0 + 16));
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

int Function_140(int iParam0) //Position: 0x6F3F / 28479
{
	return Function_26(&iParam0, "ActivationCone", 0.0f);
}

bool Function_141(var uParam0, int iParam1) //Position: 0x6F5D / 28509
{
	struct<5> Var0;
	float fVar5;
	
	fVar2 = GRINGO_GET_USE_COMPONENT_HEADING(&iParam1);
	bVar3 = GET_HEADING(&uParam0);
	fVar4 = Function_26(&iParam1, "HeadingTolerance", -1.0f);
	fVar5 = (fVar2 - bVar3);
	if (fVar4 != -1.0f)
	{
		return 1;
	}
	Function_84(&iParam1);
	Var0 = Function_84(&iParam1);
	GET_POSITION(&uParam0, &Var0);
	Var0.f_4 = (StackVal + 1,5f);
	Function_84(&iParam1);
	Var0 = Function_84(&iParam1);
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

int Function_142(int iParam0) //Position: 0x6FFD / 28669
{
	return Function_26(&iParam0, "ActivationRadius", 2.0f);
}

bool Function_143(bool bParam0, int iParam1) //Position: 0x701D / 28701
{
	int iVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	int iVar9;
	var uVar10;
	struct<2> Var12;
	var uVar14;
	var uVar16;
	struct<2> Var18;
	var uVar20;
	
	iVar0 = GET_TARGET_ACTOR();
	if (&bParam0 == &iVar0)
	{
		return 0;
	}
	uVar1 = GRINGO_GET_MY_OBJECT_REF();
	if (!IS_ACTOR_HOGTIED(&iVar0))
	{
		DESTROY_OBJECT(&uVar1);
		return 0;
	}
	bVar2 = Function_146(&iParam1);
	if (bVar2 == 4294967295)
	{
		bVar2 = false;
	}
	if (DECOR_CHECK_EXIST(&bParam0, "Hogtie_PutOnHorse_L"))
	{
		DECOR_REMOVE(&bParam0, "Hogtie_PutOnHorse_L");
	}
	if (IS_ACTOR_ON_TRAIN(&bParam0, 0) || IS_ACTOR_ON_TRAIN(&iVar0, 0))
	{
		return 0;
	}
	if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(&bParam0))
	{
		return 0;
	}
	uVar3 = GRINGO_GET_PARENT_COMPONENT(&iParam1, 0);
	uVar4 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, &uVar3);
	GET_GRINGO_OBJECT_REF_ATTR(&iVar5, "Owner", &uVar4);
	if (IS_ACTOR_VALID(GET_LASSO_TARGET(&bParam0)))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(GET_HOGTIED_MASTER(&iVar0)) && (bVar2 != 2 || bVar2 != 1))
	{
		if (IS_OBJECT_VALID(&iVar5))
		{
			GET_ACTOR_FROM_OBJECT(&iVar5);
		}
		SET_GRINGO_INT_ATTR(false, "CurrentState", &uVar4);
		DEREFERENCE_ACTOR(&iVar0);
	}
	if (bVar2 == 0)
	{
		uVar6 = GET_HOGTIED_MASTER(&iVar0);
		if (IS_ACTOR_VALID(&uVar6))
		{
			if (IS_ACTOR_HORSE(&uVar6))
			{
				SET_GRINGO_INT_ATTR(2, "CurrentState", &uVar4);
				bVar2 = 2;
			}
			else
			{
				SET_GRINGO_INT_ATTR(true, "CurrentState", &uVar4);
				bVar2 = true;
			}
		}
	}
	switch (bVar2)
	{
		case 0x00000000:
			if (GRINGO_COMPONENT_CHECK_NAME("Cut_Free", &iParam1))
			{
				if (IS_ACTOR_HUMAN(&bParam0))
				{
					return 1;
				}
			}
			if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Ground", &iParam1))
			{
				if (IS_ACTOR_PLAYER(&bParam0) && DECOR_CHECK_EXIST(&uVar1, "DisablePlayerCarry"))
				{
					return 0;
				}
				if (DECOR_CHECK_EXIST(&iVar0, "ActionArea_DisableHogtie"))
				{
					return 0;
				}
				if (FIRE_IS_ACTOR_ON_FIRE(&iVar0))
				{
					return 0;
				}
				return 1;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTION_NODE_PLAYING_PARTIAL(&bParam0, "PlaceOnHorse"))
			{
				return 0;
			}
			if (IS_OBJECT_VALID(&iVar5))
			{
				if (GET_OBJECT_FROM_ACTOR(&bParam0) != &iVar5)
				{
					return 0;
				}
			}
			if (GRINGO_COMPONENT_CHECK_NAME("Cut_Free", &iParam1))
			{
				return 0;
			}
			iLocal_6 = "";
			if (GRINGO_COMPONENT_CHECK_NAME("PutOn_Horse", &iParam1))
			{
				if (IS_ACTOR_LOCAL_PLAYER(&bParam0))
				{
					if (DECOR_CHECK_EXIST(&bParam0, "Player_DisablePutOnHorse"))
					{
						return 0;
					}
				}
				GET_OBJECT_POSITION(&iVar5, &Var7);
				if (DECOR_CHECK_EXIST(&iVar0, "SpecificHorse"))
				{
					iLocal_6 = GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(&iVar0, "SpecificHorse"));
					if (!Function_145(StackVal, &iLocal_6, Var7) >= 1,6f && CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iLocal_6, 1065353216, 1117126656, 1, 1, 0))
					{
						iLocal_6 = "";
					}
				}
				else
				{
					iLocal_6 = LOCATE_ACTOR_OF_TYPE(Var7, 1.0f, 23, 4294967295);
				}
				if (IS_ACTOR_VALID(&iLocal_6))
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&iLocal_6)))
					{
						return 0;
					}
					if (IS_ACTOR_MULE(&iLocal_6))
					{
						return 0;
					}
					if (IS_ACTOR_DRAFTED(&iLocal_6))
					{
						return 0;
					}
					if (!Global_6623)
					{
						if (IS_ACTOR_MOUNTED(&iLocal_6))
						{
							iVar9 = GET_RIDER(&iLocal_6);
							if (GET_ACTOR_FACTION(&iVar9) == 20 || GET_ACTOR_FACTION(&iVar9) == 23)
							{
								return 0;
							}
						}
					}
					if (DECOR_CHECK_EXIST(&bParam0, "CantPlaceOnHorse"))
					{
						if (&iLocal_6 == GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(&bParam0, "CantPlaceOnHorse")))
						{
							return 0;
						}
					}
					if (ANIMAL_ACTOR_GET_DOMESTICATION(&iLocal_6) == 1)
					{
						return 0;
					}
					if (DECOR_CHECK_EXIST(GRINGO_GET_TARGET(GET_GRINGO_FROM_OBJECT(&uVar1)), "Hogtied_HorseRestriction"))
					{
						if (!GET_OBJECT_FROM_ACTOR(&iLocal_6) != DECOR_GET_OBJECT(GRINGO_GET_TARGET(GET_GRINGO_FROM_OBJECT(&uVar1)), "Hogtied_HorseRestriction"))
						{
							return 0;
						}
					}
					GET_ACTOR_AXIS(&iLocal_6, &uVar10, 0);
					Function_144(&iLocal_6);
					Var12 = Function_144(&iLocal_6);
					Function_144(&bParam0);
					uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Var12, Function_144(&bParam0), StackVal);
					if (VDOT(&uVar10, &uVar14) <= 0.0f)
					{
						if (DECOR_CHECK_EXIST(&bParam0, "Hogtie_PutOnHorse_L"))
						{
							DECOR_REMOVE(&bParam0, "Hogtie_PutOnHorse_L");
						}
					}
					else
					{
						DECOR_SET_BOOL(&bParam0, "Hogtie_PutOnHorse_L", true);
					}
					if (DECOR_CHECK_EXIST(&bParam0, "HogtiePlace_NoHorse"))
					{
						DECOR_REMOVE(&bParam0, "HogtiePlace_NoHorse");
					}
					bLocal_13 = true;
					return 1;
				}
				bLocal_13 = false;
			}
			if (GRINGO_COMPONENT_CHECK_NAME("nDrop_Body", &iParam1))
			{
				if (IS_HOGTIE_PUTDOWN_OBSTRUCTED(&bParam0))
				{
					return 0;
				}
				return !bLocal_13;
			}
			break;
		
		case 0x00000002:
			if (GRINGO_COMPONENT_CHECK_NAME("Cut_Free", &iParam1))
			{
				return 0;
			}
			if (IS_ACTOR_LOCAL_PLAYER(&bParam0) && DECOR_CHECK_EXIST(&uVar1, "DisablePlayerCarry"))
			{
				return 0;
			}
			if (IS_ACTOR_LOCAL_PLAYER(&bParam0) && DECOR_CHECK_EXIST(&iVar0, "DisablePlayerCarry"))
			{
				return 0;
			}
			if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Horse", &iParam1))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(&iVar0))
				{
					return 0;
				}
				GET_ACTOR_AXIS(GET_ACTOR_FROM_OBJECT(&iVar5), &uVar16, 0);
				Function_144(GET_ACTOR_FROM_OBJECT(&iVar5));
				Var18 = Function_144(GET_ACTOR_FROM_OBJECT(&iVar5));
				Function_144(&bParam0);
				uVar20 = Vector(StackVal, StackVal, StackVal) - Vector(Var18, Function_144(&bParam0), StackVal);
				if (VDOT(&uVar16, &uVar20) <= 0.0f)
				{
					DECOR_SET_BOOL(&bParam0, "Hogtie_PickupHorse_L", false);
				}
				else
				{
					DECOR_SET_BOOL(&bParam0, "Hogtie_PickupHorse_L", true);
				}
				if (IS_HOGTIE_HORSE_PICKUP_OBSTRUCTED(GET_ACTOR_FROM_OBJECT(&iVar5), &bParam0))
				{
					return 0;
				}
				return 1;
			}
			break;
	}
	return 0;
}

struct<8> Function_144(bool bParam0) //Position: 0x766C / 30316
{
	struct<2> Var0;
	
	GET_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

float Function_145(var uParam0, struct<2> Param1) //Position: 0x767E / 30334
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_17(&uParam0);
		Var0 = Function_17(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

var Function_146(int iParam0) //Position: 0x76F5 / 30453
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	uVar1 = GRINGO_GET_PARENT_COMPONENT(&iParam0, 0);
	uVar2 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, &uVar1);
	if (IS_GRINGO_COMPONENT_VALID(&uVar2))
	{
		iVar0 = Function_19(&uVar2, "CurrentState", 4294967295);
		if (iVar0 == 4294967295)
		{
			LOG_ERROR("GetCurrentState: CurrentState is invalid (-1)");
		}
	}
	else
	{
		LOG_ERROR("GetCurrentState: GlobalSettings is invalid");
	}
	iVar3 = iVar0;
	if (iVar0 != iLocal_26)
	{
		iLocal_26 = iVar0;
	}
	return iVar3;
}

bool Function_147(int iParam0) //Position: 0x77BE / 30654
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_148(int iParam0) //Position: 0x77DA / 30682
{
	iParam0 = &iParam0;
	return;
}

void Function_149(var uParam0, int iParam1) //Position: 0x77E6 / 30694
{
	bool bVar0;
	var uVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, &uParam0))
	{
		Function_150(&(vLocal_27[iLocal_1379]), &uParam0);
		iLocal_137++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(&uParam0) >= 0)
	{
		bVar0 = false;
		bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0);
		while (bVar0 <= 0 && iParam1 > 6)
		{
			uVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar0, &uParam0);
			Function_149(&uVar1, &iParam1);
			bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0 + 1);
		}
	}
	return;
}

void Function_150(int iParam0, int iParam1) //Position: 0x7852 / 30802
{
	(&iParam0 + 16) = &iParam1;
	Function_52(&iParam0 + 64, 1);
	return;
}

void Function_151(int iParam0) //Position: 0x786A / 30826
{
	iParam0 = &iParam0;
	return;
}

void Function_152(int iParam0) //Position: 0x7876 / 30838
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam0, 0, 0, 0);
	return;
}

