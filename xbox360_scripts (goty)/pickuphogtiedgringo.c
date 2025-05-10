//Decompiled with MagicRDR v1.0
//Function Count : 152
//Statics Count : 103
//Natives Count : 312
//Parameters Count : 1

#region Local Var
	bool bLocal_0 = false;
	bool bLocal_1 = false;
	bool bLocal_2 = false;
	bool bLocal_3 = false;
	bool bLocal_4 = false;
	int iLocal_5 = 0;
	bool bLocal_6 = false;
	int iLocal_7 = 0;
	bool bLocal_8 = false;
	int iLocal_9 = 0;
	bool bLocal_10 = false;
	int iLocal_11 = 0;
	struct<25> Local_12 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	char* cLocal_98 = NULL;
	int iLocal_99 = 0;
	bool bLocal_100 = false;
	bool bLocal_101 = false;
	var uScriptParam_0 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	iLocal_5 = 0;
	bLocal_6 = false;
	iLocal_7 = 0;
	bLocal_8 = false;
	iLocal_9 = 0;
	bLocal_10 = false;
	iLocal_11 = 0;
	bLocal_19 = 4294967295;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_151("STARTS");
	Function_150(uScriptParam_0);
	iLocal_94 = 0;
	Function_148(uScriptParam_0, &iLocal_94);
	while (IS_GRINGO_ACTIVE())
	{
		Function_147(uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		bVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(bVar1))
		{
			GET_OBJECT_POSITION(bVar1, &uLocal_95);
		}
		iVar2 = 0;
		bLocal_100 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_94 - 1))
			{
				if (Local_21[iVar012].f_12 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_94;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_100 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_138(&(Local_21[iVar312]), &bVar4))
						{
							Function_136(GRINGO_GET_REQUESTING_ACTOR(), Local_21[iVar312].f_12);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_138(&(Local_21[iVar312]), &bVar4))
						{
							Function_136(GRINGO_GET_REQUESTING_ACTOR(), Local_21[iVar312].f_12);
							if (bVar4)
							{
								Function_132(&(Local_21[iVar312]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (Local_21[iVar312].f_16 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_131("eGRINGO_EndUse: Stop use by request", Local_21[iVar312].f_16);
							Function_130(Local_21[iVar312].f_16, 1);
							if (IS_ACTOR_VALID(Local_21[iVar312].f_16))
							{
								if (IS_ACTOR_LOCAL_PLAYER(Local_21[iVar312].f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(Local_21[iVar312].f_12))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(Local_21[iVar312].f_16, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_109(&(Local_21[iVar312]), 0);
							}
							else if (Local_21[iVar312].f_44 < 8)
							{
								Function_108(&(Local_21[iVar312]));
								Local_21[iVar312].f_44 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_151("Stop use request actor mismatch!!");
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
			while (iVar0 < (iLocal_94 - 1))
			{
				if (Function_107(Local_21[iVar012].f_40, 2))
				{
					if (!Function_31(&(Local_21[iVar012])))
					{
						Function_151("Quitting due to update end");
						Function_109(&(Local_21[iVar012]), 1);
					}
				}
				if (Function_30(&(Local_21[iVar012]), 0))
				{
					Function_20(&(Local_21[iVar012]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_94 - 1))
		{
			if (Function_107(Local_21[iVar012].f_40, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(uScriptParam_0))
		{
			if (bLocal_100)
			{
				GRINGO_WAIT(false);
			}
			else if (GET_DEBUG_DRAW_STATE())
			{
				GRINGO_WAIT(false);
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_101))
	{
		Function_151("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_101);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_94 - 1))
	{
		if (Function_107(Local_21[iVar012].f_40, 2))
		{
			Function_2("Gringo termination calls StopUse", Local_21[iVar012].f_16);
			Function_109(&(Local_21[iVar012]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(Local_21[iVar012].f_12))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", Local_21[iVar012].f_12);
		}
		Function_30(&(Local_21[iVar012]), 1);
		iVar0++;
	}
	Function_1(uScriptParam_0);
	Function_151("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x437 / 1079
{
	iParam0 = iParam0;
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_1);
	}
	return;
}

void Function_2(int iParam0, bool bParam1) //Position: 0x44E / 1102
{
	char* cVar0;
	
	cVar0 = "InvalidActor";
	if (IS_OBJECT_VALID(bParam1))
	{
		cVar0 = GET_OBJECT_NAME(bParam1);
	}
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), bParam1, GET_TARGET_OBJECT(), cVar0, ": ", iParam0, 0);
	return;
}

int Function_3() //Position: 0x489 / 1161
{
	return 0;
}

int Function_4(bool bParam0) //Position: 0x490 / 1168
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	
	bParam0 = bParam0;
	bVar0 = GRINGO_GET_MY_OBJECT_REF();
	bVar1 = GET_TARGET_ACTOR();
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	bVar2 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, bParam0);
	GET_GRINGO_OBJECT_REF_ATTR(&bVar3, "Owner", bVar2);
	if (IS_GRINGO_COMPONENT_VALID(bVar2))
	{
		uVar4 = Function_19(bVar2, "CurrentState", 4294967295);
	}
	iVar5 = uVar4;
	if (iVar5 == 0)
	{
		bLocal_6 = true;
		if (FIRE_IS_ACTOR_ON_FIRE(bVar1))
		{
			bLocal_6 = false;
		}
		if (IS_HOGTIE_CUTFREE_OBSTRUCTED(bVar1, Global_34573) && !DECOR_CHECK_EXIST(bVar1, "CutFree_IgnoreObstruction"))
		{
			bLocal_6 = false;
		}
		if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(Global_34573)))
		{
			bLocal_6 = false;
		}
		if (GET_TASK_STATUS(Global_34573, 19) != 2)
		{
			bLocal_6 = false;
		}
		if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
		{
			bLocal_6 = false;
		}
		if (Function_18())
		{
			bLocal_6 = false;
		}
		if (((!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1) && !DECOR_CHECK_EXIST(bVar1, "bDisableCutFree")) && bLocal_6) && !iLocal_5)
		{
			fVar6 = Function_15(Global_34573, bVar0);
			if (fVar6 >= 1.5f)
			{
				bLocal_1 = ADD_SCRIPT_USE_CONTEXT("Cut_Free", 36, 7, false, 0, 0, 0, 4294967295, 0);
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_1);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1))
		{
			fVar7 = Function_15(Global_34573, bVar0);
			if ((fVar7 < 1.5f || IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(Global_34573))) || !bLocal_6)
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_1);
				}
				return 0;
			}
			if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_1))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_1);
				bLocal_19 = GET_WEAPON_IN_HAND(Global_34573);
				Function_13(Global_34573, 0);
				bVar8 = GRINGO_GET_USE_COMPONENT_EXT(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), "Cut_Free");
				GET_OBJECT_RELATIVE_POSITION(GRINGO_GET_MY_OBJECT_REF(), -0.4823f, 0.0f, 0.597f, &vVar9);
				bVar12 = Function_12(bVar8);
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, vVar9, bVar12, 0, 1, 1);
				TASK_USE_GRINGO(Global_34573, GET_GRINGO_FROM_OBJECT(bVar0), "Cut_Free", 1, 1);
				HUD_ENABLE(false);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (DECOR_CHECK_EXIST(bVar1, "NoBleedOut"))
					{
						DECOR_REMOVE(bVar1, "NoBleedOut");
					}
				}
				Function_11(bVar1);
				Local_12 = { StackVal, StackVal, Function_11(bVar1) };
				Function_10(bVar1);
				*(&Local_12 + 12) = { StackVal, StackVal, Function_10(bVar1) };
				Local_12.f_24 = 0;
				bLocal_2 = CREATE_LAYOUT("Hogtied_Gringo_Layout");
				bVar13 = CREATE_VOLUME_IN_LAYOUT(bLocal_2, Function_9(), 3, *(&Local_12 + 12), 0.0f, 0.0f, 0.0f, 3.0f, 7.0f, 3.0f);
				ADD_CORPSE_REMOVAL_VOLUME_OBJ(bVar13);
				DESTROY_VOLUME(bVar13);
				Function_5(bLocal_2, 0, &Local_12, Global_34573, bVar1, 1, 0, 1);
				iLocal_9 = 1;
				iLocal_5 = 1;
			}
			return 0;
		}
	}
	if (!bLocal_10)
	{
		GET_GRINGO_OBJECT_REF_ATTR(&bVar3, "Owner", bVar2);
		if (!IS_OBJECT_VALID(bVar3) && (iVar5 != 2 || iVar5 != 1))
		{
			SET_GRINGO_INT_ATTR(0, "CurrentState", bVar2);
			DEREFERENCE_ACTOR(bVar1);
		}
		else if (IS_OBJECT_VALID(bVar3))
		{
			if (iVar5 != 2 || iVar5 != 1)
			{
				if ((Function_15(bVar1, bVar3) < 3.0f || GET_OBJECT_FROM_ACTOR(GET_LASSO_TARGET(Global_34573)) != bVar3) || (bVar3 != GET_OBJECT_FROM_ACTOR(Global_34573) && IS_ACTION_NODE_PLAYING_PARTIAL(GET_ACTOR_FROM_OBJECT(bVar3), "defaultgait")))
				{
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(GET_ACTOR_FROM_OBJECT(bVar3), "whistle"))
					{
						SET_GRINGO_INT_ATTR(0, "CurrentState", bVar2);
						DEREFERENCE_ACTOR(bVar1);
					}
				}
			}
		}
	}
	return 0;
}

var Function_5(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x7F9 / 2041
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Hogtie_CutFree", 2, 1);
	}
	Function_6(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_6(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x879 / 2169
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_8(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_7(&bVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1.25f, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 2.8f, 1, 1);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 0.5f, 2);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
}

void Function_7(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8F4 / 2292
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 46.19386f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0.659502f, 0.635448f, 1.235128f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.641761f, -0.140743f, 0.753879f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 52);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.5f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

void Function_8(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x9DC / 2524
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 46.19386f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0.653081f, 0.718918f, -0.295721f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.998293f, -0.037694f, 0.044617f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 52);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.5f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

var Function_9() //Position: 0xAC4 / 2756
{
	int iVar0;
	
	return iVar0;
}

vector3 Function_10(bool bParam0) //Position: 0xACC / 2764
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

vector3 Function_11(bool bParam0) //Position: 0xAF3 / 2803
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

float Function_12(bool bParam0) //Position: 0xB1A / 2842
{
	return GRINGO_GET_USE_COMPONENT_HEADING(bParam0);
}

void Function_13(bool bParam0, bool bParam1) //Position: 0xB25 / 2853
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_RIDING(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			RESET_ACTOR_GAITS(bVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(bParam0))
	{
		bVar1 = GET_VEHICLE(bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			STOP_VEHICLE(bVar1);
		}
	}
	else if (!bParam1 || Function_14(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_14(bool bParam0, bool bParam1) //Position: 0xB82 / 2946
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

float Function_15(bool bParam0, bool bParam1) //Position: 0xBA1 / 2977
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_17(bParam0);
			vVar0 = { StackVal, StackVal, Function_17(bParam0) };
			Function_16(bParam1);
			vVar3 = { StackVal, StackVal, Function_16(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_16(bool bParam0) //Position: 0xC41 / 3137
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

vector3 Function_17(bool bParam0) //Position: 0xCAD / 3245
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

bool Function_18() //Position: 0xD17 / 3351
{
	if (Function_107(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_19(bool bParam0, bool bParam1, int iParam2) //Position: 0xD32 / 3378
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_INT_ATTR(&iVar0, bParam1, bParam0);
	return iVar0;
}

void Function_20(int iParam0) //Position: 0xD48 / 3400
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_107(iParam0->f_40, 2))
	{
		Function_130(iParam0->f_16, 0);
	}
	else if (UNK_0x0A0E660E() || Function_29(iParam0))
	{
		if (iParam0->f_44 == 6)
		{
			if (Function_27(iParam0) <= Function_25(iParam0->f_12))
			{
				if (IS_ACTOR_VALID(iParam0->f_16))
				{
					if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
					{
						if (UNK_0x0A0E660E() || !Global_3418)
						{
							bVar1 = Function_23(iParam0->f_12, &bVar0);
							if (!bVar0 && UNK_0x0A0E660E())
							{
								bVar1 = "nDisengage";
								bVar0 = true;
							}
							if (bVar0)
							{
								bLocal_100 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_101))
								{
									Function_151("ManagePlayerQuit: Create quit context");
									if (Function_22(iParam0->f_12, "UseQuitBOverride", 0))
									{
										bLocal_101 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 5, false, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_101 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 4, false, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_101))
								{
									Function_2("USE CONTEXT QUIT", iParam0->f_16);
									Function_108(iParam0);
									iParam0->f_44 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_101))
									{
										Function_151("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(bLocal_101);
										iVar2 = 0;
										if (GET_GRINGO_BOOL_ATTR("DeactivateChildren", iParam0->f_12, &iVar2))
										{
											GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 0);
										}
									}
								}
								if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
								{
									if (Function_21(iParam0->f_16))
									{
										Function_108(iParam0);
										Function_2("STICK QUIT", iParam0->f_16);
										iParam0->f_44 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_101))
										{
											Function_151("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(bLocal_101);
										}
									}
								}
							}
						}
						else if (Global_3418)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_101))
							{
								Function_151("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(bLocal_101);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_101))
		{
			Function_151("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_101);
		}
	}
	return;
}

bool Function_21(bool bParam0) //Position: 0x1032 / 4146
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	float fVar6;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = GET_CURRENT_GAME_TIME();
	vVar2 = { GET_STICK_X(iVar0, 0, 1), GET_STICK_Y(iVar0, 0, 1), 0.0f };
	bVar5 = VMAG(vVar2);
	if (bVar5 >= 0.2f)
	{
		DECOR_SET_BOOL(bParam0, "StickReset", true);
	}
	else if (bVar5 < 0.75f && DECOR_CHECK_EXIST(bParam0, "StickReset"))
	{
		if (!DECOR_GET_FLOAT_VERBOSE(bParam0, "DisconnectTime", &fVar6))
		{
			DECOR_SET_FLOAT(bParam0, "DisconnectTime", bVar1);
		}
		else if ((bVar1 - fVar6) < 0.15f)
		{
			DECOR_REMOVE(bParam0, "StickReset");
			DECOR_REMOVE(bParam0, "DisconnectTime");
			return 1;
		}
	}
	DECOR_REMOVE(bParam0, "DisconnectTime");
	return 0;
}

bool Function_22(bool bParam0, bool bParam1, int iParam2) //Position: 0x112C / 4396
{
	int iVar0;
	bool bVar1;
	
	bVar1 = GET_GRINGO_BOOL_ATTR(bParam1, bParam0, &iVar0);
	if (iVar0 >= 0)
	{
		return bVar1;
	}
	return iParam2;
}

bool Function_23(bool bParam0, int iParam1) //Position: 0x1148 / 4424
{
	return Function_24(bParam0, "UseQuit", iParam1);
}

bool Function_24(bool bParam0, bool bParam1, int iParam2) //Position: 0x115F / 4447
{
	int iVar0;
	bool bVar1;
	
	bVar1 = GET_GRINGO_STRING_ATTR(bParam1, bParam0, &iVar0);
	*iParam2 = iVar0 < 0;
	if (*iParam2)
	{
		if (STRING_LENGTH(bVar1) != 0 || STRINGS_ARE_EQUAL(bVar1, "NoString"))
		{
			*iParam2 = 0;
			return bLocal_0;
		}
		return bVar1;
	}
	return bLocal_0;
}

float Function_25(bool bParam0) //Position: 0x11A4 / 4516
{
	return Function_26(bParam0, "MinimumUseTime", 0.0f);
}

bool Function_26(bool bParam0, bool bParam1, int iParam2) //Position: 0x11C1 / 4545
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, bParam1, bParam0);
	return iVar0;
}

float Function_27(int iParam0) //Position: 0x11D7 / 4567
{
	if (Function_29(iParam0))
	{
		if (Function_28(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0x129F / 4767
{
	return Function_107(*iParam0, 2);
}

bool Function_29(int iParam0) //Position: 0x12AC / 4780
{
	return Function_107(*iParam0, 1);
}

bool Function_30(var uParam0, int iParam1) //Position: 0x12B9 / 4793
{
	bool bVar0;
	
	bVar0 = DECOR_CHECK_EXIST(uParam0->f_16, "GringoNoQuit");
	if (!bVar0)
	{
		return 1;
	}
	if (iParam1 && bVar0)
	{
		DECOR_REMOVE(uParam0->f_16, "GringoNoQuit");
		return 0;
	}
	return 0;
}

bool Function_31(int iParam0) //Position: 0x1301 / 4865
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	bool bVar12;
	bool bVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	vector3 vVar17;
	float fVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	float fVar24;
	vector3 vVar25;
	bool bVar28;
	vector3 vVar29;
	int iVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	int iVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	float fVar42;
	int iVar43;
	bool bVar44;
	float fVar45;
	int iVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	var uVar52;
	bool bVar53;
	int iVar54;
	int iVar55;
	bool bVar56;
	vector3 vVar57;
	bool bVar60;
	
	bVar12 = Function_106(iParam0->f_12);
	if (!(IS_ACTOR_VALID(iParam0->f_16) && IS_ACTOR_ALIVE(iParam0->f_16)))
	{
		Function_131("UpdateUse with invalid actor", iParam0->f_16);
		return 0;
	}
	if (!Function_22(iParam0->f_12, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(iParam0->f_16)) >= 0.5f)
		{
			Function_131("Damage quit", iParam0->f_16);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(iParam0->f_16))
	{
		Function_131("Incapacitation quit", iParam0->f_16);
		return 0;
	}
	GET_POSITION(iParam0->f_16, &vVar17);
	bVar21 = true;
	if (iParam0->f_44 < 4)
	{
		iVar23 = STRING_TO_HASH("SharedPropName");
	}
	switch (iParam0->f_44)
	{
		case 0x00000002:
			bLocal_100 = true;
			if (IS_ACTOR_PLAYER(iParam0->f_16))
			{
				if (Function_105(iParam0->f_12, &fVar24))
				{
					GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &vVar25);
					vVar25.f_4 = (vVar25.y + (fVar24 + 0.1f));
					if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
					{
						bVar28 = IS_AREA_OBSTRUCTED2(vVar25, fVar24, GET_PHYSINST_FROM_ACTOR(iParam0->f_16), GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT()), 0);
					}
					else
					{
						bVar28 = IS_AREA_OBSTRUCTED(vVar25, fVar24, iParam0->f_16, 0);
					}
					if (IS_ACTOR_ON_TRAIN(iParam0->f_16, 0) || bVar28)
					{
						DECOR_SET_BOOL(GRINGO_GET_MY_OBJECT_REF(), "Obstructed", true);
						iParam0->f_44 = 7;
						Function_2("Skip to eRewarding", iParam0->f_16);
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
			{
				if (Function_103(iParam0->f_16, iParam0->f_12))
				{
					Function_2("Navigation complete (going to eStarting)", iParam0->f_16);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
					iParam0->f_44 = 1;
					Function_102(iParam0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				iParam0->f_44 = 1;
				Function_102(iParam0);
			}
			if (!Function_101(iParam0->f_12) && iParam0->f_44 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", iParam0->f_16);
				SET_ACTOR_POSTURE(iParam0->f_16, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_100 = true;
			Function_100(iParam0->f_12);
			if (((!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16)) && !Function_107(iParam0->f_40, 1)) && !DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
			{
				Function_87(iParam0->f_12);
			}
			fVar20 = Function_86(iParam0->f_12);
			if (Function_27(iParam0) < fVar20)
			{
				Function_2("INTRO TIMED OUT - ABORTING", iParam0->f_16);
				return 0;
			}
			if (Function_107(iParam0->f_40, 1))
			{
				Function_82(iParam0->f_12, &vVar3, &uVar6);
				if (!Function_107(iParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
					{
						Function_2("SUSPEND MOVER", iParam0->f_16);
						SUSPEND_MOVER(iParam0->f_16);
						Function_81(iParam0 + 40, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
					{
						Function_2("nFIX MOVER", iParam0->f_16);
						SET_MOVER_FROZEN(iParam0->f_16, 1);
						Function_81(iParam0 + 40, 16);
					}
				}
				Function_2("MID ACTION TELEPORT", iParam0->f_16);
				vVar29.y = uVar6;
				if (DECOR_CHECK_EXIST(iParam0->f_16, "NoTeleport"))
				{
					SET_OBJECT_POSITION(iParam0->f_16, vVar3);
					SET_OBJECT_ORIENTATION(iParam0->f_16, vVar29);
					DECOR_REMOVE(iParam0->f_16, "NoTeleport");
				}
				else
				{
					TELEPORT_ACTOR_WITH_HEADING(iParam0->f_16, vVar3, uVar6, 1, 1, Function_80());
				}
				if (!Function_107(iParam0->f_40, 1024))
				{
					Function_81(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_22(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			else if (Function_103(iParam0->f_16, iParam0->f_12))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				Function_2("FINISHED NAVIGATION", iParam0->f_16);
				if (!Function_107(iParam0->f_40, 1024))
				{
					Function_81(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_22(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			if (iParam0->f_44 != 3 && !Function_107(iParam0->f_40, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
				{
					Function_2("SUSPEND MOVER", iParam0->f_16);
					SUSPEND_MOVER(iParam0->f_16);
					Function_81(iParam0 + 40, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
				{
					Function_2("nFIX MOVER", iParam0->f_16);
					SET_MOVER_FROZEN(iParam0->f_16, 1);
					Function_81(iParam0 + 40, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_107(iParam0->f_40, 32))
			{
				bLocal_100 = true;
				if (!ACTOR_IS_HOLSTERED(iParam0->f_16))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", iParam0->f_16);
			}
			iParam0->f_44 = 4;
		
		case 0x00000004:
			Function_67(iParam0->f_12);
			bLocal_100 = true;
			Function_66(iParam0);
			Function_63(iParam0, Function_65(iParam0->f_12));
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 0);
			}
			bVar33 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", iParam0->f_12, &iVar32);
			if (iVar32 == 0)
			{
				bVar33 = Function_107(iParam0->f_40, 1);
			}
			bVar0 = Function_62(iParam0->f_16, iParam0->f_12, bVar33);
			if (!IS_GRINGO_COMPONENT_VALID(bVar0))
			{
				iParam0->f_44 = 5;
				if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
				{
					GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 1);
				}
			}
			else if (bVar12)
			{
				if (GRINGO_PLAY_ANIM_ON_ACTOR(iParam0->f_16, bVar0, bVar33))
				{
					if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
					{
						GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 1);
					}
					iParam0->f_44 = 5;
					iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, 0);
					while (iVar11 >= 4294967295)
					{
						bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar11, iParam0->f_12);
						if (GRINGO_ATTACH_PROP_TO_ANIM(iParam0->f_16, bVar1, Function_24(bVar1, "AttachBone", &bVar10), Function_24(bVar1, "AttachLocator", &bVar10), 1))
						{
							Function_61(bVar1, iParam0->f_16);
							if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
							{
								bVar34 = GRINGO_GET_PROP_FROM_COMPONENT(bVar1);
								if (IS_PHYSINST_VALID(bVar34))
								{
									ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), bVar34, 0);
								}
							}
						}
						iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, iVar11 + 1);
					}
					bVar13 = false;
					uVar15 = GRINGO_GET_ATTRIBUTE(iParam0->f_12, bVar13);
					while (bVar13 <= GRINGO_GET_ATTRIBUTE_COUNT(iParam0->f_12))
					{
						uVar15 = GRINGO_GET_ATTRIBUTE(iParam0->f_12, bVar13);
						if (GRINGO_IS_ATTRIBUTE_VALID(uVar15))
						{
							if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(uVar15) == 2)
							{
								if (iVar23 == GRINGO_GET_ATTRIBUTE_HASH(uVar15))
								{
									iVar16 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar15, &uVar14);
									iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar16, 1, GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 0), 0);
									while (iVar11 >= 4294967295)
									{
										bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar11, GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 0));
										if (GRINGO_ATTACH_PROP_TO_ANIM(iParam0->f_16, bVar1, Function_24(bVar1, "AttachBone", &bVar10), Function_24(bVar1, "AttachLocator", &bVar10), 1))
										{
											if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
											{
												bVar35 = GRINGO_GET_PROP_FROM_COMPONENT(bVar1);
												if (IS_PHYSINST_VALID(bVar35))
												{
													ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), bVar35, 0);
												}
											}
											Function_61(bVar1, iParam0->f_16);
										}
										iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar16, 1, GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 0), iVar11 + 1);
									}
								}
							}
						}
						bVar13++;
					}
				}
			}
			if (iParam0->f_44 == 5)
			{
				Function_2("KICKED TO DOING START", iParam0->f_16);
				bVar8 = GET_TARGET_OBJECT();
				if (IS_OBJECT_VALID(bVar8))
				{
					Function_53(iParam0, bVar8, &iLocal_99, &cLocal_98);
					if (GET_OBJECT_TYPE(bVar8) != 15)
					{
						bVar22 = GET_PHYSINST_FROM_OBJECT(bVar8);
						if (IS_PHYSINST_VALID(bVar22))
						{
							if (!IS_PROP_FIXED(bVar22))
							{
								Function_81(iParam0 + 40, 256);
								SET_PROP_FIXED(bVar22, 1);
							}
							else
							{
								Function_52(iParam0 + 40, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, iParam0 + 20);
				if (Function_107(iParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
					{
						Function_2("SCHEDULE STOP CUSTOM UNSUSPEND", iParam0->f_16);
						UNK_0x4A1D2E25(iParam0->f_16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
					{
						Function_2("SCHEDULE STOP CUSTOM UNFIX", iParam0->f_16);
						UNK_0x817B6952(iParam0->f_16);
					}
				}
				GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 1);
				if (Function_51(iParam0->f_12))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(bVar0))
				{
					if (Function_50(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_49(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(iParam0->f_16, bVar9);
							}
						}
					}
					else if (Function_48(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_49(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(bVar9, iParam0->f_16);
							}
						}
					}
					bVar10 = false;
					bVar7 = Function_47(iParam0->f_12, &bVar10);
					if (bVar10)
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_49(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_ACTION_NODE_FOR_ACTOR(bVar9, bVar7);
							}
						}
					}
				}
				if (Function_46(iParam0->f_12))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(iParam0->f_16))
					{
						Function_81(iParam0 + 40, 8);
					}
					else
					{
						Function_52(iParam0 + 40, 8);
					}
					if (Function_107(iParam0->f_40, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, true);
					}
				}
				else
				{
					Function_52(iParam0 + 40, 8);
				}
				if (Function_45(iParam0->f_12))
				{
					NET_SET_NODE_REPLICATION(iParam0->f_16, 1, 1);
					UNK_0xC17BAD12(iParam0->f_16);
				}
				bVar37 = Function_24(iParam0->f_12, "CustomReactNode", &bVar36);
				if (bVar36)
				{
					SET_REACT_NODE_FOR_ACTOR(iParam0->f_16, bVar37);
				}
				iVar38 = 1;
				bVar39 = Function_22(iParam0->f_12, "CanAnimalsAttack", iVar38);
				if (!bVar39)
				{
					if (IS_ACTOR_VALID(iParam0->f_16))
					{
						SET_ANIMAL_CAN_ATTACK(iParam0->f_16, 0);
					}
				}
				Function_44(iParam0->f_16, iParam0->f_12);
				bVar40 = Function_22(iParam0->f_12, "AllowTalking", 1);
				if (!bVar40)
				{
					STOP_PED_SPEAKING(iParam0->f_16, 1);
				}
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				Function_43();
			}
			iParam0->f_44 = 6;
			if (Function_107(iParam0->f_40, 1))
			{
				if (Function_42(iParam0->f_12))
				{
					Function_2("MID ACTION NODE", iParam0->f_16);
				}
			}
		
		case 0x00000006:
			if (!Function_41(iParam0->f_16, iParam0->f_12))
			{
				Function_2("CUSTOM QUIT DURING USE", iParam0->f_16);
				iParam0->f_44 = 8;
			}
			bVar0 = Function_62(iParam0->f_16, iParam0->f_12, Function_107(iParam0->f_40, 1));
			if (IS_GRINGO_COMPONENT_VALID(bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(iParam0->f_16, bVar0))
				{
					Function_2("ANIMATION QUIT DURING USE", iParam0->f_16);
					if (GRINGO_WAS_USE_SUCCESSFUL(iParam0->f_16))
					{
						iParam0->f_44 = 7;
					}
					else
					{
						iParam0->f_44 = 8;
					}
				}
			}
			if (Function_27(iParam0) <= Function_25(iParam0->f_12))
			{
				GRINGO_SATISFY_MOTIVES_OF_ACTOR(iParam0->f_16, iParam0->f_12);
			}
			if (!IS_ACTOR_PLAYER(iParam0->f_16))
			{
				if (AI_SPEECH_GET_ALLOW_FOR_ACTOR(iParam0->f_16))
				{
					bVar41 = GRINGO_GET_FIRST_NAMED_CHILD("SpeechConts", 4, iParam0->f_12);
					if (IS_GRINGO_COMPONENT_VALID(bVar41))
					{
						if (!DECOR_GET_FLOAT_VERBOSE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", &fVar42))
						{
							DECOR_SET_FLOAT(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", GET_CURRENT_GAME_TIME());
						}
						else
						{
							iVar43 = GRINGO_GET_ATTRIBUTE_COUNT(bVar41);
							if (!GET_GRINGO_FLOAT_ATTR(&fVar45, "MinDelay", bVar41))
							{
								fVar45 = 10.0f;
							}
							else
							{
								iVar43 = (iVar43 - 1);
							}
							if (!GET_GRINGO_FLOAT_ATTR(&bVar44, "MaxDelay", bVar41))
							{
								bVar44 = 30.0f;
							}
							else
							{
								iVar43 = (iVar43 - 1);
							}
							bVar48 = GET_GRINGO_BOOL_ATTR("nForcePlay", bVar41, &iVar46);
							if (iVar46 != 0)
							{
								iVar43 = (iVar43 - 1);
							}
							bVar47 = GET_GRINGO_BOOL_ATTR("AllowRepeat", bVar41, &iVar46);
							if (iVar46 != 0)
							{
								iVar43 = (iVar43 - 1);
							}
							bVar49 = GET_GRINGO_BOOL_ATTR("SubtitlesOn", bVar41, &iVar46);
							if (iVar46 != 0)
							{
								iVar43 = (iVar43 - 1);
							}
							bVar50 = GET_GRINGO_BOOL_ATTR("ForceThruSpeechBlock", bVar41, &iVar46);
							if (iVar46 != 0)
							{
								iVar43 = (iVar43 - 1);
							}
							if (iVar43 >= 0)
							{
								if (GET_CURRENT_GAME_TIME() - fVar42) <= RAND_FLOAT_RANGE(fVar45, bVar44)
								{
									DECOR_SET_FLOAT(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", GET_CURRENT_GAME_TIME());
									bVar51 = RAND_INT_RANGE(false, (iVar43 - 1));
									uVar52 = GRINGO_GET_ATTRIBUTE(bVar41, bVar51);
									bVar53 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar52, &iVar46);
									iVar54 = 1;
									STRING_CLEAR_TOKENIZER();
									iVar55 = SET_OWNERSHIP_STRAGGLER(bVar53, ",");
									if (iVar55 >= 1)
									{
										bVar56 = STRING_GET_TOKEN(1);
										if (STRINGS_ARE_EQUAL("super", bVar56))
										{
											iVar54 = 3;
										}
										else if (STRINGS_ARE_EQUAL("shout", bVar56))
										{
											iVar54 = 2;
										}
										else
										{
											iVar54 = 1;
										}
										bVar53 = STRING_GET_TOKEN(0);
									}
									SAY_SINGLE_LINE_STRING(iParam0->f_16, bVar53, bVar48, bVar47, iVar54, 0, bVar49, bVar50);
								}
							}
						}
					}
				}
			}
			if (iParam0->f_44 == 6)
			{
				bVar60 = Function_40(iParam0->f_12);
				if (bVar60 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, &vVar57);
					if (VDIST(vVar57, *(iParam0 + 20)) < bVar60)
					{
						Function_2("UPDATE USE TOO FAR", iParam0->f_16);
						if (Function_39())
						{
							PRINTSTRING("   Distance was: ");
							PRINTFLOAT(VDIST(vVar57, *(iParam0 + 20)));
							PRINTSTRING(" [Max allowed is: ");
							PRINTFLOAT(bVar60);
							PRINTSTRING(" ] ");
							PRINTNL();
						}
						iParam0->f_44 = 8;
					}
				}
			}
			if (iParam0->f_44 == 6)
			{
				if (NET_IS_IN_SESSION())
				{
					bVar21 = NET_IS_OBJECT_LOCAL(iParam0->f_16);
				}
				if (IS_TASKED_TO_USE_GRINGO_FOREVER(iParam0->f_16, GRINGO_GET_MY_GRINGO_ID()))
				{
					bVar21 = false;
				}
				if (bVar21)
				{
					if (Function_38(iParam0->f_12) <= 0.0f)
					{
						if (Function_27(iParam0) < Function_38(iParam0->f_12))
						{
							Function_2("UPDATE USE USETIME SATISFIED", iParam0->f_16);
							iParam0->f_44 = 7;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_151("nRewarding");
			Function_37(iParam0->f_16, iParam0->f_12);
			Function_36(iParam0->f_16, iParam0->f_12);
			Function_35(iParam0->f_16, iParam0->f_12);
			SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "LastUserObject", iParam0->f_12);
			Function_81(iParam0 + 40, 64);
			iParam0->f_44 = 8;
			break;
		
		case 0x00000008:
			bLocal_100 = true;
			if (!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				if (!DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
				{
					if (!Function_22(iParam0->f_12, "GringoCamNoEndCut", 0))
					{
						if (!Function_34())
						{
							Function_87(iParam0->f_12);
						}
					}
				}
				else
				{
					DECOR_REMOVE(iParam0->f_16, "NoGringoCamera");
				}
			}
			if (Function_22(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
			{
				Function_2("Use case quits - no cleapup due to DoNotCleanUpUserSettings attribute", iParam0->f_16);
				return 0;
			}
			Function_2("GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS", iParam0->f_16);
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_16);
			iParam0->f_44 = 9;
			Function_33(iParam0->f_16, iParam0->f_12);
			break;
		
		case 0x00000009:
			if (Function_107(iParam0->f_40, 1024))
			{
				Function_52(iParam0 + 40, 1024);
				if (!Function_22(iParam0->f_12, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, true);
				}
			}
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 1);
			}
			bLocal_100 = true;
			bVar0 = Function_62(iParam0->f_16, iParam0->f_12, Function_107(iParam0->f_40, 1));
			if (IS_GRINGO_COMPONENT_VALID(bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(iParam0->f_16, bVar0))
				{
					Function_2("ANIMATION FINISHED", iParam0->f_16);
					return 0;
				}
			}
			return 0;
			break;
	}
	Function_32(iParam0->f_16, iParam0->f_44);
	return 1;
}

void Function_32(bool bParam0, int iParam1) //Position: 0x2452 / 9298
{
	if (IS_ACTOR_VALID(bParam0))
	{
		REPORT_GRINGO_USE_PHASE(bParam0, iParam1);
	}
	return;
}

void Function_33(var uParam0, var uParam1) //Position: 0x2467 / 9319
{
	uParam1 = uParam1;
	uParam0 = uParam0;
	return;
}

bool Function_34() //Position: 0x2475 / 9333
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
	{
		bVar0 = FIND_OBJECT_IN_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera");
		if (IS_OBJECT_VALID(bVar0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_35(var uParam0, bool bParam1) //Position: 0x24A6 / 9382
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(bParam1);
	iVar2 = STRING_TO_HASH("RemoveCapability");
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		uVar3 = GRINGO_GET_ATTRIBUTE(bParam1, bVar1);
		iVar4 = GRINGO_GET_ATTRIBUTE_HASH(uVar3);
		if (iVar4 == iVar2)
		{
			iVar5 = 0;
			uVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar3, &iVar5);
			if (iVar5 >= 0)
			{
				if (HAS_CAPABILITY(uParam0, uVar6))
				{
					REMOVE_CAPABILITY(uParam0, uVar6);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_36(var uParam0, bool bParam1) //Position: 0x251A / 9498
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(bParam1);
	iVar2 = STRING_TO_HASH("AddCapability");
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		uVar3 = GRINGO_GET_ATTRIBUTE(bParam1, bVar1);
		iVar4 = GRINGO_GET_ATTRIBUTE_HASH(uVar3);
		if (iVar4 == iVar2)
		{
			iVar5 = 0;
			uVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar3, &iVar5);
			if (iVar5 >= 0)
			{
				if (!HAS_CAPABILITY(uParam0, uVar6))
				{
					ADD_CAPABILITY(uParam0, uVar6);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_37(var uParam0, int iParam1) //Position: 0x258C / 9612
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

float Function_38(bool bParam0) //Position: 0x259A / 9626
{
	return Function_26(bParam0, "UseTime", 5.0f);
}

bool Function_39() //Position: 0x25B0 / 9648
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

bool Function_40(bool bParam0) //Position: 0x25BD / 9661
{
	return Function_26(bParam0, "MoveAllowance", 1.5f);
}

bool Function_41(var uParam0, int iParam1) //Position: 0x25DD / 9693
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	if (iLocal_11)
	{
		SET_PLAYER_CONTROL(false, 1, 0, 0);
		iLocal_11 = 0;
	}
	return 1;
}

bool Function_42(bool bParam0) //Position: 0x25FB / 9723
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, bParam0));
}

void Function_43() //Position: 0x261A / 9754
{
	return;
}

void Function_44(bool bParam0, int iParam1) //Position: 0x2620 / 9760
{
	iParam1 = iParam1;
	bParam0 = bParam0;
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		HUD_ENABLE(false);
	}
	return;
}

bool Function_45(int iParam0) //Position: 0x263A / 9786
{
	iParam0 = iParam0;
	return 0;
}

bool Function_46(bool bParam0) //Position: 0x2645 / 9797
{
	return Function_22(bParam0, "OneShotKill", 0);
}

bool Function_47(bool bParam0, int iParam1) //Position: 0x265F / 9823
{
	return Function_24(bParam0, "ParentAnimNode", iParam1);
}

bool Function_48(bool bParam0) //Position: 0x267D / 9853
{
	return Function_22(bParam0, "LinkToParentAnim", 0);
}

bool Function_49(bool bParam0) //Position: 0x269C / 9884
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (Local_21 - 1))
	{
		if (Local_21[iVar012].f_12 == bParam0)
		{
			return Local_21[iVar012].f_16;
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_50(bool bParam0) //Position: 0x26CF / 9935
{
	return Function_22(bParam0, "LinkParentToAnim", 0);
}

bool Function_51(bool bParam0) //Position: 0x26EE / 9966
{
	return Function_22(bParam0, "SingularUse", 0);
}

void Function_52(var uParam0, int iParam1) //Position: 0x2708 / 9992
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_53(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x271B / 10011
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	char* cVar11;
	char* cVar12;
	bool bVar13;
	
	PRINTSTRING("CALLED ManageTargetRelation");
	PRINTNL();
	iVar2 = Function_60(uParam0->f_12, &bVar0);
	uVar3 = Function_59(uParam0->f_12, &bVar1);
	bVar4 = Function_58(uParam0->f_12);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(bVar4)))
	{
		bVar6 = Function_57(uParam0->f_12, &bVar5);
		if (bVar5)
		{
			bVar8 = Function_56(uParam0->f_12, &bVar7);
			if (!bVar7)
			{
				LOG_ERROR("Provided target physical attachment bone with no corresponding user attachment");
				return;
			}
			uParam0->f_32 = ATTACH_OBJECTS_PHYSICAL(bParam1, uParam0->f_16, bVar6, bVar8, 0.02f);
		}
		return;
	}
	bVar9 = true;
	if (bVar0)
	{
		bVar9 = ATTACH_SLOT_FROM_STRING(iVar2);
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
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, uVar3, Function_54(uParam0->f_12, &bVar10), false, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, Function_9(), Function_54(uParam0->f_12, &bVar10), false, bVar9);
	}
	if (IS_GRINGO_COMPONENT_VALID(bVar4))
	{
		PRINTSTRING("HAVE TARGET ANIM");
		PRINTNL();
		if (IS_GRINGO_COMPONENT_VALID(*uParam2))
		{
			LOG_ERROR("Cannot set a target skeleton anim while one is already playing");
			return;
		}
		if (IS_OBJECT_ANIMATOR_VALID(*uParam3))
		{
			LOG_ERROR("sTargetSkelAnimator not cleared correctly on previous anim");
			DESTROY_OBJECT_ANIMATOR(*uParam3);
		}
		cVar11 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(bVar4, uParam0->f_16);
		cVar12 = GRINGO_ANIM_GET_ACT_FILENAME(bVar4);
		bVar13 = GRINGO_ANIM_GET_ACT_ROOTNODE(bVar4);
		*uParam3 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bParam1, cVar11, cVar12, bVar13);
		if (IS_OBJECT_ANIMATOR_VALID(*uParam3))
		{
			if (Function_22(bVar4, "LinkToUser", 0))
			{
				if (Function_39())
				{
					Function_55();
					PRINTSTRING(" - linking target at slot: ");
					PRINTINT(bVar9);
					PRINTNL();
				}
				LINK_OBJECT_ANIMATOR_TO_ACTOR(*uParam3, uParam0->f_16, bVar9);
			}
		}
		else
		{
			LOG_ERROR("sTargetSkelAnimator not cleared correctly!");
		}
		*uParam2 = uParam0->f_12;
	}
}

bool Function_54(bool bParam0, bool bParam1) //Position: 0x2A03 / 10755
{
	return Function_24(bParam0, "TargetLocator", bParam1);
}

void Function_55() //Position: 0x2A20 / 10784
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_56(bool bParam0, int iParam1) //Position: 0x2A2F / 10799
{
	return Function_24(bParam0, "UserPhysAttachBone", iParam1);
}

bool Function_57(bool bParam0, int iParam1) //Position: 0x2A51 / 10833
{
	return Function_24(bParam0, "TargetPhysAttachBone", iParam1);
}

var Function_58(bool bParam0) //Position: 0x2A75 / 10869
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, bParam0);
}

bool Function_59(bool bParam0, int iParam1) //Position: 0x2A92 / 10898
{
	return Function_24(bParam0, "TargetAttachBone", iParam1);
}

bool Function_60(bool bParam0, int iParam1) //Position: 0x2AB2 / 10930
{
	return Function_24(bParam0, "TargetAttachSlot", iParam1);
}

void Function_61(bool bParam0, bool bParam1) //Position: 0x2AD2 / 10962
{
	bool bVar0;
	bool bVar1;
	char* cVar2;
	char* cVar3;
	bool bVar4;
	char* cVar5;
	char* cVar6;
	
	bVar0 = GRINGO_GET_FIRST_CHILD(2, bParam0);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		cVar2 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(bVar0, bParam1);
		cVar3 = GRINGO_ANIM_GET_ACT_FILENAME(bVar0);
		bVar4 = GRINGO_ANIM_GET_ACT_ROOTNODE(bVar0);
		bVar1 = GRINGO_GET_PHYSINST(bParam0);
		if (IS_PHYSINST_VALID(bVar1))
		{
			cVar5 = GET_OBJECT_ANIMATOR_ON_OBJECT(bVar1);
			if (IS_OBJECT_ANIMATOR_VALID(cVar5))
			{
				LOG_ERROR("Previous object animator not cleared - destroying now!");
				DESTROY_OBJECT_ANIMATOR(cVar5);
			}
			cVar6 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bVar1, cVar2, cVar3, bVar4);
			if (IS_OBJECT_ANIMATOR_VALID(cVar6))
			{
				LINK_OBJECT_ANIMATOR_TO_ACTOR(cVar6, bParam1, GRINGO_GET_PROP_ATTACH_SLOT(bParam0));
			}
		}
	}
	return;
}

bool Function_62(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2B80 / 11136
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnimMidAction", 2, bParam1);
		if (IS_GRINGO_COMPONENT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	if (IS_ACTOR_PLAYER(bParam0))
	{
		bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, bParam1);
		if (IS_GRINGO_COMPONENT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnim", 2, bParam1);
	return bVar0;
}

void Function_63(int iParam0, float fParam1) //Position: 0x2BF0 / 11248
{
	if (!Function_29(iParam0))
	{
		Function_64(iParam0, fParam1);
	}
	return;
}

void Function_64(int iParam0, float fParam1) //Position: 0x2C06 / 11270
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_81(iParam0, 1);
	Function_52(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

var Function_65(bool bParam0) //Position: 0x2C27 / 11303
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_26(bParam0, "RandUseTime", 0.0f));
}

void Function_66(int iParam0) //Position: 0x2C47 / 11335
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_67(bool bParam0) //Position: 0x2C5B / 11355
{
	bParam0 = bParam0;
	if (iLocal_7 && !iLocal_9)
	{
		if (GRINGO_COMPONENT_CHECK_NAME("PutOn_Horse", bParam0))
		{
			bLocal_2 = CREATE_LAYOUT("Hogtied_Gringo_Layout");
			Function_10(bLocal_3);
			*(&Local_12 + 12) = { StackVal, StackVal, Function_10(bLocal_3) };
			Function_11(bLocal_3);
			Local_12 = { StackVal, StackVal, Function_11(bLocal_3) };
			Local_12.f_24 = 0;
			iLocal_9 = 1;
			if (DECOR_CHECK_EXIST(Global_34573, "Hogtie_PutOnHorse_L"))
			{
				Function_76(bLocal_2, 0, &Local_12, Global_34573, bLocal_3, GET_TARGET_ACTOR(), 1, 0, 1);
			}
			else
			{
				Function_72(bLocal_2, 0, &Local_12, Global_34573, bLocal_3, GET_TARGET_ACTOR(), 1, 0, 1);
			}
		}
		else if (GRINGO_COMPONENT_CHECK_NAME("nDrop_Body", bParam0) && !DECOR_CHECK_EXIST(Global_34573, "NoPutDownCam"))
		{
			iLocal_9 = 1;
			bLocal_2 = CREATE_LAYOUT("Hogtied_Gringo_Layout");
			Function_10(Global_34573);
			*(&Local_12 + 12) = { StackVal, StackVal, Function_10(Global_34573) };
			Function_11(Global_34573);
			Local_12 = { StackVal, StackVal, Function_11(Global_34573) };
			Local_12.f_24 = 0;
			Function_68(bLocal_2, 0, &Local_12, Global_34573, GET_TARGET_ACTOR(), 1, 0, 1);
		}
	}
	return;
}

var Function_68(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x2D82 / 11650
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Hogtie_PutDown", 2, 1);
	}
	Function_69(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_69(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2E02 / 11778
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_71(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_70(&bVar0, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 0, 1, 1.25f, 0, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 1);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 0.333f, 1);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 1);
}

void Function_70(var uParam0, bool bParam1, bool bParam2) //Position: 0x2E65 / 11877
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.436189f, 0.492736f, 0.233008f, 22.81943f, 60.71665f, -1.7E-05f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 52);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_71(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2F04 / 12036
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	vVar0 = { 1.273693f, 0.489523f, 0.395424f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.77584f, -0.102225f, 0.622592f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 52);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

var Function_72(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, var uParam8) //Position: 0x2FDC / 12252
{
	bool bVar0;
	
	if (bParam6)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Hogtie_PutOnHorse_R", 2, 1);
	}
	Function_73(&bVar0, uParam2, uParam3, uParam4, uParam5);
	if (uParam8 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam7)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam7);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_73(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x3063 / 12387
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_75(&bVar0, uParam1, uParam2, uParam3, uParam4);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_74(&bVar0, uParam1, uParam2, uParam3, uParam4);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 0, 1);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
}

void Function_74(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x30B2 / 12466
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.9107f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0.944168f, 1.523165f, -0.734789f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.692662f, 0.031325f, -0.720582f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam4, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 119);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.5f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

void Function_75(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x31A4 / 12708
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.9107f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 1.179794f, 1.489099f, -1.514868f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.48271f, 0.061713f, -0.873603f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam4, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 119);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.5f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

var Function_76(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, var uParam8) //Position: 0x3296 / 12950
{
	bool bVar0;
	
	if (bParam6)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Hogtie_PutOnHorse", 2, 1);
	}
	Function_77(&bVar0, uParam2, uParam3, uParam4, uParam5);
	if (uParam8 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam7)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam7);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_77(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x331B / 13083
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_79(&bVar0, uParam1, uParam2, uParam3, uParam4);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_78(&bVar0, uParam1, uParam2, uParam3, uParam4);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 0, 1);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
}

void Function_78(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x336A / 13162
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 48.98911f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -1.140573f, 1.581926f, -0.367888f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0.725698f, 0.047662f, -0.686361f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam4, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 119);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.5f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

void Function_79(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x345C / 13404
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.74031f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -0.852804f, 1.684564f, -1.548106f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0.25955f, 0.033027f, -0.965165f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam4, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 119);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.5f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

int Function_80() //Position: 0x354E / 13646
{
	return 1;
}

void Function_81(var uParam0, int iParam1) //Position: 0x3555 / 13653
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_82(bool bParam0, var uParam1, int iParam2) //Position: 0x3564 / 13668
{
	bool bVar0;
	
	Function_84(bParam0);
	*uParam1 = { StackVal, StackVal, Function_84(bParam0) };
	*iParam2 = Function_12(bParam0);
	bVar0 = Function_83(bParam0);
	if (bVar0 < 180.0f)
	{
		bVar0 = 180.0f;
	}
	*iParam2 = (*iParam2 + RAND_FLOAT_RANGE(-bVar0, bVar0));
	return;
}

float Function_83(bool bParam0) //Position: 0x35A3 / 13731
{
	return Function_26(bParam0, "UseDirectionToleranceDegrees", 0.0f);
}

vector3 Function_84(bool bParam0) //Position: 0x35CE / 13774
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	if (Function_85(bParam0))
	{
		bVar3 = GRINGO_GET_PARENT_COMPONENT(bParam0, 3);
		if (IS_GRINGO_COMPONENT_VALID(bVar3))
		{
			bVar4 = GET_ACTOR_FROM_OBJECT(GRINGO_GET_COMPONENT_USER(bVar3));
			if (IS_ACTOR_VALID(bVar4))
			{
				GRINGO_GET_USE_COMPONENT_POSITION_LOCAL(&vVar0, bParam0);
				GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(bVar4), vVar0, &vVar0);
			}
		}
		else
		{
			LOG_ERROR("Can only use 'UsePosActorRelative' attribute on child use cases");
		}
	}
	else if (!GET_GRINGO_RELATIVE_POSITION_ATTR(&vVar0, "CentreLocator", bParam0))
	{
		if (!GET_GRINGO_RELATIVE_POSITION_ATTR(&vVar0, "UseLocator", bParam0))
		{
			if (!GRINGO_GET_USE_COMPONENT_POSITION(&vVar0, bParam0))
			{
				LOG_ERROR("Failed to find use location!");
			}
		}
	}
	return StackVal, StackVal, vVar0;
}

bool Function_85(bool bParam0) //Position: 0x36C4 / 14020
{
	return Function_22(bParam0, "UsePosActorRelative", 0);
}

bool Function_86(bool bParam0) //Position: 0x36E6 / 14054
{
	return Function_26(bParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_87(bool bParam0) //Position: 0x370D / 14093
{
	if (iLocal_7 && !iLocal_9)
	{
		if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Horse", bParam0))
		{
			bLocal_2 = CREATE_LAYOUT("Hogtied_Gringo_Layout");
			Function_10(bLocal_3);
			*(&Local_12 + 12) = { StackVal, StackVal, Function_10(bLocal_3) };
			Function_11(bLocal_3);
			Local_12 = { StackVal, StackVal, Function_11(bLocal_3) };
			Local_12.f_24 = 0;
			iLocal_9 = 1;
			if (DECOR_GET_BOOL(Global_34573, "Hogtie_PickupHorse_L"))
			{
				Function_96(bLocal_2, 0, &Local_12, Global_34573, bLocal_3, GET_TARGET_ACTOR(), 1, 0, 1);
			}
			else
			{
				Function_92(bLocal_2, 0, &Local_12, Global_34573, bLocal_3, GET_TARGET_ACTOR(), 1, 0, 1);
			}
		}
		else if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Ground", bParam0))
		{
			bLocal_2 = CREATE_LAYOUT("Hogtied_Gringo_Layout");
			Function_10(GET_TARGET_ACTOR());
			*(&Local_12 + 12) = { StackVal, StackVal, Function_10(GET_TARGET_ACTOR()) };
			Function_11(GET_TARGET_ACTOR());
			Local_12 = { StackVal, StackVal, Function_11(GET_TARGET_ACTOR()) };
			Local_12.f_24 = 0;
			iLocal_9 = 1;
			if (!DECOR_CHECK_EXIST(Global_34573, "Pickup_ALT"))
			{
				Function_88(bLocal_2, 0, &Local_12, Global_34573, GET_TARGET_ACTOR(), 1, 0, 1);
			}
		}
	}
	return;
}

var Function_88(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x3836 / 14390
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Hogtie_PickUp", 2, 1);
	}
	Function_89(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_89(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x38B5 / 14517
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_91(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_90(&bVar0, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1.0f, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.675f, 2);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
}

void Function_90(var uParam0, bool bParam1, bool bParam2) //Position: 0x3926 / 14630
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 53.62094f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.830532f, 1.265587f, 0.663826f, 11.75119f, -59.63327f, 6.783992f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 52);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.5f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_91(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x39C9 / 14793
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.71016f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -1.425053f, 0.715797f, -0.168659f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0.887724f, 0.059831f, 0.456472f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 52);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.5f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

var Function_92(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, var uParam8) //Position: 0x3AA5 / 15013
{
	bool bVar0;
	
	if (bParam6)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Hogtie_PickupHorse_R", 2, 1);
	}
	Function_93(&bVar0, uParam2, uParam3, uParam4, uParam5);
	if (uParam8 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam7)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam7);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_93(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x3B2D / 15149
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_95(&bVar0, uParam1, uParam2, uParam3, uParam4);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_94(&bVar0, uParam1, uParam2, uParam3, uParam4);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.1f, 0, 1);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 5.0f, 1, 0f);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
}

void Function_94(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3B88 / 15240
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 51.02201f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 1.218257f, 1.440567f, -1.345491f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.224632f, 0.111187f, -0.96808f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam4, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 119);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.5f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

void Function_95(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3C7A / 15482
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 51.02201f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 1.124511f, 1.509215f, -0.246571f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.796731f, 0.093124f, -0.597116f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam4, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 119);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.5f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

var Function_96(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, var uParam8) //Position: 0x3D6C / 15724
{
	bool bVar0;
	
	if (bParam6)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Hogtie_PickupHorse", 2, 1);
	}
	Function_97(&bVar0, uParam2, uParam3, uParam4, uParam5);
	if (uParam8 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam7)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam7);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_97(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x3DF2 / 15858
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_99(&bVar0, uParam1, uParam2, uParam3, uParam4);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_98(&bVar0, uParam1, uParam2, uParam3, uParam4);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 0, 1);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
}

void Function_98(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3E41 / 15937
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.54322f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -0.434786f, 1.085596f, -0.644915f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.60267f, -0.300194f, -0.739373f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam4, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 119);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.5f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

void Function_99(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3F33 / 16179
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.54322f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -1.610833f, 1.118547f, -0.550768f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0.695042f, -0.215548f, -0.685898f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam4, 119);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 119);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.5f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

void Function_100(int iParam0) //Position: 0x4026 / 16422
{
	iParam0 = iParam0;
	return;
}

bool Function_101(bool bParam0) //Position: 0x4030 / 16432
{
	return Function_22(bParam0, "MaintainPosture", 0);
}

void Function_102(int iParam0) //Position: 0x404E / 16462
{
	if (!Function_29(iParam0))
	{
		Function_64(iParam0, 0.0f);
	}
	return;
}

bool Function_103(bool bParam0, bool bParam1) //Position: 0x4063 / 16483
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	var uVar7;
	var uVar10;
	
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		if (GRINGO_COMPONENT_CHECK_NAME("PutOn_Horse", bParam1))
		{
			return 1;
		}
		if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Horse", bParam1))
		{
			return 1;
		}
		if (GRINGO_COMPONENT_CHECK_NAME("Cut_Free", bParam1))
		{
			return 1;
		}
		if (GRINGO_COMPONENT_CHECK_NAME("nDrop_Body", bParam1))
		{
			return 1;
		}
		if (DECOR_CHECK_EXIST(bParam0, "Pickup_ALT"))
		{
			Function_10(GRINGO_GET_MY_OBJECT_REF());
			vVar0 = { StackVal, StackVal, Function_10(GRINGO_GET_MY_OBJECT_REF()) };
		}
		else
		{
			GET_OBJECT_RELATIVE_POSITION(GRINGO_GET_MY_OBJECT_REF(), 0.0f, 0.0f, 0.9f, &vVar0);
		}
		bVar3 = Function_12(bParam1);
		TELEPORT_ACTOR_WITH_HEADING(bParam0, vVar0, bVar3, 0, 1, 1);
		return 1;
	}
	if (GRINGO_COMPONENT_CHECK_NAME("PutOn_Horse", bParam1))
	{
		return 1;
	}
	if (GRINGO_COMPONENT_CHECK_NAME("nDrop_Body", bParam1))
	{
		return 1;
	}
	bVar4 = Function_12(bParam1);
	bVar5 = (Function_104(bParam1) + 0.8f);
	fVar6 = (Function_83(bParam1) + 1.0f);
	if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Ground", bParam1))
	{
		GET_OBJECT_RELATIVE_POSITION(GRINGO_GET_MY_OBJECT_REF(), -0.9f, 0.0f, 0.0f, &uVar7);
		return GRINGO_ACTOR_MOVE_TO_AND_FACE(bParam0, &uVar7, bVar5, 0.2f, 1, bVar4, fVar6, 0, 0);
	}
	if (GRINGO_COMPONENT_CHECK_NAME("Cut_Free", bParam1))
	{
		GET_OBJECT_RELATIVE_POSITION(GRINGO_GET_MY_OBJECT_REF(), -0.4823f, 0.0f, -0.597f, &uVar10);
		return GRINGO_ACTOR_MOVE_TO_AND_FACE(bParam0, &uVar10, bVar5, 0.2f, 1, bVar4, fVar6, 0, 0);
	}
	return 0;
}

float Function_104(bool bParam0) //Position: 0x41F2 / 16882
{
	return Function_26(bParam0, "UseLocationTolerance", 0.0f);
}

bool Function_105(bool bParam0, int iParam1) //Position: 0x4215 / 16917
{
	*iParam1 = Function_26(bParam0, "AreaClearCheck", -1.0f);
	if (*iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_106(bool bParam0) //Position: 0x4240 / 16960
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	
	bVar0 = GET_TARGET_OBJECT();
	if (IS_OBJECT_VALID(bVar0))
	{
		if (!GRINGO_IS_TARGET_OBJECT_READY())
		{
			return 0;
		}
	}
	iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0, 0);
	while (iVar1 >= 4294967295)
	{
		if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, bParam0)))
		{
			return 0;
		}
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0, iVar1 + 1);
	}
	bVar2 = false;
	uVar4 = GRINGO_GET_ATTRIBUTE(bParam0, bVar2);
	iVar6 = STRING_TO_HASH("SharedPropName");
	while (bVar2 <= GRINGO_GET_ATTRIBUTE_COUNT(bParam0))
	{
		uVar4 = GRINGO_GET_ATTRIBUTE(bParam0, bVar2);
		if (GRINGO_IS_ATTRIBUTE_VALID(uVar4))
		{
			if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(uVar4) == 2)
			{
				if (iVar6 == GRINGO_GET_ATTRIBUTE_HASH(uVar4))
				{
					iVar5 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar4, &uVar3);
					iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar5, 1, GRINGO_GET_PARENT_COMPONENT(bParam0, 0), 0);
					while (iVar1 >= 4294967295)
					{
						if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, GRINGO_GET_PARENT_COMPONENT(bParam0, 0))))
						{
							return 0;
						}
						iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar5, 1, GRINGO_GET_PARENT_COMPONENT(bParam0, 0), iVar1 + 1);
					}
				}
			}
		}
		bVar2++;
	}
	return 1;
}

bool Function_107(var uParam0, int iParam1) //Position: 0x4345 / 17221
{
	return (uParam0 && iParam1) == 0;
}

void Function_108(int iParam0) //Position: 0x4352 / 17234
{
	if (Function_107(iParam0->f_40, 16))
	{
		if (iParam0->f_44 > 5 && iParam0->f_44 < 1)
		{
			if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
			{
				Function_2("UNSUSPEND MOVER", iParam0->f_16);
				ENABLE_MOVER(iParam0->f_16);
			}
			if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
			{
				Function_2("UNFIX MOVER", iParam0->f_16);
				SET_MOVER_FROZEN(iParam0->f_16, 0);
			}
		}
	}
	return;
}

void Function_109(int iParam0, bool bParam1) //Position: 0x43C5 / 17349
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	char* cVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	bool bVar14;
	
	if (bParam1)
	{
		Function_2("<<<STOP USE [delay allowed]", iParam0->f_16);
	}
	else
	{
		Function_2("<<<STOP USE [NO delay allowed]", iParam0->f_16);
	}
	Function_24(iParam0->f_12, "CustomReactNode", &bVar0);
	if (bVar0)
	{
		if (IS_ACTOR_VALID(iParam0->f_16))
		{
			RESET_REACT_NODE_FOR_ACTOR(iParam0->f_16);
		}
	}
	iVar1 = 1;
	bVar2 = Function_22(iParam0->f_12, "CanAnimalsAttack", iVar1);
	if (!bVar2)
	{
		if (IS_ACTOR_VALID(iParam0->f_16))
		{
			SET_ANIMAL_CAN_ATTACK(iParam0->f_16, 1);
		}
	}
	bVar3 = Function_22(iParam0->f_12, "AllowTalking", 1);
	if (!bVar3)
	{
		STOP_PED_SPEAKING(iParam0->f_16, 0);
	}
	if (iParam0->f_44 < 8)
	{
		Function_33(iParam0->f_16, iParam0->f_12);
	}
	if ((HAS_INVENTORY_COMPONENT(iParam0->f_16) && Function_107(iParam0->f_40, 32)) && Function_22(iParam0->f_12, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(iParam0->f_16, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_115(iParam0->f_16, iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		GRINGO_REPORT_USE_FINISHED(iParam0->f_16, Function_107(iParam0->f_40, 64));
		Function_32(iParam0->f_16, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
		if (!Function_22(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_107(iParam0->f_40, 128) && Function_22(iParam0->f_12, "RedrawWeapon", 1))
			{
				ACTOR_END_FORCE_HOLSTER(iParam0->f_16);
			}
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_16);
			if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12) && IS_OBJECT_VALID(GET_TARGET_OBJECT()))
			{
				bVar4 = GET_PROP_FROM_OBJECT(GET_TARGET_OBJECT());
				if (IS_PHYSINST_VALID(bVar4))
				{
					SUPRESS_MOVER_COLLISIONS(iParam0->f_16, bVar4, 0);
				}
			}
			if (Function_50(iParam0->f_12))
			{
				CLEAR_LINKED_ANIM_TARGET(iParam0->f_16);
			}
			if (Function_107(iParam0->f_40, 16))
			{
				Function_108(iParam0);
				Function_52(iParam0 + 40, 16);
			}
			if (Function_107(iParam0->f_40, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, false);
			}
			if (Function_114(iParam0->f_12) && Function_107(iParam0->f_40, 512))
			{
				Function_52(iParam0 + 40, 512);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 1);
				Function_2("Allow Bump Reactions", iParam0->f_16);
			}
		}
		if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
		{
			GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 1);
		}
	}
	iVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, 0);
	while (iVar5 >= 4294967295)
	{
		bVar6 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar5, iParam0->f_12);
		bVar7 = GRINGO_GET_PHYSINST(bVar6);
		if (IS_PHYSINST_VALID(bVar7))
		{
			cVar8 = GET_OBJECT_ANIMATOR_ON_OBJECT(GET_OBJECT_FROM_PHYSINST(bVar7));
			if (IS_OBJECT_ANIMATOR_VALID(cVar8))
			{
				RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(cVar8));
			}
			if (!IS_ACTOR_VALID(iParam0->f_16))
			{
				RESET_PROP(bVar7);
			}
		}
		iVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, iVar5 + 1);
	}
	if (Function_48(iParam0->f_12))
	{
		bVar9 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
		if (IS_GRINGO_COMPONENT_VALID(bVar9))
		{
			bVar10 = Function_49(bVar9);
			if (IS_ACTOR_VALID(bVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(bVar10);
			}
		}
	}
	Function_113(iParam0->f_12);
	bVar11 = Function_22(iParam0->f_12, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(iParam0->f_16))
		{
			Function_112(iParam0, GET_TARGET_OBJECT());
		}
		bVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar12))
		{
			if (Function_107(iParam0->f_40, 256))
			{
				Function_52(iParam0 + 40, 256);
				SET_PROP_FIXED(bVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(iParam0->f_36))
	{
		DESTROY_OBJECT(iParam0->f_36);
	}
	if (iParam0->f_12 == iLocal_99)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(cLocal_98));
		iLocal_99 = iVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 0);
	if (Function_51(iParam0->f_12))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 1);
	}
	if (IS_ATTACHMENT_VALID(iParam0->f_32))
	{
		REMOVE_OBJECT_ATTACHMENT(iParam0->f_32);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_101))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_101);
	}
	SET_GRINGO_OBJECT_REF_ATTR(bVar14, "UserObject", iParam0->f_12);
	Function_66(iParam0);
	Function_102(iParam0);
	GRINGO_CLEAR_COMPONENT_USER(iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16) && bParam1)
	{
		Function_2("Setting reuse delay", iParam0->f_16);
		GRINGO_SET_REUSE_DELAY(Function_111(iParam0->f_12), iParam0->f_12);
	}
	Function_52(iParam0 + 40, 2);
	if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", iParam0->f_12);
	}
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
		{
			Function_110();
		}
	}
	else
	{
		Function_110();
	}
	iParam0->f_44 = 0;
	iParam0->f_16 = "";
	return;
}

void Function_110() //Position: 0x48C3 / 18627
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
	{
		bVar0 = FIND_OBJECT_IN_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera");
		if (IS_OBJECT_VALID(bVar0))
		{
			DESTROY_OBJECT(bVar0);
			CAMERA_RESET(0);
		}
	}
	return;
}

bool Function_111(bool bParam0) //Position: 0x48FA / 18682
{
	return Function_26(bParam0, "ReuseDelay", 15.0f);
}

void Function_112(var uParam0, int iParam1) //Position: 0x4917 / 18711
{
	var uVar0;
	var uVar1;
	bool bVar2;
	
	Function_60(uParam0->f_12, &uVar0);
	Function_59(uParam0->f_12, &uVar1);
	bVar2 = Function_58(uParam0->f_12);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(bVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(iParam1);
	return;
}

void Function_113(int iParam0) //Position: 0x494F / 18767
{
	iParam0 = iParam0;
	return;
}

bool Function_114(bool bParam0) //Position: 0x4959 / 18777
{
	return Function_22(bParam0, "BlockBumpReactions", 0);
}

void Function_115(bool bParam0, bool bParam1) //Position: 0x497A / 18810
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	
	bLocal_10 = false;
	bVar0 = GET_TARGET_ACTOR();
	if (IS_ACTOR_PLAYER(bParam0))
	{
		TASK_CLEAR(bParam0);
		if (!Global_63096)
		{
			SET_PLAYER_CONTROL(false, 1, 0, 0);
		}
		if (!GRINGO_COMPONENT_CHECK_NAME("Cut_Free", bParam1))
		{
			ENABLE_USE_CONTEXTS(1);
		}
		HUD_ENABLE(true);
	}
	if (IS_LAYOUTREF_VALID(bLocal_2))
	{
		DESTROY_LAYOUT_OBJECTS(bLocal_2);
		DESTROY_LAYOUT(bLocal_2);
	}
	if (DECOR_CHECK_EXIST(bParam0, "Hogtie_PutOnHorse_L"))
	{
		DECOR_REMOVE(bParam0, "Hogtie_PutOnHorse_L");
	}
	if (DECOR_CHECK_EXIST(bParam0, "Hogtie_PickupHorse_L"))
	{
		DECOR_REMOVE(bParam0, "Hogtie_PickupHorse_L");
	}
	bVar1 = GRINGO_GET_PARENT_COMPONENT(bParam1, 0);
	bVar2 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, bVar1);
	GET_GRINGO_OBJECT_REF_ATTR(&uVar3, "Owner", bVar2);
	if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Ground", bParam1))
	{
		SET_GRINGO_INT_ATTR(1, "CurrentState", bVar2);
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("nDrop_Body", bParam1))
	{
		CLEAR_LINKED_ANIM_TARGET(bParam0);
		SET_GRINGO_INT_ATTR(0, "CurrentState", bVar2);
		if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			DECOR_SET_BOOL(bVar0, "LastCarrierPlayer", true);
		}
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Horse", bParam1))
	{
		SET_GRINGO_INT_ATTR(1, "CurrentState", bVar2);
		if (IS_ACTOR_VALID(bLocal_4))
		{
			SET_ACTOR_INVULNERABILITY(bLocal_4, 0);
		}
		bLocal_4 = "";
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("Cut_Free", bParam1))
	{
		CLEAR_LINKED_ANIM_TARGET(bParam0);
		FREE_FROM_HOGTIE(bVar0);
		SET_ACTOR_CAN_PLAY_GESTURES(bVar0, true);
		if (DECOR_CHECK_EXIST(bVar0, "NoTalk_CutFree"))
		{
			AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
		}
		Function_116(399, 1, 0, 0);
		if (DECOR_CHECK_EXIST(bVar0, "HogtiedGringoAttached"))
		{
			DECOR_REMOVE(bVar0, "HogtiedGringoAttached");
		}
		if (DECOR_CHECK_EXIST(bVar0, "LastCarrierPlayer"))
		{
			DECOR_REMOVE(bVar0, "LastCarrierPlayer");
		}
		if (DECOR_CHECK_EXIST(bVar0, "CanBeLasso"))
		{
			DECOR_REMOVE(bVar0, "CanBeLasso");
		}
		if (bLocal_19 != 4294967295)
		{
			ACTOR_PUT_WEAPON_IN_HAND(bParam0, bLocal_19, 1);
		}
		if (IS_ACTOR_PLAYER(bParam0))
		{
			TASK_CLEAR(bParam0);
			if (!DECOR_CHECK_EXIST(bVar0, "DontReenableControl"))
			{
				SET_PLAYER_CONTROL(false, 1, 0, 0);
			}
			else
			{
				DECOR_REMOVE(bVar0, "DontReenableControl");
			}
			HUD_ENABLE(true);
		}
		DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("PutOn_Horse", bParam1))
	{
		CLEAR_LINKED_ANIM_TARGET(bParam0);
		SET_GRINGO_INT_ATTR(2, "CurrentState", bVar2);
		if (IS_ACTOR_VALID(bLocal_4))
		{
			SET_ACTOR_INVULNERABILITY(bLocal_4, 0);
		}
		bLocal_4 = "";
	}
	CLEAR_HOGTIE_ATTACH_VICTIM(bParam0);
	DECOR_REMOVE(bParam0, "Pickup_ALT");
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		SET_ACTOR_INVULNERABILITY(bParam0, 0);
	}
	SET_ACTOR_INVULNERABILITY(bVar0, 0);
	iLocal_11 = 0;
	iLocal_9 = 0;
	return;
}

int Function_116(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x4D0E / 19726
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
	Function_129(iParam0, TO_FLOAT(bParam1), 1);
	Function_128(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_117(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, uParam3);
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

void Function_117(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x4F2E / 20270
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_127(390))), 32);
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
					bVar19 = (Function_126(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_126(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_124(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_121(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_119(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_118(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_9(), &Var9);
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

var Function_118(int iParam0) //Position: 0x555B / 21851
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_119(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x556C / 21868
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_120(char* cParam0, bool bParam1) //Position: 0x5661 / 22113
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_121(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x567A / 22138
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_123(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_122(Function_123(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_122(int iParam0, int iParam1) //Position: 0x56DF / 22239
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_123(int iParam0, bool bParam1) //Position: 0x56F1 / 22257
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_124(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x5703 / 22275
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
	if (((Function_125(iParam0) != 19 || Function_125(iParam0) != 17) || Function_125(iParam0) != 10) || Function_125(iParam0) != 9)
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

int Function_125(int iParam0) //Position: 0x5833 / 22579
{
	return Global_35278[iParam020].f_48;
}

float Function_126(int iParam0) //Position: 0x5842 / 22594
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_127(int iParam0) //Position: 0x587B / 22651
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_128(int iParam0) //Position: 0x58B8 / 22712
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

int Function_129(int iParam0, float fParam1, bool bParam2) //Position: 0x5A52 / 23122
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
			Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = fParam1;
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

void Function_130(bool bParam0, bool bParam1) //Position: 0x5C96 / 23702
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam1)
		{
			Function_151("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			if (bParam1)
			{
				Function_151("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_101))
			{
				if (bParam1)
				{
					Function_151("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_101);
			}
		}
	}
	if (bParam1)
	{
		Function_151("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_131(bool bParam0, bool bParam1) //Position: 0x5D9E / 23966
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), bParam1, bParam0, 0, 0, 0);
	return;
}

void Function_132(int iParam0) //Position: 0x5DB4 / 23988
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iParam0->f_16 = GRINGO_GET_REQUESTING_ACTOR();
	if (!IS_ACTOR_VALID(iParam0->f_16))
	{
		LOG_ERROR("Invalid actor in StartDoingRequestedTask");
		return;
	}
	iVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	iParam0->f_12 = iVar0;
	if (GRINGO_GET_USE_REQUIRES_OBSTACLE(iVar0))
	{
		if (IS_ACTOR_HORSE(iParam0->f_16))
		{
			iParam0->f_36 = CREATE_OBSTACLE_ON_OBJECT(iParam0->f_16, "ngringoObs", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.75f, 2.0f);
		}
		else
		{
			iParam0->f_36 = CREATE_OBSTACLE_ON_OBJECT(iParam0->f_16, "ngringoObs", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5f, 1.0f, 0.5f);
		}
		ATTACH_OBJECTS(iParam0->f_36, iParam0->f_16, Function_9(), 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	Function_66(iParam0);
	Function_2("Going to eGringoPositioning", iParam0->f_16);
	iParam0->f_44 = 2;
	Function_81(iParam0 + 40, 2);
	Function_52(iParam0 + 40, 8);
	Function_52(iParam0 + 40, 16);
	Function_52(iParam0 + 40, 64);
	SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "UserObject", iVar0);
	GRINGO_SET_COMPONENT_USER(iParam0->f_16, bVar0);
	if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12) && IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		bVar1 = GET_PROP_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar1))
		{
			SUPRESS_MOVER_COLLISIONS(iParam0->f_16, bVar1, 1);
		}
	}
	SET_GRINGO_OBJECT_REF_ATTR(bVar2, "LastUserObject", iParam0->f_12);
	if (!Function_135(iParam0->f_12))
	{
		if (HAS_INVENTORY_COMPONENT(iParam0->f_16))
		{
			if (ACTOR_HOLSTER_WEAPON(iParam0->f_16, 1))
			{
				Function_81(iParam0 + 40, 32);
			}
			else
			{
				Function_52(iParam0 + 40, 32);
			}
		}
		else
		{
			Function_52(iParam0 + 40, 32);
		}
		if (Function_107(iParam0->f_40, 32))
		{
			Function_81(iParam0 + 40, 128);
		}
		else
		{
			Function_52(iParam0 + 40, 128);
		}
	}
	else
	{
		Function_52(iParam0 + 40, 32);
	}
	if (Function_134(iParam0->f_12))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, true), 1))
			{
				Function_81(iParam0 + 40, 128);
			}
		}
		else
		{
			Function_81(iParam0 + 40, 128);
		}
	}
	if (Function_114(iParam0->f_12))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16))
		{
			Function_81(iParam0 + 40, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 0);
			Function_2("Block Bump Reactions", iParam0->f_16);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
	Function_133(iParam0->f_16, bVar0);
	Function_2("START: ", iParam0->f_16);
	return;
}

void Function_133(bool bParam0, bool bParam1) //Position: 0x606A / 24682
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	bVar0 = GET_TARGET_ACTOR();
	if (IS_ACTOR_LOCAL_PLAYER(bParam0) && !Function_18())
	{
		SET_ACTOR_INVULNERABILITY(bParam0, 1);
	}
	SET_ACTOR_INVULNERABILITY(bVar0, 1);
	bVar1 = GRINGO_GET_PARENT_COMPONENT(bParam1, 0);
	bVar2 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, bVar1);
	GET_GRINGO_OBJECT_REF_ATTR(&bVar3, "Owner", bVar2);
	if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Ground", bParam1))
	{
		SET_GRINGO_INT_ATTR(1, "CurrentState", bVar2);
		SET_LINKED_ANIM_TARGET(bParam0, bVar0);
		SET_GRINGO_OBJECT_REF_ATTR(bParam0, "Owner", bVar2);
		REFERENCE_ACTOR(bVar0);
		if (IS_HOGTIE_PICKUP_OBSTRUCTED(bVar0, bParam0))
		{
			DECOR_SET_BOOL(bParam0, "Pickup_ALT", true);
		}
		ENABLE_USE_CONTEXTS(0);
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("nDrop_Body", bParam1))
	{
		SET_LINKED_ANIM_TARGET(bParam0, bVar0);
		SET_GRINGO_OBJECT_REF_ATTR(false, "Owner", bVar2);
		bLocal_10 = true;
		DEREFERENCE_ACTOR(bVar0);
		ENABLE_USE_CONTEXTS(0);
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Horse", bParam1))
	{
		bLocal_3 = GET_ACTOR_FROM_OBJECT(bVar3);
		SET_LINKED_ANIM_TARGET(bParam0, bLocal_3);
		bVar0 = GET_ATTACHED_HOGTIE_VICTIM(bLocal_3);
		if (IS_ACTOR_VALID(bVar0))
		{
			SET_HOGTIE_ATTACH_VICTIM(bParam0, bVar0);
		}
		SET_INTENDED_HOGTIE_MASTER(GET_ACTOR_FROM_OBJECT(bVar3), bParam0);
		SET_GRINGO_OBJECT_REF_ATTR(bParam0, "Owner", bVar2);
		iLocal_11 = 1;
		REFERENCE_ACTOR(bVar0);
		ENABLE_USE_CONTEXTS(0);
		SET_ACTOR_INVULNERABILITY(bLocal_3, 1);
		bLocal_4 = bLocal_3;
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("Cut_Free", bParam1))
	{
		SET_LINKED_ANIM_TARGET(bParam0, bVar0);
		iVar4 = GET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(2, bVar0);
		if (DECOR_CHECK_EXIST(bVar0, "NoTalk_CutFree") || iVar4 != 0)
		{
			AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_UNTIES");
		}
		ACTOR_HOLSTER_WEAPON(bParam0, 0);
		ACTOR_SET_NEXT_WEAPON(bParam0, 22);
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("PutOn_Horse", bParam1))
	{
		SET_LINKED_ANIM_TARGET(bParam0, bVar0);
		SET_INTENDED_HOGTIE_MASTER(bParam0, bLocal_3);
		if (GET_TASK_STATUS(bLocal_3, 4294967295) == 2)
		{
			TASK_STAND_STILL(bLocal_3, 25.0f, 1, 0);
		}
		SET_GRINGO_OBJECT_REF_ATTR(bLocal_3, "Owner", bVar2);
		iLocal_11 = 1;
		DEREFERENCE_ACTOR(bVar0);
		ENABLE_USE_CONTEXTS(0);
		SET_ACTOR_INVULNERABILITY(bLocal_3, 1);
		bLocal_4 = bLocal_3;
	}
	bLocal_6 = false;
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_1);
	}
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		iLocal_7 = 1;
	}
	else
	{
		iLocal_7 = 0;
	}
	iLocal_9 = 0;
	if (DECOR_CHECK_EXIST(bVar0, "LastCarrierPlayer"))
	{
		DECOR_REMOVE(bVar0, "LastCarrierPlayer");
	}
	return;
}

bool Function_134(bool bParam0) //Position: 0x62FA / 25338
{
	return Function_22(bParam0, "DrawWeapon", 0);
}

bool Function_135(bool bParam0) //Position: 0x6313 / 25363
{
	return Function_22(bParam0, "AllowWeapon", 0);
}

void Function_136(bool bParam0, int iParam1) //Position: 0x632D / 25389
{
	bool bVar0;
	char* cVar1;
	
	bParam0 = bParam0;
	cVar1 = Function_137(iParam1, &bVar0);
	if (!bVar0)
	{
		if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
		{
			if (IS_ACTOR_LOCAL_PLAYER(GRINGO_GET_REQUESTING_ACTOR()))
			{
				cVar1 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
			}
		}
	}
	GRINGO_SET_REQUEST_STRING(cVar1);
	return;
}

bool Function_137(var uParam0, int iParam1) //Position: 0x6365 / 25445
{
	return Function_24(uParam0, "UseName", iParam1);
}

bool Function_138(int iParam0, int iParam1) //Position: 0x637C / 25468
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	char* cVar17[64];
	bool bVar33;
	float fVar34;
	
	bVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	bVar1 = GRINGO_GET_REQUESTING_ACTOR();
	GRINGO_GET_USER_POS_WITH_OFFSET(&vVar2, bVar1, bVar0);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		bVar5 = GRINGO_IS_CHARACTER_BLEND_PAUSED(bVar0);
		if (GET_ACTOR_GAIT_TYPE(bVar1) != 4 && !bVar5)
		{
			return 0;
		}
		if (ACTOR_HAS_ANIM_SET(bVar1, "stand_hostage") && !Function_22(iParam0->f_12, "CutFreeGringo", 0))
		{
			return 0;
		}
		if (IS_ACTOR_LOCAL_PLAYER(bVar1))
		{
			if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(bVar1)))
			{
				iVar6 = 0;
				GET_GRINGO_BOOL_ATTR("IsHogtieFriendly", bVar0, &iVar6);
				if (iVar6 == 0)
				{
					return 0;
				}
			}
		}
		if (Global_3365)
		{
			if (IS_ACTOR_LOCAL_PLAYER(bVar1))
			{
				if (!Function_146(6))
				{
					return 0;
				}
			}
		}
		if (IS_ACTOR_LOCAL_PLAYER(bVar1))
		{
			if (IS_PLAYER_USING_COVER(0))
			{
				return 0;
			}
		}
		if (FIRE_IS_ACTOR_ON_FIRE(bVar1) && !bVar5)
		{
			return 0;
		}
		if (GET_ACTOR_INCAPACITATED(bVar1))
		{
			return 0;
		}
		if (!Function_142(bVar1, iParam0->f_12))
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
		bVar7 = GET_TARGET_OBJECT();
		if (IS_OBJECT_VALID(bVar7))
		{
			bVar8 = GET_PROP_FROM_OBJECT(bVar7);
			if (IS_PHYSINST_VALID(bVar8))
			{
				if (HAS_PHYSINST_BROKEN_APART(bVar8))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(3);
					return 0;
				}
			}
		}
		if (!Function_107(iParam0->f_40, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_81(iParam0 + 40, 1);
			}
			else
			{
				Function_52(iParam0 + 40, 1);
			}
			if (Function_107(iParam0->f_40, 1))
			{
				Function_131("MIDACTION REQUEST", bVar1);
			}
			else
			{
				Function_84(iParam0->f_12);
				vVar9 = { StackVal, StackVal, Function_84(iParam0->f_12) };
				vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar9, StackVal) };
				fVar15 = Function_141(iParam0->f_12);
				bVar16 = VMAG(vVar12);
				if (bVar16 < fVar15 && !GRINGO_HANDLES_MOVEMENT(bVar0))
				{
					strcpy(&cVar17, "nTOO FAR (", 64);
					straddi(&cVar17, FLOOR((bVar16 * 10.0f)), 64);
					stradd(&cVar17, " > ", 64);
					straddi(&cVar17, FLOOR((fVar15 * 10.0f)), 64);
					stradd(&cVar17, ")", 64);
					GRINGO_SET_REQUEST_FAILURE_REASON(5);
					return 0;
				}
				if (!Function_140(bVar1, iParam0->f_12))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar33 = Function_139(iParam0->f_12);
				if (!bVar33 != 0.0f)
				{
					if (bVar33 < 0.0f)
					{
						fVar34 = (UNK_0x9C40E671(&vVar12) - Function_12(iParam0->f_12));
					}
					else
					{
						fVar34 = ((180.0f + UNK_0x9C40E671(&vVar12)) - Function_12(iParam0->f_12));
					}
					if (fVar34 < 180.0f)
					{
						fVar34 = (fVar34 - 360.0f);
					}
					else if (fVar34 > -180.0f)
					{
						fVar34 = (fVar34 + 360.0f);
					}
					if (fVar34 < FABS(bVar33))
					{
						GRINGO_SET_REQUEST_FAILURE_REASON(7);
						return 0;
					}
				}
			}
			*iParam1 = 1;
			return 1;
		}
		if (iParam0->f_16 == GRINGO_GET_REQUESTING_ACTOR())
		{
			*iParam1 = 0;
			return 1;
		}
	}
	GRINGO_SET_REQUEST_FAILURE_REASON(8);
	return 0;
}

bool Function_139(bool bParam0) //Position: 0x6645 / 26181
{
	return Function_26(bParam0, "ActivationCone", 0.0f);
}

bool Function_140(bool bParam0, bool bParam1) //Position: 0x6662 / 26210
{
	struct<5> Var0;
	float fVar5;
	float fVar6;
	
	fVar3 = GRINGO_GET_USE_COMPONENT_HEADING(bParam1);
	bVar4 = GET_HEADING(bParam0);
	fVar5 = Function_26(bParam1, "HeadingTolerance", -1.0f);
	fVar6 = (fVar3 - bVar4);
	if (fVar5 != -1.0f)
	{
		return 1;
	}
	Function_84(bParam1);
	Var0 = { StackVal, StackVal, Function_84(bParam1) };
	GET_POSITION(bParam0, &Var0);
	Var0.f_4 = (StackVal + 1.5f);
	Function_84(bParam1);
	Var0 = { StackVal, StackVal, Function_84(bParam1) };
	Var0.f_4 = (StackVal + 1.5f);
	if (fVar6 > 0.0f)
	{
		fVar6 = (fVar6 + 360.0f);
	}
	if (fVar6 <= (360.0f - fVar5) || fVar6 >= fVar5)
	{
		return 1;
	}
	return 0;
}

bool Function_141(int iParam0) //Position: 0x66FE / 26366
{
	return Function_26(iParam0, "ActivationRadius", 2.0f);
}

bool Function_142(bool bParam0, bool bParam1) //Position: 0x671D / 26397
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	bool bVar10;
	var uVar11;
	vector3 vVar14;
	vector3 vVar17;
	var uVar20;
	vector3 vVar23;
	vector3 vVar26;
	
	bVar0 = GET_TARGET_ACTOR();
	if (bParam0 == bVar0)
	{
		return 0;
	}
	bVar1 = GRINGO_GET_MY_OBJECT_REF();
	if (!IS_ACTOR_HOGTIED(bVar0))
	{
		DESTROY_OBJECT(bVar1);
		return 0;
	}
	bVar2 = Function_145(bParam1);
	if (bVar2 == 4294967295)
	{
		bVar2 = false;
	}
	if (DECOR_CHECK_EXIST(bParam0, "Hogtie_PutOnHorse_L"))
	{
		DECOR_REMOVE(bParam0, "Hogtie_PutOnHorse_L");
	}
	if (IS_ACTOR_ON_TRAIN(bParam0, 0) || IS_ACTOR_ON_TRAIN(bVar0, 0))
	{
		return 0;
	}
	if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(bParam0))
	{
		return 0;
	}
	bVar3 = GRINGO_GET_PARENT_COMPONENT(bParam1, 0);
	bVar4 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, bVar3);
	GET_GRINGO_OBJECT_REF_ATTR(&bVar5, "Owner", bVar4);
	if (IS_ACTOR_VALID(GET_LASSO_TARGET(bParam0)))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(GET_HOGTIED_MASTER(bVar0)) && (bVar2 != 2 || bVar2 != 1))
	{
		if (IS_OBJECT_VALID(bVar5))
		{
			GET_ACTOR_FROM_OBJECT(bVar5);
		}
		SET_GRINGO_INT_ATTR(0, "CurrentState", bVar4);
		DEREFERENCE_ACTOR(bVar0);
	}
	if (bVar2 == 0)
	{
		bVar6 = GET_HOGTIED_MASTER(bVar0);
		if (IS_ACTOR_VALID(bVar6))
		{
			if (IS_ACTOR_HORSE(bVar6))
			{
				SET_GRINGO_INT_ATTR(2, "CurrentState", bVar4);
				bVar2 = 2;
			}
			else
			{
				SET_GRINGO_INT_ATTR(1, "CurrentState", bVar4);
				bVar2 = true;
			}
		}
	}
	switch (bVar2)
	{
		case 0x00000000:
			if (GRINGO_COMPONENT_CHECK_NAME("Cut_Free", bParam1))
			{
				if (IS_ACTOR_HUMAN(bParam0))
				{
					return 1;
				}
			}
			if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Ground", bParam1))
			{
				if (IS_ACTOR_PLAYER(bParam0) && DECOR_CHECK_EXIST(bVar1, "DisablePlayerCarry"))
				{
					return 0;
				}
				if (DECOR_CHECK_EXIST(bVar0, "ActionArea_DisableHogtie"))
				{
					return 0;
				}
				if (FIRE_IS_ACTOR_ON_FIRE(bVar0))
				{
					return 0;
				}
				return 1;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "PlaceOnHorse"))
			{
				return 0;
			}
			if (IS_OBJECT_VALID(bVar5))
			{
				if (GET_OBJECT_FROM_ACTOR(bParam0) != bVar5)
				{
					return 0;
				}
			}
			if (GRINGO_COMPONENT_CHECK_NAME("Cut_Free", bParam1))
			{
				return 0;
			}
			bLocal_3 = "";
			if (GRINGO_COMPONENT_CHECK_NAME("PutOn_Horse", bParam1))
			{
				if (IS_ACTOR_LOCAL_PLAYER(bParam0))
				{
					if (DECOR_CHECK_EXIST(bParam0, "Player_DisablePutOnHorse"))
					{
						return 0;
					}
				}
				GET_OBJECT_POSITION(bVar5, &vVar7);
				if (DECOR_CHECK_EXIST(bVar0, "SpecificHorse"))
				{
					bLocal_3 = GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(bVar0, "SpecificHorse"));
					if (!Function_144(StackVal, StackVal, bLocal_3, vVar7) >= 1.6f && CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bLocal_3, 1065353216, 1117126656, 1, 1, 0))
					{
						bLocal_3 = "";
					}
				}
				else
				{
					bLocal_3 = LOCATE_ACTOR_OF_TYPE(vVar7, 1.0f, 23, 4294967295);
				}
				if (IS_ACTOR_VALID(bLocal_3))
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(bLocal_3)))
					{
						return 0;
					}
					if (IS_ACTOR_MULE(bLocal_3))
					{
						return 0;
					}
					if (IS_ACTOR_DRAFTED(bLocal_3))
					{
						return 0;
					}
					if (!Global_3380)
					{
						if (IS_ACTOR_MOUNTED(bLocal_3))
						{
							bVar10 = GET_RIDER(bLocal_3);
							if (GET_ACTOR_FACTION(bVar10) == 20 || GET_ACTOR_FACTION(bVar10) == 23)
							{
								return 0;
							}
						}
					}
					if (DECOR_CHECK_EXIST(bParam0, "CantPlaceOnHorse"))
					{
						if (bLocal_3 == GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(bParam0, "CantPlaceOnHorse")))
						{
							return 0;
						}
					}
					if (ANIMAL_ACTOR_GET_DOMESTICATION(bLocal_3) == 1)
					{
						return 0;
					}
					if (DECOR_CHECK_EXIST(GRINGO_GET_TARGET(GET_GRINGO_FROM_OBJECT(bVar1)), "Hogtied_HorseRestriction"))
					{
						if (!GET_OBJECT_FROM_ACTOR(bLocal_3) != DECOR_GET_OBJECT(GRINGO_GET_TARGET(GET_GRINGO_FROM_OBJECT(bVar1)), "Hogtied_HorseRestriction"))
						{
							return 0;
						}
					}
					GET_ACTOR_AXIS(bLocal_3, &uVar11, 0);
					Function_143(bLocal_3);
					vVar14 = { StackVal, StackVal, Function_143(bLocal_3) };
					Function_143(bParam0);
					vVar17 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar14, Function_143(bParam0), StackVal) };
					if (VDOT(&uVar11, &vVar17) <= 0.0f)
					{
						if (DECOR_CHECK_EXIST(bParam0, "Hogtie_PutOnHorse_L"))
						{
							DECOR_REMOVE(bParam0, "Hogtie_PutOnHorse_L");
						}
					}
					else
					{
						DECOR_SET_BOOL(bParam0, "Hogtie_PutOnHorse_L", true);
					}
					if (DECOR_CHECK_EXIST(bParam0, "HogtiePlace_NoHorse"))
					{
						DECOR_REMOVE(bParam0, "HogtiePlace_NoHorse");
					}
					bLocal_8 = true;
					return 1;
				}
				bLocal_8 = false;
			}
			if (GRINGO_COMPONENT_CHECK_NAME("nDrop_Body", bParam1))
			{
				if (IS_HOGTIE_PUTDOWN_OBSTRUCTED(bParam0))
				{
					return 0;
				}
				return !bLocal_8;
			}
			break;
		
		case 0x00000002:
			if (GRINGO_COMPONENT_CHECK_NAME("Cut_Free", bParam1))
			{
				return 0;
			}
			if (IS_ACTOR_LOCAL_PLAYER(bParam0) && DECOR_CHECK_EXIST(bVar1, "DisablePlayerCarry"))
			{
				return 0;
			}
			if (IS_ACTOR_LOCAL_PLAYER(bParam0) && DECOR_CHECK_EXIST(bVar0, "DisablePlayerCarry"))
			{
				return 0;
			}
			if (GRINGO_COMPONENT_CHECK_NAME("Pickup_Horse", bParam1))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bVar0))
				{
					return 0;
				}
				GET_ACTOR_AXIS(GET_ACTOR_FROM_OBJECT(bVar5), &uVar20, 0);
				Function_143(GET_ACTOR_FROM_OBJECT(bVar5));
				vVar23 = { StackVal, StackVal, Function_143(GET_ACTOR_FROM_OBJECT(bVar5)) };
				Function_143(bParam0);
				vVar26 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar23, Function_143(bParam0), StackVal) };
				if (VDOT(&uVar20, &vVar26) <= 0.0f)
				{
					DECOR_SET_BOOL(bParam0, "Hogtie_PickupHorse_L", false);
				}
				else
				{
					DECOR_SET_BOOL(bParam0, "Hogtie_PickupHorse_L", true);
				}
				if (IS_HOGTIE_HORSE_PICKUP_OBSTRUCTED(GET_ACTOR_FROM_OBJECT(bVar5), bParam0))
				{
					return 0;
				}
				return 1;
			}
			break;
	}
	return 0;
}

vector3 Function_143(bool bParam0) //Position: 0x6D13 / 27923
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

float Function_144(bool bParam0, vector3 vParam1) //Position: 0x6D24 / 27940
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_17(bParam0);
		vVar0 = { StackVal, StackVal, Function_17(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

var Function_145(bool bParam0) //Position: 0x6D9E / 28062
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar1 = GRINGO_GET_PARENT_COMPONENT(bParam0, 0);
	bVar2 = GRINGO_GET_FIRST_NAMED_CHILD("GlobalSettings", 0, bVar1);
	if (IS_GRINGO_COMPONENT_VALID(bVar2))
	{
		iVar0 = Function_19(bVar2, "CurrentState", 4294967295);
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
	if (iVar0 != iLocal_20)
	{
		iLocal_20 = iVar0;
	}
	return iVar3;
}

bool Function_146(int iParam0) //Position: 0x6E61 / 28257
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_147(int iParam0) //Position: 0x6E7D / 28285
{
	iParam0 = iParam0;
	return;
}

void Function_148(bool bParam0, int iParam1) //Position: 0x6E87 / 28295
{
	int iVar0;
	int iVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, bParam0))
	{
		Function_149(&(Local_21[iLocal_9412]), bParam0);
		iLocal_94++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(bParam0) >= 0)
	{
		iVar0 = 0;
		iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0);
		while (iVar0 <= 0 && *iParam1 > 6)
		{
			iVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar0, bParam0);
			Function_148(iVar1, iParam1);
			iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0 + 1);
		}
	}
	return;
}

void Function_149(int iParam0, int iParam1) //Position: 0x6EE9 / 28393
{
	iParam0->f_12 = iParam1;
	Function_52(iParam0 + 40, 1);
	return;
}

void Function_150(int iParam0) //Position: 0x6EFD / 28413
{
	iParam0 = iParam0;
	return;
}

void Function_151(int iParam0) //Position: 0x6F07 / 28423
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), iParam0, 0, 0, 0);
	return;
}

