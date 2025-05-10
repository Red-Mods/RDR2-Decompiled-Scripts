//Decompiled with MagicRDR v1.0
//Function Count : 1
//Statics Count : 10
//Natives Count : 4
//Parameters Count : 7

#region Local Var
	vector3 vLocal_0 = { 0.0f, 0.0f, 0.0f };
	struct<7> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	vLocal_0 = { -2640.26f, 30.9f, 4244.634f };
	TELEPORT_ACTOR_WITH_HEADING(Global_34573, vLocal_0, 111.508f, 1, 1, 1);
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(9, 30, 0));
	ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	TERMINATE_THIS_SCRIPT();
	return;
}

