//Decompiled with MagicRDR v1.0
//Function Count : 82
//Statics Count : 176
//Natives Count : 141
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	var uLocal_2 = 0;
	bool bLocal_3 = false;
	struct<2> Local_4[30];
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
	float fLocal_126 = 0.0f;
	var uLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	struct<2> Local_132 = { 0, 0 } ;
	var uLocal_134 = 0;
	struct<2> Local_135 = { 0, 0 } ;
	var uLocal_137 = 0;
	struct<2> Local_138 = { 0, 0 } ;
	var uLocal_140 = 0;
	bool bLocal_141 = false;
	float fLocal_142 = 0.0f;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	int iLocal_145 = 0;
	var uLocal_146 = 0;
	float fLocal_147 = 0.0f;
	bool bLocal_148 = false;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	float fLocal_153 = 0.0f;
	int iLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	int iLocal_163 = 0;
	bool bLocal_164 = false;
	struct<2> Local_165 = { 0, 0 } ;
	var uLocal_167 = 0;
	struct<2> Local_168 = { 0, 0 } ;
	var uLocal_170 = 0;
	bool bLocal_171 = false;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	
	iLocal_0 = 0;
	bVar0 = false;
	if (StackVal || StackVal != 2 != 1)
	{
		iLocal_163 = 1;
		Local_165 = *(&Global_42862 + 32);
	}
	while (!IS_EXITFLAG_SET())
	{
		bLocal_3 = 250;
		switch (iLocal_0)
		{
			case 0x00000000:
				if (Function_78(&Local_4, &uLocal_2, &uLocal_127, iLocal_163, 0))
				{
					iLocal_129 = Function_75(&Local_4, iLocal_163, 0);
					if (iLocal_129 >= 0)
					{
						iLocal_0 = 1;
					}
					else
					{
						Function_72("PASS_CAMP_NoDest", 0x41200000, 1, 0, 2, 1, 0);
						TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					}
				}
				else
				{
					bLocal_3 = false;
				}
				break;
			
			case 0x00000001:
				if (!HUD_IS_SHOWING_SMALL_TEXT())
				{
					iLocal_0 = 2;
					bLocal_3 = false;
				}
				break;
			
			case 0x00000002:
				if (iLocal_129 == 0)
				{
					Function_72("No destinations", 0x41200000, 1, 0, 2, 1, 0);
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					return;
				}
				iLocal_154 = Function_71(&Local_4, Local_4 + 1, 0);
				Function_70(&Local_4, iLocal_154);
				iLocal_0 = 3;
			
			case 0x00000003:
				Function_58();
				bLocal_3 = false;
				break;
			
			case 0x00000004:
				if (iLocal_163 && iLocal_128 != 0)
				{
					uLocal_149 = Function_54(StackVal, *(&Global_42862 + 32), 393264, 0.0f, 200.0f, &Local_132, 0);
				}
				else
				{
					uLocal_130 = Function_53(Local_4[iLocal_1282]);
					GET_OBJECT_POSITION(&uLocal_130, &Local_132);
				}
				bVar0 = true;
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_159))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_159);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_157))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_157);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_155))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_155);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_161))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_161);
				}
				DECOR_SET_BOOL(&Global_54076, "playerFastTravel", true);
				if (!Function_52(Global_119937, 4))
				{
					Function_51(&Global_119937, 4);
				}
				uLocal_151 = CREATE_LAYOUT("campTeleport");
				iLocal_0 = 12;
				bLocal_3 = false;
			
			case 0x0000000C:
				if (!DECOR_CHECK_EXIST(&Global_54076, "playerFastTravel"))
				{
					if (Function_18())
					{
						if (!DECOR_CHECK_EXIST(&Global_54076, "playerFastTravelOnFoot"))
						{
							if (!DECOR_CHECK_EXIST(&Global_54076, "playerFastTravelOnHorse"))
							{
								uLocal_143 = Function_7(StackVal, StackVal, 1, 1, Global_54078, bLocal_141, 1, 0);
								TELEPORT_ACTOR(&uLocal_143, &Global_54078, 1, 1, 1);
							}
							else
							{
								bVar1 = DECOR_GET_INT(&Global_54076, "playerFastTravelOnHorse");
								if (StackVal == bVar1 + 976)
								{
									uLocal_143 = Function_7(StackVal, StackVal, 1, 1, Global_54078, bLocal_141, 1, 0);
								}
								else
								{
									uLocal_143 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uLocal_151, Function_6(), bVar1, Global_54078, Vector(0.0f, bLocal_141, 0.0f));
									ACCESSORIZE_HORSE(GET_MOUNT(&Global_54076), 3);
									bLocal_164 = true;
								}
								TELEPORT_ACTOR(&uLocal_143, &Global_54078, 1, 1, 1);
								DECOR_REMOVE(&Global_54076, "playerFastTravelOnHorse");
							}
							Function_5((TO_FLOAT(StackVal) * 2.0f));
							Function_3(ROUND((((TO_FLOAT(StackVal) * 2.0f) * 4.0f) / 3600.0f)));
						}
						else
						{
							DECOR_REMOVE(&Global_54076, "playerFastTravelOnFoot");
							Function_5((TO_FLOAT(StackVal) * 4.0f));
							Function_3(ROUND((((TO_FLOAT(StackVal) * 4.0f) * 4.0f) / 3600.0f)));
						}
						iLocal_0 = 5;
					}
				}
				else
				{
					bLocal_3 = false;
				}
				break;
			
			case 0x00000005:
				if (IS_ACTOR_VALID(&uLocal_143))
				{
					GET_POSITION(&uLocal_143, &Local_168);
					if (Function_2(StackVal, StackVal, Global_54078, Local_168) > 5.0f)
					{
						if (IS_ACTOR_VALID(&uLocal_143))
						{
							ACTOR_MOUNT_ACTOR(&Global_54076, &uLocal_143);
						}
						if (bLocal_164)
						{
							RELEASE_ACTOR(&uLocal_143);
						}
						iLocal_0 = 6;
					}
				}
				else
				{
					iLocal_0 = 6;
				}
				break;
			
			case 0x00000006:
				iLocal_0 = 7;
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
				if (VDIST(Local_132, Global_54078) > 5.0f || GET_TASK_STATUS(&Global_54076, 61) != 0)
				{
					iLocal_0 = 11;
				}
				GET_ACTOR_VELOCITY(&Global_54076, &Local_138);
				if (fLocal_142 > 1.0f)
				{
					if (VMAG(Local_138) > 0,5f)
					{
						fLocal_142 = GET_CURRENT_GAME_TIME();
					}
				}
				else if (VMAG(Local_138) < 0,25f)
				{
					fLocal_142 = 0.0f;
				}
				else if (fLocal_142 + 5.0f) > GET_CURRENT_GAME_TIME()
				{
					bLocal_3 = false;
					iLocal_0 = 11;
				}
				if (((((((((((((((((FABS(GET_ANALOGUE_ACTION("@GENERIC.MOVE_X", 1)) < 0.0f || FABS(GET_ANALOGUE_ACTION("@GENERIC.MOVE_Y", 1)) < 0.0f) || FABS(GET_ANALOGUE_ACTION("@CAMERA.MOVE_X", 1)) < 0.0f) || FABS(GET_ANALOGUE_ACTION("@CAMERA.MOVE_Y", 1)) < 0.0f) || UNK_0x062C5047("@UI.NAVIGATE_UP", 0, 0)) || UNK_0x062C5047("@UI.NAVIGATE_DOWN", 0, 0)) || UNK_0x062C5047("@UI.NAVIGATE_LEFT", 0, 0)) || UNK_0x062C5047("@UI.NAVIGATE_RIGHT", 0, 0)) || UNK_0x062C5047("@GENERIC.USE2", 0, 0)) || UNK_0x062C5047("@UI.ACCEPT", 0, 0)) || UNK_0x062C5047("@GENERIC.USE", 0, 0)) || UNK_0x062C5047("@UI.CANCEL", 0, 0)) || UNK_0x062C5047("@FOOT.COVER", 0, 0)) || UNK_0x062C5047("@RADIAL_MENU.SHOW_HIDE", 0, 0)) || UNK_0x062C5047("@GENERIC.TARGET", 0, 0)) || UNK_0x062C5047("@GENERIC.FIRE", 0, 0)) || UNK_0x062C5047("@GENERIC.DEADEYE", 0, 0)) || UNK_0x062C5047("@CAMERA.LOOK_BACK", 0, 0))
				{
					iLocal_0 = 11;
				}
				bLocal_3 = false;
				break;
			
			case 0x0000000B:
				iLocal_0 = 13;
				bLocal_3 = false;
				break;
			
			case 0x0000000D:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_3);
	}
	if (bVar0)
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		UI_POP("nCutscenes");
		UNK_0xBAE0A3F8(0);
	}
	if (!IS_GAME_RESETTING())
	{
		if (HUD_IS_FADED())
		{
			HUD_FADE_IN(0,5f, 1065353216);
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_159))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_159);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_157))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_157);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_155))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_155);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_161))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_161);
	}
	if (IS_OBJECTSET_VALID(&iLocal_145))
	{
		Function_1(&iLocal_145);
		DESTROY_OBJECTSET(&iLocal_145);
	}
	if (IS_LAYOUTREF_VALID(&uLocal_151))
	{
		RELEASE_LAYOUT_REF(&uLocal_151);
	}
	AI_STOP_IGNORING_ACTORS();
	Global_6634 = 0;
	RESET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(&Global_54076));
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x743 / 1859
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&iParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&iParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &iParam0);
		CLEAN_OBJECTSET(&iParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&iVar0));
		}
	}
	return;
}

float Function_2(struct<2> Param0, struct<2> Param2) //Position: 0x78C / 1932
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

void Function_3(bool bParam0) //Position: 0x7A9 / 1961
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
			Function_4(&(Global_26652[iVar04]));
		}
		if (GET_DAY(&(Global_26652[iVar04])) == 0)
		{
			iVar2 = 1;
		}
		ADD_TIME(&(Global_26652[iVar04]), iVar2, &bParam0, false, 0);
		*(&Global_27462[iVar052] + 376) = &Global_26652[iVar04];
		if (Global_47151[16])
		{
			PRINTNL();
			PRINTSTRING("NEW time of day delay: ");
			Function_4(&(Global_26652[iVar04]));
		}
		iVar0++;
	}
	return;
}

void Function_4(int iParam0) //Position: 0x86F / 2159
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

void Function_5(bool bParam0) //Position: 0x8B9 / 2233
{
	FEED_CODE_WARP_DIST(bParam0);
	ADVANCE_TIME_HOURS(((bParam0 * 4.0f) / 3600.0f));
	return;
}

var Function_6() //Position: 0x8D1 / 2257
{
	int iVar0;
	
	return &iVar0;
}

var Function_7(var uParam0, bool bParam1, int iParam2, int iParam3, var uParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0x8DA / 2266
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_6624)
	{
		Function_16(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_15())
		{
			return "";
		}
	}
	if (!Function_13())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_12();
	if ((bVar1 && iParam6) && uParam0)
	{
		Function_11(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_11(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_11(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_11(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_10(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_10(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_6(), bVar0, Vector(&iParam2, &iParam3, &uParam4), Vector(0.0f, &bParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_6(), 993, Vector(&iParam2, &iParam3, &uParam4), Vector(0.0f, &bParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
				if (IS_ACTOR_HORSE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
				}
				else if (IS_ACTOR_MULE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
				}
			}
			else
			{
				Var8 = Vector(&iParam2, &iParam3, &uParam4);
				if (!Function_9(StackVal, Var8))
				{
					TELEPORT_ACTOR(&Global_21369 + 72, &Var8, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (uParam0 || Global_6623))
	{
		if (!&bParam7)
		{
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_6(), bVar0, Vector(&iParam2, &iParam3, &uParam4), Vector(0.0f, &bParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_6(), 993, Vector(&iParam2, &iParam3, &uParam4), Vector(0.0f, &bParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
		if (IS_ACTOR_HORSE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
		}
		else if (IS_ACTOR_MULE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 9 || ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 8)
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 8);
		}
	}
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	if (bVar1)
	{
		if (&bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(&Global_21369 + 72, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(&Global_54076);
		SET_ACTORS_HORSE(&Global_54076, &Global_21369 + 72);
		Function_8(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_8(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xC37 / 3127
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&uParam0, &uParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&uParam0, &uParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&uParam0, &uParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&uParam0, &uParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&uParam0, &uParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&uParam0, &uParam4);
	}
}

bool Function_9(vector3 vParam0) //Position: 0xC81 / 3201
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_10(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0xC99 / 3225
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!&bParam2)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!&bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (&bParam4)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

struct<8> Function_11(bool bParam0) //Position: 0xD39 / 3385
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

void Function_12() //Position: 0xD62 / 3426
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&Global_21369 + 72)) != &iVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, &iVar0);
		}
	}
	return;
}

bool Function_13() //Position: 0xDDA / 3546
{
	if (Function_14() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_14() //Position: 0xDF0 / 3568
{
	return Global_21369.f_244;
}

bool Function_15() //Position: 0xDFB / 3579
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_16(var uParam0, bool bParam1, bool bParam2) //Position: 0xE1B / 3611
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_17(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_17(&Global_21369 + 72 + 32, 64);
	}
	return;
}

void Function_17(var uParam0, int iParam1) //Position: 0xE4A / 3658
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_18() //Position: 0xE5B / 3675
{
	struct<2> Var0;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	vector3 vVar17;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	var uVar24;
	var uVar25;
	int iVar26;
	var uVar27;
	struct<2> Var28;
	bool bVar30;
	float fVar31;
	var uVar32;
	var uVar33;
	struct<2> Var34;
	int iVar36;
	
	switch (iLocal_1)
	{
		case 0x00000000:
			UNK_0xEF270DC9();
			AI_IGNORE_ACTOR(&Global_54076);
			iLocal_1 = 1;
			break;
		
		case 0x00000001:
			if (HUD_IS_FADED())
			{
				UI_POP("nCutscenes");
				UNK_0xBAE0A3F8(0);
				if (iLocal_128 != 0 && iLocal_163)
				{
					iLocal_145 = &Global_42862 + 16;
					iLocal_1 = 2;
				}
				else
				{
					if (!IS_OBJECTSET_VALID(&iLocal_145))
					{
						iLocal_145 = CREATE_OBJECTSET_IN_LAYOUT("passengerCampPath", &uLocal_151, 36, 1);
					}
					if (FIND_TRAFFIC_PATH(&uLocal_151, &iLocal_145, &Global_54078, &Local_132, 393264, &uVar25))
					{
						uLocal_149 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_145));
					}
					iLocal_1 = 2;
				}
			}
			break;
		
		case 0x00000002:
			STREAMING_EVICT_ALL();
			fLocal_126 = GET_CURRENT_GAME_TIME();
			if (!IS_OBJECT_VALID(&uLocal_149))
			{
				uLocal_149 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_145));
			}
			Function_47(StackVal, &uLocal_149, Local_132, 2,1f, 0.0f, 1.0f, 2);
			vVar5 = { StackVal, StackVal, Function_47(StackVal, &uLocal_149, Local_132, 2,1f, 0.0f, 1.0f, 2) };
			Function_46(&vVar5);
			Local_135 = Function_46(&vVar5);
			Local_132 = Local_135;
			uVar27 = Function_38(StackVal, Local_132);
			if (IS_OBJECT_VALID(&uVar27))
			{
				uVar32 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar30, &iLocal_145));
				uVar33 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar30 + 1, &iLocal_145));
				Var34 = Local_132;
				while (((Function_9(StackVal, Var28) && bVar30 > 10) && IS_OBJECT_VALID(&uVar32)) && IS_OBJECT_VALID(&uVar33))
				{
					fVar31 = Function_37(&uVar32, &uVar33);
					Function_34(StackVal, Var34, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar30, &iLocal_145)), 1.0f, GET_VOLUME_FROM_OBJECT(&uVar27));
					Var28 = Function_34(StackVal, Var34, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar30, &iLocal_145)), 1.0f, GET_VOLUME_FROM_OBJECT(&uVar27));
					bVar30++;
					if (Function_9(StackVal, Var28))
					{
						if (fVar31 > 0.0f)
						{
							GET_CURVE_POINT(&uVar32, 1.0f, &iVar36, 0);
						}
						else
						{
							GET_CURVE_POINT(&uVar32, 0.0f, &iVar36, 0);
						}
						Function_46(&iVar36);
						Var34 = Function_46(&iVar36);
						uVar32 = &uVar33;
						uVar33 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar30 + 1, &iLocal_145));
					}
				}
				if (!Function_9(StackVal, Var28))
				{
					Local_132 = Var28;
					bLocal_171 = true;
					uLocal_172 = &uVar32;
					uLocal_174 = &uVar33;
					Local_135 = Var28;
					Function_47(StackVal, &uLocal_149, Local_132, 2,1f, 0.0f, 1.0f, 2);
					vVar5 = { StackVal, StackVal, Function_47(StackVal, &uLocal_149, Local_132, 2,1f, 0.0f, 1.0f, 2) };
				}
				if (DECOR_CHECK_EXIST(&uVar27, "deleteMe"))
				{
					DESTROY_OBJECT(&uVar27);
				}
			}
			if (bLocal_171)
			{
				uLocal_149 = &uLocal_172;
				uVar24 = &uLocal_174;
			}
			else
			{
				uVar24 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iLocal_145));
			}
			GET_CURVE_POINT(&uLocal_149, 1.0f, &vVar8, 0);
			GET_CURVE_POINT(&uLocal_149, 0.0f, &vVar11, 0);
			GET_CURVE_POINT(&uVar24, 1.0f, &vVar14, 0);
			GET_CURVE_POINT(&uVar24, 1.0f, &vVar17, 0);
			fVar20 = Function_33(StackVal, StackVal, StackVal, StackVal, vVar8, vVar14);
			fVar21 = Function_33(StackVal, StackVal, StackVal, StackVal, vVar8, vVar17);
			fVar22 = Function_33(StackVal, StackVal, StackVal, StackVal, vVar11, vVar14);
			fVar23 = Function_33(StackVal, StackVal, StackVal, StackVal, vVar11, vVar17);
			if ((fVar20 > fVar22 && fVar20 > fVar23) || (fVar21 > fVar22 && fVar21 > fVar23))
			{
				UNK_0x19D652F9(&uLocal_149, 1.0f, &vVar5, &iVar2);
			}
			else
			{
				UNK_0x19D652F9(&uLocal_149, -1.0f, &vVar5, &iVar2);
			}
			Function_46(&iVar2);
			Var0 = Function_46(&iVar2);
			Function_32(StackVal, StackVal, Var0, Local_132);
			Local_135 = Function_32(StackVal, StackVal, Var0, Local_132);
			bLocal_141 = UNK_0x9C40E671(&Local_135);
			iVar26 = Function_10(StackVal, Var0, 0, 1, 1);
			if (iVar26 != Local_4[iLocal_1282])
			{
				Local_4[iLocal_1282] = iVar26;
			}
			if (!Function_9(StackVal, Var0))
			{
				Function_31(StackVal, &Global_54076, Var0, bLocal_141, 1, 1, 1);
				Global_6634 = 1;
				Global_6629 = 0;
				Function_27(1, 0, 1);
				Function_25();
				iLocal_1 = 3;
				fLocal_153 = GET_CURRENT_GAME_TIME();
			}
			else
			{
				AI_STOP_IGNORING_ACTORS();
				iLocal_1 = 7;
				return 1;
			}
		
		case 0x00000003:
			if (fLocal_126 + 1.0f) > GET_CURRENT_GAME_TIME()
			{
				CAMERA_RESET(0);
				Function_22();
				iLocal_1 = 4;
			}
			break;
		
		case 0x00000004:
			if (STREAMING_IS_WORLD_LOADED() && ((Function_20(Local_4[iLocal_1282]) || Local_4[iLocal_1282] != 4294967295) || (iLocal_163 && iLocal_128 != 0)))
			{
				if (FIND_GROUND_INTERSECTION(&Global_54078, 10.0f, &Var0, &Var28))
				{
					Function_31(StackVal, &Global_54076, Var0, bLocal_141, 1, 1, 1);
				}
				iLocal_1 = 6;
			}
			else if (fLocal_153 + 50.0f) > GET_CURRENT_GAME_TIME()
			{
				if (FIND_GROUND_INTERSECTION(&Global_54078, 10.0f, &Var0, &Var28))
				{
					Function_31(StackVal, &Global_54076, Var0, bLocal_141, 1, 1, 1);
				}
				iLocal_1 = 6;
			}
			break;
		
		case 0x00000006:
			if (STREAMING_IS_WORLD_LOADED() && (!Function_19(Local_4[iLocal_1282]) || Function_20(Local_4[iLocal_1282])))
			{
				AI_STOP_IGNORING_ACTORS();
				iLocal_1 = 7;
				if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
				{
					SET_ACTOR_HEADING(GET_MOUNT(&Global_54076), bLocal_141, 1);
				}
				else
				{
					SET_ACTOR_HEADING(&Global_54076, bLocal_141, 1);
				}
				return 1;
			}
			if (fLocal_153 + 30.0f) > GET_CURRENT_GAME_TIME()
			{
				iLocal_1 = 7;
				if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
				{
					SET_ACTOR_HEADING(GET_MOUNT(&Global_54076), bLocal_141, 1);
				}
				else
				{
					SET_ACTOR_HEADING(&Global_54076, bLocal_141, 1);
				}
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_19(int iParam0) //Position: 0x12E6 / 4838
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_20(int iParam0) //Position: 0x12FC / 4860
{
	if (!Function_19(iParam0))
	{
		return 1;
	}
	return Function_21(&(Global_43791[iParam0]), 4);
}

bool Function_21(int iParam0, int iParam1) //Position: 0x1318 / 4888
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_22() //Position: 0x1335 / 4917
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_23(16384);
	}
	return;
}

void Function_23(int iParam0) //Position: 0x1351 / 4945
{
	Function_24(&Global_43580, iParam0);
	return;
}

void Function_24(var uParam0, var uParam1) //Position: 0x135F / 4959
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_25() //Position: 0x137E / 4990
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_26(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_26(var uParam0, int iParam1) //Position: 0x13A8 / 5032
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_27(var uParam0, bool bParam1, int iParam2) //Position: 0x13C2 / 5058
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
		if (Function_19(Global_43789))
		{
			Function_30(&(Global_43791[Global_43789]), 131072);
			Function_26(&(Global_43791[Global_43789]), 2097152);
			Function_28(Global_43789);
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
				if (Function_21(&(Global_43791[iVar0]), 4) || Function_21(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_26(&(Global_43791[iVar0]), 2097155);
					Function_30(&(Global_43791[iVar0]), 262144);
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

void Function_28(int iParam0) //Position: 0x14CE / 5326
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_29())
			{
				return;
			}
		}
		if (!Function_21(&(Global_43791[iParam0]), 2048))
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

bool Function_29() //Position: 0x154D / 5453
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_21(&(Global_43791[iVar0]), 4) || Function_21(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_30(var uParam0, int iParam1) //Position: 0x15B6 / 5558
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_31(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, bool bParam6) //Position: 0x15C7 / 5575
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &iParam5, &bParam6);
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
				TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &iParam5, &bParam6);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(&uParam0, Param1, bParam3, &bParam4, &iParam5, &bParam6);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

struct<8> Function_32(struct<2> Param0, struct<2> Param2) //Position: 0x1696 / 5782
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	VNORMALIZE(&Var0);
	return StackVal, Var0;
}

var Function_33(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5) //Position: 0x16B3 / 5811
{
	struct<2> Var0;
	struct<2> Var2;
	
	Function_46(&iParam0);
	Var0 = Function_46(&iParam0);
	Function_46(&iParam3);
	Var2 = Function_46(&iParam3);
	return VDIST(Var0, Var2);
}

struct<8> Function_34(struct<2> Param0, var uParam2, bool bParam3, var uParam4) //Position: 0x16D6 / 5846
{
	vector3 vVar0;
	vector3 vVar3;
	struct<2> Var6;
	int iVar8;
	
	Function_47(StackVal, &uParam2, Param0, 0x41200000, 0, 0x3f800000, 1);
	vVar0 = { StackVal, StackVal, Function_47(StackVal, &uParam2, Param0, 0x41200000, 0, 0x3f800000, 1) };
	while (!Function_36(&vVar0, ROUND(bParam3)) && iVar8 > 10)
	{
		vVar3 = { StackVal, StackVal, vVar0 };
		UNK_0x19D652F9(&uParam2, (bParam3 * 20.0f), &vVar3, &vVar0);
		Function_46(&vVar0);
		if (!IS_POINT_IN_VOLUME(Function_46(&vVar0), &uParam4))
		{
			Function_46(&vVar0);
			Var6 = Function_46(&vVar0);
			return StackVal, Var6;
		}
		Function_46(&vVar0);
		Var6 = Function_46(&vVar0);
		iVar8++;
	}
	Function_35();
	return StackVal, Function_35();
}

struct<8> Function_35() //Position: 0x175B / 5979
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_36(struct<13> Param0) //Position: 0x1765 / 5989
{
	if (iParam1 != 4294967295 && Param0.f_12 > 0,001f)
	{
		return 1;
	}
	if (iParam1 != 1 && Param0.f_12 < 0,999f)
	{
		return 1;
	}
	return 0;
}

var Function_37(var uParam0, int iParam1) //Position: 0x1799 / 6041
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	
	GET_CURVE_POINT(&uParam0, 1.0f, &vVar0, 0);
	GET_CURVE_POINT(&uParam0, 0.0f, &vVar3, 0);
	GET_CURVE_POINT(&iParam1, 1.0f, &vVar6, 0);
	GET_CURVE_POINT(&iParam1, 0.0f, &vVar9, 0);
	fVar12 = Function_33(StackVal, StackVal, StackVal, StackVal, vVar0, vVar6);
	fVar13 = Function_33(StackVal, StackVal, StackVal, StackVal, vVar0, vVar9);
	fVar14 = Function_33(StackVal, StackVal, StackVal, StackVal, vVar3, vVar6);
	fVar15 = Function_33(StackVal, StackVal, StackVal, StackVal, vVar3, vVar9);
	if ((fVar12 > fVar14 && fVar12 > fVar15) || (fVar13 > fVar14 && fVar13 > fVar15))
	{
		return -1.0f;
	}
	return 1.0f;
}

var Function_38(struct<2> Param0) //Position: 0x1818 / 6168
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_6667)
	{
		if (Global_6667[iVar028].f_152 == 4)
		{
			if (Global_6667[iVar028].f_180)
			{
				if (!Function_42(iVar0, 0) && IS_VOLUME_VALID(&Global_6667[iVar028] + 80))
				{
					if (IS_POINT_IN_VOLUME(Param0, &Global_6667[iVar028] + 80))
					{
						return GET_OBJECT_FROM_VOLUME(&Global_6667[iVar028] + 80);
					}
				}
			}
		}
		if (Global_6667[iVar028].f_152 == 3)
		{
			if (Global_6667[iVar028].f_180)
			{
				if (!Function_42(iVar0, 0))
				{
					if (Function_2(StackVal, StackVal, Param0, *(&Global_6667[iVar028] + 88)) > 10.0f)
					{
						uVar1 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_43578, Function_6(), 4,203895E-45f, *(&Global_6667[iVar028] + 88), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
						DECOR_SET_BOOL(&uVar1, "deleteMe", true);
						return GET_OBJECT_FROM_VOLUME(&uVar1);
					}
				}
			}
		}
		iVar0++;
	}
	if (Function_40())
	{
		Function_39(Global_39906.f_24);
		if (Function_2(StackVal, StackVal, Param0, Function_39(Global_39906.f_24)) > 200.0f)
		{
			Function_39(Global_39906.f_24);
			uVar1 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_43578, Function_6(), 4,203895E-45f, Function_39(Global_39906.f_24), Vector(0.0f, 0.0f, 0.0f), Vector(200.0f, 50.0f, 200.0f));
			DECOR_SET_BOOL(&uVar1, "deleteMe", true);
			return GET_OBJECT_FROM_VOLUME(&uVar1);
		}
	}
	if (IS_POINT_IN_VOLUME(Param0, &Global_44085[Global_46760[2]9] + 8))
	{
		return GET_OBJECT_FROM_VOLUME(&Global_44085[Global_46760[2]9] + 8);
	}
	if (IS_POINT_IN_VOLUME(Param0, &Global_44085[Global_46816[2]9] + 8))
	{
		return GET_OBJECT_FROM_VOLUME(&Global_44085[Global_46816[2]9] + 8);
	}
	if (IS_POINT_IN_VOLUME(Param0, &Global_44085[Global_46796[0]9] + 8))
	{
		return GET_OBJECT_FROM_VOLUME(&Global_44085[Global_46796[0]9] + 8);
	}
	if (IS_POINT_IN_VOLUME(Param0, &Global_44085[Global_46796[3]9] + 8))
	{
		return GET_OBJECT_FROM_VOLUME(&Global_44085[Global_46796[3]9] + 8);
	}
	if (IS_POINT_IN_VOLUME(Param0, &Global_44085[Global_46796[2]9] + 8))
	{
		return GET_OBJECT_FROM_VOLUME(&Global_44085[Global_46796[2]9] + 8);
	}
	if (IS_POINT_IN_VOLUME(Param0, &Global_44085[Global_46838[1]9] + 8))
	{
		return GET_OBJECT_FROM_VOLUME(&Global_44085[Global_46838[1]9] + 8);
	}
	if (IS_POINT_IN_VOLUME(Param0, &Global_44085[Global_46850[2]9] + 8))
	{
		return GET_OBJECT_FROM_VOLUME(&Global_44085[Global_46850[2]9] + 8);
	}
	if (IS_POINT_IN_VOLUME(Param0, &Global_44085[Global_46850[1]9] + 8))
	{
		return GET_OBJECT_FROM_VOLUME(&Global_44085[Global_46850[1]9] + 8);
	}
	return "";
}

struct<8> Function_39(int iParam0) //Position: 0x1AC1 / 6849
{
	struct<2> Var0;
	
	if (iParam0 == Global_46926[5])
	{
		Var0 = Vector(-1043,829f, 183,985f, 1371,714f);
	}
	else if (iParam0 == Global_46866[3])
	{
		Var0 = Vector(-2234,426f, 23,091f, 4454,898f);
	}
	else if (iParam0 == Global_46926[6])
	{
		Var0 = Vector(-482,365f, 143,447f, 1908,17f);
	}
	else if (iParam0 == Global_46816[3])
	{
		Var0 = Vector(-490,208f, 20,103f, 3023,158f);
	}
	else if (iParam0 == Global_46760[13])
	{
		Var0 = Vector(-1945,125f, 30,262f, 3469,187f);
	}
	else if (iParam0 == Global_46866[7])
	{
		Var0 = Vector(-2726,75f, 55,867f, 4619,704f);
	}
	else if (iParam0 == Global_46760[6])
	{
		Var0 = Vector(-1912,426f, 29,225f, 2261,395f);
	}
	else if (iParam0 == Global_46866[10])
	{
		Var0 = Vector(-1756,155f, 30,369f, 4819,779f);
	}
	else if (iParam0 == Global_46866[8])
	{
		Var0 = Vector(-1445,059f, 19,691f, 4909,378f);
	}
	else if (iParam0 == Global_46760[11])
	{
		Var0 = Vector(-2829.0f, 20,079f, 3076,999f);
	}
	else if (iParam0 == Global_46816[6])
	{
		Var0 = Vector(-1269,727f, 109,427f, 2762,885f);
	}
	else if (iParam0 == Global_46926[3])
	{
		Var0 = Vector(-733,172f, 228,751f, 1129,988f);
	}
	else if (iParam0 == Global_46850[5])
	{
		Var0 = Vector(-3384,816f, 55,788f, 4746,955f);
	}
	else if (iParam0 == Global_46866[9])
	{
		Var0 = Vector(-1200,055f, 19,075f, 4964,34f);
	}
	else if (iParam0 == Global_46866[11])
	{
		Var0 = Vector(-1147,715f, 27,988f, 4820,093f);
	}
	else if (iParam0 == Global_46760[7])
	{
		Var0 = Vector(-2868,86f, 74,342f, 2178,624f);
	}
	else if (iParam0 == Global_46838[3])
	{
		Var0 = Vector(-3140,568f, 44,538f, 3284,213f);
	}
	else if (iParam0 == Global_46866[4])
	{
		Var0 = Vector(-1361,188f, 13,056f, 4299,818f);
	}
	else if (iParam0 == Global_46796[7])
	{
		Var0 = Vector(-4016,218f, 21,468f, 2398,236f);
	}
	else if (iParam0 == Global_46926[4])
	{
		Var0 = Vector(-844,503f, 189,827f, 1577,429f);
	}
	else
	{
		PRINTSTRING("The bad bh region is: ");
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(&Global_44085[iParam09] + 8)));
		PRINTNL();
		LOG_ERROR("No True bounty location...we're guessing here!");
		GET_VOLUME_CENTER(&Global_44085[iParam09] + 8, &Var0);
	}
	return StackVal, Var0;
}

bool Function_40() //Position: 0x1DDA / 7642
{
	return Function_41(StackVal, 1);
}

bool Function_41(var uParam0, int iParam1) //Position: 0x1DE9 / 7657
{
	return (uParam0 && iParam1) == 0;
}

bool Function_42(int iParam0, bool bParam1) //Position: 0x1DF6 / 7670
{
	int iVar0;
	
	iVar0 = Function_44(iParam0);
	if (!Function_43(iVar0))
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

bool Function_43(int iParam0) //Position: 0x1E34 / 7732
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_44(int iParam0) //Position: 0x1E4B / 7755
{
	if (!Function_45(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_45(int iParam0) //Position: 0x1E65 / 7781
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_46(vector3 vParam0) //Position: 0x1E7B / 7803
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

vector3 Function_47(var uParam0, struct<2> Param1, float fParam3, float fParam4, float fParam5, int iParam6) //Position: 0x1E9D / 7837
{
	bool bVar0;
	struct<13> Var1;
	
	if (!&fParam5 <= &fParam4)
	{
		fVar10 = &fParam5;
		fParam5 = &fParam4;
		fParam4 = fVar10;
	}
	GET_CURVE_POINT(&uParam0, &fParam4, &Var1, 0);
	Function_46(&Var1);
	bVar11 = VDIST(Function_46(&Var1), Param1);
	vVar7 = { StackVal, StackVal, Var1 };
	while (Var1.f_12 >= &fParam5 && !bVar0)
	{
		Var4 = { StackVal, StackVal, Var1 };
		UNK_0x19D652F9(&uParam0, FABS(&fParam3), &Var4, &Var1);
		Function_46(&Var1);
		bVar12 = VDIST(Function_46(&Var1), Param1);
		if (bVar12 > bVar11)
		{
			bVar11 = bVar12;
			vVar7 = { StackVal, StackVal, Var1 };
		}
		if (Function_50(&Var1))
		{
			bVar0 = true;
		}
	}
	if (&iParam6 < 1 && &fParam3 < 1.0f)
	{
		UNK_0x19D652F9(&uParam0, (&fParam3 / 2.0f), &vVar7, &Var1);
		UNK_0x19D652F9(&uParam0, (-1.0f * (&fParam3 / 2.0f)), &vVar7, &Var4);
		Function_47(StackVal, &uParam0, Param1, (&fParam3 / 10.0f), Function_49(Var4.f_12, Var1.f_12), Function_48(Var4.f_12, Var1.f_12), (&iParam6 - 1));
		return StackVal, StackVal, Function_47(StackVal, &uParam0, Param1, (&fParam3 / 10.0f), Function_49(Var4.f_12, Var1.f_12), Function_48(Var4.f_12, Var1.f_12), (&iParam6 - 1));
	}
	return StackVal, StackVal, vVar7;
}

var Function_48(int iParam0, int iParam1) //Position: 0x1F9F / 8095
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

float Function_49(int iParam0, int iParam1) //Position: 0x1FB2 / 8114
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_50(struct<13> Param0) //Position: 0x1FC5 / 8133
{
	if (Param0.f_12 > 0,001f || Param0.f_12 < 0,999f)
	{
		return 1;
	}
	return 0;
}

void Function_51(var uParam0, int iParam1) //Position: 0x1FE8 / 8168
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_52(var uParam0, int iParam1) //Position: 0x1FF9 / 8185
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

var Function_53(int iParam0) //Position: 0x200C / 8204
{
	int iVar0;
	char* cVar1[24];
	
	if (!IS_LAYOUTREF_VALID(&Global_43578))
	{
		return "";
	}
	if (!Function_19(iParam0))
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

var Function_54(struct<2> Param0, int iParam2, float fParam3, float fParam4, var uParam5, bool bParam6) //Position: 0x20AC / 8364
{
	struct<2> Var0;
	var uVar2;
	struct<9> Var3;
	
	bVar6 = -1.0f;
	Function_35();
	uParam5 = Function_35();
	uVar2 = START_CURVE_QUERY(&Global_43578, Param0, iParam2, fParam3, fParam4, Function_49(((fParam4 - fParam3) / 5.0f), 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(&uVar2) < 0)
	{
		Function_55(StackVal, &uVar2, Param0, iParam2, fParam3, fParam4, Function_49(((fParam4 - fParam3) / 5.0f), 20.0f));
	}
	else
	{
		bVar7 = false;
		while (bVar7 < (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar2) - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(&uVar2, bVar7, &vVar3);
			if (!&bParam6 || !Function_50(&vVar3))
			{
				Var0 = vVar3.x;
				Var0.f_4 = vVar3.y;
				Var0.f_8 = vVar3.z;
				if (bVar6 > 0.0f || bVar6 < VDIST(Param0, Var0))
				{
					bVar6 = VDIST(Param0, Var0);
					uParam5 = Var0;
					uVar8 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar2, bVar7);
				}
			}
			bVar7++;
		}
	}
	UNK_0xDF93BD7C(&uVar2);
	return &uVar8;
}

void Function_55(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x2195 / 8597
{
	PRINTSTRING("Curve Query Report: NumCurves-");
	PRINTINT(GET_NUM_CURVES_IN_CURVE_QUERY(&uParam0));
	PRINTSTRING(" NumPoints-");
	PRINTINT(GET_NUM_POINTS_IN_CURVE_QUERY(&uParam0));
	PRINTSTRING(" SearchCenter-");
	PRINTVECTOR(Param1);
	PRINTSTRING(" curveMask-");
	PRINTINT(bParam3);
	PRINTSTRING(" min/max/freq-");
	PRINTFLOAT(bParam4);
	PRINTSTRING("/");
	PRINTFLOAT(bParam5);
	PRINTSTRING("/");
	PRINTFLOAT(bParam6);
	PRINTNL();
	Function_56(&uParam0);
}

void Function_56(int iParam0) //Position: 0x224F / 8783
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = false;
	while (bVar0 <= GET_NUM_CURVES_IN_CURVE_QUERY(&iParam0))
	{
		PRINTSTRING(GET_CURVE_NAME(GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&iParam0, bVar0)));
		PRINTNL();
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= GET_NUM_POINTS_IN_CURVE_QUERY(&iParam0))
	{
		GET_POINT_FROM_CURVE_QUERY(&iParam0, bVar0, &vVar1);
		Function_57(StackVal, StackVal, vVar1);
		PRINTSTRING(" from ");
		PRINTSTRING(GET_CURVE_NAME(GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&iParam0, bVar0)));
		PRINTNL();
		bVar0++;
	}
	return;
}

void Function_57(struct<17> Param0) //Position: 0x22C3 / 8899
{
	Function_46(&Param0);
	PRINTVECTOR(Function_46(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
	return;
}

void Function_58() //Position: 0x22F6 / 8950
{
	if (iLocal_163)
	{
		if (!Function_69(StackVal, StackVal, Local_165, (&Global_42862 + 32)))
		{
			Function_64(&Local_4);
			Local_165 = *(&Global_42862 + 32);
			iLocal_154 = 0;
			Function_62(&Local_4, iLocal_154);
		}
		if (StackVal || StackVal != 3 != 0)
		{
			Function_61(&Local_4);
			Local_165 = Vector(0.0f, 0.0f, 0.0f);
			iLocal_154 = Function_71(&Local_4, 0, 0);
			Function_62(&Local_4, iLocal_154);
			iLocal_163 = 0;
		}
	}
	else if (StackVal || StackVal != 2 != 1)
	{
		iLocal_163 = 1;
		Function_64(&Local_4);
		Local_165 = *(&Global_42862 + 32);
		iLocal_154 = 0;
		Function_62(&Local_4, iLocal_154);
	}
	if ((fLocal_147 + 0,3f) - Function_49(0,15f, ((0,15f * TO_FLOAT(iLocal_148)) / 5.0f))) > GET_CURRENT_GAME_TIME()
	{
		if (UNK_0x062C5047("@UI.NAVIGATE_UP", 1, 0))
		{
			PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
			iLocal_154 = Function_60(&Local_4, iLocal_154);
			Function_62(&Local_4, iLocal_154);
			fLocal_147 = GET_CURRENT_GAME_TIME();
			bLocal_148++;
		}
		else if (UNK_0x062C5047("@UI.NAVIGATE_DOWN", 1, 0))
		{
			PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
			iLocal_154 = Function_71(&Local_4, iLocal_154, 0);
			Function_62(&Local_4, iLocal_154);
			fLocal_147 = GET_CURRENT_GAME_TIME();
			bLocal_148++;
		}
		else
		{
			fLocal_147 = 0.0f;
			bLocal_148 = true;
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_159))
	{
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_159))
		{
			iLocal_128 = iLocal_154;
			iLocal_0 = 4;
			Function_59();
			return;
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_161))
	{
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_161))
		{
			TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
			return;
		}
	}
	return;
}

void Function_59() //Position: 0x249A / 9370
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_159))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_159);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_157))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_157);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_155))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_155);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_161))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_161);
	}
	return;
}

int Function_60(struct<2>[] Param0, int iParam1) //Position: 0x24DC / 9436
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam1 - 1);
	if (iVar0 <= 0)
	{
		iVar0 = (Param0 - 1);
	}
	while (!StackVal)
	{
		iVar0 = (iVar0 - 1);
		if (iVar0 > 0 && !bVar1)
		{
			iVar0 = (Param0 - 1);
			bVar1 = true;
		}
		else if (iVar0 > 0 && bVar1)
		{
			if (Function_19(Param0[02]))
			{
			}
			return 0;
		}
	}
	if (Function_19(Param0[iVar02]))
	{
	}
	return iVar0;
}

void Function_61(struct<2>[] Param0) //Position: 0x2552 / 9554
{
	Param0[02].f_4 = 0;
	Param0[02].f_8 = 0;
	Param0[02] = 4294967295;
	Param0[02].f_12 = 0;
	return;
}

void Function_62(struct<2>[] Param0, int iParam1) //Position: 0x257A / 9594
{
	char* cVar0[32];
	
	if (iLocal_163 && iParam1 != 0)
	{
		strcpy(&cVar0, "PASS_COACH_Waypoint", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63(Param0[iParam12]) };
	}
	SET_USE_CONTEXT_TEXT(&uLocal_159, "PASS_CAMP_currentDest", &cVar0, 0, 0, 0);
	return;
}

struct<32> Function_63(int iParam0) //Position: 0x25D9 / 9689
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_19(iParam0))
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

void Function_64(struct<2>[] Param0) //Position: 0x269B / 9883
{
	Param0[02].f_4 = 1;
	Param0[02].f_8 = ROUND(Function_68(&Global_42862 + 16));
	Param0[02] = Function_67(StackVal, *(&Global_42862 + 32), 1);
	Param0[02].f_12 = Function_65(StackVal, Param0[02]);
	return;
}

int Function_65(int iParam0, int iParam1) //Position: 0x26E8 / 9960
{
	int iVar0;
	
	if (Function_66(3) > 5)
	{
		return 0;
	}
	iVar0 = 1;
	if (Function_19(iParam0))
	{
		if (StackVal == 5)
		{
			iVar0 = 5;
		}
	}
	return (iVar0 * ROUND((0,67f * POW((IntToFloat(iParam1) * 0,01f), 0,9f))));
}

int Function_66(int iParam0) //Position: 0x2730 / 10032
{
	if (0 | Global_53524.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

int Function_67(struct<2> Param0, bool bParam2) //Position: 0x2758 / 10072
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 4294967295;
	while (iVar1 > 146 && !bVar0)
	{
		if (StackVal == 2)
		{
			if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (&bParam2)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

var Function_68(int iParam0) //Position: 0x27C4 / 10180
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

bool Function_69(struct<2> Param0, struct<2> Param2) //Position: 0x27FD / 10237
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_70(struct<2>[] Param0, int iParam1) //Position: 0x2829 / 10281
{
	struct<8> Var0;
	
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_161))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_161);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_157))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_157);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_155))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_155);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_159))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_159);
	}
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63(Param0[iParam12]) };
	if (iLocal_129 >= 1)
	{
		uLocal_155 = ADD_SCRIPT_USE_CONTEXT_STICK("PASS_COACH_PreviousDest", 10, "@UI.NAVIGATE_UP", 0, 0, 0, 0, 4294967295, 0);
		uLocal_157 = ADD_SCRIPT_USE_CONTEXT_STICK("PASS_COACH_NextDest", 10, "@UI.NAVIGATE_DOWN", 0, 0, 0, 0, 4294967295, 0);
	}
	uLocal_161 = ADD_SCRIPT_USE_CONTEXT("PASS_CAMP_Exit", 10, "@UI.CANCEL", Function_6(), Function_6(), Function_6(), Function_6(), 4294967295, "HUD_MENU_BACK_MASTER");
	uLocal_159 = ADD_SCRIPT_USE_CONTEXT(&Var0, 10, "@UI.ACCEPT", Function_6(), Function_6(), Function_6(), Function_6(), 4294967295, "HUD_MENU_SELECT_MASTER");
	Function_62(&Param0, iParam1);
	return;
}

int Function_71(struct<2>[] Param0, int iParam1, bool bParam2) //Position: 0x2981 / 10625
{
	int iVar0;
	bool bVar1;
	
	if (bParam2)
	{
		return 0;
	}
	iVar0 = iParam1 + 1;
	if (iVar0 >= (Param0 - 1))
	{
		iVar0 = 0;
	}
	while (!StackVal)
	{
		iVar0++;
		if (iVar0 < (Param0 - 1) && !bVar1)
		{
			iVar0 = 0;
			bVar1 = true;
		}
		else if (iVar0 < (Param0 - 1) && bVar1)
		{
			if (Function_19(Param0[02]))
			{
			}
			return 0;
		}
	}
	if (Function_19(Param0[iVar02]))
	{
	}
	return iVar0;
}

void Function_72(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x2A03 / 10755
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_73(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_73(int iParam0) //Position: 0x2A8E / 10894
{
	char* cVar0[16];
	
	if (!Function_74())
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

bool Function_74() //Position: 0x2ACD / 10957
{
	if (Function_41(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_75(struct<2>[] Param0, var uParam1, bool bParam2) //Position: 0x2AE8 / 10984
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 500;
	if (!&bParam2)
	{
		iVar3 = 150;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if ((StackVal && Function_19(Param0[iVar02])) || (uParam1 && iVar0 != 0))
		{
			if (&bParam2)
			{
				Param0[iVar02].f_12 = Function_65(StackVal, Param0[iVar02]);
			}
			else
			{
				Param0[iVar02].f_12 = 0;
			}
			if (Function_19(Param0[iVar02]) && !iVar0 != 0)
			{
				if (Function_21(&(Global_43791[Param0[iVar02]]), 4096) || !Global_6606)
				{
					iVar2++;
					if (Function_76() > Param0[iVar02].f_12)
					{
						if (StackVal >= iVar3)
						{
							bVar1++;
						}
						else
						{
							Param0[iVar02].f_4 = 0;
						}
					}
					else
					{
						Param0[iVar02].f_4 = 0;
					}
				}
				else
				{
					Param0[iVar02].f_4 = 0;
				}
			}
			else if (uParam1 && iVar0 != 0)
			{
				if (Function_76() > Param0[iVar02].f_12)
				{
					if (StackVal >= iVar3)
					{
						bVar1++;
					}
					else
					{
						Param0[iVar02].f_4 = 0;
					}
				}
				else
				{
					Param0[iVar02].f_4 = 0;
				}
			}
			else
			{
				Param0[iVar02].f_4 = 0;
			}
		}
		else
		{
			Param0[iVar02].f_4 = 0;
		}
		iVar0++;
	}
	if (iVar2 == 0)
	{
		bVar1 = 4294967295;
	}
	return bVar1;
}

int Function_76() //Position: 0x2C4D / 11341
{
	return Function_77(0);
}

int Function_77(int iParam0) //Position: 0x2C57 / 11351
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

bool Function_78(struct<2>[] Param0, var uParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x2C98 / 11416
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	if (Global_47151[52])
	{
		fVar2 = 10000.0f;
	}
	else
	{
		fVar2 = 1500.0f;
	}
	fVar3 = GET_PROFILE_TIME();
	switch (uParam1)
	{
		case 0x00000000:
			iVar1 = 0;
			while (iVar1 <= Param0)
			{
				Param0[iVar12] = 4294967295;
				Param0[iVar12].f_4 = 0;
				Param0[iVar12].f_8 = 99999999;
				iVar1++;
			}
			if (bParam3)
			{
				if (&bParam4)
				{
					Param0[02].f_4 = 1;
					Param0[02].f_8 = ROUND(Function_68(&Global_42890 + 16));
					Param0[02] = Function_67(StackVal, (&Global_42890 + 32), 1);
				}
				else
				{
					Param0[02].f_4 = 1;
					Param0[02].f_8 = ROUND(Function_68(&Global_42862 + 16));
					Param0[02] = Function_67(StackVal, *(&Global_42862 + 32), 1);
				}
			}
			uParam1 = 1;
			break;
		
		case 0x00000001:
			if (((Global_43787 != 0 || Global_43787 != 2) || Function_42(48, 0)) || !Global_6606)
			{
				iVar0 = uParam2;
				while (iVar0 < (Global_46760 - 1))
				{
					if (StackVal && !(StackVal && !(Function_21(&(Global_43791[Global_46760[iVar0]]), 32768) && (Function_21(&(Global_43791[Global_46760[iVar0]]), 4096) || !Global_6606)) != 5) != 6)
					{
						Function_79(&Param0, Global_46760[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_46760 - 1))
						{
							uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			uParam2 = 0;
			uParam1 = 2;
			break;
		
		case 0x00000002:
			if (((Global_43787 != 0 || Global_43787 != 2) || Function_42(48, 0)) || !Global_6606)
			{
				iVar0 = uParam2;
				while (iVar0 < (Global_46816 - 1))
				{
					if (StackVal && !(StackVal && !(Function_21(&(Global_43791[Global_46816[iVar0]]), 32768) && (Function_21(&(Global_43791[Global_46816[iVar0]]), 4096) || !Global_6606)) != 5) != 6)
					{
						Function_79(&Param0, Global_46816[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_46816 - 1))
						{
							uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			uParam2 = 0;
			uParam1 = 3;
			break;
		
		case 0x00000003:
			if (((Global_43787 != 0 || Global_43787 != 2) || Function_42(48, 0)) || !Global_6606)
			{
				iVar0 = uParam2;
				while (iVar0 < (Global_46796 - 1))
				{
					if (StackVal && !(StackVal && !(Function_21(&(Global_43791[Global_46796[iVar0]]), 32768) && (Function_21(&(Global_43791[Global_46796[iVar0]]), 4096) || !Global_6606)) != 5) != 6)
					{
						Function_79(&Param0, Global_46796[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_46796 - 1))
						{
							uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			uParam2 = 0;
			uParam1 = 4;
			break;
		
		case 0x00000004:
			if (((Global_43787 != 0 || Global_43787 != 2) || Function_42(48, 0)) || !Global_6606)
			{
				iVar0 = uParam2;
				while (iVar0 < (Global_46838 - 1))
				{
					if (StackVal && !(StackVal && !(Function_21(&(Global_43791[Global_46838[iVar0]]), 32768) && (Function_21(&(Global_43791[Global_46838[iVar0]]), 4096) || !Global_6606)) != 5) != 6)
					{
						Function_79(&Param0, Global_46838[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_46838 - 1))
						{
							uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			uParam2 = 0;
			uParam1 = 5;
			break;
		
		case 0x00000005:
			if (((Global_43787 != 0 || Global_43787 != 2) || Function_42(48, 0)) || !Global_6606)
			{
				iVar0 = uParam2;
				while (iVar0 < (Global_46926 - 1))
				{
					if (StackVal && !(StackVal && !(Function_21(&(Global_43791[Global_46926[iVar0]]), 32768) && (Function_21(&(Global_43791[Global_46926[iVar0]]), 4096) || !Global_6606)) != 5) != 6)
					{
						Function_79(&Param0, Global_46926[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_46926 - 1))
						{
							uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			uParam2 = 0;
			uParam1 = 6;
			break;
		
		case 0x00000006:
			if (((Global_43787 != 0 || Global_43787 != 2) || Function_42(48, 0)) || !Global_6606)
			{
				iVar0 = uParam2;
				while (iVar0 < (Global_46914 - 1))
				{
					if (StackVal && !(StackVal && !(Function_21(&(Global_43791[Global_46914[iVar0]]), 32768) && (Function_21(&(Global_43791[Global_46914[iVar0]]), 4096) || !Global_6606)) != 5) != 6)
					{
						Function_79(&Param0, Global_46914[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_46914 - 1))
						{
							uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			uParam2 = 0;
			uParam1 = 7;
			break;
		
		case 0x00000007:
			if ((Global_43787 != 1 || Function_42(48, 0)) || !Global_6606)
			{
				iVar0 = uParam2;
				while (iVar0 < (Global_46850 - 1))
				{
					if (StackVal && !(StackVal && !(Function_21(&(Global_43791[Global_46850[iVar0]]), 32768) && (Function_21(&(Global_43791[Global_46850[iVar0]]), 4096) || !Global_6606)) != 5) != 6)
					{
						Function_79(&Param0, Global_46850[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_46850 - 1))
						{
							uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			uParam2 = 0;
			uParam1 = 8;
			break;
		
		case 0x00000008:
			if ((Global_43787 != 1 || Function_42(48, 0)) || !Global_6606)
			{
				iVar0 = uParam2;
				while (iVar0 < (Global_46866 - 1))
				{
					if (StackVal && !(StackVal && !(Function_21(&(Global_43791[Global_46866[iVar0]]), 32768) && (Function_21(&(Global_43791[Global_46866[iVar0]]), 4096) || !Global_6606)) != 5) != 6)
					{
						Function_79(&Param0, Global_46866[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_46866 - 1))
						{
							uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			uParam2 = 0;
			uParam1 = 9;
			break;
		
		case 0x00000009:
			if ((Global_43787 != 1 || Function_42(48, 0)) || !Global_6606)
			{
				iVar0 = uParam2;
				while (iVar0 < (Global_46894 - 1))
				{
					if (StackVal && !(StackVal && !(Function_21(&(Global_43791[Global_46894[iVar0]]), 32768) && (Function_21(&(Global_43791[Global_46894[iVar0]]), 4096) || !Global_6606)) != 5) != 6)
					{
						Function_79(&Param0, Global_46894[iVar0]);
						if ((GET_PROFILE_TIME() - fVar3) < fVar2 && iVar0 > (Global_46894 - 1))
						{
							uParam2 = iVar0 + 1;
							return 0;
						}
					}
					iVar0++;
				}
			}
			uParam2 = 0;
			uParam1 = 10;
			break;
		
		case 0x0000000A:
			if (Global_47151[52])
			{
				iVar0 = 0;
				while (iVar0 <= Param0)
				{
					if (StackVal)
					{
						if (Function_19(Param0[iVar02]) && !iVar0 != 0)
						{
						}
						else if (iVar0 == 0)
						{
						}
					}
					iVar0++;
				}
			}
			uParam2 = 0;
			return 1;
			break;
	}
	return 0;
}

void Function_79(struct<2>[] Param0, int iParam1) //Position: 0x34B7 / 13495
{
	var uVar0;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	GET_OBJECT_POSITION(&Global_44085[iParam19] + 8, &uVar0);
	iVar2 = Function_80(iParam1);
	iVar3 = 1;
	while (StackVal && (StackVal > iVar2 && iVar3 > (Param0 - 1)))
	{
		iVar3++;
	}
	iVar4 = iVar3;
	iVar5 = iParam1;
	iVar7 = iVar2;
	while (StackVal && iVar4 > (Param0 - 1))
	{
		iVar8 = StackVal;
		iVar6 = Param0[iVar42];
		Param0[iVar42].f_8 = iVar7;
		Param0[iVar42] = iVar5;
		Param0[iVar42].f_4 = 1;
		iVar7 = iVar8;
		iVar5 = iVar6;
		iVar4++;
	}
	if (!StackVal)
	{
		Param0[iVar42].f_8 = iVar7;
		Param0[iVar42] = iVar5;
		Param0[iVar42].f_4 = 1;
	}
	return;
}

int Function_80(int iParam0) //Position: 0x3593 / 13715
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(&Global_44085[iParam09] + 8, &Var0);
	return Function_81(StackVal, Var0, 0);
}

int Function_81(var uParam0, bool bParam1, bool bParam2) //Position: 0x35B1 / 13745
{
	struct<2> Var0;
	var uVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	iVar3 = 16;
	if (&bParam2)
	{
		iVar3 = 393264;
	}
	iVar4 = CREATE_OBJECTSET_IN_LAYOUT("tempPathSet", &Global_43578, 36, 1);
	if (FIND_TRAFFIC_PATH(&Global_43578, &iVar4, &Global_54078, &uParam0, iVar3, &uVar2))
	{
		bVar5 = ROUND(Function_68(&iVar4));
		Function_1(&iVar4);
		DESTROY_OBJECTSET(&iVar4);
		return bVar5;
	}
	Function_1(&iVar4);
	DESTROY_OBJECTSET(&iVar4);
	return ROUND(VDIST(Global_54078, Var0));
}

