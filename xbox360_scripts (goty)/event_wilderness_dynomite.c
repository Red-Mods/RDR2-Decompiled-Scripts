//Decompiled with MagicRDR v1.0
//Function Count : 158
//Statics Count : 97
//Natives Count : 309
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
	bool bLocal_37 = false;
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
	Function_155(&iLocal_34, 0.0f);
	bVar1 = CREATE_LAYOUT(Function_154());
	if (!IS_LAYOUTREF_VALID(Global_30616))
	{
		LOG_ERROR("NOT IS_LAYOUTREF_VALID(gLayout_LocalRegion)");
		iVar0 = 5;
	}
	iVar13 = (RAND_INT_RANGE(0, 1999) / 1000);
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
				iVar51 = Function_153(43, 3);
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
				iVar51 = Function_153(43, 2);
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
				iVar51 = Function_153(43, 2);
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
		iVar20[1] = Function_144(Global_30750[0], 1, 2, 1);
		if (iVar20[0] != 4294967295 || iVar20[1] != 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			Function_143(&bVar23, iVar20[0], 3, 0);
			Function_143(&bVar23, iVar20[1], 3, 0);
			Function_141(&bVar23, "p_gen_debrisBoard12x", 0, 0);
			Function_141(&bVar23, "p_gen_woodPlank02x", 0, 0);
			Function_141(&bVar23, "dynamite_table", 1, 0);
			Function_141(&bVar23, "locked_footlocker", 1, 0);
			Function_141(&bVar23, "smoking_stand_loose", 1, 0);
			Function_141(&bVar23, "p_gen_dynamiteCrate01x", 0, 0);
			Function_141(&bVar23, "throw_dynamite01x", 0, 0);
			Function_140(&iVar20, 2);
		}
	}
	iVar53 = 0;
	iVar59 = 0;
	iVar60 = 0;
	iVar66 = 0;
	bVar67 = false;
	vVar68 = { 2.0f, 0.0f, 0.0f };
	vVar71 = { -2.0f, 0.0f, 0.0f };
	vVar74 = { 1.0f, 0.0f, 1.7f };
	vVar77 = { 3.0f, 0.0f, -1.7f };
	vVar80 = { 0.0f, 0.0f, -2.0f };
	vVar83 = { -2.7f, 0.0f, -2.7f };
	vVar86 = { -2.2f, 0.0f, -1.0f };
	vVar89 = { -2.2f, 0.0f, -2.3f };
	vVar92 = { -3.5f, 0.0f, -0.5f };
	vVar95 = { -2.2f, 0.0f, -2.0f };
	vVar98 = { -1.8f, 0.0f, -1.9f };
	vVar101 = { -3.3f, 0.0f, 3.0f };
	vVar104 = { 1.7f, 0.0f, 3.7f };
	vVar107 = { -1.7f, 0.0f, 1.2f };
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
		if (Function_139(&iVar118, &iVar0, &iVar117, &bVar64, 0))
		{
			iVar0 = 5;
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_133(&bVar23))
				{
					iVar0 = 1;
				}
				bVar64 = 600;
				break;
			
			case 0x00000001:
				if (Function_95(&ScriptParam_0, &bVar64, &iVar60, &iVar59, 1))
				{
					iVar0 = 2;
				}
				else if (iVar59 == 1)
				{
					iVar0 = 5;
				}
				break;
			
			case 0x00000002:
				if (VDIST(Global_34574, *(&ScriptParam_0 + 8)) > Function_94())
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
				bLocal_37 = CREATE_VOLUME_IN_LAYOUT(bVar1, "vExplosionTrap", 2, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 7.0f, 7.0f, 7.0f);
				bLocal_39 = CREATE_EVENT_TRAP("projectileET", 5, bVar1);
				EVENT_TRAP_ON_VOLUME(bLocal_39, bLocal_37);
				bLocal_38 = CREATE_EVENT_TRAP("explosionET", 91, bVar1);
				EVENT_TRAP_ON_VOLUME(bLocal_38, bLocal_37);
				Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_92("DynamiteGuy") };
				bVar17[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(&Var2, bVar1, StackVal) + Vector(vVar86, *(&ScriptParam_0 + 8), iVar20[0]), 0.0f, 90.0f, 0.0f);
				DECOR_SET_FLOAT(bVar17[0], "MSGringo_setMoveThreshold", 1.5f);
				SET_ACTOR_CAN_PLAY_GESTURES(bVar17[0], false);
				Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_92("DynamiteGuy") };
				bVar17[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(&Var2, bVar1, StackVal) + Vector(vVar83, *(&ScriptParam_0 + 8), iVar20[1]), 0.0f, 180.0f, 0.0f);
				DECOR_SET_FLOAT(bVar17[1], "MSGringo_setMoveThreshold", 1.5f);
				SET_ACTOR_CAN_PLAY_GESTURES(bVar17[1], false);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar17[0], 0);
				UNK_0x99AFD2D1(bVar17[0], 1, 1);
				TASK_STAND_STILL(bVar17[0], -1.0f, 0, 0);
				DECOR_SET_BOOL(bVar17[0], "nnostickup", true);
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar17[0], 0);
				GIVE_WEAPON_TO_ACTOR(bVar17[0], 39, 0, 1, 1);
				TASK_STAND_STILL(bVar17[1], -1.0f, 0, 0);
				DECOR_SET_BOOL(bVar17[1], "nnostickup", true);
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar17[1], 0);
				GIVE_WEAPON_TO_ACTOR(bVar17[1], 39, 0, 1, 1);
				bVar54 = CREATE_OBJECTSET_IN_LAYOUT("barrelgrpSet", bVar1, 8, 0);
				bVar56 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, Vector(bVar1, StackVal, StackVal) + Vector(vVar101, *(&ScriptParam_0 + 8), Function_154()), 0.0f, 0.0f, 0.0f);
				DECOR_SET_STRING(bVar56, "UseAnim", "putdown");
				ADD_OBJECT_TO_OBJECTSET(bVar56, bVar54);
				iVar53 = 1;
				bLocal_25 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_154(), bVar1, StackVal) + Vector(vVar68, *(&ScriptParam_0 + 8), "p_gen_tent01x"), 0.0f, 90.0f, 0.0f, 1);
				if (!SNAP_OBJECT_TO_GROUND(bLocal_25, 4.0f, true, 1092616192))
				{
				}
				bLocal_24 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_154(), bVar1, StackVal) + Vector(vVar71, *(&ScriptParam_0 + 8), "p_gen_table05x"), *(&ScriptParam_0 + 20), 1);
				if (!SNAP_OBJECT_TO_GROUND(bLocal_24, 10.0f, false, 1092616192))
				{
				}
				GET_OBJECT_RELATIVE_POSITION(bLocal_24, -0.1536f, 0.8085f, 0.3099f, &vVar113);
				bLocal_29 = CREATE_WEAPON_PICKUP(bVar1, 24, &vVar113, 223.1619f, 0.0f, 0, -1.0f);
				SET_DRAW_OBJECT(bLocal_29, 0);
				GET_OBJECT_RELATIVE_POSITION(bLocal_24, -0.0797f, 0.8085f, -0.2423f, &vVar113);
				bLocal_30 = CREATE_WEAPON_PICKUP(bVar1, 24, &vVar113, 345.9663f, 0.0f, 0, -1.0f);
				SET_DRAW_OBJECT(bLocal_30, 0);
				bVar57 = CREATE_GRINGO_ON_OBJECT(bLocal_24, Function_154(), "$/content/scripting/gringo/SimpleGringo/dynamite_table", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar57), "UseCase1", "DisableResetProp", 1);
				DECOR_SET_BOOL(bVar57, "NoPropRecreate", true);
				if (!SNAP_OBJECT_TO_GROUND(bVar57, 10.0f, false, 1092616192))
				{
				}
				TASK_USE_GRINGO(bVar17[0], GET_GRINGO_FROM_OBJECT(bVar57), "UseCase1", 4294967295, 1);
				SNAP_ACTOR_TO_GRINGO(bVar17[0], bVar57, "UseCase1", 1, 0, 0);
				bLocal_23 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_154(), bVar1, StackVal) + Vector(vVar104, *(&ScriptParam_0 + 8), "smoking_stand_loose"), 0.0f, 90.0f, 0.0f));
				if (iVar13 == 0)
				{
					TASK_USE_GRINGO(bVar17[1], bLocal_23, "UseCase1", 1, 1);
				}
				bLocal_27 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_154(), bVar1, StackVal) + Vector(vVar89, *(&ScriptParam_0 + 8), "p_gen_powderKeg02x"), *(&ScriptParam_0 + 20), 1);
				if (!SNAP_OBJECT_TO_GROUND(bLocal_27, 4.0f, true, 1092616192))
				{
				}
				if (!IS_WEAPONENUM_LOCKED(24))
				{
					DELETE_ALL_WEAPONS_FROM_ACTOR(bVar17[0]);
					GIVE_WEAPON_TO_ACTOR(bVar17[0], 24, 0, 1, 1);
				}
				vVar110 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar77, *(&ScriptParam_0 + 8), StackVal) };
				bLocal_26 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_154(), bVar1, StackVal) + Vector(vVar77, *(&ScriptParam_0 + 8), "p_gen_powderKeg01x"), *(&ScriptParam_0 + 20), 0);
				if (!SNAP_OBJECT_TO_GROUND(bLocal_26, 4.0f, true, 1092616192))
				{
				}
				bLocal_22 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Multistage_barrel", &vVar110, 0.5f, 0);
				DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_22), "MSGringo_Layout", bVar1);
				iVar51 = 0;
				while (iVar51 <= 2)
				{
					bVar55 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_154(), bVar1, StackVal) + Vector(vVar92, *(&ScriptParam_0 + 8), "p_gen_dynamite01x"), 0.0f, 180.0f, 0.0f, 1);
					vVar92.f_8 = (vVar92.z + 0.2f);
					vVar92.x = (vVar92.x + 0.1f);
					SNAP_OBJECT_TO_GROUND(bVar55, 4.0f, true, 1092616192);
					iVar51++;
				}
				bLocal_28 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_154(), bVar1, StackVal) + Vector(vVar80, *(&ScriptParam_0 + 8), "p_gen_bedRollClosed01x"), 0.0f, 90.0f, 0.0f, 1);
				if (!SNAP_OBJECT_TO_GROUND(bLocal_28, 4.0f, true, 1092616192))
				{
				}
				vVar119 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar74, *(&ScriptParam_0 + 8), StackVal) };
				vVar122 = { 0.0f, 0.0f, 0.0f };
				vVar125 = { 0.0f, 0.0f, 0.0f };
				FIND_GROUND_INTERSECTION(&vVar119, 2.0f, &vVar125, &vVar122);
				bLocal_21 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(bVar1, Function_154(), "$/content/scripting/gringo/SimpleGringo/locked_footlocker", vVar125, 0.0f, 130.0f, 0.0f));
				DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_21), "nboxOwnerA", bVar17[0]);
				DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_21), "nboxOwnerB", bVar17[1]);
				Function_84(StackVal, StackVal, bLocal_21, vVar125, 1, 4294967295, 4294967295);
				Function_82(StackVal, StackVal, &iVar10, &uVar11, &uVar12, 3.0f, *(&ScriptParam_0 + 8));
				iVar0 = 3;
				bVar64 = false;
				break;
			
			case 0x00000003:
				Function_81();
				Function_79(StackVal, StackVal, Function_81(), &bVar14, ScriptParam_0.f_56, bVar17[0], 100, 0x42a00000, 1);
				Function_66(&bVar17, 2, &bVar14, ScriptParam_0.f_56, 100, 0x42a00000, 1);
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
						Function_65(&vLocal_42, "DynamiteExplosion", 0, 1);
						CREATE_PROP_IN_LAYOUT(bVar1, Function_154(), "p_gen_woodPlank02x", vLocal_42, 0.0f, 0.0f, 0.0f, 0);
						CREATE_PROP_IN_LAYOUT(StackVal, StackVal, bVar1, Vector(vLocal_42, "p_gen_debrisBoard12x", Function_154()) + Vector(0.0f, 0.3f, 0.0f), 0.0f, 0.0f, 0.0f, 0);
						CREATE_PROP_IN_LAYOUT(StackVal, StackVal, bVar1, Vector(vLocal_42, "p_gen_debrisBoard12x", Function_154()) + Vector(0.0f, 0.0f, 0.3f), 0.0f, 0.0f, 0.0f, 0);
						Function_64(&bVar17, 4294967295);
						if (IS_OBJECT_VALID(bLocal_24))
						{
							GET_OBJECT_POSITION(bLocal_24, &vLocal_42);
							DESTROY_OBJECT(bLocal_24);
							CREATE_PROP_IN_LAYOUT(bVar1, Function_154(), "p_gen_debrisBoard12x", vLocal_42, 0.0f, 0.0f, 0.0f, 0);
						}
						if (IS_OBJECT_VALID(bLocal_25))
						{
							GET_OBJECT_POSITION(bLocal_25, &vLocal_42);
							DESTROY_OBJECT(bLocal_25);
							CREATE_PROP_IN_LAYOUT(StackVal, StackVal, bVar1, Vector(vLocal_42, "p_gen_debrisBoard12x", Function_154()) + Vector(0.0f, 0.0f, 1.0f), 0.0f, 0.0f, 0.0f, 0);
						}
						if (IS_OBJECT_VALID(bLocal_26))
						{
							GET_OBJECT_POSITION(bLocal_26, &vLocal_42);
							DESTROY_OBJECT(bLocal_26);
							CREATE_PROP_IN_LAYOUT(StackVal, StackVal, bVar1, Vector(vLocal_42, "p_gen_debrisBoard12x", Function_154()) + Vector(0.0f, 0.3f, 0.0f), 0.0f, 0.0f, 0.0f, 0);
							CREATE_PROP_IN_LAYOUT(StackVal, StackVal, bVar1, Vector(vLocal_42, "p_gen_woodPlank02x", Function_154()) + Vector(0.0f, 0.0f, 0.3f), 0.0f, 0.0f, 0.0f, 0);
						}
						if (IS_OBJECT_VALID(bLocal_27))
						{
							GET_OBJECT_POSITION(bLocal_27, &vLocal_42);
							DESTROY_OBJECT(bLocal_27);
							CREATE_PROP_IN_LAYOUT(StackVal, StackVal, bVar1, Vector(vLocal_42, "p_gen_debrisBoard12x", Function_154()) + Vector(0.0f, 0.0f, 0.3f), 0.0f, 0.0f, 0.0f, 0);
							CREATE_PROP_IN_LAYOUT(StackVal, StackVal, bVar1, Vector(vLocal_42, "p_gen_woodPlank02x", Function_154()) + Vector(0.0f, 0.3f, 0.0f), 0.0f, 0.0f, 0.0f, 0);
						}
						if (IS_OBJECT_VALID(bLocal_28))
						{
							GET_OBJECT_POSITION(bLocal_28, &vLocal_42);
							DESTROY_OBJECT(bLocal_28);
							CREATE_PROP_IN_LAYOUT(StackVal, StackVal, bVar1, Vector(vLocal_42, "p_gen_debrisBoard12x", Function_154()) + Vector(0.0f, 0.0f, 0.3f), 0.0f, 0.0f, 0.0f, 0);
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
				if (Function_60(&bVar17, 2, &uLocal_32, &iLocal_31, &fLocal_41, 0, iVar16, 0x40200000))
				{
					iVar16 = 1;
					switch (iLocal_31)
					{
						case 0x00000001:
							RESET_ANIM_SET_FOR_ACTOR(bVar17[0], 1);
							Function_59(bVar17[0]);
							TASK_FLEE_ACTOR(bVar17[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							AI_QUICK_EXIT_GRINGO(bVar17[1], 1);
							Function_59(bVar17[1]);
							TASK_FLEE_ACTOR(bVar17[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000002:
						case 0x00000010:
							RESET_ANIM_SET_FOR_ACTOR(bVar17[0], 1);
							Function_59(bVar17[0]);
							TASK_FLEE_ACTOR(bVar17[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							AI_QUICK_EXIT_GRINGO(bVar17[1], 1);
							Function_59(bVar17[1]);
							TASK_FLEE_ACTOR(bVar17[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000004:
							RESET_ANIM_SET_FOR_ACTOR(bVar17[0], 1);
							Function_59(bVar17[0]);
							TASK_FLEE_ACTOR(bVar17[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							AI_QUICK_EXIT_GRINGO(bVar17[1], 1);
							Function_59(bVar17[1]);
							TASK_FLEE_ACTOR(bVar17[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000008:
							AI_QUICK_EXIT_GRINGO(bVar17[1], 1);
							Function_57(&bVar17, 2);
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
				if (!Function_51(ScriptParam_0.f_56, bVar17[0], &iVar15, &iVar66, 0, 1, 1, 1))
				{
					iVar0 = 5;
					bVar64 = false;
					break;
				}
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (IS_ACTOR_ALIVE(Global_34573))
					{
						if (Function_49(StackVal, StackVal, Global_34573, *(&ScriptParam_0 + 8)) < Function_47(1))
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
							if (MEMORY_GET_IS_VISIBLE(bVar17[0], Global_34573) && Function_46(bVar17[0], Global_34573, 8.0f))
							{
								bVar67 = true;
								AI_GOAL_LOOK_AT_ACTOR_NEW(bVar17[0], Global_34573, -1.0f, 1);
								Function_44(bVar17[0], Global_34573, "GREET", 0, 5, 60, 1, 1);
							}
						}
					}
				}
				if (Function_23(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(&bVar17, &iVar52, StackVal) + Vector(vVar77, *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 8)), iVar13, bVar1))
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
				if (!Function_22() && UI_IS_MESSAGE_QUEUE_EMPTY(1))
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
	Function_20(&bVar17, 4294967295);
	Function_19(&iVar10, &uVar11, &uVar12);
	Function_18(&iVar20, 2);
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
				TASK_PRIORITY_SET(bParam0, 1);
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
		TASK_PRIORITY_SET(*iParam0, 0);
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
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_15(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_15(int iParam0) //Position: 0x18BD / 6333
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

bool Function_16() //Position: 0x18FC / 6396
{
	if (Function_17(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_17(int iParam0, int iParam1) //Position: 0x1917 / 6423
{
	return (iParam0 && iParam1) == 0;
}

void Function_18(var uParam0, int iParam1) //Position: 0x1924 / 6436
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

void Function_19(var uParam0, var uParam1, int iParam2) //Position: 0x1946 / 6470
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

void Function_20(var uParam0, int iParam1) //Position: 0x1973 / 6515
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_21(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_21(var uParam0) //Position: 0x19A0 / 6560
{
	if (IS_ACTOR_VALID(*uParam0))
	{
		SET_DRAW_ACTOR(*uParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(*uParam0);
		if (IS_ACTOR_ANIMAL(*uParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*uParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*uParam0, 0, 1);
			MEMORY_ALLOW_SHOOTING(*uParam0, 1);
		}
	}
	return;
}

bool Function_22() //Position: 0x19E2 / 6626
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

bool Function_23(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, bool bParam9) //Position: 0x1A0F / 6671
{
	switch (*uParam0)
	{
		case 0x00000000:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[0], 1.0f, 50.0f, 1, 1, 0))
			{
				Function_29(43);
				switch (iParam8)
				{
					case 0x00000000:
						Function_65(&uParam2, "CannonballExplosion", 0, 1);
						Function_65(&uParam5, "CannonballExplosion", 0, 1);
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
				TASK_USE_GRINGO((*uParam1)[1], bLocal_22, "UseCase1", 1, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*uParam1)[1], bLocal_33);
				TASK_SEQUENCE_RELEASE(bLocal_33, 1);
			}
			break;
		
		case 0x00000001:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[0], 1.0f, 30.0f, 1, 1, 0))
			{
				Function_155(&iLocal_34, 0.0f);
				Function_44((*uParam1)[0], (*uParam1)[1], "eventDynamite_msg01", "eventDynamite_msg01", 5, 60, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR((*uParam1)[0], 1);
				UNK_0x99AFD2D1((*uParam1)[0], 0, 0);
				*uParam0 = 4;
			}
			break;
		
		case 0x00000002:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[0], 1.0f, 20.0f, 1, 1, 0))
			{
				Function_155(&iLocal_34, 0.0f);
				Function_44((*uParam1)[0], (*uParam1)[1], "eventDynamite_msg02", "eventDymamite_msg02", 5, 60, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR((*uParam1)[0], 1);
				UNK_0x99AFD2D1((*uParam1)[0], 0, 0);
				*uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			if (GET_TASK_STATUS((*uParam1)[1], 19) == 0)
			{
				Function_44((*uParam1)[0], (*uParam1)[1], "eventDynamite_msg03", "eventDynamite_msg03", 5, 60, 1, 1);
				Function_28(GET_OBJECT_FROM_GRINGO(bLocal_23));
				bLocal_45 = CREATE_VOLUME_IN_LAYOUT(uParam9, Function_154(), 3, Function_28(GET_OBJECT_FROM_GRINGO(bLocal_23)), 0.0f, 0.0f, 0.0f, 3.0f, 7.0f, 3.0f);
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
				Function_155(&iLocal_34, 0.0f);
				*uParam0 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_27(&iLocal_34, 4.0f) || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_38))
			{
				Function_65(&uParam2, "CannonballExplosion", 0, 1);
				Function_65(&uParam5, "CannonballExplosion", 0, 1);
				Function_155(&iLocal_34, 0.0f);
				*uParam0 = 7;
			}
			break;
		
		case 0x00000006:
			if (IS_ACTOR_VALID((*uParam1)[0]))
			{
				if (GET_LAST_ATTACKER((*uParam1)[0]) == Global_34573)
				{
					DESTROY_OBJECT(bLocal_38);
					Function_65(&uParam2, "CannonballExplosion", 0, 1);
					Function_65(&uParam5, "CannonballExplosion", 0, 1);
					Function_155(&iLocal_34, 0.0f);
					*uParam0 = 7;
					break;
				}
			}
			if (IS_ACTOR_VALID((*uParam1)[1]))
			{
				if (GET_LAST_ATTACKER((*uParam1)[1]) == Global_34573)
				{
					DESTROY_OBJECT(bLocal_38);
					Function_65(&uParam2, "CannonballExplosion", 0, 1);
					Function_65(&uParam5, "CannonballExplosion", 0, 1);
					Function_155(&iLocal_34, 0.0f);
					*uParam0 = 7;
					break;
				}
			}
			break;
		
		case 0x00000007:
			if (Function_24(&iLocal_34) < 0.0f)
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

float Function_24(int iParam0) //Position: 0x1EA2 / 7842
{
	if (Function_26(iParam0))
	{
		if (Function_25(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_25(int iParam0) //Position: 0x1F6A / 8042
{
	return Function_17(*iParam0, 2);
}

bool Function_26(int iParam0) //Position: 0x1F77 / 8055
{
	return Function_17(*iParam0, 1);
}

int Function_27(var uParam0, float fParam1) //Position: 0x1F84 / 8068
{
	if (Function_26(uParam0))
	{
		if (Function_24(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

vector3 Function_28(bool bParam0) //Position: 0x1FA0 / 8096
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

void Function_29(int iParam0) //Position: 0x1FC7 / 8135
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_30(409, 1, 0, 0);
	}
	return;
}

int Function_30(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1FF8 / 8184
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
	Function_43(iParam0, TO_FLOAT(bParam1), 1);
	Function_42(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_31(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_31(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2218 / 8728
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
			bParam2 = (bParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_41(390))), 32);
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
					bVar19 = (Function_40(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_40(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_38(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_35(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_33(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_32(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_154(), &Var9);
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

var Function_32(int iParam0) //Position: 0x2845 / 10309
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_33(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2856 / 10326
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_34(char* cParam0, bool bParam1) //Position: 0x294B / 10571
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_35(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2964 / 10596
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_37(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_36(Function_37(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_36(int iParam0, int iParam1) //Position: 0x29C9 / 10697
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_37(int iParam0, bool bParam1) //Position: 0x29DB / 10715
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_38(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x29ED / 10733
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
	if (((Function_39(iParam0) != 19 || Function_39(iParam0) != 17) || Function_39(iParam0) != 10) || Function_39(iParam0) != 9)
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

int Function_39(int iParam0) //Position: 0x2B1D / 11037
{
	return Global_35278[iParam020].f_48;
}

float Function_40(int iParam0) //Position: 0x2B2C / 11052
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_41(int iParam0) //Position: 0x2B65 / 11109
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_42(int iParam0) //Position: 0x2BA2 / 11170
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

int Function_43(int iParam0, float fParam1, bool bParam2) //Position: 0x2D3C / 11580
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
		if ((iParam0 <= 500 && iParam0 >= 586) || iParam0 != 596)
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + 1.0f);
		}
		else
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
		}
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

void Function_44(bool bParam0, bool bParam1, bool bParam2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2F80 / 12160
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_45(bParam0, Global_34573) >= IntToFloat(iParam5))
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

float Function_45(bool bParam0, bool bParam1) //Position: 0x3010 / 12304
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

int Function_46(bool bParam0, bool bParam1, int iParam2) //Position: 0x3101 / 12545
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, iParam2))
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

float Function_47(bool bParam0) //Position: 0x3212 / 12818
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_48(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_48(float fParam0, int iParam1) //Position: 0x324D / 12877
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

float Function_49(bool bParam0, vector3 vParam1) //Position: 0x32D6 / 13014
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_50(bParam0);
		vVar0 = { StackVal, StackVal, Function_50(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_50(bool bParam0) //Position: 0x3350 / 13136
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

bool Function_51(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x33BA / 13242
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_45(Global_34573, bParam1) > 15.0f)
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
		if (Function_54() && !*uParam2)
		{
			return 0;
		}
		if (Function_53(iParam0) && !*uParam2)
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
		if (!Function_52(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_52(int iParam0, int iParam1) //Position: 0x34E8 / 13544
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

int Function_53(int iParam0) //Position: 0x3509 / 13577
{
	float fVar0;
	
	if (StackVal & 64 == 64)
	{
		fVar0 = GET_LAST_HIT_TIME(Global_34573);
		if (fVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(Global_34573)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_54() //Position: 0x3547 / 13639
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
						if (Function_55(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_55(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_55(bool bParam0, bool bParam1) //Position: 0x3602 / 13826
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_50(bParam0);
			vVar0 = { StackVal, StackVal, Function_50(bParam0) };
			Function_56(bParam1);
			vVar3 = { StackVal, StackVal, Function_56(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_56(bool bParam0) //Position: 0x36A2 / 13986
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

void Function_57(var uParam0, int iParam1) //Position: 0x370E / 14094
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_ACTOR_VALID((*uParam0)[iVar0]))
		{
			MAKE_ACTOR_READY_FOR_ACTION((*uParam0)[iVar0], 1);
			Function_58((*uParam0)[iVar0], &Global_34573);
		}
		iVar0++;
	}
	return;
}

int Function_58(bool bParam0, int iParam1) //Position: 0x374B / 14155
{
	if (IS_ACTOR_HUMAN(bParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(bParam0) == 0)
		{
			TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bParam0, 0);
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
	MEMORY_REPORT_POSITION_AUTO(bParam0, *iParam1, 1);
	TASK_KILL_CHAR(bParam0, *iParam1);
	TASK_PRIORITY_SET(bParam0, 1);
	return 1;
}

void Function_59(bool bParam0) //Position: 0x3830 / 14384
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "nnostickup"))
		{
			DECOR_REMOVE(bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
		TASK_PRIORITY_SET(bParam0, 2);
	}
	return;
}

bool Function_60(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x387C / 14460
{
	int iVar0;
	
	uParam7 = uParam7;
	if (!bParam6)
	{
		iVar0 = 0;
		while (iVar0 <= iParam1)
		{
			if (Function_61((*uParam0)[iVar0], uParam3, uParam4, uParam5, bParam6, 0x40400000))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool Function_61(bool bParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x38C4 / 14532
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
		fVar0 = Function_45(bParam0, Global_34573);
		if (!Function_17(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_62(bParam0);
				return 1;
			}
		}
		if (!Function_17(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_62(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_62(bParam0);
				return 1;
			}
		}
		if (!Function_17(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_62(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_62(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_17(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_62(bParam0);
				return 1;
			}
		}
		if (!Function_17(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_62(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_62(bool bParam0) //Position: 0x3A5B / 14939
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_63(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_63(bool bParam0) //Position: 0x3A8F / 14991
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_64(var uParam0, int iParam1) //Position: 0x3AA6 / 15014
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_59((*uParam0)[iVar0]);
		iVar0++;
	}
	return;
}

void Function_65(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0x3AD3 / 15059
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(uParam0, uParam1, bParam2, &vVar0, iParam3);
}

void Function_66(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x3AEF / 15087
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
			Function_78(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_77(0);
		}
		if (bParam6)
		{
			Function_75(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Global_3401 = 1;
			Function_73(iParam3);
		}
		Function_71(iParam3);
		if (Function_70(StackVal, 32768))
		{
			Function_67(1);
		}
		Global_16876[iParam36].f_12++;
		Function_30(408, 1, 0, 0);
	}
}

void Function_67(bool bParam0) //Position: 0x3BDC / 15324
{
	if (bParam0)
	{
		Function_69(0x10000000);
	}
	else
	{
		Function_68(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_68(int iParam0) //Position: 0x3C00 / 15360
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_69(int iParam0) //Position: 0x3C1D / 15389
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_70(var uParam0, int iParam1) //Position: 0x3C30 / 15408
{
	return (uParam0 && iParam1) == 0;
}

void Function_71(int iParam0) //Position: 0x3C3D / 15421
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_17(StackVal, 524288))
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
			bVar1 = Function_72(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_72(int iParam0) //Position: 0x3CE1 / 15585
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_73(int iParam0) //Position: 0x3CF7 / 15607
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
	Function_74(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_74(var uParam0, var uParam1, int iParam2) //Position: 0x3D95 / 15765
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_75(int iParam0, int iParam1) //Position: 0x3DAD / 15789
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == iParam1)
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
			Function_76(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_76(int iParam0) //Position: 0x3E2F / 15919
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

void Function_77(int iParam0) //Position: 0x3E7D / 15997
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_72(900)), 0);
	return;
}

void Function_78(bool bParam0) //Position: 0x3E9F / 16031
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (bParam0 + Function_72(200)), 0);
	return;
}

void Function_79(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x3EC0 / 16064
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
	else if (!Function_80(StackVal, StackVal, vParam0))
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
			Function_78(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_77(0);
		}
		if (bParam8)
		{
			Function_75(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_73(iParam4);
			Global_3401 = 1;
		}
		Function_71(iParam4);
		if (Function_70(StackVal, 32768))
		{
			Function_67(1);
		}
		Global_16876[iParam46].f_12++;
		Function_30(408, 1, 0, 0);
	}
}

bool Function_80(vector3 vParam0) //Position: 0x3FC7 / 16327
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_81() //Position: 0x3FDF / 16351
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_82(var uParam0, var uParam1, var uParam2, float fParam3, vector3 vParam4) //Position: 0x3FE8 / 16360
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
		*uParam2 = CLEAR_AREA_OF_GRASS(vParam4, fParam3);
	}
	if (IS_LAYOUTREF_VALID(Global_30616))
	{
		if (Function_83(StackVal, StackVal, Global_30616, "player_herb", &uVar0, 20.0f, 5, vParam4) >= 0)
		{
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				if (IS_OBJECT_VALID(uVar0[iVar6]))
				{
					DESTROY_OBJECT(uVar0[iVar6]);
				}
				iVar6++;
			}
		}
	}
}

int Function_83(bool bParam0, bool bParam1, var uParam2, float fParam3, int iParam4, vector3 vParam5) //Position: 0x408A / 16522
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

void Function_84(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, bool bParam6) //Position: 0x411E / 16670
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
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), "GringoDollarAmt", Function_89(uParam4, 1, 1, 0, 0));
	Function_88(GET_OBJECT_FROM_GRINGO(bParam0));
	if (bParam5 == 4294967295)
	{
		bVar9 = false;
		Function_87(Global_34573, &uVar2, &bVar9);
		if (bVar9 >= 0)
		{
			PRINTINT(bVar9);
			bVar10 = RAND_INT_RANGE(0, (bVar9 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar2[bVar10]));
			bParam5 = Function_86(Global_34573, uVar2[bVar10]);
		}
		else
		{
			LOG_ERROR("Player has no valid weapon categories");
		}
	}
	else
	{
		bParam5 = Function_86(Global_34573, bParam5);
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
		bParam6 = Function_85();
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(bParam0), "GiveItem", bParam6);
}

int Function_85() //Position: 0x428F / 17039
{
	bool bVar0;
	int iVar1;
	
	bVar0 = RAND_INT_RANGE(0, 6);
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

int Function_86(bool bParam0, int iParam1) //Position: 0x42EA / 17130
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

void Function_87(bool bParam0, var uParam1, int iParam2) //Position: 0x42FB / 17147
{
	*iParam2 = 0;
	if (Function_86(bParam0, 39) != 4294967295)
	{
		(*uParam1)[*iParam2] = 39;
		*iParam2++;
	}
	if (Function_86(bParam0, 41) != 4294967295)
	{
		(*uParam1)[*iParam2] = 41;
		*iParam2++;
	}
	if (Function_86(bParam0, 40) != 4294967295)
	{
		(*uParam1)[*iParam2] = 40;
		*iParam2++;
	}
	if (Function_86(bParam0, 42) != 4294967295)
	{
		(*uParam1)[*iParam2] = 42;
		*iParam2++;
	}
	if (Function_86(bParam0, 43) != 4294967295)
	{
		(*uParam1)[*iParam2] = 43;
		*iParam2++;
	}
	if (Function_86(bParam0, 48) != 4294967295)
	{
		(*uParam1)[*iParam2] = 48;
		*iParam2++;
	}
	if (Function_86(bParam0, 44) != 4294967295)
	{
		(*uParam1)[*iParam2] = 44;
		*iParam2++;
	}
	return;
}

void Function_88(bool bParam0) //Position: 0x43C9 / 17353
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

var Function_89(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x43FD / 17405
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
			bVar0 = (bVar0 * 0.75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1.25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0.75f);
			break;
	}
	if (bParam2)
	{
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_91(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_90(17), Global_34573))
		{
			bVar0 = (bVar0 * 1.2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1.1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

var Function_90(bool bParam0) //Position: 0x44FF / 17663
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

int Function_91(int iParam0) //Position: 0x45F0 / 17904
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

struct<32> Function_92(bool bParam0) //Position: 0x4631 / 17969
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_93("0", &cVar8, ""), 4);
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

struct<32> Function_93(char* cParam0, char* cParam1, char* cParam2) //Position: 0x469B / 18075
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

float Function_94() //Position: 0x46BA / 18106
{
	float fVar0;
	int iVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_48(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_95(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x46EB / 18155
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_92(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_131(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_129(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_96(iParam0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_92("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_131(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_129(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_96(int iParam0) //Position: 0x4A7D / 19069
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
			Function_128(iParam0 + 4);
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
				vVar3 = { 0.0f, 0.0f, Function_47(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_47(1));
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
						bVar0 = Function_127(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_126(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_125(StackVal, StackVal, StackVal, vVar9, Function_94());
				}
				else
				{
					bVar0 = Function_124(StackVal, StackVal, StackVal, vVar9, Function_94(), "locflag", (iParam0 + 64 + 24)->f_16);
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
			Function_128(iParam0 + 4);
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
					if (Function_123(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_47(1))
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
				Function_122(iParam0 + 8, 99.0f, iParam0 + 8, 10);
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
				Function_121(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_121(&vVar9, &vVar6) };
				if (!Function_80(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_48(&fVar13, &fVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((fVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_118(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_114(iParam0);
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
					if (!Function_113(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_112(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_17(StackVal, 131072))
				{
					if (StackVal || Function_111(StackVal, Function_111(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_110(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_106(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
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
				vVar3 = { 0.0f, 0.0f, ((fVar13 + fVar12) * -0.5f) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				bVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_105((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				bVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_105((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) >= 0)
			{
				bVar21 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(bVar23, bVar21, &Var15);
				Function_104(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_104(&Var15) };
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
				if (!Function_113(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_112(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_113(StackVal, Function_112(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_17(StackVal, 131072))
			{
				if (StackVal || Function_111(StackVal, Function_111(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_106(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_101((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_98(StackVal, Global_29004, Global_29005, Global_29006, 1);
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
						bVar24 = Function_98(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
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
	if (Function_97(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_97(vector3 vParam0) //Position: 0x52A7 / 21159
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

bool Function_98(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x52DC / 21212
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
								return Function_99(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_99(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_99(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_99(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_99(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_99(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_99(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_99(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_99(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_99(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_99(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_99(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_99(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_99(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_99(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_99(&Global_6704, &Global_7790, bParam3);
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
								return Function_99(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_99(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_99(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_99(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_99(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_99(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_99(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_99(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_99(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_99(&Global_7027, &Global_8268, bParam3);
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
		return Function_99(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_99(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_99(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_99(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_99(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_99(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_99(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_99(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_99(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_99(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_99(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_99(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_99(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_99(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_99(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_99(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_99(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_99(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_99(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_99(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_99(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_99(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_99(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_99(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_99(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_99(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_99(var uParam0, var uParam1, bool bParam2) //Position: 0x58F1 / 22769
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_100(uParam0[iVar02], 2))
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

bool Function_100(var uParam0, int iParam1) //Position: 0x5943 / 22851
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_101(int iParam0) //Position: 0x595F / 22879
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
			if (Function_102(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_102(bool bParam0) //Position: 0x59BA / 22970
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_103(bParam0);
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

var Function_103(bool bParam0) //Position: 0x59F2 / 23026
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

vector3 Function_104(int iParam0) //Position: 0x5A38 / 23096
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

int Function_105(int iParam0, int iParam1) //Position: 0x5A57 / 23127
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

bool Function_106(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x5A87 / 23175
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
	Function_108(4294967295);
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
			else if (Function_107(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_107(var uParam0, int iParam1) //Position: 0x5B57 / 23383
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

int Function_108(bool bParam0) //Position: 0x5B75 / 23413
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
						Function_109(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_49(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_109(iVar0);
						}
					}
					else if (Function_49(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_109(iVar0);
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
			Function_109(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_109(int iParam0) //Position: 0x5CD6 / 23766
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

bool Function_110(vector3 vParam0) //Position: 0x5D37 / 23863
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

int Function_111(vector3 vParam0) //Position: 0x5DD8 / 24024
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

bool Function_112(vector3 vParam0) //Position: 0x5E24 / 24100
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

bool Function_113(vector3 vParam0) //Position: 0x5E7D / 24189
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
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

int Function_114(int iParam0) //Position: 0x5EFA / 24314
{
	float fVar0;
	bool bVar1;
	
	Function_48(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_117(0);
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
		Function_116(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_115(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_115(struct<33> Param0) //Position: 0x6095 / 24725
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
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1.43493E-42f, 1);
}

void Function_116(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x61C1 / 25025
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

void Function_117(bool bParam0) //Position: 0x6212 / 25106
{
	if (bParam0 < 0.1f)
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

int Function_118(int iParam0, vector3 vParam1) //Position: 0x6256 / 25174
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_120();
	Function_117(0);
	Function_119(0);
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
		Function_116(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_115(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_119(bool bParam0) //Position: 0x63F8 / 25592
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

void Function_120() //Position: 0x64AB / 25771
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_121(var uParam0, int iParam1) //Position: 0x64BA / 25786
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
	
	bVar10 = START_CURVE_QUERY(Global_28841, *uParam0, 48, 0.0f, 7.0f, 5.0f, 0);
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
		Function_104(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_104(&iVar25), StackVal) };
		Function_104(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_104(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_48(&fVar7, &fVar8);
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
			Function_104(&iVar31);
			vVar11 = { StackVal, StackVal, Function_104(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_104(&iVar25);
			vVar11 = { StackVal, StackVal, Function_104(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(bVar10);
	return StackVal, StackVal, vVar11;
}

int Function_122(int iParam0, float fParam1, int iParam2, int iParam3) //Position: 0x65C7 / 26055
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
		if (!Function_80(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*iParam0 = (*iParam0 + 0.01f);
		iParam0->f_8 = (StackVal + 0.01f);
		if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_80(StackVal, StackVal, *iParam2))
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

bool Function_123(int iParam0) //Position: 0x66F9 / 26361
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_124(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x670F / 26383
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
						if (Function_106(&vVar5, &fVar4, 0, 0))
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

var Function_125(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x67B7 / 26551
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
				if (Function_106(&vVar5, &uVar4, 0, 0))
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

var Function_126(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x6840 / 26688
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

var Function_127(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x68D5 / 26837
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

int Function_128(int iParam0) //Position: 0x6952 / 26962
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_154());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_154());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_129(bool bParam0, int iParam1) //Position: 0x6983 / 27011
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
	Function_108(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_130(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_130(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x6AE4 / 27364
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_92("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_131(bool bParam0, vector3 vParam1) //Position: 0x6B7F / 27519
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_132(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_132(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x6BAF / 27567
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

bool Function_133(int iParam0) //Position: 0x6BD2 / 27602
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_138();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_137(iParam0[iVar03], 8);
		}
		else if (Function_136())
		{
			iVar1 = 1;
			Function_137(iParam0[iVar03], 8);
		}
		Function_137(iParam0[iVar03], 16);
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
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_4(iParam0[03], 8) || iVar1));
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
				Function_137(iParam0[iVar03], 1);
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
							Function_137(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_137(iParam0[iVar03], 2);
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
							Function_137(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_137(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_137(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_137(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_137(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_137(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_137(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_137(iParam0[iVar03], 2);
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
	Function_134();
	return 1;
}

void Function_134() //Position: 0x6F4D / 28493
{
	if (!Function_135(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_135(int iParam0) //Position: 0x6F8D / 28557
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_136() //Position: 0x6FA9 / 28585
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

void Function_137(var uParam0, int iParam1) //Position: 0x6FD4 / 28628
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_138() //Position: 0x6FE5 / 28645
{
	if (!Function_135(128))
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

bool Function_139(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x7027 / 28711
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

void Function_140(var uParam0, int iParam1) //Position: 0x708F / 28815
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

var Function_141(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x70B1 / 28849
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_142(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_137(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_142(var uParam0, int iParam1, int iParam2) //Position: 0x70E9 / 28905
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_137(uParam0[iVar03], 4);
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

var Function_143(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x71AD / 29101
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
			Function_137(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_137(uParam0[iVar03], 8);
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

int Function_144(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x727D / 29309
{
	return Function_145(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_145(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x7291 / 29329
{
	return Function_146(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_146(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x72AA / 29354
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
		Function_152();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_151(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_150(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_150(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_149(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_151(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_149(bVar0))
				{
					Function_148();
				}
				Function_147(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_151(bVar1))
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

void Function_147(int iParam0) //Position: 0x759D / 30109
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

void Function_148() //Position: 0x7651 / 30289
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

bool Function_149(bool bParam0) //Position: 0x768B / 30347
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

void Function_150(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x76B8 / 30392
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

bool Function_151(bool bParam0) //Position: 0x7809 / 30729
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_152() //Position: 0x7820 / 30752
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_148();
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
	Function_148();
	return;
}

int Function_153(int iParam0, int iParam1) //Position: 0x786B / 30827
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

var Function_154() //Position: 0x7881 / 30849
{
	int iVar0;
	
	return iVar0;
}

void Function_155(var uParam0, float fParam1) //Position: 0x7889 / 30857
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_157(uParam0, 1);
	Function_156(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_156(var uParam0, int iParam1) //Position: 0x78AA / 30890
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_157(var uParam0, var uParam1) //Position: 0x78BD / 30909
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

