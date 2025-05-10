//Decompiled with MagicRDR v1.0
//Function Count : 37
//Statics Count : 4
//Natives Count : 71
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	int iVar4;
	bool bVar7;
	var uVar8;
	bool bVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;
	struct<17> Var17;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iVar0 = 0;
	bVar7 = GET_MOUNT(Global_34573);
	if (!IS_ACTOR_VALID(bVar7))
	{
		bVar7 = GET_MOST_RECENT_MOUNT(Global_34573);
	}
	Var17 = 1000;
	while (!IS_EXITFLAG_SET())
	{
		switch (iVar0)
		{
			case 0x00000000:
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				UI_PUSH("nCutscenes");
				if (IS_ACTOR_RIDING(Global_34573))
				{
					if (Function_36(Global_34573, 0) < 10.0f)
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar7, "horse_Main/Melee/RearUp/scripted/canned_rear_up");
					}
					else
					{
						TASK_OVERRIDE_SET_MOVETYPE(Global_34573, 5);
					}
				}
				if (IS_ACTOR_VALID(bVar7))
				{
					RESET_ACTOR_GAITS(bVar7, 1);
					TASK_STAND_STILL(bVar7, -1.0f, 0, 0);
				}
				iVar0 = 6;
				break;
			
			case 0x00000006:
				if (Function_36(Global_34573, 0) > 2.0f)
				{
					if (IS_ACTOR_RIDING(Global_34573))
					{
						Function_33(&uVar8);
						bVar16 = true;
					}
					Function_32(&iVar1);
					Function_32(&iVar4);
					iVar0 = 7;
				}
				break;
			
			case 0x00000007:
				if (!GET_TASK_SEQUENCE_CURRENT_TASK_INDEX(Global_34573, 4294967295) < 0)
				{
					Function_28(&iVar1);
				}
				if (Function_24(&iVar1) < 0.15f || !bVar16)
				{
					Function_23(Global_34573);
					Function_23(Global_34573);
					if (VDIST(Function_23(Global_34573), 565.824f, 88.579f, 1234.438f) > VDIST(Function_23(Global_34573), 604.287f, 82.574f, 1357.304f))
					{
						Var17.f_16 = Function_13(FIND_NAMED_LAYOUT("Blackwater_layout"), 0, 1, 0, 0);
						iVar15 = 1;
					}
					else
					{
						Var17.f_16 = Function_2(FIND_NAMED_LAYOUT("Blackwater_layout"), 0, 1, 0, 0);
						iVar15 = 0;
					}
					if (!IS_WEAPON_DRAWN(Global_34573))
					{
						ACTOR_DRAW_ANY_WEAPON(Global_34573, 1);
					}
					Function_28(&iVar1);
					iVar0 = 8;
				}
				break;
			
			case 0x00000008:
				if (((!IS_ACTOR_RIDING(Global_34573) && Function_24(&iVar1) < 5.0f) && !bVar13) && IS_ACTOR_VALID(bVar7))
				{
					Function_1(bVar7, 1);
					bVar13 = true;
				}
				if (!bVar14 && Function_24(&iVar1) < 7.25f)
				{
					TASK_CLEAR(Global_34573);
					SIMULATE_PLAYER_INPUT_GAIT(0, 1, 2.0f, 1);
					bVar14 = true;
				}
				if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && !IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Var17.f_16), false))
				{
					UI_POP("nCutscenes");
					Function_28(&iVar1);
					iVar0 = 106;
				}
				break;
			
			case 0x0000006A:
				if (IS_OBJECT_VALID(Var17.f_16))
				{
					DESTROY_OBJECT(Var17.f_16);
				}
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 360, false, 1, 1, 4, 4294967295, 4294967295, 0, 1);
				DECOR_SET_FLOAT(Global_34573, "PlayerHorse_DeathTime", (GET_CURRENT_GAME_TIME() + 10000.0f));
				DECOR_SET_BOOL(Global_34573, "nbStopSong", true);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				TERMINATE_THIS_SCRIPT();
				break;
		}
		WAIT(false);
	}
	if (IS_OBJECT_VALID(Var17.f_16))
	{
		DESTROY_OBJECT(Var17.f_16);
	}
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	DECOR_SET_BOOL(Global_34573, "nbStopSong", true);
	DECOR_SET_FLOAT(Global_34573, "PlayerHorse_DeathTime", (GET_CURRENT_GAME_TIME() + 10000.0f));
	TASK_CLEAR(Global_34573);
	HUD_ENABLE(true);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0, bool bParam1) //Position: 0x349 / 841
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	vVar0 = { -54.253f, 116.244f, 1417.837f };
	if (bParam1)
	{
		vVar3 = { 565.824f, 88.579f, 1234.438f };
		fVar6 = 36.418f;
	}
	else
	{
		vVar3 = { 604.287f, 82.574f, 1357.304f };
		fVar6 = 113.736f;
	}
	TELEPORT_ACTOR_WITH_HEADING(bParam0, vVar3, fVar6, 1, 1, 1);
	TASK_GO_TO_COORD_NONSTOP(bParam0, &vVar0, 4, 3212836864);
	RELEASE_ACTOR(bParam0);
	CLEAR_ACTORS_HORSE(Global_34573);
	TASK_PRIORITY_SET(bParam0, 1);
	SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 1);
	return;
}

var Function_2(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x3D0 / 976
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_12(), 8, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "GreatPlains_DismountSceneSouth_z", 8, 1);
	}
	Function_3(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_3(int iParam0) //Position: 0x45E / 1118
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_11(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_10(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_9(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_8(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 4);
	Function_7(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 5);
	Function_6(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 6);
	Function_5(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 7);
	Function_4(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 0, 1, 4.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 2, 3, 1.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 4, 5, 1.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 6, 7, 2.5f, 3, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x50F / 1295
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 31.81922f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 691.3539f, 79.78265f, 1264.303f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.455154f, -1.451947f, -0.052576f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_5(int iParam0) //Position: 0x57D / 1405
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 35.87983f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 691.3539f, 79.78265f, 1264.303f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.455154f, -1.451947f, -0.052576f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_6(int iParam0) //Position: 0x5EB / 1515
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.19021f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 678.9417f, 79.80499f, 1355.026f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.024492f, 2.829252f, -0.181216f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_7(int iParam0) //Position: 0x659 / 1625
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.17745f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 678.9593f, 79.80393f, 1354.972f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.018486f, 2.826399f, -0.198012f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_8(int iParam0) //Position: 0x6C7 / 1735
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.17745f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 691.6909f, 79.72372f, 1361.07f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.015156f, -1.970828f, 0.085266f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_9(int iParam0) //Position: 0x735 / 1845
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.17745f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 691.6495f, 79.7244f, 1361.053f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.015156f, -1.970571f, 0.103266f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_10(int iParam0) //Position: 0x7A3 / 1955
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 686.2664f, 81.19514f, 1403.08f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.002919f, 0.059141f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_11(var uParam0) //Position: 0x80D / 2061
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 686.3102f, 80.19514f, 1403.827f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0.054564f, 0.059141f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

var Function_12() //Position: 0x877 / 2167
{
	int iVar0;
	
	return iVar0;
}

var Function_13(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x87F / 2175
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_12(), 8, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "GreatPlains_DismountScene_z", 8, 1);
	}
	Function_14(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_14(int iParam0) //Position: 0x908 / 2312
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_22(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_21(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_20(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_19(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 4);
	Function_18(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 5);
	Function_17(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 6);
	Function_16(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 7);
	Function_15(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 0, 1, 3.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 2, 3, 1.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 4, 5, 1.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 6, 7, 2.5f, 3, 0);
	return;
}

void Function_15(int iParam0) //Position: 0x9B9 / 2489
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 31.81922f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 691.3539f, 79.78265f, 1264.303f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.455154f, -1.451947f, -0.052576f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_16(int iParam0) //Position: 0xA27 / 2599
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 35.87983f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 691.3539f, 79.78265f, 1264.303f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.455154f, -1.451947f, -0.052576f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_17(int iParam0) //Position: 0xA95 / 2709
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.19021f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 678.9417f, 79.80499f, 1355.026f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.024492f, 2.829252f, -0.181216f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_18(int iParam0) //Position: 0xB03 / 2819
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.17745f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 678.9593f, 79.80393f, 1354.972f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.018486f, 2.826399f, -0.198012f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_19(int iParam0) //Position: 0xB71 / 2929
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.17745f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 691.6909f, 79.72372f, 1361.07f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.015156f, -1.970828f, 0.085266f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_20(int iParam0) //Position: 0xBDF / 3039
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.17745f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 691.6495f, 79.7244f, 1361.053f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.015156f, -1.970571f, 0.103266f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_21(int iParam0) //Position: 0xC4D / 3149
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 46.56985f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 681.5449f, 81.38006f, 1254.256f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.018056f, -2.640847f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_22(int iParam0) //Position: 0xCB0 / 3248
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 46.5747f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 680.8723f, 81.37363f, 1254.219f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.018056f, -2.685984f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

vector3 Function_23(bool bParam0) //Position: 0xD13 / 3347
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

float Function_24(int iParam0) //Position: 0xD24 / 3364
{
	if (Function_27(iParam0))
	{
		if (Function_25(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_25(int iParam0) //Position: 0xDEC / 3564
{
	return Function_26(*iParam0, 2);
}

int Function_26(var uParam0, int iParam1) //Position: 0xDF9 / 3577
{
	return (uParam0 && iParam1) == 0;
}

bool Function_27(int iParam0) //Position: 0xE06 / 3590
{
	return Function_26(*iParam0, 1);
}

void Function_28(int iParam0) //Position: 0xE13 / 3603
{
	Function_29(iParam0, 0.0f);
	return;
}

void Function_29(var uParam0, float fParam1) //Position: 0xE1F / 3615
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_31(uParam0, 1);
	Function_30(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_30(var uParam0, int iParam1) //Position: 0xE40 / 3648
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_31(var uParam0, int iParam1) //Position: 0xE53 / 3667
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_32(int iParam0) //Position: 0xE62 / 3682
{
	if (!Function_27(iParam0))
	{
		Function_29(iParam0, 0.0f);
	}
	return;
}

void Function_33(int iParam0) //Position: 0xE77 / 3703
{
	vector3 vVar0;
	var uVar3;
	vector3 vVar6;
	bool bVar9;
	
	vVar0 = { -1.0f, 0.0f, -5.0f };
	UNK_0xB89CC342(Global_34573, &vVar0, &uVar3);
	Function_34(&uVar3, iParam0);
	TASK_OVERRIDE_CLEAR_MOVETYPE(Global_34573);
	AI_SET_NAV_PATHFINDING_ENABLED(Global_34573, 0);
	vVar6 = { 738.652f, 79.567f, 1285.017f };
	bVar9 = TASK_SEQUENCE_OPEN();
	TASK_DISMOUNT(false, 1);
	TASK_FACE_COORD(false, &vVar6, 1);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(Global_34573, bVar9);
	TASK_SEQUENCE_RELEASE(bVar9, 1);
	return;
}

int Function_34(int iParam0, int iParam1) //Position: 0xEDD / 3805
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_35(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0.01f);
	iParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_35(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_35(vector3 vParam0) //Position: 0xF48 / 3912
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

float Function_36(bool bParam0, bool bParam1) //Position: 0xF60 / 3936
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

