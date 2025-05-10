//Decompiled with MagicRDR v1.0
//Function Count : 3
//Statics Count : 0
//Natives Count : 4
//Parameters Count : 0

#region Local Var
#endregion

void main() //Position: 0x0 / 0
{
	Function_1("Initializing North Gringos", 3);
	GRINGO_SETUP_ATTR_ASSOCIATION("rstarGringoGeneric_Type", "sitRead", "chair_sit_table_read", "sit", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION("rstarGringoGeneric_Type", "sitChair", "chair_sit_attach", "sit", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION("rstarGringoGeneric_Type", "sitTable", "chair_sit_table_attach", "sit", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION("rstarGringoGeneric_Type", "sitStool", "stool_sit_attach", "sit", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION("rstarGringoGeneric_Type", "sitComfyChair", "sit_chair_comfy", "sit_chair_comfy", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION("rstarGringoGeneric_Type", "sitComfyCouch", "sit_flirt_couch_link", "sit_chair_couch", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION("rstarGringoGeneric_Type", "sitbenchChair", "bench_chair", "bench_chair", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
	GRINGO_SETUP_ATTR_ASSOCIATION("rstarGringoGeneric_Type", "sitbenchStool", "bench_stool", "bench_stool", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0, int iParam1) //Position: 0x2B8 / 696
{
	if (!Function_2(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 1;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = Global_13133.f_64;
	}
	return;
}

bool Function_2(int iParam0) //Position: 0x2F3 / 755
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

