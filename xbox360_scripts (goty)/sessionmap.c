//Decompiled with MagicRDR v1.0
//Function Count : 12
//Statics Count : 14
//Natives Count : 40
//Parameters Count : 0

#region Local Var
	bool bLocal_0 = false;
	char* cLocal_1 = NULL;
	char* cLocal_2 = NULL;
	char* cLocal_3 = NULL;
	struct<13> Local_4 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	
	bLocal_13 = "";
	while (!Function_11() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	bLocal_0 = FIND_NAMED_LAYOUT("NetSesssionLayout");
	bLocal_12 = CREATE_OBJECT_ITERATOR(bLocal_0);
	ITERATE_ON_OBJECT_TYPE(bLocal_12, 59);
	ITERATE_IN_LAYOUT(bLocal_12, bLocal_0);
	Function_10();
	SET_PLAYER_CONTROL(false, 0, 0, 0);
	FLASH_SET_ARRAY_STRING("testInventory", "btn_PromptText", "Back", 1, 1);
	FLASH_SET_ARRAY_INT("testInventory", "btn_PromptID", 5, 1);
	FLASH_SET_ARRAY_INT("testInventory", "btn_PromptAlpha", 100, 1);
	iVar0 = 4294967295;
	bVar1 = false;
	while (!IS_EXITFLAG_SET() && !bVar1)
	{
		Function_8();
		if (UNK_0x581CAC89() != iVar0)
		{
			Function_4();
			iVar0 = UNK_0x581CAC89();
			Function_8();
		}
		if (IS_BUTTON_PRESSED(Function_2(), 5, 1, false))
		{
			bVar1 = true;
		}
		WAIT(false);
	}
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	FLASH_SET_ARRAY_STRING("testInventory", "btn_PromptText", "", 1, 1);
	Function_1();
	DESTROY_ITERATOR(bLocal_12);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x14A / 330
{
	GUI_CLOSE_WINDOW(cLocal_1);
	return;
}

int Function_2() //Position: 0x156 / 342
{
	bool bVar0;
	
	bVar0 = Function_3();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

var Function_3() //Position: 0x170 / 368
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_4() //Position: 0x185 / 389
{
	bool bVar0;
	
	Function_7();
	bVar0 = START_OBJECT_ITERATOR(bLocal_12);
	if (IS_OBJECT_VALID(bVar0))
	{
		while (IS_OBJECT_VALID(bVar0))
		{
			Function_5(bVar0);
			bVar0 = OBJECT_ITERATOR_NEXT(bLocal_12);
		}
	}
	return;
}

void Function_5(bool bParam0) //Position: 0x1B4 / 436
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<13> Var3;
	
	Function_6(bParam0, &bVar0, &bVar1);
	bVar2 = GET_OBJECT_NAME(bParam0);
	Var3 = (bVar0 - 65.0f);
	Var3.f_8 = (bVar0 + 65.0f);
	Var3.f_4 = (bVar1 - 5.0f);
	Var3.f_12 = (bVar1 + 5.0f);
	Var7 = 1.0f;
	Var7.f_4 = 0.0f;
	Var7.f_8 = 0.0f;
	Var7.f_12 = 1.0f;
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	bVar11 = GUI_MAKE_TEXT(cLocal_2, &Var3, bVar2, "tahoma", 0.8f);
	GUI_SET_TEXT_JUSTIFY(bVar11, 1);
	GUI_SET_TEXT(bVar11, bVar2);
	GUI_SET_TEXT_COLOR(bVar11, &Var7);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	DECOR_SET_INT(bParam0, "ItemWND", bVar11);
	UNK_0x79AFAB1F(bParam0, &vVar12);
	PRINTSTRING(bVar2);
	PRINTSTRING(" X:");
	PRINTINT(FLOOR(bVar0));
	PRINTSTRING(" Y:");
	PRINTINT(FLOOR(bVar1));
	PRINTSTRING("  -  ");
	PRINTVECTOR(vVar12);
	PRINTNL();
	return;
}

void Function_6(bool bParam0, var uParam1, var uParam2) //Position: 0x290 / 656
{
	struct<9> Var0;
	
	UNK_0x79AFAB1F(uParam0, &vVar0);
	*uParam1 = ((vVar0.x * 1000.0f) + 50.0f);
	*uParam2 = ((vVar0.z * 600.0f) + 50.0f);
	return;
}

void Function_7() //Position: 0x2C2 / 706
{
	struct<13> Var0;
	
	GUI_CLOSE_WINDOW(cLocal_2);
	Local_8 = 50.0f;
	Local_8.f_4 = 50.0f;
	Local_8.f_8 = 1050.0f;
	Local_8.f_12 = 650.0f;
	Var0 = 1.0f;
	Var0.f_4 = 1.0f;
	Var0.f_8 = 1.0f;
	Var0.f_12 = 1.0f;
	cLocal_2 = GUI_MAKE_OVERLAY(cLocal_1, &Local_8, "MP_Session_Item_Containr", &Var0, &Var0, 0);
	return;
}

void Function_8() //Position: 0x32B / 811
{
	int iVar0;
	char* cVar1;
	var uVar2;
	
	if (!IS_OBJECT_VALID(bLocal_13))
	{
		bLocal_13 = START_OBJECT_ITERATOR(bLocal_12);
	}
	if (IS_OBJECT_VALID(bLocal_13))
	{
		Function_9(bLocal_13);
		iVar0 = 0;
		if (DECOR_GET_INT_VERBOSE(bLocal_13, "ItemWND", &iVar0))
		{
			cVar1 = GUI_MESSAGE_RELEASED_INPUT(iVar0);
			GUI_SET_TEXT_COLOR(cVar1, &uVar2);
		}
	}
	return;
}

void Function_9(var uParam0) //Position: 0x374 / 884
{
	float fVar0;
	float fVar1;
	
	Function_6(uParam0, &fVar0, &fVar1);
	fVar0 = (fVar0 - 68.0f);
	fVar1 = (fVar1 - 8.0f);
	GUI_MOVE_WINDOW_ABS(cLocal_3, fVar0, fVar1);
	return;
}

void Function_10() //Position: 0x3A1 / 929
{
	struct<13> Var0;
	
	Var0 = 0.0f;
	Var0.f_4 = 0.0f;
	Var0.f_8 = 1.0f;
	Var0.f_12 = 0.5f;
	Local_4 = 50.0f;
	Local_4.f_4 = 50.0f;
	Local_4.f_8 = 1230.0f;
	Local_4.f_12 = 670.0f;
	cLocal_1 = GUI_MAKE_OVERLAY(GUI_MAIN_WINDOW(), &Local_4, "MP_Session_map", &Var0, &Var0, 0);
	Function_7();
	Var4 = 50.0f;
	Var4.f_4 = 50.0f;
	Var4.f_8 = (((Var4 + 65.0f) + 65.0f) + 3.0f);
	Var4.f_12 = (((StackVal + 5.0f) + 5.0f) + 3.0f);
	Var0 = 0.0f;
	Var0.f_4 = 1.0f;
	Var0.f_8 = 0.0f;
	Var0.f_12 = 0.2f;
	cLocal_3 = GUI_MAKE_OVERLAY(cLocal_1, &Var4, "MP_Session_Item_Highlight", &uVar8, &uVar8, 0);
	return;
}

bool Function_11() //Position: 0x474 / 1140
{
	return NET_IS_MANAGER_INITIALIZED();
}

