//Decompiled with MagicRDR v1.0
//Function Count : 3
//Statics Count : 1
//Natives Count : 22
//Parameters Count : 1

#region Local Var
	var uScriptParam_0 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	char* cVar2;
	char* cVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	float fVar7;
	
	uScriptParam_0 = uScriptParam_0;
	bVar0 = GET_TARGET_OBJECT();
	if (!IS_OBJECT_VALID(bVar0))
	{
		LOG_ERROR("Clock gringo expects to be attached to the prop");
	}
	bVar1 = GET_PHYSINST_FROM_OBJECT(bVar0);
	if (IS_PHYSINST_VALID(bVar1))
	{
		if (HAS_PROP_BEEN_DAMAGED(bVar1))
		{
			DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
			TERMINATE_THIS_SCRIPT();
		}
	}
	if (!IS_PHYSINST_VALID(bVar1))
	{
		LOG_ERROR("Somehow this clock gringo is intialising without a valid target prop - Terminating!");
		DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
		TERMINATE_THIS_SCRIPT();
	}
	while (IS_GRINGO_ACTIVE())
	{
		if (Function_2())
		{
			cVar2 = CREATE_OBJECT_ANIMATOR(bVar0, GRINGO_GET_MY_OBJECT_REF(), Function_1(), Function_1(), Function_1());
			cVar3 = CREATE_OBJECT_ANIMATOR(bVar0, GRINGO_GET_MY_OBJECT_REF(), Function_1(), Function_1(), Function_1());
			SET_OBJECT_ANIMATOR_BONE_RANGE(cVar2, 2, 2, 4, 4);
			SET_OBJECT_ANIMATOR_BONE_RANGE(cVar3, 1, 1, 3, 3);
			if (!IS_PHYSINST_READY(bVar1))
			{
				LOG_ERROR("Prop has become invalid before starting animations");
			}
			SET_OBJECT_ANIMATOR_ANIMATION(cVar2, "clock_time", 1);
			SET_OBJECT_ANIMATOR_ANIMATION(cVar3, "clock_time", 1);
			SET_OBJECT_ANIMATOR_RATE(cVar2, 0.0f);
			SET_OBJECT_ANIMATOR_RATE(cVar3, 0.0f);
			while (IS_GRINGO_ACTIVE() && Function_2())
			{
				bVar4 = GET_HOUR(false);
				bVar5 = GET_MINUTE(false);
				fVar6 = (TO_FLOAT(bVar4) / 12.0f);
				fVar7 = (TO_FLOAT(bVar5) / 60.0f);
				SET_OBJECT_ANIMATOR_PHASE(cVar2, (fVar6 + (fVar7 / 12.0f)));
				SET_OBJECT_ANIMATOR_PHASE(cVar3, fVar7);
				if (IS_PHYSINST_VALID(bVar1))
				{
					if (HAS_PROP_BEEN_DAMAGED(bVar1))
					{
						DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
						TERMINATE_THIS_SCRIPT();
					}
				}
				GRINGO_WAIT(false);
			}
			DESTROY_OBJECT_ANIMATOR(cVar2);
			DESTROY_OBJECT_ANIMATOR(cVar3);
		}
		if (IS_GRINGO_ACTIVE())
		{
			GRINGO_WAIT(false);
		}
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

var Function_1() //Position: 0x218 / 536
{
	var uVar0;
	
	return uVar0;
}

bool Function_2() //Position: 0x220 / 544
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_TARGET_OBJECT();
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	bVar1 = GET_PHYSINST_FROM_OBJECT(bVar0);
	if (!IS_PHYSINST_VALID(bVar1))
	{
		return 0;
	}
	if (!IS_PHYSINST_READY(bVar1))
	{
		return 0;
	}
	if (!IS_PHYSINST_IN_LEVEL(bVar1))
	{
		return 0;
	}
	return 1;
}

