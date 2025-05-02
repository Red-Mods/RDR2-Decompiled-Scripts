//Decompiled with MagicRDR v1.0
//Function Count : 2
//Statics Count : 1
//Natives Count : 6
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 0;
	iLocal_0 = Global_47151[43];
	SET_DEBUG_DRAW(1);
	while (!IS_EXITFLAG_SET())
	{
		Function_1();
		WAIT(false);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x2A / 42
{
	int iVar0;
	var uVar1;
	var uVar3;
	int iVar5;
	
	uVar1 = Global_54078;
	uVar3 = Vector(0.0f, 1.0f, 0.0f);
	iVar0 = 0;
	while (iVar0 <= Global_43724)
	{
		if (StackVal && IS_ACTOR_VALID(&Global_43724[iVar03] + 8))
		{
			GET_POSITION(&Global_43724[iVar03] + 8, &uVar1);
			uVar3 = Vector(0.0f, 1.0f, 0.0f);
			iVar5 = 1;
			if (!Global_43724[iVar03].f_16)
			{
				if (Global_43724[iVar03].f_20 < 0.0f)
				{
					uVar3 = Vector(1.0f, 1.0f, 0.0f);
					iVar5 = 1;
				}
				else
				{
					uVar3 = Vector(0.0f, 0.0f, 1.0f);
					iVar5 = 0;
				}
			}
		}
		iVar0++;
	}
	return;
}

