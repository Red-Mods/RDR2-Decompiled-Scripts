//Decompiled with MagicRDR v1.0
//Function Count : 159
//Statics Count : 129
//Natives Count : 309
//Parameters Count : 62

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 2;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
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
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	char[] cLocal_56[4] = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	float fLocal_61 = 0.0f;
	struct<2> Local_62 = { 0, 0 } ;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	var uVar17[2];
	int iVar20[2];
	var uVar23;
	int iVar42;
	int iVar43;
	int iVar44;
	var uVar45;
	float fVar46;
	var uVar47;
	var uVar48;
	int iVar50;
	int iVar51;
	bool bVar54;
	int iVar55;
	int iVar56;
	bool bVar57;
	struct<2> Var58;
	struct<2> Var60;
	struct<2> Var62;
	struct<2> Var64;
	struct<2> Var66;
	struct<2> Var68;
	struct<2> Var70;
	struct<2> Var72;
	struct<2> Var74;
	var uVar76;
	var uVar78;
	struct<2> Var80;
	struct<2> Var82;
	var uVar84;
	var uVar86;
	var uVar88;
	int iVar90;
	int iVar91;
	int iVar92;
	var uVar93;
	var uVar95;
	struct<2> Var97;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	fLocal_61 = 0.0f;
	iVar0 = 0;
	Function_156(&iLocal_50, 0.0f);
	uVar1 = CREATE_LAYOUT(Function_155());
	if (!IS_LAYOUTREF_VALID(&Global_46715))
	{
		LOG_ERROR("NOT IS_LAYOUTREF_VALID(gLayout_LocalRegion)");
		iVar0 = 5;
	}
	iVar13 = (RAND_INT_RANGE(0, 1999) / 1000);
	iVar13++;
	bVar14 = false;
	iVar15 = 0;
	iVar16 = 0;
	uVar23 = 9;
	iVar43 = 0;
	if (ScriptParam_0.f_40)
	{
		SET_WEAPONENUM_LOCKED(24, 0);
	}
	if (!IS_POPSET_VALID(&(Global_46972[0])))
	{
		iVar0 = 5;
	}
	else if (IS_WEAPONENUM_LOCKED(24))
	{
		iVar0 = 5;
	}
	else
	{
		switch (Global_43787)
		{
			case 0x00000000:
				iVar42 = Function_154(43, 3);
				switch (iVar42)
				{
					case 0x00000000:
						iVar20[0] = 164;
						break;
					
					case 0x00000001:
						iVar20[0] = 162;
						break;
					
					case 0x00000002:
						iVar20[0] = 163;
						break;
				}
				break;
			
			case 0x00000001:
				iVar42 = Function_154(43, 2);
				if (iVar42 == 0)
				{
					iVar20[0] = 289;
				}
				else
				{
					iVar20[0] = 285;
				}
				break;
			
			case 0x00000002:
				iVar42 = Function_154(43, 2);
				if (iVar42 == 0)
				{
					iVar20[0] = 161;
				}
				else
				{
					iVar20[0] = 159;
				}
				break;
		}
		iVar20[1] = Function_145(&(Global_46972[0]), 1, 2, 1);
		if (iVar20[0] != 4294967295 || iVar20[1] != 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			Function_144(&uVar23, iVar20[0], 3, 0);
			Function_144(&uVar23, iVar20[1], 3, 0);
			Function_142(&uVar23, "p_gen_debrisBoard12x", 0, 0);
			Function_142(&uVar23, "p_gen_woodPlank02x", 0, 0);
			Function_142(&uVar23, "dynamite_table", 1, 0);
			Function_142(&uVar23, "locked_footlocker", 1, 0);
			Function_142(&uVar23, "smoking_stand_loose", 1, 0);
			Function_142(&uVar23, "p_gen_dynamiteCrate01x", 0, 0);
			Function_142(&uVar23, "throw_dynamite01x", 0, 0);
			Function_141(&iVar20, 2);
		}
	}
	iVar44 = 0;
	iVar50 = 0;
	iVar51 = 0;
	iVar56 = 0;
	bVar57 = false;
	Var58 = Vector(2.0f, 0.0f, 0.0f);
	Var60 = Vector(-2.0f, 0.0f, 0.0f);
	Var62 = Vector(1.0f, 0.0f, 1,7f);
	Var64 = Vector(3.0f, 0.0f, -1,7f);
	Var66 = Vector(0.0f, 0.0f, -2.0f);
	Var68 = Vector(-2,7f, 0.0f, -2,7f);
	Var70 = Vector(-2,2f, 0.0f, -1.0f);
	Var72 = Vector(-2,2f, 0.0f, -2,3f);
	Var74 = Vector(-3,5f, 0.0f, -0,5f);
	uVar76 = Vector(-2,2f, 0.0f, -2.0f);
	uVar78 = Vector(-1,8f, 0.0f, -1,9f);
	Var80 = Vector(-3,3f, 0.0f, 3.0f);
	Var82 = Vector(1,7f, 0.0f, 3,7f);
	uVar84 = Vector(-1,7f, 0.0f, 1,2f);
	uVar88 = Vector(-2.0f, 0.0f, 0.0f);
	iVar90 = 0;
	if (Global_6625 == 1)
	{
		iVar0 = 5;
	}
	iVar91 = 0;
	iVar92 = 0;
	while (!IS_EXITFLAG_SET())
	{
		bVar54 = 600;
		if (Function_140(&iVar92, &iVar0, &iVar91, &bVar54, 0))
		{
			iVar0 = 5;
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_134(&uVar23))
				{
					iVar0 = 1;
				}
				bVar54 = 600;
				break;
			
			case 0x00000001:
				if (Function_96(&ScriptParam_0, &bVar54, &iVar51, &iVar50, 1))
				{
					iVar0 = 2;
				}
				else if (iVar50 == 1)
				{
					iVar0 = 5;
				}
				break;
			
			case 0x00000002:
				if (VDIST(Global_54078, *(&ScriptParam_0 + 16)) > Function_95())
				{
					iVar0 = 5;
					bVar54 = false;
					break;
				}
				if (!STREAMING_ARE_BOUNDS_LOADED(*(&ScriptParam_0 + 16), 10.0f))
				{
					iVar0 = 5;
					bVar54 = false;
					break;
				}
				PRINTVECTOR(*(&ScriptParam_0 + 16));
				PRINTNL();
				PRINTVECTOR(Global_54078);
				PRINTNL();
				uLocal_54 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uVar1, "vExplosionTrap", 2,802597E-45f, *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), Vector(7.0f, 7.0f, 7.0f));
				uLocal_58 = CREATE_EVENT_TRAP("projectileET", 5, &uVar1);
				EVENT_TRAP_ON_VOLUME(&uLocal_58, &uLocal_54);
				cLocal_56 = CREATE_EVENT_TRAP("explosionET", 91, &uVar1);
				EVENT_TRAP_ON_VOLUME(&cLocal_56, &uLocal_54);
				Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_93("DynamiteGuy") };
				uVar17[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(&Var2, &uVar1, StackVal) + Vector(Var70, *(&ScriptParam_0 + 16), iVar20[0]), Vector(0.0f, 90.0f, 0.0f));
				DECOR_SET_FLOAT(&(uVar17[0]), "MSGringo_setMoveThreshold", 1,5f);
				SET_ACTOR_CAN_PLAY_GESTURES(&(uVar17[0]), false);
				Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_93("DynamiteGuy") };
				uVar17[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(&Var2, &uVar1, StackVal) + Vector(Var68, *(&ScriptParam_0 + 16), iVar20[1]), Vector(0.0f, 180.0f, 0.0f));
				DECOR_SET_FLOAT(&(uVar17[1]), "MSGringo_setMoveThreshold", 1,5f);
				SET_ACTOR_CAN_PLAY_GESTURES(&(uVar17[1]), false);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar17[0]), 0);
				UNK_0x99AFD2D1(&(uVar17[0]), 1, 1);
				TASK_STAND_STILL(&(uVar17[0]), -1.0f, 0, 0);
				DECOR_SET_BOOL(&(uVar17[0]), "nnostickup", 1);
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(uVar17[0]), 0);
				GIVE_WEAPON_TO_ACTOR(&(uVar17[0]), 39, 0f, 1, 1);
				TASK_STAND_STILL(&(uVar17[1]), -1.0f, 0, 0);
				DECOR_SET_BOOL(&(uVar17[1]), "nnostickup", 1);
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(uVar17[1]), 0);
				GIVE_WEAPON_TO_ACTOR(&(uVar17[1]), 39, 0f, 1, 1);
				uVar45 = CREATE_OBJECTSET_IN_LAYOUT("barrelgrpSet", &uVar1, 8, 0);
				uVar47 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, Vector(&uVar1, StackVal, StackVal) + Vector(Var80, *(&ScriptParam_0 + 16), Function_155()), Vector(0.0f, 0.0f, 0.0f));
				DECOR_SET_STRING(&uVar47, "UseAnim", "putdown");
				ADD_OBJECT_TO_OBJECTSET(&uVar47, &uVar45);
				iVar44 = 1;
				uLocal_35 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_155(), &uVar1, StackVal) + Vector(Var58, *(&ScriptParam_0 + 16), "p_gen_tent01x"), Vector(0.0f, 90.0f, 0.0f), 1);
				if (!SNAP_OBJECT_TO_GROUND(&uLocal_35, 4.0f, 1, 1092616192))
				{
				}
				uLocal_33 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, Vector(Function_155(), &uVar1, StackVal) + Vector(Var60, *(&ScriptParam_0 + 16), "p_gen_table05x"), *(&ScriptParam_0 + 28), 1);
				if (!SNAP_OBJECT_TO_GROUND(&uLocal_33, 10.0f, 0, 1092616192))
				{
				}
				GET_OBJECT_RELATIVE_POSITION(StackVal, &uLocal_33, Vector(-0,1536f, 0,8085f, 0,3099f), &uVar88);
				uLocal_43 = CREATE_WEAPON_PICKUP(&uVar1, 24, &uVar88, 223,1619f, 0.0f, 0, -1.0f);
				SET_DRAW_OBJECT(&uLocal_43, 0);
				GET_OBJECT_RELATIVE_POSITION(StackVal, &uLocal_33, Vector(-0,0797f, 0,8085f, -0,2423f), &uVar88);
				uLocal_45 = CREATE_WEAPON_PICKUP(&uVar1, 24, &uVar88, 345,9663f, 0.0f, 0, -1.0f);
				SET_DRAW_OBJECT(&uLocal_45, 0);
				uVar48 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &uLocal_33, Function_155(), "$/content/scripting/gringo/SimpleGringo/dynamite_table", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar48), "UseCase1", "DisableResetProp", 1);
				DECOR_SET_BOOL(&uVar48, "NoPropRecreate", 1);
				if (!SNAP_OBJECT_TO_GROUND(&uVar48, 10.0f, 0, 1092616192))
				{
				}
				TASK_USE_GRINGO(&(uVar17[0]), GET_GRINGO_FROM_OBJECT(&uVar48), "UseCase1", 4294967295, 1);
				SNAP_ACTOR_TO_GRINGO(&(uVar17[0]), &uVar48, "UseCase1", true, 0, 0);
				iLocal_31 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_155(), &uVar1, StackVal) + Vector(Var82, *(&ScriptParam_0 + 16), "smoking_stand_loose"), Vector(0.0f, 90.0f, 0.0f)));
				if (iVar13 == 0)
				{
					TASK_USE_GRINGO(&(uVar17[1]), &iLocal_31, "UseCase1", 1, 1);
				}
				uLocal_39 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, Vector(Function_155(), &uVar1, StackVal) + Vector(Var72, *(&ScriptParam_0 + 16), "p_gen_powderKeg02x"), *(&ScriptParam_0 + 28), 1);
				if (!SNAP_OBJECT_TO_GROUND(&uLocal_39, 4.0f, 1, 1092616192))
				{
				}
				if (!IS_WEAPONENUM_LOCKED(24))
				{
					DELETE_ALL_WEAPONS_FROM_ACTOR(&(uVar17[0]));
					GIVE_WEAPON_TO_ACTOR(&(uVar17[0]), 24, 0f, 1, 1);
				}
				uVar86 = Vector(StackVal, StackVal, StackVal) + Vector(Var64, *(&ScriptParam_0 + 16), StackVal);
				uLocal_37 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, Vector(Function_155(), &uVar1, StackVal) + Vector(Var64, *(&ScriptParam_0 + 16), "p_gen_powderKeg01x"), *(&ScriptParam_0 + 28), 0);
				if (!SNAP_OBJECT_TO_GROUND(&uLocal_37, 4.0f, 1, 1092616192))
				{
				}
				uLocal_29 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Multistage_barrel", &uVar86, 0,5f, 0);
				DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(&uLocal_29), "MSGringo_Layout", &uVar1);
				iVar42 = 0;
				while (iVar42 <= 2)
				{
					fVar46 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_155(), &uVar1, StackVal) + Vector(Var74, *(&ScriptParam_0 + 16), "p_gen_dynamite01x"), Vector(0.0f, 180.0f, 0.0f), 1);
					Var74.f_8 = (StackVal + 0,2f);
					Var74 = (Var74 + 0,1f);
					SNAP_OBJECT_TO_GROUND(&fVar46, 4.0f, 1, 1092616192);
					iVar42++;
				}
				uLocal_41 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_155(), &uVar1, StackVal) + Vector(Var66, *(&ScriptParam_0 + 16), "p_gen_bedRollClosed01x"), Vector(0.0f, 90.0f, 0.0f), 1);
				if (!SNAP_OBJECT_TO_GROUND(&uLocal_41, 4.0f, 1, 1092616192))
				{
				}
				uVar93 = Vector(StackVal, StackVal, StackVal) + Vector(Var62, *(&ScriptParam_0 + 16), StackVal);
				uVar95 = Vector(0.0f, 0.0f, 0.0f);
				Var97 = Vector(0.0f, 0.0f, 0.0f);
				FIND_GROUND_INTERSECTION(&uVar93, 2.0f, &Var97, &uVar95);
				uLocal_27 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, &uVar1, Function_155(), "$/content/scripting/gringo/SimpleGringo/locked_footlocker", Var97, Vector(0.0f, 130.0f, 0.0f)));
				DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(&uLocal_27), "nboxOwnerA", &(uVar17[0]));
				DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(&uLocal_27), "nboxOwnerB", &(uVar17[1]));
				Function_85(StackVal, &uLocal_27, Var97, 1, 4294967295, 4294967295);
				Function_83(StackVal, &iVar10, &uVar11, &uVar12, 3.0f, *(&ScriptParam_0 + 16));
				iVar0 = 3;
				bVar54 = false;
				break;
			
			case 0x00000003:
				Function_82();
				Function_80(StackVal, Function_82(), &bVar14, ScriptParam_0.f_64, &(uVar17[0]), 100, 0x42a00000, 1);
				Function_67(&uVar17, 2, &bVar14, ScriptParam_0.f_64, 100, 0x42a00000, 1);
				if (!iLocal_60)
				{
					if (EVENT_TRAP_SUCCESSFUL_TRAP(&cLocal_56) || EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_58))
					{
						if (IS_ACTOR_ALIVE(&Global_54076))
						{
							if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
							{
								SAY_SINGLE_LINE_CONTEXT(&Global_54076, 422, &Global_54076, 1, 0, 5, 4294967295, 4294967295, 0, 1);
							}
						}
						Local_62 = Vector(StackVal, StackVal, StackVal) + Vector(Var74, *(&ScriptParam_0 + 16), StackVal);
						Function_66(&Local_62, "DynamiteExplosion", 0, 1);
						CREATE_PROP_IN_LAYOUT(StackVal, &uVar1, Function_155(), "p_gen_woodPlank02x", Local_62, Vector(0.0f, 0.0f, 0.0f), 0);
						CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_155(), &uVar1, StackVal) + Vector(Vector(0.0f, 0,3f, 0.0f), Local_62, "p_gen_debrisBoard12x"), Vector(0.0f, 0.0f, 0.0f), 0);
						CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_155(), &uVar1, StackVal) + Vector(Vector(0,3f, 0.0f, 0.0f), Local_62, "p_gen_debrisBoard12x"), Vector(0.0f, 0.0f, 0.0f), 0);
						Function_65(&uVar17, 4294967295);
						if (IS_OBJECT_VALID(&uLocal_33))
						{
							GET_OBJECT_POSITION(&uLocal_33, &Local_62);
							DESTROY_OBJECT(&uLocal_33);
							CREATE_PROP_IN_LAYOUT(StackVal, &uVar1, Function_155(), "p_gen_debrisBoard12x", Local_62, Vector(0.0f, 0.0f, 0.0f), 0);
						}
						if (IS_OBJECT_VALID(&uLocal_35))
						{
							GET_OBJECT_POSITION(&uLocal_35, &Local_62);
							DESTROY_OBJECT(&uLocal_35);
							CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_155(), &uVar1, StackVal) + Vector(Vector(1.0f, 0.0f, 0.0f), Local_62, "p_gen_debrisBoard12x"), Vector(0.0f, 0.0f, 0.0f), 0);
						}
						if (IS_OBJECT_VALID(&uLocal_37))
						{
							GET_OBJECT_POSITION(&uLocal_37, &Local_62);
							DESTROY_OBJECT(&uLocal_37);
							CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_155(), &uVar1, StackVal) + Vector(Vector(0.0f, 0,3f, 0.0f), Local_62, "p_gen_debrisBoard12x"), Vector(0.0f, 0.0f, 0.0f), 0);
							CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_155(), &uVar1, StackVal) + Vector(Vector(0,3f, 0.0f, 0.0f), Local_62, "p_gen_woodPlank02x"), Vector(0.0f, 0.0f, 0.0f), 0);
						}
						if (IS_OBJECT_VALID(&uLocal_39))
						{
							GET_OBJECT_POSITION(&uLocal_39, &Local_62);
							DESTROY_OBJECT(&uLocal_39);
							CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_155(), &uVar1, StackVal) + Vector(Vector(0,3f, 0.0f, 0.0f), Local_62, "p_gen_debrisBoard12x"), Vector(0.0f, 0.0f, 0.0f), 0);
							CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_155(), &uVar1, StackVal) + Vector(Vector(0.0f, 0,3f, 0.0f), Local_62, "p_gen_woodPlank02x"), Vector(0.0f, 0.0f, 0.0f), 0);
						}
						if (IS_OBJECT_VALID(&uLocal_41))
						{
							GET_OBJECT_POSITION(&uLocal_41, &Local_62);
							DESTROY_OBJECT(&uLocal_41);
							CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_155(), &uVar1, StackVal) + Vector(Vector(0,3f, 0.0f, 0.0f), Local_62, "p_gen_debrisBoard12x"), Vector(0.0f, 0.0f, 0.0f), 0);
						}
						if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&uLocal_27)))
						{
							DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&uLocal_27));
						}
						if (IS_OBJECT_VALID(&uLocal_43))
						{
							DESTROY_OBJECT(&uLocal_43);
						}
						if (IS_OBJECT_VALID(&uLocal_45))
						{
							DESTROY_OBJECT(&uLocal_45);
						}
						iLocal_60 = 1;
					}
				}
				if (Function_61(&uVar17, 2, &uLocal_48, &iLocal_47, &fLocal_61, 0, iVar16, 0x40200000))
				{
					iVar16 = 1;
					switch (iLocal_47)
					{
						case 0x00000001:
							RESET_ANIM_SET_FOR_ACTOR(&(uVar17[0]), 1);
							Function_60(&(uVar17[0]));
							TASK_FLEE_ACTOR(&(uVar17[0]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							AI_QUICK_EXIT_GRINGO(&(uVar17[1]), 1);
							Function_60(&(uVar17[1]));
							TASK_FLEE_ACTOR(&(uVar17[1]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000002:
						case 0x00000010:
							RESET_ANIM_SET_FOR_ACTOR(&(uVar17[0]), 1);
							Function_60(&(uVar17[0]));
							TASK_FLEE_ACTOR(&(uVar17[0]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							AI_QUICK_EXIT_GRINGO(&(uVar17[1]), 1);
							Function_60(&(uVar17[1]));
							TASK_FLEE_ACTOR(&(uVar17[1]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000004:
							RESET_ANIM_SET_FOR_ACTOR(&(uVar17[0]), 1);
							Function_60(&(uVar17[0]));
							TASK_FLEE_ACTOR(&(uVar17[0]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							AI_QUICK_EXIT_GRINGO(&(uVar17[1]), 1);
							Function_60(&(uVar17[1]));
							TASK_FLEE_ACTOR(&(uVar17[1]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000008:
							AI_QUICK_EXIT_GRINGO(&(uVar17[1]), 1);
							Function_58(&uVar17, 2);
							break;
					}
					iVar16 = 1;
					if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&uLocal_27)))
					{
						DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(&uLocal_27), "nboxOwnerA", false);
						DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(&uLocal_27), "nboxOwnerB", false);
					}
				}
				if (IS_ACTOR_VALID(&(uVar17[0])))
				{
					if (DECOR_CHECK_EXIST(&(uVar17[0]), "actorStolen"))
					{
						iVar16 = 1;
						iVar0 = 5;
						break;
					}
				}
				if (IS_ACTOR_VALID(&(uVar17[1])))
				{
					if (DECOR_CHECK_EXIST(&(uVar17[1]), "actorStolen"))
					{
						iVar0 = 5;
						break;
					}
				}
				if (!Function_52(ScriptParam_0.f_64, &(uVar17[0]), &iVar15, &iVar56, 0, 1, 1, 1))
				{
					iVar0 = 5;
					bVar54 = false;
					break;
				}
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (IS_ACTOR_ALIVE(&Global_54076))
					{
						if (Function_50(StackVal, &Global_54076, *(&ScriptParam_0 + 16)) < Function_48(1))
						{
							bVar54 = false;
							iVar0 = 5;
							break;
						}
					}
					else
					{
						bVar54 = false;
						iVar0 = 5;
					}
				}
				else
				{
					bVar54 = false;
					iVar0 = 5;
				}
				if (!bVar57 && !iVar13 != 0)
				{
					if (IS_ACTOR_VALID(&(uVar17[0])))
					{
						if (!IS_AMBIENT_SPEECH_PLAYING(&(uVar17[0])) && !IS_AMBIENT_SPEECH_PLAYING(&(uVar17[1])))
						{
							if (MEMORY_GET_IS_VISIBLE(&(uVar17[0]), &Global_54076) && Function_47(&(uVar17[0]), &Global_54076, 8.0f))
							{
								bVar57 = true;
								AI_GOAL_LOOK_AT_ACTOR_NEW(&(uVar17[0]), &Global_54076, -1.0f, 1);
								Function_45(&(uVar17[0]), &Global_54076, "GREET", 0, 5, 60, 1, 1);
							}
						}
					}
				}
				if (Function_23(StackVal, StackVal, StackVal, StackVal, StackVal, Vector(&uVar17, &iVar43, StackVal) + Vector(Var64, *(&ScriptParam_0 + 16), *(&ScriptParam_0 + 16)), iVar13, &uVar1))
				{
					iVar90 = 1;
					iVar0 = 5;
					bVar54 = false;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar54 = false;
				break;
			
			case 0x00000006:
				if (!Function_22() && UI_IS_MESSAGE_QUEUE_EMPTY(1))
				{
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					bVar54 = false;
				}
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar54);
		}
	}
	if (IS_OBJECT_VALID(&uLocal_43))
	{
		DESTROY_OBJECT(&uLocal_43);
	}
	if (IS_OBJECT_VALID(&uLocal_45))
	{
		DESTROY_OBJECT(&uLocal_45);
	}
	Function_20(&uVar17, 4294967295);
	Function_19(&iVar10, &uVar11, &uVar12);
	Function_18(&iVar20, 2);
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (!bVar14)
	{
		Function_12(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
	}
	if (iVar90 != 0 && iVar16 != 0)
	{
		Function_10(&uVar17, 4294967295);
	}
	if (Function_6(&(uVar17[0]), 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar17[0]), 1);
		UNK_0x99AFD2D1(&(uVar17[0]), 0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(uVar17[0]), 0);
	}
	if (Function_6(&(uVar17[1]), 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar17[1]), 1);
		UNK_0x99AFD2D1(&(uVar17[1]), 0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(uVar17[1]), 0);
	}
	if (IS_ACTOR_VALID(&(uVar17[0])))
	{
		if (DECOR_CHECK_EXIST(&(uVar17[0]), "MSGringo_setMoveThreshold"))
		{
			DECOR_REMOVE(&(uVar17[0]), "MSGringo_setMoveThreshold");
		}
	}
	if (IS_ACTOR_VALID(&(uVar17[1])))
	{
		AI_GOAL_LOOK_CLEAR(&(uVar17[1]));
		if (DECOR_CHECK_EXIST(&(uVar17[1]), "MSGringo_setMoveThreshold"))
		{
			DECOR_REMOVE(&(uVar17[1]), "MSGringo_setMoveThreshold");
		}
	}
	if (!bVar14)
	{
		Function_10(&uVar17, 4294967295);
		if (IS_OBJECT_VALID(&uVar1))
		{
			UNK_0xA936E73B(&uVar1, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uVar1, 1);
		}
	}
	else if (iVar44 && IS_OBJECTSET_VALID(&uVar45))
	{
		Function_5(&uVar45);
		DESTROY_OBJECTSET(&uVar45);
	}
	RESET_THIS_TREE_TYPE_CLEARING(iVar10);
	RESET_THIS_TREE_TYPE_CLEARING(iVar55);
	Function_1(&uVar23);
	RELEASE_LAYOUT_REF(&uVar1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x133A / 4922
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_2(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x1362 / 4962
{
	if (Function_4(&(Param0[iParam12]), 4))
	{
		if (Function_4(&(Param0[iParam12]), 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP(&(Param0[iParam12]));
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET(&(Param0[iParam12]));
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR(&(Param0[iParam12]), 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO(&(Param0[iParam12]));
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT(&(Param0[iParam12]));
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iParam12]), 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY(&(Param0[iParam12]));
					break;
				
				default:
					break;
			}
			Function_3(&(Param0[iParam12]), 1);
			Function_3(&(Param0[iParam12]), 2);
			Function_3(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_3(struct<13> Param0) //Position: 0x14AD / 5293
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x14CA / 5322
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(var uParam0) //Position: 0x14E8 / 5352
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_OBJECT_REF(&iVar0);
		}
	}
	return;
}

bool Function_6(int iParam0, bool bParam1) //Position: 0x1537 / 5431
{
	if (&bParam1)
	{
		if (IS_ACTOR_HOGTIED(&iParam0))
		{
			if (!(GET_TASK_STATUS(&iParam0, 25) != 1 || GET_TASK_STATUS(&iParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(&iParam0, 0);
				TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&iParam0, true);
			}
			Function_8(&iParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 163840))
		{
			Function_8(&iParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (Function_7(&iParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_7(int iParam0, int iParam1) //Position: 0x15E2 / 5602
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(&iParam0))
		{
			return 1;
		}
		uVar0 = SQUAD_GET(&iParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

int Function_8(int iParam0) //Position: 0x1634 / 5684
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_9(&iParam0);
		return 1;
	}
	return 0;
}

void Function_9(var uParam0) //Position: 0x164C / 5708
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		}
	}
	return;
}

void Function_10(var[] uParam0, int iParam1) //Position: 0x167F / 5759
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_11(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_11(int iParam0) //Position: 0x16B1 / 5809
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iParam0, 0);
		TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&iParam0, false);
	}
	return;
}

bool Function_12(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x16E1 / 5857
{
	bool bVar0;
	bool bVar1;
	
	if (Global_47151[16])
	{
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
	}
	fParam1 = &fParam1;
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_6642 = 0;
		Function_14("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_27462[iParam052].f_184 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_6608)
			{
				if (IS_SCRIPT_VALID(Global_10986) && Global_10986 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_6608 = 1;
			Global_10986 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(&Global_27462[iParam052] + 368);
		if (Global_47151[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_13(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_13(&bVar0);
		}
		if (!&bParam3)
		{
			ADD_TIME(&bVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, 0, 10, 0);
		}
		if (Global_47151[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_13(&bVar0);
		}
		*(&Global_27462[iParam052] + 376) = &bVar0;
		Global_26652[iParam04] = &bVar0;
		if (&bParam2)
		{
			Global_26652[iParam04].f_8 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_27462[iParam052].f_184 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_6608)
				{
					if (IS_SCRIPT_VALID(Global_10986) && Global_10986 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_6608 = 1;
				Global_10986 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_13(bool bParam0) //Position: 0x194D / 6477
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&bParam0));
	return;
}

void Function_14(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1997 / 6551
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_15(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

struct<16> Function_15(int iParam0) //Position: 0x1A1C / 6684
{
	char* cVar0[16];
	
	if (!Function_16())
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

bool Function_16() //Position: 0x1A5B / 6747
{
	if (Function_17(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_17(int iParam0, int iParam1) //Position: 0x1A76 / 6774
{
	return (iParam0 && iParam1) == 0;
}

void Function_18(var[] uParam0, int iParam1) //Position: 0x1A83 / 6787
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_19(var uParam0, var uParam1, int iParam2) //Position: 0x1AA6 / 6822
{
	if (uParam0 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(uParam0);
	}
	if (uParam1 != 4294967295)
	{
		RESET_THIS_BREAKABLE_TREE_CLEARING(uParam1);
	}
	if (iParam2 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(iParam2);
	}
	return;
}

void Function_20(var[] uParam0, int iParam1) //Position: 0x1AD9 / 6873
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_21(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_21(var uParam0) //Position: 0x1B0B / 6923
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_DRAW_ACTOR(&uParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(&uParam0);
		if (IS_ACTOR_ANIMAL(&uParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(&uParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uParam0, 0, true);
			MEMORY_ALLOW_SHOOTING(&uParam0, 1);
		}
	}
	return;
}

bool Function_22() //Position: 0x1B54 / 6996
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

bool Function_23(var uParam0, var[] uParam1, var uParam3, float fParam4, var uParam5, int iParam6, var uParam7) //Position: 0x1B81 / 7041
{
	switch (uParam0)
	{
		case 0x00000000:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(uParam1[0]), 1.0f, 50.0f, 1, 1, 0))
			{
				Function_29(43);
				switch (iParam6)
				{
					case 0x00000000:
						Function_66(&fParam2, "CannonballExplosion", 0, 1);
						Function_66(&fParam4, "CannonballExplosion", 0, 1);
						uParam0 = 8;
						break;
					
					case 0x00000001:
						uParam0 = 1;
						break;
					
					case 0x00000002:
						uParam0 = 2;
						break;
				}
				AI_GOAL_LOOK_CLEAR(&(uParam1[1]));
				iLocal_49 = TASK_SEQUENCE_OPEN();
				TASK_USE_GRINGO(&(uParam1[1]), &uLocal_29, "UseCase1", 1, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&(uParam1[1]), iLocal_49);
				TASK_SEQUENCE_RELEASE(iLocal_49, 1);
			}
			break;
		
		case 0x00000001:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(uParam1[0]), 1.0f, 30.0f, 1, 1, 0))
			{
				Function_156(&iLocal_50, 0.0f);
				Function_45(&(uParam1[0]), &(uParam1[1]), "eventDynamite_msg01", "eventDynamite_msg01", 5, 60, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uParam1[0]), 1);
				UNK_0x99AFD2D1(&(uParam1[0]), 0, 0);
				uParam0 = 4;
			}
			break;
		
		case 0x00000002:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(uParam1[0]), 1.0f, 20.0f, 1, 1, 0))
			{
				Function_156(&iLocal_50, 0.0f);
				Function_45(&(uParam1[0]), &(uParam1[1]), "eventDynamite_msg02", "eventDymamite_msg02", 5, 60, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uParam1[0]), 1);
				UNK_0x99AFD2D1(&(uParam1[0]), 0, 0);
				uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			if (GET_TASK_STATUS(&(uParam1[1]), 19) == 0)
			{
				Function_45(&(uParam1[0]), &(uParam1[1]), "eventDynamite_msg03", "eventDynamite_msg03", 5, 60, 1, 1);
				Function_28(GET_OBJECT_FROM_GRINGO(&iLocal_31));
				uLocal_65 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam7, Function_155(), 4,203895E-45f, Function_28(GET_OBJECT_FROM_GRINGO(&iLocal_31)), Vector(0.0f, 0.0f, 0.0f), Vector(3.0f, 7.0f, 3.0f));
				DECOR_SET_BOOL(&(uParam1[1]), "VolOnly", 1);
				DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(&iLocal_31), "volume", &uLocal_65);
				TASK_USE_GRINGO(&(uParam1[1]), &iLocal_31, "UseCase1", 4294967295, 1);
				if (iParam6 == 2)
				{
					uParam0 = 6;
				}
				else if (iParam6 == 1)
				{
					uParam0 = 5;
				}
			}
			break;
		
		case 0x00000005:
			if (GET_CURRENT_GRINGO(&(uParam1[1])) == &iLocal_31)
			{
				Function_156(&iLocal_50, 0.0f);
				uParam0 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_27(&iLocal_50, 4.0f) || EVENT_TRAP_SUCCESSFUL_TRAP(&cLocal_56))
			{
				Function_66(&fParam2, "CannonballExplosion", 0, 1);
				Function_66(&fParam4, "CannonballExplosion", 0, 1);
				Function_156(&iLocal_50, 0.0f);
				uParam0 = 7;
			}
			break;
		
		case 0x00000006:
			if (IS_ACTOR_VALID(&(uParam1[0])))
			{
				if (GET_LAST_ATTACKER(&(uParam1[0])) == &Global_54076)
				{
					DESTROY_OBJECT(&cLocal_56);
					Function_66(&fParam2, "CannonballExplosion", 0, 1);
					Function_66(&fParam4, "CannonballExplosion", 0, 1);
					Function_156(&iLocal_50, 0.0f);
					uParam0 = 7;
					break;
				}
			}
			if (IS_ACTOR_VALID(&(uParam1[1])))
			{
				if (GET_LAST_ATTACKER(&(uParam1[1])) == &Global_54076)
				{
					DESTROY_OBJECT(&cLocal_56);
					Function_66(&fParam2, "CannonballExplosion", 0, 1);
					Function_66(&fParam4, "CannonballExplosion", 0, 1);
					Function_156(&iLocal_50, 0.0f);
					uParam0 = 7;
					break;
				}
			}
			break;
		
		case 0x00000007:
			if (Function_24(&iLocal_50) < 0.0f)
			{
				if (IS_OBJECT_VALID(&uLocal_33))
				{
					DESTROY_OBJECT(&uLocal_33);
				}
				if (IS_OBJECT_VALID(&uLocal_35))
				{
					DESTROY_OBJECT(&uLocal_35);
				}
				if (IS_OBJECT_VALID(&uLocal_37))
				{
					DESTROY_OBJECT(&uLocal_37);
				}
				if (IS_OBJECT_VALID(&uLocal_39))
				{
					DESTROY_OBJECT(&uLocal_39);
				}
				if (IS_OBJECT_VALID(&uLocal_41))
				{
					DESTROY_OBJECT(&uLocal_41);
				}
				uParam0 = 8;
			}
			break;
		
		case 0x00000008:
			if (IS_GRINGO_VALID(&uLocal_27))
			{
				DECOR_REMOVE(GET_OBJECT_FROM_GRINGO(&uLocal_27), "nboxOwnerA");
				DECOR_REMOVE(GET_OBJECT_FROM_GRINGO(&uLocal_27), "nboxOwnerB");
				uParam0 = 9;
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x00000009:
			return 1;
			break;
	}
	return 0;
}

float Function_24(vector3 vParam0) //Position: 0x206E / 8302
{
	if (Function_26(&vParam0))
	{
		if (Function_25(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_25(int iParam0) //Position: 0x213B / 8507
{
	return Function_17(iParam0, 2);
}

bool Function_26(int iParam0) //Position: 0x2149 / 8521
{
	return Function_17(iParam0, 1);
}

int Function_27(var uParam0, float fParam1) //Position: 0x2157 / 8535
{
	if (Function_26(&uParam0))
	{
		if (Function_24(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

struct<8> Function_28(int iParam0) //Position: 0x2175 / 8565
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_29(int iParam0) //Position: 0x219E / 8606
{
	Global_26652[iParam04].f_20++;
	if (Global_26652[iParam04].f_20 == 1)
	{
		Function_30(409, 1, 0, 0);
	}
	return;
}

int Function_30(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x21CF / 8655
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
	Function_44(iParam0, TO_FLOAT(bParam1), 1);
	Function_43(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_32(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_31(iParam0);
	return 1;
}

void Function_31(bool bParam0) //Position: 0x23F7 / 9207
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

void Function_32(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x2495 / 9365
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(fParam2));
	}
	else
	{
		cVar0 = F2STR(fParam2, 6, 2);
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(fParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((fParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
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
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
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
			fParam2 = (fParam2 * 3,28084f);
			if (fParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				fParam2 = (fParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_42(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_41(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_41(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_39(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_36(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_33(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_155(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_33(int iParam0) //Position: 0x2AD3 / 10963
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_34(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2AE4 / 10980
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_35(char* cParam0) //Position: 0x2BDB / 11227
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_36(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2BF6 / 11254
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_38(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_37(Function_38(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_37(int iParam0, int iParam1) //Position: 0x2C5D / 11357
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_38(int iParam0, bool bParam1) //Position: 0x2C6F / 11375
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_39(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2C81 / 11393
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
	if (((Function_40(iParam0) != 19 || Function_40(iParam0) != 17) || Function_40(iParam0) != 10) || Function_40(iParam0) != 9)
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

int Function_40(int iParam0) //Position: 0x2DB5 / 11701
{
	return Global_55480[iParam016].f_96;
}

float Function_41(int iParam0) //Position: 0x2DC4 / 11716
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_42(int iParam0) //Position: 0x2DFD / 11773
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_43(int iParam0) //Position: 0x2E3A / 11834
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

int Function_44(int iParam0, float fParam1, bool bParam2) //Position: 0x2FD4 / 12244
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
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
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

void Function_45(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x3218 / 12824
{
	uParam1 = &uParam1;
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0) && Function_46(&uParam0, &Global_54076) >= IntToFloat(&iParam5))
		{
			if (!IS_ACTOR_VALID(&uParam1))
			{
				uParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&uParam0);
			if (&bParam6)
			{
				if (IS_ACTOR_HOGTIED(&uParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(&uParam0, &uParam2, &uParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&uParam0, &uParam2, &uParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
				{
					bParam3 = &bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(&uParam0, &uParam2, true, true, &iParam4, 0, false, true);
			}
		}
	}
}

float Function_46(var uParam0, int iParam1) //Position: 0x32C5 / 12997
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

int Function_47(var uParam0, var uParam1, bool bParam2) //Position: 0x33BA / 13242
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &uParam1, bParam2))
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

float Function_48(bool bParam0) //Position: 0x34CF / 13519
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
	{
		Function_49(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_49(float fParam0, int iParam1) //Position: 0x350B / 13579
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		fParam0 = 65.0f;
		iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		fParam0 = 115.0f;
		iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			fParam0 = 130.0f;
			iParam1 = 190.0f;
		}
		else
		{
			fParam0 = 130.0f;
			iParam1 = 190.0f;
		}
	}
	return;
}

float Function_50(var uParam0, struct<2> Param1) //Position: 0x359C / 13724
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_51(&uParam0);
		Var0 = Function_51(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_51(bool bParam0) //Position: 0x3613 / 13843
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		GET_POSITION(&bParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

bool Function_52(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x367F / 13951
{
	if (StackVal & 64 == 64)
	{
		if (!uParam2)
		{
			if (IS_ACTOR_VALID(&iParam1))
			{
				if (Function_46(&Global_54076, &iParam1) > 15.0f)
				{
					uParam2 = 1;
				}
			}
		}
		if (Global_6637 && !uParam2)
		{
			return 0;
		}
		if ((Global_6608 && Global_10986 == GET_THIS_SCRIPT_ID()) && !uParam2)
		{
			return 0;
		}
		if (Function_55() && !uParam2)
		{
			return 0;
		}
		if (Function_54(iParam0) && !uParam2)
		{
			return 0;
		}
		if (Global_6630 && !&bParam4)
		{
			return 0;
		}
		if (Global_6653)
		{
			return 0;
		}
		if (Global_6627)
		{
			return 0;
		}
		if (Global_6646 && uParam7)
		{
			uParam3 = 1;
			return 0;
		}
		if (Global_6647 && uParam7)
		{
			uParam3 = 1;
			return 0;
		}
		if (Global_6635 && !uParam2)
		{
			return 0;
		}
		if (Global_6636 && !uParam2)
		{
			return 0;
		}
		if (&bParam6)
		{
			if (Global_99146 && !uParam2)
			{
				return 0;
			}
		}
		if (IS_ACTOR_ON_TRAIN(&Global_54076, 0))
		{
			return 0;
		}
	}
	if (StackVal & 2048 != 2048)
	{
		if (!Function_53(iParam0, &uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_53(int iParam0, int iParam1) //Position: 0x37C2 / 14274
{
	iParam0 = iParam0;
	if (Global_6625 != 1 && iParam1)
	{
		return 0;
	}
	if (Global_6610 == 1)
	{
		return 0;
	}
	return 1;
}

int Function_54(int iParam0) //Position: 0x37E3 / 14307
{
	float fVar0;
	
	if (StackVal & 64 == 64)
	{
		fVar0 = GET_LAST_HIT_TIME(&Global_54076);
		if (fVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Global_54076)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_55() //Position: 0x3823 / 14371
{
	int iVar0;
	int iVar1;
	
	if (Global_6629)
	{
		iVar1 = 9;
	}
	else
	{
		iVar1 = 22;
	}
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					if (GET_THIS_SCRIPT_ID() != DECOR_GET_INT(&Global_39621[iVar05] + 16, "script"))
					{
						if (Function_56(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_56(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_56(bool bParam0, var uParam1) //Position: 0x38E6 / 14566
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_51(&bParam0);
			Var0 = Function_51(&bParam0);
			Function_57(&uParam1);
			Var2 = Function_57(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_57(int iParam0) //Position: 0x3988 / 14728
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		GET_OBJECT_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_58(var[] uParam0, int iParam1) //Position: 0x39F6 / 14838
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		if (IS_ACTOR_VALID(&(uParam0[iVar0])))
		{
			MAKE_ACTOR_READY_FOR_ACTION(&(uParam0[iVar0]), 1);
			Function_59(&(uParam0[iVar0]), &Global_54076);
		}
		iVar0++;
	}
	return;
}

int Function_59(var uParam0, int iParam1) //Position: 0x3A3A / 14906
{
	if (IS_ACTOR_HUMAN(&uParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(&uParam0) == 0)
		{
			TASK_FLEE_ACTOR(&uParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&uParam0, false);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(&uParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&uParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(&uParam0, &iParam1, 1);
	TASK_KILL_CHAR(&uParam0, &iParam1);
	TASK_PRIORITY_SET(&uParam0, true);
	return 1;
}

void Function_60(bool bParam0) //Position: 0x3B30 / 15152
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (DECOR_CHECK_EXIST(&bParam0, "nnostickup"))
		{
			DECOR_REMOVE(&bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(&bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(&bParam0, 0);
		TASK_PRIORITY_SET(&bParam0, 2);
	}
	return;
}

bool Function_61(var[] uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x3B83 / 15235
{
	int iVar0;
	
	uParam7 = &uParam7;
	if (!&bParam6)
	{
		iVar0 = 0;
		while (iVar0 <= iParam1)
		{
			if (Function_62(&(uParam0[iVar0]), &uParam3, &uParam4, &uParam5, &bParam6, 0x40400000))
			{
				uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool Function_62(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x3BD5 / 15317
{
	float fVar0;
	
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		if (IS_ACTOR_ON_FOOT(&iParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, &fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, (&fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		fVar0 = Function_46(&iParam0, &Global_54076);
		if (!Function_17(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_63(&iParam0);
				return 1;
			}
		}
		if (!Function_17(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_63(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_63(&iParam0);
				return 1;
			}
		}
		if (!Function_17(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_63(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_63(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_17(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_63(&iParam0);
				return 1;
			}
		}
		if (!Function_17(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_63(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_63(int iParam0) //Position: 0x3D9E / 15774
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_64(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_64(int iParam0) //Position: 0x3DDB / 15835
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_65(var[] uParam0, int iParam1) //Position: 0x3DF4 / 15860
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_60(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_66(float fParam0, float fParam1, float fParam2, int iParam3) //Position: 0x3E27 / 15911
{
	var uVar0;
	
	uVar0 = Vector(0.0f, 0.0f, 0.0f);
	_CREATE_EXPLOSION(&fParam0, &fParam1, &fParam2, &uVar0, &iParam3);
}

void Function_67(var[] uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6) //Position: 0x3E47 / 15943
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!uParam2)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 <= iParam1)
	{
		if (IS_ACTOR_VALID(&(uParam0[iVar1])))
		{
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(uParam0[iVar1]), 1.0f, &uParam5, 1, 1, 0))
			{
				uParam2 = 1;
				if (&iParam4 != 0)
				{
					Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam4));
				}
			}
		}
		iVar1++;
	}
	if (uParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_79(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_78(0);
		}
		if (&bParam6)
		{
			Function_76(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Global_6644 = 1;
			Function_74(iParam3);
		}
		Function_72(iParam3);
		if (Function_71(StackVal, 32768))
		{
			Function_68(1);
		}
		Global_26652[iParam34].f_16++;
		Function_30(408, 1, 0, 0);
	}
}

void Function_68(bool bParam0) //Position: 0x3F40 / 16192
{
	if (bParam0)
	{
		Function_70(0x10000000);
	}
	else
	{
		Function_69(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_69(int iParam0) //Position: 0x3F65 / 16229
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_70(int iParam0) //Position: 0x3F82 / 16258
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_71(var uParam0, int iParam1) //Position: 0x3F95 / 16277
{
	return (uParam0 && iParam1) == 0;
}

void Function_72(int iParam0) //Position: 0x3FA2 / 16290
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_17(StackVal, 524288))
	{
		if (Global_26652[iParam04].f_20 < 0 && Global_26652[iParam04].f_20 > 2)
		{
			iVar0 = 10;
		}
		else if (Global_26652[iParam04].f_20 <= 2 && Global_26652[iParam04].f_20 > 4)
		{
			iVar0 = 16;
		}
		else if (Global_26652[iParam04].f_20 > 4)
		{
			iVar0 = 24;
		}
		if (iVar0 >= 0)
		{
			bVar1 = Function_73(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_73(int iParam0) //Position: 0x4049 / 16457
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_74(int iParam0) //Position: 0x4060 / 16480
{
	struct<77> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Global_47151[16])
	{
		PRINTNL();
		PRINTSTRING("SAVE_BEAT_STATE: ");
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
		PRINTNL();
		PRINTSTRING("curIDX: ");
		PRINTINT(Var0.f_76);
		PRINTNL();
	}
	Function_75(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
	if (Var0.f_76 == 2)
	{
		Var0.f_76 = 0;
	}
	else
	{
		Var0.f_76++;
	}
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_75(vector3 vParam0) //Position: 0x40FF / 16639
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_76(int iParam0, bool bParam1) //Position: 0x411B / 16667
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &bParam1)
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
			Function_77(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_77(struct<113> Param0) //Position: 0x41A2 / 16802
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

void Function_78(int iParam0) //Position: 0x4200 / 16896
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_73(900)), 0);
	return;
}

void Function_79(bool bParam0) //Position: 0x4224 / 16932
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&bParam0 + Function_73(200)), 0);
	return;
}

void Function_80(struct<2> Param0, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7) //Position: 0x4247 / 16967
{
	int iVar0;
	
	iVar0 = 0;
	if (!uParam2)
	{
		iVar0 = 1;
	}
	if (IS_ACTOR_VALID(&uParam4))
	{
		if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam4, 1.0f, &uParam6, 1, 1, 0))
		{
			if (&iParam5 != 0)
			{
				Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam5));
			}
			uParam2 = 1;
		}
	}
	else if (!Function_81(StackVal, Param0))
	{
		if (CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, 1.0f, &uParam6, 1, 1, 0))
		{
			if (&iParam5 != 0)
			{
				Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam5));
			}
			uParam2 = 1;
		}
	}
	if (uParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_79(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_78(0);
		}
		if (&bParam7)
		{
			Function_76(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Function_74(iParam3);
			Global_6644 = 1;
		}
		Function_72(iParam3);
		if (Function_71(StackVal, 32768))
		{
			Function_68(1);
		}
		Global_26652[iParam34].f_16++;
		Function_30(408, 1, 0, 0);
	}
}

bool Function_81(vector3 vParam0) //Position: 0x435C / 17244
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_82() //Position: 0x4374 / 17268
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_83(var uParam0, var uParam1, var uParam2, float fParam3, struct<2> Param4) //Position: 0x437E / 17278
{
	var uVar0[5];
	int iVar6;
	
	if (uParam0 != 4294967295)
	{
		uParam0 = CLEAR_AREA_OF_TREE_TYPE(Param4, (fParam3 + 2.0f), "");
	}
	if (uParam1 != 4294967295)
	{
		uParam1 = CLEAR_AREA_OF_BREAKABLE_TREES(Param4, (fParam3 + 2.0f));
	}
	if (uParam2 != 4294967295)
	{
		uParam2 = CLEAR_AREA_OF_GRASS(Param4, fParam3);
	}
	if (IS_LAYOUTREF_VALID(&Global_46715))
	{
		if (Function_84(StackVal, &Global_46715, "player_herb", &uVar0, 20.0f, 5, Param4) >= 0)
		{
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				if (IS_OBJECT_VALID(&(uVar0[iVar6])))
				{
					DESTROY_OBJECT(&(uVar0[iVar6]));
				}
				iVar6++;
			}
		}
	}
}

int Function_84(char* cParam0, var uParam1, char*[] cParam2, float fParam3, int iParam4, struct<2> Param5) //Position: 0x4429 / 17449
{
	int iVar0;
	struct<2> Var1;
	int iVar3;
	var uVar4;
	
	iVar0 = 0;
	iParam4 = iParam4;
	if (IS_LAYOUTREF_VALID(&cParam0))
	{
		uVar4 = CREATE_OBJECT_ITERATOR(&cParam0);
		ITERATE_ON_OBJECT_TYPE(&uVar4, 12);
		ITERATE_ON_PARTIAL_NAME(&uVar4, &uParam1);
		iVar3 = START_OBJECT_ITERATOR(&uVar4);
		while (IS_OBJECT_VALID(&iVar3))
		{
			if (IS_OBJECT_VALID(&iVar3))
			{
				GET_OBJECT_POSITION(&iVar3, &Var1);
				if (VDIST(Param5, Var1) > fParam3)
				{
					cParam2[iVar0] = &iVar3;
					iVar0++;
					if (iVar0 > iParam4)
					{
						DESTROY_ITERATOR(&uVar4);
						return iVar0;
					}
				}
			}
			iVar3 = OBJECT_ITERATOR_NEXT(&uVar4);
		}
		DESTROY_ITERATOR(&uVar4);
		return iVar0;
	}
	return iVar0;
}

void Function_85(var uParam0, struct<2> Param1, var uParam3, int iParam4, int iParam5) //Position: 0x44CF / 17615
{
	var uVar0;
	var uVar1;
	var uVar2[6];
	bool bVar9;
	int iVar10;
	char* cVar11[32];
	
	uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Param1, 1.0f, "p_gen_footlockerfull01x", 1);
	if (IS_PHYSINST_VALID(&uVar0))
	{
		uVar1 = GET_OBJECT_FROM_PHYSINST(&uVar0);
		if (IS_OBJECT_VALID(&uVar1))
		{
			ROTATE_OBJECT_UPRIGHT_TO_GROUND(&uVar1, 1, 5.0f);
		}
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(&uParam0), "GringoDollarAmt", Function_90(&uParam3, 1, 1, 0, 0));
	Function_89(GET_OBJECT_FROM_GRINGO(&uParam0));
	if (&iParam4 == 4294967295)
	{
		bVar9 = false;
		Function_88(&Global_54076, &uVar2, &bVar9);
		if (bVar9 >= 0)
		{
			PRINTINT(bVar9);
			iVar10 = RAND_INT_RANGE(0, (bVar9 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar2[iVar10]));
			iParam4 = Function_87(&Global_54076, uVar2[iVar10]);
		}
		else
		{
			LOG_ERROR("Player has no valid weapon categories");
		}
	}
	else
	{
		iParam4 = Function_87(&Global_54076, &iParam4);
	}
	if (&iParam4 == 4294967295)
	{
		LOG_ERROR("Trying to give invalid ammo");
	}
	strcpy(&cVar11, "Ammo_", 32);
	straddi(&cVar11, GET_AMMO_ENUM(&iParam4), 32);
	PRINTSTRING(&cVar11);
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(&uParam0), &cVar11, FLOOR((2.0f * GET_WEAPON_MAX_AMMO(&iParam4))));
	if (&iParam5 == 4294967295)
	{
		iParam5 = Function_86();
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(&uParam0), "GiveItem", &iParam5);
}

int Function_86() //Position: 0x4658 / 18008
{
	int iVar0;
	int iVar1;
	
	iVar0 = RAND_INT_RANGE(0, 6);
	if (iVar0 == 0)
	{
		iVar1 = 3;
	}
	else if (iVar0 == 1)
	{
		iVar1 = 1;
	}
	else if (iVar0 == 2)
	{
		iVar1 = 0;
	}
	else if (iVar0 == 3)
	{
		iVar1 = 2;
	}
	else if (iVar0 == 4)
	{
		iVar1 = 8;
	}
	else if (iVar0 == 5)
	{
		iVar1 = 6;
	}
	else
	{
		iVar1 = 7;
	}
	return iVar1;
}

int Function_87(var uParam0, int iParam1) //Position: 0x46B3 / 18099
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&uParam0, iParam1);
	return iVar0;
}

void Function_88(var uParam0, int[] iParam1, int iParam2) //Position: 0x46C5 / 18117
{
	iParam2 = 0;
	if (Function_87(&uParam0, 39) != 4294967295)
	{
		iParam1[iParam2] = 39;
		iParam2++;
	}
	if (Function_87(&uParam0, 41) != 4294967295)
	{
		iParam1[iParam2] = 41;
		iParam2++;
	}
	if (Function_87(&uParam0, 40) != 4294967295)
	{
		iParam1[iParam2] = 40;
		iParam2++;
	}
	if (Function_87(&uParam0, 42) != 4294967295)
	{
		iParam1[iParam2] = 42;
		iParam2++;
	}
	if (Function_87(&uParam0, 43) != 4294967295)
	{
		iParam1[iParam2] = 43;
		iParam2++;
	}
	if (Function_87(&uParam0, 48) != 4294967295)
	{
		iParam1[iParam2] = 48;
		iParam2++;
	}
	if (Function_87(&uParam0, 44) != 4294967295)
	{
		iParam1[iParam2] = 44;
		iParam2++;
	}
	return;
}

void Function_89(int iParam0) //Position: 0x47B7 / 18359
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&iParam0, "nocrime", 1);
	}
	return;
}

var Function_90(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x47EE / 18414
{
	float fVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			fVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			fVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			fVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			fVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (&iParam1)
	{
		case 0x00000000:
			fVar0 = (fVar0 * 0,75f);
			break;
		
		case 0x00000001:
			fVar0 = (fVar0 * 1.0f);
			break;
		
		case 0x00000002:
			fVar0 = (fVar0 * 1,25f);
			break;
		
		default:
			fVar0 = (fVar0 * 0,75f);
			break;
	}
	if (&bParam2)
	{
		fVar0 = (fVar0 * (0,75f + ((TO_FLOAT(Function_92(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_91(17), &Global_54076))
		{
			fVar0 = (fVar0 * 1,2f);
		}
	}
	if (&bParam4)
	{
		fVar0 = (fVar0 * 1,1f);
	}
	if (ROUND(fVar0) <= 1)
	{
		fVar0 = 1.0f;
	}
	return ROUND(fVar0);
}

var Function_91(bool bParam0) //Position: 0x48F5 / 18677
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

int Function_92(int iParam0) //Position: 0x49E9 / 18921
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

struct<32> Function_93(struct<8> Param0) //Position: 0x4A2A / 18986
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&Param0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_94("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &Param0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_94(char* cParam0) //Position: 0x4A96 / 19094
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

float Function_95() //Position: 0x4AB8 / 19128
{
	float fVar0;
	int iVar1;
	
	if (Global_6612)
	{
		return 0.0f;
	}
	Function_49(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_96(struct<65> Param0) //Position: 0x4AE9 / 19177
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	
	if (Global_6612 && Param0.f_40)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_93(GET_SCRIPT_NAME()) };
		uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_132(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar8, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar8, "category");
			Function_130(&uVar8, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(&Param0 + 16) = Global_54078;
		return 1;
	}
	uParam3 = 0;
	if (!Function_97(&Param0))
	{
		if (Param0.f_40 == 1)
		{
			if (uParam2 == 0)
			{
				Function_14("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
			}
		}
		else if (uParam2 >= 20)
		{
			uParam3 = 1;
			Global_39619++;
		}
		uParam2++;
		uParam1 = 1000;
		*(&Param0 + 16) = Vector(0.0f, 0.0f, 0.0f);
		return 0;
	}
	if (Param0.f_40)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		Global_6642 = 0;
		Function_14("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (&bParam4)
	{
		if (!Function_12(Param0.f_64, 0, 1, 0, 0))
		{
			uParam3 = 1;
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed, shutting down event");
			return 0;
		}
		if (Param0.f_60 >= 0.0f)
		{
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed: Volume restriction size not set");
			return 0;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_93("restrictVol") };
		uVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_132(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar9, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar9, "category");
			Function_130(&uVar9, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_97(struct<73> Param0) //Position: 0x4EA7 / 20135
{
	var uVar0;
	var uVar1;
	int iVar2;
	struct<2> Var3;
	var uVar5;
	struct<2> Var7;
	float fVar9;
	float fVar10;
	bool bVar11;
	struct<17> Var12;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var7);
	switch (Param0.f_72)
	{
		case 0x00000005:
			if (!IS_ITERATOR_VALID(&Param0 + 8))
			{
				if (IS_LAYOUTREF_VALID(&Global_46715))
				{
					*(&Param0 + 8) = CREATE_OBJECT_ITERATOR(&Global_46715);
				}
				else
				{
					return 0;
				}
			}
			Function_129(&Param0 + 8);
			switch ((&Param0 + 72 + 36)->f_28)
			{
				case 0x00000000:
					ITERATE_IN_LAYOUT(&Param0 + 8, &Global_46715);
					break;
				
				case 0x00000001:
					ITERATE_IN_LAYOUT(&Param0 + 8, FIND_NAMED_LAYOUT("regions_layout"));
					break;
			}
			if ((&Param0 + 72 + 36)->f_16 < 0.0f)
			{
				Var3 = Vector(0.0f, 0.0f, Function_48(1));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				ITERATE_IN_SPHERE(&Param0 + 8, Var3, Function_48(1));
			}
			if (!STRINGS_ARE_EQUAL(&Param0 + 72 + 36, ""))
			{
				ITERATE_ON_PARTIAL_NAME(&Param0 + 8, &Param0 + 72 + 36);
			}
			if (!4294967295 != (&Param0 + 72 + 36)->f_20)
			{
				ITERATE_ON_OBJECT_TYPE(&Param0 + 8, (&Param0 + 72 + 36)->f_20);
			}
			if (GET_NUM_ITERATOR_MATCHES(&Param0 + 8) >= 0)
			{
				if (StackVal & 512 == 0 || Param0.f_44 != 1)
				{
					if ((&Param0 + 72 + 36)->f_24 == 0)
					{
						uVar0 = Function_128(StackVal, &Param0 + 8, Var7, 0,01f);
					}
					else
					{
						uVar0 = Function_127(StackVal, &Param0 + 8, Var7, 0,1f, "locflag", (&Param0 + 72 + 36)->f_24);
					}
				}
				else if ((&Param0 + 72 + 36)->f_24 == 0)
				{
					uVar0 = Function_126(StackVal, &Param0 + 8, Var7, Function_95());
				}
				else
				{
					uVar0 = Function_125(StackVal, &Param0 + 8, Var7, Function_95(), "locflag", (&Param0 + 72 + 36)->f_24);
				}
				if (IS_OBJECT_VALID(&uVar0))
				{
					GET_OBJECT_POSITION(&uVar0, &Param0 + 16);
					GET_OBJECT_ORIENTATION(&uVar0, &Param0 + 28);
					Param0.f_56 = &uVar0;
					DESTROY_ITERATOR(&Param0 + 8);
				}
				else
				{
					DESTROY_ITERATOR(&Param0 + 8);
					return 0;
				}
			}
			DESTROY_ITERATOR(&Param0 + 8);
			return 0;
			break;
		
		case 0x00000006:
			if (!IS_ITERATOR_VALID(&Param0 + 8))
			{
				*(&Param0 + 8) = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("regions_layout"));
			}
			Function_129(&Param0 + 8);
			ITERATE_IN_LAYOUT(&Param0 + 8, FIND_NAMED_LAYOUT("regions_layout"));
			fVar10 = 130.0f;
			fVar9 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &Var3);
			ITERATE_IN_SPHERE(StackVal, &Param0 + 8, Var3);
			uVar1 = START_OBJECT_ITERATOR(&Param0 + 8);
			while (IS_OBJECT_VALID(&uVar1) && !IS_OBJECT_VALID(&uVar0))
			{
				if (DECOR_CHECK_EXIST(&uVar1, "regid"))
				{
					bVar11 = DECOR_GET_INT(&uVar1, "regid");
					if (Function_124(bVar11))
					{
						if (StackVal == (&Param0 + 72)->f_68)
						{
							if ((StackVal && Global_43791[bVar11]) >= 0)
							{
								GET_OBJECT_POSITION(&uVar1, &Var3);
								if (VDIST(Var7, Var3) < fVar10 && VDIST(Var7, Var3) > Function_48(1))
								{
									uVar0 = &uVar1;
								}
							}
						}
					}
				}
				uVar1 = OBJECT_ITERATOR_NEXT(&Param0 + 8);
			}
			if (IS_OBJECT_VALID(&uVar0))
			{
				GET_OBJECT_POSITION(&uVar0, &Param0 + 16);
				Function_123(&Param0 + 16, 99.0f, &Param0 + 16, 10);
				GET_OBJECT_ORIENTATION(&uVar0, &Param0 + 28);
				Param0.f_56 = DECOR_GET_INT(&uVar0, "regid");
			}
			else
			{
				DESTROY_ITERATOR(&Param0 + 8);
				return 0;
			}
			break;
		
		case 0x00000002:
		case 0x00000001:
			if (StackVal && (((!Global_6629 && Global_6631) && ARE_CURVES_IN_RANGE(48, Var7, 100.0f)) && 8) != 8)
			{
				uVar5 = Vector(0.0f, 0.0f, -10.0f);
				ROTATE_VECTOR_XZ(&uVar5, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Function_122(&Var7, &uVar5);
				Var3 = Function_122(&Var7, &uVar5);
				if (!Function_81(StackVal, Var3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(Var7);
					PRINTNL();
					Function_49(&fVar10, &fVar9);
					if (VDIST(Var3, Var7) < ((fVar10 + ((fVar9 - fVar10) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_119(StackVal, &Param0, Var3);
					}
				}
			}
			else
			{
				iVar2 = Function_115(&Param0);
			}
			if (iVar2 == 1)
			{
				if ((&Param0 + 72)->f_156 == 4)
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (GET_OBJECT_TYPE(StackVal) == 9)
						{
							if (!IS_POINT_IN_VOLUME(StackVal, *(&Param0 + 16)))
							{
								return 0;
							}
						}
					}
				}
				if ((&Param0 + 72)->f_156 == 5)
				{
				}
				if (Param0.f_68 == 2)
				{
					if (!Function_114(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Param0.f_68 == 1)
				{
					if (!Function_113(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Function_17(StackVal, 131072))
				{
					if (StackVal || Function_112(Function_112(StackVal, *(&Param0 + 16)), Global_54078))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_111(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (!Function_107(&Param0 + 16, &Param0 + 60, 0, Param0.f_40))
				{
					return 0;
				}
			}
			return 0;
			break;
		
		case 0x00000003:
			if (StackVal)
			{
				fVar10 = 120.0f;
				fVar9 = 150.0f;
				Var3 = Vector(0.0f, 0.0f, ((fVar10 + fVar9) * -0,5f));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				uVar17 = START_CURVE_QUERY(&Global_43578, Var3, Function_106((&Param0 + 72)->f_148, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar17 = START_CURVE_QUERY(&Global_43578, Var7, Function_106((&Param0 + 72)->f_148, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) >= 0)
			{
				bVar15 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uVar17, bVar15, &Var12);
				Function_105(&Var12);
				*(&Param0 + 16) = Function_105(&Var12);
				Param0.f_28 = Var12.f_12;
				(&Param0 + 28)->f_4 = Var12.f_16;
				Param0.f_56 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar17, bVar15);
				UNK_0xDF93BD7C(&uVar17);
			}
			else
			{
				UNK_0xDF93BD7C(&uVar17);
				return 0;
			}
			if (Param0.f_68 == 2)
			{
				if (!Function_114(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 1)
			{
				if (!Function_113(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 0)
			{
				if (!(StackVal || Function_114(Function_113(StackVal, *(&Param0 + 16)), *(&Param0 + 16))))
				{
					return 0;
				}
			}
			if (Function_17(StackVal, 131072))
			{
				if (StackVal || Function_112(Function_112(StackVal, *(&Param0 + 16)), Global_54078))
				{
					return 0;
				}
			}
			if (StackVal && !Function_107(&Param0 + 16, &Param0 + 60, 0, Param0.f_40) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_102((&Param0 + 72)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Param0 + 72)->f_156)
			{
				case 0x00000001:
					iVar18 = Function_99(StackVal, Global_43787, Global_43788, Global_43789, 1);
					if (IS_PERS_CHAR_VALID(&iVar18))
					{
						if (IS_PERS_CHAR_ALIVE(&iVar18))
						{
							return 0;
						}
					}
					break;
				
				case 0x00000002:
					iVar16 = 0;
					while (StackVal <= (StackVal - iVar16) + 1)
					{
						iVar18 = Function_99(StackVal, Global_43787, Global_43788, (Global_43789 + iVar16), 1);
						if (IS_PERS_CHAR_VALID(&iVar18))
						{
							if (IS_PERS_CHAR_ALIVE(&iVar18))
							{
								iVar19++;
							}
						}
						iVar16++;
					}
					if (iVar19 >= 0)
					{
						return 0;
					}
					break;
				
				case 0x00000003:
					if (!IS_ACTOR_IN_VOLUME(StackVal, GET_PLAYER_ACTOR(0)))
					{
						return 0;
					}
					break;
				
				case 0x00000004:
					Param0.f_56 = StackVal;
					break;
				
				default:
					LOG_ERROR("TRIGGER_NONE event type??");
					return 0;
					break;
			}
			break;
		
		default:
			LOG_ERROR("AMB_EVENT type not defined for BEAT_SET_LAUNCH_PARAMS_FOR_BEAT");
			return 0;
			break;
	}
	if (Function_98(StackVal, *(&Param0 + 16)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 16), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_98(struct<2> Param0) //Position: 0x576E / 22382
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&Global_39246))
	{
		if (IS_POINT_IN_VOLUME(Param0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_39246))))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int Function_99(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x57A5 / 22437
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = bParam1;
	bVar1 = bParam2;
	PRINTSTRING("RC_REFERENCE_GLOBAL ");
	PRINTINT(bParam0);
	PRINTSTRING("-");
	PRINTINT(bVar0);
	PRINTSTRING("-");
	PRINTINT(bVar1);
	PRINTSTRING(" ");
	PRINTINT(bParam3);
	PRINTNL();
	if (!&bParam4)
	{
		switch (bParam0)
		{
			case 0x00000000:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_100(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_100(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_100(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_100(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_100(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_100(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_100(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_100(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_100(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_100(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_100(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_100(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_100(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_100(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_100(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_100(&Global_11826, &Global_13998, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000001:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_100(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_100(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_100(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_100(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_100(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_100(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_100(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_100(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_100(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_100(&Global_12472, &Global_14954, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000002:
				return "";
				break;
			
			default:
				return "";
				break;
		}
	}
	else if (bVar1 == Global_46760[0])
	{
		return Function_100(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_100(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_100(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_100(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_100(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_100(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_100(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_100(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_100(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_100(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_100(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_100(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_100(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_100(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_100(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_100(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_100(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_100(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_100(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_100(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_100(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_100(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_100(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_100(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_100(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_100(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_100(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x5DBB / 23995
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_101(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
	return &vParam1[iVar03] + 16;
}

bool Function_101(var uParam0, int iParam1) //Position: 0x5E15 / 24085
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_102(int iParam0) //Position: 0x5E32 / 24114
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_ON_OBJECT_TYPE(&uVar1, 25);
	iVar2 = START_OBJECT_ITERATOR(&uVar1);
	if (&iParam0 == 0)
	{
		iVar0 = GET_NUM_ITERATOR_MATCHES(&uVar1);
	}
	else
	{
		while (IS_OBJECT_VALID(&iVar2))
		{
			if (Function_103(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_103(int iParam0) //Position: 0x5E9A / 24218
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_104(&iParam0);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		return 4294967295;
	}
	if (IS_ACTOR_RIDING_VEHICLE(&uVar0))
	{
		return 2;
	}
	if (IS_ACTOR_RIDING(&uVar0))
	{
		return 1;
	}
	return 4294967295;
}

var Function_104(var uParam0) //Position: 0x5ED8 / 24280
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		if (IS_ACTOR_VALID(&iVar0) && IS_ACTOR_ALIVE(&iVar0))
		{
			return &iVar0;
		}
		bVar1++;
	}
	return "";
}

struct<8> Function_105(vector3 vParam0) //Position: 0x5F25 / 24357
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

int Function_106(int iParam0, int iParam1) //Position: 0x5F47 / 24391
{
	if (&iParam1 != 0)
	{
		return &iParam1;
	}
	switch (iParam0)
	{
		case 0x00000002:
			return 16;
			break;
		
		case 0x00000001:
			return 48;
			break;
	}
	return 48;
}

bool Function_107(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x5F79 / 24441
{
	var uVar0;
	int iVar2;
	bool bVar3;
	float fVar4;
	bool bVar5;
	
	if (&bParam3)
	{
		return 1;
	}
	bVar3 = false;
	Function_109(4294967295);
	iVar2 = 0;
	while (iVar2 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar25] + 16))
		{
			bVar5 = DECOR_GET_INT(&Global_39621[iVar25] + 16, "category");
			if (&iParam2 != 0)
			{
				if (bVar5 != &iParam2 && &iParam2 != 256)
				{
					bVar3 = true;
				}
			}
			GET_VOLUME_CENTER(&Global_39621[iVar25] + 16, &uVar0);
			if (&iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_39621[iVar25] + 16))
				{
					return 0;
				}
			}
			fVar4 = fParam1;
			if (bVar3)
			{
				fVar4 = (fVar4 + 170.0f);
			}
			if (Global_6629 && bVar5 != 512)
			{
			}
			else if (Function_108(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_108(struct<2> Param0) //Position: 0x6055 / 24661
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

int Function_109(int iParam0) //Position: 0x6074 / 24692
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
						Function_110(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_50(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_110(iVar0);
						}
					}
					else if (Function_50(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_110(iVar0);
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
			Function_110(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_110(int iParam0) //Position: 0x61E2 / 25058
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

bool Function_111(struct<2> Param0) //Position: 0x624A / 25162
{
	struct<9> Var0;
	
	iVar5 = 0;
	while (iVar5 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar59] + 8))
		{
			if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
			{
				if (GET_OBJECT_TYPE(&Global_44085[iVar59] + 8) == 9)
				{
					GET_VOLUME_SCALE(&Global_44085[iVar59] + 8, &vVar0);
					GET_VOLUME_CENTER(&Global_44085[iVar59] + 8, &Var2);
					bVar4 = VDIST(Param0, Var2);
					if ((bVar4 - ((vVar0.x + vVar0.z) / 2.0f)) > 60.0f)
					{
						return 1;
					}
				}
			}
		}
		iVar5++;
	}
	return 0;
}

int Function_112(struct<2> Param0) //Position: 0x62EF / 25327
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (StackVal == 4)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_113(struct<2> Param0) //Position: 0x633D / 25405
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (StackVal || StackVal != 3 != 4)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_114(struct<2> Param0) //Position: 0x6398 / 25496
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 3 != 4) != 5) != 6) != 7)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int Function_115(bool bParam0) //Position: 0x6417 / 25623
{
	float fVar0;
	bool bVar1;
	
	Function_49(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_118(0);
	AMBIENT_ENABLE_QUADRANT_FILTER(1);
	AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
	if ((&bParam0 + 72 + 84)->f_44 == 0.0f)
	{
		if ((&bParam0 + 72 + 84)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (&bParam0 + 72 + 84)->f_44, (&bParam0 + 72 + 84)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (&bParam0 + 72 + 84)->f_44);
		}
	}
	else
	{
		Function_117(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&bParam0 + 72 + 84));
	}
	if ((&bParam0 + 72 + 84)->f_52 == 0.0f)
	{
		if ((&bParam0 + 72 + 84)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (&bParam0 + 72 + 84)->f_52, (&bParam0 + 72 + 84)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (&bParam0 + 72 + 84)->f_52);
		}
	}
	Function_116(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&bParam0 + 72 + 84));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_47151[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((&bParam0 + 72 + 84)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((&bParam0 + 72 + 84)->f_36);
		PRINTNL();
	}
	if ((&bParam0 + 72 + 84)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (&bParam0 + 72 + 84)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((&bParam0 + 72 + 84)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((&bParam0 + 72 + 84)->f_36, (&bParam0 + 72 + 84)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(&bParam0 + 16, 0))
	{
		return 1;
	}
	return 0;
}

void Function_116(struct<33> Param0) //Position: 0x65C9 / 26057
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_47151[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_47151[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTSTRING("n, Radius ");
				PRINTFLOAT(Param0.f_20);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(StackVal, Param0.f_20, 0);
		}
	}
	if (!Param0.f_12 != 4294967295 && !Param0.f_12 != 0)
	{
		AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(Param0.f_12, Param0.f_24, 1);
	}
	if (!Param0.f_16 != 4294967295 && !Param0.f_16 != 0)
	{
		if (Global_47151[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1,43493E-42f, 1);
}

void Function_117(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x66F5 / 26357
{
	if (Param0 == 0)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 1)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 2)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 3)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
}

void Function_118(float fParam0) //Position: 0x6746 / 26438
{
	if (&fParam0 < 0,1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * &fParam0), &fParam0);
	}
	else if (Global_6629)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

int Function_119(int iParam0, struct<2> Param1) //Position: 0x678D / 26509
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(Param1);
	if (Global_47151[34])
	{
		PRINTVECTOR(Param1);
		PRINTNL();
	}
	Function_121();
	Function_118(0);
	Function_120(0);
	if ((&iParam0 + 72 + 84)->f_44 == 0.0f)
	{
		if ((&iParam0 + 72 + 84)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (&iParam0 + 72 + 84)->f_44, (&iParam0 + 72 + 84)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (&iParam0 + 72 + 84)->f_44);
		}
	}
	else
	{
		Function_117(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
	}
	if ((&iParam0 + 72 + 84)->f_52 == 0.0f)
	{
		if ((&iParam0 + 72 + 84)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (&iParam0 + 72 + 84)->f_52, (&iParam0 + 72 + 84)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (&iParam0 + 72 + 84)->f_52);
		}
	}
	Function_116(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_47151[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((&iParam0 + 72 + 84)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((&iParam0 + 72 + 84)->f_36);
		PRINTNL();
	}
	if ((&iParam0 + 72 + 84)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (&iParam0 + 72 + 84)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((&iParam0 + 72 + 84)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((&iParam0 + 72 + 84)->f_36, (&iParam0 + 72 + 84)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(&iParam0 + 16, 0))
	{
		return 1;
	}
	return 0;
}

void Function_120(bool bParam0) //Position: 0x6942 / 26946
{
	switch (bParam0)
	{
		case 0x00000004:
		case 0x00000001:
			AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
			break;
		
		case 0x00000007:
		case 0x00000002:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 0);
			break;
		
		case 0x00000006:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 0, 0);
			break;
		
		case 0x00000005:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 1, 0);
			break;
		
		case 0x00000008:
		case 0x00000003:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 0, 1);
			AMBIENT_SET_DISTANCE_FILTER(5.0f, 25.0f);
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000009:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 1);
			break;
		
		default:
			LOG_ERROR("No point type filter set!");
			break;
	}
	return;
}

void Function_121() //Position: 0x69F5 / 27125
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

struct<8> Function_122(struct<2> Param0) //Position: 0x6A04 / 27140
{
	var uVar0;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	struct<2> Var8;
	float fVar10;
	float fVar11;
	var uVar12;
	var uVar14;
	var uVar16;
	int iVar18;
	int iVar21;
	
	uVar7 = START_CURVE_QUERY(&Global_43578, Param0, 48, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(&uVar7) < 0)
	{
		UNK_0xDF93BD7C(&uVar7);
		Var8 = Vector(0.0f, 0.0f, 0.0f);
		return StackVal, Var8;
	}
	GET_POINT_FROM_CURVE_QUERY(&uVar7, false, &uVar0);
	uVar3 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar7, false);
	if (IS_OBJECT_VALID(&uVar3))
	{
		uVar12 = Param1;
		UNK_0x19D652F9(&uVar3, 50.0f, &uVar0, &iVar18);
		UNK_0x19D652F9(&uVar3, -50.0f, &uVar0, &iVar21);
		Function_105(&iVar18);
		uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_105(&iVar18), StackVal);
		Function_105(&iVar21);
		uVar16 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_105(&iVar21), StackVal);
		fVar11 = VDOT(&uVar12, &uVar14);
		fVar10 = VDOT(&uVar12, &uVar16);
		Function_49(&fVar4, &fVar5);
		fVar6 = ((fVar4 + fVar5) / 2.0f);
		if (fVar11 > 0.0f && fVar10 > 0.0f)
		{
			UNK_0xDF93BD7C(&uVar7);
			Var8 = Vector(0.0f, 0.0f, 0.0f);
			return StackVal, Var8;
		}
		if (fVar11 > fVar10)
		{
			UNK_0x19D652F9(&uVar3, (fVar6 * -1.0f), &uVar0, &iVar21);
			Function_105(&iVar21);
			Var8 = Function_105(&iVar21);
		}
		else
		{
			UNK_0x19D652F9(&uVar3, fVar6, &uVar0, &iVar18);
			Function_105(&iVar18);
			Var8 = Function_105(&iVar18);
		}
	}
	UNK_0xDF93BD7C(&uVar7);
	return StackVal, Var8;
}

int Function_123(struct<2> Param0, struct<5> Param2) //Position: 0x6B1E / 27422
{
	var uVar0;
	int iVar2;
	struct<2> Var3;
	
	if (iParam3 == 4294967295)
	{
		iVar2 = 4294967294;
	}
	else
	{
		iVar2 = 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(Param0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var3);
		if (VDIST(Param0, Var3) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(Var3);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(Param0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(Param0, Var3));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&Param0, fParam1, &Param2, &uVar0))
	{
		if (!Function_81(StackVal, Param2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar2 > iParam3)
	{
		Param0 = (Param0 + 0,01f);
		Param0.f_8 = (StackVal + 0,01f);
		if (FIND_GROUND_INTERSECTION(&Param0, fParam1, &Param2, &uVar0))
		{
			if (!Function_81(StackVal, Param2))
			{
				return 1;
			}
		}
		Param2 = Param0;
		Param2.f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar2++;
		}
		WAIT(false);
	}
	return 0;
}

bool Function_124(bool bParam0) //Position: 0x6C61 / 27745
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_125(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x6C77 / 27767
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	struct<2> Var5;
	
	fVar4 = 50.0f;
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var5);
		bVar2 = VDIST(Var5, Param1);
		if (DECOR_CHECK_EXIST(&fVar0, &iParam4))
		{
			if ((DECOR_GET_INT(&fVar0, &iParam4) && uParam5) >= 0)
			{
				if (bVar2 < fParam3)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						if (Function_107(&Var5, &fVar4, 0, 0))
						{
							bVar3 = bVar2;
							uVar1 = &fVar0;
							PRINTSTRING("Assigning new closestObject ");
							PRINTNL();
						}
					}
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_126(var uParam0, struct<2> Param1, float fParam3) //Position: 0x6D2C / 27948
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	struct<2> Var5;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var5);
		bVar2 = VDIST(Var5, Param1);
		if (bVar2 < fParam3)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				if (Function_107(&Var5, &uVar4, 0, 0))
				{
					bVar3 = bVar2;
					uVar1 = &fVar0;
					PRINTSTRING("Assigning new closestObject ");
					PRINTNL();
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_127(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x6DBE / 28094
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var4);
		bVar2 = VDIST(Var4, Param1);
		if (DECOR_CHECK_EXIST(&fVar0, &iParam4))
		{
			if ((DECOR_GET_INT(&fVar0, &iParam4) && uParam5) >= 0)
			{
				if (bVar2 < fParam3)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						bVar3 = bVar2;
						uVar1 = &fVar0;
						PRINTSTRING("Assigning new closestObject ");
						PRINTNL();
					}
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_128(var uParam0, struct<2> Param1, float fParam3) //Position: 0x6E60 / 28256
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var4);
		bVar2 = VDIST(Var4, Param1);
		if (bVar2 < fParam3)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				bVar3 = bVar2;
				uVar1 = &fVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

int Function_129(int iParam0) //Position: 0x6EE6 / 28390
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_155());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_155());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_130(var uParam0, int iParam1) //Position: 0x6F1C / 28444
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
	Function_109(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_131(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_131(int iParam0, var uParam1, struct<2> Param2) //Position: 0x7086 / 28806
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_93("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

var Function_132(var uParam0, struct<2> Param1) //Position: 0x712E / 28974
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		Function_133(StackVal, StackVal, Var0, Param1, &uVar2);
		return UNK_0x9C40E671(&uVar2);
	}
	return 0.0f;
}

void Function_133(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x715C / 29020
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

bool Function_134(struct<2>[] Param0) //Position: 0x7180 / 29056
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_139();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_138(&(Param0[iVar02]), 8);
		}
		else if (Function_137())
		{
			iVar1 = 1;
			Function_138(&(Param0[iVar02]), 8);
		}
		Function_138(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_4(&(Param0[iVar02]), 4))
		{
			if (!Function_4(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_4(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_4(&(Param0[02]), 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iVar02])), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO(&(Param0[iVar02]));
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT(&(Param0[iVar02]));
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iVar02]), 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY(&(Param0[iVar02]));
						break;
					
					default:
						break;
				}
				Function_138(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_4(&(Param0[iVar02]), 4))
		{
			if (!Function_4(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_138(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_138(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED(&(Param0[iVar02]), 4294967295))
						{
							Function_138(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_138(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_138(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_138(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_138(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_138(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_138(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_138(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					default:
						break;
					}
				}
		}
		iVar0++;
	}
	Function_135();
	return 1;
}

void Function_135() //Position: 0x7542 / 30018
{
	if (!Function_136(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_136(int iParam0) //Position: 0x7582 / 30082
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_137() //Position: 0x759E / 30110
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == &Global_99725[iVar043] + 296)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_138(struct<13> Param0) //Position: 0x75CC / 30156
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_139() //Position: 0x75DF / 30175
{
	if (!Function_136(128))
	{
		return;
	}
	if (Global_21646.f_132 == 0)
	{
		strcpy(&Global_21646, "nStreaming", 64);
		Global_21646.f_132 = 1;
		Global_21646.f_128 = GET_CURRENT_GAME_TIME();
		Global_21646.f_136 = Global_21610.f_128;
	}
	return;
}

bool Function_140(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x7621 / 30241
{
	if (Global_99146 && !GET_THIS_SCRIPT_ID() != &Global_99168)
	{
		uParam3 = 0;
		if (!uParam0)
		{
			uParam0 = 1;
			if ((uParam1 < 2 && uParam1 > 5) && uParam4)
			{
				uParam2 = uParam1;
				uParam1 = 7;
			}
			else
			{
				uParam1 = 6;
				return 0;
			}
			return 1;
		}
	}
	if (uParam0)
	{
		uParam0 = 0;
		uParam1 = uParam2;
		return 1;
	}
	return 0;
}

void Function_141(var[] uParam0, int iParam1) //Position: 0x7699 / 30361
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

var Function_142(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x76BC / 30396
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_143(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_138(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_143(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x76FA / 30458
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_138(&(Param0[iVar02]), 4);
			return iVar0;
		}
		if (StackVal && &iParam1 != &Param0[iVar02] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_144(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x77C9 / 30665
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_138(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_138(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (iParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_145(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x78A5 / 30885
{
	return Function_146(&uParam0, uParam1, &uParam2, 4294967295, &uParam3);
}

var Function_146(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x78BC / 30908
{
	return Function_147(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_147(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x78DA / 30938
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_153();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_152(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_151(&uParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_151(&uParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_150(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_152(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_150(bVar0))
				{
					Function_149();
				}
				Function_148(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_152(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (iParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return bVar0;
}

void Function_148(int iParam0) //Position: 0x7BD3 / 31699
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			(*&Global_46956 + 12)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_149() //Position: 0x7C87 / 31879
{
	int iVar0;
	
	if (Global_6645)
	{
		Global_46956 = GET_THIS_SCRIPT_ID();
		Global_46956.f_8 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		(*&Global_46956 + 12)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_150(bool bParam0) //Position: 0x7CC2 / 31938
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_151(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x7CEF / 31983
{
	int iVar0;
	
	PRINTSTRING("NoDupes=");
	if (bParam1)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  RANDACTOR_FILTER=");
	PRINTINT(&iParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(&iParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (&bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(&uParam0, &iParam2, &iParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		iVar0++;
	}
}

bool Function_152(bool bParam0) //Position: 0x7E4A / 32330
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_153() //Position: 0x7E61 / 32353
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_149();
		}
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_149();
	return;
}

int Function_154(int iParam0, int iParam1) //Position: 0x7EAD / 32429
{
	int iVar0;
	
	iVar0 = (Global_26652[iParam04].f_16 % iParam1);
	return iVar0;
}

var Function_155() //Position: 0x7EC3 / 32451
{
	int iVar0;
	
	return &iVar0;
}

void Function_156(vector3 vParam0) //Position: 0x7ECC / 32460
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_158(&vParam0, 1);
	Function_157(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_157(var uParam0, int iParam1) //Position: 0x7EF1 / 32497
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_158(var uParam0, var uParam1) //Position: 0x7F07 / 32519
{
	uParam0 = (uParam0 || uParam1);
	return;
}

