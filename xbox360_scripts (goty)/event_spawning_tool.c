//Decompiled with MagicRDR v1.0
//Function Count : 4
//Statics Count : 1425
//Natives Count : 16
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
	struct<9> Local_22[150];
	int iLocal_1373 = 0;
	struct<51> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	vVar0 = { -843.982f, 91.291f, 2384.399f };
	iVar3 = 0;
	bVar4 = CREATE_LAYOUT(Function_3());
	while (!IS_EXITFLAG_SET())
	{
		switch (iVar3)
		{
			case 0x00000000:
				iVar3 = 1;
				break;
			
			case 0x00000001:
				iVar3 = 2;
				break;
			
			case 0x00000002:
				iVar3 = 3;
				break;
			
			case 0x00000003:
				if (IS_DEBUGKEY_PRESSED(3))
				{
					if (Function_2(0, 0, 1))
					{
						vLocal_22[iLocal_13739].f_32 = "STEEP";
					}
					else if (IS_DEBUGKEY_DOWN(15))
					{
						vLocal_22[iLocal_13739].f_32 = "GENTLE";
					}
					else
					{
						vLocal_22[iLocal_13739].f_32 = "MODERATE";
					}
					vLocal_22[iLocal_13739] = 2.5f;
					*(&vLocal_22[iLocal_13739] + 4) = { StackVal, StackVal, Global_34574 };
					vLocal_22[iLocal_13739].f_16 = 1.0f;
					(&vLocal_22[iLocal_13739] + 16)->f_4 = 0.0f;
					(&vLocal_22[iLocal_13739] + 16)->f_8 = 0.0f;
					vLocal_22[iLocal_13739].f_28 = ADD_BLIP_FOR_COORD(&Global_34574, 325, 0f, 2, 0);
					iLocal_1373++;
				}
				if (IS_DEBUGKEY_PRESSED(4))
				{
					if (Function_2(0, 0, 1))
					{
						vLocal_22[iLocal_13739].f_32 = "STEEP";
					}
					else if (IS_DEBUGKEY_DOWN(15))
					{
						vLocal_22[iLocal_13739].f_32 = "GENTLE";
					}
					else
					{
						vLocal_22[iLocal_13739].f_32 = "MODERATE";
					}
					vLocal_22[iLocal_13739] = 7.0f;
					*(&vLocal_22[iLocal_13739] + 4) = { StackVal, StackVal, Global_34574 };
					vLocal_22[iLocal_13739].f_16 = 0.0f;
					(&vLocal_22[iLocal_13739] + 16)->f_4 = 1.0f;
					(&vLocal_22[iLocal_13739] + 16)->f_8 = 0.0f;
					vLocal_22[iLocal_13739].f_28 = ADD_BLIP_FOR_COORD(&Global_34574, 325, 0f, 2, 0);
					iLocal_1373++;
				}
				if (IS_DEBUGKEY_PRESSED(5))
				{
					if (Function_2(0, 0, 1))
					{
						vLocal_22[iLocal_13739].f_32 = "STEEP";
					}
					else if (IS_DEBUGKEY_DOWN(15))
					{
						vLocal_22[iLocal_13739].f_32 = "GENTLE";
					}
					else
					{
						vLocal_22[iLocal_13739].f_32 = "MODERATE";
					}
					vLocal_22[iLocal_13739] = 11.0f;
					*(&vLocal_22[iLocal_13739] + 4) = { StackVal, StackVal, Global_34574 };
					vLocal_22[iLocal_13739].f_16 = 0.0f;
					(&vLocal_22[iLocal_13739] + 16)->f_4 = 0.0f;
					(&vLocal_22[iLocal_13739] + 16)->f_8 = 1.0f;
					vLocal_22[iLocal_13739].f_28 = ADD_BLIP_FOR_COORD(&Global_34574, 325, 0f, 2, 0);
					iLocal_1373++;
				}
				if (IS_DEBUGKEY_PRESSED(211))
				{
					if (iLocal_1373 != 0)
					{
						iLocal_1373 = (iLocal_1373 - 1);
						REMOVE_BLIP(vLocal_22[iLocal_13739].f_28);
						vLocal_22[iLocal_13739] = 0.0f;
						Function_1();
						*(&vLocal_22[iLocal_13739] + 4) = { StackVal, StackVal, Function_1() };
					}
				}
				SET_DEBUG_DRAW(1);
				bVar5 = false;
				while (bVar5 <= iLocal_1373)
				{
					bVar5++;
				}
				if (IS_DEBUGKEY_PRESSED(14))
				{
					WRITE_TO_FILE("Flag Position Data\n", "C:/SpawnFlagData.txt", 0);
					bVar5 = false;
					while (bVar5 <= iLocal_1373)
					{
						WRITE_TO_FILE(INT_TO_STRING(bVar5), "C:/SpawnFlagData.txt", 1);
						WRITE_TO_FILE(" Flag Position: ", "C:/SpawnFlagData.txt", 1);
						WRITE_TO_FILE(VECTOR_TO_STRING(&vLocal_22[bVar59] + 4), "C:/SpawnFlagData.txt", 1);
						WRITE_TO_FILE(" Flag Radius: ", "C:/SpawnFlagData.txt", 1);
						WRITE_TO_FILE(FLOAT_TO_STRING_VERBOSE(vLocal_22[bVar59]), "C:/SpawnFlagData.txt", 1);
						WRITE_TO_FILE(" Flag Steepness: ", "C:/SpawnFlagData.txt", 1);
						WRITE_TO_FILE(vLocal_22[bVar59].f_32, "C:/SpawnFlagData.txt", 1);
						WRITE_TO_FILE("\n", "C:/SpawnFlagData.txt", 1);
						bVar5++;
					}
				}
				break;
			
			case 0x00000005:
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(25);
	}
	RELEASE_LAYOUT_REF(bVar4);
	TERMINATE_THIS_SCRIPT();
	return;
}

vector3 Function_1() //Position: 0x478 / 1144
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_2(bool bParam0, bool bParam1, bool bParam2) //Position: 0x481 / 1153
{
	if (bParam2)
	{
		if (!IS_DEBUGKEY_DOWN(54) && !IS_DEBUGKEY_DOWN(42))
		{
			return 0;
		}
	}
	if (IS_DEBUGKEY_DOWN(54) || IS_DEBUGKEY_DOWN(42))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!IS_DEBUGKEY_DOWN(29) && !IS_DEBUGKEY_DOWN(157))
		{
			return 0;
		}
	}
	if (IS_DEBUGKEY_DOWN(29) || IS_DEBUGKEY_DOWN(157))
	{
		return 0;
	}
	if (bParam0)
	{
		if (!IS_DEBUGKEY_DOWN(56) && !IS_DEBUGKEY_DOWN(184))
		{
			return 0;
		}
	}
	if (IS_DEBUGKEY_DOWN(56) || IS_DEBUGKEY_DOWN(184))
	{
		return 0;
	}
	return 1;
}

var Function_3() //Position: 0x506 / 1286
{
	var uVar0;
	
	return uVar0;
}

