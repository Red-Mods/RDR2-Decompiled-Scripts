//Decompiled with MagicRDR v1.0
//Function Count : 2
//Statics Count : 10
//Natives Count : 3
//Parameters Count : 7

#region Local Var
	vector3 vLocal_0 = { 0.0f, 0.0f, 0.0f };
	struct<7> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	vLocal_0 = { -820,895f, 93,363f, 2422,815f };
	Function_1(StackVal, StackVal, vLocal_0, "", "", 1, 1);
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(19, false, false));
	ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(vector3 vParam0, char* cParam3, char* cParam4, var uParam5, var uParam6) //Position: 0x3D / 61
{
	Global_13112.f_72 = 4294967295;
	Global_13112 = { StackVal, StackVal, vParam0 };
	strcpy(&Global_13112 + 24, cParam3, 24);
	strcpy(&Global_13112 + 48, cParam4, 24);
	Global_13112.f_76 = uParam5;
	Global_13112.f_80 = uParam6;
}

