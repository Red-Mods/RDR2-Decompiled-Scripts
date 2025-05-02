//Decompiled with MagicRDR v1.0
//Function Count : 1
//Statics Count : 2
//Natives Count : 4
//Parameters Count : 2

#region Local Var
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	if (!IS_GRINGO_COMPONENT_VALID(&uScriptParam_0))
	{
		TERMINATE_THIS_SCRIPT();
	}
	while (IS_GRINGO_ACTIVE())
	{
		GRINGO_WAIT(500);
	}
	return;
}

