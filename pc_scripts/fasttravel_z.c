//Decompiled with MagicRDR v1.0
//Function Count : 44
//Statics Count : 154
//Natives Count : 94
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	struct<57> Local_1 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_93 = 0;
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
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
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
	var uLocal_143[4] = { 0, 0, 0, 0 };
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_0 = 0;
	iVar0 = 0;
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_17 = 250;
		switch (iLocal_0)
		{
			case 0x00000000:
				iLocal_19 = 0;
				if (Function_38(&Local_21, &iLocal_19))
				{
					iLocal_18 = 0;
					iLocal_0 = 1;
				}
				else
				{
					Function_35("PASS_CAMP_NoDest", 0x41200000, 1, 0, 2, 1, 0);
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				break;
			
			case 0x00000001:
				if (!HUD_IS_SHOWING_SMALL_TEXT())
				{
					iLocal_0 = 2;
					bLocal_17 = false;
				}
				break;
			
			case 0x00000002:
				iLocal_18 = 0;
				Function_33(&Local_21, iLocal_18, &uLocal_143, iLocal_19);
				iLocal_0 = 3;
			
			case 0x00000003:
				iLocal_20 = Function_28(&Local_21, &uLocal_153, &iLocal_18, &uLocal_143, iLocal_19);
				if (iLocal_20 != 4294967295)
				{
					iLocal_0 = 4;
				}
				bLocal_17 = false;
				break;
			
			case 0x00000004:
				iVar0 = 1;
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				DECOR_SET_BOOL(&Global_54076, "playerFastTravel", 1);
				iLocal_0 = 12;
				bLocal_17 = false;
			
			case 0x0000000C:
				if (DECOR_CHECK_EXIST(&Global_54076, "playerFastTravel"))
				{
					if (Function_4(&Local_1, &Local_21, iLocal_20))
					{
						Function_3(TO_FLOAT(StackVal));
						Function_1(ROUND(((TO_FLOAT(StackVal) * 4.0f) / 3600.0f)));
						iLocal_0 = 7;
					}
				}
				else
				{
					bLocal_17 = false;
				}
				break;
			
			case 0x00000007:
				if (!HUD_IS_FADED() && !HUD_IS_FADING())
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					iLocal_0 = 8;
				}
				else if (!HUD_IS_FADING())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				break;
			
			case 0x00000008:
				iLocal_0 = 11;
				bLocal_17 = false;
				break;
			
			case 0x0000000B:
				iLocal_0 = 13;
				bLocal_17 = false;
				break;
			
			case 0x0000000D:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_17);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	UI_POP("nCutscenes");
	if (!IS_GAME_RESETTING())
	{
		if (HUD_IS_FADED())
		{
			HUD_FADE_IN(0,5f, 1065353216);
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&(uLocal_143[1])))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&(uLocal_143[1]));
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&(uLocal_143[2])))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&(uLocal_143[2]));
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&(uLocal_143[3])))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&(uLocal_143[3]));
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&(uLocal_143[0])))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&(uLocal_143[0]));
	}
	if (IS_LAYOUTREF_VALID(&Local_1 + 48))
	{
		DESTROY_LAYOUT(&Local_1 + 48);
	}
	Local_1.f_56 = 0;
	DECOR_REMOVE(&Global_54076, "playerFastTravel");
	DECOR_REMOVE(&Global_54076, "playerFastTravelOnFoot");
	AI_STOP_IGNORING_ACTORS();
	Global_6634 = 0;
	RESET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(&Global_54076));
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x2A6 / 678
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 101;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		iVar2 = 0;
		if (Global_47151[16])
		{
			PRINTNL();
			PRINTNL();
			PRINTSTRING("CUR time of day delay: ");
			Function_2(&(Global_26652[iVar04]));
		}
		if (GET_DAY(&(Global_26652[iVar04])) == 0)
		{
			iVar2 = 1;
		}
		ADD_TIME(&(Global_26652[iVar04]), iVar2, &iParam0, false, 0);
		*(&Global_27462[iVar052] + 376) = &Global_26652[iVar04];
		if (Global_47151[16])
		{
			PRINTNL();
			PRINTSTRING("NEW time of day delay: ");
			Function_2(&(Global_26652[iVar04]));
		}
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0x36C / 876
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

void Function_3(float fParam0) //Position: 0x3B6 / 950
{
	FEED_CODE_WARP_DIST(fParam0);
	ADVANCE_TIME_HOURS(((fParam0 * 4.0f) / 3600.0f));
	return;
}

bool Function_4(struct<57> Param0) //Position: 0x3CE / 974
{
	var uVar16;
	struct<2> Var17;
	struct<2> Var19;
	struct<2> Var21;
	float fVar23;
	var uVar24;
	
	switch (Param0)
	{
		case 0x00000000:
			UNK_0xEF270DC9();
			AI_IGNORE_ACTOR(&Global_54076);
			Param0 = 1;
			break;
		
		case 0x00000001:
			if (HUD_IS_FADED())
			{
				UI_POP("nCutscenes");
				Param0 = 2;
			}
			break;
		
		case 0x00000002:
			STREAMING_EVICT_ALL();
			Param0.f_4 = GET_CURRENT_GAME_TIME();
			uVar16 = GET_VOLUME_FROM_OBJECT(Function_27(Param1[iParam22]));
			GET_VOLUME_CENTER(&uVar16, &Param0 + 8);
			Param0.f_32 = 0;
			if (((Function_24(Param1[iParam22]) && Param0.f_56 > 30) && !Param1[iParam22] != Global_46914[1]) && !Param1[iParam22] != Global_46926[0])
			{
				Param0.f_32 = 1;
				Var17 = Vector(0.0f, 0.0f, 0.0f);
				Var19 = Vector(0.0f, 0.0f, 0.0f);
				if (Function_20(StackVal, *(&Param0 + 8), &Global_44085[Param1[iParam22]9] + 8, &Var17, &Var19, 0))
				{
					*(&Param0 + 8) = Var17;
					*(&Param0 + 20) = Var19;
				}
				else
				{
					Param0.f_56++;
					return 0;
				}
			}
			Param0.f_32 = 0;
			if (!Param0.f_32)
			{
				Var21 = Vector(0.0f, 0.0f, 0.0f);
				GET_VOLUME_CENTER(&Global_44085[Param1[iParam22]9] + 8, &Var21);
				Function_19(StackVal, StackVal, *(&Param0 + 8), Var21);
				*(&Param0 + 20) = Function_19(StackVal, StackVal, *(&Param0 + 8), Var21);
				fVar23 = UNK_0x9C40E671(&Param0 + 20);
				(&Param0 + 20)->f_4 = fVar23;
			}
			if (!Function_18(StackVal, *(&Param0 + 8)))
			{
				Function_17(StackVal, StackVal, &Global_54076, *(&Param0 + 8), 1, 1, 1);
				Global_6634 = 1;
				Global_6629 = 0;
				Function_13(1, 0, 1);
				Function_11();
				Param0 = 3;
			}
			else
			{
				AI_STOP_IGNORING_ACTORS();
				Param0 = 7;
				return 1;
			}
		
		case 0x00000003:
			if (StackVal + 1.0f) > GET_CURRENT_GAME_TIME()
			{
				CAMERA_RESET(0);
				Function_8();
				Param0 = 4;
			}
			break;
		
		case 0x00000004:
			uVar24 = Vector(0.0f, 1.0f, 0.0f);
			if (Param1[iParam22] != Global_46926[0] && STREAMING_IS_WORLD_LOADED())
			{
				if (FIND_GROUND_INTERSECTION(&Global_54078, 10.0f, &Param0 + 8, &uVar24))
				{
					Function_17(StackVal, StackVal, &Global_54076, *(&Param0 + 8), 1, 1, 1);
				}
				AI_STOP_IGNORING_ACTORS();
				Param0 = 7;
				return 1;
			}
			if (STREAMING_IS_WORLD_LOADED() && ((Function_6(Param1[iParam22]) || Param1[iParam22] != 4294967295) || Param0.f_32))
			{
				if (FIND_GROUND_INTERSECTION(&Global_54078, 10.0f, &Param0 + 8, &uVar24))
				{
					Function_17(StackVal, StackVal, &Global_54076, *(&Param0 + 8), 1, 1, 1);
				}
				if (Param0.f_32)
				{
					return 1;
				}
				Param0 = 6;
			}
			else if (StackVal + 50.0f) > GET_CURRENT_GAME_TIME()
			{
				if (FIND_GROUND_INTERSECTION(&Global_54078, 10.0f, &Param0 + 8, &uVar24))
				{
					Function_17(StackVal, StackVal, &Global_54076, *(&Param0 + 8), 1, 1, 1);
				}
				Param0 = 6;
			}
			break;
		
		case 0x00000006:
			if (STREAMING_IS_WORLD_LOADED() && (!Function_5(Param1[iParam22]) || Function_6(Param1[iParam22])))
			{
				AI_STOP_IGNORING_ACTORS();
				Param0 = 7;
				return 1;
			}
			if (StackVal + 30.0f) > GET_CURRENT_GAME_TIME()
			{
				AI_STOP_IGNORING_ACTORS();
				Param0 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_5(int iParam0) //Position: 0x6F4 / 1780
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_6(int iParam0) //Position: 0x70A / 1802
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_7(&(Global_43791[iParam0]), 4);
}

bool Function_7(int iParam0, int iParam1) //Position: 0x726 / 1830
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8() //Position: 0x743 / 1859
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_9(16384);
	}
	return;
}

void Function_9(int iParam0) //Position: 0x75F / 1887
{
	Function_10(&Global_43580, iParam0);
	return;
}

void Function_10(var uParam0, var uParam1) //Position: 0x76D / 1901
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_11() //Position: 0x78C / 1932
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_12(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_12(var uParam0, int iParam1) //Position: 0x7B6 / 1974
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_13(var uParam0, bool bParam1, int iParam2) //Position: 0x7D0 / 2000
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(&Global_46717))
	{
		TERMINATE_SCRIPT(&Global_46717);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = 0;
	}
	if (&bParam1)
	{
		if (Function_5(Global_43789))
		{
			Function_16(&(Global_43791[Global_43789]), 131072);
			Function_12(&(Global_43791[Global_43789]), 2097152);
			Function_14(Global_43789);
		}
		else
		{
			bParam1 = 0;
		}
	}
	if (!&bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_7(&(Global_43791[iVar0]), 4) || Function_7(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_12(&(Global_43791[iVar0]), 2097155);
					Function_16(&(Global_43791[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_6629 = 0;
		Global_6630 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			WAIT(false);
		}
		if (uParam0 & 1)
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_14(int iParam0) //Position: 0x8DC / 2268
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_15())
			{
				return;
			}
		}
		if (!Function_7(&(Global_43791[iParam0]), 2048))
		{
			Global_46719 = iParam0;
		}
		Global_43790 = StackVal;
	}
	else if (Global_6629)
	{
	}
	return;
}

bool Function_15() //Position: 0x95B / 2395
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_7(&(Global_43791[iVar0]), 4) || Function_7(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_16(var uParam0, int iParam1) //Position: 0x9C4 / 2500
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_17(var uParam0, struct<2> Param1, float fParam3, bool bParam4, int iParam5, bool bParam6) //Position: 0x9D5 / 2517
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, fParam3, &bParam4, &iParam5, &bParam6);
			if (!IS_ACTOR_RIDING(&uParam0))
			{
				ACTOR_MOUNT_ACTOR(&uParam0, &uVar0);
			}
		}
		else
		{
			uVar0 = GET_VEHICLE(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, fParam3, &bParam4, &iParam5, &bParam6);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(&uParam0, Param1, fParam3, &bParam4, &iParam5, &bParam6);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

bool Function_18(vector3 vParam0) //Position: 0xAA4 / 2724
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_19(struct<2> Param0, struct<2> Param2) //Position: 0xABC / 2748
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	VNORMALIZE(&Var0);
	return StackVal, Var0;
}

bool Function_20(struct<2> Param0, var uParam2, struct<2> Param3, bool bParam5) //Position: 0xAD9 / 2777
{
	var uVar0;
	bool bVar1;
	struct<9> Var2;
	var uVar13;
	int iVar16;
	struct<2> Var19;
	struct<2> Var21;
	struct<2> Var23;
	var uVar25;
	
	if (Function_18(StackVal, Param0) || !IS_VOLUME_VALID(&uParam2))
	{
		return 0;
	}
	uVar0 = START_CURVE_QUERY(&Global_43578, Param0, 2096, 0,1f, 300.0f, Function_23(60.0f, 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(&uVar0) < 0)
	{
		UNK_0xDF93BD7C(&uVar0);
		return 0;
	}
	bVar7 = -1.0f;
	bVar9 = false;
	bVar1 = false;
	while (bVar1 < (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar0) - 1))
	{
		GET_POINT_FROM_CURVE_QUERY(&uVar0, bVar1, &vVar2);
		Var5 = vVar2.x;
		Var5.f_4 = vVar2.y;
		Var5.f_8 = vVar2.z;
		if ((bVar7 > 0.0f || bVar7 < VDIST(Param0, Var5)) && !IS_POINT_IN_VOLUME(Var5, &uParam2))
		{
			bVar7 = VDIST(Param0, Var5);
			Param3 = Var5;
			uVar8 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar0, bVar1);
			bVar9 = true;
		}
		bVar1++;
	}
	UNK_0xDF93BD7C(&uVar0);
	if (bVar9)
	{
		Function_22(StackVal, Param3);
		vVar10 = { StackVal, StackVal, Function_22(StackVal, Param3) };
		if (!bParam5)
		{
			UNK_0x19D652F9(&uVar8, 100.0f, &vVar10, &uVar13);
			UNK_0x19D652F9(&uVar8, -100.0f, &vVar10, &iVar16);
		}
		else
		{
			UNK_0x19D652F9(&uVar8, 10.0f, &vVar10, &uVar13);
			UNK_0x19D652F9(&uVar8, -10.0f, &vVar10, &iVar16);
		}
		Function_21(&uVar13);
		Var19 = Function_21(&uVar13);
		Function_21(&iVar16);
		Var21 = Function_21(&iVar16);
		GET_VOLUME_CENTER(&uParam2, &Var23);
		if (!bParam5)
		{
			if (VDIST(Var19, Var23) >= VDIST(Var21, Var23))
			{
				bParam4 = Var19;
			}
			else
			{
				bParam4 = Var21;
			}
		}
		else
		{
			uVar25 = Param3;
			Param3 = Var21;
			if (!IS_POINT_IN_VOLUME(Var19, &uParam2))
			{
				Param3 = Var19;
			}
			bParam4 = Var23;
		}
	}
	return bVar9;
}

struct<8> Function_21(vector3 vParam0) //Position: 0xC93 / 3219
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

vector3 Function_22(vector3 vParam0) //Position: 0xCB5 / 3253
{
	vector3 vVar0;
	
	vVar0.x = vParam0.x;
	vVar0.f_4 = vParam0.y;
	vVar0.f_8 = vParam0.z;
	return StackVal, StackVal, vVar0;
}

var Function_23(int iParam0, int iParam1) //Position: 0xCD3 / 3283
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_24(int iParam0) //Position: 0xCE6 / 3302
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
	return (((Function_26(uVar0, 0x1000000) || Function_26(uVar0, 0x2000000)) || Function_26(uVar0, 0x4000000)) || Function_25(iParam0));
}

var Function_25(int iParam0) //Position: 0xD59 / 3417
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_43791[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

bool Function_26(var uParam0, int iParam1) //Position: 0xD76 / 3446
{
	return (uParam0 && iParam1) == 0;
}

var Function_27(int iParam0) //Position: 0xD83 / 3459
{
	int iVar0;
	char* cVar1[24];
	
	if (!IS_LAYOUTREF_VALID(&Global_43578))
	{
		return "";
	}
	if (!Function_5(iParam0))
	{
		return "";
	}
	cVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_ON_OBJECT_TYPE(&cVar1, 9);
	memcpy(&cVar2, &Global_44085[iParam09] + 32, 6);
	ITERATE_ON_PARTIAL_NAME(&cVar1, &cVar2);
	stradd(&cVar2, "v_coach_park", 24);
	iVar0 = START_OBJECT_ITERATOR(&cVar1);
	while (IS_OBJECT_VALID(&iVar0))
	{
		if (STRINGS_ARE_EQUAL(&cVar2, GET_OBJECT_NAME(&iVar0)))
		{
			DESTROY_ITERATOR(&cVar1);
			return &iVar0;
		}
		iVar0 = OBJECT_ITERATOR_NEXT(&cVar1);
	}
	iVar0 = "";
	DESTROY_ITERATOR(&cVar1);
	return &iVar0;
}

var Function_28(var uParam0, var uParam1, var uParam2, int[] iParam3) //Position: 0xE23 / 3619
{
	if (iParam4 >= 1)
	{
		if (uParam1 + 0,3f) > GET_CURRENT_GAME_TIME()
		{
			if (UNK_0x062C5047("@UI.NAVIGATE_DOWN", 1, 0))
			{
				PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
				uParam2 = Function_32(&uParam0, uParam2, 0);
				Function_30(&uParam0, uParam2, &iParam3);
				uParam1 = GET_CURRENT_GAME_TIME();
			}
			else if (UNK_0x062C5047("@UI.NAVIGATE_UP", 1, 0))
			{
				PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
				uParam2 = Function_32(&uParam0, uParam2, 1);
				Function_30(&uParam0, uParam2, &iParam3);
				uParam1 = GET_CURRENT_GAME_TIME();
			}
			else
			{
				uParam1 = 0.0f;
			}
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&(iParam3[0])))
	{
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&(iParam3[0])))
		{
			Function_29(&iParam3);
			return uParam2;
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&(iParam3[1])))
	{
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&(iParam3[1])))
		{
			TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
			return 4294967295;
		}
	}
	return 4294967295;
}

void Function_29(int[] iParam0) //Position: 0xF4D / 3917
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(&(iParam0[1])))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&(iParam0[1]));
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&(iParam0[2])))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&(iParam0[2]));
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&(iParam0[3])))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&(iParam0[3]));
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&(iParam0[0])))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&(iParam0[0]));
	}
	return;
}

void Function_30(struct<2>[] Param0, int iParam1, int[] iParam2) //Position: 0xFAF / 4015
{
	char* cVar0[32];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31(Param0[iParam12]) };
	if (Param0[iParam12] == Global_46914[0])
	{
		strcpy(&cVar0, "grtv_blackwater", 32);
	}
	else if (Param0[iParam12] == Global_46926[0])
	{
		strcpy(&cVar0, "cocv_region", 32);
	}
	SET_USE_CONTEXT_TEXT(&(iParam2[0]), "PASS_CAMP_currentDest", &cVar0, 0, 0, 0);
	return;
}

struct<32> Function_31(int iParam0) //Position: 0x1036 / 4150
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_5(iParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(&Global_44085[iParam09] + 8))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&Global_44085[iParam09] + 8), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, &Global_44085[iParam09] + 32, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(&Global_44085[iParam09] + 8))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(&Global_44085[iParam09] + 8), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_32(struct<2>[] Param0, int iParam1, bool bParam2) //Position: 0x10F8 / 4344
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 4294967295;
	if (bParam2)
	{
		iVar0 = 1;
	}
	bVar1 = (iParam1 + iVar0);
	if (bVar1 >= 29)
	{
		bVar1 = false;
	}
	else if (bVar1 <= 0)
	{
		bVar1 = 29;
	}
	if (StackVal)
	{
		return bVar1;
	}
	while (!StackVal)
	{
		bVar1 = (bVar1 + iVar0);
		if (bVar1 >= 29)
		{
			bVar1 = false;
		}
		else if (bVar1 <= 0)
		{
			bVar1 = 29;
		}
	}
	if (Function_5(Param0[bVar12]))
	{
		return bVar1;
	}
	if (StackVal)
	{
	}
	return 0;
}

void Function_33(struct<2>[] Param0, int iParam1, var[] uParam2) //Position: 0x118A / 4490
{
	char* cVar0[32];
	
	if (IS_SCRIPT_USE_CONTEXT_VALID(&(uParam2[1])))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&(uParam2[1]));
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&(uParam2[2])))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&(uParam2[2]));
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&(uParam2[3])))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&(uParam2[3]));
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&(uParam2[0])))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&(uParam2[0]));
	}
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31(Param0[iParam12]) };
	if (Param0[iParam12] == Global_46914[0])
	{
		strcpy(&cVar0, "grtv_blackwater", 32);
	}
	else if (Param0[iParam12] == Global_46926[0])
	{
		strcpy(&cVar0, "cocv_region", 32);
	}
	if (iParam3 >= 1)
	{
		uParam2[3] = ADD_SCRIPT_USE_CONTEXT_STICK("PASS_COACH_PreviousDest", 10, "@UI.NAVIGATE_UP", 0, 0, 0, 0, 4294967295, 0);
		uParam2[2] = ADD_SCRIPT_USE_CONTEXT_STICK("PASS_COACH_NextDest", 10, "@UI.NAVIGATE_DOWN", 0, 0, 0, 0, 4294967295, 0);
	}
	uParam2[1] = ADD_SCRIPT_USE_CONTEXT("PASS_CAMP_Exit", 10, "@UI.CANCEL", Function_34(), Function_34(), Function_34(), Function_34(), 4294967295, "HUD_MENU_BACK_MASTER");
	uParam2[0] = ADD_SCRIPT_USE_CONTEXT(&cVar0, 10, "@UI.ACCEPT", Function_34(), Function_34(), Function_34(), Function_34(), 4294967295, "HUD_MENU_SELECT_MASTER");
	SET_USE_CONTEXT_TEXT(&(uParam2[0]), "PASS_CAMP_currentDest", &cVar0, 0, 0, 0);
}

var Function_34() //Position: 0x137E / 4990
{
	int iVar0;
	
	return &iVar0;
}

void Function_35(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x1387 / 4999
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_36(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

struct<16> Function_36(int iParam0) //Position: 0x1412 / 5138
{
	char* cVar0[16];
	
	if (!Function_37())
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

bool Function_37() //Position: 0x1451 / 5201
{
	if (Function_26(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_38(struct<2>[] Param0, int iParam1) //Position: 0x146C / 5228
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		Param0[iVar02] = 4294967295;
		Param0[iVar02].f_4 = 0;
		Param0[iVar02].f_8 = 99999999;
		iVar0++;
	}
	iVar1 = 1;
	while (iVar1 < (28 - 1))
	{
		iVar2 = iVar1;
		if (iVar2 != 0)
		{
			iVar3 = Function_43(iVar2);
			if (iVar3 == 4294967295 && iVar3 == Global_43789)
			{
				uVar4 = Global_43791[iVar3];
				bVar5 = Function_26(uVar4, 0x10000000);
				if (bVar5)
				{
					Function_39(&Param0, iVar3);
					iParam1++;
				}
			}
		}
		iVar1++;
	}
	if (!Global_43789 != Global_46914[1])
	{
		Function_39(&Param0, Global_46914[1]);
		iParam1++;
	}
	if (iParam1 != 0)
	{
		iVar1 = iParam1;
		while (iVar1 < 29)
		{
			Param0[iParam12].f_4 = 0;
			Param0[iParam12] = 4294967295;
			Param0[iParam12].f_8 = 99999999;
			iVar1++;
		}
		return 1;
	}
	return 0;
}

void Function_39(struct<2>[] Param0, int iParam1) //Position: 0x1572 / 5490
{
	struct<2> Var0;
	float fVar2;
	int iVar3;
	
	GET_VOLUME_CENTER(&Global_44085[iParam19] + 8, &Var0);
	fVar2 = Function_40(StackVal, Var0, 1);
	iVar3 = 0;
	while (iVar3 < 29)
	{
		if (!StackVal)
		{
			Param0[iVar32] = iParam1;
			Param0[iVar32].f_4 = 1;
			Param0[iVar32].f_8 = FLOOR(fVar2);
			return;
		}
		iVar3++;
	}
	return;
}

var Function_40(var uParam0, var uParam1, bool bParam2) //Position: 0x15D3 / 5587
{
	struct<2> Var0;
	var uVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar3 = 16;
	if (&bParam2)
	{
		iVar3 = 393264;
	}
	uVar4 = CREATE_OBJECTSET_IN_LAYOUT("tempPathSet", &Global_43578, 36, 1);
	if (FIND_TRAFFIC_PATH(&Global_43578, &uVar4, &Global_54078, &uParam0, iVar3, &uVar2))
	{
		iVar5 = Function_42(&uVar4);
		Function_41(&uVar4);
		DESTROY_OBJECTSET(&uVar4);
		return iVar5;
	}
	Function_41(&uVar4);
	DESTROY_OBJECTSET(&uVar4);
	return VDIST(Global_54078, Var0);
}

void Function_41(var uParam0) //Position: 0x1649 / 5705
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&iVar0));
		}
	}
	return;
}

var Function_42(int iParam0) //Position: 0x1692 / 5778
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&iParam0))
	{
		iVar1 = (iVar1 + CURVE_CALCULATE_DISTANCE_BY_STEP_SIZE(GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam0)), 0.0f, 1.0f, 50.0f));
		bVar0++;
	}
	return iVar1;
}

var Function_43(int iParam0) //Position: 0x16CB / 5835
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

