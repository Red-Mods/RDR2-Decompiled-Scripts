//Decompiled with MagicRDR v1.0
//Function Count : 40
//Statics Count : 327
//Natives Count : 71
//Parameters Count : 2

#region Local Var
	struct<2> Local_0 = { 0, 0 } ;
	struct<20> Local_2[15];
	int iLocal_303 = 0;
	bool bLocal_304 = true;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	bool bLocal_320 = false;
	var uLocal_321 = 0;
	bool bLocal_322 = false;
	bool bLocal_323 = false;
	bool bLocal_324 = false;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_303 = 0;
	Global_29003 = 3;
	Local_0 = { StackVal, ScriptParam_0 };
	Function_38(&bLocal_304, "Companion_Wife", 1, 0);
	Function_38(&bLocal_304, "Companion_Son", 1, 0);
	Function_38(&bLocal_304, "Companion_Son_Bed", 1, 0);
	Function_38(&bLocal_304, "Companion_LeadWorker", 1, 0);
	Function_38(&bLocal_304, "Companion_Dog", 1, 0);
	while (!IS_EXITFLAG_SET())
	{
		switch (iLocal_303)
		{
			case 0x00000000:
				if (Function_32(&bLocal_304))
				{
					bLocal_320 = false;
					iLocal_303 = 1;
				}
				break;
			
			case 0x00000001:
				if (!Function_31(57, 0))
				{
					uLocal_321 = Function_29(11, "Wife", 698, "Companion_Wife", 0.0f, 0.0f, 0.0f, 1);
					Function_28(11, &Local_2, -105,646f, 119,461f, 1351,502f);
					Function_27(11, &Local_2, -103,925f, 119,512f, 1370,959f);
					Function_26(11, &Local_2, -105,646f, 119,461f, 1351,502f);
					Function_25(11, &Local_2, -108,452f, 119,461f, 1353,988f);
					Function_24(11, &Local_2, -105,646f, 119,461f, 1351,502f);
					Function_22(11, &Local_2, -99,39f, 119,488f, 1358,861f);
					Function_20(uLocal_321, &(Local_2[1120]));
					if (Function_31(53, 0) && (!Function_31(56, 0) || !Function_31(51, 0)))
					{
						Function_19();
					}
					else
					{
						Function_16();
					}
					bLocal_323 = Function_29(13, "Uncle", 646, "Companion_LeadWorker", 0.0f, 0.0f, 0.0f, 1);
					Function_28(13, &Local_2, -111,411f, 119,461f, 1358,567f);
					Function_27(13, &Local_2, -56,226f, 116,85f, 1404.0f);
					Function_26(13, &Local_2, -111,411f, 119,461f, 1358,567f);
					Function_25(13, &Local_2, -56,226f, 116,85f, 1404.0f);
					Function_24(13, &Local_2, -111,411f, 119,461f, 1358,567f);
					Function_22(13, &Local_2, -113,517f, 119,489f, 1361,275f);
					Function_20(bLocal_323, &(Local_2[1320]));
					bLocal_324 = Function_29(14, "Rufus", 1041, "Companion_Dog", 0.0f, 0.0f, 0.0f, 1);
					Function_28(14, &Local_2, -117,301f, 118,869f, 1374,885f);
					Function_27(14, &Local_2, -121,87f, 118,869f, 1347,471f);
					Function_26(14, &Local_2, -99,432f, 118,727f, 1346,955f);
					Function_25(14, &Local_2, -74,269f, 116,861f, 1410,547f);
					Function_24(14, &Local_2, -117,301f, 118,869f, 1374,885f);
					Function_22(14, &Local_2, -106,766f, 119,489f, 1368,712f);
					Function_20(bLocal_324, &(Local_2[1420]));
				}
				bLocal_320 = false;
				iLocal_303 = 2;
				break;
			
			case 0x00000002:
				Function_15(&(Global_29008[ScriptParam_0]), 4);
				bLocal_320 = false;
				iLocal_303 = 3;
				break;
			
			case 0x00000003:
				if (!IS_PERS_CHAR_VALID(Global_8492[1214]))
				{
				}
				else
				{
					Function_6();
				}
				if (Function_31(57, 0))
				{
					Function_15(&(Global_29008[Global_30621[3]]), 1024);
					iLocal_303 = 4;
					bLocal_320 = false;
				}
				else if (!Function_31(48, 0))
				{
					Function_5(&(Global_29008[Global_30621[2]]), 1024);
					Function_5(&(Global_29008[Global_30621[3]]), 1);
					Function_5(&(Global_29008[Global_30621[3]]), 2);
					iLocal_303 = 4;
					bLocal_320 = false;
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				break;
			
			case 0x00000004:
				break;
		}
		WAIT(bLocal_320);
	}
	Function_1(&bLocal_304);
	Function_5(&(Global_29008[Local_0]), 64);
	Function_5(&(Global_29008[Local_0]), 4);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x40D / 1037
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

void Function_2(var uParam0, int iParam1) //Position: 0x433 / 1075
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

void Function_3(var uParam0, int iParam1) //Position: 0x561 / 1377
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x57B / 1403
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(var uParam0, int iParam1) //Position: 0x598 / 1432
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_6() //Position: 0x5AF / 1455
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_FROM_PERS_CHAR(bLocal_322);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (!Function_31(53, 0))
		{
			if (StackVal || Function_13(bVar0, -68,16f, 127,217f, 1371,621f, 5.0f) != 640)
			{
				Function_16();
			}
		}
		else if (!Function_31(54, 0))
		{
			if (!Function_7(54))
			{
				if (StackVal != 640)
				{
					Function_19();
				}
				if (!DECOR_CHECK_EXIST(bVar0, "hidden"))
				{
					SET_DRAW_ACTOR(bVar0, false);
					DECOR_SET_BOOL(bVar0, "hidden", true);
				}
			}
		}
		else if (!Function_31(56, 0) || !Function_31(51, 0))
		{
			if (StackVal != 640)
			{
				Function_19();
				SET_DRAW_ACTOR(bVar0, true);
			}
			if (DECOR_CHECK_EXIST(bVar0, "hidden"))
			{
				SET_DRAW_ACTOR(bVar0, true);
				DECOR_REMOVE(bVar0, "hidden");
			}
		}
		else if (StackVal == 640)
		{
			Function_16();
		}
	}
	return;
}

bool Function_7(int iParam0) //Position: 0x6B0 / 1712
{
	int iVar0;
	
	if (!Function_12(iParam0))
	{
		return 0;
	}
	iVar0 = Function_11(iParam0);
	if (!Function_8(Function_11(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_8(int iParam0) //Position: 0x6E6 / 1766
{
	if (!Function_10(iParam0))
	{
		return 0;
	}
	if (!Function_9(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_9(int iParam0) //Position: 0x70A / 1802
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_10(int iParam0) //Position: 0x71F / 1823
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_11(int iParam0) //Position: 0x736 / 1846
{
	if (!Function_12(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_12(int iParam0) //Position: 0x750 / 1872
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_13(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x766 / 1894
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_14(bParam0);
		if (VDIST(Function_14(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_14(bool bParam0) //Position: 0x7F0 / 2032
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

void Function_15(var uParam0, int iParam1) //Position: 0x85A / 2138
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_16() //Position: 0x869 / 2153
{
	vector3 vVar0;
	
	Function_18(12);
	bLocal_322 = Function_29(12, "Son", 638, "Companion_Son", -105,85f, 119,64f, 1368,919f, 1);
	Function_28(12, &Local_2, -108,119f, 119,477f, 1357,974f);
	Function_27(12, &Local_2, -116,552f, 118,869f, 1346,602f);
	Function_26(12, &Local_2, -108,119f, 119,477f, 1357,974f);
	Function_25(12, &Local_2, -116,552f, 118,869f, 1346,602f);
	Function_24(12, &Local_2, -108,119f, 119,477f, 1357,974f);
	Function_22(12, &Local_2, -104,826f, 119,489f, 1368,328f);
	Function_20(bLocal_322, &(Local_2[1220]));
	Function_17(GET_ACTOR_FROM_PERS_CHAR(Global_8492[1214]));
	vVar0 = { StackVal, StackVal, Function_17(GET_ACTOR_FROM_PERS_CHAR(Global_8492[1214])) };
	return;
}

vector3 Function_17(bool bParam0) //Position: 0x947 / 2375
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_18(int iParam0) //Position: 0x958 / 2392
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: CompanionsList is full.");
		return;
	}
	if (Global_8492[iParam014].f_16)
	{
		STREAMING_EVICT_ACTOR(StackVal, 4294967295);
	}
	if (IS_ACTOR_VALID(StackVal))
	{
		DESTROY_ACTOR(StackVal);
	}
	if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
	{
		DESTROY_PERS_CHAR(Global_8492[iParam014]);
	}
	return;
}

void Function_19() //Position: 0x9F1 / 2545
{
	Function_18(12);
	bLocal_322 = Function_29(12, "Son", 640, "Companion_Son_Bed", -105,85f, 119,64f, 1368,919f, 1);
	Function_28(12, &Local_2, -104,413f, 119,521f, 1367,917f);
	Function_27(12, &Local_2, -104,413f, 119,521f, 1367,917f);
	Function_26(12, &Local_2, -104,413f, 119,521f, 1367,917f);
	Function_25(12, &Local_2, -104,413f, 119,521f, 1367,917f);
	Function_24(12, &Local_2, -104,413f, 119,521f, 1367,917f);
	Function_22(12, &Local_2, -104,826f, 119,489f, 1368,328f);
	Function_20(bLocal_322, &(Local_2[1220]));
	return;
}

int Function_20(bool bParam0, int iParam1) //Position: 0xAC2 / 2754
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_21(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_21(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_21(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_21(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_21(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_21(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

bool Function_21(vector3 vParam0) //Position: 0xBFE / 3070
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_22(int iParam0, var uParam1, vector3 vParam2) //Position: 0xC16 / 3094
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_23(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

bool Function_23(vector3 vParam0, vector3 vParam3) //Position: 0xC7C / 3196
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_24(int iParam0, var uParam1, vector3 vParam2) //Position: 0xCA9 / 3241
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_23(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_25(int iParam0, var uParam1, vector3 vParam2) //Position: 0xD11 / 3345
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_23(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_26(int iParam0, var uParam1, vector3 vParam2) //Position: 0xD7B / 3451
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_23(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_27(int iParam0, var uParam1, vector3 vParam2) //Position: 0xDE0 / 3552
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_23(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_28(int iParam0, var uParam1, vector3 vParam2) //Position: 0xE48 / 3656
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_23(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

bool Function_29(int iParam0, bool bParam1, int iParam2, bool bParam3, vector3 vParam4, bool bParam7) //Position: 0xEAB / 3755
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	int iVar6;
	struct<73> Var7;
	
	if (!IS_STRING_VALID(bParam1))
	{
		LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: requires a NAME for each companion.");
		return "";
	}
	iVar1 = iParam0;
	if (iVar1 >= 16)
	{
		LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: CompanionsList is full.");
		return "";
	}
	Global_8492[iParam014] = "";
	Global_8492[iParam014].f_8 = iParam2;
	strcpy(&Global_8492[iParam014] + 20, bParam1, 32);
	Global_8492[iParam014].f_12 = Global_6287;
	if (bParam7)
	{
		bVar0 = CREATE_PERS_CHAR_IN_LAYOUT(StackVal, Global_8492[iParam014].f_12, &Global_8492[iParam014] + 20, vParam4, 1114636288);
		Global_8492[iParam014] = bVar0;
		if (!IS_PERS_CHAR_VALID(bVar0))
		{
			LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: Failed to validate the pers char reference");
			return "";
		}
		if (!(STRING_CONTAINS_STRING(bParam3, "\\") || STRING_CONTAINS_STRING(bParam3, "/")))
		{
			FILE_START_PATH("$/content/scripting/gringo/gringobrains/cb");
			FILE_ADD_TO_PATH(bParam3);
			FILE_END_PATH();
			bParam3 = FILE_GET_CURRENT_PATH();
		}
		bVar5 = CREATE_GRINGO_ON_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bVar0), "Persistent_Char_Brain", bParam3, vVar2, vVar2);
		if (IS_OBJECT_VALID(bVar5))
		{
			GRINGO_QUERY_BOOL(GET_GRINGO_FROM_OBJECT(bVar5), "CompanionSettings", "EnableCompanionBehavior", &iVar6);
			if (iVar6 >= 0)
			{
				ATTACH_OBJECTS(bVar5, GET_OBJECT_FROM_PERS_CHAR(bVar0), Function_30(), 0.0f, 1,5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			}
			else
			{
				PRINTSTRING("GB_CREATE_COMPANION_PERS_CHAR: Attempting to assign an invalid Companion Brain to this Companion: ");
				PRINTSTRING(bParam1);
				PRINTNL();
				LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: Attempting to assign an invalid Companion Brain to a Companion");
				DESTROY_PERS_CHAR(bVar0);
				return "";
			}
		}
		PRINTSTRING("GB_CREATE_COMPANION_PERS_CHAR: Failed to create a GRINGO BRAIN for this Companion: ");
		PRINTSTRING(bParam1);
		PRINTNL();
		LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: Failed to create a GRINGO BRAIN for a Companion. This is surprisingly bad!");
		DESTROY_PERS_CHAR(bVar0);
		return "";
		*(&Var7 + 36) = { StackVal, StackVal, vParam4 };
		Var7 = { StackVal, StackVal, *(&Var7 + 36) };
		*(&Var7 + 12) = { StackVal, StackVal, *(&Var7 + 36) };
		*(&Var7 + 24) = { StackVal, StackVal, *(&Var7 + 36) };
		*(&Var7 + 48) = { StackVal, StackVal, *(&Var7 + 36) };
		*(&Var7 + 60) = { StackVal, StackVal, *(&Var7 + 36) };
		Var7.f_72 = Global_8492[iParam014].f_12;
		GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar5), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &Var7, 20);
	}
	return bVar0;
}

var Function_30() //Position: 0x1344 / 4932
{
	int iVar0;
	
	return iVar0;
}

bool Function_31(int iParam0, bool bParam1) //Position: 0x134C / 4940
{
	int iVar0;
	
	iVar0 = Function_11(iParam0);
	if (!Function_10(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_32(int iParam0) //Position: 0x1389 / 5001
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_37();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_36(iParam0[iVar03], 8);
		}
		else if (Function_35())
		{
			iVar1 = 1;
			Function_36(iParam0[iVar03], 8);
		}
		Function_36(iParam0[iVar03], 16);
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
				Function_36(iParam0[iVar03], 1);
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
							Function_36(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_36(iParam0[iVar03], 2);
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
							Function_36(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_36(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_36(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_36(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_36(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_36(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_36(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_36(iParam0[iVar03], 2);
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
	Function_33();
	return 1;
}

void Function_33() //Position: 0x1704 / 5892
{
	if (!Function_34(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_34(int iParam0) //Position: 0x1744 / 5956
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_35() //Position: 0x1760 / 5984
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

void Function_36(var uParam0, int iParam1) //Position: 0x178B / 6027
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_37() //Position: 0x179C / 6044
{
	if (!Function_34(128))
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

var Function_38(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x17DE / 6110
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_39(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_36(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_39(var uParam0, int iParam1, int iParam2) //Position: 0x1816 / 6166
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_36(uParam0[iVar03], 4);
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

