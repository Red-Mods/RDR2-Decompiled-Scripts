//Decompiled with MagicRDR v1.0
//Function Count : 1
//Statics Count : 1
//Natives Count : 4
//Parameters Count : 1

#region Local Var
	bool bScriptParam_0 = false;
#endregion

void main() //Position: 0x0 / 0
{
	if (!IS_GRINGO_COMPONENT_VALID(bScriptParam_0))
	{
		TERMINATE_THIS_SCRIPT();
	}
	while (IS_GRINGO_ACTIVE())
	{
		GRINGO_WAIT(500);
	}
	return;
}

