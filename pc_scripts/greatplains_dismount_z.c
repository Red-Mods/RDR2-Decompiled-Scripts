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
	bool bVar0;
	int iVar1;
	int iVar3;
	var uVar5;
	var uVar6;
	bool bVar10;
	bool bVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	bVar0 = false;
	uVar5 = GET_MOUNT(&Global_54076);
	if (!IS_ACTOR_VALID(&uVar5))
	{
		uVar5 = GET_MOST_RECENT_MOUNT(&Global_54076);
	}
	iVar14 = 1000;
	while (!IS_EXITFLAG_SET())
	{
		switch (bVar0)
		{
			case 0x00000000:
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				UI_PUSH("nCutscenes");
				if (IS_ACTOR_RIDING(&Global_54076))
				{
					if (Function_36(&Global_54076, 0) < 10.0f)
					{
						SET_ACTION_NODE_FOR_ACTOR(&uVar5, "horse_Main/Melee/RearUp/scripted/canned_rear_up");
					}
					else
					{
						TASK_OVERRIDE_SET_MOVETYPE(&Global_54076, 5);
					}
				}
				if (IS_ACTOR_VALID(&uVar5))
				{
					RESET_ACTOR_GAITS(&uVar5, 1);
					TASK_STAND_STILL(&uVar5, -1.0f, 0, 0);
				}
				bVar0 = 6;
				break;
			
			case 0x00000006:
				if (Function_36(&Global_54076, 0) > 2.0f)
				{
					if (IS_ACTOR_RIDING(&Global_54076))
					{
						Function_33(&uVar6);
						bVar13 = true;
					}
					Function_32(&iVar1);
					Function_32(&iVar3);
					bVar0 = 7;
				}
				break;
			
			case 0x00000007:
				if (!GET_TASK_SEQUENCE_CURRENT_TASK_INDEX(&Global_54076, 4294967295) < 0)
				{
					Function_28(&iVar1);
				}
				if (Function_24(&iVar1) < 0,15f || !bVar13)
				{
					Function_23(&Global_54076);
					Function_23(&Global_54076);
					if (StackVal > VDIST(VDIST(StackVal, Function_23(&Global_54076), Vector(565,824f, 88,579f, 1234,438f)), Function_23(&Global_54076), Vector(604,287f, 82,574f, 1357,304f)))
					{
						(&iVar14 + 24) = Function_13(FIND_NAMED_LAYOUT("Blackwater_layout"), 0, 1, 0, 0);
						iVar12 = 1;
					}
					else
					{
						*(&iVar14 + 24) = Function_2(FIND_NAMED_LAYOUT("Blackwater_layout"), 0, 1, 0, 0);
						iVar12 = 0;
					}
					if (!IS_WEAPON_DRAWN(&Global_54076))
					{
						ACTOR_DRAW_ANY_WEAPON(&Global_54076, 1);
					}
					Function_28(&iVar1);
					bVar0 = 8;
				}
				break;
			
			case 0x00000008:
				if (((!IS_ACTOR_RIDING(&Global_54076) && Function_24(&iVar1) < 5.0f) && !bVar10) && IS_ACTOR_VALID(&uVar5))
				{
					Function_1(&uVar5, 1);
					bVar10 = true;
				}
				if (!bVar11 && Function_24(&iVar1) < 7,25f)
				{
					TASK_CLEAR(&Global_54076);
					SIMULATE_PLAYER_INPUT_GAIT(0, 1, 2.0f, 1);
					bVar11 = true;
				}
				if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && !IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&iVar14 + 24), 0))
				{
					UI_POP("nCutscenes");
					Function_28(&iVar1);
					bVar0 = 106;
				}
				break;
			
			case 0x0000006A:
				if (IS_OBJECT_VALID(&iVar14 + 24))
				{
					DESTROY_OBJECT(&iVar14 + 24);
				}
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 360, 0, 1, 1, 4, 4294967295, 4294967295, 0, 1);
				DECOR_SET_FLOAT(&Global_54076, "PlayerHorse_DeathTime", (GET_CURRENT_GAME_TIME() + 10000.0f));
				DECOR_SET_BOOL(&Global_54076, "nbStopSong", 1);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				TERMINATE_THIS_SCRIPT();
				break;
		}
		WAIT(false);
	}
	if (IS_OBJECT_VALID(&iVar14 + 24))
	{
		DESTROY_OBJECT(&iVar14 + 24);
	}
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	DECOR_SET_BOOL(&Global_54076, "nbStopSong", 1);
	DECOR_SET_FLOAT(&Global_54076, "PlayerHorse_DeathTime", (GET_CURRENT_GAME_TIME() + 10000.0f));
	TASK_CLEAR(&Global_54076);
	HUD_ENABLE(1);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(float fParam0, bool bParam1) //Position: 0x36F / 879
{
	var uVar0;
	struct<2> Var2;
	bool bVar4;
	
	uVar0 = Vector(-54,253f, 116,244f, 1417,837f);
	if (&bParam1)
	{
		Var2 = Vector(565,824f, 88,579f, 1234,438f);
		bVar4 = 36,418f;
	}
	else
	{
		Var2 = Vector(604,287f, 82,574f, 1357,304f);
		bVar4 = 113,736f;
	}
	TELEPORT_ACTOR_WITH_HEADING(&fParam0, Var2, bVar4, 1, 1, 1);
	TASK_GO_TO_COORD_NONSTOP(&fParam0, &uVar0, 4, 3212836864);
	RELEASE_ACTOR(&fParam0);
	CLEAR_ACTORS_HORSE(&Global_54076);
	TASK_PRIORITY_SET(&fParam0, true);
	SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&fParam0, 1);
	return;
}

var Function_2(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x3FD / 1021
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_12(), 8, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "GreatPlains_DismountSceneSouth_z", 8, 1);
	}
	Function_3(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_3(int iParam0) //Position: 0x499 / 1177
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_11(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_10(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_9(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 3);
	Function_8(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 4);
	Function_7(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 5);
	Function_6(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 6);
	Function_5(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 7);
	Function_4(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 0, 1, 4.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 2, 3, 1.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 4, 5, 1.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 6, 7, 2,5f, 3, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x55F / 1375
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 31,81922f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(691,3539f, 79,78265f, 1264,303f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,455154f, -1,451947f, -0,052576f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_5(int iParam0) //Position: 0x5D8 / 1496
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,87983f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(691,3539f, 79,78265f, 1264,303f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,455154f, -1,451947f, -0,052576f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_6(int iParam0) //Position: 0x651 / 1617
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 37,19021f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(678,9417f, 79,80499f, 1355,026f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,024492f, 2,829252f, -0,181216f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_7(int iParam0) //Position: 0x6CA / 1738
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 37,17745f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(678,9593f, 79,80393f, 1354,972f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,018486f, 2,826399f, -0,198012f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_8(int iParam0) //Position: 0x743 / 1859
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 37,17745f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(691,6909f, 79,72372f, 1361,07f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,015156f, -1,970828f, 0,085266f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_9(int iParam0) //Position: 0x7BC / 1980
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 37,17745f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(691,6495f, 79,7244f, 1361,053f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,015156f, -1,970571f, 0,103266f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_10(int iParam0) //Position: 0x835 / 2101
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(686,2664f, 81,19514f, 1403,08f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,002919f, 0,059141f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_11(var uParam0) //Position: 0x8AA / 2218
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(686,3102f, 80,19514f, 1403,827f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(0,054564f, 0,059141f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

var Function_12() //Position: 0x91F / 2335
{
	int iVar0;
	
	return &iVar0;
}

var Function_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x928 / 2344
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_12(), 8, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "GreatPlains_DismountScene_z", 8, 1);
	}
	Function_14(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_14(int iParam0) //Position: 0x9BF / 2495
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_22(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_21(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_20(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 3);
	Function_19(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 4);
	Function_18(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 5);
	Function_17(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 6);
	Function_16(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 7);
	Function_15(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 0, 1, 3.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 2, 3, 1.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 4, 5, 1.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 6, 7, 2,5f, 3, 0);
	return;
}

void Function_15(int iParam0) //Position: 0xA85 / 2693
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 31,81922f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(691,3539f, 79,78265f, 1264,303f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,455154f, -1,451947f, -0,052576f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_16(int iParam0) //Position: 0xAFE / 2814
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,87983f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(691,3539f, 79,78265f, 1264,303f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,455154f, -1,451947f, -0,052576f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_17(int iParam0) //Position: 0xB77 / 2935
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 37,19021f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(678,9417f, 79,80499f, 1355,026f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,024492f, 2,829252f, -0,181216f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_18(int iParam0) //Position: 0xBF0 / 3056
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 37,17745f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(678,9593f, 79,80393f, 1354,972f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,018486f, 2,826399f, -0,198012f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_19(int iParam0) //Position: 0xC69 / 3177
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 37,17745f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(691,6909f, 79,72372f, 1361,07f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,015156f, -1,970828f, 0,085266f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_20(int iParam0) //Position: 0xCE2 / 3298
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 37,17745f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(691,6495f, 79,7244f, 1361,053f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,015156f, -1,970571f, 0,103266f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_21(int iParam0) //Position: 0xD5B / 3419
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 46,56985f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(681,5449f, 81,38006f, 1254,256f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,018056f, -2,640847f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_22(int iParam0) //Position: 0xDC8 / 3528
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 46,5747f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(680,8723f, 81,37363f, 1254,219f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,018056f, -2,685984f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

struct<8> Function_23(int iParam0) //Position: 0xE35 / 3637
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

float Function_24(vector3 vParam0) //Position: 0xE47 / 3655
{
	if (Function_27(&vParam0))
	{
		if (Function_25(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_25(int iParam0) //Position: 0xF14 / 3860
{
	return Function_26(iParam0, 2);
}

int Function_26(var uParam0, int iParam1) //Position: 0xF22 / 3874
{
	return (uParam0 && iParam1) == 0;
}

bool Function_27(int iParam0) //Position: 0xF2F / 3887
{
	return Function_26(iParam0, 1);
}

void Function_28(int iParam0) //Position: 0xF3D / 3901
{
	Function_29(&iParam0, 0.0f);
	return;
}

void Function_29(vector3 vParam0) //Position: 0xF4A / 3914
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_31(&vParam0, 1);
	Function_30(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_30(var uParam0, int iParam1) //Position: 0xF6F / 3951
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_31(var uParam0, int iParam1) //Position: 0xF85 / 3973
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_32(int iParam0) //Position: 0xF96 / 3990
{
	if (!Function_27(&iParam0))
	{
		Function_29(&iParam0, 0.0f);
	}
	return;
}

void Function_33(int iParam0) //Position: 0xFAD / 4013
{
	var uVar0;
	var uVar2;
	var uVar4;
	bool bVar6;
	
	uVar0 = Vector(-1.0f, 0.0f, -5.0f);
	UNK_0xB89CC342(&Global_54076, &uVar0, &uVar2);
	Function_34(&uVar2, &iParam0);
	TASK_OVERRIDE_CLEAR_MOVETYPE(&Global_54076);
	AI_SET_NAV_PATHFINDING_ENABLED(&Global_54076, 0);
	uVar4 = Vector(738,652f, 79,567f, 1285,017f);
	bVar6 = TASK_SEQUENCE_OPEN();
	TASK_DISMOUNT(0, 1);
	TASK_FACE_COORD(0, &uVar4, 1);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&Global_54076, bVar6);
	TASK_SEQUENCE_RELEASE(bVar6, 1);
	return;
}

int Function_34(vector3 vParam0) //Position: 0x1018 / 4120
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_35(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_35(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_35(vector3 vParam0) //Position: 0x108E / 4238
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

float Function_36(var uParam0, bool bParam1) //Position: 0x10A6 / 4262
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

