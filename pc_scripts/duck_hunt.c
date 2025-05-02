//Decompiled with MagicRDR v1.0
//Function Count : 117
//Statics Count : 143
//Natives Count : 271
//Parameters Count : 2

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 3;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	struct<9> Local_20[6];
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
	int iLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	int iLocal_136 = 0;
	var uLocal_137 = 0;
	bool bLocal_138 = false;
	int iLocal_139 = 0;
	var uLocal_140 = 0;
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
	
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_116("STARTS");
	Function_115(&uScriptParam_0);
	iLocal_130 = 0;
	Function_113(&uScriptParam_0, &iLocal_130);
	while (IS_GRINGO_ACTIVE())
	{
		Function_112(&uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		uVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(&uVar1))
		{
			GET_OBJECT_POSITION(&uVar1, &uLocal_131);
		}
		iVar2 = 0;
		bLocal_138 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_130 - 1))
			{
				if (&vLocal_20[iVar09] + 16 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_130;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				iVar5 = 0;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_138 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_106(&(vLocal_20[iVar39]), &bVar4))
						{
							Function_104(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_20[iVar39] + 16);
							iVar5 = 1;
						}
						break;
					
					case 0x00000001:
						if (Function_106(&(vLocal_20[iVar39]), &bVar4))
						{
							Function_104(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_20[iVar39] + 16);
							if (bVar4)
							{
								Function_100(&(vLocal_20[iVar39]));
							}
							iVar5 = 1;
						}
						break;
					
					case 0x00000002:
						if (&vLocal_20[iVar39] + 24 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_99("eGRINGO_EndUse: Stop use by request", &vLocal_20[iVar39] + 24);
							Function_98(&vLocal_20[iVar39] + 24, 1);
							if (IS_ACTOR_VALID(&vLocal_20[iVar39] + 24))
							{
								if (IS_ACTOR_LOCAL_PLAYER(&vLocal_20[iVar39] + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&vLocal_20[iVar39] + 16))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(&vLocal_20[iVar39] + 24, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_91(&(vLocal_20[iVar39]), 0);
							}
							else if (vLocal_20[iVar39].f_68 < 8)
							{
								Function_90(&(vLocal_20[iVar39]));
								vLocal_20[iVar39].f_68 = 8;
							}
							iVar5 = 1;
						}
						else
						{
							Function_116("Stop use request actor mismatch!!");
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
			while (iVar0 < (iLocal_130 - 1))
			{
				if (Function_89(vLocal_20[iVar09].f_64, 2))
				{
					if (!Function_31(&(vLocal_20[iVar09])))
					{
						Function_116("Quitting due to update end");
						Function_91(&(vLocal_20[iVar09]), 1);
					}
				}
				if (Function_30(&(vLocal_20[iVar09]), 0))
				{
					Function_20(&(vLocal_20[iVar09]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_130 - 1))
		{
			if (Function_89(vLocal_20[iVar09].f_64, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_8(&uScriptParam_0))
		{
			if (bLocal_138)
			{
				GRINGO_WAIT(0);
			}
			else if (GET_DEBUG_DRAW_STATE())
			{
				GRINGO_WAIT(0);
			}
			else
			{
				GRINGO_WAIT(Function_7());
			}
		}
		else
		{
			GRINGO_STOP();
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_139))
	{
		Function_116("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(&iLocal_139);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_130 - 1))
	{
		if (Function_89(vLocal_20[iVar09].f_64, 2))
		{
			Function_6("Gringo termination calls StopUse", &vLocal_20[iVar09] + 24);
			Function_91(&(vLocal_20[iVar09]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(&vLocal_20[iVar09] + 16))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &vLocal_20[iVar09] + 16);
		}
		Function_30(&(vLocal_20[iVar09]), 1);
		iVar0++;
	}
	Function_1(&uScriptParam_0);
	Function_116("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x436 / 1078
{
	iParam0 = &iParam0;
	if (IS_LAYOUTREF_VALID(&uLocal_0))
	{
		RELEASE_LAYOUT_REF(&uLocal_0);
		Function_2(&uLocal_4);
		if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "StreamDucks"))
		{
			DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "StreamDucks");
		}
	}
	return;
}

void Function_2(int iParam0) //Position: 0x482 / 1154
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_3(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(struct<2>[] Param0, int iParam1) //Position: 0x4AA / 1194
{
	if (Function_5(&(Param0[iParam12]), 4))
	{
		if (Function_5(&(Param0[iParam12]), 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP(&(Param0[iParam12]));
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET(&(Param0[iParam12]));
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR(&(Param0[iParam12]), 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO(&(Param0[iParam12]));
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT(&(Param0[iParam12]));
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iParam12]), 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY(&(Param0[iParam12]));
					break;
				
				default:
					break;
			}
			Function_4(&(Param0[iParam12]), 1);
			Function_4(&(Param0[iParam12]), 2);
			Function_4(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_4(struct<13> Param0) //Position: 0x5F5 / 1525
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_5(struct<13> Param0) //Position: 0x612 / 1554
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(int iParam0, char* cParam1) //Position: 0x630 / 1584
{
	var uVar0;
	
	uVar0 = "InvalidActor";
	if (IS_OBJECT_VALID(&cParam1))
	{
		uVar0 = GET_OBJECT_NAME(&cParam1);
	}
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), &cParam1, GET_TARGET_OBJECT(), &uVar0, ": ", &iParam0, 0);
	return;
}

int Function_7() //Position: 0x672 / 1650
{
	return 2000;
}

int Function_8(int iParam0) //Position: 0x67B / 1659
{
	struct<8> Var0;
	struct<2> Var8;
	struct<9> Var10;
	
	iParam0 = &iParam0;
	if (!DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "StreamDucks"))
	{
		DECOR_SET_BOOL(GRINGO_GET_MY_OBJECT_REF(), "StreamDucks", 1);
		Function_19(&uLocal_4, 1140, 3, 0);
		Function_19(&uLocal_4, 1141, 3, 0);
		Function_19(&uLocal_4, 1140, 3, 0);
	}
	else if (!DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "SpawnedDucks"))
	{
		if (Function_13(&uLocal_4))
		{
			DECOR_SET_BOOL(GRINGO_GET_MY_OBJECT_REF(), "SpawnedDucks", 1);
			Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_11("duckHuntLayout_") };
			uLocal_0 = CREATE_LAYOUT(&Var0);
			Function_10(GRINGO_GET_MY_OBJECT_REF());
			Var8 = Function_10(GRINGO_GET_MY_OBJECT_REF());
			Var8.f_4 = (StackVal + 10.0f);
			uLocal_2 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_0, Function_9(), 4,203895E-45f, Var8, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 20.0f, 25.0f));
			vVar10 = Vector(0.0f, 0.0f, 0.0f);
			GET_VOLUME_SCALE(&uLocal_2, &vVar10);
			fVar12 = ((vVar10.x + vVar10.z) / 2.0f);
			iVar13 = ROUND((vVar10.x + IntToFloat(RAND_INT_RANGE(1, 3))));
			vVar14 = Vector(0.0f, 0.0f, 0.0f);
			GET_VOLUME_CENTER(&uLocal_2, &vVar14);
			iVar16 = RAND_INT_RANGE(5, 8);
			iVar17 = 0;
			while (iVar17 < iVar16)
			{
				uVar18 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uLocal_0, Function_9(), RAND_INT_RANGE(1140, 1140), Vector(RAND_FLOAT_RANGE((vVar14.x - fVar12), (vVar14.x + fVar12)), RAND_FLOAT_RANGE((vVar14.y - 5.0f), (vVar14.y + 5.0f)), RAND_FLOAT_RANGE((vVar14.z - fVar12), (vVar14.z + fVar12))), Vector(0.0f, RAND_FLOAT_RANGE(0.0f, 359,9f), 0.0f));
				TASK_PRIORITY_SET(&uVar18, true);
				TASK_BIRD_SOAR_AT_COORD(&uVar18, &vVar14, -1.0f, 1106247680);
				iVar17++;
			}
		}
	}
	return 0;
}

var Function_9() //Position: 0x826 / 2086
{
	int iVar0;
	
	return &iVar0;
}

struct<8> Function_10(int iParam0) //Position: 0x82F / 2095
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

struct<32> Function_11(char* cParam0) //Position: 0x858 / 2136
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_12("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_12(char* cParam0) //Position: 0x8C4 / 2244
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_13(struct<2>[] Param0) //Position: 0x8E6 / 2278
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_18();
	iVar1 = 0;
	if (!Function_5(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_17(&(Param0[iVar02]), 8);
		}
		else if (Function_16())
		{
			iVar1 = 1;
			Function_17(&(Param0[iVar02]), 8);
		}
		Function_17(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_5(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_5(&(Param0[02]), 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iVar02])), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO(&(Param0[iVar02]));
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT(&(Param0[iVar02]));
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iVar02]), 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY(&(Param0[iVar02]));
						break;
					
					default:
						break;
				}
				Function_17(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_17(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_17(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED(&(Param0[iVar02]), 4294967295))
						{
							Function_17(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_17(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_17(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_17(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_17(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_17(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_17(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_17(&(Param0[iVar02]), 2);
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
	Function_14();
	return 1;
}

void Function_14() //Position: 0xCA8 / 3240
{
	if (!Function_15(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_15(int iParam0) //Position: 0xCE8 / 3304
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_16() //Position: 0xD04 / 3332
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == &Global_99725[iVar043] + 296)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_17(struct<13> Param0) //Position: 0xD32 / 3378
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_18() //Position: 0xD45 / 3397
{
	if (!Function_15(128))
	{
		return;
	}
	if (Global_21646.f_132 == 0)
	{
		strcpy(&Global_21646, "nStreaming", 64);
		Global_21646.f_132 = 1;
		Global_21646.f_128 = GET_CURRENT_GAME_TIME();
		Global_21646.f_136 = Global_21610.f_128;
	}
	return;
}

var Function_19(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0xD87 / 3463
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_17(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_17(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (iParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_20(struct<69> Param0) //Position: 0xE63 / 3683
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_89(Param0.f_64, 2))
	{
		Function_98(&Param0 + 24, 0);
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
								bLocal_138 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_139))
								{
									Function_116("ManagePlayerQuit: Create quit context");
									if (Function_22(&Param0 + 16, "UseQuitBOverride", 0))
									{
										iLocal_139 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@UI.CANCEL", 0, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										iLocal_139 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(&iLocal_139))
								{
									Function_6("USE CONTEXT QUIT", &Param0 + 24);
									Function_90(&Param0);
									Param0.f_68 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_139))
									{
										Function_116("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(&iLocal_139);
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
										Function_90(&Param0);
										Function_6("STICK QUIT", &Param0 + 24);
										Param0.f_68 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_139))
										{
											Function_116("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(&iLocal_139);
										}
									}
								}
							}
						}
						else if (Global_6663)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_139))
							{
								Function_116("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(&iLocal_139);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_139))
		{
			Function_116("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(&iLocal_139);
		}
	}
	return;
}

bool Function_21(int iParam0) //Position: 0x1197 / 4503
{
	float fVar0;
	struct<2> Var1;
	bool bVar3;
	float fVar4;
	
	fVar0 = GET_CURRENT_GAME_TIME();
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
			DECOR_SET_FLOAT(&iParam0, "DisconnectTime", fVar0);
		}
		else if ((fVar0 - fVar4) < 0,15f)
		{
			DECOR_REMOVE(&iParam0, "StickReset");
			DECOR_REMOVE(&iParam0, "DisconnectTime");
			return 1;
		}
	}
	DECOR_REMOVE(&iParam0, "DisconnectTime");
	return 0;
}

bool Function_22(bool bParam0, var uParam1, int iParam2) //Position: 0x12B0 / 4784
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

bool Function_23(int iParam0, int iParam1) //Position: 0x12CE / 4814
{
	return Function_24(&iParam0, "UseQuit", &iParam1);
}

bool Function_24(int iParam0, int iParam1, int iParam2) //Position: 0x12E7 / 4839
{
	int iVar0;
	int iVar1;
	
	iVar1 = GET_GRINGO_STRING_ATTR(&iParam1, &iParam0, &iVar0);
	iParam2 = iVar0 < 0;
	if (iParam2)
	{
		if (STRING_LENGTH(&iVar1) != 0 || STRINGS_ARE_EQUAL(&iVar1, "NoString"))
		{
			iParam2 = 0;
			return &iLocal_18;
		}
		return &iVar1;
	}
	return &iLocal_18;
}

float Function_25(int iParam0) //Position: 0x1337 / 4919
{
	return Function_26(&iParam0, "MinimumUseTime", 0.0f);
}

int Function_26(float fParam0, var uParam1, int iParam2) //Position: 0x1355 / 4949
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, &uParam1, &fParam0);
	return iVar0;
}

float Function_27(vector3 vParam0) //Position: 0x136D / 4973
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

bool Function_28(int iParam0) //Position: 0x143A / 5178
{
	return Function_89(iParam0, 2);
}

bool Function_29(int iParam0) //Position: 0x1448 / 5192
{
	return Function_89(iParam0, 1);
}

bool Function_30(int iParam0, int iParam1) //Position: 0x1456 / 5206
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

bool Function_31(struct<69> Param0) //Position: 0x14A3 / 5283
{
	int iVar0;
	int iVar1;
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
	var uVar25;
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
	
	bVar11 = Function_88(&Param0 + 16);
	if (!(IS_ACTOR_VALID(&Param0 + 24) && IS_ACTOR_ALIVE(&Param0 + 24)))
	{
		Function_99("UpdateUse with invalid actor", &Param0 + 24);
		return 0;
	}
	if (!Function_22(&Param0 + 16, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Param0 + 24)) >= 0,5f)
		{
			Function_99("Damage quit", &Param0 + 24);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(&Param0 + 24))
	{
		Function_99("Incapacitation quit", &Param0 + 24);
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
			bLocal_138 = true;
			if (IS_ACTOR_PLAYER(&Param0 + 24))
			{
				if (Function_87(&Param0 + 16, &fVar22))
				{
					GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &Var23);
					Var23.f_4 = (StackVal + (fVar22 + 0,1f));
					if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
					{
						uVar25 = IS_AREA_OBSTRUCTED2(Var23, fVar22, GET_PHYSINST_FROM_ACTOR(&Param0 + 24), GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT()), 0);
					}
					else
					{
						uVar25 = IS_AREA_OBSTRUCTED(Var23, fVar22, &Param0 + 24, 0);
					}
					if (IS_ACTOR_ON_TRAIN(&Param0 + 24, 0) || uVar25)
					{
						DECOR_SET_BOOL(GRINGO_GET_MY_OBJECT_REF(), "Obstructed", 1);
						Param0.f_68 = 7;
						Function_6("Skip to eRewarding", &Param0 + 24);
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
			{
				if (Function_82(&Param0 + 24, &Param0 + 16))
				{
					Function_6("Navigation complete (going to eStarting)", &Param0 + 24);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
					Param0.f_68 = 1;
					Function_81(&Param0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Param0.f_68 = 1;
				Function_81(&Param0);
			}
			if (!Function_80(&Param0 + 16) && Param0.f_68 != 1)
			{
				Function_6("SET_ACTOR_POSTURE", &Param0 + 24);
				SET_ACTOR_POSTURE(&Param0 + 24, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_138 = true;
			Function_79(&Param0 + 16);
			if (((!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24)) && !Function_89(Param0.f_64, 1)) && !DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
			{
				Function_76(&Param0 + 16);
			}
			fVar18 = Function_75(&Param0 + 16);
			if (Function_27(&Param0) < fVar18)
			{
				Function_6("INTRO TIMED OUT - ABORTING", &Param0 + 24);
				return 0;
			}
			if (Function_89(Param0.f_64, 1))
			{
				Function_70(&Param0 + 16, &Var3, &uVar5);
				if (!Function_89(Param0.f_64, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
					{
						Function_6("SUSPEND MOVER", &Param0 + 24);
						SUSPEND_MOVER(&Param0 + 24);
						Function_69(&Param0 + 64, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
					{
						Function_6("nFIX MOVER", &Param0 + 24);
						SET_MOVER_FROZEN(&Param0 + 24, 1);
						Function_69(&Param0 + 64, 16);
					}
				}
				Function_6("MID ACTION TELEPORT", &Param0 + 24);
				Var26.f_4 = uVar5;
				if (DECOR_CHECK_EXIST(&Param0 + 24, "NoTeleport"))
				{
					SET_OBJECT_POSITION(&Param0 + 24, Var3);
					SET_OBJECT_ORIENTATION(&Param0 + 24, Var26);
					DECOR_REMOVE(&Param0 + 24, "NoTeleport");
				}
				else
				{
					TELEPORT_ACTOR_WITH_HEADING(&Param0 + 24, Var3, uVar5, 1, 1, Function_68());
				}
				if (!Function_89(Param0.f_64, 1024))
				{
					Function_69(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_22(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			else if (Function_82(&Param0 + 24, &Param0 + 16))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Function_6("FINISHED NAVIGATION", &Param0 + 24);
				if (!Function_89(Param0.f_64, 1024))
				{
					Function_69(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_22(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			if (Param0.f_68 != 3 && !Function_89(Param0.f_64, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
				{
					Function_6("SUSPEND MOVER", &Param0 + 24);
					SUSPEND_MOVER(&Param0 + 24);
					Function_69(&Param0 + 64, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
				{
					Function_6("nFIX MOVER", &Param0 + 24);
					SET_MOVER_FROZEN(&Param0 + 24, 1);
					Function_69(&Param0 + 64, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_89(Param0.f_64, 32))
			{
				bLocal_138 = true;
				if (!ACTOR_IS_HOLSTERED(&Param0 + 24))
				{
					break;
				}
				Function_6("FINISHED HOLSTERING", &Param0 + 24);
			}
			Param0.f_68 = 4;
		
		case 0x00000004:
			Function_67(&Param0 + 16);
			bLocal_138 = true;
			Function_66(&Param0);
			Function_63(&Param0, Function_65(&Param0 + 16));
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 0);
			}
			bVar29 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", &Param0 + 16, &iVar28);
			if (iVar28 == 0)
			{
				bVar29 = Function_89(Param0.f_64, 1);
			}
			iVar0 = Function_62(&Param0 + 24, &Param0 + 16, bVar29);
			if (!IS_GRINGO_COMPONENT_VALID(&iVar0))
			{
				Param0.f_68 = 5;
				if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
				{
					GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 1);
				}
			}
			else if (bVar11)
			{
				if (GRINGO_PLAY_ANIM_ON_ACTOR(&Param0 + 24, &iVar0, bVar29))
				{
					if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
					{
						GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 1);
					}
					Param0.f_68 = 5;
					iVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, 0);
					while (iVar10 >= 4294967295)
					{
						iVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar10, &Param0 + 16);
						if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &iVar1, Function_24(&iVar1, "AttachBone", &bVar9), Function_24(&iVar1, "AttachLocator", &bVar9), 1))
						{
							Function_61(&iVar1, &Param0 + 24);
							if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
							{
								uVar30 = GRINGO_GET_PROP_FROM_COMPONENT(&iVar1);
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
										iVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar10, GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 0));
										if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &iVar1, Function_24(&iVar1, "AttachBone", &bVar9), Function_24(&iVar1, "AttachLocator", &bVar9), 1))
										{
											if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
											{
												uVar31 = GRINGO_GET_PROP_FROM_COMPONENT(&iVar1);
												if (IS_PHYSINST_VALID(&uVar31))
												{
													ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), &uVar31, 0);
												}
											}
											Function_61(&iVar1, &Param0 + 24);
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
				Function_6("KICKED TO DOING START", &Param0 + 24);
				uVar7 = GET_TARGET_OBJECT();
				if (IS_OBJECT_VALID(&uVar7))
				{
					Function_53(&Param0, &uVar7, &iLocal_136, &uLocal_134);
					if (GET_OBJECT_TYPE(&uVar7) != 15)
					{
						uVar20 = GET_PHYSINST_FROM_OBJECT(&uVar7);
						if (IS_PHYSINST_VALID(&uVar20))
						{
							if (!IS_PROP_FIXED(&uVar20))
							{
								Function_69(&Param0 + 64, 256);
								SET_PROP_FIXED(&uVar20, 1);
							}
							else
							{
								Function_52(&Param0 + 64, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Param0 + 32);
				if (Function_89(Param0.f_64, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
					{
						Function_6("SCHEDULE STOP CUSTOM UNSUSPEND", &Param0 + 24);
						UNK_0x4A1D2E25(&Param0 + 24);
					}
					if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
					{
						Function_6("SCHEDULE STOP CUSTOM UNFIX", &Param0 + 24);
						UNK_0x817B6952(&Param0 + 24);
					}
				}
				GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 1);
				if (Function_51(&Param0 + 16))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(&iVar0))
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
						Function_69(&Param0 + 64, 8);
					}
					else
					{
						Function_52(&Param0 + 64, 8);
					}
					if (Function_89(Param0.f_64, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, 1);
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
			if (Function_89(Param0.f_64, 1))
			{
				if (Function_42(&Param0 + 16))
				{
					Function_6("MID ACTION NODE", &Param0 + 24);
				}
			}
		
		case 0x00000006:
			if (!Function_41(&Param0 + 24, &Param0 + 16))
			{
				Function_6("CUSTOM QUIT DURING USE", &Param0 + 24);
				Param0.f_68 = 8;
			}
			iVar0 = Function_62(&Param0 + 24, &Param0 + 16, Function_89(Param0.f_64, 1));
			if (IS_GRINGO_COMPONENT_VALID(&iVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(&Param0 + 24, &iVar0))
				{
					Function_6("ANIMATION QUIT DURING USE", &Param0 + 24);
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
				bVar55 = Function_40(&Param0 + 16);
				if (bVar55 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Var53);
					if (VDIST(Var53, *(&Param0 + 32)) < bVar55)
					{
						Function_6("UPDATE USE TOO FAR", &Param0 + 24);
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
							Function_6("UPDATE USE USETIME SATISFIED", &Param0 + 24);
							Param0.f_68 = 7;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_116("nRewarding");
			Function_37(&Param0 + 24, &Param0 + 16);
			Function_36(&Param0 + 24, &Param0 + 16);
			Function_35(&Param0 + 24, &Param0 + 16);
			SET_GRINGO_OBJECT_REF_ATTR(&Param0 + 24, "LastUserObject", &Param0 + 16);
			Function_69(&Param0 + 64, 64);
			Param0.f_68 = 8;
			break;
		
		case 0x00000008:
			bLocal_138 = true;
			if (!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				if (!DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
				{
					if (!Function_22(&Param0 + 16, "GringoCamNoEndCut", 0))
					{
						if (!Function_34())
						{
							Function_76(&Param0 + 16);
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
				Function_6("Use case quits - no cleapup due to DoNotCleanUpUserSettings attribute", &Param0 + 24);
				return 0;
			}
			Function_6("GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS", &Param0 + 24);
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&Param0 + 24);
			Param0.f_68 = 9;
			Function_33(&Param0 + 24, &Param0 + 16);
			break;
		
		case 0x00000009:
			if (Function_89(Param0.f_64, 1024))
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
			bLocal_138 = true;
			iVar0 = Function_62(&Param0 + 24, &Param0 + 16, Function_89(Param0.f_64, 1));
			if (IS_GRINGO_COMPONENT_VALID(&iVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(&Param0 + 24, &iVar0))
				{
					Function_6("ANIMATION FINISHED", &Param0 + 24);
					return 0;
				}
			}
			return 0;
			break;
	}
	Function_32(&Param0 + 24, Param0.f_68);
	return 1;
}

void Function_32(var uParam0, int iParam1) //Position: 0x27D8 / 10200
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		REPORT_GRINGO_USE_PHASE(&uParam0, iParam1);
	}
	return;
}

void Function_33(var uParam0, var uParam1) //Position: 0x27EF / 10223
{
	uParam1 = &uParam1;
	uParam0 = &uParam0;
	return;
}

bool Function_34() //Position: 0x2801 / 10241
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

void Function_35(var uParam0, int iParam1) //Position: 0x2834 / 10292
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

void Function_36(var uParam0, int iParam1) //Position: 0x28B2 / 10418
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

void Function_37(int iParam0, int iParam1) //Position: 0x292E / 10542
{
	iParam1 = &iParam1;
	iParam0 = &iParam0;
	return;
}

float Function_38(int iParam0) //Position: 0x2940 / 10560
{
	return Function_26(&iParam0, "UseTime", 5.0f);
}

bool Function_39() //Position: 0x2957 / 10583
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

int Function_40(int iParam0) //Position: 0x2964 / 10596
{
	return Function_26(&iParam0, "MoveAllowance", 1,5f);
}

bool Function_41(int iParam0, var uParam1) //Position: 0x2985 / 10629
{
	uParam1 = &uParam1;
	iParam0 = &iParam0;
	return 1;
}

bool Function_42(bool bParam0) //Position: 0x2998 / 10648
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, &bParam0));
}

void Function_43() //Position: 0x29B8 / 10680
{
	return;
}

void Function_44(int iParam0, bool bParam1) //Position: 0x29BE / 10686
{
	bParam1 = &bParam1;
	iParam0 = &iParam0;
	return;
}

bool Function_45(int iParam0) //Position: 0x29D0 / 10704
{
	iParam0 = &iParam0;
	return 1;
}

bool Function_46(int iParam0) //Position: 0x29DD / 10717
{
	return Function_22(&iParam0, "OneShotKill", 0);
}

bool Function_47(int iParam0, int iParam1) //Position: 0x29F8 / 10744
{
	return Function_24(&iParam0, "ParentAnimNode", &iParam1);
}

bool Function_48(int iParam0) //Position: 0x2A18 / 10776
{
	return Function_22(&iParam0, "LinkToParentAnim", 0);
}

var Function_49(int iParam0) //Position: 0x2A38 / 10808
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (vLocal_20 - 1))
	{
		if (&vLocal_20[iVar09] + 16 == &iParam0)
		{
			return &vLocal_20[iVar09] + 24;
		}
		iVar0++;
	}
	return &iVar1;
}

bool Function_50(int iParam0) //Position: 0x2A6F / 10863
{
	return Function_22(&iParam0, "LinkParentToAnim", 0);
}

bool Function_51(int iParam0) //Position: 0x2A8F / 10895
{
	return Function_22(&iParam0, "SingularUse", 0);
}

void Function_52(var uParam0, int iParam1) //Position: 0x2AAA / 10922
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_53(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2AC0 / 10944
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

bool Function_54(int iParam0, int iParam1) //Position: 0x2DE4 / 11748
{
	return Function_24(&iParam0, "TargetLocator", &iParam1);
}

void Function_55() //Position: 0x2E03 / 11779
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_56(int iParam0, int iParam1) //Position: 0x2E12 / 11794
{
	return Function_24(&iParam0, "UserPhysAttachBone", &iParam1);
}

bool Function_57(int iParam0, int iParam1) //Position: 0x2E36 / 11830
{
	return Function_24(&iParam0, "TargetPhysAttachBone", &iParam1);
}

int Function_58(int iParam0) //Position: 0x2E5C / 11868
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, &iParam0);
}

bool Function_59(var uParam0, int iParam1) //Position: 0x2E7A / 11898
{
	return Function_24(&uParam0, "TargetAttachBone", &iParam1);
}

bool Function_60(var uParam0, int iParam1) //Position: 0x2E9C / 11932
{
	return Function_24(&uParam0, "TargetAttachSlot", &iParam1);
}

void Function_61(int iParam0, int iParam1) //Position: 0x2EBE / 11966
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	uVar0 = GRINGO_GET_FIRST_CHILD(2, &iParam0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		uVar2 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(&uVar0, &iParam1);
		uVar3 = GRINGO_ANIM_GET_ACT_FILENAME(&uVar0);
		uVar4 = GRINGO_ANIM_GET_ACT_ROOTNODE(&uVar0);
		uVar1 = GRINGO_GET_PHYSINST(&iParam0);
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
				LINK_OBJECT_ANIMATOR_TO_ACTOR(&iVar6, &iParam1, GRINGO_GET_PROP_ATTACH_SLOT(&iParam0));
			}
		}
	}
	return;
}

var Function_62(var uParam0, int iParam1, bool bParam2) //Position: 0x2F86 / 12166
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

void Function_63(int iParam0, float fParam1) //Position: 0x3002 / 12290
{
	if (!Function_29(&iParam0))
	{
		Function_64(&iParam0, fParam1);
	}
	return;
}

void Function_64(vector3 vParam0) //Position: 0x301A / 12314
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_69(&vParam0, 1);
	Function_52(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_65(int iParam0) //Position: 0x303F / 12351
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_26(&iParam0, "RandUseTime", 0.0f));
}

void Function_66(vector3 vParam0) //Position: 0x3060 / 12384
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_67(var uParam0) //Position: 0x3077 / 12407
{
	uParam0 = &uParam0;
	return;
}

int Function_68() //Position: 0x3083 / 12419
{
	return 1;
}

void Function_69(var uParam0, int iParam1) //Position: 0x308A / 12426
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_70(int iParam0, var uParam1, int iParam2) //Position: 0x309B / 12443
{
	float fVar0;
	
	Function_73(&iParam0);
	uParam1 = Function_73(&iParam0);
	iParam2 = Function_72(&iParam0);
	fVar0 = Function_71(&iParam0);
	if (fVar0 < 180.0f)
	{
		fVar0 = 180.0f;
	}
	iParam2 = (iParam2 + RAND_FLOAT_RANGE(-fVar0, fVar0));
	return;
}

int Function_71(int iParam0) //Position: 0x30E0 / 12512
{
	return Function_26(&iParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_72(int iParam0) //Position: 0x310C / 12556
{
	return GRINGO_GET_USE_COMPONENT_HEADING(&iParam0);
}

struct<8> Function_73(int iParam0) //Position: 0x3118 / 12568
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	
	if (Function_74(&iParam0))
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

bool Function_74(int iParam0) //Position: 0x321A / 12826
{
	return Function_22(&iParam0, "UsePosActorRelative", 0);
}

int Function_75(int iParam0) //Position: 0x323D / 12861
{
	return Function_26(&iParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_76(int iParam0) //Position: 0x3265 / 12901
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
				Function_78(StackVal, StackVal, Var2, Var11);
				Var2 = Function_78(StackVal, StackVal, Var2, Var11);
				Function_77(StackVal, StackVal, Var0, Var11);
				Var0 = Function_77(StackVal, StackVal, Var0, Var11);
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
	fVar17 = Function_26(&iParam0, "GringoCamHoldTime", -1.0f);
	if (IS_OBJECT_VALID(&uVar18))
	{
		fVar19 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uVar18, 0);
		uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, &fVar19, Function_9(), Var13, Vector(0.0f, 0.0f, 0.0f));
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
			ATTACH_OBJECTS(StackVal, &uVar20, GRINGO_GET_MY_OBJECT_REF(), Function_9(), Var28, Vector(0.0f, 0.0f, 0.0f), 4294967295);
		}
		PLAY_CUTSCENEOBJECT(&uVar18, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		Function_116("Failed to create gringo camera");
	}
	return;
}

struct<8> Function_77(vector3 vParam0) //Position: 0x354C / 13644
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

struct<8> Function_78(vector3 vParam0) //Position: 0x35A9 / 13737
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

void Function_79(int iParam0) //Position: 0x3606 / 13830
{
	iParam0 = &iParam0;
	return;
}

bool Function_80(int iParam0) //Position: 0x3612 / 13842
{
	return Function_22(&iParam0, "MaintainPosture", 0);
}

void Function_81(int iParam0) //Position: 0x3631 / 13873
{
	if (!Function_29(&iParam0))
	{
		Function_64(&iParam0, 0.0f);
	}
	return;
}

bool Function_82(var uParam0, int iParam1) //Position: 0x3648 / 13896
{
	struct<2> Var0;
	float fVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	Function_73(&iParam1);
	Var0 = Function_73(&iParam1);
	fVar2 = Function_72(&iParam1);
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
		return Function_86(&uParam0, &iParam1);
	}
	uVar3 = Function_85(&iParam1);
	uVar4 = Function_71(&iParam1);
	Function_83(&iParam1);
	iVar5 = Function_83(&iParam1);
	return GRINGO_ACTOR_MOVE_TO_AND_FACE_WITH_USER_OFFSET(&uParam0, &Var0, &iVar5, uVar3, 0,2f, 1, fVar2, uVar4, 0, 0);
}

struct<8> Function_83(int iParam0) //Position: 0x36D9 / 14041
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	Function_84(StackVal, &iParam0, "UserOffset", Var0);
	return StackVal, Function_84(StackVal, &iParam0, "UserOffset", Var0);
}

struct<8> Function_84(var uParam0, var uParam1, struct<2> Param2) //Position: 0x36FD / 14077
{
	struct<2> Var0;
	
	Var0 = Param2;
	GET_GRINGO_VECTOR_ATTR(&Var0, &uParam1, &uParam0);
	return StackVal, Var0;
}

int Function_85(int iParam0) //Position: 0x371C / 14108
{
	return Function_26(&iParam0, "UseLocationTolerance", 0.0f);
}

int Function_86(var uParam0, int iParam1) //Position: 0x3740 / 14144
{
	float fVar0;
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
	
	fVar0 = Function_85(&iParam1);
	fVar1 = Function_71(&iParam1);
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
	return GRINGO_ACTOR_MOVE_TO_AND_FACE(&uParam0, &uVar2, fVar0, 0,2f, 1, fVar4, fVar1, 1, 0);
}

bool Function_87(var uParam0, int iParam1) //Position: 0x3868 / 14440
{
	iParam1 = Function_26(&uParam0, "AreaClearCheck", -1.0f);
	if (iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_88(var uParam0) //Position: 0x3896 / 14486
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

bool Function_89(var uParam0, int iParam1) //Position: 0x39AF / 14767
{
	return (uParam0 && iParam1) == 0;
}

void Function_90(struct<69> Param0) //Position: 0x39BC / 14780
{
	if (Function_89(Param0.f_64, 16))
	{
		if (Param0.f_68 > 5 && Param0.f_68 < 1)
		{
			if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
			{
				Function_6("UNSUSPEND MOVER", &Param0 + 24);
				ENABLE_MOVER(&Param0 + 24);
			}
			if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
			{
				Function_6("UNFIX MOVER", &Param0 + 24);
				SET_MOVER_FROZEN(&Param0 + 24, 0);
			}
		}
	}
	return;
}

void Function_91(struct<69> Param0) //Position: 0x3A3E / 14910
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
		Function_6("<<<STOP USE [delay allowed]", &Param0 + 24);
	}
	else
	{
		Function_6("<<<STOP USE [NO delay allowed]", &Param0 + 24);
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
	if ((HAS_INVENTORY_COMPONENT(&Param0 + 24) && Function_89(Param0.f_64, 32)) && Function_22(&Param0 + 16, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(&Param0 + 24, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_97(&Param0 + 24, &Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		GRINGO_REPORT_USE_FINISHED(&Param0 + 24, Function_89(Param0.f_64, 64));
		Function_32(&Param0 + 24, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
		if (!Function_22(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_89(Param0.f_64, 128) && Function_22(&Param0 + 16, "RedrawWeapon", 1))
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
			if (Function_89(Param0.f_64, 16))
			{
				Function_90(&Param0);
				Function_52(&Param0 + 64, 16);
			}
			if (Function_89(Param0.f_64, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, 0);
			}
			if (Function_96(&Param0 + 16) && Function_89(Param0.f_64, 512))
			{
				Function_52(&Param0 + 64, 512);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 1);
				Function_6("Allow Bump Reactions", &Param0 + 24);
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
	Function_95(&Param0 + 16);
	bVar11 = Function_22(&Param0 + 16, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(&Param0 + 24))
		{
			Function_94(&Param0, GET_TARGET_OBJECT());
		}
		uVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(&uVar12))
		{
			if (Function_89(Param0.f_64, 256))
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
	if (&Param0 + 16 == &iLocal_136)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(&uLocal_134));
		iLocal_136 = &uVar13;
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
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_139))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iLocal_139);
	}
	SET_GRINGO_OBJECT_REF_ATTR(&uVar14, "UserObject", &Param0 + 16);
	Function_66(&Param0);
	Function_81(&Param0);
	GRINGO_CLEAR_COMPONENT_USER(&Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24) && bParam1)
	{
		Function_6("Setting reuse delay", &Param0 + 24);
		GRINGO_SET_REUSE_DELAY(Function_93(&Param0 + 16), &Param0 + 16);
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
			Function_92();
		}
	}
	else
	{
		Function_92();
	}
	Param0.f_68 = 0;
	(&Param0 + 24) = "";
	return;
}

void Function_92() //Position: 0x3FE9 / 16361
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

int Function_93(int iParam0) //Position: 0x4029 / 16425
{
	return Function_26(&iParam0, "ReuseDelay", 15.0f);
}

void Function_94(int iParam0, var uParam1) //Position: 0x4047 / 16455
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

void Function_95(int iParam0) //Position: 0x4088 / 16520
{
	iParam0 = &iParam0;
	return;
}

bool Function_96(int iParam0) //Position: 0x4094 / 16532
{
	return Function_22(&iParam0, "BlockBumpReactions", 0);
}

void Function_97(int iParam0, int iParam1) //Position: 0x40B6 / 16566
{
	iParam1 = &iParam1;
	iParam0 = &iParam0;
	return;
}

void Function_98(var uParam0, bool bParam1) //Position: 0x40C8 / 16584
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (&bParam1)
		{
			Function_116("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
		{
			if (&bParam1)
			{
				Function_116("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_139))
			{
				if (&bParam1)
				{
					Function_116("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(&iLocal_139);
			}
		}
	}
	if (&bParam1)
	{
		Function_116("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_99(int iParam0, int iParam1) //Position: 0x41D8 / 16856
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam1, &iParam0, 0, 0, 0);
	return;
}

void Function_100(struct<69> Param0) //Position: 0x41F0 / 16880
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
		ATTACH_OBJECTS(StackVal, StackVal, &Param0 + 56, &Param0 + 24, Function_9(), Vector(0.0f, 1.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	Function_66(&Param0);
	Function_6("Going to eGringoPositioning", &Param0 + 24);
	Param0.f_68 = 2;
	Function_69(&Param0 + 64, 2);
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
	if (!Function_103(&Param0 + 16))
	{
		if (HAS_INVENTORY_COMPONENT(&Param0 + 24))
		{
			if (ACTOR_HOLSTER_WEAPON(&Param0 + 24, 1))
			{
				Function_69(&Param0 + 64, 32);
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
		if (Function_89(Param0.f_64, 32))
		{
			Function_69(&Param0 + 64, 128);
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
	if (Function_102(&Param0 + 16))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, 1), 1))
			{
				Function_69(&Param0 + 64, 128);
			}
		}
		else
		{
			Function_69(&Param0 + 64, 128);
		}
	}
	if (Function_96(&Param0 + 16))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24))
		{
			Function_69(&Param0 + 64, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 0);
			Function_6("Block Bump Reactions", &Param0 + 24);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
	Function_101(&Param0 + 24, &uVar0);
	Function_6("START: ", &Param0 + 24);
	return;
}

void Function_101(int iParam0, int iParam1) //Position: 0x450C / 17676
{
	iParam1 = &iParam1;
	iParam0 = &iParam0;
	return;
}

bool Function_102(int iParam0) //Position: 0x451E / 17694
{
	return Function_22(&iParam0, "DrawWeapon", 0);
}

bool Function_103(int iParam0) //Position: 0x4538 / 17720
{
	return Function_22(&iParam0, "AllowWeapon", 0);
}

void Function_104(int iParam0, var uParam1) //Position: 0x4553 / 17747
{
	bool bVar0;
	int iVar1;
	
	iParam0 = &iParam0;
	iVar1 = Function_105(&uParam1, &bVar0);
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

bool Function_105(var uParam0, int iParam1) //Position: 0x4591 / 17809
{
	return Function_24(&uParam0, "UseName", &iParam1);
}

bool Function_106(struct<65> Param0) //Position: 0x45AA / 17834
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
	float fVar30;
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
				if (!Function_111(6))
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
		if (!Function_110(&uVar1, &Param0 + 16))
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
		if (!Function_89(Param0.f_64, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_69(&Param0 + 64, 1);
			}
			else
			{
				Function_52(&Param0 + 64, 1);
			}
			if (Function_89(Param0.f_64, 1))
			{
				Function_99("MIDACTION REQUEST", &uVar1);
			}
			else
			{
				Function_73(&Param0 + 16);
				Var8 = Function_73(&Param0 + 16);
				Var10 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var8, StackVal);
				fVar12 = Function_109(&Param0 + 16);
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
				if (!Function_108(&uVar1, &Param0 + 16))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				fVar30 = Function_107(&Param0 + 16);
				if (!fVar30 != 0.0f)
				{
					if (fVar30 < 0.0f)
					{
						fVar31 = (UNK_0x9C40E671(&Var10) - Function_72(&Param0 + 16));
					}
					else
					{
						fVar31 = ((180.0f + UNK_0x9C40E671(&Var10)) - Function_72(&Param0 + 16));
					}
					if (fVar31 < 180.0f)
					{
						fVar31 = (fVar31 - 360.0f);
					}
					else if (fVar31 > -180.0f)
					{
						fVar31 = (fVar31 + 360.0f);
					}
					if (fVar31 < FABS(fVar30))
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

int Function_107(int iParam0) //Position: 0x48A2 / 18594
{
	return Function_26(&iParam0, "ActivationCone", 0.0f);
}

bool Function_108(var uParam0, int iParam1) //Position: 0x48C0 / 18624
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
	Function_73(&iParam1);
	Var0 = Function_73(&iParam1);
	GET_POSITION(&uParam0, &Var0);
	Var0.f_4 = (StackVal + 1,5f);
	Function_73(&iParam1);
	Var0 = Function_73(&iParam1);
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

int Function_109(int iParam0) //Position: 0x4960 / 18784
{
	return Function_26(&iParam0, "ActivationRadius", 2.0f);
}

bool Function_110(int iParam0, var uParam1) //Position: 0x4980 / 18816
{
	uParam1 = &uParam1;
	iParam0 = &iParam0;
	return 1;
}

bool Function_111(int iParam0) //Position: 0x4993 / 18835
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_112(int iParam0) //Position: 0x49AF / 18863
{
	iParam0 = &iParam0;
	return;
}

void Function_113(var uParam0, int iParam1) //Position: 0x49BB / 18875
{
	int iVar0;
	var uVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, &uParam0))
	{
		Function_114(&(vLocal_20[iLocal_1309]), &uParam0);
		iLocal_130++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(&uParam0) >= 0)
	{
		iVar0 = 0;
		iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, iVar0);
		while (iVar0 <= 0 && iParam1 > 6)
		{
			uVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar0, &uParam0);
			Function_113(&uVar1, &iParam1);
			iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, iVar0 + 1);
		}
	}
	return;
}

void Function_114(int iParam0, int iParam1) //Position: 0x4A27 / 18983
{
	*(&iParam0 + 16) = &iParam1;
	Function_52(&iParam0 + 64, 1);
	return;
}

void Function_115(int iParam0) //Position: 0x4A3F / 19007
{
	iParam0 = &iParam0;
	return;
}

void Function_116(int iParam0) //Position: 0x4A4B / 19019
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam0, 0, 0, 0);
	return;
}

