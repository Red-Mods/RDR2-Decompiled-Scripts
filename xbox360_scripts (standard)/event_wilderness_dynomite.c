//Decompiled with MagicRDR v1.0
//Function Count : 156
//Statics Count : 97
//Natives Count : 308
//Parameters Count : 51

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 2;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	bool bLocal_21 = false;
	bool bLocal_22 = false;
	bool bLocal_23 = false;
	bool bLocal_24 = false;
	bool bLocal_25 = false;
	bool bLocal_26 = false;
	bool bLocal_27 = false;
	bool bLocal_28 = false;
	bool bLocal_29 = false;
	bool bLocal_30 = false;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	bool bLocal_33 = false;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	float fLocal_37 = 0.0f;
	bool bLocal_38 = false;
	bool bLocal_39 = false;
	int iLocal_40 = 0;
	float fLocal_41 = 0.0f;
	vector3 vLocal_42 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_45 = false;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	struct<8> Var2;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	bool bVar17[2];
	int iVar20[2];
	bool bVar23;
	int iVar51;
	int iVar52;
	int iVar53;
	bool bVar54;
	bool bVar55;
	bool bVar56;
	bool bVar57;
	int iVar59;
	int iVar60;
	bool bVar64;
	int iVar65;
	int iVar66;
	bool bVar67;
	vector3 vVar68;
	vector3 vVar71;
	vector3 vVar74;
	vector3 vVar77;
	vector3 vVar80;
	vector3 vVar83;
	vector3 vVar86;
	vector3 vVar89;
	vector3 vVar92;
	vector3 vVar95;
	vector3 vVar98;
	vector3 vVar101;
	vector3 vVar104;
	vector3 vVar107;
	vector3 vVar110;
	vector3 vVar113;
	int iVar116;
	int iVar117;
	int iVar118;
	vector3 vVar119;
	vector3 vVar122;
	vector3 vVar125;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	fLocal_41 = 0.0f;
	iVar0 = 0;
	Function_153(&iLocal_34, 0.0f);
	bVar1 = CREATE_LAYOUT(Function_152());
	if (!IS_LAYOUTREF_VALID(Global_30616))
	{
		LOG_ERROR("NOT IS_LAYOUTREF_VALID(gLayout_LocalRegion)");
		iVar0 = 5;
	}
	iVar13 = (RAND_INT_RANGE(false, 1999) / 1000);
	iVar13++;
	bVar14 = false;
	iVar15 = 0;
	iVar16 = 0;
	bVar23 = 9;
	iVar52 = 0;
	if (ScriptParam_0.f_32)
	{
		SET_WEAPONENUM_LOCKED(24, 0);
	}
	if (!IS_POPSET_VALID(Global_30750[0]))
	{
		iVar0 = 5;
	}
	else if (IS_WEAPONENUM_LOCKED(24))
	{
		iVar0 = 5;
	}
	else
	{
		switch (Global_29004)
		{
			case 0x00000000:
				iVar51 = Function_151(43, 3);
				switch (iVar51)
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
				iVar51 = Function_151(43, 2);
				if (iVar51 == 0)
				{
					iVar20[0] = 289;
				}
				else
				{
					iVar20[0] = 285;
				}
				break;
			
			case 0x00000002:
				iVar51 = Function_151(43, 2);
				if (iVar51 == 0)
				{
					iVar20[0] = 161;
				}
				else
				{
					iVar20[0] = 159;
				}
				break;
		}
		iVar20[1] = Function_142(Global_30750[0], 1, 2, 1);
		if (iVar20[0] != 4294967295 || iVar20[1] != 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			Function_141(&bVar23, iVar20[0], 3, 0);
			Function_141(&bVar23, iVar20[1], 3, 0);
			Function_139(&bVar23, "p_gen_debrisBoard12x", 0, 0);
			Function_139(&bVar23, "p_gen_woodPlank02x", 0, 0);
			Function_139(&bVar23, "dynamite_table", 1, 0);
			Function_139(&bVar23, "locked_footlocker", 1, 0);
			Function_139(&bVar23, "smoking_stand_loose", 1, 0);
			Function_139(&bVar23, "p_gen_dynamiteCrate01x", 0, 0);
			Function_139(&bVar23, "throw_dynamite01x", 0, 0);
			Function_138(&iVar20, 2);
		}
	}
	iVar53 = 0;
	iVar59 = 0;
	iVar60 = 0;
	iVar66 = 0;
	bVar67 = false;
	vVar68 = { 2.0f, 0.0f, 0.0f };
	vVar71 = { -2.0f, 0.0f, 0.0f };
	vVar74 = { 1.0f, 0.0f, 1,7f };
	vVar77 = { 3.0f, 0.0f, -1,7f };
	vVar80 = { 0.0f, 0.0f, -2.0f };
	vVar83 = { -2,7f, 0.0f, -2,7f };
	vVar86 = { -2,2f, 0.0f, -1.0f };
	vVar89 = { -2,2f, 0.0f, -2,3f };
	vVar92 = { -3,5f, 0.0f, -0,5f };
	vVar95 = { -2,2f, 0.0f, -2.0f };
	vVar98 = { -1,8f, 0.0f, -1,9f };
	vVar101 = { -3,3f, 0.0f, 3.0f };
	vVar104 = { 1,7f, 0.0f, 3,7f };
	vVar107 = { -1,7f, 0.0f, 1,2f };
	vVar113 = { -2.0f, 0.0f, 0.0f };
	iVar116 = 0;
	if (Global_3382 == 1)
	{
		iVar0 = 5;
	}
	iVar117 = 0;
	iVar118 = 0;
	while (!IS_EXITFLAG_SET())
	{
		bVar64 = 600;
		if (Function_137(&iVar118, &iVar0, &iVar117, &bVar64, 0))
		{
			iVar0 = 5;
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_131(&bVar23))
				{
					iVar0 = 1;
				}
				bVar64 = 600;
				break;
			
			case 0x00000001:
				if (Function_93(&ScriptParam_0, &bVar64, &iVar60, &iVar59, 1))
				{
					iVar0 = 2;
				}
				else if (iVar59 == 1)
				{
					iVar0 = 5;
				}
				break;
			
			case 0x00000002:
				if (VDIST(Global_34574, *(&ScriptParam_0 + 8)) > Function_92())
				{
					iVar0 = 5;
					bVar64 = false;
					break;
				}
				if (!STREAMING_ARE_BOUNDS_LOADED(*(&ScriptParam_0 + 8), 10.0f))
				{
					iVar0 = 5;
					bVar64 = false;
					break;
				}
				PRINTVECTOR(*(&ScriptParam_0 + 8));
				PRINTNL();
				PRINTVECTOR(Global_34574);
				PRINTNL();
				fLocal_37 = CREATE_VOLUME_IN_LAYOUT(bVar1, "vExplosionTrap", 2, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 7.0f, 7.0f, 7.0f);
				bLocal_39 = CREATE_EVENT_TRAP("projectileET", 5, bVar1);
				EVENT_TRAP_ON_VOLUME(bLocal_39, fLocal_37);
				bLocal_38 = CREATE_EVENT_TRAP("explosionET", 91, bVar1);
				EVENT_TRAP_ON_VOLUME(bLocal_38, fLocal_37);
				Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_90("DynamiteGuy") };
				bVar17[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(&Var2, bVar1, StackVal) + Vector(vVar86, *(&ScriptParam_0 + 8), iVar20[0]), 0.0f, 90.0f, 0.0f);
				DECOR_SET_FLOAT(bVar17[0], "MSGringo_setMoveThreshold", 1,5f);
				SET_ACTOR_CAN_PLAY_GESTURES(bVar17[0], false);
				Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_90("DynamiteGuy") };
				bVar17[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(&Var2, bVar1, StackVal) + Vector(vVar83, *(&ScriptParam_0 + 8), iVar20[1]), 0.0f, 180.0f, 0.0f);
				DECOR_SET_FLOAT(bVar17[1], "MSGringo_setMoveThreshold", 1,5f);
				SET_ACTOR_CAN_PLAY_GESTURES(bVar17[1], false);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar17[0], 0);
				UNK_0x99AFD2D1(bVar17[0], 1, 1);
				TASK_STAND_STILL(bVar17[0], -1.0f, 0, 0);
				DECOR_SET_BOOL(bVar17[0], "nnostickup", true);
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar17[0], 0);
				GIVE_WEAPON_TO_ACTOR(bVar17[0], 39, false, 1, 1);
				TASK_STAND_STILL(bVar17[1], -1.0f, 0, 0);
				DECOR_SET_BOOL(bVar17[1], "nnostickup", true);
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar17[1], 0);
				GIVE_WEAPON_TO_ACTOR(bVar17[1], 39, false, 1, 1);
				bVar54 = CREATE_OBJECTSET_IN_LAYOUT("barrelgrpSet", bVar1, 8, 0);
				bVar56 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, Vector(bVar1, StackVal, StackVal) + Vector(vVar101, *(&ScriptParam_0 + 8), Function_152()), 0.0f, 0.0f, 0.0f);
				DECOR_SET_STRING(bVar56, "UseAnim", "putdown");
				ADD_OBJECT_TO_OBJECTSET(bVar56, bVar54);
				iVar53 = 1;
				bLocal_25 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_152(), bVar1, StackVal) + Vector(vVar68, *(&ScriptParam_0 + 8), "p_gen_tent01x"), 0.0f, 90.0f, 0.0f, 1);
				if (!SNAP_OBJECT_TO_GROUND(bLocal_25, 4.0f, true, 1092616192))
				{
				}
				bLocal_24 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_152(), bVar1, StackVal) + Vector(vVar71, *(&ScriptParam_0 + 8), "p_gen_table05x"), *(&ScriptParam_0 + 20), 1);
				if (!SNAP_OBJECT_TO_GROUND(bLocal_24, 10.0f, false, 1092616192))
				{
				}
				GET_OBJECT_RELATIVE_POSITION(bLocal_24, -0,1536f, 0,8085f, 0,3099f, &vVar113);
				bLocal_29 = CREATE_WEAPON_PICKUP(bVar1, 24, &vVar113, 223,1619f, 0.0f, 0, -1.0f);
				SET_DRAW_OBJECT(bLocal_29, 0);
				GET_OBJECT_RELATIVE_POSITION(bLocal_24, -0,0797f, 0,8085f, -0,2423f, &vVar113);
				bLocal_30 = CREATE_WEAPON_PICKUP(bVar1, 24, &vVar113, 345,9663f, 0.0f, 0, -1.0f);
				SET_DRAW_OBJECT(bLocal_30, 0);
				bVar57 = CREATE_GRINGO_ON_OBJECT(bLocal_24, Function_152(), "$/content/scripting/gringo/SimpleGringo/dynamite_table", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar57), "UseCase1", "DisableResetProp", 1);
				DECOR_SET_BOOL(bVar57, "NoPropRecreate", true);
				if (!SNAP_OBJECT_TO_GROUND(bVar57, 10.0f, false, 1092616192))
				{
				}
				TASK_USE_GRINGO(bVar17[0], GET_GRINGO_FROM_OBJECT(bVar57), "UseCase1", 4294967295, 1);
				SNAP_ACTOR_TO_GRINGO(bVar17[0], bVar57, "UseCase1", true, 0, 0);
				bLocal_23 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_152(), bVar1, StackVal) + Vector(vVar104, *(&ScriptParam_0 + 8), "smoking_stand_loose"), 0.0f, 90.0f, 0.0f));
				if (iVar13 == 0)
				{
					TASK_USE_GRINGO(bVar17[1], bLocal_23, "UseCase1", true, 1);
				}
				bLocal_27 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_152(), bVar1, StackVal) + Vector(vVar89, *(&ScriptParam_0 + 8), "p_gen_powderKeg02x"), *(&ScriptParam_0 + 20), 1);
				if (!SNAP_OBJECT_TO_GROUND(bLocal_27, 4.0f, true, 1092616192))
				{
				}
				if (!IS_WEAPONENUM_LOCKED(24))
				{
					DELETE_ALL_WEAPONS_FROM_ACTOR(bVar17[0]);
					GIVE_WEAPON_TO_ACTOR(bVar17[0], 24, false, 1, 1);
				}
				vVar110 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar77, *(&ScriptParam_0 + 8), StackVal) };
				bLocal_26 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_152(), bVar1, StackVal) + Vector(vVar77, *(&ScriptParam_0 + 8), "p_gen_powderKeg01x"), *(&ScriptParam_0 + 20), 0);
				if (!SNAP_OBJECT_TO_GROUND(bLocal_26, 4.0f, true, 1092616192))
				{
				}
				bLocal_22 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Multistage_barrel", &vVar110, 0,5f, 0);
				DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_22), "MSGringo_Layout", bVar1);
				iVar51 = 0;
				while (iVar51 <= 2)
				{
					bVar55 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_152(), bVar1, StackVal) + Vector(vVar92, *(&ScriptParam_0 + 8), "p_gen_dynamite01x"), 0.0f, 180.0f, 0.0f, 1);
					vVar92.f_8 = (vVar92.z + 0,2f);
					vVar92.x = (vVar92.x + 0,1f);
					SNAP_OBJECT_TO_GROUND(bVar55, 4.0f, true, 1092616192);
					iVar51++;
				}
				bLocal_28 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_152(), bVar1, StackVal) + Vector(vVar80, *(&ScriptParam_0 + 8), "p_gen_bedRollClosed01x"), 0.0f, 90.0f, 0.0f, 1);
				if (!SNAP_OBJECT_TO_GROUND(bLocal_28, 4.0f, true, 1092616192))
				{
				}
				vVar119 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar74, *(&ScriptParam_0 + 8), StackVal) };
				vVar122 = { 0.0f, 0.0f, 0.0f };
				vVar125 = { 0.0f, 0.0f, 0.0f };
				FIND_GROUND_INTERSECTION(&vVar119, 2.0f, &vVar125, &vVar122);
				bLocal_21 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(bVar1, Function_152(), "$/content/scripting/gringo/SimpleGringo/locked_footlocker", vVar125, 0.0f, 130.0f, 0.0f));
				DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_21), "nboxOwnerA", bVar17[0]);
				DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_21), "nboxOwnerB", bVar17[1]);
				Function_82(StackVal, StackVal, bLocal_21, vVar125, 1, 4294967295, 4294967295);
				Function_80(StackVal, StackVal, &iVar10, &uVar11, &uVar12, 3.0f, *(&ScriptParam_0 + 8));
				iVar0 = 3;
				bVar64 = false;
				break;
			
			case 0x00000003:
				Function_79();
				Function_77(StackVal, StackVal, Function_79(), &bVar14, ScriptParam_0.f_56, bVar17[0], 100, 0x42a00000, 1);
				Function_64(&bVar17, 2, &bVar14, ScriptParam_0.f_56, 100, 0x42a00000, 1);
				if (!iLocal_40)
				{
					if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_38) || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_39))
					{
						if (IS_ACTOR_ALIVE(Global_34573))
						{
							if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
							{
								SAY_SINGLE_LINE_CONTEXT(Global_34573, 422, Global_34573, 1, 0, 5, 4294967295, 4294967295, 0, 1);
							}
						}
						vLocal_42 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar92, *(&ScriptParam_0 + 8), StackVal) };
						Function_63(&vLocal_42, "DynamiteExplosion", 0, 1);
						CREATE_PROP_IN_LAYOUT(bVar1, Function_152(), "p_gen_woodPlank02x", vLocal_42, 0.0f, 0.0f, 0.0f, 0);
						CREATE_PROP_IN_LAYOUT(StackVal, StackVal, bVar1, Vector(vLocal_42, "p_gen_debrisBoard12x", Function_152()) + Vector(0.0f, 0,3f, 0.0f), 0.0f, 0.0f, 0.0f, 0);
						CREATE_PROP_IN_LAYOUT(StackVal, StackVal, bVar1, Vector(vLocal_42, "p_gen_debrisBoard12x", Function_152()) + Vector(0.0f, 0.0f, 0,3f), 0.0f, 0.0f, 0.0f, 0);
						Function_62(&bVar17, 4294967295);
						if (IS_OBJECT_VALID(bLocal_24))
						{
							GET_OBJECT_POSITION(bLocal_24, &vLocal_42);
							DESTROY_OBJECT(bLocal_24);
							CREATE_PROP_IN_LAYOUT(bVar1, Function_152(), "p_gen_debrisBoard12x", vLocal_42, 0.0f, 0.0f, 0.0f, 0);
						}
						if (IS_OBJECT_VALID(bLocal_25))
						{
							GET_OBJECT_POSITION(bLocal_25, &vLocal_42);
							DESTROY_OBJECT(bLocal_25);
							CREATE_PROP_IN_LAYOUT(StackVal, StackVal, bVar1, Vector(vLocal_42, "p_gen_debrisBoard12x", Function_152()) + Vector(0.0f, 0.0f, 1.0f), 0.0f, 0.0f, 0.0f, 0);
						}
						if (IS_OBJECT_VALID(bLocal_26))
						{
							GET_OBJECT_POSITION(bLocal_26, &vLocal_42);
							DESTROY_OBJECT(bLocal_26);
							CREATE_PROP_IN_LAYOUT(StackVal, StackVal, bVar1, Vector(vLocal_42, "p_gen_debrisBoard12x", Function_152()) + Vector(0.0f, 0,3f, 0.0f), 0.0f, 0.0f, 0.0f, 0);
							CREATE_PROP_IN_LAYOUT(StackVal, StackVal, bVar1, Vector(vLocal_42, "p_gen_woodPlank02x", Function_152()) + Vector(0.0f, 0.0f, 0,3f), 0.0f, 0.0f, 0.0f, 0);
						}
						if (IS_OBJECT_VALID(bLocal_27))
						{
							GET_OBJECT_POSITION(bLocal_27, &vLocal_42);
							DESTROY_OBJECT(bLocal_27);
							CREATE_PROP_IN_LAYOUT(StackVal, StackVal, bVar1, Vector(vLocal_42, "p_gen_debrisBoard12x", Function_152()) + Vector(0.0f, 0.0f, 0,3f), 0.0f, 0.0f, 0.0f, 0);
							CREATE_PROP_IN_LAYOUT(StackVal, StackVal, bVar1, Vector(vLocal_42, "p_gen_woodPlank02x", Function_152()) + Vector(0.0f, 0,3f, 0.0f), 0.0f, 0.0f, 0.0f, 0);
						}
						if (IS_OBJECT_VALID(bLocal_28))
						{
							GET_OBJECT_POSITION(bLocal_28, &vLocal_42);
							DESTROY_OBJECT(bLocal_28);
							CREATE_PROP_IN_LAYOUT(StackVal, StackVal, bVar1, Vector(vLocal_42, "p_gen_debrisBoard12x", Function_152()) + Vector(0.0f, 0.0f, 0,3f), 0.0f, 0.0f, 0.0f, 0);
						}
						if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(bLocal_21)))
						{
							DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_21));
						}
						if (IS_OBJECT_VALID(bLocal_29))
						{
							DESTROY_OBJECT(bLocal_29);
						}
						if (IS_OBJECT_VALID(bLocal_30))
						{
							DESTROY_OBJECT(bLocal_30);
						}
						iLocal_40 = 1;
					}
				}
				if (Function_58(&bVar17, 2, &uLocal_32, &iLocal_31, &fLocal_41, 0, iVar16, 0x40200000))
				{
					iVar16 = 1;
					switch (iLocal_31)
					{
						case 0x00000001:
							RESET_ANIM_SET_FOR_ACTOR(bVar17[0], 1);
							Function_57(bVar17[0]);
							TASK_FLEE_ACTOR(bVar17[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							AI_QUICK_EXIT_GRINGO(bVar17[1], 1);
							Function_57(bVar17[1]);
							TASK_FLEE_ACTOR(bVar17[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000002:
						case 0x00000010:
							RESET_ANIM_SET_FOR_ACTOR(bVar17[0], 1);
							Function_57(bVar17[0]);
							TASK_FLEE_ACTOR(bVar17[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							AI_QUICK_EXIT_GRINGO(bVar17[1], 1);
							Function_57(bVar17[1]);
							TASK_FLEE_ACTOR(bVar17[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000004:
							RESET_ANIM_SET_FOR_ACTOR(bVar17[0], 1);
							Function_57(bVar17[0]);
							TASK_FLEE_ACTOR(bVar17[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							AI_QUICK_EXIT_GRINGO(bVar17[1], 1);
							Function_57(bVar17[1]);
							TASK_FLEE_ACTOR(bVar17[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000008:
							AI_QUICK_EXIT_GRINGO(bVar17[1], 1);
							Function_55(&bVar17, 2);
							break;
					}
					iVar16 = 1;
					if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(bLocal_21)))
					{
						DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_21), "nboxOwnerA", false);
						DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_21), "nboxOwnerB", false);
					}
				}
				if (IS_ACTOR_VALID(bVar17[0]))
				{
					if (DECOR_CHECK_EXIST(bVar17[0], "actorStolen"))
					{
						iVar16 = 1;
						iVar0 = 5;
						break;
					}
				}
				if (IS_ACTOR_VALID(bVar17[1]))
				{
					if (DECOR_CHECK_EXIST(bVar17[1], "actorStolen"))
					{
						iVar0 = 5;
						break;
					}
				}
				if (!Function_49(ScriptParam_0.f_56, bVar17[0], &iVar15, &iVar66, 0, 1, 1, 1))
				{
					iVar0 = 5;
					bVar64 = false;
					break;
				}
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (IS_ACTOR_ALIVE(Global_34573))
					{
						if (Function_47(StackVal, StackVal, Global_34573, *(&ScriptParam_0 + 8)) < Function_45(1))
						{
							bVar64 = false;
							iVar0 = 5;
							break;
						}
					}
					else
					{
						bVar64 = false;
						iVar0 = 5;
					}
				}
				else
				{
					bVar64 = false;
					iVar0 = 5;
				}
				if (!bVar67 && !iVar13 != 0)
				{
					if (IS_ACTOR_VALID(bVar17[0]))
					{
						if (!IS_AMBIENT_SPEECH_PLAYING(bVar17[0]) && !IS_AMBIENT_SPEECH_PLAYING(bVar17[1]))
						{
							if (MEMORY_GET_IS_VISIBLE(bVar17[0], Global_34573) && Function_44(bVar17[0], Global_34573, 8.0f))
							{
								bVar67 = true;
								AI_GOAL_LOOK_AT_ACTOR_NEW(bVar17[0], Global_34573, -1.0f, 1);
								Function_42(bVar17[0], Global_34573, "GREET", 0, 5, 60, 1, 1);
							}
						}
					}
				}
				if (Function_20(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(&bVar17, &iVar52, StackVal) + Vector(vVar77, *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 8)), iVar13, bVar1))
				{
					iVar116 = 1;
					iVar0 = 5;
					bVar64 = false;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar64 = false;
				break;
			
			case 0x00000006:
				if (!Function_19() && UI_IS_MESSAGE_QUEUE_EMPTY(1))
				{
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					bVar64 = false;
				}
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar64);
		}
	}
	if (IS_OBJECT_VALID(bLocal_29))
	{
		DESTROY_OBJECT(bLocal_29);
	}
	if (IS_OBJECT_VALID(bLocal_30))
	{
		DESTROY_OBJECT(bLocal_30);
	}
	Function_17(&bVar17, 4294967295);
	Function_16(&iVar10, &uVar11, &uVar12);
	Function_15(&iVar20, 2);
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (!bVar14)
	{
		Function_12(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	if (iVar116 != 0 && iVar16 != 0)
	{
		Function_10(&bVar17, 4294967295);
	}
	if (Function_6(bVar17[0], 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar17[0], 1);
		UNK_0x99AFD2D1(bVar17[0], 0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar17[0], 0);
	}
	if (Function_6(bVar17[1], 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar17[1], 1);
		UNK_0x99AFD2D1(bVar17[1], 0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar17[1], 0);
	}
	if (IS_ACTOR_VALID(bVar17[0]))
	{
		if (DECOR_CHECK_EXIST(bVar17[0], "MSGringo_setMoveThreshold"))
		{
			DECOR_REMOVE(bVar17[0], "MSGringo_setMoveThreshold");
		}
	}
	if (IS_ACTOR_VALID(bVar17[1]))
	{
		AI_GOAL_LOOK_CLEAR(bVar17[1]);
		if (DECOR_CHECK_EXIST(bVar17[1], "MSGringo_setMoveThreshold"))
		{
			DECOR_REMOVE(bVar17[1], "MSGringo_setMoveThreshold");
		}
	}
	if (!bVar14)
	{
		Function_10(&bVar17, 4294967295);
		if (IS_OBJECT_VALID(bVar1))
		{
			UNK_0xA936E73B(bVar1, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar1, 1);
		}
	}
	else if (iVar53 && IS_OBJECTSET_VALID(bVar54))
	{
		Function_5(bVar54);
		DESTROY_OBJECTSET(bVar54);
	}
	RESET_THIS_TREE_TYPE_CLEARING(iVar10);
	RESET_THIS_TREE_TYPE_CLEARING(iVar65);
	Function_1(&bVar23);
	RELEASE_LAYOUT_REF(bVar1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x1253 / 4691
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_2(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_2(var uParam0, int iParam1) //Position: 0x1279 / 4729
{
	if (Function_4(uParam0[iParam13], 4))
	{
		if (Function_4(uParam0[iParam13], 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP((*uParam0)[iParam13]);
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET((*uParam0)[iParam13]);
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR((*uParam0)[iParam13], 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO((*uParam0)[iParam13]);
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT((*uParam0)[iParam13]);
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*uParam0)[iParam13], 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY((*uParam0)[iParam13]);
					break;
				
				default:
					break;
			}
			Function_3(uParam0[iParam13], 1);
			Function_3(uParam0[iParam13], 2);
			Function_3(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x13A7 / 5031
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x13C1 / 5057
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(bool bParam0) //Position: 0x13DE / 5086
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_OBJECT_REF(bVar0);
		}
	}
	return;
}

bool Function_6(bool bParam0, bool bParam1) //Position: 0x1423 / 5155
{
	if (bParam1)
	{
		if (IS_ACTOR_HOGTIED(bParam0))
		{
			if (!(GET_TASK_STATUS(bParam0, 25) != 1 || GET_TASK_STATUS(bParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(bParam0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(bParam0, true);
			}
			Function_8(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_8(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_7(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(bParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_7(bool bParam0, int iParam1) //Position: 0x14BF / 5311
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(bParam0))
		{
			return 1;
		}
		bVar0 = SQUAD_GET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

int Function_8(bool bParam0) //Position: 0x1509 / 5385
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_9(bParam0);
		return 1;
	}
	return 0;
}

void Function_9(bool bParam0) //Position: 0x151F / 5407
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		}
	}
	return;
}

void Function_10(bool bParam0, int iParam1) //Position: 0x154B / 5451
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_11(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_11(int iParam0) //Position: 0x1578 / 5496
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*iParam0, 0);
		TASK_FLEE_ACTOR(*iParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*iParam0, false);
	}
	return;
}

bool Function_12(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x15A3 / 5539
{
	bool bVar0;
	bool bVar1;
	
	if (Global_30842[16])
	{
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
	}
	fParam1 = fParam1;
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_3399 = 0;
		Function_14("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_17483[iParam075].f_116 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_3367)
			{
				if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_3367 = 1;
			Global_6281 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(Global_17483[iParam075].f_260);
		if (Global_30842[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_13(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_13(bVar0);
		}
		if (!bParam3)
		{
			ADD_TIME(&bVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, 0, 10, 0);
		}
		if (Global_30842[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_13(bVar0);
		}
		Global_17483[iParam075].f_264 = bVar0;
		Global_16876[iParam06] = bVar0;
		if (bParam2)
		{
			Global_16876[iParam06].f_4 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_17483[iParam075].f_116 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_3367)
				{
					if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_3367 = 1;
				Global_6281 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_13(bool bParam0) //Position: 0x1800 / 6144
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(bParam0));
	return;
}

void Function_14(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1846 / 6214
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Global_3422[Global_626940] + 12, iParam5);
	}
	else
	{
		iVar0 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar0, iParam5);
	}
}

void Function_15(var uParam0, int iParam1) //Position: 0x188D / 6285
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION((*uParam0)[iVar0]);
		iVar0++;
	}
	return;
}

void Function_16(var uParam0, var uParam1, int iParam2) //Position: 0x18AF / 6319
{
	if (*uParam0 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(*uParam0);
	}
	if (*uParam1 != 4294967295)
	{
		RESET_THIS_BREAKABLE_TREE_CLEARING(*uParam1);
	}
	if (*iParam2 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(*iParam2);
	}
	return;
}

void Function_17(var uParam0, int iParam1) //Position: 0x18DC / 6364
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_18(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_18(var uParam0) //Position: 0x1909 / 6409
{
	if (IS_ACTOR_VALID(*uParam0))
	{
		SET_DRAW_ACTOR(*uParam0, true);
		CLEAR_ACTOR_MAX_SPEED(*uParam0);
		if (IS_ACTOR_ANIMAL(*uParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*uParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*uParam0, 0, true);
			MEMORY_ALLOW_SHOOTING(*uParam0, true);
		}
	}
	return;
}

bool Function_19() //Position: 0x194B / 6475
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

bool Function_20(var uParam0, var uParam1, char* cParam2, var uParam3, var uParam4, char* cParam5, var uParam6, var uParam7, int iParam8, bool bParam9) //Position: 0x1978 / 6520
{
	switch (*uParam0)
	{
		case 0x00000000:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[0], 1.0f, 50.0f, 1, 1, 0))
			{
				Function_27(43);
				switch (iParam8)
				{
					case 0x00000000:
						Function_63(&cParam2, "CannonballExplosion", 0, 1);
						Function_63(&cParam5, "CannonballExplosion", 0, 1);
						*uParam0 = 8;
						break;
					
					case 0x00000001:
						*uParam0 = 1;
						break;
					
					case 0x00000002:
						*uParam0 = 2;
						break;
				}
				AI_GOAL_LOOK_CLEAR((*uParam1)[1]);
				bLocal_33 = TASK_SEQUENCE_OPEN();
				TASK_USE_GRINGO((*uParam1)[1], bLocal_22, "UseCase1", true, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*uParam1)[1], bLocal_33);
				TASK_SEQUENCE_RELEASE(bLocal_33, 1);
			}
			break;
		
		case 0x00000001:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[0], 1.0f, 30.0f, 1, 1, 0))
			{
				Function_153(&iLocal_34, 0.0f);
				Function_42((*uParam1)[0], (*uParam1)[1], "eventDynamite_msg01", "eventDynamite_msg01", 5, 60, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR((*uParam1)[0], 1);
				UNK_0x99AFD2D1((*uParam1)[0], 0, 0);
				*uParam0 = 4;
			}
			break;
		
		case 0x00000002:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[0], 1.0f, 20.0f, 1, 1, 0))
			{
				Function_153(&iLocal_34, 0.0f);
				Function_42((*uParam1)[0], (*uParam1)[1], "eventDynamite_msg02", "eventDymamite_msg02", 5, 60, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR((*uParam1)[0], 1);
				UNK_0x99AFD2D1((*uParam1)[0], 0, 0);
				*uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			if (GET_TASK_STATUS((*uParam1)[1], 19) == 0)
			{
				Function_42((*uParam1)[0], (*uParam1)[1], "eventDynamite_msg03", "eventDynamite_msg03", 5, 60, 1, 1);
				Function_26(GET_OBJECT_FROM_GRINGO(bLocal_23));
				bLocal_45 = CREATE_VOLUME_IN_LAYOUT(uParam9, Function_152(), 3, Function_26(GET_OBJECT_FROM_GRINGO(bLocal_23)), 0.0f, 0.0f, 0.0f, 3.0f, 7.0f, 3.0f);
				DECOR_SET_BOOL((*uParam1)[1], "VolOnly", true);
				DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_23), "volume", bLocal_45);
				TASK_USE_GRINGO((*uParam1)[1], bLocal_23, "UseCase1", 4294967295, 1);
				if (iParam8 == 2)
				{
					*uParam0 = 6;
				}
				else if (iParam8 == 1)
				{
					*uParam0 = 5;
				}
			}
			break;
		
		case 0x00000005:
			if (GET_CURRENT_GRINGO((*uParam1)[1]) == bLocal_23)
			{
				Function_153(&iLocal_34, 0.0f);
				*uParam0 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_25(&iLocal_34, 4.0f) || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_38))
			{
				Function_63(&cParam2, "CannonballExplosion", 0, 1);
				Function_63(&cParam5, "CannonballExplosion", 0, 1);
				Function_153(&iLocal_34, 0.0f);
				*uParam0 = 7;
			}
			break;
		
		case 0x00000006:
			if (IS_ACTOR_VALID((*uParam1)[0]))
			{
				if (GET_LAST_ATTACKER((*uParam1)[0]) == Global_34573)
				{
					DESTROY_OBJECT(bLocal_38);
					Function_63(&cParam2, "CannonballExplosion", 0, 1);
					Function_63(&cParam5, "CannonballExplosion", 0, 1);
					Function_153(&iLocal_34, 0.0f);
					*uParam0 = 7;
					break;
				}
			}
			if (IS_ACTOR_VALID((*uParam1)[1]))
			{
				if (GET_LAST_ATTACKER((*uParam1)[1]) == Global_34573)
				{
					DESTROY_OBJECT(bLocal_38);
					Function_63(&cParam2, "CannonballExplosion", 0, 1);
					Function_63(&cParam5, "CannonballExplosion", 0, 1);
					Function_153(&iLocal_34, 0.0f);
					*uParam0 = 7;
					break;
				}
			}
			break;
		
		case 0x00000007:
			if (Function_21(&iLocal_34) < 0.0f)
			{
				if (IS_OBJECT_VALID(bLocal_24))
				{
					DESTROY_OBJECT(bLocal_24);
				}
				if (IS_OBJECT_VALID(bLocal_25))
				{
					DESTROY_OBJECT(bLocal_25);
				}
				if (IS_OBJECT_VALID(bLocal_26))
				{
					DESTROY_OBJECT(bLocal_26);
				}
				if (IS_OBJECT_VALID(bLocal_27))
				{
					DESTROY_OBJECT(bLocal_27);
				}
				if (IS_OBJECT_VALID(bLocal_28))
				{
					DESTROY_OBJECT(bLocal_28);
				}
				*uParam0 = 8;
			}
			break;
		
		case 0x00000008:
			if (IS_GRINGO_VALID(bLocal_21))
			{
				DECOR_REMOVE(GET_OBJECT_FROM_GRINGO(bLocal_21), "nboxOwnerA");
				DECOR_REMOVE(GET_OBJECT_FROM_GRINGO(bLocal_21), "nboxOwnerB");
				*uParam0 = 9;
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

float Function_21(int iParam0) //Position: 0x1E0B / 7691
{
	if (Function_24(iParam0))
	{
		if (Function_22(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_22(int iParam0) //Position: 0x1ED3 / 7891
{
	return Function_23(*iParam0, 2);
}

bool Function_23(int iParam0, int iParam1) //Position: 0x1EE0 / 7904
{
	return (iParam0 && iParam1) == 0;
}

bool Function_24(int iParam0) //Position: 0x1EED / 7917
{
	return Function_23(*iParam0, 1);
}

int Function_25(var uParam0, float fParam1) //Position: 0x1EFA / 7930
{
	if (Function_24(uParam0))
	{
		if (Function_21(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

vector3 Function_26(bool bParam0) //Position: 0x1F16 / 7958
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_27(int iParam0) //Position: 0x1F3D / 7997
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_28(409, 1, 0, 0);
	}
	return;
}

int Function_28(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1F6E / 8046
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + TO_FLOAT(bParam1));
	Function_41(iParam0, TO_FLOAT(bParam1), 1);
	Function_40(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_29(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x218E / 8590
{
	char* cVar0;
	char* cVar1[32];
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
	strcpy(&Global_35278[iParam020] + 16, "", 32);
	if (bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_35278[iParam020] + 16, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_35278[iParam020].f_76 != 3 || Global_35278[iParam020].f_48 != 21)
	{
		stradd(&Global_35278[iParam020] + 16, "$", 32);
	}
	stradd(&Global_35278[iParam020] + 16, cVar0, 32);
	switch (Global_35278[iParam020].f_48)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_35278[iParam020] + 16, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
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
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_35278[iParam020] + 16, " days", 32);
						}
						else
						{
							stradd(&Global_35278[iParam020] + 16, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar4), 32);
						stradd(&Global_35278[iParam020] + 16, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
						stradd(&Global_35278[iParam020] + 16, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
					stradd(&Global_35278[iParam020] + 16, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_35278[iParam020] + 16, " ", 32);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, cVar0, 32);
				stradd(&Global_35278[iParam020] + 16, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
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
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_35278[iParam020] + 16, " mi", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " days", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_35278[iParam020] + 16, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_39(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		iVar21 = 0;
		switch (Global_35278[iParam020].f_48)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_38(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_38(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_36(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_33(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_30(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_152(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_30(int iParam0) //Position: 0x27BB / 10171
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_31(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x27CC / 10188
{
	char* cVar0[32];
	
	if (bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_32(char* cParam0, char* cParam1) //Position: 0x28C1 / 10433
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_33(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x28DA / 10458
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_35(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_34(Function_35(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_34(int iParam0, int iParam1) //Position: 0x293F / 10559
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_35(int iParam0, bool bParam1) //Position: 0x2951 / 10577
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_36(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2963 / 10595
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
	if (Global_35278[iParam020].f_64 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_35278[iParam020].f_64;
	}
	fVar1 = Global_35278[iParam020].f_60;
	if (((Function_37(iParam0) != 19 || Function_37(iParam0) != 17) || Function_37(iParam0) != 10) || Function_37(iParam0) != 9)
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
		*uParam3 = ROUND((fVar2 * 100.0f));
		*uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		*uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		*uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_37(int iParam0) //Position: 0x2A93 / 10899
{
	return Global_35278[iParam020].f_48;
}

float Function_38(int iParam0) //Position: 0x2AA2 / 10914
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_39(int iParam0) //Position: 0x2ADB / 10971
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_40(int iParam0) //Position: 0x2B18 / 11032
{
	if (Global_35278[iParam020].f_64 == 0.0f)
	{
		if (Global_34581[iParam0] < Global_35278[iParam020].f_64)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_35278[iParam020].f_60 == 0.0f)
	{
		if (Global_34581[iParam0] > Global_35278[iParam020].f_60)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_41(int iParam0, float fParam1, bool bParam2) //Position: 0x2CB2 / 11442
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_35278[iParam020].f_52;
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
		Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
	}
	else
	{
		Global_34581[iVar1] = fParam1;
	}
	if (Global_35278[iVar120].f_64 == 0.0f)
	{
		if (Global_34581[iVar1] < Global_35278[iVar120].f_64)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_64;
		}
	}
	if (Global_35278[iVar120].f_60 == 0.0f)
	{
		if (Global_34581[iVar1] > Global_35278[iVar120].f_60)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_60;
		}
	}
	return 1;
}

void Function_42(bool bParam0, bool bParam1, bool bParam2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2ECC / 11980
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_43(bParam0, Global_34573) >= IntToFloat(iParam5))
		{
			if (!IS_ACTOR_VALID(bParam1))
			{
				bParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
			if (bParam6)
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 0, 1))
					{
						uParam3 = uParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 1, 1))
				{
					uParam3 = uParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(bParam0, bParam2, true, true, iParam4, 0, false, true);
			}
		}
	}
}

float Function_43(bool bParam0, bool bParam1) //Position: 0x2F5C / 12124
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	return VDIST(vVar0, vVar3);
}

int Function_44(bool bParam0, bool bParam1, bool bParam2) //Position: 0x304D / 12365
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam2))
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

float Function_45(bool bParam0) //Position: 0x315E / 12638
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_46(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_46(float fParam0, int iParam1) //Position: 0x3199 / 12697
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*fParam0 = 65.0f;
		*iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*fParam0 = 115.0f;
		*iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*fParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
		else
		{
			*fParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
	}
	return;
}

float Function_47(bool bParam0, vector3 vParam1) //Position: 0x3222 / 12834
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_48(bParam0);
		vVar0 = { StackVal, StackVal, Function_48(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_48(bool bParam0) //Position: 0x329C / 12956
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

bool Function_49(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x3306 / 13062
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_43(Global_34573, bParam1) > 15.0f)
				{
					*uParam2 = 1;
				}
			}
		}
		if (Global_3394 && !*uParam2)
		{
			return 0;
		}
		if ((Global_3367 && Global_6281 == GET_THIS_SCRIPT_ID()) && !*uParam2)
		{
			return 0;
		}
		if (Function_52() && !*uParam2)
		{
			return 0;
		}
		if (Function_51(iParam0) && !*uParam2)
		{
			return 0;
		}
		if (Global_3387 && !bParam4)
		{
			return 0;
		}
		if (Global_3410)
		{
			return 0;
		}
		if (Global_3384)
		{
			return 0;
		}
		if (Global_3403 && uParam7)
		{
			*uParam3 = 1;
			return 0;
		}
		if (Global_3404 && uParam7)
		{
			*uParam3 = 1;
			return 0;
		}
		if (Global_3392 && !*uParam2)
		{
			return 0;
		}
		if (Global_3393 && !*uParam2)
		{
			return 0;
		}
		if (bParam6)
		{
			if (Global_63096 && !*uParam2)
			{
				return 0;
			}
		}
		if (IS_ACTOR_ON_TRAIN(Global_34573, 0))
		{
			return 0;
		}
	}
	if (StackVal & 2048 != 2048)
	{
		if (!Function_50(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_50(int iParam0, int iParam1) //Position: 0x3434 / 13364
{
	iParam0 = iParam0;
	if (Global_3382 != 1 && iParam1)
	{
		return 0;
	}
	if (Global_3369 == 1)
	{
		return 0;
	}
	return 1;
}

int Function_51(int iParam0) //Position: 0x3455 / 13397
{
	bool bVar0;
	
	if (StackVal & 64 == 64)
	{
		bVar0 = GET_LAST_HIT_TIME(Global_34573);
		if (bVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(Global_34573)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_52() //Position: 0x3493 / 13459
{
	int iVar0;
	int iVar1;
	
	if (Global_3386)
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
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					if (StackVal != DECOR_GET_INT(GET_THIS_SCRIPT_ID(), "script"))
					{
						if (Function_53(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_53(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_53(bool bParam0, bool bParam1) //Position: 0x354E / 13646
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_48(bParam0);
			vVar0 = { StackVal, StackVal, Function_48(bParam0) };
			Function_54(bParam1);
			vVar3 = { StackVal, StackVal, Function_54(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_54(bool bParam0) //Position: 0x35EE / 13806
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

void Function_55(var uParam0, int iParam1) //Position: 0x365A / 13914
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_ACTOR_VALID((*uParam0)[iVar0]))
		{
			MAKE_ACTOR_READY_FOR_ACTION((*uParam0)[iVar0], 1);
			Function_56((*uParam0)[iVar0], &Global_34573);
		}
		iVar0++;
	}
	return;
}

int Function_56(bool bParam0, int iParam1) //Position: 0x3697 / 13975
{
	if (IS_ACTOR_HUMAN(bParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(bParam0) == 0)
		{
			TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bParam0, false);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(*iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(bParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(bParam0, *iParam1, true);
	TASK_KILL_CHAR(bParam0, *iParam1);
	TASK_PRIORITY_SET(bParam0, true);
	return 1;
}

void Function_57(bool bParam0) //Position: 0x377C / 14204
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "nnostickup"))
		{
			DECOR_REMOVE(bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, true);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
		TASK_PRIORITY_SET(bParam0, 2);
	}
	return;
}

bool Function_58(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x37C8 / 14280
{
	int iVar0;
	
	uParam7 = uParam7;
	if (!bParam6)
	{
		iVar0 = 0;
		while (iVar0 <= iParam1)
		{
			if (Function_59((*uParam0)[iVar0], uParam3, uParam4, uParam5, bParam6, 0x40400000))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool Function_59(bool bParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x3810 / 14352
{
	float fVar0;
	
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		if (IS_ACTOR_ON_FOOT(bParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, (fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		fVar0 = Function_43(bParam0, Global_34573);
		if (!Function_23(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_60(bParam0);
				return 1;
			}
		}
		if (!Function_23(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_60(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_60(bParam0);
				return 1;
			}
		}
		if (!Function_23(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_60(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1,3f)
					{
						*uParam1 = 4;
						Function_60(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_23(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_60(bParam0);
				return 1;
			}
		}
		if (!Function_23(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_60(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_60(bool bParam0) //Position: 0x39A7 / 14759
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_61(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_61(bool bParam0) //Position: 0x39DB / 14811
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_62(var uParam0, int iParam1) //Position: 0x39F2 / 14834
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_57((*uParam0)[iVar0]);
		iVar0++;
	}
	return;
}

void Function_63(float fParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0x3A1F / 14879
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(fParam0, cParam1, bParam2, &vVar0, iParam3);
}

void Function_64(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x3A3B / 14907
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!*uParam2)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 <= iParam1)
	{
		if (IS_ACTOR_VALID((*uParam0)[iVar1]))
		{
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam0)[iVar1], 1.0f, iParam5, 1, 1, 0))
			{
				*uParam2 = 1;
				if (iParam4 != 0)
				{
					Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam4));
				}
			}
		}
		iVar1++;
	}
	if (*uParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_76(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_75(0);
		}
		if (bParam6)
		{
			Function_73(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Global_3401 = 1;
			Function_71(iParam3);
		}
		Function_69(iParam3);
		if (Function_68(StackVal, 32768))
		{
			Function_65(1);
		}
		Global_16876[iParam36].f_12++;
		Function_28(408, 1, 0, 0);
	}
}

void Function_65(bool bParam0) //Position: 0x3B28 / 15144
{
	if (bParam0)
	{
		Function_67(0x10000000);
	}
	else
	{
		Function_66(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_66(int iParam0) //Position: 0x3B4C / 15180
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_67(int iParam0) //Position: 0x3B69 / 15209
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_68(var uParam0, int iParam1) //Position: 0x3B7C / 15228
{
	return (uParam0 && iParam1) == 0;
}

void Function_69(int iParam0) //Position: 0x3B89 / 15241
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_23(StackVal, 524288))
	{
		if (Global_16876[iParam06].f_16 < 0 && Global_16876[iParam06].f_16 > 2)
		{
			iVar0 = 10;
		}
		else if (Global_16876[iParam06].f_16 <= 2 && Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 16;
		}
		else if (Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 24;
		}
		if (iVar0 >= 0)
		{
			bVar1 = Function_70(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_70(int iParam0) //Position: 0x3C2D / 15405
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_71(int iParam0) //Position: 0x3C43 / 15427
{
	struct<77> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Global_30842[16])
	{
		PRINTNL();
		PRINTSTRING("SAVE_BEAT_STATE: ");
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
		PRINTNL();
		PRINTSTRING("curIDX: ");
		PRINTINT(Var0.f_76);
		PRINTNL();
	}
	Function_72(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
	if (Var0.f_76 == 2)
	{
		Var0.f_76 = 0;
	}
	else
	{
		Var0.f_76++;
	}
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_72(var uParam0, var uParam1, int iParam2) //Position: 0x3CE1 / 15585
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_73(int iParam0, bool bParam1) //Position: 0x3CF9 / 15609
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == bParam1)
		{
			iVar1 = 0;
		}
		if ((Global_25267[iVar058] != 128 || Global_25267[iVar058] != 64) && iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(Global_25267[iVar058].f_44) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(Global_25267[iVar058].f_44);
			Function_74(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_74(int iParam0) //Position: 0x3D7B / 15739
{
	iParam0->f_92 = 0;
	iParam0->f_4 = 0;
	iParam0->f_12 = 4294967295;
	iParam0->f_16 = "";
	*(iParam0 + 20) = { 0.0f, 0.0f, 0.0f };
	*(iParam0 + 32) = { 0.0f, 0.0f, 0.0f };
	iParam0->f_44 = "";
	iParam0->f_56 = "";
	iParam0->f_48 = 4294967295;
	iParam0->f_52 = "";
	iParam0->f_88 = 0.0f;
	iParam0->f_76 = 0;
	return;
}

void Function_75(int iParam0) //Position: 0x3DC9 / 15817
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_70(900)), 0);
	return;
}

void Function_76(bool bParam0) //Position: 0x3DEB / 15851
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (bParam0 + Function_70(200)), 0);
	return;
}

void Function_77(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x3E0C / 15884
{
	int iVar0;
	
	iVar0 = 0;
	if (!*uParam3)
	{
		iVar0 = 1;
	}
	if (IS_ACTOR_VALID(bParam5))
	{
		if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam5, 1.0f, iParam7, 1, 1, 0))
		{
			if (iParam6 != 0)
			{
				Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam6));
			}
			*uParam3 = 1;
		}
	}
	else if (!Function_78(StackVal, StackVal, vParam0))
	{
		if (CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, 1.0f, iParam7, 1, 1, 0))
		{
			if (iParam6 != 0)
			{
				Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam6));
			}
			*uParam3 = 1;
		}
	}
	if (*uParam3 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_76(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_75(0);
		}
		if (bParam8)
		{
			Function_73(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_71(iParam4);
			Global_3401 = 1;
		}
		Function_69(iParam4);
		if (Function_68(StackVal, 32768))
		{
			Function_65(1);
		}
		Global_16876[iParam46].f_12++;
		Function_28(408, 1, 0, 0);
	}
}

bool Function_78(vector3 vParam0) //Position: 0x3F13 / 16147
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_79() //Position: 0x3F2B / 16171
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_80(var uParam0, var uParam1, var uParam2, float fParam3, vector3 vParam4) //Position: 0x3F34 / 16180
{
	var uVar0[5];
	int iVar6;
	
	if (*uParam0 != 4294967295)
	{
		*uParam0 = CLEAR_AREA_OF_TREE_TYPE(vParam4, (fParam3 + 2.0f), "");
	}
	if (*uParam1 != 4294967295)
	{
		*uParam1 = CLEAR_AREA_OF_BREAKABLE_TREES(vParam4, (fParam3 + 2.0f));
	}
	if (*uParam2 != 4294967295)
	{
	}
}

int Function_81(bool bParam0, bool bParam1, var uParam2, float fParam3, int iParam4, vector3 vParam5) //Position: 0x3FD5 / 16341
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	
	iVar0 = 0;
	iParam4 = iParam4;
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar5 = CREATE_OBJECT_ITERATOR(bParam0);
		ITERATE_ON_OBJECT_TYPE(bVar5, 12);
		ITERATE_ON_PARTIAL_NAME(bVar5, bParam1);
		bVar4 = START_OBJECT_ITERATOR(bVar5);
		while (IS_OBJECT_VALID(bVar4))
		{
			if (IS_OBJECT_VALID(bVar4))
			{
				GET_OBJECT_POSITION(bVar4, &vVar1);
				if (VDIST(vParam5, vVar1) > fParam3)
				{
					(*uParam2)[iVar0] = bVar4;
					iVar0++;
					if (iVar0 > iParam4)
					{
						DESTROY_ITERATOR(bVar5);
						return iVar0;
					}
				}
			}
			bVar4 = OBJECT_ITERATOR_NEXT(bVar5);
		}
		DESTROY_ITERATOR(bVar5);
		return iVar0;
	}
	return iVar0;
}

void Function_82(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, bool bParam6) //Position: 0x406B / 16491
{
	bool bVar0;
	bool bVar1;
	var uVar2[6];
	bool bVar9;
	bool bVar10;
	char* cVar11[32];
	
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vParam1, 1.0f, "p_gen_footlockerfull01x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		bVar1 = GET_OBJECT_FROM_PHYSINST(bVar0);
		if (IS_OBJECT_VALID(bVar1))
		{
			ROTATE_OBJECT_UPRIGHT_TO_GROUND(bVar1, 1, 5.0f);
		}
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), "GringoDollarAmt", Function_87(uParam4, 1, 1, 0, 0));
	Function_86(GET_OBJECT_FROM_GRINGO(bParam0));
	if (bParam5 == 4294967295)
	{
		bVar9 = false;
		Function_85(Global_34573, &uVar2, &bVar9);
		if (bVar9 >= 0)
		{
			PRINTINT(bVar9);
			bVar10 = RAND_INT_RANGE(false, (bVar9 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar2[bVar10]));
			bParam5 = Function_84(Global_34573, uVar2[bVar10]);
		}
		else
		{
			LOG_ERROR("Player has no valid weapon categories");
		}
	}
	else
	{
		bParam5 = Function_84(Global_34573, bParam5);
	}
	if (bParam5 == 4294967295)
	{
		LOG_ERROR("Trying to give invalid ammo");
	}
	strcpy(&cVar11, "Ammo_", 32);
	straddi(&cVar11, GET_AMMO_ENUM(bParam5), 32);
	PRINTSTRING(&cVar11);
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), &cVar11, FLOOR((2.0f * GET_WEAPON_MAX_AMMO(bParam5))));
	if (bParam6 == 4294967295)
	{
		bParam6 = Function_83();
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), "GiveItem", bParam6);
}

int Function_83() //Position: 0x41DC / 16860
{
	bool bVar0;
	int iVar1;
	
	bVar0 = RAND_INT_RANGE(false, 6);
	if (bVar0 == 0)
	{
		iVar1 = 3;
	}
	else if (bVar0 == 1)
	{
		iVar1 = 1;
	}
	else if (bVar0 == 2)
	{
		iVar1 = 0;
	}
	else if (bVar0 == 3)
	{
		iVar1 = 2;
	}
	else if (bVar0 == 4)
	{
		iVar1 = 8;
	}
	else if (bVar0 == 5)
	{
		iVar1 = 6;
	}
	else
	{
		iVar1 = 7;
	}
	return iVar1;
}

int Function_84(bool bParam0, int iParam1) //Position: 0x4237 / 16951
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

void Function_85(bool bParam0, var uParam1, int iParam2) //Position: 0x4248 / 16968
{
	*iParam2 = 0;
	if (Function_84(bParam0, 39) != 4294967295)
	{
		(*uParam1)[*iParam2] = 39;
		*iParam2++;
	}
	if (Function_84(bParam0, 41) != 4294967295)
	{
		(*uParam1)[*iParam2] = 41;
		*iParam2++;
	}
	if (Function_84(bParam0, 40) != 4294967295)
	{
		(*uParam1)[*iParam2] = 40;
		*iParam2++;
	}
	if (Function_84(bParam0, 42) != 4294967295)
	{
		(*uParam1)[*iParam2] = 42;
		*iParam2++;
	}
	if (Function_84(bParam0, 43) != 4294967295)
	{
		(*uParam1)[*iParam2] = 43;
		*iParam2++;
	}
	if (Function_84(bParam0, 48) != 4294967295)
	{
		(*uParam1)[*iParam2] = 48;
		*iParam2++;
	}
	if (Function_84(bParam0, 44) != 4294967295)
	{
		(*uParam1)[*iParam2] = 44;
		*iParam2++;
	}
	return;
}

void Function_86(bool bParam0) //Position: 0x4316 / 17174
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", true);
	}
	return;
}

var Function_87(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x434A / 17226
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			bVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			bVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (iParam1)
	{
		case 0x00000000:
			bVar0 = (bVar0 * 0,75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1,25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0,75f);
			break;
	}
	if (bParam2)
	{
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_89(5)) / 100.0f) * 0,5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_88(17), Global_34573))
		{
			bVar0 = (bVar0 * 1,2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1,1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

var Function_88(bool bParam0) //Position: 0x444C / 17484
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return bVar0;
}

int Function_89(int iParam0) //Position: 0x453D / 17725
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

struct<32> Function_90(bool bParam0) //Position: 0x457E / 17790
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(cParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&cVar8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_91("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, bParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_6280++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_91(char* cParam0, char* cParam1, char* cParam2) //Position: 0x45E8 / 17896
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

float Function_92() //Position: 0x4607 / 17927
{
	float fVar0;
	int iVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_46(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_93(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x4638 / 17976
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_90(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4,203895E-45f, Function_129(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_127(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_94(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_14("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
			}
		}
		else if (*uParam2 >= 20)
		{
			*uParam3 = 1;
			Global_26153++;
		}
		*uParam2++;
		*uParam1 = 1000;
		*(iParam0 + 8) = { 0.0f, 0.0f, 0.0f };
		return 0;
	}
	if (iParam0->f_32)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		Global_3399 = 0;
		Function_14("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_12(iParam0->f_56, 0, 1, 0, 0))
		{
			*uParam3 = 1;
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed, shutting down event");
			return 0;
		}
		if (iParam0->f_52 >= 0.0f)
		{
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed: Volume restriction size not set");
			return 0;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_90("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4,203895E-45f, Function_129(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_127(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_94(int iParam0) //Position: 0x49CA / 18890
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	bool bVar14;
	struct<17> Var15;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar9);
	switch (iParam0->f_64)
	{
		case 0x00000005:
			if (!IS_ITERATOR_VALID(StackVal))
			{
				if (IS_LAYOUTREF_VALID(Global_30616))
				{
					iParam0->f_4 = CREATE_OBJECT_ITERATOR(Global_30616);
				}
				else
				{
					return 0;
				}
			}
			Function_126(iParam0 + 4);
			switch ((iParam0 + 64 + 24)->f_20)
			{
				case 0x00000000:
					ITERATE_IN_LAYOUT(StackVal, Global_30616);
					break;
				
				case 0x00000001:
					ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
					break;
			}
			if (StackVal < 0.0f)
			{
				vVar3 = { 0.0f, 0.0f, Function_45(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_45(1));
			}
			if (!STRINGS_ARE_EQUAL(iParam0 + 64 + 24, ""))
			{
				ITERATE_ON_PARTIAL_NAME(StackVal, iParam0 + 64 + 24);
			}
			if (!4294967295 != (iParam0 + 64 + 24)->f_12)
			{
				ITERATE_ON_OBJECT_TYPE(StackVal, (iParam0 + 64 + 24)->f_12);
			}
			if (GET_NUM_ITERATOR_MATCHES(StackVal) >= 0)
			{
				if (StackVal & 512 == 0 || iParam0->f_36 != 1)
				{
					if ((iParam0 + 64 + 24)->f_16 == 0)
					{
						bVar0 = Function_125(StackVal, StackVal, StackVal, vVar9, 0,01f);
					}
					else
					{
						bVar0 = Function_124(StackVal, StackVal, StackVal, vVar9, 0,1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_123(StackVal, StackVal, StackVal, vVar9, Function_92());
				}
				else
				{
					bVar0 = Function_122(StackVal, StackVal, StackVal, vVar9, Function_92(), "locflag", (iParam0 + 64 + 24)->f_16);
				}
				if (IS_OBJECT_VALID(bVar0))
				{
					GET_OBJECT_POSITION(bVar0, iParam0 + 8);
					GET_OBJECT_ORIENTATION(bVar0, iParam0 + 20);
					iParam0->f_48 = bVar0;
					DESTROY_ITERATOR(StackVal);
				}
				else
				{
					DESTROY_ITERATOR(StackVal);
					return 0;
				}
			}
			DESTROY_ITERATOR(StackVal);
			return 0;
			break;
		
		case 0x00000006:
			if (!IS_ITERATOR_VALID(StackVal))
			{
				iParam0->f_4 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("regions_layout"));
			}
			Function_126(iParam0 + 4);
			ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
			fVar13 = 130.0f;
			fVar12 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &vVar3);
			ITERATE_IN_SPHERE(StackVal, StackVal, vVar3);
			bVar1 = START_OBJECT_ITERATOR(StackVal);
			while (IS_OBJECT_VALID(bVar1) && !IS_OBJECT_VALID(bVar0))
			{
				if (DECOR_CHECK_EXIST(bVar1, "regid"))
				{
					bVar14 = DECOR_GET_INT(bVar1, "regid");
					if (Function_121(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_45(1))
								{
									bVar0 = bVar1;
								}
							}
						}
					}
				}
				bVar1 = OBJECT_ITERATOR_NEXT(StackVal);
			}
			if (IS_OBJECT_VALID(bVar0))
			{
				GET_OBJECT_POSITION(bVar0, iParam0 + 8);
				Function_120(iParam0 + 8, 99.0f, iParam0 + 8, 10);
				GET_OBJECT_ORIENTATION(bVar0, iParam0 + 20);
				iParam0->f_48 = DECOR_GET_INT(bVar0, "regid");
			}
			else
			{
				DESTROY_ITERATOR(StackVal);
				return 0;
			}
			break;
		
		case 0x00000002:
		case 0x00000001:
			if (StackVal && (((!Global_3386 && Global_3388) && ARE_CURVES_IN_RANGE(48, vVar9, 100.0f)) && 8) != 8)
			{
				vVar6 = { 0.0f, 0.0f, -10.0f };
				ROTATE_VECTOR_XZ(&vVar6, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Function_119(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_119(&vVar9, &vVar6) };
				if (!Function_78(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_46(&fVar13, &fVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((fVar12 - fVar13) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_116(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_112(iParam0);
			}
			if (iVar2 == 1)
			{
				if ((iParam0 + 64)->f_128 == 4)
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (GET_OBJECT_TYPE(StackVal) == 9)
						{
							if (!IS_POINT_IN_VOLUME(StackVal, *(iParam0 + 8)))
							{
								return 0;
							}
						}
					}
				}
				if ((iParam0 + 64)->f_128 == 5)
				{
				}
				if (iParam0->f_60 == 2)
				{
					if (!Function_111(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_110(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_23(StackVal, 131072))
				{
					if (StackVal || Function_109(StackVal, Function_109(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_108(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_104(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
				{
					return 0;
				}
			}
			return 0;
			break;
		
		case 0x00000003:
			if (StackVal)
			{
				fVar13 = 120.0f;
				fVar12 = 150.0f;
				vVar3 = { 0.0f, 0.0f, ((fVar13 + fVar12) * -0,5f) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				bVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_103((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				bVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_103((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) >= 0)
			{
				bVar21 = RAND_INT_RANGE(false, (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(bVar23, bVar21, &Var15);
				Function_102(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_102(&Var15) };
				iParam0->f_20 = Var15.f_12;
				(iParam0 + 20)->f_4 = Var15.f_16;
				iParam0->f_48 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar23, bVar21);
				UNK_0xDF93BD7C(bVar23);
			}
			else
			{
				UNK_0xDF93BD7C(bVar23);
				return 0;
			}
			if (iParam0->f_60 == 2)
			{
				if (!Function_111(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_110(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_111(StackVal, Function_110(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_23(StackVal, 131072))
			{
				if (StackVal || Function_109(StackVal, Function_109(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_104(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_99((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_96(StackVal, Global_29004, Global_29005, Global_29006, 1);
					if (IS_PERS_CHAR_VALID(bVar24))
					{
						if (IS_PERS_CHAR_ALIVE(bVar24))
						{
							return 0;
						}
					}
					break;
				
				case 0x00000002:
					iVar22 = 0;
					while (StackVal <= (StackVal - iVar22) + 1)
					{
						bVar24 = Function_96(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
						if (IS_PERS_CHAR_VALID(bVar24))
						{
							if (IS_PERS_CHAR_ALIVE(bVar24))
							{
								iVar25++;
							}
						}
						iVar22++;
					}
					if (iVar25 >= 0)
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
					iParam0->f_48 = StackVal;
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
	if (Function_95(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_95(vector3 vParam0) //Position: 0x51F4 / 20980
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(Global_25964))
	{
		if (IS_POINT_IN_VOLUME(vParam0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Global_25964))))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_96(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x5229 / 21033
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
	if (!bParam4)
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
								return Function_97(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_97(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_97(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_97(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_97(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_97(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_97(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_97(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_97(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_97(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_97(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_97(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_97(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_97(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_97(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_97(&Global_6704, &Global_7790, bParam3);
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
								return Function_97(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_97(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_97(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_97(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_97(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_97(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_97(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_97(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_97(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_97(&Global_7027, &Global_8268, bParam3);
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
	else if (bVar1 == Global_30640[0])
	{
		return Function_97(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_97(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_97(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_97(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_97(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_97(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_97(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_97(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_97(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_97(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_97(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_97(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_97(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_97(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_97(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_97(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_97(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_97(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_97(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_97(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_97(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_97(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_97(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_97(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_97(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_97(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_97(var uParam0, var uParam1, bool bParam2) //Position: 0x583E / 22590
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_98(uParam0[iVar02], 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
	return StackVal;
}

bool Function_98(var uParam0, int iParam1) //Position: 0x5890 / 22672
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_99(int iParam0) //Position: 0x58AC / 22700
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar1, 25);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	if (iParam0 == 0)
	{
		iVar0 = GET_NUM_ITERATOR_MATCHES(bVar1);
	}
	else
	{
		while (IS_OBJECT_VALID(bVar2))
		{
			if (Function_100(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_100(bool bParam0) //Position: 0x5907 / 22791
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_101(bParam0);
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 4294967295;
	}
	if (IS_ACTOR_RIDING_VEHICLE(bVar0))
	{
		return 2;
	}
	if (IS_ACTOR_RIDING(bVar0))
	{
		return 1;
	}
	return 4294967295;
}

var Function_101(bool bParam0) //Position: 0x593F / 22847
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar0) && IS_ACTOR_ALIVE(bVar0))
		{
			return bVar0;
		}
		bVar1++;
	}
	return "";
}

vector3 Function_102(int iParam0) //Position: 0x5985 / 22917
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

int Function_103(int iParam0, int iParam1) //Position: 0x59A4 / 22948
{
	if (iParam1 != 0)
	{
		return iParam1;
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

bool Function_104(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x59D4 / 22996
{
	var uVar0;
	int iVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	
	if (bParam3)
	{
		return 1;
	}
	bVar4 = false;
	Function_106(4294967295);
	iVar3 = 0;
	while (iVar3 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			bVar6 = DECOR_GET_INT(StackVal, "category");
			if (iParam2 != 0)
			{
				if (bVar6 != iParam2 && iParam2 != 256)
				{
					bVar4 = true;
				}
			}
			GET_VOLUME_CENTER(StackVal, &uVar0);
			if (iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(StackVal, *uParam0))
				{
					return 0;
				}
			}
			fVar5 = *fParam1;
			if (bVar4)
			{
				fVar5 = (fVar5 + 170.0f);
			}
			if (Global_3386 && bVar6 != 512)
			{
			}
			else if (Function_105(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_105(var uParam0, int iParam1) //Position: 0x5AA4 / 23204
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

int Function_106(bool bParam0) //Position: 0x5AC2 / 23234
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					GET_VOLUME_CENTER(StackVal, &vVar1);
					if (IS_BLIP_VALID(StackVal))
					{
						REMOVE_BLIP(StackVal);
					}
					if (!IS_ACTOR_VALID(Global_34573))
					{
						Function_107(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_47(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_107(iVar0);
						}
					}
					else if (Function_47(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_107(iVar0);
					}
				}
				else if (DECOR_GET_INT(StackVal, "script") == bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(bParam0);
					RELEASE_VOLUME(StackVal);
				}
			}
		}
		else
		{
			Function_107(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_107(int iParam0) //Position: 0x5C23 / 23587
{
	if (IS_VOLUME_VALID(Global_26155[iParam05].f_12))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	}
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	RELEASE_VOLUME(StackVal);
	RELEASE_VOLUME(Global_26155[iParam05].f_12);
	return;
}

bool Function_108(vector3 vParam0) //Position: 0x5C84 / 23684
{
	struct<9> Var0;
	
	iVar7 = 0;
	while (iVar7 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
			{
				if (GET_OBJECT_TYPE(StackVal) == 9)
				{
					GET_VOLUME_SCALE(StackVal, &vVar0);
					GET_VOLUME_CENTER(StackVal, &vVar3);
					bVar6 = VDIST(vParam0, vVar3);
					if ((bVar6 - ((vVar0.x + vVar0.z) / 2.0f)) > 60.0f)
					{
						return 1;
					}
				}
			}
		}
		iVar7++;
	}
	return 0;
}

int Function_109(vector3 vParam0) //Position: 0x5D25 / 23845
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
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

bool Function_110(vector3 vParam0) //Position: 0x5D71 / 23921
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
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

bool Function_111(vector3 vParam0) //Position: 0x5DCA / 24010
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal || (StackVal || (StackVal || StackVal != 3 != 4) != 5) != 6)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int Function_112(int iParam0) //Position: 0x5E3B / 24123
{
	float fVar0;
	bool bVar1;
	
	Function_46(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_115(0);
	AMBIENT_ENABLE_QUADRANT_FILTER(1);
	AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
	if ((iParam0 + 64 + 60)->f_44 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (iParam0 + 64 + 60)->f_44, (iParam0 + 64 + 60)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (iParam0 + 64 + 60)->f_44);
		}
	}
	else
	{
		Function_114(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	}
	if ((iParam0 + 64 + 60)->f_52 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (iParam0 + 64 + 60)->f_52, (iParam0 + 64 + 60)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (iParam0 + 64 + 60)->f_52);
		}
	}
	Function_113(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_30842[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_36);
		PRINTNL();
	}
	if ((iParam0 + 64 + 60)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (iParam0 + 64 + 60)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((iParam0 + 64 + 60)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((iParam0 + 64 + 60)->f_36, (iParam0 + 64 + 60)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(iParam0 + 8, 0))
	{
		return 1;
	}
	return 0;
}

void Function_113(struct<33> Param0) //Position: 0x5FD6 / 24534
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_30842[34])
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
		if (Global_30842[34])
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

void Function_114(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x6102 / 24834
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

void Function_115(bool bParam0) //Position: 0x6153 / 24915
{
	if (bParam0 < 0,1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * bParam0), bParam0);
	}
	else if (Global_3386)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

int Function_116(int iParam0, vector3 vParam1) //Position: 0x6197 / 24983
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_118();
	Function_115(0);
	Function_117(0);
	if ((iParam0 + 64 + 60)->f_44 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (iParam0 + 64 + 60)->f_44, (iParam0 + 64 + 60)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (iParam0 + 64 + 60)->f_44);
		}
	}
	else
	{
		Function_114(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	}
	if ((iParam0 + 64 + 60)->f_52 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (iParam0 + 64 + 60)->f_52, (iParam0 + 64 + 60)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (iParam0 + 64 + 60)->f_52);
		}
	}
	Function_113(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_30842[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_36);
		PRINTNL();
	}
	if ((iParam0 + 64 + 60)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (iParam0 + 64 + 60)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((iParam0 + 64 + 60)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((iParam0 + 64 + 60)->f_36, (iParam0 + 64 + 60)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(iParam0 + 8, 0))
	{
		return 1;
	}
	return 0;
}

void Function_117(bool bParam0) //Position: 0x6339 / 25401
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

void Function_118() //Position: 0x63EC / 25580
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_119(var uParam0, int iParam1) //Position: 0x63FB / 25595
{
	var uVar0;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	int iVar25;
	int iVar31;
	
	bVar10 = START_CURVE_QUERY(Global_28841, *uParam0, 6,726233E-44f, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(bVar10) < 0)
	{
		UNK_0xDF93BD7C(bVar10);
		vVar11 = { 0.0f, 0.0f, 0.0f };
		return StackVal, StackVal, vVar11;
	}
	GET_POINT_FROM_CURVE_QUERY(bVar10, false, &uVar0);
	bVar6 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar10, false);
	if (IS_OBJECT_VALID(bVar6))
	{
		vVar16 = { StackVal, StackVal, *iParam1 };
		UNK_0x19D652F9(bVar6, 50.0f, &uVar0, &iVar25);
		UNK_0x19D652F9(bVar6, -50.0f, &uVar0, &iVar31);
		Function_102(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_102(&iVar25), StackVal) };
		Function_102(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_102(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_46(&fVar7, &fVar8);
		fVar9 = ((fVar7 + fVar8) / 2.0f);
		if (fVar15 > 0.0f && fVar14 > 0.0f)
		{
			UNK_0xDF93BD7C(bVar10);
			vVar11 = { 0.0f, 0.0f, 0.0f };
			return StackVal, StackVal, vVar11;
		}
		if (fVar15 > fVar14)
		{
			UNK_0x19D652F9(bVar6, (fVar9 * -1.0f), &uVar0, &iVar31);
			Function_102(&iVar31);
			vVar11 = { StackVal, StackVal, Function_102(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_102(&iVar25);
			vVar11 = { StackVal, StackVal, Function_102(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(bVar10);
	return StackVal, StackVal, vVar11;
}

int Function_120(int iParam0, float fParam1, int iParam2, int iParam3) //Position: 0x6508 / 25864
{
	var uVar0;
	int iVar3;
	vector3 vVar4;
	
	if (iParam3 == 4294967295)
	{
		iVar3 = 4294967294;
	}
	else
	{
		iVar3 = 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar4);
		if (VDIST(*iParam0, vVar4) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(vVar4);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(*iParam0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(*iParam0, vVar4));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
	{
		if (!Function_78(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*iParam0 = (*iParam0 + 0,01f);
		iParam0->f_8 = (StackVal + 0,01f);
		if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_78(StackVal, StackVal, *iParam2))
			{
				return 1;
			}
		}
		*iParam2 = { StackVal, StackVal, *iParam0 };
		iParam2->f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar3++;
		}
		WAIT(false);
	}
	return 0;
}

bool Function_121(int iParam0) //Position: 0x663A / 26170
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_122(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x6650 / 26192
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	vector3 vVar5;
	
	fVar4 = 50.0f;
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		bVar2 = VDIST(vVar5, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (bVar2 < fParam4)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						if (Function_104(&vVar5, &fVar4, 0, 0))
						{
							bVar3 = bVar2;
							bVar1 = bVar0;
							PRINTSTRING("Assigning new closestObject ");
							PRINTNL();
						}
					}
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_123(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x66F8 / 26360
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	vector3 vVar5;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		bVar2 = VDIST(vVar5, vParam1);
		if (bVar2 < fParam4)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				if (Function_104(&vVar5, &uVar4, 0, 0))
				{
					bVar3 = bVar2;
					bVar1 = bVar0;
					PRINTSTRING("Assigning new closestObject ");
					PRINTNL();
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_124(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x6781 / 26497
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		bVar2 = VDIST(vVar4, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (bVar2 < fParam4)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						bVar3 = bVar2;
						bVar1 = bVar0;
						PRINTSTRING("Assigning new closestObject ");
						PRINTNL();
					}
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_125(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x6816 / 26646
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		bVar2 = VDIST(vVar4, vParam1);
		if (bVar2 < fParam4)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				bVar3 = bVar2;
				bVar1 = bVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

int Function_126(int iParam0) //Position: 0x6893 / 26771
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_152());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_152());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_127(bool bParam0, int iParam1) //Position: 0x68C4 / 26820
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*bParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*bParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*bParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*bParam0, &uVar1);
	Function_106(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_128(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_128(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x6A25 / 27173
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_90("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_129(bool bParam0, vector3 vParam1) //Position: 0x6AC0 / 27328
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_130(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_130(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x6AF0 / 27376
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

bool Function_131(int iParam0) //Position: 0x6B13 / 27411
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_136();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_135(iParam0[iVar03], 8);
		}
		else if (Function_134())
		{
			iVar1 = 1;
			Function_135(iParam0[iVar03], 8);
		}
		Function_135(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_4(iParam0[iVar03], 4))
		{
			if (!Function_4(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_4(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_4(iParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*iParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*iParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*iParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*iParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_135(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_4(iParam0[iVar03], 4))
		{
			if (!Function_4(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_135(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_135(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*iParam0)[iVar03], 4294967295))
						{
							Function_135(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_135(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_135(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_135(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_135(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_135(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_135(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_135(iParam0[iVar03], 2);
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
	Function_132();
	return 1;
}

void Function_132() //Position: 0x6E8E / 28302
{
	if (!Function_133(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_133(int iParam0) //Position: 0x6ECE / 28366
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_134() //Position: 0x6EEA / 28394
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == Global_63541[iVar055].f_196)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_135(var uParam0, int iParam1) //Position: 0x6F15 / 28437
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_136() //Position: 0x6F26 / 28454
{
	if (!Function_133(128))
	{
		return;
	}
	if (Global_13152.f_68 == 0)
	{
		strcpy(&Global_13152, "nStreaming", 64);
		Global_13152.f_68 = 1;
		Global_13152.f_64 = GET_CURRENT_GAME_TIME();
		Global_13152.f_72 = Global_13133.f_64;
	}
	return;
}

bool Function_137(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x6F68 / 28520
{
	if (Global_63096 && !GET_THIS_SCRIPT_ID() != Global_63116)
	{
		*uParam3 = 0;
		if (!*uParam0)
		{
			*uParam0 = 1;
			if ((*uParam1 < 2 && *uParam1 > 5) && uParam4)
			{
				*uParam2 = *uParam1;
				*uParam1 = 7;
			}
			else
			{
				*uParam1 = 6;
				return 0;
			}
			return 1;
		}
	}
	if (*uParam0)
	{
		*uParam0 = 0;
		*uParam1 = *uParam2;
		return 1;
	}
	return 0;
}

void Function_138(var uParam0, int iParam1) //Position: 0x6FD0 / 28624
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		ADD_AMBIENT_SPAWN_TYPE_RESTRICTION((*uParam0)[iVar0]);
		iVar0++;
	}
	return;
}

var Function_139(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x6FF2 / 28658
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_140(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_135(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_140(var uParam0, int iParam1, int iParam2) //Position: 0x702A / 28714
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_135(uParam0[iVar03], 4);
			return iVar0;
		}
		if (StackVal && iParam1 != (*uParam0)[iVar03] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_141(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x70EE / 28910
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_135(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_135(uParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_142(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x71BE / 29118
{
	return Function_143(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_143(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x71D2 / 29138
{
	return Function_144(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_144(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x71EB / 29163
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_150();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, fParam5, vParam6);
	if (!Function_149(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_148(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_148(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_147(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_149(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_147(bVar0))
				{
					Function_146();
				}
				Function_145(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_149(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (bParam2 == 0)
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

void Function_145(int iParam0) //Position: 0x74DE / 29918
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			(*&Global_30742 + 8)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_146() //Position: 0x7592 / 30098
{
	int iVar0;
	
	if (Global_3402)
	{
		Global_30742 = GET_THIS_SCRIPT_ID();
		Global_30742.f_4 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		(*&Global_30742 + 8)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_147(bool bParam0) //Position: 0x75CC / 30156
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_148(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x75F9 / 30201
{
	bool bVar0;
	
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
	PRINTINT(bParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(bParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(bParam0, bParam2, bParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		bVar0++;
	}
}

bool Function_149(bool bParam0) //Position: 0x774A / 30538
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_150() //Position: 0x7761 / 30561
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_146();
		}
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_146();
	return;
}

int Function_151(int iParam0, int iParam1) //Position: 0x77AC / 30636
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

var Function_152() //Position: 0x77C2 / 30658
{
	int iVar0;
	
	return iVar0;
}

void Function_153(var uParam0, float fParam1) //Position: 0x77CA / 30666
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_155(uParam0, 1);
	Function_154(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_154(var uParam0, int iParam1) //Position: 0x77EB / 30699
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_155(var uParam0, var uParam1) //Position: 0x77FE / 30718
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

