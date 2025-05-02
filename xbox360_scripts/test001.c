//Decompiled with MagicRDR v1.0
//Function Count : 1
//Statics Count : 0
//Natives Count : 5
//Parameters Count : 0

#region Local Var
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	int iVar2[2];
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	bVar0 = bVar0;
	iVar1 = 123;
	NET_SCRIPTMSG_SEND(1, 1, &iVar1, 1, 1);
	iVar2[0] = 111;
	iVar2[1] = 222;
	NET_SCRIPTMSG_SEND(1, 2, &iVar2, 3, 1);
	PRINTSTRING("================= YAY ================");
	PRINTNL();
	TERMINATE_THIS_SCRIPT();
	return;
}

