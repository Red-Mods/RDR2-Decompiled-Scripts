//Decompiled with MagicRDR v1.0
//Function Count : 100
//Statics Count : 203
//Natives Count : 129
//Parameters Count : 0

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	int iLocal_10 = 0;
	float fLocal_11 = 0.0f;
	struct<105> Local_12 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6 } ;
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
	var uLocal_137 = 6;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
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
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	bool bLocal_201 = false;
	bool bLocal_202 = false;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	var uVar4;
	
	iLocal_10 = 0;
	fLocal_11 = 1.0f;
	iLocal_40 = 0;
	Function_99();
	if (Function_97())
	{
		while (!IS_EXITFLAG_SET())
		{
			Function_64(14346, 13218);
			WAIT(false);
		}
		TERMINATE_THIS_SCRIPT();
	}
	if (!IS_LAYOUTREF_VALID(bLocal_201))
	{
		bLocal_201 = CREATE_LAYOUT("GamblingPoleLayout");
	}
	Function_63();
	if (!IS_OBJECTSET_VALID(bLocal_202))
	{
		bLocal_202 = CREATE_OBJECTSET_IN_LAYOUT(Function_62(), bLocal_201, 12, 0);
	}
	uVar0 = 1;
	Function_60(&uVar0, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	while (!Function_54(&uVar0))
	{
		WAIT(10);
	}
	if (Global_79349.f_40 == Global_30685[0])
	{
		ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(bLocal_201, "rand_idle_stand1", "rand_idle_stand", -4294.371f, 26.74f, 4384.031f, 0.0f, -145.58f, 0.0f), bLocal_202);
		ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(bLocal_201, "rand_idle_stand2", "rand_idle_stand", -4288.5f, 26.74f, 4382.57f, 0.0f, 77.99f, 0.0f), bLocal_202);
		ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(bLocal_201, "rand_idle_stand3", "rand_idle_stand", -4290.9f, 26.74f, 4379.9f, 0.0f, -175.96f, 0.0f), bLocal_202);
		ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(bLocal_201, "rand_idle_stand4", "rand_idle_stand", -4292.62f, 26.74f, 4385.173f, 0.0f, -18.457f, 0.0f), bLocal_202);
		ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(bLocal_201, "rand_idle_stand5", "rand_idle_stand", -4290.74f, 26.74f, 4385.02f, 0.0f, 0.0f, 0.0f), bLocal_202);
		ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(bLocal_201, "rand_idle_stand6", "rand_idle_stand", -4292.89f, 26.74f, 4382.24f, 0.0f, -116.72f, 0.0f), bLocal_202);
	}
	else if (Global_79349.f_40 == Global_30668[1])
	{
		ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(bLocal_201, "rand_idle_stand1", "rand_idle_stand", 165.969f, 73.75f, 2233.938f, 0.0f, -82.71f, 0.0f), bLocal_202);
		ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(bLocal_201, "rand_idle_stand2", "rand_idle_stand", 162.454f, 73.75f, 2232.209f, 0.0f, -62.024f, 0.0f), bLocal_202);
		ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(bLocal_201, "rand_idle_stand3", "rand_idle_stand", 167.25f, 73.75f, 2228.51f, 0.0f, 132.68f, 0.0f), bLocal_202);
		ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(bLocal_201, "rand_idle_stand4", "rand_idle_stand", 167.25f, 73.75f, 2231.68f, 0.0f, 83.75f, 0.0f), bLocal_202);
		ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(bLocal_201, "rand_idle_stand5", "rand_idle_stand", 163.87f, 73.75f, 2229.63f, 0.0f, -110.17f, 0.0f), bLocal_202);
		ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(bLocal_201, "rand_idle_stand6", "rand_idle_stand", 165.0181f, 73.75f, 2228.41f, 0.0f, -155.9f, 0.0f), bLocal_202);
	}
	else if (Global_79349.f_40 == Global_30707[2])
	{
		ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(bLocal_201, "rand_idle_stand1", "rand_idle_stand", -790.79f, 13.16f, 3695.98f, 0.0f, 180.661f, 0.0f), bLocal_202);
		ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(bLocal_201, "rand_idle_stand2", "rand_idle_stand", -787.498f, 13.16f, 3698.06f, 0.0f, 118.831f, 0.0f), bLocal_202);
		ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(bLocal_201, "rand_idle_stand3", "rand_idle_stand", -787.956f, 13.16f, 3700.553f, 0.0f, -88.265f, 0.0f), bLocal_202);
		ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(bLocal_201, "rand_idle_stand4", "rand_idle_stand", -792.408f, 13.16f, 3697.916f, 0.0f, -94.106f, 0.0f), bLocal_202);
		ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(bLocal_201, "rand_idle_stand5", "rand_idle_stand", -791.841f, 13.16f, 3699.641f, 0.0f, 284.812f, 0.0f), bLocal_202);
		ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(bLocal_201, "rand_idle_stand6", "rand_idle_stand", -790.374f, 13.16f, 3701.906f, 0.0f, 0.0f, 0.0f), bLocal_202);
	}
	Function_53(bLocal_201);
	Function_52(bLocal_202);
	Function_50(1);
	while (!IS_EXITFLAG_SET())
	{
		if (!Function_49(1, 1))
		{
			Function_64(14346, 13218);
			Function_48();
		}
		else
		{
			Function_19(&uVar4);
			Function_16();
			Function_5(StackVal, StackVal, 3534, Function_16(), 1, 3072);
		}
		WAIT(false);
	}
	Function_1(&uVar0);
	DESTROY_LAYOUT(bLocal_201);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x636 / 1590
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

void Function_2(var uParam0, int iParam1) //Position: 0x65C / 1628
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

void Function_3(var uParam0, int iParam1) //Position: 0x78A / 1930
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(int iParam0, bool bParam1) //Position: 0x7A4 / 1956
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x7C1 / 1985
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_6(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 2882, 1, 125, 0, 0, 0);
	Function_6(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_6(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x844 / 2116
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_7(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_7(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x88F / 2191
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	bool bVar10;
	vector3 vVar11;
	float fVar14;
	
	if (!HUD_IS_FADED())
	{
		fVar0 = (fParam4 - iParam0->f_44);
		vVar1 = { StackVal, StackVal, Vector(vParam7, StackVal, StackVal) + Vector(0.0f, (SIN_DEGREE((75.0f * fVar0)) * 0.01f), 0.0f) };
		fVar4 = VDIST2(vParam1, vVar1);
		if (fVar4 > 2.25f || fVar4 <= 625.0f)
		{
			Function_9(iParam0);
			return;
		}
		vParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vParam1, StackVal) };
		fVar5 = fLocal_11;
		if (iParam10 == 1)
		{
			fVar5 = -1.0f;
		}
		else if (iParam0->f_40 != 0 && uParam12)
		{
			fVar5 = 14.0f;
		}
		vVar6 = { StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 20), vParam1, StackVal), StackVal, StackVal) * Vector(0.5f, 0.5f, 0.5f) };
		*(iParam0 + 20) = { StackVal, StackVal, vVar6 };
		fVar9 = (UNK_0xADF7D54B(&vVar6) + 3.14159f);
		bVar10 = false;
		if (iParam0->f_32 == 0)
		{
			if (fVar0 <= fVar5 && fVar5 <= 0.0f)
			{
				RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(bParam6, "HUD_STINGER_TEXT_MASTER"));
				iParam0->f_32 = 1;
			}
			fVar9 = (fVar9 + (SIN_DEGREE((100.0f * fVar0)) * 0.1f));
			bVar10 = true;
		}
		else
		{
			iParam0->f_36 = (iParam0->f_36 + (17.0f * fParam5));
			if (iParam0->f_32 == 1)
			{
				if (FABS((iParam0->f_36 - fVar9)) <= (3.14159f * 0.5f))
				{
					iParam0->f_32 = 2;
					iParam0->f_36 = (iParam0->f_36 - 3.14159f);
					iParam0->f_40++;
					if (iParam0->f_40 > iParam10)
					{
						iParam0->f_40 = 0;
					}
					Function_9(iParam0);
				}
			}
			else if ((iParam0->f_36 - fVar9) <= 0.0f)
			{
				iParam0->f_32 = 0;
				iParam0->f_44 = fParam4;
				if (iParam0->f_36 < fVar9)
				{
					bVar10 = true;
				}
			}
		}
		if (FABS((iParam0->f_36 - fVar9)) > 0.0001f)
		{
			return;
		}
		if (bVar10)
		{
			iParam0->f_36 = fVar9;
		}
		vVar11 = { 0.01f, -0.01f, -0.01f };
		ROTATE_VECTOR_XZ(&vVar11, iParam0->f_36, 1);
		if (!IS_OBJECT_VALID(*iParam0))
		{
			Stack.Push(bParam6);
			Stack.Push(uParam15);
			Stack.Push(iParam0->f_40);
			Stack.Push(uParam14);
			Call_Loc(uParam11);
			*iParam0 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, vVar1, 0.0f, iParam0->f_36, 0.0f, iParam13);
			if (iParam16 >= 4294967295)
			{
				Stack.Push(bParam6);
				Stack.Push("");
				Stack.Push(iParam0->f_40);
				Stack.Push(uParam14);
				Call_Loc(uParam11);
				iParam0->f_4 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal), 0.0f, iParam0->f_36, 0.0f, iParam16);
			}
		}
		else
		{
			fVar14 = Function_8(iParam0->f_36);
			SET_OBJECT_POSITION(*iParam0, vVar1);
			if (!SET_OBJECT_ORIENTATION(*iParam0, 0.0f, fVar14, 0.0f))
			{
			}
			if (iParam16 >= 4294967295)
			{
				SET_OBJECT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal));
				if (!SET_OBJECT_ORIENTATION(StackVal, 0.0f, fVar14, 0.0f))
				{
				}
			}
		}
	}
}

var Function_8(float fParam0) //Position: 0xB0E / 2830
{
	return (fParam0 * 57.29578f);
}

void Function_9(int iParam0) //Position: 0xB1C / 2844
{
	if (IS_OBJECT_VALID(*iParam0))
	{
		DESTROY_OBJECT(*iParam0);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	return;
}

var Function_10(int iParam0, var uParam1) //Position: 0xB42 / 2882
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_12.f_96 != iParam0)
	{
		Local_12.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_11(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

struct<64> Function_11(int iParam0) //Position: 0xBA7 / 2983
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_12(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_12(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xBBB / 3003
{
	char* cVar0[64];
	
	if (bParam29)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 48) };
	}
	else
	{
		strcpy(&cVar0, UI_GET_STRING(&iParam0 + 48), 64);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "nINVALID!?", 64);
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_13(var uParam0, var uParam1) //Position: 0xC00 / 3072
{
	uParam1 = uParam1;
	uParam0 = uParam0;
	if (NET_GET_PLAYMODE() == 0)
	{
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("LiarsDice_summary"), I2STR(Function_15(Global_79349.f_40)), I2STR(Function_14(599)), false);
		return "mp_lobby_summary";
	}
	return "";
}

int Function_14(int iParam0) //Position: 0xC72 / 3186
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

int Function_15(int iParam0) //Position: 0xCB3 / 3251
{
	if (iParam0 == Global_30685[0])
	{
		return 10;
	}
	if (iParam0 == Global_30668[1])
	{
		return 100;
	}
	if (iParam0 == Global_30707[2])
	{
		return 25;
	}
	LOG_ERROR("Returning invalid ante");
	return 500000;
}

vector3 Function_16() //Position: 0xD09 / 3337
{
	vector3 vVar0;
	
	Function_17(Global_79349.f_40);
	vVar0 = { StackVal, StackVal, Function_17(Global_79349.f_40) };
	vVar0.f_4 = (vVar0.y - 1.25f);
	return StackVal, StackVal, vVar0;
}

vector3 Function_17(int iParam0) //Position: 0xD2E / 3374
{
	if (iParam0 == Global_30685[0])
	{
		return -4289.077f, 27.542f, 4380.94f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 168.1746f, 74.54424f, 2222.892f;
	}
	if (iParam0 == Global_30707[2])
	{
		return -789.002f, 13.965f, 3698.875f;
	}
	if (iParam0 == Global_30717[0])
	{
		return 857.259f, 78.3169f, 1277.636f;
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

var Function_18() //Position: 0xDCE / 3534
{
	bool bVar0;
	vector3 vVar1;
	
	if (IS_LAYOUTREF_VALID(bLocal_201))
	{
		Function_16();
		vVar1 = { StackVal, StackVal, Function_16() };
		bVar0 = CREATE_POINT_IN_LAYOUT(bLocal_201, "TableCenterForPole", vVar1, 0.0f, 0.0f, 0.0f);
		if (!IS_OBJECT_VALID(bVar0))
		{
		}
	}
	return bVar0;
}

void Function_19(int iParam0) //Position: 0xE11 / 3601
{
	bool bVar0;
	
	if (!*iParam0)
	{
		if (!DECOR_CHECK_EXIST(Function_47(), "TMS_WillOverrideGambling"))
		{
			Function_46(0, 1440);
			Function_46(1, 200);
			Function_46(2, 10080);
			Function_46(3, 250);
			Function_45(0, 250.0f);
			Function_45(1, 150.0f);
			Function_45(2, 50.0f);
			bVar0 = true;
		}
		else if (DECOR_CHECK_EXIST(Function_44(), "TMS_OverrodeGambling"))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (NET_GET_PLAYMODE() == 0)
			{
				if (Function_25(iParam0 + 4, iParam0 + 8))
				{
					Function_22(0x4000000, 0);
				}
				else
				{
					Function_22(0x4000000, 1);
				}
			}
			else
			{
				Function_22(0x4000000, 0);
			}
			*iParam0 = 1;
		}
	}
	if (StackVal || StackVal)
	{
		if (!HUD_IS_FADED())
		{
			Function_20(StackVal, StackVal);
			iParam0->f_8 = 0;
			iParam0->f_4 = 0;
		}
	}
	return;
}

void Function_20(bool bParam0, int iParam1) //Position: 0xF0B / 3851
{
	char* cVar0[64];
	int iVar16;
	int iVar17;
	bool bVar18;
	
	if (!(bParam0 || iParam1))
	{
		return;
	}
	HUD_CLEAR_HELP();
	HUD_CLEAR_HELP_QUEUE();
	strcpy(&cVar0, "nGambling_", 64);
	if (bParam0)
	{
		stradd(&cVar0, "A_Help", 64);
		iVar16 = 0;
		iVar17 = 1;
	}
	else
	{
		stradd(&cVar0, "S_Help", 64);
		iVar16 = 2;
		iVar17 = 3;
	}
	bVar18 = (Function_21(iVar16) / 60);
	if (bVar18 > 24)
	{
		bVar18 = (bVar18 / 24);
	}
	else
	{
		stradd(&cVar0, "H", 64);
	}
	if (bVar18 == 1)
	{
		stradd(&cVar0, "_Single", 64);
		PRINT_HELP_FORMAT(9.0f, &cVar0, I2STR(Function_21(iVar17)), false, 0, 0, 2, 0, 0);
	}
	else
	{
		stradd(&cVar0, "_Plural", 64);
		PRINT_HELP_FORMAT(9.0f, &cVar0, I2STR(Function_21(iVar17)), I2STR(bVar18), 0, 0, 2, 0, 0);
	}
	return;
}

int Function_21(int iParam0) //Position: 0xFDB / 4059
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

void Function_22(int iParam0, bool bParam1) //Position: 0xFFB / 4091
{
	if (bParam1)
	{
		Function_24(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_23(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0x1036 / 4150
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_24(var uParam0, int iParam1) //Position: 0x1049 / 4169
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_25(int iParam0, int iParam1) //Position: 0x1058 / 4184
{
	if (NET_ARE_UNLOCKS_READY() && NET_IS_UNLOCKED(12))
	{
		if (GET_UTC_TIME() - Function_14(601)) > Function_21(2)
		{
			Function_42(Function_21(3), 1);
			*iParam1 = 1;
			Function_28(601, GET_UTC_TIME(), 0);
		}
	}
	if (!Function_27())
	{
		if (GET_UTC_TIME() - Function_14(600)) > Function_21(0)
		{
			Function_42(Function_21(1), 1);
			*iParam0 = 1;
			Function_28(600, GET_UTC_TIME(), 0);
		}
		else if (Function_26("netPokerBot"))
		{
			Function_42(300, 1);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool Function_26(bool bParam0) //Position: 0x10E8 / 4328
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

bool Function_27() //Position: 0x1107 / 4359
{
	if (Function_14(599) > Function_15(Global_79349.f_40))
	{
		return 1;
	}
	return 0;
}

int Function_28(int iParam0, bool bParam1, bool bParam2) //Position: 0x1125 / 4389
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
		Function_41(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_40(iParam0);
	if (bParam2)
	{
		Function_29(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x13C0 / 5056
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_39(390))), 32);
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
					bVar19 = (Function_38(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_38(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_36(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_33(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_30(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_62(), &Var9);
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

var Function_30(int iParam0) //Position: 0x19ED / 6637
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_31(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x19FE / 6654
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_32(char* cParam0, bool bParam1) //Position: 0x1AF3 / 6899
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_33(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1B0C / 6924
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_35(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_34(Function_35(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_34(int iParam0, int iParam1) //Position: 0x1B71 / 7025
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_35(int iParam0, bool bParam1) //Position: 0x1B83 / 7043
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_36(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1B95 / 7061
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
	if (((Function_37(iParam0) != 19 || Function_37(iParam0) != 17) || Function_37(iParam0) != 10) || Function_37(iParam0) != 9)
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

int Function_37(int iParam0) //Position: 0x1CC5 / 7365
{
	return Global_35278[iParam020].f_48;
}

float Function_38(int iParam0) //Position: 0x1CD4 / 7380
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_39(int iParam0) //Position: 0x1D0D / 7437
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_40(int iParam0) //Position: 0x1D4A / 7498
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

int Function_41(int iParam0, bool bParam1, bool bParam2) //Position: 0x1EE4 / 7908
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

int Function_42(int iParam0, int iParam1) //Position: 0x2128 / 8488
{
	Function_43(599, iParam0, iParam1, 0);
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_14(599));
	UI_SET_STRING("nMPDollars", I2STR(Function_14(599)));
	if (NET_GET_PLAYMODE() == 0)
	{
		UI_SET_STRING("MPBalance2", UI_GET_STRING("nMPBalance"));
	}
	return 1;
}

int Function_43(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x219E / 8606
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
	Function_41(iParam0, TO_FLOAT(bParam1), 1);
	Function_40(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_29(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, uParam3);
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

var Function_44() //Position: 0x23BE / 9150
{
	return Global_83591.f_140;
}

void Function_45(int iParam0, int iParam1) //Position: 0x23CA / 9162
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 32)[iParam0] = iParam1;
	return;
}

void Function_46(int iParam0, int iParam1) //Position: 0x23EB / 9195
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

var Function_47() //Position: 0x240C / 9228
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_48() //Position: 0x243B / 9275
{
	if (IS_OBJECT_VALID(Local_12.f_104))
	{
		DESTROY_OBJECT(Local_12.f_104);
		Function_9(&Local_12);
	}
	return;
}

bool Function_49(int iParam0, bool bParam1) //Position: 0x2457 / 9303
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_50(int iParam0) //Position: 0x2477 / 9335
{
	Function_51(8, iParam0);
	return;
}

void Function_51(int iParam0, bool bParam1) //Position: 0x2484 / 9348
{
	if (bParam1)
	{
		Function_24(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_23(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

void Function_52(bool bParam0) //Position: 0x24AC / 9388
{
	DECOR_SET_OBJECT(Function_44(), "LobbyGringoSet", bParam0);
	return;
}

void Function_53(int iParam0) //Position: 0x24CC / 9420
{
	Global_83591.f_140 = iParam0;
	return;
}

bool Function_54(int iParam0) //Position: 0x24DA / 9434
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_59();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_58(iParam0[iVar03], 8);
		}
		else if (Function_57())
		{
			iVar1 = 1;
			Function_58(iParam0[iVar03], 8);
		}
		Function_58(iParam0[iVar03], 16);
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
				Function_58(iParam0[iVar03], 1);
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
							Function_58(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_58(iParam0[iVar03], 2);
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
							Function_58(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_58(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_58(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_58(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_58(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_58(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_58(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_58(iParam0[iVar03], 2);
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
	Function_55();
	return 1;
}

void Function_55() //Position: 0x2855 / 10325
{
	if (!Function_56(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_56(int iParam0) //Position: 0x2895 / 10389
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_57() //Position: 0x28B1 / 10417
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

void Function_58(var uParam0, int iParam1) //Position: 0x28DC / 10460
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_59() //Position: 0x28ED / 10477
{
	if (!Function_56(128))
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

var Function_60(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x292F / 10543
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_61(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_58(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_61(var uParam0, int iParam1, int iParam2) //Position: 0x2967 / 10599
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_58(uParam0[iVar03], 4);
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

var Function_62() //Position: 0x2A2B / 10795
{
	var uVar0;
	
	return uVar0;
}

void Function_63() //Position: 0x2A33 / 10803
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

void Function_64(int iParam0, int iParam1) //Position: 0x2A43 / 10819
{
	Function_65(iParam0, iParam1, 13211);
	return;
}

void Function_65(var uParam0, var uParam1, int iParam2) //Position: 0x2A54 / 10836
{
	if (Function_77(0x4000000))
	{
		Function_76();
		Function_75(0x4000000, 0, 1);
	}
	if (Function_77(0x10000000))
	{
		Function_76();
		Function_75(0x10000000, 0, 1);
	}
	if (Function_77(2) != Function_77(0x2000000))
	{
		Function_76();
		Function_75(0x2000000, Function_77(2), 1);
	}
	if (Function_74())
	{
		Function_73(!Function_77(16));
	}
	if (Function_77(16))
	{
		Function_67(&uParam0, &uParam1, &iParam2);
		if (Function_77(8192))
		{
			if (!Function_77(4194304))
			{
				Function_75(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_77(8388608))
			{
				Function_75(8388608, 1, 1);
				UI_HIDE("Splash_Message");
				UI_HIDE("Splash_Objective");
				UI_HIDE("Subtitle_Enabler");
				UI_EXCLUDE("Splash_Message");
				UI_EXCLUDE("Splash_Objective");
				UI_EXCLUDE("Subtitle_Enabler");
				SET_HUD_MAP_DRAW_ENABLED(0);
			}
		}
		else
		{
			Function_66();
		}
		Function_75(16384, 1, 1);
	}
	else if (!Function_77(32))
	{
		Function_66();
	}
	Function_75(32768, 0, 1);
	return;
}

void Function_66() //Position: 0x2BED / 11245
{
	if (Function_77(4194304))
	{
		Function_75(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_77(8388608))
	{
		Function_75(8388608, 0, 1);
		UI_INCLUDE("Splash_Message");
		UI_INCLUDE("Splash_Objective");
		UI_INCLUDE("Subtitle_Enabler");
		if (!UI_IS_MESSAGE_QUEUE_EMPTY(0))
		{
			UI_SHOW("Splash_Message");
		}
		if (!UI_IS_MESSAGE_QUEUE_EMPTY(2))
		{
			UI_SHOW("Splash_Objective");
		}
		UI_SHOW("Subtitle_Enabler");
		SET_HUD_MAP_DRAW_ENABLED(1);
	}
	return;
}

void Function_67(var uParam0, var uParam1, int iParam2) //Position: 0x2CF6 / 11510
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_75(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_77(0x40000000);
	bVar3 = !Function_77(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_72(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_70(bVar1, 2048, 1))
			{
				iVar0 = 4294967294;
			}
			else
			{
				Stack.Push(bVar1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push("");
				Call_Loc(*uParam1);
				iVar0 = StackVal;
			}
			if (iVar0 == 0 && bVar3)
			{
				if (Function_68(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_77(4))
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, UI_GET_STRING("mp_list_joined_late"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
					}
					else
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(1);
					}
				}
			}
			else
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		else if (bVar2)
		{
			if (Function_68(bVar1, (4294966296 - bVar1), 1))
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		bVar1++;
	}
	Call_Loc(*iParam2);
	if (!StackVal)
	{
		return;
	}
	return;
}

bool Function_68(bool bParam0, bool bParam1, int iParam2) //Position: 0x2E6E / 11886
{
	var uVar0;
	
	return Function_69(bParam0, bParam1, &uVar0, iParam2);
}

int Function_69(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x2E7F / 11903
{
	char* cVar0[32];
	
	if (NET_PLAYER_LIST_SET_CURRENT_ITEM_BY_SLOT(bParam0) != 4294967295)
	{
		*uParam2 = 0;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_PRIORITY(iParam1);
		return 1;
	}
	*uParam2 = 1;
	if (bParam3)
	{
		strcpy(&cVar0, "WWWWWWWWWWWWWW", 32);
		if (bParam0 <= 10)
		{
			stradd(&cVar0, "0", 32);
		}
		stradd(&cVar0, I2STR(bParam0), 32);
		return NET_PLAYER_LIST_ADD_ITEM(&cVar0, iParam1);
	}
	return NET_PLAYER_LIST_ADD_GAMER_SLOT(bParam0, iParam1);
}

bool Function_70(bool bParam0, int iParam1, bool bParam2) //Position: 0x2EE4 / 12004
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_49(iParam1, bParam2);
	}
	if (!Function_72(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_71(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_76943[bParam096].f_124 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_71(int iParam0) //Position: 0x2F65 / 12133
{
	switch (iParam0)
	{
		case 0x00000002:
			return "DEAD";
			break;
		
		case 0x00000004:
			return "READY";
			break;
		
		case 0x00000008:
			return "POKER_FOLDED";
			break;
		
		case 0x00000010:
			return "RACE_FINISHED";
			break;
		
		case 0x00000020:
			return "REGION_HOST";
			break;
		
		case 0x00000080:
			return "ACTOR_HIDDEN";
			break;
		
		case 0x00000100:
			return "VOTE_TO_START";
			break;
		
		case 0x00000200:
			return "VOTE_TO_SKIP";
			break;
		
		case 0x00000400:
			return "VOTE_TO_REPLAY";
			break;
		
		case 0x00000001:
			return "IS_IN_LOBBY";
			break;
		
		case 0x00000040:
			return "GAME_ARBITRATOR";
			break;
		
		case 0x00000800:
			return "JOINED_GAME";
			break;
		
		case 0x00001000:
			return "SKIP_CUTSCENE";
			break;
		
		case 0x00002000:
			return "START_CUTSCENE";
			break;
		
		case 0x00004000:
			return "IS_SPECTATOR";
			break;
		
		case 0x00008000:
			return "DISTRICT_HOST";
			break;
		
		case 0x00010000:
			return "NEEDS_REVIVAL";
			break;
		
		case 0x00020000:
			return "MP_BIT_MPLAW_MOSTWANTED";
			break;
		
		case 0x00040000:
			return "HAS_VIRAL_ACHIEVEMENT";
			break;
		
		case 0x00080000:
			return "COMBATMODE_CASUAL";
			break;
		
		case 0x00100000:
			return "COMBATMODE_EXPERT";
			break;
		
		case 0x00200000:
			return "IN_ACTOR_PICKER";
			break;
		
		case 0x00400000:
			return "MELEE_BLOCKED";
			break;
		
		case 0x00800000:
			return "BLIND_FIRE";
			break;
		
		case 0x01000000:
			return "FREE_MODE_DEFENSE_ACTIVE";
			break;
		
		case 0x02000000:
			return "PLAYER_IS_GRIEFER";
			break;
		
		case 0x04000000:
			return "CANNOT_AFFORD_MINIGAME";
			break;
		
		case 0x08000000:
			return "FREE_MODE_DEFENSE_SPOONHOLDER";
			break;
	}
	return "UNKNOWN";
}

bool Function_72(bool bParam0) //Position: 0x327E / 12926
{
	char* cVar0[64];
	
	if (bParam0 > 0 || bParam0 <= 16)
	{
		strcpy(&cVar0, "TRIED TO USE IS_SLOT_DATA_VALID WITH BAD INDEX ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
		stradd(&cVar0, "!", 64);
		return 0;
	}
	if ((*&Global_78617 + 64)[bParam02] > Global_78617.f_60)
	{
		(*&Global_78617 + 64)[bParam02] = Global_78617.f_60;
		(&Global_78617 + 64[bParam02])->f_4 = _IS_CLIENT_DATA_VALID_FOR_SLOT(&Global_76943, bParam0);
	}
	return StackVal;
}

void Function_73(bool bParam0) //Position: 0x331F / 13087
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_75(16384, 0, 1);
	return;
}

bool Function_74() //Position: 0x3339 / 13113
{
	return Function_77(32768);
}

void Function_75(int iParam0, bool bParam1, int iParam2) //Position: 0x3346 / 13126
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_24(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_23(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_76() //Position: 0x336E / 13166
{
	Function_75(32768, 1, 0);
	return;
}

bool Function_77(bool bParam0) //Position: 0x337D / 13181
{
	return Function_78(Global_76905.f_132, bParam0);
}

int Function_78(var uParam0, bool bParam1) //Position: 0x338E / 13198
{
	return (uParam0 && bParam1) == 0;
}

int Function_79() //Position: 0x339B / 13211
{
	return 1;
}

int Function_80(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x33A2 / 13218
{
	bool bVar0;
	bool bVar1;
	
	Function_91(bParam1, uParam2, uParam3);
	bVar0 = Function_88(bParam0);
	bVar1 = Function_85(bParam0);
	if (!bParam1)
	{
		if (Function_84())
		{
			Function_68(bParam0, CEIL(bVar1), 0);
		}
		else
		{
			Function_68(bParam0, bVar0, 0);
		}
	}
	if (Function_84())
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, bVar0);
		Function_82(1, bVar1);
	}
	Function_81(2, bParam0);
	return 0;
}

void Function_81(bool bParam0, bool bParam1) //Position: 0x33FF / 13311
{
	if (Function_77(4))
	{
		if (Function_70(bParam1, 1024, 1))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, "<VRE>");
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, "");
		}
	}
	return;
}

void Function_82(bool bParam0, int iParam1) //Position: 0x3432 / 13362
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_83(iParam1) };
	bVar4 = FLOOR((Var0.f_12 * 100.0f));
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_0", UI_GET_STRING("MP_Time_Fmt1"), I2STR((bVar4 / 10)), I2STR((bVar4 % 10)), false);
	UI_SET_STRING_FORMAT(StackVal, StackVal, "GENERIC_DBUFFER10_1", I2STR((I2STR((UI_GET_STRING("MP_Time_Fmt1") / 10)) % 10)), false);
	UI_SET_STRING_FORMAT(StackVal, "GENERIC_DBUFFER10_2", I2STR(UI_GET_STRING("MP_Time_Fmt")), UI_GET_STRING("GENERIC_DBUFFER10_1"), UI_GET_STRING("GENERIC_DBUFFER10_0"));
	if (Var0 >= 0)
	{
		if (StackVal <= 10)
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_3", UI_GET_STRING("MP_time_Fmt1"), I2STR(false), UI_GET_STRING("GENERIC_DBUFFER10_2"), false);
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_3"), false);
		}
		else
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_2"), false);
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER10_2"));
	}
	return;
}

struct<16> Function_83(var uParam0) //Position: 0x365F / 13919
{
	struct<4> Var0;
	bool bVar4;
	
	bVar4 = uParam0;
	Var0 = FLOOR((bVar4 / 3600.0f));
	while (bVar4 <= 3600.0f)
	{
		bVar4 = (bVar4 - 3600.0f);
	}
	Var0.f_4 = FLOOR((bVar4 / 60.0f));
	while (bVar4 <= 60.0f)
	{
		bVar4 = (bVar4 - 60.0f);
	}
	Var0.f_8 = FLOOR(bVar4);
	Var0.f_12 = (StackVal - IntToFloat(bVar4));
	return StackVal, StackVal, StackVal, Var0;
}

bool Function_84() //Position: 0x36D0 / 14032
{
	return (Function_77(4096) || Function_77(4));
}

int Function_85(int iParam0) //Position: 0x36E1 / 14049
{
	return Function_86(0, iParam0);
}

int Function_86(int iParam0, bool bParam1) //Position: 0x36ED / 14061
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_87(iParam0);
	}
	if (!Function_72(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

var Function_87(int iParam0) //Position: 0x3756 / 14166
{
	return (*&Global_78480 + 176)[iParam0];
}

int Function_88(int iParam0) //Position: 0x3766 / 14182
{
	return Function_89(0, iParam0);
}

int Function_89(int iParam0, bool bParam1) //Position: 0x3772 / 14194
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_90(iParam0);
	}
	if (!Function_72(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_90(int iParam0) //Position: 0x37D9 / 14297
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_91(bool bParam0, int iParam1, char* cParam2) //Position: 0x37E9 / 14313
{
	if (bParam0)
	{
		if (Function_74())
		{
			NET_PLAYER_LIST_ADD_ITEM(cParam2, iParam1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
		}
	}
	return;
}

int Function_92() //Position: 0x380A / 14346
{
	if (!Function_94(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	if (Function_84())
	{
		NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_dice");
		NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_time");
	}
	else
	{
		NET_PLAYER_LIST_SET_HEADER(2, "Common_Null");
		NET_PLAYER_LIST_SET_HEADER(3, "Common_Null");
	}
	NET_PLAYER_LIST_SET_HEADER(4, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(5, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_93();
	return 1;
}

void Function_93() //Position: 0x38BD / 14525
{
	if (Function_77(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_75(8192, 1, 1);
	}
	else if (Function_77(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_75(8192, 1, 1);
	}
	else
	{
		Function_75(8192, 0, 1);
	}
	return;
}

bool Function_94(bool bParam0) //Position: 0x38FA / 14586
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_74() || Function_96(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_11(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_74())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_95(Function_74());
	return 1;
}

void Function_95(bool bParam0) //Position: 0x397B / 14715
{
	if (bParam0 || Function_77(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_77(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_77(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_77(1048576) || Function_77(4)) || Function_49(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_75(0x20000000, 0, 1);
	}
	return;
}

int Function_96(bool bParam0, bool bParam1) //Position: 0x3A04 / 14852
{
	if (IS_STRING_VALID(bParam0) != IS_STRING_VALID(bParam1))
	{
		return 1;
	}
	if (!IS_STRING_VALID(bParam0))
	{
		return 0;
	}
	if (!STRINGS_ARE_EQUAL(bParam0, bParam1))
	{
		return 1;
	}
	return 0;
}

bool Function_97() //Position: 0x3A38 / 14904
{
	return Function_98(2);
}

bool Function_98(int iParam0) //Position: 0x3A42 / 14914
{
	return Function_78(StackVal, iParam0);
}

void Function_99() //Position: 0x3A55 / 14933
{
	while (!Function_98(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

