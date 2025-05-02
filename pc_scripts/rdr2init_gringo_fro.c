//Decompiled with MagicRDR v1.0
//Function Count : 3
//Statics Count : 0
//Natives Count : 4
//Parameters Count : 0

#region Local Var
#endregion

void main() //Position: 0x0 / 0
{
	Function_1("Initializing Frontier Gringos", 3);
	GRINGO_SETUP_ATTR_ASSOCIATION(StackVal, StackVal, "rstarGringoGeneric_Type", "sitChair", "chair_sit_attach", "sit", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION(StackVal, StackVal, "rstarGringoGeneric_Type", "sitTable", "chair_sit_table_attach", "sit", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION(StackVal, StackVal, "rstarGringoGeneric_Type", "sitStool", "stool_sit_attach", "sit", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION(StackVal, StackVal, "rstarGringoGeneric_Type", "sitComfyChair", "sit_drinkbrandy_s_any", "sit", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION(StackVal, StackVal, "rstarGringoGeneric_Type", "sitComfyCouch", "mex_flirt_sit_link", "mex_flirt_sit_link", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION(StackVal, StackVal, "rstarGringoGeneric_Type", "sitBenchChair", "bench_chair", "bench_chair", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION(StackVal, StackVal, "rstarGringoGeneric_Type", "sitBenchStool", "bench_stool", "bench_stool", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(char* cParam0) //Position: 0x277 / 631
{
	if (!Function_2(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_21610, &cParam0))
	{
		strcpy(&Global_21610, &cParam0, 64);
		Global_21610.f_132 = 1;
		Global_21610.f_128 = GET_CURRENT_GAME_TIME();
		Global_21610.f_136 = Global_21610.f_128;
	}
	return;
}

bool Function_2(int iParam0) //Position: 0x2B4 / 692
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

