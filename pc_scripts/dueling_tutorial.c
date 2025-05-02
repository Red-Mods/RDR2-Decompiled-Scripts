//Decompiled with MagicRDR v1.0
//Function Count : 6
//Statics Count : 12
//Natives Count : 28
//Parameters Count : 8

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	float fVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	float fVar6;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	fVar2 = 0.0f;
	bVar3 = false;
	iVar4 = 1;
	bVar5 = false;
	fVar6 = 2,75f;
	while (!IS_EXITFLAG_SET())
	{
		if ((ScriptParam_0 == 16 && ScriptParam_0 == 0) && ScriptParam_0 == 2)
		{
			if ((UNK_0xDA674AE0("@UI.ACCEPT", 1, 0) || UNK_0x062C5047("@UI.ACCEPT", 1, 0)) || ((!IS_ACTOR_ALIVE(&ScriptParam_0 + 16) || !IS_ACTOR_ALIVE(&ScriptParam_0 + 8)) && !bVar3))
			{
				fVar2 = GET_CURRENT_GAME_TIME();
				if (UI_ISACTIVE("DesignerHelpBox"))
				{
					UI_EXIT("DesignerHelpBox");
				}
				if (UI_ISACTIVE("RacePosition"))
				{
					UI_EXIT("RacePosition");
				}
				bVar3 = true;
				PRINTINT(ScriptParam_0);
				PRINTNL();
				ScriptParam_0 = 16;
			}
		}
		switch (ScriptParam_0)
		{
			case 0x00000000:
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				ScriptParam_0.f_4 = GET_PROFILE_TIME();
				fVar2 = GET_CURRENT_GAME_TIME();
				UI_LABEL_SET_TEXT("RacePosition", GET_ACTOR_ENUM_STRING(&ScriptParam_0 + 16));
				UI_ENTER("RacePosition");
				if (Global_116927[516] == 5)
				{
					Function_2("RCM_Gunslinger_Warning", 10.0f, 1, 0, 0, 1, 0);
				}
				ScriptParam_0 = 2;
				break;
			
			case 0x00000002:
				if ((GET_CURRENT_GAME_TIME() - fVar2) < (5.0f - 1.0f) && UI_ISACTIVE("RacePosition"))
				{
					UI_EXIT("RacePosition");
				}
				if (bVar3)
				{
					if ((GET_CURRENT_GAME_TIME() - fVar2) < 2.0f)
					{
						DECOR_SET_BOOL(&ScriptParam_0 + 8, "Tutorial0Complete", 1);
						fVar2 = GET_CURRENT_GAME_TIME();
						ScriptParam_0 = 3;
					}
				}
				else if ((GET_CURRENT_GAME_TIME() - fVar2) < 5.0f)
				{
					DECOR_SET_BOOL(&ScriptParam_0 + 8, "Tutorial0Complete", 1);
					ScriptParam_0.f_4 = GET_PROFILE_TIME();
					fVar2 = GET_CURRENT_GAME_TIME();
					if (!HUD_IS_SHOWING_HELP_TEXT())
					{
						Function_2("Dueling_Tutorial_FirstShot", 5.0f, 1, 0, 2, 1, 0);
					}
					if (UI_ISACTIVE("RacePosition"))
					{
						UI_EXIT("RacePosition");
					}
					ScriptParam_0 = 3;
				}
				break;
			
			case 0x00000003:
				if (bVar3)
				{
					if ((GET_CURRENT_GAME_TIME() - fVar2) < 2.0f)
					{
						DECOR_SET_BOOL(&ScriptParam_0 + 8, "Tutorial1Complete", 1);
						fVar2 = GET_CURRENT_GAME_TIME();
						ScriptParam_0 = 4;
					}
				}
				else if ((GET_CURRENT_GAME_TIME() - fVar2) < 5.0f)
				{
					DECOR_SET_BOOL(&ScriptParam_0 + 8, "Tutorial1Complete", 1);
					ScriptParam_0.f_4 = GET_PROFILE_TIME();
					fVar2 = GET_CURRENT_GAME_TIME();
					HUD_CLEAR_HELP();
					ScriptParam_0 = 4;
				}
				else if ((GET_CURRENT_GAME_TIME() - fVar2) < 1.0f && !bVar5)
				{
					bVar5 = true;
				}
				break;
			
			case 0x00000004:
				if (bVar3)
				{
					if ((GET_CURRENT_GAME_TIME() - fVar2) < 2.0f)
					{
						DECOR_SET_BOOL(&ScriptParam_0 + 8, "Tutorial2Complete", 1);
						fVar2 = GET_CURRENT_GAME_TIME();
						ScriptParam_0 = 5;
					}
				}
				else if ((GET_CURRENT_GAME_TIME() - fVar2) < 5.0f)
				{
					DECOR_SET_BOOL(&ScriptParam_0 + 8, "Tutorial2Complete", 1);
					ScriptParam_0.f_4 = GET_PROFILE_TIME();
					fVar2 = GET_CURRENT_GAME_TIME();
					HUD_CLEAR_HELP();
					Function_2("Dueling_Tutorial_Draw", 5.0f, 1, 0, 2, 1, 0);
					ScriptParam_0 = 6;
				}
				break;
			
			case 0x00000006:
				fVar2 = (fVar2 + GET_UNWARPED_REALTIME_SECONDS());
				if (IS_WEAPON_DRAWN(&ScriptParam_0 + 8))
				{
					ScriptParam_0 = 7;
				}
				else if ((GET_CURRENT_GAME_TIME() - fVar2) < 3.0f || IS_WEAPON_DRAWN(&ScriptParam_0 + 16))
				{
					HUD_CLEAR_HELP();
					Function_2("Dueling_Tutorial_Draw_Force", 7.0f, 1, 0, 2, 1, 0);
					ScriptParam_0.f_4 = GET_PROFILE_TIME();
					fVar2 = GET_CURRENT_GAME_TIME();
					ScriptParam_0 = 7;
				}
				break;
			
			case 0x00000007:
				if (IS_WEAPON_DRAWN(&ScriptParam_0 + 8))
				{
					HUD_CLEAR_HELP();
					Function_2("Dueling_Tutorial_Aim", 7.0f, 1, 0, 2, 1, 0);
					ScriptParam_0.f_4 = GET_PROFILE_TIME();
					fVar2 = 0.0f;
					ScriptParam_0 = 8;
				}
				break;
			
			case 0x00000008:
				fVar2 = (fVar2 + GET_UNWARPED_REALTIME_SECONDS());
				if (fVar2 < 7.0f)
				{
					HUD_CLEAR_HELP();
					Function_2("Dueling_Tutorial_Reticule", 7.0f, 1, 0, 2, 1, 0);
					ScriptParam_0.f_4 = GET_PROFILE_TIME();
					fVar2 = 0.0f;
					iVar1 = 1;
					ScriptParam_0 = 9;
				}
				break;
			
			case 0x00000009:
				fVar2 = (fVar2 + GET_UNWARPED_REALTIME_SECONDS());
				if (fVar2 < 7.0f)
				{
					HUD_CLEAR_HELP();
					Function_2("Dueling_Tutorial_Aim", 999.0f, 1, 0, 2, 1, 0);
					ScriptParam_0.f_4 = GET_PROFILE_TIME();
					fVar2 = GET_CURRENT_GAME_TIME();
					ScriptParam_0 = 10;
				}
				break;
			
			case 0x0000000A:
				if (GET_CURRENT_DUEL_SCORE(&ScriptParam_0 + 8) < 0.0f)
				{
					HUD_CLEAR_HELP();
					Function_2("Dueling_Tutorial_Points", 7.0f, 1, 0, 2, 1, 0);
					ScriptParam_0.f_4 = GET_PROFILE_TIME();
					fVar2 = 0.0f;
					ScriptParam_0 = 11;
				}
				break;
			
			case 0x0000000B:
				fVar2 = (fVar2 + GET_UNWARPED_REALTIME_SECONDS());
				if (fVar2 < 7.0f)
				{
					HUD_CLEAR_HELP();
					Function_2("Dueling_Tutorial_Score_Player", 7.0f, 1, 0, 2, 1, 0);
					ScriptParam_0.f_4 = GET_PROFILE_TIME();
					fVar2 = 0.0f;
					fVar0 = 0.0f;
					ScriptParam_0 = 12;
				}
				break;
			
			case 0x0000000C:
				fVar2 = (fVar2 + GET_UNWARPED_REALTIME_SECONDS());
				if (fVar2 < 7.0f)
				{
					HUD_CLEAR_HELP();
					Function_2("Dueling_Tutorial_Score_Enemy", 7.0f, 1, 0, 2, 1, 0);
					ScriptParam_0.f_4 = GET_PROFILE_TIME();
					fVar2 = 0.0f;
					fVar0 = 0.0f;
					ScriptParam_0 = 13;
				}
				break;
			
			case 0x0000000D:
				fVar2 = (fVar2 + GET_UNWARPED_REALTIME_SECONDS());
				if (fVar2 < 7.0f)
				{
					HUD_CLEAR_HELP();
					Function_2("Dueling_Tutorial_Aim", 999,9f, 1, 0, 2, 1, 0);
					ScriptParam_0.f_4 = GET_PROFILE_TIME();
					fVar2 = GET_CURRENT_GAME_TIME();
					ScriptParam_0 = 14;
				}
				break;
			
			case 0x0000000E:
				if (IS_ACTOR_SHOOTING(&ScriptParam_0 + 8) || IS_ACTOR_SHOOTING(&ScriptParam_0 + 16))
				{
					HUD_CLEAR_HELP();
					Function_2("Dueling_Tutorial_Aim", 5.0f, 1, 0, 2, 1, 0);
					ScriptParam_0.f_4 = GET_PROFILE_TIME();
					fVar2 = GET_CURRENT_GAME_TIME();
					ScriptParam_0 = 16;
				}
				break;
			
			case 0x00000010:
				if ((GET_CURRENT_GAME_TIME() - fVar2) < 7.0f || bVar3)
				{
					Function_1(StackVal, StackVal, StackVal, ScriptParam_0);
					PRINTSTRING("Dueling_Tutorial - Terminating Exit Flag Set");
					PRINTNL();
					TERMINATE_THIS_SCRIPT();
				}
				break;
		}
		WAIT(0);
	}
	Function_1(StackVal, StackVal, StackVal, ScriptParam_0);
	PRINTSTRING("Dueling_Tutorial - Terminating Exit Flag Set");
	PRINTNL();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(struct<25> Param0) //Position: 0x720 / 1824
{
	if (DECOR_CHECK_EXIST(&Param0 + 8, "Tutorial0Complete"))
	{
		DECOR_REMOVE(&Param0 + 8, "Tutorial0Complete");
	}
	if (DECOR_CHECK_EXIST(&Param0 + 8, "Tutorial1Complete"))
	{
		DECOR_REMOVE(&Param0 + 8, "Tutorial1Complete");
	}
	if (DECOR_CHECK_EXIST(&Param0 + 8, "Tutorial2Complete"))
	{
		DECOR_REMOVE(&Param0 + 8, "Tutorial2Complete");
	}
	if (DECOR_CHECK_EXIST(&Param0 + 8, "Tutorial3Complete"))
	{
		DECOR_REMOVE(&Param0 + 8, "Tutorial3Complete");
	}
	if (UI_ISACTIVE("DesignerHelpBox"))
	{
		UI_EXIT("DesignerHelpBox");
	}
	HUD_CLEAR_HELP();
	HUD_CLEAR_HELP_QUEUE();
	if (UI_ISACTIVE("RacePosition"))
	{
		UI_EXIT("RacePosition");
	}
	if (Param0.f_24)
	{
		Param0.f_24 = 0;
	}
}

void Function_2(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x87E / 2174
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_3(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_3(int iParam0) //Position: 0x909 / 2313
{
	char* cVar0[16];
	
	if (!Function_4())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_4() //Position: 0x948 / 2376
{
	if (Function_5(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_5(var uParam0, bool bParam1) //Position: 0x963 / 2403
{
	return (uParam0 && bParam1) == 0;
}

