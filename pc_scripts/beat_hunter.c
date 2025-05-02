//Decompiled with MagicRDR v1.0
//Function Count : 212
//Statics Count : 241
//Natives Count : 437
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
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	struct<2> Local_45 = { 0, 0 } ;
	var uLocal_47 = 0;
	struct<2> Local_48 = { 0, 0 } ;
	var uLocal_50 = 0;
	struct<2> Local_51 = { 0, 0 } ;
	var uLocal_53 = 0;
	struct<2> Local_54 = { 0, 0 } ;
	var uLocal_56 = 0;
	struct<2> Local_57 = { 0, 0 } ;
	var uLocal_59 = 0;
	struct<2> Local_60 = { 0, 0 } ;
	var uLocal_62 = 0;
	struct<2> Local_63 = { 0, 0 } ;
	var uLocal_65 = 0;
	struct<2> Local_66 = { 0, 0 } ;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = false;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	bool bLocal_81 = false;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = false;
	bool bLocal_88 = false;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = false;
	var uLocal_92 = 0;
	bool bLocal_93 = false;
	var uLocal_94 = 0;
	bool bLocal_95 = false;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	var uLocal_116 = 0;
	char* cLocal_117[32] = "";
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	char* cLocal_133[32] = "";
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	struct<2> Local_149 = { 0, 0 } ;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	int iLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	int iLocal_170 = 0;
	var uLocal_171 = 0;
	bool bLocal_172 = false;
	var uLocal_173 = 0;
	float fLocal_174 = 0.0f;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	struct<5> Var2;
	var uVar8;
	int iVar9[1];
	var uVar11[6];
	bool bVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar25;
	struct<2> Var26;
	struct<2> Var28;
	float fVar30;
	var uVar31;
	var uVar32;
	var uVar33;
	var uVar34;
	bool bVar35;
	var uVar36;
	float fVar37;
	var uVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	var uVar42;
	var uVar43;
	var uVar44;
	var uVar45;
	int iVar82;
	struct<2> Var83;
	bool bVar85;
	var uVar86[6];
	int iVar93;
	var uVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	bool bVar98;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_28 = 1;
	iLocal_29 = 0;
	iLocal_44 = 0;
	Local_45 = Vector(-1.0f, 0.0f, 1.0f);
	Local_48 = Vector(0,8f, 0.0f, -1,12f);
	Local_51 = Vector(-4,9f, 0.0f, 1,86f);
	Local_54 = Vector(-7.0f, 0.0f, 4.0f);
	Local_57 = Vector(-3,36f, 0.0f, 1,68f);
	Local_60 = Vector(-6,04f, 0.0f, 3,78f);
	Local_63 = Vector(-1,84f, 0.0f, 2,5f);
	iLocal_79 = 13;
	iLocal_80 = 0;
	bLocal_81 = false;
	iLocal_82 = 0;
	iLocal_83 = 0;
	iLocal_84 = 0;
	iLocal_85 = 0;
	iLocal_86 = 0;
	bLocal_87 = false;
	bLocal_88 = false;
	iLocal_89 = 0;
	iLocal_90 = 0;
	iLocal_157 = 0;
	uLocal_162 = "one_handed_wave";
	uLocal_164 = "one_handed_wave/one_handed_wave_mobile/wave";
	bLocal_172 = false;
	fLocal_174 = 0.0f;
	bVar0 = false;
	iVar1 = 0;
	uVar8 = CREATE_LAYOUT(Function_211());
	bVar18 = false;
	Var26 = Vector(-3,64f, 0.0f, -2,82f);
	Var28 = Vector(0.0f, 190.0f, 0.0f);
	fVar30 = 0.0f;
	fVar37 = 0.0f;
	iVar39 = (RAND_INT_RANGE(0, 2999) / 1000);
	iVar40 = 0;
	iVar41 = 0;
	if (iVar39 == 0)
	{
		uVar38 = "sit_ground_campfire_tend";
	}
	else if (iVar39 == 1)
	{
		uVar38 = "sit_ground_drink";
	}
	else if (iVar39 == 2)
	{
		uVar38 = "sit_ground_smoke";
	}
	else
	{
		uVar38 = "sit_ground_play_harmonica";
	}
	if (Global_26652[634].f_20 < 1)
	{
		iLocal_106 = 1;
	}
	else if ((Global_26652[634].f_20 != 2 || Global_26652[634].f_20 != 3) && !IS_WEAPONENUM_LOCKED(34))
	{
		iLocal_106 = 0;
	}
	else if (Global_26652[634].f_20 <= 4 && !IS_WEAPONENUM_LOCKED(34))
	{
		iLocal_106 = Function_210(ScriptParam_0.f_64, 2);
	}
	else
	{
		iLocal_106 = 1;
	}
	Function_209(&iLocal_90, 16);
	uVar45 = 18;
	Var83 = Vector(2.0f, 0.0f, 4.0f);
	iVar93 = 0;
	uVar94 = Function_208(1, 2, 1, 0, 0);
	if (Global_6625 == 1)
	{
		iVar1 = 5;
	}
	else if (Function_207(0))
	{
		iVar1 = 5;
	}
	else if (!Function_197(&uVar11))
	{
		iVar1 = 5;
	}
	else
	{
		Function_195(&uVar45, "excited_return", 5, 0);
		Function_195(&uVar45, "custom/excited_return", 8, 0);
		Function_195(&uVar45, "thanks", 5, 0);
		Function_195(&uVar45, "custom/thanks", 8, 0);
		Function_195(&uVar45, &uVar38, 1, 0);
		Function_195(&uVar45, "smoking_stand", 1, 0);
		iVar82 = 0;
		while (iVar82 <= 6)
		{
			Function_194(&uVar45, uVar11[iVar82], 3, 0);
			iVar82++;
		}
		Function_195(&uVar45, "one_handed_wave", 5, 0);
		Function_195(&uVar45, "custom/one_handed_wave", 8, 0);
		Function_195(&uVar45, "Herbalist_talking", 5, 0);
		Function_195(&uVar45, "custom/Herbalist_talking", 8, 0);
		Function_195(&uVar45, "$/tune/refGroups/campsiteSets/cam_doctorsCamp01x", 7, 0);
		switch (Global_43787)
		{
			case 0x00000002:
			case 0x00000000:
				iVar9[0] = 107;
				break;
			
			case 0x00000001:
				iVar9[0] = 266;
				break;
		}
		Function_194(&uVar45, iVar9[0], 3, 0);
		Function_193(iVar9[0]);
	}
	Function_192();
	iVar97 = 0;
	bVar98 = false;
	while (!IS_EXITFLAG_SET())
	{
		Function_191(StackVal, *(&ScriptParam_0 + 16));
		iVar95 = 600;
		if (Function_190(&bVar98, &iVar1, &iVar97, &iVar95, bVar0))
		{
			if (bVar98)
			{
				Function_189(&bVar85);
			}
			else
			{
				Function_188(&bVar85);
			}
		}
		switch (iVar1)
		{
			case 0x00000000:
				if (Function_182(&uVar45))
				{
					iVar1 = 1;
					iVar95 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_140(&ScriptParam_0, &iVar95, &iLocal_86, &iLocal_83, 1))
				{
					if (VDIST(Global_54078, *(&ScriptParam_0 + 16)) > Function_139())
					{
						iVar1 = 5;
						iVar95 = 0;
						break;
					}
					uLocal_97 = CREATE_OBJECTSET_IN_LAYOUT("GringoObjs", &uVar8, 12, 1);
					Local_66 = *(&ScriptParam_0 + 16);
					uLocal_38 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_211(), &uVar8, StackVal) + Vector(Local_45, *(&ScriptParam_0 + 16), &uVar38), Vector(0.0f, 70.0f, 0.0f));
					GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uLocal_38), 0);
					SNAP_OBJECT_TO_GROUND(&uLocal_38, 2.0f, 1, 1092616192);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					bVar18 = true;
					uLocal_111 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uVar8, Function_211(), 0f, *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), Vector(40.0f, 10.0f, 40.0f));
					CLEAR_AMBIENT_OBJECTS_VOLUME(&uLocal_111, 15);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_111);
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_111);
					uLocal_113 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uVar8, Function_211(), 0f, *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), Vector(IntToFloat(iLocal_79), 10.0f, IntToFloat(iLocal_79)));
					uVar34 = GET_LAYOUT_FROM_OBJECT(Function_138(StackVal, StackVal, &uVar8, Function_211(), "$/tune/refGroups/campsiteSets/cam_doctorsCamp01x", *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), 4294967295));
					uVar31 = CREATE_OBJECT_ITERATOR(&uVar8);
					ITERATE_IN_LAYOUT(&uVar31, &uVar34);
					ITERATE_ON_PARTIAL_MODEL_NAME(&uVar31, "p_gen_fire01x");
					uVar32 = START_OBJECT_ITERATOR(&uVar31);
					DESTROY_ITERATOR(&uVar31);
					if (IS_OBJECT_VALID(&uVar32))
					{
						uVar33 = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, Function_211(), "amb_campfire_light", &uVar32, Vector(0.0f, 0.0f, 0.0f), 1, &uVar32);
						UNK_0x6745191B(StackVal, &uVar33, Vector(0.0f, 0.0f, 0.0f));
					}
					iVar1 = 2;
					iVar95 = 0;
				}
				else if (iLocal_83 == 1)
				{
					iVar1 = 5;
					iVar95 = 0;
				}
				break;
			
			case 0x00000002:
				iVar1 = 4;
				iVar95 = 0;
				break;
			
			case 0x00000004:
				uLocal_42 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("gatlingGun01x2", &uVar8, StackVal) + Vector(Local_51, *(&ScriptParam_0 + 16), "$/fragments/p_gen_gatlinggun01x"), Vector(0.0f, 111.0f, 0.0f), 1);
				uLocal_72 = Vector(StackVal, StackVal, StackVal) + Vector(Local_60, *(&ScriptParam_0 + 16), StackVal);
				SNAP_OBJECT_TO_GROUND(&uLocal_42, 3.0f, 1, 1092616192);
				DECOR_SET_FLOAT(&uLocal_42, "fRestrictRotation", 359.0f);
				bVar85 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_211(), &uVar8, StackVal) + Vector(Local_57, *(&ScriptParam_0 + 16), iVar9[0]), Vector(0.0f, 0.0f, 0.0f));
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bVar85, 2.0f);
				Function_137(&bVar85);
				SET_ACTOR_VISION_XRAY(&bVar85, 1);
				AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(&bVar85, 1);
				GIVE_WEAPON_TO_ACTOR(&bVar85, 39, 0f, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bVar85, 1);
				DECOR_SET_INT(&bVar85, "iSpecificItem", 6);
				iVar82 = 0;
				while (iVar82 <= 6)
				{
					uVar86[iVar82] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_211(), &uVar8, StackVal) + Vector(Local_54, *(&ScriptParam_0 + 16), uVar11[iVar82]), Vector(0.0f, 205.0f, 0.0f));
					if (!Function_136(&(uVar86[iVar82])))
					{
						Function_129(&(uVar86[iVar82]), 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
					}
					DECOR_SET_BOOL(&(uVar86[iVar82]), "reduceZombieLoot", 1);
					iVar96 = TASK_SEQUENCE_OPEN();
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&(uVar86[iVar82]), 0,3f);
					TASK_FLEE_ACTOR(0, &bVar85, 15.0f, -1.0f, 0, 0, 0);
					TASK_WANDER(0, -1.0f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&(uVar86[iVar82]), iVar96);
					TASK_SEQUENCE_RELEASE(iVar96, 1);
					TASK_PRIORITY_SET(&(uVar86[iVar82]), false);
					Local_54 = (Local_54 - 0,6f);
					iVar82++;
				}
				Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Var26, *(&ScriptParam_0 + 16), StackVal);
				Var2.f_4 = (StackVal + 2.0f);
				Var6 = Vector(0.0f, 0.0f, 0.0f);
				FIND_GROUND_INTERSECTION(&Var2, 4.0f, &Var6, &uVar4);
				uLocal_69 = Vector(StackVal, StackVal, StackVal) + Vector(Local_54, *(&ScriptParam_0 + 16), StackVal);
				MEMORY_ALLOW_SHOOTING(&bVar85, 0);
				TASK_USE_TURRET_AGAINST_OBJECT(&bVar85, &(uVar86[0]), 0, -1.0f);
				uVar25 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_211(), &uVar8, StackVal) + Vector(Vector(0,8f, 0.0f, -1,12f), *(&ScriptParam_0 + 16), "smoking_stand"), Vector(0.0f, 106,2f, 0.0f)));
				uLocal_34 = CREATE_GRINGO_IN_LAYOUT(&uVar8, Function_211(), "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", Var6, Var28);
				SNAP_OBJECT_TO_GROUND(&uLocal_34, 7.0f, 1, 1092616192);
				uLocal_32 = GET_GRINGO_FROM_OBJECT(&uLocal_34);
				if (GET_ITEM_COUNT("ITEM_TREASURE_MAP", &Global_54076) == 0)
				{
					Function_127(StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var26, *(&ScriptParam_0 + 16), &uLocal_32), 4294967295, 11, 0x3f800000);
				}
				else
				{
					Function_127(StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var26, *(&ScriptParam_0 + 16), &uLocal_32), 4294967295, 4294967295, 0x3f800000);
				}
				DECOR_SET_OBJECT(GET_OBJECT_FROM_GRINGO(&uLocal_32), "nboxOwnerA", &bVar85);
				SET_ACTOR_CAN_BE_HARDLOCKED(&bVar85, 0);
				DECOR_SET_BOOL(&bVar85, "nnostickup", 1);
				PRINTVECTOR(*(&ScriptParam_0 + 16));
				PRINTNL();
				PRINTVECTOR(Global_54078);
				PRINTNL();
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bVar85, 0);
				UNK_0x99AFD2D1(&bVar85, 1, 1);
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&bVar85, 0);
				Function_125(StackVal, &uVar42, &uVar43, &uVar44, 6.0f, *(&ScriptParam_0 + 16));
				iVar1 = 3;
				iVar95 = 0;
				break;
			
			case 0x00000003:
				Function_124();
				Function_110(StackVal, Function_124(), &bVar0, ScriptParam_0.f_64, &bVar85, 60, 0x42700000, 1);
				if (GET_DEBUG_DRAW_STATE())
				{
				}
				if (iLocal_29)
				{
					fVar30 = 45.0f;
				}
				if (VDIST(Global_54078, *(&ScriptParam_0 + 16)) < (Function_108(1) + fVar30))
				{
					if (iLocal_82 && !iLocal_80)
					{
						Function_107("Hunter_help08", 0x40f00000, 1, 2, 0, 0, 0, 0);
						uVar23 = Vector(StackVal, StackVal, StackVal) + Vector(Var83, *(&ScriptParam_0 + 16), StackVal);
						Function_105(&uLocal_153, 0.0f);
						iLocal_80 = 1;
					}
					if ((iLocal_80 && Function_101(&uLocal_153, 15.0f)) || !iLocal_82)
					{
						Function_99("eventHunter_help08", iLocal_82, 1);
						iVar1 = 5;
						break;
					}
				}
				if (Function_96(&bVar85, &iLocal_104, &fVar37, iLocal_90, 0, 0x40400000) || DECOR_CHECK_EXIST(&bVar85, "actorStolen"))
				{
					switch (iLocal_104)
					{
						case 0x00000001:
							Function_99("failAggroDanger", iLocal_82, 1);
							TASK_FLEE_ACTOR(&bVar85, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000002:
							Function_99("failAggroShot", iLocal_82, 1);
							TASK_FLEE_ACTOR(&bVar85, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000004:
							Function_99("failAggroHostile", iLocal_82, 1);
							Function_95(&bVar85, &Global_54076);
							break;
						
						case 0x00000008:
							Function_99("failAggroAttacked", iLocal_82, 1);
							Function_95(&bVar85, &Global_54076);
							break;
					}
					Function_94(&bVar85);
					bLocal_87 = true;
					iVar1 = 5;
					iVar95 = 0;
					break;
				}
				if (!IS_ACTOR_ALIVE(&bVar85))
				{
					Function_99("eventHunter_help08", iLocal_82, 1);
					iVar1 = 5;
					break;
				}
				uVar36 = GET_LAST_ATTACK_TARGET(&Global_54076);
				if (DECOR_CHECK_EXIST(&uVar36, "ndelivered"))
				{
					Function_99("Hunter_AttackedDeliveredZombie", iLocal_82, 1);
					Function_95(&bVar85, &Global_54076);
					Function_94(&bVar85);
					bLocal_87 = true;
					iVar1 = 5;
					iVar95 = 0;
				}
				if (Function_31(StackVal, StackVal, StackVal, StackVal, Vector(&bVar85, &iVar93, StackVal) + Vector(Var83, *(&ScriptParam_0 + 16), &uVar8), &iVar95, &uVar86, &bVar35, &uVar22, &uVar19, &uVar20, &uVar21, &iVar40, &iVar41, ScriptParam_0.f_64, &uVar25))
				{
					iVar1 = 5;
				}
				break;
			
			case 0x00000005:
				iVar1 = 6;
				iVar95 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar95 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar95);
		}
	}
	Function_188(&bVar85);
	if (bLocal_172)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (IS_OBJECT_VALID(&uVar33))
	{
		UNK_0xE18028C1(&uVar33);
		DESTROY_OBJECT(&uVar33);
	}
	if (IS_ACTOR_VALID(&bVar85))
	{
		AI_QUICK_EXIT_GRINGO(&bVar85, 0);
		Function_29(&bVar85);
	}
	if (IS_ACTOR_VALID(&bVar35))
	{
		Function_29(&bVar35);
	}
	if (IS_BLIP_VALID(&uLocal_160))
	{
		REMOVE_BLIP(&uLocal_160);
	}
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (!bVar0)
	{
		Function_28(&bVar85);
		if (IS_OBJECT_VALID(&uVar8))
		{
			UNK_0xA936E73B(&uVar8, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uVar8, 1);
		}
		if (!bLocal_81)
		{
			Function_22(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
		}
	}
	else
	{
		if (Function_20(&bVar85, 0))
		{
			if (!bLocal_87)
			{
				Function_11(&bVar85, GET_GRINGO_FROM_OBJECT(&uLocal_38), "UseCase1", 4294967295, 1, 2);
				Function_8(&bVar85, 1);
				TASK_PRIORITY_SET(&bVar85, 2);
			}
		}
		AI_GOAL_LOOK_CLEAR(&bVar85);
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bVar85, 1);
		UNK_0x99AFD2D1(&bVar85, 0, 0);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_107))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iLocal_107);
	}
	if (IS_VOLUME_VALID(&uLocal_109))
	{
		DESTROY_VOLUME(&uLocal_109);
	}
	if (bLocal_88)
	{
		UI_EXIT("Challenges_1");
		UI_EXIT("ChallengePanel");
		UI_POP("Jobs_Games_And_Stuff");
	}
	Function_7();
	Function_6(iVar9[0]);
	Function_5(&uVar42, &uVar43, &uVar44);
	if (iLocal_82 && !Global_6618)
	{
		Global_6618 = 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "fakeBait"))
	{
		DECOR_REMOVE(&Global_54076, "fakeBait");
	}
	if (bVar18)
	{
		SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_111);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_111);
	}
	Function_1(&uVar45);
	RELEASE_LAYOUT_REF(&uVar8);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xE29 / 3625
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0xE51 / 3665
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

void Function_3(struct<13> Param0) //Position: 0xF9C / 3996
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0xFB9 / 4025
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(var uParam0, var uParam1, int iParam2) //Position: 0xFD7 / 4055
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

void Function_6(int iParam0) //Position: 0x100A / 4106
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

void Function_7() //Position: 0x1015 / 4117
{
	if (IS_OBJECTSET_VALID(&uLocal_97))
	{
		iLocal_99 = 0;
		while (iLocal_99 <= GET_OBJECTSET_SIZE(&uLocal_97))
		{
			iLocal_40 = GET_INDEXED_OBJECT_IN_OBJECTSET(iLocal_99, &uLocal_97);
			if (IS_OBJECT_VALID(&iLocal_40))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_40)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iLocal_40));
				}
			}
			iLocal_99++;
		}
	}
	return;
}

int Function_8(bool bParam0, int iParam1) //Position: 0x1064 / 4196
{
	char* cVar0[64];
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		strcpy(&cVar0, "ACTORROAM_SET_OPTIONS_FOR_ACTOR: invalid actor ", 64);
		stradd(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&bParam0)), 64);
		return 0;
	}
	if (!Function_10(&bParam0))
	{
		strcpy(&cVar0, "ACTORROAM_SET_OPTIONS_FOR_ACTOR: invalid actor ", 64);
		stradd(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&bParam0)), 64);
		return 0;
	}
	Function_9(&bParam0, iParam1);
	return 1;
}

void Function_9(var uParam0, bool bParam1) //Position: 0x1111 / 4369
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_options", bParam1);
	return;
}

bool Function_10(bool bParam0) //Position: 0x1137 / 4407
{
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&bParam0), &Global_26172))
	{
		return 1;
	}
	return 0;
}

int Function_11(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x115F / 4447
{
	if (!IS_GRINGO_VALID(&bParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(&iParam2) != 0 || STRINGS_ARE_EQUAL(&iParam2, ""))
	{
		return 0;
	}
	if (&iParam3 <= 0)
	{
		iParam3 = 4294967295;
	}
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (!IS_ACTOR_VEHICLE(&uParam0))
		{
			SQUAD_LEAVE(&uParam0);
		}
		GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_GRINGO(&bParam1), &Global_10998);
		if (!(GET_TASK_STATUS(&uParam0, 19) != 1 || GET_TASK_STATUS(&uParam0, 19) != 3))
		{
			TASK_USE_GRINGO(&uParam0, &bParam1, &iParam2, &iParam3, 1);
			TASK_PRIORITY_SET(&uParam0, &iParam5);
		}
		Function_12(&uParam0, 5, GET_OBJECT_FROM_GRINGO(&bParam1), &iParam4, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_12(var uParam0, int iParam1, bool bParam2, var uParam3, int iParam4) //Position: 0x120C / 4620
{
	char* cVar0[32];
	
	Function_19();
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(&uParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(&uParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_18(&uParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&uParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_10998))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&uParam0), 32);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "(NAMELESS)", 32);
		}
		PRINTSTRING("Could not add ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
		LOG_ERROR("Could not add actor to actorroam. Report the offending script");
	}
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	if (&iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 32, 0);
	}
	Function_17(&uParam0, 0);
	Function_16(&uParam0, iParam1);
	Function_15(&uParam0, &bParam2);
	Function_14(&uParam0, uParam3);
	if (Function_13(&uParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&uParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&uParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(&uParam0, 0);
	}
	return 1;
}

int Function_13(int iParam0) //Position: 0x1478 / 5240
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_14(var uParam0, bool bParam1) //Position: 0x149C / 5276
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0x14C0 / 5312
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_16(var uParam0, bool bParam1) //Position: 0x14E6 / 5350
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_17(var uParam0, bool bParam1) //Position: 0x150D / 5389
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_18(bool bParam0) //Position: 0x1531 / 5425
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_19() //Position: 0x1550 / 5456
{
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		Global_10998 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(&Global_26172))
	{
		Global_26172 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", &Global_10998, 4294967295, 1);
	}
	return;
}

bool Function_20(bool bParam0, bool bParam1) //Position: 0x159F / 5535
{
	if (&bParam1)
	{
		if (IS_ACTOR_HOGTIED(&bParam0))
		{
			if (!(GET_TASK_STATUS(&bParam0, 25) != 1 || GET_TASK_STATUS(&bParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(&bParam0, 0);
				TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&bParam0, true);
			}
			Function_29(&bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 163840))
		{
			Function_29(&bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (Function_21(&bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(&bParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_21(int iParam0, int iParam1) //Position: 0x164A / 5706
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

bool Function_22(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x169C / 5788
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
		Function_24("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_23(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_23(&bVar0);
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
			Function_23(&bVar0);
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

void Function_23(bool bParam0) //Position: 0x1908 / 6408
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

void Function_24(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1952 / 6482
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_25(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

struct<16> Function_25(int iParam0) //Position: 0x19D7 / 6615
{
	char* cVar0[16];
	
	if (!Function_26())
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

bool Function_26() //Position: 0x1A16 / 6678
{
	if (Function_27(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_27(int iParam0, int iParam1) //Position: 0x1A31 / 6705
{
	return (iParam0 && iParam1) == 0;
}

void Function_28(int iParam0) //Position: 0x1A3E / 6718
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iParam0, 0);
		TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&iParam0, false);
	}
	return;
}

int Function_29(bool bParam0) //Position: 0x1A6E / 6766
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_30(&bParam0);
		return 1;
	}
	return 0;
}

void Function_30(float fParam0) //Position: 0x1A86 / 6790
{
	float fVar0;
	
	if (IS_ACTOR_VALID(&fParam0))
	{
		fVar0 = GET_BLIP_ON_ACTOR(&fParam0);
		while (IS_BLIP_VALID(&fVar0))
		{
			REMOVE_BLIP(&fVar0);
			fVar0 = GET_BLIP_ON_ACTOR(&fParam0);
		}
	}
	return;
}

bool Function_31(var uParam0, bool bParam1, var uParam2, struct<2> Param3, var uParam5, var[] uParam6, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15) //Position: 0x1AB9 / 6841
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Param3 = Param3;
	switch (uParam0)
	{
		case 0x00000000:
			if (Function_93(&bParam1, &Global_54076) > 130.0f)
			{
				bLocal_81 = true;
				MEMORY_ALLOW_SHOOTING(&bParam1, 1);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&(uParam6[iVar0]), 2.0f);
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					iVar1 = TASK_SEQUENCE_OPEN();
					TASK_FLEE_ACTOR(0, &bParam1, 12.0f, -1.0f, 0, 0, 0);
					TASK_GO_TO_COORD(0, &uLocal_72, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&(uParam6[iVar0]), iVar1);
					TASK_SEQUENCE_RELEASE(iVar1, 1);
					iVar0++;
				}
				Function_105(&Local_149, 0.0f);
				uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_93(&bParam1, &Global_54076) > 65.0f && !IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bParam1)))
			{
				if (!bLocal_172)
				{
					Function_92();
				}
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bParam1)))
				{
					ADD_BLIP_FOR_ACTOR(&bParam1, 325, 0, 2, 0);
					SET_BLIP_BLINK(GET_BLIP_ON_ACTOR(&bParam1), 1, 0, 5f);
				}
			}
			if ((Function_89(&bParam1, &uParam6, &uLocal_78, 0x41000000) || (Function_101(&Local_149, 60.0f) && Function_93(&bParam1, &Global_54076) > 60.0f)) || Function_88(&uParam6, 1) != 0)
			{
				if (!bLocal_172)
				{
					Function_92();
				}
				uParam0 = 2;
				break;
			}
			if (!iLocal_85)
			{
				if ((Function_101(&Local_149, 30.0f) && Function_93(&bParam1, &Global_54076) > 60.0f) || Function_93(&bParam1, &Global_54076) > 50.0f)
				{
					iVar0 = 0;
					while (iVar0 <= 6)
					{
						if (IS_ACTOR_VALID(&(uParam6[iVar0])))
						{
							SET_ACTOR_ONE_SHOT_DEATH(&(uParam6[iVar0]), 1);
						}
						iVar0++;
					}
					iLocal_85 = 1;
				}
			}
			if (Function_88(&uParam6, 1) != 2 && iLocal_84 != 0)
			{
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					if (IS_ACTOR_VALID(&(uParam6[iVar0])))
					{
						TASK_GO_TO_COORD(&(uParam6[iVar0]), &uLocal_72, 2);
						SET_ACTOR_ONE_SHOT_DEATH(&(uParam6[iVar0]), 1);
					}
					iVar0++;
				}
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bParam1, 100.0f);
				iLocal_84 = 1;
			}
			break;
		
		case 0x00000002:
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				if (IS_ACTOR_VALID(&(uParam6[iVar0])))
				{
					KILL_ACTOR(&(uParam6[iVar0]));
				}
				iVar0++;
			}
			if (Global_26652[634].f_20 == 0)
			{
				bLocal_91 = "Hunter_msg01";
			}
			else
			{
				bLocal_91 = "Hunter_msg09";
			}
			if (Function_87())
			{
				bLocal_93 = "Hunter_msg02";
			}
			else
			{
				bLocal_93 = "Hunter_msg03";
			}
			switch (iLocal_106)
			{
				case 0x00000000:
					bLocal_95 = "Hunter_msg05";
					break;
				
				case 0x00000001:
					iVar0 = Function_86(3);
					if (iVar0 == 0)
					{
						bLocal_95 = "Hunter_msg04";
					}
					else if (iVar0 == 1)
					{
						bLocal_95 = "Hunter_msg06";
					}
					else
					{
						bLocal_95 = "Hunter_msg07";
					}
					break;
			}
			AI_GOAL_LOOK_AT_ACTOR_NEW(&bParam1, &Global_54076, -1.0f, 1);
			Function_105(&Local_149, 0.0f);
			uParam0 = 3;
			break;
		
		case 0x00000003:
			Local_66 = Vector(StackVal, StackVal, StackVal) + Vector(Local_63, Local_66, StackVal);
			RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
			iVar2 = TASK_SEQUENCE_OPEN();
			TASK_GO_NEAR_COORD(0, &Local_66, 0,8f, 1);
			TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bParam1, iVar2);
			TASK_SEQUENCE_RELEASE(iVar2, 1);
			TASK_PRIORITY_SET(&bParam1, true);
			uParam0 = 4;
			break;
		
		case 0x00000004:
			if (GET_NTH_TASK_STATUS(&bParam1, 0) == 0)
			{
				if (Function_93(&bParam1, &Global_54076) > 18.0f)
				{
					uLocal_162 = "";
					uLocal_164 = "";
				}
				uLocal_166 = "Herbalist_talking";
				uLocal_168 = "Herbalist_talking";
				Function_105(&Local_149, 0.0f);
				uParam0 = 5;
			}
			break;
		
		case 0x00000005:
			if (Global_26652[634].f_20 == 0)
			{
				if (Function_85(&iLocal_157, &bParam1, &Local_149, &uLocal_158, &uLocal_162, &uLocal_164, &bLocal_91, &bLocal_91, &bLocal_93, &bLocal_93, &bLocal_95, &bLocal_95, 5.0f, -1.0f, 50.0f, 25.0f, &uLocal_166, &uLocal_168))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bParam1)))
					{
						ADD_BLIP_FOR_ACTOR(&bParam1, 325, 0, 2, 0);
					}
					AI_QUICK_EXIT_GRINGO(&bParam1, 0);
					Function_105(&Local_149, 0.0f);
					TASK_FACE_ACTOR(&bParam1, &Global_54076, 1, 3212836864);
					uParam0 = 6;
				}
			}
			else if (Function_85(&iLocal_157, &bParam1, &Local_149, &uLocal_158, &uLocal_162, &uLocal_164, &bLocal_91, &bLocal_91, &bLocal_93, &bLocal_93, "", "", 5.0f, -1.0f, 50.0f, 25.0f, &uLocal_166, &uLocal_168))
			{
				AI_QUICK_EXIT_GRINGO(&bParam1, 0);
				Function_105(&Local_149, 0.0f);
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bParam1)))
				{
					ADD_BLIP_FOR_ACTOR(&bParam1, 325, 0, 2, 0);
				}
				SET_BLIP_BLINK(GET_BLIP_ON_ACTOR(&bParam1), 1, 0, 5f);
				TASK_FACE_ACTOR(&bParam1, &Global_54076, 1, 3212836864);
				uParam0 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_101(&Local_149, 0.0f) && !IS_AMBIENT_SPEECH_PLAYING(&bParam1))
			{
				switch (iLocal_106)
				{
					case 0x00000000:
						Function_84(&bParam1, &Global_54076, &bLocal_95, &bLocal_95, 5, 60, 1, 1);
						uParam0 = 7;
						break;
					
					case 0x00000001:
						if (Global_26652[634].f_20 != 0)
						{
							Function_84(&bParam1, &Global_54076, &bLocal_95, &bLocal_95, 5, 60, 1, 1);
						}
						uParam0 = 7;
						break;
					}
			}
			break;
		
		case 0x00000007:
			if (Function_101(&Local_149, 5.0f) && !IS_AMBIENT_SPEECH_PLAYING(&bParam1))
			{
				Function_83("Hunter_help01", 0x41200000, 1, 0, 2, 1, 0);
				Function_105(&Local_149, 0.0f);
				uLocal_109 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uParam2, Function_211(), 0f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 4.0f, 12.0f));
				iLocal_107 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Hunter_AmmoPrompt", &uLocal_109, 25, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
				ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&uLocal_109), &bParam1, Function_211(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				uParam0 = 8;
			}
			break;
		
		case 0x00000008:
			if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&iLocal_107))
			{
				iLocal_29 = 1;
				SET_POP_DENSITY_MULTIPLIER(1.0f);
				AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_LIGHT", 0, 4294967295, 4294967295);
				RELEASE_SCRIPT_USE_CONTEXT(&iLocal_107);
				DESTROY_VOLUME(&uLocal_109);
				HUD_CLEAR_HELP();
				Function_84(&Global_54076, &bParam1, "HunterPlayer_msg01", "HunterPlayer_msg01", 5, 60, 1, 1);
				iLocal_82 = 1;
				Global_6618 = 0;
				MEMORY_CONSIDER_AS(&bParam1, &Global_54076, 5);
				HUD_CLEAR_HELP();
				_ADD_AMMO_OF_TYPE(&Global_54076, 8, 10.0f, 0, 1);
				Function_105(&Local_149, 0.0f);
				Function_82(&bParam1, &Global_54076, 5, 1);
				TASK_FACE_ACTOR(&bParam1, &Global_54076, 1, -1.0f);
				TASK_PRIORITY_SET(&bParam1, true);
				Function_105(&Local_149, 0.0f);
				switch (iLocal_106)
				{
					case 0x00000000:
						if (Global_26652[634].f_20 == 2)
						{
							bLocal_77 = 60;
						}
						else if (Global_26652[634].f_20 > 3)
						{
							bLocal_77 = 80;
						}
						stradd(&cLocal_133, I2STR(bLocal_77), 32);
						UI_SET_STRING("Hunter_dynstr", &cLocal_133);
						Function_107("Hunter_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
						bLocal_88 = true;
						UI_ENTER("ChallengePanel");
						UI_ENTER("Challenges_1");
						UI_EXIT("Challenges_2");
						iLocal_76 = Function_81();
						UI_SET_STRING("Hunter_PartsCollected", I2STR(Function_81()));
						UI_SET_STRING("Hunter_PartsGoal", I2STR(bLocal_77));
						UI_SET_TEXT("Challenges_1", "Hunter_scoreA");
						UI_REFRESH("Challenges_1");
						uParam0 = 12;
						break;
					
					case 0x00000001:
						if (Global_26652[634].f_20 == 0)
						{
							uParam13 = 0;
						}
						else
						{
							uParam13 = 1;
						}
						Function_107("Hunter_help04", 0x40f00000, 1, 2, 0, 0, 0, 0);
						Function_105(&Local_149, 0.0f);
						uLocal_102 = CREATE_EVENT_TRAP("HogtieTrap", 50, &uLocal_113);
						EVENT_TRAP_ON_PERPETRATOR(&uLocal_102, &Global_54076);
						EVENT_TRAP_STORE_EVENTS(&uLocal_102, 1);
						uParam0 = 13;
						break;
					}
			}
			break;
		
		case 0x0000000C:
			if (Function_81() != iLocal_76)
			{
				UI_SET_STRING("Hunter_PartsCollected", I2STR(Function_81()));
				UI_SET_STRING("Hunter_PartsGoal", I2STR(bLocal_77));
				UI_REFRESH("Challenges_1");
				iLocal_76 = Function_81();
			}
			if (Function_81() > bLocal_77)
			{
				HUD_CLEAR_OBJECTIVE_QUEUE();
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				Function_107("Hunter_obj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
				uParam0 = 14;
			}
			break;
		
		case 0x0000000E:
			stradd(&cLocal_117, I2STR(bLocal_77), 32);
			UI_SET_STRING("beat_dynstr2", &cLocal_117);
			uLocal_109 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uParam2, Function_211(), 0f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 4.0f, 10.0f));
			iLocal_107 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Hunter_HandOver", &uLocal_109, 25, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
			ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&uLocal_109), &bParam1, Function_211(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			uParam0 = 15;
			break;
		
		case 0x0000000F:
			if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&iLocal_107))
			{
				Function_84(&Global_54076, &bParam1, "HunterPlayer_msg02", "HunterPlayer_msg02", 5, 60, 1, 1);
				bLocal_88 = false;
				UI_EXIT("Challenges_1");
				UI_EXIT("ChallengePanel");
				UI_POP("Jobs_Games_And_Stuff");
				RELEASE_SCRIPT_USE_CONTEXT(&iLocal_107);
				DESTROY_VOLUME(&uLocal_109);
				Function_73(40);
				uParam0 = 22;
			}
			break;
		
		case 0x00000010:
			break;
		
		case 0x0000000D:
			if (Function_72())
			{
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_LIGHT", 0, 4294967295, 4294967295);
				if (GET_ATTACHED_HOGTIE_VICTIM(&Global_54076) != &iParam7)
				{
					if (Function_136(GET_ATTACHED_HOGTIE_VICTIM(&Global_54076)))
					{
						Function_29(&iParam7);
						iParam7 = GET_ATTACHED_HOGTIE_VICTIM(&Global_54076);
						GIVE_OBJECT_TO_LAYOUT(&iParam7, &uParam2);
						Function_105(&Local_149, 0.0f);
						SET_BLIP_BLINK(GET_BLIP_ON_ACTOR(&bParam1), 1, 0, 5f);
						Function_29(&iParam7);
						uParam0 = 19;
					}
				}
				else if (GET_ATTACHED_HOGTIE_VICTIM(&Global_54076) == &iParam7)
				{
					Function_105(&Local_149, 0.0f);
					SET_BLIP_BLINK(GET_BLIP_ON_ACTOR(&bParam1), 1, 0, 5f);
					Function_29(&iParam7);
					uParam0 = 19;
				}
			}
			else if (EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_102))
			{
				iParam7 = Function_71(&uParam2, &uLocal_102);
				if (Function_136(&iParam7))
				{
					EVENT_TRAP_CLEAR_EVENTS(&uLocal_102);
					EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_102);
					CLEAR_LAST_ATTACK(&Global_54076);
					iLocal_89 = 1;
					Function_29(&iParam7);
					uParam0 = 19;
					break;
				}
				else
				{
					EVENT_TRAP_CLEAR_EVENTS(&uLocal_102);
					EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_102);
					iParam7 = "";
				}
			}
			if ((Function_69(&Local_149, 1.0f) && !IS_ACTOR_VALID(&iParam7)) && !HUD_IS_SHOWING_OBJECTIVE())
			{
				if (uParam12 > uParam13)
				{
					Function_107("Hunter_help06", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				else
				{
					Function_107("Hunter_help04", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
			}
			if (((!Function_72() && !HUD_IS_SHOWING_OBJECTIVE()) && uParam10 != 0) && IS_ACTOR_VALID(&iParam7))
			{
				Function_107("Hunter_help05", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_29(&iParam7);
				ADD_BLIP_FOR_ACTOR(&iParam7, 322, 0, 2, 0);
				uParam10 = 1;
			}
			if (IS_ACTOR_VALID(&iParam7))
			{
				if (!IS_ACTOR_IN_HOGTIE(&iParam7) && IS_ACTOR_ALIVE(&iParam7))
				{
					Function_29(&iParam7);
					iParam7 = "";
				}
			}
			if (!IS_AMBIENT_SPEECH_PLAYING(&bParam1) && IS_ACTION_NODE_PLAYING_PARTIAL(&bParam1, "Herbalist_talking"))
			{
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
			}
			break;
		
		case 0x00000013:
			if (Function_93(&iParam7, &bParam1) > 30.0f)
			{
				if ((Function_72() || IS_ACTOR_HOGTIE_ATTACHED(&iParam7) != 1) && uParam9 != 0)
				{
					Function_107("Hunter_help02", 0x40f00000, 1, 2, 0, 0, 0, 0);
					uParam9 = 1;
				}
				else if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bParam1, "excited_return"))
				{
					SET_ANIM_SET_FOR_ACTOR(&bParam1, "excited_return", 1);
					SET_ACTION_NODE_FOR_ACTOR(&bParam1, "excited_return");
					uParam8 = 1;
				}
			}
			if (Function_93(&iParam7, &bParam1) > IntToFloat(iLocal_79))
			{
				if (!Function_72() && IS_ACTOR_HOGTIE_ATTACHED(&iParam7) == 1)
				{
					Function_68(&bParam1, uParam8);
					if (IS_ACTOR_VALID(&iParam7))
					{
						DECOR_SET_BOOL(&iParam7, "ndelivered", 1);
						Function_29(&iParam7);
						MEMORY_CLEAR_EVENTS(&iParam7, 0);
						MEMORY_CLEAR_ALL(&iParam7);
						CLEAR_LAST_HIT(&iParam7);
						Function_82(&bParam1, &iParam7, 1, 1);
						TASK_MELEE_ATTACK(&iParam7, &bParam1, -1.0f);
						TASK_PRIORITY_SET(&iParam7, true);
						Function_82(&bParam1, &iParam7, 5, 0);
						GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(DECOR_GET_OBJECT(&iParam7, "HogtiedGringoAttached")), false);
					}
					uParam0 = 20;
					break;
				}
			}
			if (IS_ACTOR_HOGTIE_ATTACHED(&iParam7) != 0 && Function_93(&iParam7, &bParam1) < 10.0f)
			{
				uParam9 = 0;
				uParam10 = 0;
				uParam11 = 0;
				Function_29(&iParam7);
				Function_105(&Local_149, 0.0f);
				Function_68(&bParam1, uParam8);
				AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_LIGHT", 0, 4294967295, 4294967295);
				uParam0 = 13;
			}
			if (Function_66(StackVal, &iParam7, Local_149))
			{
				uParam9 = 0;
				uParam10 = 0;
				uParam11 = 0;
				Function_68(&bParam1, uParam8);
				Function_105(&Local_149, 0.0f);
				AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_LIGHT", 0, 4294967295, 4294967295);
				uParam0 = 13;
			}
			if ((((Function_72() && !HUD_IS_SHOWING_OBJECTIVE()) && IS_ACTOR_VALID(&iParam7)) && uParam11 != 0) && Function_93(&iParam7, &bParam1) < 30.0f)
			{
				if (Function_69(&Local_149, 7.0f))
				{
					Function_107("Hunter_help03", 0x40f00000, 1, 2, 0, 0, 0, 0);
					Function_29(&iParam7);
					uParam11 = 1;
				}
			}
			break;
		
		case 0x00000014:
			if (uParam12 == uParam13)
			{
				HUD_CLEAR_HELP();
				Function_29(&bParam1);
				Function_84(&Global_54076, &bParam1, "HunterPlayer_msg02", "HunterPlayer_msg02", 5, 60, 1, 1);
				uParam0 = 22;
			}
			else
			{
				REFERENCE_ACTOR(&iParam7);
				if (IS_ACTOR_VALID(&iParam7))
				{
					if (!Function_65(&iParam7, &uParam2))
					{
						GIVE_OBJECT_TO_LAYOUT(&iParam7, &uParam2);
					}
				}
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
				uParam12++;
				Function_105(&Local_149, 0.0f);
				uParam0 = 21;
				break;
			}
			break;
		
		case 0x00000015:
			if (iLocal_89 == 1)
			{
				if (Function_69(&Local_149, 2.0f))
				{
					iLocal_89 = 0;
				}
			}
			else
			{
				iParam7 = "";
				uParam9 = 0;
				uParam10 = 0;
				uParam11 = 0;
				SET_ANIM_SET_FOR_ACTOR(&bParam1, "Herbalist_talking", 0);
				SET_ACTION_NODE_FOR_ACTOR(&bParam1, "Herbalist_talking");
				Function_84(&bParam1, &Global_54076, "Hunter_msg10", "Hunter_msg10", 5, 60, 1, 1);
				Function_105(&Local_149, 0.0f);
				uParam0 = 13;
			}
			break;
		
		case 0x00000016:
			if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
			{
				Function_63(&uLocal_173, 3, 0, 4294967295, 4294967295);
				if (IS_BLIP_VALID(&uLocal_158))
				{
					REMOVE_BLIP(&uLocal_158);
				}
				TASK_MELEE_ATTACK(&iParam7, &bParam1, -1.0f);
				TASK_PRIORITY_SET(&iParam7, true);
				Function_62(iParam14, 0);
				uParam0 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_61(&bParam1, &Global_54076, &uLocal_31, &iLocal_44, &Local_149, &uParam2, 25.0f, &iLocal_30, &uLocal_36, &uParam5, "thanks", "thanks", "Hunter_msg08", "Hunter_msg08", 30.0f, 2, -5.0f, 0, 4.0f, 0, "", 0, 0, 0, 0x40800000))
			{
				if (iLocal_30 == 1)
				{
					Function_45(63);
					iLocal_29 = 0;
					DECOR_REMOVE(GET_OBJECT_FROM_GRINGO(&uLocal_32), "nboxOwnerA");
					if (Global_26652[634].f_20 == 1)
					{
						Function_39(iParam14, 4294967295, 1.0f);
					}
					else if (Global_26652[634].f_20 == 2)
					{
						Function_39(iParam14, 4294967295, 2.0f);
					}
					else if (Global_26652[634].f_20 == 3)
					{
						Function_39(iParam14, 4294967295, 1.0f);
					}
					else if (Global_26652[634].f_20 <= 4 && bLocal_77 != 80)
					{
						Function_39(iParam14, 4294967295, 2.0f);
						Function_36(2, 0, 1);
					}
					else
					{
						Function_39(iParam14, 4294967295, 2.0f);
					}
					RESET_ANIM_SET_FOR_ACTOR(&bParam1, 1);
					if (Global_26652[634].f_20 > 5)
					{
						Function_36(2, 0, 1);
					}
					Function_29(&bParam1);
					AI_GOAL_LOOK_CLEAR(&bParam1);
					if (Function_33(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Local_48, Local_66, StackVal), 1,5f, 0x40400000, 1, 0) != 0)
					{
						Function_11(&bParam1, &iParam15, "UseCase1", 4294967295, 1, 0);
					}
					else if (Function_33(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Local_45, Local_66, StackVal), 1,5f, 0x40400000, 1, 0) != 0)
					{
						Function_11(&bParam1, GET_GRINGO_FROM_OBJECT(&uLocal_38), "UseCase1", 4294967295, 1, 0);
					}
					else
					{
						Function_11(&bParam1, &iParam15, "UseCase1", 4294967295, 1, 0);
					}
					Function_8(&bParam1, 1);
					iLocal_82 = 0;
					Global_6618 = 1;
					bLocal_87 = true;
					uParam0 = 26;
				}
			}
			else
			{
				if (Function_20(&bParam1, 0))
				{
					Function_32(&bParam1, 4, 0, 2);
					TASK_PRIORITY_SET(&bParam1, 2);
				}
				return 1;
			}
			break;
		
		case 0x0000001A:
			if (bLocal_172)
			{
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
			}
			break;
	}
	return 0;
}

int Function_32(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x2D5A / 11610
{
	int iVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (!IS_ACTOR_VEHICLE(&bParam0))
		{
			SQUAD_LEAVE(&bParam0);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < (GET_NUM_DRAFT_POSITIONS(&bParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(iVar0, &bParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_12(&uVar1, 0, 0, 0, 1);
				}
				iVar0++;
			}
		}
		Function_12(&bParam0, &iParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_33(struct<2> Param0, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0x2E48 / 11848
{
	var uVar0;
	var uVar1;
	
	uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_46715, Function_211(), 4,203895E-45f, Param0, Vector(0.0f, 0.0f, 0.0f), Vector(fParam2, &iParam3, fParam2));
	uVar1 = Function_34(&uVar0, &iParam4, &iParam5);
	DESTROY_VOLUME(&uVar0);
	return uVar1;
}

int Function_34(var uParam0, var uParam1, bool bParam2) //Position: 0x2E84 / 11908
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(&Global_46715))
	{
		return 0;
	}
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_211(), &Global_46715, 15, 1);
	bVar1 = false;
	if (IS_OBJECTSET_VALID(&uVar0))
	{
		LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
		iVar2 = GET_OBJECTSET_SIZE(&uVar0);
		if (iVar2 < 0)
		{
			return bVar1;
		}
		iVar3 = 0;
		while (iVar3 <= iVar2)
		{
			uVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar3, &uVar0);
			if (IS_OBJECT_VALID(&uVar4))
			{
				iVar5 = GET_ACTOR_FROM_OBJECT(&uVar4);
				if (IS_ACTOR_VALID(&iVar5))
				{
					if (Function_136(&iVar5))
					{
						if (uParam1 || !IS_ACTOR_HOGTIED(&iVar5))
						{
							if (&bParam2)
							{
								if (Function_35(&iVar5, 0x3f800000, 0x42960000, 1, 1, 0))
								{
									bVar1++;
								}
							}
							else
							{
								bVar1++;
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	DESTROY_OBJECTSET(&uVar0);
	return bVar1;
}

bool Function_35(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x2F62 / 12130
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

int Function_36(bool bParam0, bool bParam1, int iParam2) //Position: 0x2F82 / 12162
{
	if (!Function_38(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_37(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_37(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_37(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

var Function_37() //Position: 0x2FDC / 12252
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_38(int iParam0) //Position: 0x2FF1 / 12273
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_39(int iParam0, int iParam1, float fParam2) //Position: 0x3003 / 12291
{
	bool bVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4[6];
	bool bVar11;
	int iVar12;
	float fVar13;
	
	bVar0 = false;
	iVar1 = 0;
	iVar3 = 0;
	switch (iParam0)
	{
		case 0x00000036:
		case 0x00000039:
		case 0x0000003A:
		case 0x00000041:
		case 0x00000043:
		case 0x0000003B:
		case 0x00000037:
			iVar3 = 0;
			break;
		
		case 0x0000004A:
		case 0x00000038:
		case 0x00000047:
		case 0x0000003C:
			iVar3 = 0;
			break;
		
		case 0x00000040:
		case 0x0000003F:
		case 0x00000044:
			iVar3 = 1;
			break;
		
		case 0x00000046:
		case 0x00000048:
		case 0x00000049:
			iVar3 = 2;
			break;
	}
	switch (iVar3)
	{
		case 0x00000000:
			iVar1 = 1;
			break;
		
		case 0x00000001:
			iVar1 = 2;
			break;
		
		case 0x00000002:
			iVar1 = 3;
			break;
	}
	iVar1 = CEIL((IntToFloat(iVar1) * &fParam2));
	if (&iParam1 == 4294967295)
	{
		bVar11 = false;
		Function_44(&Global_54076, &iVar4, &bVar11);
		if (bVar11 >= 0)
		{
			PRINTINT(bVar11);
			iVar12 = RAND_INT_RANGE(0, (bVar11 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(iVar4[iVar12]));
			iParam1 = Function_43(&Global_54076, iVar4[iVar12]);
			if (&iParam1 == 34)
			{
				iParam1 = 16;
			}
		}
		else
		{
			bVar0 = true;
			Function_40(Function_42(), 0, 1);
		}
	}
	else
	{
		iParam1 = Function_43(&Global_54076, &iParam1);
		if (&iParam1 == 34)
		{
			iParam1 = 16;
		}
	}
	if (!bVar0)
	{
		fVar13 = GET_WEAPON_MAX_AMMO(&iParam1);
		if (fVar13 >= 2.0f)
		{
			fVar13 = (fVar13 + 4.0f);
		}
		fVar2 = (fVar13 * IntToFloat(iVar1));
		if (fVar2 < (_GET_MAX_AMMO_AMOUNT(&Global_54076, GET_AMMO_ENUM(&iParam1)) - _GET_AMMO_AMOUNT(&Global_54076, GET_AMMO_ENUM(&iParam1), 1)))
		{
			fVar2 = (_GET_MAX_AMMO_AMOUNT(&Global_54076, GET_AMMO_ENUM(&iParam1)) - _GET_AMMO_AMOUNT(&Global_54076, GET_AMMO_ENUM(&iParam1), 1));
		}
		if (fVar2 > 1.0f)
		{
			Function_40(Function_42(), 0, 1);
		}
		else
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMO_ENUM(&iParam1), fVar2, 1, 1);
		}
	}
	return;
}

int Function_40(bool bParam0, bool bParam1, int iParam2) //Position: 0x31D9 / 12761
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_41(bParam0), Function_37()) == 0)
		{
			ADD_ITEM(Function_41(bParam0), Function_37(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_41(bParam0), Function_37(), &iParam2);
	return 1;
}

var Function_41(bool bParam0) //Position: 0x3227 / 12839
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &bVar0;
}

bool Function_42() //Position: 0x331B / 13083
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
		iVar1 = 7;
	}
	else
	{
		iVar1 = 12;
	}
	return iVar1;
}

int Function_43(var uParam0, int iParam1) //Position: 0x3377 / 13175
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&uParam0, iParam1);
	return iVar0;
}

void Function_44(var uParam0, int[] iParam1, int iParam2) //Position: 0x3389 / 13193
{
	iParam2 = 0;
	if (Function_43(&uParam0, 39) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 6, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 6))
		{
			iParam1[iParam2] = 39;
			iParam2++;
		}
	}
	if (Function_43(&uParam0, 41) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 8, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 8))
		{
			iParam1[iParam2] = 41;
			iParam2++;
		}
	}
	if (Function_43(&uParam0, 40) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 7, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 7))
		{
			iParam1[iParam2] = 40;
			iParam2++;
		}
	}
	if (Function_43(&uParam0, 42) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 9, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 9))
		{
			iParam1[iParam2] = 42;
			iParam2++;
		}
	}
	if (Function_43(&uParam0, 43) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 10, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 10))
		{
			iParam1[iParam2] = 43;
			iParam2++;
		}
	}
	if (Function_43(&uParam0, 44) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 11, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 11))
		{
			iParam1[iParam2] = 44;
			iParam2++;
		}
	}
	return;
}

void Function_45(int iParam0) //Position: 0x34D4 / 13524
{
	Global_26652[iParam04].f_20++;
	if (Global_26652[iParam04].f_20 == 1)
	{
		Function_46(409, 1, 0, 0);
	}
	return;
}

int Function_46(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3505 / 13573
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
	Function_60(iParam0, TO_FLOAT(bParam1), 1);
	Function_59(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_48(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_47(iParam0);
	return 1;
}

void Function_47(bool bParam0) //Position: 0x372D / 14125
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

void Function_48(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x37CB / 14283
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_58(390))), 32);
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
					fVar19 = (Function_57(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_57(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_55(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_52(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_50(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_49(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_211(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_49(int iParam0) //Position: 0x3E09 / 15881
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_50(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3E1A / 15898
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_51("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_51("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_51("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_51(char* cParam0) //Position: 0x3F11 / 16145
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_52(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3F2C / 16172
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_54(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_53(Function_54(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_53(int iParam0, int iParam1) //Position: 0x3F93 / 16275
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_54(int iParam0, int iParam1) //Position: 0x3FA5 / 16293
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_55(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3FB7 / 16311
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
	if (((Function_56(iParam0) != 19 || Function_56(iParam0) != 17) || Function_56(iParam0) != 10) || Function_56(iParam0) != 9)
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

int Function_56(int iParam0) //Position: 0x40EC / 16620
{
	return Global_55480[iParam016].f_96;
}

float Function_57(int iParam0) //Position: 0x40FB / 16635
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_58(int iParam0) //Position: 0x4134 / 16692
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_59(int iParam0) //Position: 0x4171 / 16753
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

int Function_60(int iParam0, float fParam1, bool bParam2) //Position: 0x430B / 17163
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

bool Function_61(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, var uParam7, int iParam8, var uParam9, var uParam10, var uParam11, bool bParam12, bool bParam13, var uParam14, int iParam15, var uParam16, bool bParam17, var uParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, var uParam23, float fParam24) //Position: 0x454F / 17743
{
	int iVar0;
	
	uParam9 = uParam9;
	uParam18 = &uParam18;
	bParam17 = &bParam17;
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(&bParam0) == &Global_54076)
	{
		TASK_FLEE_ACTOR(&bParam0, &Global_54076, 150.0f, -1.0f, 0, 0, 0);
		return 0;
	}
	switch (uParam3)
	{
		case 0x00000000:
			if (&bParam21)
			{
				uParam3 = 3;
			}
			else
			{
				MEMORY_CLEAR_EVENTS(&bParam0, 0);
				ACTOR_START_FORCE_HOLSTER(&bParam0, 1, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bParam0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam0, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&bParam0, 0);
				uParam2 = Function_93(&bParam0, &Global_54076);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&bParam0, &bParam1, -1.0f, 1);
				iParam8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uParam5, Function_211(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &iParam8, &bParam1, Function_211(), Vector(0.0f, 0,5f, &uParam16), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, 1.0f, &uParam14, 1, 1, 0) || Function_93(&Global_54076, &bParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bParam0, &iParam8, 1.0f, &iParam15);
					TASK_PRIORITY_SET(&bParam0, true);
				}
				uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_93(&bParam0, &bParam1) - uParam2) < fParam6)
			{
				TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, 1.0f, &uParam14, 1, 1, 0))
			{
				iVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &bParam1, 0, 3212836864);
				TASK_FACE_ACTOR(0, &bParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bParam0, iVar0);
				TASK_SEQUENCE_RELEASE(iVar0, 1);
				TASK_PRIORITY_SET(&bParam0, true);
				uParam9 = 0;
				uParam3 = 4;
			}
			else if (!Function_20(&bParam0, 0))
			{
				if (IS_ACTOR_VALID(&bParam0))
				{
					TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				}
				return 0;
			}
			break;
		
		case 0x00000003:
			RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(&bParam0, &uParam10, 0);
			SET_ACTION_NODE_FOR_ACTOR(&bParam0, &uParam11);
			TASK_FACE_ACTOR(&bParam0, &bParam1, 1, 3212836864);
			uParam3 = 4;
			break;
		
		case 0x00000004:
			uParam9 = 0;
			if (GET_NTH_TASK_STATUS(&bParam0, 0) != 0 || bParam21)
			{
				if (!&bParam21)
				{
					SET_ANIM_SET_FOR_ACTOR(&bParam0, &uParam10, 1);
					SET_ACTION_NODE_FOR_ACTOR(&bParam0, &uParam11);
				}
				if (&bParam19)
				{
					Function_84(&bParam0, &Global_54076, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_84(&bParam0, &Global_54076, &bParam12, &bParam13, 5, 60, 1, 1);
				}
				uParam3 = 5;
				Function_105(&uParam4, 0.0f);
			}
			else if (!Function_20(&bParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (uParam23 && !Function_10(&bParam0))
			{
				if (&fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&bParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
						Function_32(&bParam0, 4, 0, 1);
					}
				}
				else if (Function_101(&uParam4, &fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
					Function_32(&bParam0, 4, 0, 1);
				}
			}
			if (&bParam22)
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(&bParam0))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
					{
						if (!IS_STRING_VALID(&bParam20))
						{
							SAY_SINGLE_LINE_CONTEXT(&Global_54076, 409, &bParam0, 0, 0, 5, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							Function_84(&Global_54076, &bParam0, &bParam20, &bParam20, 5, 60, 1, 1);
						}
						uParam3 = 6;
					}
				}
			}
			else if (!IS_AMBIENT_SPEECH_PLAYING(&bParam0))
			{
				uParam3 = 6;
			}
			break;
		
		case 0x00000006:
			if (uParam23 && !Function_10(&bParam0))
			{
				if (Function_101(&uParam4, &fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
					Function_32(&bParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bParam0, &uParam11) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
			{
				RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
				uParam7 = 1;
				if (&bParam17)
				{
					Function_32(&bParam0, 4, 0, &iParam15);
					TASK_PRIORITY_SET(&bParam0, 2);
				}
				AI_GOAL_LOOK_CLEAR(&bParam0);
				ACTOR_END_FORCE_HOLSTER(&bParam0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bParam0, 4294967295);
				return 1;
			}
			break;
	}
	return 1;
}

void Function_62(int iParam0, int iParam1) //Position: 0x4974 / 18804
{
	switch (iParam0)
	{
		case 0x00000036:
		case 0x00000039:
		case 0x0000003A:
		case 0x00000041:
		case 0x00000043:
		case 0x0000004A:
		case 0x0000003B:
		case 0x00000037:
			iParam1 = &iParam1;
			break;
		
		case 0x00000038:
		case 0x00000047:
		case 0x0000003C:
			break;
		
		case 0x00000040:
		case 0x0000003F:
		case 0x00000044:
			break;
		
		case 0x00000046:
		case 0x00000048:
		case 0x00000049:
			break;
	}
	return;
}

void Function_63(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4) //Position: 0x49F9 / 18937
{
	if (uParam0 != iParam1)
	{
		uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_64(uParam0), &uParam2, &uParam3, &uParam4);
	}
}

var Function_64(int iParam0) //Position: 0x4A23 / 18979
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return "EVERYTHING";
		
		case 0x00000000:
			return "SILENT";
		
		case 0x00000001:
			return "IDLE";
		
		case 0x00000002:
			return "IDLE_2";
		
		case 0x00000003:
			return "PASTORAL";
		
		case 0x00000004:
			return "PASTORAL_LOW";
		
		case 0x00000005:
			return "PASTORAL_HIGH";
		
		case 0x00000006:
			return "SUSPENSE";
		
		case 0x00000007:
			return "SUSPENSE_LOW";
		
		case 0x00000008:
			return "SUSPENSE_HIGH";
		
		case 0x00000009:
			return "SUSPENSE_DRUM";
		
		case 0x0000003E:
			return "SUSPENSE_FOG";
		
		case 0x0000000A:
			return "DRAMATIC";
		
		case 0x0000000B:
			return "DRAMATIC_LOW";
		
		case 0x0000000C:
			return "DRAMATIC_LOW_2";
		
		case 0x0000000D:
			return "DRAMATIC_LOW_3";
		
		case 0x0000000E:
			return "DRAMATIC_LOW_4";
		
		case 0x0000000F:
			return "DRAMATIC_SUSPENSE";
		
		case 0x00000010:
			return "DRAMATIC_SUSPENSE_2";
		
		case 0x00000011:
			return "DRAMATIC_HIGH";
		
		case 0x00000012:
			return "DRAMATIC_GUNFIGHT";
		
		case 0x00000013:
			return "DRAMATIC_ALT";
		
		case 0x00000014:
			return "DRAMATIC_2";
		
		case 0x00000015:
			return "DRAMATIC_3";
		
		case 0x00000016:
			return "DRAMATIC_4";
		
		case 0x00000017:
			return "CHASE";
		
		case 0x00000018:
			return "CHASE_EXTRA_LOW";
		
		case 0x00000019:
			return "nCHASE_LOW";
		
		case 0x0000001A:
			return "CHASE_HIGH";
		
		case 0x0000001B:
			return "nCHASE_ELK";
		
		case 0x0000001C:
			return "nCHASE_ALT";
		
		case 0x0000001D:
			return "MERCH_CHASE";
		
		case 0x0000001E:
			return "ARMY_GUNFIGHT";
		
		case 0x0000001F:
			return "ARMY_GUNFIGHT_LOW";
		
		case 0x00000020:
			return "ARMY_GUNFIGHT_HIGH";
		
		case 0x00000021:
			return "REBEL_GUNFIGHT";
		
		case 0x00000022:
			return "GUNFIGHT";
		
		case 0x00000023:
			return "GUNFIGHT_2";
		
		case 0x00000024:
			return "GUNFIGHT_4";
		
		case 0x00000025:
			return "GUNFIGHT_EX";
		
		case 0x00000026:
			return "GUNFIGHT_LOW";
		
		case 0x00000027:
			return "GUNFIGHT_LOW_2";
		
		case 0x00000028:
			return "GUNFIGHT_HIGH";
		
		case 0x00000029:
			return "GUNFIGHT_HIGH_2";
		
		case 0x0000002A:
			return "GUNFIGHT_ALT_HIGH";
		
		case 0x0000002B:
			return "GUNFIGHT_ELK";
		
		case 0x0000002C:
			return "GUNFIGHT_CHASE_HIGH";
		
		case 0x0000002D:
			return "INTENSE_GUNFIGHT";
		
		case 0x0000002E:
			return "SUSPENSE_GUNFIGHT_HIGH";
		
		case 0x0000002F:
			return "nMERCH_GUN";
		
		case 0x00000030:
			return "HAPPY";
		
		case 0x00000031:
			return "nHAPPY_LOW";
		
		case 0x00000032:
			return "HAPPY_HIGH";
		
		case 0x00000033:
			return "RIDING_1";
		
		case 0x00000034:
			return "RIDING_2";
		
		case 0x00000035:
			return "RIDING_3";
		
		case 0x00000036:
			return "RIDING_4";
		
		case 0x00000037:
			return "RIDING_ALT";
		
		case 0x00000038:
			return "TRAP";
		
		case 0x00000039:
			return "BARN";
		
		case 0x0000003A:
			return "MP_IDLE";
		
		case 0x0000003B:
			return "MP_SUSP";
		
		case 0x0000003C:
			return "CAR";
		
		case 0x0000003D:
			return "FINISHED";
		
		default:
	}
	iVar0 = "";
	return &iVar0;
}

bool Function_65(int iParam0, int iParam1) //Position: 0x4F78 / 20344
{
	var uVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam1);
	ITERATE_IN_LAYOUT(&uVar0, &iParam1);
	bVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&bVar1))
	{
		if (&bVar1 == &iParam0)
		{
			DESTROY_ITERATOR(&uVar0);
			return 1;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 0;
}

bool Function_66(int iParam0, int iParam1, int iParam2) //Position: 0x4FDE / 20446
{
	if (!IS_ACTOR_VALID(&iParam0) || !IS_ACTOR_IN_HOGTIE(&iParam0))
	{
		Function_29(&iParam0);
		Function_67(&iParam1);
		if (iLocal_89 == 0)
		{
			Function_107("Hunter_help04", 0x40f00000, 1, 2, 0, 0, 0, 0);
		}
		return 1;
	}
	if (Function_72() && GET_ATTACHED_HOGTIE_VICTIM(&Global_54076) == &iParam0)
	{
		if (Function_136(GET_ATTACHED_HOGTIE_VICTIM(&Global_54076)))
		{
			Function_29(&iParam0);
			Function_67(&iParam1);
			return 1;
		}
	}
	return 0;
}

void Function_67(int iParam0) //Position: 0x5056 / 20566
{
	Function_105(&iParam0, 0.0f);
	return;
}

var Function_68(bool bParam0, int iParam1) //Position: 0x5063 / 20579
{
	if (iParam1 == 1)
	{
		RESET_ANIM_SET_FOR_ACTOR(&bParam0, 1);
		TASK_FACE_ACTOR(&bParam0, &Global_54076, 1, -1.0f);
		TASK_PRIORITY_SET(&bParam0, false);
		iParam1 = 0;
	}
	return iParam1;
}

bool Function_69(var uParam0, float fParam1) //Position: 0x508E / 20622
{
	if (Function_101(&uParam0, fParam1))
	{
		Function_70(&uParam0);
		return 1;
	}
	return 0;
}

void Function_70(vector3 vParam0) //Position: 0x50A8 / 20648
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

var Function_71(var uParam0, int iParam1) //Position: 0x50BF / 20671
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&iParam1))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&uParam0);
		ITERATE_IN_EVENT_TRAP(&uVar0, &iParam1);
		uVar6 = START_OBJECT_ITERATOR(&uVar0);
		if (IS_OBJECT_VALID(&uVar6))
		{
			while (IS_OBJECT_VALID(&uVar6))
			{
				uVar1 = GET_EVENT_FROM_OBJECT(&uVar6);
				uVar2 = GET_EVENT_TARGET_AS_OBJECT(&uVar1);
				uVar3 = GET_EVENT_PERPETRATOR(&uVar1);
				iVar4 = GET_ACTOR_FROM_OBJECT(&uVar2);
				uVar5 = GET_ACTOR_FROM_OBJECT(&uVar3);
				uVar5 = &uVar5;
				if (IS_ACTOR_VALID(&iVar4))
				{
					if (Function_136(&iVar4))
					{
						return &iVar4;
					}
				}
				uVar6 = OBJECT_ITERATOR_NEXT(&uVar0);
			}
			EVENT_TRAP_CLEAR_EVENTS(&iParam1);
		}
		EVENT_TRAP_CLEAR_TRAP_FLAG(&iParam1);
	}
	if (IS_ITERATOR_VALID(&uVar0))
	{
		DESTROY_ITERATOR(&uVar0);
	}
	return &iVar4;
}

bool Function_72() //Position: 0x5171 / 20849
{
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&Global_54076)))
	{
		return 1;
	}
	return 0;
}

int Function_73(bool bParam0) //Position: 0x5187 / 20871
{
	bool bVar0;
	
	bVar0 = Function_80(608);
	if (bVar0 <= &bParam0)
	{
		Function_74(608, bVar0);
		bParam0 = (&bParam0 - bVar0);
	}
	else
	{
		Function_74(608, &bParam0);
		return 1;
	}
	bVar0 = Function_80(605);
	if (bVar0 <= &bParam0)
	{
		Function_74(605, bVar0);
		bParam0 = (&bParam0 - bVar0);
	}
	else
	{
		Function_74(605, &bParam0);
		return 1;
	}
	bVar0 = Function_80(607);
	if (bVar0 <= &bParam0)
	{
		Function_74(607, bVar0);
		bParam0 = (&bParam0 - bVar0);
	}
	else
	{
		Function_74(607, &bParam0);
		return 1;
	}
	bVar0 = Function_80(604);
	if (bVar0 <= &bParam0)
	{
		Function_74(604, bVar0);
		bParam0 = (&bParam0 - bVar0);
	}
	else
	{
		Function_74(604, &bParam0);
		return 1;
	}
	bVar0 = Function_80(606);
	if (bVar0 <= &bParam0)
	{
		Function_74(606, bVar0);
		bParam0 = (&bParam0 - bVar0);
	}
	else
	{
		Function_74(606, &bParam0);
		return 1;
	}
	return 0;
}

int Function_74(int iParam0, bool bParam1) //Position: 0x5283 / 21123
{
	bool bVar0;
	int iVar1;
	
	Function_79(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_78(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 2 || Global_77766[iVar116].f_120 != 3)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME-", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 2;
			return 1;
		}
	}
	iVar1 = Function_75();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_75() //Position: 0x542E / 21550
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_96 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_76();
	return 0;
}

void Function_76() //Position: 0x54CF / 21711
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, (&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_77(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_77(int iParam0) //Position: 0x558D / 21901
{
	Global_77754[iParam0] = 0.0f;
	strcpy(&(Global_77766[iParam016]), "", 8);
	strcpy(&Global_77766[iParam016] + 16, "", 8);
	strcpy(&Global_77766[iParam016] + 32, "", 32);
	Global_77766[iParam016].f_96 = 4294967295;
	Global_77766[iParam016].f_100 = 4294967295;
	Global_77766[iParam016].f_116 = 4294967295;
	Global_77766[iParam016].f_120 = 4294967295;
	return;
}

var Function_78(int iParam0, int iParam1) //Position: 0x55F3 / 22003
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_116 == iParam0)
		{
			if (&iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != &iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

int Function_79(int iParam0, bool bParam1, int iParam2) //Position: 0x5638 / 22072
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
	Function_59(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_48(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_80(int iParam0) //Position: 0x5835 / 22581
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

int Function_81() //Position: 0x5876 / 22646
{
	int iVar0;
	
	iVar0 = (iVar0 + Function_80(608));
	iVar0 = (iVar0 + Function_80(605));
	iVar0 = (iVar0 + Function_80(607));
	iVar0 = (iVar0 + Function_80(604));
	iVar0 = (iVar0 + Function_80(606));
	if (iVar0 >= bLocal_77)
	{
		return bLocal_77;
	}
	return iVar0;
}

int Function_82(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x58C2 / 22722
{
	if (IS_ACTOR_VALID(&bParam0) && IS_ACTOR_VALID(&iParam1))
	{
		if (!&bParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(&bParam0, &iParam1, iParam2);
			MEMORY_IDENTIFY(&bParam0, &iParam1);
		}
		if (&iParam3 == 1)
		{
			if (!&iParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(&iParam1, &bParam0, iParam2);
				MEMORY_IDENTIFY(&iParam1, &bParam0);
			}
		}
	}
	return 1;
}

void Function_83(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x5922 / 22818
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_25(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

void Function_84(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x59AD / 22957
{
	bParam1 = &bParam1;
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_ALIVE(&bParam0) && Function_93(&bParam0, &Global_54076) >= IntToFloat(&iParam5))
		{
			if (!IS_ACTOR_VALID(&bParam1))
			{
				bParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&bParam0);
			if (&bParam6)
			{
				if (IS_ACTOR_HOGTIED(&bParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(&bParam0, &bParam2, &bParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&bParam0, &bParam2, &bParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
				{
					bParam3 = &bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(&bParam0, &bParam2, true, true, &iParam4, 0, false, true);
			}
		}
	}
}

bool Function_85(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, var uParam10, bool bParam11, float fParam12, float fParam13, float fParam14, float fParam15, var uParam16, var uParam17) //Position: 0x5A5A / 23130
{
	int iVar0;
	
	switch (uParam0)
	{
		case 0x00000000:
			if (Function_93(&iParam1, &Global_54076) > 65.0f)
			{
				RESET_ANIM_SET_FOR_ACTOR(&iParam1, 1);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&iParam1, &Global_54076, -1.0f, 1);
				iVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iParam1, iVar0);
				TASK_SEQUENCE_RELEASE(iVar0, 1);
				TASK_PRIORITY_SET(&iParam1, false);
				uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam1, 1.0f, &fParam14, 1, 0, 0))
			{
				if (GET_NTH_TASK_STATUS(&iParam1, 0) == 0)
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam1)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam1));
					}
					iParam3 = ADD_BLIP_FOR_ACTOR(&iParam1, 325, 0, 2, 0);
					SET_BLIP_NAME(&iParam3, GET_ACTOR_ENUM_STRING(&iParam1));
					if (IS_STRING_VALID(&uParam4))
					{
						SET_ANIM_SET_FOR_ACTOR(&iParam1, &uParam4, 0);
						SET_ACTION_NODE_FOR_ACTOR(&iParam1, &uParam5);
					}
					Function_105(&iParam2, 0.0f);
					Function_84(&iParam1, &Global_54076, &uParam6, &uParam7, 5, 60, 1, 1);
					uParam0 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_101(&iParam2, &fParam12) && !IS_AMBIENT_SPEECH_PLAYING(&iParam1))
			{
				if (IS_AMBIENT_SPEECH_PLAYING(&iParam1))
				{
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam1);
				}
				if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam1, 1.0f, &fParam15, 1, 0, 0))
				{
					if (IS_STRING_VALID(&uParam16))
					{
						RESET_ANIM_SET_FOR_ACTOR(&iParam1, 1);
						SET_ANIM_SET_FOR_ACTOR(&iParam1, &uParam16, 0);
						SET_ACTION_NODE_FOR_ACTOR(&iParam1, &uParam17);
					}
					Function_84(&iParam1, &Global_54076, &uParam8, &bParam9, 5, 60, 1, 1);
					Function_105(&iParam2, 0.0f);
					uParam0 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (Function_101(&iParam2, &fParam13) && !IS_AMBIENT_SPEECH_PLAYING(&iParam1))
			{
				if (IS_STRING_VALID(&uParam10))
				{
					Function_84(&iParam1, &Global_54076, &uParam10, &bParam11, 5, 60, 1, 1);
				}
				Function_105(&iParam2, 0.0f);
				REMOVE_BLIP(&iParam3);
				return 1;
			}
			break;
	}
	return 0;
}

int Function_86(bool bParam0) //Position: 0x5C43 / 23619
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_87() //Position: 0x5C5C / 23644
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

int Function_88(var[] uParam0, bool bParam1) //Position: 0x5C6F / 23663
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= uParam0)
	{
		if (Function_20(&(uParam0[iVar0]), &bParam1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int Function_89(int iParam0, int[] iParam1, var uParam2, var uParam3) //Position: 0x5CA3 / 23715
{
	float fVar0;
	
	uParam3 = &uParam3;
	switch (iLocal_28)
	{
		case 0x00000001:
			uParam2 = Function_91(&iParam0, &iParam1);
			if (uParam2 != 4294967295)
			{
				if (Function_20(&(iParam1[uParam2]), 0))
				{
					iLocal_115 = &iParam1[uParam2];
					fVar0 = Function_90(&iParam0);
					AI_SET_WEAPON_MIN_RANGE(&iParam0, 0.0f);
					AI_SET_WEAPON_MAX_RANGE(&iParam0, (fVar0 * 4.0f));
					MEMORY_REPORT_POSITION_AUTO(&iParam0, &iLocal_115, 1);
					COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iParam0, 0);
					TASK_USE_TURRET_AGAINST_OBJECT(&iParam0, &uLocal_42, &(iParam1[uParam2]), -1.0f);
					iLocal_28 = 2;
					break;
				}
			}
			else
			{
				iLocal_28 = 4;
			}
			iLocal_28 = 4;
			break;
		
		case 0x00000002:
			if (!Function_20(&iLocal_115, 0) || Function_91(&iParam0, &iParam1) == uParam2)
			{
				iLocal_28 = 1;
			}
			else if (Function_93(&iLocal_115, &iParam0) < 15.0f)
			{
				TASK_GO_NEAR_COORD(&iLocal_115, &uLocal_69, 5.0f, 4);
			}
			break;
		
		case 0x00000004:
			return 1;
			break;
	}
	return 0;
}

var Function_90(int iParam0) //Position: 0x5D94 / 23956
{
	struct<5> Var0;
	
	if (GET_ACTOR_CURRENT_WEAPON_AI_PARAMETERS(&iParam0, &Var0))
	{
		return StackVal;
	}
	return 0.0f;
}

int Function_91(var uParam0, int[] iParam1) //Position: 0x5DAE / 23982
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 4294967295;
	fVar2 = 10000.0f;
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_ACTOR_VALID(&(iParam1[iVar0])))
		{
			if (IS_ACTOR_ALIVE(&(iParam1[iVar0])))
			{
				fVar3 = Function_93(&uParam0, &(iParam1[iVar0]));
				if (fVar3 > fVar2)
				{
					fVar2 = fVar3;
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void Function_92() //Position: 0x5E11 / 24081
{
	int iVar0;
	
	bLocal_172 = true;
	if (Global_43787 == 0)
	{
		iVar0 = Function_86(4);
		if (iVar0 == 0)
		{
			iLocal_170 = "TC_FTR_SONG_01";
		}
		else if (iVar0 == 1)
		{
			iLocal_170 = "TC_FTR_SONG_02";
		}
		else if (iVar0 == 2)
		{
			iLocal_170 = "TC_FTR_SONG_03";
		}
		else if (iVar0 == 3)
		{
			iLocal_170 = "TC_FTR_SONG_04";
		}
	}
	else if (Global_43787 == 2)
	{
		iVar0 = Function_86(2);
		if (iVar0 == 0)
		{
			iLocal_170 = "TC_NRT_SONG_01";
		}
		else if (iVar0 == 1)
		{
			iLocal_170 = "TC_NRT_SONG_02";
		}
	}
	else if (Global_43787 == 1)
	{
		iVar0 = Function_86(2);
		if (iVar0 == 0)
		{
			iLocal_170 = "TC_MEX_SONG_01";
		}
		else if (iVar0 == 1)
		{
			iLocal_170 = "TC_MEX_SONG_02";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(&iLocal_170, "SUSPENSE_LIGHT", 0.0f, 500, 4294967295, 3212836864, 0);
	return;
}

float Function_93(bool bParam0, bool bParam1) //Position: 0x5F48 / 24392
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&bParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_94(int iParam0) //Position: 0x603D / 24637
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "nnostickup"))
		{
			DECOR_REMOVE(&iParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(&iParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(&iParam0, 0);
		TASK_PRIORITY_SET(&iParam0, 2);
	}
	return;
}

int Function_95(int iParam0, bool bParam1) //Position: 0x6090 / 24720
{
	if (IS_ACTOR_HUMAN(&iParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(&iParam0) == 0)
		{
			TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&iParam0, false);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(&iParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(&iParam0, &bParam1, 1);
	TASK_KILL_CHAR(&iParam0, &bParam1);
	TASK_PRIORITY_SET(&iParam0, true);
	return 1;
}

int Function_96(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x6186 / 24966
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
		fVar0 = Function_93(&iParam0, &Global_54076);
		if (!Function_27(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_97(&iParam0);
				return 1;
			}
		}
		if (!Function_27(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_97(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_97(&iParam0);
				return 1;
			}
		}
		if (!Function_27(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_97(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_97(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_27(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_97(&iParam0);
				return 1;
			}
		}
		if (!Function_27(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_97(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_97(int iParam0) //Position: 0x634F / 25423
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_98(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_98(int iParam0) //Position: 0x638C / 25484
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_99(var uParam0, bool bParam1, bool bParam2) //Position: 0x63A5 / 25509
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_107(&uParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (&bParam2)
		{
			Function_100();
		}
	}
	return;
}

void Function_100() //Position: 0x63D0 / 25552
{
	switch (Global_43787)
	{
		case 0x00000000:
			AUDIO_MUSIC_ONE_SHOT("FTR_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_ONE_SHOT("MEX_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_ONE_SHOT("NRT_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
	}
	return;
}

bool Function_101(var uParam0, float fParam1) //Position: 0x6459 / 25689
{
	if (Function_104(&uParam0))
	{
		if (Function_102(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_102(vector3 vParam0) //Position: 0x6477 / 25719
{
	if (Function_104(&vParam0))
	{
		if (Function_103(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_103(int iParam0) //Position: 0x6544 / 25924
{
	return Function_27(iParam0, 2);
}

bool Function_104(int iParam0) //Position: 0x6552 / 25938
{
	return Function_27(iParam0, 1);
}

void Function_105(vector3 vParam0) //Position: 0x6560 / 25952
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_209(&vParam0, 1);
	Function_106(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_106(var uParam0, bool bParam1) //Position: 0x6585 / 25989
{
	uParam0 = (uParam0 - (uParam0 && bParam1));
	return;
}

void Function_107(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x659B / 26011
{
	struct<4> Var0;
	var uVar4;
	
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_25(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

float Function_108(bool bParam0) //Position: 0x6630 / 26160
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
	{
		Function_109(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_109(float fParam0, bool bParam1) //Position: 0x666C / 26220
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		fParam0 = 65.0f;
		bParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		fParam0 = 115.0f;
		bParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			fParam0 = 130.0f;
			bParam1 = 190.0f;
		}
		else
		{
			fParam0 = 130.0f;
			bParam1 = 190.0f;
		}
	}
	return;
}

void Function_110(struct<2> Param0, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7) //Position: 0x66FD / 26365
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
	else if (!Function_123(StackVal, Param0))
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
			Function_122(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_121(0);
		}
		if (&bParam7)
		{
			Function_119(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Function_117(iParam3);
			Global_6644 = 1;
		}
		Function_115(iParam3);
		if (Function_114(StackVal, 32768))
		{
			Function_111(1);
		}
		Global_26652[iParam34].f_16++;
		Function_46(408, 1, 0, 0);
	}
}

void Function_111(bool bParam0) //Position: 0x6812 / 26642
{
	if (bParam0)
	{
		Function_113(0x10000000);
	}
	else
	{
		Function_112(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_112(int iParam0) //Position: 0x6837 / 26679
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_113(int iParam0) //Position: 0x6854 / 26708
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_114(var uParam0, int iParam1) //Position: 0x6867 / 26727
{
	return (uParam0 && iParam1) == 0;
}

void Function_115(int iParam0) //Position: 0x6874 / 26740
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_27(StackVal, 524288))
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
			bVar1 = Function_116(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_116(int iParam0) //Position: 0x691A / 26906
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_117(int iParam0) //Position: 0x6931 / 26929
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
	Function_118(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
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

void Function_118(vector3 vParam0) //Position: 0x69D0 / 27088
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_119(int iParam0, int iParam1) //Position: 0x69EC / 27116
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
			Function_120(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_120(struct<113> Param0) //Position: 0x6A73 / 27251
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

void Function_121(int iParam0) //Position: 0x6AD1 / 27345
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_116(900)), 0);
	return;
}

void Function_122(int iParam0) //Position: 0x6AF5 / 27381
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&iParam0 + Function_116(200)), 0);
	return;
}

bool Function_123(vector3 vParam0) //Position: 0x6B18 / 27416
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_124() //Position: 0x6B30 / 27440
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_125(var uParam0, var uParam1, var uParam2, float fParam3, struct<2> Param4) //Position: 0x6B3A / 27450
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
		if (Function_126(StackVal, &Global_46715, "player_herb", &uVar0, 20.0f, 5, Param4) >= 0)
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

int Function_126(char* cParam0, var uParam1, char*[] cParam2, float fParam3, int iParam4, struct<2> Param5) //Position: 0x6BE5 / 27621
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

void Function_127(var uParam0, struct<2> Param1, int iParam3, int iParam4, float fParam5) //Position: 0x6C8B / 27787
{
	var uVar0;
	var uVar1;
	bool bVar2;
	var uVar3[6];
	bool bVar10;
	int iVar11;
	char* cVar12[32];
	float fVar20;
	
	bVar2 = true;
	uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Param1, 1.0f, "p_gen_footlockerfull01x", 1);
	if (IS_PHYSINST_VALID(&uVar0))
	{
		uVar1 = GET_OBJECT_FROM_PHYSINST(&uVar0);
		if (IS_OBJECT_VALID(&uVar1))
		{
			ROTATE_OBJECT_UPRIGHT_TO_GROUND(&uVar1, 1, 5.0f);
		}
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(&uParam0), "GringoDollarAmt", false);
	Function_128(GET_OBJECT_FROM_GRINGO(&uParam0));
	if (&iParam3 == 4294967295)
	{
		bVar10 = false;
		Function_44(&Global_54076, &uVar3, &bVar10);
		if (bVar10 >= 0)
		{
			PRINTINT(bVar10);
			iVar11 = RAND_INT_RANGE(0, (bVar10 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar3[iVar11]));
			iParam3 = Function_43(&Global_54076, uVar3[iVar11]);
			if (&iParam3 == 34)
			{
				iParam3 = 16;
			}
		}
		else
		{
			bVar2 = false;
		}
	}
	else
	{
		iParam3 = Function_43(&Global_54076, &iParam3);
	}
	if (&iParam3 == 4294967295)
	{
		bVar2 = false;
	}
	if (bVar2)
	{
		strcpy(&cVar12, "Ammo_", 32);
		straddi(&cVar12, GET_AMMO_ENUM(&iParam3), 32);
		PRINTSTRING(&cVar12);
		fVar20 = GET_WEAPON_MAX_AMMO(&iParam3);
		if (fVar20 >= 2.0f)
		{
			fParam5 = 2.0f;
		}
		DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(&uParam0), &cVar12, FLOOR(((2.0f * &fParam5) * GET_WEAPON_MAX_AMMO(&iParam3))));
	}
	if (&iParam4 != 4294967295 || (&iParam4 != 11 && GET_ITEM_COUNT(SS_GET_STRING(1, 11), &Global_54076) < 0))
	{
		iParam4 = Function_42();
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(&uParam0), "GiveItem", &iParam4);
}

void Function_128(bool bParam0) //Position: 0x6E09 / 28169
{
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&bParam0, "nocrime", 1);
	}
	return;
}

void Function_129(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x6E40 / 28224
{
	var uVar0;
	
	if (Function_135(&uParam0) && !Function_134(&uParam0, 1))
	{
		LOG_ERROR("Calling MAKE_ACTOR_ZOMBIE() on a CUSTOM ZOMBIE! Don't do that!");
		return;
	}
	TURN_ACTOR_INTO_ZOMBIE(&uParam0, &iParam1);
	if (&iParam2 == 4294967294 && &iParam3 == 4294967294)
	{
		if (&iParam2 == 4294967295)
		{
			iParam2 = RAND_INT_RANGE(0, 4);
		}
		if (&iParam3 == 4294967295)
		{
			iParam3 = RAND_INT_RANGE(0, 4);
		}
		if (!ADD_ZOMBIE_TO_ACTOR(&uParam0, &iParam2, &iParam3))
		{
			LOG_ERROR("MAKE_ACTOR_ZOMBIE: Failed to apply bloody head/body textures!");
		}
	}
	if (&bParam6)
	{
		DEEQUIP_ACCESSORY(&uParam0, 0);
	}
	if (&bParam7)
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(&uParam0);
	}
	Function_132(&uParam0);
	DECOR_SET_BOOL(&uParam0, "Zombie", 1);
	Function_128(&uParam0);
	SET_ACTOR_ALLOW_DISARM(&uParam0, 0);
	SET_CRIPPLE_ENABLE(&uParam0, 0);
	SET_CRIPPLE_FLAG(&uParam0, 0);
	SET_ALLOW_COLD_WEATHER_BREATH(&uParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(&uParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&uParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(&uParam0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&uParam0, 1);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&uParam0, 0.0f, 1,115f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 33, 15.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&uParam0, 155.0f);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&uParam0, 0, 0);
	uVar0 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
	if (AI_PREDICATE_IS_VALID(&uVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &uVar0, 1);
	}
	if (&iParam1 <= 1204 && &iParam1 >= 1213)
	{
		DECOR_SET_BOOL(&uParam0, "FastZombie", 1);
	}
	else if (&iParam1 <= 1214 && &iParam1 >= 1221)
	{
		DECOR_SET_BOOL(&uParam0, "BruiserZombie", 1);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 28, 12,5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 29, 12.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 30, 0,5f);
	}
	SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(&uParam0, "head");
	if (&iParam1 <= 1214 && &iParam1 >= 1221)
	{
		SET_ACTOR_BASE_SCORE(&uParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(&uParam0, 2030.0f, 1);
	}
	else
	{
		SET_ACTOR_BASE_SCORE(&uParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(&uParam0, 2020.0f, 1);
	}
	Function_130(&uParam0, &uParam4, &uParam5);
}

void Function_130(var uParam0, int iParam1, bool bParam2) //Position: 0x70DD / 28893
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
			Function_131(&uParam0, &iParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(&uParam0);
			SET_ALLOW_EXECUTE(&uParam0, 0);
		}
	}
	return;
}

void Function_131(var uParam0, int iParam1, bool bParam2) //Position: 0x719A / 29082
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
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uParam0, Function_211(), "script_zombie_emerge", Var2);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_124();
				uVar7 = CREATE_POINT_IN_LAYOUT(&uParam0, Function_211(), Var2, Function_124());
				SNAP_OBJECT_TO_GROUND(&uVar7, 2,5f, 1, 1092616192);
				GET_OBJECT_ORIENTATION(&uVar7, &Var4);
				DESTROY_OBJECT(&uVar7);
				UNK_0x6745191B(&uVar6, Var4);
			}
			break;
		
		case 0x00000002:
			GET_POSITION(&uParam0, &Var0);
			GET_ACTOR_AXIS(&uParam0, &Var2, 2);
			Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var0, StackVal) * Vector(0,75f, 0,75f, 0,75f), StackVal, StackVal);
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uParam0, Function_211(), "script_zombie_emerge", Var0);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_124();
				uVar7 = CREATE_POINT_IN_LAYOUT(&uParam0, Function_211(), Var0, Function_124());
				SNAP_OBJECT_TO_GROUND(&uVar7, 2,5f, 1, 1092616192);
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
			DECOR_SET_BOOL(&uParam0, "WakeUp", 1);
		}
	}
	else if (!DECOR_CHECK_EXIST(&uParam0, "WakeUpFast"))
	{
		DECOR_SET_BOOL(&uParam0, "WakeUpFast", 1);
	}
	return;
}

void Function_132(int iParam0) //Position: 0x7366 / 29542
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(&iParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(&iParam0, 0,4f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&iParam0, 0,6f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&iParam0, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 29, 3,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 4, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 1, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 2, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 3, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 9, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 6, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 7, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 12, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 17, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, 0);
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
	Function_133(&iParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&iParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(&iParam0, 0.0f);
	return;
}

void Function_133(var uParam0, int iParam1) //Position: 0x7724 / 30500
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(&uParam0, iVar0, iParam1);
		iVar0++;
	}
	return;
}

bool Function_134(var uParam0, int iParam1) //Position: 0x7747 / 30535
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&uParam0);
	if ((((((iVar0 != 1252 && iParam1) || (iVar0 != 1253 && iParam1)) || iVar0 != 541) || iVar0 != 542) || iVar0 != 543) || iVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_135(int iParam0) //Position: 0x778C / 30604
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1204 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_136(int iParam0) //Position: 0x77AD / 30637
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1204 && iVar0 >= 1254)
	{
		return 1;
	}
	if (Function_134(&iParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(&iParam0, "Zombie");
	}
	return 0;
}

void Function_137(bool bParam0) //Position: 0x77FC / 30716
{
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&bParam0, 0);
	MEMORY_ATTACK_ON_SIGHT(&bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(&bParam0, false);
	AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(&bParam0, 1);
	return;
}

var Function_138(var uParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0x782C / 30764
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	
	uVar0 = CREATE_PROPSET_IN_LAYOUT(&uParam0, &uParam1, &uParam2, Param3, Param5);
	uVar1 = GET_LAYOUT_FROM_OBJECT(&uVar0);
	uVar2 = CREATE_OBJECT_ITERATOR(&uVar1);
	ITERATE_IN_LAYOUT(&uVar2, &uVar1);
	iVar3 = START_OBJECT_ITERATOR(&uVar2);
	while (IS_OBJECT_VALID(&iVar3))
	{
		if (!GET_OBJECT_TYPE(&iVar3) != 57)
		{
			if (!&iParam7 != 4294967295)
			{
				GET_OBJECT_POSITION(&iVar3, &Var4);
				Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 4.0f, 0.0f), Var4, StackVal);
				iVar6 = GET_MATERIAL_AT_VECTOR(&Var4);
				if (!iVar6 != 0 && (iVar6 && iParam7) < 0)
				{
					PRINTSTRING("Deleting object. Materials were above");
					PRINTNL();
					DESTROY_OBJECT(&iVar3);
				}
			}
			if (IS_OBJECT_VALID(&iVar3))
			{
				if (DECOR_CHECK_EXIST(&iVar3, "rstarInfoSnapping_Type"))
				{
					iVar7 = DECOR_CHECK_STRING(&iVar3, "rstarInfoSnapping_Type", "align");
					SNAP_OBJECT_TO_GROUND(&iVar3, 10.0f, iVar7, 1092616192);
				}
				NET_OBJECT_SET_REPLICATION_MODE(&iVar3, 0);
			}
		}
		iVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(&uVar0));
	ADD_AI_COVERSET_FOR_PROPSET(&uVar0);
	DESTROY_ITERATOR(&uVar2);
	return &uVar0;
}

float Function_139() //Position: 0x7983 / 31107
{
	float fVar0;
	bool bVar1;
	
	if (Global_6612)
	{
		return 0.0f;
	}
	Function_109(&fVar0, &bVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_140(struct<65> Param0) //Position: 0x79B4 / 31156
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	
	if (Global_6612 && Param0.f_40)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_180(GET_SCRIPT_NAME()) };
		uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_178(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar8, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar8, "category");
			Function_176(&uVar8, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(&Param0 + 16) = Global_54078;
		return 1;
	}
	uParam3 = 0;
	if (!Function_141(&Param0))
	{
		if (Param0.f_40 == 1)
		{
			if (uParam2 == 0)
			{
				Function_24("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_24("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (&bParam4)
	{
		if (!Function_22(Param0.f_64, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_180("restrictVol") };
		uVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_178(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar9, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar9, "category");
			Function_176(&uVar9, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_141(struct<73> Param0) //Position: 0x7D72 / 32114
{
	var uVar0;
	var uVar1;
	int iVar2;
	struct<2> Var3;
	var uVar5;
	struct<2> Var7;
	bool bVar9;
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
			Function_175(&Param0 + 8);
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
				Var3 = Vector(0.0f, 0.0f, Function_108(1));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				ITERATE_IN_SPHERE(&Param0 + 8, Var3, Function_108(1));
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
						uVar0 = Function_174(StackVal, &Param0 + 8, Var7, 0,01f);
					}
					else
					{
						uVar0 = Function_173(StackVal, &Param0 + 8, Var7, 0,1f, "locflag", (&Param0 + 72 + 36)->f_24);
					}
				}
				else if ((&Param0 + 72 + 36)->f_24 == 0)
				{
					uVar0 = Function_172(StackVal, &Param0 + 8, Var7, Function_139());
				}
				else
				{
					uVar0 = Function_171(StackVal, &Param0 + 8, Var7, Function_139(), "locflag", (&Param0 + 72 + 36)->f_24);
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
			Function_175(&Param0 + 8);
			ITERATE_IN_LAYOUT(&Param0 + 8, FIND_NAMED_LAYOUT("regions_layout"));
			fVar10 = 130.0f;
			bVar9 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &Var3);
			ITERATE_IN_SPHERE(StackVal, &Param0 + 8, Var3);
			uVar1 = START_OBJECT_ITERATOR(&Param0 + 8);
			while (IS_OBJECT_VALID(&uVar1) && !IS_OBJECT_VALID(&uVar0))
			{
				if (DECOR_CHECK_EXIST(&uVar1, "regid"))
				{
					bVar11 = DECOR_GET_INT(&uVar1, "regid");
					if (Function_170(bVar11))
					{
						if (StackVal == (&Param0 + 72)->f_68)
						{
							if ((StackVal && Global_43791[bVar11]) >= 0)
							{
								GET_OBJECT_POSITION(&uVar1, &Var3);
								if (VDIST(Var7, Var3) < fVar10 && VDIST(Var7, Var3) > Function_108(1))
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
				Function_169(&Param0 + 16, 99.0f, &Param0 + 16, 10);
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
				Function_168(&Var7, &uVar5);
				Var3 = Function_168(&Var7, &uVar5);
				if (!Function_123(StackVal, Var3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(Var7);
					PRINTNL();
					Function_109(&fVar10, &bVar9);
					if (VDIST(Var3, Var7) < ((fVar10 + ((bVar9 - fVar10) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_165(StackVal, &Param0, Var3);
					}
				}
			}
			else
			{
				iVar2 = Function_161(&Param0);
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
					if (!Function_160(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Param0.f_68 == 1)
				{
					if (!Function_159(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Function_27(StackVal, 131072))
				{
					if (StackVal || Function_158(Function_158(StackVal, *(&Param0 + 16)), Global_54078))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_157(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (!Function_151(&Param0 + 16, &Param0 + 60, 0, Param0.f_40))
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
				bVar9 = 150.0f;
				Var3 = Vector(0.0f, 0.0f, ((fVar10 + bVar9) * -0,5f));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				uVar17 = START_CURVE_QUERY(&Global_43578, Var3, Function_150((&Param0 + 72)->f_148, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar17 = START_CURVE_QUERY(&Global_43578, Var7, Function_150((&Param0 + 72)->f_148, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) >= 0)
			{
				iVar15 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uVar17, iVar15, &Var12);
				Function_149(&Var12);
				*(&Param0 + 16) = Function_149(&Var12);
				Param0.f_28 = Var12.f_12;
				(&Param0 + 28)->f_4 = Var12.f_16;
				Param0.f_56 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar17, iVar15);
				UNK_0xDF93BD7C(&uVar17);
			}
			else
			{
				UNK_0xDF93BD7C(&uVar17);
				return 0;
			}
			if (Param0.f_68 == 2)
			{
				if (!Function_160(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 1)
			{
				if (!Function_159(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 0)
			{
				if (!(StackVal || Function_160(Function_159(StackVal, *(&Param0 + 16)), *(&Param0 + 16))))
				{
					return 0;
				}
			}
			if (Function_27(StackVal, 131072))
			{
				if (StackVal || Function_158(Function_158(StackVal, *(&Param0 + 16)), Global_54078))
				{
					return 0;
				}
			}
			if (StackVal && !Function_151(&Param0 + 16, &Param0 + 60, 0, Param0.f_40) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_146((&Param0 + 72)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Param0 + 72)->f_156)
			{
				case 0x00000001:
					iVar18 = Function_143(StackVal, Global_43787, Global_43788, Global_43789, 1);
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
						iVar18 = Function_143(StackVal, Global_43787, Global_43788, (Global_43789 + iVar16), 1);
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
	if (Function_142(StackVal, *(&Param0 + 16)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 16), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_142(struct<2> Param0) //Position: 0x863D / 34365
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= GET_OBJECTSET_SIZE(&Global_39246))
	{
		if (IS_POINT_IN_VOLUME(Param0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, &Global_39246))))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int Function_143(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x8674 / 34420
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
								return Function_144(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_144(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_144(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_144(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_144(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_144(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_144(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_144(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_144(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_144(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_144(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_144(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_144(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_144(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_144(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_144(&Global_11826, &Global_13998, bParam3);
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
								return Function_144(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_144(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_144(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_144(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_144(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_144(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_144(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_144(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_144(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_144(&Global_12472, &Global_14954, bParam3);
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
		return Function_144(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_144(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_144(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_144(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_144(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_144(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_144(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_144(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_144(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_144(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_144(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_144(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_144(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_144(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_144(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_144(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_144(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_144(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_144(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_144(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_144(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_144(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_144(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_144(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_144(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_144(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_144(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x8C8A / 35978
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_145(&(Param0[iVar02]), 2))
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

bool Function_145(var uParam0, int iParam1) //Position: 0x8CE4 / 36068
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_146(int iParam0) //Position: 0x8D01 / 36097
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
			if (Function_147(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_147(int iParam0) //Position: 0x8D69 / 36201
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_148(&iParam0);
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

var Function_148(var uParam0) //Position: 0x8DA7 / 36263
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	iVar1 = 0;
	while (iVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, iVar1);
		if (IS_ACTOR_VALID(&iVar0) && IS_ACTOR_ALIVE(&iVar0))
		{
			return &iVar0;
		}
		iVar1++;
	}
	return "";
}

struct<8> Function_149(vector3 vParam0) //Position: 0x8DF4 / 36340
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x8E16 / 36374
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

bool Function_151(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x8E48 / 36424
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
	Function_153(4294967295);
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
			else if (Function_152(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_152(struct<2> Param0) //Position: 0x8F24 / 36644
{
	struct<2> Var0;
	int iVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	iVar2 = VMAG(Var0);
	return iVar2;
}

int Function_153(int iParam0) //Position: 0x8F43 / 36675
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
						Function_156(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_154(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_156(iVar0);
						}
					}
					else if (Function_154(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_156(iVar0);
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
			Function_156(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_154(var uParam0, struct<2> Param1) //Position: 0x90B1 / 37041
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_155(&uParam0);
		Var0 = Function_155(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_155(int iParam0) //Position: 0x9128 / 37160
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		GET_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_156(int iParam0) //Position: 0x9194 / 37268
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

bool Function_157(struct<2> Param0) //Position: 0x91FC / 37372
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

int Function_158(struct<2> Param0) //Position: 0x92A1 / 37537
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

bool Function_159(struct<2> Param0) //Position: 0x92EF / 37615
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

bool Function_160(struct<2> Param0) //Position: 0x934A / 37706
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

int Function_161(bool bParam0) //Position: 0x93C9 / 37833
{
	float fVar0;
	bool bVar1;
	
	Function_109(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_164(0);
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
		Function_163(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&bParam0 + 72 + 84));
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
	Function_162(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&bParam0 + 72 + 84));
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

void Function_162(struct<33> Param0) //Position: 0x957B / 38267
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

void Function_163(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x96A7 / 38567
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

void Function_164(float fParam0) //Position: 0x96F8 / 38648
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

int Function_165(int iParam0, struct<2> Param1) //Position: 0x973F / 38719
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(Param1);
	if (Global_47151[34])
	{
		PRINTVECTOR(Param1);
		PRINTNL();
	}
	Function_167();
	Function_164(0);
	Function_166(0);
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
		Function_163(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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
	Function_162(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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

void Function_166(bool bParam0) //Position: 0x98F4 / 39156
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

void Function_167() //Position: 0x99A7 / 39335
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

struct<8> Function_168(struct<2> Param0) //Position: 0x99B6 / 39350
{
	var uVar0;
	var uVar3;
	float fVar4;
	bool bVar5;
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
	GET_POINT_FROM_CURVE_QUERY(&uVar7, 0, &uVar0);
	uVar3 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar7, 0);
	if (IS_OBJECT_VALID(&uVar3))
	{
		uVar12 = Param1;
		UNK_0x19D652F9(&uVar3, 50.0f, &uVar0, &iVar18);
		UNK_0x19D652F9(&uVar3, -50.0f, &uVar0, &iVar21);
		Function_149(&iVar18);
		uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_149(&iVar18), StackVal);
		Function_149(&iVar21);
		uVar16 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_149(&iVar21), StackVal);
		fVar11 = VDOT(&uVar12, &uVar14);
		fVar10 = VDOT(&uVar12, &uVar16);
		Function_109(&fVar4, &bVar5);
		fVar6 = ((fVar4 + bVar5) / 2.0f);
		if (fVar11 > 0.0f && fVar10 > 0.0f)
		{
			UNK_0xDF93BD7C(&uVar7);
			Var8 = Vector(0.0f, 0.0f, 0.0f);
			return StackVal, Var8;
		}
		if (fVar11 > fVar10)
		{
			UNK_0x19D652F9(&uVar3, (fVar6 * -1.0f), &uVar0, &iVar21);
			Function_149(&iVar21);
			Var8 = Function_149(&iVar21);
		}
		else
		{
			UNK_0x19D652F9(&uVar3, fVar6, &uVar0, &iVar18);
			Function_149(&iVar18);
			Var8 = Function_149(&iVar18);
		}
	}
	UNK_0xDF93BD7C(&uVar7);
	return StackVal, Var8;
}

int Function_169(struct<2> Param0, struct<5> Param2) //Position: 0x9AD0 / 39632
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
		if (!Function_123(StackVal, Param2))
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
			if (!Function_123(StackVal, Param2))
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
		WAIT(0);
	}
	return 0;
}

bool Function_170(bool bParam0) //Position: 0x9C13 / 39955
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_171(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x9C29 / 39977
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
						if (Function_151(&Var5, &fVar4, 0, 0))
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

var Function_172(var uParam0, struct<2> Param1, float fParam3) //Position: 0x9CDE / 40158
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
				if (Function_151(&Var5, &uVar4, 0, 0))
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

var Function_173(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x9D70 / 40304
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

var Function_174(var uParam0, struct<2> Param1, float fParam3) //Position: 0x9E12 / 40466
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

int Function_175(int iParam0) //Position: 0x9E98 / 40600
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_211());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_211());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_176(var uParam0, int iParam1) //Position: 0x9ECE / 40654
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
	Function_153(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_177(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_177(int iParam0, var uParam1, struct<2> Param2) //Position: 0xA038 / 41016
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_180("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

var Function_178(var uParam0, struct<2> Param1) //Position: 0xA0E0 / 41184
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		Function_179(StackVal, StackVal, Var0, Param1, &uVar2);
		return UNK_0x9C40E671(&uVar2);
	}
	return 0.0f;
}

void Function_179(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0xA10E / 41230
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

struct<32> Function_180(char* cParam0) //Position: 0xA132 / 41266
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_181("0", &cVar8, ""), 4);
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

struct<32> Function_181(char* cParam0) //Position: 0xA19E / 41374
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_182(struct<2>[] Param0) //Position: 0xA1C0 / 41408
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_187();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_186(&(Param0[iVar02]), 8);
		}
		else if (Function_185())
		{
			iVar1 = 1;
			Function_186(&(Param0[iVar02]), 8);
		}
		Function_186(&(Param0[iVar02]), 16);
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
				Function_186(&(Param0[iVar02]), 1);
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
							Function_186(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_186(&(Param0[iVar02]), 2);
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
							Function_186(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_186(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_186(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_186(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_186(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_186(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_186(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_186(&(Param0[iVar02]), 2);
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
	Function_183();
	return 1;
}

void Function_183() //Position: 0xA582 / 42370
{
	if (!Function_184(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_184(int iParam0) //Position: 0xA5C2 / 42434
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_185() //Position: 0xA5DE / 42462
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

void Function_186(struct<13> Param0) //Position: 0xA60C / 42508
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_187() //Position: 0xA61F / 42527
{
	if (!Function_184(128))
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

void Function_188(int iParam0) //Position: 0xA661 / 42593
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_DRAW_ACTOR(&iParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(&iParam0);
		if (IS_ACTOR_ANIMAL(&iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(&iParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 1);
			MEMORY_ALLOW_SHOOTING(&iParam0, 1);
		}
	}
	return;
}

void Function_189(int iParam0) //Position: 0xA6AA / 42666
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_DRAW_ACTOR(&iParam0, 0);
		SET_ACTOR_MAX_SPEED(&iParam0, 5);
		if (IS_ACTOR_ANIMAL(&iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(&iParam0), 0, 0);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 0);
			MEMORY_ALLOW_SHOOTING(&iParam0, 0);
		}
	}
	return;
}

bool Function_190(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA6F4 / 42740
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

void Function_191(var uParam0, var uParam1) //Position: 0xA76C / 42860
{
	return;
}

void Function_192() //Position: 0xA772 / 42866
{
	return;
}

void Function_193(int iParam0) //Position: 0xA778 / 42872
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

var Function_194(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA783 / 42883
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_186(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_186(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (bParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_195(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xA85F / 43103
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_196(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_186(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_196(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xA89D / 43165
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_186(&(Param0[iVar02]), 4);
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

bool Function_197(int[] iParam0) //Position: 0xA96C / 43372
{
	int iVar0;
	
	if (!IS_POPSET_VALID(&(Global_46972[0])))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		iParam0[iVar0] = Function_198(&(Global_46972[0]), 1, 0, 0);
		iVar0++;
	}
	return 1;
}

var Function_198(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xA9AC / 43436
{
	return Function_199(&uParam0, uParam1, &uParam2, 4294967295, &uParam3);
}

var Function_199(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA9C3 / 43459
{
	return Function_200(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_200(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0xA9E1 / 43489
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_206();
	}
	iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_205(iVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_204(&uParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_204(&uParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	iVar0 = iVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_203(iVar0) && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_205(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_203(iVar0))
				{
					Function_202();
				}
				Function_201(iVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(iVar1) != iParam3 && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_205(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar0))
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
	return iVar0;
}

void Function_201(int iParam0) //Position: 0xACDA / 44250
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

void Function_202() //Position: 0xAD8E / 44430
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

bool Function_203(int iParam0) //Position: 0xADC9 / 44489
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_204(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0xADF6 / 44534
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

bool Function_205(int iParam0) //Position: 0xAF51 / 44881
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_206() //Position: 0xAF68 / 44904
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_202();
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
	Function_202();
	return;
}

bool Function_207(int iParam0) //Position: 0xAFB4 / 44980
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_6646;
}

var Function_208(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xB02A / 45098
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
		fVar0 = (fVar0 * (0,75f + ((TO_FLOAT(Function_80(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_41(17), &Global_54076))
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

void Function_209(var uParam0, int iParam1) //Position: 0xB131 / 45361
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_210(int iParam0, int iParam1) //Position: 0xB142 / 45378
{
	int iVar0;
	
	iVar0 = (Global_26652[iParam04].f_16 % iParam1);
	return iVar0;
}

var Function_211() //Position: 0xB158 / 45400
{
	var uVar0;
	
	return &uVar0;
}

