//Decompiled with MagicRDR v1.0
//Function Count : 3
//Statics Count : 2
//Natives Count : 22
//Parameters Count : 2

#region Local Var
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	float fVar7;
	
	uScriptParam_0 = &uScriptParam_0;
	uVar0 = GET_TARGET_OBJECT();
	if (!IS_OBJECT_VALID(&uVar0))
	{
		LOG_ERROR("Clock gringo expects to be attached to the prop");
	}
	uVar1 = GET_PHYSINST_FROM_OBJECT(&uVar0);
	if (IS_PHYSINST_VALID(&uVar1))
	{
		if (HAS_PROP_BEEN_DAMAGED(&uVar1))
		{
			DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
			TERMINATE_THIS_SCRIPT();
		}
	}
	if (!IS_PHYSINST_VALID(&uVar1))
	{
		LOG_ERROR("Somehow this clock gringo is intialising without a valid target prop - Terminating!");
		DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
		TERMINATE_THIS_SCRIPT();
	}
	while (IS_GRINGO_ACTIVE())
	{
		if (Function_2())
		{
			uVar2 = CREATE_OBJECT_ANIMATOR(&uVar0, GRINGO_GET_MY_OBJECT_REF(), Function_1(), Function_1(), Function_1());
			uVar3 = CREATE_OBJECT_ANIMATOR(&uVar0, GRINGO_GET_MY_OBJECT_REF(), Function_1(), Function_1(), Function_1());
			SET_OBJECT_ANIMATOR_BONE_RANGE(&uVar2, 2, 2, 4, 4);
			SET_OBJECT_ANIMATOR_BONE_RANGE(&uVar3, 1, 1, 3, 3);
			if (!IS_PHYSINST_READY(&uVar1))
			{
				LOG_ERROR("Prop has become invalid before starting animations");
			}
			SET_OBJECT_ANIMATOR_ANIMATION(&uVar2, "clock_time", 1);
			SET_OBJECT_ANIMATOR_ANIMATION(&uVar3, "clock_time", 1);
			SET_OBJECT_ANIMATOR_RATE(&uVar2, 0.0f);
			SET_OBJECT_ANIMATOR_RATE(&uVar3, 0.0f);
			while (IS_GRINGO_ACTIVE() && Function_2())
			{
				bVar4 = GET_HOUR(0);
				bVar5 = GET_MINUTE(0);
				fVar6 = (TO_FLOAT(bVar4) / 12.0f);
				fVar7 = (TO_FLOAT(bVar5) / 60.0f);
				SET_OBJECT_ANIMATOR_PHASE(&uVar2, (fVar6 + (fVar7 / 12.0f)));
				SET_OBJECT_ANIMATOR_PHASE(&uVar3, fVar7);
				if (IS_PHYSINST_VALID(&uVar1))
				{
					if (HAS_PROP_BEEN_DAMAGED(&uVar1))
					{
						DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
						TERMINATE_THIS_SCRIPT();
					}
				}
				GRINGO_WAIT(0);
			}
			DESTROY_OBJECT_ANIMATOR(&uVar2);
			DESTROY_OBJECT_ANIMATOR(&uVar3);
		}
		if (IS_GRINGO_ACTIVE())
		{
			GRINGO_WAIT(0);
		}
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

var Function_1() //Position: 0x232 / 562
{
	var uVar0;
	
	return &uVar0;
}

bool Function_2() //Position: 0x23B / 571
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_TARGET_OBJECT();
	if (!IS_OBJECT_VALID(&uVar0))
	{
		return 0;
	}
	uVar1 = GET_PHYSINST_FROM_OBJECT(&uVar0);
	if (!IS_PHYSINST_VALID(&uVar1))
	{
		return 0;
	}
	if (!IS_PHYSINST_READY(&uVar1))
	{
		return 0;
	}
	if (!IS_PHYSINST_IN_LEVEL(&uVar1))
	{
		return 0;
	}
	return 1;
}

