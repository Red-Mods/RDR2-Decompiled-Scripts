//Decompiled with MagicRDR v1.0
//Function Count : 190
//Statics Count : 214
//Natives Count : 317
//Parameters Count : 51

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 2;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	bool bLocal_31 = false;
	vector3 vLocal_32[3] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	float fLocal_42[3] = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_46[5] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	float fLocal_62[5] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	vector3 vLocal_70 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_73 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_76 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_79 = { 0.0f, 0.0f, 0.0f };
	float fLocal_82 = 0.0f;
	vector3 vLocal_83 = { 0.0f, 0.0f, 0.0f };
	float fLocal_86 = 0.0f;
	int iLocal_87 = 0;
	vector3 vLocal_88 = { 0.0f, 0.0f, 0.0f };
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	vector3 vLocal_93[2] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	float fLocal_100[2] = { 0.0f, 0.0f };
	vector3 vLocal_103 = { 0.0f, 0.0f, 0.0f };
	float fLocal_106 = 0.0f;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	bool bLocal_109 = false;
	bool bLocal_110 = false;
	bool bLocal_111 = false;
	bool bLocal_112 = false;
	bool bLocal_113[3] = { false, false, false };
	int iLocal_117[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_123[2] = { false, false };
	bool bLocal_126 = false;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = false;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	int iLocal_135 = 0;
	float fLocal_136 = 0.0f;
	float fLocal_137 = 0.0f;
	float fLocal_138 = 0.0f;
	bool bLocal_139 = false;
	bool bLocal_140 = false;
	bool bLocal_141 = false;
	bool bLocal_142[2] = { false, false };
	int iLocal_145 = 0;
	bool bLocal_146 = false;
	int iLocal_147 = 0;
	bool bLocal_148 = false;
	bool bLocal_149 = false;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	int iLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	int iLocal_159 = 0;
	bool bLocal_160 = false;
	bool bLocal_161 = false;
	int iLocal_162 = 0;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	bool bVar2[3];
	bool bVar6[5];
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar66;
	int iVar67;
	int iVar68;
	bool bVar69;
	int iVar70;
	bool bVar71;
	float fVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	bool bVar76;
	int iVar77;
	int iVar78;
	bool bVar79;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_30 = 0;
	iLocal_92 = 0;
	iLocal_127 = 1;
	iLocal_128 = 0;
	bLocal_129 = false;
	iLocal_130 = 0;
	iLocal_131 = 0;
	iLocal_135 = 0;
	iLocal_147 = 0;
	bLocal_149 = false;
	iLocal_150 = 0;
	iLocal_151 = 0;
	iLocal_159 = 0;
	iLocal_162 = 0;
	if ((Global_16876[ScriptParam_0.f_566].f_12 % 4) == 0)
	{
		bLocal_31 = 2;
	}
	else if ((Global_16876[ScriptParam_0.f_566].f_12 % 4) == 1)
	{
		bLocal_31 = false;
	}
	else if ((Global_16876[ScriptParam_0.f_566].f_12 % 4) == 2)
	{
		bLocal_31 = 3;
	}
	else
	{
		bLocal_31 = true;
	}
	vLocal_79 = { -4354.0f, 30.0f, 4378.0f };
	fLocal_82 = 354,672f;
	vLocal_70 = { -4343.0f, 30,118f, 4378,945f };
	vLocal_32[03] = { -4345.0f, 30,117f, 4379,21f };
	fLocal_42[0] = 0.0f;
	vLocal_32[13] = { -4341.0f, 30,118f, 4378,938f };
	fLocal_42[1] = 0.0f;
	vLocal_32[23] = { StackVal, StackVal, vLocal_79 };
	fLocal_42[2] = fLocal_82;
	vLocal_83 = { -4354,701f, 30,159f, 4373,448f };
	fLocal_86 = 286,817f;
	vLocal_76 = { -4343,84f, 30,1176f, 4371,467f };
	vLocal_46[03] = { -4341,4f, 30,115f, 4371,8f };
	fLocal_62[0] = 0.0f;
	vLocal_46[13] = { -4346,09f, 30,1176f, 4371,567f };
	fLocal_62[1] = 0.0f;
	vLocal_46[23] = { StackVal, StackVal, vLocal_83 };
	fLocal_62[2] = fLocal_86;
	vLocal_73 = { vLocal_76.x, 30.0f, 4373.0f };
	vLocal_46[33] = { -4346,294f, 30,118f, 4389,091f };
	fLocal_62[3] = 341,919f;
	switch (bLocal_31)
	{
		case 0x00000000:
			vLocal_46[43] = { -4340,88f, 30,118f, 4385,204f };
			fLocal_62[4] = 25,632f;
			break;
		
		case 0x00000001:
			vLocal_46[43] = { -4342,76f, 30,12f, 4383,38f };
			fLocal_62[4] = 25,632f;
			break;
		
		case 0x00000003:
		case 0x00000002:
			vLocal_46[43] = { -4342,38f, 30,12f, 4386,26f };
			fLocal_62[4] = 25,632f;
			break;
	}
	vLocal_93[03] = { -4341,427f, 30,114f, 4381,91f };
	fLocal_100[0] = 180.0f;
	vLocal_93[13] = { -4344,385f, 30,118f, 4382,406f };
	fLocal_100[1] = 180.0f;
	vLocal_103 = { -4338,88f, 30,118f, 4385,204f };
	fLocal_106 = 180.0f;
	iVar0 = 0;
	bVar1 = CREATE_LAYOUT(Function_189());
	bVar14 = 17;
	Function_188(&uLocal_132, 0.0f);
	iVar66 = 0;
	iVar68 = 0;
	iVar70 = 0;
	fVar72 = 0.0f;
	if (Global_3382 == 1)
	{
		iVar0 = 5;
	}
	if (!IS_POPSET_VALID(Global_30750[0]))
	{
		iVar0 = 5;
	}
	else
	{
		Function_186(&bVar14, "stolen_panic", 5, 0);
		Function_186(&bVar14, "custom/stolen_panic", 8, 0);
		Function_186(&bVar14, "execution_idle", 5, 0);
		Function_186(&bVar14, "custom/execution_idle", 8, 0);
		Function_186(&bVar14, "mourn_loop", 1, 0);
		switch (bLocal_31)
		{
			case 0x00000000:
				Function_186(&bVar14, "stand_kneelvomit_n_any", 1, 0);
				break;
			
			case 0x00000001:
				Function_186(&bVar14, "rebel_riot02", 1, 0);
				break;
			
			case 0x00000003:
				Function_186(&bVar14, "firesquad_heldback", 1, 0);
				break;
			
			case 0x00000002:
				Function_186(&bVar14, "firesquad_shove", 1, 0);
				break;
		}
		iVar73 = Function_185(11, 3);
		switch (bLocal_31)
		{
			case 0x00000001:
				iLocal_117[4] = Function_184(268, 299, iLocal_117[3], iLocal_117[2], iLocal_117[4]);
				break;
			
			case 0x00000000:
			case 0x00000002:
			case 0x00000003:
				switch (iVar73)
				{
					case 0x00000000:
						iLocal_117[4] = 238;
						break;
					
					case 0x00000001:
						iLocal_117[4] = 240;
						break;
					
					case 0x00000002:
						iLocal_117[4] = 239;
						break;
				}
		}
		iVar67 = 0;
		while (iVar67 <= 4)
		{
			if (iVar67 == 2)
			{
				iVar74 = Function_185(11, 3);
				if (iVar74 == 0)
				{
					iLocal_117[2] = 299;
				}
				else if (iVar74 == 1)
				{
					iLocal_117[2] = 297;
				}
				else
				{
					iLocal_117[2] = 292;
				}
			}
			else if (iVar67 == 3)
			{
				iVar74 = Function_185(11, 3);
				if (iVar74 == 0)
				{
					iLocal_117[3] = 286;
				}
				else if (iVar74 == 1)
				{
					iLocal_117[3] = 278;
				}
				else
				{
					iLocal_117[3] = 274;
				}
			}
			else
			{
				iLocal_117[iVar67] = Function_175(Global_30750[0], 1, 0, 1);
			}
			iVar67++;
		}
		iVar67 = 0;
		while (iVar67 <= 3)
		{
			if (iVar67 == 2)
			{
				bLocal_113[2] = 394;
			}
			else
			{
				bLocal_113[iVar67] = RAND_INT_RANGE(379, 393);
			}
			iVar67++;
		}
		bLocal_123[0] = RAND_INT_RANGE(379, 393);
		iVar75 = Function_185(11, 2);
		if (iVar75 == 0)
		{
			bLocal_123[1] = 379;
		}
		else
		{
			bLocal_123[1] = 393;
		}
		switch (bLocal_31)
		{
			case 0x00000001:
				bLocal_126 = RAND_INT_RANGE(379, 393);
				break;
			
			case 0x00000003:
			case 0x00000002:
				bLocal_126 = Function_184(268, 299, iLocal_117[3], iLocal_117[2], iLocal_117[4]);
				break;
			}
	}
	Function_174(&bVar14, iLocal_117[4], 3, 0);
	iVar67 = 0;
	while (iVar67 <= 4)
	{
		if (iLocal_117[iVar67] == 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			Function_174(&bVar14, iLocal_117[iVar67], 3, 0);
		}
		iVar67++;
	}
	if (iVar0 != 5)
	{
		Function_173(&iLocal_117, 5);
		iVar67 = 0;
		while (iVar67 <= 3)
		{
			if (bLocal_113[iVar67] == 4294967295)
			{
				iVar0 = 5;
			}
			else
			{
				Function_174(&bVar14, bLocal_113[iVar67], 3, 0);
			}
			iVar67++;
		}
	}
	if (iVar0 != 5)
	{
		Function_173(&bLocal_113, 3);
		if (bLocal_123[0] != 4294967295 || bLocal_123[1] != 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			Function_174(&bVar14, bLocal_123[0], 3, 0);
			Function_174(&bVar14, bLocal_123[1], 3, 0);
		}
	}
	switch (bLocal_31)
	{
		case 0x00000001:
		case 0x00000003:
		case 0x00000002:
			if (iVar0 != 5)
			{
				Function_172(bLocal_126);
				if (bLocal_126 == 4294967295)
				{
					iVar0 = 5;
				}
				else
				{
					Function_174(&bVar14, bLocal_126, 3, 0);
				}
			}
			break;
	}
	iVar77 = 0;
	if (Function_171(0))
	{
		iVar0 = 5;
	}
	iVar78 = 0;
	bVar79 = false;
	while (!IS_EXITFLAG_SET())
	{
		bVar76 = 600;
		if (Function_170(&bVar79, &iVar0, &iVar78, &bVar76, bLocal_129))
		{
			if (bVar79)
			{
				Function_169(&bVar2, 4294967295);
				Function_169(&bVar6, 4294967295);
				Function_169(&bLocal_142, 4294967295);
				Function_168(&bLocal_141);
			}
			else
			{
				Function_167(&bVar2, 4294967295);
				Function_167(&bVar6, 4294967295);
				Function_167(&bLocal_142, 4294967295);
				Function_166(&bLocal_141);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_160(&bVar14))
				{
					iVar0 = 1;
				}
				bVar76 = 600;
				break;
			
			case 0x00000001:
				if (Function_158(&(vLocal_46[03]), &ScriptParam_0 + 52, 0, ScriptParam_0.f_32))
				{
					iVar0 = 2;
				}
				else
				{
					iVar0 = 5;
				}
				break;
			
			case 0x00000002:
				if (VDIST(Global_34574, vLocal_32[03]) > Function_157())
				{
					iVar0 = 5;
					bVar76 = false;
					break;
				}
				if (Function_156(StackVal, StackVal, vLocal_46[13], 0x3f800000, 0x42960000, 1, 1, 0))
				{
					iVar0 = 5;
					break;
				}
				Function_155(-4346,42f, 30,87f, 4382,23f, &bVar12, &bVar13);
				Function_153(-4346,42f, 30,87f, 4382,23f, 0, 0);
				if (IS_GRINGO_VALID(bVar12))
				{
					GRINGO_ALLOW_ACTIVATION(bVar12, false);
				}
				if (IS_GRINGO_VALID(bVar13))
				{
					GRINGO_ALLOW_ACTIVATION(bVar13, false);
				}
				bVar71 = CREATE_VOLUME_IN_LAYOUT(bVar1, Function_189(), false, vLocal_46[13], 0.0f, 0.0f, 0.0f, 30.0f, 25.0f, 30.0f);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar71);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar71);
				iVar67 = 0;
				while (iVar67 <= 3)
				{
					bVar2[iVar67] = CREATE_ACTOR_IN_LAYOUT(bVar1, Function_189(), bLocal_113[iVar67], vLocal_32[iVar673], 0.0f, fLocal_42[iVar67], 0.0f);
					TASK_STAND_STILL(bVar2[iVar67], -1.0f, 0, 0);
					Function_152(bVar2[iVar67], 0);
					SET_ACTOR_VISION_XRAY(bVar2[iVar67], true);
					SET_ACTOR_CAN_PLAY_GESTURES(bVar2[iVar67], false);
					if (iVar67 == 2)
					{
						GIVE_WEAPON_TO_ACTOR(bVar2[iVar67], 41, false, 1, 1);
					}
					else
					{
						GIVE_WEAPON_TO_ACTOR(bVar2[iVar67], 42, false, 1, 1);
					}
					iVar67++;
				}
				iVar67 = 0;
				while (iVar67 <= 5)
				{
					if (iVar67 == 3)
					{
					}
					else
					{
						bVar6[iVar67] = CREATE_ACTOR_IN_LAYOUT(bVar1, Function_189(), iLocal_117[iVar67], vLocal_46[iVar673], 0.0f, fLocal_62[iVar67], 0.0f);
						TASK_STAND_STILL(bVar6[iVar67], -1.0f, 0, 0);
						SET_ACTOR_CAN_PLAY_GESTURES(bVar6[iVar67], false);
					}
					DELETE_ALL_WEAPONS_FROM_ACTOR(bVar6[iVar67]);
					if (iVar67 <= 3)
					{
						SET_ANIM_SET_FOR_ACTOR(bVar6[iVar67], "execution_idle", 0);
						SET_ACTION_NODE_FOR_ACTOR(bVar6[iVar67], "execution_idle/firingsquad");
					}
					if (iVar67 == 4)
					{
						switch (bLocal_31)
						{
							case 0x00000000:
								SET_ANIM_SET_FOR_ACTOR(bVar6[iVar67], "stolen_panic", 0);
								SET_ACTION_NODE_FOR_ACTOR(bVar6[iVar67], "stolen_panic/loop");
								break;
						}
						SET_ACTOR_CAN_PLAY_GESTURES(bVar6[iVar67], false);
						SET_ACTOR_CAN_BE_HARDLOCKED(bVar6[iVar67], 0);
						SET_ACTOR_UPDATE_PRIORITY(bVar6[iVar67], false);
					}
					iVar67++;
				}
				iVar67 = 0;
				while (iVar67 <= 2)
				{
					bLocal_142[iVar67] = CREATE_ACTOR_IN_LAYOUT(bVar1, Function_189(), bLocal_123[iVar67], vLocal_93[iVar673], 0.0f, fLocal_100[iVar67], 0.0f);
					TASK_STAND_STILL(bLocal_142[iVar67], -1.0f, 0, 0);
					SET_ACTOR_CAN_PLAY_GESTURES(bLocal_142[iVar67], false);
					Function_152(bLocal_142[iVar67], 0);
					SET_ACTOR_VISION_XRAY(bLocal_142[iVar67], true);
					iVar67++;
				}
				switch (bLocal_31)
				{
					case 0x00000001:
					}
				}
			}
		}
	}
}
}
}

void Function_1(int iParam0) //Position: 0x1408 / 5128
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_2(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_2(var uParam0, int iParam1) //Position: 0x142E / 5166
{
	if (Function_4(uParam0[iParam13], 4))
	{
		if (Function_4(uParam0[iParam13], 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP((*uParam0)[iParam13]);
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET((*uParam0)[iParam13]);
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR((*uParam0)[iParam13], 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO((*uParam0)[iParam13]);
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT((*uParam0)[iParam13]);
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*uParam0)[iParam13], 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY((*uParam0)[iParam13]);
					break;
				
				default:
					break;
			}
			Function_3(uParam0[iParam13], 1);
			Function_3(uParam0[iParam13], 2);
			Function_3(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x155C / 5468
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x1576 / 5494
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(bool bParam0, int iParam1) //Position: 0x1593 / 5523
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION((*bParam0)[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_6(bool bParam0) //Position: 0x15B5 / 5557
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		return 1;
	}
	return 0;
}

bool Function_7(bool bParam0, bool bParam1) //Position: 0x15DA / 5594
{
	if (bParam1)
	{
		if (IS_ACTOR_HOGTIED(bParam0))
		{
			if (!(GET_TASK_STATUS(bParam0, 25) != 1 || GET_TASK_STATUS(bParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(bParam0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(bParam0, true);
			}
			Function_9(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_9(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_8(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(bParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_8(bool bParam0, int iParam1) //Position: 0x1676 / 5750
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(bParam0))
		{
			return 1;
		}
		bVar0 = SQUAD_GET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

int Function_9(bool bParam0) //Position: 0x16C0 / 5824
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_10(bParam0);
		return 1;
	}
	return 0;
}

void Function_10(bool bParam0) //Position: 0x16D6 / 5846
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		}
	}
	return;
}

void Function_11(bool bParam0) //Position: 0x1702 / 5890
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*bParam0, 0);
		TASK_FLEE_ACTOR(*bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*bParam0, false);
	}
	return;
}

void Function_12(bool bParam0, int iParam1) //Position: 0x172D / 5933
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_11(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x175A / 5978
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	uParam1 = uParam1;
	vVar1 = { -4347,74f, 30,118f, 4373,34f };
	Function_92(bLocal_142[0], (*uParam3)[3]);
	vVar4 = { -4296.0f, 23.0f, 4408.0f };
	switch (bLocal_31)
	{
		case 0x00000000:
			Function_91((*uParam3)[4], bLocal_142[1], *uParam0);
			break;
	}
	vVar7 = { -4344.0f, 30.0f, 4365.0f };
	switch (*uParam0)
	{
		case 0x00000000:
			if (Function_90(Global_34573, (*uParam2)[0]) > 150.0f)
			{
				bLocal_160 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &(vLocal_46[33]), 3);
				TASK_FACE_COORD(0, &(vLocal_46[33]), 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*uParam3)[3], bLocal_160);
				TASK_SEQUENCE_RELEASE(bLocal_160, 1);
				Function_188(&uLocal_132, 0.0f);
				*uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_85(&uLocal_132, 2.0f))
			{
				Function_188(&uLocal_132, 0.0f);
				*uParam0 = 5;
			}
			break;
		
		case 0x00000005:
			if (Function_90(Global_34573, (*uParam2)[0]) > 25.0f)
			{
				Function_83();
				Function_82(11);
				fLocal_136 = CREATE_PATH_IN_LAYOUT(uParam1, Function_189(), 4);
				fLocal_137 = CREATE_PATH_IN_LAYOUT(uParam1, Function_189(), 4);
				fLocal_138 = CREATE_PATH_IN_LAYOUT(uParam1, Function_189(), 2);
				ADD_POINT_TO_PATH(fLocal_136, -4352,127f, 30,159f, 4371,853f);
				ADD_POINT_TO_PATH(fLocal_136, -4349,636f, 30,083f, 4371,513f);
				ADD_POINT_TO_PATH(fLocal_136, -4346,821f, 30,118f, 4372,609f);
				ADD_POINT_TO_PATH(fLocal_136, vLocal_73);
				ADD_POINT_TO_PATH(fLocal_137, -4352,127f, 30,159f, 4371,853f);
				ADD_POINT_TO_PATH(fLocal_137, vVar1);
				ADD_POINT_TO_PATH(fLocal_137, -4346,821f, 30,118f, 4372,609f);
				ADD_POINT_TO_PATH(fLocal_137, vLocal_76);
				ADD_POINT_TO_PATH(fLocal_138, -4342.0f, 30.0f, 4381.0f);
				ADD_POINT_TO_PATH(fLocal_138, -4343.0f, 30.0f, 4374.0f);
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID((*uParam3)[2]))
			{
				bLocal_146 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(false, fLocal_137, 1, 0, 0, 1, false);
				TASK_FACE_COORD(0, &vVar7, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*uParam3)[2], bLocal_146);
				TASK_SEQUENCE_RELEASE(bLocal_146, 1);
			}
			if (IS_ACTOR_VALID((*uParam3)[3]))
			{
				SET_ANIM_SET_FOR_ACTOR((*uParam3)[3], "stolen_panic", 0);
				SET_ACTION_NODE_FOR_ACTOR((*uParam3)[3], "stolen_panic/loop");
			}
			Function_188(&uLocal_132, 0.0f);
			*uParam0 = 3;
			break;
		
		case 0x00000003:
			if (Function_85(&uLocal_132, 3.0f))
			{
				if (IS_ACTOR_VALID((*uParam2)[2]))
				{
					GIVE_WEAPON_TO_ACTOR((*uParam2)[2], 41, 0.0f, 0, 1);
					ACTOR_PUT_WEAPON_IN_HAND((*uParam2)[2], 41, 1);
					Function_81((*uParam2)[2], 1, 1);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE((*uParam2)[2], 0);
					bLocal_146 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH(false, fLocal_136, 1, 0, 0, 1, false);
					TASK_GO_TO_COORD(false, &vLocal_70, 1);
					TASK_FACE_ACTOR(false, (*uParam3)[2], 0, 2.0f);
					TASK_STAND_STILL(false, 5.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*uParam2)[2], bLocal_146);
					TASK_SEQUENCE_RELEASE(bLocal_146, 1);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE((*uParam2)[2], 0);
					AI_GOAL_AIM_AT_OBJECT((*uParam2)[2], GET_OBJECT_FROM_ACTOR((*uParam3)[2]), 1);
					switch (bLocal_31)
					{
						case 0x00000001:
							iLocal_130 = 1;
							break;
					}
					*uParam0 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (GET_NTH_TASK_STATUS((*uParam2)[2], 2) == 0)
			{
				Function_79((*uParam3)[2], (*uParam2)[2]);
			}
			if (GET_TASK_STATUS((*uParam2)[2], 0) == 0)
			{
				TASK_STAND_STILL((*uParam2)[2], -1.0f, 0, 0);
				Function_188(&uLocal_132, 0.0f);
				*uParam0 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_85(&uLocal_132, 0.0f) && iLocal_131 != 0)
			{
				Function_78((*uParam2)[2], (*uParam3)[0], "eventExecutionMsg01", "eventExecutionMsg01", 2, 60, 0, 1);
				Function_188(&uLocal_132, 0.0f);
				TASK_CLEAR((*uParam2)[2]);
				GIVE_WEAPON_TO_ACTOR((*uParam2)[2], 41, 0.0f, 0, 1);
				ACTOR_PUT_WEAPON_IN_HAND((*uParam2)[2], 41, 1);
				Function_81((*uParam2)[2], 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE((*uParam2)[2], 0);
				TASK_PRIORITY_SET((*uParam2)[2], true);
				iLocal_131++;
			}
			*uParam4 = 0;
			if (Function_85(&uLocal_132, 0.0f) && iLocal_131 != 1)
			{
				Function_78((*uParam2)[2], (*uParam3)[0], "eventExecutionMsg02", "eventExecutionMsg02", 2, 60, 0, 1);
				TASK_CLEAR((*uParam2)[2]);
				TASK_POINT_GUN_AT_OBJECT((*uParam2)[0], (*uParam3)[1], -1.0f, 0);
				TASK_POINT_GUN_AT_OBJECT((*uParam2)[1], (*uParam3)[0], -1.0f, 0);
				TASK_POINT_GUN_AT_OBJECT((*uParam2)[2], (*uParam3)[2], -1.0f, 0);
				AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_NARROWLY_MISSED");
				AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_MISSED_TARGET");
				iLocal_87 = 1;
				Function_188(&uLocal_132, 0.0f);
				iLocal_131++;
			}
			if (Function_85(&uLocal_132, 2.0f) && iLocal_131 != 2)
			{
				Function_78((*uParam2)[2], (*uParam3)[0], "eventExecutionMsg03", "eventExecutionMsg03", 2, 60, 0, 1);
				Function_188(&uLocal_132, 0.0f);
				iLocal_131++;
			}
			if (Function_85(&uLocal_132, 1.0f) && iLocal_131 != 3)
			{
				AI_GOAL_AIM_CLEAR((*uParam2)[2]);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*uParam2)[2], 28, 0.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*uParam2)[2], 31, -1.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*uParam2)[2], 37, 2.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*uParam2)[2], 38, 0,5f);
				COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*uParam2)[2], 0);
				MEMORY_REPORT_POSITION_AUTO((*uParam2)[2], (*uParam3)[2], true);
				MEMORY_CONSIDER_AS_ENEMY((*uParam2)[2], (*uParam3)[2]);
				Function_77((*uParam2)[0], (*uParam3)[1]);
				Function_77((*uParam2)[1], (*uParam3)[0]);
				Function_77((*uParam2)[2], (*uParam3)[2]);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE((*uParam2)[2], 1);
				if (Function_73((*uParam3)[2], 0, 0, 0, 0, 0, 0, 0, 0))
				{
				}
				iLocal_130 = 1;
				if (IS_VOLUME_VALID(bLocal_111))
				{
					DESTROY_VOLUME(bLocal_111);
				}
				if (IS_VOLUME_VALID(bLocal_112))
				{
					DESTROY_VOLUME(bLocal_112);
				}
				Function_188(&uLocal_132, 0.0f);
				AUDIO_PLAY_VOCAL_EFFECT((*uParam3)[4], 9, 1);
				iLocal_131 = 0;
				*uParam0 = 10;
			}
			break;
		
		case 0x0000000A:
			if (iLocal_131 == 0)
			{
				iLocal_127 = 1;
				if (Function_7((*uParam3)[0], 0))
				{
					iLocal_127 = 0;
				}
				if (Function_7((*uParam3)[1], 0))
				{
					iLocal_127 = 0;
				}
				if (Function_7((*uParam3)[2], 0))
				{
					iLocal_127 = 0;
				}
				if (iLocal_127 == 1)
				{
					iLocal_131 = 1;
				}
			}
			if (iLocal_131 == 1)
			{
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					MEMORY_CLEAR_EVENTS((*uParam2)[iVar0], 0);
					ACTOR_HOLSTER_WEAPON((*uParam2)[iVar0], 1);
					bLocal_146 = TASK_SEQUENCE_OPEN();
					TASK_CLEAR(false);
					TASK_GO_NEAR_COORD(false, &vVar4, 15.0f, 1);
					TASK_WANDER(false, -1.0f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*uParam2)[iVar0], bLocal_146);
					TASK_SEQUENCE_RELEASE(bLocal_146, 1);
					Function_100((*uParam2)[iVar0]);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 <= 2)
				{
					MEMORY_CLEAR_EVENTS(bLocal_142[iVar0], 0);
					ACTOR_HOLSTER_WEAPON(bLocal_142[iVar0], 1);
					bLocal_146 = TASK_SEQUENCE_OPEN();
					TASK_CLEAR(false);
					TASK_GO_NEAR_COORD(false, &vVar4, 15.0f, 1);
					TASK_WANDER(false, -1.0f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_142[iVar0], bLocal_146);
					TASK_SEQUENCE_RELEASE(bLocal_146, 1);
					Function_100(bLocal_142[iVar0]);
					iVar0++;
				}
				iLocal_91 = 1;
				iLocal_131 = 2;
			}
			if (iLocal_131 == 2)
			{
				switch (bLocal_31)
				{
					case 0x00000000:
						if (Function_57((*uParam3)[4], uParam1) || iLocal_108)
						{
							if (iLocal_87 == 1)
							{
								AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
								iLocal_87 = 0;
							}
							return 1;
						}
						break;
					
					case 0x00000001:
						if (iLocal_68 == 1)
						{
							return 1;
						}
						break;
					
					case 0x00000003:
					case 0x00000002:
						if (iLocal_69 == 1)
						{
							return 1;
						}
						break;
					}
			}
			break;
		
		case 0x0000000B:
			if (iLocal_92 == 0)
			{
				Function_52(50, 1, 0);
				Function_15(200, 1, 0);
				iLocal_92 = 1;
			}
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (IS_ACTOR_VALID((*uParam3)[iVar0]))
				{
					TASK_FLEE_ACTOR((*uParam3)[iVar0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
					if (!iLocal_135)
					{
						if (iVar0 == 2)
						{
							if (iLocal_117[2] == 299)
							{
								Function_78((*uParam3)[2], Global_34573, "firstTimeEscalera_msg06", "firstTimeEscalera_msg06", 5, 60, 1, 1);
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT((*uParam3)[2], 103, Global_34573, 0, 0, 5, 4294967295, 4294967295, 0, 1);
							}
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT((*uParam3)[iVar0], 103, Global_34573, 0, 0, 5, 4294967295, 4294967295, 0, 1);
						}
						iLocal_135 = 1;
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (IS_ACTOR_VALID((*uParam2)[iVar0]))
				{
					if (!Function_119((*uParam2)[iVar0]))
					{
						if (Function_7((*uParam3)[iVar0], 0))
						{
							MEMORY_SET_WEAPON_DRAW_PREFERENCE((*uParam2)[iVar0], 4294967295);
							AI_GOAL_AIM_CLEAR((*uParam2)[iVar0]);
							TASK_CLEAR((*uParam2)[iVar0]);
							if (iVar0 == 0)
							{
								if (Function_7((*uParam3)[iVar0], 0))
								{
									if (Function_7((*uParam2)[iVar0], 0))
									{
										SET_ACTOR_ONE_SHOT_DEATH((*uParam3)[iVar0], true);
										Function_14((*uParam2)[iVar0], uParam3[iVar0]);
										bLocal_146 = TASK_SEQUENCE_OPEN();
										TASK_KILL_CHAR(false, (*uParam3)[iVar0]);
										TASK_KILL_CHAR(false, Global_34573);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM((*uParam2)[iVar0], bLocal_146);
										TASK_SEQUENCE_RELEASE(bLocal_146, 1);
									}
								}
								else
								{
									Function_14((*uParam2)[iVar0], &Global_34573);
								}
							}
							else
							{
								Function_14((*uParam2)[iVar0], &Global_34573);
							}
						}
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (IS_ACTOR_VALID(bLocal_142[iVar0]))
				{
					if (!Function_119(bLocal_142[iVar0]))
					{
						Function_14(bLocal_142[iVar0], &Global_34573);
					}
				}
				iVar0++;
			}
			break;
		
		case 0x0000000C:
			if (IS_ACTOR_VALID((*uParam3)[0]))
			{
				if (IS_ACTOR_VALID((*uParam2)[0]))
				{
					if (Function_90((*uParam3)[0], (*uParam2)[0]) < 10.0f)
					{
						Function_14((*uParam2)[0], &Global_34573);
						iLocal_91 = 1;
						return 1;
					}
				}
				iLocal_91 = 1;
				return 1;
			}
			if (IS_ACTOR_VALID((*uParam2)[0]))
			{
				Function_14((*uParam2)[iVar0], &Global_34573);
			}
			iLocal_91 = 1;
			return 1;
			break;
	}
	return 0;
}

int Function_14(bool bParam0, int iParam1) //Position: 0x214A / 8522
{
	if (IS_ACTOR_HUMAN(bParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(bParam0) == 0)
		{
			TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bParam0, false);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(*iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(bParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(bParam0, *iParam1, true);
	TASK_KILL_CHAR(bParam0, *iParam1);
	TASK_PRIORITY_SET(bParam0, true);
	return 1;
}

void Function_15(int iParam0, bool bParam1, bool bParam2) //Position: 0x222F / 8751
{
	int iVar0;
	bool bVar1;
	
	if (Function_51(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_50(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_49(1, bVar1);
			if (!bParam2)
			{
				if (!Function_48(Global_76848, 1))
				{
					Function_42(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_40(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_48(Global_76848, 2))
				{
					Function_42(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_39(1, bVar1, 0, 0);
	}
	else
	{
		Function_38(1, (4294967295 * bVar1), 0);
	}
	if (Function_50(1) <= 4294962296)
	{
		Function_25(1, 4294962296, 0);
	}
	else if (Function_50(1) >= 5000)
	{
		Function_25(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_24(1));
	iVar0 = Function_50(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_17(2, Function_23(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_17(2, Function_23(Global_12976.f_152), 0);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_12976.f_152 = 2;
				Function_17(2, Function_23(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_17(2, Function_23(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_17(2, Function_23(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", Global_34573))
			{
				DELETE_ITEM("HONOR_ROSARY", Global_34573, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_12976.f_152 = 2;
				Function_17(2, Function_23(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_17(2, Function_23(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_17(2, Function_23(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_17(2, Function_23(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_17(2, Function_23(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_17(2, Function_23(Global_12976.f_152), 1);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000006:
			if (iVar0 < 4500)
			{
				Global_12976.f_152 = 5;
				Function_17(2, Function_23(Global_12976.f_152), 0);
			}
			break;
	}
	Function_16(Global_12976.f_152, Global_12976.f_156);
	return;
}

void Function_16(int iParam0, int iParam1) //Position: 0x2544 / 9540
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, true);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, true);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, true);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, false);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_17(int iParam0, char* cParam1, bool bParam2) //Position: 0x27A2 / 10146
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_21(iParam0, cParam1, 0, 1);
	iVar1 = Function_18();
	Global_49199[iVar1] = 0.0f;
	strcpy(&Global_49205[iVar120] + 16, cParam1, 32);
	strcpy(&Global_49205[iVar120] + 8, "QME=", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	if (bParam2)
	{
		Global_49205[iVar120].f_72 = 5;
	}
	else
	{
		Global_49205[iVar120].f_72 = 6;
	}
	return 1;
}

int Function_18() //Position: 0x2927 / 10535
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_48 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_19();
	return 0;
}

void Function_19() //Position: 0x29C6 / 10694
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_49199 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_49199[iVar0] = Global_49199[iVar1];
		Global_49205[iVar020] = { StackVal, Global_49205[iVar120] };
		*(&Global_49205[iVar020] + 8) = { StackVal, *(&Global_49205[iVar120] + 8) };
		*(&Global_49205[iVar020] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_49205[iVar120] + 16) };
		Global_49205[iVar020].f_48 = Global_49205[iVar120].f_48;
		Global_49205[iVar020].f_68 = Global_49205[iVar120].f_68;
		Global_49205[iVar020].f_72 = Global_49205[iVar120].f_72;
		Function_20(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_20(int iParam0) //Position: 0x2A75 / 10869
{
	Global_49199[iParam0] = 0.0f;
	strcpy(&(Global_49205[iParam020]), "", 8);
	strcpy(&Global_49205[iParam020] + 8, "", 8);
	strcpy(&Global_49205[iParam020] + 16, "", 32);
	Global_49205[iParam020].f_48 = 4294967295;
	Global_49205[iParam020].f_52 = 4294967295;
	Global_49205[iParam020].f_68 = 4294967295;
	Global_49205[iParam020].f_72 = 4294967295;
	return;
}

int Function_21(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x2AD3 / 10963
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_35278[iParam020] + 16, bParam1, 32);
	if (bParam2)
	{
		uVar1 = Global_35278[iParam020].f_76;
		Function_22(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_22(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x2E25 / 11813
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

var Function_23(int iParam0) //Position: 0x2EA8 / 11944
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_hnr7";
			break;
		
		case 0x00000001:
			return "sr_hnr6";
			break;
		
		case 0x00000002:
			return "sr_hnr5";
			break;
		
		case 0x00000003:
			return "sr_hnr4";
			break;
		
		case 0x00000004:
			return "sr_hnr3";
			break;
		
		case 0x00000005:
			return "sr_hnr2";
			break;
		
		case 0x00000006:
			return "sr_hnr1";
			break;
	}
	return "sr_hnr4";
}

float Function_24(int iParam0) //Position: 0x2F4B / 12107
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_25(int iParam0, bool bParam1, bool bParam2) //Position: 0x2F84 / 12164
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
		Function_37(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_36(iParam0);
	if (bParam2)
	{
		Function_26(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_26(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x321F / 12831
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_35(390))), 32);
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
					bVar19 = (Function_24(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_24(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_33(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_30(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_27(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_189(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_27(int iParam0) //Position: 0x384C / 14412
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x385D / 14429
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_29(char* cParam0, char* cParam1) //Position: 0x3952 / 14674
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x396B / 14699
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_32(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_31(Function_32(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x39D0 / 14800
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_32(int iParam0, bool bParam1) //Position: 0x39E2 / 14818
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_33(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x39F4 / 14836
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
	if (((Function_34(iParam0) != 19 || Function_34(iParam0) != 17) || Function_34(iParam0) != 10) || Function_34(iParam0) != 9)
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

int Function_34(int iParam0) //Position: 0x3B24 / 15140
{
	return Global_35278[iParam020].f_48;
}

var Function_35(int iParam0) //Position: 0x3B33 / 15155
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_36(int iParam0) //Position: 0x3B70 / 15216
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

int Function_37(int iParam0, bool bParam1, bool bParam2) //Position: 0x3D0A / 15626
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

int Function_38(int iParam0, bool bParam1, int iParam2) //Position: 0x3F24 / 16164
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
	Function_36(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_26(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_39(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4140 / 16704
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
	Function_37(iParam0, TO_FLOAT(bParam1), 1);
	Function_36(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_26(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

int Function_40(int iParam0, bool bParam1) //Position: 0x4360 / 17248
{
	bool bVar0;
	int iVar1;
	
	Function_38(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_41(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_18();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

var Function_41(int iParam0, int iParam1) //Position: 0x44FC / 17660
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_68 == iParam0)
		{
			if (iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_42(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x453D / 17725
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_44(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_43(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_43(char* cParam0, int iParam1) //Position: 0x45A9 / 17833
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

bool Function_44(bool bParam0, var uParam1, int iParam2) //Position: 0x45E0 / 17888
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
		if (Function_46(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_45(uVar0))
		{
			case 0x00000002:
				if (!Function_48(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_45(char* cParam0) //Position: 0x4658 / 18008
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

int Function_46(int iParam0) //Position: 0x46F9 / 18169
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_47(&iVar1, 2147483648);
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

void Function_47(int iParam0, int iParam1) //Position: 0x4736 / 18230
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_48(var uParam0, int iParam1) //Position: 0x4749 / 18249
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_49(int iParam0, bool bParam1) //Position: 0x475C / 18268
{
	bool bVar0;
	int iVar1;
	
	Function_39(iParam0, bParam1, 0, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_41(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_18();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

int Function_50(int iParam0) //Position: 0x48F9 / 18681
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

var Function_51(int iParam0) //Position: 0x493A / 18746
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x4949 / 18761
{
	int iVar0;
	bool bVar1;
	
	if (Function_51(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_50(3);
	Function_54();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_49(3, bVar1);
		if (!bParam2)
		{
			if (!Function_48(Global_76848, 4))
			{
				Function_42(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_39(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_24(3));
	iVar0 = Function_50(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_17(4, Function_53(Global_12976.f_156), 1);
				Function_16(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_17(4, Function_53(Global_12976.f_156), 1);
				Function_16(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_17(4, Function_53(Global_12976.f_156), 1);
				Function_16(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_17(4, Function_53(Global_12976.f_156), 1);
				Function_16(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_17(4, Function_53(Global_12976.f_156), 1);
				Function_16(Global_12976.f_152, Global_12976.f_156);
				if (Global_12976.f_152 != 6 || Global_12976.f_152 != 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000005:
			break;
	}
	return;
}

var Function_53(int iParam0) //Position: 0x4B0C / 19212
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_ntr1";
			break;
		
		case 0x00000001:
			return "sr_ntr2";
			break;
		
		case 0x00000002:
			return "sr_ntr3";
			break;
		
		case 0x00000003:
			return "sr_ntr4";
			break;
		
		case 0x00000004:
			return "sr_ntr5";
			break;
		
		case 0x00000005:
			return "sr_ntr6";
			break;
	}
	return "sr_ntr1";
}

void Function_54() //Position: 0x4B9B / 19355
{
	Function_56(3, 0.0f);
	Function_55(3, 10000.0f);
	return;
}

int Function_55(int iParam0, int iParam1) //Position: 0x4BB1 / 19377
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_56(int iParam0, int iParam1) //Position: 0x4BF1 / 19441
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

int Function_57(bool bParam0, bool bParam1) //Position: 0x4C31 / 19505
{
	if (!Function_7(bParam0, 0))
	{
		return 1;
	}
	switch (iLocal_151)
	{
		case 0x00000000:
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			Function_142(bParam0);
			bLocal_139 = CREATE_VOLUME_IN_LAYOUT(bParam1, Function_189(), false, Function_142(bParam0), 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
			DECOR_SET_BOOL(bParam0, "VolOnly", true);
			DECOR_SET_OBJECT(bLocal_109, "volume", bLocal_139);
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			TASK_USE_GRINGO(bParam0, GET_GRINGO_FROM_OBJECT(bLocal_109), "UseCase1", true, 1);
			iLocal_151 = 1;
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(bParam0, 19) == 0)
			{
				Function_188(&uLocal_152, 0.0f);
				iLocal_151 = 2;
			}
			break;
		
		case 0x00000002:
			Function_85(&uLocal_152, 4.0f);
			Function_72(bLocal_110);
			bLocal_140 = CREATE_VOLUME_IN_LAYOUT(bParam1, Function_189(), false, Function_72(bLocal_110), 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
			DECOR_SET_BOOL(bParam0, "VolOnly", true);
			DECOR_SET_OBJECT(bLocal_110, "volume", bLocal_140);
			TASK_FOLLOW_PATH(bParam0, fLocal_138, 2, 0, 0, 1, false);
			iLocal_151 = 3;
			break;
		
		case 0x00000003:
			if (GET_TASK_STATUS(bParam0, 16) != 0 || Function_69(bParam0, bLocal_110) > 3,5f)
			{
				MEMORY_CLEAR_EVENTS(bParam0, 1);
				MEMORY_CLEAR_ALL(bParam0);
				TASK_CLEAR(bParam0);
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_110), true);
				Function_60(bParam0, GET_GRINGO_FROM_OBJECT(bLocal_110), "UseCase1", 4294967295, 1, 0);
				Function_58(bParam0, 1);
				iLocal_151 = 4;
			}
			break;
		
		case 0x00000004:
			iLocal_151 = 5;
			break;
		
		case 0x00000005:
			iLocal_151 = 6;
			break;
		
		case 0x00000006:
			return 1;
			break;
	}
	return 0;
}

int Function_58(bool bParam0, int iParam1) //Position: 0x4DB3 / 19891
{
	char* cVar0[64];
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		strcpy(&cVar0, "ACTORROAM_SET_OPTIONS_FOR_ACTOR: invalid actor ", 64);
		stradd(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 64);
		return 0;
	}
	if (!Function_6(bParam0))
	{
		strcpy(&cVar0, "ACTORROAM_SET_OPTIONS_FOR_ACTOR: invalid actor ", 64);
		stradd(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 64);
		return 0;
	}
	Function_59(bParam0, iParam1);
	return 1;
}

void Function_59(bool bParam0, bool bParam1) //Position: 0x4E5B / 20059
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_options", bParam1);
	return;
}

int Function_60(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x4E80 / 20096
{
	if (!IS_GRINGO_VALID(bParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(bParam2) != 0 || STRINGS_ARE_EQUAL(bParam2, ""))
	{
		return 0;
	}
	if (bParam3 <= 0)
	{
		bParam3 = 4294967295;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_VEHICLE(bParam0))
		{
			SQUAD_LEAVE(bParam0);
		}
		GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_GRINGO(bParam1), Global_6290);
		if (!(GET_TASK_STATUS(bParam0, 19) != 1 || GET_TASK_STATUS(bParam0, 19) != 3))
		{
			TASK_USE_GRINGO(bParam0, bParam1, bParam2, bParam3, 1);
			TASK_PRIORITY_SET(bParam0, bParam5);
		}
		Function_61(bParam0, 5, GET_OBJECT_FROM_GRINGO(bParam1), iParam4, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_61(bool bParam0, int iParam1, bool bParam2, var uParam3, int iParam4) //Position: 0x4F18 / 20248
{
	char* cVar0[32];
	
	Function_68();
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(bParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(bParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_67(bParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), Global_6290))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(bParam0), 32);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "(NAMELESS)", 32);
		}
		PRINTSTRING("Could not add ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
		LOG_ERROR("Could not add actor to actorroam. Report the offending script");
	}
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	if (iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 32, 0);
	}
	Function_66(bParam0, 0);
	Function_65(bParam0, iParam1);
	Function_64(bParam0, bParam2);
	Function_63(bParam0, uParam3);
	if (Function_62(bParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(bParam0, 0);
	}
	return 1;
}

int Function_62(bool bParam0) //Position: 0x5166 / 20838
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_63(bool bParam0, bool bParam1) //Position: 0x5189 / 20873
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_64(bool bParam0, bool bParam1) //Position: 0x51AC / 20908
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_65(bool bParam0, bool bParam1) //Position: 0x51D0 / 20944
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_66(bool bParam0, bool bParam1) //Position: 0x51F6 / 20982
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_67(bool bParam0) //Position: 0x5219 / 21017
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_68() //Position: 0x5237 / 21047
{
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		Global_6290 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(Global_16516))
	{
		Global_16516 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", Global_6290, 4294967295, 1);
	}
	return;
}

float Function_69(bool bParam0, bool bParam1) //Position: 0x5281 / 21121
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_71(bParam0);
			vVar0 = { StackVal, StackVal, Function_71(bParam0) };
			Function_70(bParam1);
			vVar3 = { StackVal, StackVal, Function_70(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_70(bool bParam0) //Position: 0x5321 / 21281
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

vector3 Function_71(bool bParam0) //Position: 0x538D / 21389
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

vector3 Function_72(bool bParam0) //Position: 0x53F7 / 21495
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

bool Function_73(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x541E / 21534
{
	int iVar0;
	
	if (bParam1)
	{
		Function_76(&iVar0, 1);
	}
	if (bParam2)
	{
		Function_76(&iVar0, 2);
	}
	if (bParam3)
	{
		Function_76(&iVar0, 4);
	}
	if (bParam4)
	{
		Function_76(&iVar0, 8);
	}
	if (bParam5)
	{
		Function_76(&iVar0, 1024);
	}
	if (bParam7)
	{
		Function_76(&iVar0, 16);
	}
	if (bParam8)
	{
		Function_76(&iVar0, 32);
	}
	if (bParam6)
	{
		Function_76(&iVar0, 1048576);
	}
	return Function_74(uParam0, iVar0);
}

int Function_74(bool bParam0, int iParam1) //Position: 0x548D / 21645
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_75(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_75(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_75(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_75(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_75(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_75(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_75(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_75(iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(bParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_75(var uParam0, int iParam1) //Position: 0x5566 / 21862
{
	return (uParam0 && iParam1) == 0;
}

void Function_76(int iParam0, int iParam1) //Position: 0x5573 / 21875
{
	Function_140(iParam0, iParam1);
	return;
}

int Function_77(bool bParam0, bool bParam1) //Position: 0x5580 / 21888
{
	vector3 vVar0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	Function_142(bParam0);
	vVar0 = { StackVal, StackVal, Function_142(bParam0) };
	TASK_SHOOT_FROM_POSITION(bParam0, bParam1, &vVar0);
	return 1;
}

void Function_78(bool bParam0, bool bParam1, bool bParam2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x55D7 / 21975
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_90(bParam0, Global_34573) >= IntToFloat(iParam5))
		{
			if (!IS_ACTOR_VALID(bParam1))
			{
				bParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
			if (bParam6)
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 0, 1))
					{
						uParam3 = uParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 1, 1))
				{
					uParam3 = uParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(bParam0, bParam2, true, true, iParam4, 0, false, true);
			}
		}
	}
}

void Function_79(bool bParam0, var uParam1) //Position: 0x5667 / 22119
{
	if (iLocal_147 == 0)
	{
		if (iLocal_117[2] == 299)
		{
			Function_78(bParam0, uParam1, "firstTimeEscalera_msg04", "firstTimeEscalera_msg04", 2, 60, 1, 1);
		}
		else if (iLocal_117[2] == 297)
		{
			if (Function_80())
			{
				Function_78(bParam0, uParam1, "eventExecutionMsg04", "eventExecutionMsg04", 2, 60, 1, 1);
			}
			else
			{
				Function_78(bParam0, uParam1, "eventExecutionMsg05", "eventExecutionMsg05", 2, 60, 1, 1);
			}
		}
		else if (iLocal_117[2] == 292)
		{
			if (Function_80())
			{
				Function_78(bParam0, uParam1, "eventExecutionMsg04", "eventExecutionMsg04", 2, 60, 1, 1);
			}
			else
			{
				Function_78(bParam0, uParam1, "eventExecutionMsg05", "eventExecutionMsg05", 2, 60, 1, 1);
			}
		}
		iLocal_147 = 1;
	}
	return;
}

bool Function_80() //Position: 0x57CF / 22479
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_81(bool bParam0, bool bParam1, int iParam2) //Position: 0x57E2 / 22498
{
	bool bVar0;
	
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(0, iParam2);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	TASK_PRIORITY_SET(bParam0, bParam1);
	return;
}

void Function_82(int iParam0) //Position: 0x5811 / 22545
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_39(409, 1, 0, 0);
	}
	return;
}

void Function_83() //Position: 0x5842 / 22594
{
	int iVar0;
	
	bLocal_149 = true;
	if (Global_29004 == 1)
	{
		iVar0 = Function_84(5);
		if (iVar0 == 0)
		{
			bLocal_148 = "MEX_SONG_01";
		}
		else if (iVar0 == 1)
		{
			bLocal_148 = "MEX_SONG_04";
		}
		else if (iVar0 == 2)
		{
			bLocal_148 = "MEX_SONG_05";
		}
		else if (iVar0 == 3)
		{
			bLocal_148 = "MEX_SONG_06";
		}
		else if (iVar0 == 4)
		{
			bLocal_148 = "MEX_SONG_07";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(bLocal_148, "SUSPENSE_LOW", -3.0f, 500, 4294967295, 3212836864, 0);
	return;
}

var Function_84(bool bParam0) //Position: 0x58F5 / 22773
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(false, bParam0) / 1000);
}

bool Function_85(var uParam0, bool bParam1) //Position: 0x590E / 22798
{
	if (Function_89(uParam0))
	{
		if (Function_86(uParam0) < bParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_86(int iParam0) //Position: 0x592A / 22826
{
	if (Function_89(iParam0))
	{
		if (Function_87(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_87(int iParam0) //Position: 0x59F2 / 23026
{
	return Function_88(*iParam0, 2);
}

bool Function_88(var uParam0, int iParam1) //Position: 0x59FF / 23039
{
	return (uParam0 && iParam1) == 0;
}

bool Function_89(int iParam0) //Position: 0x5A0C / 23052
{
	return Function_88(*iParam0, 1);
}

float Function_90(bool bParam0, bool bParam1) //Position: 0x5A19 / 23065
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	return VDIST(vVar0, vVar3);
}

void Function_91(bool bParam0, bool bParam1, int iParam2) //Position: 0x5B0A / 23306
{
	bool bVar0;
	
	if (iParam2 <= 10)
	{
		if (IS_ACTOR_VALID(bParam0))
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				switch (iLocal_155)
				{
					case 0x00000000:
						if (Function_90(Global_34573, bParam0) > 15.0f)
						{
							SAY_SINGLE_LINE_CONTEXT_OVER_PAIN(bParam0, 53, bParam1, 1, 0, 0, 4294967295, 4294967295, 0);
							iLocal_159++;
							iLocal_155 = 1;
						}
						break;
					
					case 0x00000001:
						if (!IS_AMBIENT_SPEECH_PLAYING(bParam0))
						{
							Function_188(&uLocal_156, 0.0f);
							bVar0 = RAND_FLOAT_RANGE(10.0f, 15.0f);
							iLocal_155 = 2;
						}
						break;
					
					case 0x00000002:
						if (Function_85(&uLocal_156, bVar0))
						{
							if (iLocal_159 <= 3)
							{
								iLocal_155 = 0;
							}
							else
							{
								iLocal_155 = 3;
							}
						}
						break;
					
					case 0x00000003:
						break;
					}
				}
			}
	}
	return;
}

void Function_92(bool bParam0, bool bParam1) //Position: 0x5BB5 / 23477
{
	if (iLocal_91 == 0)
	{
		if (Function_7(bParam0, 0))
		{
			if (Function_7(bParam1, 0))
			{
				if (GET_TASK_STATUS(bParam0, 35) != 1)
				{
					if (Function_90(bParam0, bParam1) > 10.0f)
					{
						TASK_POINT_GUN_AT_OBJECT(bParam0, bParam1, -1.0f, 0);
					}
				}
			}
		}
	}
	return;
}

bool Function_93(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x5BF7 / 23543
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_71(bParam0);
		if (VDIST(Function_71(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

var Function_94(bool bParam0) //Position: 0x5C81 / 23681
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_95(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_95(var uParam0, int iParam1) //Position: 0x5CBC / 23740
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*uParam0 = 65.0f;
		*iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*uParam0 = 115.0f;
		*iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
		else
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
	}
	return;
}

int Function_96(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5D45 / 23877
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	if (!Function_7(bParam0, 0))
	{
		return 1;
	}
	if (!Function_7(bParam1, 0))
	{
		return 1;
	}
	switch (bLocal_31)
	{
		case 0x00000003:
			bVar0 = "nKneelCase";
			bVar1 = "nEXIT_HOLD";
			fVar2 = 1.0f;
			break;
		
		case 0x00000002:
			bVar0 = "ShovedCase";
			bVar1 = "SHOVE_ASIDE";
			fVar2 = 0,78f;
			break;
	}
	switch (iLocal_151)
	{
		case 0x00000000:
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			Function_142(bParam0);
			bLocal_139 = CREATE_VOLUME_IN_LAYOUT(bParam2, Function_189(), false, Function_142(bParam0), 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
			DECOR_SET_BOOL(bParam0, "VolOnly", true);
			DECOR_SET_OBJECT(bLocal_109, "volume", bLocal_139);
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			SNAP_ACTOR_TO_GRINGO(bParam0, bLocal_109, "UseCase1", true, 0, 0);
			SNAP_ACTOR_TO_GRINGO(bParam1, bLocal_109, bVar0, true, 0, 0);
			TASK_USE_GRINGO(bParam0, GET_GRINGO_FROM_OBJECT(bLocal_109), "UseCase1", true, 1);
			TASK_USE_GRINGO(bParam1, GET_GRINGO_FROM_OBJECT(bLocal_109), bVar0, true, 1);
			iLocal_151 = 1;
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(bParam0, 19) == 1)
			{
				iLocal_151 = 2;
			}
			break;
		
		case 0x00000002:
			if (iLocal_130)
			{
				Function_188(&uLocal_152, 0.0f);
				iLocal_151 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_85(&uLocal_152, 0.0f))
			{
				DECOR_SET_BOOL(bLocal_109, bVar1, true);
				Function_188(&uLocal_152, 0.0f);
				iLocal_151 = 4;
			}
			break;
		
		case 0x00000004:
			if ((GET_TASK_STATUS(bParam0, 19) != 0 || Function_85(&uLocal_152, fVar2)) || GET_TASK_STATUS(bParam0, 19) != 4)
			{
				Function_72(bLocal_110);
				bLocal_140 = CREATE_VOLUME_IN_LAYOUT(bParam2, Function_189(), false, Function_72(bLocal_110), 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
				DECOR_SET_BOOL(bParam0, "VolOnly", true);
				DECOR_SET_OBJECT(bLocal_110, "volume", bLocal_140);
				TASK_FOLLOW_PATH(bParam0, fLocal_138, 2, 0, 0, 1, false);
				iLocal_151 = 5;
			}
			break;
		
		case 0x00000005:
			if (GET_TASK_STATUS(bParam0, 16) != 0 || Function_69(bParam0, bLocal_110) > 3,5f)
			{
				MEMORY_CLEAR_EVENTS(bParam0, 1);
				MEMORY_CLEAR_ALL(bParam0);
				MEMORY_CLEAR_EVENTS(bParam1, 1);
				MEMORY_CLEAR_ALL(bParam1);
				TASK_CLEAR(bParam0);
				TASK_CLEAR(bParam1);
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_110), true);
				iLocal_69 = 1;
				Function_60(bParam0, GET_GRINGO_FROM_OBJECT(bLocal_110), "UseCase1", 4294967295, 1, 0);
				Function_58(bParam0, 1);
				Function_99(bParam1, 0, 0, 2);
				iLocal_151 = 6;
			}
			break;
		
		case 0x00000006:
			return 1;
			break;
	}
	return 0;
}

int Function_97(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5FB2 / 24498
{
	if (!Function_7(bParam1, 0))
	{
		return 1;
	}
	switch (iLocal_151)
	{
		case 0x00000000:
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			Function_142(bParam0);
			bLocal_139 = CREATE_VOLUME_IN_LAYOUT(bParam2, Function_189(), false, Function_142(bParam0), 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
			DECOR_SET_BOOL(bParam0, "VolOnly", true);
			DECOR_SET_OBJECT(bLocal_109, "volume", bLocal_139);
			SNAP_ACTOR_TO_GRINGO(bParam1, bLocal_109, "UseCase1", true, 0, 0);
			SNAP_ACTOR_TO_GRINGO(bParam0, bLocal_109, "UseCase2", true, 0, 0);
			TASK_USE_GRINGO(bParam1, GET_GRINGO_FROM_OBJECT(bLocal_109), "UseCase1", true, 1);
			TASK_USE_GRINGO(bParam0, GET_GRINGO_FROM_OBJECT(bLocal_109), "UseCase2", true, 1);
			iLocal_151 = 1;
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(bParam1, 19) == 1)
			{
				Function_188(&uLocal_152, 0.0f);
				iLocal_151 = 2;
			}
			break;
		
		case 0x00000002:
			if (iLocal_130)
			{
				DECOR_SET_BOOL(bLocal_109, "EXIT_RIOT02", true);
				Function_188(&uLocal_152, 0.0f);
				iLocal_151 = 3;
			}
			break;
		
		case 0x00000003:
			if (!IS_ACTOR_VALID(bParam0))
			{
				KILL_ACTOR(bParam0);
				iLocal_68 = 1;
				Function_99(bParam1, 0, 0, 2);
				iLocal_151 = 4;
			}
			break;
		
		case 0x00000004:
			iLocal_151 = 5;
			break;
		
		case 0x00000005:
			iLocal_151 = 6;
			break;
		
		case 0x00000006:
			return 1;
			break;
	}
	return 0;
}

void Function_98(bool bParam0) //Position: 0x610D / 24845
{
	if (iLocal_91 == 0)
	{
		if (IS_ACTOR_VALID(bParam0))
		{
			if (Function_90(bParam0, Global_34573) > 8.0f)
			{
				if (GET_TASK_STATUS(bParam0, 35) != 1)
				{
					TASK_POINT_GUN_AT_OBJECT(bParam0, GET_OBJECT_FROM_ACTOR(Global_34573), -1.0f, 0);
					if (iLocal_150 == 0)
					{
						Function_78(bParam0, Global_34573, "eventExecutionMsg08", "eventExecutionMsg08", 5, 60, 1, 1);
						iLocal_150 = 1;
					}
				}
			}
			else if (GET_TASK_STATUS(bParam0, 35) == 1)
			{
				ACTOR_HOLSTER_WEAPON(bParam0, 1);
				TASK_STAND_STILL(bParam0, -1.0f, 0, 0);
			}
		}
	}
	return;
}

int Function_99(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x61A9 / 25001
{
	bool bVar0;
	bool bVar1;
	
	if (iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_VEHICLE(bParam0))
		{
			SQUAD_LEAVE(bParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
			{
				bVar1 = GET_DRAFT_ACTOR(bVar0, bParam0);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_61(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_61(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

void Function_100(bool bParam0) //Position: 0x6289 / 25225
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "nnostickup"))
		{
			DECOR_REMOVE(bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, true);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
		TASK_PRIORITY_SET(bParam0, 2);
	}
	return;
}

int Function_101(bool bParam0, bool bParam1) //Position: 0x62D5 / 25301
{
	if (IS_VOLUME_VALID(bParam0))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, bParam0))
		{
			Function_113(0x10000000);
			Function_102(4, 28, Function_112(), 0, 1);
			return 1;
		}
	}
	if (IS_VOLUME_VALID(bParam1))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, bParam1))
		{
			Function_113(0x10000000);
			Function_102(4, 28, Function_112(), 0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_102(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x632E / 25390
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_111(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_110(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(bParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(bParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_105(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	iVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(iVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(iVar3, iParam1);
		SET_CRIME_VICTIM(iVar3, bParam3);
		SET_CRIME_CRIMINAL(iVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(iVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(iVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(iVar3, vVar0);
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_189(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(iVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(iVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(iVar3, 3);
			Function_103();
		}
		SET_CRIME_FACTION(StackVal, iVar3);
		SET_CRIME_TALLIED(iVar3, 0);
		SET_CRIME_COUNTER(iVar3, 1);
		SET_CRIME_WORLD_REGION(iVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(iVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(iVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(iVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return iVar3;
}

void Function_103() //Position: 0x65BE / 26046
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_104(bVar0, bVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		iVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(iVar3))
		{
			SET_CRIME_WITNESSED(iVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_104(bool bParam0, bool bParam1) //Position: 0x6621 / 26145
{
	ITERATE_EVERYWHERE(bParam0);
	ITERATE_ON_OBJECT_TYPE(bParam0, 31);
	if (!bParam1 != "")
	{
		ITERATE_IN_SET(bParam0, bParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(bParam0, GET_ITERATOR_PARENT(bParam0));
	}
	return;
}

bool Function_105(bool bParam0) //Position: 0x6650 / 26192
{
	if (Function_109(256))
	{
		return 0;
	}
	if (Function_109(262144))
	{
		return 0;
	}
	if (Function_108())
	{
		return 0;
	}
	if (!Function_109(1))
	{
		return 0;
	}
	if (!Function_109(4096))
	{
		return 0;
	}
	if (bParam0 && Function_107(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_109(2048))
	{
		return 0;
	}
	if (Function_106() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

var Function_106() //Position: 0x66C6 / 26310
{
	return NET_IS_MANAGER_INITIALIZED();
}

int Function_107(int iParam0) //Position: 0x66CF / 26319
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_108() //Position: 0x66E0 / 26336
{
	if (Global_30619 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_109(int iParam0) //Position: 0x66F9 / 26361
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_110(int iParam0) //Position: 0x6717 / 26391
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_111(int iParam0) //Position: 0x672D / 26413
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_112() //Position: 0x6742 / 26434
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_113(int iParam0) //Position: 0x6757 / 26455
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_114(bool bParam0) //Position: 0x6774 / 26484
{
	if (!Global_3403)
	{
		if (IS_ACTOR_VALID(bParam0))
		{
			if (IS_ACTOR_ALIVE(bParam0))
			{
				if (GET_ACTORENUM_ACTOR_BASE_TYPE(GET_ACTOR_ENUM(bParam0)) == 1)
				{
					if ((!Function_115(Function_112(), 35) && !Function_115(Function_112(), 7)) && !Function_115(Function_112(), 12))
					{
						Function_102(1, 35, Function_112(), GET_OBJECT_FROM_ACTOR(bParam0), 1);
					}
				}
			}
		}
	}
	return;
}

bool Function_115(bool bParam0, bool bParam1) //Position: 0x67DB / 26587
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_104(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		iVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (GET_CRIME_CRIMINAL(iVar3) != bParam0 && GET_CRIME_TYPE(iVar3) != bParam1)
		{
			DESTROY_ITERATOR(bVar0);
			return 1;
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 0;
}

bool Function_116(bool bParam0, int iParam1, float fParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x6857 / 26711
{
	float fVar0;
	
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		if (IS_ACTOR_ON_FOOT(bParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, (fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		fVar0 = Function_90(bParam0, Global_34573);
		if (!Function_88(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*iParam1 = 8;
				Function_117(bParam0);
				return 1;
			}
		}
		if (!Function_88(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*iParam1 = 2;
				Function_117(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*iParam1 = 2;
				Function_117(bParam0);
				return 1;
			}
		}
		if (!Function_88(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*fParam2 > 0.0f)
				{
					*iParam1 = 4;
					Function_117(bParam0);
					return 1;
				}
				if (*fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *fParam2) < 1,3f)
					{
						*iParam1 = 4;
						Function_117(bParam0);
						return 1;
					}
				}
				*fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_88(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*iParam1 = 1;
				Function_117(bParam0);
				return 1;
			}
		}
		if (!Function_88(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*iParam1 = 16;
					Function_117(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_117(bool bParam0) //Position: 0x69EE / 27118
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_118(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_118(bool bParam0) //Position: 0x6A22 / 27170
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_119(bool bParam0) //Position: 0x6A39 / 27193
{
	return DECOR_CHECK_EXIST(bParam0, "nsharedlaw");
}

bool Function_120(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x6A50 / 27216
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_90(Global_34573, bParam1) > 15.0f)
				{
					*uParam2 = 1;
				}
			}
		}
		if (Global_3394 && !*uParam2)
		{
			return 0;
		}
		if ((Global_3367 && Global_6281 == GET_THIS_SCRIPT_ID()) && !*uParam2)
		{
			return 0;
		}
		if (Function_123() && !*uParam2)
		{
			return 0;
		}
		if (Function_122(iParam0) && !*uParam2)
		{
			return 0;
		}
		if (Global_3387 && !bParam4)
		{
			return 0;
		}
		if (Global_3410)
		{
			return 0;
		}
		if (Global_3384)
		{
			return 0;
		}
		if (Global_3403 && uParam7)
		{
			*uParam3 = 1;
			return 0;
		}
		if (Global_3404 && uParam7)
		{
			*uParam3 = 1;
			return 0;
		}
		if (Global_3392 && !*uParam2)
		{
			return 0;
		}
		if (Global_3393 && !*uParam2)
		{
			return 0;
		}
		if (bParam6)
		{
			if (Global_63096 && !*uParam2)
			{
				return 0;
			}
		}
		if (IS_ACTOR_ON_TRAIN(Global_34573, 0))
		{
			return 0;
		}
	}
	if (StackVal & 2048 != 2048)
	{
		if (!Function_121(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_121(int iParam0, int iParam1) //Position: 0x6B7E / 27518
{
	iParam0 = iParam0;
	if (Global_3382 != 1 && iParam1)
	{
		return 0;
	}
	if (Global_3369 == 1)
	{
		return 0;
	}
	return 1;
}

int Function_122(int iParam0) //Position: 0x6B9F / 27551
{
	bool bVar0;
	
	if (StackVal & 64 == 64)
	{
		bVar0 = GET_LAST_HIT_TIME(Global_34573);
		if (bVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(Global_34573)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_123() //Position: 0x6BDD / 27613
{
	int iVar0;
	int iVar1;
	
	if (Global_3386)
	{
		iVar1 = 9;
	}
	else
	{
		iVar1 = 22;
	}
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					if (StackVal != DECOR_GET_INT(GET_THIS_SCRIPT_ID(), "script"))
					{
						if (Function_69(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_69(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_124(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x6C98 / 27800
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!*iParam2)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 <= iParam1)
	{
		if (IS_ACTOR_VALID((*bParam0)[iVar1]))
		{
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*bParam0)[iVar1], 1.0f, iParam5, 1, 1, 0))
			{
				*iParam2 = 1;
				if (iParam4 != 0)
				{
					Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam4));
				}
			}
		}
		iVar1++;
	}
	if (*iParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_135(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_134(0);
		}
		if (bParam6)
		{
			Function_132(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Global_3401 = 1;
			Function_130(iParam3);
		}
		Function_128(iParam3);
		if (Function_127(StackVal, 32768))
		{
			Function_125(1);
		}
		Global_16876[iParam36].f_12++;
		Function_39(408, 1, 0, 0);
	}
}

void Function_125(bool bParam0) //Position: 0x6D85 / 28037
{
	if (bParam0)
	{
		Function_126(0x10000000);
	}
	else
	{
		Function_113(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_126(int iParam0) //Position: 0x6DA9 / 28073
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_127(var uParam0, int iParam1) //Position: 0x6DBC / 28092
{
	return (uParam0 && iParam1) == 0;
}

void Function_128(int iParam0) //Position: 0x6DC9 / 28105
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_88(StackVal, 524288))
	{
		if (Global_16876[iParam06].f_16 < 0 && Global_16876[iParam06].f_16 > 2)
		{
			iVar0 = 10;
		}
		else if (Global_16876[iParam06].f_16 <= 2 && Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 16;
		}
		else if (Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 24;
		}
		if (iVar0 >= 0)
		{
			bVar1 = Function_129(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_129(int iParam0) //Position: 0x6E6D / 28269
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_130(int iParam0) //Position: 0x6E83 / 28291
{
	struct<77> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Global_30842[16])
	{
		PRINTNL();
		PRINTSTRING("SAVE_BEAT_STATE: ");
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
		PRINTNL();
		PRINTSTRING("curIDX: ");
		PRINTINT(Var0.f_76);
		PRINTNL();
	}
	Function_131(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
	if (Var0.f_76 == 2)
	{
		Var0.f_76 = 0;
	}
	else
	{
		Var0.f_76++;
	}
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_131(var uParam0, var uParam1, int iParam2) //Position: 0x6F21 / 28449
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_132(int iParam0, int iParam1) //Position: 0x6F39 / 28473
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_25267[iVar058] != 128 || Global_25267[iVar058] != 64) && iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(Global_25267[iVar058].f_44) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(Global_25267[iVar058].f_44);
			Function_133(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_133(int iParam0) //Position: 0x6FBB / 28603
{
	iParam0->f_92 = 0;
	iParam0->f_4 = 0;
	iParam0->f_12 = 4294967295;
	iParam0->f_16 = "";
	*(iParam0 + 20) = { 0.0f, 0.0f, 0.0f };
	*(iParam0 + 32) = { 0.0f, 0.0f, 0.0f };
	iParam0->f_44 = "";
	iParam0->f_56 = "";
	iParam0->f_48 = 4294967295;
	iParam0->f_52 = "";
	iParam0->f_88 = 0.0f;
	iParam0->f_76 = 0;
	return;
}

void Function_134(int iParam0) //Position: 0x7009 / 28681
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_129(900)), 0);
	return;
}

void Function_135(int iParam0) //Position: 0x702B / 28715
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_129(200)), 0);
	return;
}

int Function_136(bool bParam0, int iParam1) //Position: 0x704C / 28748
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { -4335.0f, 26.0f, 4419.0f };
	vVar3 = { -4345.0f, 30,117f, 4379,21f };
	switch (iLocal_162)
	{
		case 0x00000000:
			if (Function_137(&vLocal_88, &bLocal_161))
			{
				*iParam1 = CREATE_ACTOR_IN_LAYOUT(bParam0, Function_189(), iLocal_117[3], vLocal_88, 0.0f, fLocal_62[3], 0.0f);
				SET_ACTOR_CAN_PLAY_GESTURES(*iParam1, false);
				iLocal_162 = 1;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID(*iParam1))
			{
				if (Function_90(*iParam1, Global_34573) > 30.0f)
				{
					bLocal_160 = TASK_SEQUENCE_OPEN();
					if (bLocal_161)
					{
						TASK_GO_TO_COORD_NONSTOP(0, &vVar0, 3, 3212836864);
					}
					TASK_GO_TO_COORD(false, &(vLocal_46[33]), 3);
					TASK_FACE_COORD(0, &vVar3, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(*iParam1, bLocal_160);
					TASK_SEQUENCE_RELEASE(bLocal_160, 1);
					iLocal_162 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID(*iParam1))
			{
				if (Function_90(Global_34573, *iParam1) > 20.0f)
				{
					Function_78(*iParam1, Global_34573, "eventFiringSquadMsg01", "eventFiringSquadMsg01", 5, 60, 1, 1);
					iLocal_162 = 3;
				}
			}
			break;
		
		case 0x00000003:
			return 1;
			break;
	}
	return 0;
}

bool Function_137(var uParam0, int iParam1) //Position: 0x718E / 29070
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	vVar0 = { -4329.0f, 28.0f, 4411.0f };
	vVar3 = { -4353.0f, 30.0f, 4404.0f };
	*uParam0 = { 0.0f, 0.0f, 0.0f };
	if (Function_139(StackVal, StackVal, Global_34573, vVar0) > 50.0f)
	{
		fVar6 = Function_139(StackVal, StackVal, Global_34573, vVar0);
		*iParam1 = 1;
		*uParam0 = { StackVal, StackVal, vVar0 };
	}
	if (Function_139(StackVal, StackVal, Global_34573, vVar3) > fVar6)
	{
		fVar6 = Function_139(StackVal, StackVal, Global_34573, vVar3);
		*iParam1 = 0;
		*uParam0 = { StackVal, StackVal, vVar3 };
	}
	if (Function_138(StackVal, StackVal, *uParam0))
	{
		return 0;
	}
	return 1;
}

bool Function_138(vector3 vParam0) //Position: 0x7224 / 29220
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

float Function_139(bool bParam0, vector3 vParam1) //Position: 0x723C / 29244
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_71(bParam0);
		vVar0 = { StackVal, StackVal, Function_71(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_140(int iParam0, int iParam1) //Position: 0x72B6 / 29366
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

vector3 Function_141() //Position: 0x72C5 / 29381
{
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_142(bool bParam0) //Position: 0x72CE / 29390
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_143(var uParam0, int iParam1) //Position: 0x72DF / 29407
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*uParam0, &uVar1);
	Function_147(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_144(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_144(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x7440 / 29760
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_145("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

struct<32> Function_145(bool bParam0) //Position: 0x74DB / 29915
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(cParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&cVar8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_146("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, bParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_6280++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_146(char* cParam0, char* cParam1, char* cParam2) //Position: 0x7545 / 30021
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_147(bool bParam0) //Position: 0x7564 / 30052
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					GET_VOLUME_CENTER(StackVal, &vVar1);
					if (IS_BLIP_VALID(StackVal))
					{
						REMOVE_BLIP(StackVal);
					}
					if (!IS_ACTOR_VALID(Global_34573))
					{
						Function_148(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_139(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_148(iVar0);
						}
					}
					else if (Function_139(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_148(iVar0);
					}
				}
				else if (DECOR_GET_INT(StackVal, "script") == bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(bParam0);
					RELEASE_VOLUME(StackVal);
				}
			}
		}
		else
		{
			Function_148(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_148(int iParam0) //Position: 0x76C5 / 30405
{
	if (IS_VOLUME_VALID(Global_26155[iParam05].f_12))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	}
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	RELEASE_VOLUME(StackVal);
	RELEASE_VOLUME(Global_26155[iParam05].f_12);
	return;
}

bool Function_149(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7726 / 30502
{
	bool bVar0;
	bool bVar1;
	
	if (Global_30842[16])
	{
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
	}
	uParam1 = uParam1;
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_3399 = 0;
		Function_151("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_17483[iParam075].f_116 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_3367)
			{
				if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_3367 = 1;
			Global_6281 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(Global_17483[iParam075].f_260);
		if (Global_30842[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_150(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_150(bVar0);
		}
		if (!bParam3)
		{
			ADD_TIME(&bVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, 0, 10, 0);
		}
		if (Global_30842[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_150(bVar0);
		}
		Global_17483[iParam075].f_264 = bVar0;
		Global_16876[iParam06] = bVar0;
		if (bParam2)
		{
			Global_16876[iParam06].f_4 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_17483[iParam075].f_116 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_3367)
				{
					if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_3367 = 1;
				Global_6281 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_150(bool bParam0) //Position: 0x7983 / 31107
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(bParam0));
	return;
}

void Function_151(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x79C9 / 31177
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Global_3422[Global_626940] + 12, iParam5);
	}
	else
	{
		iVar0 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar0, iParam5);
	}
}

int Function_152(bool bParam0, bool bParam1) //Position: 0x7A10 / 31248
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
		ITERATE_EVERYWHERE(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 2);
		ITERATE_ON_PARTIAL_NAME(bVar1, "nSharedLaw");
		bVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(bVar1));
		DESTROY_ITERATOR(bVar1);
	}
	else
	{
		bVar0 = bParam1;
	}
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(bParam0, bVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(bParam0, bVar0);
	CLEAN_OBJECTSET(bVar0);
	return 1;
}

int Function_153(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0x7A89 / 31369
{
	var uVar0[2];
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	Function_155(StackVal, StackVal, vParam0, &(uVar0[0]), &(uVar0[1]));
	iVar3 = 0;
	if (bParam3)
	{
		if (IS_GRINGO_VALID(uVar0[0]))
		{
			GRINGO_ENABLE_SPAWN(uVar0[0], 1);
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			GRINGO_ENABLE_SPAWN(uVar0[1], 1);
		}
	}
	else
	{
		if (IS_GRINGO_VALID(uVar0[0]))
		{
			bVar4 = GET_ACTOR_FROM_OBJECT(Function_154(uVar0[0], "UseCase1"));
			if (IS_ACTOR_VALID(bVar4) && !bVar4 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar4, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar4, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar4);
			}
			GRINGO_ENABLE_SPAWN(uVar0[0], 0);
			if (bParam4)
			{
				GRINGO_ALLOW_ACTIVATION(uVar0[0], false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			bVar5 = GET_ACTOR_FROM_OBJECT(Function_154(uVar0[1], "UseCase1"));
			if (IS_ACTOR_VALID(bVar5) && !bVar5 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar5, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar5, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar5);
			}
			GRINGO_ENABLE_SPAWN(uVar0[1], 0);
			if (bParam4)
			{
				GRINGO_ALLOW_ACTIVATION(uVar0[1], false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
	}
	return iVar3;
}

var Function_154(bool bParam0, bool bParam1) //Position: 0x7BEA / 31722
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_155(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x7BF7 / 31735
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
	*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
	*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
}

bool Function_156(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, var uParam7) //Position: 0x7CA1 / 31905
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, uParam7);
}

float Function_157() //Position: 0x7CBD / 31933
{
	float fVar0;
	var uVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_95(&fVar0, &uVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_158(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x7CEE / 31982
{
	var uVar0;
	int iVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	
	if (bParam3)
	{
		return 1;
	}
	bVar4 = false;
	Function_147(4294967295);
	iVar3 = 0;
	while (iVar3 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			bVar6 = DECOR_GET_INT(StackVal, "category");
			if (iParam2 != 0)
			{
				if (bVar6 != iParam2 && iParam2 != 256)
				{
					bVar4 = true;
				}
			}
			GET_VOLUME_CENTER(StackVal, &uVar0);
			if (iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(StackVal, *uParam0))
				{
					return 0;
				}
			}
			fVar5 = *uParam1;
			if (bVar4)
			{
				fVar5 = (fVar5 + 170.0f);
			}
			if (Global_3386 && bVar6 != 512)
			{
			}
			else if (Function_159(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_159(var uParam0, int iParam1) //Position: 0x7DBE / 32190
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

bool Function_160(int iParam0) //Position: 0x7DDC / 32220
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_165();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_164(iParam0[iVar03], 8);
		}
		else if (Function_163())
		{
			iVar1 = 1;
			Function_164(iParam0[iVar03], 8);
		}
		Function_164(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_4(iParam0[iVar03], 4))
		{
			if (!Function_4(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_4(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_4(iParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*iParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*iParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*iParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*iParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_164(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_4(iParam0[iVar03], 4))
		{
			if (!Function_4(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_164(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_164(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*iParam0)[iVar03], 4294967295))
						{
							Function_164(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_164(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_164(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_164(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_164(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_164(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_164(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_164(iParam0[iVar03], 2);
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
	Function_161();
	return 1;
}

void Function_161() //Position: 0x8157 / 33111
{
	if (!Function_162(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_162(int iParam0) //Position: 0x8197 / 33175
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_163() //Position: 0x81B3 / 33203
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == Global_63541[iVar055].f_196)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_164(var uParam0, int iParam1) //Position: 0x81DE / 33246
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_165() //Position: 0x81EF / 33263
{
	if (!Function_162(128))
	{
		return;
	}
	if (Global_13152.f_68 == 0)
	{
		strcpy(&Global_13152, "nStreaming", 64);
		Global_13152.f_68 = 1;
		Global_13152.f_64 = GET_CURRENT_GAME_TIME();
		Global_13152.f_72 = Global_13133.f_64;
	}
	return;
}

void Function_166(bool bParam0) //Position: 0x8231 / 33329
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		SET_DRAW_ACTOR(*bParam0, true);
		CLEAR_ACTOR_MAX_SPEED(*bParam0);
		if (IS_ACTOR_ANIMAL(*bParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*bParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 0, true);
			MEMORY_ALLOW_SHOOTING(*bParam0, true);
		}
	}
	return;
}

void Function_167(bool bParam0, int iParam1) //Position: 0x8273 / 33395
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_166(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_168(int iParam0) //Position: 0x82A0 / 33440
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, false);
		SET_ACTOR_MAX_SPEED(*iParam0, 5);
		if (IS_ACTOR_ANIMAL(*iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*iParam0), 0, 0);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, false);
			MEMORY_ALLOW_SHOOTING(*iParam0, false);
		}
	}
	return;
}

void Function_169(var uParam0, int iParam1) //Position: 0x82E3 / 33507
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_168(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_170(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x8310 / 33552
{
	if (Global_63096 && !GET_THIS_SCRIPT_ID() != Global_63116)
	{
		*uParam3 = 0;
		if (!*uParam0)
		{
			*uParam0 = 1;
			if ((*uParam1 < 2 && *uParam1 > 5) && uParam4)
			{
				*uParam2 = *uParam1;
				*uParam1 = 7;
			}
			else
			{
				*uParam1 = 6;
				return 0;
			}
			return 1;
		}
	}
	if (*uParam0)
	{
		*uParam0 = 0;
		*uParam1 = *uParam2;
		return 1;
	}
	return 0;
}

bool Function_171(int iParam0) //Position: 0x8378 / 33656
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_3403;
}

void Function_172(bool bParam0) //Position: 0x83EE / 33774
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

void Function_173(bool bParam0, int iParam1) //Position: 0x83F9 / 33785
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		ADD_AMBIENT_SPAWN_TYPE_RESTRICTION((*bParam0)[iVar0]);
		iVar0++;
	}
	return;
}

var Function_174(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x841B / 33819
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_4(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = bParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_164(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_164(bParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (bParam1 == (*bParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_175(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x84EB / 34027
{
	return Function_176(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_176(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x84FF / 34047
{
	return Function_177(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_177(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x8518 / 34072
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_183();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, fParam5, vParam6);
	if (!Function_182(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_181(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_181(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_180(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_182(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_180(bVar0))
				{
					Function_179();
				}
				Function_178(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_182(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (bParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return bVar0;
}

void Function_178(int iParam0) //Position: 0x880B / 34827
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			(*&Global_30742 + 8)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_179() //Position: 0x88BF / 35007
{
	int iVar0;
	
	if (Global_3402)
	{
		Global_30742 = GET_THIS_SCRIPT_ID();
		Global_30742.f_4 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		(*&Global_30742 + 8)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_180(bool bParam0) //Position: 0x88F9 / 35065
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_181(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x8926 / 35110
{
	bool bVar0;
	
	PRINTSTRING("NoDupes=");
	if (bParam1)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  RANDACTOR_FILTER=");
	PRINTINT(bParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(bParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(bParam0, bParam2, bParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		bVar0++;
	}
}

bool Function_182(bool bParam0) //Position: 0x8A77 / 35447
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_183() //Position: 0x8A8E / 35470
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_179();
		}
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_179();
	return;
}

bool Function_184(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x8AD9 / 35545
{
	int iVar0;
	bool bVar1[40];
	int iVar42;
	bool bVar43;
	int iVar44;
	var uVar45;
	bool bVar46;
	
	if (iParam0 < 4294967295)
	{
		return 4294967295;
	}
	if (iParam1 > 1204)
	{
		return 4294967295;
	}
	if (iParam2 > 4294967295 || iParam2 <= 1204)
	{
		return 4294967295;
	}
	iVar0 = (iParam1 - iParam0) + 1;
	if (iVar0 < 40 || iVar0 > 1)
	{
		LOG_ERROR("GET_RANDOM_ACTORENUM_FILTERED passed a range with more than 40 enums or less than 1");
		return 4294967295;
	}
	iVar44 = 0;
	iVar42 = 0;
	while (iVar42 <= iVar0)
	{
		bVar43 = (iParam0 + iVar42);
		if (((bVar43 == iParam2 && bVar43 == iParam3) && bVar43 == iParam4) && !STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(bVar43), "_cs"))
		{
			bVar1[iVar44] = bVar43;
			iVar44++;
		}
		iVar42++;
	}
	if (iVar44 == 0)
	{
		return 4294967295;
	}
	bVar46 = RAND_INT_RANGE(false, (iVar44 - 1));
	uVar45 = bVar1[bVar46];
	return uVar45;
}

int Function_185(int iParam0, int iParam1) //Position: 0x8BEF / 35823
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

var Function_186(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x8C05 / 35845
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_187(iParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_164(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_187(var uParam0, int iParam1, int iParam2) //Position: 0x8C3D / 35901
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_164(uParam0[iVar03], 4);
			return iVar0;
		}
		if (StackVal && iParam1 != (*uParam0)[iVar03] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_188(var uParam0, float fParam1) //Position: 0x8D01 / 36097
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_140(uParam0, 1);
	Function_47(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

var Function_189() //Position: 0x8D22 / 36130
{
	var uVar0;
	
	return uVar0;
}

