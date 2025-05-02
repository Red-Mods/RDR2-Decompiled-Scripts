//Decompiled with MagicRDR v1.0
//Function Count : 6
//Statics Count : 0
//Natives Count : 18
//Parameters Count : 0

#region Local Var
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	struct<4> Var8;
	int iVar12;
	struct<4> Var13;
	
	iVar0 = 0;
	while (iVar0 <= 300)
	{
		PRINTSTRING("We be spinning");
		PRINTNL();
		WAIT(false);
		iVar0++;
	}
	iVar1 = 10;
	iVar2 = 7;
	iVar3 = 20;
	bVar4 = UNK_0x95132289();
	PRINTSTRING("treeMetrics.sc: continue mark (");
	PRINTSTRING(bVar4);
	PRINTSTRING(")");
	PRINTNL();
	bVar5 = MAKE_TIME_OF_DAY(9, false, false);
	SET_TIME_ACCELERATION(0.0f);
	UNK_0x02DB5C93(1, 1, 1);
	bVar6 = iVar2;
	bVar7 = false;
	bVar7 = false;
	while (bVar7 < iVar1)
	{
		bVar6 = iVar2;
		while (bVar6 < iVar3)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_5(bVar6, bVar7) };
			iVar12 = 1;
			if (!STRINGS_ARE_EQUAL(bVar4, ""))
			{
				if (!STRINGS_ARE_EQUAL(bVar4, &Var8))
				{
					PRINTSTRING("Continue Mark Skipping: ");
					PRINTSTRING(&Var8);
					PRINTSTRING(" Mark: ");
					PRINTSTRING(bVar4);
					PRINTNL();
					iVar12 = 0;
				}
				else
				{
					bVar4 = "";
				}
			}
			if (iVar12 && Function_4(bVar6, bVar7))
			{
				Var13 = { StackVal, StackVal, StackVal, Function_5(bVar6, bVar7) };
				UNK_0xEB8325B3(&Var13);
				Function_1(bVar6, bVar7, 0);
				Function_1(bVar6, bVar7, 1);
				Function_1(bVar6, bVar7, 2);
				Function_1(bVar6, bVar7, 3);
			}
			bVar6++;
		}
		bVar7++;
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0, bool bParam1, bool bParam2) //Position: 0x162 / 354
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<9> Var4;
	bool bVar13;
	vector3 vVar14[4];
	bool bVar27;
	
	switch (bParam2)
	{
		case 0x00000000:
			iVar0 = 128;
			iVar1 = 128;
			break;
		
		case 0x00000001:
			iVar0 = 384;
			iVar1 = 128;
			break;
		
		case 0x00000002:
			iVar0 = 128;
			iVar1 = 384;
			break;
		
		case 0x00000003:
			iVar0 = 384;
			iVar1 = 384;
			break;
	}
	bVar2 = (((512 * (bParam0 - 7)) - 5120) + iVar0);
	bVar3 = (bParam1 * 512 + iVar1);
	vVar4 = TO_FLOAT(bVar2);
	vVar4.f_4 = 50.0f;
	vVar4.f_8 = TO_FLOAT(bVar3);
	UNK_0x77C8F279(&vVar4);
	Function_3();
	Function_2();
	Var7 = { StackVal, StackVal, Function_2() };
	bVar13 = true;
	vVar4.f_4 = 50.0f;
	if (!FIND_GROUND_INTERSECTION(&vVar4, 100.0f, &Var7, &uVar10))
	{
		vVar4.f_4 = 150.0f;
		if (!FIND_GROUND_INTERSECTION(&vVar4, 100.0f, &Var7, &uVar10))
		{
			vVar4.f_4 = -50.0f;
			if (!FIND_GROUND_INTERSECTION(&vVar4, 100.0f, &Var7, &uVar10))
			{
				PRINTSTRING("WARNING: FAILED TO FIND GROUND!!!... Skipping subCoord ");
				PRINTINT(bParam2);
				PRINTNL();
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		Var7.f_4 = (StackVal + 2.0f);
		vVar14[03] = { 1.0f, 0.0f, 0.0f };
		vVar14[13] = { 0.0f, 0.0f, 1.0f };
		vVar14[23] = { -1.0f, 0.0f, 0.0f };
		vVar14[33] = { 0.0f, 0.0f, -1.0f };
		bVar27 = false;
		while (bVar27 <= 4)
		{
			UNK_0x868E29C1(&Var7, &(vVar14[bVar273]));
			Function_3();
			PRINTSTRING("TreeRotMetricsAngle=");
			PRINTINT(bVar27);
			PRINTNL();
			UNK_0xCEED74A5();
			bVar27++;
		}
	}
	return;
}

vector3 Function_2() //Position: 0x317 / 791
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_3() //Position: 0x320 / 800
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		WAIT(false);
		iVar0++;
	}
	if (!STREAMING_IS_WORLD_LOADED())
	{
		PRINTSTRING("WORLD ISN'T LOADED - Waiting for world to load...");
	}
	while (!STREAMING_IS_WORLD_LOADED())
	{
		WAIT(false);
	}
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		WAIT(false);
		iVar0++;
	}
	PRINTNL();
	PRINTNL();
	return;
}

int Function_4(int iParam0, int iParam1) //Position: 0x3A6 / 934
{
	switch (iParam1)
	{
		case 0x00000000:
			return 0;
		
		case 0x00000001:
			if (iParam0 >= 14 || iParam0 <= 19)
			{
				return 0;
			}
			break;
		
		case 0x00000002:
			if (iParam0 >= 13 || iParam0 <= 20)
			{
				return 0;
			}
			break;
		
		case 0x00000003:
			if (iParam0 >= 11 || iParam0 <= 20)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (iParam0 >= 7 || iParam0 <= 19)
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (iParam0 >= 7 || iParam0 <= 18)
			{
				return 0;
			}
			break;
		
		case 0x00000006:
			if (iParam0 >= 6 || iParam0 <= 19)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			if (iParam0 >= 6 || iParam0 <= 18)
			{
				return 0;
			}
			break;
		
		case 0x00000008:
			if (iParam0 >= 6 || iParam0 <= 17)
			{
				return 0;
			}
			break;
		
		case 0x00000009:
			if (iParam0 >= 7 || iParam0 <= 16)
			{
				return 0;
			}
			break;
		
		default:
			return 0;
	}
	return 1;
}

struct<16> Function_5(bool bParam0, bool bParam1) //Position: 0x499 / 1177
{
	char* cVar0[16];
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

