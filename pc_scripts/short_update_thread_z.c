//Decompiled with MagicRDR v1.0
//Function Count : 542
//Statics Count : 232
//Natives Count : 575
//Parameters Count : 0

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0.0f;
	float fLocal_24 = 0.0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 11;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 11;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	struct<2> Local_120 = { 0, 0 } ;
	var uLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	float fLocal_126 = 0.0f;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	struct<8> Local_148[5];
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	bool bLocal_230 = false;
	float fLocal_231 = 0.0f;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_123 = 31;
	iLocal_124 = 33;
	iLocal_125 = 1;
	fLocal_126 = 2.0f;
	Function_537(&(Local_148[08]));
	Function_413(&(Local_148[18]));
	Function_327(&(Local_148[28]));
	Function_273(&(Local_148[38]));
	Function_2(&(Local_148[48]));
	while ((!Function_1(256) && !IS_EXITFLAG_SET()) && !IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("Formations")))
	{
		WAIT(false);
	}
	iVar0 = 0;
	while (iVar0 <= Local_148)
	{
		Call_Loc(Local_148[iVar08]);
		Local_148[iVar08].f_60 = 1;
		iVar0++;
	}
	while (!IS_EXITFLAG_SET())
	{
		SET_DEBUG_DRAW(((Global_47267[5] || Global_47267[6]) || Global_47267[7]));
		iVar0 = 0;
		while (iVar0 <= Local_148)
		{
			if (bLocal_230)
			{
				PRINTSTRING("Time for Exec ");
				PRINTSTRING(&Local_148[iVar08] + 24);
				PRINTSTRING(": ");
				fLocal_231 = GET_PROFILE_TIME();
			}
			Call_Loc(StackVal);
			if (bLocal_230)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fLocal_231));
				PRINTNL();
			}
			iVar0++;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Local_148)
	{
		if (Local_148[iVar08].f_60)
		{
			Call_Loc(Local_148[iVar08].f_16);
		}
		iVar0++;
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

bool Function_1(int iParam0) //Position: 0x13F / 319
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_2(struct<57> Param0) //Position: 0x15B / 347
{
	strcpy(&Param0 + 24, "EVENT-MONITOR_Z", 16);
	Param0 = 57740;
	*(&Param0 + 8) = 498;
	*(&Param0 + 16) = 412;
	Param0.f_56 = 1;
	return;
}

void Function_3() //Position: 0x19C / 412
{
	var uVar0;
	
	if (IS_ITERATOR_VALID(&Global_39613))
	{
		DESTROY_ITERATOR(&Global_39613);
	}
	uVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		RELEASE_LAYOUT_REF(&uVar0);
	}
	if (IS_OBJECTSET_VALID(&Global_39920))
	{
		DESTROY_OBJECTSET(&Global_39920);
	}
	return;
}

int Function_4() //Position: 0x1F2 / 498
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	Function_271(0);
	if (!IS_ITERATOR_VALID(&Global_39613))
	{
		return 0;
	}
	Function_270();
	Function_268();
	Function_254();
	uVar2 = START_OBJECT_ITERATOR(&Global_39613);
	while (IS_OBJECT_VALID(&uVar2))
	{
		Function_253();
		Function_242(GET_EVENT_FROM_OBJECT(&uVar2), &uVar0, &uVar1, 0);
		Function_236(GET_EVENT_FROM_OBJECT(&uVar2));
		Function_232(GET_EVENT_FROM_OBJECT(&uVar2));
		Function_231(GET_EVENT_FROM_OBJECT(&uVar2));
		Function_147(GET_EVENT_FROM_OBJECT(&uVar2));
		Function_140(GET_EVENT_FROM_OBJECT(&uVar2));
		uVar2 = OBJECT_ITERATOR_NEXT(&Global_39613);
	}
	Function_60(uVar0, uVar1);
	Function_37();
	Function_36();
	Function_27();
	Function_5();
	return 0;
}

void Function_5() //Position: 0x284 / 644
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (Global_99146 || Global_6623)
	{
		return;
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (IS_ACTOR_ALIVE(&Global_54076))
		{
			if (!Function_26(Global_119935, 512))
			{
				if (Function_22(1, 0))
				{
					Function_16(&Global_54076, 512, 2, 1);
					Function_16(&Global_54076, 1024, 2, 1);
					Function_16(&Global_54076, 8, 2, 1);
				}
			}
			if (!Function_26(Global_119935, 256))
			{
				if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&Global_54076)) && IS_ACTOR_VALID(&Global_21369 + 72))
				{
					if (Function_13(&Global_54076, &Global_21369 + 72, 20.0f))
					{
						Function_16(&Global_54076, 256, 2, 1);
					}
				}
			}
			if (!Function_26(Global_119935, 1048576))
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "bStartedGY"))
				{
					Function_16(&Global_54076, 1048576, 2, 1);
					Function_16(&Global_54076, 2097152, 2, 1);
					Function_16(&Global_54076, 4194304, 2, 1);
				}
			}
			if (!Function_26(Global_119935, 8388608))
			{
				if (IS_WEAPON_DRAWN(&Global_54076) && UNK_0x062C5047("@GENERIC.TARGET", 1, 0))
				{
					bVar0 = GET_WEAPON_IN_HAND(&Global_54076);
					bVar0 = UNK_0xDB679ED9(bVar0);
					if (bVar0 == 47)
					{
						Function_16(&Global_54076, 8388608, 2, 1);
					}
				}
			}
			if (!Function_26(Global_119935, 0x4000000))
			{
				if (Function_26(Global_119934, 0x2000000))
				{
					Function_16(&Global_54076, 0x4000000, 2, 1);
				}
			}
			if (!Function_26(Global_119935, 128))
			{
				if (GET_ACTOR_HEALTH(&Global_54076) > (GET_ACTOR_MAX_HEALTH(&Global_54076) / 2.0f) && GET_ITEM_COUNT(Function_12(3), &Global_54076) < 0)
				{
					Function_16(&Global_54076, 128, 2, 1);
				}
			}
			if (!Function_26(Global_119935, 0x10000000))
			{
				iVar1 = GET_ITEM_COUNT(Function_12(3), &Global_54076);
				iVar1 = (iVar1 + GET_ITEM_COUNT(Function_12(1), &Global_54076));
				iVar1 = (iVar1 + GET_ITEM_COUNT(Function_12(0), &Global_54076));
				iVar1 = (iVar1 + GET_ITEM_COUNT(Function_12(2), &Global_54076));
				iVar1 = (iVar1 + GET_ITEM_COUNT(Function_12(8), &Global_54076));
				iVar1 = (iVar1 + GET_ITEM_COUNT(Function_12(7), &Global_54076));
				if (iVar1 >= 0)
				{
					Function_16(&Global_54076, 0x10000000, 2, 1);
				}
			}
			if (!Function_26(Global_119935, 65536))
			{
				if (Function_10(0))
				{
					Function_16(&Global_54076, 65536, 2, 1);
					Function_16(&Global_54076, 131072, 2, 1);
				}
			}
			if (!Function_26(Global_119935, 0x20000000))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					bVar2 = GET_WEAPON_IN_HAND(&Global_54076);
					bVar2 = UNK_0xDB679ED9(bVar2);
					if ((bVar2 != 41 || bVar2 != 42) || bVar2 != 44)
					{
						Function_16(&Global_54076, 0x20000000, 2, 1);
					}
				}
			}
			if (!Function_26(Global_119935, 0x40000000))
			{
				if (Function_26(Global_119934, 8))
				{
					Function_16(&Global_54076, 0x40000000, 2, 1);
				}
			}
			if (!Function_26(Global_119936, 2))
			{
				if (GET_ACTOR_HEALTH(&Global_54076) > 60.0f)
				{
					Function_16(&Global_54076, 2, 3, 1);
					Function_16(&Global_54076, 4, 3, 1);
				}
			}
			if (!Function_26(Global_119936, 8))
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
				{
					bVar3 = GET_MATERIAL_AT_VECTOR(&Global_54078);
					if (((!Function_9(bVar3, 64) && !Function_9(bVar3, 32)) && !HUD_IS_SHOWING_HELP_TEXT()) && Function_8(&Global_54076, 0) <= 5.0f)
					{
						if (!DECOR_CHECK_EXIST(&Global_54076, "fOffRoadTimer"))
						{
							DECOR_SET_FLOAT(&Global_54076, "fOffRoadTimer", GET_CURRENT_GAME_TIME());
						}
						else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Global_54076, "fOffRoadTimer")) < 10.0f)
						{
							Function_16(&Global_54076, 8, 3, 1);
							DECOR_REMOVE(&Global_54076, "fOffRoadTimer");
						}
					}
					else if (DECOR_CHECK_EXIST(&Global_54076, "fOffRoadTimer"))
					{
						DECOR_REMOVE(&Global_54076, "fOffRoadTimer");
					}
				}
			}
			if (!Function_26(Global_119936, 16))
			{
				if (Function_7(12))
				{
					Function_16(&Global_54076, 16, 3, 1);
					Function_16(&Global_54076, 32, 3, 1);
				}
			}
			if (!Function_26(Global_119936, 256))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (UNK_0x062C5047("@GENERIC.TARGET", 1, 0) && Function_6(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						Function_16(&Global_54076, 256, 3, 1);
					}
				}
			}
			if (!Function_26(Global_119936, 64))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					bVar4 = GET_WEAPON_IN_HAND(&Global_54076);
					bVar4 = UNK_0xDB679ED9(bVar4);
					if (bVar4 == 44)
					{
						Function_16(&Global_54076, 64, 3, 1);
					}
				}
			}
			if (!Function_26(Global_119936, 128))
			{
				if (IS_ACTOR_VALID(&Global_21369 + 72))
				{
					if (Function_13(&Global_54076, &Global_21369 + 72, 10.0f) && !IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						Function_16(&Global_54076, 128, 3, 1);
					}
				}
			}
		}
	}
	return;
}

bool Function_6(bool bParam0) //Position: 0x771 / 1905
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	bParam0 = UNK_0xDB679ED9(bParam0);
	switch (bParam0)
	{
		case 0x00000027:
		case 0x00000029:
		case 0x00000028:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
			return 1;
			break;
	}
	return 0;
}

bool Function_7(int iParam0) //Position: 0x7B7 / 1975
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

float Function_8(int iParam0, bool bParam1) //Position: 0x7CC / 1996
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&iParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

bool Function_9(bool bParam0, int iParam1) //Position: 0x7ED / 2029
{
	return (bParam0 && iParam1) == 0;
}

bool Function_10(int iParam0) //Position: 0x7FA / 2042
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_21684[Function_11(iParam0)7].f_12 < 0;
}

int Function_11(int iParam0) //Position: 0x860 / 2144
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("\HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, returning gHideoutTwinRocks!");
		return Global_46948;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_46948;
			break;
		
		case 0x00000001:
			return Global_46949;
			break;
		
		case 0x00000004:
			return Global_46950;
			break;
		
		case 0x00000003:
			return Global_46951;
			break;
		
		case 0x00000002:
			return Global_46952;
			break;
	}
	return Global_46948;
}

int Function_12(bool bParam0) //Position: 0x922 / 2338
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

bool Function_13(var uParam0, var uParam1, float fParam2) //Position: 0xA16 / 2582
{
	float fVar0;
	
	fVar0 = Function_14(&uParam0, &uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_14(var uParam0, int iParam1) //Position: 0xA35 / 2613
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_15(&uVar0, &uVar2);
	return iVar4;
}

var Function_15(struct<2> Param0) //Position: 0xA56 / 2646
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

void Function_16(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xA75 / 2677
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_18(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_17(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_17(char* cParam0) //Position: 0xAEA / 2794
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

bool Function_18(int iParam0, var uParam1, int iParam2) //Position: 0xB24 / 2852
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_20(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_19(uVar0))
		{
			case 0x00000002:
				if (!Function_26(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_19(char* cParam0) //Position: 0xBA0 / 2976
{
	switch (cParam0)
	{
		case 0x00000001:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00004000:
		case 0x00008000:
		case 0x00010000:
		case 0x00020000:
		case 0x00040000:
		case 0x00200000:
			return 0;
			break;
		
		case 0x00000004:
		case 0x00000008:
		case 0x00000020:
		case 0x00001000:
		case 0x00080000:
		case 0x00100000:
			return 1;
			break;
		
		case 0x00000002:
		case 0x00000010:
		case 0x00000800:
		case 0x00002000:
		case 0x00400000:
			return 2;
			break;
	}
	return 0;
}

int Function_20(int iParam0) //Position: 0xC41 / 3137
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_21(&iVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 >= 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void Function_21(var uParam0, int iParam1) //Position: 0xC7E / 3198
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

bool Function_22(int iParam0, bool bParam1) //Position: 0xC94 / 3220
{
	int iVar0;
	
	iVar0 = Function_24(iParam0);
	if (!Function_23(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_23(int iParam0) //Position: 0xCD2 / 3282
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_24(int iParam0) //Position: 0xCE9 / 3305
{
	if (!Function_25(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_25(int iParam0) //Position: 0xD03 / 3331
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_26(int iParam0, int iParam1) //Position: 0xD19 / 3353
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_27() //Position: 0xD2C / 3372
{
	bool bVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	struct<2> Var4;
	float fVar6;
	struct<2> Var7;
	struct<2> Var9;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&Global_39920))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_39920);
		if (IS_OBJECT_VALID(&uVar2))
		{
			if (GET_OBJECT_TYPE(&uVar2) == 15)
			{
				iVar1 = GET_ACTOR_FROM_OBJECT(&uVar2);
				if (IS_ACTOR_VALID(&iVar1))
				{
					if (DECOR_CHECK_EXIST(&iVar1, "fZombieExecutedTime"))
					{
						if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&iVar1, "fZombieExecutedTime")) <= 0,3f)
						{
							REMOVE_OBJECT_FROM_OBJECTSET(&iVar1, &Global_39920);
							DECOR_REMOVE(&iVar1, "fZombieExecutedTime");
							Function_30(&iVar1, 1);
						}
					}
					else if (DECOR_CHECK_EXIST(&iVar1, "fToxicKilledTime"))
					{
						if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&iVar1, "fToxicKilledTime")) <= 2.0f)
						{
							REMOVE_OBJECT_FROM_OBJECTSET(&iVar1, &Global_39920);
							DECOR_REMOVE(&iVar1, "fToxicKilledTime");
							fVar3 = "";
							if (DECOR_CHECK_EXIST(&iVar1, "iToxicKilledPerp"))
							{
								fVar3 = DECOR_GET_INT(&iVar1, "iToxicKilledPerp");
								DECOR_REMOVE(&iVar1, "iToxicKilledPerp");
							}
							Function_29();
							Var4 = Function_29();
							GET_OBJECT_NAMED_BONE_POSITION(&iVar1, "spine00", &Var4);
							SET_DRAW_ACTOR(&iVar1, 0);
							SET_OBJECT_COLLIDE_WITH_MOVABLES(&iVar1, 0);
							DECOR_SET_BOOL(&iVar1, "corpse_loot_gringo", false);
							DECOR_SET_BOOL(&iVar1, "NoCorpse", true);
							Function_28(&Var4, "ToxicZombieExplosion", &fVar3, 0);
							PLAY_SOUND_FROM_POSITION("ZOMBIE_TOXIC_EXPLOSION_MASTER", Var4);
						}
					}
				}
			}
			else if (GET_OBJECT_TYPE(&uVar2) == 29)
			{
				if (DECOR_CHECK_EXIST(&uVar2, "fToxicKilledTime"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uVar2, "fToxicKilledTime")) <= 2.0f)
					{
						REMOVE_OBJECT_FROM_OBJECTSET(&uVar2, &Global_39920);
						DECOR_REMOVE(&uVar2, "fToxicKilledTime");
						fVar6 = "";
						if (DECOR_CHECK_EXIST(&uVar2, "iToxicKilledPerp"))
						{
							fVar6 = DECOR_GET_INT(&uVar2, "iToxicKilledPerp");
							DECOR_REMOVE(&uVar2, "iToxicKilledPerp");
						}
						Function_29();
						Var7 = Function_29();
						Function_29();
						Var9 = Function_29();
						GET_OBJECT_NAMED_BONE_POSITION(&uVar2, "spine00", &Var7);
						Var9 = Var7;
						Var7.f_4 = (StackVal - 100.0f);
						SET_OBJECT_POSITION(&uVar2, Var7);
						SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(&uVar2), false);
						SET_DRAW_OBJECT(&uVar2, 0);
						SET_OBJECT_COLLIDE_WITH_MOVABLES(&uVar2, 0);
						Function_28(&Var9, "ToxicZombieExplosion", &fVar6, 0);
						PLAY_SOUND_FROM_POSITION("ZOMBIE_TOXIC_EXPLOSION_MASTER", Var9);
					}
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_28(bool bParam0, float fParam1, bool bParam2, int iParam3) //Position: 0x10B1 / 4273
{
	var uVar0;
	
	uVar0 = Vector(0.0f, 0.0f, 0.0f);
	_CREATE_EXPLOSION(&bParam0, &fParam1, &bParam2, &uVar0, &iParam3);
}

struct<8> Function_29() //Position: 0x10D1 / 4305
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_30(int iParam0, bool bParam1) //Position: 0x10DB / 4315
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	bool bVar4;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 23, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 24, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 25, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 26, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 27, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 28, !bParam1);
		if (!bParam1)
		{
			ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 29, false);
			ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 30, false);
		}
		else
		{
			if (((Function_35() || Function_34(&iParam0)) || Function_33(&iParam0)) || Function_32(&iParam0, 1))
			{
				ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 29, true);
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 30, true);
			}
			if (GET_OBJECT_NAMED_BONE_POSITION(GET_OBJECT_FROM_ACTOR(&iParam0), "head", &Var0))
			{
				uVar2 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iParam0, Function_31(), 2, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(0,5f, 0,5f, 0,5f));
				RESET_RMPTFX_IN_VOLUME(&uVar2);
				DESTROY_VOLUME(&uVar2);
			}
			if (DECOR_CHECK_EXIST(&iParam0, "oLeftEyeGlow"))
			{
				uVar3 = DECOR_GET_OBJECT(&iParam0, "oLeftEyeGlow");
				if (IS_OBJECT_VALID(&uVar3))
				{
					UNK_0x1A59E608(&uVar3);
				}
				DECOR_REMOVE(&iParam0, "oLeftEyeGlow");
			}
			if (DECOR_CHECK_EXIST(&iParam0, "oRightEyeGlow"))
			{
				uVar3 = DECOR_GET_OBJECT(&iParam0, "oRightEyeGlow");
				if (IS_OBJECT_VALID(&uVar3))
				{
					UNK_0x1A59E608(&uVar3);
				}
				DECOR_REMOVE(&iParam0, "oRightEyeGlow");
			}
			DECOR_SET_BOOL(&iParam0, "Zombie_NoHead", true);
			Function_29();
			bVar4 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_31(), "blood_zombie_shotgun_exit", "head", &iParam0, Function_29(), &iParam0);
			if (IS_OBJECT_VALID(&bVar4))
			{
				Function_29();
				UNK_0x6745191B(&bVar4, Function_29());
			}
		}
	}
	return;
}

var Function_31() //Position: 0x12CD / 4813
{
	int iVar0;
	
	return &iVar0;
}

bool Function_32(int iParam0, int iParam1) //Position: 0x12D6 / 4822
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_33(int iParam0) //Position: 0x131B / 4891
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1228 && bVar0 >= 1239)
	{
		return 1;
	}
	return 0;
}

bool Function_34(int iParam0) //Position: 0x133C / 4924
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1204 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

var Function_35() //Position: 0x135D / 4957
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_36() //Position: 0x1370 / 4976
{
	bool bVar0;
	int iVar1;
	
	if (Global_99146)
	{
		if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			bVar0 = false;
			while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				iVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
				if (IS_ACTOR_VALID(&iVar1))
				{
					if (!DECOR_CHECK_EXIST(&iVar1, "bToggledZombieHead"))
					{
						if (!IS_ACTOR_PLAYER(&iVar1))
						{
							ACTOR_ENABLE_VARIABLE_MESH(&iVar1, 0, false);
							ACTOR_ENABLE_VARIABLE_MESH(&iVar1, 1, true);
							ACTOR_ENABLE_VARIABLE_MESH(&iVar1, 2, true);
							ACTOR_ENABLE_VARIABLE_MESH(&iVar1, 3, false);
							ACTOR_ENABLE_VARIABLE_MESH(&iVar1, 4, false);
							Function_30(&iVar1, 0);
							DECOR_SET_BOOL(&iVar1, "bToggledZombieHead", true);
						}
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_37() //Position: 0x141E / 5150
{
	bool bVar0;
	
	bVar0 = GET_WEAPON_IN_HAND(&Global_54076);
	if (SHIFT_RIGHT(Global_77931, 8) & 255 >= 0)
	{
		Function_54(bVar0);
	}
	if (Global_77931 & 255 >= 0)
	{
		Function_53(bVar0);
	}
	if (Function_9(Global_77931, 0x40000000))
	{
		Function_38(135, 1, 0, 0);
	}
	if (Function_9(Global_77931, 0x20000000))
	{
		Function_38(134, 1, 0, 0);
	}
	if (Function_9(Global_77931, 0x10000000))
	{
		Function_38(136, 1, 0, 0);
	}
	if (Function_9(Global_77931, 0x8000000))
	{
		Function_38(137, 1, 0, 0);
	}
	Global_77931 = 0;
	return;
}

int Function_38(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x14B7 / 5303
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + TO_FLOAT(bParam1));
	Function_52(iParam0, TO_FLOAT(bParam1), 1);
	Function_51(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_40(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	Function_39(iParam0);
	return 1;
}

void Function_39(bool bParam0) //Position: 0x16DF / 5855
{
	switch (bParam0)
	{
		case 0x00000009:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x000001C9:
		case 0x000001CA:
		case 0x0000016B:
		case 0x0000016C:
		case 0x0000016D:
		case 0x000001D5:
		case 0x00000190:
		case 0x0000019A:
		case 0x000001DA:
		case 0x000001DB:
		case 0x000001DC:
		case 0x00000197:
		case 0x000001D4:
		case 0x00000199:
		case 0x00000291:
		case 0x00000292:
		case 0x00000293:
		case 0x00000290:
			Global_6662 = 1;
			break;
	}
	return;
}

void Function_40(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x177D / 6013
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(bParam2));
	}
	else
	{
		cVar0 = F2STR(bParam2, 6, 2);
	}
	strcpy(&Global_55480[iParam016] + 32, "", 32);
	if (&bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_55480[iParam016] + 32, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_55480[iParam016].f_124 != 3 || Global_55480[iParam016].f_96 != 21)
	{
		stradd(&Global_55480[iParam016] + 32, "$", 32);
	}
	stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
	switch (Global_55480[iParam016].f_96)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_55480[iParam016] + 32, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (bParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(bParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((bParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
					if (bVar4 > 24)
					{
						bVar3 = (bVar4 / 24);
						bVar4 = (bVar4 - bVar3 * 24);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_55480[iParam016] + 32, " days", 32);
						}
						else
						{
							stradd(&Global_55480[iParam016] + 32, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar4), 32);
						stradd(&Global_55480[iParam016] + 32, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
						stradd(&Global_55480[iParam016] + 32, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
					stradd(&Global_55480[iParam016] + 32, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_55480[iParam016] + 32, " ", 32);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
				stradd(&Global_55480[iParam016] + 32, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			bParam2 = (bParam2 * 3,28084f);
			if (bParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				bParam2 = (bParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_55480[iParam016] + 32, " mi", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " days", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_55480[iParam016] + 32, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_50(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		iVar21 = 0;
		switch (Global_55480[iParam016].f_96)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (&bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_49(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_49(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_47(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_44(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_42(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_41(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_31(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_41(int iParam0) //Position: 0x1DBB / 7611
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_42(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1DCC / 7628
{
	char* cVar0[32];
	
	if (&bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_43("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_43("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_43("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_43(char* cParam0) //Position: 0x1EC3 / 7875
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_44(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1EDE / 7902
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_46(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_45(Function_46(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_45(int iParam0, int iParam1) //Position: 0x1F45 / 8005
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_46(int iParam0, bool bParam1) //Position: 0x1F57 / 8023
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_47(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1F69 / 8041
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_CALCULATE_PROGRESSBAR_VALUES: STAT_INVALID");
		return;
	}
	if (Global_55480[iParam016].f_112 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_55480[iParam016].f_112;
	}
	fVar1 = Global_55480[iParam016].f_108;
	if (((Function_48(iParam0) != 19 || Function_48(iParam0) != 17) || Function_48(iParam0) != 10) || Function_48(iParam0) != 9)
	{
		if (fParam1 > fVar1)
		{
			fParam1 = fVar1;
		}
		if (fParam1 < fVar0)
		{
			fParam1 = fVar0;
		}
		if (fParam2 > -(fParam1 - fVar1))
		{
			fParam2 = -(fParam1 - fVar1);
		}
		if (fParam2 < (fVar0 - fParam1))
		{
			fParam2 = (fVar0 - fParam1);
		}
		fVar2 = ((fParam1 - fVar1) / (fVar0 - fVar1));
		fVar3 = (fParam2 / (fVar0 - fVar1));
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_48(int iParam0) //Position: 0x209D / 8349
{
	return Global_55480[iParam016].f_96;
}

float Function_49(int iParam0) //Position: 0x20AC / 8364
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_50(int iParam0) //Position: 0x20E5 / 8421
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_51(int iParam0) //Position: 0x2122 / 8482
{
	if (Global_55480[iParam016].f_112 == 0.0f)
	{
		if (Global_54086[iParam0] < Global_55480[iParam016].f_112)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_55480[iParam016].f_108 == 0.0f)
	{
		if (Global_54086[iParam0] > Global_55480[iParam016].f_108)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x22BC / 8892
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_55480[iParam016].f_100;
	if (iVar1 == 4294967295)
	{
		return 0;
	}
	iVar0 = iVar1;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a LifetimeStat out of bounds.");
		return 0;
	}
	if (bParam2)
	{
		if ((iParam0 <= 500 && iParam0 >= 586) || iParam0 != 596)
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + 1.0f);
		}
		else
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + bParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = bParam1;
	}
	if (Global_55480[iVar116].f_112 == 0.0f)
	{
		if (Global_54086[iVar1] < Global_55480[iVar116].f_112)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_112;
		}
	}
	if (Global_55480[iVar116].f_108 == 0.0f)
	{
		if (Global_54086[iVar1] > Global_55480[iVar116].f_108)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_108;
		}
	}
	return 1;
}

void Function_53(bool bParam0) //Position: 0x2500 / 9472
{
	int iVar0;
	
	switch (bParam0)
	{
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
		case 0x00000018:
		case 0x00000019:
		case 0x0000001D:
			break;
		
		default:
			Function_38(49, 1, 0, 0);
			break;
	}
	iVar0 = (50 + bParam0);
	Function_38(iVar0, 1, 0, 0);
	return;
}

void Function_54(bool bParam0) //Position: 0x2550 / 9552
{
	int iVar0;
	
	switch (bParam0)
	{
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
		case 0x00000018:
		case 0x00000019:
		case 0x0000001D:
			break;
		
		default:
			Function_59(49, (Function_50(49) + 1.0f));
			Function_38(89, 1, 0, 0);
			Function_58(6);
			Function_55(6);
			break;
	}
	iVar0 = (50 + bParam0);
	Function_59(iVar0, (Function_50(iVar0) + 1.0f));
	iVar0 = (90 + bParam0);
	Function_38(iVar0, 1, 0, 0);
	return;
}

void Function_55(int iParam0) //Position: 0x25C8 / 9672
{
	if (iParam0 == 6)
	{
		if (Global_21369.f_236 >= 0)
		{
			Global_21369.f_236 = (Global_21369.f_236 * 4294967295);
		}
		else if (Global_21369.f_236 <= 0)
		{
			Global_21369.f_236 = 0;
		}
	}
	else if (iParam0 == 11)
	{
		if (Global_21369.f_236 <= 0)
		{
			Global_21369.f_236 = (Global_21369.f_236 * 4294967295);
		}
		Global_21369.f_236++;
		if (Global_21369.f_236 >= Function_57(48))
		{
			Function_56(48, Global_21369.f_236, 0);
		}
	}
	return;
}

int Function_56(int iParam0, bool bParam1, bool bParam2) //Position: 0x263F / 9791
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_52(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_51(iParam0);
	if (&bParam2)
	{
		Function_40(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_57(int iParam0) //Position: 0x28DB / 10459
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

void Function_58(int iParam0) //Position: 0x291C / 10524
{
	if (iParam0 == 6)
	{
		if (Global_21369.f_232 >= 0)
		{
			Global_21369.f_232 = (Global_21369.f_232 * 4294967295);
		}
		else if (Global_21369.f_232 <= 0)
		{
			Global_21369.f_232 = 0;
		}
	}
	else if (iParam0 == 10)
	{
		if (Global_21369.f_232 <= 0)
		{
			Global_21369.f_232 = (Global_21369.f_232 * 4294967295);
		}
		Global_21369.f_232++;
		if (Global_21369.f_232 >= Function_57(47))
		{
			Function_56(47, Global_21369.f_232, 0);
		}
	}
	return;
}

int Function_59(int iParam0, int iParam1) //Position: 0x2993 / 10643
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

void Function_60(int iParam0, int iParam1) //Position: 0x29D3 / 10707
{
	if (StackVal == 1)
	{
		if (iParam1 >= 0)
		{
			if (iParam0 >= 0)
			{
				Function_139(0, 10, 1);
			}
			else
			{
				Function_139(0, 10, 0);
			}
			Function_61(0, &Global_77932[018] + 8, &Global_77932[018] + 12, iParam0);
		}
	}
	return;
}

void Function_61(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x2A1D / 10781
{
	bool bVar0;
	float fVar1;
	
	switch (uParam1)
	{
		case 0x00000000:
			Function_138(bParam0);
			fVar1 = Function_137(bParam0);
			if (Function_136(&iLocal_3))
			{
				if (Function_134(&iLocal_3) < 10.0f)
				{
					Global_77932[bParam018].f_36 = 0;
					bVar0 = Global_77932[bParam018].f_36;
					uParam2 = 0.0f;
					Function_133(&iLocal_3);
					Function_132(bParam0, 1);
					Function_131(bParam0, uParam2, 0, bVar0, 4294967295, 4294967295, 0);
				}
			}
			if ((((Global_79340[23118].f_36 != 0 || Global_79340[23118].f_36 != 1) || Global_79340[23118].f_36 != 2) || Global_79340[23118].f_36 != 4) || Global_79340[23118].f_36 != 3)
			{
				Global_77932[bParam018].f_36++;
				if (!Function_136(&iLocal_3))
				{
					Function_129(&iLocal_3);
					Function_139(bParam0, 5, 1);
				}
			}
			bVar0 = Global_77932[bParam018].f_36;
			if (Function_136(&iLocal_3))
			{
				if (bVar0 <= 5 && Function_134(&iLocal_3) >= 10.0f)
				{
					uParam2 = 0.0f;
					Function_133(&iLocal_3);
					Function_125(bParam0, &uParam1, 1, 10, 0, 1);
					Function_124(bParam0);
				}
				else
				{
					uParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(5));
					if (uParam2 == fVar1)
					{
						Function_131(bParam0, uParam2, 1, bVar0, 4294967295, 4294967295, 22);
					}
				}
			}
			break;
		
		case 0x00000001:
			Function_124(bParam0);
			if (Function_123(bParam0, 10) == 1)
			{
				Function_139(bParam0, 5, 1);
				Global_77932[bParam018].f_36 = (&iParam3 + Global_77932[bParam018].f_36);
				bVar0 = Global_77932[bParam018].f_36;
				if (bVar0 > 10)
				{
					uParam2 = 0.0f;
					Function_125(bParam0, &uParam1, 2, 5, 0, 1);
					Function_124(bParam0);
				}
				else
				{
					uParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(10));
					if (uParam2 == fVar1)
					{
						Function_131(bParam0, uParam2, 1, bVar0, 4294967295, 4294967295, 22);
					}
				}
			}
			else
			{
				Global_77932[bParam018].f_36 = 0;
				bVar0 = Global_77932[bParam018].f_36;
				uParam2 = 0.0f;
				Function_131(bParam0, uParam2, 1, bVar0, 4294967295, 4294967295, 22);
			}
			break;
		
		case 0x00000002:
			Function_124(bParam0);
			if (Function_123(bParam0, 10) == 1)
			{
				Function_139(bParam0, 5, 1);
				if ((((Global_79340[23118].f_36 != 0 || Global_79340[23118].f_36 != 1) || Global_79340[23118].f_36 != 2) || Global_79340[23118].f_36 != 4) || Global_79340[23118].f_36 != 3)
				{
					if (Global_79340[23218].f_36 == 1)
					{
						Global_77932[bParam018].f_36++;
					}
				}
				bVar0 = Global_77932[bParam018].f_36;
				if (bVar0 > 5)
				{
					uParam2 = 0.0f;
					Function_125(bParam0, &uParam1, 3, 4, 0, 1);
					Function_124(bParam0);
				}
				else
				{
					uParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(5));
					if (uParam2 == fVar1)
					{
						Function_131(bParam0, uParam2, 1, bVar0, 4294967295, 4294967295, 22);
					}
				}
			}
			else
			{
				Global_77932[bParam018].f_36 = 0;
				bVar0 = Global_77932[bParam018].f_36;
				uParam2 = 0.0f;
				Function_132(bParam0, 1);
				Function_131(bParam0, uParam2, 0, bVar0, 4294967295, 4294967295, 0);
			}
			break;
		
		case 0x00000003:
			Function_124(bParam0);
			if (Function_123(bParam0, 10) == 1)
			{
				Function_139(bParam0, 5, 1);
				if (Global_79340[23118].f_36 != 0 && Function_123(bParam0, 1) == 1)
				{
					Global_77932[bParam018].f_36++;
					Function_139(bParam0, 1, 1);
				}
				else if (Global_79340[23118].f_36 != 1 && Function_123(bParam0, 2) == 1)
				{
					Global_77932[bParam018].f_36++;
					Function_139(bParam0, 2, 1);
				}
				else if (Global_79340[23118].f_36 != 2 && Function_123(bParam0, 3) == 1)
				{
					Global_77932[bParam018].f_36++;
					Function_139(bParam0, 3, 1);
				}
				else if (Global_79340[23118].f_36 != 3 && Function_123(bParam0, 4) == 1)
				{
					Global_77932[bParam018].f_36++;
					Function_139(bParam0, 4, 1);
				}
				bVar0 = Global_77932[bParam018].f_36;
				if (bVar0 > 4)
				{
					uParam2 = 0.0f;
					Function_125(bParam0, &uParam1, 4, 5, 0, 1);
					Function_124(bParam0);
				}
				else
				{
					uParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(4));
					if (uParam2 == fVar1)
					{
						Function_131(bParam0, uParam2, 0, bVar0, 4294967295, 4294967295, 22);
					}
				}
			}
			else
			{
				Global_77932[bParam018].f_36 = 0;
				bVar0 = Global_77932[bParam018].f_36;
				uParam2 = 0.0f;
				Function_132(bParam0, 1);
				Function_131(bParam0, uParam2, 0, bVar0, 4294967295, 4294967295, 0);
			}
			break;
		
		case 0x00000004:
			Function_138(bParam0);
			fVar1 = Function_137(bParam0);
			if (Function_136(&iLocal_3))
			{
				if (Function_134(&iLocal_3) < 10.0f)
				{
					Global_77932[bParam018].f_36 = 0;
					bVar0 = Global_77932[bParam018].f_36;
					uParam2 = 0.0f;
					Function_133(&iLocal_3);
					Function_132(bParam0, 1);
					Function_131(bParam0, uParam2, 0, bVar0, 4294967295, 4294967295, 0);
				}
			}
			if ((((Global_79340[23118].f_36 != 0 || Global_79340[23118].f_36 != 1) || Global_79340[23118].f_36 != 2) || Global_79340[23118].f_36 != 4) || Global_79340[23118].f_36 != 3)
			{
				if (Global_79340[23018].f_36 != 20 || Global_79340[23018].f_36 != 19)
				{
					Global_77932[bParam018].f_36++;
					if (!Function_136(&iLocal_3))
					{
						Function_139(bParam0, 5, 1);
						Function_129(&iLocal_3);
					}
				}
			}
			bVar0 = Global_77932[bParam018].f_36;
			if (Function_136(&iLocal_3))
			{
				if (bVar0 <= 5 && Function_134(&iLocal_3) >= 10.0f)
				{
					uParam2 = 0.0f;
					Function_133(&iLocal_3);
					Function_62(bParam0, &uParam1, 0);
					Function_124(bParam0);
				}
				else
				{
					uParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(5));
					if (uParam2 == fVar1)
					{
						Function_131(bParam0, uParam2, 1, bVar0, 4294967295, 4294967295, 22);
					}
				}
			}
			break;
	}
}

void Function_62(bool bParam0, bool bParam1, int iParam2) //Position: 0x3019 / 12313
{
	Function_132(bParam0, 1);
	bParam1 = 10;
	Function_118(bParam0);
	if (!IS_STRING_VALID(&iParam2))
	{
		iParam2 = "challenge_04_128";
	}
	Function_114(bParam0, 11);
	Function_112(bParam0, 10, 1.0f, 1);
	Function_65();
	Function_64();
	Function_63(bParam0, 4);
	return;
}

void Function_63(int iParam0, int iParam1) //Position: 0x306E / 12398
{
	if (Global_53524.f_44)
	{
		Function_21(&Global_78078[iParam018] + 40, iParam1);
	}
	else
	{
		Function_21(&Global_77932[iParam018] + 40, iParam1);
	}
	return;
}

void Function_64() //Position: 0x309D / 12445
{
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(48))
	{
		if (StackVal && (StackVal && (StackVal && StackVal != 10 != 10) != 10) != 10)
		{
			AWARD_ACHIEVEMENT(48);
		}
	}
	return;
}

void Function_65() //Position: 0x30E8 / 12520
{
	if (!Function_22(4, 0))
	{
		Function_101(19, 0, 0, 0, 0);
	}
	else
	{
		Function_101(22, 0, 0, 0, 0);
	}
	if (StackVal && (StackVal && (StackVal && StackVal != 10 != 10) != 10) != 10)
	{
		if (!Function_22(4, 0))
		{
			Function_66(19, 0, 1);
		}
		else
		{
			Function_66(22, 0, 1);
		}
	}
	return;
}

void Function_66(bool bParam0, bool bParam1, bool bParam2) //Position: 0x315C / 12636
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_100(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_99(bParam0))
	{
		if (!Function_97(bParam0))
		{
			Function_101(bParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_42265[bParam09].f_64 != 4294967295 || (Global_42265[bParam09].f_64 != 0 && Global_42265[bParam09].f_28 < 0))
		{
			Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_42265[bParam09].f_64);
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, false, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_38(457, 1, 0, 0);
		Function_96(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_95(0, 0, 1, 1))
			{
				Function_69(1);
				Function_68(1, 0);
			}
			else
			{
				Function_67();
			}
		}
	}
	return;
}

void Function_67() //Position: 0x32FD / 13053
{
	return;
}

void Function_68(int iParam0, int iParam1) //Position: 0x3303 / 13059
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = iParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_69(bool bParam0) //Position: 0x3342 / 13122
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_84();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_70();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_21(&Global_99144, 1);
		Function_21(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_70() //Position: 0x3397 / 13207
{
	Function_82();
	Function_81();
	Function_81();
	Function_80();
	Function_80();
	Function_79();
	Function_79();
	Function_78(0);
	Function_78(0);
	Function_75();
	Function_74();
	Function_73();
	Function_72();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_71();
	return;
}

void Function_71() //Position: 0x33E2 / 13282
{
	Global_54086[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_54086[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_54086[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_54086[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_54086[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_54086[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_54086[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_54086[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_54086[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_54086[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_54086[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_54086[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_54086[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_54086[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_54086[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_54086[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_54086[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_54086[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_54086[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_54086[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_54086[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_72() //Position: 0x34E8 / 13544
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_39290[1])
	{
		if (fVar0 > 50.0f)
		{
			fVar0 = 50.0f;
		}
	}
	else
	{
		fVar0 = 0.0f;
	}
	Global_131716 = fVar0;
	return;
}

void Function_73() //Position: 0x351B / 13595
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119632[iVar23] = bVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119632[iVar13] = 4294967295;
		*(&Global_119632[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	return;
}

void Function_74() //Position: 0x36AE / 13998
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119329[iVar23] = bVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119329[iVar13] = 4294967295;
		*(&Global_119329[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	Global_119631 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_119631 == 4294967295 && Global_119631 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_119631) != 2)
		{
			Global_119631 = 4294967295;
		}
	}
	return;
}

void Function_75() //Position: 0x3867 / 14439
{
	Function_76(&Global_42918, 1, 0);
	return;
}

void Function_76(struct<2317> Param0) //Position: 0x3875 / 14453
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	uVar0 = Function_77();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || uParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(&uVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (Param0.f_1060 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, &uVar0);
			if (iVar9 != iVar7)
			{
				(*&Param0 + 92)[iVar1] = iVar9;
				(&Param0 + 92[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 92)[iVar1], &uVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			Param0.f_88 = GET_NUM_ACCESSORIES_IN_INVENTORY(&uVar0);
			iVar2 = 0;
			while (iVar2 < (Param0.f_88 - 1))
			{
				Param0[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, &uVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[bVar3] = _GET_AMMO_AMOUNT(&uVar0, bVar3, 0);
			bVar3++;
		}
		Param0.f_1272 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, bVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*&Param0 + 1208)[iVar4] = bVar8;
					Param0.f_1272 = bVar8;
				}
			}
			iVar4++;
		}
		Param0.f_2316 = GET_NUM_COLLECTABLES_IN_INVENTORY(&uVar0);
		iVar1 = 0;
		while (iVar1 < (Param0.f_2316 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, &uVar0);
			(*&Param0 + 1284)[iVar1] = uVar11;
			(&Param0 + 1284[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 1284)[iVar1], &uVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (bVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, bVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (bVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, bVar13);
		}
		else
		{
			Param0.f_1280 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*&Param0 + 2320)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

int Function_77() //Position: 0x3A92 / 14994
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_78(char* cParam0) //Position: 0x3AA7 / 15015
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 <= 39)
	{
		switch (iVar4)
		{
			case 0x00000015:
			case 0x00000016:
				iVar2 = 0;
				break;
			
			default:
				if (iVar4 == 31 || cParam0)
				{
					iVar2 = ((Function_57((50 + iVar4)) + Function_57((183 + iVar4))) + Function_57((90 + iVar4)));
				}
				break;
		}
		if (iVar2 > iVar3)
		{
			bVar5 = iVar4;
			iVar3 = iVar2;
		}
		iVar4++;
	}
	if (iVar3 < 0)
	{
		return StackVal, cVar0;
	}
	Function_56(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_79() //Position: 0x3B4E / 15182
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 4)
	{
		iVar2 = ((Function_57((50 + iVar3) + 15) + Function_57((183 + iVar3) + 15)) + Function_57((90 + iVar3) + 15));
		if (iVar2 > iVar5)
		{
			iVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_56(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_80() //Position: 0x3BD7 / 15319
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 13)
	{
		if (iVar3 > 7 || iVar3 < 10)
		{
			iVar2 = ((Function_57((50 + iVar3) + 8) + Function_57((183 + iVar3) + 8)) + Function_57((90 + iVar3) + 8));
			if (iVar2 > iVar5)
			{
				iVar4 = iVar3;
				iVar5 = iVar2;
			}
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_56(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_81() //Position: 0x3C6E / 15470
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_57((50 + iVar3)) + Function_57((183 + iVar3))) + Function_57((90 + iVar3)));
		if (iVar2 > iVar5)
		{
			bVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_56(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_82() //Position: 0x3CED / 15597
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_83(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_56(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_83(int iParam0, bool bParam1, int iParam2) //Position: 0x3D2A / 15658
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + bParam1);
	Function_52(iParam0, bParam1, 1);
	Function_51(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_40(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_84() //Position: 0x3F36 / 16182
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_94())
	{
		Function_91(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_91(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_86(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_86(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_85(StackVal, Var0))
	{
		Var0 = Global_54078;
		Var0.f_4 = (StackVal + 0,5f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	}
	else
	{
		Global_53524 = Var0;
	}
	Global_53524.f_208 = Global_53524.f_12;
	(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_85(char* cParam0) //Position: 0x3FED / 16365
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_86(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4006 / 16390
{
	int iVar0;
	
	iVar0 = Function_89(&uParam2, &uParam3);
	if (Function_88(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_87(&Global_99144, 1);
			Function_21(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_87(&Global_99144, 2);
			Function_21(&Global_99144, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				uParam1 = 0;
			}
			else
			{
				uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			uParam0 = 89,88f;
			return StackVal, Vector(-2158,348f, 19,944f, 2597,452f);
		}
		uParam0 = Global_26200[iVar014].f_12;
		return StackVal, Global_26200[iVar014];
	}
	if (Global_26651)
	{
		Function_87(&Global_99144, 2);
		Function_21(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_29();
	return StackVal, Function_29();
}

void Function_87(bool bParam0, int iParam1) //Position: 0x40FE / 16638
{
	bParam0 = (bParam0 || iParam1);
	return;
}

bool Function_88(int iParam0) //Position: 0x410F / 16655
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_89(bool bParam0, bool bParam1) //Position: 0x4125 / 16677
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_26200)
	{
		if (((Global_26200[iVar314].f_40 != 3 || Global_26200[iVar314].f_40 != 4) || (iVar3 != 15 && !&bParam0)) && (Global_26200[iVar314].f_52 != Global_43787 || bParam1))
		{
			if (Global_6606 || iVar3 == 6)
			{
				fVar2 = Function_90(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_26651)
	{
		fVar2 = Function_90(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_88(iVar0) && !&bParam1)
	{
		iVar0 = Function_89(&bParam0, 1);
	}
	return iVar0;
}

float Function_90(struct<2> Param0, struct<2> Param2) //Position: 0x41F1 / 16881
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_91(float fParam0, int iParam1) //Position: 0x420E / 16910
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_93(&Global_54076, &Var3);
	if (!Function_92(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -130,87f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135,09f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 206,26f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 106,17f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 343,64f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 165,38f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -97,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -6,71f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -180.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 22,55f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -104,45f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 270.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 59,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 20,74f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 94,65f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_92(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -39,9f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	bVar7 = VDIST(Var3, Var5);
	if (bVar7 > bVar0)
	{
		bVar0 = bVar7;
		Var1 = Var5;
	}
	Function_87(&Global_99144, 2);
	Function_21(&Global_99144, 1);
	iParam1 = 0;
	if (Function_85(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_92(int iParam0) //Position: 0x4A3A / 19002
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_9(uVar0, 0x1000000) || Function_9(uVar0, 0x2000000)) || Function_9(uVar0, 0x4000000)) || !Function_9(uVar0, 0x10000000));
}

void Function_93(var uParam0, var uParam1) //Position: 0x4A75 / 19061
{
	GET_POSITION(&uParam0, &uParam1);
	return;
}

bool Function_94() //Position: 0x4A84 / 19076
{
	if (Function_9(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_95(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x4A9F / 19103
{
	iParam0 = &iParam0;
	if (Global_6623 && !&iParam1 != 1)
	{
		return 1;
	}
	if (Global_6625 && !&iParam1 != 2)
	{
		return 1;
	}
	if (Global_6635 && !&iParam1 != 6)
	{
		return 1;
	}
	if (Global_6627 && !&iParam1 != 4)
	{
		return 1;
	}
	if (Global_6636 && iParam2)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (Global_6628 && !&iParam1 != 3)
	{
		return 1;
	}
	if (Global_93258 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_96(bool bParam0, int iParam1) //Position: 0x4B4E / 19278
{
	if (!Function_100(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_97(int iParam0) //Position: 0x4BA3 / 19363
{
	if (!Function_100(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_98(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_98(int iParam0, int iParam1) //Position: 0x4BF5 / 19445
{
	int iVar0;
	
	if (!Function_100(iParam0))
	{
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_99(int iParam0) //Position: 0x4C22 / 19490
{
	if (!Function_100(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_98(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_100(int iParam0) //Position: 0x4C73 / 19571
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_101(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x4C89 / 19593
{
	char* cVar0[32];
	
	if (!Function_100(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_111(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_97(bParam0))
	{
		Function_38(456, 1, 0, 0);
		Function_96(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_95(0, 0, 1, 1))
			{
				Function_69(1);
				Function_68(1, 5);
			}
			else
			{
				Function_67();
			}
		}
		Function_105(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_104() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_104() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_102(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_94())
		{
			if (!Function_26(Global_119934, 2))
			{
				Function_16(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_102(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x4DE5 / 19941
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_103(Global_10966) };
		}
		PRINT_HELP_B(&bParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&bParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_103(int iParam0) //Position: 0x4E70 / 20080
{
	char* cVar0[16];
	
	if (!Function_94())
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

bool Function_104() //Position: 0x4EAF / 20143
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_105(bool bParam0) //Position: 0x4EDC / 20188
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 1))
	{
		Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 0);
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_109(bParam0, Function_110(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_109(bParam0, Function_110(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_108(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_107(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_106(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_106(int iParam0) //Position: 0x508C / 20620
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_100(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
	{
		iVar1 = iVar1;
		if ((StackVal && iVar0) == 0)
		{
			return iVar1 + 1;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2 + 1;
}

void Function_107(bool bParam0, bool bParam1) //Position: 0x50E3 / 20707
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(bParam0);
	REMOVE_JOURNAL_ENTRY(bParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(bParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(bParam0);
	}
	return;
}

var Function_108(int iParam0) //Position: 0x5108 / 20744
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_100(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
	{
		if ((StackVal && iVar0) >= 0)
		{
			iVar2++;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2;
}

bool Function_109(bool bParam0, int iParam1) //Position: 0x515E / 20830
{
	int iVar0;
	
	if (!Function_100(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_110(bool bParam0) //Position: 0x51BD / 20925
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_111(int iParam0) //Position: 0x51C9 / 20937
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

int Function_112(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x51E5 / 20965
{
	char* cVar0[16];
	var uVar4;
	
	if (&bParam3)
	{
		if (0 | Global_53524.f_44)
		{
			(*&Global_78078[bParam018] + 44)[bParam1] = bParam2;
		}
		else
		{
			(*&Global_77932[bParam018] + 44)[bParam1] = bParam2;
		}
		return 1;
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	uVar4 = Function_113();
	if (IS_LAYOUTREF_VALID(&uVar4))
	{
		return DECOR_SET_FLOAT(&uVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_FLOAT: failed to store float value in slot");
	return 0;
}

bool Function_113() //Position: 0x52A0 / 21152
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(&iVar0))
	{
		iVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return &iVar0;
}

int Function_114(bool bParam0, int iParam1) //Position: 0x52F1 / 21233
{
	int iVar0;
	
	if (0 | Global_53524.f_44)
	{
		if (bParam0 >= Global_78078)
		{
			LOG_ERROR("AM_GUI_SEND_UPDATE_MESSAGE: invalid MissionId");
			return 0;
		}
	}
	if (bParam0 >= Global_77932)
	{
		LOG_ERROR("AM_GUI_SEND_UPDATE_MESSAGE: invalid MissionId");
		return 0;
	}
	iVar0 = Function_115();
	Global_98983[iVar07] = bParam0;
	Global_98983[iVar07].f_4 = iParam1;
	Global_99127 = 0;
	return 1;
}

int Function_115() //Position: 0x53A1 / 21409
{
	int iVar0;
	
	iVar0 = (Global_98983 - 1);
	while (iVar0 >= 0)
	{
		if (Global_98983[iVar07] == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	Function_116();
	return 0;
}

void Function_116() //Position: 0x53D1 / 21457
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_98983 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 >= 0)
	{
		Global_98983[iVar07] = Global_98983[iVar17];
		Global_98983[iVar07].f_4 = StackVal;
		*(&Global_98983[iVar07] + 8) = { StackVal, StackVal, StackVal, (&Global_98983[iVar17] + 8) };
		*(&Global_98983[iVar07] + 40) = { StackVal, *(&Global_98983[iVar17] + 40) };
		Function_117(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_117(int iParam0) //Position: 0x5451 / 21585
{
	Global_98983[iParam07] = 4294967295;
	Global_98983[iParam07].f_4 = 4294967295;
	strcpy(&Global_98983[iParam07] + 8, "NHIL", 16);
	strcpy(&Global_98983[iParam07] + 40, "NHIL", 8);
	return;
}

void Function_118(bool bParam0) //Position: 0x5491 / 21649
{
	struct<6> Var0;
	struct<6> Var6;
	
	if (Global_6632)
	{
		Global_6662 = 1;
	}
	CLEAR_JOURNAL_ENTRY(Function_122(bParam0));
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(bParam0) };
	if (0 | Global_53524.f_44)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_120(bParam0) };
	}
	else
	{
		memcpy(&Var6, StackVal, *(&Global_77932[bParam018] + 16), 6);
	}
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_119(bParam0) };
	APPEND_JOURNAL_ENTRY_DETAIL(Function_122(bParam0), &Var6, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Function_122(bParam0), true);
	SET_JOURNAL_ENTRY_PROGRESS(Function_122(bParam0), 1.0f, false, 0);
	return;
}

struct<24> Function_119(bool bParam0) //Position: 0x550D / 21773
{
	char* cVar0[24];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_120(bParam0) };
	if (Global_53524.f_44 | 0)
	{
		stradd(&cVar0, "_mp_des", 24);
		if (!IS_STRING_VALID(UI_GET_STRING(&cVar0)))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_120(bParam0) };
			stradd(&cVar0, "_des", 24);
		}
	}
	else
	{
		stradd(&cVar0, "_des", 24);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_120(bool bParam0) //Position: 0x5568 / 21864
{
	char* cVar0[24];
	
	if (0 | Global_53524.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_78078[bParam018] + 16), 6);
		stradd(&cVar0, "_", 24);
		stradd(&cVar0, INT_TO_STRING(StackVal), 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_77932[bParam018] + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_121(bool bParam0) //Position: 0x55DC / 21980
{
	char* cVar0[24];
	
	if (0 | Global_53524.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_78078[bParam018] + 16), 6);
		stradd(&cVar0, "_DYNAMIC_TITLE", 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_77932[bParam018] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_122(bool bParam0) //Position: 0x5648 / 22088
{
	if (0 | Global_53524.f_44)
	{
		return Global_78078[bParam018].f_32;
	}
	return Global_77932[bParam018].f_32;
}

int Function_123(bool bParam0, bool bParam1) //Position: 0x5670 / 22128
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_113();
	if (IS_LAYOUTREF_VALID(&bVar4))
	{
		if (DECOR_CHECK_EXIST(&bVar4, &cVar0))
		{
			return DECOR_GET_INT(&bVar4, &cVar0);
		}
		return 4294967295;
	}
	LOG_ERROR("AM_RETRIEVE_INT: failed to retrieve int value from layout");
	return 4294967295;
}

void Function_124(bool bParam0) //Position: 0x56FF / 22271
{
	Function_138(bParam0);
	return;
}

void Function_125(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5) //Position: 0x570A / 22282
{
	if (!IS_STRING_VALID(&iParam4))
	{
		iParam4 = "challenge_04_128";
	}
	bParam1 = iParam2;
	if (&bParam5)
	{
		Function_132(bParam0, 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_122(bParam0), 0.0f, false, 0);
	}
	else
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_122(bParam0), (TO_FLOAT(Global_77932[bParam018].f_36) / TO_FLOAT(&iParam3)), false, 0);
	}
	Function_127(bParam0, 0);
	Function_114(bParam0, bParam1);
	Function_112(bParam0, 10, 1.0f, 1);
	Function_126(bParam0, 4);
}

void Function_126(bool bParam0, int iParam1) //Position: 0x5790 / 22416
{
	if (0 | Global_53524.f_44)
	{
		Function_87(&Global_78078[bParam018] + 40, iParam1);
	}
	else
	{
		Function_87(&Global_77932[bParam018] + 40, iParam1);
	}
	return;
}

void Function_127(bool bParam0, bool bParam1) //Position: 0x57C1 / 22465
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_122(bParam0));
	if ((bParam1 && Function_128(bParam0, 4)) || !&bParam1)
	{
		PREPEND_JOURNAL_ENTRY(Function_122(bParam0), false);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(bParam0) };
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_120(bParam0) };
		UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_119(bParam0) };
		PREPEND_JOURNAL_ENTRY_DETAIL(Function_122(bParam0), &Var6, 0, 2, Function_128(bParam0, 4));
		if (bParam0 == 3)
		{
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_122(bParam0), "nAM_MAPHLP", 0, 2, true);
		}
		if (!&bParam1)
		{
			Function_126(bParam0, 4);
		}
	}
	return;
}

bool Function_128(bool bParam0, int iParam1) //Position: 0x584B / 22603
{
	if (0 | Global_53524.f_44)
	{
		return Function_9(Global_78078[bParam018].f_40, iParam1);
	}
	return Function_9(Global_77932[bParam018].f_40, iParam1);
}

void Function_129(int iParam0) //Position: 0x587D / 22653
{
	Function_130(&iParam0, 0.0f);
	return;
}

void Function_130(vector3 vParam0) //Position: 0x588A / 22666
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_87(&vParam0, 1);
	Function_21(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_131(bool bParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6) //Position: 0x58AF / 22703
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	char* cVar20[24];
	char* cVar26[24];
	char* cVar32[24];
	char* cVar38[24];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_122(bParam0), fParam1, true, 0);
	if (&bParam2)
	{
		if (((bParam0 != 12 || bParam0 != 13) || bParam0 != 10) || bParam0 != 11)
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_120(bParam0) };
			stradd(&cVar0, "_info", 24);
			memcpy(&cVar6, StackVal, *(&Global_78078[bParam018] + 16), 6);
			stradd(&cVar6, "_num", 24);
			if (&bParam3 >= 4294967295)
			{
				UI_SET_STRING(&cVar6, INT_TO_STRING(&bParam3));
			}
			if (&bParam4 >= 4294967295)
			{
				strcpy(&cVar12, "PVP_num2", 16);
				UI_SET_STRING(&cVar12, INT_TO_STRING(&bParam4));
			}
			if (&bParam5 >= 4294967295)
			{
				strcpy(&cVar16, "PVP_num3", 16);
				UI_SET_STRING(&cVar16, INT_TO_STRING(&bParam5));
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Function_122(bParam0), &cVar0, 2, 2, false);
			Function_107(Function_122(bParam0), 0);
		}
		else
		{
			cVar20 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_120(bParam0) };
			if (0 | Global_53524.f_44)
			{
				stradd(&cVar20, "_info_mp", 24);
			}
			else
			{
				stradd(&cVar20, "_info", 24);
			}
			if (&bParam3 >= 4294967295)
			{
				strcpy(&cVar26, "AM_num", 24);
				stradd(&cVar26, INT_TO_STRING((&iParam6 + 1)), 24);
				UI_SET_STRING(&cVar26, INT_TO_STRING(&bParam3));
			}
			if (&bParam4 >= 4294967295)
			{
				strcpy(&cVar32, "AM_num", 24);
				stradd(&cVar32, INT_TO_STRING((&iParam6 + 2)), 24);
				UI_SET_STRING(&cVar32, INT_TO_STRING(&bParam4));
			}
			if (&bParam5 >= 4294967295)
			{
				strcpy(&cVar38, "AM_num", 24);
				stradd(&cVar38, INT_TO_STRING((&iParam6 + 3)), 24);
				UI_SET_STRING(&cVar38, INT_TO_STRING(&bParam5));
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Function_122(bParam0), &cVar20, 2, 2, true);
			Function_107(Function_122(bParam0), 0);
		}
	}
}

void Function_132(bool bParam0, bool bParam1) //Position: 0x5A49 / 23113
{
	bool bVar0;
	char* cVar1[16];
	
	bVar0 = false;
	cVar1 = Function_113();
	if (IS_LAYOUTREF_VALID(&cVar1))
	{
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_INTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(&cVar1, &cVar2))
			{
				DECOR_REMOVE(&cVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_FLOATSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(&cVar1, &cVar2))
			{
				DECOR_REMOVE(&cVar1, &cVar2);
			}
			if (0 | Global_53524.f_44)
			{
				(*&Global_78078[bParam018] + 44)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_77932[bParam018] + 44)[bVar0] = 0.0f;
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_TIMERSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(&cVar1, &cVar2))
			{
				DECOR_REMOVE(&cVar1, &cVar2);
			}
			bVar0++;
		}
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_OBJECTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(&cVar1, &cVar2))
			{
				DECOR_REMOVE(&cVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			if (0 | Global_53524.f_44)
			{
				(*&Global_78078[bParam018] + 44)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_77932[bParam018] + 44)[bVar0] = 0.0f;
			}
			bVar0++;
		}
	}
	if (&bParam1)
	{
		if (0 | Global_53524.f_44)
		{
			Global_78078[bParam018].f_36 = 0;
		}
		else
		{
			Global_77932[bParam018].f_36 = 0;
		}
	}
	return;
}

void Function_133(vector3 vParam0) //Position: 0x5C14 / 23572
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

float Function_134(vector3 vParam0) //Position: 0x5C2B / 23595
{
	if (Function_136(&vParam0))
	{
		if (Function_135(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_135(int iParam0) //Position: 0x5CF8 / 23800
{
	return Function_9(iParam0, 2);
}

bool Function_136(int iParam0) //Position: 0x5D06 / 23814
{
	return Function_9(iParam0, 1);
}

float Function_137(bool bParam0) //Position: 0x5D14 / 23828
{
	if (0 | Global_53524.f_44)
	{
		return Global_78078[bParam018].f_12;
	}
	return Global_77932[bParam018].f_12;
}

void Function_138(bool bParam0) //Position: 0x5D3C / 23868
{
	if (0 | Global_53524.f_44)
	{
		Function_139(bParam0, 0, Global_78078[bParam018].f_36);
	}
	else
	{
		Function_139(bParam0, 0, Global_77932[bParam018].f_36);
	}
	return;
}

int Function_139(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5D71 / 23921
{
	char* cVar0[16];
	int iVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	iVar4 = Function_113();
	if (IS_LAYOUTREF_VALID(&iVar4))
	{
		return DECOR_SET_INT(&iVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_INT: failed to store int value in slot");
	return 0;
}

void Function_140(int iParam0) //Position: 0x5DE8 / 24040
{
	bool bVar0;
	struct<2> Var1;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	char* cVar8[64];
	int iVar24;
	var uVar25;
	struct<2> Var26;
	
	if (IS_LAYOUTREF_VALID(&Global_46715))
	{
		if (GET_EVENT_TYPE(&iParam0) != 17)
		{
			return;
		}
		bVar0 = GET_OBJECT_FROM_EVENT(&iParam0);
		if (!IS_OBJECT_VALID(&bVar0))
		{
			return;
		}
		if (DECOR_GET_STRING_HASH(&bVar0, "ExplosionType") == STRING_TO_HASH("ZombieBaitExplosion"))
		{
			Function_146(&bVar0);
			Var1 = Function_146(&bVar0);
			uVar3 = CREATE_OBJECTSET_IN_LAYOUT(Function_31(), &Global_46715, 15, 1);
			if (Function_143(StackVal, Var1, &uVar3, 30.0f, 0x40a00000, 1, 0))
			{
				Function_141(StackVal, &uVar3, Var1, 0x40000000);
			}
			if (GET_WEAPON_IN_HAND(&Global_54076) == 37)
			{
				if (FIND_GROUND_INTERSECTION(&Var1, 2.0f, &Var4, &Var6))
				{
					Var4.f_4 = (StackVal + 0,2f);
					strcpy(&cVar8, "baitdyna", 64);
					stradd(&cVar8, INT_TO_STRING(FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 2, 0))), 64);
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), &cVar8)))
					{
						iVar24 = CREATE_PROP_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), &cVar8, "throw_dynamite01x", Var4, Var6, false);
						uVar25 = GET_PHYSINST_FROM_OBJECT(&iVar24);
						SET_PROP_TARGETABLE(&uVar25, 1, 0);
						SET_PROP_TARGETABLE_ACQUISITION_RADIUS(&uVar25, 10.0f);
						SET_PROP_TARGETABLE_SCORE_BIAS(&uVar25, -100000.0f);
						SET_PROP_TARGETABLE_AS_ENEMY(&uVar25, 1);
						SET_PROP_TARGETABLE_TARGET_BOX_SIZE(&uVar25, 0,1f, 0,1f);
					}
				}
			}
			if (GET_OBJECT_NAMED_BONE_POSITION(&Global_54076, "wrist_r_attachment", &Var26))
			{
				if (VDIST(Var26, Var1) > 0,1f)
				{
					Function_28(&Var26, "DynamiteExplosion", &Global_54076, 1);
				}
			}
			DESTROY_OBJECTSET(&uVar3);
		}
	}
	return;
}

void Function_141(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5FBF / 24511
{
	bool bVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&uParam0))
	{
		uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0);
		if (IS_OBJECT_VALID(&uVar1))
		{
			iVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
			if (IS_ACTOR_VALID(&iVar2))
			{
				if (!IS_ACTOR_HOGTIED(&iVar2))
				{
					bVar3 = TASK_SEQUENCE_OPEN();
					TASK_WANDER(false, RAND_FLOAT_RANGE(0.0f, 3.0f));
					iVar4 = GET_ACTOR_GAIT_TYPE(&iVar2);
					switch (iVar4)
					{
						case 0x00000004:
							iVar5 = 3;
							break;
						
						case 0x00000003:
							iVar5 = 4;
							break;
						
						case 0x00000002:
							if (Function_142(&iVar2))
							{
								iVar5 = 4;
							}
							else
							{
								iVar5 = 2;
							}
							break;
						
						default:
							iVar5 = 1;
							break;
					}
					TASK_GO_NEAR_COORD(false, &uParam1, &uParam3, iVar5);
					TASK_WANDER(false, 10.0f);
					TASK_SEQUENCE_CLOSE();
					if (&iVar2 != &Global_54076)
					{
						TASK_SEQUENCE_PERFORM(&iVar2, bVar3);
					}
					TASK_SEQUENCE_RELEASE(bVar3, 1);
					if (Function_142(&iVar2))
					{
						TASK_PRIORITY_SET(&iVar2, true);
					}
					else
					{
						TASK_PRIORITY_SET(&iVar2, false);
					}
				}
			}
		}
		bVar0++;
	}
}

bool Function_142(int iParam0) //Position: 0x60BD / 24765
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1240 && bVar0 >= 1251)
	{
		return 1;
	}
	return 0;
}

bool Function_143(struct<2> Param0, var uParam2, float fParam3, var uParam4, var uParam5, bool bParam6) //Position: 0x60DE / 24798
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	int iVar5;
	
	if (Function_85(StackVal, Param0) || &fParam3 >= 0.0f)
	{
		return 0;
	}
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_31(), &Global_46715, 15, 1);
	uVar1 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_46715, Function_31(), 3, Param0, Vector(0.0f, 0.0f, 0.0f), Vector(&fParam3, &uParam4, &fParam3));
	if (IS_OBJECTSET_VALID(&uParam2) && IS_OBJECTSET_VALID(&uVar0))
	{
		LOCATE_ACTORS_IN_VOLUME(&uVar1, &uVar0, 0, 1);
		iVar2 = GET_OBJECTSET_SIZE(&uVar0);
		bVar3 = false;
		while (bVar3 <= iVar2)
		{
			uVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, &uVar0);
			if (IS_OBJECT_VALID(&uVar4))
			{
				iVar5 = GET_ACTOR_FROM_OBJECT(&uVar4);
				if (IS_ACTOR_VALID(&iVar5))
				{
					if (IS_ACTOR_ALIVE(&iVar5))
					{
						if (Function_145(&iVar5))
						{
							if (uParam5 || !IS_ACTOR_HOGTIED(&iVar5))
							{
								if (&bParam6)
								{
									if (Function_144(&iVar5, 0x3f800000, 0x42960000, 1, 1, 0))
									{
										if (!IS_OBJECT_IN_OBJECTSET(&uVar4, &uParam2))
										{
											ADD_OBJECT_TO_OBJECTSET(&uVar4, &uParam2);
										}
									}
								}
								else if (!IS_OBJECT_IN_OBJECTSET(&uVar4, &uParam2))
								{
									ADD_OBJECT_TO_OBJECTSET(&uVar4, &uParam2);
								}
							}
						}
					}
				}
			}
			bVar3++;
		}
	}
	DESTROY_OBJECTSET(&uVar0);
	DESTROY_VOLUME(&uVar1);
	if (GET_OBJECTSET_SIZE(&uParam2) >= 0)
	{
		return 1;
	}
	return 0;
}

bool Function_144(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x6215 / 25109
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

bool Function_145(bool bParam0) //Position: 0x6235 / 25141
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1254)
	{
		return 1;
	}
	if (Function_32(&bParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&bParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(&bParam0, "Zombie");
	}
	return 0;
}

struct<8> Function_146(bool bParam0) //Position: 0x6284 / 25220
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

void Function_147(var uParam0) //Position: 0x62AD / 25261
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	bool bVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	bool bVar14;
	var uVar15;
	int iVar16;
	var uVar17;
	var uVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	var uVar25;
	var uVar26;
	struct<2> Var27;
	bool bVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	var uVar33;
	int iVar34;
	
	uVar0 = GET_EVENT_TARGET_AS_OBJECT(&uParam0);
	if (IS_OBJECT_VALID(&uVar0))
	{
		if (GET_OBJECT_TYPE(&uVar0) == 15)
		{
			iVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
			if (IS_ACTOR_VALID(&iVar1))
			{
				if (Function_145(&iVar1))
				{
					uVar2 = GET_EVENT_PERPETRATOR(&uParam0);
					if (IS_OBJECT_VALID(&uVar2))
					{
						if (GET_OBJECT_TYPE(&uVar2) == 15)
						{
							uVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
							if (IS_ACTOR_VALID(&uVar3))
							{
								if (IS_ACTOR_LOCAL_PLAYER(&uVar3))
								{
									switch (GET_EVENT_TYPE(&uParam0))
									{
										case 0x00000012:
											if (Function_230(&iVar1))
											{
												Function_220(&iVar1, &uVar3);
											}
											break;
										
										case 0x00000031:
											if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&iVar1, "Hogtie")))
											{
												Function_29();
												Function_29();
												uVar4 = CREATE_GRINGO_ON_OBJECT(&iVar1, "Hogtie", "$/content/scripting/gringo/simplegringo/hogtie", Function_29(), Function_29());
												if (IS_OBJECT_VALID(&uVar4))
												{
													Function_29();
													Function_29();
													ATTACH_OBJECTS(&uVar4, &iVar1, "spine00", Function_29(), Function_29(), 4294967295);
												}
											}
											break;
										
										case 0x00000033:
											if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&iVar1, "Hogtie_Pickup")))
											{
												Function_29();
												Function_29();
												uVar5 = CREATE_GRINGO_ON_OBJECT(&iVar1, "Hogtie_Pickup", "$/content/scripting/gringo/simplegringo/hogtie_pickup", Function_29(), Function_29());
												if (IS_OBJECT_VALID(&uVar5))
												{
													DECOR_SET_OBJECT(&iVar1, "HogtiedGringoAttached", &uVar5);
												}
												uVar6 = &Global_44085[Global_437899] + 8;
												if (IS_VOLUME_VALID(&uVar6) && !Global_6628)
												{
													iVar7 = Function_219(Global_43789);
													if (iVar7 != 0)
													{
														if (!Function_217(Global_43789))
														{
															Function_216(iVar7, 0, 0, RAND_INT_RANGE(true, 5), 20);
														}
														else
														{
															bVar8 = DECOR_GET_FLOAT(&uVar6, "ZombieScore");
															bVar8 = (bVar8 + 2.0f);
															DECOR_SET_FLOAT(&uVar6, "ZombieScore", bVar8);
														}
													}
												}
												Function_38(678, 1, 0, 0);
											}
											break;
										
										case 0x00000030:
											if (DECOR_CHECK_EXIST(&iVar1, "lasso"))
											{
												DECOR_REMOVE(&iVar1, "lasso");
											}
											uVar9 = FIND_OBJECT_IN_OBJECT(&iVar1, "Hogtie_Pickup");
											if (IS_OBJECT_VALID(&uVar9))
											{
												DESTROY_OBJECT(&uVar9);
											}
											uVar9 = FIND_OBJECT_IN_OBJECT(&iVar1, "Hogtie");
											if (IS_OBJECT_VALID(&uVar9))
											{
												DESTROY_OBJECT(&uVar9);
											}
											break;
										
										case 0x00000022:
											if (DECOR_CHECK_STRING(&uParam0, "__LinkedAnimType", "__grappleExecution"))
											{
												Function_38(677, 1, 0, 0);
												DECOR_SET_FLOAT(&iVar1, "fZombieExecutedTime", GET_CURRENT_GAME_TIME());
												ADD_OBJECT_TO_OBJECTSET(&iVar1, &Global_39920);
											}
											else if (DECOR_CHECK_STRING(&uParam0, "__LinkedAnimType", "__pistolExecution"))
											{
												switch ((RAND_INT_RANGE(false, 100000) % 6))
												{
													case 0x00000000:
														Function_211(Function_213(FIND_NAMED_LAYOUT("Formations"), 0, &uVar3, 1, 0, 0));
														break;
													
													case 0x00000001:
														Function_211(Function_208(FIND_NAMED_LAYOUT("Formations"), 0, &uVar3, 1, 0, 0));
														break;
													
													case 0x00000002:
														Function_211(Function_205(FIND_NAMED_LAYOUT("Formations"), 0, &uVar3, 1, 0, 0));
														break;
													
													case 0x00000003:
														Function_211(Function_202(FIND_NAMED_LAYOUT("Formations"), 0, &uVar3, 1, 0, 0));
														break;
													
													case 0x00000004:
														Function_211(Function_199(FIND_NAMED_LAYOUT("Formations"), 0, &uVar3, 1, 0, 0));
														break;
													
													case 0x00000005:
														Function_211(Function_196(FIND_NAMED_LAYOUT("Formations"), 0, &uVar3, 1, 0, 0));
														break;
												}
												if (ACTOR_HAS_WEAPON_IN_HAND(&Global_54076, 33))
												{
													Function_38(677, 1, 0, 0);
												}
											}
											else if (DECOR_CHECK_STRING(&uParam0, "__LinkedAnimType", "__rifleExecution"))
											{
												switch ((RAND_INT_RANGE(false, 100000) % 5))
												{
													case 0x00000000:
														Function_211(Function_193(FIND_NAMED_LAYOUT("Formations"), 0, &uVar3, 1, 0, 0));
														break;
													
													case 0x00000001:
														Function_211(Function_190(FIND_NAMED_LAYOUT("Formations"), 0, &uVar3, 1, 0, 0));
														break;
													
													case 0x00000002:
														Function_211(Function_187(FIND_NAMED_LAYOUT("Formations"), 0, &uVar3, 1, 0, 0));
														break;
													
													case 0x00000003:
														Function_211(Function_184(FIND_NAMED_LAYOUT("Formations"), 0, &uVar3, 1, 0, 0));
														break;
													
													case 0x00000004:
														Function_211(Function_181(FIND_NAMED_LAYOUT("Formations"), 0, &uVar3, 1, 0, 0));
														break;
												}
												Function_38(677, 1, 0, 0);
												DECOR_SET_FLOAT(&iVar1, "fZombieExecutedTime", GET_CURRENT_GAME_TIME());
												ADD_OBJECT_TO_OBJECTSET(&iVar1, &Global_39920);
											}
											break;
										
										case 0x00000005:
											if (DECOR_GET_INT(&uParam0, "Weapon") == 34)
											{
												Function_174(&uParam0, 0);
											}
											break;
										
										case 0x0000000A:
											Function_38(676, 1, 0, 0);
											Function_173(&iVar1);
											break;
										
										case 0x0000005B:
											if (((DECOR_GET_STRING_HASH(GET_OBJECT_FROM_EVENT(&uParam0), "ExplosionType") == STRING_TO_HASH("ZombieBaitExplosion") && DECOR_GET_STRING_HASH(GET_OBJECT_FROM_EVENT(&uParam0), "ExplosionType") == STRING_TO_HASH("HolyWaterExplosion")) && DECOR_GET_STRING_HASH(GET_OBJECT_FROM_EVENT(&uParam0), "ExplosionType") == STRING_TO_HASH("FireBottleExplosion")) && DECOR_GET_STRING_HASH(GET_OBJECT_FROM_EVENT(&uParam0), "ExplosionType") == STRING_TO_HASH("KeroseneLampExplosion"))
											{
												Function_172(&iVar1);
											}
											break;
										
										case 0x00000002:
											if (!Function_142(&iVar1))
											{
												Function_38(671, 1, 0, 0);
											}
											if (Function_230(&iVar1))
											{
												Function_171(&iVar1);
											}
											else
											{
												if ((Function_170(&iVar1) || Function_33(&iVar1)) || Function_32(&iVar1, 1))
												{
													Function_38(672, 1, 0, 0);
												}
												else if (Function_169(&iVar1))
												{
													Function_38(674, 1, 0, 0);
												}
												else if (Function_168(&iVar1))
												{
													Function_38(675, 1, 0, 0);
												}
												else if (Function_167(&iVar1))
												{
													Function_38(673, 1, 0, 0);
												}
												if (Function_168(&iVar1))
												{
													if ((!DECOR_CHECK_EXIST(&iVar1, "NoCorpse") && GET_LAST_HIT_WEAPON(&iVar1) == 31) && GET_LAST_HIT_WEAPON(&iVar1) == 34)
													{
														Function_29();
														Function_29();
														uVar10 = CREATE_POINT_IN_LAYOUT(&iVar1, Function_31(), Function_29(), Function_29());
														if (IS_OBJECT_VALID(&uVar10))
														{
															Function_29();
															Function_29();
															ATTACH_OBJECTS(&uVar10, &iVar1, "spine00", Function_29(), Function_29(), 4294967295);
															PLAY_SOUND_FROM_OBJECT(&uVar10, "ZOMBIE_TOXIC_PRE_EXPLO_SCREAM_FAST_MASTER");
															Function_29();
															uVar11 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_31(), "blood_zombie_anticipateBurst", "spine00", &iVar1, Function_29(), &uVar10);
															if (IS_OBJECT_VALID(&uVar11))
															{
																Function_29();
																UNK_0x6745191B(&uVar11, Function_29());
															}
															DECOR_SET_FLOAT(&iVar1, "fToxicKilledTime", GET_CURRENT_GAME_TIME());
															DECOR_SET_INT(&iVar1, "iToxicKilledPerp", &Global_54076);
															ADD_OBJECT_TO_OBJECTSET(&iVar1, &Global_39920);
														}
														if (IS_ACTOR_VALID(GET_HOGTIED_MASTER(&iVar1)))
														{
															FREE_FROM_HOGTIE(&iVar1);
														}
													}
												}
												uVar12 = &Global_44085[Global_437899] + 8;
												if (IS_VOLUME_VALID(&uVar12) && !Global_6628)
												{
													iVar13 = Function_219(Global_43789);
													if (iVar13 != 0)
													{
														if (&Global_21369 + 72 != &iVar1)
														{
															if (!Function_217(Global_43789))
															{
																Function_216(iVar13, 0, 0, RAND_INT_RANGE(true, 5), 20);
															}
															else
															{
																bVar14 = DECOR_GET_FLOAT(&uVar12, "ZombieScore");
																bVar14 = (bVar14 + 2.0f);
																DECOR_SET_FLOAT(&uVar12, "ZombieScore", bVar14);
															}
														}
													}
												}
											}
											break;
									}
									return;
								}
							}
						}
					}
					switch (GET_EVENT_TYPE(&uParam0))
					{
						case 0x00000010:
							if ((Function_34(&iVar1) || Function_33(&iVar1)) || Function_32(&iVar1, 1))
							{
								Function_30(&iVar1, 0);
							}
							else if (Function_230(&iVar1))
							{
								DECOR_SET_BOOL(&iVar1, "Zombie", true);
								ACTOR_ENABLE_VARIABLE_MESH(&iVar1, 21, true);
								ACTOR_ENABLE_VARIABLE_MESH(&iVar1, 22, false);
								HORSE_SET_CURR_FRESHNESS(&iVar1, 1.0f);
								HORSE_LOCK_FRESHNESS(&iVar1);
								SET_ACTOR_DEATH_DROP_DISTANCE(&iVar1, 50.0f);
							}
							else if (GET_ACTOR_ENUM(&iVar1) == 1240)
							{
								ANIMAL_TUNING_SET_ATTRIB_BOOL(&iVar1, 11, false);
							}
							break;
						
						case 0x00000012:
							if (Function_230(&iVar1))
							{
								Function_220(&iVar1, 0);
							}
							break;
						
						case 0x00000057:
							if (IS_ACTOR_ALIVE(&iVar1))
							{
								uVar15 = GET_EVENT_PERPETRATOR(&uParam0);
								if (IS_OBJECT_VALID(&uVar15))
								{
									if (GET_OBJECT_TYPE(&uVar15) == 15)
									{
										iVar16 = GET_ACTOR_FROM_OBJECT(&uVar15);
										if (IS_ACTOR_VALID(&iVar16))
										{
											if (Function_166(&iVar16))
											{
												if (GET_ACTOR_ENUM(&iVar16) == 1269)
												{
													if ((!FIRE_IS_ACTOR_ON_FIRE(&iVar1) && !IS_ACTOR_RIDING(&iVar1)) && GET_HOGTIED_MASTER(&iVar1) == &iVar16)
													{
														uVar17 = FIRE_CREATE_HANDLE();
														if (IS_ACTOR_VALID(GET_RIDER(&iVar16)))
														{
															FIRE_SET_OWNER(&uVar17, GET_RIDER(&iVar16));
														}
														else
														{
															FIRE_SET_OWNER(&uVar17, &iVar16);
														}
														FIRE_CREATE_ON_ACTOR(&uVar17, &iVar1);
														FIRE_RELEASE_HANDLE(&uVar17, 1);
													}
												}
												else if (GET_ACTOR_ENUM(&iVar16) == 1268)
												{
													Function_172(&iVar1);
												}
												else if (GET_ACTOR_ENUM(&iVar16) == 1271)
												{
												}
												else if (GET_ACTOR_ENUM(&iVar16) == 1270)
												{
												}
											}
										}
									}
								}
							}
							break;
						
						case 0x0000000A:
							Function_173(&iVar1);
							break;
						
						case 0x00000002:
							if (Function_230(&iVar1))
							{
								Function_171(&iVar1);
							}
							break;
					}
				}
				else
				{
					switch (GET_EVENT_TYPE(&uParam0))
					{
						case 0x00000010:
							if (IS_ACTOR_HORSE(&iVar1))
							{
								if (Function_165(&iVar1))
								{
									Function_164(&iVar1);
								}
								else
								{
									if (Function_166(&iVar1))
									{
										Function_161(&iVar1);
									}
									ACTOR_ENABLE_VARIABLE_MESH(&iVar1, 21, true);
									ACTOR_ENABLE_VARIABLE_MESH(&iVar1, 22, false);
								}
							}
							else if (Function_160(&iVar1))
							{
								Function_159(&iVar1);
							}
							break;
						
						case 0x00000012:
							if (Function_165(&iVar1) || Function_166(&iVar1))
							{
								uVar18 = GET_EVENT_PERPETRATOR(&uParam0);
								if (IS_OBJECT_VALID(&uVar18))
								{
									if (GET_OBJECT_TYPE(&uVar18) == 15)
									{
										iVar19 = GET_ACTOR_FROM_OBJECT(&uVar18);
										if (IS_ACTOR_VALID(&iVar19))
										{
											Function_220(&iVar1, &iVar19);
										}
									}
								}
							}
							break;
						
						case 0x00000002:
							if (Function_166(&iVar1))
							{
								Function_171(&iVar1);
							}
							else
							{
								uVar20 = GET_EVENT_PERPETRATOR(&uParam0);
								if (IS_OBJECT_VALID(&uVar20))
								{
									if (GET_OBJECT_TYPE(&uVar20) == 15)
									{
										uVar21 = GET_ACTOR_FROM_OBJECT(&uVar20);
										if (IS_ACTOR_VALID(&uVar21))
										{
											if (IS_ACTOR_LOCAL_PLAYER(&uVar21))
											{
												if (Function_158(&iVar1))
												{
													Function_38(679, 1, 0, 0);
													if (!HAS_ACHIEVEMENT_BEEN_PASSED(50))
													{
														AWARD_ACHIEVEMENT(50);
													}
												}
											}
										}
									}
								}
							}
							break;
						}
					}
			}
		}
		else if (GET_OBJECT_TYPE(&uVar0) == 29)
		{
			if (Function_157(&uVar0))
			{
				switch (GET_EVENT_TYPE(&uParam0))
				{
					case 0x00000010:
						if (Function_156(&uVar0))
						{
							ADD_OBJECT_TO_OBJECTSET(&uVar0, &Global_39920);
						}
						else
						{
							bVar22 = Function_155(&uVar0);
							bVar23 = false;
							if (!bVar22)
							{
								if (Function_154(&uVar0))
								{
									DECOR_SET_BOOL(&uVar0, "bZombieCorpseArmed", true);
									bVar23 = true;
								}
							}
							bVar24 = true;
							if (!bVar22 && !bVar23)
							{
								if (IS_WEAPONENUM_LOCKED(34))
								{
									bVar24 = false;
								}
							}
							Function_29();
							uVar25 = CREATE_GRINGO_ON_OBJECT(StackVal, &uVar0, "Loot", "$/content/DLC/ZombiePack/Gringos/ZombiePack_LootZombie", Function_29(), Vector(0.0f, 1.0f, 0.0f));
							if (bVar24)
							{
								if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uVar25)))
								{
									uVar26 = ADD_BLIP_FOR_OBJECT(&uVar25, 456, 0.0f, 0, 0);
									SET_BLIP_MAX_DISTANCE(&uVar26, 0,5f);
									UNK_0x1E98AFEC(&uVar26, 1);
									SET_BLIP_SCALE(&uVar26, 0,6f);
									SET_BLIP_COLOR(&uVar26, 0,35f, 0,35f, 0,35f, 0,65f);
								}
							}
						}
						break;
					
					case 0x00000005:
						Function_29();
						Var27 = Function_29();
						if (GET_OBJECT_NAMED_BONE_POSITION(&uVar0, "head", &Var27))
						{
							Function_146(GET_OBJECT_FROM_EVENT(&uParam0));
							if (VDIST(Function_146(GET_OBJECT_FROM_EVENT(&uParam0)), Var27) > 0,2f)
							{
								bVar29 = GET_WEAPON_IN_HAND(GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(&uParam0)));
								bVar29 = UNK_0xDB679ED9(bVar29);
								if (((((((bVar29 != 50 || bVar29 != 42) || bVar29 != 49) || bVar29 != 39) || bVar29 != 43) || bVar29 != 40) || bVar29 != 41) || bVar29 != 44)
								{
									uVar30 = GET_PHYSINST_FROM_OBJECT(&uVar0);
									if (IS_PHYSINST_VALID(&uVar30))
									{
										PROP_ENABLE_VARIABLE_MESH(&uVar30, 23, 0);
										PROP_ENABLE_VARIABLE_MESH(&uVar30, 24, 0);
										PROP_ENABLE_VARIABLE_MESH(&uVar30, 25, 0);
										PROP_ENABLE_VARIABLE_MESH(&uVar30, 26, 0);
										PROP_ENABLE_VARIABLE_MESH(&uVar30, 27, 0);
										PROP_ENABLE_VARIABLE_MESH(&uVar30, 28, 0);
										if (((Function_35() || Function_153(&uVar0)) || Function_152(&uVar0)) || Function_151(&uVar0, 1))
										{
											PROP_ENABLE_VARIABLE_MESH(&uVar30, 29, 1);
										}
										else
										{
											PROP_ENABLE_VARIABLE_MESH(&uVar30, 30, 1);
										}
										if (DECOR_CHECK_EXIST(&uVar30, "oLeftEyeGlow"))
										{
											uVar31 = DECOR_GET_OBJECT(&uVar30, "oLeftEyeGlow");
											if (IS_OBJECT_VALID(&uVar31))
											{
												UNK_0x1A59E608(&uVar31);
											}
											DECOR_REMOVE(&uVar30, "oLeftEyeGlow");
										}
										if (DECOR_CHECK_EXIST(&uVar30, "oRightEyeGlow"))
										{
											uVar31 = DECOR_GET_OBJECT(&uVar30, "oRightEyeGlow");
											if (IS_OBJECT_VALID(&uVar31))
											{
												UNK_0x1A59E608(&uVar31);
											}
											DECOR_REMOVE(&uVar30, "oRightEyeGlow");
										}
										uVar32 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uVar0, Function_31(), "blood_zombie_shotgun_exit", Var27);
										if (IS_OBJECT_VALID(&uVar32))
										{
											Function_29();
											UNK_0x6745191B(&uVar32, Function_29());
										}
									}
								}
							}
						}
						if (DECOR_GET_INT(&uParam0, "Weapon") == 34)
						{
							Function_174(&uParam0, 0);
						}
						break;
				}
			}
			else
			{
				switch (GET_EVENT_TYPE(&uParam0))
				{
					case 0x00000010:
						if ((Function_150(&uVar0) || Function_149(&uVar0)) || Function_148(&uVar0))
						{
							Function_29();
							uVar33 = CREATE_GRINGO_ON_OBJECT(StackVal, &uVar0, "Loot", "$/content/DLC/ZombiePack/Gringos/ZombiePack_LootZombie", Function_29(), Vector(0.0f, 1.0f, 0.0f));
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uVar33)))
							{
								iVar34 = ADD_BLIP_FOR_OBJECT(&uVar33, 456, 0.0f, 0, 0);
								SET_BLIP_MAX_DISTANCE(&iVar34, 0,5f);
								UNK_0x1E98AFEC(&iVar34, 1);
								SET_BLIP_SCALE(&iVar34, 0,6f);
								SET_BLIP_COLOR(&iVar34, 0,35f, 0,35f, 0,35f, 0,65f);
							}
						}
						break;
					}
				}
			}
	}
	return;
}

int Function_148(int iParam0) //Position: 0x72BF / 29375
{
	if (GET_OBJECT_TYPE(&iParam0) == 29)
	{
		return GET_CORPSE_ACTOR_ENUM(&iParam0) != 1266;
	}
	if (GET_OBJECT_TYPE(&iParam0) == 15)
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0)) != 1266;
	}
	return 0;
}

int Function_149(int iParam0) //Position: 0x72F8 / 29432
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (GET_OBJECT_TYPE(&iParam0) == 29)
	{
		bVar0 = GET_CORPSE_ACTOR_ENUM(&iParam0);
	}
	else if (GET_OBJECT_TYPE(&iParam0) == 15)
	{
		bVar0 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0));
	}
	if (bVar0 <= 1263 && bVar0 >= 1265)
	{
		return 1;
	}
	return 0;
}

int Function_150(int iParam0) //Position: 0x7340 / 29504
{
	if (GET_OBJECT_TYPE(&iParam0) == 29)
	{
		return GET_CORPSE_ACTOR_ENUM(&iParam0) != 1267;
	}
	if (GET_OBJECT_TYPE(&iParam0) == 15)
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0)) != 1267;
	}
	return 0;
}

int Function_151(var uParam0, int iParam1) //Position: 0x7379 / 29561
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (GET_OBJECT_TYPE(&uParam0) == 29)
	{
		bVar0 = GET_CORPSE_ACTOR_ENUM(&uParam0);
	}
	else if (GET_OBJECT_TYPE(&uParam0) == 15)
	{
		bVar0 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uParam0));
	}
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x73E5 / 29669
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (GET_OBJECT_TYPE(&iParam0) == 29)
	{
		bVar0 = GET_CORPSE_ACTOR_ENUM(&iParam0);
	}
	else if (GET_OBJECT_TYPE(&iParam0) == 15)
	{
		bVar0 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0));
	}
	if (bVar0 <= 1228 && bVar0 >= 1239)
	{
		return 1;
	}
	return 0;
}

int Function_153(int iParam0) //Position: 0x742D / 29741
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (GET_OBJECT_TYPE(&iParam0) == 29)
	{
		bVar0 = GET_CORPSE_ACTOR_ENUM(&iParam0);
	}
	else if (GET_OBJECT_TYPE(&iParam0) == 15)
	{
		bVar0 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0));
	}
	if (bVar0 <= 1204 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_154(int iParam0) //Position: 0x7475 / 29813
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (GET_OBJECT_TYPE(&iParam0) == 29)
	{
		bVar0 = GET_CORPSE_ACTOR_ENUM(&iParam0);
	}
	else
	{
		bVar0 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0));
	}
	bVar1 = false;
	PRINTSTRING("Checking Zombie Corpse - ");
	PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(bVar0));
	if (((((bVar0 != 1234 || bVar0 != 1236) || bVar0 != 1237) || bVar0 != 1238) || bVar0 != 118) || bVar0 != 1235)
	{
		PRINTSTRING(" - Story Char");
		bVar1 = true;
	}
	else if (((bVar0 != 1204 || bVar0 != 1206) || bVar0 != 1208) || bVar0 != 1209)
	{
		PRINTSTRING(" - Fast Zombie");
		bVar1 = true;
	}
	else if ((bVar0 != 1215 || bVar0 != 1217) || bVar0 != 1219)
	{
		PRINTSTRING(" - Bruiser Zombie");
		bVar1 = true;
	}
	else if (bVar0 <= 369 && bVar0 >= 540)
	{
		PRINTSTRING(" - Cop Or Criminal");
		bVar1 = true;
	}
	else if (GET_OBJECT_TYPE(&iParam0) == 29)
	{
		uVar2 = GET_PHYSINST_FROM_OBJECT(&iParam0);
		if (IS_PHYSINST_VALID(&uVar2))
		{
			if (PROP_IS_VARIABLE_MESH_ENABLED(&uVar2, 5))
			{
				PRINTSTRING(" - Has A Gunbelt");
				bVar1 = true;
			}
			else
			{
				PRINTSTRING(" - No Gunbelt Found");
			}
		}
	}
	else if (ACTOR_IS_VARIABLE_MESH_ENABLED(GET_ACTOR_FROM_OBJECT(&iParam0), 5))
	{
		PRINTSTRING(" - Has A Gunbelt");
		bVar1 = true;
	}
	else
	{
		PRINTSTRING(" - No Gunbelt Found");
	}
	if (bVar1)
	{
		PRINTSTRING(" - Armed!!!");
		PRINTNL();
		return 1;
	}
	PRINTSTRING(" - Unarmed!!!");
	PRINTNL();
	return 0;
}

int Function_155(int iParam0) //Position: 0x767A / 30330
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (GET_OBJECT_TYPE(&iParam0) == 29)
	{
		bVar0 = GET_CORPSE_ACTOR_ENUM(&iParam0);
	}
	else if (GET_OBJECT_TYPE(&iParam0) == 15)
	{
		bVar0 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0));
	}
	if (bVar0 <= 1240 && bVar0 >= 1251)
	{
		return 1;
	}
	return 0;
}

bool Function_156(int iParam0) //Position: 0x76C2 / 30402
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (GET_OBJECT_TYPE(&iParam0) == 29)
	{
		bVar0 = GET_CORPSE_ACTOR_ENUM(&iParam0);
	}
	else if (GET_OBJECT_TYPE(&iParam0) == 15)
	{
		bVar0 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0));
	}
	if (bVar0 <= 1222 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_157(bool bParam0) //Position: 0x770A / 30474
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (GET_OBJECT_TYPE(&bParam0) == 29)
	{
		bVar0 = GET_CORPSE_ACTOR_ENUM(&bParam0);
	}
	else if (GET_OBJECT_TYPE(&bParam0) == 15)
	{
		bVar0 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&bParam0));
	}
	if (bVar0 <= 1204 && bVar0 >= 1254)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&bParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(&bParam0, "Zombie");
	}
	return 0;
}

bool Function_158(int iParam0) //Position: 0x7774 / 30580
{
	if (GET_ACTOR_ENUM(&iParam0) == 1266)
	{
		return 1;
	}
	return 0;
}

void Function_159(int iParam0) //Position: 0x7789 / 30601
{
	DECOR_SET_BOOL(&iParam0, "nSasquatch", true);
	return;
}

bool Function_160(int iParam0) //Position: 0x77A3 / 30627
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1263 && bVar0 >= 1265)
	{
		return 1;
	}
	return 0;
}

void Function_161(bool bParam0) //Position: 0x77C4 / 30660
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	var uVar4;
	
	bVar0 = Function_163(&bParam0);
	if (!Function_162(bVar0))
	{
		return;
	}
	DECOR_SET_BOOL(&bParam0, "Behave", true);
	HORSE_SET_CURR_FRESHNESS(&bParam0, 1.0f);
	HORSE_LOCK_FRESHNESS(&bParam0);
	SET_ACTOR_DEATH_DROP_DISTANCE(&bParam0, 50.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bParam0, 0.0f);
	SET_ACTOR_MAX_HEALTH(&bParam0, 300.0f);
	SET_ACTOR_HEALTH(&bParam0, 300.0f);
	ACCESSORIZE_HORSE(&bParam0, 3);
	uVar4 = CREATE_OBJECTSET_IN_LAYOUT("emitter_set", &bParam0, 4294967295, 1);
	switch (bVar0)
	{
		case 0x000004F4:
			Function_29();
			iVar1 = CREATE_RMPTFX_EMITTER_ON_OBJECT(Function_31(), "script_4Horsemen_death_01", &bParam0, Function_29(), 1, &bParam0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				Function_29();
				UNK_0x6745191B(&iVar1, Function_29());
				ADD_OBJECT_TO_OBJECTSET(&iVar1, &uVar4);
			}
			Var2 = Vector(0.0f, -0,5f, -0,75f);
			iVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_31(), "script_4Horsemen_death_02", "spine00", &bParam0, Var2, &bParam0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				Function_29();
				UNK_0x6745191B(&iVar1, Function_29());
				ADD_OBJECT_TO_OBJECTSET(&iVar1, &uVar4);
			}
			break;
		
		case 0x000004F7:
			Function_29();
			iVar1 = CREATE_RMPTFX_EMITTER_ON_OBJECT(Function_31(), "script_4Horsemen_famine_01", &bParam0, Function_29(), 1, &bParam0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				Function_29();
				UNK_0x6745191B(&iVar1, Function_29());
				ADD_OBJECT_TO_OBJECTSET(&iVar1, &uVar4);
			}
			break;
		
		case 0x000004F6:
			Function_29();
			iVar1 = CREATE_RMPTFX_EMITTER_ON_OBJECT(Function_31(), "script_4Horsemen_pestilence_01", &bParam0, Function_29(), 1, &bParam0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				Function_29();
				UNK_0x6745191B(&iVar1, Function_29());
				ADD_OBJECT_TO_OBJECTSET(&iVar1, &uVar4);
			}
			Function_29();
			iVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_31(), "blood_dripping", "nLowLip1_r", &bParam0, Function_29(), &bParam0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				Function_29();
				UNK_0x6745191B(&iVar1, Function_29());
				ADD_OBJECT_TO_OBJECTSET(&iVar1, &uVar4);
			}
			Function_29();
			iVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_31(), "blood_dripping", "nose_l", &bParam0, Function_29(), &bParam0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				Function_29();
				UNK_0x6745191B(&iVar1, Function_29());
				ADD_OBJECT_TO_OBJECTSET(&iVar1, &uVar4);
			}
			Function_29();
			iVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_31(), "blood_dripping", "Eyelid_r", &bParam0, Function_29(), &bParam0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				Function_29();
				UNK_0x6745191B(&iVar1, Function_29());
				ADD_OBJECT_TO_OBJECTSET(&iVar1, &uVar4);
			}
			Function_29();
			iVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_31(), "blood_dripping", "Eyelid_l", &bParam0, Function_29(), &bParam0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				Function_29();
				UNK_0x6745191B(&iVar1, Function_29());
				ADD_OBJECT_TO_OBJECTSET(&iVar1, &uVar4);
			}
			break;
		
		case 0x000004F5:
			Function_29();
			iVar1 = CREATE_RMPTFX_EMITTER_ON_OBJECT(Function_31(), "script_4Horsemen_war_01", &bParam0, Function_29(), 1, &bParam0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				Function_29();
				UNK_0x6745191B(&iVar1, Function_29());
				ADD_OBJECT_TO_OBJECTSET(&iVar1, &uVar4);
			}
			iVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_31(), "script_4Horsemen_war_blaze", "nail_r", &bParam0, Var2, &bParam0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				Function_29();
				UNK_0x6745191B(&iVar1, Function_29());
				ADD_OBJECT_TO_OBJECTSET(&iVar1, &uVar4);
			}
			iVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_31(), "script_4Horsemen_war_blaze", "nail_l", &bParam0, Var2, &bParam0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				Function_29();
				UNK_0x6745191B(&iVar1, Function_29());
				ADD_OBJECT_TO_OBJECTSET(&iVar1, &uVar4);
			}
			iVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_31(), "script_4Horsemen_war_blaze", "toe_r", &bParam0, Var2, &bParam0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				Function_29();
				UNK_0x6745191B(&iVar1, Function_29());
				ADD_OBJECT_TO_OBJECTSET(&iVar1, &uVar4);
			}
			iVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_31(), "script_4Horsemen_war_blaze", "toe_l", &bParam0, Var2, &bParam0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				Function_29();
				UNK_0x6745191B(&iVar1, Function_29());
				ADD_OBJECT_TO_OBJECTSET(&iVar1, &uVar4);
			}
			iVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_31(), "script_4Horsemen_war_blaze", "ntail_m_02", &bParam0, Var2, &bParam0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				Function_29();
				UNK_0x6745191B(&iVar1, Function_29());
				ADD_OBJECT_TO_OBJECTSET(&iVar1, &uVar4);
			}
			iVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_31(), "script_4Horsemen_war_blaze", "ntail_l_03", &bParam0, Var2, &bParam0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				Function_29();
				UNK_0x6745191B(&iVar1, Function_29());
				ADD_OBJECT_TO_OBJECTSET(&iVar1, &uVar4);
			}
			iVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_31(), "script_4Horsemen_war_blaze", "hair03_04_l", &bParam0, Var2, &bParam0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				Function_29();
				UNK_0x6745191B(&iVar1, Function_29());
				ADD_OBJECT_TO_OBJECTSET(&iVar1, &uVar4);
			}
			iVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_31(), "script_4Horsemen_war_blaze", "hair04_04_r", &bParam0, Var2, &bParam0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				Function_29();
				UNK_0x6745191B(&iVar1, Function_29());
				ADD_OBJECT_TO_OBJECTSET(&iVar1, &uVar4);
			}
			iVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_31(), "script_4Horsemen_war_blaze", "hair05_04_l", &bParam0, Var2, &bParam0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				Function_29();
				UNK_0x6745191B(&iVar1, Function_29());
				ADD_OBJECT_TO_OBJECTSET(&iVar1, &uVar4);
			}
			iVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_31(), "script_4Horsemen_war_eyeLight", "Eyelid_l", &bParam0, Var2, &bParam0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				Function_29();
				UNK_0x6745191B(&iVar1, Function_29());
				ADD_OBJECT_TO_OBJECTSET(&iVar1, &uVar4);
			}
			iVar1 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_31(), "script_4Horsemen_war_eyeLight", "Eyelid_r", &bParam0, Var2, &bParam0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				Function_29();
				UNK_0x6745191B(&iVar1, Function_29());
				ADD_OBJECT_TO_OBJECTSET(&iVar1, &uVar4);
			}
			break;
		
		default:
			break;
	}
	return;
}

bool Function_162(int iParam0) //Position: 0x7F06 / 32518
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

bool Function_163(bool bParam0) //Position: 0x7F1D / 32541
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&bParam0));
	}
	return 4294967295;
}

void Function_164(var uParam0) //Position: 0x7F3A / 32570
{
	struct<2> Var0;
	int iVar2;
	
	DECOR_SET_BOOL(&uParam0, "Behave", true);
	ACTOR_ENABLE_VARIABLE_MESH(&uParam0, 21, false);
	ACTOR_ENABLE_VARIABLE_MESH(&uParam0, 22, true);
	Var0 = Vector(0.0f, -0,5f, -0,75f);
	iVar2 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_31(), "script_unicorn_rainbow", "spine00", &uParam0, Var0, &uParam0);
	if (IS_OBJECT_VALID(&iVar2))
	{
		Function_29();
		UNK_0x6745191B(&iVar2, Function_29());
	}
	HORSE_SET_CURR_FRESHNESS(&uParam0, 1.0f);
	HORSE_LOCK_FRESHNESS(&uParam0);
	SET_ACTOR_DEATH_DROP_DISTANCE(&uParam0, 50.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uParam0, 0.0f);
	SET_ACTOR_MAX_HEALTH(&uParam0, 300.0f);
	SET_ACTOR_HEALTH(&uParam0, 300.0f);
	return;
}

bool Function_165(int iParam0) //Position: 0x7FF2 / 32754
{
	if (GET_ACTOR_ENUM(&iParam0) == 1267)
	{
		return 1;
	}
	return 0;
}

bool Function_166(int iParam0) //Position: 0x800A / 32778
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1268 && bVar0 >= 1271)
	{
		return 1;
	}
	return 0;
}

bool Function_167(int iParam0) //Position: 0x802B / 32811
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1214 && bVar0 >= 1221)
	{
		return 1;
	}
	return 0;
}

bool Function_168(int iParam0) //Position: 0x804C / 32844
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1222 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_169(int iParam0) //Position: 0x806D / 32877
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1204 && bVar0 >= 1213)
	{
		return 1;
	}
	return 0;
}

bool Function_170(int iParam0) //Position: 0x808E / 32910
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 3 && bVar0 >= 836)
	{
		if (DECOR_CHECK_EXIST(&iParam0, "Zombie"))
		{
			return DECOR_GET_BOOL(&iParam0, "Zombie");
		}
	}
	return 0;
}

void Function_171(int iParam0) //Position: 0x80CD / 32973
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		if (GET_OBJECT_FROM_ACTOR(&iParam0) == DECOR_GET_OBJECT(&Global_54076, "HorseStolen"))
		{
			DECOR_SET_FLOAT(&Global_54076, "PlayerHorse_DeathTime", GET_CURRENT_GAME_TIME());
		}
	}
	if (&iParam0 == &Global_21369 + 72)
	{
		if (!DECOR_CHECK_EXIST(&Global_54076, "PlayerHorse_DeathTime"))
		{
			DECOR_SET_FLOAT(&Global_54076, "PlayerHorse_DeathTime", GET_CURRENT_GAME_TIME());
		}
	}
	if (&iParam0 == &Global_21369 + 72)
	{
		DECOR_SET_BOOL(&Global_54076, "TriggerNewHorse", true);
	}
	return;
}

void Function_172(int iParam0) //Position: 0x81A5 / 33189
{
	Function_30(&iParam0, 1);
	SET_ACTOR_HEALTH(&iParam0, 0.0f);
	return;
}

void Function_173(int iParam0) //Position: 0x81B9 / 33209
{
	bool bVar0;
	
	bVar0 = GET_LAST_HIT_WEAPON(&iParam0);
	bVar0 = UNK_0xDB679ED9(bVar0);
	if (((((((bVar0 != 50 || bVar0 != 42) || bVar0 != 49) || bVar0 != 39) || bVar0 != 43) || bVar0 != 40) || bVar0 != 41) || bVar0 != 44)
	{
		Function_30(&iParam0, 1);
	}
	return;
}

void Function_174(var uParam0, bool bParam1) //Position: 0x8207 / 33287
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar6;
	var uVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	var uVar15;
	bool bVar16;
	
	bVar12 = true;
	if (bParam1 || (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) >= 0,2f)
	{
		GET_OBJECT_POSITION(&uParam0, &Var0);
		bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uParam0);
		bVar11 = GET_EVENT_PERPETRATOR(&uParam0);
		if (GET_OBJECT_TYPE(&bVar11) == 15)
		{
			iVar9 = GET_ACTOR_FROM_OBJECT(&bVar11);
		}
		if ((GET_OBJECT_TYPE(&bVar10) != 15 || GET_OBJECT_TYPE(&bVar10) != 29) || Function_180(&bVar10))
		{
			if (GET_OBJECT_TYPE(&bVar10) == 15)
			{
				uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
			}
			else if (GET_OBJECT_TYPE(&bVar10) == 29)
			{
				if (DECOR_CHECK_EXIST(&bVar10, "bATRifleBlewUpCorpse"))
				{
					bVar12 = false;
				}
			}
			if (IS_OBJECT_VALID(&bVar10))
			{
				if (IS_ACTOR_VALID(&uVar8))
				{
					if (IS_ACTOR_VEHICLE(&uVar8))
					{
						bVar12 = false;
					}
					else if (GET_ACTOR_PROOF(&uVar8) != 8 || GET_ACTOR_HEALTH(&uVar8) < 65.0f)
					{
						bVar12 = false;
					}
				}
				if (bVar12)
				{
					if (bParam1)
					{
						if (GET_OBJECT_TYPE(&bVar10) != 29 || Function_180(&bVar10))
						{
							Function_176(StackVal, &bVar10, Var0, 0, &iVar9, DECOR_GET_INT(&uParam0, "Weapon") != 31);
						}
					}
					else
					{
						NET_BROADCAST_EXPLODE_TARGET_EVENT(&bVar10);
						Function_176(StackVal, &bVar10, Var0, 0, &iVar9, 0);
					}
				}
			}
		}
		if (DECOR_GET_INT(&uParam0, "Weapon") == 31)
		{
			bVar14 = false;
			uVar15 = GET_EVENT_PERPETRATOR(&uParam0);
			bVar16 = false;
			if (bParam1)
			{
				if (IS_OBJECT_VALID(&uVar15))
				{
					if (GET_OBJECT_NAMED_BONE_POSITION(&uVar15, "head", &Var2))
					{
						bVar16 = true;
					}
				}
			}
			else
			{
				GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var2);
				bVar16 = true;
			}
			if (bVar16)
			{
				if (FIND_WATER_INTERSECTION(Var2, Var0, &uVar4, &uVar6))
				{
					if (IS_LAYOUTREF_VALID(&Global_46715))
					{
						uVar13 = FIND_OBJECT_IN_LAYOUT(&Global_46715, "oATRifleWaterExplosionRMPTFX");
						if (IS_OBJECT_VALID(&uVar13))
						{
							if (DECOR_CHECK_EXIST(&uVar13, "fWaterExplosionCreateTime"))
							{
								if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uVar13, "fWaterExplosionCreateTime")) < 1.0f)
								{
									DESTROY_OBJECT(&uVar13);
								}
							}
						}
						if (!IS_OBJECT_VALID(&uVar13))
						{
							Function_175(&uVar4);
						}
					}
					bVar14 = true;
				}
			}
			if (!bVar14)
			{
				if (!bParam1)
				{
					Function_28(&Var0, "ATRifleExplosion", &Global_54076, 1);
				}
				PLAY_SOUND_FROM_POSITION("ANTI_TANK_EXPLOSION_DIRT_MASTER", Var0);
			}
		}
	}
	return;
}

void Function_175(struct<2> Param0) //Position: 0x84AB / 33963
{
	bool bVar0;
	
	bVar0 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&Global_46715, "oATRifleWaterExplosionRMPTFX", "nexp_water", Param0);
	SET_RMPTFX_SCALE(&bVar0, 0,2f);
	UNK_0x6745191B(StackVal, &bVar0, Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_FLOAT(&bVar0, "fWaterExplosionCreateTime", GET_CURRENT_GAME_TIME());
	return;
}

void Function_176(bool bParam0, struct<2> Param1, bool bParam3, int iParam4, bool bParam5) //Position: 0x8528 / 34088
{
	bool bVar0;
	var uVar1;
	var uVar2;
	float fVar3;
	var uVar4;
	struct<2> Var5;
	struct<2> Var7;
	bool bVar9;
	bool bVar10;
	struct<2> Var11;
	int iVar13;
	struct<2> Var14;
	var uVar16;
	var uVar17;
	struct<2> Var18;
	struct<2> Var20;
	struct<2> Var22;
	
	fVar3 = 1.0f;
	bVar9 = false;
	bVar10 = !bParam3;
	if (IS_OBJECT_VALID(&bParam0))
	{
		if (GET_OBJECT_TYPE(&bParam0) == 15)
		{
			uVar1 = GET_ACTOR_FROM_OBJECT(&bParam0);
			bVar0 = GET_ACTOR_ENUM(&uVar1);
		}
		else if (GET_OBJECT_TYPE(&bParam0) == 29)
		{
			bVar0 = GET_CORPSE_ACTOR_ENUM(&bParam0);
		}
		else if (!Function_180(&bParam0))
		{
			return;
		}
		if (GET_OBJECT_TYPE(&iParam4) == 15)
		{
			uVar2 = GET_ACTOR_FROM_OBJECT(&iParam4);
		}
		if (bParam3 || bParam5)
		{
			if (GET_OBJECT_NAMED_BONE_POSITION(&bParam0, "spine00", &Var11))
			{
				Param1 = Var11;
				bVar10 = true;
			}
			else
			{
				bVar10 = false;
			}
		}
		if (DECOR_CHECK_EXIST(&bParam0, "Zombie"))
		{
			if (bVar0 != 1241 || bVar0 != 1240)
			{
				iVar13 = 2;
			}
			else if (bVar0 != 1243 || bVar0 != 1246)
			{
				iVar13 = 0;
			}
			else
			{
				iVar13 = 1;
			}
		}
		else if (!Function_180(&bParam0))
		{
			iVar13 = Function_179(bVar0);
		}
		else
		{
			iVar13 = Function_178(&bParam0);
		}
		switch (iVar13)
		{
			case 0x00000000:
				if (GET_OBJECT_TYPE(&bParam0) != 15 && !Function_180(&bParam0))
				{
					bVar9 = false;
				}
				else
				{
					bVar9 = true;
				}
				fVar3 = 1,2f;
				break;
			
			case 0x00000001:
				fVar3 = 0,8f;
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (IS_ACTOR_HUMAN(&uVar1))
					{
						DEEQUIP_ACCESSORY(&uVar1, 0);
						DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar1);
					}
				}
				break;
			
			case 0x00000002:
				fVar3 = 0,45f;
				break;
			
			case 0x00000003:
				fVar3 = 0,3f;
				break;
		}
		if ((DECOR_CHECK_EXIST(&bParam0, "bShopDontKill") || DECOR_CHECK_EXIST(&bParam0, "lootCorpse_objSet")) || DECOR_CHECK_EXIST(&bParam0, "skinning_objSet"))
		{
			bVar9 = false;
		}
		else
		{
			bVar9 = true;
		}
		if (((bVar0 != 1105 || bVar0 != 1077) || bVar0 != 1094) || bVar0 != 1072)
		{
			bVar9 = false;
		}
		if (bVar9)
		{
			if (GET_OBJECT_NAMED_BONE_POSITION(&bParam0, "head", &Var14))
			{
				uVar16 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &bParam0, Function_31(), 2, Var14, Vector(0.0f, 0.0f, 0.0f), Vector(0,25f, 0,25f, 0,25f));
				RESET_RMPTFX_IN_VOLUME(&uVar16);
				DESTROY_VOLUME(&uVar16);
			}
			if (GET_OBJECT_TYPE(&bParam0) == 15)
			{
				SET_DRAW_OBJECT(&bParam0, 0);
				if (FIRE_IS_ACTOR_ON_FIRE(GET_ACTOR_FROM_OBJECT(&bParam0)))
				{
					FIRE_STOP_ON_ACTOR(GET_ACTOR_FROM_OBJECT(&bParam0));
				}
				if (IS_ACTOR_VALID(GET_HOGTIED_MASTER(GET_ACTOR_FROM_OBJECT(&bParam0))))
				{
					FREE_FROM_HOGTIE(GET_ACTOR_FROM_OBJECT(&bParam0));
				}
				SET_OBJECT_COLLIDE_WITH_MOVABLES(&bParam0, 0);
				DECOR_SET_BOOL(&bParam0, "corpse_loot_gringo", false);
				DECOR_SET_BOOL(&bParam0, "NoCorpse", true);
			}
			else if (GET_OBJECT_TYPE(&bParam0) != 29 || Function_180(&bParam0))
			{
				uVar17 = FIND_OBJECT_IN_OBJECT(&bParam0, "loot");
				if (IS_OBJECT_VALID(&uVar17))
				{
					DESTROY_OBJECT(&uVar17);
				}
				GET_OBJECT_POSITION(&bParam0, &Var18);
				Var7 = Var18;
				Var18.f_4 = (StackVal - 100.0f);
				SET_OBJECT_POSITION(&bParam0, Var18);
				SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(&bParam0), false);
				SET_DRAW_OBJECT(&bParam0, 0);
				SET_OBJECT_COLLIDE_WITH_MOVABLES(&bParam0, 0);
				DECOR_SET_BOOL(&bParam0, "bATRifleBlewUpCorpse", true);
			}
		}
	}
	if (bVar10)
	{
		if (bVar9)
		{
			Var22 = Vector(0.0f, 0.0f, 0.0f);
			if (!bParam3 && IS_OBJECT_VALID(&iParam4))
			{
				GET_OBJECT_POSITION(&iParam4, &Var20);
				Var22 = Vector(StackVal, StackVal, StackVal) - Vector(Var20, Param1, StackVal);
				VSCALE(&Var22, 0,01f);
			}
			if ((Function_177() && DECOR_CHECK_EXIST(&bParam0, "Zombie")) || (bVar0 <= 1222 && bVar0 >= 1227))
			{
				uVar4 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(StackVal, StackVal, Vector(Function_31(), &bParam0, StackVal) + Vector(Var22, Param1, "blood_zombie_explode"));
			}
			else
			{
				uVar4 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(StackVal, StackVal, Vector(Function_31(), &bParam0, StackVal) + Vector(Var22, Param1, "script_train_squash_ped"));
			}
			SET_RMPTFX_SCALE(&uVar4, fVar3);
			if (!UNK_0x6745191B(StackVal, &uVar4, Vector(0.0f, 0.0f, 0.0f)))
			{
			}
			PLAY_SOUND_FROM_POSITION("EXECUTION_RIFLE_DLY_MASTER", Param1);
		}
	}
	if (IS_OBJECT_VALID(&bParam0))
	{
		if (bVar9 && GET_OBJECT_TYPE(&bParam0) != 29)
		{
			if (!Function_85(StackVal, Var7))
			{
				CREATE_DECAL(2, Var7, RAND_FLOAT_RANGE((1,8f * fVar3), (2,4f * fVar3)), 0, 0);
			}
		}
		else if (GET_OBJECT_POSITION(&bParam0, &Var5))
		{
			CREATE_DECAL(2, Var5, RAND_FLOAT_RANGE((1,8f * fVar3), (2,4f * fVar3)), 0, 0);
		}
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_HEALTH(&uVar1, 0.0f);
			if (IS_ACTOR_VALID(&uVar2))
			{
				KILL_ACTOR_WITH_KILLER(&uVar1, &uVar2);
				if (!&bParam5)
				{
					DECOR_SET_BOOL(&uVar1, "ATRifle", true);
				}
			}
			else
			{
				KILL_ACTOR(&uVar1);
			}
		}
	}
}

var Function_177() //Position: 0x8A1E / 35358
{
	return HAS_STRING_TABLE_LOADED("de");
}

int Function_178(int iParam0) //Position: 0x8A2C / 35372
{
	var uVar0;
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
	}
	uVar0 = GET_OBJECT_MODEL_NAME(&iParam0);
	if ((STRING_CONTAINS_STRING(&uVar0, "large") || STRING_CONTAINS_STRING(&uVar0, "horse")) || STRING_CONTAINS_STRING(&uVar0, "elk"))
	{
		return 0;
	}
	if (STRING_CONTAINS_STRING(&uVar0, "medium"))
	{
		return 1;
	}
	if (STRING_CONTAINS_STRING(&uVar0, "small"))
	{
		return 2;
	}
	return 3;
}

int Function_179(int iParam0) //Position: 0x8AA2 / 35490
{
	if ((((((iParam0 <= 3 && iParam0 >= 836) || (iParam0 <= 837 && iParam0 >= 971)) || (iParam0 <= 1287 && iParam0 >= 1310)) || (iParam0 <= 972 && iParam0 >= 975)) || (iParam0 <= 1116 && iParam0 >= 1123)) || (iParam0 <= 1073 && iParam0 >= 1077))
	{
		return 1;
	}
	if (((((iParam0 <= 1095 && iParam0 >= 1105) || (iParam0 <= 1124 && iParam0 >= 1127)) || (iParam0 <= 976 && iParam0 >= 1007)) || (iParam0 <= 1008 && iParam0 >= 1014)) || (iParam0 <= 1109 && iParam0 >= 1111))
	{
		return 0;
	}
	if (((((iParam0 <= 1020 && iParam0 >= 1029) || (iParam0 <= 1030 && iParam0 >= 1048)) || (iParam0 <= 1087 && iParam0 >= 1094)) || (iParam0 <= 1112 && iParam0 >= 1115)) || (iParam0 <= 1060 && iParam0 >= 1072))
	{
		return 2;
	}
	return 3;
}

bool Function_180(bool bParam0) //Position: 0x8B99 / 35737
{
	var uVar0;
	
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return 0;
	}
	uVar0 = GET_OBJECT_MODEL_NAME(&bParam0);
	if (STRING_CONTAINS_STRING(&uVar0, "carcass"))
	{
		return 1;
	}
	return 0;
}

var Function_181(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x8BCA / 35786
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&bParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&bParam0, "rifleExecution_04", 1, 1);
	}
	Function_182(&uVar0, &bParam2);
	if (iParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_182(var uParam0, var uParam1) //Position: 0x8C58 / 35928
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_183(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_183(var uParam0, bool bParam1) //Position: 0x8CAF / 36015
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 40,7396f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,154827f, 0,698168f, 0,196961f), Vector(14,45704f, 46,70459f, -11,70381f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_184(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x8D4D / 36173
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&bParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&bParam0, "rifleExecution_03", 1, 1);
	}
	Function_185(&uVar0, &bParam2);
	if (iParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_185(var uParam0, var uParam1) //Position: 0x8DDB / 36315
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_186(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_186(var uParam0, bool bParam1) //Position: 0x8E32 / 36402
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 39,61349f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(0,678964f, 0,992386f, -2,09693f), Vector(13,04992f, 150,5624f, -0,189706f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_187(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x8ED0 / 36560
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&bParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&bParam0, "rifleExecution_02", 1, 1);
	}
	Function_188(&uVar0, &bParam2);
	if (iParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_188(var uParam0, var uParam1) //Position: 0x8F5E / 36702
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_189(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_189(var uParam0, bool bParam1) //Position: 0x8FB5 / 36789
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 38,48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-1,17763f, 1,626893f, -1,877858f), Vector(-16,66625f, -132,0675f, -4,978086f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_190(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x9053 / 36947
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&bParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&bParam0, "rifleExecution_01", 1, 1);
	}
	Function_191(&uVar0, &bParam2);
	if (iParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_191(var uParam0, var uParam1) //Position: 0x90E1 / 37089
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_192(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_192(var uParam0, bool bParam1) //Position: 0x9138 / 37176
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 38,48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,23275f, 0,7751f, -1,966721f), Vector(14,39797f, 133,8307f, 29,31653f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_193(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x91D6 / 37334
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&bParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&bParam0, "rifleExecution", 1, 1);
	}
	Function_194(&uVar0, &bParam2);
	if (iParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_194(var uParam0, var uParam1) //Position: 0x9261 / 37473
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_195(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_195(var uParam0, bool bParam1) //Position: 0x92B8 / 37560
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 38,48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,650726f, 0,618574f, 0,427292f), Vector(13,80886f, 47,58586f, -11,28612f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_196(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x9356 / 37718
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "zombieGrapple_05", 1, 1);
	}
	Function_197(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_197(var uParam0, var uParam1) //Position: 0x93E3 / 37859
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_198(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180.0f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_198(var uParam0, bool bParam1) //Position: 0x943A / 37946
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 35,4617f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-1,081224f, 1,233072f, -0,342658f), Vector(9,680752f, -95,72044f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_199(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x94D0 / 38096
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "zombieGrapple_04", 1, 1);
	}
	Function_200(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_200(var uParam0, var uParam1) //Position: 0x955D / 38237
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_201(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180.0f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_201(var uParam0, bool bParam1) //Position: 0x95B4 / 38324
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 37,12254f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,099257f, 1,205077f, -0,143904f), Vector(9,005006f, 89,2474f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_202(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x964A / 38474
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "zombieGrapple_03", 1, 1);
	}
	Function_203(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_203(var uParam0, var uParam1) //Position: 0x96D7 / 38615
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_204(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180.0f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_204(var uParam0, bool bParam1) //Position: 0x972E / 38702
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 35,38083f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-0,963097f, 1,409635f, 0,451549f), Vector(1,159838f, -51,66893f, 13,94218f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_205(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x97C8 / 38856
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "zombieGrapple_02", 1, 1);
	}
	Function_206(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_206(var uParam0, var uParam1) //Position: 0x9855 / 38997
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_207(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180.0f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_207(var uParam0, bool bParam1) //Position: 0x98AC / 39084
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 29,95185f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(0,794566f, 1,350607f, -1,152538f), Vector(3,067616f, 138,1816f, 0,43138f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_208(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x9946 / 39238
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "zombieGrapple_01", 1, 1);
	}
	Function_209(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_209(var uParam0, var uParam1) //Position: 0x99D3 / 39379
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_210(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180.0f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_210(int iParam0, var uParam1) //Position: 0x9A2A / 39466
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 30,80781f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(1,02245f, 1,831552f, 0,724388f), Vector(-17,75338f, 47,49568f, 22,50859f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&iParam0, &uParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

void Function_211(var uParam0) //Position: 0x9AC4 / 39620
{
	Function_212();
	Global_99172 = &uParam0;
	return;
}

void Function_212() //Position: 0x9AD5 / 39637
{
	if (IS_OBJECT_VALID(&Global_99172))
	{
		DESTROY_OBJECT(&Global_99172);
	}
	return;
}

var Function_213(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x9AEE / 39662
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "zombieGrapple", 1, 1);
	}
	Function_214(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_214(var uParam0, var uParam1) //Position: 0x9B78 / 39800
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_215(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180.0f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_215(int iParam0, int iParam1) //Position: 0x9BCF / 39887
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-0,919557f, 1,369966f, -1,29407f), Vector(-3,341604f, -140,3541f, -0,000172f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&iParam0, &iParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

void Function_216(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x9C69 / 40041
{
	while (&iParam4 > 60)
	{
		iParam4 = (&iParam4 - 60);
		bParam3 = &bParam3 + 1;
	}
	while (&bParam3 > 60)
	{
		bParam3 = (&bParam3 - 60);
		iParam2 = &iParam2 + 1;
	}
	while (&iParam2 > 24)
	{
		iParam2 = (&iParam2 - 24);
		iParam1 = &iParam1 + 1;
	}
	switch (iParam0)
	{
		case 0x00000001:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11014[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &bParam3, &iParam4));
			break;
		
		case 0x00000002:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11120[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &bParam3, &iParam4));
			break;
		
		case 0x00000003:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11146[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &bParam3, &iParam4));
			break;
		
		case 0x00000004:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11222[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &bParam3, &iParam4));
			break;
		
		case 0x00000005:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11284[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &bParam3, &iParam4));
			break;
		
		case 0x00000008:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11544[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &bParam3, &iParam4));
			break;
		
		case 0x00000009:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11646[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &bParam3, &iParam4));
			break;
		
		case 0x0000000B:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11726[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &bParam3, &iParam4));
			break;
		
		case 0x0000000C:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11836[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &bParam3, &iParam4));
			break;
		
		case 0x0000000D:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11946[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &bParam3, &iParam4));
			break;
		
		case 0x0000000E:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11988[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &bParam3, &iParam4));
			break;
		
		case 0x0000000F:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12048[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &bParam3, &iParam4));
			break;
		
		case 0x00000010:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12150[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &bParam3, &iParam4));
			break;
		
		case 0x00000011:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11398[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &bParam3, &iParam4));
			break;
		
		case 0x00000012:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12392[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &bParam3, &iParam4));
			break;
		
		case 0x00000013:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12422[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &bParam3, &iParam4));
			break;
		
		case 0x00000015:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12488[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &bParam3, &iParam4));
			break;
		
		case 0x00000016:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12644[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &bParam3, &iParam4));
			break;
		
		case 0x00000017:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12714[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &bParam3, &iParam4));
			break;
		
		case 0x00000018:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12760[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &bParam3, &iParam4));
			break;
	}
}

bool Function_217(int iParam0) //Position: 0x9F88 / 40840
{
	var uVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((iParam0 != Global_46894[2] || iParam0 != Global_46894[1]) || iParam0 != Global_46838[1])
	{
		return 0;
	}
	uVar0 = Global_43791[iParam0];
	return (((Function_9(uVar0, 0x1000000) || Function_9(uVar0, 0x2000000)) || Function_9(uVar0, 0x4000000)) || Function_218(iParam0));
}

var Function_218(int iParam0) //Position: 0x9FFB / 40955
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_43791[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

int Function_219(int iParam0) //Position: 0xA018 / 40984
{
	if (iParam0 == Global_46760[0])
	{
		return 1;
	}
	if (iParam0 == Global_46760[2])
	{
		return 2;
	}
	if (iParam0 == Global_46760[1])
	{
		return 3;
	}
	if (iParam0 == Global_46796[1])
	{
		return 4;
	}
	if (iParam0 == Global_46796[3])
	{
		return 5;
	}
	if (iParam0 == Global_46816[0])
	{
		return 8;
	}
	if (iParam0 == Global_46816[1])
	{
		return 9;
	}
	if (iParam0 == Global_46838[0])
	{
		return 11;
	}
	if (iParam0 == Global_46850[0])
	{
		return 12;
	}
	if (iParam0 == Global_46850[1])
	{
		return 13;
	}
	if (iParam0 == Global_46850[2])
	{
		return 14;
	}
	if (iParam0 == Global_46866[0])
	{
		return 15;
	}
	if (iParam0 == Global_46866[1])
	{
		return 16;
	}
	if (iParam0 == Global_46866[2])
	{
		return 17;
	}
	if (iParam0 == Global_46894[2])
	{
		return 25;
	}
	if (iParam0 == Global_46894[3])
	{
		return 18;
	}
	if (iParam0 == Global_46894[0])
	{
		return 19;
	}
	if (iParam0 == Global_46914[0])
	{
		return 21;
	}
	if (iParam0 == Global_46926[2])
	{
		return 22;
	}
	if (iParam0 == Global_46926[1])
	{
		return 23;
	}
	if (iParam0 == Global_46926[0])
	{
		return 24;
	}
	if (iParam0 == Global_46838[1])
	{
		return 26;
	}
	if (iParam0 == Global_46894[1])
	{
		return 27;
	}
	return 0;
}

void Function_220(int iParam0, int iParam1) //Position: 0xA19E / 41374
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (DECOR_CHECK_EXIST(&iParam0, "HorseLeash"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(&iParam0, "HorseLeash"));
		DECOR_REMOVE(&iParam0, "HorseLeash");
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return;
	}
	if (!IS_LOCAL_PLAYER(&iParam1))
	{
		return;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam0)))
	{
		SET_BLIP_FLAG(GET_BLIP_ON_OBJECT(&iParam0), 1024, 0);
	}
	if (ANIMAL_ACTOR_GET_DOMESTICATION(&iParam0) == 0)
	{
		ACCESSORIZE_HORSE(&iParam0, 2);
		if (&iParam0 == &Global_21369 + 72)
		{
			uVar0 = Function_225(8, 0, 5);
			iVar1 = Function_224(uVar0);
			uVar2 = Function_225(7, 0, 5);
			Function_221(uVar2, FLOOR(GET_CURRENT_GAME_TIME()));
			if (iVar1 > 3600)
			{
				SET_ACTOR_MAX_FRESHNESS(&iParam0, 100.0f);
			}
			else if (iVar1 > 900)
			{
				SET_ACTOR_MAX_FRESHNESS(&iParam0, 85.0f);
			}
			else
			{
				SET_ACTOR_MAX_FRESHNESS(&iParam0, 70.0f);
			}
		}
		else
		{
			SET_ACTOR_MAX_FRESHNESS(&iParam0, 70.0f);
		}
	}
	else if (ANIMAL_ACTOR_GET_DOMESTICATION(&iParam0) == 1)
	{
		if (!UNK_0x4417C9F2("content/scripting/DesignerDefined/TameWildHorse"))
		{
			if (Function_166(&iParam0))
			{
				SAY_SINGLE_LINE_STRING(&iParam1, "BREAK_HORSE_OF_APOCALYPSE", false, false, 0, 0, true, false);
			}
			*(&iVar3 + 8) = &iParam0;
			iVar3 = &Global_54076;
			LAUNCH_NEW_SCRIPT_WITH_ARGS("content/scripting/DesignerDefined/TameWildHorse", &iVar3, 4, 0);
		}
	}
	return;
}

void Function_221(int iParam0, bool bParam1) //Position: 0xA35D / 41821
{
	if (!Function_222(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = bParam1;
	return;
}

bool Function_222(int iParam0) //Position: 0xA378 / 41848
{
	if (!Function_23(iParam0))
	{
		return 0;
	}
	if (!Function_223(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_223(int iParam0) //Position: 0xA39C / 41884
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

var Function_224(int iParam0) //Position: 0xA3B1 / 41905
{
	if (!Function_222(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

int Function_225(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA3CB / 41931
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_229(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_226(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_226(bParam0, bParam1, bParam2, 4294967295);
}

int Function_226(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xA429 / 42025
{
	var uVar0;
	
	if (!Function_228(bParam2))
	{
		return 4294967295;
	}
	if (bParam0 > 0 || bParam0 < 255)
	{
		return 4294967295;
	}
	if (bParam1 > 0 || bParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_229(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_227(uVar0);
	}
	if (&iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (&iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_21684[&iParam37] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_25536[&iParam3] = 0;
		Global_21684[&iParam37].f_4 = 0;
		Global_21684[&iParam37].f_8 = 0;
		Global_21684[&iParam37].f_12 = 0;
		Global_21684[&iParam37].f_16 = 0;
		Global_21684[&iParam37] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_227(int iParam0) //Position: 0xA58D / 42381
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iParam0)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_228(int iParam0) //Position: 0xA5CB / 42443
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_229(int iParam0, int iParam1, int iParam2) //Position: 0xA5E0 / 42464
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_230(int iParam0) //Position: 0xA600 / 42496
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1248 && bVar0 >= 1251)
	{
		return 1;
	}
	return 0;
}

void Function_231(int iParam0) //Position: 0xA621 / 42529
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	
	if (Global_99146 || Global_6623)
	{
		return;
	}
	uVar0 = GET_EVENT_PERPETRATOR(&iParam0);
	if (IS_OBJECT_VALID(&uVar0))
	{
		if (GET_OBJECT_TYPE(&uVar0) == 15)
		{
			uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (IS_ACTOR_LOCAL_PLAYER(&uVar1))
				{
					switch (GET_EVENT_TYPE(&iParam0))
					{
						case 0x00000006:
							bVar2 = GET_WEAPON_IN_HAND(&Global_54076);
							if (!Function_26(Global_119935, 16384))
							{
								if (Function_6(bVar2))
								{
									if (ACTOR_GET_WEAPON_AMMO(&Global_54076, bVar2) > (GET_WEAPON_MAX_AMMO(bVar2) / 2.0f) && ACTOR_GET_WEAPON_AMMO(&Global_54076, bVar2) < 0.0f)
									{
										Function_16(&Global_54076, 16384, 2, 1);
									}
								}
							}
							break;
						
						case 0x00000012:
							if (!Function_26(Global_119935, 2048))
							{
								Function_16(&Global_54076, 2048, 2, 1);
								Function_16(&Global_54076, 4096, 2, 1);
								Function_16(&Global_54076, 8192, 2, 1);
							}
							if (!Function_26(Global_119935, 0x1000000))
							{
								iVar3 = GET_MOUNT(&Global_54076);
								if (IS_ACTOR_VALID(&iVar3))
								{
									if (IS_ACTOR_VALID(&Global_21369 + 72))
									{
										if (&Global_21369 + 72 != &iVar3)
										{
											Function_16(&Global_54076, 0x1000000, 2, 1);
											Function_16(&Global_54076, 0x2000000, 2, 1);
										}
									}
									else if (StackVal != GET_ACTOR_ENUM(&iVar3))
									{
										Function_16(&Global_54076, 0x1000000, 2, 1);
										Function_16(&Global_54076, 0x2000000, 2, 1);
									}
								}
							}
							break;
						}
					}
				}
			}
	}
	return;
}

void Function_232(var uParam0) //Position: 0xA78B / 42891
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	var uVar8;
	struct<2> Var9;
	int iVar11;
	
	uVar0 = GET_EVENT_PERPETRATOR(&uParam0);
	if (IS_OBJECT_VALID(&uVar0))
	{
		if (GET_OBJECT_TYPE(&uVar0) == 15)
		{
			iVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
			if (IS_ACTOR_VALID(&iVar1))
			{
				if (IS_ACTOR_LOCAL_PLAYER(&iVar1))
				{
					uVar2 = GET_EVENT_TARGET_AS_OBJECT(&uParam0);
					if (IS_OBJECT_VALID(&uVar2))
					{
						if (GET_OBJECT_TYPE(&uVar2) == 15)
						{
							iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
							if (IS_ACTOR_VALID(&iVar3))
							{
								if (Function_145(&iVar3))
								{
									switch (GET_EVENT_TYPE(&uParam0))
									{
										case 0x00000005:
											if (!Function_26(Global_119934, 1))
											{
												if (Function_169(&iVar3))
												{
													Function_16(&Global_54076, 1, 1, 0);
												}
											}
											if (!Function_26(Global_119934, 2))
											{
												if (Function_167(&iVar3))
												{
													Function_16(&Global_54076, 2, 1, 0);
												}
											}
											if (!Function_26(Global_119934, 4))
											{
												if (Function_168(&iVar3))
												{
													Function_16(&Global_54076, 4, 1, 0);
												}
											}
											if (!Function_26(Global_119934, 1048576))
											{
												if (Function_170(&iVar3))
												{
													if (ACTOR_IS_VARIABLE_MESH_ENABLED(&iVar3, 5))
													{
														Function_16(&Global_54076, 1048576, 1, 0);
													}
												}
											}
											if (!Function_26(Global_119934, 2097152))
											{
												if (!IS_WEAPONENUM_LOCKED(34))
												{
													if (Function_170(&iVar3))
													{
														if (!ACTOR_IS_VARIABLE_MESH_ENABLED(&iVar3, 5))
														{
															Function_16(&Global_54076, 2097152, 1, 0);
														}
													}
												}
											}
											break;
									}
									return;
								}
							}
						}
					}
					switch (GET_EVENT_TYPE(&uParam0))
					{
						case 0x00000006:
							if (!Function_26(Global_119934, 524288))
							{
								iVar4 = Function_219(Global_43789);
								if (iVar4 != 0)
								{
									if (Function_233(iVar4))
									{
										if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader") && !DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
										{
											bVar5 = GET_WEAPON_IN_HAND(&Global_54076);
											if (bVar5 != 4294967295)
											{
												switch (GET_AMMOENUM_FOR_WEAPONENUM(bVar5))
												{
													case 0x00000007:
														bVar6 = DECOR_GET_INT(&Global_44085[Global_437899] + 8, "ZP_NumRevolvers") == false;
														break;
													
													case 0x00000006:
														bVar6 = DECOR_GET_INT(&Global_44085[Global_437899] + 8, "ZP_NumPistols") == false;
														break;
													
													case 0x00000008:
														bVar6 = DECOR_GET_INT(&Global_44085[Global_437899] + 8, "ZP_NumRepeaters") == false;
														break;
													
													case 0x00000009:
														bVar6 = DECOR_GET_INT(&Global_44085[Global_437899] + 8, "ZP_NumRifles") == false;
														break;
													
													case 0x0000000B:
														bVar6 = DECOR_GET_INT(&Global_44085[Global_437899] + 8, "ZP_NumSnipers") == false;
														break;
													
													case 0x0000000A:
														bVar6 = DECOR_GET_INT(&Global_44085[Global_437899] + 8, "ZP_NumShotguns") == false;
														break;
													
													default:
														bVar6 = false;
														break;
												}
												if (bVar6)
												{
													Function_16(&Global_54076, 524288, 1, 0);
												}
											}
										}
									}
								}
							}
							break;
					}
				}
				else if (Function_145(&iVar1))
				{
					uVar7 = GET_EVENT_TARGET_AS_OBJECT(&uParam0);
					if (IS_OBJECT_VALID(&uVar7))
					{
						if (GET_OBJECT_TYPE(&uVar7) == 15)
						{
							uVar8 = GET_ACTOR_FROM_OBJECT(&uVar7);
							if (IS_ACTOR_VALID(&uVar8))
							{
								if (IS_ACTOR_LOCAL_PLAYER(&uVar8))
								{
									switch (GET_EVENT_TYPE(&uParam0))
									{
										case 0x00000001:
											if (!Function_26(Global_119934, 1))
											{
												if (Function_169(&iVar1))
												{
													Function_16(&Global_54076, 1, 1, 0);
												}
											}
											if (!Function_26(Global_119934, 2))
											{
												if (Function_167(&iVar1))
												{
													Function_16(&Global_54076, 2, 1, 0);
												}
											}
											if (!Function_26(Global_119934, 4))
											{
												if (Function_168(&iVar1))
												{
													Function_16(&Global_54076, 4, 1, 0);
												}
											}
											break;
										
										case 0x00000005:
											if (DECOR_CHECK_EXIST(&uParam0, "Weapon"))
											{
												if (DECOR_GET_INT(&uParam0, "Weapon") == 32)
												{
													GET_OBJECT_POSITION(GET_OBJECT_FROM_EVENT(&uParam0), &Var9);
													iVar11 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&Global_54076, Function_31(), "script_zombie_spitSplat", Var9);
													if (IS_OBJECT_VALID(&iVar11))
													{
														Function_29();
														UNK_0x6745191B(&iVar11, Function_29());
													}
												}
											}
											break;
										}
									}
								}
							}
						}
					}
				}
			}
	}
	return;
}

bool Function_233(int iParam0) //Position: 0xABB0 / 43952
{
	int iVar0;
	
	iVar0 = Function_235(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	return (Function_217(iVar0) || Function_234(iParam0));
}

var Function_234(int iParam0) //Position: 0xABEF / 44015
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_235(iParam0);
	uVar1 = Global_43791[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

var Function_235(int iParam0) //Position: 0xAC13 / 44051
{
	if (iParam0 == 1)
	{
		return Global_46760[0];
	}
	if (iParam0 == 2)
	{
		return Global_46760[2];
	}
	if (iParam0 == 3)
	{
		return Global_46760[1];
	}
	if (iParam0 == 4)
	{
		return Global_46796[1];
	}
	if (iParam0 == 5)
	{
		return Global_46796[3];
	}
	if (iParam0 == 8)
	{
		return Global_46816[0];
	}
	if (iParam0 == 9)
	{
		return Global_46816[1];
	}
	if (iParam0 == 11)
	{
		return Global_46838[0];
	}
	if (iParam0 == 12)
	{
		return Global_46850[0];
	}
	if (iParam0 == 13)
	{
		return Global_46850[1];
	}
	if (iParam0 == 14)
	{
		return Global_46850[2];
	}
	if (iParam0 == 15)
	{
		return Global_46866[0];
	}
	if (iParam0 == 16)
	{
		return Global_46866[1];
	}
	if (iParam0 == 17)
	{
		return Global_46866[2];
	}
	if (iParam0 == 25)
	{
		return Global_46894[2];
	}
	if (iParam0 == 18)
	{
		return Global_46894[3];
	}
	if (iParam0 == 19)
	{
		return Global_46894[0];
	}
	if (iParam0 == 21)
	{
		return Global_46914[0];
	}
	if (iParam0 == 22)
	{
		return Global_46926[2];
	}
	if (iParam0 == 23)
	{
		return Global_46926[1];
	}
	if (iParam0 == 24)
	{
		return Global_46926[0];
	}
	if (iParam0 == 26)
	{
		return Global_46838[1];
	}
	if (iParam0 == 27)
	{
		return Global_46894[1];
	}
	return 4294967295;
}

void Function_236(int iParam0) //Position: 0xAD99 / 44441
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	
	if (!IS_EVENT_VALID(&iParam0))
	{
		return;
	}
	uVar1 = GET_EVENT_TARGET_AS_OBJECT(&iParam0);
	bVar0 = GET_EVENT_PERPETRATOR(&iParam0);
	if (GET_EVENT_TYPE(&iParam0) == 112)
	{
		if (IS_OBJECT_VALID(&uVar1))
		{
			Function_176(StackVal, &uVar1, Vector(0.0f, 0.0f, 0.0f), 1, &bVar0, 0);
		}
		return;
	}
	if (!IS_OBJECT_VALID(&bVar0))
	{
		return;
	}
	iVar10 = Function_77();
	switch (GET_EVENT_TYPE(&iParam0))
	{
		case 0x00000002:
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(&bVar0) != &iVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar1) != 15)
			{
				return;
			}
			Global_21369.f_228 = 0;
			if (IS_ACTOR_ANIMAL(GET_ACTOR_FROM_OBJECT(&uVar1)))
			{
				Function_38(26, 1, 0, 0);
				if (IS_ACTOR_ON_TRAIN(GET_ACTOR_FROM_OBJECT(&bVar0), 0))
				{
					Function_38(138, 1, 0, 0);
				}
				if (StackVal && Function_9(!Function_9(StackVal, 4), 2))
				{
					if (DECOR_CHECK_EXIST(&iParam0, "Weapon"))
					{
						bVar2 = DECOR_GET_INT(&iParam0, "Weapon");
					}
					else
					{
						bVar2 = GET_WEAPON_IN_HAND(&Global_54076);
					}
					if (bVar2 == 24)
					{
						bVar5 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1));
						if ((((((((bVar5 != 1087 || bVar5 != 1088) || bVar5 != 1089) || bVar5 != 1090) || bVar5 != 1091) || bVar5 != 1091) || bVar5 != 1092) || bVar5 != 1093) || bVar5 != 1094)
						{
							DECOR_SET_BOOL(&Global_54076, "CougarOutfitKill", true);
						}
					}
				}
				Function_241(GET_ACTOR_FROM_OBJECT(&uVar1));
				if (IS_ACTOR_HORSE(GET_ACTOR_FROM_OBJECT(&uVar1)))
				{
					if (IS_ACTOR_MOUNTED(GET_ACTOR_FROM_OBJECT(&uVar1)))
					{
						if (Function_240(GET_RIDER(GET_ACTOR_FROM_OBJECT(&uVar1))))
						{
							Function_38(41, 1, 0, 0);
						}
					}
				}
				else if (!Global_6629)
				{
					if (!Function_26(Global_119936, 524288))
					{
						Function_16(&Global_54076, 524288, 3, 0);
					}
					if (Global_43787 == 1)
					{
						if (!Function_26(Global_119936, 2097152))
						{
							Function_16(&Global_54076, 2097152, 3, 0);
						}
					}
				}
				return;
			}
			if (!IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(&uVar1)))
			{
				return;
			}
			bVar4 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1));
			if ((bVar4 == 1263 && bVar4 == 1264) && bVar4 == 1265)
			{
				if (!Function_94())
				{
					Function_38(27, 1, 0, 0);
					if (IS_ACTOR_ON_TRAIN(GET_ACTOR_FROM_OBJECT(&bVar0), 0))
					{
						Function_38(139, 1, 0, 0);
					}
				}
				else if (((((((!DECOR_CHECK_EXIST(&uVar1, "Zombie") && !(bVar4 <= 1204 && bVar4 >= 1254)) && bVar4 == 541) && bVar4 == 542) && bVar4 == 543) && bVar4 == 544) && bVar4 == 1252) && bVar4 == 1253)
				{
					Function_38(27, 1, 0, 0);
					if (IS_ACTOR_ON_TRAIN(GET_ACTOR_FROM_OBJECT(&bVar0), 0))
					{
						Function_38(139, 1, 0, 0);
					}
				}
			}
			if (DECOR_CHECK_EXIST(&iParam0, "Weapon"))
			{
				bVar2 = DECOR_GET_INT(&iParam0, "Weapon");
			}
			else
			{
				bVar2 = GET_WEAPON_IN_HAND(&iVar10);
			}
			if (bVar2 < 4294967295 && bVar2 > 39)
			{
				if (!Function_94())
				{
					Function_38((183 + bVar2), 1, 0, 0);
				}
				else if (((((((DECOR_CHECK_EXIST(&uVar1, "Zombie") || (bVar4 <= 1204 && bVar4 >= 1254)) || bVar4 != 541) || bVar4 != 542) || bVar4 != 543) || bVar4 != 544) || bVar4 != 1252) || bVar4 != 1253)
				{
					Function_38((183 + bVar2), 1, 0, 0);
				}
				switch (UNK_0xDB679ED9(bVar2))
				{
					case 0x0000002A:
					case 0x00000029:
					case 0x0000002B:
					case 0x0000002C:
						Function_239(37);
						break;
					
					case 0x00000027:
					case 0x00000028:
						Function_239(36);
						break;
					
					case 0x00000031:
					case 0x00000032:
					case 0x00000033:
						Function_239(35);
						break;
					}
			}
			bVar9 = true;
			if (bVar4 <= 1263 && bVar4 >= 1265)
			{
				Function_38(602, 1, 0, 0);
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(51))
				{
					AWARD_ACHIEVEMENT(51);
				}
			}
			else if (bVar4 <= 516 && bVar4 >= 531)
			{
				Function_38(39, 1, 0, 0);
			}
			else if (bVar4 <= 505 && bVar4 >= 515)
			{
				Function_38(37, 1, 0, 0);
			}
			else if (bVar4 <= 496 && bVar4 >= 504)
			{
				Function_38(38, 1, 0, 0);
			}
			else if (bVar4 <= 486 && bVar4 >= 494)
			{
				Function_38(36, 1, 0, 0);
			}
			else if (bVar4 <= 477 && bVar4 >= 485)
			{
				Function_38(35, 1, 0, 0);
			}
			else if (bVar4 <= 467 && bVar4 >= 476)
			{
				Function_38(40, 1, 0, 0);
			}
			else if (bVar4 <= 455 && bVar4 >= 466)
			{
				Function_38(32, 1, 0, 0);
			}
			else if (bVar4 <= 449 && bVar4 >= 454)
			{
				Function_38(30, 1, 0, 0);
			}
			else if (bVar4 <= 424 && bVar4 >= 442)
			{
				Function_38(29, 1, 0, 0);
			}
			else if (bVar4 <= 397 && bVar4 >= 423)
			{
				Function_38(34, 1, 0, 0);
			}
			else if (bVar4 <= 379 && bVar4 >= 396)
			{
				Function_38(33, 1, 0, 0);
			}
			else if (bVar4 <= 369 && bVar4 >= 378)
			{
				Function_38(31, 1, 0, 0);
			}
			else if (DECOR_CHECK_EXIST(&uVar1, "criminal"))
			{
				Function_38(34, 1, 0, 0);
			}
			else
			{
				Function_38(28, 1, 0, 0);
				bVar9 = false;
			}
			if (bVar9)
			{
				Function_238(DECOR_CHECK_EXIST(&iParam0, "headshot"));
			}
			break;
		
		case 0x00000003:
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(&bVar0) != &iVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar1) != 15)
			{
				return;
			}
			if (!IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(&uVar1)))
			{
				return;
			}
			Function_38(43, 1, 0, 0);
			break;
		
		case 0x0000000A:
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(&bVar0) != &iVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar1) != 15)
			{
				return;
			}
			if (!IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(&uVar1)) && !Function_94())
			{
				return;
			}
			Function_38(42, 1, 0, 0);
			Function_58(10);
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(26))
			{
				if (GET_PLAYER_COMBATMODE() == 1)
				{
					if (Function_240(GET_ACTOR_FROM_OBJECT(&uVar1)))
					{
						AWARD_ACHIEVEMENT(26);
					}
				}
			}
			Function_239(38);
			break;
		
		case 0x00000005:
			if (!GET_OBJECT_TYPE(&bVar0) != 15)
			{
				return;
			}
			bVar3 = DECOR_GET_INT(&iParam0, "Weapon");
			if (bVar3 == 31)
			{
				if (GET_ACTOR_FROM_OBJECT(&bVar0) == &iVar10)
				{
					Function_174(&iParam0, 0);
				}
				else
				{
					if (IS_ACTOR_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar0)) && 0)
					{
						Function_174(&iParam0, 1);
					}
					return;
				}
			}
			if (!GET_ACTOR_FROM_OBJECT(&bVar0) != &iVar10)
			{
				return;
			}
			bVar3 = GET_WEAPON_IN_HAND(&iVar10);
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar1) != 15)
			{
				return;
			}
			if (!DECOR_CHECK_EXIST(&iParam0, "Weapon"))
			{
				return;
			}
			if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076))
			{
				return;
			}
			switch (bVar3)
			{
				case 0x00000010:
				case 0x00000011:
				case 0x0000000F:
				case 0x00000012:
				case 0x00000022:
					bVar8 = SHIFT_RIGHT(Global_77931, 24) & 255;
					bVar6 = SHIFT_RIGHT(Global_77931, 8) & 255;
					iVar7 = Global_77931 & 255;
					iVar7++;
					Global_77931 = ((SHIFT_LEFT(bVar6, 8) || iVar7) || SHIFT_LEFT(bVar8, 24));
					break;
				
				case 0x0000001D:
					DECOR_SET_INT(&uVar1, "HitsByTomahawk", DECOR_GET_INT(&uVar1, "HitsByTomahawk") + 1);
					Function_53(bVar3);
					break;
				
				default:
					Function_53(bVar3);
					break;
			}
			break;
		
		case 0x00000006:
			if (!GET_OBJECT_TYPE(&bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(&bVar0) != &iVar10)
			{
				return;
			}
			if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076))
			{
				return;
			}
			bVar3 = GET_WEAPON_IN_HAND(&iVar10);
			switch (bVar3)
			{
				case 0x00000010:
				case 0x00000011:
				case 0x0000000F:
				case 0x00000012:
				case 0x00000022:
					bVar8 = SHIFT_RIGHT(Global_77931, 24) & 255;
					bVar6 = SHIFT_RIGHT(Global_77931, 8) & 255;
					iVar7 = Global_77931 & 255;
					bVar6++;
					Global_77931 = ((SHIFT_LEFT(bVar6, 8) || iVar7) || SHIFT_LEFT(bVar8, 24));
					if (IS_ACTOR_USING_COVER(&iVar10))
					{
						Function_87(&Global_77931, 0x40000000);
					}
					else if (IS_ACTOR_CROUCHING(&iVar10))
					{
						Function_87(&Global_77931, 0x20000000);
					}
					if (IS_ACTOR_RIDING(&iVar10))
					{
						if (((IS_ACTOR_HORSE(GET_MOUNT(&iVar10)) || IS_ACTOR_MULE(GET_MOUNT(&iVar10))) || ANIMAL_ACTOR_GET_SPECIES(GET_MOUNT(&iVar10)) != 9) || ANIMAL_ACTOR_GET_SPECIES(GET_MOUNT(&iVar10)) != 8)
						{
							Function_87(&Global_77931, 0x10000000);
						}
					}
					if (IS_ACTOR_INSIDE_VEHICLE(&iVar10))
					{
						Function_87(&Global_77931, 0x8000000);
					}
					break;
				
				case 0x00000015:
				case 0x00000016:
				case 0x00000017:
				case 0x00000018:
				case 0x00000019:
				case 0x0000001D:
					Function_54(bVar3);
					break;
				
				default:
					if (IS_ACTOR_USING_COVER(&iVar10))
					{
						Function_38(135, 1, 0, 0);
					}
					else if (IS_ACTOR_CROUCHING(&iVar10))
					{
						Function_38(134, 1, 0, 0);
					}
					if (IS_ACTOR_RIDING(&iVar10))
					{
						if (((IS_ACTOR_HORSE(GET_MOUNT(&iVar10)) || IS_ACTOR_MULE(GET_MOUNT(&iVar10))) || ANIMAL_ACTOR_GET_SPECIES(GET_MOUNT(&iVar10)) != 9) || ANIMAL_ACTOR_GET_SPECIES(GET_MOUNT(&iVar10)) != 8)
						{
							Function_38(136, 1, 0, 0);
						}
					}
					if (IS_ACTOR_INSIDE_VEHICLE(&iVar10))
					{
						Function_38(137, 1, 0, 0);
					}
					Function_54(bVar3);
					break;
			}
			break;
		
		case 0x00000009:
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(&bVar0) != &iVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar1) != 15)
			{
				return;
			}
			if (!IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(&uVar1)))
			{
				return;
			}
			if (GET_LAST_HIT_TIME(GET_ACTOR_FROM_OBJECT(&uVar1)) < (GET_CURRENT_GAME_TIME() - 0,5f))
			{
				return;
			}
			if (!DECOR_CHECK_EXIST(&iParam0, "DroppedItem"))
			{
				return;
			}
			uVar1 = DECOR_GET_OBJECT(&iParam0, "DroppedItem");
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076))
			{
				return;
			}
			if (GET_OBJECT_TYPE(&uVar1) == 17)
			{
				Function_38(45, 1, 0, 0);
				Function_237(10);
			}
			break;
		
		case 0x0000000B:
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(&bVar0) != &iVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar1) != 15)
			{
				return;
			}
			if (!IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(&uVar1)))
			{
				return;
			}
			Function_38(46, 1, 0, 0);
			Function_55(11);
			break;
		
		case 0x00000004:
			Function_38(44, 1, 0, 0);
			break;
		
		case 0x00000057:
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&bVar0) != 15)
			{
				return;
			}
			if (!GET_RIDER(GET_ACTOR_FROM_OBJECT(&bVar0)) != &iVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar1) != 15)
			{
				return;
			}
			if (IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(&uVar1)))
			{
				if (!DECOR_CHECK_EXIST(&uVar1, "statRunOver"))
				{
					DECOR_SET_FLOAT(&uVar1, "statRunOver", GET_CURRENT_GAME_TIME());
					Function_38(130, 1, 0, 0);
					Function_38(129, 1, 0, 0);
				}
				else if (DECOR_GET_FLOAT(&uVar1, "statRunOver") + 4.0f) > GET_CURRENT_GAME_TIME()
				{
					DECOR_SET_FLOAT(&uVar1, "statRunOver", GET_CURRENT_GAME_TIME());
					Function_38(130, 1, 0, 0);
					Function_38(129, 1, 0, 0);
				}
			}
			break;
		
		case 0x00000058:
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&bVar0) != 15)
			{
				return;
			}
			if (!IS_ACTOR_DRIVING_VEHICLE(&iVar10))
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(&bVar0) != GET_VEHICLE(&Global_54076))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar1) != 15)
			{
				return;
			}
			if (IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(&uVar1)))
			{
				bVar4 = Function_163(&bVar0);
				if ((bVar4 <= 1177 && bVar4 >= 1182) || bVar4 != 1202)
				{
					if (!DECOR_CHECK_EXIST(&uVar1, "statRunOver"))
					{
						DECOR_SET_FLOAT(&uVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_38(133, 1, 0, 0);
						Function_38(129, 1, 0, 0);
					}
					else if (DECOR_GET_FLOAT(&uVar1, "statRunOver") + 4.0f) > GET_CURRENT_GAME_TIME()
					{
						DECOR_SET_FLOAT(&uVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_38(133, 1, 0, 0);
						Function_38(129, 1, 0, 0);
					}
				}
				else if (bVar4 <= 1183 && bVar4 >= 1188)
				{
					if (!DECOR_CHECK_EXIST(&uVar1, "statRunOver"))
					{
						DECOR_SET_FLOAT(&uVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_38(131, 1, 0, 0);
						Function_38(129, 1, 0, 0);
					}
					else if (DECOR_GET_FLOAT(&uVar1, "statRunOver") + 4.0f) > GET_CURRENT_GAME_TIME()
					{
						DECOR_SET_FLOAT(&uVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_38(131, 1, 0, 0);
						Function_38(129, 1, 0, 0);
					}
				}
				else if (bVar4 <= 1195 && bVar4 >= 1201)
				{
					if (!DECOR_CHECK_EXIST(&uVar1, "statRunOver"))
					{
						DECOR_SET_FLOAT(&uVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_38(132, 1, 0, 0);
						Function_38(129, 1, 0, 0);
					}
					else if (DECOR_GET_FLOAT(&uVar1, "statRunOver") + 4.0f) > GET_CURRENT_GAME_TIME()
					{
						DECOR_SET_FLOAT(&uVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_38(132, 1, 0, 0);
						Function_38(129, 1, 0, 0);
					}
				}
			}
			break;
		
		case 0x00000024:
			break;
		
		case 0x0000005E:
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(&bVar0) != &iVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar1) != 15)
			{
				return;
			}
			Function_38(389, 5, 0, 0);
			break;
		
		case 0x00000069:
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(&bVar0) != &iVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar1) != 15)
			{
				return;
			}
			if (!IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(&uVar1)))
			{
				return;
			}
			Function_38(391, 1, 0, 0);
			break;
	}
	return;
}

void Function_237(int iParam0) //Position: 0xBC38 / 48184
{
	if (AWARD_AVATAR(iParam0))
	{
		if (IS_PS3())
		{
			Function_102("avunlock_help", 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

void Function_238(bool bParam0) //Position: 0xBC6F / 48239
{
	if (!NET_GET_KILL_EFFECT_ON())
	{
		return;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return;
	}
	SET_SHOCK_AMPLITUDE(0,2f);
	SET_SHOCK_SPEED(15.0f);
	FIRE_SHOCK(0,5f);
	if (&bParam0)
	{
		PLAY_SOUND_FRONTEND("DEATH_EFFECT_HS_SINGLE_PLAYER_MASTER");
	}
	else
	{
		PLAY_SOUND_FRONTEND("DEATH_EFFECT_SINGLE_PLAYER_MASTER");
	}
	return;
}

void Function_239(int iParam0) //Position: 0xBCF7 / 48375
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0x00000026:
			if (Function_57(42) > 250)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(38))
				{
					AWARD_ACHIEVEMENT(38);
				}
			}
			return;
			break;
		
		case 0x00000024:
			iVar1 = 0;
			while (iVar1 < 7)
			{
				iVar0 = (iVar0 + Function_57((183 + iVar1)));
				iVar1++;
			}
			if (iVar0 > 500)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(36))
				{
					AWARD_ACHIEVEMENT(36);
				}
			}
			return;
			break;
		
		case 0x00000025:
			iVar1 = 8;
			while (iVar1 < 20)
			{
				iVar0 = (iVar0 + Function_57((183 + iVar1)));
				iVar1++;
			}
			if (iVar0 > 500)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(37))
				{
					AWARD_ACHIEVEMENT(37);
				}
			}
			return;
			break;
		
		case 0x00000023:
			iVar1 = 26;
			while (iVar1 < 28)
			{
				iVar0 = (iVar0 + Function_57((183 + iVar1)));
				iVar1++;
			}
			if (iVar0 > 500)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(35))
				{
					AWARD_ACHIEVEMENT(35);
				}
			}
			return;
			break;
		
		case 0x00000027:
			if (Function_57(354) > 26)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(39))
				{
					AWARD_ACHIEVEMENT(39);
				}
			}
			return;
			break;
		
		case 0x0000001D:
			if (Function_57(320) > 20)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(29))
				{
					AWARD_ACHIEVEMENT(29);
				}
			}
			break;
	}
	return;
}

bool Function_240(bool bParam0) //Position: 0xBE35 / 48693
{
	int iVar0;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&bParam0, "honor"))
	{
		if (DECOR_GET_INT(&bParam0, "honor") > 0)
		{
			return 1;
		}
		return 0;
	}
	iVar0 = GET_ACTOR_FACTION(&bParam0);
	switch (iVar0)
	{
		case 0x0000000E:
		case 0x00000019:
		case 0x00000018:
		case 0x0000000C:
		case 0x0000000F:
		case 0x0000001B:
		case 0x0000000D:
		case 0x00000013:
		case 0x00000016:
		case 0x00000020:
			return 1;
			break;
		
		case 0x00000004:
		case 0x00000006:
		case 0x00000003:
		case 0x00000001:
		case 0x00000015:
		case 0x00000000:
		case 0x00000002:
		case 0x00000008:
		case 0x00000007:
		case 0x00000014:
		case 0x00000017:
			return 0;
			break;
		
		case 0x0000000A:
		case 0x00000010:
			if (Global_46720 <= 1)
			{
				return 0;
			}
			return 1;
			break;
		
		case 0x00000011:
		case 0x00000012:
		case 0x0000001F:
		case 0x0000001C:
		case 0x0000001D:
			return 0;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void Function_241(int iParam0) //Position: 0xBF4E / 48974
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	iVar0 = 0;
	bVar1 = GET_ACTORENUM_SPECIES(GET_ACTOR_ENUM(&iParam0));
	switch (bVar1)
	{
		case 0x00000000:
			LOG_ERROR("PROCESS_STAT_WILD_ANIMAL_SPECIES_KILLED called with a human actor!");
			return;
			break;
		
		case 0x00000001:
			Function_38(313, 1, 0, 0);
			iVar0 = Function_57(313);
			break;
		
		case 0x00000002:
			Function_38(314, 1, 0, 0);
			iVar0 = Function_57(314);
			break;
		
		case 0x00000003:
			Function_38(315, 1, 0, 0);
			iVar0 = Function_57(315);
			break;
		
		case 0x00000005:
			Function_38(317, 1, 0, 0);
			iVar0 = Function_57(317);
			break;
		
		case 0x00000004:
			Function_38(316, 1, 0, 0);
			iVar0 = Function_57(316);
			break;
		
		case 0x00000006:
			Function_38(318, 1, 0, 0);
			iVar0 = Function_57(318);
			break;
		
		case 0x00000007:
			Function_38(319, 1, 0, 0);
			iVar0 = Function_57(319);
			break;
		
		case 0x00000008:
			Function_38(320, 1, 0, 0);
			Function_239(29);
			iVar0 = Function_57(320);
			break;
		
		case 0x00000009:
		case 0x0000000C:
			Function_38(323, 1, 0, 0);
			return;
			break;
		
		case 0x0000000A:
			Function_38(321, 1, 0, 0);
			break;
		
		case 0x0000000B:
			Function_38(322, 1, 0, 0);
			iVar0 = Function_57(322);
			break;
		
		case 0x0000000D:
			Function_38(324, 1, 0, 0);
			iVar0 = Function_57(324);
			break;
		
		case 0x0000000E:
			uVar2 = GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTOR_ENUM(&iParam0));
			if (STRING_CONTAINS_STRING(&uVar2, "seagull"))
			{
				Function_38(341, 1, 0, 0);
				iVar0 = Function_57(341);
			}
			else
			{
				Function_38(325, 1, 0, 0);
				iVar0 = Function_57(325);
			}
			break;
		
		case 0x0000000F:
			Function_38(326, 1, 0, 0);
			iVar0 = Function_57(326);
			break;
		
		case 0x00000010:
		case 0x00000021:
			Function_38(327, 1, 0, 0);
			break;
		
		case 0x00000011:
			Function_38(328, 1, 0, 0);
			iVar0 = Function_57(328);
			break;
		
		case 0x00000012:
			Function_38(329, 1, 0, 0);
			iVar0 = Function_57(329);
			break;
		
		case 0x00000013:
			Function_38(330, 1, 0, 0);
			iVar0 = Function_57(330);
			break;
		
		case 0x00000014:
			Function_38(331, 1, 0, 0);
			iVar0 = Function_57(331);
			break;
		
		case 0x00000015:
			Function_38(332, 1, 0, 0);
			return;
			break;
		
		case 0x00000016:
			Function_38(333, 1, 0, 0);
			iVar0 = Function_57(333);
			break;
		
		case 0x00000017:
			if (ANIMAL_ACTOR_GET_DOMESTICATION(&iParam0) == 0)
			{
				Function_38(334, 1, 0, 0);
				return;
			}
			Function_38(335, 1, 0, 0);
			iVar0 = Function_57(335);
			break;
		
		case 0x00000018:
			Function_38(336, 1, 0, 0);
			return;
			break;
		
		case 0x00000019:
			Function_38(337, 1, 0, 0);
			iVar0 = Function_57(337);
			break;
		
		case 0x0000001A:
			Function_38(338, 1, 0, 0);
			break;
		
		case 0x0000001B:
			uVar2 = GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTOR_ENUM(&iParam0));
			if (STRING_CONTAINS_STRING(&uVar2, "njackalope"))
			{
				Function_38(349, 1, 0, 0);
				iVar0 = Function_57(349);
			}
			else
			{
				Function_38(339, 1, 0, 0);
				iVar0 = Function_57(339);
			}
			break;
		
		case 0x0000001C:
			Function_38(340, 1, 0, 0);
			iVar0 = Function_57(340);
			break;
		
		case 0x0000001D:
			Function_38(342, 1, 0, 0);
			return;
			break;
		
		case 0x0000001E:
			Function_38(343, 1, 0, 0);
			iVar0 = Function_57(343);
			break;
		
		case 0x0000001F:
			Function_38(344, 1, 0, 0);
			iVar0 = Function_57(344);
			break;
		
		case 0x00000020:
			Function_38(345, 1, 0, 0);
			iVar0 = Function_57(345);
			break;
		
		case 0x00000022:
			Function_38(346, 1, 0, 0);
			iVar0 = Function_57(346);
			break;
		
		case 0x00000023:
			Function_38(347, 1, 0, 0);
			iVar0 = Function_57(347);
			break;
	}
	if (iVar0 == 1)
	{
		Function_38(354, 1, 0, 0);
		Function_239(39);
	}
	return;
}

void Function_242(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xC447 / 50247
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (!IS_EVENT_VALID(&uParam0))
	{
		return;
	}
	bParam3 = (bParam3 || Global_47267[8]);
	uVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	uVar2 = GET_EVENT_PERPETRATOR(&uParam0);
	uVar3 = GET_EVENT_TARGET_AS_OBJECT(&uParam0);
	if (IS_OBJECT_VALID(&uVar3))
	{
		if (GET_OBJECT_TYPE(&uVar3) == 15)
		{
			iVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(&uParam0));
		}
	}
	if ((StackVal != 2 && GET_EVENT_TYPE(&uParam0) != 17) && DECOR_GET_STRING_HASH(&uParam0, "ExplosionType") != STRING_TO_HASH("ToxicZombieExplosion"))
	{
		Function_112(1, 7, GET_EVENT_TIME(&uParam0), 0);
	}
	if (StackVal || StackVal != 2 != 3)
	{
		if (GET_EVENT_TYPE(&uParam0) == 73)
		{
			Function_139(0, 10, 1);
		}
		else if (GET_EVENT_TYPE(&uParam0) == 74)
		{
			Function_139(0, 10, 0);
			Function_61(0, &Global_77932[018] + 8, &Global_77932[018] + 12, 0);
		}
	}
	if (StackVal == 4)
	{
		Function_251(&uParam0);
	}
	if (IS_OBJECT_VALID(&uVar2))
	{
		if (GET_OBJECT_TYPE(&uVar2) == 15)
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar2)))
			{
				if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&uVar2)))
				{
					Global_79340[22818].f_36 = Function_163(GET_OBJECT_FROM_ACTOR(&Global_54076));
					if (&bParam3)
					{
						PRINTSTRING("PROCESS_AMBIENT_MISSION_EVENT COPYING EVENT OF TYPE: ");
						PRINTINT(GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(&uParam0)));
						PRINTNL();
					}
					if (GET_EVENT_TYPE(&uParam0) == 6)
					{
						if (GET_WEAPON_IN_HAND(&Global_54076) == 29)
						{
							DECOR_SET_INT(GET_OBJECT_FROM_EVENT(&uParam0), "nAM_Weapon", 29);
							Global_79340[23018].f_36 = 29;
						}
					}
					if ((GET_EVENT_TYPE(&uParam0) != 2 || GET_EVENT_TYPE(&uParam0) != 7) || GET_EVENT_TYPE(&uParam0) != 6)
					{
						uParam2++;
					}
					if (IS_ACTOR_VALID(&iVar1))
					{
						Global_79340[22918].f_36 = Function_163(GET_OBJECT_FROM_ACTOR(&iVar1));
						if (FIRE_IS_ACTOR_ON_FIRE(&iVar1))
						{
							Global_79340[23218].f_36 = 1;
						}
						if (IS_ACTOR_FLYING(&iVar1))
						{
							DECOR_SET_BOOL(GET_OBJECT_FROM_EVENT(&uParam0), "nAM_Flying", true);
						}
						if ((((GET_EVENT_TYPE(&uParam0) != 2 || GET_EVENT_TYPE(&uParam0) != 7) || GET_EVENT_TYPE(&uParam0) != 10) || GET_EVENT_TYPE(&uParam0) != 5) || GET_EVENT_TYPE(&uParam0) != 50)
						{
							DECOR_SET_INT(GET_OBJECT_FROM_EVENT(&uParam0), "nAM_Weapon", GET_LAST_HIT_WEAPON(&iVar1));
							Global_79340[23018].f_36 = GET_LAST_HIT_WEAPON(&iVar1);
							Global_79340[23118].f_36 = Function_250(&iVar1);
							if (GET_LAST_HIT_WEAPON(&iVar1) == 29)
							{
								if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076))
								{
									DECOR_SET_BOOL(GET_OBJECT_FROM_EVENT(&uParam0), "nAM_Linked", true);
								}
								if (IS_PLAYER_DEADEYE(0))
								{
									DECOR_SET_BOOL(GET_OBJECT_FROM_EVENT(&uParam0), "AM_Deadeye", true);
								}
							}
							else if (GET_LAST_HIT_WEAPON(&iVar1) == 31)
							{
								if (IS_ACTOR_USING_COVER(&iVar1))
								{
									DECOR_SET_BOOL(GET_OBJECT_FROM_EVENT(&uParam0), "AM_InCover", true);
								}
							}
							if (GET_EVENT_TYPE(&uParam0) == 2)
							{
								if (DECOR_CHECK_EXIST(&iVar1, "ATRifle"))
								{
									DECOR_SET_INT(GET_OBJECT_FROM_EVENT(&uParam0), "nAM_Weapon", 31);
								}
							}
							if (StackVal == 2)
							{
								Function_112(1, 8, GET_LAST_HIT_TIME(&iVar1), 0);
							}
							Function_249(&iVar1, &uParam0);
							if (!DECOR_CHECK_EXIST(&iVar1, "amz_target_hogtied"))
							{
								Function_247(GET_EVENT_TYPE(&uParam0), &iVar1, &uParam1);
							}
							else if (StackVal == 2)
							{
								Function_244(1, &Global_77932[118] + 8, &Global_77932[118] + 12);
							}
							Function_243();
						}
						else if (GET_EVENT_TYPE(&uParam0) == 91)
						{
							if (DECOR_GET_STRING_HASH(&uParam0, "ExplosionType") == STRING_TO_HASH("ATRifleExplosion"))
							{
								DECOR_SET_INT(GET_OBJECT_FROM_EVENT(&uParam0), "nAM_Weapon", 31);
								Global_79340[23018].f_36 = 31;
								if (IS_ACTOR_USING_COVER(&iVar1))
								{
									DECOR_SET_BOOL(GET_OBJECT_FROM_EVENT(&uParam0), "AM_InCover", true);
								}
							}
						}
					}
					COPY_EVENT(&uParam0, &uVar0);
				}
			}
		}
	}
	if (IS_OBJECT_VALID(&uVar3))
	{
		if (GET_OBJECT_TYPE(&uVar3) == 15)
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar3)))
			{
				if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&uVar3)))
				{
					if (&bParam3)
					{
						PRINTSTRING("PROCESS_AMBIENT_MISSION_EVENT COPYING EVENT OF TYPE: ");
						PRINTINT(GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(&uParam0)));
						PRINTNL();
					}
					COPY_EVENT(&uParam0, &uVar0);
				}
			}
		}
	}
	Function_253();
}

void Function_243() //Position: 0xC993 / 51603
{
	return;
}

void Function_244(bool bParam0, bool bParam1, int iParam2) //Position: 0xC999 / 51609
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	
	switch (bParam1)
	{
		case 0x00000000:
			Function_138(bParam0);
			fVar4 = Function_137(bParam0);
			bVar1 = Function_246(bParam0, 1, 1);
			bVar2 = Function_246(bParam0, 2, 1);
			if (Global_79340[23118].f_36 != 0 && bVar1 >= 99.0f)
			{
				Function_112(bParam0, 1, (bVar1 + 1.0f), 1);
			}
			else if (Global_79340[23118].f_36 != 1 && bVar2 >= 24.0f)
			{
				Function_112(bParam0, 2, (bVar2 + 1.0f), 1);
			}
			bVar1 = Function_246(bParam0, 1, 1);
			bVar2 = Function_246(bParam0, 2, 1);
			Global_77932[bParam018].f_36 = (CEIL(bVar1) + CEIL(bVar2));
			bVar0 = Global_77932[bParam018].f_36;
			if (bVar0 > 125)
			{
				iParam2 = 0.0f;
				Function_125(bParam0, &bParam1, 1, 25, 0, 1);
				Function_124(bParam0);
			}
			else
			{
				iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(125));
				if (iParam2 == fVar4)
				{
					Function_131(bParam0, iParam2, 1, CEIL(bVar1), CEIL(bVar2), 4294967295, 19);
				}
			}
			break;
		
		case 0x00000001:
			Function_124(bParam0);
			bVar1 = Function_246(bParam0, 1, 1);
			bVar2 = Function_246(bParam0, 2, 1);
			if (Global_79340[23118].f_36 != 2 && bVar1 >= 24.0f)
			{
				Function_112(bParam0, 1, (bVar1 + 1.0f), 1);
			}
			else if (Global_79340[23118].f_36 != 3 && bVar2 >= 14.0f)
			{
				Function_112(bParam0, 2, (bVar2 + 1.0f), 1);
			}
			bVar1 = Function_246(bParam0, 1, 1);
			bVar2 = Function_246(bParam0, 2, 1);
			Global_77932[bParam018].f_36 = (CEIL(bVar1) + CEIL(bVar2));
			bVar0 = Global_77932[bParam018].f_36;
			if (bVar0 > 40)
			{
				iParam2 = 0.0f;
				Function_125(bParam0, &bParam1, 2, 2, 0, 1);
				Function_124(bParam0);
			}
			else
			{
				iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(40));
				if (iParam2 == fVar4)
				{
					Function_131(bParam0, iParam2, 1, CEIL(bVar1), CEIL(bVar2), 4294967295, 19);
				}
			}
			break;
		
		case 0x00000002:
			Function_124(bParam0);
			bVar0 = Function_245(bParam0, Global_79340[23018].f_36);
			if (bVar0 > 2)
			{
				iParam2 = 0.0f;
				Function_125(bParam0, &bParam1, 3, 2, 0, 1);
				Function_124(bParam0);
			}
			break;
		
		case 0x00000003:
			Function_124(bParam0);
			bVar1 = Function_246(bParam0, 1, 1);
			bVar2 = Function_246(bParam0, 2, 1);
			bVar3 = Function_246(bParam0, 3, 1);
			if (Global_79340[23018].f_36 == 33)
			{
				if (Global_79340[22918].f_36 != 1246 && bVar1 >= 1.0f)
				{
					Function_112(bParam0, 1, (bVar1 + 1.0f), 1);
				}
				else if (Global_79340[22918].f_36 != 1242 && bVar2 >= 4.0f)
				{
					Function_112(bParam0, 2, (bVar2 + 1.0f), 1);
				}
				else if (Global_79340[22918].f_36 != 1244 && bVar3 >= 2.0f)
				{
					Function_112(bParam0, 3, (bVar3 + 1.0f), 1);
				}
			}
			bVar1 = Function_246(bParam0, 1, 1);
			bVar2 = Function_246(bParam0, 2, 1);
			bVar3 = Function_246(bParam0, 3, 1);
			Global_77932[bParam018].f_36 = ((CEIL(bVar1) + CEIL(bVar2)) + CEIL(bVar3));
			bVar0 = Global_77932[bParam018].f_36;
			if (bVar0 > 10)
			{
				iParam2 = 0.0f;
				Function_125(bParam0, &bParam1, 4, 2, 0, 1);
				Function_124(bParam0);
			}
			else
			{
				iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(10));
				if (iParam2 == fVar4)
				{
					Function_131(bParam0, iParam2, 1, CEIL(bVar1), CEIL(bVar2), CEIL(bVar3), 19);
				}
			}
			break;
		
		case 0x00000004:
			Function_124(bParam0);
			if (Global_79340[22918].f_36 == 1266)
			{
				Global_77932[bParam018].f_36++;
			}
			bVar0 = Global_77932[bParam018].f_36;
			if (bVar0 > 1)
			{
				iParam2 = 0.0f;
				Function_62(bParam0, &bParam1, 0);
			}
			else
			{
				iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(true));
				if (iParam2 == fVar4)
				{
					Function_131(bParam0, iParam2, 0, 4294967295, 4294967295, 4294967295, 0);
				}
			}
			break;
	}
	return;
}

bool Function_245(bool bParam0, int iParam1) //Position: 0xCD7E / 52606
{
	if (fLocal_23 == Function_246(bParam0, 7, 0))
	{
		Global_77932[bParam018].f_36 = 0;
		fLocal_23 = Function_246(bParam0, 7, 0);
	}
	if (iParam1 == 4294967295)
	{
		fLocal_24 = Function_246(bParam0, 8, 0);
		if ((fLocal_24 - fLocal_23) > 0,2f)
		{
			Global_77932[bParam018].f_36++;
		}
		else
		{
			Global_77932[bParam018].f_36 = 0;
		}
	}
	return Global_77932[bParam018].f_36;
}

float Function_246(bool bParam0, bool bParam1, bool bParam2) //Position: 0xCDF1 / 52721
{
	char* cVar0[16];
	bool bVar4;
	
	if (&bParam2)
	{
		if (0 | Global_53524.f_44)
		{
			return (*&Global_78078[bParam018] + 44)[bParam1];
		}
		return (*&Global_77932[bParam018] + 44)[bParam1];
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_113();
	if (IS_LAYOUTREF_VALID(&bVar4))
	{
		if (DECOR_CHECK_EXIST(&bVar4, &cVar0))
		{
			return DECOR_GET_FLOAT(&bVar4, &cVar0);
		}
		return -1.0f;
	}
	LOG_ERROR("AM_RETRIEVE_FLOAT: failed to retrieve float value from slot");
	return -1.0f;
}

void Function_247(int iParam0, var uParam1, int iParam2) //Position: 0xCEB8 / 52920
{
	if (StackVal == 1)
	{
		if (iParam0 == 10)
		{
			if ((((Global_79340[23118].f_36 != 0 || Global_79340[23118].f_36 != 1) || Global_79340[23118].f_36 != 2) || Global_79340[23118].f_36 != 4) || Global_79340[23118].f_36 != 3)
			{
				iParam2++;
			}
		}
	}
	if (iParam0 == 2)
	{
		Function_244(1, &Global_77932[118] + 8, &Global_77932[118] + 12);
		if (StackVal != 1)
		{
			if (StackVal || (((((((((StackVal != 0 && Global_79340[23018].f_36 < 0) && Global_79340[23018].f_36 == 24) && Global_79340[23018].f_36 == 23) && Global_79340[23018].f_36 == 35) && Global_79340[23018].f_36 == 25) && Global_79340[23018].f_36 == 29) && Global_79340[23018].f_36 == 36) && Global_79340[23018].f_36 == 37) && Global_79340[23018].f_36 == 32) == 0)
			{
				if (StackVal == 4)
				{
					if (!Function_248(GET_LAST_HIT_FLAGS(&uParam1), 262144) && !IS_PLAYER_DEADEYE(0))
					{
						Function_61(0, &Global_77932[018] + 8, &Global_77932[018] + 12, 0);
					}
				}
				else
				{
					Function_61(0, &Global_77932[018] + 8, &Global_77932[018] + 12, 0);
				}
			}
		}
	}
	return;
}

bool Function_248(var uParam0, int iParam1) //Position: 0xD034 / 53300
{
	return (uParam0 && iParam1) == 0;
}

void Function_249(var uParam0, int iParam1) //Position: 0xD041 / 53313
{
	if (GET_EVENT_TYPE(&iParam1) == 50)
	{
		if (!DECOR_CHECK_EXIST(&uParam0, "amz_target_hogtied"))
		{
			DECOR_SET_INT(&uParam0, "amz_target_hogtied", true);
		}
	}
	return;
}

int Function_250(int iParam0) //Position: 0xD08E / 53390
{
	if (Function_170(&iParam0) || Function_33(&iParam0))
	{
		return 0;
	}
	if (Function_169(&iParam0))
	{
		return 1;
	}
	if (Function_167(&iParam0))
	{
		return 2;
	}
	if (Function_168(&iParam0))
	{
		return 3;
	}
	if (Function_34(&iParam0))
	{
		return 4;
	}
	return 4294967295;
}

void Function_251(int iParam0) //Position: 0xD0DF / 53471
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	
	if (GET_EVENT_TYPE(&iParam0) == 87)
	{
		uVar0 = GET_EVENT_TARGET_AS_OBJECT(&iParam0);
		uVar1 = GET_EVENT_PERPETRATOR(&iParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			uVar2 = GET_ACTOR_FROM_OBJECT(&uVar0);
			if (IS_OBJECT_VALID(&uVar1))
			{
				uVar3 = GET_ACTOR_FROM_OBJECT(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					bVar4 = GET_ACTOR_ENUM(&uVar3);
					if (bVar4 == 1268)
					{
						Global_79340[22818].f_36 = GET_ACTOR_ENUM(&uVar3);
						Global_79340[22918].f_36 = GET_ACTOR_ENUM(&uVar2);
						Global_79340[23118].f_36 = Function_250(&uVar2);
						Function_252(2, &Global_77932[218] + 8, &Global_77932[218] + 12);
					}
				}
			}
		}
	}
	return;
}

void Function_252(bool bParam0, int iParam1, var uParam2) //Position: 0xD185 / 53637
{
	bool bVar0;
	float fVar1;
	
	switch (iParam1)
	{
		case 0x00000000:
			Function_138(bParam0);
			Function_125(bParam0, &iParam1, 1, 0, "challenge_01_128", 0);
			break;
		
		case 0x00000001:
			Function_138(bParam0);
			Function_125(bParam0, &iParam1, 2, 0, "challenge_01_128", 0);
			break;
		
		case 0x00000002:
			Function_138(bParam0);
			Function_125(bParam0, &iParam1, 3, 0, "challenge_01_128", 0);
			break;
		
		case 0x00000003:
			Function_138(bParam0);
			Function_125(bParam0, &iParam1, 4, 0, "challenge_01_128", 0);
			break;
		
		case 0x00000004:
			if (Global_79340[23118].f_36 != 0 && Function_123(bParam0, 1) == 1)
			{
				Global_77932[bParam018].f_36++;
				Function_139(bParam0, 1, 1);
			}
			else if (Global_79340[23118].f_36 != 1 && Function_123(bParam0, 2) == 1)
			{
				Global_77932[bParam018].f_36++;
				Function_139(bParam0, 2, 1);
			}
			else if (Global_79340[23118].f_36 != 2 && Function_123(bParam0, 3) == 1)
			{
				Global_77932[bParam018].f_36++;
				Function_139(bParam0, 3, 1);
			}
			else if (Global_79340[23118].f_36 != 3 && Function_123(bParam0, 4) == 1)
			{
				Global_77932[bParam018].f_36++;
				Function_139(bParam0, 4, 1);
			}
			bVar0 = Global_77932[bParam018].f_36;
			if (bVar0 > 4)
			{
				uParam2 = 0.0f;
				Function_62(bParam0, &iParam1, 0);
				Function_124(bParam0);
				ADD_ITEM(Function_12(74), &Global_54076, 1);
				ADD_ITEM(Function_12(76), &Global_54076, 1);
				ADD_ITEM(Function_12(75), &Global_54076, 1);
			}
			else
			{
				uParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(4));
				if (uParam2 == fVar1)
				{
					Function_131(bParam0, uParam2, 0, 4294967295, 4294967295, 4294967295, 0);
				}
			}
			break;
	}
	return;
}

void Function_253() //Position: 0xD3A6 / 54182
{
	Global_79340[22818].f_36 = 4294967295;
	Global_79340[22918].f_36 = 4294967295;
	Global_79340[23018].f_36 = 4294967295;
	Global_79340[23118].f_36 = 4294967295;
	Global_79340[23218].f_36 = 4294967295;
	return;
}

void Function_254() //Position: 0xD3E3 / 54243
{
	Function_255(StackVal, 0, &uLocal_7);
	Function_255(StackVal, 1, &iLocal_11);
	Function_255(StackVal, 3, &iLocal_15);
	Function_255(StackVal, 2, &iLocal_19);
	return;
}

void Function_255(bool bParam0, int iParam1, int iParam2) //Position: 0xD425 / 54309
{
	if (Function_136(&iParam2))
	{
		if (Function_134(&iParam2) <= 3,5f)
		{
			Function_133(&iParam2);
			Function_112(bParam0, 10, 0.0f, 1);
			Function_256(bParam0, iParam1);
		}
	}
	if (Function_246(bParam0, 10, 1) != 1.0f)
	{
		if (!Function_136(&iParam2))
		{
			Function_129(&iParam2);
		}
	}
	return;
}

void Function_256(int iParam0, int iParam1) //Position: 0xD477 / 54391
{
	switch (iParam0)
	{
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000001:
					Function_266();
					break;
				
				case 0x00000002:
					Function_266();
					break;
				
				case 0x00000003:
					Function_266();
					break;
				
				case 0x00000004:
					Function_266();
					break;
				
				case 0x0000000A:
					SET_WEAPONENUM_LOCKED(7, 0);
					SET_WEAPONENUM_LOCKED(11, 0);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 7, false, 1, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 11, false, 1, 1);
					break;
			}
			break;
		
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000001:
					if (GET_ITEM_COUNT(Function_12(2), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_12(2)))
					{
						ADD_ITEM(Function_12(2), &Global_54076, 1);
					}
					else
					{
						Function_265(1);
					}
					break;
				
				case 0x00000002:
					Function_266();
					if (GET_ITEM_COUNT(Function_12(1), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_12(1)))
					{
						ADD_ITEM(Function_12(1), &Global_54076, 1);
					}
					else
					{
						Function_265(1);
					}
					break;
				
				case 0x00000003:
					Function_266();
					break;
				
				case 0x00000004:
					if (ACTOR_HAS_WEAPON(&Global_54076, 35))
					{
						if (_GET_AMMO_AMOUNT(&Global_54076, 16, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 16))
						{
							_ADD_AMMO_OF_TYPE(&Global_54076, 16, 5.0f, 1, 1);
						}
					}
					else
					{
						Function_266();
					}
					break;
				
				case 0x0000000A:
					SET_WEAPONENUM_LOCKED(20, 0);
					SET_WEAPONENUM_LOCKED(3, 0);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 20, false, 1, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 3, false, 1, 1);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					Function_266();
					SET_ACTOR_MAX_HEALTH(&Global_54076, GET_ACTOR_MAX_HEALTH(&Global_54076));
					if (GET_ITEM_COUNT(Function_12(2), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_12(2)))
					{
						ADD_ITEM(Function_12(2), &Global_54076, 1);
					}
					else
					{
						Function_265(1);
					}
					break;
				
				case 0x00000002:
					Function_266();
					break;
				
				case 0x00000003:
					Function_266();
					break;
				
				case 0x00000004:
					Function_266();
					SET_ACTOR_MAX_HEALTH(&Global_54076, GET_ACTOR_MAX_HEALTH(&Global_54076));
					if (GET_ITEM_COUNT(Function_12(1), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_12(1)))
					{
						ADD_ITEM(Function_12(1), &Global_54076, 1);
					}
					else
					{
						Function_265(1);
					}
					break;
				
				case 0x0000000A:
					Function_264(11, 0);
					Function_262();
					Function_260();
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
				case 0x00000002:
				case 0x00000003:
				case 0x00000004:
					Function_259();
					break;
				
				case 0x0000000A:
					break;
			}
			break;
	}
	if (!Function_258())
	{
		Function_257();
	}
	return;
}

void Function_257() //Position: 0xD6E4 / 55012
{
	if (!Function_95(0, 0, 1, 1))
	{
		Function_69(1);
		Function_68(1, 8);
	}
	else
	{
		Function_67();
	}
	return;
}

bool Function_258() //Position: 0xD705 / 55045
{
	if (Function_217(Global_43789) || Global_6628)
	{
		return 1;
	}
	return 0;
}

void Function_259() //Position: 0xD71E / 55070
{
	if (Function_246(2, 5, 1) != 1.0f)
	{
		if (!Function_128(1, 8))
		{
			Function_126(1, 8);
			if (!Function_26(Global_119936, 2048))
			{
				Function_16(&Global_54076, 2048, 3, 1);
			}
			if (!Function_26(Global_119936, 4096))
			{
				Function_16(&Global_54076, 4096, 3, 1);
			}
		}
	}
	if (Function_246(2, 6, 1) != 1.0f)
	{
		if (!Function_128(1, 16))
		{
			Function_126(1, 16);
			if (!Function_26(Global_119936, 8192))
			{
				Function_16(&Global_54076, 8192, 3, 1);
			}
			if (!Function_26(Global_119936, 16384))
			{
				Function_16(&Global_54076, 16384, 3, 1);
			}
		}
	}
	if (Function_246(2, 7, 1) != 1.0f)
	{
		if (!Function_128(1, 32))
		{
			Function_126(1, 32);
			if (!Function_26(Global_119936, 32768))
			{
				Function_16(&Global_54076, 32768, 3, 1);
			}
			if (!Function_26(Global_119936, 65536))
			{
				Function_16(&Global_54076, 65536, 3, 1);
			}
		}
	}
	if (Function_246(2, 8, 1) != 1.0f)
	{
		if (!Function_128(1, 64))
		{
			Function_126(1, 64);
			if (!Function_26(Global_119936, 131072))
			{
				Function_16(&Global_54076, 131072, 3, 1);
			}
			if (!Function_26(Global_119936, 262144))
			{
				Function_16(&Global_54076, 262144, 3, 1);
			}
		}
	}
	return;
}

void Function_260() //Position: 0xD869 / 55401
{
	Function_261(41, 3.0f);
	Function_261(40, 3.0f);
	Function_261(42, 3.0f);
	Function_261(39, 3.0f);
	Function_261(43, 3.0f);
	Function_261(44, 3.0f);
	Function_261(34, 3.0f);
	return;
}

void Function_261(bool bParam0, float fParam1) //Position: 0xD899 / 55449
{
	bool bVar0;
	
	switch (bParam0)
	{
		case 0x00000029:
			bVar0 = 8;
			break;
		
		case 0x00000028:
			bVar0 = 7;
			break;
		
		case 0x0000002A:
			bVar0 = 9;
			break;
		
		case 0x00000027:
			bVar0 = 6;
			break;
		
		case 0x0000002B:
			bVar0 = 10;
			break;
		
		case 0x0000002C:
			bVar0 = 11;
			break;
		
		case 0x00000022:
			bVar0 = 15;
			break;
		
		case 0x00000030:
			bVar0 = 5;
			break;
	}
	if (ACTOR_HAS_WEAPON(&Global_54076, bParam0))
	{
		_SET_ACTOR_MAX_AMMO_AMOUNT(&Global_54076, bVar0, (_GET_MAX_AMMO_AMOUNT(&Global_54076, bVar0) * fParam1));
	}
	return;
}

void Function_262() //Position: 0xD92C / 55596
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (Function_263(3) == 10)
	{
		iVar0 = 2;
	}
	iVar1 = Function_12(3);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(6);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(0);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(1);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(8);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(4);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(12);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(5);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(2);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(30);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(31);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(32);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(33);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(34);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(35);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(36);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(37);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(38);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(39);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(40);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(41);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(42);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(43);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(44);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(45);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(46);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(47);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(48);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(49);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(50);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(51);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(7);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_12(9);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	return;
}

int Function_263(int iParam0) //Position: 0xDB8B / 56203
{
	if (0 | Global_53524.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

int Function_264(bool bParam0, bool bParam1) //Position: 0xDBB3 / 56243
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_12(bParam0), Function_77()) >= 0)
		{
			DELETE_ITEM(Function_12(bParam0), Function_77(), 0);
			return 1;
		}
	}
	DELETE_ITEM(Function_12(bParam0), Function_77(), 1);
	return 1;
}

int Function_265(int iParam0) //Position: 0xDBFB / 56315
{
	iParam0 = iParam0;
	if (GET_ITEM_COUNT(Function_12(8), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_12(8)))
	{
		ADD_ITEM(Function_12(8), &Global_54076, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_12(7), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_12(7)))
	{
		ADD_ITEM(Function_12(7), &Global_54076, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_12(2), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_12(2)))
	{
		ADD_ITEM(Function_12(2), &Global_54076, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_12(0), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_12(0)))
	{
		ADD_ITEM(Function_12(0), &Global_54076, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_12(1), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_12(1)))
	{
		ADD_ITEM(Function_12(1), &Global_54076, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_12(3), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_12(3)))
	{
		ADD_ITEM(Function_12(3), &Global_54076, 1);
		return 1;
	}
	if (GET_ITEM_COUNT(Function_12(12), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_12(12)))
	{
		ADD_ITEM(Function_12(12), &Global_54076, 1);
		return 1;
	}
	return 0;
}

void Function_266() //Position: 0xDD08 / 56584
{
	Function_267(41, 30.0f);
	Function_267(40, 30.0f);
	Function_267(42, 30.0f);
	Function_267(39, 30.0f);
	Function_267(43, 30.0f);
	Function_267(44, 30.0f);
	return;
}

void Function_267(bool bParam0, bool bParam1) //Position: 0xDD4A / 56650
{
	bool bVar0;
	
	switch (bParam0)
	{
		case 0x00000029:
			bVar0 = 8;
			break;
		
		case 0x00000028:
			bVar0 = 7;
			break;
		
		case 0x0000002A:
			bVar0 = 9;
			break;
		
		case 0x00000027:
			bVar0 = 6;
			break;
		
		case 0x0000002B:
			bVar0 = 10;
			break;
		
		case 0x0000002C:
			bVar0 = 11;
			break;
		
		case 0x00000022:
			bVar0 = 15;
			break;
		
		case 0x00000030:
			bVar0 = 5;
			break;
	}
	if (ACTOR_HAS_WEAPON(&Global_54076, bParam0))
	{
		if (_GET_AMMO_AMOUNT(&Global_54076, bVar0, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, bVar0))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, bVar0, bParam1, 1, 1);
		}
	}
	return;
}

void Function_268() //Position: 0xDDEC / 56812
{
	if (Function_123(0, 5) == 1)
	{
		Function_269(0, &Global_77932[018] + 8, &Global_77932[018] + 12);
	}
	return;
}

void Function_269(bool bParam0, var uParam1, var uParam2) //Position: 0xDE11 / 56849
{
	int iVar0;
	
	switch (uParam1)
	{
		case 0x00000000:
			if (Function_136(&iLocal_3))
			{
				if (Function_134(&iLocal_3) < 10.0f)
				{
					Global_77932[bParam018].f_36 = 0;
					iVar0 = Global_77932[bParam018].f_36;
					uParam2 = 0.0f;
					Function_133(&iLocal_3);
					Function_132(bParam0, 1);
					Function_131(bParam0, uParam2, 1, iVar0, 4294967295, 4294967295, 22);
				}
			}
			break;
		
		case 0x00000001:
			if (Function_123(bParam0, 10) != 1)
			{
				Global_77932[bParam018].f_36 = 0;
				iVar0 = Global_77932[bParam018].f_36;
				uParam2 = 0.0f;
				Function_132(bParam0, 1);
				Function_131(bParam0, uParam2, 1, iVar0, 4294967295, 4294967295, 22);
			}
			break;
		
		case 0x00000002:
			if (Function_123(bParam0, 10) != 1)
			{
				Global_77932[bParam018].f_36 = 0;
				iVar0 = Global_77932[bParam018].f_36;
				uParam2 = 0.0f;
				Function_132(bParam0, 1);
				Function_131(bParam0, uParam2, 0, iVar0, 4294967295, 4294967295, 0);
			}
			break;
		
		case 0x00000003:
			if (Function_123(bParam0, 10) != 1)
			{
				Global_77932[bParam018].f_36 = 0;
				iVar0 = Global_77932[bParam018].f_36;
				iVar0 = 0;
				uParam2 = 0.0f;
				Function_132(bParam0, 1);
				Function_131(bParam0, uParam2, 0, iVar0, 4294967295, 4294967295, 0);
			}
			break;
		
		case 0x00000004:
			if (Function_136(&iLocal_3))
			{
				if (Function_134(&iLocal_3) < 10.0f)
				{
					Global_77932[bParam018].f_36 = 0;
					iVar0 = Global_77932[bParam018].f_36;
					uParam2 = 0.0f;
					Function_133(&iLocal_3);
					Function_132(bParam0, 1);
					Function_131(bParam0, uParam2, 1, iVar0, 4294967295, 4294967295, 22);
				}
			}
			break;
	}
	return;
}

void Function_270() //Position: 0xDF9F / 57247
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 17);
		ITERATE_IN_LAYOUT(&uVar1, &uVar0);
		iVar4 = START_OBJECT_ITERATOR(&uVar1);
		while (IS_OBJECT_VALID(&iVar4))
		{
			uVar5 = GET_PHYSINST_FROM_OBJECT(&iVar4);
			if (IS_PHYSINST_VALID(&uVar5))
			{
				if (IS_PHYSINST_IN_LEVEL(&uVar5))
				{
					if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(&iVar4), "baitdyna"))
					{
						if (!DECOR_CHECK_EXIST(&iVar4, "bMoved"))
						{
							ACTIVATE_PHYSINST(&uVar5);
							Function_146(&iVar4);
							Function_146(&Global_54076);
							uVar2 = Vector(StackVal, StackVal, StackVal) - Vector(Function_146(&Global_54076), Function_146(&iVar4), StackVal);
							VNORMALIZE(&uVar2);
							SET_PROP_VELOCITY(&uVar5, &uVar2);
							DECOR_SET_FLOAT(&iVar4, "bMoved", GET_CURRENT_GAME_TIME());
							uVar6 = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, "fuse_fx", "muzzle_dynamite", &iVar4, Vector(0.0f, 0,26f, 0,013f), 1, &iVar4);
							if (IS_OBJECT_VALID(&uVar6))
							{
								Function_29();
								UNK_0x6745191B(&uVar6, Function_29());
							}
						}
						else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&iVar4, "bMoved")) <= 10.0f)
						{
							Function_146(&iVar4);
							uVar7 = Function_146(&iVar4);
							Function_28(&uVar7, "DynamiteExplosion", &Global_54076, 0);
							DESTROY_OBJECT(&iVar4);
						}
					}
				}
			}
			iVar4 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return;
}

void Function_271(int iParam0) //Position: 0xE112 / 57618
{
	if (!IS_ITERATOR_VALID(&Global_39613))
	{
		if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("Formations")))
		{
			Global_39613 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("Formations"));
		}
	}
	if (!IS_ITERATOR_VALID(&Global_39613))
	{
		return;
	}
	ITERATE_EVERYWHERE(&Global_39613);
	ITERATE_ON_OBJECT_TYPE(&Global_39613, 3);
	if (!&iParam0 != "")
	{
		ITERATE_IN_SET(&Global_39613, &iParam0);
	}
	else
	{
		ITERATE_IN_LAYOUT(&Global_39613, GET_EVENT_LAYOUT());
	}
	return;
}

void Function_272() //Position: 0xE18C / 57740
{
	Function_253();
	Global_39920 = CREATE_OBJECTSET_IN_LAYOUT("DeadZombieTracker", &Global_10992, 4294967295, 1);
	return;
}

void Function_273(struct<57> Param0) //Position: 0xE1B6 / 57782
{
	strcpy(&Param0 + 24, "QUESTLAUNCHER", 16);
	if (Global_6666)
	{
		Param0 = 70545;
		(&Param0 + 8) = 70538;
		*(&Param0 + 16) = 70545;
	}
	else
	{
		Param0 = 70532;
		*(&Param0 + 8) = 57888;
		*(&Param0 + 16) = 57882;
	}
	Param0.f_56 = 0;
	return;
}

void Function_274() //Position: 0xE21A / 57882
{
	return;
}

int Function_275() //Position: 0xE220 / 57888
{
	int iVar0;
	
	if (!Global_6607)
	{
		return 0;
	}
	if (!Function_111(10) && !Function_1(1048576))
	{
		return 0;
	}
	iVar0 = StackVal;
	while (iVar0 < (38 - 1))
	{
		Function_276(&(Global_99725[iVar043]), iVar0);
		iVar0++;
	}
	Global_99717.f_8 = 0;
	return 0;
}

void Function_276(struct<233> Param0) //Position: 0xE272 / 57970
{
	bool bVar0;
	struct<2> Var1;
	bool bVar3;
	bool bVar4;
	
	if (Function_9(Param0.f_228, 128))
	{
		Function_323(&Param0);
		UI_POP("nCutscenes");
		Function_21(&Param0 + 228, 128);
	}
	if (!(Function_322(bParam1) || Function_321(bParam1)))
	{
		if (!Function_322(bParam1))
		{
		}
		if (Function_321(bParam1))
		{
		}
		return;
	}
	if ((((Global_6627 || Global_6646) || Global_6648) || IS_ACTOR_VALID(GET_LINKED_ANIM_TARGET(&Global_54076))) || Function_317(&Global_54076, 0, 1))
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 304))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 304);
		}
		return;
	}
	if (Function_321(bParam1) || Param0.f_232)
	{
		bVar0 = (((Global_6623 || Global_6625) || Global_6635) || Global_53524.f_28);
		if (!bVar0)
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 304))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 304);
			}
			Function_316(&Param0, bParam1);
		}
		return;
	}
	switch (Param0)
	{
		case 0x00000001:
			if (!IS_ACTOR_VALID(&Param0 + 312))
			{
				return;
			}
			if (!IS_GRINGO_VALID(&Param0 + 320) && UNK_0x214AFB8C(&Param0 + 120))
			{
				return;
			}
			if (!Function_308(&Param0, bParam1, 0))
			{
				return;
			}
			Function_289(&Param0, bParam1);
			break;
		
		case 0x00000002:
			if (!IS_OBJECT_VALID(&Param0 + 328))
			{
				return;
			}
			break;
		
		default:
			break;
	}
	Function_281(&Param0, bParam1, 0x41f00000, 0x42200000, 0);
	Var1 = *(&Param0 + 184);
	Var1.f_4 = (StackVal + 1,25f);
	bVar3 = IS_POSITION_INDOORS(Global_54078);
	bVar4 = IS_POSITION_INDOORS(Var1);
	if (bVar3 != bVar4)
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 304))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 304);
		}
		return;
	}
	if (IS_OBJECT_VALID(&Param0 + 288))
	{
		switch (Param0)
		{
			case 0x00000001:
				if (bParam1 == &Param0 + 36)
				{
					if (GATEWAY_UPDATE(&Param0 + 288))
					{
						if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 304))
						{
							if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&Param0 + 304))
							{
								RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 304);
								Function_280(&Param0);
								Function_316(&Param0, bParam1);
								UI_PUSH("nCutscenes");
							}
						}
						else if (HAS_STRING_TABLE_LOADED("dlc_zombiepack_rcm"))
						{
							*(&Param0 + 304) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME(&Param0 + 44, GATEWAY_GET_VOLUME(&Param0 + 288), 30, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
						}
					}
					else if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 304))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 304);
					}
				}
				else if (Function_277(&Param0 + 288, 0, 1, 1, 0, 1))
				{
					Function_280(&Param0);
					Function_316(&Param0, bParam1);
				}
				break;
			
			case 0x00000002:
			case 0x00000003:
				if (GATEWAY_UPDATE(&Param0 + 288))
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 304))
					{
						if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&Param0 + 304))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 304);
							Function_280(&Param0);
							Function_316(&Param0, bParam1);
							UI_PUSH("nCutscenes");
						}
					}
					else if (HAS_STRING_TABLE_LOADED("dlc_zombiepack_rcm"))
					{
						*(&Param0 + 304) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME(&Param0 + 44, GATEWAY_GET_VOLUME(&Param0 + 288), 30, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
					}
				}
				else if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 304))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 304);
				}
				break;
			
			default:
				break;
		}
	}
	else if (((Global_6623 || Global_6625) || Global_6635) || Global_53524.f_28)
	{
		if (!Function_9(Param0.f_228, 4096) && !Global_99146)
		{
			if (VDIST(Global_54078, *(&Param0 + 184)) > Param0.f_180)
			{
				Function_87(&Param0 + 228, 4096);
				PRINT_HELP_FORMAT(7.0f, "tutorial_rcm_player_busy", "", "", "", "", 0, 0, 0);
			}
		}
	}
	return;
}

bool Function_277(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xE65A / 58970
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&uParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_GATEWAY_AND_STOP_ACTOR");
		return 0;
	}
	if (&bParam4)
	{
		if (DECOR_CHECK_EXIST(&uParam0, "gaveDismount"))
		{
			uVar0 = GATEWAY_GET_ACTOR(&uParam0);
			if (IS_OBJECT_VALID(&uVar0))
			{
				uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
				if (!IS_ACTOR_RIDING(&uVar1))
				{
					DECOR_REMOVE(&uParam0, "gaveDismount");
					return 1;
				}
				return 0;
			}
			return 1;
		}
	}
	if (GATEWAY_UPDATE(&uParam0))
	{
		uVar0 = GATEWAY_GET_ACTOR(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
			if (IS_ACTOR_PLAYER(&uVar1))
			{
				SET_PLAYER_CONTROL(0, 0, &iParam1, &iParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && iParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (&bParam3)
			{
				Function_279(&uVar1, &fParam5);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				if (Function_8(&uVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(&uVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(&uVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(&uVar1))
			{
				bVar2 = TASK_SEQUENCE_OPEN();
				if (Function_8(&uVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_278(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_278(&uVar5, &iVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(false, &iVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, bVar2);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
				DECOR_SET_FLOAT(&uParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_6657 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int Function_278(vector3 vParam0) //Position: 0xE88F / 59535
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_85(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_85(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_279(var uParam0, bool bParam1) //Position: 0xE905 / 59653
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_RIDING(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&uParam0))
	{
		iVar1 = GET_VEHICLE(&uParam0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			STOP_VEHICLE(&iVar1);
		}
	}
	else if (!&bParam1 || Function_8(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

void Function_280(int iParam0) //Position: 0xE96F / 59759
{
	int iVar0;
	
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	ENABLE_USE_CONTEXTS(0);
	iVar0 = Global_39922.f_88 & 16384;
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	if (IS_ACTOR_VALID(&iParam0 + 312))
	{
		SET_ACTOR_INVULNERABILITY(&iParam0 + 312, true);
		MEMORY_CLEAR_EVENTS(&iParam0 + 312, 1);
	}
	SET_ACTOR_INVULNERABILITY(&Global_54076, true);
	return;
}

int Function_281(int iParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0xE9C3 / 59843
{
	bool bVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	
	if (!HUD_IS_FADING() && !HUD_IS_FADED())
	{
		if (!(((Global_6623 || Global_6625) || Global_6635) || Global_53524.f_28))
		{
			if (UNK_0x214AFB8C(&iParam0 + 136))
			{
				bVar0 = VDIST(Global_54078, *(&iParam0 + 184));
				if (&Global_99717 + 16 == fParam1)
				{
					uVar1 = Global_99717.f_28;
					uVar2 = Function_283(StackVal, GET_ASSET_NAME(&iParam0 + 136, 9), &uVar1, *(&iParam0 + 184), 0, &fParam2, &fParam3, 2, 1, 2, 2, 0, 1);
					Global_99717.f_28 = uVar1;
					Global_99717.f_24 = bVar0;
					if (bVar0 < &fParam3)
					{
						*(&Global_99717 + 16) = 4294967295;
						Global_99717.f_24 = 999.0f;
					}
					return uVar2;
				}
				if (bVar0 > &fParam2)
				{
					if (&Global_99717 + 16 != 4294967295 || (&Global_99717 + 16 == fParam1 && bVar0 > Global_99717.f_24))
					{
						iVar3 = Global_99717.f_28;
						if (iVar3 == 0)
						{
							if (GET_ACTOR_ENUM(&Global_54076) == 1)
							{
								CUTSCENE_MANAGER_SET_WAS_JOHN_NOW_JACK_IN_RCM_CUTSCENE(Function_282(&iParam0));
							}
						}
						if (IS_ACTORSET_VALID(&uParam4))
						{
							bVar4 = false;
							while (bVar4 <= GET_ACTORSET_SIZE(&uParam4))
							{
								uVar5 = GET_ACTOR_FROM_ACTORSET(&uParam4, bVar4);
								if (IS_ACTOR_VALID(&uVar5))
								{
									CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(&uVar5), &uVar5);
								}
								bVar4++;
							}
						}
						uVar6 = Function_283(StackVal, GET_ASSET_NAME(&iParam0 + 136, 9), &iVar3, *(&iParam0 + 184), 0, &fParam2, &fParam3, 2, 1, 2, 2, 0, 1);
						Global_99717.f_28 = iVar3;
						*(&Global_99717 + 16) = fParam1;
						Global_99717.f_24 = bVar0;
						return uVar6;
					}
				}
			}
		}
	}
	return 0;
}

int Function_282(struct<257> Param0) //Position: 0xEB4E / 60238
{
	if (Param0.f_256 != 4294967295)
	{
		if (Global_116927[Param0.f_2566].f_36 != TO_FLOAT(false))
		{
			return 1;
		}
		return Function_282(&(Global_99725[Param0.f_25643]));
	}
	return 0;
}

int Function_283(var uParam0, int iParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0xEB8A / 60298
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_286(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_288()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
	{
		if (!&bParam4 && (HUD_IS_FADED() || HUD_IS_FADING()))
		{
			return 0;
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && iParam1 == 0)
		{
			if (iParam1 != 5)
			{
				iParam1 = 0;
				return 0;
			}
		}
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			iParam1 = 0;
			return 0;
		}
		if ((iParam12 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&Var16, &Var18))
			{
				if (!Function_85(StackVal, Var16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&Var18, (360.0f / 6,28f));
						STREAMING_OVERRIDE_MAIN_POI(Var16, Var18);
					}
					else
					{
						STREAMING_LOAD_SCENE_EXT(Var16, Var18, 1);
					}
				}
			}
		}
		switch (iParam1)
		{
			case 0x00000000:
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&uParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					iParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0))
				{
					iParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(&uParam0, 0, &iParam7, &iParam8, &iParam9, &iParam10);
					iParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_284();
					CUTSCENE_MANAGER_RESUME_LOADING();
					iParam1 = 3;
				}
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					iParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				break;
			
			default:
				iParam1 = 0;
				break;
		}
	}
	else if ((!Function_286(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_288()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		iParam1 = 0;
	}
	else if (!Function_286(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_284() //Position: 0xEDF2 / 60914
{
	bool bVar0;
	struct<2> Var1;
	struct<5> Var3;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &Var1, &Var3))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bVar0, &Var5, &Var7);
			Function_285(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_285(char* cParam0) //Position: 0xEE46 / 60998
{
	char* cVar0[64];
	
	strcpy(&cVar0, "CUT_ACTOR: ", 64);
	stradd(&cVar0, &cParam0, 64);
	strcpy(&cVar0, "start pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "start heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam3, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam6, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
}

bool Function_286(var uParam0, struct<2> Param1, float fParam3) //Position: 0xEF6F / 61295
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_287(&uParam0);
		if (VDIST(Function_287(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

struct<8> Function_287(var uParam0) //Position: 0xEFFB / 61435
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

int Function_288() //Position: 0xF067 / 61543
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_289(struct<229> Param0) //Position: 0xF076 / 61558
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<2> Var3;
	float fVar5;
	float fVar6;
	struct<9> Var7;
	
	if (Function_9(Param0.f_228, 2048))
	{
		return;
	}
	bVar0 = (((Global_6623 || Global_6625) || Global_6635) || Global_53524.f_28);
	bVar1 = IS_OBJECT_VALID(&Param0 + 288);
	if (!bVar1 && !bVar0)
	{
		iVar2 = 6;
		if (GET_TARGETED_JOURNAL_ENTRY() == Param0.f_224)
		{
			iVar2 = 7;
		}
		Function_299(&Param0, iVar2);
	}
	else if (bVar0 && bVar1)
	{
		DESTROY_OBJECT(&Param0 + 288);
	}
	if (IS_BLIP_VALID(&Param0 + 272))
	{
		if (Param0.f_152 == 4294967295)
		{
		}
		else if (GET_BLIP_ICON(&Param0 + 272) == 440)
		{
			Var3 = *(&Param0 + 184);
			Var3.f_4 = (StackVal + 0,5f);
			if (iParam1 == 5)
			{
				Var3.f_4 = (StackVal + 1,5f);
				if (StackVal || !Function_298(VDIST(Global_54078, *(&Param0 + 184)) < 50.0f, Var3, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					return;
				}
			}
			if (iParam1 == 17)
			{
				Var3.f_4 = (StackVal + 5.0f);
				if (StackVal || !Function_298(VDIST(Global_54078, *(&Param0 + 184)) < 40.0f, Var3, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					return;
				}
			}
			if (iParam1 == 13)
			{
				return;
			}
			if (iParam1 > 2 || iParam1 < 5)
			{
				if (!Function_298(StackVal, Var3, 0x3f800000, 0x42960000, 1, 1, 0) && VDIST(Global_54078, *(&Param0 + 184)) < 42.0f)
				{
					return;
				}
			}
			Global_116927[iParam16].f_20 = 1;
			REMOVE_BLIP(&Param0 + 272);
		}
		else if (bVar0)
		{
			REMOVE_BLIP(&Param0 + 272);
			REMOVE_BLIP(&Param0 + 280);
		}
	}
	if (!IS_BLIP_VALID(&Param0 + 272))
	{
		if (bVar0)
		{
			if (iParam1 == &Param0 + 36)
			{
				if (Function_297(Param0.f_216))
				{
					Function_294(StackVal, Param0.f_216, 23, *(&Param0 + 184), 63);
				}
				else
				{
					Function_294(StackVal, Global_43789, 23, *(&Param0 + 184), 63);
				}
			}
		}
		else
		{
			if (iParam1 == &Param0 + 36)
			{
				if (Function_297(Param0.f_216))
				{
					Function_290(StackVal, Param0.f_216, 23, Param0.f_184);
				}
				else
				{
					Function_290(StackVal, Global_43789, 23, Param0.f_184);
				}
				Function_21(&Param0 + 228, 4096);
			}
			if (Param0.f_152 == 4294967295)
			{
				fVar5 = 0,5f;
				fVar6 = 70.0f;
				vVar7 = *(&Param0 + 196);
				vVar7 = (vVar7.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
				vVar7.f_8 = (vVar7.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
				*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&vVar7, 440, 0.0f, 3, 7);
				SET_BLIP_SCALE(&Param0 + 272, fVar6);
				SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
				SET_BLIP_COLOR(&Param0 + 272, 0,63f, 0,85f, 0.0f, fVar5);
				SET_BLIP_PRIORITY(&Param0 + 272, 3);
			}
			else if (iParam1 == 23 || !IS_OBJECT_VALID(&Param0 + 328))
			{
				if ((iParam1 != 5 && VDIST(Global_54078, *(&Param0 + 184)) < 40.0f) || (iParam1 != 17 && VDIST(Global_54078, *(&Param0 + 184)) < 40.0f))
				{
					fVar9 = 0,5f;
					fVar10 = 50.0f;
					vVar11 = *(&Param0 + 196);
					vVar11 = (vVar11.x + RAND_FLOAT_RANGE(5.0f, 15.0f));
					vVar11.f_8 = (vVar11.z + RAND_FLOAT_RANGE(5.0f, 15.0f));
					*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&vVar11, 440, 0.0f, 3, 7);
					SET_BLIP_SCALE(&Param0 + 272, fVar10);
					SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
					SET_BLIP_COLOR(&Param0 + 272, 0,63f, 0,85f, 0.0f, fVar9);
					SET_BLIP_PRIORITY(&Param0 + 272, 3);
				}
				else if (iParam1 == 13)
				{
					fVar13 = 0,5f;
					fVar14 = 30.0f;
					*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&Param0 + 196, 440, 0.0f, 3, 7);
					SET_BLIP_SCALE(&Param0 + 272, fVar14);
					SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
					SET_BLIP_COLOR(&Param0 + 272, 0,63f, 0,85f, 0.0f, fVar13);
					SET_BLIP_PRIORITY(&Param0 + 272, 3);
				}
				else
				{
					*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&Param0 + 184, Param0.f_152, 0.0f, 3, 7);
					SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
					*(&Param0 + 280) = ADD_BLIP_FOR_COORD(&Param0 + 184, Param0.f_152, 0.0f, 3, 7);
					SET_BLIP_NAME(&Param0 + 280, &Param0 + 4);
					if (iParam1 == 19)
					{
						SET_BLIP_COLOR(&Param0 + 272, 1.0f, 1.0f, 1.0f, 1.0f);
						SET_BLIP_COLOR(&Param0 + 280, 1.0f, 1.0f, 1.0f, 1.0f);
					}
					else if (iParam1 == 20)
					{
						SET_BLIP_COLOR(&Param0 + 272, 0,34f, 0,58f, 0,74f, 1.0f);
						SET_BLIP_COLOR(&Param0 + 280, 0,34f, 0,58f, 0,74f, 1.0f);
					}
					else if (iParam1 == 21)
					{
						SET_BLIP_COLOR(&Param0 + 272, 0,79f, 0,69f, 0.0f, 1.0f);
						SET_BLIP_COLOR(&Param0 + 280, 0,79f, 0,69f, 0.0f, 1.0f);
					}
					else
					{
						SET_BLIP_COLOR(&Param0 + 272, 0,63f, 0,85f, 0.0f, 1.0f);
						SET_BLIP_COLOR(&Param0 + 280, 0,63f, 0,85f, 0.0f, 1.0f);
					}
					if (Param0.f_152 == 312 || Param0.f_152 == 311)
					{
						UNK_0xFF3DB575(&Param0 + 280, 1);
						SET_BLIP_PRIORITY(&Param0 + 280, 3);
						SET_BLIP_MAX_DISTANCE(&Param0 + 272, 3.0f);
					}
				}
			}
		}
	}
	return;
}

void Function_290(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xF5E2 / 62946
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal && Global_15863[iVar02] != iParam0 != iParam1)
			{
				Global_15863[iVar02] = 4294967294;
				Global_15863[iVar02].f_4 = 0;
				Global_15863[iVar02].f_8 = 0;
				if (IS_BLIP_VALID(&(Global_16865[iVar0])))
				{
					REMOVE_BLIP(&(Global_16865[iVar0]));
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_292(Function_293(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_292(Function_293(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_292(StackVal);
				Var1 = Function_292(StackVal);
				if (Function_291(StackVal, StackVal, Var1, Var3))
				{
					Global_15863[iVar02] = 4294967294;
					Global_15863[iVar02].f_4 = 0;
					Global_15863[iVar02].f_8 = 0;
					if (IS_BLIP_VALID(&(Global_16865[iVar0])))
					{
						REMOVE_BLIP(&(Global_16865[iVar0]));
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_291(struct<2> Param0, struct<2> Param2) //Position: 0xF6ED / 63213
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_292(int iParam0) //Position: 0xF719 / 63257
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	
	bVar2 = iParam0 & 32767;
	bVar3 = SHIFT_RIGHT(iParam0, 15) & 32767;
	Var0 = TO_FLOAT(bVar2);
	Var0.f_8 = TO_FLOAT(bVar3);
	if (iParam0 & 1073741824 == 0)
	{
		Var0 = (Var0 * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		Var0.f_8 = (StackVal * -1.0f);
	}
	return StackVal, Var0;
}

int Function_293(vector3 vParam0) //Position: 0xF770 / 63344
{
	bool bVar0;
	
	bVar0 = ((ROUND(FABS(vParam0.x)) && 32767) || SHIFT_LEFT((ROUND(FABS(vParam0.z)) && 32767), 15));
	if (vParam0.x < 0.0f)
	{
		bVar0 = (bVar0 || 1073741824);
	}
	if (vParam0.z < 0.0f)
	{
		bVar0 = (bVar0 || 2147483648);
	}
	return bVar0;
}

int Function_294(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0xF7BE / 63422
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	
	if (!Function_297(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_85(StackVal, Param2))
	{
		return 0;
	}
	iVar2 = Function_296(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_293(StackVal, Param2);
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal != iParam1 && Global_15863[iVar02] != iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	else
	{
		Function_292(uVar3);
		Var6 = Function_292(uVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_292(StackVal);
				Var4 = Function_292(StackVal);
				if (Function_291(StackVal, StackVal, Var4, Var6))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	if (iVar1 != 4294967295)
	{
		Global_15863[iVar12] = iParam0;
		Global_15863[iVar12].f_4 = iParam1;
		Global_15863[iVar12].f_8 = uVar3;
		Global_15863[iVar12].f_12 = &iParam4;
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_295(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(&(Global_16865[iVar1]), 1.0f, 1.0f, 1.0f, 0,5f);
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_CHANCE");
		}
		else if (iParam1 == 11)
		{
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_HORSEBREAKING");
		}
		else if (iParam1 == 24)
		{
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_CHANCE");
		}
		UNK_0xFF3DB575(&(Global_16865[iVar1]), 1);
		SET_BLIP_PRIORITY(&(Global_16865[iVar1]), true);
		return iVar1;
	}
	return 0;
}

int Function_295(int iParam0) //Position: 0xF9A7 / 63911
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
			return 433;
			break;
		
		case 0x00000003:
			return 349;
			break;
		
		case 0x00000004:
			return 327;
			break;
		
		case 0x00000005:
			return 351;
			break;
		
		case 0x00000006:
			return 350;
			break;
		
		case 0x00000008:
			return 426;
			break;
		
		case 0x00000009:
			return 353;
			break;
		
		case 0x0000000A:
			return 341;
			break;
		
		case 0x0000000B:
			return 327;
			break;
		
		case 0x0000000C:
			return 397;
			break;
		
		case 0x0000000D:
			return 399;
			break;
		
		case 0x0000000E:
			return 398;
			break;
		
		case 0x0000000F:
			return 520;
			break;
		
		case 0x00000010:
			return 326;
			break;
		
		case 0x00000011:
			return 420;
			break;
		
		case 0x00000012:
			return 421;
			break;
		
		case 0x00000013:
			return 346;
			break;
		
		case 0x00000014:
			return 354;
			break;
		
		case 0x00000015:
			return 525;
			break;
		
		case 0x00000016:
			return 383;
			break;
		
		case 0x00000017:
			return 411;
			break;
		
		case 0x00000018:
			return 411;
			break;
		
		default:
			break;
	}
	return 327;
}

int Function_296(int iParam0) //Position: 0xFADE / 64222
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
		case 0x00000009:
			return 1;
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x00000017:
			return 2;
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000015:
			return 3;
			break;
		
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			return 6;
			break;
		
		case 0x00000016:
			return 0;
			break;
		
		case 0x00000013:
			return 5;
			break;
		
		case 0x00000014:
			return 4;
			break;
		
		default:
			break;
	}
	return 0;
}

bool Function_297(int iParam0) //Position: 0xFB96 / 64406
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_298(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xFBAC / 64428
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &iParam2, &iParam3, &iParam4, &iParam5, &iParam6);
}

void Function_299(struct<229> Param0) //Position: 0xFBCD / 64461
{
	float fVar0;
	int iVar1;
	
	if (IS_OBJECT_VALID(&Param0 + 288))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_9(Param0.f_228, 2048) || Global_6623) || Global_6625) || Global_6635) || Global_53524.f_28)
	{
		return;
	}
	fVar0 = Param0.f_180;
	*(&Param0 + 288) = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_31(), *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0), 0, &Global_54076, iParam1, Param0.f_176, 0, 1, 1);
	Function_300(&Param0);
	iVar1 = GATEWAY_GET_MARKER(&Param0 + 288);
	if (IS_OBJECT_VALID(&iVar1))
	{
		DESTROY_OBJECT(&iVar1);
	}
	return;
}

void Function_300(struct<217> Param0) //Position: 0xFC9D / 64669
{
	float fVar0;
	var uVar1;
	
	if (IS_VOLUME_VALID(&Param0 + 336))
	{
		return;
	}
	*(&Param0 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_31(), 2, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 2.0f, 2.0f));
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 336);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 336);
	fVar0 = 20.0f;
	if (Function_297(Param0.f_216))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
	uVar1 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 336, Function_31(), 2, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0));
	DECOR_SET_INT(&uVar1, "category", 512);
	Function_301(&uVar1, 0);
	return;
}

int Function_301(var uParam0, int iParam1) //Position: 0xFD5B / 64859
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(&uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(&uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(&uParam0, &uVar1);
	Function_305(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_302(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_302(int iParam0, var uParam1, struct<2> Param2) //Position: 0xFEC5 / 65221
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_303("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 3, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

struct<32> Function_303(char* cParam0) //Position: 0xFF6D / 65389
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_304("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_304(char* cParam0) //Position: 0xFFD9 / 65497
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_305(int iParam0) //Position: 0x10000 / 65536
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					GET_VOLUME_CENTER(&Global_39621[iVar05] + 16, &Var1);
					if (IS_BLIP_VALID(&Global_39621[iVar05] + 8))
					{
						REMOVE_BLIP(&Global_39621[iVar05] + 8);
					}
					if (!IS_ACTOR_VALID(&Global_54076))
					{
						Function_307(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_306(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_307(iVar0);
						}
					}
					else if (Function_306(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_307(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &iParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&iParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
				}
			}
		}
		else
		{
			Function_307(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_306(var uParam0, struct<2> Param1) //Position: 0x1016E / 65902
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_287(&uParam0);
		Var0 = Function_287(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_307(int iParam0) //Position: 0x101E5 / 66021
{
	if (IS_VOLUME_VALID(&Global_39621[iParam05] + 24))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	}
	if (IS_BLIP_VALID(&Global_39621[iParam05] + 8))
	{
		REMOVE_BLIP(&Global_39621[iParam05] + 8);
	}
	RELEASE_VOLUME(&Global_39621[iParam05] + 16);
	RELEASE_VOLUME(&Global_39621[iParam05] + 24);
	return;
}

bool Function_308(struct<237> Param0) //Position: 0x1024D / 66125
{
	char* cVar0[64];
	bool bVar16;
	bool bVar17;
	bool bVar18;
	var uVar19;
	bool bVar20;
	bool bVar21;
	
	if (!((((Global_99146 || Global_6627) || Global_6610) || Param0.f_236) || GET_ACTOR_INVULNERABILITY(&Param0 + 312)))
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, *(&Param0 + 4), 16);
		if (!Function_315(&Param0))
		{
			stradd(&cVar0, ": DA: Quest helper now hostile with player.", 64);
			TASK_CLEAR(&Param0 + 312);
			Function_310(&Param0, bParam1, 0, 0, &bParam2);
			bVar16 = IS_JOURNAL_ENTRY_IN_LIST(Global_99725[bParam143].f_224, 1);
			if (!bVar16)
			{
				bVar17 = IS_JOURNAL_ENTRY_IN_LIST(Global_99725[bParam143].f_224, 0);
				if (bVar17)
				{
					Function_309(bParam1, 1);
				}
				else
				{
					Function_102("RCM_NPC_Attack_Fail", 10.0f, 1, 0, 0, 1, 0);
					Global_116927[bParam16] = 7;
					*(&Global_116927[bParam16] + 8) = GET_TIME_OF_DAY();
					ADD_TIME_USING_TIME_OF_DAY(&Global_116927[bParam16] + 8, &Global_99725[bParam143] + 160);
				}
			}
			return 0;
		}
		if (IS_AI_ACTOR_ENGAGED_IN_COMBAT(&Param0 + 312) && GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) == &Param0 + 312)
		{
			stradd(&cVar0, ": DA: Quest helper is now in combat.", 64);
			TASK_CLEAR(&Param0 + 312);
			Function_310(&Param0, bParam1, 0, 0, &bParam2);
			return 0;
		}
		if (FIRE_IS_ACTOR_ON_FIRE(&Param0 + 312))
		{
			stradd(&cVar0, "DA: Quest helper is ablaze.", 64);
			TASK_CLEAR(&Param0 + 312);
			Function_310(&Param0, bParam1, 0, 0, &bParam2);
			return 0;
		}
		if (IS_ACTOR_DEAD(&Param0 + 312))
		{
			stradd(&cVar0, "DA: Quest helper is dead.", 64);
			TASK_CLEAR(&Param0 + 312);
			Function_310(&Param0, bParam1, 0, 0, &bParam2);
			bVar18 = false;
			uVar19 = GET_LAST_ATTACKER(&Param0 + 312);
			if (IS_ACTOR_VALID(&uVar19))
			{
				if (IS_ACTOR_LOCAL_PLAYER(&uVar19))
				{
					bVar18 = true;
				}
			}
			bVar20 = IS_JOURNAL_ENTRY_IN_LIST(Global_99725[bParam143].f_224, 1);
			if (!bVar20)
			{
				bVar21 = IS_JOURNAL_ENTRY_IN_LIST(Global_99725[bParam143].f_224, 0);
				if (bVar18)
				{
					if (bVar21)
					{
						Function_309(bParam1, 1);
					}
					else
					{
						stradd(&cVar0, "DA: Printing help message RCM_NPC_Attack_Fail", 64);
						Function_102("RCM_NPC_Attack_Fail", 10.0f, 1, 0, 0, 1, 0);
						Global_116927[bParam16] = 7;
						*(&Global_116927[bParam16] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_116927[bParam16] + 8, &Global_99725[bParam143] + 160);
					}
				}
				else
				{
					Function_102("RCM_NPC_Dead", 10.0f, 1, 0, 0, 1, 0);
					Global_116927[bParam16] = 7;
					*(&Global_116927[bParam16] + 8) = GET_TIME_OF_DAY();
					ADD_TIME_USING_TIME_OF_DAY(&Global_116927[bParam16] + 8, &Global_99725[bParam143] + 160);
				}
			}
			return 0;
		}
		if (AI_HAS_ACTOR_BUMPED_INTO_ME(&Param0 + 312, &Global_54076, 5.0f) && AI_WAS_PUSHED_OVER(&Param0 + 312, 5.0f))
		{
			stradd(&cVar0, "DA: Quest helper has been bumped.", 64);
			Function_310(&Param0, bParam1, 0, 0, &bParam2);
			TASK_CLEAR(&Param0 + 312);
			TASK_PRIORITY_SET(&Param0 + 312, 2);
			TASK_FLEE_ACTOR(&Param0 + 312, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_OVERRIDE_SET_MOVETYPE(&Param0 + 312, true);
			if (IS_JOURNAL_ENTRY_IN_LIST(Global_99725[bParam143].f_224, 0))
			{
				PRINT_OBJECTIVE_FORMAT(7,5f, "RCM_Quest_Disabled", &Param0 + 4, "", "", "", 0, 2, 0, 0, 0);
				DEACTIVATE_JOURNAL_ENTRY(Param0.f_224, 1);
				SET_JOURNAL_ENTRY_PROGRESS(Param0.f_224, -1.0f, false, "RCM_InactiveJournal");
			}
			Global_116927[bParam16] = 7;
			*(&Global_116927[bParam16] + 8) = GET_TIME_OF_DAY();
			ADD_TIME_USING_TIME_OF_DAY(&Global_116927[bParam16] + 8, &Global_99725[bParam143] + 160);
		}
	}
	return 1;
}

void Function_309(int iParam0, bool bParam1) //Position: 0x106AA / 67242
{
	char* cVar0[32];
	
	Global_116927[iParam06] = 7;
	*(&Global_116927[iParam06] + 8) = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_116927[iParam06] + 8, &Global_99725[iParam043] + 160);
	PRINT_OBJECTIVE_FORMAT(7,5f, "RCM_Quest_Fail", &Global_99725[iParam043] + 4, "", "", "", 0, 2, 0, 0, 0);
	if (&bParam1)
	{
		switch (Global_43787)
		{
			case 0x00000000:
				strcpy(&cVar0, "FTR", 32);
				break;
			
			case 0x00000001:
				strcpy(&cVar0, "MEX", 32);
				break;
			
			case 0x00000002:
				strcpy(&cVar0, "NOR", 32);
				break;
			
			default:
				PRINTSTRING("Unknown territory");
				PRINTINT(Global_43787);
				LOG_ERROR("Unknown geographic territory in MARK_QUEST_AS_FAILED");
				break;
		}
		stradd(&cVar0, "_RCM_FAIL_SONG_01", 32);
		AUDIO_MUSIC_ONE_SHOT(&cVar0, 0, 0, 0, 0, 0);
		SAY_SINGLE_LINE_CONTEXT(&Global_54076, 394, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
	}
	if (!Function_26(Global_119934, 8192))
	{
		Function_16(&Global_54076, 8192, 1, 0);
	}
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_99725[iParam043].f_224, 0))
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_99725[iParam043].f_224, -1.0f, false, "RCM_FailedJournal");
	}
	return;
}

void Function_310(struct<229> Param0) //Position: 0x10833 / 67635
{
	int iVar0;
	
	iVar0 = 0;
	iParam2 = &iParam2;
	if (IS_BLIP_VALID(&Param0 + 272))
	{
		if ((!Function_9(Global_99725[iParam143].f_228, 64) || Function_7(iParam1)) || Function_314(iParam1))
		{
			if (((((iParam1 != 2 || iParam1 != 6) || iParam1 != 8) || iParam1 != 24) && !Function_7(iParam1)) && !Function_314(iParam1))
			{
			}
			else
			{
				if (IS_BLIP_VALID(&Param0 + 272))
				{
					REMOVE_BLIP(&Param0 + 272);
				}
				if (IS_BLIP_VALID(&Param0 + 280))
				{
					REMOVE_BLIP(&Param0 + 280);
				}
			}
		}
	}
	else
	{
		if (Function_9(Global_99725[iParam143].f_228, 64))
		{
			Function_312(&Param0, iParam1);
		}
		if (!(Function_7(iParam1) || Function_314(iParam1)))
		{
			DEACTIVATE_JOURNAL_ENTRY(Param0.f_224, 0);
			SET_JOURNAL_ENTRY_PROGRESS(Param0.f_224, -1.0f, true, 0);
		}
	}
	if (IS_OBJECT_VALID(&Param0 + 288))
	{
		DESTROY_OBJECT(&Param0 + 288);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 304))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 304);
	}
	if (IS_GRINGO_VALID(&Param0 + 320))
	{
		if (!Function_9(Param0.f_228, 32))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&Param0 + 320));
		}
		else
		{
			(&Param0 + 320) = "";
		}
		Function_21(&Param0 + 228, 32);
	}
	if (IS_OBJECT_VALID(&Param0 + 328))
	{
		RELEASE_OBJECT_REF(&Param0 + 328);
	}
	if (IS_VOLUME_VALID(&Param0 + 336))
	{
		DESTROY_VOLUME(&Param0 + 336);
	}
	if (&bParam4)
	{
		Function_311(&Param0);
	}
	Function_21(&Param0 + 228, 256);
	switch (Global_116927[iParam16])
	{
		case 0x00000002:
		case 0x00000005:
		case 0x00000003:
			Global_116927[iParam16] = 1;
			break;
		
		default:
			break;
	}
	if (IS_SCRIPT_VALID(&Param0 + 296) && iParam3)
	{
		TERMINATE_SCRIPT(&Param0 + 296);
	}
	switch (Param0)
	{
		case 0x00000001:
			if (IS_ACTOR_VALID(&Param0 + 312))
			{
				AI_CLEAR_DONT_HARM_ACTOR(&Param0 + 312);
				AI_CONVERSE_ENABLE(&Param0 + 312);
				SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&Param0 + 312, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 312, 1);
				if (SQUAD_IS_VALID(SQUAD_GET(&Param0 + 312)))
				{
					DESTROY_OBJECT(SQUAD_GET(&Param0 + 312));
				}
				RELEASE_ACTOR(&Param0 + 312);
			}
			break;
		
		default:
			break;
	}
}

void Function_311(struct<229> Param0) //Position: 0x10A7A / 68218
{
	if (Function_9(Param0.f_228, 1))
	{
		STREAMING_EVICT_ACTOR(Param0.f_220, 4294967295);
		Function_21(&Param0 + 228, 1);
	}
	if (Function_9(Param0.f_228, 8))
	{
		REMOVE_STRING_TABLE("dlc_zombiepack_rcm");
		Function_21(&Param0 + 228, 8);
	}
	if (Function_9(Param0.f_228, 2))
	{
		STREAMING_EVICT_GRINGO(&Param0 + 120);
		Function_21(&Param0 + 228, 2);
	}
	if (Function_9(Param0.f_228, 4))
	{
		STREAMING_EVICT_PROP(&Param0 + 128);
		Function_21(&Param0 + 228, 4);
	}
	return;
}

void Function_312(struct<153> Param0) //Position: 0x10B09 / 68361
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	struct<9> Var4;
	
	Var0 = *(&Param0 + 196);
	Var0.f_4 = (StackVal + 0,5f);
	fVar2 = 1.0f;
	fVar3 = 50.0f;
	if ((((StackVal && Function_298(Function_322(iParam1), Var0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_313(iParam1)) || Global_116927[iParam16].f_20 != 1) || Function_9(Global_99725[iParam143].f_228, 64))
	{
		if (((Param0.f_152 != 4294967295 || iParam1 != 10) || iParam1 != 17) || iParam1 != 5)
		{
			fVar2 = 0,5f;
			fVar6 = 70.0f;
			vVar4 = *(&Param0 + 196);
			vVar4 = (vVar4.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
			vVar4.f_8 = (vVar4.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
			*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&vVar4, 440, 0.0f, 2, 0);
			SET_BLIP_SCALE(&Param0 + 272, fVar6);
			SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
			SET_BLIP_COLOR(&Param0 + 272, 0,63f, 0,85f, 0.0f, fVar2);
			SET_BLIP_PRIORITY(&Param0 + 272, 3);
		}
		else if (iParam1 == 13)
		{
			fVar2 = 0,5f;
			fVar7 = 30.0f;
			*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&Param0 + 196, 440, 0.0f, 2, 0);
			SET_BLIP_SCALE(&Param0 + 272, fVar7);
			SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
			SET_BLIP_COLOR(&Param0 + 272, 0,63f, 0,85f, 0.0f, fVar2);
			SET_BLIP_PRIORITY(&Param0 + 272, 3);
		}
		else if (iParam1 == 23 || !IS_OBJECT_VALID(&Param0 + 328))
		{
			*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&Param0 + 196, Param0.f_152, 0.0f, 2, 0);
			if (((((((((((Param0.f_152 == 312 && Param0.f_152 == 311) && iParam1 == 24) && iParam1 == 6) && iParam1 == 7) && iParam1 == 8) && iParam1 == 2) && iParam1 == 20) && iParam1 == 21) && iParam1 == 25) && iParam1 == 26) && iParam1 == 27)
			{
				SET_BLIP_MAX_DISTANCE(&Param0 + 272, 3.0f);
			}
			*(&Param0 + 280) = ADD_BLIP_FOR_COORD(&Param0 + 196, Param0.f_152, 0.0f, 2, 0);
			if (((iParam1 != 24 || iParam1 != 6) || iParam1 != 8) || iParam1 != 2)
			{
				SET_BLIP_NAME(&Param0 + 280, "ZOMBIE_STORY");
			}
			else
			{
				SET_BLIP_NAME(&Param0 + 280, &Param0 + 4);
			}
			UNK_0xFF3DB575(&Param0 + 280, 1);
			if (Param0.f_152 == 312 && Param0.f_152 == 311)
			{
				SET_BLIP_PRIORITY(&Param0 + 280, 3);
			}
			if (Function_9(Global_116927[iParam16].f_32, 1))
			{
				SET_BLIP_COLOR(&Param0 + 280, 0,63f, 0,85f, 0.0f, 0,5f);
				if (Global_43789 != Global_99725[iParam143].f_216 && !Function_104())
				{
					Function_102("TerrCont_RCM", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			else
			{
				SET_BLIP_COLOR(&Param0 + 280, 0,63f, 0,85f, 0.0f, fVar2);
			}
			Global_116927[iParam16].f_20 = 1;
		}
		if (IS_BLIP_VALID(&Param0 + 272))
		{
			if (((iParam1 != 24 || iParam1 != 6) || iParam1 != 8) || iParam1 != 2)
			{
				SET_BLIP_NAME(&Param0 + 272, "ZOMBIE_STORY");
				if (iParam1 == 2)
				{
					SET_BLIP_BLINK(&Param0 + 272, 1, 0, (7,5f + 5.0f));
				}
				else
				{
					SET_BLIP_BLINK(&Param0 + 272, 1, 0, 7,5f);
				}
			}
			else
			{
				SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
			}
			if (Function_9(Global_116927[iParam16].f_32, 1))
			{
				SET_BLIP_COLOR(&Param0 + 272, 0,63f, 0,85f, 0.0f, 0,5f);
				if (Global_43789 != Global_99725[iParam143].f_216 && !Function_104())
				{
					Function_102("TerrCont_RCM", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			else
			{
				SET_BLIP_COLOR(&Param0 + 272, 0,63f, 0,85f, 0.0f, fVar2);
			}
			SET_BLIP_PRIORITY(&Param0 + 272, 3);
		}
	}
	else
	{
		fVar2 = 0,5f;
		vVar4 = *(&Param0 + 196);
		vVar4 = (vVar4.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
		vVar4.f_8 = (vVar4.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
		*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&vVar4, 440, 0.0f, 2, 0);
		SET_BLIP_SCALE(&Param0 + 272, fVar3);
		SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
		SET_BLIP_PRIORITY(&Param0 + 272, 3);
	}
	if (iParam1 == 19)
	{
		SET_BLIP_COLOR(&Param0 + 272, 1.0f, 1.0f, 1.0f, 1.0f);
		SET_BLIP_COLOR(&Param0 + 280, 1.0f, 1.0f, 1.0f, 1.0f);
	}
	else if (iParam1 == 20)
	{
		SET_BLIP_COLOR(&Param0 + 272, 0,34f, 0,58f, 0,74f, 1.0f);
		SET_BLIP_COLOR(&Param0 + 280, 0,34f, 0,58f, 0,74f, 1.0f);
	}
	else if (iParam1 == 21)
	{
		SET_BLIP_COLOR(&Param0 + 272, 0,79f, 0,69f, 0.0f, 1.0f);
		SET_BLIP_COLOR(&Param0 + 280, 0,79f, 0,69f, 0.0f, 1.0f);
	}
	return;
}

int Function_313(int iParam0) //Position: 0x1101F / 69663
{
	if ((Global_116927[iParam06] != 3 || Global_116927[iParam06] != 4) || Global_116927[iParam06] != 5)
	{
		return 1;
	}
	return 0;
}

bool Function_314(int iParam0) //Position: 0x1104B / 69707
{
	if (Global_116927[iParam06] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_315(struct<237> Param0) //Position: 0x11060 / 69728
{
	if (!Param0.f_236)
	{
		if (Function_94())
		{
			if (((AI_IS_AGGROING(&Param0 + 312, &Global_54076) || AI_IS_HOSTILE_OR_ENEMY(&Param0 + 312, &Global_54076)) || GET_LAST_ATTACKER(&Param0 + 312) != &Global_54076) || IS_ACTOR_HANDSUP(&Param0 + 312))
			{
				return 0;
			}
			if ((IS_PLAYER_TARGETTING_ACTOR(false, &Param0 + 312, 1) && GET_ACTOR_FACTION(&Param0 + 312) == 20) && GET_ACTOR_FACTION(&Param0 + 312) == 23)
			{
				return 0;
			}
		}
		if ((((AI_IS_AGGROING(&Param0 + 312, &Global_54076) || AI_IS_HOSTILE_OR_ENEMY(&Param0 + 312, &Global_54076)) || GET_LAST_ATTACKER(&Param0 + 312) != &Global_54076) || IS_ACTOR_HANDSUP(&Param0 + 312)) || IS_PLAYER_TARGETTING_ACTOR(false, &Param0 + 312, 1))
		{
			return 0;
		}
		return 1;
	}
	return 1;
}

void Function_316(struct<233> Param0) //Position: 0x1112F / 69935
{
	struct<5> Var0;
	
	Var0 = iParam1;
	Var0.f_4 = 4;
	if (!IS_SCRIPT_VALID(&Param0 + 296))
	{
		*(&Param0 + 296) = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(&Param0 + 112, 4), &Var0, 2, 0);
	}
	if (!IS_SCRIPT_VALID(&Param0 + 296))
	{
		PRINTSTRING("Quest launch FAIL: ");
		PRINTSTRING(GET_ASSET_NAME(&Param0 + 112, 4));
		PRINTNL();
		LOG_ERROR("Failed to launch quest script! Check spew!");
	}
	else
	{
		Global_116927[iParam16] = 5;
		if (!(IS_JOURNAL_ENTRY_IN_LIST(Param0.f_224, 0) || Param0.f_232))
		{
			Param0.f_224 = CREATE_JOURNAL_ENTRY(&Param0 + 4, 2, &Param0 + 36, "Mission_Strangers");
			PREPEND_JOURNAL_ENTRY(Param0.f_224, false);
		}
	}
	return;
}

int Function_317(int iParam0, bool bParam1, bool bParam2) //Position: 0x1121B / 70171
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !&bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(&iParam0, 0,3f))
	{
		return 1;
	}
	if (Function_320(&iParam0))
	{
		return 1;
	}
	if (Function_319(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(&iParam0) && !&bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&iParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iParam0)))
	{
		return 1;
	}
	if (Function_318())
	{
		return 1;
	}
	return 0;
}

bool Function_318() //Position: 0x112DF / 70367
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_319(int iParam0) //Position: 0x112F6 / 70390
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_320(int iParam0) //Position: 0x11302 / 70402
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

bool Function_321(int iParam0) //Position: 0x11311 / 70417
{
	if (Global_116927[iParam06] == 3)
	{
		return 1;
	}
	return 0;
}

bool Function_322(int iParam0) //Position: 0x11326 / 70438
{
	if (Global_116927[iParam06] == 2)
	{
		return 1;
	}
	return 0;
}

void Function_323(struct<221> Param0) //Position: 0x1133B / 70459
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	ENABLE_USE_CONTEXTS(1);
	Global_39922.f_88 |= 16384;
	if (IS_ACTOR_VALID(&Param0 + 312) && Param0.f_220 == 358)
	{
		SET_ACTOR_INVULNERABILITY(&Param0 + 312, false);
	}
	SET_ACTOR_INVULNERABILITY(&Global_54076, false);
	return;
}

void Function_324() //Position: 0x11384 / 70532
{
	return;
}

int Function_325() //Position: 0x1138A / 70538
{
	return 0;
}

void Function_326() //Position: 0x11391 / 70545
{
	return;
}

void Function_327(struct<57> Param0) //Position: 0x11397 / 70551
{
	strcpy(&Param0 + 24, "MISSIONLAUNCHER", 16);
	if (Global_6666)
	{
		Param0 = 70545;
		*(&Param0 + 8) = 70538;
		*(&Param0 + 16) = 70545;
	}
	else
	{
		Param0 = 89681;
		*(&Param0 + 8) = 70659;
		*(&Param0 + 16) = 70653;
	}
	Param0.f_56 = 0;
	return;
}

void Function_328() //Position: 0x113FD / 70653
{
	return;
}

int Function_329() //Position: 0x11403 / 70659
{
	float fVar0;
	int iVar1;
	
	if (!Global_6607)
	{
		return 0;
	}
	if (Function_95(0, 0, 1, 1) && !Global_6657)
	{
		return 0;
	}
	if (((((Global_6646 || Global_6647) || Function_411(2048)) || Global_6650) || Function_9(Global_99130.f_40, 1)) && !Global_6657)
	{
		return 0;
	}
	if (!Global_6633)
	{
		return 0;
	}
	if (IS_GAME_RESETTING())
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		return 0;
	}
	if (Function_410(&Global_6667[228] + 184, 2))
	{
		if (Function_7(7) && Function_7(11))
		{
			if (((Function_7(18) && Function_7(37)) && Function_7(14)) && Function_7(21))
			{
				Function_409(&Global_6667[228] + 184, 2);
			}
			else if (!Function_26(Global_119935, 2))
			{
				Function_16(&Global_54076, 2, 2, 1);
			}
		}
	}
	if (Function_410(&Global_6667[328] + 184, 2))
	{
		if ((Function_7(27) && Function_7(23)) && Function_7(1))
		{
			Function_409(&Global_6667[328] + 184, 2);
		}
	}
	fVar0 = GET_PROFILE_TIME();
	iVar1 = Global_10963;
	while (iVar1 < (Global_6667 - 1))
	{
		if ((!Global_6622 && !Global_6626) && !Global_99146)
		{
			if ((GET_PROFILE_TIME() - fVar0) < 150.0f)
			{
				Global_10963 = iVar1;
				return 0;
			}
			if ((Global_6667[iVar128] != Global_43786 && !Global_6667[iVar128].f_168) && Global_6667[iVar128].f_180)
			{
				if (!Function_410(&Global_6667[iVar128] + 184, 4194304) || Function_410(&Global_6667[iVar128] + 184, 8388608))
				{
					Function_406(&(Global_6667[iVar128]), iVar1);
				}
			}
			if (Global_6667[iVar128].f_168)
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
					return 0;
				}
				SATCHEL_SET_ENABLED(0);
				if (!Function_222(StackVal))
				{
					Function_330(&(Global_6667[iVar128]), 0, 0, 1);
				}
				else
				{
					Function_330(&(Global_6667[iVar128]), !HUD_IS_FADED(), 0, 1);
				}
			}
		}
		else if (Global_6622)
		{
		}
		else if (Global_6626)
		{
		}
		else if (Global_99146)
		{
		}
		iVar1++;
	}
	Global_10963 = 1;
	return 0;
}

void Function_330(struct<197> Param0) //Position: 0x11614 / 71188
{
	struct<4> Var0;
	
	if ((Function_405(StackVal) != 4 && !bParam2) && !Global_6624)
	{
		bParam1 = false;
	}
	if (Function_404(StackVal) == 1)
	{
		if (IS_OBJECT_VALID(&Param0 + 64))
		{
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
			}
			DESTROY_OBJECT(&Param0 + 64);
		}
	}
	if (bParam1)
	{
		if (HUD_IS_FADED())
		{
			if (Function_404(StackVal) == 1)
			{
				Global_6622 = 1;
				Global_6621 = 0;
				Function_399(&(Global_6667[Function_405(StackVal)28]));
			}
			else if (Function_404(StackVal) == 4)
			{
				Function_221(StackVal, Param0.f_196);
				Global_6626 = 1;
			}
			Function_397();
			Function_395(0, 0);
			*(&Param0 + 160) = Function_332(StackVal, &Param0 + 8, bParam2, 0, &iParam3, 0);
			Param0.f_168 = 0;
			Param0.f_180 = 0;
		}
		else if (!HUD_IS_FADING())
		{
			if (Function_404(StackVal) == 1)
			{
				Var0 = { StackVal, StackVal, StackVal, Function_331(Function_405(StackVal)) };
			}
			else
			{
				Var0 = { StackVal, StackVal, StackVal, *(&Param0 + 16) };
			}
			UNK_0xC6E36B1D(&Var0);
			SET_ACTOR_INVULNERABILITY(&Global_54076, true);
		}
	}
	else
	{
		if (Function_404(StackVal) == 1)
		{
			Global_6622 = 1;
			Global_6621 = 0;
			Var0 = { StackVal, StackVal, StackVal, Function_331(Function_405(StackVal)) };
			if (HUD_IS_FADED())
			{
				if (Function_405(StackVal) != 4)
				{
					UNK_0xC6E36B1D(&Var0);
				}
				else
				{
					UNK_0xEF270DC9();
				}
			}
			Function_399(&(Global_6667[Function_405(StackVal)28]));
		}
		else if (Function_404(StackVal) == 4)
		{
			Function_221(StackVal, Param0.f_196);
			Global_6626 = 1;
		}
		SET_ACTOR_INVULNERABILITY(&Global_54076, true);
		Function_397();
		Function_395(0, 0);
		*(&Param0 + 160) = Function_332(StackVal, &Param0 + 8, bParam2, 0, 1, 0);
		Param0.f_168 = 0;
		Param0.f_180 = 0;
	}
}

struct<16> Function_331(bool bParam0) //Position: 0x117D8 / 71640
{
	char* cVar0[16];
	
	strcpy(&cVar0, "fav_non", 16);
	if (!Function_25(bParam0))
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, *(&Global_6667[bParam028] + 16);
}

bool Function_332(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5) //Position: 0x11809 / 71689
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar61;
	struct<41> Var62;
	
	if (Function_404(iParam1) == 1)
	{
		Function_395(1, 0);
	}
	else
	{
		Function_395(0, 0);
	}
	bVar1 = Function_405(iParam1);
	if (!Global_6606 || Global_6624)
	{
		if (Function_404(iParam1) == 1)
		{
			uVar2 = 58;
			if (!bParam2)
			{
				Function_367(bVar1, &uVar2, &uVar0, 1);
			}
			if (bVar1 == 1)
			{
				iVar61 = 0;
				while (iVar61 <= 4)
				{
					Function_366(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 3)
				{
					Function_365(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 11)
				{
					Function_364(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 16)
				{
					Function_363(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 58)
				{
					if (Function_222(Function_24(iVar61)))
					{
						Function_361(Function_24(iVar61));
					}
					iVar61++;
				}
				Function_359();
				Function_356(Function_358(), 0);
				Function_355();
				if (bVar1 == 1)
				{
					Function_361(Function_24(2));
				}
			}
			if (bVar1 == 57)
			{
				DISABLE_CHILD_SECTOR("beh_silo02x");
				ENABLE_CHILD_SECTOR("beh_silo01x");
				DISABLE_CHILD_SECTOR("beh_house02x");
				DISABLE_CHILD_SECTOR("beh_house02props01x");
				ENABLE_CHILD_SECTOR("beh_house01x");
				ENABLE_CHILD_SECTOR("beh_house01props01x");
			}
		}
		else
		{
			PRINTSTRING("Launch type = ");
			PRINTINT(Function_404(iParam1));
			PRINTNL();
		}
	}
	if (Function_404(iParam1) == 1)
	{
		Function_56(18, bVar1, 0);
		Function_353(18, &Global_6667[bVar128] + 16, 0, 1);
		if (!bParam2)
		{
			Function_351(bVar1);
			AUDIO_RESET_SPEECH_HISTORY();
		}
		else
		{
			Global_53524.f_188 = GET_CURRENT_GAME_TIME();
		}
	}
	Var62 = iParam1;
	Var68 = { StackVal, StackVal, StackVal, Function_350(bVar1) };
	strcpy(&Var62 + 4, UI_GET_STRING(&Var68), 16);
	Var62.f_36 = bParam2;
	Var62.f_40 = &iParam3;
	Function_346(0);
	SATCHEL_SET_ENABLED(1);
	if (IS_SCRIPT_VALID(&Global_39922 + 96))
	{
		TERMINATE_SCRIPT(&Global_39922 + 96);
	}
	if (IS_SCRIPT_VALID(&Global_39922 + 104))
	{
		TERMINATE_SCRIPT(&Global_39922 + 104);
	}
	Global_6621 = 0;
	SET_ACTOR_INVULNERABILITY(&Global_54076, false);
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		return "";
	}
	if (((IS_OBJECT_VALID(&Global_99130 + 32) || Function_9(Global_99130.f_40, 2)) || Function_9(Global_99130.f_40, 1)) || Function_9(Global_99130.f_40, 65536))
	{
		Function_21(&Global_99130 + 40, 2);
		Function_21(&Global_99130 + 40, 1);
		Function_21(&Global_99130 + 40, 65536);
		Function_87(&Global_99130 + 40, 4);
	}
	if (Function_404(iParam1) == 4)
	{
		PLAY_SOUND("HUD_MENU_SELECT_MASTER");
	}
	Global_6657 = 0;
	uVar72 = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(&uParam0, 4), &Var62, 12, 0);
	if (IS_SCRIPT_VALID(&uVar72))
	{
		if (Function_222(iParam1))
		{
			if (&bParam5)
			{
				Function_345(iParam1, &iParam4);
			}
			else if (Function_344(iParam1) == 1)
			{
				Function_343(iParam1, &iParam4);
			}
			else
			{
				Function_338(iParam1, &iParam4);
			}
		}
		Function_335(2);
		Function_333((15 - Function_334(105)));
		return &uVar72;
	}
	return "";
}

void Function_333(int iParam0) //Position: 0x11B4F / 72527
{
	(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_334(105)), 0);
	return;
}

int Function_334(int iParam0) //Position: 0x11B72 / 72562
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_335(int iParam0) //Position: 0x11B89 / 72585
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_337(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_337(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_337(&Global_21369 + 48);
	PRINTNL();
	Function_336(&iParam0);
	return;
}

void Function_336(int iParam0) //Position: 0x11C2B / 72747
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_334(90)), 0);
	return;
}

void Function_337(int iParam0) //Position: 0x11C4E / 72782
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&iParam0));
	return;
}

void Function_338(int iParam0, int iParam1) //Position: 0x11C98 / 72856
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_222(iParam0))
	{
		Function_341();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_404(iParam0);
	if (StackVal != 2)
	{
		Function_340("DEED_START", iParam0);
	}
	Global_21684[iParam07].f_8 = StackVal + 1;
	Global_21684[iParam07].f_4 = 2;
	Global_10968 = iParam0;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_69(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_405(iParam0);
		Global_10966 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_339(Global_10966) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_103(Global_10966) };
		}
		bVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(bVar12, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar12);
		APPEND_JOURNAL_ENTRY(bVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_6619 = 1;
	return;
}

struct<24> Function_339(char* cParam0) //Position: 0x11DA9 / 73129
{
	char* cVar0[24];
	
	strcpy(&cVar0, "Mission_", 24);
	switch (cParam0)
	{
		case 0x00000000:
		case 0x00000001:
			stradd(&cVar0, "Intro", 24);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000016:
			stradd(&cVar0, "Ranch", 24);
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x00000015:
		case 0x00000017:
			stradd(&cVar0, "Marshal", 24);
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
			stradd(&cVar0, "Merchant", 24);
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			stradd(&cVar0, "Grave", 24);
			break;
		
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
			stradd(&cVar0, "Outlaws", 24);
			break;
		
		case 0x00000018:
		case 0x00000019:
			stradd(&cVar0, "Fort", 24);
			break;
		
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x00000024:
			stradd(&cVar0, "MexArmy", 24);
			break;
		
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
			stradd(&cVar0, "Gun", 24);
			break;
		
		case 0x00000022:
		case 0x00000023:
		case 0x00000026:
		case 0x00000027:
			stradd(&cVar0, "MexGirl", 24);
			break;
		
		case 0x00000025:
		case 0x00000028:
		case 0x00000029:
			stradd(&cVar0, "Rebel", 24);
			break;
		
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			stradd(&cVar0, "Anthro", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002F:
		case 0x00000030:
			stradd(&cVar0, "FBI", 24);
			break;
		
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
			stradd(&cVar0, "Home", 24);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_340(var uParam0, bool bParam1) //Position: 0x11FFF / 73727
{
	struct<4> Var0;
	
	if (!Function_222(bParam1))
	{
		return;
	}
	switch (Function_404(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_350(Function_405(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_404(bParam1), Function_405(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_404(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_404(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_404(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_404(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_404(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

void Function_341() //Position: 0x12129 / 74025
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_47151[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_26088)
	{
		iVar0 = 0;
		while (StackVal <= iVar0)
		{
			strcpy(&cVar2, "Deed Count by Status:", 64);
			switch (iVar1)
			{
				case 0x00000000:
					stradd(&cVar2, "Pending,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "Active,", 64);
					break;
				
				case 0x00000001:
					stradd(&cVar2, "About to Start,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "Completed,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "Completed (Cheated),", 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			switch (iVar0)
			{
				case 0x00000001:
					stradd(&cVar2, "StoryMission,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "ProcMission,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "LocationMission,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "nMinigame,", 64);
					break;
				
				case 0x00000006:
					stradd(&cVar2, "Job,", 64);
					break;
				
				default:
					straddi(&cVar2, iVar0, 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			straddi(&cVar2, Global_26088[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (!Global_21684[iVar07] != 0)
		{
			Function_342(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
			strcpy(&cVar2, "Deed:", 64);
			straddi(&cVar2, iVar0, 64);
			stradd(&cVar2, "n Mission ", 64);
			straddi(&cVar2, iVar19, 64);
			stradd(&cVar2, "  Quad ", 64);
			straddi(&cVar2, iVar18, 64);
			stradd(&cVar2, "  Type ", 64);
			straddi(&cVar2, iVar20, 64);
			stradd(&cVar2, "n  Status ", 64);
			straddi(&cVar2, StackVal, 64);
		}
		iVar0++;
	}
	return;
}

void Function_342(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x12370 / 74608
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_343(int iParam0, int iParam1) //Position: 0x1239C / 74652
{
	int iVar0;
	
	if (!Function_222(iParam0))
	{
		Function_341();
		return;
	}
	if (StackVal == 2)
	{
		return;
	}
	if (!StackVal != 1)
	{
		return;
	}
	iVar0 = Function_404(iParam0);
	Global_21684[iParam07].f_4 = 2;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_69(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_405(iParam0);
	}
	Global_6619 = 1;
	return;
}

int Function_344(int iParam0) //Position: 0x12404 / 74756
{
	if (!Function_222(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_345(int iParam0, int iParam1) //Position: 0x1241E / 74782
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_222(iParam0))
	{
		Function_341();
		return;
	}
	iVar0 = Function_404(iParam0);
	Global_21684[iParam07].f_4 = 1;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_69(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_405(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_339(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_103(Global_10966) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar11);
		APPEND_JOURNAL_ENTRY(bVar11, 0);
	}
	return;
}

void Function_346(bool bParam0) //Position: 0x124C5 / 74949
{
	if (Global_6646 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_6646 = 1;
		if (!Global_42250)
		{
			if (IS_FACTION_VALID(Global_40000))
			{
				SET_FACTIONS_STATUS_TWO_WAY(Global_40000, 2, 6);
			}
		}
		Global_21575 = 0;
	}
	else
	{
		Global_6646 = 0;
		Global_6648 = 0;
		Function_347();
		if (IS_FACTION_VALID(Global_40000))
		{
			SET_FACTIONS_STATUS_TWO_WAY(Global_40000, 2, 2);
		}
		SET_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
		SET_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
		if (IS_SCRIPT_VALID(&Global_39922 + 96))
		{
			TERMINATE_SCRIPT(&Global_39922 + 96);
		}
		if (IS_SCRIPT_VALID(&Global_39922 + 104))
		{
			TERMINATE_SCRIPT(&Global_39922 + 104);
		}
		Global_21575 = 4294967295;
	}
	return;
}

void Function_347() //Position: 0x12554 / 75092
{
	int iVar0;
	
	Global_41176 = Function_348(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_41252[iVar011] != 0)
		{
			(*&Global_41176 + 4)[iVar0] = (*&Global_40060 + 68[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_348(int iParam0) //Position: 0x125A2 / 75170
{
	if (!Function_349(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_349(int iParam0) //Position: 0x125BA / 75194
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_350(bool bParam0) //Position: 0x125CF / 75215
{
	char* cVar0[16];
	
	if (!Function_94())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, bParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_351(int iParam0) //Position: 0x12609 / 75273
{
	int iVar0;
	
	iVar0 = Function_352(iParam0);
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	Global_53524.f_192 = 0.0f;
	switch (iVar0)
	{
		case 0x00000000:
			Global_53524.f_172 = Function_57(27);
			Global_53524.f_168 = Function_57(42);
			Global_53524.f_176 = CEIL(Function_50(49));
			Global_53524.f_180 = Function_57(49);
			break;
		
		case 0x00000002:
			Global_53524.f_168 = Function_57(355);
			break;
		
		case 0x00000001:
			Global_53524.f_176 = CEIL(Function_50(49));
			Global_53524.f_180 = Function_57(49);
			break;
	}
	return;
}

int Function_352(int iParam0) //Position: 0x12693 / 75411
{
	switch (iParam0)
	{
		case 0x00000002:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000032:
			return 1;
			break;
		
		case 0x00000007:
		case 0x00000031:
		case 0x00000037:
			return 2;
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000016:
		case 0x00000006:
		case 0x00000005:
		case 0x0000000B:
		case 0x00000011:
		case 0x0000000F:
		case 0x0000000C:
		case 0x00000038:
		case 0x00000033:
		case 0x00000001:
			return 3;
			break;
	}
	return 0;
}

int Function_353(int iParam0, char* cParam1) //Position: 0x12728 / 75560
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_55480[iParam016] + 32, &cParam1, 32);
	if (&bParam2)
	{
		uVar1 = Global_55480[iParam016].f_124;
		Function_354(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &uParam3);
	}
	return 1;
}

void Function_354(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x12A7F / 76415
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

void Function_355() //Position: 0x12B07 / 76551
{
	WRITE_TO_FILE("New Game Progression Started\n", "C:/MoneyData.csv", 1);
	return;
}

int Function_356(int iParam0, bool bParam1) //Position: 0x12B44 / 76612
{
	bool bVar0;
	
	bVar0 = Function_57(0);
	if ((Function_57(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_357(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (iParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_57(0));
	return 1;
}

int Function_357(int iParam0, bool bParam1, int iParam2) //Position: 0x12BD5 / 76757
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(bParam1));
	Function_51(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_40(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

int Function_358() //Position: 0x12DD2 / 77266
{
	return Function_57(0);
}

void Function_359() //Position: 0x12DDC / 77276
{
	PRINTSTRING("Unlocking Frontier Weapons");
	PRINTNL();
	SET_WEAPONENUM_LOCKED(false, 1);
	SET_WEAPONENUM_LOCKED(true, 1);
	SET_WEAPONENUM_LOCKED(2, 1);
	SET_WEAPONENUM_LOCKED(3, 1);
	SET_WEAPONENUM_LOCKED(4, 0);
	SET_WEAPONENUM_LOCKED(5, 1);
	SET_WEAPONENUM_LOCKED(6, 1);
	SET_WEAPONENUM_LOCKED(7, 1);
	SET_WEAPONENUM_LOCKED(12, 1);
	SET_WEAPONENUM_LOCKED(13, 1);
	SET_WEAPONENUM_LOCKED(14, 1);
	SET_WEAPONENUM_LOCKED(19, 1);
	SET_WEAPONENUM_LOCKED(20, 1);
	SET_WEAPONENUM_LOCKED(9, 1);
	SET_WEAPONENUM_LOCKED(10, 1);
	SET_WEAPONENUM_LOCKED(11, 1);
	SET_WEAPONENUM_LOCKED(16, 0);
	SET_WEAPONENUM_LOCKED(17, 1);
	SET_WEAPONENUM_LOCKED(18, 1);
	SET_WEAPONENUM_LOCKED(15, 1);
	SET_WEAPONENUM_LOCKED(22, 0);
	SET_WEAPONENUM_LOCKED(23, 1);
	SET_WEAPONENUM_LOCKED(24, 1);
	SET_WEAPONENUM_LOCKED(25, 1);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), false);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), true);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 2);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 3);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 15);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 6);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 5);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 7);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 14);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 12);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 13);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 19);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 20);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 9);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 10);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 11);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 17);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 18);
	GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 4, 1.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 22, 1.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 8, 1.0f, 0, 1);
	Function_360();
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 22);
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 4);
	return;
}

void Function_360() //Position: 0x12F5F / 77663
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	
	iVar0 = 0;
	if (Global_6606)
	{
		return;
	}
	uVar2 = Function_77();
	if (!IS_ACTOR_VALID(&uVar2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 38)
	{
		bVar1 = iVar0;
		bVar3 = GET_AMMO_ENUM(bVar1);
		if (bVar3 != 4294967295)
		{
			switch (UNK_0xDB679ED9(bVar1))
			{
				case 0x00000028:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 30.0f, 0);
					break;
				
				case 0x00000027:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 30.0f, 0);
					break;
				
				case 0x0000002B:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 12.0f, 0);
					break;
				
				case 0x0000002A:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 20.0f, 0);
					break;
				
				case 0x00000029:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 20.0f, 0);
					break;
				
				case 0x0000002C:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 20.0f, 0);
					break;
				}
		}
		iVar0++;
	}
	return;
}

void Function_361(int iParam0) //Position: 0x13038 / 77880
{
	Function_362(iParam0);
	return;
}

void Function_362(int iParam0) //Position: 0x13043 / 77891
{
	int iVar0;
	
	if (!Function_222(iParam0))
	{
		Function_341();
		return;
	}
	iVar0 = Function_404(iParam0);
	Global_21684[iParam07].f_4 = 0;
	return;
}

void Function_363(int iParam0, int iParam1) //Position: 0x13067 / 77927
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return;
	}
	Global_39290[iParam0] = &iParam1;
	return;
}

void Function_364(int iParam0, int iParam1) //Position: 0x13085 / 77957
{
	if (iParam0 >= 4294967295 && iParam0 <= 11)
	{
		return;
	}
	Global_39266[iParam0] = &iParam1;
	return;
}

void Function_365(int iParam0, int iParam1) //Position: 0x130A3 / 77987
{
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return;
	}
	Global_39258[iParam0] = &iParam1;
	return;
}

void Function_366(int iParam0, int iParam1) //Position: 0x130C0 / 78016
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return;
	}
	Global_39248[iParam0] = &iParam1;
	return;
}

void Function_367(int iParam0, int[] iParam1, var uParam2, bool bParam3) //Position: 0x130DD / 78045
{
	if (Global_6606 && !Global_6624)
	{
		return;
	}
	if (!&bParam3)
	{
		if (!Function_94())
		{
			Function_371(iParam0, &uParam2, 0);
		}
		else
		{
			Function_368(iParam0, &uParam2, 0);
		}
		iParam1[iParam0] = 1;
	}
	if (Global_6667[iParam028].f_188 != 4294967295)
	{
		if (!iParam1[Global_6667[iParam028].f_188])
		{
			Function_367(Global_6667[iParam028].f_188, &iParam1, &uParam2, 0);
		}
	}
	if (Global_6667[iParam028].f_192 != 4294967295)
	{
		if (!iParam1[Global_6667[iParam028].f_192])
		{
			Function_367(Global_6667[iParam028].f_192, &iParam1, &uParam2, 0);
		}
	}
	if (Global_6667[iParam028].f_196 != 4294967295)
	{
		if (!iParam1[Global_6667[iParam028].f_196])
		{
			Function_367(Global_6667[iParam028].f_196, &iParam1, &uParam2, 0);
		}
	}
	if (Global_6667[iParam028].f_200 != 4294967295)
	{
		if (!iParam1[Global_6667[iParam028].f_200])
		{
			Function_367(Global_6667[iParam028].f_200, &iParam1, &uParam2, 0);
		}
	}
}

void Function_368(int iParam0, var uParam1, bool bParam2) //Position: 0x131E6 / 78310
{
	struct<4> Var0;
	
	uParam1 = uParam1;
	if (!Function_25(iParam0))
	{
		return;
	}
	if (Global_6624 && Global_10964 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_369(21, &bParam2, 0);
			Function_369(16, &bParam2, 0);
			SET_DISABLE_DEADEYE(0, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, true);
			SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_350(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

int Function_369(bool bParam0, bool bParam1, int iParam2) //Position: 0x13288 / 78472
{
	if (!Function_370(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_77(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_77(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_77(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_370(int iParam0) //Position: 0x132E2 / 78562
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_371(int iParam0, var uParam1, bool bParam2) //Position: 0x132F4 / 78580
{
	struct<4> Var0;
	
	if (!Function_25(iParam0))
	{
		return;
	}
	if (Global_6624 && Global_10964 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_369(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_392(Global_46760[0]);
			Function_392(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_390(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_392(Global_46816[0]);
			Function_383(0);
			Function_381(2, 1);
			Function_381(0, 1);
			Function_381(1, 1);
			break;
		
		case 0x00000003:
			Function_392(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_392(Global_46816[0]);
			Function_392(Global_46760[0]);
			Function_379(0, 1);
			Function_379(15, 1);
			Function_379(9, 1);
			Function_379(12, 1);
			Function_379(16, 1);
			Function_381(3, 1);
			break;
		
		case 0x00000005:
			Function_392(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_390(21, &bParam2, 4);
			Function_392(Global_46816[0]);
			Function_381(39, 1);
			break;
		
		case 0x00000007:
			Function_392(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_392(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_378())
				{
					if (!Function_97(4))
					{
						Function_101(4, 0, 0, 1, 0);
					}
				}
			}
			Function_392(Global_46760[0]);
			Function_392(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_392(Global_46760[0]);
			Function_392(Global_46816[2]);
			Function_377(&(Global_43791[Global_46816[2]]), 32768);
			Function_376(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_390(9, &bParam2, 4);
			Function_392(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_392(Global_46760[0]);
			Function_392(Global_46796[0]);
			Function_377(&(Global_43791[Global_46796[0]]), 32768);
			Function_376(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_392(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_392(Global_46760[0]);
			Function_392(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_392(Global_46760[1]);
			Function_392(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_392(Global_46838[0]);
			Function_392(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_392(Global_46796[5]);
			Function_392(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_390(21, &bParam2, 4);
			Function_392(Global_46760[4]);
			Function_392(Global_46796[4]);
			Function_375(&Global_119935, 0x2000000);
			Function_375(&Global_119935, 0x4000000);
			Function_375(&Global_119935, 4096);
			Function_375(&Global_119935, 8);
			Function_375(&Global_119935, 8388608);
			Function_375(&Global_119935, 524288);
			Function_375(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_392(Global_46760[4]);
			Function_392(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_376(&(Global_43791[Global_46760[4]]), 256);
			Function_392(Global_46760[4]);
			Function_392(Global_46796[0]);
			Function_377(&(Global_43791[Global_46796[0]]), 32768);
			Function_376(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_392(Global_46760[0]);
			Function_392(Global_46760[5]);
			Function_390(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_392(Global_46796[3]);
			Function_377(&(Global_43791[Global_46796[3]]), 32768);
			Function_376(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_390(9, &bParam2, 4);
			Function_392(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_377(&(Global_43791[Global_46838[1]]), 32768);
			Function_392(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_390(12, &bParam2, 4);
			Function_376(&(Global_43791[Global_46838[1]]), 256);
			Function_392(Global_46816[3]);
			Function_392(Global_46866[0]);
			Function_392(Global_46850[0]);
			Function_383(4);
			Function_379(13, 1);
			Function_379(1, 1);
			Function_379(18, 1);
			Function_381(34, 1);
			Function_381(44, 1);
			Function_381(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_390(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_392(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_392(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_392(Global_46866[0]);
			Function_392(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_392(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_392(Global_46850[0]);
			Function_392(Global_46866[0]);
			Function_392(Global_46866[1]);
			Function_392(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_390(23, &bParam2, 3);
			Function_379(23, 1);
			Function_392(Global_46850[0]);
			Function_392(Global_46850[2]);
			Function_377(&(Global_43791[Global_46850[2]]), 32768);
			Function_376(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_390(19, &bParam2, 4);
			Function_392(Global_46850[0]);
			Function_392(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_390(24, &bParam2, 3);
			Function_379(24, 1);
			Function_392(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_392(Global_46850[0]);
			Function_392(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_392(Global_46866[12]);
			Function_392(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_392(Global_46866[12]);
			Function_392(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_390(25, &bParam2, 10);
			Function_392(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_392(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_392(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_390(13, &bParam2, 4);
			Function_392(Global_46866[2]);
			Function_392(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_97(8))
				{
					Function_101(8, 0, 0, 1, 0);
				}
			}
			Function_392(Global_46850[0]);
			Function_383(9);
			Function_379(7, 1);
			Function_379(11, 1);
			Function_379(3, 1);
			Function_379(20, 1);
			Function_381(57, 1);
			break;
		
		case 0x0000002A:
			Function_390(2, &bParam2, 4);
			Function_392(Global_46914[0]);
			Function_392(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_392(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_392(Global_46914[0]);
			Function_392(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_392(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_392(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_392(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_390(17, &bParam2, 4);
			Function_392(Global_46926[0]);
			Function_392(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_99(15))
				{
					Function_66(15, 0, 1);
				}
			}
			Function_374(2, 26);
			Function_376(&(Global_43791[Global_46914[1]]), 256);
			Function_383(11);
			Function_392(Global_46914[1]);
			Function_392(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_392(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_392(Global_46914[1]);
			Function_392(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_392(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_392(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_392(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_392(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_392(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_392(Global_46914[1]);
			Function_372(11);
			Function_383(12);
			Global_26200[1114].f_40 = 0;
			Function_381(56, 1);
			if (!&bParam2)
			{
				if (!Function_97(9))
				{
					Function_101(9, 0, 0, 0, 0);
				}
				if (!Function_97(10))
				{
					Function_101(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_350(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_372(int iParam0) //Position: 0x13C0F / 80911
{
	var uVar0;
	
	if (!Function_88(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_373(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_373(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), false);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (!DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse", true);
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Global_26200[iParam014].f_40 = 6;
			Function_290(Global_26200[iParam014].f_48, 16, 0, 0);
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_SET_BOOL(&uVar0, "PlayerHouse_NoHorse", true);
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_REMOVE(&Global_26200[iParam014] + 104, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_373(var uParam0, int iParam1) //Position: 0x13D8C / 81292
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "lockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "unlockMe"))
	{
		DECOR_REMOVE(&uParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 1);
	}
	return;
}

void Function_374(int iParam0, int iParam1) //Position: 0x13DE7 / 81383
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bVar0);
	return;
	return;
}

void Function_375(var uParam0, int iParam1) //Position: 0x13E51 / 81489
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_376(var uParam0, int iParam1) //Position: 0x13E62 / 81506
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_377(var uParam0, int iParam1) //Position: 0x13E7C / 81532
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_378() //Position: 0x13E8D / 81549
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_9(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_379(int iParam0, int iParam1) //Position: 0x13EBD / 81597
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_380(iParam0, iParam1);
	Function_16(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_380(int iParam0, int iParam1) //Position: 0x13F32 / 81714
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_381(int iParam0, int iParam1) //Position: 0x13F8F / 81807
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_382(iParam0, iParam1);
	Function_16(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_382(int iParam0, int iParam1) //Position: 0x14002 / 81922
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_383(int iParam0) //Position: 0x1405D / 82013
{
	var uVar0;
	var uVar1;
	
	if (!Function_88(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_389(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_389(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), true);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Function_38(468, 1, 0, 0);
			Function_374(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_102("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_290(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_101(14, 1, 0, 0, 0);
				Function_384(14, 1, 0, 0, 0);
			}
			if (!Function_95(0, 0, 1, 1))
			{
				Function_69(1);
				Function_68(1, 6);
			}
			else
			{
				Function_67();
			}
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_REMOVE(&uVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", true);
			}
			break;
		
		case 0x00000001:
			uVar1 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar1))
			{
				DECOR_REMOVE(&uVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", true);
			}
			Global_26200[iParam014].f_40 = 4;
			Function_102("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_38(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_374(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_384(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x1431D / 82717
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_100(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_111(3) || uParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_98(bParam0, 2))
	{
		Function_38(456, 1, 0, 0);
		Function_96(bParam0, 2);
		if (!&bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_102(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_109(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_96(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_95(0, 0, 1, 1))
			{
				Function_69(1);
				Function_68(1, 0);
			}
			else
			{
				Function_67();
			}
		}
		Function_105(bParam0);
		if (StackVal && !Function_9(((((!Function_104() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_9((((Function_104() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_94())
		{
			if (!Function_26(Global_119934, 2))
			{
				Function_16(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_386();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_385(3, bParam1);
				break;
			
			case 0x00000005:
				Function_385(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_385(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_385(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_385(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_385(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_374(2, 24);
				break;
			
			case 0x00000003:
				Function_374(2, 25);
				break;
			
			case 0x0000000F:
				Function_374(2, 26);
				break;
			
			case 0x0000000D:
				Function_374(2, 27);
				break;
			
			case 0x0000000E:
				Function_374(2, 28);
				break;
			}
	}
}

void Function_385(int iParam0, bool bParam1) //Position: 0x145BC / 83388
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&bParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_386() //Position: 0x1462B / 83499
{
	if (Function_100(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_388(Global_42827);
			*(&Global_42827 + 8) = Function_387(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_388(Global_42827);
			*(&Global_42827 + 8) = Function_387(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_387(int iParam0, int iParam1) //Position: 0x146AB / 83627
{
	struct<2> Var0;
	struct<9> Var2;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar13 = 1;
	iVar14 = 1;
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[2]9] + 8;
					strcpy(&cVar5, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_22(6, 0) || Function_22(12, 0))
					{
						cVar4 = &Global_44085[Global_46760[1]9] + 8;
					}
					strcpy(&cVar5, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-2177,057f, 16,426f, 2626,285f);
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46736[2]9] + 8;
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[7]9] + 8;
					strcpy(&cVar5, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_7(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_22(5, 0))
					{
						Var0 = Vector(-4120,147f, 18,356f, 3039,531f);
						vVar2 = Vector(500.0f, 500.0f, 500.0f);
						iVar14 = 0;
					}
					strcpy(&cVar5, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46796[3]9] + 8;
					strcpy(&cVar5, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46850[3]9] + 8;
					strcpy(&cVar5, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46894[2]9] + 8;
					strcpy(&cVar5, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-4178,186f, 32,616f, 4582,207f);
					vVar2 = Vector(500.0f, 500.0f, 500.0f);
					strcpy(&cVar5, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46866[4]9] + 8;
					strcpy(&cVar5, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_7(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_7(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_7(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_7(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_22(26, 0))
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_7(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_7(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_7(27) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46894[3]9] + 8;
					strcpy(&cVar5, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46850[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46926[5]9] + 8;
					strcpy(&cVar5, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46926[2]9] + 8;
					strcpy(&cVar5, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_7(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_7(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_7(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_7(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_22(17, 0) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					strcpy(&cVar5, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46760[4]9] + 8;
					strcpy(&cVar5, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46760[2]9] + 8;
					strcpy(&cVar5, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_7(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_22(6, 0) && Function_7(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_7(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_22(9, 0) && Function_7(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_7(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_22(8, 0) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					strcpy(&cVar5, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_85(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_85(StackVal, vVar2))
			{
				if (GET_OBJECT_TYPE(&cVar4) == 9)
				{
					GET_VOLUME_SCALE(&cVar4, &vVar2);
				}
				else
				{
					vVar2 = Vector(200.0f, 200.0f, 200.0f);
				}
			}
		}
	}
	if (!Function_85(StackVal, vVar2))
	{
		iVar18 = ADD_BLIP_FOR_COORD(&Var0, 440, 0, 2, 0);
		SET_BLIP_SCALE(&iVar18, ((vVar2.x + vVar2.z) / 2.0f));
		SET_BLIP_COLOR(&iVar18, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(&iVar18, 3);
		SET_BLIP_NAME(&iVar18, &cVar5);
		return &iVar18;
	}
	return "";
}

int Function_388(int iParam0) //Position: 0x1530E / 86798
{
	int iVar0;
	int iVar1;
	
	if (!Function_100(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
	{
		if ((StackVal && iVar0) == 0)
		{
			return iVar0;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return 0;
}

void Function_389(var uParam0, int iParam1) //Position: 0x1535D / 86877
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "unlockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "lockMe"))
	{
		DECOR_REMOVE(&uParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 0);
	}
	return;
}

void Function_390(bool bParam0, bool bParam1, int iParam2) //Position: 0x153B5 / 86965
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_391(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_369(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_6624 && &iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_391(int iParam0, int iParam1) //Position: 0x15428 / 87080
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_392(int iParam0) //Position: 0x1543C / 87100
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_394(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_377(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_38(473, 1, 0, 0);
		iVar0 = Function_393(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_38(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_38(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_38(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_44085[iParam09].f_64 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_374(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_374(7, 30);
	}
	if (Function_49(473) <= Function_50(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_393(int iParam0) //Position: 0x1552D / 87341
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_297(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_44085[iParam09];
		}
		else
		{
			iVar0 = Global_44085[iParam09];
			iVar0 = Global_44085[iVar09];
		}
	}
	return iVar0;
}

bool Function_394(var uParam0, int iParam1) //Position: 0x15585 / 87429
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_395(int iParam0, int iParam1) //Position: 0x155A2 / 87458
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_38380[iVar036] != 128 || Global_38380[iVar036] != 64) && &iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(&Global_38380[iVar036] + 48) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(&Global_38380[iVar036] + 48);
			Function_396(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_396(struct<113> Param0) //Position: 0x15629 / 87593
{
	Param0.f_112 = 0;
	Param0.f_4 = 0;
	Param0.f_12 = 4294967295;
	(&Param0 + 16) = "";
	*(&Param0 + 24) = Vector(0.0f, 0.0f, 0.0f);
	*(&Param0 + 36) = Vector(0.0f, 0.0f, 0.0f);
	(&Param0 + 48) = "";
	(&Param0 + 72) = "";
	Param0.f_56 = 4294967295;
	(&Param0 + 64) = "";
	Param0.f_108 = 0.0f;
	Param0.f_96 = 0;
	return;
}

void Function_397() //Position: 0x15687 / 87687
{
	Function_398(512);
	Global_42252 = 0.0f;
	UNK_0x598815BD(Global_42252);
	if (IS_SCRIPT_VALID(&Global_39922 + 104))
	{
		TERMINATE_SCRIPT(&Global_39922 + 104);
	}
	if (IS_SCRIPT_VALID(&Global_39922 + 96))
	{
		TERMINATE_SCRIPT(&Global_39922 + 96);
	}
	return;
}

void Function_398(int iParam0) //Position: 0x156C7 / 87751
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_399(struct<185> Param0) //Position: 0x156DA / 87770
{
	if (Param0.f_184 & 114688 == 0)
	{
		return;
	}
	if (Param0.f_184 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (Param0.f_184 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (Param0.f_184 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_400(4, 0, 0);
		}
	}
	return;
}

void Function_400(bool bParam0, var uParam1, int iParam2) //Position: 0x15745 / 87877
{
	var uVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_26182 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_26182 = Global_26182.f_48;
	}
	else
	{
		Global_26182 = StackVal;
	}
	Global_26182.f_4 = 4294967295;
	Global_26182.f_24 = 0;
	if (!StackVal != Global_26182)
	{
		uVar0 = MAKE_TIME_OF_DAY(bParam0, &uParam1, &iParam2);
		Function_401(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_401(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1582F / 88111
{
	int iVar0;
	
	Function_403(bParam0);
	Function_337(&bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, &bParam1);
	Function_402();
	Global_26182.f_48 = StackVal;
	*(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&bParam1), 0);
	Global_26182.f_8 = bParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
	{
		if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else
		{
			SET_RAIN_AMOUNT(0.0f);
			SET_LIGHTNING_AMOUNT(0.0f);
		}
	}
	else
	{
		if (Global_26182.f_32 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_26182.f_32);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_402() //Position: 0x159AE / 88494
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_403(int iParam0) //Position: 0x159BA / 88506
{
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			break;
		
		default:
			break;
	}
	return;
}

int Function_404(bool bParam0) //Position: 0x15A00 / 88576
{
	if (!Function_23(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

bool Function_405(int iParam0) //Position: 0x15A1B / 88603
{
	if (!Function_23(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

void Function_406(struct<169> Param0) //Position: 0x15A3B / 88635
{
	switch (Param0.f_152)
	{
		case 0x00000001:
			if (!Function_22(iParam1, 0))
			{
				if (Function_408(&Param0))
				{
					if (!Global_6624)
					{
						Param0.f_168 = 1;
					}
					return;
				}
			}
			break;
		
		case 0x00000003:
			if (IS_OBJECT_VALID(&Param0 + 72))
			{
				if (Function_277(&Param0 + 72, 1, 1, 0, 1, 0))
				{
					Global_6621 = 1;
					Param0.f_168 = 1;
				}
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(&Param0 + 80))
			{
				if (Function_407(&Param0 + 80, &Global_54076, 1, 1, 0, 1, 0))
				{
					Global_6621 = 1;
					Param0.f_168 = 1;
				}
			}
			break;
	}
	return;
}

bool Function_407(float fParam0, float fParam1, float fParam2, var uParam3, bool bParam4, bool bParam5, float fParam6) //Position: 0x15AD9 / 88793
{
	bool bVar0;
	int iVar1;
	var uVar3;
	
	if (!IS_VOLUME_VALID(&fParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_VOLUME_AND_STOP_ACTOR");
		return 0;
	}
	if (!IS_ACTOR_VALID(&fParam1))
	{
		LOG_ERROR("Invalid actor given to UPDATE_VOLUME_AND_STOP_ACTOR");
		return 0;
	}
	if (IS_ACTOR_RIDING_VEHICLE(&fParam1))
	{
		return 0;
	}
	if (&bParam5)
	{
		if (DECOR_CHECK_EXIST(&fParam0, "gaveDismount"))
		{
			if (!IS_ACTOR_RIDING(&fParam1) || ((fParam6 && GET_TASK_STATUS(GET_ACTOR_FROM_OBJECT(&fParam1), 12) != 1) && (GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&fParam0, "gaveDismount")) < 0,25f))
			{
				DECOR_REMOVE(&fParam0, "gaveDismount");
				return 1;
			}
			return 0;
		}
	}
	if (IS_ACTOR_IN_VOLUME(&fParam1, &fParam0))
	{
		if (IS_ACTOR_PLAYER(&fParam1))
		{
			SET_PLAYER_CONTROL(0, 0, &fParam2, &fParam2);
		}
		if (IS_PLAYER_DEADEYE(0) && uParam3)
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (&bParam4)
		{
			Function_279(&fParam1, 0);
		}
		else if (IS_ACTOR_RIDING(&fParam1))
		{
			if (Function_8(&fParam1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&fParam1)))
			{
				SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(&fParam1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
			}
			RESET_ACTOR_GAITS(GET_MOUNT(&fParam1), 1);
		}
		else
		{
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
		}
		if (bParam5 && IS_ACTOR_RIDING(&fParam1))
		{
			bVar0 = TASK_SEQUENCE_OPEN();
			if (Function_8(&fParam1, 0) < 12.0f)
			{
				iVar1 = Vector(0.0f, 0.0f, -4.0f);
				UNK_0xB89CC342(&fParam1, &iVar1, &uVar3);
				Function_278(&uVar3, &iVar1);
			}
			else
			{
				iVar1 = Vector(0.0f, 0.0f, -2.0f);
				UNK_0xB89CC342(&fParam1, &iVar1, &uVar3);
				Function_278(&uVar3, &iVar1);
			}
			TASK_DISMOUNT(false, 1);
			TASK_GO_TO_COORD(false, &iVar1, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&Global_54076, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
			DECOR_SET_FLOAT(&fParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
			Global_6657 = 1;
			return 0;
		}
		return 1;
	}
	return 0;
}

bool Function_408(struct<201> Param0) //Position: 0x15D57 / 89431
{
	var uVar0;
	
	if (!Param0.f_184 != 0)
	{
		uVar0 = Param0.f_184;
		if (uVar0 & 1 >= 0)
		{
			if (!Function_22(Param0.f_188, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 2 >= 0)
		{
			if (!Function_22(Param0.f_192, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 4 >= 0)
		{
			if (!Function_22(Param0.f_196, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 8 >= 0)
		{
			if (!Function_22(Param0.f_200, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 1073741824 >= 0)
		{
			if (&Global_47310 == 4294967295)
			{
				return 0;
			}
			PRINTINT(&Global_47310);
			PRINTNL();
			*(&Param0 + 8) = &Global_47310;
			Global_47310 = 4294967295;
		}
	}
	return 1;
}

void Function_409(var uParam0, int iParam1) //Position: 0x15DFC / 89596
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_410(var uParam0, int iParam1) //Position: 0x15E16 / 89622
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_411(int iParam0) //Position: 0x15E33 / 89651
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_412() //Position: 0x15E51 / 89681
{
	return;
}

void Function_413(struct<57> Param0) //Position: 0x15E57 / 89687
{
	strcpy(&Param0 + 24, "EVT-RESP_Z", 16);
	Param0 = 119207;
	*(&Param0 + 8) = 89753;
	*(&Param0 + 16) = 89747;
	Param0.f_56 = 1;
	return;
}

void Function_414() //Position: 0x15E93 / 89747
{
	return;
}

int Function_415() //Position: 0x15E99 / 89753
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	bool bVar16;
	bool bVar17;
	struct<2> Var18;
	int iVar20;
	int iVar21;
	bool bVar22;
	struct<25> Var23;
	struct<2> Var52;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	bool bVar61;
	int iVar62;
	int iVar63;
	bool bVar64;
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	iVar0 = GET_NUM_EVENT_RESPONSES();
	iVar2 = 0;
	while (iVar2 < (iVar0 - 1))
	{
		uVar14 = GET_EVENT_FOR_RESPONSE(iVar2);
		switch (GET_EVENT_RESPONSE_ID(iVar2))
		{
			case 0x00000001:
				iVar9 = GET_EVENT_TARGET_AS_PHYSINST(&uVar14);
				if (IS_PHYSINST_VALID(&iVar9))
				{
					bVar10 = GET_OBJECT_FROM_PHYSINST(&iVar9);
					if (!DECOR_CHECK_EXIST(&bVar10, "nnoExplode"))
					{
						GET_OBJECT_POSITION(&bVar10, &Var3);
						bVar22 = GET_EVENT_PERPETRATOR(&uVar14);
						if (IS_OBJECT_VALID(&bVar22))
						{
							Function_28(&Var3, "DynamiteExplosion", GET_ACTOR_FROM_OBJECT(&bVar22), 0);
						}
						else
						{
							Function_28(&Var3, "DynamiteExplosion", 0, 0);
						}
					}
					if (!DECOR_CHECK_EXIST(&bVar10, "nnoDestroy"))
					{
						DESTROY_OBJECT(&bVar10);
					}
					else
					{
						SET_PROP_HEALTH(&bVar10, 10.0f);
						DECOR_REMOVE(&bVar10, "nnoDestroy");
					}
				}
				break;
			
			case 0x00000002:
				iVar9 = GET_EVENT_TARGET_AS_PHYSINST(&uVar14);
				if (IS_PHYSINST_VALID(&iVar9))
				{
					bVar10 = GET_OBJECT_FROM_PHYSINST(&iVar9);
					if (!DECOR_CHECK_EXIST(&bVar10, "nnoExplode"))
					{
						GET_OBJECT_POSITION(&bVar10, &Var3);
						bVar22 = GET_EVENT_PERPETRATOR(&uVar14);
						if (IS_OBJECT_VALID(&bVar22))
						{
							Function_28(&Var3, "FireBottleExplosion", GET_ACTOR_FROM_OBJECT(&bVar22), 0);
						}
						else
						{
							Function_28(&Var3, "FireBottleExplosion", 0, 0);
						}
					}
					if (!DECOR_CHECK_EXIST(&bVar10, "nnoDestroy"))
					{
						DESTROY_OBJECT(&bVar10);
					}
					else
					{
						SET_PROP_HEALTH(&bVar10, 10.0f);
						DECOR_REMOVE(&bVar10, "nnoDestroy");
					}
				}
				break;
			
			case 0x00000003:
				iVar9 = GET_EVENT_TARGET_AS_PHYSINST(&uVar14);
				if (IS_PHYSINST_VALID(&iVar9))
				{
					bVar10 = GET_OBJECT_FROM_PHYSINST(&iVar9);
					if (!DECOR_CHECK_EXIST(&bVar10, "nnoExplode"))
					{
						GET_OBJECT_POSITION(&bVar10, &Var3);
						bVar22 = GET_EVENT_PERPETRATOR(&uVar14);
						if (IS_OBJECT_VALID(&bVar22))
						{
							Function_28(&Var3, "KeroseneLampExplosion", GET_ACTOR_FROM_OBJECT(&bVar22), 0);
						}
						else
						{
							Function_28(&Var3, "KeroseneLampExplosion", 0, 0);
						}
					}
					if (!DECOR_CHECK_EXIST(&bVar10, "nnoDestroy"))
					{
						DESTROY_OBJECT(&bVar10);
					}
					else
					{
						SET_PROP_HEALTH(&bVar10, 10.0f);
						DECOR_REMOVE(&bVar10, "nnoDestroy");
					}
				}
				break;
			
			case 0x00000004:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					DESTROY_OBJECT(&bVar10);
				}
				break;
			
			case 0x00000005:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					bVar22 = GET_EVENT_PERPETRATOR(&uVar14);
					if (IS_OBJECT_VALID(&bVar22))
					{
						Function_28(&Var3, "GrenadeExplosion", GET_ACTOR_FROM_OBJECT(&bVar22), 1);
						Function_28(&Var3, "FireBottleExplosion", GET_ACTOR_FROM_OBJECT(&bVar22), 1);
					}
					else
					{
						Function_28(&Var3, "GrenadeExplosion", 0, 1);
						Function_28(&Var3, "FireBottleExplosion", 0, 1);
					}
					DESTROY_OBJECT(&bVar10);
				}
				break;
			
			case 0x00000007:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					Var3 = Vector(0.0f, 0.0f, 0.0f);
					Var5 = Vector(0.0f, 0.0f, 0.0f);
					CREATE_GRINGO_ON_OBJECT(&bVar10, "sliding_gate_gringo", "$/content/scripting/gringo/simplegringo/sliding_gate", Var3, Var5);
				}
				break;
			
			case 0x00000036:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (!IS_ACTOR_PLAYER(&iVar8))
						{
							ACTOR_ENABLE_VARIABLE_MESH(&iVar8, 0, false);
							ACTOR_ENABLE_VARIABLE_MESH(&iVar8, 1, true);
							ACTOR_ENABLE_VARIABLE_MESH(&iVar8, 2, true);
							ACTOR_ENABLE_VARIABLE_MESH(&iVar8, 3, false);
							ACTOR_ENABLE_VARIABLE_MESH(&iVar8, 4, false);
							Function_30(&iVar8, 0);
							if (!Function_34(&iVar8))
							{
								if (Function_535(&iVar8) == GET_AMBIENT_LAYOUT())
								{
									Function_529(&iVar8, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
								}
							}
						}
					}
				}
				break;
			
			case 0x00000008:
			case 0x00000009:
				break;
			
			case 0x0000000A:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (!Function_157(&bVar10))
					{
						bVar29 = false;
						if (DECOR_CHECK_EXIST(&bVar10, "corpse_loot_gringo"))
						{
							if (DECOR_GET_BOOL(&bVar10, "corpse_loot_gringo") == 1)
							{
								bVar29 = true;
							}
							DECOR_REMOVE(&bVar10, "corpse_loot_gringo");
						}
						else
						{
							bVar29 = true;
						}
						if (DECOR_CHECK_EXIST(&bVar10, "ReturnCorpse"))
						{
							ADD_OBJECT_TO_OBJECTSET(&bVar10, GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(&bVar10, "ReturnCorpse")));
						}
						if (bVar29)
						{
							Var3 = Vector(0.0f, 0.0f, 0.0f);
							Var5 = Vector(0.0f, 0.0f, 0.0f);
							iVar30 = 0;
							uVar31 = Vector(0.0f, 0.0f, 0.0f);
							uVar33 = Vector(0.0f, 0.0f, 0.0f);
							uVar35 = Vector(0.0f, 0.0f, 0.0f);
							uVar37 = Vector(0.0f, 0.0f, 0.0f);
							if (!DECOR_CHECK_EXIST(&bVar10, "NoEating"))
							{
								if (DECOR_CHECK_EXIST(&bVar10, "AddCoyoteEatingToCorpse"))
								{
									DECOR_REMOVE(&bVar10, "AddCoyoteEatingToCorpse");
									PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(&bVar10, &iVar30, &uVar31, &uVar33, &uVar35, &uVar37);
									uVar39 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &bVar10, Function_31(), "coyote_eating", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
									DECOR_SET_OBJECT(&uVar39, "GringoTarg", &bVar10);
								}
								else if (DECOR_CHECK_EXIST(&bVar10, "AddBearEatingToCorpse"))
								{
									DECOR_REMOVE(&bVar10, "AddBearEatingToCorpse");
									PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(&bVar10, &iVar30, &uVar31, &uVar33, &uVar35, &uVar37);
									uVar39 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &bVar10, Function_31(), "bear_eating", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
									DECOR_SET_OBJECT(&uVar39, "GringoTarg", &bVar10);
								}
								else if (DECOR_CHECK_EXIST(&bVar10, "AddWolfEatingToCorpse"))
								{
									DECOR_REMOVE(&bVar10, "AddWolfEatingToCorpse");
									PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(&bVar10, &iVar30, &uVar31, &uVar33, &uVar35, &uVar37);
									uVar39 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &bVar10, Function_31(), "wolf_eating", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
									DECOR_SET_OBJECT(&uVar39, "GringoTarg", &bVar10);
								}
								else if (DECOR_CHECK_EXIST(&bVar10, "AddCougarEatingToCorpse"))
								{
									DECOR_REMOVE(&bVar10, "AddCougarEatingToCorpse");
									PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(&bVar10, &iVar30, &uVar31, &uVar33, &uVar35, &uVar37);
									uVar39 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &bVar10, Function_31(), "cougar_eating", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
									DECOR_SET_OBJECT(&uVar39, "GringoTarg", &bVar10);
								}
							}
							else
							{
								DECOR_REMOVE(&bVar10, "NoEating");
							}
							if (Function_111(6))
							{
								if (!DECOR_CHECK_EXIST(&bVar10, "nNoLooting"))
								{
									uVar15 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Global_10996, "Loot", "Loot_Corpse", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
									ATTACH_OBJECTS(StackVal, StackVal, &uVar15, &bVar10, "pelvis", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
									GIVE_OBJECT_TO_LAYOUT(&uVar15, &bVar10);
									GRINGO_SET_TARGET_OBJECT(GET_GRINGO_FROM_OBJECT(&uVar15), &bVar10, 1);
									if (DECOR_CHECK_EXIST(&bVar10, "LootCorpse_CreateBlip"))
									{
										if (!DECOR_CHECK_EXIST(&bVar10, "LootCorpse_WhichBlip"))
										{
											ADD_BLIP_FOR_OBJECT(&uVar15, 325, 0.0f, 2, 0);
										}
										else
										{
											ADD_BLIP_FOR_OBJECT(&uVar15, DECOR_GET_INT(&bVar10, "LootCorpse_WhichBlip"), 0.0f, 2, 0);
											DECOR_REMOVE(&bVar10, "LootCorpse_WhichBlip");
										}
										DECOR_REMOVE(&bVar10, "LootCorpse_CreateBlip");
									}
									else
									{
										uVar40 = ADD_BLIP_FOR_OBJECT(&uVar15, 456, 0.0f, 0, 0);
										SET_BLIP_MAX_DISTANCE(&uVar40, 0,5f);
										UNK_0x1E98AFEC(&uVar40, 1);
										SET_BLIP_SCALE(&uVar40, 0,6f);
										SET_BLIP_COLOR(&uVar40, 0,35f, 0,35f, 0,35f, 0,65f);
									}
									if (DECOR_CHECK_EXIST(&bVar10, "lootCorpse_objSet"))
									{
										ADD_OBJECT_TO_OBJECTSET(&uVar15, GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(&bVar10, "lootCorpse_objSet")));
									}
								}
								else
								{
									DECOR_REMOVE(&bVar10, "nNoLooting");
								}
							}
						}
					}
				}
				break;
			
			case 0x00000038:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					iVar41 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(&uVar14));
					cVar42 = GET_ACTOR_FROM_OBJECT(&bVar10);
					if (IS_ACTOR_VALID(&cVar42))
					{
						bVar43 = GET_ACTOR_ENUM(&cVar42);
						if (bVar43 <= 976 && bVar43 >= 1007)
						{
							if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
							{
								if (&bVar10 == DECOR_GET_OBJECT(&Global_54076, "HorseStolen"))
								{
									DECOR_SET_FLOAT(&Global_54076, "PlayerHorse_DeathTime", GET_CURRENT_GAME_TIME());
								}
							}
							if (&cVar42 == &Global_21369 + 72)
							{
								if (!DECOR_CHECK_EXIST(&Global_54076, "PlayerHorse_DeathTime"))
								{
									DECOR_SET_FLOAT(&Global_54076, "PlayerHorse_DeathTime", GET_CURRENT_GAME_TIME());
								}
							}
							if (&cVar42 == &Global_21369 + 72)
							{
								DECOR_SET_BOOL(&Global_54076, "TriggerNewHorse", true);
							}
						}
						if (&bVar10 == GET_OBJECT_FROM_ACTOR(&Global_54076) && &bVar10 == GET_OBJECT_FROM_ACTOR(GET_MOUNT(&Global_54076)))
						{
							if (IS_ACTOR_VALID(&iVar41))
							{
								if (GET_ACTOR_ENUM(&iVar41) <= 1155 && GET_ACTOR_ENUM(&iVar41) >= 1176)
								{
									ADD_BLOOD_TO_ACTOR(StackVal, &cVar42, Vector(0,1f, 1,1f, -0,1f), 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(StackVal, &cVar42, Vector(-0,1f, 1,1f, -0,1f), 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(StackVal, &cVar42, Vector(0.0f, 1,3f, -0,1f), 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(StackVal, &cVar42, Vector(0.0f, 1,2f, -0,1f), 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(StackVal, &cVar42, Vector(-0,1f, 1,25f, -0,1f), 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(StackVal, &cVar42, Vector(0.0f, 1,1f, -0,1f), 0, 1, 0);
									if (DECOR_CHECK_EXIST(&bVar10, "LastCarrierPlayer"))
									{
										if (!IS_ACTOR_MALE(&cVar42))
										{
											if (CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), &bVar10, 1f, 1117126656, 1, 1, 0))
											{
												if (!HAS_ACHIEVEMENT_BEEN_PASSED(20))
												{
													AWARD_ACHIEVEMENT(20);
												}
											}
										}
									}
									if (Function_8(&iVar41, 0) <= 7,25f)
									{
										Var44 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_303("HitByTrain_FX") };
										Function_146(&bVar10);
										Var52 = Function_146(&bVar10);
										if (!UNK_0x6745191B(StackVal, CREATE_RMPTFX_EMITTER_IN_LAYOUT(&Global_46715, &Var44, "script_train_squash_ped", Var52), Vector(0.0f, 0.0f, 0.0f)))
										{
										}
										if (DECOR_CHECK_EXIST(&bVar10, "CrimeHoldupBadguy"))
										{
											DECOR_SET_BOOL(&Global_54076, "CHBadguy_Gone", true);
										}
										DESTROY_OBJECT(&bVar10);
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x0000000B:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&iVar8))
						{
							if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&iVar8, "Hogtie")))
							{
								if (IS_ACTOR_PLAYER(&iVar8))
								{
									AI_DONT_HARM_ACTOR(&iVar8);
								}
								Function_29();
								Function_29();
								uVar13 = CREATE_GRINGO_ON_OBJECT(&iVar8, "Hogtie", "$/content/scripting/gringo/simplegringo/hogtie", Function_29(), Function_29());
								if (IS_OBJECT_VALID(&uVar13))
								{
									Function_29();
									Function_29();
									ATTACH_OBJECTS(&uVar13, &iVar8, "spine00", Function_29(), Function_29(), 4294967295);
								}
							}
						}
					}
				}
				break;
			
			case 0x00000034:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie")))
					{
						Var3 = Vector(0.0f, 0.0f, 0.0f);
						Var5 = Vector(0.0f, 0.0f, 0.0f);
						if (IS_ACTOR_VALID(&iVar8) && IS_ACTOR_PLAYER(&iVar8))
						{
							AI_DONT_HARM_ACTOR(&iVar8);
						}
					}
				}
				break;
			
			case 0x00000027:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (GET_OBJECT_TYPE(&bVar10) == 15)
				{
					if (GET_ACTOR_FROM_OBJECT(&bVar10) == &Global_54076)
					{
						DECOR_SET_BOOL(&bVar10, "coplasso", true);
					}
				}
				break;
			
			case 0x0000000C:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (!Function_145(GET_ACTOR_FROM_OBJECT(&bVar10)))
					{
						if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie_Pickup")))
						{
							Function_29();
							Function_29();
							uVar13 = CREATE_GRINGO_ON_OBJECT(&bVar10, "Hogtie_Pickup", "$/content/scripting/gringo/simplegringo/hogtie_pickup", Function_29(), Function_29());
							if (IS_OBJECT_VALID(&uVar13))
							{
								DECOR_SET_OBJECT(&bVar10, "HogtiedGringoAttached", &uVar13);
							}
						}
						bVar22 = GET_EVENT_PERPETRATOR(&uVar14);
						if (IS_OBJECT_VALID(&bVar22))
						{
							if (GET_ACTOR_FROM_OBJECT(&bVar22) == Function_77())
							{
								Global_21369.f_228++;
								if (Global_21369.f_228 >= Function_57(262))
								{
									Function_56(262, Global_21369.f_228, 0);
								}
							}
						}
					}
				}
				break;
			
			case 0x0000000D:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (DECOR_CHECK_EXIST(&bVar10, "lasso"))
					{
						DECOR_REMOVE(&bVar10, "lasso");
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie_Pickup")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie_Pickup"));
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie"));
					}
				}
				break;
			
			case 0x00000010:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				bVar10 = DECOR_GET_OBJECT(&uVar14, "__hjk_animal");
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (IS_ACTOR_HORSE(GET_ACTOR_FROM_OBJECT(&bVar10)) && ANIMAL_ACTOR_GET_DOMESTICATION(GET_ACTOR_FROM_OBJECT(&bVar10)) == 0)
					{
						if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar11)))
						{
							if (!IS_SCRIPT_VALID(&uLocal_1))
							{
								if (!IS_DEBUGKEY_DOWN(50))
								{
									*(&iVar27 + 8) = GET_ACTOR_FROM_OBJECT(&bVar10);
									iVar27 = GET_ACTOR_FROM_OBJECT(&bVar11);
									uLocal_1 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/scripting/DesignerDefined/TameWildHorse", &iVar27, 4, 0);
								}
							}
						}
					}
					if (DECOR_CHECK_EXIST(&bVar10, "HorseLeash"))
					{
						DESTROY_OBJECT(DECOR_GET_OBJECT(&bVar10, "HorseLeash"));
						DECOR_REMOVE(&bVar10, "HorseLeash");
					}
					if (IS_ACTOR_HORSE(GET_ACTOR_FROM_OBJECT(&bVar10)) || IS_ACTOR_MULE(GET_ACTOR_FROM_OBJECT(&bVar10)))
					{
						if (ANIMAL_ACTOR_GET_DOMESTICATION(GET_ACTOR_FROM_OBJECT(&bVar10)) != 1)
						{
							ACCESSORIZE_HORSE(GET_ACTOR_FROM_OBJECT(&bVar10), 2);
							if (&bVar11 == GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)))
							{
								if (&bVar10 == GET_OBJECT_FROM_ACTOR(&Global_21369 + 72))
								{
									iVar54 = Function_225(8, 0, 5);
									iVar55 = Function_224(iVar54);
									iVar56 = Function_225(7, 0, 5);
									Function_221(iVar56, FLOOR(GET_CURRENT_GAME_TIME()));
									if (iVar55 > 3600)
									{
										SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(&bVar10), 100.0f);
									}
									else if (iVar55 > 900)
									{
										SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(&bVar10), 85.0f);
									}
									else
									{
										SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(&bVar10), 70.0f);
									}
								}
								else
								{
									SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(&bVar10), 70.0f);
								}
							}
						}
					}
					if (&bVar11 == GET_OBJECT_FROM_ACTOR(&Global_54076))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bVar10)))
						{
							SET_BLIP_FLAG(GET_BLIP_ON_OBJECT(&bVar10), 1024, 0);
						}
					}
				}
				break;
			
			case 0x00000011:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				bVar10 = DECOR_GET_OBJECT(&uVar14, "__hjk_animal");
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (&bVar11 == GET_OBJECT_FROM_ACTOR(&Global_54076))
					{
						if (&bVar10 == GET_OBJECT_FROM_ACTOR(&Global_21369 + 72))
						{
							iVar57 = Function_225(7, 0, 5);
							iVar58 = Function_224(iVar57);
							iVar58 = (ROUND(GET_CURRENT_GAME_TIME()) - iVar58);
							iVar59 = Function_225(8, 0, 5);
							iVar60 = Function_224(iVar59);
							bVar61 = (iVar58 + iVar60);
							if (bVar61 <= 0)
							{
								bVar61 = false;
							}
							Function_221(iVar59, bVar61);
						}
					}
				}
				break;
			
			case 0x0000000F:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (IS_OBJECT_VALID(&bVar11) && IS_OBJECT_VALID(&bVar10))
					{
						if (GET_OBJECT_TYPE(&bVar11) == 15)
						{
							if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar11)))
							{
								if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar11)))
								{
									if (Function_528(&bVar10, &bVar11))
									{
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x0000002E:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar11) && IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar11) != 15 && GET_OBJECT_TYPE(&bVar10) != 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar11)) && IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar10)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar11)) && !Function_145(GET_ACTOR_FROM_OBJECT(&bVar10)))
							{
								if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "BedStealthKill"))
								{
									Function_211(Function_525(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "BedStealthKill_R"))
								{
									Function_211(Function_522(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "__GroundAttack"))
								{
									Function_211(Function_517(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "n__WallPin"))
								{
									Function_146(&bVar11);
									*(&Var23 + 12) = Function_146(&bVar11);
									Function_516(&bVar11);
									Var23 = Function_516(&bVar11);
									Function_211(Function_512(FIND_NAMED_LAYOUT("Formations"), 0, &Var23, &bVar11, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "__ChairSmash"))
								{
									Function_211(Function_509(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 0, 0, 1));
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "__tknExecutionBack"))
								{
									switch (RAND_INT_RANGE(false, 5))
									{
										case 0x00000000:
											Function_211(Function_506(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_211(Function_503(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_211(Function_500(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_211(Function_497(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_211(Function_494(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000005:
											Function_211(Function_491(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "__pistolExecution"))
								{
									switch (RAND_INT_RANGE(false, 5))
									{
										case 0x00000000:
											Function_211(Function_488(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_211(Function_485(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_211(Function_482(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_211(Function_479(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_211(Function_476(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000005:
											Function_211(Function_473(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "__pistolKneelExecution"))
								{
									Function_211(Function_470(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "__rifleExecution"))
								{
									switch (RAND_INT_RANGE(false, 4))
									{
										case 0x00000000:
											Function_211(Function_193(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_211(Function_190(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_211(Function_187(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_211(Function_184(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_211(Function_181(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "__rifleKneelExecution"))
								{
									Function_211(Function_467(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "__tknExecution"))
								{
									switch (RAND_INT_RANGE(false, 4))
									{
										case 0x00000000:
											Function_211(Function_464(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_211(Function_461(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_211(Function_458(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_211(Function_455(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_211(Function_452(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "__tknKneelExecution"))
								{
									Function_211(Function_449(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
								}
							}
						}
					}
				}
				break;
			
			case 0x0000002F:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				if (IS_OBJECT_VALID(&bVar11) && IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar11)))
				{
					if (DECOR_CHECK_STRING(&uVar14, "__HorseAgitated", "__BuckRider"))
					{
						PLAYER_RUMBLE("HorseBuckRumble", 4294967295, 0);
					}
					else
					{
						PLAYER_RUMBLE("HorseAgitatedRumble", 4294967295, 0);
					}
				}
				break;
			
			case 0x00000032:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				if (IS_OBJECT_VALID(&bVar11))
				{
					if (GET_OBJECT_TYPE(&bVar11) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar11)))
						{
							Function_146(&bVar11);
							*(&Var23 + 12) = Function_146(&bVar11);
							Function_516(&bVar11);
							Var23 = Function_516(&bVar11);
							Var23.f_24 = 0;
							Function_211(Function_446(FIND_NAMED_LAYOUT("Formations"), 0, &Var23, GET_PLAYER_ACTOR(0), &bVar11, 1, 0, 0));
						}
					}
				}
				break;
			
			case 0x00000033:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				if (IS_OBJECT_VALID(&bVar11))
				{
					if (GET_OBJECT_TYPE(&bVar11) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar11)))
						{
							Function_146(&bVar11);
							*(&Var23 + 12) = Function_146(&bVar11);
							Function_516(&bVar11);
							Var23 = Function_516(&bVar11);
							Var23.f_24 = 0;
							Function_211(Function_443(FIND_NAMED_LAYOUT("Formations"), 0, &Var23, GET_PLAYER_ACTOR(0), &bVar11, 1, 0, 0));
						}
					}
				}
				break;
			
			case 0x00000014:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&iVar8))
						{
							ENABLE_VEHICLE_SEAT(&iVar8, false, 0);
						}
					}
				}
				break;
			
			case 0x00000016:
				bVar10 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iVar8, "maximGun", "$/fragments/p_gen_gatlingMaxim02x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), true);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_OBJECT_VALID(&bVar10))
						{
							bVar1 = false;
							while (bVar1 <= GET_NUM_AVAILABLE_SEATS(&iVar8))
							{
								ENABLE_VEHICLE_SEAT(&iVar8, bVar1, 0);
								bVar1++;
							}
							SET_PROP_AI_OBSTACLE_ENABLED(&bVar10, 0);
							SET_OBJECT_COLLIDE_WITH_OBJECT(&bVar10, &iVar8, false);
							iVar9 = GET_PHYSINST_FROM_OBJECT(&iVar8);
							if (IS_PHYSINST_VALID(&iVar9))
							{
								GET_LOCATOR_OFFSETS(&iVar9, "gattling_attach", &Var3, &Var5);
								Var5.f_4 = (StackVal + 180.0f);
								ATTACH_OBJECTS(&bVar10, &iVar8, Function_31(), Var3, Var5, 4294967295);
								uVar13 = FIND_OBJECT_IN_OBJECT(&bVar10, "shootBabyShoot");
								if (IS_OBJECT_VALID(&uVar13))
								{
									DESTROY_OBJECT(&uVar13);
								}
								CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &bVar10, "shootBabyShoot", "stagegat_attach", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
							}
						}
					}
				}
				break;
			
			case 0x00000015:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&iVar8))
						{
							bVar1 = false;
							while (bVar1 <= GET_NUM_AVAILABLE_SEATS(&iVar8))
							{
								ENABLE_VEHICLE_SEAT(&iVar8, bVar1, 0);
								bVar1++;
							}
							bVar10 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iVar8, "maximGun", "$/fragments/p_gen_gatlingMaxim02x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), true);
							if (IS_OBJECT_VALID(&bVar10))
							{
								SET_PROP_AI_OBSTACLE_ENABLED(&bVar10, 0);
								SET_OBJECT_COLLIDE_WITH_OBJECT(&bVar10, &iVar8, false);
								iVar9 = GET_PHYSINST_FROM_OBJECT(&iVar8);
								if (IS_PHYSINST_VALID(&iVar9))
								{
									GET_LOCATOR_OFFSETS(&iVar9, "gattling_attach", &Var3, &Var5);
									Var5.f_4 = (StackVal + 180.0f);
									ATTACH_OBJECTS(&bVar10, &iVar8, Function_31(), Var3, Var5, 4294967295);
									uVar13 = FIND_OBJECT_IN_OBJECT(&bVar10, "shootBabyShoot");
									if (IS_OBJECT_VALID(&uVar13))
									{
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(&uVar13), "MaximShoot", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(&uVar13), "MaximShootWagon", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(&uVar13), "MaximShootTruck", 1);
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x00000017:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&iVar8))
						{
							bVar1 = 2;
							while (bVar1 < (GET_NUM_AVAILABLE_SEATS(&iVar8) - 1))
							{
								ENABLE_VEHICLE_SEAT(&iVar8, bVar1, 0);
								bVar1++;
							}
							bVar10 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iVar8, "gatlingGun", "$/fragments/p_gen_gatlinggun01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), true);
							if (IS_OBJECT_VALID(&bVar10))
							{
								SET_PROP_AI_OBSTACLE_ENABLED(&bVar10, 0);
								SET_OBJECT_COLLIDE_WITH_OBJECT(&bVar10, &iVar8, false);
								iVar9 = GET_PHYSINST_FROM_OBJECT(&iVar8);
								if (IS_PHYSINST_VALID(&iVar9))
								{
									GET_LOCATOR_OFFSETS(&iVar9, "gattling_attach", &Var3, &Var5);
									Var5.f_4 = (StackVal + 180.0f);
									ATTACH_OBJECTS(&bVar10, &iVar8, Function_31(), Var3, Var5, 4294967295);
									uVar13 = FIND_OBJECT_IN_OBJECT(&bVar10, "shootBabyShoot");
									if (IS_OBJECT_VALID(&uVar13))
									{
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(&uVar13), "GatlingShoot", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(&uVar13), "GatlingShootCoach", 1);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(&uVar13), "GatlingShootWagon", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(&uVar13), "GatlingShootTruck", 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x00000018:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(&bVar10), 2, 0);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(&bVar10), 3, 0);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(&bVar10), 4, 0);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(&bVar10), 5, 0);
				break;
			
			case 0x00000019:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(&bVar10), false, 0);
				break;
			
			case 0x0000001A:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&iVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &iVar8, Function_31(), "$/content/scripting/gringo/simplegringo/trainCarArmored", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x0000001B:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&iVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &iVar8, Function_31(), "$/content/scripting/gringo/simplegringo/trainCarBaggage", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x0000001C:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&iVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &iVar8, Function_31(), "$/content/scripting/gringo/simplegringo/trainCarBox01", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x0000001D:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&iVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &iVar8, Function_31(), "$/content/scripting/gringo/simplegringo/trainCarBox02", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x0000001E:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&iVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &iVar8, Function_31(), "$/content/scripting/gringo/simplegringo/trainCarBox03", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x0000001F:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&iVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &iVar8, Function_31(), "$/content/scripting/gringo/simplegringo/trainCarBox04", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x00000020:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&iVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &iVar8, Function_31(), "$/content/scripting/gringo/simplegringo/trainCarBox05", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x00000021:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&iVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &iVar8, Function_31(), "$/content/scripting/gringo/simplegringo/trainCarCaboose", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x00000022:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&iVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &iVar8, Function_31(), "$/content/scripting/gringo/simplegringo/trainCarCattle", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x00000023:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&iVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &iVar8, Function_31(), "$/content/scripting/gringo/simplegringo/trainCarFlat", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x00000024:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&iVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &iVar8, Function_31(), "$/content/scripting/gringo/simplegringo/trainCar01", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
							bVar1 = false;
							while (bVar1 <= GET_NUM_AVAILABLE_SEATS(&iVar8))
							{
								ENABLE_VEHICLE_SEAT(&iVar8, bVar1, 1);
								bVar1++;
							}
						}
					}
				}
				break;
			
			case 0x00000025:
				if (Global_53580.f_1952)
				{
					bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
					if (IS_OBJECT_VALID(&bVar10))
					{
						if (GET_OBJECT_TYPE(&bVar10) == 15)
						{
							iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
							if (IS_ACTOR_VALID(&iVar8))
							{
								uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &iVar8, Function_31(), "$/content/scripting/gringo/simplegringo/trainCarSteamer", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
							}
						}
					}
				}
				else
				{
					Global_53580.f_1952 = 1;
				}
				break;
			
			case 0x00000026:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&iVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &iVar8, Function_31(), "$/content/scripting/gringo/simplegringo/trainCarWood", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x00000028:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				bVar10 = DECOR_GET_OBJECT(&uVar14, "__hjk_animal");
				iVar20 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(&uVar14));
				bVar7 = DECOR_GET_VECTOR(&uVar14, "__hjk_perp_position", &Var18);
				if (IS_OBJECT_VALID(&bVar11) && IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar11) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar11)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar11)))
							{
								if (!bVar7)
								{
									GET_OBJECT_POSITION(GET_ACTOR_FROM_OBJECT(&bVar11), &Var18);
								}
								if (Function_442(StackVal, &bVar10, Var18))
								{
									Function_211(Function_438(FIND_NAMED_LAYOUT("Formations"), 0, &bVar10, 1, 0, 0));
								}
								else
								{
									Function_211(Function_434(FIND_NAMED_LAYOUT("Formations"), 0, &bVar10, 1, 0, 0));
								}
							}
						}
					}
				}
				break;
			
			case 0x00000029:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				bVar10 = DECOR_GET_OBJECT(&uVar14, "__hjk_vehicle");
				iVar20 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(&uVar14));
				if (IS_OBJECT_VALID(&bVar11) && IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar11) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar11)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar11)))
							{
								Function_211(Function_430(FIND_NAMED_LAYOUT("Formations"), 0, &bVar10, 1, 0, 0));
							}
						}
					}
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VEHICLE(&iVar8))
						{
							if (GET_OBJECT_TYPE(&bVar11) == 15)
							{
								iVar62 = GET_ACTOR_FROM_OBJECT(&bVar11);
							}
							bVar1 = false;
							while (bVar1 <= GET_NUM_AVAILABLE_SEATS(&iVar8))
							{
								iVar21 = GET_ACTOR_IN_VEHICLE_SEAT(&iVar8, bVar1);
								if ((IS_ACTOR_VALID(&iVar20) && &iVar21 == &iVar62) && &iVar21 == &iVar20)
								{
									TASK_VEHICLE_LEAVE(&iVar21);
								}
								bVar1++;
							}
						}
					}
				}
				break;
			
			case 0x0000002A:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				bVar10 = DECOR_GET_OBJECT(&uVar14, "__hjk_animal");
				if (IS_OBJECT_VALID(&bVar11) && IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar11) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar11)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar11)))
							{
								uVar12 = GET_OBJECT_FROM_ACTOR(GET_MOUNT(GET_ACTOR_FROM_OBJECT(&bVar11)));
								uVar12 = &uVar12;
								Function_211(Function_426(FIND_NAMED_LAYOUT("Formations"), 0, &uVar12, &bVar10, 1, 0, 0));
							}
						}
					}
				}
				break;
			
			case 0x0000002B:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				bVar10 = DECOR_GET_OBJECT(&uVar14, "__hjk_vehicle");
				if (IS_OBJECT_VALID(&bVar11) && IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar11) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar11)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar11)))
							{
								uVar12 = GET_OBJECT_FROM_ACTOR(GET_MOUNT(GET_ACTOR_FROM_OBJECT(&bVar11)));
								bVar17 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&bVar10));
								bVar16 = bVar17;
								switch (bVar16)
								{
									case 0x000004AD:
										Function_211(Function_421(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, &bVar10, &uVar12, 1, 0, 0));
										break;
									
									default:
										Function_211(Function_416(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, &bVar10, &uVar12, 1, 0, 0));
										break;
									}
								}
							}
						}
				}
				break;
			
			case 0x0000002C:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				bVar10 = DECOR_GET_OBJECT(&uVar14, "__hjk_animal");
				if (IS_OBJECT_VALID(&bVar11) && IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar11) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar11)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar11)))
							{
								uVar12 = GET_OBJECT_FROM_ACTOR(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(&bVar11)));
								Function_211(Function_416(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, &bVar10, &uVar12, 1, 0, 0));
							}
						}
					}
				}
				break;
			
			case 0x0000002D:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				bVar10 = DECOR_GET_OBJECT(&uVar14, "__hjk_vehicle");
				if (IS_OBJECT_VALID(&bVar11) && IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar11) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar11)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar11)))
							{
								uVar12 = GET_OBJECT_FROM_ACTOR(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(&bVar11)));
							}
						}
					}
				}
				break;
			
			case 0x00000037:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
					if (GET_LAST_ATTACKER(&iVar8) == &Global_54076)
					{
						iVar63 = Function_225(6, 3, 5);
						bVar64 = Function_224(iVar63);
						if (Global_43789 == Global_46760[0])
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "armv_saloon_set")) || IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_ARMAddKO")))
							{
								Function_87(&bVar64, 1);
							}
						}
						else if (Global_43789 == Global_46796[1])
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "ratv_saloon")))
							{
								Function_87(&bVar64, 2);
							}
						}
						else if (Global_43789 == Global_46816[1])
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "thiv_saloon_set")) || IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_THIAddKO")))
							{
								Function_87(&bVar64, 4);
							}
						}
						else if (Global_43789 == Global_46850[0])
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "escv_cantina_set")))
							{
								Function_87(&bVar64, 8);
							}
						}
						else if (Global_43789 == Global_46866[0])
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "chuv_knockout_set")))
							{
								Function_87(&bVar64, 16);
							}
						}
						else if (Global_43789 == Global_46894[2])
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "casv_bar_set")))
							{
								Function_87(&bVar64, 32);
							}
						}
						else if (Global_43789 == Global_46914[0])
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "blkv_saloon_set")))
							{
								Function_87(&bVar64, 64);
							}
						}
						Function_221(iVar63, bVar64);
						if (bVar64 != (128 - 1) && !Function_9(bVar64, 128))
						{
							Function_87(&bVar64, 128);
							AWARD_ACHIEVEMENT(15);
						}
					}
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie")))
					{
						Var3 = Vector(0.0f, 0.0f, 0.0f);
						Var5 = Vector(0.0f, 0.0f, 0.0f);
						if (IS_ACTOR_VALID(&iVar8) && IS_ACTOR_PLAYER(&iVar8))
						{
							AI_DONT_HARM_ACTOR(&iVar8);
						}
						uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &bVar10, "Hogtie", "$/content/scripting/gringo/simplegringo/hogtie", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						ATTACH_OBJECTS(StackVal, StackVal, &uVar13, &bVar10, "spine00", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
					}
				}
				break;
			
			case 0x00000039:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (DECOR_CHECK_EXIST(&bVar10, "lasso"))
					{
						DECOR_REMOVE(&bVar10, "lasso");
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie_Pickup")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie_Pickup"));
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie"));
					}
					iVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
					if (IS_ACTOR_VALID(&iVar8) && IS_ACTOR_PLAYER(&iVar8))
					{
						AI_CLEAR_DONT_HARM_ACTOR(&iVar8);
					}
				}
				break;
			
			case 0x0000003A:
				iVar9 = GET_EVENT_TARGET_AS_PHYSINST(&uVar14);
				if (IS_PHYSINST_VALID(&iVar9))
				{
					bVar10 = GET_OBJECT_FROM_PHYSINST(&iVar9);
					if (!DECOR_CHECK_EXIST(&bVar10, "nnoExplode"))
					{
						GET_OBJECT_POSITION(&bVar10, &Var3);
						bVar22 = GET_EVENT_PERPETRATOR(&uVar14);
						if (IS_OBJECT_VALID(&bVar22))
						{
							Function_28(&Var3, "DynamiteCrateExp", GET_ACTOR_FROM_OBJECT(&bVar22), 0);
						}
						else
						{
							Function_28(&Var3, "DynamiteCrateExp", 0, 0);
						}
					}
					DESTROY_OBJECT(&bVar10);
				}
				break;
		}
		iVar2++;
	}
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 0;
}

var Function_416(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6, int iParam7) //Position: 0x18E15 / 101909
{
	var uVar0;
	
	if (&bParam5)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&bParam0, Function_31(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&bParam0, "HijackHorseToWagon", 3, 1);
	}
	Function_417(&uVar0, &bParam2, &bParam3, &uParam4);
	if (iParam7 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_417(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x18EAA / 102058
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_420(&uVar0, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_419(&uVar0, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_418(&uVar0, &uParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "CJAir", 0, 1, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 2, &uParam1, "JackWagon_vehLoc", 1, 1, 180f);
}

void Function_418(int iParam0, var uParam1) //Position: 0x18F34 / 102196
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(4,240117f, 2,848692f, -3,453501f), Vector(-14,51869f, 120,8944f, -0,096658f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,705376f, 1,356211f, -0,494339f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

void Function_419(int iParam0, var uParam1) //Position: 0x18FC6 / 102342
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(0,312839f, 2,04426f, -3,890313f), Vector(-11,40707f, -165,6106f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(1,292647f, 1,248807f, -0,071487f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

void Function_420(int iParam0, bool bParam1) //Position: 0x19054 / 102484
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &bParam1, Vector(-3,382136f, 2,293721f, 0,74885f), Vector(-8,276146f, -68,90104f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,051506f, 1,75836f, -0,576088f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

var Function_421(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x190E2 / 102626
{
	var uVar0;
	
	if (&bParam5)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "HijackHorseToPrison", 3, 1);
	}
	Function_422(&uVar0, &uParam2, &uParam3, &uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else if (&bParam6)
	{
		SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam6);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return &uVar0;
}

void Function_422(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1916B / 102763
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_425(&uVar0, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_424(&uVar0, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_423(&uVar0, &uParam2);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "CJAir", 4294967295, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 2, &uParam1, "JackWagon_vehLoc", 4294967295, 0, 180f);
}

void Function_423(int iParam0, int iParam1) //Position: 0x191ED / 102893
{
	SET_CAMERASHOT_ASPECT_RATIO(&iParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(&iParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_OBJECTS(StackVal, StackVal, &iParam0, &iParam1, Function_31(), Vector(5,056644f, 3,927511f, -3,112992f), Vector(2,874524f, 1,177293f, 3,10158f), 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,88904f, 2,422013f, -0,671586f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

void Function_424(int iParam0, int iParam1) //Position: 0x19292 / 103058
{
	SET_CAMERASHOT_ASPECT_RATIO(&iParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(&iParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_OBJECTS(StackVal, StackVal, &iParam0, &iParam1, Function_31(), Vector(0,312839f, 2,04426f, -3,890313f), Vector(2,942502f, -0,251143f, -3,141593f), 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(1,292647f, 1,248807f, -0,071487f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

void Function_425(var uParam0, int iParam1) //Position: 0x19337 / 103223
{
	SET_CAMERASHOT_ASPECT_RATIO(&uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(&uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_OBJECTS(StackVal, StackVal, &uParam0, &iParam1, Function_31(), Vector(-3,382136f, 2,293721f, 0,74885f), Vector(-0,144446f, -1,20255f, 0.0f), 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0,051506f, 1,75836f, -0,576088f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

var Function_426(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x193D8 / 103384
{
	var uVar0;
	
	if (&bParam4)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "HijackHorseToHorse", 2, 1);
	}
	Function_427(&uVar0, &uParam2, &uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_427(var uParam0, var uParam1, var uParam2) //Position: 0x1946A / 103530
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_429(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_428(&uVar0, &uParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,75f, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 1,5f, 1);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(&iVar1, 1000.0f, 0);
	return;
}

void Function_428(int iParam0, var uParam1) //Position: 0x194CA / 103626
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-0,577029f, 1,710976f, -3,825424f), Vector(-3,464217f, 169,0016f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-1,289642f, 1,484856f, -0,158455f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

void Function_429(var uParam0, bool bParam1) //Position: 0x19558 / 103768
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(2,496739f, 1,711366f, -2,162416f), Vector(-5,032116f, 131,0492f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(-0,087791f, 1,409592f, 0,088257f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

var Function_430(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x195E6 / 103910
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Hijack", 2, 1);
	}
	Function_431(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_431(var uParam0, var uParam1) //Position: 0x19669 / 104041
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_433(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_432(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 2.0f, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 2.0f, 1);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&iVar1, 2.0f, 0, 0);
	return;
}

void Function_432(var uParam0, int iParam1) //Position: 0x196BE / 104126
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &iParam1, Vector(-3,366477f, 1,49934f, -2,612921f), Vector(8,860391f, -121,5917f, 1,481497f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	return;
}

void Function_433(var uParam0, bool bParam1) //Position: 0x19731 / 104241
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-0,576806f, 2,573345f, -4,386736f), Vector(-12,39926f, 179,9947f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	return;
}

var Function_434(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x197A0 / 104352
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "HijackHorseLeft", 2, 1);
	}
	Function_435(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_435(var uParam0, var uParam1) //Position: 0x1982C / 104492
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_437(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_436(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,25f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 0,9f, 1, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 1.0f, 2);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(&iVar1, 1000.0f, 0);
	return;
}

void Function_436(int iParam0, var uParam1) //Position: 0x19899 / 104601
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-2,547432f, 1,293245f, -3,496428f), Vector(-2,252641f, -148,9353f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,300987f, 1,122006f, 0,23275f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

void Function_437(var uParam0, bool bParam1) //Position: 0x19927 / 104743
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-1,008554f, 1,956293f, -1,766058f), Vector(-4,570198f, -158,2257f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(-0,208504f, 1,783894f, 0,236752f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

var Function_438(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x199B5 / 104885
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "HijackHorseRight", 2, 1);
	}
	Function_439(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_439(var uParam0, var uParam1) //Position: 0x19A42 / 105026
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_441(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_440(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,25f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 0,9f, 1, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 1.0f, 2);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(&iVar1, 1000.0f, 0);
	return;
}

void Function_440(int iParam0, var uParam1) //Position: 0x19AAF / 105135
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(2,547f, 1,293245f, -3,496428f), Vector(-2,252641f, -148,9353f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,300987f, 1,122006f, 0,23275f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

void Function_441(int iParam0, int iParam1) //Position: 0x19B3D / 105277
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(1,009f, 1,956293f, -1,766058f), Vector(-4,570198f, -158,2257f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,208504f, 1,783894f, 0,236752f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

bool Function_442(bool bParam0, struct<2> Param1) //Position: 0x19BCB / 105419
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	float fVar6;
	
	GET_OBJECT_POSITION(&bParam0, &Var0);
	uVar2 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Param1, StackVal);
	GET_OBJECT_AXIS(&bParam0, &uVar4, 0);
	fVar6 = VDOT(&uVar2, &uVar4);
	if (fVar6 < 0.0f)
	{
		return 1;
	}
	return 0;
}

var Function_443(var uParam0, bool bParam1, float fParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, float fParam7) //Position: 0x19C06 / 105478
{
	var uVar0;
	
	if (&bParam5)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "HorseFalling", 1, 1);
	}
	Function_444(&uVar0, &fParam2, &fParam3, &fParam4);
	if (fParam7 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 1.0f, 4294967295, 0, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_444(var uParam0, float fParam1, float fParam2, float fParam3) //Position: 0x19C95 / 105621
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_445(&uVar0, &fParam1, &fParam2, &fParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 2,5f, 0);
}

void Function_445(var uParam0, struct<25> Param1) //Position: 0x19CCD / 105677
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	Var2 = Vector(0.0f, 0.0f, 0.0f);
	Var4 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	Var2 = Vector(0.0f, 2,12f, -2,422f);
	UNK_0xF76F2BB3(&Var2, &Param1, Param1.f_24, 4);
	Var2 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var2, StackVal);
	Var4 = Vector(0.0f, -30,351f, -15,34f);
	UNK_0xF76F2BB3(&Var4, &Param1, Param1.f_24, 4);
	Var4 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var4, StackVal);
	CAMERA_PROBE(&Var0, Var2, Var4, &uParam2, 23);
	Var0 = (Var0 + 0.0f);
	Var0.f_4 = (StackVal + 1.0f);
	Var0.f_8 = (StackVal + 0.0f);
	SET_CAMERASHOT_POSITION(&uParam0, Var0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &fParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
}

var Function_446(var uParam0, bool bParam1, var uParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, Vector3 vParam7) //Position: 0x19DCA / 105930
{
	var uVar0;
	
	if (&bParam5)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "WagonCrash", 1, 1);
	}
	Function_447(&uVar0, &uParam2, &fParam3, &fParam4);
	if (vParam7 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 1, 0, 1);
		}
	}
	return &uVar0;
}

void Function_447(var uParam0, float fParam1, bool bParam2, var uParam3) //Position: 0x19E57 / 106071
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_448(&uVar0, &fParam1, &bParam2, &uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 4.0f, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&uVar1, 1.0f, 0, 0.0f);
	SET_TRANSITION_COLLISION_PARAMS(&uVar1, 1, 0);
}

void Function_448(var uParam0, struct<25> Param1) //Position: 0x19E9E / 106142
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	Var0 = Vector(9,270768f, 7,965437f, 3,153887f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&uParam0, Var0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &uParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,407577f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,407577f, 0.0f), 1);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &uParam2, 507);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &fParam3, 129);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,407577f, 0.0f), 1);
}

var Function_449(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x19F9B / 106395
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknKneelExecution", 1, 1);
	}
	Function_450(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_450(var uParam0, var uParam1) //Position: 0x1A029 / 106537
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_451(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_451(var uParam0, bool bParam1) //Position: 0x1A080 / 106624
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(2,077684f, 1,688702f, 0,09395f), Vector(-16,10126f, 77,37032f, 0,009626f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_452(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1A11E / 106782
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecution_04", 1, 1);
	}
	Function_453(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_453(var uParam0, var uParam1) //Position: 0x1A1AA / 106922
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_454(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_454(var uParam0, bool bParam1) //Position: 0x1A201 / 107009
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 33,73909f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-0,598154f, 1,524616f, -1,161397f), Vector(-8,163617f, -141,3147f, -16,12286f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_455(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1A29B / 107163
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecution_03", 1, 1);
	}
	Function_456(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_456(var uParam0, var uParam1) //Position: 0x1A327 / 107303
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_457(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_457(var uParam0, bool bParam1) //Position: 0x1A37E / 107390
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 30,6607f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,785012f, 1,737865f, -0,003387f), Vector(-16,92512f, 84,24278f, 11,77102f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_458(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1A418 / 107544
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecution_02", 1, 1);
	}
	Function_459(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_459(var uParam0, var uParam1) //Position: 0x1A4A4 / 107684
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_460(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_460(var uParam0, bool bParam1) //Position: 0x1A4FB / 107771
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 38,45036f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-0,033225f, 1,295071f, 0,859828f), Vector(2,370899f, -21,91965f, 11,26406f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_461(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1A595 / 107925
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecution_01", 1, 1);
	}
	Function_462(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_462(var uParam0, var uParam1) //Position: 0x1A621 / 108065
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_463(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_463(var uParam0, bool bParam1) //Position: 0x1A678 / 108152
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 38,45036f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,15953f, 1,084327f, -1,321146f), Vector(8,784932f, 138,2104f, -8,502293f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_464(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1A712 / 108306
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecution", 1, 1);
	}
	Function_465(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_465(var uParam0, var uParam1) //Position: 0x1A79B / 108443
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_466(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_466(var uParam0, bool bParam1) //Position: 0x1A7F2 / 108530
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 39,86723f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,731022f, 1,207424f, -0,59499f), Vector(-0,219386f, 98,4201f, -6,49419f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_467(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1A88C / 108684
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "rifleKneelExecution", 1, 1);
	}
	Function_468(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_468(var uParam0, var uParam1) //Position: 0x1A91C / 108828
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_469(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_469(var uParam0, bool bParam1) //Position: 0x1A973 / 108915
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 44,73655f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(2,427828f, 1,442699f, -0,021391f), Vector(-11,90606f, 72,94113f, 5,7E-05f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_470(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1AA11 / 109073
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "pistolKneelExecution", 1, 1);
	}
	Function_471(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_471(var uParam0, var uParam1) //Position: 0x1AAA2 / 109218
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_472(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_472(var uParam0, bool bParam1) //Position: 0x1AAF9 / 109305
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 44,73655f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(2,381174f, 1,428986f, -0,436662f), Vector(-11,62205f, 89,08679f, -0,000115f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0,795814f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_473(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1AB97 / 109463
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "PistolExecution_05", 1, 1);
	}
	Function_474(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_474(var uParam0, var uParam1) //Position: 0x1AC26 / 109606
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_475(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_475(var uParam0, bool bParam1) //Position: 0x1AC7D / 109693
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,57505f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,18887f, 1,61792f, 0,534385f), Vector(-15,9202f, 45,06617f, 3,526383f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_476(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1AD1B / 109851
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "PistolExecution_04", 1, 1);
	}
	Function_477(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_477(var uParam0, var uParam1) //Position: 0x1ADAA / 109994
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_478(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_478(var uParam0, bool bParam1) //Position: 0x1AE01 / 110081
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 44,49909f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,024016f, 0,554619f, 0,408258f), Vector(30,14079f, 44,81871f, 3,92224f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_479(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1AE9F / 110239
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "pistolExecution_03", 1, 1);
	}
	Function_480(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_480(var uParam0, var uParam1) //Position: 0x1AF2E / 110382
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_481(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_481(var uParam0, bool bParam1) //Position: 0x1AF85 / 110469
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 44,18989f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-1,108242f, 1,113226f, 0,091178f), Vector(4,81359f, -74,79637f, -10,2132f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_482(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1B023 / 110627
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "pistolExecution_02", 1, 1);
	}
	Function_483(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_483(var uParam0, var uParam1) //Position: 0x1B0B2 / 110770
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_484(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_484(var uParam0, bool bParam1) //Position: 0x1B109 / 110857
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 43,08115f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,736095f, 0,952384f, -1,123448f), Vector(10,26351f, 112,517f, 12,43874f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_485(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1B1A7 / 111015
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "pistolExecution_01", 1, 1);
	}
	Function_486(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_486(var uParam0, var uParam1) //Position: 0x1B236 / 111158
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_487(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_487(var uParam0, bool bParam1) //Position: 0x1B28D / 111245
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,68156f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,121333f, 0,883925f, 0,788724f), Vector(13,18485f, 39,53941f, 6,69186f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_488(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1B32B / 111403
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "pistolExecution", 1, 1);
	}
	Function_489(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_489(var uParam0, var uParam1) //Position: 0x1B3B7 / 111543
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_490(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_490(var uParam0, bool bParam1) //Position: 0x1B40E / 111630
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 40,64627f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,833069f, 0,910306f, 0,392504f), Vector(6,567528f, 60,56582f, 0,046868f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_491(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1B4AC / 111788
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecutionBack_05", 1, 1);
	}
	Function_492(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_492(var uParam0, var uParam1) //Position: 0x1B53C / 111932
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_493(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_493(var uParam0, bool bParam1) //Position: 0x1B593 / 112019
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 35,79285f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(0,367814f, 1,599156f, 1,072289f), Vector(-3,876976f, 19,19374f, 11,86928f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_494(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1B62D / 112173
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecutionBack_04", 1, 1);
	}
	Function_495(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_495(var uParam0, var uParam1) //Position: 0x1B6BD / 112317
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_496(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_496(var uParam0, bool bParam1) //Position: 0x1B714 / 112404
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 34,38961f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,2005f, 0,639449f, -0,77461f), Vector(28,96044f, 100,1754f, -21,46019f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_497(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1B7AE / 112558
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecutionBack_03", 1, 1);
	}
	Function_498(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_498(var uParam0, var uParam1) //Position: 0x1B83E / 112702
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_499(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_499(var uParam0, bool bParam1) //Position: 0x1B895 / 112789
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 31,09979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(0,772715f, 0,601514f, 0,683062f), Vector(27,82014f, 33,3886f, -21,21926f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_500(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1B92F / 112943
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecutionBack_02", 1, 1);
	}
	Function_501(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_501(var uParam0, var uParam1) //Position: 0x1B9BF / 113087
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_502(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_502(var uParam0, bool bParam1) //Position: 0x1BA16 / 113174
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 31,67371f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,261779f, 1,408872f, 1,275128f), Vector(0,737339f, 39,14373f, -9,138619f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_503(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1BAB0 / 113328
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecutionBack_01", 1, 1);
	}
	Function_504(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_504(var uParam0, var uParam1) //Position: 0x1BB40 / 113472
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_505(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_505(var uParam0, bool bParam1) //Position: 0x1BB97 / 113559
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 23,34922f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(2,193164f, -0,139685f, -0,718702f), Vector(33,4145f, 100,2139f, 15,81386f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_506(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1BC35 / 113717
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecutionBack", 1, 1);
	}
	Function_507(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_507(var uParam0, var uParam1) //Position: 0x1BCC2 / 113858
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_508(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_508(var uParam0, bool bParam1) //Position: 0x1BD19 / 113945
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 31,67371f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-1,158421f, 1,612226f, 0,177963f), Vector(-3,552166f, -69,33723f, -2,450368f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_509(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1BDB3 / 114099
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "ChairSmash", 1, 1);
	}
	Function_510(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_510(var uParam0, int iParam1) //Position: 0x1BE3A / 114234
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_511(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "__EndChairSmash", 0, 1, 180f);
	return;
}

void Function_511(int iParam0, int iParam1) //Position: 0x1BE80 / 114304
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-3,305018f, 1,08927f, 0,490524f), Vector(-4,4265f, -62,37619f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,451405f, 0,839948f, -1,002819f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

var Function_512(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, float fParam6) //Position: 0x1BF0E / 114446
{
	var uVar0;
	
	if (&bParam4)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "WallPin", 2, 1);
	}
	Function_513(&uVar0, &uParam2, &uParam3);
	if (fParam6 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_513(float fParam0, var uParam1, int iParam2) //Position: 0x1BF95 / 114581
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&fParam0, 0);
	Function_515(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&fParam0, 1);
	Function_514(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&fParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&fParam0, 0, 0,2f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&fParam0, 0, 1, 0,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&fParam0, 1, &iParam2, "__EndWallPin", 2, 1, 180f);
	return;
}

void Function_514(float fParam0, struct<25> Param1) //Position: 0x1C00C / 114700
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 42,979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	Var0 = Vector(-2,000206f, 1,399983f, -0,499981f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(-0,970139f, 1E-06f, 0,242549f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&fParam0, Var0, 0);
	return;
}

void Function_515(float fParam0, struct<25> Param1) //Position: 0x1C0B6 / 114870
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 42,979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	Var0 = Vector(-2,004646f, 1,400002f, -0,423557f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(-0,999992f, 1E-06f, -0,004033f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&fParam0, Var0, 0);
	return;
}

struct<8> Function_516(bool bParam0) //Position: 0x1C160 / 115040
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&bParam0, &Var0);
	return StackVal, Var0;
}

var Function_517(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x1C189 / 115081
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "GroundAttack", 3, 1);
	}
	Function_518(&uVar0, &uParam2);
	if (iParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_518(var uParam0, var uParam1) //Position: 0x1C212 / 115218
{
	var uVar0;
	bool bVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_521(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_520(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_519(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,7f, 0);
	SET_TRANSITION_COLLISION_PARAMS(&bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 0, 1, 0,75f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(&bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 1, &uParam1, "__EndGroundAttack", 2, 0, 7.0f);
	SET_TRANSITION_COLLISION_PARAMS(&bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 1, 2, 2.0f, 3, 0);
	SET_TRANSITION_COLLISION_PARAMS(&bVar1, 1, 0);
	return;
}

void Function_519(int iParam0, var uParam1) //Position: 0x1C2D1 / 115409
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-4,069192f, 1,679383f, 1,090629f), Vector(-10,92779f, -67,95651f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,043306f, 0,840791f, -0,539488f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&iParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&iParam0, &uParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0,5f, -0,5f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

void Function_520(int iParam0, var uParam1) //Position: 0x1C396 / 115606
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-1,651182f, 1,344121f, 0,315187f), Vector(-21,06256f, -60,6819f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,047794f, 0,635919f, -0,585258f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&iParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&iParam0, &uParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0,5f, -0,5f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

void Function_521(var uParam0, bool bParam1) //Position: 0x1C45B / 115803
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-4,069192f, 1,679383f, 1,090629f), Vector(-10,92779f, -67,95651f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(-0,043306f, 0,840791f, -0,539488f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0,5f, -0,5f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_522(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1C520 / 116000
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "BedStealthKill_R", 1, 1);
	}
	Function_523(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_523(var uParam0, int iParam1) //Position: 0x1C5AD / 116141
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_524(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "BedStealthKill_R", 0, 1, 180f);
	return;
}

void Function_524(int iParam0, bool bParam1) //Position: 0x1C5F4 / 116212
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 33,936f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &bParam1, Vector(1,938993f, 2,898682f, 0,045806f), Vector(-51,88138f, 61,50959f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,123694f, 0,266305f, -0,939428f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

var Function_525(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1C682 / 116354
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_31(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "BedStealthKill", 1, 1);
	}
	Function_526(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else if (&bParam4)
	{
		SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return &uVar0;
}

void Function_526(var uParam0, int iParam1) //Position: 0x1C700 / 116480
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_527(&uVar0, &iParam1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 1.0f, 4294967295);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "BedStealthKill", 4294967295, 0, 180f);
	return;
}

void Function_527(int iParam0, int iParam1) //Position: 0x1C748 / 116552
{
	SET_CAMERASHOT_ASPECT_RATIO(&iParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(&iParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_OBJECTS(StackVal, StackVal, &iParam0, &iParam1, Function_31(), Vector(-1,97754f, 2,195687f, -0,487989f), Vector(-0,712222f, -1,448415f, 0.0f), 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,182648f, 0,316525f, -0,753682f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

bool Function_528(var uParam0, bool bParam1) //Position: 0x1C7E9 / 116713
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(&bParam1, &Var0);
	return Function_442(StackVal, &uParam0, Var0);
}

void Function_529(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x1C802 / 116738
{
	var uVar0;
	
	if (Function_34(&iParam0) && !Function_32(&iParam0, 1))
	{
		LOG_ERROR("Calling MAKE_ACTOR_ZOMBIE() on a CUSTOM ZOMBIE! Don't do that!");
		return;
	}
	TURN_ACTOR_INTO_ZOMBIE(&iParam0, &iParam1);
	if (&iParam2 == 4294967294 && &iParam3 == 4294967294)
	{
		if (&iParam2 == 4294967295)
		{
			iParam2 = RAND_INT_RANGE(false, 4);
		}
		if (&iParam3 == 4294967295)
		{
			iParam3 = RAND_INT_RANGE(false, 4);
		}
		if (!ADD_ZOMBIE_TO_ACTOR(&iParam0, &iParam2, &iParam3))
		{
			LOG_ERROR("MAKE_ACTOR_ZOMBIE: Failed to apply bloody head/body textures!");
		}
	}
	if (&bParam6)
	{
		DEEQUIP_ACCESSORY(&iParam0, 0);
	}
	if (&bParam7)
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(&iParam0);
	}
	Function_533(&iParam0);
	DECOR_SET_BOOL(&iParam0, "Zombie", true);
	Function_532(&iParam0);
	SET_ACTOR_ALLOW_DISARM(&iParam0, false);
	SET_CRIPPLE_ENABLE(&iParam0, 0);
	SET_CRIPPLE_FLAG(&iParam0, false);
	SET_ALLOW_COLD_WEATHER_BREATH(&iParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(&iParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&iParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, false);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(&iParam0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&iParam0, 1);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&iParam0, 0.0f, 1,115f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 33, 15.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&iParam0, 155.0f);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&iParam0, 0, 0);
	uVar0 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
	if (AI_PREDICATE_IS_VALID(&uVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&iParam0, &uVar0, 1);
	}
	if (&iParam1 <= 1204 && &iParam1 >= 1213)
	{
		DECOR_SET_BOOL(&iParam0, "FastZombie", true);
	}
	else if (&iParam1 <= 1214 && &iParam1 >= 1221)
	{
		DECOR_SET_BOOL(&iParam0, "BruiserZombie", true);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 12,5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 29, 12.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 30, 0,5f);
	}
	SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(&iParam0, "head");
	if (&iParam1 <= 1214 && &iParam1 >= 1221)
	{
		SET_ACTOR_BASE_SCORE(&iParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(&iParam0, 2030.0f, 1);
	}
	else
	{
		SET_ACTOR_BASE_SCORE(&iParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(&iParam0, 2020.0f, 1);
	}
	Function_530(&iParam0, &uParam4, &uParam5);
}

void Function_530(var uParam0, int iParam1, bool bParam2) //Position: 0x1CA9F / 117407
{
	switch (&iParam1)
	{
		case 0x00000000:
			if (!IS_ACTION_NODE_PLAYING(&uParam0, "zombie/PlayDead"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&uParam0, "zombie/PlayDead");
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING(&uParam0, "zombie/GroundSpawn"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&uParam0, "zombie/GroundSpawn");
			}
			break;
	}
	if (&iParam1 != 4294967295)
	{
		if (&bParam2)
		{
			Function_531(&uParam0, &iParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(&uParam0);
			SET_ALLOW_EXECUTE(&uParam0, 0);
		}
	}
	return;
}

void Function_531(var uParam0, int iParam1, bool bParam2) //Position: 0x1CB5C / 117596
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	var uVar7;
	
	SET_ALLOW_EXECUTE(&uParam0, 1);
	AI_CLEAR_DONT_HARM_ACTOR(&uParam0);
	switch (&iParam1)
	{
		case 0x00000001:
			GET_POSITION(&uParam0, &Var0);
			GET_ACTOR_AXIS(&uParam0, &Var2, 2);
			Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var0, StackVal) * Vector(0,75f, 0,75f, 0,75f), StackVal, StackVal);
			FIND_GROUND_INTERSECTION(&Var0, 10.0f, &Var2, &Var4);
			Var2.f_4 = (StackVal + 0,05f);
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uParam0, Function_31(), "script_zombie_emerge", Var2);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_29();
				uVar7 = CREATE_POINT_IN_LAYOUT(&uParam0, Function_31(), Var2, Function_29());
				SNAP_OBJECT_TO_GROUND(&uVar7, 2,5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(&uVar7, &Var4);
				DESTROY_OBJECT(&uVar7);
				UNK_0x6745191B(&uVar6, Var4);
			}
			break;
		
		case 0x00000002:
			GET_POSITION(&uParam0, &Var0);
			GET_ACTOR_AXIS(&uParam0, &Var2, 2);
			Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var0, StackVal) * Vector(0,75f, 0,75f, 0,75f), StackVal, StackVal);
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uParam0, Function_31(), "script_zombie_emerge", Var0);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_29();
				uVar7 = CREATE_POINT_IN_LAYOUT(&uParam0, Function_31(), Var0, Function_29());
				SNAP_OBJECT_TO_GROUND(&uVar7, 2,5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(&uVar7, &Var4);
				DESTROY_OBJECT(&uVar7);
				UNK_0x6745191B(&uVar6, Var4);
			}
			break;
	}
	if (!&bParam2)
	{
		if (!DECOR_CHECK_EXIST(&uParam0, "WakeUp"))
		{
			DECOR_SET_BOOL(&uParam0, "WakeUp", true);
		}
	}
	else if (!DECOR_CHECK_EXIST(&uParam0, "WakeUpFast"))
	{
		DECOR_SET_BOOL(&uParam0, "WakeUpFast", true);
	}
	return;
}

void Function_532(int iParam0) //Position: 0x1CD28 / 118056
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&iParam0, "nocrime", true);
	}
	return;
}

void Function_533(int iParam0) //Position: 0x1CD5F / 118111
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(&iParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(&iParam0, 0,4f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&iParam0, 0,6f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&iParam0, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 29, 3,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 4, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 1, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 2, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 3, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 9, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 6, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 7, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 12, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 17, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 14, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 15, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 36, 0,75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 42, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 58, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 61, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 50, -0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 51, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 52, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 8, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(&iParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(&iParam0, 0.0f);
	Function_534(&iParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&iParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(&iParam0, 0.0f);
	return;
}

void Function_534(var uParam0, bool bParam1) //Position: 0x1D11D / 119069
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(&uParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

int Function_535(var uParam0) //Position: 0x1D140 / 119104
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		if (GET_OBJECT_TYPE(&uParam0) == 1)
		{
			uVar0 = GET_LAYOUT_FROM_OBJECT(&uParam0);
		}
		while (!IS_LAYOUTREF_VALID(&uVar0) && IS_OBJECT_VALID(&uParam0))
		{
			uParam0 = GET_OBJECT_OWNER(&uParam0);
			if (GET_OBJECT_TYPE(&uParam0) == 1)
			{
				uVar0 = GET_LAYOUT_FROM_OBJECT(&uParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(&uVar0))
		{
			return &uVar0;
		}
	}
	return "";
}

void Function_536() //Position: 0x1D1A7 / 119207
{
	return;
}

void Function_537(struct<57> Param0) //Position: 0x1D1AD / 119213
{
	strcpy(&Param0 + 24, "AMBIENT-MAIDEN", 16);
	Param0 = 119341;
	(&Param0 + 8) = 119283;
	*(&Param0 + 16) = 119277;
	Param0.f_56 = 1;
	return;
}

void Function_538() //Position: 0x1D1ED / 119277
{
	return;
}

int Function_539() //Position: 0x1D1F3 / 119283
{
	bool bVar0;
	
	if (!IS_ACTOR_ALIVE(Function_77()))
	{
		return 0;
	}
	bVar0 = VDIST(Global_54078, Local_120);
	if (bVar0 < 5.0f && IS_ACTOR_VALID(Function_77()))
	{
		AMBIENT_SET_SCAN_CENTER_PLAYER();
		Local_120 = Global_54078;
	}
	return 0;
}

void Function_540() //Position: 0x1D22D / 119341
{
	Function_541();
	return;
}

void Function_541() //Position: 0x1D236 / 119350
{
	AMBIENT_SET_UPDATES_ENABLED(1);
	AMBIENT_SET_POINT_SPACING(4,5f);
	AMBIENT_SET_SLOPE_VALUES(0,985f, 0,94f, 0,85f, 0,75f);
	if (IS_ACTOR_VALID(&Global_54076))
	{
		AMBIENT_SET_SCAN_CENTER_PLAYER();
		Local_120 = Global_54078;
	}
	else
	{
		AMBIENT_SET_SCAN_CENTER(Global_53524);
		Local_120 = Global_53524;
	}
	return;
}

